## Digitally Adjustable Phrenic Nerve (DAPhNe) Stimulator System
### Northwestern University BME Senior Capstone Design (2016-2017)
#### Center for Autonomic Medicine in Pediatrics (CAMP) at Ann & Robert H. Lurie Children's Hospital of Chicago
<br></br>
<br></br>
Information will be updated in the next few weeks.
<br></br>
<br></br> 

### Quick Start
Use the following checklists (preferably in order) 

#### Important Documents
* [**BME 390 Final Report (2017)**]() generated by the 2016-17 BME 390 team - the most recent information on the project, design process, and team progress on the hardware/software design **TO DO**  
* [**Developing DAPhNe Stimulator**]() guide included in this repository - this will be a pretty specific project guide **TO DO** 

#### Harware Checklist
* 1 x [**M24LR-DISCOVERY Transceiver**](http://www.st.com/content/st_com/en/products/evaluation-tools/product-evaluation-tools/st25-nfc-rfid-eval-boards/st25-nfc-rfid-eval-boards/m24lr-discovery.html) Board
  - Used to communicate with the NFC memory tag
  - Utilizes the ST NFC communication GUI at this point; see below for installation instructions
* 1 x [**M24LR-DISCOVERY Receiver**](http://www.st.com/content/st_com/en/products/evaluation-tools/product-evaluation-tools/st25-nfc-rfid-eval-boards/st25-nfc-rfid-eval-boards/m24lr-discovery.html) Board
  - Used for development of the NFC memory tag
  - Has not been used in the project much except to test the transceiver included in the kit
* 4 x [**ANT7-T-M24LR04E**](http://www.st.com/content/st_com/en/products/evaluation-tools/product-evaluation-tools/st25-nfc-rfid-eval-boards/st25-nfc-rfid-antennas/ant7-t-m24lr04e.html) Board
  - NFC memory tag used in wireless communication on the **IPNS_v0.1 MCU** board
  - NFC Transceiver board wirelessly reads/writes the EEPROM memory on the tag; MCU reads from the memory using I2C communication
* 2 x [**STM8L-DISCOVERY**](http://www.st.com/en/evaluation-tools/stm8l-discovery.html) Board
  - Evaluation board used for preliminary code testing of the STM8L microcontroller
  - Very useful for debugging and reference circuit design (schematics [**here**](https://github.com/AlexeyRevinski/BME390/blob/master/Reference%20Documentation/STM8L-DISCOVERY%20Schematic.pdf))
* 2 x [**ST-LINK/V2 in-circuit debugger/programmer for STM8**](http://www.st.com/en/development-tools/st-link-v2.html?s_searchtype=partnumber)
  - Debugging interface for the STM8L microcontroller
  - See instructions below for interfacing STM8L with your Mac/PC using ST-LINK/V2
* 2 x **IPNS_v0.1 STIM**
  - Custom stimulation circuit controlled by IPNS_v0.1 MCU (see assembly instructions below)
  - Was designed using the free EagleCAD software (link below)
* 2 x **IPNS_v0.1 MCU**
  - Custom MCU module featuring I2C bus to the NFC memory tag and breakout pins for IPNS_v0.1 STIM
  - Was designed using the free EagleCAD software (link below

#### Software Checklist
First, clone the project repository onto your local machine into a folder of your choice. In the cloned folder, the following software is included:
* **Microcontroller Project** for a STM8L151C6xx device (under `.../Implant STM8L Program NFC+Pulse/Project/`)
* **Standard Peripheral Library** for STM8L15x devices (under `.../Implant STM8L Program NFC+Pulse/STM8L15x_StdPeriph_Driver`); **do not move** relative to `/Project` folder or else the project will not compile. See page **TO DO** of the **Developing DAPhNe Stimulator**.

Once the project is cloned, download the following software:
* [**GitHub Desktop**](https://desktop.github.com/) - a simple git client for managing the project repository on GitHub.
  - See instructions below for configuring your GitHub GUI to track your project repository
* [**IAR Embedded Workbench for STM8**](https://www.iar.com/iar-embedded-workbench/#!?architecture=STM8) - IDE used to program the STM8L MCU used in the implantable stimulator - follow the guide in [**Developing DAPhNe Stimulator**]() for proper installation and project configuration
* [**ST-LINK/V2 Driver**](http://www.st.com/content/st_com/en/products/embedded-software/development-tool-software/stsw-link009.html) (should be automatically installed during IAR Embedded Workbench installation)
* [**ST-LINK/V2 Firware Upgrade**](http://www.st.com/content/st_com/en/products/embedded-software/development-tool-software/stsw-link007.html)(should be automatically installed during IAR Embedded Workbench installation)
* [**EagleCAD**](http://www.autodesk.com/products/eagle/free-download) - printed circuit board(PCB) CAD software. There are lots of great [**tutorials**](https://www.youtube.com/watch?v=1AXwjZoyNno) online
* [**LTSpice**](http://www.linear.com/designtools/software/#LTspice) - very user-friendly Spice simulation software
* [**ST NFC Communication GUI**]() **TO DO**
* Configure files **TO DO**

### Other Useful Software
* [**Notepad++**](https://notepad-plus-plus.org/download/v7.3.1.html) - very useful text editor for viewing/modifying various text/code files
* [**nScope**](http://www.nscope.org/) - although not required, very useful for probing the circuit during development. Northwestern students will encounter this great resource in their introductory electronics ME233/BME305 courses. 

EagleCAD:
* [Adafruit library](https://github.com/adafruit/Adafruit-Eagle-Library/zipball/master) - general components


