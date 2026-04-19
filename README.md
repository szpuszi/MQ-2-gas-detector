# MQ-2 Gas Detector V1.0
It's my first custom PCB project created as part of the Hack Club Fallout.
It is designed to detect gas leaks and potential fire hazards.
I made this because i wanted to learn how the MQ-2 sensor works with ATmega328P, practice making PCBs and create a practical safety device.
I use it by letting it sit and monitor gas levels in my room to ensure I'm in a safe environment.

<small> Note: This project consists of the PCB only (no external enclosure). The 3D source is provided via the KiCad project files and the exported STEP model. </small>

## How it works:
The heart of this project is ATmega328P microcontroller. The board is powered via 5V USB-C (Adafruit 4090) It monitors gas levels in the air using an MQ-2 sensor and indicates safety levels by 3 LEDs and a buzzer:
- 🟢 Air is safe.
- 🟡 Gas levels are elevated. (warning)
- 🔴 High gas levels, it may be unsafe to inhale them.
<small> Thresholds were calibrated based on local home testing, sensitivity can vary depending on environment and gas type. </small>

### Shopping list 🛒: 
<small> The shopping list is also available [here](Manufacturing/BOM.csv) </small>
- ATmega328P microcontroller
- MQ-2 gas sensor
- Adafruit USB Type C Breakout Board - Downstream Connection (ID:4090)
- Resistors (3x 220Ω, 1x 10KΩ)
- Ceramic capacitors (4x 100nF, 2x 22pF)
- LEDs (1x 5mm red LED, 1x 5mm yellow LED, 1x 5mm green LED)
- HC-49 Crystal 16MHz
- 2x3 Female Header (for ISP programming interface)
- 1x4 Female Header (for the MQ-2 sensor)
- 12x9.5mm Active Buzzer (RM.7.5)
- basic soldering kit (iron, solder, wire cutters)
- PCB (can order on websites like JLCPCB, files for them are in Manufacturing Files.zip folder)
- USBasp
- maybe some jumper wires or some wires (not necesarry) 

### Manufacturing Notes🏭:
<small> All files required for production are included [here](Manufacturing/Manufacturing%20Files.zip) </small>
- PCB Color: Black
- Silkscreen: White
- Copper Layers: 2

## 📖 Fallout Zine Page
![Zine Page](images/zine_page.png)

# Assembly and firmware
Refer to the schematic and PCB layout for assembly. The PCB features a well detailed silkscreen with all components values and identifiers clearly marked to ensure easy and error-free assembly. The firmware is available [here](firmware/gas_detector.ino)
# Gallery📷
<img width="1369" height="878" alt="obraz" src="https://github.com/user-attachments/assets/a792a999-cef8-431e-8a85-e26859010e1d" />
<img width="650" height="664" alt="obraz" src="https://github.com/user-attachments/assets/d8eb2982-51eb-46fd-9328-12b675dc514b" />
<img width="1375" height="560" alt="obraz" src="https://github.com/user-attachments/assets/5117901d-8781-41e4-9da2-99ff4aabde00" />
<img width="823" height="850" alt="obraz" src="https://github.com/user-attachments/assets/1e227924-e5a9-457a-88d4-b7c1b7db145c" />
<img width="737" height="769" alt="obraz" src="https://github.com/user-attachments/assets/f841c418-4184-4f2c-8afc-099da067c6ec" />
