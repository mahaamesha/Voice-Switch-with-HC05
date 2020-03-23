# Voice-Switch-with-HC05
by Ma Haamesha

Little arduino project, providing voice control to turn on and off devices. As first simulation, I use LED 5mm and active buzzer. It can be used for any AC electronic devices 220V, you need relay as switch. Use ESP8266 and provide it internet acces and you can control it everywhere as simple IoT system.

What you need?
1. Breadboard
2. Arduino Pro Mini (or whatever)
3. FTDI + USB (if you use arduino pro mini)
4. HC05 as bluetooth module
5. Jumper wire
6. LED
7. Buzzer
8. Resistor 220 Ohm

Software: Arduino IDE

// Arduino
   All device connected to digital pin

// Bluetooth
   RX   --> TX Arduino
   TX   --> RX Arduino
   +5V  --> VCC
   GND  --> GND
   
NOTE: Dont forget to unplug RX TX pin when upluading the code
