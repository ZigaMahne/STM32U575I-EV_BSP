/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 14/10/2024 12:02:37
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated with a generator out of the
 *               STM32CubeMX project and its generated files (DO NOT EDIT!)
 ******************************************************************************/

#ifndef MX_DEVICE_H__
#define MX_DEVICE_H__

/* MX_Device.h version */
#define MX_DEVICE_VERSION                       0x01000000


/*------------------------------ I2C2           -----------------------------*/
#define MX_I2C2                                 1

/* Filter Settings */
#define MX_I2C2_ANF_ENABLE                      1
#define MX_I2C2_DNF                             0

/* Peripheral Clock Frequency */
#define MX_I2C2_PERIPH_CLOCK_FREQ               160000000

/* Pins */

/* I2C2_SCL */
#define MX_I2C2_SCL_Pin                         PB10
#define MX_I2C2_SCL_GPIO_Pin                    GPIO_PIN_10
#define MX_I2C2_SCL_GPIOx                       GPIOB
#define MX_I2C2_SCL_GPIO_Mode                   GPIO_MODE_AF_OD
#define MX_I2C2_SCL_GPIO_PuPd                   GPIO_NOPULL
#define MX_I2C2_SCL_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_I2C2_SCL_GPIO_AF                     GPIO_AF4_I2C2

/* I2C2_SDA */
#define MX_I2C2_SDA_Pin                         PB11
#define MX_I2C2_SDA_GPIO_Pin                    GPIO_PIN_11
#define MX_I2C2_SDA_GPIOx                       GPIOB
#define MX_I2C2_SDA_GPIO_Mode                   GPIO_MODE_AF_OD
#define MX_I2C2_SDA_GPIO_PuPd                   GPIO_NOPULL
#define MX_I2C2_SDA_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_I2C2_SDA_GPIO_AF                     GPIO_AF4_I2C2

/*------------------------------ I2C3           -----------------------------*/
#define MX_I2C3                                 1

/* Filter Settings */
#define MX_I2C3_ANF_ENABLE                      1
#define MX_I2C3_DNF                             0

/* Peripheral Clock Frequency */
#define MX_I2C3_PERIPH_CLOCK_FREQ               160000000

/* Pins */

/* I2C3_SCL */
#define MX_I2C3_SCL_Pin                         PG7
#define MX_I2C3_SCL_GPIO_Pin                    GPIO_PIN_7
#define MX_I2C3_SCL_GPIOx                       GPIOG
#define MX_I2C3_SCL_GPIO_Mode                   GPIO_MODE_AF_OD
#define MX_I2C3_SCL_GPIO_PuPd                   GPIO_NOPULL
#define MX_I2C3_SCL_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_I2C3_SCL_GPIO_AF                     GPIO_AF4_I2C3

/* I2C3_SDA */
#define MX_I2C3_SDA_Pin                         PG8
#define MX_I2C3_SDA_GPIO_Pin                    GPIO_PIN_8
#define MX_I2C3_SDA_GPIOx                       GPIOG
#define MX_I2C3_SDA_GPIO_Mode                   GPIO_MODE_AF_OD
#define MX_I2C3_SDA_GPIO_PuPd                   GPIO_NOPULL
#define MX_I2C3_SDA_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_I2C3_SDA_GPIO_AF                     GPIO_AF4_I2C3

/*------------------------------ SDMMC1         -----------------------------*/
#define MX_SDMMC1                               1

/* Mode */
#define MX_SDMMC1_MODE_SD                       1

/* Peripheral Clock Frequency */
#define MX_SDMMC1_PERIPH_CLOCK_FREQ             48000000

/* Pins */

/* SDMMC1_CK */
#define MX_SDMMC1_CK_Pin                        PC12
#define MX_SDMMC1_CK_GPIO_Pin                   GPIO_PIN_12
#define MX_SDMMC1_CK_GPIOx                      GPIOC
#define MX_SDMMC1_CK_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SDMMC1_CK_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_CK_GPIO_Speed                 GPIO_SPEED_FREQ_HIGH
#define MX_SDMMC1_CK_GPIO_AF                    GPIO_AF12_SDMMC1

/* SDMMC1_CMD */
#define MX_SDMMC1_CMD_Pin                       PD2
#define MX_SDMMC1_CMD_GPIO_Pin                  GPIO_PIN_2
#define MX_SDMMC1_CMD_GPIOx                     GPIOD
#define MX_SDMMC1_CMD_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SDMMC1_CMD_GPIO_PuPd                 GPIO_NOPULL
#define MX_SDMMC1_CMD_GPIO_Speed                GPIO_SPEED_FREQ_HIGH
#define MX_SDMMC1_CMD_GPIO_AF                   GPIO_AF12_SDMMC1

/* SDMMC1_D0 */
#define MX_SDMMC1_D0_Pin                        PC8
#define MX_SDMMC1_D0_GPIO_Pin                   GPIO_PIN_8
#define MX_SDMMC1_D0_GPIOx                      GPIOC
#define MX_SDMMC1_D0_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SDMMC1_D0_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_D0_GPIO_Speed                 GPIO_SPEED_FREQ_HIGH
#define MX_SDMMC1_D0_GPIO_AF                    GPIO_AF12_SDMMC1

/* SDMMC1_D1 */
#define MX_SDMMC1_D1_Pin                        PC9
#define MX_SDMMC1_D1_GPIO_Pin                   GPIO_PIN_9
#define MX_SDMMC1_D1_GPIOx                      GPIOC
#define MX_SDMMC1_D1_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SDMMC1_D1_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_D1_GPIO_Speed                 GPIO_SPEED_FREQ_HIGH
#define MX_SDMMC1_D1_GPIO_AF                    GPIO_AF12_SDMMC1

/* SDMMC1_D2 */
#define MX_SDMMC1_D2_Pin                        PC10
#define MX_SDMMC1_D2_GPIO_Pin                   GPIO_PIN_10
#define MX_SDMMC1_D2_GPIOx                      GPIOC
#define MX_SDMMC1_D2_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SDMMC1_D2_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_D2_GPIO_Speed                 GPIO_SPEED_FREQ_HIGH
#define MX_SDMMC1_D2_GPIO_AF                    GPIO_AF12_SDMMC1

/* SDMMC1_D3 */
#define MX_SDMMC1_D3_Pin                        PC11
#define MX_SDMMC1_D3_GPIO_Pin                   GPIO_PIN_11
#define MX_SDMMC1_D3_GPIOx                      GPIOC
#define MX_SDMMC1_D3_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SDMMC1_D3_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_D3_GPIO_Speed                 GPIO_SPEED_FREQ_HIGH
#define MX_SDMMC1_D3_GPIO_AF                    GPIO_AF12_SDMMC1

/*------------------------------ USART1         -----------------------------*/
#define MX_USART1                               1

/* Virtual mode */
#define MX_USART1_VM                            VM_ASYNC
#define MX_USART1_VM_ASYNC                      1

/* Pins */

/* USART1_RX */
#define MX_USART1_RX_Pin                        PA10
#define MX_USART1_RX_GPIO_Pin                   GPIO_PIN_10
#define MX_USART1_RX_GPIOx                      GPIOA
#define MX_USART1_RX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART1_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART1_RX_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_USART1_RX_GPIO_AF                    GPIO_AF7_USART1

/* USART1_TX */
#define MX_USART1_TX_Pin                        PA9
#define MX_USART1_TX_GPIO_Pin                   GPIO_PIN_9
#define MX_USART1_TX_GPIOx                      GPIOA
#define MX_USART1_TX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART1_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART1_TX_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_USART1_TX_GPIO_AF                    GPIO_AF7_USART1

/*------------------------------ USART3         -----------------------------*/
#define MX_USART3                               1

/* Virtual mode */
#define MX_USART3_VM                            VM_SMARTCARD
#define MX_USART3_VM_SMARTCARD                  1

/* Pins */

/* USART3_CK */
#define MX_USART3_CK_Pin                        PB12
#define MX_USART3_CK_GPIO_Pin                   GPIO_PIN_12
#define MX_USART3_CK_GPIOx                      GPIOB
#define MX_USART3_CK_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART3_CK_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART3_CK_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_USART3_CK_GPIO_AF                    GPIO_AF7_USART3

/* USART3_TX */
#define MX_USART3_TX_Pin                        PC4
#define MX_USART3_TX_GPIO_Pin                   GPIO_PIN_4
#define MX_USART3_TX_GPIOx                      GPIOC
#define MX_USART3_TX_GPIO_Mode                  GPIO_MODE_AF_OD
#define MX_USART3_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART3_TX_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_USART3_TX_GPIO_AF                    GPIO_AF7_USART3

/*------------------------------ USB_OTG_FS     -----------------------------*/
#define MX_USB_OTG_FS                           1

/* Handle */
#define MX_USB_OTG_FS_HANDLE                    hpcd_USB_OTG_FS

/* Virtual mode */
#define MX_USB_OTG_FS_VM                        Device_Only
#define MX_USB_OTG_FS_Device_Only               1

/* Pins */

/* USB_OTG_FS_DM */
#define MX_USB_OTG_FS_DM_Pin                    PA11
#define MX_USB_OTG_FS_DM_GPIO_Pin               GPIO_PIN_11
#define MX_USB_OTG_FS_DM_GPIOx                  GPIOA
#define MX_USB_OTG_FS_DM_GPIO_Mode              GPIO_MODE_AF_PP
#define MX_USB_OTG_FS_DM_GPIO_PuPd              GPIO_NOPULL
#define MX_USB_OTG_FS_DM_GPIO_Speed             GPIO_SPEED_FREQ_LOW
#define MX_USB_OTG_FS_DM_GPIO_AF                GPIO_AF10_USB

/* USB_OTG_FS_DP */
#define MX_USB_OTG_FS_DP_Pin                    PA12
#define MX_USB_OTG_FS_DP_GPIO_Pin               GPIO_PIN_12
#define MX_USB_OTG_FS_DP_GPIOx                  GPIOA
#define MX_USB_OTG_FS_DP_GPIO_Mode              GPIO_MODE_AF_PP
#define MX_USB_OTG_FS_DP_GPIO_PuPd              GPIO_NOPULL
#define MX_USB_OTG_FS_DP_GPIO_Speed             GPIO_SPEED_FREQ_LOW
#define MX_USB_OTG_FS_DP_GPIO_AF                GPIO_AF10_USB

#endif  /* MX_DEVICE_H__ */
