#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <linux/i2c-dev.h>
#include <linux/rtc.h>

#define RTC_ADDRESS 0x68
int main()
{
  int file;
  struct rtc_time rtc_tm;

  // Open I2C bus
  file = open("/dev/i2c-0", O_RDWR);
  if (file < 0) 
  {
    perror("Failed to open I2C bus");
    return 1;
  }

  // Set RTC address
  if (ioctl(file, I2C_SLAVE, RTC_ADDRESS) < 0) 
  {
    perror("Failed to set I2C address");
    close(file);
    return 1;
  }

  // Set new RTC time (e.g., 9:30:00)
  rtc_tm.tm_sec = 0;
  rtc_tm.tm_min = 30;
  rtc_tm.tm_hour = 9;

  if (ioctl(file, RTC_SET_TIME, & rtc_tm) < 0) 
  {
    perror("Failed to set RTC time");
    close(file);
    return 1;
  }

  printf("RTC Time Set Successfully\n");
  close(file);
  return 0;
}
