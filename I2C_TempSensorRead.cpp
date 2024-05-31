#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <linux/i2c-dev.h>

#define SENSOR_ADDRESS 0x48

int main() 
{

  int file;
  unsigned char buffer[2];
  // Open I2C bus
  file = open("/dev/i2c-0", O_RDWR);
  if (file < 0) 
  {
    perror("Failed to open I2C bus");
    return 1;
  }

  // Set sensor address
  if (ioctl(file, I2C_SLAVE, SENSOR_ADDRESS) < 0)
  {
    perror("Failed to set I2C address");
    close(file);
    return 1;
  }

  // Read temperature data

  if (read(file, buffer, sizeof(buffer)) != sizeof(buffer)) 
  {
    perror("Failed to read temperature data");
    close(file);
    return 1;
  }

  // Convert raw data to temperature
  int temperature = ((buffer[0] << 8) | buffer[1]) >> 4;
  temperature *= 0.0625; // Conversion factor for LM75
  printf("Temperature: %d°C\n", temperature);
  close(file);
  return 0;
}
