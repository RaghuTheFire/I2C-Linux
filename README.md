# I2C
**I²C (Inter-Integrated Circuit)** is a widely used communication protocol in electronics for connecting low-speed devices like microcontrollers, sensors, and other peripherals. It was originally developed by Philips Semiconductor (now NXP Semiconductors) in 1982.

**Key Features of I²C:**
1. **Two-Wire Interface:** I²C uses two bidirectional lines, Serial Data (SDA) and Serial Clock (SCL), for communication.
2. **Master-Slave Architecture:** Multiple master and slave devices can be connected on the same bus. The master initiates communication, and slaves respond.
3. **Addressing:** Each device on the bus has a unique address. Addresses are usually 7-bit, but 10-bit addressing is also supported.
4. **Speed:** Standard modes include Standard mode (100 kbps), Fast mode (400 kbps), Fast mode plus (1 Mbps), and High-speed mode (3.4 Mbps).
5. **Simple Wiring:** Only two wires are needed, which simplifies circuit design and reduces the number of pins required on microcontrollers.

**How I²C Works:**
1. **Start Condition:** The master generates a start condition by pulling the SDA line low while keeping the SCL line high.
2. **Address Frame:** The master sends the address of the target slave device along with a read/write bit.
3. **Acknowledge Bit:** The addressed slave responds with an acknowledge bit.
4. **Data Frames:** Data is transferred in 8-bit frames, followed by an acknowledge bit from the receiver.
5. **Stop Condition:** The master generates a stop condition by releasing the SDA line while SCL is high, signaling the end of communication.

**Common Uses:**
1. **Sensors:** Connecting temperature sensors, accelerometers, and other types of sensors to microcontrollers.
2. **Real-Time Clocks (RTC):** Communicating with RTC modules to keep track of time.
3. **EEPROMs:** Reading from and writing to EEPROM memory.
4. **Display Modules:** Interfacing with character and graphic displays.

**Advantages:**
1. **Simplicity and Ease of Use:** Minimal pin usage and easy implementation.
2. **Versatility:** Suitable for a wide range of devices and applications.
3. **Cost-Effective:** Reduces wiring complexity and cost.
    
**Disadvantages:**
1. **Speed Limitation:** Not suitable for high-speed communication compared to protocols like SPI.
2. **Bus Length:** Limited to short distances, typically within the same PCB or module.

3. ![image](https://github.com/raghunihal/I2C-Linux/assets/67452178/3a996904-b0a2-4708-8375-46261c26c94a)

