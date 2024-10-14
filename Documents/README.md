# STM32U575I-EV Discovery board

## Overview

The STM32U575I-EV Evaluation board is designed as a complete demonstration and development platform for the STMicroelectronics Arm® Cortex®-M33 core-based microcontroller with Arm® TrustZone® and the Armv8-M mainline security extension, with 2 Mbyte of flash memory and 786 Kbytes of SRAM.

The full range of hardware features available on the board helps users to enhance their application development by an evaluation of all the peripherals (such as USB Type-C® connector with USB PD, motor control connector, CAN FD transceiver, USB 2.0 FS, RS-232, audio DAC, microphone ADC, dot-matrix TFT LCD, IrDA, IR LED, IR receiver, LDR, SRAM, camera interface, Octo-SPI flash memory, microSD™ card, sigma-delta modulators, smartcard slot, I2C, and EEPROM).

The daughterboard and extension connectors provide an easy way to connect a daughterboard or wrapping board for the user's specific application.

STLINK-V3E is integrated into the board, as the embedded in-circuit debugger and programmer for the STM32 MCU and USB Virtual COM port bridge.

## Getting started

- [User manual](https://www.st.com/resource/en/user_manual/um2854-evaluation-board-with-stm32u575ai-mcu-stmicroelectronics.pdf)

### ST-LINK driver installation and firmware upgrade (on Microsoft Windows)

1. Download the latest [ST-LINK driver](https://www.st.com/en/development-tools/stsw-link009.html).
2. Extract the archive and run `dpinst_amd64.exe`. Follow the displayed instructions.
3. Download the latest [ST-LINK firmware upgrade](https://www.st.com/en/development-tools/stsw-link007.html).
4. Extract the archive and run the `ST-LinkUpgrade.exe` program.
5. Connect the board to your PC using a USB cable and wait until the USB enumeration is completed.
6. In the **ST-Link Upgrade** program, press the **Device Connect** button.
7. When the ST-LINK driver is correctly installed, the current ST-LINK version is displayed.
8. Press the **Yes >>>>** button to start the firmware upgrade process.

## Technical reference

- [STM32U575AI microcontroller](https://www.st.com/en/microcontrollers-microprocessors/stm32u575ai.html)
- [STM32U575I-EV board](https://www.st.com/en/evaluation-tools/stm32u575i-ev.html)
- [User manual](https://www.st.com/resource/en/user_manual/um2854-evaluation-board-with-stm32u575ai-mcu-stmicroelectronics.pdf)
- [Data brief](https://www.st.com/resource/en/data_brief/stm32u575i-ev.pdf)
- [Schematic](https://www.st.com/resource/en/schematic_pack/mb1550-u575aiq-c02_schematic.pdf)
