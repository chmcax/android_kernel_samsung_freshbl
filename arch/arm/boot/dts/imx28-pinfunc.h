/*
 * Header providing constants for i.MX28 pinctrl bindings.
 *
 * Copyright (C) 2013 Lothar Waßmann <LW@KARO-electronics.de>
 *
 * The code contained herein is licensed under the GNU General Public
 * License. You may obtain a copy of the GNU General Public License
 * Version 2 at the following locations:
 *
 * http://www.opensource.org/licenses/gpl-license.html
 * http://www.gnu.org/copyleft/gpl.html
 */

#ifndef __DT_BINDINGS_MX28_PINCTRL_H__
#define __DT_BINDINGS_MX28_PINCTRL_H__

#include "mxs-pinfunc.h"

#define MX28_PAD_GPMI_D00__GPMI_D0			0x0000
#define MX28_PAD_GPMI_D01__GPMI_D1			0x0010
#define MX28_PAD_GPMI_D02__GPMI_D2			0x0020
#define MX28_PAD_GPMI_D03__GPMI_D3			0x0030
#define MX28_PAD_GPMI_D04__GPMI_D4			0x0040
#define MX28_PAD_GPMI_D05__GPMI_D5			0x0050
#define MX28_PAD_GPMI_D06__GPMI_D6			0x0060
#define MX28_PAD_GPMI_D07__GPMI_D7			0x0070
#define MX28_PAD_GPMI_CE0N__GPMI_CE0N			0x0100
#define MX28_PAD_GPMI_CE1N__GPMI_CE1N			0x0110
#define MX28_PAD_GPMI_CE2N__GPMI_CE2N			0x0120
#define MX28_PAD_GPMI_CE3N__GPMI_CE3N			0x0130
#define MX28_PAD_GPMI_RDY0__GPMI_READY0			0x0140
#define MX28_PAD_GPMI_RDY1__GPMI_READY1			0x0150
#define MX28_PAD_GPMI_RDY2__GPMI_READY2			0x0160
#define MX28_PAD_GPMI_RDY3__GPMI_READY3			0x0170
#define MX28_PAD_GPMI_RDN__GPMI_RDN			0x0180
#define MX28_PAD_GPMI_WRN__GPMI_WRN			0x0190
#define MX28_PAD_GPMI_ALE__GPMI_ALE			0x01a0
#define MX28_PAD_GPMI_CLE__GPMI_CLE			0x01b0
#define MX28_PAD_GPMI_RESETN__GPMI_RESETN		0x01c0
#define MX28_PAD_LCD_D00__LCD_D0			0x1000
#define MX28_PAD_LCD_D01__LCD_D1			0x1010
#define MX28_PAD_LCD_D02__LCD_D2			0x1020
#define MX28_PAD_LCD_D03__LCD_D3			0x1030
#define MX28_PAD_LCD_D04__LCD_D4			0x1040
#define MX28_PAD_LCD_D05__LCD_D5			0x1050
#define MX28_PAD_LCD_D06__LCD_D6			0x1060
#define MX28_PAD_LCD_D07__LCD_D7			0x1070
#define MX28_PAD_LCD_D08__LCD_D8			0x1080
#define MX28_PAD_LCD_D09__LCD_D9			0x1090
#define MX28_PAD_LCD_D10__LCD_D10			0x10a0
#define MX28_PAD_LCD_D11__LCD_D11			0x10b0
#define MX28_PAD_LCD_D12__LCD_D12			0x10c0
#define MX28_PAD_LCD_D13__LCD_D13			0x10d0
#define MX28_PAD_LCD_D14__LCD_D14			0x10e0
#define MX28_PAD_LCD_D15__LCD_D15			0x10f0
#define MX28_PAD_LCD_D16__LCD_D16			0x1100
#define MX28_PAD_LCD_D17__LCD_D17			0x1110
#define MX28_PAD_LCD_D18__LCD_D18			0x1120
#define MX28_PAD_LCD_D19__LCD_D19			0x1130
#define MX28_PAD_LCD_D20__LCD_D20			0x1140
#define MX28_PAD_LCD_D21__LCD_D21			0x1150
#define MX28_PAD_LCD_D22__LCD_D22			0x1160
#define MX28_PAD_LCD_D23__LCD_D23			0x1170
#define MX28_PAD_LCD_RD_E__LCD_RD_E			0x1180
#define MX28_PAD_LCD_WR_RWN__LCD_WR_RWN			0x1190
#define MX28_PAD_LCD_RS__LCD_RS				0x11a0
#define MX28_PAD_LCD_CS__LCD_CS				0x11b0
#define MX28_PAD_LCD_VSYNC__LCD_VSYNC			0x11c0
#define MX28_PAD_LCD_HSYNC__LCD_HSYNC			0x11d0
#define MX28_PAD_LCD_DOTCLK__LCD_DOTCLK			0x11e0
#define MX28_PAD_LCD_ENABLE__LCD_ENABLE			0x11f0
#define MX28_PAD_SSP0_DATA0__SSP0_D0			0x2000
#define MX28_PAD_SSP0_DATA1__SSP0_D1			0x2010
#define MX28_PAD_SSP0_DATA2__SSP0_D2			0x2020
#define MX28_PAD_SSP0_DATA3__SSP0_D3			0x2030
#define MX28_PAD_SSP0_DATA4__SSP0_D4			0x2040
#define MX28_PAD_SSP0_DATA5__SSP0_D5			0x2050
#define MX28_PAD_SSP0_DATA6__SSP0_D6			0x2060
#define MX28_PAD_SSP0_DATA7__SSP0_D7			0x2070
#define MX28_PAD_SSP0_CMD__SSP0_CMD			0x2080
#define MX28_PAD_SSP0_DETECT__SSP0_CARD_DETECT		0x2090
#define MX28_PAD_SSP0_SCK__SSP0_SCK			0x20a0
#define MX28_PAD_SSP1_SCK__SSP1_SCK			0x20c0
#define MX28_PAD_SSP1_CMD__SSP1_CMD			0x20d0
#define MX28_PAD_SSP1_DATA0__SSP1_D0			0x20e0
#define MX28_PAD_SSP1_DATA3__SSP1_D3			0x20f0
#define MX28_PAD_SSP2_SCK__SSP2_SCK			0x2100
#define MX28_PAD_SSP2_MOSI__SSP2_CMD			0x2110
#define MX28_PAD_SSP2_MISO__SSP2_D0			0x2120
#define MX28_PAD_SSP2_SS0__SSP2_D3			0x2130
#define MX28_PAD_SSP2_SS1__SSP2_D4			0x2140
#define MX28_PAD_SSP2_SS2__SSP2_D5			0x2150
#define MX28_PAD_SSP3_SCK__SSP3_SCK			0x2180
#define MX28_PAD_SSP3_MOSI__SSP3_CMD			0x2190
#define MX28_PAD_SSP3_MISO__SSP3_D0			0x21a0
#define MX28_PAD_SSP3_SS0__SSP3_D3			0x21b0
#define MX28_PAD_AUART0_RX__AUART0_RX			0x3000
#define MX28_PAD_AUART0_TX__AUART0_TX			0x3010
#define MX28_PAD_AUART0_CTS__AUART0_CTS			0x3020
#define MX28_PAD_AUART0_RTS__AUART0_RTS			0x3030
#define MX28_PAD_AUART1_RX__AUART1_RX			0x3040
#define MX28_PAD_AUART1_TX__AUART1_TX			0x3050
#define MX28_PAD_AUART1_CTS__AUART1_CTS			0x3060
#define MX28_PAD_AUART1_RTS__AUART1_RTS			0x3070
#define MX28_PAD_AUART2_RX__AUART2_RX			0x3080
#define MX28_PAD_AUART2_TX__AUART2_TX			0x3090
#define MX28_PAD_AUART2_CTS__AUART2_CTS			0x30a0
#define MX28_PAD_AUART2_RTS__AUART2_RTS			0x30b0
#define MX28_PAD_AUART3_RX__AUART3_RX			0x30c0
#define MX28_PAD_AUART3_TX__AUART3_TX			0x30d0
#define MX28_PAD_AUART3_CTS__AUART3_CTS			0x30e0
#define MX28_PAD_AUART3_RTS__AUART3_RTS			0x30f0
#define MX28_PAD_PWM0__PWM_0				0x3100
#define MX28_PAD_PWM1__PWM_1				0x3110
#define MX28_PAD_PWM2__PWM_2				0x3120
#define MX28_PAD_SAIF0_MCLK__SAIF0_MCLK			0x3140
#define MX28_PAD_SAIF0_LRCLK__SAIF0_LRCLK		0x3150
#define MX28_PAD_SAIF0_BITCLK__SAIF0_BITCLK		0x3160
#define MX28_PAD_SAIF0_SDATA0__SAIF0_SDATA0		0x3170
#define MX28_PAD_I2C0_SCL__I2C0_SCL			0x3180
#define MX28_PAD_I2C0_SDA__I2C0_SDA			0x3190
#define MX28_PAD_SAIF1_SDATA0__SAIF1_SDATA0		0x31a0
#define MX28_PAD_SPDIF__SPDIF_TX			0x31b0
#define MX28_PAD_PWM3__PWM_3				0x31c0
#define MX28_PAD_PWM4__PWM_4				0x31d0
#define MX28_PAD_LCD_RESET__LCD_RESET			0x31e0
#define MX28_PAD_ENET0_MDC__ENET0_MDC			0x4000
#define MX28_PAD_ENET0_MDIO__ENET0_MDIO			0x4010
#define MX28_PAD_ENET0_RX_EN__ENET0_RX_EN		0x4020
#define MX28_PAD_ENET0_RXD0__ENET0_RXD0			0x4030
#define MX28_PAD_ENET0_RXD1__ENET0_RXD1			0x4040
#define MX28_PAD_ENET0_TX_CLK__ENET0_TX_CLK		0x4050
#define MX28_PAD_ENET0_TX_EN__ENET0_TX_EN		0x4060
#define MX28_PAD_ENET0_TXD0__ENET0_TXD0			0x4070
#define MX28_PAD_ENET0_TXD1__ENET0_TXD1			0x4080
#define MX28_PAD_ENET0_RXD2__ENET0_RXD2			0x4090
#define MX28_PAD_ENET0_RXD3__ENET0_RXD3			0x40a0
#define MX28_PAD_ENET0_TXD2__ENET0_TXD2			0x40b0
#define MX28_PAD_ENET0_TXD3__ENET0_TXD3			0x40c0
#define MX28_PAD_ENET0_RX_CLK__ENET0_RX_CLK		0x40d0
#define MX28_PAD_ENET0_COL__ENET0_COL			0x40e0
#define MX28_PAD_ENET0_CRS__ENET0_CRS			0x40f0
#define MX28_PAD_ENET_CLK__CLKCTRL_ENET			0x4100
#define MX28_PAD_JTAG_RTCK__JTAG_RTCK			0x4140
#define MX28_PAD_EMI_D00__EMI_DATA0			0x5000
#define MX28_PAD_EMI_D01__EMI_DATA1			0x5010
#define MX28_PAD_EMI_D02__EMI_DATA2			0x5020
#define MX28_PAD_EMI_D03__EMI_DATA3			0x5030
#define MX28_PAD_EMI_D04__EMI_DATA4			0x5040
#define MX28_PAD_EMI_D05__EMI_DATA5			0x5050
#define MX28_PAD_EMI_D06__EMI_DATA6			0x5060
#define MX28_PAD_EMI_D07__EMI_DATA7			0x5070
#define MX28_PAD_EMI_D08__EMI_DATA8			0x5080
#define MX28_PAD_EMI_D09__EMI_DATA9			0x5090
#define MX28_PAD_EMI_D10__EMI_DATA10			0x50a0
#define MX28_PAD_EMI_D11__EMI_DATA11			0x50b0
#define MX28_PAD_EMI_D12__EMI_DATA12			0x50c0
#define MX28_PAD_EMI_D13__EMI_DATA13			0x50d0
#define MX28_PAD_EMI_D14__EMI_DATA14			0x50e0
#define MX28_PAD_EMI_D15__EMI_DATA15			0x50f0
#define MX28_PAD_EMI_ODT0__EMI_ODT0			0x5100
#define MX28_PAD_EMI_DQM0__EMI_DQM0			0x5110
#define MX28_PAD_EMI_ODT1__EMI_ODT1			0x5120
#define MX28_PAD_EMI_DQM1__EMI_DQM1			0x5130
#define MX28_PAD_EMI_DDR_OPEN_FB__EMI_DDR_OPEN_FEEDBACK	0x5140
#define MX28_PAD_EMI_CLK__EMI_CLK			0x5150
#define MX28_PAD_EMI_DQS0__EMI_DQS0			0x5160
#define MX28_PAD_EMI_DQS1__EMI_DQS1			0x5170
#define MX28_PAD_EMI_DDR_OPEN__EMI_DDR_OPEN		0x51a0
#define MX28_PAD_EMI_A00__EMI_ADDR0			0x6000
#define MX28_PAD_EMI_A01__EMI_ADDR1			0x6010
#define MX28_PAD_EMI_A02__EMI_ADDR2			0x6020
#define MX28_PAD_EMI_A03__EMI_ADDR3			0x6030
#define MX28_PAD_EMI_A04__EMI_ADDR4			0x6040
#define MX28_PAD_EMI_A05__EMI_ADDR5			0x6050
#define MX28_PAD_EMI_A06__EMI_ADDR6			0x6060
#define MX28_PAD_EMI_A07__EMI_ADDR7			0x6070
#define MX28_PAD_EMI_A08__EMI_ADDR8			0x6080
#define MX28_PAD_EMI_A09__EMI_ADDR9			0x6090
#define MX28_PAD_EMI_A10__EMI_ADDR10			0x60a0
#define MX28_PAD_EMI_A11__EMI_ADDR11			0x60b0
#define MX28_PAD_EMI_A12__EMI_ADDR12			0x60c0
#define MX28_PAD_EMI_A13__EMI_ADDR13			0x60d0
#define MX28_PAD_EMI_A14__EMI_ADDR14			0x60e0
#define MX28_PAD_EMI_BA0__EMI_BA0			0x6100
#define MX28_PAD_EMI_BA1__EMI_BA1			0x6110
#define MX28_PAD_EMI_BA2__EMI_BA2			0x6120
#define MX28_PAD_EMI_CASN__EMI_CASN			0x6130
#define MX28_PAD_EMI_RASN__EMI_RASN			0x6140
#define MX28_PAD_EMI_WEN__EMI_WEN			0x6150
#define MX28_PAD_EMI_CE0N__EMI_CE0N			0x6160
#define MX28_PAD_EMI_CE1N__EMI_CE1N			0x6170
#define MX28_PAD_EMI_CKE__EMI_CKE			0x6180
#define MX28_PAD_GPMI_D00__SSP1_D0			0x0001
#define MX28_PAD_GPMI_D01__SSP1_D1			0x0011
#define MX28_PAD_GPMI_D02__SSP1_D2			0x0021
#define MX28_PAD_GPMI_D03__SSP1_D3			0x0031
#define MX28_PAD_GPMI_D04__SSP1_D4			0x0041
#define MX28_PAD_GPMI_D05__SSP1_D5			0x0051
#define MX28_PAD_GPMI_D06__SSP1_D6			0x0061
#define MX28_PAD_GPMI_D07__SSP1_D7			0x0071
#define MX28_PAD_GPMI_CE0N__SSP3_D0			0x0101
#define MX28_PAD_GPMI_CE1N__SSP3_D3			0x0111
#define MX28_PAD_GPMI_CE2N__CAN1_TX			0x0121
#define MX28_PAD_GPMI_CE3N__CAN1_RX			0x0131
#define MX28_PAD_GPMI_RDY0__SSP1_CARD_DETECT		0x0141
#define MX28_PAD_GPMI_RDY1__SSP1_CMD			0x0151
#define MX28_PAD_GPMI_RDY2__CAN0_TX			0x0161
#define MX28_PAD_GPMI_RDY3__CAN0_RX			0x0171
#define MX28_PAD_GPMI_RDN__SSP3_SCK			0x0181
#define MX28_PAD_GPMI_WRN__SSP1_SCK			0x0191
#define MX28_PAD_GPMI_ALE__SSP3_D1			0x01a1
#define MX28_PAD_GPMI_CLE__SSP3_D2			0x01b1
#define MX28_PAD_GPMI_RESETN__SSP3_CMD			0x01c1
#define MX28_PAD_LCD_D03__ETM_DA8			0x1031
#define MX28_PAD_LCD_D04__ETM_DA9			0x1041
#define MX28_PAD_LCD_D08__ETM_DA3			0x1081
#define MX28_PAD_LCD_D09__ETM_DA4			0x1091
#define MX28_PAD_LCD_D20__ENET1_1588_EVENT2_OUT		0x1141
#define MX28_PAD_LCD_D21__ENET1_1588_EVENT2_IN		0x1151
#define MX28_PAD_LCD_D22__ENET1_1588_EVENT3_OUT		0x1161
#define MX28_PAD_LCD_D23__ENET1_1588_EVENT3_IN		0x1171
#define MX28_PAD_LCD_RD_E__LCD_VSYNC			0x1181
#define MX28_PAD_LCD_WR_RWN__LCD_HSYNC			0x1191
#define MX28_PAD_LCD_RS__LCD_DOTCLK			0x11a1
#define MX28_PAD_LCD_CS__LCD_ENABLE			0x11b1
#define MX28_PAD_LCD_VSYNC__SAIF1_SDATA0		0x11c1
#define MX28_PAD_LCD_HSYNC__SAIF1_SDATA1		0x11d1
#define MX28_PAD_LCD_DOTCLK__SAIF1_MCLK			0x11e1
#define MX28_PAD_SSP0_DATA4__SSP2_D0			0x2041
#define MX28_PAD_SSP0_DATA5__SSP2_D3			0x2051
#define MX28_PAD_SSP0_DATA6__SSP2_CMD			0x2061
#define MX28_PAD_SSP0_DATA7__SSP2_SCK			0x2071
#define MX28_PAD_SSP1_SCK__SSP2_D1			0x20c1
#define MX28_PAD_SSP1_CMD__SSP2_D2			0x20d1
#define MX28_PAD_SSP1_DATA0__SSP2_D6			0x20e1
#define MX28_PAD_SSP1_DATA3__SSP2_D7			0x20f1
#define MX28_PAD_SSP2_SCK__AUART2_RX			0x2101
#define MX28_PAD_SSP2_MOSI__AUART2_TX			0x2111
#define MX28_PAD_SSP2_MISO__AUART3_RX			0x2121
#define MX28_PAD_SSP2_SS0__AUART3_TX			0x2131
#define MX28_PAD_SSP2_SS1__SSP2_D1			0x2141
#define MX28_PAD_SSP2_SS2__SSP2_D2			0x2151
#define MX28_PAD_SSP3_SCK__AUART4_TX			0x2181
#define MX28_PAD_SSP3_MOSI__AUART4_RX			0x2191
#define MX28_PAD_SSP3_MISO__AUART4_RTS			0x21a1
#define MX28_PAD_SSP3_SS0__AUART4_CTS			0x21b1
#define MX28_PAD_AUART0_RX__I2C0_SCL			0x3001
#define MX28_PAD_AUART0_TX__I2C0_SDA			0x3011
#define MX28_PAD_AUART0_CTS__AUART4_RX			0x3021
#define MX28_PAD_AUART0_RTS__AUART4_TX			0x3031
#define MX28_PAD_AUART1_RX__SSP2_CARD_DETECT		0x3041
#define MX28_PAD_AUART1_TX__SSP3_CARD_DETECT		0x3051
#define MX28_PAD_AUART1_CTS__USB0_OVERCURRENT		0x3061
#define MX28_PAD_AUART1_RTS__USB0_ID			0x3071
#define MX28_PAD_AUART2_RX__SSP3_D1			0x3081
#define MX28_PAD_AUART2_TX__SSP3_D2			0x3091
#define MX28_PAD_AUART2_CTS__I2C1_SCL			0x30a1
#define MX28_PAD_AUART2_RTS__I2C1_SDA			0x30b1
#define MX28_PAD_AUART3_RX__CAN0_TX			0x30c1
#define MX28_PAD_AUART3_TX__CAN0_RX			0x30d1
#define MX28_PAD_AUART3_CTS__CAN1_TX			0x30e1
#define MX28_PAD_AUART3_RTS__CAN1_RX			0x30f1
#define MX28_PAD_PWM0__I2C1_SCL				0x3101
#define MX28_PAD_PWM1__I2C1_SDA				0x3111
#define MX28_PAD_PWM2__USB0_ID				0x3121
#define MX28_PAD_SAIF0_MCLK__PWM_3			0x3141
#define MX28_PAD_SAIF0_LRCLK__PWM_4			0x3151
#define MX28_PAD_SAIF0_BITCLK__PWM_5			0x3161
#define MX28_PAD_SAIF0_SDATA0__PWM_6			0x3171
#define MX28_PAD_I2C0_SCL__TIMROT_ROTARYA		0x3181
#define MX28_PAD_I2C0_SDA__TIMROT_ROTARYB		0x3191
#define MX28_PAD_SAIF1_SDATA0__PWM_7			0x31a1
#define MX28_PAD_LCD_RESET__LCD_VSYNC			0x31e1
#define MX28_PAD_ENET0_MDC__GPMI_CE4N			0x4001
#define MX28_PAD_ENET0_MDIO__GPMI_CE5N			0x4011
#define MX28_PAD_ENET0_RX_EN__GPMI_CE6N			0x4021
#define MX28_PAD_ENET0_RXD0__GPMI_CE7N			0x4031
#define MX28_PAD_ENET0_RXD1__GPMI_READY4		0x4041
#define MX28_PAD_ENET0_TX_CLK__HSADC_TRIGGER		0x4051
#define MX28_PAD_ENET0_TX_EN__GPMI_READY5		0x4061
#define MX28_PAD_ENET0_TXD0__GPMI_READY6		0x4071
#define MX28_PAD_ENET0_TXD1__GPMI_READY7		0x4081
#define MX28_PAD_ENET0_RXD2__ENET1_RXD0			0x4091
#define MX28_PAD_ENET0_RXD3__ENET1_RXD1			0x40a1
#define MX28_PAD_ENET0_TXD2__ENET1_TXD0			0x40b1
#define MX28_PAD_ENET0_TXD3__ENET1_TXD1			0x40c1
#define MX28_PAD_ENET0_RX_CLK__ENET0_RX_ER		0x40d1
#define MX28_PAD_ENET0_COL__ENET1_TX_EN			0x40e1
#define MX28_PAD_ENET0_CRS__ENET1_RX_EN			0x40f1
#define MX28_PAD_GPMI_CE2N__ENET0_RX_ER			0x0122
#define MX28_PAD_GPMI_CE3N__SAIF1_MCLK			0x0132
#define MX28_PAD_GPMI_RDY0__USB0_ID			0x0142
#define MX28_PAD_GPMI_RDY2__ENET0_TX_ER			0x0162
#define MX28_PAD_GPMI_RDY3__HSADC_TRIGGER		0x0172
#define MX28_PAD_GPMI_ALE__SSP3_D4			0x01a2
#define MX28_PAD_GPMI_CLE__SSP3_D5			0x01b2
#define MX28_PAD_LCD_D00__ETM_DA0			0x1002
#define MX28_PAD_LCD_D01__ETM_DA1			0x1012
#define MX28_PAD_LCD_D02__ETM_DA2			0x1022
#define MX28_PAD_LCD_D03__ETM_DA3			0x1032
#define MX28_PAD_LCD_D04__ETM_DA4			0x1042
#define MX28_PAD_LCD_D05__ETM_DA5			0x1052
#define MX28_PAD_LCD_D06__ETM_DA6			0x1062
#define MX28_PAD_LCD_D07__ETM_DA7			0x1072
#define MX28_PAD_LCD_D08__ETM_DA8			0x1082
#define MX28_PAD_LCD_D09__ETM_DA9			0x1092
#define MX28_PAD_LCD_D10__ETM_DA10			0x10a2
#define MX28_PAD_LCD_D11__ETM_DA11			0x10b2
#define MX28_PAD_LCD_D12__ETM_DA12			0x10c2
#define MX28_PAD_LCD_D13__ETM_DA13			0x10d2
#define MX28_PAD_LCD_D14__ETM_DA14			0x10e2
#define MX28_PAD_LCD_D15__ETM_DA15			0x10f2
#define MX28_PAD_LCD_D16__ETM_DA7			0x1102
#define MX28_PAD_LCD_D17__ETM_DA6			0x1112
#define MX28_PAD_LCD_D18__ETM_DA5			0x1122
#define MX28_PAD_LCD_D19__ETM_DA4			0x1132
#define MX28_PAD_LCD_D20__ETM_DA3			0x1142
#define MX28_PAD_LCD_D21__ETM_DA2			0x1152
#define MX28_PAD_LCD_D22__ETM_DA1			0x1162
#define MX28_PAD_LCD_D23__ETM_DA0			0x1172
#define MX28_PAD_LCD_RD_E__ETM_TCTL			0x1182
#define MX28_PAD_LCD_WR_RWN__ETM_TCLK			0x1192
#define MX28_PAD_LCD_HSYNC__ETM_TCTL			0x11d2
#define MX28_PAD_LCD_DOTCLK__ETM_TCLK			0x11e2
#define MX28_PAD_SSP1_SCK__ENET0_1588_EVENT2_OUT	0x20c2
#define MX28_PAD_SSP1_CMD__ENET0_1588_EVENT2_IN		0x20d2
#define MX28_PAD_SSP1_DATA0__ENET0_1588_EVENT3_OUT	0x20e2
#define MX28_PAD_SSP1_DATA3__ENET0_1588_EVENT3_IN	0x20f2
#define MX28_PAD_SSP2_SCK__SAIF0_SDATA1			0x2102
#define MX28_PAD_SSP2_MOSI__SAIF0_SDATA2		0x2112
#define MX28_PAD_SSP2_MISO__SAIF1_SDATA1		0x2122
#define MX28_PAD_SSP2_SS0__SAIF1_SDATA2			0x2132
#define MX28_PAD_SSP2_SS1__USB1_OVERCURRENT		0x2142
#define MX28_PAD_SSP2_SS2__USB0_OVERCURRENT		0x2152
#define MX28_PAD_SSP3_SCK__ENET1_1588_EVENT0_OUT	0x2182
#define MX28_PAD_SSP3_MOSI__ENET1_1588_EVENT0_IN	0x2192
#define MX28_PAD_SSP3_MISO__ENET1_1588_EVENT1_OUT	0x21a2
#define MX28_PAD_SSP3_SS0__ENET1_1588_EVENT1_IN		0x21b2
#define MX28_PAD_AUART0_RX__DUART_CTS			0x3002
#define MX28_PAD_AUART0_TX__DUART_RTS			0x3012
#define MX28_PAD_AUART0_CTS__DUART_RX			0x3022
#define MX28_PAD_AUART0_RTS__DUART_TX			0x3032
#define MX28_PAD_AUART1_RX__PWM_0			0x3042
#define MX28_PAD_AUART1_TX__PWM_1			0x3052
#define MX28_PAD_AUART1_CTS__TIMROT_ROTARYA		0x3062
#define MX28_PAD_AUART1_RTS__TIMROT_ROTARYB		0x3072
#define MX28_PAD_AUART2_RX__SSP3_D4			0x3082
#define MX28_PAD_AUART2_TX__SSP3_D5			0x3092
#define MX28_PAD_AUART2_CTS__SAIF1_BITCLK		0x30a2
#define MX28_PAD_AUART2_RTS__SAIF1_LRCLK		0x30b2
#define MX28_PAD_AUART3_RX__ENET0_1588_EVENT0_OUT	0x30c2
#define MX28_PAD_AUART3_TX__ENET0_1588_EVENT0_IN	0x30d2
#define MX28_PAD_AUART3_CTS__ENET0_1588_EVENT1_OUT	0x30e2
#define MX28_PAD_AUART3_RTS__ENET0_1588_EVENT1_IN	0x30f2
#define MX28_PAD_PWM0__DUART_RX				0x3102
#define MX28_PAD_PWM1__DUART_TX				0x3112
#define MX28_PAD_PWM2__USB1_OVERCURRENT			0x3122
#define MX28_PAD_SAIF0_MCLK__AUART4_CTS			0x3142
#define MX28_PAD_SAIF0_LRCLK__AUART4_RTS		0x3152
#define MX28_PAD_SAIF0_BITCLK__AUART4_RX		0x3162
#define MX28_PAD_SAIF0_SDATA0__AUART4_TX		0x3172
#define MX28_PAD_I2C0_SCL__DUART_RX			0x3182
#define MX28_PAD_I2C0_SDA__DUART_TX			0x3192
#define MX28_PAD_SAIF1_SDATA0__SAIF0_SDATA1		0x31a2
#define MX28_PAD_SPDIF__ENET1_RX_ER			0x31b2
#define MX28_PAD_ENET0_MDC__SAIF0_SDATA1		0x4002
#define MX28_PAD_ENET0_MDIO__SAIF0_SDATA2		0x4012
#define MX28_PAD_ENET0_RX_EN__SAIF1_SDATA1		0x4022
#define MX28_PAD_ENET0_RXD0__SAIF1_SDATA2		0x4032
#define MX28_PAD_ENET0_TX_CLK__ENET0_1588_EVENT2_OUT	0x4052
#define MX28_PAD_ENET0_RXD2__ENET0_1588_EVENT0_OUT	0x4092
#define MX28_PAD_ENET0_RXD3__ENET0_1588_EVENT0_IN	0x40a2
#define MX28_PAD_ENET0_TXD2__ENET0_1588_EVENT1_OUT	0x40b2
#define MX28_PAD_ENET0_TXD3__ENET0_1588_EVENT1_IN	0x40c2
#define MX28_PAD_ENET0_RX_CLK__ENET0_1588_EVENT2_IN	0x40d2
#define MX28_PAD_ENET0_COL__ENET0_1588_EVENT3_OUT	0x40e2
#define MX28_PAD_ENET0_CRS__ENET0_1588_EVENT3_IN	0x40f2
#define MX28_PAD_GPMI_D00__GPIO_0_0			0x0003
#define MX28_PAD_GPMI_D01__GPIO_0_1			0x0013
#define MX28_PAD_GPMI_D02__GPIO_0_2			0x0023
#define MX28_PAD_GPMI_D03__GPIO_0_3			0x0033
#define MX28_PAD_GPMI_D04__GPIO_0_4			0x0043
#define MX28_PAD_GPMI_D05__GPIO_0_5			0x0053
#define MX28_PAD_GPMI_D06__GPIO_0_6			0x0063
#define MX28_PAD_GPMI_D07__GPIO_0_7			0x0073
#define MX28_PAD_GPMI_CE0N__GPIO_0_16			0x0103
#define MX28_PAD_GPMI_CE1N__GPIO_0_17			0x0113
#define MX28_PAD_GPMI_CE2N__GPIO_0_18			0x0123
#define MX28_PAD_GPMI_CE3N__GPIO_0_19			0x0133
#define MX28_PAD_GPMI_RDY0__GPIO_0_20			0x0143
#define MX28_PAD_GPMI_RDY1__GPIO_0_21			0x0153
#define MX28_PAD_GPMI_RDY2__GPIO_0_22			0x0163
#define MX28_PAD_GPMI_RDY3__GPIO_0_23			0x0173
#define MX28_PAD_GPMI_RDN__GPIO_0_24			0x0183
#define MX28_PAD_GPMI_WRN__GPIO_0_25			0x0193
#define MX28_PAD_GPMI_ALE__GPIO_0_26			0x01a3
#define MX28_PAD_GPMI_CLE__GPIO_0_27			0x01b3
#define MX28_PAD_GPMI_RESETN__GPIO_0_28			0x01c3
#define MX28_PAD_LCD_D00__GPIO_1_0			0x1003
#define MX28_PAD_LCD_D01__GPIO_1_1			0x1013
#define MX28_PAD_LCD_D02__GPIO_1_2			0x1023
#define MX28_PAD_LCD_D03__GPIO_1_3			0x1033
#define MX28_PAD_LCD_D04__GPIO_1_4			0x1043
#define MX28_PAD_LCD_D05__GPIO_1_5			0x1053
#define MX28_PAD_LCD_D06__GPIO_1_6			0x1063
#define MX28_PAD_LCD_D07__GPIO_1_7			0x1073
#define MX28_PAD_LCD_D08__GPIO_1_8			0x1083
#define MX28_PAD_LCD_D09__GPIO_1_9			0x1093
#define MX28_PAD_LCD_D10__GPIO_1_10			0x10a3
#define MX28_PAD_LCD_D11__GPIO_1_11			0x10b3
#define MX28_PAD_LCD_D12__GPIO_1_12			0x10c3
#define MX28_PAD_LCD_D13__GPIO_1_13			0x10d3
#define MX28_PAD_LCD_D14__GPIO_1_14			0x10e3
#define MX28_PAD_LCD_D15__GPIO_1_15			0x10f3
#define MX28_PAD_LCD_D16__GPIO_1_16			0x1103
#define MX28_PAD_LCD_D17__GPIO_1_17			0x1113
#define MX28_PAD_LCD_D18__GPIO_1_18			0x1123
#define MX28_PAD_LCD_D19__GPIO_1_19			0x1133
#define MX28_PAD_LCD_D20__GPIO_1_20			0x1143
#define MX28_PAD_LCD_D21__GPIO_1_21			0x1153
#define MX28_PAD_LCD_D22__GPIO_1_22			0x1163
#define MX28_PAD_LCD_D23__GPIO_1_23			0x1173
#define MX28_PAD_LCD_RD_E__GPIO_1_24			0x1183
#define MX28_PAD_LCD_WR_RWN__GPIO_1_25			0x1193
#define MX28_PAD_LCD_RS__GPIO_1_26			0x11a3
#define MX28_PAD_LCD_CS__GPIO_1_27			0x11b3
#define MX28_PAD_LCD_VSYNC__GPIO_1_28			0x11c3
#define MX28_PAD_LCD_HSYNC__GPIO_1_29			0x11d3
#define MX28_PAD_LCD_DOTCLK__GPIO_1_30			0x11e3
#define MX28_PAD_LCD_ENABLE__GPIO_1_31			0x11f3
#define MX28_PAD_SSP0_DATA0__GPIO_2_0			0x2003
#define MX28_PAD_SSP0_DATA1__GPIO_2_1			0x2013
#define MX28_PAD_SSP0_DATA2__GPIO_2_2			0x2023
#define MX28_PAD_SSP0_DATA3__GPIO_2_3			0x2033
#define MX28_PAD_SSP0_DATA4__GPIO_2_4			0x2043
#define MX28_PAD_SSP0_DATA5__GPIO_2_5			0x2053
#define MX28_PAD_SSP0_DATA6__GPIO_2_6			0x2063
#define MX28_PAD_SSP0_DATA7__GPIO_2_7			0x2073
#define MX28_PAD_SSP0_CMD__GPIO_2_8			0x2083
#define MX28_PAD_SSP0_DETECT__GPIO_2_9			0x2093
#define MX28_PAD_SSP0_SCK__GPIO_2_10			0x20a3
#define MX28_PAD_SSP1_SCK__GPIO_2_12			0x20c3
#define MX28_PAD_SSP1_CMD__GPIO_2_13			0x20d3
#define MX28_PAD_SSP1_DATA0__GPIO_2_14			0x20e3
#define MX28_PAD_SSP1_DATA3__GPIO_2_15			0x20f3
#define MX28_PAD_SSP2_SCK__GPIO_2_16			0x2103
#define MX28_PAD_SSP2_MOSI__GPIO_2_17			0x2113
#define MX28_PAD_SSP2_MISO__GPIO_2_18			0x2123
#define MX28_PAD_SSP2_SS0__GPIO_2_19			0x2133
#define MX28_PAD_SSP2_SS1__GPIO_2_20			0x2143
#define MX28_PAD_SSP2_SS2__GPIO_2_21			0x2153
#define MX28_PAD_SSP3_SCK__GPIO_2_24			0x2183
#define MX28_PAD_SSP3_MOSI__GPIO_2_25			0x2193
#define MX28_PAD_SSP3_MISO__GPIO_2_26			0x21a3
#define MX28_PAD_SSP3_SS0__GPIO_2_27			0x21b3
#define MX28_PAD_AUART0_RX__GPIO_3_0			0x3003
#define MX28_PAD_AUART0_TX__GPIO_3_1			0x3013
#define MX28_PAD_AUART0_CTS__GPIO_3_2			0x3023
#define MX28_PAD_AUART0_RTS__GPIO_3_3			0x3033
#define MX28_PAD_AUART1_RX__GPIO_3_4			0x3043
#define MX28_PAD_AUART1_TX__GPIO_3_5			0x3053
#define MX28_PAD_AUART1_CTS__GPIO_3_6			0x3063
#define MX28_PAD_AUART1_RTS__GPIO_3_7			0x3073
#define MX28_PAD_AUART2_RX__GPIO_3_8			0x3083
#define MX28_PAD_AUART2_TX__GPIO_3_9			0x3093
#define MX28_PAD_AUART2_CTS__GPIO_3_10			0x30a3
#define MX28_PAD_AUART2_RTS__GPIO_3_11			0x30b3
#define MX28_PAD_AUART3_RX__GPIO_3_12			0x30c3
#define MX28_PAD_AUART3_TX__GPIO_3_13			0x30d3
#define MX28_PAD_AUART3_CTS__GPIO_3_14			0x30e3
#define MX28_PAD_AUART3_RTS__GPIO_3_15			0x30f3
#define MX28_PAD_PWM0__GPIO_3_16			0x3103
#define MX28_PAD_PWM1__GPIO_3_17			0x3113
#define MX28_PAD_PWM2__GPIO_3_18			0x3123
#define MX28_PAD_SAIF0_MCLK__GPIO_3_20			0x3143
#define MX28_PAD_SAIF0_LRCLK__GPIO_3_21			0x3153
#define MX28_PAD_SAIF0_BITCLK__GPIO_3_22		0x3163
#define MX28_PAD_SAIF0_SDATA0__GPIO_3_23		0x3173
#define MX28_PAD_I2C0_SCL__GPIO_3_24			0x3183
#define MX28_PAD_I2C0_SDA__GPIO_3_25			0x3193
#define MX28_PAD_SAIF1_SDATA0__GPIO_3_26		0x31a3
#define MX28_PAD_SPDIF__GPIO_3_27			0x31b3
#define MX28_PAD_PWM3__GPIO_3_28			0x31c3
#define MX28_PAD_PWM4__GPIO_3_29			0x31d3
#define MX28_PAD_LCD_RESET__GPIO_3_30			0x31e3
#define MX28_PAD_ENET0_MDC__GPIO_4_0			0x4003
#define MX28_PAD_ENET0_MDIO__GPIO_4_1			0x4013
#define MX28_PAD_ENET0_RX_EN__GPIO_4_2			0x4023
#define MX28_PAD_ENET0_RXD0__GPIO_4_3			0x4033
#define MX28_PAD_ENET0_RXD1__GPIO_4_4			0x4043
#define MX28_PAD_ENET0_TX_CLK__GPIO_4_5			0x4053
#define MX28_PAD_ENET0_TX_EN__GPIO_4_6			0x4063
#define MX28_PAD_ENET0_TXD0__GPIO_4_7			0x4073
#define MX28_PAD_ENET0_TXD1__GPIO_4_8			0x4083
#define MX28_PAD_ENET0_RXD2__GPIO_4_9			0x4093
#define MX28_PAD_ENET0_RXD3__GPIO_4_10			0x40a3
#define MX28_PAD_ENET0_TXD2__GPIO_4_11			0x40b3
#define MX28_PAD_ENET0_TXD3__GPIO_4_12			0x40c3
#define MX28_PAD_ENET0_RX_CLK__GPIO_4_13		0x40d3
#define MX28_PAD_ENET0_COL__GPIO_4_14			0x40e3
#define MX28_PAD_ENET0_CRS__GPIO_4_15			0x40f3
#define MX28_PAD_ENET_CLK__GPIO_4_16			0x4103
#define MX28_PAD_JTAG_RTCK__GPIO_4_20			0x4143

#endif /* __DT_BINDINGS_MX28_PINCTRL_H__ */
