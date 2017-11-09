# Test NRF24L01+ SPI with arduino (Mega 2560)

 

You should see in monitor if the TXT Address is different to 0x00, this mean that is function ok, if not, check your wired or NRF24L01 + module.

* * *

## Pinout

| NRF24L01+  | Arduino (Mega 2560) |
|------------|---------------------|
| GND        | GND                 |
| VCC (3.3V) | VCC (3.3V)          |
| CE         | 9                   |
| CSN        | 10                  |
| SCK        | 52                  |
| MOSI       | 51                  |
| MISO       | 50                  |

## OK Response

```

SSTATUS		 = 0x0e RX_DR=0 TX_DS=0 MAX_RT=0 RX_P_NO=7 TX_FULL=0
RX_ADDR_P0-1	 = 0xf0f0f0f0d2 0xf0f0f0f0e1
RX_ADDR_P2-5	 = 0xc3 0xc4 0xc5 0xc6
TX_ADDR		 = 0xf0f0f0f0d2
RX_PW_P0-6	 = 0x20 0x20 0x00 0x00 0x00 0x00
EN_AA		 = 0x3f
EN_RXADDR	 = 0x02
RF_CH		 = 0x4c
RF_SETUP	 = 0x07
CONFIG		 = 0x0e
DYNPD/FEATURE	 = 0x00 0x00
Data Rate	 = 1MBPS
Model		 = nRF24L01+
CRC Length	 = 16 bits
PA Power	 = PA_MAX

```

* * *
### Contact

[@judlup](http://twitter.com/judlup)

judlup@gmail.com

13!


