/* SoC level DTS fixup file */

#define CONFIG_NUM_IRQ_PRIO_BITS	ARM_V7M_NVIC_E000E100_ARM_NUM_IRQ_PRIORITY_BITS

#define CONFIG_ADC_0_IRQ		NORDIC_NRF_SAADC_40007000_IRQ_0
#define CONFIG_ADC_0_IRQ_PRI		NORDIC_NRF_SAADC_40007000_IRQ_0_PRIORITY
#define CONFIG_ADC_0_NAME		NORDIC_NRF_SAADC_40007000_LABEL

#if defined(NORDIC_NRF_UARTE_40002000_BASE_ADDRESS)
#define CONFIG_UART_0_BASE		NORDIC_NRF_UARTE_40002000_BASE_ADDRESS
#define CONFIG_UART_0_IRQ_PRI		NORDIC_NRF_UARTE_40002000_IRQ_0_PRIORITY
#define CONFIG_UART_0_IRQ_NUM		NORDIC_NRF_UARTE_40002000_IRQ_0
#define CONFIG_UART_0_BAUD_RATE		NORDIC_NRF_UARTE_40002000_CURRENT_SPEED
#define CONFIG_UART_0_NAME		NORDIC_NRF_UARTE_40002000_LABEL
#define CONFIG_UART_0_TX_PIN		NORDIC_NRF_UARTE_40002000_TX_PIN
#define CONFIG_UART_0_RX_PIN		NORDIC_NRF_UARTE_40002000_RX_PIN
  #if defined(NORDIC_NRF_UARTE_40002000_RTS_PIN)
  #define CONFIG_UART_0_RTS_PIN		NORDIC_NRF_UARTE_40002000_RTS_PIN
  #endif
  #if defined(NORDIC_NRF_UARTE_40002000_CTS_PIN)
  #define CONFIG_UART_0_CTS_PIN		NORDIC_NRF_UARTE_40002000_CTS_PIN
  #endif
#else
#define CONFIG_UART_0_BASE		NORDIC_NRF_UART_40002000_BASE_ADDRESS
#define CONFIG_UART_0_IRQ_PRI		NORDIC_NRF_UART_40002000_IRQ_0_PRIORITY
#define CONFIG_UART_0_IRQ_NUM		NORDIC_NRF_UART_40002000_IRQ_0
#define CONFIG_UART_0_BAUD_RATE		NORDIC_NRF_UART_40002000_CURRENT_SPEED
#define CONFIG_UART_0_NAME		NORDIC_NRF_UART_40002000_LABEL
  #if defined(NORDIC_NRF_UART_40002000_TX_PIN)
  #define CONFIG_UART_0_TX_PIN		NORDIC_NRF_UART_40002000_TX_PIN
  #else
  #define CONFIG_UART_0_TX_PIN		CONFIG_UART_0_NRF_TX_PIN
  #endif
  #if defined(NORDIC_NRF_UART_40002000_RX_PIN)
  #define CONFIG_UART_0_RX_PIN		NORDIC_NRF_UART_40002000_RX_PIN
  #else
  #define CONFIG_UART_0_RX_PIN		CONFIG_UART_0_NRF_RX_PIN
  #endif
  #if defined(NORDIC_NRF_UART_40002000_RTS_PIN)
  #define CONFIG_UART_0_RTS_PIN		NORDIC_NRF_UART_40002000_RTS_PIN
  #endif
  #if defined(NORDIC_NRF_UART_40002000_RTS_PIN)
  #define CONFIG_UART_0_CTS_PIN		NORDIC_NRF_UART_40002000_CTS_PIN
  #endif
#endif

#define CONFIG_UART_1_BASE		NORDIC_NRF_UARTE_40028000_BASE_ADDRESS
#define CONFIG_UART_1_IRQ_PRI		NORDIC_NRF_UARTE_40028000_IRQ_0_PRIORITY
#define CONFIG_UART_1_IRQ_NUM		NORDIC_NRF_UARTE_40028000_IRQ_0
#define CONFIG_UART_1_BAUD_RATE		NORDIC_NRF_UARTE_40028000_CURRENT_SPEED
#define CONFIG_UART_1_NAME		NORDIC_NRF_UARTE_40028000_LABEL
#define CONFIG_UART_1_TX_PIN		NORDIC_NRF_UARTE_40028000_TX_PIN
#define CONFIG_UART_1_RX_PIN		NORDIC_NRF_UARTE_40028000_RX_PIN
#if defined(NORDIC_NRF_UARTE_40028000_RTS_PIN)
#define CONFIG_UART_1_RTS_PIN		NORDIC_NRF_UARTE_40028000_RTS_PIN
#endif
#if defined(NORDIC_NRF_UARTE_40028000_CTS_PIN)
#define CONFIG_UART_1_CTS_PIN		NORDIC_NRF_UARTE_40028000_CTS_PIN
#endif

#define FLASH_DEV_NAME			NRF_NRF52_FLASH_CONTROLLER_4001E000_LABEL

#define CONFIG_GPIO_P0_DEV_NAME		NORDIC_NRF_GPIO_50000000_LABEL
#if CONFIG_HAS_HW_NRF_GPIO1
#define CONFIG_GPIO_P1_DEV_NAME		NORDIC_NRF_GPIO_50000300_LABEL
#endif
#define CONFIG_GPIOTE_IRQ_PRI		NORDIC_NRF_GPIOTE_40006000_IRQ_0_PRIORITY
#define CONFIG_GPIOTE_IRQ		NORDIC_NRF_GPIOTE_40006000_IRQ_0

#define CONFIG_I2C_0_BASE_ADDR		NORDIC_NRF_I2C_40003000_BASE_ADDRESS
#define CONFIG_I2C_0_NAME		NORDIC_NRF_I2C_40003000_LABEL
#define CONFIG_I2C_0_BITRATE		NORDIC_NRF_I2C_40003000_CLOCK_FREQUENCY
#define CONFIG_I2C_0_IRQ_PRI		NORDIC_NRF_I2C_40003000_IRQ_0_PRIORITY
#define CONFIG_I2C_0_IRQ		NORDIC_NRF_I2C_40003000_IRQ_0
#define CONFIG_I2C_0_SDA_PIN		NORDIC_NRF_I2C_40003000_SDA_PIN
#define CONFIG_I2C_0_SCL_PIN		NORDIC_NRF_I2C_40003000_SCL_PIN

#define CONFIG_I2C_1_BASE_ADDR		NORDIC_NRF_I2C_40004000_BASE_ADDRESS
#define CONFIG_I2C_1_NAME		NORDIC_NRF_I2C_40004000_LABEL
#define CONFIG_I2C_1_BITRATE		NORDIC_NRF_I2C_40004000_CLOCK_FREQUENCY
#define CONFIG_I2C_1_IRQ_PRI		NORDIC_NRF_I2C_40004000_IRQ_0_PRIORITY
#define CONFIG_I2C_1_IRQ		NORDIC_NRF_I2C_40004000_IRQ_0
#define CONFIG_I2C_1_SDA_PIN		NORDIC_NRF_I2C_40004000_SDA_PIN
#define CONFIG_I2C_1_SCL_PIN		NORDIC_NRF_I2C_40004000_SCL_PIN

#define CONFIG_SPI_0_BASE_ADDRESS       NORDIC_NRF_SPI_40003000_BASE_ADDRESS
#define CONFIG_SPI_0_NAME               NORDIC_NRF_SPI_40003000_LABEL
#define CONFIG_SPI_0_IRQ_PRI            NORDIC_NRF_SPI_40003000_IRQ_0_PRIORITY
#define CONFIG_SPI_0_IRQ                NORDIC_NRF_SPI_40003000_IRQ_0
#define CONFIG_SPI_0_NRF_SCK_PIN	NORDIC_NRF_SPI_40003000_SCK_PIN
#define CONFIG_SPI_0_NRF_MOSI_PIN	NORDIC_NRF_SPI_40003000_MOSI_PIN
#define CONFIG_SPI_0_NRF_MISO_PIN	NORDIC_NRF_SPI_40003000_MISO_PIN
#define CONFIG_SPI_0_NRF_CSN_PIN	NORDIC_NRF_SPI_40003000_CSN_PIN

#define CONFIG_SPI_1_BASE_ADDRESS       NORDIC_NRF_SPI_40004000_BASE_ADDRESS
#define CONFIG_SPI_1_NAME               NORDIC_NRF_SPI_40004000_LABEL
#define CONFIG_SPI_1_IRQ_PRI            NORDIC_NRF_SPI_40004000_IRQ_0_PRIORITY
#define CONFIG_SPI_1_IRQ                NORDIC_NRF_SPI_40004000_IRQ_0
#define CONFIG_SPI_1_NRF_SCK_PIN	NORDIC_NRF_SPI_40004000_SCK_PIN
#define CONFIG_SPI_1_NRF_MOSI_PIN	NORDIC_NRF_SPI_40004000_MOSI_PIN
#define CONFIG_SPI_1_NRF_MISO_PIN	NORDIC_NRF_SPI_40004000_MISO_PIN
#define CONFIG_SPI_1_NRF_CSN_PIN	NORDIC_NRF_SPI_40004000_CSN_PIN

#define CONFIG_SPI_2_BASE_ADDRESS       NORDIC_NRF_SPI_40023000_BASE_ADDRESS
#define CONFIG_SPI_2_NAME               NORDIC_NRF_SPI_40023000_LABEL
#define CONFIG_SPI_2_IRQ_PRI            NORDIC_NRF_SPI_40023000_IRQ_0_PRIORITY
#define CONFIG_SPI_2_IRQ                NORDIC_NRF_SPI_40023000_IRQ_0
#define CONFIG_SPI_2_NRF_SCK_PIN	NORDIC_NRF_SPI_40023000_SCK_PIN
#define CONFIG_SPI_2_NRF_MOSI_PIN	NORDIC_NRF_SPI_40023000_MOSI_PIN
#define CONFIG_SPI_2_NRF_MISO_PIN	NORDIC_NRF_SPI_40023000_MISO_PIN
#define CONFIG_SPI_2_NRF_CSN_PIN	NORDIC_NRF_SPI_40023000_CSN_PIN

#define CONFIG_SPI_3_BASE_ADDRESS       NORDIC_NRF_SPI_4002B000_BASE_ADDRESS
#define CONFIG_SPI_3_NAME               NORDIC_NRF_SPI_4002B000_LABEL
#define CONFIG_SPI_3_IRQ_PRI            NORDIC_NRF_SPI_4002B000_IRQ_0_PRIORITY
#define CONFIG_SPI_3_IRQ                NORDIC_NRF_SPI_4002B000_IRQ_0
#define CONFIG_SPI_3_NRF_SCK_PIN	NORDIC_NRF_SPI_4002B000_SCK_PIN
#define CONFIG_SPI_3_NRF_MOSI_PIN	NORDIC_NRF_SPI_4002B000_MOSI_PIN
#define CONFIG_SPI_3_NRF_MISO_PIN	NORDIC_NRF_SPI_4002B000_MISO_PIN
#define CONFIG_SPI_3_NRF_CSN_PIN	NORDIC_NRF_SPI_4002B000_CSN_PIN

#define CONFIG_USBD_NRF5_IRQ		NORDIC_NRF_USBD_40027000_IRQ_USBD
#define CONFIG_USBD_NRF5_IRQ_PRI	NORDIC_NRF_USBD_40027000_IRQ_USBD_PRIORITY
#define CONFIG_USBD_NRF5_NUM_BIDIR_EP	NORDIC_NRF_USBD_40027000_NUM_BIDIR_ENDPOINTS
#define CONFIG_USBD_NRF5_NUM_IN_EP	NORDIC_NRF_USBD_40027000_NUM_IN_ENDPOINTS
#define CONFIG_USBD_NRF5_NUM_OUT_EP	NORDIC_NRF_USBD_40027000_NUM_OUT_ENDPOINTS
#define CONFIG_USBD_NRF5_NUM_ISOIN_EP	NORDIC_NRF_USBD_40027000_NUM_ISOIN_ENDPOINTS
#define CONFIG_USBD_NRF5_NUM_ISOOUT_EP	NORDIC_NRF_USBD_40027000_NUM_ISOOUT_ENDPOINTS
#define CONFIG_USBD_NRF5_NAME		NORDIC_NRF_USBD_40027000_LABEL

#define CONFIG_WDT_0_NAME		NORDIC_NRF_WATCHDOG_40010000_LABEL
#define CONFIG_WDT_NRF_IRQ		NORDIC_NRF_WATCHDOG_40010000_IRQ_WDT
#define CONFIG_WDT_NRF_IRQ_PRI		NORDIC_NRF_WATCHDOG_40010000_IRQ_WDT_PRIORITY

#if defined(NORDIC_NRF_CC310_5002A000_BASE_ADDRESS)
#define CONFIG_CC310_CTL_BASE_ADDR	NORDIC_NRF_CC310_5002A000_BASE_ADDRESS
#define CONFIG_CC310_CTL_NAME		NORDIC_NRF_CC310_5002A000_LABEL
#define CONFIG_CC310_BASE_ADDR		ARM_CRYPTOCELL_310_5002B000_BASE_ADDRESS
#define CONFIG_CC310_NAME		ARM_CRYPTOCELL_310_5002B000_LABEL
#define CONFIG_CC310_IRQ		ARM_CRYPTOCELL_310_5002B000_IRQ_0
#define CONFIG_CC310_IRQ_PRI		ARM_CRYPTOCELL_310_5002B000_IRQ_0_PRIORITY
#endif

#define CONFIG_WNCM14A2A_UART_DRV_NAME			NORDIC_NRF_UARTE_40028000_WNCM14A2A_BUS_NAME
#define CONFIG_WNCM14A2A_GPIO_MDM_BOOT_MODE_SEL_NAME	NORDIC_NRF_UARTE_40028000_WNCM14A2A_MDM_BOOT_MODE_SEL_GPIOS_CONTROLLER
#define CONFIG_WNCM14A2A_GPIO_MDM_BOOT_MODE_SEL_PIN	NORDIC_NRF_UARTE_40028000_WNCM14A2A_MDM_BOOT_MODE_SEL_GPIOS_PIN
#define CONFIG_WNCM14A2A_GPIO_MDM_POWER_NAME		NORDIC_NRF_UARTE_40028000_WNCM14A2A_MDM_POWER_GPIOS_CONTROLLER
#define CONFIG_WNCM14A2A_GPIO_MDM_POWER_PIN		NORDIC_NRF_UARTE_40028000_WNCM14A2A_MDM_POWER_GPIOS_PIN
#define CONFIG_WNCM14A2A_GPIO_MDM_KEEP_AWAKE_NAME	NORDIC_NRF_UARTE_40028000_WNCM14A2A_MDM_KEEP_AWAKE_GPIOS_CONTROLLER
#define CONFIG_WNCM14A2A_GPIO_MDM_KEEP_AWAKE_PIN	NORDIC_NRF_UARTE_40028000_WNCM14A2A_MDM_KEEP_AWAKE_GPIOS_PIN
#define CONFIG_WNCM14A2A_GPIO_MDM_RESET_NAME		NORDIC_NRF_UARTE_40028000_WNCM14A2A_MDM_RESET_GPIOS_CONTROLLER
#define CONFIG_WNCM14A2A_GPIO_MDM_RESET_PIN		NORDIC_NRF_UARTE_40028000_WNCM14A2A_MDM_RESET_GPIOS_PIN
#define CONFIG_WNCM14A2A_GPIO_MDM_SHLD_TRANS_ENA_NAME	NORDIC_NRF_UARTE_40028000_WNCM14A2A_MDM_SHLD_TRANS_ENA_GPIOS_CONTROLLER
#define CONFIG_WNCM14A2A_GPIO_MDM_SHLD_TRANS_ENA_PIN	NORDIC_NRF_UARTE_40028000_WNCM14A2A_MDM_SHLD_TRANS_ENA_GPIOS_PIN
#ifdef NORDIC_NRF_UARTE_40028000_WNCM14A2A_MDM_SEND_OK_GPIOS_PIN
#define CONFIG_WNCM14A2A_GPIO_MDM_SEND_OK_NAME		NORDIC_NRF_UARTE_40028000_WNCM14A2A_MDM_SEND_OK_GPIOS_CONTROLLER
#define CONFIG_WNCM14A2A_GPIO_MDM_SEND_OK_PIN		NORDIC_NRF_UARTE_40028000_WNCM14A2A_MDM_SEND_OK_GPIOS_PIN
#endif

/* End of SoC Level DTS fixup file */
