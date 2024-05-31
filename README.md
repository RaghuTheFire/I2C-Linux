# I2C
**I²C (Inter-Integrated Circuit)** is a widely used communication protocol in electronics for connecting low-speed devices like microcontrollers, sensors, and other peripherals. It was originally developed by Philips Semiconductor (now NXP Semiconductors) in 1982.
Key Features of I²C:

1. **Two-Wire Interface:** I²C uses two bidirectional lines, Serial Data (SDA) and Serial Clock (SCL), for communication.
2. **Master-Slave Architecture:** Multiple master and slave devices can be connected on the same bus. The master initiates communication, and slaves respond.
3. **Addressing:** Each device on the bus has a unique address. Addresses are usually 7-bit, but 10-bit addressing is also supported.
4. **Speed:** Standard modes include Standard mode (100 kbps), Fast mode (400 kbps), Fast mode plus (1 Mbps), and High-speed mode (3.4 Mbps).
5. **Simple Wiring:** Only two wires are needed, which simplifies circuit design and reduces the number of pins required on microcontrollers.
