                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (Apr  5 2014) (MINGW32)
                                      4 ; This file was generated Thu May 07 20:47:35 2015
                                      5 ;--------------------------------------------------------
                                      6 	.module lab5
                                      7 	.optsdcc -mmcs51 --model-small
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _main
                                     13 	.globl _read_keypad
                                     14 	.globl _strlen
                                     15 	.globl _putchar
                                     16 	.globl _getchar
                                     17 	.globl _vsprintf
                                     18 	.globl _printf
                                     19 	.globl _abs
                                     20 	.globl _Sys_Init
                                     21 	.globl _UART0_Init
                                     22 	.globl _SYSCLK_Init
                                     23 	.globl _run
                                     24 	.globl _BUS_SCL
                                     25 	.globl _BUS_TOE
                                     26 	.globl _BUS_FTE
                                     27 	.globl _BUS_AA
                                     28 	.globl _BUS_INT
                                     29 	.globl _BUS_STOP
                                     30 	.globl _BUS_START
                                     31 	.globl _BUS_EN
                                     32 	.globl _BUS_BUSY
                                     33 	.globl _SPIF
                                     34 	.globl _WCOL
                                     35 	.globl _MODF
                                     36 	.globl _RXOVRN
                                     37 	.globl _TXBSY
                                     38 	.globl _SLVSEL
                                     39 	.globl _MSTEN
                                     40 	.globl _SPIEN
                                     41 	.globl _AD0EN
                                     42 	.globl _ADCEN
                                     43 	.globl _AD0TM
                                     44 	.globl _ADCTM
                                     45 	.globl _AD0INT
                                     46 	.globl _ADCINT
                                     47 	.globl _AD0BUSY
                                     48 	.globl _ADBUSY
                                     49 	.globl _AD0CM1
                                     50 	.globl _ADSTM1
                                     51 	.globl _AD0CM0
                                     52 	.globl _ADSTM0
                                     53 	.globl _AD0WINT
                                     54 	.globl _ADWINT
                                     55 	.globl _AD0LJST
                                     56 	.globl _ADLJST
                                     57 	.globl _CF
                                     58 	.globl _CR
                                     59 	.globl _CCF4
                                     60 	.globl _CCF3
                                     61 	.globl _CCF2
                                     62 	.globl _CCF1
                                     63 	.globl _CCF0
                                     64 	.globl _CY
                                     65 	.globl _AC
                                     66 	.globl _F0
                                     67 	.globl _RS1
                                     68 	.globl _RS0
                                     69 	.globl _OV
                                     70 	.globl _F1
                                     71 	.globl _P
                                     72 	.globl _TF2
                                     73 	.globl _EXF2
                                     74 	.globl _RCLK
                                     75 	.globl _TCLK
                                     76 	.globl _EXEN2
                                     77 	.globl _TR2
                                     78 	.globl _CT2
                                     79 	.globl _CPRL2
                                     80 	.globl _BUSY
                                     81 	.globl _ENSMB
                                     82 	.globl _STA
                                     83 	.globl _STO
                                     84 	.globl _SI
                                     85 	.globl _AA
                                     86 	.globl _SMBFTE
                                     87 	.globl _SMBTOE
                                     88 	.globl _PT2
                                     89 	.globl _PS
                                     90 	.globl _PS0
                                     91 	.globl _PT1
                                     92 	.globl _PX1
                                     93 	.globl _PT0
                                     94 	.globl _PX0
                                     95 	.globl _P3_7
                                     96 	.globl _P3_6
                                     97 	.globl _P3_5
                                     98 	.globl _P3_4
                                     99 	.globl _P3_3
                                    100 	.globl _P3_2
                                    101 	.globl _P3_1
                                    102 	.globl _P3_0
                                    103 	.globl _EA
                                    104 	.globl _ET2
                                    105 	.globl _ES
                                    106 	.globl _ES0
                                    107 	.globl _ET1
                                    108 	.globl _EX1
                                    109 	.globl _ET0
                                    110 	.globl _EX0
                                    111 	.globl _P2_7
                                    112 	.globl _P2_6
                                    113 	.globl _P2_5
                                    114 	.globl _P2_4
                                    115 	.globl _P2_3
                                    116 	.globl _P2_2
                                    117 	.globl _P2_1
                                    118 	.globl _P2_0
                                    119 	.globl _S0MODE
                                    120 	.globl _SM00
                                    121 	.globl _SM0
                                    122 	.globl _SM10
                                    123 	.globl _SM1
                                    124 	.globl _MCE0
                                    125 	.globl _SM20
                                    126 	.globl _SM2
                                    127 	.globl _REN0
                                    128 	.globl _REN
                                    129 	.globl _TB80
                                    130 	.globl _TB8
                                    131 	.globl _RB80
                                    132 	.globl _RB8
                                    133 	.globl _TI0
                                    134 	.globl _TI
                                    135 	.globl _RI0
                                    136 	.globl _RI
                                    137 	.globl _P1_7
                                    138 	.globl _P1_6
                                    139 	.globl _P1_5
                                    140 	.globl _P1_4
                                    141 	.globl _P1_3
                                    142 	.globl _P1_2
                                    143 	.globl _P1_1
                                    144 	.globl _P1_0
                                    145 	.globl _TF1
                                    146 	.globl _TR1
                                    147 	.globl _TF0
                                    148 	.globl _TR0
                                    149 	.globl _IE1
                                    150 	.globl _IT1
                                    151 	.globl _IE0
                                    152 	.globl _IT0
                                    153 	.globl _P0_7
                                    154 	.globl _P0_6
                                    155 	.globl _P0_5
                                    156 	.globl _P0_4
                                    157 	.globl _P0_3
                                    158 	.globl _P0_2
                                    159 	.globl _P0_1
                                    160 	.globl _P0_0
                                    161 	.globl _PCA0CP4
                                    162 	.globl _PCA0CP3
                                    163 	.globl _PCA0CP2
                                    164 	.globl _PCA0CP1
                                    165 	.globl _PCA0CP0
                                    166 	.globl _PCA0
                                    167 	.globl _DAC1
                                    168 	.globl _DAC0
                                    169 	.globl _ADC0LT
                                    170 	.globl _ADC0GT
                                    171 	.globl _ADC0
                                    172 	.globl _RCAP4
                                    173 	.globl _TMR4
                                    174 	.globl _TMR3RL
                                    175 	.globl _TMR3
                                    176 	.globl _RCAP2
                                    177 	.globl _TMR2
                                    178 	.globl _TMR1
                                    179 	.globl _TMR0
                                    180 	.globl _WDTCN
                                    181 	.globl _PCA0CPH4
                                    182 	.globl _PCA0CPH3
                                    183 	.globl _PCA0CPH2
                                    184 	.globl _PCA0CPH1
                                    185 	.globl _PCA0CPH0
                                    186 	.globl _PCA0H
                                    187 	.globl _SPI0CN
                                    188 	.globl _EIP2
                                    189 	.globl _EIP1
                                    190 	.globl _TH4
                                    191 	.globl _TL4
                                    192 	.globl _SADDR1
                                    193 	.globl _SBUF1
                                    194 	.globl _SCON1
                                    195 	.globl _B
                                    196 	.globl _RSTSRC
                                    197 	.globl _PCA0CPL4
                                    198 	.globl _PCA0CPL3
                                    199 	.globl _PCA0CPL2
                                    200 	.globl _PCA0CPL1
                                    201 	.globl _PCA0CPL0
                                    202 	.globl _PCA0L
                                    203 	.globl _ADC0CN
                                    204 	.globl _EIE2
                                    205 	.globl _EIE1
                                    206 	.globl _RCAP4H
                                    207 	.globl _RCAP4L
                                    208 	.globl _XBR2
                                    209 	.globl _XBR1
                                    210 	.globl _XBR0
                                    211 	.globl _ACC
                                    212 	.globl _PCA0CPM4
                                    213 	.globl _PCA0CPM3
                                    214 	.globl _PCA0CPM2
                                    215 	.globl _PCA0CPM1
                                    216 	.globl _PCA0CPM0
                                    217 	.globl _PCA0MD
                                    218 	.globl _PCA0CN
                                    219 	.globl _DAC1CN
                                    220 	.globl _DAC1H
                                    221 	.globl _DAC1L
                                    222 	.globl _DAC0CN
                                    223 	.globl _DAC0H
                                    224 	.globl _DAC0L
                                    225 	.globl _REF0CN
                                    226 	.globl _PSW
                                    227 	.globl _SMB0CR
                                    228 	.globl _TH2
                                    229 	.globl _TL2
                                    230 	.globl _RCAP2H
                                    231 	.globl _RCAP2L
                                    232 	.globl _T4CON
                                    233 	.globl _T2CON
                                    234 	.globl _ADC0LTH
                                    235 	.globl _ADC0LTL
                                    236 	.globl _ADC0GTH
                                    237 	.globl _ADC0GTL
                                    238 	.globl _SMB0ADR
                                    239 	.globl _SMB0DAT
                                    240 	.globl _SMB0STA
                                    241 	.globl _SMB0CN
                                    242 	.globl _ADC0H
                                    243 	.globl _ADC0L
                                    244 	.globl _P1MDIN
                                    245 	.globl _ADC0CF
                                    246 	.globl _AMX0SL
                                    247 	.globl _AMX0CF
                                    248 	.globl _SADEN0
                                    249 	.globl _IP
                                    250 	.globl _FLACL
                                    251 	.globl _FLSCL
                                    252 	.globl _P74OUT
                                    253 	.globl _OSCICN
                                    254 	.globl _OSCXCN
                                    255 	.globl _P3
                                    256 	.globl __XPAGE
                                    257 	.globl _EMI0CN
                                    258 	.globl _SADEN1
                                    259 	.globl _P3IF
                                    260 	.globl _AMX1SL
                                    261 	.globl _ADC1CF
                                    262 	.globl _ADC1CN
                                    263 	.globl _SADDR0
                                    264 	.globl _IE
                                    265 	.globl _P3MDOUT
                                    266 	.globl _PRT3CF
                                    267 	.globl _P2MDOUT
                                    268 	.globl _PRT2CF
                                    269 	.globl _P1MDOUT
                                    270 	.globl _PRT1CF
                                    271 	.globl _P0MDOUT
                                    272 	.globl _PRT0CF
                                    273 	.globl _EMI0CF
                                    274 	.globl _EMI0TC
                                    275 	.globl _P2
                                    276 	.globl _CPT1CN
                                    277 	.globl _CPT0CN
                                    278 	.globl _SPI0CKR
                                    279 	.globl _ADC1
                                    280 	.globl _SPI0DAT
                                    281 	.globl _SPI0CFG
                                    282 	.globl _SBUF0
                                    283 	.globl _SBUF
                                    284 	.globl _SCON0
                                    285 	.globl _SCON
                                    286 	.globl _P7
                                    287 	.globl _TMR3H
                                    288 	.globl _TMR3L
                                    289 	.globl _TMR3RLH
                                    290 	.globl _TMR3RLL
                                    291 	.globl _TMR3CN
                                    292 	.globl _P1
                                    293 	.globl _PSCTL
                                    294 	.globl _CKCON
                                    295 	.globl _TH1
                                    296 	.globl _TH0
                                    297 	.globl _TL1
                                    298 	.globl _TL0
                                    299 	.globl _TMOD
                                    300 	.globl _TCON
                                    301 	.globl _PCON
                                    302 	.globl _P6
                                    303 	.globl _P5
                                    304 	.globl _P4
                                    305 	.globl _DPH
                                    306 	.globl _DPL
                                    307 	.globl _SP
                                    308 	.globl _P0
                                    309 	.globl _Update_Value_PARM_4
                                    310 	.globl _Update_Value_PARM_3
                                    311 	.globl _Update_Value_PARM_2
                                    312 	.globl _error_sum
                                    313 	.globl _run_stop
                                    314 	.globl _yoff
                                    315 	.globl _xoff
                                    316 	.globl _gy
                                    317 	.globl _gx
                                    318 	.globl _ki
                                    319 	.globl _kdx
                                    320 	.globl _kdy
                                    321 	.globl _ks
                                    322 	.globl _count
                                    323 	.globl _range
                                    324 	.globl _new_lcd
                                    325 	.globl _new_accels
                                    326 	.globl _STR_PW
                                    327 	.globl _DRV_PW
                                    328 	.globl _SERVO_MIN
                                    329 	.globl _SERVO_MAX
                                    330 	.globl _SERVO_PW
                                    331 	.globl _PW_LEFT
                                    332 	.globl _PW_RIGHT
                                    333 	.globl _PW_CENTER
                                    334 	.globl _i2c_read_data_PARM_4
                                    335 	.globl _i2c_read_data_PARM_3
                                    336 	.globl _i2c_read_data_PARM_2
                                    337 	.globl _i2c_write_data_PARM_4
                                    338 	.globl _i2c_write_data_PARM_3
                                    339 	.globl _i2c_write_data_PARM_2
                                    340 	.globl _lcd_print
                                    341 	.globl _lcd_clear
                                    342 	.globl _kpd_input
                                    343 	.globl _delay_time
                                    344 	.globl _i2c_start
                                    345 	.globl _i2c_write
                                    346 	.globl _i2c_write_and_stop
                                    347 	.globl _i2c_read
                                    348 	.globl _i2c_read_and_stop
                                    349 	.globl _i2c_write_data
                                    350 	.globl _i2c_read_data
                                    351 	.globl _Accel_Init
                                    352 	.globl _PCA_ISR
                                    353 	.globl _wait
                                    354 	.globl _start
                                    355 	.globl _set_gains
                                    356 	.globl _XBR0_Init
                                    357 	.globl _SMB_Init
                                    358 	.globl _Update_Value
                                    359 	.globl _read_accels
                                    360 	.globl _set_servo_PWM
                                    361 	.globl _PCA_Init
                                    362 	.globl _updateLCD
                                    363 	.globl _set_drive_PWM
                                    364 	.globl _Port_Init
                                    365 ;--------------------------------------------------------
                                    366 ; special function registers
                                    367 ;--------------------------------------------------------
                                    368 	.area RSEG    (ABS,DATA)
      000000                        369 	.org 0x0000
                           000080   370 G$P0$0$0 == 0x0080
                           000080   371 _P0	=	0x0080
                           000081   372 G$SP$0$0 == 0x0081
                           000081   373 _SP	=	0x0081
                           000082   374 G$DPL$0$0 == 0x0082
                           000082   375 _DPL	=	0x0082
                           000083   376 G$DPH$0$0 == 0x0083
                           000083   377 _DPH	=	0x0083
                           000084   378 G$P4$0$0 == 0x0084
                           000084   379 _P4	=	0x0084
                           000085   380 G$P5$0$0 == 0x0085
                           000085   381 _P5	=	0x0085
                           000086   382 G$P6$0$0 == 0x0086
                           000086   383 _P6	=	0x0086
                           000087   384 G$PCON$0$0 == 0x0087
                           000087   385 _PCON	=	0x0087
                           000088   386 G$TCON$0$0 == 0x0088
                           000088   387 _TCON	=	0x0088
                           000089   388 G$TMOD$0$0 == 0x0089
                           000089   389 _TMOD	=	0x0089
                           00008A   390 G$TL0$0$0 == 0x008a
                           00008A   391 _TL0	=	0x008a
                           00008B   392 G$TL1$0$0 == 0x008b
                           00008B   393 _TL1	=	0x008b
                           00008C   394 G$TH0$0$0 == 0x008c
                           00008C   395 _TH0	=	0x008c
                           00008D   396 G$TH1$0$0 == 0x008d
                           00008D   397 _TH1	=	0x008d
                           00008E   398 G$CKCON$0$0 == 0x008e
                           00008E   399 _CKCON	=	0x008e
                           00008F   400 G$PSCTL$0$0 == 0x008f
                           00008F   401 _PSCTL	=	0x008f
                           000090   402 G$P1$0$0 == 0x0090
                           000090   403 _P1	=	0x0090
                           000091   404 G$TMR3CN$0$0 == 0x0091
                           000091   405 _TMR3CN	=	0x0091
                           000092   406 G$TMR3RLL$0$0 == 0x0092
                           000092   407 _TMR3RLL	=	0x0092
                           000093   408 G$TMR3RLH$0$0 == 0x0093
                           000093   409 _TMR3RLH	=	0x0093
                           000094   410 G$TMR3L$0$0 == 0x0094
                           000094   411 _TMR3L	=	0x0094
                           000095   412 G$TMR3H$0$0 == 0x0095
                           000095   413 _TMR3H	=	0x0095
                           000096   414 G$P7$0$0 == 0x0096
                           000096   415 _P7	=	0x0096
                           000098   416 G$SCON$0$0 == 0x0098
                           000098   417 _SCON	=	0x0098
                           000098   418 G$SCON0$0$0 == 0x0098
                           000098   419 _SCON0	=	0x0098
                           000099   420 G$SBUF$0$0 == 0x0099
                           000099   421 _SBUF	=	0x0099
                           000099   422 G$SBUF0$0$0 == 0x0099
                           000099   423 _SBUF0	=	0x0099
                           00009A   424 G$SPI0CFG$0$0 == 0x009a
                           00009A   425 _SPI0CFG	=	0x009a
                           00009B   426 G$SPI0DAT$0$0 == 0x009b
                           00009B   427 _SPI0DAT	=	0x009b
                           00009C   428 G$ADC1$0$0 == 0x009c
                           00009C   429 _ADC1	=	0x009c
                           00009D   430 G$SPI0CKR$0$0 == 0x009d
                           00009D   431 _SPI0CKR	=	0x009d
                           00009E   432 G$CPT0CN$0$0 == 0x009e
                           00009E   433 _CPT0CN	=	0x009e
                           00009F   434 G$CPT1CN$0$0 == 0x009f
                           00009F   435 _CPT1CN	=	0x009f
                           0000A0   436 G$P2$0$0 == 0x00a0
                           0000A0   437 _P2	=	0x00a0
                           0000A1   438 G$EMI0TC$0$0 == 0x00a1
                           0000A1   439 _EMI0TC	=	0x00a1
                           0000A3   440 G$EMI0CF$0$0 == 0x00a3
                           0000A3   441 _EMI0CF	=	0x00a3
                           0000A4   442 G$PRT0CF$0$0 == 0x00a4
                           0000A4   443 _PRT0CF	=	0x00a4
                           0000A4   444 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   445 _P0MDOUT	=	0x00a4
                           0000A5   446 G$PRT1CF$0$0 == 0x00a5
                           0000A5   447 _PRT1CF	=	0x00a5
                           0000A5   448 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   449 _P1MDOUT	=	0x00a5
                           0000A6   450 G$PRT2CF$0$0 == 0x00a6
                           0000A6   451 _PRT2CF	=	0x00a6
                           0000A6   452 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   453 _P2MDOUT	=	0x00a6
                           0000A7   454 G$PRT3CF$0$0 == 0x00a7
                           0000A7   455 _PRT3CF	=	0x00a7
                           0000A7   456 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   457 _P3MDOUT	=	0x00a7
                           0000A8   458 G$IE$0$0 == 0x00a8
                           0000A8   459 _IE	=	0x00a8
                           0000A9   460 G$SADDR0$0$0 == 0x00a9
                           0000A9   461 _SADDR0	=	0x00a9
                           0000AA   462 G$ADC1CN$0$0 == 0x00aa
                           0000AA   463 _ADC1CN	=	0x00aa
                           0000AB   464 G$ADC1CF$0$0 == 0x00ab
                           0000AB   465 _ADC1CF	=	0x00ab
                           0000AC   466 G$AMX1SL$0$0 == 0x00ac
                           0000AC   467 _AMX1SL	=	0x00ac
                           0000AD   468 G$P3IF$0$0 == 0x00ad
                           0000AD   469 _P3IF	=	0x00ad
                           0000AE   470 G$SADEN1$0$0 == 0x00ae
                           0000AE   471 _SADEN1	=	0x00ae
                           0000AF   472 G$EMI0CN$0$0 == 0x00af
                           0000AF   473 _EMI0CN	=	0x00af
                           0000AF   474 G$_XPAGE$0$0 == 0x00af
                           0000AF   475 __XPAGE	=	0x00af
                           0000B0   476 G$P3$0$0 == 0x00b0
                           0000B0   477 _P3	=	0x00b0
                           0000B1   478 G$OSCXCN$0$0 == 0x00b1
                           0000B1   479 _OSCXCN	=	0x00b1
                           0000B2   480 G$OSCICN$0$0 == 0x00b2
                           0000B2   481 _OSCICN	=	0x00b2
                           0000B5   482 G$P74OUT$0$0 == 0x00b5
                           0000B5   483 _P74OUT	=	0x00b5
                           0000B6   484 G$FLSCL$0$0 == 0x00b6
                           0000B6   485 _FLSCL	=	0x00b6
                           0000B7   486 G$FLACL$0$0 == 0x00b7
                           0000B7   487 _FLACL	=	0x00b7
                           0000B8   488 G$IP$0$0 == 0x00b8
                           0000B8   489 _IP	=	0x00b8
                           0000B9   490 G$SADEN0$0$0 == 0x00b9
                           0000B9   491 _SADEN0	=	0x00b9
                           0000BA   492 G$AMX0CF$0$0 == 0x00ba
                           0000BA   493 _AMX0CF	=	0x00ba
                           0000BB   494 G$AMX0SL$0$0 == 0x00bb
                           0000BB   495 _AMX0SL	=	0x00bb
                           0000BC   496 G$ADC0CF$0$0 == 0x00bc
                           0000BC   497 _ADC0CF	=	0x00bc
                           0000BD   498 G$P1MDIN$0$0 == 0x00bd
                           0000BD   499 _P1MDIN	=	0x00bd
                           0000BE   500 G$ADC0L$0$0 == 0x00be
                           0000BE   501 _ADC0L	=	0x00be
                           0000BF   502 G$ADC0H$0$0 == 0x00bf
                           0000BF   503 _ADC0H	=	0x00bf
                           0000C0   504 G$SMB0CN$0$0 == 0x00c0
                           0000C0   505 _SMB0CN	=	0x00c0
                           0000C1   506 G$SMB0STA$0$0 == 0x00c1
                           0000C1   507 _SMB0STA	=	0x00c1
                           0000C2   508 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   509 _SMB0DAT	=	0x00c2
                           0000C3   510 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   511 _SMB0ADR	=	0x00c3
                           0000C4   512 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   513 _ADC0GTL	=	0x00c4
                           0000C5   514 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   515 _ADC0GTH	=	0x00c5
                           0000C6   516 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   517 _ADC0LTL	=	0x00c6
                           0000C7   518 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   519 _ADC0LTH	=	0x00c7
                           0000C8   520 G$T2CON$0$0 == 0x00c8
                           0000C8   521 _T2CON	=	0x00c8
                           0000C9   522 G$T4CON$0$0 == 0x00c9
                           0000C9   523 _T4CON	=	0x00c9
                           0000CA   524 G$RCAP2L$0$0 == 0x00ca
                           0000CA   525 _RCAP2L	=	0x00ca
                           0000CB   526 G$RCAP2H$0$0 == 0x00cb
                           0000CB   527 _RCAP2H	=	0x00cb
                           0000CC   528 G$TL2$0$0 == 0x00cc
                           0000CC   529 _TL2	=	0x00cc
                           0000CD   530 G$TH2$0$0 == 0x00cd
                           0000CD   531 _TH2	=	0x00cd
                           0000CF   532 G$SMB0CR$0$0 == 0x00cf
                           0000CF   533 _SMB0CR	=	0x00cf
                           0000D0   534 G$PSW$0$0 == 0x00d0
                           0000D0   535 _PSW	=	0x00d0
                           0000D1   536 G$REF0CN$0$0 == 0x00d1
                           0000D1   537 _REF0CN	=	0x00d1
                           0000D2   538 G$DAC0L$0$0 == 0x00d2
                           0000D2   539 _DAC0L	=	0x00d2
                           0000D3   540 G$DAC0H$0$0 == 0x00d3
                           0000D3   541 _DAC0H	=	0x00d3
                           0000D4   542 G$DAC0CN$0$0 == 0x00d4
                           0000D4   543 _DAC0CN	=	0x00d4
                           0000D5   544 G$DAC1L$0$0 == 0x00d5
                           0000D5   545 _DAC1L	=	0x00d5
                           0000D6   546 G$DAC1H$0$0 == 0x00d6
                           0000D6   547 _DAC1H	=	0x00d6
                           0000D7   548 G$DAC1CN$0$0 == 0x00d7
                           0000D7   549 _DAC1CN	=	0x00d7
                           0000D8   550 G$PCA0CN$0$0 == 0x00d8
                           0000D8   551 _PCA0CN	=	0x00d8
                           0000D9   552 G$PCA0MD$0$0 == 0x00d9
                           0000D9   553 _PCA0MD	=	0x00d9
                           0000DA   554 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   555 _PCA0CPM0	=	0x00da
                           0000DB   556 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   557 _PCA0CPM1	=	0x00db
                           0000DC   558 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   559 _PCA0CPM2	=	0x00dc
                           0000DD   560 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   561 _PCA0CPM3	=	0x00dd
                           0000DE   562 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   563 _PCA0CPM4	=	0x00de
                           0000E0   564 G$ACC$0$0 == 0x00e0
                           0000E0   565 _ACC	=	0x00e0
                           0000E1   566 G$XBR0$0$0 == 0x00e1
                           0000E1   567 _XBR0	=	0x00e1
                           0000E2   568 G$XBR1$0$0 == 0x00e2
                           0000E2   569 _XBR1	=	0x00e2
                           0000E3   570 G$XBR2$0$0 == 0x00e3
                           0000E3   571 _XBR2	=	0x00e3
                           0000E4   572 G$RCAP4L$0$0 == 0x00e4
                           0000E4   573 _RCAP4L	=	0x00e4
                           0000E5   574 G$RCAP4H$0$0 == 0x00e5
                           0000E5   575 _RCAP4H	=	0x00e5
                           0000E6   576 G$EIE1$0$0 == 0x00e6
                           0000E6   577 _EIE1	=	0x00e6
                           0000E7   578 G$EIE2$0$0 == 0x00e7
                           0000E7   579 _EIE2	=	0x00e7
                           0000E8   580 G$ADC0CN$0$0 == 0x00e8
                           0000E8   581 _ADC0CN	=	0x00e8
                           0000E9   582 G$PCA0L$0$0 == 0x00e9
                           0000E9   583 _PCA0L	=	0x00e9
                           0000EA   584 G$PCA0CPL0$0$0 == 0x00ea
                           0000EA   585 _PCA0CPL0	=	0x00ea
                           0000EB   586 G$PCA0CPL1$0$0 == 0x00eb
                           0000EB   587 _PCA0CPL1	=	0x00eb
                           0000EC   588 G$PCA0CPL2$0$0 == 0x00ec
                           0000EC   589 _PCA0CPL2	=	0x00ec
                           0000ED   590 G$PCA0CPL3$0$0 == 0x00ed
                           0000ED   591 _PCA0CPL3	=	0x00ed
                           0000EE   592 G$PCA0CPL4$0$0 == 0x00ee
                           0000EE   593 _PCA0CPL4	=	0x00ee
                           0000EF   594 G$RSTSRC$0$0 == 0x00ef
                           0000EF   595 _RSTSRC	=	0x00ef
                           0000F0   596 G$B$0$0 == 0x00f0
                           0000F0   597 _B	=	0x00f0
                           0000F1   598 G$SCON1$0$0 == 0x00f1
                           0000F1   599 _SCON1	=	0x00f1
                           0000F2   600 G$SBUF1$0$0 == 0x00f2
                           0000F2   601 _SBUF1	=	0x00f2
                           0000F3   602 G$SADDR1$0$0 == 0x00f3
                           0000F3   603 _SADDR1	=	0x00f3
                           0000F4   604 G$TL4$0$0 == 0x00f4
                           0000F4   605 _TL4	=	0x00f4
                           0000F5   606 G$TH4$0$0 == 0x00f5
                           0000F5   607 _TH4	=	0x00f5
                           0000F6   608 G$EIP1$0$0 == 0x00f6
                           0000F6   609 _EIP1	=	0x00f6
                           0000F7   610 G$EIP2$0$0 == 0x00f7
                           0000F7   611 _EIP2	=	0x00f7
                           0000F8   612 G$SPI0CN$0$0 == 0x00f8
                           0000F8   613 _SPI0CN	=	0x00f8
                           0000F9   614 G$PCA0H$0$0 == 0x00f9
                           0000F9   615 _PCA0H	=	0x00f9
                           0000FA   616 G$PCA0CPH0$0$0 == 0x00fa
                           0000FA   617 _PCA0CPH0	=	0x00fa
                           0000FB   618 G$PCA0CPH1$0$0 == 0x00fb
                           0000FB   619 _PCA0CPH1	=	0x00fb
                           0000FC   620 G$PCA0CPH2$0$0 == 0x00fc
                           0000FC   621 _PCA0CPH2	=	0x00fc
                           0000FD   622 G$PCA0CPH3$0$0 == 0x00fd
                           0000FD   623 _PCA0CPH3	=	0x00fd
                           0000FE   624 G$PCA0CPH4$0$0 == 0x00fe
                           0000FE   625 _PCA0CPH4	=	0x00fe
                           0000FF   626 G$WDTCN$0$0 == 0x00ff
                           0000FF   627 _WDTCN	=	0x00ff
                           008C8A   628 G$TMR0$0$0 == 0x8c8a
                           008C8A   629 _TMR0	=	0x8c8a
                           008D8B   630 G$TMR1$0$0 == 0x8d8b
                           008D8B   631 _TMR1	=	0x8d8b
                           00CDCC   632 G$TMR2$0$0 == 0xcdcc
                           00CDCC   633 _TMR2	=	0xcdcc
                           00CBCA   634 G$RCAP2$0$0 == 0xcbca
                           00CBCA   635 _RCAP2	=	0xcbca
                           009594   636 G$TMR3$0$0 == 0x9594
                           009594   637 _TMR3	=	0x9594
                           009392   638 G$TMR3RL$0$0 == 0x9392
                           009392   639 _TMR3RL	=	0x9392
                           00F5F4   640 G$TMR4$0$0 == 0xf5f4
                           00F5F4   641 _TMR4	=	0xf5f4
                           00E5E4   642 G$RCAP4$0$0 == 0xe5e4
                           00E5E4   643 _RCAP4	=	0xe5e4
                           00BFBE   644 G$ADC0$0$0 == 0xbfbe
                           00BFBE   645 _ADC0	=	0xbfbe
                           00C5C4   646 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   647 _ADC0GT	=	0xc5c4
                           00C7C6   648 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   649 _ADC0LT	=	0xc7c6
                           00D3D2   650 G$DAC0$0$0 == 0xd3d2
                           00D3D2   651 _DAC0	=	0xd3d2
                           00D6D5   652 G$DAC1$0$0 == 0xd6d5
                           00D6D5   653 _DAC1	=	0xd6d5
                           00F9E9   654 G$PCA0$0$0 == 0xf9e9
                           00F9E9   655 _PCA0	=	0xf9e9
                           00FAEA   656 G$PCA0CP0$0$0 == 0xfaea
                           00FAEA   657 _PCA0CP0	=	0xfaea
                           00FBEB   658 G$PCA0CP1$0$0 == 0xfbeb
                           00FBEB   659 _PCA0CP1	=	0xfbeb
                           00FCEC   660 G$PCA0CP2$0$0 == 0xfcec
                           00FCEC   661 _PCA0CP2	=	0xfcec
                           00FDED   662 G$PCA0CP3$0$0 == 0xfded
                           00FDED   663 _PCA0CP3	=	0xfded
                           00FEEE   664 G$PCA0CP4$0$0 == 0xfeee
                           00FEEE   665 _PCA0CP4	=	0xfeee
                                    666 ;--------------------------------------------------------
                                    667 ; special function bits
                                    668 ;--------------------------------------------------------
                                    669 	.area RSEG    (ABS,DATA)
      000000                        670 	.org 0x0000
                           000080   671 G$P0_0$0$0 == 0x0080
                           000080   672 _P0_0	=	0x0080
                           000081   673 G$P0_1$0$0 == 0x0081
                           000081   674 _P0_1	=	0x0081
                           000082   675 G$P0_2$0$0 == 0x0082
                           000082   676 _P0_2	=	0x0082
                           000083   677 G$P0_3$0$0 == 0x0083
                           000083   678 _P0_3	=	0x0083
                           000084   679 G$P0_4$0$0 == 0x0084
                           000084   680 _P0_4	=	0x0084
                           000085   681 G$P0_5$0$0 == 0x0085
                           000085   682 _P0_5	=	0x0085
                           000086   683 G$P0_6$0$0 == 0x0086
                           000086   684 _P0_6	=	0x0086
                           000087   685 G$P0_7$0$0 == 0x0087
                           000087   686 _P0_7	=	0x0087
                           000088   687 G$IT0$0$0 == 0x0088
                           000088   688 _IT0	=	0x0088
                           000089   689 G$IE0$0$0 == 0x0089
                           000089   690 _IE0	=	0x0089
                           00008A   691 G$IT1$0$0 == 0x008a
                           00008A   692 _IT1	=	0x008a
                           00008B   693 G$IE1$0$0 == 0x008b
                           00008B   694 _IE1	=	0x008b
                           00008C   695 G$TR0$0$0 == 0x008c
                           00008C   696 _TR0	=	0x008c
                           00008D   697 G$TF0$0$0 == 0x008d
                           00008D   698 _TF0	=	0x008d
                           00008E   699 G$TR1$0$0 == 0x008e
                           00008E   700 _TR1	=	0x008e
                           00008F   701 G$TF1$0$0 == 0x008f
                           00008F   702 _TF1	=	0x008f
                           000090   703 G$P1_0$0$0 == 0x0090
                           000090   704 _P1_0	=	0x0090
                           000091   705 G$P1_1$0$0 == 0x0091
                           000091   706 _P1_1	=	0x0091
                           000092   707 G$P1_2$0$0 == 0x0092
                           000092   708 _P1_2	=	0x0092
                           000093   709 G$P1_3$0$0 == 0x0093
                           000093   710 _P1_3	=	0x0093
                           000094   711 G$P1_4$0$0 == 0x0094
                           000094   712 _P1_4	=	0x0094
                           000095   713 G$P1_5$0$0 == 0x0095
                           000095   714 _P1_5	=	0x0095
                           000096   715 G$P1_6$0$0 == 0x0096
                           000096   716 _P1_6	=	0x0096
                           000097   717 G$P1_7$0$0 == 0x0097
                           000097   718 _P1_7	=	0x0097
                           000098   719 G$RI$0$0 == 0x0098
                           000098   720 _RI	=	0x0098
                           000098   721 G$RI0$0$0 == 0x0098
                           000098   722 _RI0	=	0x0098
                           000099   723 G$TI$0$0 == 0x0099
                           000099   724 _TI	=	0x0099
                           000099   725 G$TI0$0$0 == 0x0099
                           000099   726 _TI0	=	0x0099
                           00009A   727 G$RB8$0$0 == 0x009a
                           00009A   728 _RB8	=	0x009a
                           00009A   729 G$RB80$0$0 == 0x009a
                           00009A   730 _RB80	=	0x009a
                           00009B   731 G$TB8$0$0 == 0x009b
                           00009B   732 _TB8	=	0x009b
                           00009B   733 G$TB80$0$0 == 0x009b
                           00009B   734 _TB80	=	0x009b
                           00009C   735 G$REN$0$0 == 0x009c
                           00009C   736 _REN	=	0x009c
                           00009C   737 G$REN0$0$0 == 0x009c
                           00009C   738 _REN0	=	0x009c
                           00009D   739 G$SM2$0$0 == 0x009d
                           00009D   740 _SM2	=	0x009d
                           00009D   741 G$SM20$0$0 == 0x009d
                           00009D   742 _SM20	=	0x009d
                           00009D   743 G$MCE0$0$0 == 0x009d
                           00009D   744 _MCE0	=	0x009d
                           00009E   745 G$SM1$0$0 == 0x009e
                           00009E   746 _SM1	=	0x009e
                           00009E   747 G$SM10$0$0 == 0x009e
                           00009E   748 _SM10	=	0x009e
                           00009F   749 G$SM0$0$0 == 0x009f
                           00009F   750 _SM0	=	0x009f
                           00009F   751 G$SM00$0$0 == 0x009f
                           00009F   752 _SM00	=	0x009f
                           00009F   753 G$S0MODE$0$0 == 0x009f
                           00009F   754 _S0MODE	=	0x009f
                           0000A0   755 G$P2_0$0$0 == 0x00a0
                           0000A0   756 _P2_0	=	0x00a0
                           0000A1   757 G$P2_1$0$0 == 0x00a1
                           0000A1   758 _P2_1	=	0x00a1
                           0000A2   759 G$P2_2$0$0 == 0x00a2
                           0000A2   760 _P2_2	=	0x00a2
                           0000A3   761 G$P2_3$0$0 == 0x00a3
                           0000A3   762 _P2_3	=	0x00a3
                           0000A4   763 G$P2_4$0$0 == 0x00a4
                           0000A4   764 _P2_4	=	0x00a4
                           0000A5   765 G$P2_5$0$0 == 0x00a5
                           0000A5   766 _P2_5	=	0x00a5
                           0000A6   767 G$P2_6$0$0 == 0x00a6
                           0000A6   768 _P2_6	=	0x00a6
                           0000A7   769 G$P2_7$0$0 == 0x00a7
                           0000A7   770 _P2_7	=	0x00a7
                           0000A8   771 G$EX0$0$0 == 0x00a8
                           0000A8   772 _EX0	=	0x00a8
                           0000A9   773 G$ET0$0$0 == 0x00a9
                           0000A9   774 _ET0	=	0x00a9
                           0000AA   775 G$EX1$0$0 == 0x00aa
                           0000AA   776 _EX1	=	0x00aa
                           0000AB   777 G$ET1$0$0 == 0x00ab
                           0000AB   778 _ET1	=	0x00ab
                           0000AC   779 G$ES0$0$0 == 0x00ac
                           0000AC   780 _ES0	=	0x00ac
                           0000AC   781 G$ES$0$0 == 0x00ac
                           0000AC   782 _ES	=	0x00ac
                           0000AD   783 G$ET2$0$0 == 0x00ad
                           0000AD   784 _ET2	=	0x00ad
                           0000AF   785 G$EA$0$0 == 0x00af
                           0000AF   786 _EA	=	0x00af
                           0000B0   787 G$P3_0$0$0 == 0x00b0
                           0000B0   788 _P3_0	=	0x00b0
                           0000B1   789 G$P3_1$0$0 == 0x00b1
                           0000B1   790 _P3_1	=	0x00b1
                           0000B2   791 G$P3_2$0$0 == 0x00b2
                           0000B2   792 _P3_2	=	0x00b2
                           0000B3   793 G$P3_3$0$0 == 0x00b3
                           0000B3   794 _P3_3	=	0x00b3
                           0000B4   795 G$P3_4$0$0 == 0x00b4
                           0000B4   796 _P3_4	=	0x00b4
                           0000B5   797 G$P3_5$0$0 == 0x00b5
                           0000B5   798 _P3_5	=	0x00b5
                           0000B6   799 G$P3_6$0$0 == 0x00b6
                           0000B6   800 _P3_6	=	0x00b6
                           0000B7   801 G$P3_7$0$0 == 0x00b7
                           0000B7   802 _P3_7	=	0x00b7
                           0000B8   803 G$PX0$0$0 == 0x00b8
                           0000B8   804 _PX0	=	0x00b8
                           0000B9   805 G$PT0$0$0 == 0x00b9
                           0000B9   806 _PT0	=	0x00b9
                           0000BA   807 G$PX1$0$0 == 0x00ba
                           0000BA   808 _PX1	=	0x00ba
                           0000BB   809 G$PT1$0$0 == 0x00bb
                           0000BB   810 _PT1	=	0x00bb
                           0000BC   811 G$PS0$0$0 == 0x00bc
                           0000BC   812 _PS0	=	0x00bc
                           0000BC   813 G$PS$0$0 == 0x00bc
                           0000BC   814 _PS	=	0x00bc
                           0000BD   815 G$PT2$0$0 == 0x00bd
                           0000BD   816 _PT2	=	0x00bd
                           0000C0   817 G$SMBTOE$0$0 == 0x00c0
                           0000C0   818 _SMBTOE	=	0x00c0
                           0000C1   819 G$SMBFTE$0$0 == 0x00c1
                           0000C1   820 _SMBFTE	=	0x00c1
                           0000C2   821 G$AA$0$0 == 0x00c2
                           0000C2   822 _AA	=	0x00c2
                           0000C3   823 G$SI$0$0 == 0x00c3
                           0000C3   824 _SI	=	0x00c3
                           0000C4   825 G$STO$0$0 == 0x00c4
                           0000C4   826 _STO	=	0x00c4
                           0000C5   827 G$STA$0$0 == 0x00c5
                           0000C5   828 _STA	=	0x00c5
                           0000C6   829 G$ENSMB$0$0 == 0x00c6
                           0000C6   830 _ENSMB	=	0x00c6
                           0000C7   831 G$BUSY$0$0 == 0x00c7
                           0000C7   832 _BUSY	=	0x00c7
                           0000C8   833 G$CPRL2$0$0 == 0x00c8
                           0000C8   834 _CPRL2	=	0x00c8
                           0000C9   835 G$CT2$0$0 == 0x00c9
                           0000C9   836 _CT2	=	0x00c9
                           0000CA   837 G$TR2$0$0 == 0x00ca
                           0000CA   838 _TR2	=	0x00ca
                           0000CB   839 G$EXEN2$0$0 == 0x00cb
                           0000CB   840 _EXEN2	=	0x00cb
                           0000CC   841 G$TCLK$0$0 == 0x00cc
                           0000CC   842 _TCLK	=	0x00cc
                           0000CD   843 G$RCLK$0$0 == 0x00cd
                           0000CD   844 _RCLK	=	0x00cd
                           0000CE   845 G$EXF2$0$0 == 0x00ce
                           0000CE   846 _EXF2	=	0x00ce
                           0000CF   847 G$TF2$0$0 == 0x00cf
                           0000CF   848 _TF2	=	0x00cf
                           0000D0   849 G$P$0$0 == 0x00d0
                           0000D0   850 _P	=	0x00d0
                           0000D1   851 G$F1$0$0 == 0x00d1
                           0000D1   852 _F1	=	0x00d1
                           0000D2   853 G$OV$0$0 == 0x00d2
                           0000D2   854 _OV	=	0x00d2
                           0000D3   855 G$RS0$0$0 == 0x00d3
                           0000D3   856 _RS0	=	0x00d3
                           0000D4   857 G$RS1$0$0 == 0x00d4
                           0000D4   858 _RS1	=	0x00d4
                           0000D5   859 G$F0$0$0 == 0x00d5
                           0000D5   860 _F0	=	0x00d5
                           0000D6   861 G$AC$0$0 == 0x00d6
                           0000D6   862 _AC	=	0x00d6
                           0000D7   863 G$CY$0$0 == 0x00d7
                           0000D7   864 _CY	=	0x00d7
                           0000D8   865 G$CCF0$0$0 == 0x00d8
                           0000D8   866 _CCF0	=	0x00d8
                           0000D9   867 G$CCF1$0$0 == 0x00d9
                           0000D9   868 _CCF1	=	0x00d9
                           0000DA   869 G$CCF2$0$0 == 0x00da
                           0000DA   870 _CCF2	=	0x00da
                           0000DB   871 G$CCF3$0$0 == 0x00db
                           0000DB   872 _CCF3	=	0x00db
                           0000DC   873 G$CCF4$0$0 == 0x00dc
                           0000DC   874 _CCF4	=	0x00dc
                           0000DE   875 G$CR$0$0 == 0x00de
                           0000DE   876 _CR	=	0x00de
                           0000DF   877 G$CF$0$0 == 0x00df
                           0000DF   878 _CF	=	0x00df
                           0000E8   879 G$ADLJST$0$0 == 0x00e8
                           0000E8   880 _ADLJST	=	0x00e8
                           0000E8   881 G$AD0LJST$0$0 == 0x00e8
                           0000E8   882 _AD0LJST	=	0x00e8
                           0000E9   883 G$ADWINT$0$0 == 0x00e9
                           0000E9   884 _ADWINT	=	0x00e9
                           0000E9   885 G$AD0WINT$0$0 == 0x00e9
                           0000E9   886 _AD0WINT	=	0x00e9
                           0000EA   887 G$ADSTM0$0$0 == 0x00ea
                           0000EA   888 _ADSTM0	=	0x00ea
                           0000EA   889 G$AD0CM0$0$0 == 0x00ea
                           0000EA   890 _AD0CM0	=	0x00ea
                           0000EB   891 G$ADSTM1$0$0 == 0x00eb
                           0000EB   892 _ADSTM1	=	0x00eb
                           0000EB   893 G$AD0CM1$0$0 == 0x00eb
                           0000EB   894 _AD0CM1	=	0x00eb
                           0000EC   895 G$ADBUSY$0$0 == 0x00ec
                           0000EC   896 _ADBUSY	=	0x00ec
                           0000EC   897 G$AD0BUSY$0$0 == 0x00ec
                           0000EC   898 _AD0BUSY	=	0x00ec
                           0000ED   899 G$ADCINT$0$0 == 0x00ed
                           0000ED   900 _ADCINT	=	0x00ed
                           0000ED   901 G$AD0INT$0$0 == 0x00ed
                           0000ED   902 _AD0INT	=	0x00ed
                           0000EE   903 G$ADCTM$0$0 == 0x00ee
                           0000EE   904 _ADCTM	=	0x00ee
                           0000EE   905 G$AD0TM$0$0 == 0x00ee
                           0000EE   906 _AD0TM	=	0x00ee
                           0000EF   907 G$ADCEN$0$0 == 0x00ef
                           0000EF   908 _ADCEN	=	0x00ef
                           0000EF   909 G$AD0EN$0$0 == 0x00ef
                           0000EF   910 _AD0EN	=	0x00ef
                           0000F8   911 G$SPIEN$0$0 == 0x00f8
                           0000F8   912 _SPIEN	=	0x00f8
                           0000F9   913 G$MSTEN$0$0 == 0x00f9
                           0000F9   914 _MSTEN	=	0x00f9
                           0000FA   915 G$SLVSEL$0$0 == 0x00fa
                           0000FA   916 _SLVSEL	=	0x00fa
                           0000FB   917 G$TXBSY$0$0 == 0x00fb
                           0000FB   918 _TXBSY	=	0x00fb
                           0000FC   919 G$RXOVRN$0$0 == 0x00fc
                           0000FC   920 _RXOVRN	=	0x00fc
                           0000FD   921 G$MODF$0$0 == 0x00fd
                           0000FD   922 _MODF	=	0x00fd
                           0000FE   923 G$WCOL$0$0 == 0x00fe
                           0000FE   924 _WCOL	=	0x00fe
                           0000FF   925 G$SPIF$0$0 == 0x00ff
                           0000FF   926 _SPIF	=	0x00ff
                           0000C7   927 G$BUS_BUSY$0$0 == 0x00c7
                           0000C7   928 _BUS_BUSY	=	0x00c7
                           0000C6   929 G$BUS_EN$0$0 == 0x00c6
                           0000C6   930 _BUS_EN	=	0x00c6
                           0000C5   931 G$BUS_START$0$0 == 0x00c5
                           0000C5   932 _BUS_START	=	0x00c5
                           0000C4   933 G$BUS_STOP$0$0 == 0x00c4
                           0000C4   934 _BUS_STOP	=	0x00c4
                           0000C3   935 G$BUS_INT$0$0 == 0x00c3
                           0000C3   936 _BUS_INT	=	0x00c3
                           0000C2   937 G$BUS_AA$0$0 == 0x00c2
                           0000C2   938 _BUS_AA	=	0x00c2
                           0000C1   939 G$BUS_FTE$0$0 == 0x00c1
                           0000C1   940 _BUS_FTE	=	0x00c1
                           0000C0   941 G$BUS_TOE$0$0 == 0x00c0
                           0000C0   942 _BUS_TOE	=	0x00c0
                           000083   943 G$BUS_SCL$0$0 == 0x0083
                           000083   944 _BUS_SCL	=	0x0083
                           0000B6   945 G$run$0$0 == 0x00b6
                           0000B6   946 _run	=	0x00b6
                                    947 ;--------------------------------------------------------
                                    948 ; overlayable register banks
                                    949 ;--------------------------------------------------------
                                    950 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        951 	.ds 8
                                    952 ;--------------------------------------------------------
                                    953 ; internal ram data
                                    954 ;--------------------------------------------------------
                                    955 	.area DSEG    (DATA)
                           000000   956 Llab5.lcd_clear$NumBytes$1$77==.
      000022                        957 _lcd_clear_NumBytes_1_77:
      000022                        958 	.ds 1
                           000001   959 Llab5.lcd_clear$Cmd$1$77==.
      000023                        960 _lcd_clear_Cmd_1_77:
      000023                        961 	.ds 2
                           000003   962 Llab5.read_keypad$Data$1$78==.
      000025                        963 _read_keypad_Data_1_78:
      000025                        964 	.ds 2
                           000005   965 Llab5.i2c_write_data$start_reg$1$97==.
      000027                        966 _i2c_write_data_PARM_2:
      000027                        967 	.ds 1
                           000006   968 Llab5.i2c_write_data$buffer$1$97==.
      000028                        969 _i2c_write_data_PARM_3:
      000028                        970 	.ds 3
                           000009   971 Llab5.i2c_write_data$num_bytes$1$97==.
      00002B                        972 _i2c_write_data_PARM_4:
      00002B                        973 	.ds 1
                           00000A   974 Llab5.i2c_read_data$start_reg$1$99==.
      00002C                        975 _i2c_read_data_PARM_2:
      00002C                        976 	.ds 1
                           00000B   977 Llab5.i2c_read_data$buffer$1$99==.
      00002D                        978 _i2c_read_data_PARM_3:
      00002D                        979 	.ds 3
                           00000E   980 Llab5.i2c_read_data$num_bytes$1$99==.
      000030                        981 _i2c_read_data_PARM_4:
      000030                        982 	.ds 1
                           00000F   983 Llab5.Accel_Init$Data2$1$103==.
      000031                        984 _Accel_Init_Data2_1_103:
      000031                        985 	.ds 1
                           000010   986 G$PW_CENTER$0$0==.
      000032                        987 _PW_CENTER::
      000032                        988 	.ds 2
                           000012   989 G$PW_RIGHT$0$0==.
      000034                        990 _PW_RIGHT::
      000034                        991 	.ds 2
                           000014   992 G$PW_LEFT$0$0==.
      000036                        993 _PW_LEFT::
      000036                        994 	.ds 2
                           000016   995 G$SERVO_PW$0$0==.
      000038                        996 _SERVO_PW::
      000038                        997 	.ds 2
                           000018   998 G$SERVO_MAX$0$0==.
      00003A                        999 _SERVO_MAX::
      00003A                       1000 	.ds 2
                           00001A  1001 G$SERVO_MIN$0$0==.
      00003C                       1002 _SERVO_MIN::
      00003C                       1003 	.ds 2
                           00001C  1004 G$DRV_PW$0$0==.
      00003E                       1005 _DRV_PW::
      00003E                       1006 	.ds 2
                           00001E  1007 G$STR_PW$0$0==.
      000040                       1008 _STR_PW::
      000040                       1009 	.ds 2
                           000020  1010 G$new_accels$0$0==.
      000042                       1011 _new_accels::
      000042                       1012 	.ds 1
                           000021  1013 G$new_lcd$0$0==.
      000043                       1014 _new_lcd::
      000043                       1015 	.ds 1
                           000022  1016 G$range$0$0==.
      000044                       1017 _range::
      000044                       1018 	.ds 2
                           000024  1019 G$count$0$0==.
      000046                       1020 _count::
      000046                       1021 	.ds 2
                           000026  1022 G$ks$0$0==.
      000048                       1023 _ks::
      000048                       1024 	.ds 1
                           000027  1025 G$kdy$0$0==.
      000049                       1026 _kdy::
      000049                       1027 	.ds 1
                           000028  1028 G$kdx$0$0==.
      00004A                       1029 _kdx::
      00004A                       1030 	.ds 1
                           000029  1031 G$ki$0$0==.
      00004B                       1032 _ki::
      00004B                       1033 	.ds 1
                           00002A  1034 G$gx$0$0==.
      00004C                       1035 _gx::
      00004C                       1036 	.ds 2
                           00002C  1037 G$gy$0$0==.
      00004E                       1038 _gy::
      00004E                       1039 	.ds 2
                           00002E  1040 G$xoff$0$0==.
      000050                       1041 _xoff::
      000050                       1042 	.ds 1
                           00002F  1043 G$yoff$0$0==.
      000051                       1044 _yoff::
      000051                       1045 	.ds 1
                           000030  1046 G$run_stop$0$0==.
      000052                       1047 _run_stop::
      000052                       1048 	.ds 1
                           000031  1049 G$error_sum$0$0==.
      000053                       1050 _error_sum::
      000053                       1051 	.ds 2
                           000033  1052 Llab5.Update_Value$incr$1$137==.
      000055                       1053 _Update_Value_PARM_2:
      000055                       1054 	.ds 1
                           000034  1055 Llab5.Update_Value$maxval$1$137==.
      000056                       1056 _Update_Value_PARM_3:
      000056                       1057 	.ds 2
                           000036  1058 Llab5.Update_Value$minval$1$137==.
      000058                       1059 _Update_Value_PARM_4:
      000058                       1060 	.ds 2
                           000038  1061 Llab5.read_accels$Data$1$144==.
      00005A                       1062 _read_accels_Data_1_144:
      00005A                       1063 	.ds 4
                           00003C  1064 Llab5.read_accels$avg_gx$1$144==.
      00005E                       1065 _read_accels_avg_gx_1_144:
      00005E                       1066 	.ds 2
                                   1067 ;--------------------------------------------------------
                                   1068 ; overlayable items in internal ram 
                                   1069 ;--------------------------------------------------------
                                   1070 	.area	OSEG    (OVR,DATA)
                                   1071 	.area	OSEG    (OVR,DATA)
                                   1072 	.area	OSEG    (OVR,DATA)
                                   1073 	.area	OSEG    (OVR,DATA)
                                   1074 	.area	OSEG    (OVR,DATA)
                                   1075 	.area	OSEG    (OVR,DATA)
                                   1076 	.area	OSEG    (OVR,DATA)
                                   1077 	.area	OSEG    (OVR,DATA)
                                   1078 ;--------------------------------------------------------
                                   1079 ; Stack segment in internal ram 
                                   1080 ;--------------------------------------------------------
                                   1081 	.area	SSEG
      00007A                       1082 __start__stack:
      00007A                       1083 	.ds	1
                                   1084 
                                   1085 ;--------------------------------------------------------
                                   1086 ; indirectly addressable internal ram data
                                   1087 ;--------------------------------------------------------
                                   1088 	.area ISEG    (DATA)
                                   1089 ;--------------------------------------------------------
                                   1090 ; absolute internal ram data
                                   1091 ;--------------------------------------------------------
                                   1092 	.area IABS    (ABS,DATA)
                                   1093 	.area IABS    (ABS,DATA)
                                   1094 ;--------------------------------------------------------
                                   1095 ; bit data
                                   1096 ;--------------------------------------------------------
                                   1097 	.area BSEG    (BIT)
                                   1098 ;--------------------------------------------------------
                                   1099 ; paged external ram data
                                   1100 ;--------------------------------------------------------
                                   1101 	.area PSEG    (PAG,XDATA)
                                   1102 ;--------------------------------------------------------
                                   1103 ; external ram data
                                   1104 ;--------------------------------------------------------
                                   1105 	.area XSEG    (XDATA)
                           000000  1106 Llab5.lcd_print$text$1$73==.
      000001                       1107 _lcd_print_text_1_73:
      000001                       1108 	.ds 80
                                   1109 ;--------------------------------------------------------
                                   1110 ; absolute external ram data
                                   1111 ;--------------------------------------------------------
                                   1112 	.area XABS    (ABS,XDATA)
                                   1113 ;--------------------------------------------------------
                                   1114 ; external initialized ram data
                                   1115 ;--------------------------------------------------------
                                   1116 	.area XISEG   (XDATA)
                                   1117 	.area HOME    (CODE)
                                   1118 	.area GSINIT0 (CODE)
                                   1119 	.area GSINIT1 (CODE)
                                   1120 	.area GSINIT2 (CODE)
                                   1121 	.area GSINIT3 (CODE)
                                   1122 	.area GSINIT4 (CODE)
                                   1123 	.area GSINIT5 (CODE)
                                   1124 	.area GSINIT  (CODE)
                                   1125 	.area GSFINAL (CODE)
                                   1126 	.area CSEG    (CODE)
                                   1127 ;--------------------------------------------------------
                                   1128 ; interrupt vector 
                                   1129 ;--------------------------------------------------------
                                   1130 	.area HOME    (CODE)
      000000                       1131 __interrupt_vect:
      000000 02 00 51         [24] 1132 	ljmp	__sdcc_gsinit_startup
      000003 32               [24] 1133 	reti
      000004                       1134 	.ds	7
      00000B 32               [24] 1135 	reti
      00000C                       1136 	.ds	7
      000013 32               [24] 1137 	reti
      000014                       1138 	.ds	7
      00001B 32               [24] 1139 	reti
      00001C                       1140 	.ds	7
      000023 32               [24] 1141 	reti
      000024                       1142 	.ds	7
      00002B 32               [24] 1143 	reti
      00002C                       1144 	.ds	7
      000033 32               [24] 1145 	reti
      000034                       1146 	.ds	7
      00003B 32               [24] 1147 	reti
      00003C                       1148 	.ds	7
      000043 32               [24] 1149 	reti
      000044                       1150 	.ds	7
      00004B 02 06 BE         [24] 1151 	ljmp	_PCA_ISR
                                   1152 ;--------------------------------------------------------
                                   1153 ; global & static initialisations
                                   1154 ;--------------------------------------------------------
                                   1155 	.area HOME    (CODE)
                                   1156 	.area GSINIT  (CODE)
                                   1157 	.area GSFINAL (CODE)
                                   1158 	.area GSINIT  (CODE)
                                   1159 	.globl __sdcc_gsinit_startup
                                   1160 	.globl __sdcc_program_startup
                                   1161 	.globl __start__stack
                                   1162 	.globl __mcs51_genXINIT
                                   1163 	.globl __mcs51_genXRAMCLEAR
                                   1164 	.globl __mcs51_genRAMCLEAR
                           000000  1165 	C$lab5.c$42$1$156 ==.
                                   1166 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:42: unsigned int PW_CENTER = 2675;
      0000AA 75 32 73         [24] 1167 	mov	_PW_CENTER,#0x73
      0000AD 75 33 0A         [24] 1168 	mov	(_PW_CENTER + 1),#0x0A
                           000006  1169 	C$lab5.c$43$1$156 ==.
                                   1170 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:43: unsigned int PW_RIGHT = 3175;
      0000B0 75 34 67         [24] 1171 	mov	_PW_RIGHT,#0x67
      0000B3 75 35 0C         [24] 1172 	mov	(_PW_RIGHT + 1),#0x0C
                           00000C  1173 	C$lab5.c$44$1$156 ==.
                                   1174 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:44: unsigned int PW_LEFT = 2135;
      0000B6 75 36 57         [24] 1175 	mov	_PW_LEFT,#0x57
      0000B9 75 37 08         [24] 1176 	mov	(_PW_LEFT + 1),#0x08
                           000012  1177 	C$lab5.c$45$1$156 ==.
                                   1178 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:45: unsigned int SERVO_PW = 2765;
      0000BC 75 38 CD         [24] 1179 	mov	_SERVO_PW,#0xCD
      0000BF 75 39 0A         [24] 1180 	mov	(_SERVO_PW + 1),#0x0A
                           000018  1181 	C$lab5.c$46$1$156 ==.
                                   1182 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:46: unsigned int SERVO_MAX= 3503;
      0000C2 75 3A AF         [24] 1183 	mov	_SERVO_MAX,#0xAF
      0000C5 75 3B 0D         [24] 1184 	mov	(_SERVO_MAX + 1),#0x0D
                           00001E  1185 	C$lab5.c$47$1$156 ==.
                                   1186 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:47: unsigned int SERVO_MIN= 2028;
      0000C8 75 3C EC         [24] 1187 	mov	_SERVO_MIN,#0xEC
      0000CB 75 3D 07         [24] 1188 	mov	(_SERVO_MIN + 1),#0x07
                           000024  1189 	C$lab5.c$50$1$156 ==.
                                   1190 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:50: unsigned char new_accels = 0; // flag for count of accel timing
      0000CE 75 42 00         [24] 1191 	mov	_new_accels,#0x00
                           000027  1192 	C$lab5.c$51$1$156 ==.
                                   1193 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:51: unsigned char new_lcd = 0; // flag for count of LCD timing
      0000D1 75 43 00         [24] 1194 	mov	_new_lcd,#0x00
                                   1195 	.area GSFINAL (CODE)
      0000D4 02 00 4E         [24] 1196 	ljmp	__sdcc_program_startup
                                   1197 ;--------------------------------------------------------
                                   1198 ; Home
                                   1199 ;--------------------------------------------------------
                                   1200 	.area HOME    (CODE)
                                   1201 	.area HOME    (CODE)
      00004E                       1202 __sdcc_program_startup:
      00004E 02 05 AD         [24] 1203 	ljmp	_main
                                   1204 ;	return from main will return to caller
                                   1205 ;--------------------------------------------------------
                                   1206 ; code
                                   1207 ;--------------------------------------------------------
                                   1208 	.area CSEG    (CODE)
                                   1209 ;------------------------------------------------------------
                                   1210 ;Allocation info for local variables in function 'SYSCLK_Init'
                                   1211 ;------------------------------------------------------------
                                   1212 ;i                         Allocated to registers 
                                   1213 ;------------------------------------------------------------
                           000000  1214 	G$SYSCLK_Init$0$0 ==.
                           000000  1215 	C$c8051_SDCC.h$42$0$0 ==.
                                   1216 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:42: void SYSCLK_Init(void)
                                   1217 ;	-----------------------------------------
                                   1218 ;	 function SYSCLK_Init
                                   1219 ;	-----------------------------------------
      0000D7                       1220 _SYSCLK_Init:
                           000007  1221 	ar7 = 0x07
                           000006  1222 	ar6 = 0x06
                           000005  1223 	ar5 = 0x05
                           000004  1224 	ar4 = 0x04
                           000003  1225 	ar3 = 0x03
                           000002  1226 	ar2 = 0x02
                           000001  1227 	ar1 = 0x01
                           000000  1228 	ar0 = 0x00
                           000000  1229 	C$c8051_SDCC.h$46$1$2 ==.
                                   1230 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:46: OSCXCN = 0x67;                      // start external oscillator with
      0000D7 75 B1 67         [24] 1231 	mov	_OSCXCN,#0x67
                           000003  1232 	C$c8051_SDCC.h$49$1$2 ==.
                                   1233 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:49: for (i=0; i < 256; i++);            // wait for oscillator to start
      0000DA 7E 00            [12] 1234 	mov	r6,#0x00
      0000DC 7F 01            [12] 1235 	mov	r7,#0x01
      0000DE                       1236 00107$:
      0000DE 1E               [12] 1237 	dec	r6
      0000DF BE FF 01         [24] 1238 	cjne	r6,#0xFF,00121$
      0000E2 1F               [12] 1239 	dec	r7
      0000E3                       1240 00121$:
      0000E3 EE               [12] 1241 	mov	a,r6
      0000E4 4F               [12] 1242 	orl	a,r7
      0000E5 70 F7            [24] 1243 	jnz	00107$
                           000010  1244 	C$c8051_SDCC.h$51$1$2 ==.
                                   1245 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:51: while (!(OSCXCN & 0x80));           // Wait for crystal osc. to settle
      0000E7                       1246 00102$:
      0000E7 E5 B1            [12] 1247 	mov	a,_OSCXCN
      0000E9 30 E7 FB         [24] 1248 	jnb	acc.7,00102$
                           000015  1249 	C$c8051_SDCC.h$53$1$2 ==.
                                   1250 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:53: OSCICN = 0x88;                      // select external oscillator as SYSCLK
      0000EC 75 B2 88         [24] 1251 	mov	_OSCICN,#0x88
                           000018  1252 	C$c8051_SDCC.h$56$1$2 ==.
                           000018  1253 	XG$SYSCLK_Init$0$0 ==.
      0000EF 22               [24] 1254 	ret
                                   1255 ;------------------------------------------------------------
                                   1256 ;Allocation info for local variables in function 'UART0_Init'
                                   1257 ;------------------------------------------------------------
                           000019  1258 	G$UART0_Init$0$0 ==.
                           000019  1259 	C$c8051_SDCC.h$64$1$2 ==.
                                   1260 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:64: void UART0_Init(void)
                                   1261 ;	-----------------------------------------
                                   1262 ;	 function UART0_Init
                                   1263 ;	-----------------------------------------
      0000F0                       1264 _UART0_Init:
                           000019  1265 	C$c8051_SDCC.h$66$1$4 ==.
                                   1266 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:66: SCON0  = 0x50;                      // SCON0: mode 1, 8-bit UART, enable RX
      0000F0 75 98 50         [24] 1267 	mov	_SCON0,#0x50
                           00001C  1268 	C$c8051_SDCC.h$67$1$4 ==.
                                   1269 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:67: TMOD   = 0x20;                      // TMOD: timer 1, mode 2, 8-bit reload
      0000F3 75 89 20         [24] 1270 	mov	_TMOD,#0x20
                           00001F  1271 	C$c8051_SDCC.h$68$1$4 ==.
                                   1272 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:68: TH1    = -(SYSCLK/BAUDRATE/16);     // set Timer1 reload value for baudrate
      0000F6 75 8D DC         [24] 1273 	mov	_TH1,#0xDC
                           000022  1274 	C$c8051_SDCC.h$69$1$4 ==.
                                   1275 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:69: TR1    = 1;                         // start Timer1
      0000F9 D2 8E            [12] 1276 	setb	_TR1
                           000024  1277 	C$c8051_SDCC.h$70$1$4 ==.
                                   1278 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:70: CKCON |= 0x10;                      // Timer1 uses SYSCLK as time base
      0000FB 43 8E 10         [24] 1279 	orl	_CKCON,#0x10
                           000027  1280 	C$c8051_SDCC.h$71$1$4 ==.
                                   1281 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:71: PCON  |= 0x80;                      // SMOD00 = 1 (disable baud rate 
      0000FE 43 87 80         [24] 1282 	orl	_PCON,#0x80
                           00002A  1283 	C$c8051_SDCC.h$73$1$4 ==.
                                   1284 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:73: TI0    = 1;                         // Indicate TX0 ready
      000101 D2 99            [12] 1285 	setb	_TI0
                           00002C  1286 	C$c8051_SDCC.h$74$1$4 ==.
                                   1287 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:74: P0MDOUT |= 0x01;                    // Set TX0 to push/pull
      000103 43 A4 01         [24] 1288 	orl	_P0MDOUT,#0x01
                           00002F  1289 	C$c8051_SDCC.h$75$1$4 ==.
                           00002F  1290 	XG$UART0_Init$0$0 ==.
      000106 22               [24] 1291 	ret
                                   1292 ;------------------------------------------------------------
                                   1293 ;Allocation info for local variables in function 'Sys_Init'
                                   1294 ;------------------------------------------------------------
                           000030  1295 	G$Sys_Init$0$0 ==.
                           000030  1296 	C$c8051_SDCC.h$83$1$4 ==.
                                   1297 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:83: void Sys_Init(void)
                                   1298 ;	-----------------------------------------
                                   1299 ;	 function Sys_Init
                                   1300 ;	-----------------------------------------
      000107                       1301 _Sys_Init:
                           000030  1302 	C$c8051_SDCC.h$85$1$6 ==.
                                   1303 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:85: WDTCN = 0xde;			// disable watchdog timer
      000107 75 FF DE         [24] 1304 	mov	_WDTCN,#0xDE
                           000033  1305 	C$c8051_SDCC.h$86$1$6 ==.
                                   1306 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:86: WDTCN = 0xad;
      00010A 75 FF AD         [24] 1307 	mov	_WDTCN,#0xAD
                           000036  1308 	C$c8051_SDCC.h$88$1$6 ==.
                                   1309 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:88: SYSCLK_Init();			// initialize oscillator
      00010D 12 00 D7         [24] 1310 	lcall	_SYSCLK_Init
                           000039  1311 	C$c8051_SDCC.h$89$1$6 ==.
                                   1312 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:89: UART0_Init();			// initialize UART0
      000110 12 00 F0         [24] 1313 	lcall	_UART0_Init
                           00003C  1314 	C$c8051_SDCC.h$91$1$6 ==.
                                   1315 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:91: XBR0 |= 0x04;
      000113 43 E1 04         [24] 1316 	orl	_XBR0,#0x04
                           00003F  1317 	C$c8051_SDCC.h$92$1$6 ==.
                                   1318 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:92: XBR2 |= 0x40;                    	// Enable crossbar and weak pull-ups
      000116 43 E3 40         [24] 1319 	orl	_XBR2,#0x40
                           000042  1320 	C$c8051_SDCC.h$93$1$6 ==.
                           000042  1321 	XG$Sys_Init$0$0 ==.
      000119 22               [24] 1322 	ret
                                   1323 ;------------------------------------------------------------
                                   1324 ;Allocation info for local variables in function 'putchar'
                                   1325 ;------------------------------------------------------------
                                   1326 ;c                         Allocated to registers r7 
                                   1327 ;------------------------------------------------------------
                           000043  1328 	G$putchar$0$0 ==.
                           000043  1329 	C$c8051_SDCC.h$98$1$6 ==.
                                   1330 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:98: void putchar(char c)
                                   1331 ;	-----------------------------------------
                                   1332 ;	 function putchar
                                   1333 ;	-----------------------------------------
      00011A                       1334 _putchar:
      00011A AF 82            [24] 1335 	mov	r7,dpl
                           000045  1336 	C$c8051_SDCC.h$100$1$8 ==.
                                   1337 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:100: while (!TI0); 
      00011C                       1338 00101$:
                           000045  1339 	C$c8051_SDCC.h$101$1$8 ==.
                                   1340 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:101: TI0 = 0;
      00011C 10 99 02         [24] 1341 	jbc	_TI0,00112$
      00011F 80 FB            [24] 1342 	sjmp	00101$
      000121                       1343 00112$:
                           00004A  1344 	C$c8051_SDCC.h$102$1$8 ==.
                                   1345 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:102: SBUF0 = c;
      000121 8F 99            [24] 1346 	mov	_SBUF0,r7
                           00004C  1347 	C$c8051_SDCC.h$103$1$8 ==.
                           00004C  1348 	XG$putchar$0$0 ==.
      000123 22               [24] 1349 	ret
                                   1350 ;------------------------------------------------------------
                                   1351 ;Allocation info for local variables in function 'getchar'
                                   1352 ;------------------------------------------------------------
                                   1353 ;c                         Allocated to registers 
                                   1354 ;------------------------------------------------------------
                           00004D  1355 	G$getchar$0$0 ==.
                           00004D  1356 	C$c8051_SDCC.h$108$1$8 ==.
                                   1357 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:108: char getchar(void)
                                   1358 ;	-----------------------------------------
                                   1359 ;	 function getchar
                                   1360 ;	-----------------------------------------
      000124                       1361 _getchar:
                           00004D  1362 	C$c8051_SDCC.h$111$1$10 ==.
                                   1363 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:111: while (!RI0);
      000124                       1364 00101$:
                           00004D  1365 	C$c8051_SDCC.h$112$1$10 ==.
                                   1366 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:112: RI0 = 0;
      000124 10 98 02         [24] 1367 	jbc	_RI0,00112$
      000127 80 FB            [24] 1368 	sjmp	00101$
      000129                       1369 00112$:
                           000052  1370 	C$c8051_SDCC.h$113$1$10 ==.
                                   1371 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:113: c = SBUF0;
      000129 85 99 82         [24] 1372 	mov	dpl,_SBUF0
                           000055  1373 	C$c8051_SDCC.h$114$1$10 ==.
                                   1374 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:114: putchar(c);                          // echo to terminal
      00012C 12 01 1A         [24] 1375 	lcall	_putchar
                           000058  1376 	C$c8051_SDCC.h$115$1$10 ==.
                                   1377 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:115: return SBUF0;
      00012F 85 99 82         [24] 1378 	mov	dpl,_SBUF0
                           00005B  1379 	C$c8051_SDCC.h$116$1$10 ==.
                           00005B  1380 	XG$getchar$0$0 ==.
      000132 22               [24] 1381 	ret
                                   1382 ;------------------------------------------------------------
                                   1383 ;Allocation info for local variables in function 'lcd_print'
                                   1384 ;------------------------------------------------------------
                                   1385 ;fmt                       Allocated to stack - _bp -5
                                   1386 ;len                       Allocated to registers r6 
                                   1387 ;i                         Allocated to registers 
                                   1388 ;ap                        Allocated to registers 
                                   1389 ;text                      Allocated with name '_lcd_print_text_1_73'
                                   1390 ;------------------------------------------------------------
                           00005C  1391 	G$lcd_print$0$0 ==.
                           00005C  1392 	C$i2c.h$81$1$10 ==.
                                   1393 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:81: void lcd_print(const char *fmt, ...)
                                   1394 ;	-----------------------------------------
                                   1395 ;	 function lcd_print
                                   1396 ;	-----------------------------------------
      000133                       1397 _lcd_print:
      000133 C0 0F            [24] 1398 	push	_bp
      000135 85 81 0F         [24] 1399 	mov	_bp,sp
                           000061  1400 	C$i2c.h$87$1$73 ==.
                                   1401 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:87: if ( strlen(fmt) <= 0 ) return;   //If there is no data to print, return
      000138 E5 0F            [12] 1402 	mov	a,_bp
      00013A 24 FB            [12] 1403 	add	a,#0xfb
      00013C F8               [12] 1404 	mov	r0,a
      00013D 86 82            [24] 1405 	mov	dpl,@r0
      00013F 08               [12] 1406 	inc	r0
      000140 86 83            [24] 1407 	mov	dph,@r0
      000142 08               [12] 1408 	inc	r0
      000143 86 F0            [24] 1409 	mov	b,@r0
      000145 12 11 A2         [24] 1410 	lcall	_strlen
      000148 E5 82            [12] 1411 	mov	a,dpl
      00014A 85 83 F0         [24] 1412 	mov	b,dph
      00014D 45 F0            [12] 1413 	orl	a,b
      00014F 70 02            [24] 1414 	jnz	00102$
      000151 80 62            [24] 1415 	sjmp	00109$
      000153                       1416 00102$:
                           00007C  1417 	C$i2c.h$89$2$74 ==.
                                   1418 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:89: va_start(ap, fmt);
      000153 E5 0F            [12] 1419 	mov	a,_bp
      000155 24 FB            [12] 1420 	add	a,#0xFB
      000157 FF               [12] 1421 	mov	r7,a
      000158 8F 0B            [24] 1422 	mov	_vsprintf_PARM_3,r7
                           000083  1423 	C$i2c.h$90$1$73 ==.
                                   1424 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:90: vsprintf(text, fmt, ap);
      00015A E5 0F            [12] 1425 	mov	a,_bp
      00015C 24 FB            [12] 1426 	add	a,#0xfb
      00015E F8               [12] 1427 	mov	r0,a
      00015F 86 08            [24] 1428 	mov	_vsprintf_PARM_2,@r0
      000161 08               [12] 1429 	inc	r0
      000162 86 09            [24] 1430 	mov	(_vsprintf_PARM_2 + 1),@r0
      000164 08               [12] 1431 	inc	r0
      000165 86 0A            [24] 1432 	mov	(_vsprintf_PARM_2 + 2),@r0
      000167 90 00 01         [24] 1433 	mov	dptr,#_lcd_print_text_1_73
      00016A 75 F0 00         [24] 1434 	mov	b,#0x00
      00016D 12 0A A1         [24] 1435 	lcall	_vsprintf
                           000099  1436 	C$i2c.h$93$1$73 ==.
                                   1437 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:93: len = strlen(text);
      000170 90 00 01         [24] 1438 	mov	dptr,#_lcd_print_text_1_73
      000173 75 F0 00         [24] 1439 	mov	b,#0x00
      000176 12 11 A2         [24] 1440 	lcall	_strlen
      000179 AE 82            [24] 1441 	mov	r6,dpl
                           0000A4  1442 	C$i2c.h$94$1$73 ==.
                                   1443 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:94: for(i=0; i<len; i++)
      00017B 7F 00            [12] 1444 	mov	r7,#0x00
      00017D                       1445 00107$:
      00017D C3               [12] 1446 	clr	c
      00017E EF               [12] 1447 	mov	a,r7
      00017F 9E               [12] 1448 	subb	a,r6
      000180 50 1F            [24] 1449 	jnc	00105$
                           0000AB  1450 	C$i2c.h$96$2$76 ==.
                                   1451 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:96: if(text[i] == (unsigned char)'\n') text[i] = 13;
      000182 EF               [12] 1452 	mov	a,r7
      000183 24 01            [12] 1453 	add	a,#_lcd_print_text_1_73
      000185 F5 82            [12] 1454 	mov	dpl,a
      000187 E4               [12] 1455 	clr	a
      000188 34 00            [12] 1456 	addc	a,#(_lcd_print_text_1_73 >> 8)
      00018A F5 83            [12] 1457 	mov	dph,a
      00018C E0               [24] 1458 	movx	a,@dptr
      00018D FD               [12] 1459 	mov	r5,a
      00018E BD 0A 0D         [24] 1460 	cjne	r5,#0x0A,00108$
      000191 EF               [12] 1461 	mov	a,r7
      000192 24 01            [12] 1462 	add	a,#_lcd_print_text_1_73
      000194 F5 82            [12] 1463 	mov	dpl,a
      000196 E4               [12] 1464 	clr	a
      000197 34 00            [12] 1465 	addc	a,#(_lcd_print_text_1_73 >> 8)
      000199 F5 83            [12] 1466 	mov	dph,a
      00019B 74 0D            [12] 1467 	mov	a,#0x0D
      00019D F0               [24] 1468 	movx	@dptr,a
      00019E                       1469 00108$:
                           0000C7  1470 	C$i2c.h$94$1$73 ==.
                                   1471 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:94: for(i=0; i<len; i++)
      00019E 0F               [12] 1472 	inc	r7
      00019F 80 DC            [24] 1473 	sjmp	00107$
      0001A1                       1474 00105$:
                           0000CA  1475 	C$i2c.h$99$1$73 ==.
                                   1476 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:99: i2c_write_data(0xC6, 0x00, text, len);
      0001A1 75 28 01         [24] 1477 	mov	_i2c_write_data_PARM_3,#_lcd_print_text_1_73
      0001A4 75 29 00         [24] 1478 	mov	(_i2c_write_data_PARM_3 + 1),#(_lcd_print_text_1_73 >> 8)
      0001A7 75 2A 00         [24] 1479 	mov	(_i2c_write_data_PARM_3 + 2),#0x00
      0001AA 75 27 00         [24] 1480 	mov	_i2c_write_data_PARM_2,#0x00
      0001AD 8E 2B            [24] 1481 	mov	_i2c_write_data_PARM_4,r6
      0001AF 75 82 C6         [24] 1482 	mov	dpl,#0xC6
      0001B2 12 04 49         [24] 1483 	lcall	_i2c_write_data
      0001B5                       1484 00109$:
      0001B5 D0 0F            [24] 1485 	pop	_bp
                           0000E0  1486 	C$i2c.h$100$1$73 ==.
                           0000E0  1487 	XG$lcd_print$0$0 ==.
      0001B7 22               [24] 1488 	ret
                                   1489 ;------------------------------------------------------------
                                   1490 ;Allocation info for local variables in function 'lcd_clear'
                                   1491 ;------------------------------------------------------------
                                   1492 ;NumBytes                  Allocated with name '_lcd_clear_NumBytes_1_77'
                                   1493 ;Cmd                       Allocated with name '_lcd_clear_Cmd_1_77'
                                   1494 ;------------------------------------------------------------
                           0000E1  1495 	G$lcd_clear$0$0 ==.
                           0000E1  1496 	C$i2c.h$103$1$73 ==.
                                   1497 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:103: void lcd_clear()
                                   1498 ;	-----------------------------------------
                                   1499 ;	 function lcd_clear
                                   1500 ;	-----------------------------------------
      0001B8                       1501 _lcd_clear:
                           0000E1  1502 	C$i2c.h$105$1$73 ==.
                                   1503 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:105: unsigned char NumBytes=0, Cmd[2];
      0001B8 75 22 00         [24] 1504 	mov	_lcd_clear_NumBytes_1_77,#0x00
                           0000E4  1505 	C$i2c.h$107$1$77 ==.
                                   1506 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:107: while(NumBytes < 64) i2c_read_data(0xC6, 0x00, &NumBytes, 1);
      0001BB                       1507 00101$:
      0001BB 74 C0            [12] 1508 	mov	a,#0x100 - 0x40
      0001BD 25 22            [12] 1509 	add	a,_lcd_clear_NumBytes_1_77
      0001BF 40 17            [24] 1510 	jc	00103$
      0001C1 75 2D 22         [24] 1511 	mov	_i2c_read_data_PARM_3,#_lcd_clear_NumBytes_1_77
      0001C4 75 2E 00         [24] 1512 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0001C7 75 2F 40         [24] 1513 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0001CA 75 2C 00         [24] 1514 	mov	_i2c_read_data_PARM_2,#0x00
      0001CD 75 30 01         [24] 1515 	mov	_i2c_read_data_PARM_4,#0x01
      0001D0 75 82 C6         [24] 1516 	mov	dpl,#0xC6
      0001D3 12 04 BF         [24] 1517 	lcall	_i2c_read_data
      0001D6 80 E3            [24] 1518 	sjmp	00101$
      0001D8                       1519 00103$:
                           000101  1520 	C$i2c.h$109$1$77 ==.
                                   1521 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:109: Cmd[0] = 12;
      0001D8 75 23 0C         [24] 1522 	mov	_lcd_clear_Cmd_1_77,#0x0C
                           000104  1523 	C$i2c.h$110$1$77 ==.
                                   1524 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:110: i2c_write_data(0xC6, 0x00, Cmd, 1);
      0001DB 75 28 23         [24] 1525 	mov	_i2c_write_data_PARM_3,#_lcd_clear_Cmd_1_77
      0001DE 75 29 00         [24] 1526 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      0001E1 75 2A 40         [24] 1527 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      0001E4 75 27 00         [24] 1528 	mov	_i2c_write_data_PARM_2,#0x00
      0001E7 75 2B 01         [24] 1529 	mov	_i2c_write_data_PARM_4,#0x01
      0001EA 75 82 C6         [24] 1530 	mov	dpl,#0xC6
      0001ED 12 04 49         [24] 1531 	lcall	_i2c_write_data
                           000119  1532 	C$i2c.h$111$1$77 ==.
                           000119  1533 	XG$lcd_clear$0$0 ==.
      0001F0 22               [24] 1534 	ret
                                   1535 ;------------------------------------------------------------
                                   1536 ;Allocation info for local variables in function 'read_keypad'
                                   1537 ;------------------------------------------------------------
                                   1538 ;i                         Allocated to registers r7 
                                   1539 ;Data                      Allocated with name '_read_keypad_Data_1_78'
                                   1540 ;------------------------------------------------------------
                           00011A  1541 	G$read_keypad$0$0 ==.
                           00011A  1542 	C$i2c.h$114$1$77 ==.
                                   1543 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:114: char read_keypad()
                                   1544 ;	-----------------------------------------
                                   1545 ;	 function read_keypad
                                   1546 ;	-----------------------------------------
      0001F1                       1547 _read_keypad:
                           00011A  1548 	C$i2c.h$118$1$78 ==.
                                   1549 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:118: i2c_read_data(0xC6, 0x01, Data, 2); //Read I2C data on address 192, register 1, 2 bytes of data.
      0001F1 75 2D 25         [24] 1550 	mov	_i2c_read_data_PARM_3,#_read_keypad_Data_1_78
      0001F4 75 2E 00         [24] 1551 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0001F7 75 2F 40         [24] 1552 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0001FA 75 2C 01         [24] 1553 	mov	_i2c_read_data_PARM_2,#0x01
      0001FD 75 30 02         [24] 1554 	mov	_i2c_read_data_PARM_4,#0x02
      000200 75 82 C6         [24] 1555 	mov	dpl,#0xC6
      000203 12 04 BF         [24] 1556 	lcall	_i2c_read_data
                           00012F  1557 	C$i2c.h$119$1$78 ==.
                                   1558 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:119: if(Data[0] == 0xFF) return 0;  //No response on bus, no display
      000206 74 FF            [12] 1559 	mov	a,#0xFF
      000208 B5 25 05         [24] 1560 	cjne	a,_read_keypad_Data_1_78,00102$
      00020B 75 82 00         [24] 1561 	mov	dpl,#0x00
      00020E 80 5F            [24] 1562 	sjmp	00116$
      000210                       1563 00102$:
                           000139  1564 	C$i2c.h$121$1$78 ==.
                                   1565 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:121: for(i=0; i<8; i++)             //loop 8 times
      000210 7F 00            [12] 1566 	mov	r7,#0x00
      000212 8F 06            [24] 1567 	mov	ar6,r7
      000214                       1568 00114$:
                           00013D  1569 	C$i2c.h$123$2$79 ==.
                                   1570 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:123: if(Data[0] & (0x01 << i))  //find the ASCII value of the keypad read, if it is the current loop value
      000214 8E F0            [24] 1571 	mov	b,r6
      000216 05 F0            [12] 1572 	inc	b
      000218 7C 01            [12] 1573 	mov	r4,#0x01
      00021A 7D 00            [12] 1574 	mov	r5,#0x00
      00021C 80 06            [24] 1575 	sjmp	00145$
      00021E                       1576 00144$:
      00021E EC               [12] 1577 	mov	a,r4
      00021F 2C               [12] 1578 	add	a,r4
      000220 FC               [12] 1579 	mov	r4,a
      000221 ED               [12] 1580 	mov	a,r5
      000222 33               [12] 1581 	rlc	a
      000223 FD               [12] 1582 	mov	r5,a
      000224                       1583 00145$:
      000224 D5 F0 F7         [24] 1584 	djnz	b,00144$
      000227 AA 25            [24] 1585 	mov	r2,_read_keypad_Data_1_78
      000229 7B 00            [12] 1586 	mov	r3,#0x00
      00022B EA               [12] 1587 	mov	a,r2
      00022C 52 04            [12] 1588 	anl	ar4,a
      00022E EB               [12] 1589 	mov	a,r3
      00022F 52 05            [12] 1590 	anl	ar5,a
      000231 EC               [12] 1591 	mov	a,r4
      000232 4D               [12] 1592 	orl	a,r5
      000233 60 07            [24] 1593 	jz	00115$
                           00015E  1594 	C$i2c.h$124$2$79 ==.
                                   1595 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:124: return i+49;
      000235 74 31            [12] 1596 	mov	a,#0x31
      000237 2F               [12] 1597 	add	a,r7
      000238 F5 82            [12] 1598 	mov	dpl,a
      00023A 80 33            [24] 1599 	sjmp	00116$
      00023C                       1600 00115$:
                           000165  1601 	C$i2c.h$121$1$78 ==.
                                   1602 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:121: for(i=0; i<8; i++)             //loop 8 times
      00023C 0E               [12] 1603 	inc	r6
      00023D 8E 07            [24] 1604 	mov	ar7,r6
      00023F BE 08 00         [24] 1605 	cjne	r6,#0x08,00147$
      000242                       1606 00147$:
      000242 40 D0            [24] 1607 	jc	00114$
                           00016D  1608 	C$i2c.h$127$1$78 ==.
                                   1609 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:127: if(Data[1] & 0x01) return '9'; //if the value is equal to 9 return 9.
      000244 E5 26            [12] 1610 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000246 30 E0 05         [24] 1611 	jnb	acc.0,00107$
      000249 75 82 39         [24] 1612 	mov	dpl,#0x39
      00024C 80 21            [24] 1613 	sjmp	00116$
      00024E                       1614 00107$:
                           000177  1615 	C$i2c.h$129$1$78 ==.
                                   1616 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:129: if(Data[1] & 0x02) return '*'; //if the value is equal to the star.
      00024E E5 26            [12] 1617 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000250 30 E1 05         [24] 1618 	jnb	acc.1,00109$
      000253 75 82 2A         [24] 1619 	mov	dpl,#0x2A
      000256 80 17            [24] 1620 	sjmp	00116$
      000258                       1621 00109$:
                           000181  1622 	C$i2c.h$131$1$78 ==.
                                   1623 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:131: if(Data[1] & 0x04) return '0'; //if the value is equal to the 0 key
      000258 E5 26            [12] 1624 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      00025A 30 E2 05         [24] 1625 	jnb	acc.2,00111$
      00025D 75 82 30         [24] 1626 	mov	dpl,#0x30
      000260 80 0D            [24] 1627 	sjmp	00116$
      000262                       1628 00111$:
                           00018B  1629 	C$i2c.h$133$1$78 ==.
                                   1630 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:133: if(Data[1] & 0x08) return '#'; //if the value is equal to the pound key
      000262 E5 26            [12] 1631 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000264 30 E3 05         [24] 1632 	jnb	acc.3,00113$
      000267 75 82 23         [24] 1633 	mov	dpl,#0x23
      00026A 80 03            [24] 1634 	sjmp	00116$
      00026C                       1635 00113$:
                           000195  1636 	C$i2c.h$135$1$78 ==.
                                   1637 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:135: return -1;                     //else return a numerical -1 (0xFF)
      00026C 75 82 FF         [24] 1638 	mov	dpl,#0xFF
      00026F                       1639 00116$:
                           000198  1640 	C$i2c.h$136$1$78 ==.
                           000198  1641 	XG$read_keypad$0$0 ==.
      00026F 22               [24] 1642 	ret
                                   1643 ;------------------------------------------------------------
                                   1644 ;Allocation info for local variables in function 'kpd_input'
                                   1645 ;------------------------------------------------------------
                                   1646 ;mode                      Allocated to registers r7 
                                   1647 ;sum                       Allocated to registers r5 r6 
                                   1648 ;key                       Allocated to registers r3 
                                   1649 ;i                         Allocated to registers 
                                   1650 ;------------------------------------------------------------
                           000199  1651 	G$kpd_input$0$0 ==.
                           000199  1652 	C$i2c.h$148$1$78 ==.
                                   1653 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:148: unsigned int kpd_input(char mode)
                                   1654 ;	-----------------------------------------
                                   1655 ;	 function kpd_input
                                   1656 ;	-----------------------------------------
      000270                       1657 _kpd_input:
      000270 AF 82            [24] 1658 	mov	r7,dpl
                           00019B  1659 	C$i2c.h$153$1$81 ==.
                                   1660 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:153: sum = 0;
                           00019B  1661 	C$i2c.h$156$1$81 ==.
                                   1662 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:156: if(mode==0)lcd_print("\nType digits; end w/#");
      000272 E4               [12] 1663 	clr	a
      000273 FD               [12] 1664 	mov	r5,a
      000274 FE               [12] 1665 	mov	r6,a
      000275 EF               [12] 1666 	mov	a,r7
      000276 70 1D            [24] 1667 	jnz	00102$
      000278 C0 06            [24] 1668 	push	ar6
      00027A C0 05            [24] 1669 	push	ar5
      00027C 74 12            [12] 1670 	mov	a,#___str_0
      00027E C0 E0            [24] 1671 	push	acc
      000280 74 12            [12] 1672 	mov	a,#(___str_0 >> 8)
      000282 C0 E0            [24] 1673 	push	acc
      000284 74 80            [12] 1674 	mov	a,#0x80
      000286 C0 E0            [24] 1675 	push	acc
      000288 12 01 33         [24] 1676 	lcall	_lcd_print
      00028B 15 81            [12] 1677 	dec	sp
      00028D 15 81            [12] 1678 	dec	sp
      00028F 15 81            [12] 1679 	dec	sp
      000291 D0 05            [24] 1680 	pop	ar5
      000293 D0 06            [24] 1681 	pop	ar6
      000295                       1682 00102$:
                           0001BE  1683 	C$i2c.h$158$1$81 ==.
                                   1684 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:158: lcd_print("     %c%c%c%c%c",0x08,0x08,0x08,0x08,0x08);
      000295 C0 06            [24] 1685 	push	ar6
      000297 C0 05            [24] 1686 	push	ar5
      000299 74 08            [12] 1687 	mov	a,#0x08
      00029B C0 E0            [24] 1688 	push	acc
      00029D E4               [12] 1689 	clr	a
      00029E C0 E0            [24] 1690 	push	acc
      0002A0 74 08            [12] 1691 	mov	a,#0x08
      0002A2 C0 E0            [24] 1692 	push	acc
      0002A4 E4               [12] 1693 	clr	a
      0002A5 C0 E0            [24] 1694 	push	acc
      0002A7 74 08            [12] 1695 	mov	a,#0x08
      0002A9 C0 E0            [24] 1696 	push	acc
      0002AB E4               [12] 1697 	clr	a
      0002AC C0 E0            [24] 1698 	push	acc
      0002AE 74 08            [12] 1699 	mov	a,#0x08
      0002B0 C0 E0            [24] 1700 	push	acc
      0002B2 E4               [12] 1701 	clr	a
      0002B3 C0 E0            [24] 1702 	push	acc
      0002B5 74 08            [12] 1703 	mov	a,#0x08
      0002B7 C0 E0            [24] 1704 	push	acc
      0002B9 E4               [12] 1705 	clr	a
      0002BA C0 E0            [24] 1706 	push	acc
      0002BC 74 28            [12] 1707 	mov	a,#___str_1
      0002BE C0 E0            [24] 1708 	push	acc
      0002C0 74 12            [12] 1709 	mov	a,#(___str_1 >> 8)
      0002C2 C0 E0            [24] 1710 	push	acc
      0002C4 74 80            [12] 1711 	mov	a,#0x80
      0002C6 C0 E0            [24] 1712 	push	acc
      0002C8 12 01 33         [24] 1713 	lcall	_lcd_print
      0002CB E5 81            [12] 1714 	mov	a,sp
      0002CD 24 F3            [12] 1715 	add	a,#0xf3
      0002CF F5 81            [12] 1716 	mov	sp,a
                           0001FA  1717 	C$i2c.h$160$1$81 ==.
                                   1718 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:160: delay_time(500000);	//Add 20ms delay before reading i2c in loop
      0002D1 90 A1 20         [24] 1719 	mov	dptr,#0xA120
      0002D4 75 F0 07         [24] 1720 	mov	b,#0x07
      0002D7 E4               [12] 1721 	clr	a
      0002D8 12 03 E4         [24] 1722 	lcall	_delay_time
      0002DB D0 05            [24] 1723 	pop	ar5
      0002DD D0 06            [24] 1724 	pop	ar6
                           000208  1725 	C$i2c.h$164$1$81 ==.
                                   1726 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:164: for(i=0; i<5; i++)
      0002DF 7F 00            [12] 1727 	mov	r7,#0x00
                           00020A  1728 	C$i2c.h$166$3$84 ==.
                                   1729 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:166: while(((key=read_keypad()) == -1) || (key == '*'))delay_time(10000);
      0002E1                       1730 00104$:
      0002E1 C0 07            [24] 1731 	push	ar7
      0002E3 C0 06            [24] 1732 	push	ar6
      0002E5 C0 05            [24] 1733 	push	ar5
      0002E7 12 01 F1         [24] 1734 	lcall	_read_keypad
      0002EA AC 82            [24] 1735 	mov	r4,dpl
      0002EC D0 05            [24] 1736 	pop	ar5
      0002EE D0 06            [24] 1737 	pop	ar6
      0002F0 D0 07            [24] 1738 	pop	ar7
      0002F2 8C 03            [24] 1739 	mov	ar3,r4
      0002F4 BC FF 02         [24] 1740 	cjne	r4,#0xFF,00146$
      0002F7 80 03            [24] 1741 	sjmp	00105$
      0002F9                       1742 00146$:
      0002F9 BB 2A 17         [24] 1743 	cjne	r3,#0x2A,00106$
      0002FC                       1744 00105$:
      0002FC 90 27 10         [24] 1745 	mov	dptr,#0x2710
      0002FF E4               [12] 1746 	clr	a
      000300 F5 F0            [12] 1747 	mov	b,a
      000302 C0 07            [24] 1748 	push	ar7
      000304 C0 06            [24] 1749 	push	ar6
      000306 C0 05            [24] 1750 	push	ar5
      000308 12 03 E4         [24] 1751 	lcall	_delay_time
      00030B D0 05            [24] 1752 	pop	ar5
      00030D D0 06            [24] 1753 	pop	ar6
      00030F D0 07            [24] 1754 	pop	ar7
      000311 80 CE            [24] 1755 	sjmp	00104$
      000313                       1756 00106$:
                           00023C  1757 	C$i2c.h$167$2$82 ==.
                                   1758 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:167: if(key == '#')
      000313 BB 23 2A         [24] 1759 	cjne	r3,#0x23,00114$
                           00023F  1760 	C$i2c.h$169$3$83 ==.
                                   1761 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:169: while(read_keypad() == '#')delay_time(10000);
      000316                       1762 00107$:
      000316 C0 06            [24] 1763 	push	ar6
      000318 C0 05            [24] 1764 	push	ar5
      00031A 12 01 F1         [24] 1765 	lcall	_read_keypad
      00031D AC 82            [24] 1766 	mov	r4,dpl
      00031F D0 05            [24] 1767 	pop	ar5
      000321 D0 06            [24] 1768 	pop	ar6
      000323 BC 23 13         [24] 1769 	cjne	r4,#0x23,00109$
      000326 90 27 10         [24] 1770 	mov	dptr,#0x2710
      000329 E4               [12] 1771 	clr	a
      00032A F5 F0            [12] 1772 	mov	b,a
      00032C C0 06            [24] 1773 	push	ar6
      00032E C0 05            [24] 1774 	push	ar5
      000330 12 03 E4         [24] 1775 	lcall	_delay_time
      000333 D0 05            [24] 1776 	pop	ar5
      000335 D0 06            [24] 1777 	pop	ar6
      000337 80 DD            [24] 1778 	sjmp	00107$
      000339                       1779 00109$:
                           000262  1780 	C$i2c.h$170$3$83 ==.
                                   1781 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:170: return sum;
      000339 8D 82            [24] 1782 	mov	dpl,r5
      00033B 8E 83            [24] 1783 	mov	dph,r6
      00033D 02 03 E3         [24] 1784 	ljmp	00119$
      000340                       1785 00114$:
                           000269  1786 	C$i2c.h$174$3$84 ==.
                                   1787 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:174: lcd_print("%c", key);
      000340 EB               [12] 1788 	mov	a,r3
      000341 FA               [12] 1789 	mov	r2,a
      000342 33               [12] 1790 	rlc	a
      000343 95 E0            [12] 1791 	subb	a,acc
      000345 FC               [12] 1792 	mov	r4,a
      000346 C0 07            [24] 1793 	push	ar7
      000348 C0 06            [24] 1794 	push	ar6
      00034A C0 05            [24] 1795 	push	ar5
      00034C C0 04            [24] 1796 	push	ar4
      00034E C0 03            [24] 1797 	push	ar3
      000350 C0 02            [24] 1798 	push	ar2
      000352 C0 02            [24] 1799 	push	ar2
      000354 C0 04            [24] 1800 	push	ar4
      000356 74 38            [12] 1801 	mov	a,#___str_2
      000358 C0 E0            [24] 1802 	push	acc
      00035A 74 12            [12] 1803 	mov	a,#(___str_2 >> 8)
      00035C C0 E0            [24] 1804 	push	acc
      00035E 74 80            [12] 1805 	mov	a,#0x80
      000360 C0 E0            [24] 1806 	push	acc
      000362 12 01 33         [24] 1807 	lcall	_lcd_print
      000365 E5 81            [12] 1808 	mov	a,sp
      000367 24 FB            [12] 1809 	add	a,#0xfb
      000369 F5 81            [12] 1810 	mov	sp,a
      00036B D0 02            [24] 1811 	pop	ar2
      00036D D0 03            [24] 1812 	pop	ar3
      00036F D0 04            [24] 1813 	pop	ar4
      000371 D0 05            [24] 1814 	pop	ar5
      000373 D0 06            [24] 1815 	pop	ar6
                           00029E  1816 	C$i2c.h$175$1$81 ==.
                                   1817 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:175: sum = sum*10 + key - '0';
      000375 8D 11            [24] 1818 	mov	__mulint_PARM_2,r5
      000377 8E 12            [24] 1819 	mov	(__mulint_PARM_2 + 1),r6
      000379 90 00 0A         [24] 1820 	mov	dptr,#0x000A
      00037C C0 04            [24] 1821 	push	ar4
      00037E C0 03            [24] 1822 	push	ar3
      000380 C0 02            [24] 1823 	push	ar2
      000382 12 0A 14         [24] 1824 	lcall	__mulint
      000385 A8 82            [24] 1825 	mov	r0,dpl
      000387 A9 83            [24] 1826 	mov	r1,dph
      000389 D0 02            [24] 1827 	pop	ar2
      00038B D0 03            [24] 1828 	pop	ar3
      00038D D0 04            [24] 1829 	pop	ar4
      00038F D0 07            [24] 1830 	pop	ar7
      000391 EA               [12] 1831 	mov	a,r2
      000392 28               [12] 1832 	add	a,r0
      000393 F8               [12] 1833 	mov	r0,a
      000394 EC               [12] 1834 	mov	a,r4
      000395 39               [12] 1835 	addc	a,r1
      000396 F9               [12] 1836 	mov	r1,a
      000397 E8               [12] 1837 	mov	a,r0
      000398 24 D0            [12] 1838 	add	a,#0xD0
      00039A FD               [12] 1839 	mov	r5,a
      00039B E9               [12] 1840 	mov	a,r1
      00039C 34 FF            [12] 1841 	addc	a,#0xFF
      00039E FE               [12] 1842 	mov	r6,a
                           0002C8  1843 	C$i2c.h$176$3$84 ==.
                                   1844 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:176: while(read_keypad() == key)delay_time(10000); //wait for key to be released
      00039F                       1845 00110$:
      00039F C0 07            [24] 1846 	push	ar7
      0003A1 C0 06            [24] 1847 	push	ar6
      0003A3 C0 05            [24] 1848 	push	ar5
      0003A5 C0 03            [24] 1849 	push	ar3
      0003A7 12 01 F1         [24] 1850 	lcall	_read_keypad
      0003AA AC 82            [24] 1851 	mov	r4,dpl
      0003AC D0 03            [24] 1852 	pop	ar3
      0003AE D0 05            [24] 1853 	pop	ar5
      0003B0 D0 06            [24] 1854 	pop	ar6
      0003B2 D0 07            [24] 1855 	pop	ar7
      0003B4 EC               [12] 1856 	mov	a,r4
      0003B5 B5 03 1B         [24] 1857 	cjne	a,ar3,00118$
      0003B8 90 27 10         [24] 1858 	mov	dptr,#0x2710
      0003BB E4               [12] 1859 	clr	a
      0003BC F5 F0            [12] 1860 	mov	b,a
      0003BE C0 07            [24] 1861 	push	ar7
      0003C0 C0 06            [24] 1862 	push	ar6
      0003C2 C0 05            [24] 1863 	push	ar5
      0003C4 C0 03            [24] 1864 	push	ar3
      0003C6 12 03 E4         [24] 1865 	lcall	_delay_time
      0003C9 D0 03            [24] 1866 	pop	ar3
      0003CB D0 05            [24] 1867 	pop	ar5
      0003CD D0 06            [24] 1868 	pop	ar6
      0003CF D0 07            [24] 1869 	pop	ar7
      0003D1 80 CC            [24] 1870 	sjmp	00110$
      0003D3                       1871 00118$:
                           0002FC  1872 	C$i2c.h$164$1$81 ==.
                                   1873 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:164: for(i=0; i<5; i++)
      0003D3 0F               [12] 1874 	inc	r7
      0003D4 C3               [12] 1875 	clr	c
      0003D5 EF               [12] 1876 	mov	a,r7
      0003D6 64 80            [12] 1877 	xrl	a,#0x80
      0003D8 94 85            [12] 1878 	subb	a,#0x85
      0003DA 50 03            [24] 1879 	jnc	00155$
      0003DC 02 02 E1         [24] 1880 	ljmp	00104$
      0003DF                       1881 00155$:
                           000308  1882 	C$i2c.h$179$1$81 ==.
                                   1883 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:179: return sum;
      0003DF 8D 82            [24] 1884 	mov	dpl,r5
      0003E1 8E 83            [24] 1885 	mov	dph,r6
      0003E3                       1886 00119$:
                           00030C  1887 	C$i2c.h$180$1$81 ==.
                           00030C  1888 	XG$kpd_input$0$0 ==.
      0003E3 22               [24] 1889 	ret
                                   1890 ;------------------------------------------------------------
                                   1891 ;Allocation info for local variables in function 'delay_time'
                                   1892 ;------------------------------------------------------------
                                   1893 ;time_end                  Allocated to registers r4 r5 r6 r7 
                                   1894 ;index                     Allocated to registers 
                                   1895 ;------------------------------------------------------------
                           00030D  1896 	G$delay_time$0$0 ==.
                           00030D  1897 	C$i2c.h$189$1$81 ==.
                                   1898 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:189: void delay_time (unsigned long time_end)
                                   1899 ;	-----------------------------------------
                                   1900 ;	 function delay_time
                                   1901 ;	-----------------------------------------
      0003E4                       1902 _delay_time:
      0003E4 AC 82            [24] 1903 	mov	r4,dpl
      0003E6 AD 83            [24] 1904 	mov	r5,dph
      0003E8 AE F0            [24] 1905 	mov	r6,b
      0003EA FF               [12] 1906 	mov	r7,a
                           000314  1907 	C$i2c.h$192$1$86 ==.
                                   1908 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:192: for (index = 0; index < time_end; index++); //for loop delay
      0003EB 78 00            [12] 1909 	mov	r0,#0x00
      0003ED 79 00            [12] 1910 	mov	r1,#0x00
      0003EF 7A 00            [12] 1911 	mov	r2,#0x00
      0003F1 7B 00            [12] 1912 	mov	r3,#0x00
      0003F3                       1913 00103$:
      0003F3 C3               [12] 1914 	clr	c
      0003F4 E8               [12] 1915 	mov	a,r0
      0003F5 9C               [12] 1916 	subb	a,r4
      0003F6 E9               [12] 1917 	mov	a,r1
      0003F7 9D               [12] 1918 	subb	a,r5
      0003F8 EA               [12] 1919 	mov	a,r2
      0003F9 9E               [12] 1920 	subb	a,r6
      0003FA EB               [12] 1921 	mov	a,r3
      0003FB 9F               [12] 1922 	subb	a,r7
      0003FC 50 0F            [24] 1923 	jnc	00105$
      0003FE 08               [12] 1924 	inc	r0
      0003FF B8 00 09         [24] 1925 	cjne	r0,#0x00,00115$
      000402 09               [12] 1926 	inc	r1
      000403 B9 00 05         [24] 1927 	cjne	r1,#0x00,00115$
      000406 0A               [12] 1928 	inc	r2
      000407 BA 00 E9         [24] 1929 	cjne	r2,#0x00,00103$
      00040A 0B               [12] 1930 	inc	r3
      00040B                       1931 00115$:
      00040B 80 E6            [24] 1932 	sjmp	00103$
      00040D                       1933 00105$:
                           000336  1934 	C$i2c.h$193$1$86 ==.
                           000336  1935 	XG$delay_time$0$0 ==.
      00040D 22               [24] 1936 	ret
                                   1937 ;------------------------------------------------------------
                                   1938 ;Allocation info for local variables in function 'i2c_start'
                                   1939 ;------------------------------------------------------------
                           000337  1940 	G$i2c_start$0$0 ==.
                           000337  1941 	C$i2c.h$196$1$86 ==.
                                   1942 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:196: void i2c_start(void)
                                   1943 ;	-----------------------------------------
                                   1944 ;	 function i2c_start
                                   1945 ;	-----------------------------------------
      00040E                       1946 _i2c_start:
                           000337  1947 	C$i2c.h$198$1$88 ==.
                                   1948 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:198: while(BUSY);              //Wait until SMBus0 is free
      00040E                       1949 00101$:
      00040E 20 C7 FD         [24] 1950 	jb	_BUSY,00101$
                           00033A  1951 	C$i2c.h$199$1$88 ==.
                                   1952 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:199: STA = 1;                  //Set Start Bit
      000411 D2 C5            [12] 1953 	setb	_STA
                           00033C  1954 	C$i2c.h$200$1$88 ==.
                                   1955 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:200: while(!SI);               //Wait until start sent
      000413                       1956 00104$:
      000413 30 C3 FD         [24] 1957 	jnb	_SI,00104$
                           00033F  1958 	C$i2c.h$201$1$88 ==.
                                   1959 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:201: STA = 0;                  //Clear start bit
      000416 C2 C5            [12] 1960 	clr	_STA
                           000341  1961 	C$i2c.h$202$1$88 ==.
                                   1962 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:202: SI = 0;                   //Clear SI
      000418 C2 C3            [12] 1963 	clr	_SI
                           000343  1964 	C$i2c.h$203$1$88 ==.
                           000343  1965 	XG$i2c_start$0$0 ==.
      00041A 22               [24] 1966 	ret
                                   1967 ;------------------------------------------------------------
                                   1968 ;Allocation info for local variables in function 'i2c_write'
                                   1969 ;------------------------------------------------------------
                                   1970 ;output_data               Allocated to registers 
                                   1971 ;------------------------------------------------------------
                           000344  1972 	G$i2c_write$0$0 ==.
                           000344  1973 	C$i2c.h$206$1$88 ==.
                                   1974 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:206: void i2c_write(unsigned char output_data)
                                   1975 ;	-----------------------------------------
                                   1976 ;	 function i2c_write
                                   1977 ;	-----------------------------------------
      00041B                       1978 _i2c_write:
      00041B 85 82 C2         [24] 1979 	mov	_SMB0DAT,dpl
                           000347  1980 	C$i2c.h$209$1$90 ==.
                                   1981 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:209: while(!SI);               //Wait until send is complete
      00041E                       1982 00101$:
                           000347  1983 	C$i2c.h$210$1$90 ==.
                                   1984 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:210: SI = 0;                   //Clear SI
      00041E 10 C3 02         [24] 1985 	jbc	_SI,00112$
      000421 80 FB            [24] 1986 	sjmp	00101$
      000423                       1987 00112$:
                           00034C  1988 	C$i2c.h$211$1$90 ==.
                           00034C  1989 	XG$i2c_write$0$0 ==.
      000423 22               [24] 1990 	ret
                                   1991 ;------------------------------------------------------------
                                   1992 ;Allocation info for local variables in function 'i2c_write_and_stop'
                                   1993 ;------------------------------------------------------------
                                   1994 ;output_data               Allocated to registers 
                                   1995 ;------------------------------------------------------------
                           00034D  1996 	G$i2c_write_and_stop$0$0 ==.
                           00034D  1997 	C$i2c.h$214$1$90 ==.
                                   1998 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:214: void i2c_write_and_stop(unsigned char output_data)
                                   1999 ;	-----------------------------------------
                                   2000 ;	 function i2c_write_and_stop
                                   2001 ;	-----------------------------------------
      000424                       2002 _i2c_write_and_stop:
      000424 85 82 C2         [24] 2003 	mov	_SMB0DAT,dpl
                           000350  2004 	C$i2c.h$217$1$92 ==.
                                   2005 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:217: STO = 1;                  //Set stop bit
      000427 D2 C4            [12] 2006 	setb	_STO
                           000352  2007 	C$i2c.h$218$1$92 ==.
                                   2008 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:218: while(!SI);               //Wait until send is complete
      000429                       2009 00101$:
                           000352  2010 	C$i2c.h$219$1$92 ==.
                                   2011 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:219: SI = 0;                   //clear SI
      000429 10 C3 02         [24] 2012 	jbc	_SI,00112$
      00042C 80 FB            [24] 2013 	sjmp	00101$
      00042E                       2014 00112$:
                           000357  2015 	C$i2c.h$220$1$92 ==.
                           000357  2016 	XG$i2c_write_and_stop$0$0 ==.
      00042E 22               [24] 2017 	ret
                                   2018 ;------------------------------------------------------------
                                   2019 ;Allocation info for local variables in function 'i2c_read'
                                   2020 ;------------------------------------------------------------
                                   2021 ;input_data                Allocated to registers 
                                   2022 ;------------------------------------------------------------
                           000358  2023 	G$i2c_read$0$0 ==.
                           000358  2024 	C$i2c.h$223$1$92 ==.
                                   2025 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:223: unsigned char i2c_read(void)
                                   2026 ;	-----------------------------------------
                                   2027 ;	 function i2c_read
                                   2028 ;	-----------------------------------------
      00042F                       2029 _i2c_read:
                           000358  2030 	C$i2c.h$226$1$94 ==.
                                   2031 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:226: while(!SI);                //Wait until we have data to read
      00042F                       2032 00101$:
      00042F 30 C3 FD         [24] 2033 	jnb	_SI,00101$
                           00035B  2034 	C$i2c.h$227$1$94 ==.
                                   2035 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:227: input_data = SMB0DAT;      //Read the data
      000432 85 C2 82         [24] 2036 	mov	dpl,_SMB0DAT
                           00035E  2037 	C$i2c.h$228$1$94 ==.
                                   2038 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:228: SI = 0;                    //Clear SI
      000435 C2 C3            [12] 2039 	clr	_SI
                           000360  2040 	C$i2c.h$229$1$94 ==.
                                   2041 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:229: return input_data;         //Return the read data
                           000360  2042 	C$i2c.h$230$1$94 ==.
                           000360  2043 	XG$i2c_read$0$0 ==.
      000437 22               [24] 2044 	ret
                                   2045 ;------------------------------------------------------------
                                   2046 ;Allocation info for local variables in function 'i2c_read_and_stop'
                                   2047 ;------------------------------------------------------------
                                   2048 ;input_data                Allocated to registers r7 
                                   2049 ;------------------------------------------------------------
                           000361  2050 	G$i2c_read_and_stop$0$0 ==.
                           000361  2051 	C$i2c.h$233$1$94 ==.
                                   2052 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:233: unsigned char i2c_read_and_stop(void)
                                   2053 ;	-----------------------------------------
                                   2054 ;	 function i2c_read_and_stop
                                   2055 ;	-----------------------------------------
      000438                       2056 _i2c_read_and_stop:
                           000361  2057 	C$i2c.h$236$1$96 ==.
                                   2058 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:236: while(!SI);                //Wait until we have data to read
      000438                       2059 00101$:
      000438 30 C3 FD         [24] 2060 	jnb	_SI,00101$
                           000364  2061 	C$i2c.h$237$1$96 ==.
                                   2062 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:237: input_data = SMB0DAT;      //Read the data
      00043B AF C2            [24] 2063 	mov	r7,_SMB0DAT
                           000366  2064 	C$i2c.h$238$1$96 ==.
                                   2065 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:238: SI = 0;                    //Clear SI
      00043D C2 C3            [12] 2066 	clr	_SI
                           000368  2067 	C$i2c.h$239$1$96 ==.
                                   2068 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:239: STO = 1;                   //Set stop bit
      00043F D2 C4            [12] 2069 	setb	_STO
                           00036A  2070 	C$i2c.h$240$1$96 ==.
                                   2071 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:240: while(!SI);                //Wait for stop
      000441                       2072 00104$:
                           00036A  2073 	C$i2c.h$241$1$96 ==.
                                   2074 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:241: SI = 0;
      000441 10 C3 02         [24] 2075 	jbc	_SI,00122$
      000444 80 FB            [24] 2076 	sjmp	00104$
      000446                       2077 00122$:
                           00036F  2078 	C$i2c.h$242$1$96 ==.
                                   2079 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:242: return input_data;         //Return the read data
      000446 8F 82            [24] 2080 	mov	dpl,r7
                           000371  2081 	C$i2c.h$243$1$96 ==.
                           000371  2082 	XG$i2c_read_and_stop$0$0 ==.
      000448 22               [24] 2083 	ret
                                   2084 ;------------------------------------------------------------
                                   2085 ;Allocation info for local variables in function 'i2c_write_data'
                                   2086 ;------------------------------------------------------------
                                   2087 ;start_reg                 Allocated with name '_i2c_write_data_PARM_2'
                                   2088 ;buffer                    Allocated with name '_i2c_write_data_PARM_3'
                                   2089 ;num_bytes                 Allocated with name '_i2c_write_data_PARM_4'
                                   2090 ;addr                      Allocated to registers r7 
                                   2091 ;i                         Allocated to registers 
                                   2092 ;------------------------------------------------------------
                           000372  2093 	G$i2c_write_data$0$0 ==.
                           000372  2094 	C$i2c.h$246$1$96 ==.
                                   2095 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:246: void i2c_write_data(unsigned char addr, unsigned char start_reg, unsigned char *buffer, unsigned char num_bytes)
                                   2096 ;	-----------------------------------------
                                   2097 ;	 function i2c_write_data
                                   2098 ;	-----------------------------------------
      000449                       2099 _i2c_write_data:
      000449 AF 82            [24] 2100 	mov	r7,dpl
                           000374  2101 	C$i2c.h$250$1$98 ==.
                                   2102 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:250: i2c_start();               //initiate I2C transfer
      00044B C0 07            [24] 2103 	push	ar7
      00044D 12 04 0E         [24] 2104 	lcall	_i2c_start
      000450 D0 07            [24] 2105 	pop	ar7
                           00037B  2106 	C$i2c.h$251$1$98 ==.
                                   2107 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:251: i2c_write(addr & ~0x01);   //write the desired address to the bus
      000452 74 FE            [12] 2108 	mov	a,#0xFE
      000454 5F               [12] 2109 	anl	a,r7
      000455 F5 82            [12] 2110 	mov	dpl,a
      000457 12 04 1B         [24] 2111 	lcall	_i2c_write
                           000383  2112 	C$i2c.h$252$1$98 ==.
                                   2113 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:252: i2c_write(start_reg);      //write the start register to the bus
      00045A 85 27 82         [24] 2114 	mov	dpl,_i2c_write_data_PARM_2
      00045D 12 04 1B         [24] 2115 	lcall	_i2c_write
                           000389  2116 	C$i2c.h$253$1$98 ==.
                                   2117 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:253: for(i=0; i<num_bytes-1; i++) //write the data to the register(s)
      000460 7F 00            [12] 2118 	mov	r7,#0x00
      000462                       2119 00103$:
      000462 AD 2B            [24] 2120 	mov	r5,_i2c_write_data_PARM_4
      000464 7E 00            [12] 2121 	mov	r6,#0x00
      000466 1D               [12] 2122 	dec	r5
      000467 BD FF 01         [24] 2123 	cjne	r5,#0xFF,00114$
      00046A 1E               [12] 2124 	dec	r6
      00046B                       2125 00114$:
      00046B 8F 03            [24] 2126 	mov	ar3,r7
      00046D 7C 00            [12] 2127 	mov	r4,#0x00
      00046F C3               [12] 2128 	clr	c
      000470 EB               [12] 2129 	mov	a,r3
      000471 9D               [12] 2130 	subb	a,r5
      000472 EC               [12] 2131 	mov	a,r4
      000473 64 80            [12] 2132 	xrl	a,#0x80
      000475 8E F0            [24] 2133 	mov	b,r6
      000477 63 F0 80         [24] 2134 	xrl	b,#0x80
      00047A 95 F0            [12] 2135 	subb	a,b
      00047C 50 1F            [24] 2136 	jnc	00101$
                           0003A7  2137 	C$i2c.h$254$1$98 ==.
                                   2138 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:254: i2c_write(buffer[i]);
      00047E EF               [12] 2139 	mov	a,r7
      00047F 25 28            [12] 2140 	add	a,_i2c_write_data_PARM_3
      000481 FC               [12] 2141 	mov	r4,a
      000482 E4               [12] 2142 	clr	a
      000483 35 29            [12] 2143 	addc	a,(_i2c_write_data_PARM_3 + 1)
      000485 FD               [12] 2144 	mov	r5,a
      000486 AE 2A            [24] 2145 	mov	r6,(_i2c_write_data_PARM_3 + 2)
      000488 8C 82            [24] 2146 	mov	dpl,r4
      00048A 8D 83            [24] 2147 	mov	dph,r5
      00048C 8E F0            [24] 2148 	mov	b,r6
      00048E 12 11 BA         [24] 2149 	lcall	__gptrget
      000491 F5 82            [12] 2150 	mov	dpl,a
      000493 C0 07            [24] 2151 	push	ar7
      000495 12 04 1B         [24] 2152 	lcall	_i2c_write
      000498 D0 07            [24] 2153 	pop	ar7
                           0003C3  2154 	C$i2c.h$253$1$98 ==.
                                   2155 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:253: for(i=0; i<num_bytes-1; i++) //write the data to the register(s)
      00049A 0F               [12] 2156 	inc	r7
      00049B 80 C5            [24] 2157 	sjmp	00103$
      00049D                       2158 00101$:
                           0003C6  2159 	C$i2c.h$255$1$98 ==.
                                   2160 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:255: i2c_write_and_stop(buffer[num_bytes-1]); //Stop transfer
      00049D AE 2B            [24] 2161 	mov	r6,_i2c_write_data_PARM_4
      00049F 7F 00            [12] 2162 	mov	r7,#0x00
      0004A1 1E               [12] 2163 	dec	r6
      0004A2 BE FF 01         [24] 2164 	cjne	r6,#0xFF,00116$
      0004A5 1F               [12] 2165 	dec	r7
      0004A6                       2166 00116$:
      0004A6 EE               [12] 2167 	mov	a,r6
      0004A7 25 28            [12] 2168 	add	a,_i2c_write_data_PARM_3
      0004A9 FE               [12] 2169 	mov	r6,a
      0004AA EF               [12] 2170 	mov	a,r7
      0004AB 35 29            [12] 2171 	addc	a,(_i2c_write_data_PARM_3 + 1)
      0004AD FF               [12] 2172 	mov	r7,a
      0004AE AD 2A            [24] 2173 	mov	r5,(_i2c_write_data_PARM_3 + 2)
      0004B0 8E 82            [24] 2174 	mov	dpl,r6
      0004B2 8F 83            [24] 2175 	mov	dph,r7
      0004B4 8D F0            [24] 2176 	mov	b,r5
      0004B6 12 11 BA         [24] 2177 	lcall	__gptrget
      0004B9 F5 82            [12] 2178 	mov	dpl,a
      0004BB 12 04 24         [24] 2179 	lcall	_i2c_write_and_stop
                           0003E7  2180 	C$i2c.h$256$1$98 ==.
                           0003E7  2181 	XG$i2c_write_data$0$0 ==.
      0004BE 22               [24] 2182 	ret
                                   2183 ;------------------------------------------------------------
                                   2184 ;Allocation info for local variables in function 'i2c_read_data'
                                   2185 ;------------------------------------------------------------
                                   2186 ;start_reg                 Allocated with name '_i2c_read_data_PARM_2'
                                   2187 ;buffer                    Allocated with name '_i2c_read_data_PARM_3'
                                   2188 ;num_bytes                 Allocated with name '_i2c_read_data_PARM_4'
                                   2189 ;addr                      Allocated to registers r7 
                                   2190 ;j                         Allocated to registers 
                                   2191 ;------------------------------------------------------------
                           0003E8  2192 	G$i2c_read_data$0$0 ==.
                           0003E8  2193 	C$i2c.h$259$1$98 ==.
                                   2194 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:259: void i2c_read_data(unsigned char addr, unsigned char start_reg, unsigned char *buffer, unsigned char num_bytes)
                                   2195 ;	-----------------------------------------
                                   2196 ;	 function i2c_read_data
                                   2197 ;	-----------------------------------------
      0004BF                       2198 _i2c_read_data:
      0004BF AF 82            [24] 2199 	mov	r7,dpl
                           0003EA  2200 	C$i2c.h$262$1$100 ==.
                                   2201 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:262: i2c_start();               //Start I2C transfer
      0004C1 C0 07            [24] 2202 	push	ar7
      0004C3 12 04 0E         [24] 2203 	lcall	_i2c_start
      0004C6 D0 07            [24] 2204 	pop	ar7
                           0003F1  2205 	C$i2c.h$263$1$100 ==.
                                   2206 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:263: i2c_write(addr & ~0x01);   //Write address of device that will be written to, send 0
      0004C8 8F 06            [24] 2207 	mov	ar6,r7
      0004CA 74 FE            [12] 2208 	mov	a,#0xFE
      0004CC 5E               [12] 2209 	anl	a,r6
      0004CD F5 82            [12] 2210 	mov	dpl,a
      0004CF C0 07            [24] 2211 	push	ar7
      0004D1 12 04 1B         [24] 2212 	lcall	_i2c_write
                           0003FD  2213 	C$i2c.h$264$1$100 ==.
                                   2214 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:264: i2c_write_and_stop(start_reg); //Write & stop the 1st register to be read
      0004D4 85 2C 82         [24] 2215 	mov	dpl,_i2c_read_data_PARM_2
      0004D7 12 04 24         [24] 2216 	lcall	_i2c_write_and_stop
                           000403  2217 	C$i2c.h$265$1$100 ==.
                                   2218 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:265: i2c_start();               //Start I2C transfer
      0004DA 12 04 0E         [24] 2219 	lcall	_i2c_start
      0004DD D0 07            [24] 2220 	pop	ar7
                           000408  2221 	C$i2c.h$266$1$100 ==.
                                   2222 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:266: i2c_write(addr | 0x01);    //Write address again, this time indicating a read operation
      0004DF 74 01            [12] 2223 	mov	a,#0x01
      0004E1 4F               [12] 2224 	orl	a,r7
      0004E2 F5 82            [12] 2225 	mov	dpl,a
      0004E4 12 04 1B         [24] 2226 	lcall	_i2c_write
                           000410  2227 	C$i2c.h$267$1$100 ==.
                                   2228 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:267: for(j = 0; j < num_bytes - 1; j++)
      0004E7 7F 00            [12] 2229 	mov	r7,#0x00
      0004E9                       2230 00103$:
      0004E9 AD 30            [24] 2231 	mov	r5,_i2c_read_data_PARM_4
      0004EB 7E 00            [12] 2232 	mov	r6,#0x00
      0004ED 1D               [12] 2233 	dec	r5
      0004EE BD FF 01         [24] 2234 	cjne	r5,#0xFF,00114$
      0004F1 1E               [12] 2235 	dec	r6
      0004F2                       2236 00114$:
      0004F2 8F 03            [24] 2237 	mov	ar3,r7
      0004F4 7C 00            [12] 2238 	mov	r4,#0x00
      0004F6 C3               [12] 2239 	clr	c
      0004F7 EB               [12] 2240 	mov	a,r3
      0004F8 9D               [12] 2241 	subb	a,r5
      0004F9 EC               [12] 2242 	mov	a,r4
      0004FA 64 80            [12] 2243 	xrl	a,#0x80
      0004FC 8E F0            [24] 2244 	mov	b,r6
      0004FE 63 F0 80         [24] 2245 	xrl	b,#0x80
      000501 95 F0            [12] 2246 	subb	a,b
      000503 50 2E            [24] 2247 	jnc	00101$
                           00042E  2248 	C$i2c.h$269$2$101 ==.
                                   2249 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:269: AA = 1;                //Set acknowledge bit
      000505 D2 C2            [12] 2250 	setb	_AA
                           000430  2251 	C$i2c.h$270$2$101 ==.
                                   2252 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:270: buffer[j] = i2c_read();//Read data, save it in buffer
      000507 EF               [12] 2253 	mov	a,r7
      000508 25 2D            [12] 2254 	add	a,_i2c_read_data_PARM_3
      00050A FC               [12] 2255 	mov	r4,a
      00050B E4               [12] 2256 	clr	a
      00050C 35 2E            [12] 2257 	addc	a,(_i2c_read_data_PARM_3 + 1)
      00050E FD               [12] 2258 	mov	r5,a
      00050F AE 2F            [24] 2259 	mov	r6,(_i2c_read_data_PARM_3 + 2)
      000511 C0 07            [24] 2260 	push	ar7
      000513 C0 06            [24] 2261 	push	ar6
      000515 C0 05            [24] 2262 	push	ar5
      000517 C0 04            [24] 2263 	push	ar4
      000519 12 04 2F         [24] 2264 	lcall	_i2c_read
      00051C AB 82            [24] 2265 	mov	r3,dpl
      00051E D0 04            [24] 2266 	pop	ar4
      000520 D0 05            [24] 2267 	pop	ar5
      000522 D0 06            [24] 2268 	pop	ar6
      000524 D0 07            [24] 2269 	pop	ar7
      000526 8C 82            [24] 2270 	mov	dpl,r4
      000528 8D 83            [24] 2271 	mov	dph,r5
      00052A 8E F0            [24] 2272 	mov	b,r6
      00052C EB               [12] 2273 	mov	a,r3
      00052D 12 09 EC         [24] 2274 	lcall	__gptrput
                           000459  2275 	C$i2c.h$267$1$100 ==.
                                   2276 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:267: for(j = 0; j < num_bytes - 1; j++)
      000530 0F               [12] 2277 	inc	r7
      000531 80 B6            [24] 2278 	sjmp	00103$
      000533                       2279 00101$:
                           00045C  2280 	C$i2c.h$272$1$100 ==.
                                   2281 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:272: AA = 0;
      000533 C2 C2            [12] 2282 	clr	_AA
                           00045E  2283 	C$i2c.h$273$1$100 ==.
                                   2284 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:273: buffer[num_bytes - 1] = i2c_read_and_stop(); //Read the last byte and stop, save it in the buffer
      000535 AE 30            [24] 2285 	mov	r6,_i2c_read_data_PARM_4
      000537 7F 00            [12] 2286 	mov	r7,#0x00
      000539 1E               [12] 2287 	dec	r6
      00053A BE FF 01         [24] 2288 	cjne	r6,#0xFF,00116$
      00053D 1F               [12] 2289 	dec	r7
      00053E                       2290 00116$:
      00053E EE               [12] 2291 	mov	a,r6
      00053F 25 2D            [12] 2292 	add	a,_i2c_read_data_PARM_3
      000541 FE               [12] 2293 	mov	r6,a
      000542 EF               [12] 2294 	mov	a,r7
      000543 35 2E            [12] 2295 	addc	a,(_i2c_read_data_PARM_3 + 1)
      000545 FF               [12] 2296 	mov	r7,a
      000546 AD 2F            [24] 2297 	mov	r5,(_i2c_read_data_PARM_3 + 2)
      000548 C0 07            [24] 2298 	push	ar7
      00054A C0 06            [24] 2299 	push	ar6
      00054C C0 05            [24] 2300 	push	ar5
      00054E 12 04 38         [24] 2301 	lcall	_i2c_read_and_stop
      000551 AC 82            [24] 2302 	mov	r4,dpl
      000553 D0 05            [24] 2303 	pop	ar5
      000555 D0 06            [24] 2304 	pop	ar6
      000557 D0 07            [24] 2305 	pop	ar7
      000559 8E 82            [24] 2306 	mov	dpl,r6
      00055B 8F 83            [24] 2307 	mov	dph,r7
      00055D 8D F0            [24] 2308 	mov	b,r5
      00055F EC               [12] 2309 	mov	a,r4
      000560 12 09 EC         [24] 2310 	lcall	__gptrput
                           00048C  2311 	C$i2c.h$274$1$100 ==.
                           00048C  2312 	XG$i2c_read_data$0$0 ==.
      000563 22               [24] 2313 	ret
                                   2314 ;------------------------------------------------------------
                                   2315 ;Allocation info for local variables in function 'Accel_Init'
                                   2316 ;------------------------------------------------------------
                                   2317 ;Data2                     Allocated with name '_Accel_Init_Data2_1_103'
                                   2318 ;------------------------------------------------------------
                           00048D  2319 	G$Accel_Init$0$0 ==.
                           00048D  2320 	C$i2c.h$283$1$100 ==.
                                   2321 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:283: void Accel_Init(void)
                                   2322 ;	-----------------------------------------
                                   2323 ;	 function Accel_Init
                                   2324 ;	-----------------------------------------
      000564                       2325 _Accel_Init:
                           00048D  2326 	C$i2c.h$287$1$103 ==.
                                   2327 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:287: Data2[0]=0x23;	//normal power mode, 50Hz ODR, y & x axes enabled
      000564 75 31 23         [24] 2328 	mov	_Accel_Init_Data2_1_103,#0x23
                           000490  2329 	C$i2c.h$289$1$103 ==.
                                   2330 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:289: i2c_write_data(addr_accel, 0x20, Data2, 1);
      000567 75 28 31         [24] 2331 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      00056A 75 29 00         [24] 2332 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      00056D 75 2A 40         [24] 2333 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000570 75 27 20         [24] 2334 	mov	_i2c_write_data_PARM_2,#0x20
      000573 75 2B 01         [24] 2335 	mov	_i2c_write_data_PARM_4,#0x01
      000576 75 82 30         [24] 2336 	mov	dpl,#0x30
      000579 12 04 49         [24] 2337 	lcall	_i2c_write_data
                           0004A5  2338 	C$i2c.h$290$1$103 ==.
                                   2339 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:290: Data2[0]=0x00;	//Default - no filtering
      00057C 75 31 00         [24] 2340 	mov	_Accel_Init_Data2_1_103,#0x00
                           0004A8  2341 	C$i2c.h$292$1$103 ==.
                                   2342 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:292: i2c_write_data(addr_accel, 0x21, Data2, 1);
      00057F 75 28 31         [24] 2343 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      000582 75 29 00         [24] 2344 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      000585 75 2A 40         [24] 2345 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000588 75 27 21         [24] 2346 	mov	_i2c_write_data_PARM_2,#0x21
      00058B 75 2B 01         [24] 2347 	mov	_i2c_write_data_PARM_4,#0x01
      00058E 75 82 30         [24] 2348 	mov	dpl,#0x30
      000591 12 04 49         [24] 2349 	lcall	_i2c_write_data
                           0004BD  2350 	C$i2c.h$293$1$103 ==.
                                   2351 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:293: Data2[0]=0x00;	//default - no interrupts enabled
      000594 75 31 00         [24] 2352 	mov	_Accel_Init_Data2_1_103,#0x00
                           0004C0  2353 	C$i2c.h$294$1$103 ==.
                                   2354 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:294: i2c_write_data(addr_accel, 0x22, Data2, 1);
      000597 75 28 31         [24] 2355 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      00059A 75 29 00         [24] 2356 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      00059D 75 2A 40         [24] 2357 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      0005A0 75 27 22         [24] 2358 	mov	_i2c_write_data_PARM_2,#0x22
      0005A3 75 2B 01         [24] 2359 	mov	_i2c_write_data_PARM_4,#0x01
      0005A6 75 82 30         [24] 2360 	mov	dpl,#0x30
      0005A9 12 04 49         [24] 2361 	lcall	_i2c_write_data
                           0004D5  2362 	C$i2c.h$298$1$103 ==.
                           0004D5  2363 	XG$Accel_Init$0$0 ==.
      0005AC 22               [24] 2364 	ret
                                   2365 ;------------------------------------------------------------
                                   2366 ;Allocation info for local variables in function 'main'
                                   2367 ;------------------------------------------------------------
                                   2368 ;x                         Allocated to registers r6 r7 
                                   2369 ;------------------------------------------------------------
                           0004D6  2370 	G$main$0$0 ==.
                           0004D6  2371 	C$lab5.c$65$1$103 ==.
                                   2372 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:65: void main(void)
                                   2373 ;	-----------------------------------------
                                   2374 ;	 function main
                                   2375 ;	-----------------------------------------
      0005AD                       2376 _main:
                           0004D6  2377 	C$lab5.c$67$1$103 ==.
                                   2378 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:67: int x=0;
      0005AD 7E 00            [12] 2379 	mov	r6,#0x00
      0005AF 7F 00            [12] 2380 	mov	r7,#0x00
                           0004DA  2381 	C$lab5.c$68$1$119 ==.
                                   2382 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:68: xoff = -170;
      0005B1 75 50 56         [24] 2383 	mov	_xoff,#0x56
                           0004DD  2384 	C$lab5.c$69$1$119 ==.
                                   2385 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:69: yoff = -220;
      0005B4 75 51 24         [24] 2386 	mov	_yoff,#0x24
                           0004E0  2387 	C$lab5.c$70$1$119 ==.
                                   2388 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:70: error_sum=0;
      0005B7 E4               [12] 2389 	clr	a
      0005B8 F5 53            [12] 2390 	mov	_error_sum,a
      0005BA F5 54            [12] 2391 	mov	(_error_sum + 1),a
                           0004E5  2392 	C$lab5.c$71$1$119 ==.
                                   2393 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:71: Sys_Init(); // initialize board
      0005BC C0 07            [24] 2394 	push	ar7
      0005BE C0 06            [24] 2395 	push	ar6
      0005C0 12 01 07         [24] 2396 	lcall	_Sys_Init
                           0004EC  2397 	C$lab5.c$72$1$119 ==.
                                   2398 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:72: putchar(' ');
      0005C3 75 82 20         [24] 2399 	mov	dpl,#0x20
      0005C6 12 01 1A         [24] 2400 	lcall	_putchar
                           0004F2  2401 	C$lab5.c$73$1$119 ==.
                                   2402 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:73: Port_Init();
      0005C9 12 09 DE         [24] 2403 	lcall	_Port_Init
                           0004F5  2404 	C$lab5.c$74$1$119 ==.
                                   2405 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:74: PCA_Init();
      0005CC 12 09 3F         [24] 2406 	lcall	_PCA_Init
                           0004F8  2407 	C$lab5.c$75$1$119 ==.
                                   2408 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:75: SMB_Init();
      0005CF 12 07 94         [24] 2409 	lcall	_SMB_Init
                           0004FB  2410 	C$lab5.c$76$1$119 ==.
                                   2411 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:76: XBR0_Init();
      0005D2 12 07 90         [24] 2412 	lcall	_XBR0_Init
                           0004FE  2413 	C$lab5.c$77$1$119 ==.
                                   2414 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:77: Accel_Init();
      0005D5 12 05 64         [24] 2415 	lcall	_Accel_Init
                           000501  2416 	C$lab5.c$79$1$119 ==.
                                   2417 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:79: count = 0;
      0005D8 E4               [12] 2418 	clr	a
      0005D9 F5 46            [12] 2419 	mov	_count,a
      0005DB F5 47            [12] 2420 	mov	(_count + 1),a
                           000506  2421 	C$lab5.c$80$1$119 ==.
                                   2422 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:80: DRV_PW = SERVO_PW;
      0005DD 85 38 3E         [24] 2423 	mov	_DRV_PW,_SERVO_PW
      0005E0 85 39 3F         [24] 2424 	mov	(_DRV_PW + 1),(_SERVO_PW + 1)
                           00050C  2425 	C$lab5.c$81$1$119 ==.
                                   2426 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:81: STR_PW = PW_CENTER;
      0005E3 85 32 40         [24] 2427 	mov	_STR_PW,_PW_CENTER
      0005E6 85 33 41         [24] 2428 	mov	(_STR_PW + 1),(_PW_CENTER + 1)
                           000512  2429 	C$lab5.c$82$1$119 ==.
                                   2430 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:82: printf("\r\nGO!");
      0005E9 74 3B            [12] 2431 	mov	a,#___str_3
      0005EB C0 E0            [24] 2432 	push	acc
      0005ED 74 12            [12] 2433 	mov	a,#(___str_3 >> 8)
      0005EF C0 E0            [24] 2434 	push	acc
      0005F1 74 80            [12] 2435 	mov	a,#0x80
      0005F3 C0 E0            [24] 2436 	push	acc
      0005F5 12 0B C6         [24] 2437 	lcall	_printf
      0005F8 15 81            [12] 2438 	dec	sp
      0005FA 15 81            [12] 2439 	dec	sp
      0005FC 15 81            [12] 2440 	dec	sp
      0005FE D0 06            [24] 2441 	pop	ar6
      000600 D0 07            [24] 2442 	pop	ar7
                           00052B  2443 	C$lab5.c$84$1$119 ==.
                                   2444 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:84: while (1)
      000602                       2445 00109$:
                           00052B  2446 	C$lab5.c$86$2$120 ==.
                                   2447 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:86: x++;
      000602 0E               [12] 2448 	inc	r6
      000603 BE 00 01         [24] 2449 	cjne	r6,#0x00,00128$
      000606 0F               [12] 2450 	inc	r7
      000607                       2451 00128$:
                           000530  2452 	C$lab5.c$87$2$120 ==.
                                   2453 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:87: printf("\r\n%d",x);
      000607 C0 07            [24] 2454 	push	ar7
      000609 C0 06            [24] 2455 	push	ar6
      00060B C0 06            [24] 2456 	push	ar6
      00060D C0 07            [24] 2457 	push	ar7
      00060F 74 41            [12] 2458 	mov	a,#___str_4
      000611 C0 E0            [24] 2459 	push	acc
      000613 74 12            [12] 2460 	mov	a,#(___str_4 >> 8)
      000615 C0 E0            [24] 2461 	push	acc
      000617 74 80            [12] 2462 	mov	a,#0x80
      000619 C0 E0            [24] 2463 	push	acc
      00061B 12 0B C6         [24] 2464 	lcall	_printf
      00061E E5 81            [12] 2465 	mov	a,sp
      000620 24 FB            [12] 2466 	add	a,#0xfb
      000622 F5 81            [12] 2467 	mov	sp,a
      000624 D0 06            [24] 2468 	pop	ar6
      000626 D0 07            [24] 2469 	pop	ar7
                           000551  2470 	C$lab5.c$88$2$120 ==.
                                   2471 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:88: run_stop = 0;
      000628 75 52 00         [24] 2472 	mov	_run_stop,#0x00
                           000554  2473 	C$lab5.c$89$2$120 ==.
                                   2474 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:89: while (!run) // make run an sbit for the run/stop switch
      00062B                       2475 00103$:
      00062B 20 B6 14         [24] 2476 	jb	_run,00105$
                           000557  2477 	C$lab5.c$91$3$121 ==.
                                   2478 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:91: if (run_stop == 0)
      00062E E5 52            [12] 2479 	mov	a,_run_stop
      000630 70 F9            [24] 2480 	jnz	00103$
                           00055B  2481 	C$lab5.c$93$4$122 ==.
                                   2482 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:93: set_gains(); // function adjusting feedback gains
      000632 C0 07            [24] 2483 	push	ar7
      000634 C0 06            [24] 2484 	push	ar6
      000636 12 07 04         [24] 2485 	lcall	_set_gains
      000639 D0 06            [24] 2486 	pop	ar6
      00063B D0 07            [24] 2487 	pop	ar7
                           000566  2488 	C$lab5.c$94$4$122 ==.
                                   2489 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:94: run_stop = 1; // only try to update once
      00063D 75 52 01         [24] 2490 	mov	_run_stop,#0x01
      000640 80 E9            [24] 2491 	sjmp	00103$
      000642                       2492 00105$:
                           00056B  2493 	C$lab5.c$97$2$120 ==.
                                   2494 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:97: read_accels();
      000642 C0 07            [24] 2495 	push	ar7
      000644 C0 06            [24] 2496 	push	ar6
      000646 12 08 07         [24] 2497 	lcall	_read_accels
                           000572  2498 	C$lab5.c$98$2$120 ==.
                                   2499 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:98: set_servo_PWM(); // set the servo PWM
      000649 12 08 EF         [24] 2500 	lcall	_set_servo_PWM
                           000575  2501 	C$lab5.c$99$2$120 ==.
                                   2502 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:99: set_drive_PWM(); // set drive PWM
      00064C 12 09 6A         [24] 2503 	lcall	_set_drive_PWM
                           000578  2504 	C$lab5.c$100$2$120 ==.
                                   2505 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:100: printf("\r\n\t%d,\t%d",(gx+ xoff),(gy+ yoff));
      00064F E5 51            [12] 2506 	mov	a,_yoff
      000651 FC               [12] 2507 	mov	r4,a
      000652 33               [12] 2508 	rlc	a
      000653 95 E0            [12] 2509 	subb	a,acc
      000655 FD               [12] 2510 	mov	r5,a
      000656 EC               [12] 2511 	mov	a,r4
      000657 25 4E            [12] 2512 	add	a,_gy
      000659 FC               [12] 2513 	mov	r4,a
      00065A ED               [12] 2514 	mov	a,r5
      00065B 35 4F            [12] 2515 	addc	a,(_gy + 1)
      00065D FD               [12] 2516 	mov	r5,a
      00065E E5 50            [12] 2517 	mov	a,_xoff
      000660 FA               [12] 2518 	mov	r2,a
      000661 33               [12] 2519 	rlc	a
      000662 95 E0            [12] 2520 	subb	a,acc
      000664 FB               [12] 2521 	mov	r3,a
      000665 EA               [12] 2522 	mov	a,r2
      000666 25 4C            [12] 2523 	add	a,_gx
      000668 FA               [12] 2524 	mov	r2,a
      000669 EB               [12] 2525 	mov	a,r3
      00066A 35 4D            [12] 2526 	addc	a,(_gx + 1)
      00066C FB               [12] 2527 	mov	r3,a
      00066D C0 04            [24] 2528 	push	ar4
      00066F C0 05            [24] 2529 	push	ar5
      000671 C0 02            [24] 2530 	push	ar2
      000673 C0 03            [24] 2531 	push	ar3
      000675 74 46            [12] 2532 	mov	a,#___str_5
      000677 C0 E0            [24] 2533 	push	acc
      000679 74 12            [12] 2534 	mov	a,#(___str_5 >> 8)
      00067B C0 E0            [24] 2535 	push	acc
      00067D 74 80            [12] 2536 	mov	a,#0x80
      00067F C0 E0            [24] 2537 	push	acc
      000681 12 0B C6         [24] 2538 	lcall	_printf
      000684 E5 81            [12] 2539 	mov	a,sp
      000686 24 F9            [12] 2540 	add	a,#0xf9
      000688 F5 81            [12] 2541 	mov	sp,a
                           0005B3  2542 	C$lab5.c$101$2$120 ==.
                                   2543 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:101: new_accels = 0;
      00068A 75 42 00         [24] 2544 	mov	_new_accels,#0x00
                           0005B6  2545 	C$lab5.c$102$1$119 ==.
                                   2546 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:102: if (count % 15 == 0) // enough overflow to write to LCD
      00068D 75 11 0F         [24] 2547 	mov	__moduint_PARM_2,#0x0F
      000690 75 12 00         [24] 2548 	mov	(__moduint_PARM_2 + 1),#0x00
      000693 85 46 82         [24] 2549 	mov	dpl,_count
      000696 85 47 83         [24] 2550 	mov	dph,(_count + 1)
      000699 12 0B 2C         [24] 2551 	lcall	__moduint
      00069C E5 82            [12] 2552 	mov	a,dpl
      00069E 85 83 F0         [24] 2553 	mov	b,dph
      0006A1 D0 06            [24] 2554 	pop	ar6
      0006A3 D0 07            [24] 2555 	pop	ar7
      0006A5 45 F0            [12] 2556 	orl	a,b
      0006A7 60 03            [24] 2557 	jz	00131$
      0006A9 02 06 02         [24] 2558 	ljmp	00109$
      0006AC                       2559 00131$:
                           0005D5  2560 	C$lab5.c$104$3$123 ==.
                                   2561 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:104: updateLCD(); // display values
      0006AC C0 07            [24] 2562 	push	ar7
      0006AE C0 06            [24] 2563 	push	ar6
      0006B0 12 09 51         [24] 2564 	lcall	_updateLCD
      0006B3 D0 06            [24] 2565 	pop	ar6
      0006B5 D0 07            [24] 2566 	pop	ar7
                           0005E0  2567 	C$lab5.c$105$3$123 ==.
                                   2568 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:105: new_lcd = 0;
      0006B7 75 43 00         [24] 2569 	mov	_new_lcd,#0x00
      0006BA 02 06 02         [24] 2570 	ljmp	00109$
                           0005E6  2571 	C$lab5.c$109$1$119 ==.
                           0005E6  2572 	XG$main$0$0 ==.
      0006BD 22               [24] 2573 	ret
                                   2574 ;------------------------------------------------------------
                                   2575 ;Allocation info for local variables in function 'PCA_ISR'
                                   2576 ;------------------------------------------------------------
                           0005E7  2577 	G$PCA_ISR$0$0 ==.
                           0005E7  2578 	C$lab5.c$117$1$119 ==.
                                   2579 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:117: void PCA_ISR ( void ) __interrupt 9
                                   2580 ;	-----------------------------------------
                                   2581 ;	 function PCA_ISR
                                   2582 ;	-----------------------------------------
      0006BE                       2583 _PCA_ISR:
      0006BE C0 E0            [24] 2584 	push	acc
      0006C0 C0 D0            [24] 2585 	push	psw
                           0005EB  2586 	C$lab5.c$119$1$125 ==.
                                   2587 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:119: if (CF)
                           0005EB  2588 	C$lab5.c$121$2$126 ==.
                                   2589 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:121: CF = 0; // clear overflow indicator
      0006C2 10 DF 02         [24] 2590 	jbc	_CF,00108$
      0006C5 80 0E            [24] 2591 	sjmp	00102$
      0006C7                       2592 00108$:
                           0005F0  2593 	C$lab5.c$122$2$126 ==.
                                   2594 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:122: count++;
      0006C7 05 46            [12] 2595 	inc	_count
      0006C9 E4               [12] 2596 	clr	a
      0006CA B5 46 02         [24] 2597 	cjne	a,_count,00109$
      0006CD 05 47            [12] 2598 	inc	(_count + 1)
      0006CF                       2599 00109$:
                           0005F8  2600 	C$lab5.c$123$2$126 ==.
                                   2601 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:123: PCA0L = PCA_START;
      0006CF 75 E9 00         [24] 2602 	mov	_PCA0L,#0x00
                           0005FB  2603 	C$lab5.c$124$2$126 ==.
                                   2604 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:124: PCA0H = PCA_START >> 8;
      0006D2 75 F9 70         [24] 2605 	mov	_PCA0H,#0x70
      0006D5                       2606 00102$:
                           0005FE  2607 	C$lab5.c$127$1$125 ==.
                                   2608 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:127: PCA0CN &= 0xC0;
      0006D5 53 D8 C0         [24] 2609 	anl	_PCA0CN,#0xC0
      0006D8 D0 D0            [24] 2610 	pop	psw
      0006DA D0 E0            [24] 2611 	pop	acc
                           000605  2612 	C$lab5.c$128$1$125 ==.
                           000605  2613 	XG$PCA_ISR$0$0 ==.
      0006DC 32               [24] 2614 	reti
                                   2615 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   2616 ;	eliminated unneeded push/pop dpl
                                   2617 ;	eliminated unneeded push/pop dph
                                   2618 ;	eliminated unneeded push/pop b
                                   2619 ;------------------------------------------------------------
                                   2620 ;Allocation info for local variables in function 'wait'
                                   2621 ;------------------------------------------------------------
                                   2622 ;old_count                 Allocated to registers r6 r7 
                                   2623 ;------------------------------------------------------------
                           000606  2624 	G$wait$0$0 ==.
                           000606  2625 	C$lab5.c$130$1$125 ==.
                                   2626 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:130: void wait(void)
                                   2627 ;	-----------------------------------------
                                   2628 ;	 function wait
                                   2629 ;	-----------------------------------------
      0006DD                       2630 _wait:
                           000606  2631 	C$lab5.c$132$1$128 ==.
                                   2632 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:132: int old_count = count+1;
      0006DD 74 01            [12] 2633 	mov	a,#0x01
      0006DF 25 46            [12] 2634 	add	a,_count
      0006E1 FE               [12] 2635 	mov	r6,a
      0006E2 E4               [12] 2636 	clr	a
      0006E3 35 47            [12] 2637 	addc	a,(_count + 1)
      0006E5 FF               [12] 2638 	mov	r7,a
                           00060F  2639 	C$lab5.c$133$1$128 ==.
                                   2640 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:133: while (old_count> count);
      0006E6                       2641 00101$:
      0006E6 8E 04            [24] 2642 	mov	ar4,r6
      0006E8 8F 05            [24] 2643 	mov	ar5,r7
      0006EA C3               [12] 2644 	clr	c
      0006EB E5 46            [12] 2645 	mov	a,_count
      0006ED 9C               [12] 2646 	subb	a,r4
      0006EE E5 47            [12] 2647 	mov	a,(_count + 1)
      0006F0 9D               [12] 2648 	subb	a,r5
      0006F1 40 F3            [24] 2649 	jc	00101$
                           00061C  2650 	C$lab5.c$134$1$128 ==.
                           00061C  2651 	XG$wait$0$0 ==.
      0006F3 22               [24] 2652 	ret
                                   2653 ;------------------------------------------------------------
                                   2654 ;Allocation info for local variables in function 'start'
                                   2655 ;------------------------------------------------------------
                           00061D  2656 	G$start$0$0 ==.
                           00061D  2657 	C$lab5.c$136$1$128 ==.
                                   2658 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:136: void start(void)            ///WAITS UNTIL '*' IS ENTERED
                                   2659 ;	-----------------------------------------
                                   2660 ;	 function start
                                   2661 ;	-----------------------------------------
      0006F4                       2662 _start:
                           00061D  2663 	C$lab5.c$138$1$130 ==.
                                   2664 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:138: while (read_keypad() != '*') wait();
      0006F4                       2665 00101$:
      0006F4 12 01 F1         [24] 2666 	lcall	_read_keypad
      0006F7 AF 82            [24] 2667 	mov	r7,dpl
      0006F9 BF 2A 02         [24] 2668 	cjne	r7,#0x2A,00112$
      0006FC 80 05            [24] 2669 	sjmp	00104$
      0006FE                       2670 00112$:
      0006FE 12 06 DD         [24] 2671 	lcall	_wait
      000701 80 F1            [24] 2672 	sjmp	00101$
      000703                       2673 00104$:
                           00062C  2674 	C$lab5.c$139$1$130 ==.
                           00062C  2675 	XG$start$0$0 ==.
      000703 22               [24] 2676 	ret
                                   2677 ;------------------------------------------------------------
                                   2678 ;Allocation info for local variables in function 'set_gains'
                                   2679 ;------------------------------------------------------------
                           00062D  2680 	G$set_gains$0$0 ==.
                           00062D  2681 	C$lab5.c$141$1$130 ==.
                                   2682 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:141: void set_gains(void)
                                   2683 ;	-----------------------------------------
                                   2684 ;	 function set_gains
                                   2685 ;	-----------------------------------------
      000704                       2686 _set_gains:
                           00062D  2687 	C$lab5.c$143$1$132 ==.
                                   2688 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:143: lcd_clear();
      000704 12 01 B8         [24] 2689 	lcall	_lcd_clear
                           000630  2690 	C$lab5.c$144$1$132 ==.
                                   2691 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:144: lcd_print("Please enter a ks value:\n ");
      000707 74 50            [12] 2692 	mov	a,#___str_6
      000709 C0 E0            [24] 2693 	push	acc
      00070B 74 12            [12] 2694 	mov	a,#(___str_6 >> 8)
      00070D C0 E0            [24] 2695 	push	acc
      00070F 74 80            [12] 2696 	mov	a,#0x80
      000711 C0 E0            [24] 2697 	push	acc
      000713 12 01 33         [24] 2698 	lcall	_lcd_print
      000716 15 81            [12] 2699 	dec	sp
      000718 15 81            [12] 2700 	dec	sp
      00071A 15 81            [12] 2701 	dec	sp
                           000645  2702 	C$lab5.c$145$1$132 ==.
                                   2703 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:145: ks = kpd_input(0);
      00071C 75 82 00         [24] 2704 	mov	dpl,#0x00
      00071F 12 02 70         [24] 2705 	lcall	_kpd_input
      000722 AE 82            [24] 2706 	mov	r6,dpl
      000724 8E 48            [24] 2707 	mov	_ks,r6
                           00064F  2708 	C$lab5.c$146$1$132 ==.
                                   2709 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:146: lcd_clear();
      000726 12 01 B8         [24] 2710 	lcall	_lcd_clear
                           000652  2711 	C$lab5.c$147$1$132 ==.
                                   2712 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:147: lcd_print("Please enter a kdx value:\n ");
      000729 74 6B            [12] 2713 	mov	a,#___str_7
      00072B C0 E0            [24] 2714 	push	acc
      00072D 74 12            [12] 2715 	mov	a,#(___str_7 >> 8)
      00072F C0 E0            [24] 2716 	push	acc
      000731 74 80            [12] 2717 	mov	a,#0x80
      000733 C0 E0            [24] 2718 	push	acc
      000735 12 01 33         [24] 2719 	lcall	_lcd_print
      000738 15 81            [12] 2720 	dec	sp
      00073A 15 81            [12] 2721 	dec	sp
      00073C 15 81            [12] 2722 	dec	sp
                           000667  2723 	C$lab5.c$148$1$132 ==.
                                   2724 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:148: kdx = kpd_input(0);
      00073E 75 82 00         [24] 2725 	mov	dpl,#0x00
      000741 12 02 70         [24] 2726 	lcall	_kpd_input
      000744 AE 82            [24] 2727 	mov	r6,dpl
      000746 8E 4A            [24] 2728 	mov	_kdx,r6
                           000671  2729 	C$lab5.c$149$1$132 ==.
                                   2730 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:149: lcd_clear();
      000748 12 01 B8         [24] 2731 	lcall	_lcd_clear
                           000674  2732 	C$lab5.c$150$1$132 ==.
                                   2733 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:150: lcd_print("Please enter a kdy value:\n ");
      00074B 74 87            [12] 2734 	mov	a,#___str_8
      00074D C0 E0            [24] 2735 	push	acc
      00074F 74 12            [12] 2736 	mov	a,#(___str_8 >> 8)
      000751 C0 E0            [24] 2737 	push	acc
      000753 74 80            [12] 2738 	mov	a,#0x80
      000755 C0 E0            [24] 2739 	push	acc
      000757 12 01 33         [24] 2740 	lcall	_lcd_print
      00075A 15 81            [12] 2741 	dec	sp
      00075C 15 81            [12] 2742 	dec	sp
      00075E 15 81            [12] 2743 	dec	sp
                           000689  2744 	C$lab5.c$151$1$132 ==.
                                   2745 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:151: kdy = kpd_input(0);
      000760 75 82 00         [24] 2746 	mov	dpl,#0x00
      000763 12 02 70         [24] 2747 	lcall	_kpd_input
      000766 AE 82            [24] 2748 	mov	r6,dpl
      000768 8E 49            [24] 2749 	mov	_kdy,r6
                           000693  2750 	C$lab5.c$152$1$132 ==.
                                   2751 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:152: lcd_clear();
      00076A 12 01 B8         [24] 2752 	lcall	_lcd_clear
                           000696  2753 	C$lab5.c$153$1$132 ==.
                                   2754 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:153: lcd_print("Please enter a ki value:\n ");	
      00076D 74 A3            [12] 2755 	mov	a,#___str_9
      00076F C0 E0            [24] 2756 	push	acc
      000771 74 12            [12] 2757 	mov	a,#(___str_9 >> 8)
      000773 C0 E0            [24] 2758 	push	acc
      000775 74 80            [12] 2759 	mov	a,#0x80
      000777 C0 E0            [24] 2760 	push	acc
      000779 12 01 33         [24] 2761 	lcall	_lcd_print
      00077C 15 81            [12] 2762 	dec	sp
      00077E 15 81            [12] 2763 	dec	sp
      000780 15 81            [12] 2764 	dec	sp
                           0006AB  2765 	C$lab5.c$154$1$132 ==.
                                   2766 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:154: ki  = kpd_input(0);
      000782 75 82 00         [24] 2767 	mov	dpl,#0x00
      000785 12 02 70         [24] 2768 	lcall	_kpd_input
      000788 AE 82            [24] 2769 	mov	r6,dpl
      00078A 8E 4B            [24] 2770 	mov	_ki,r6
                           0006B5  2771 	C$lab5.c$155$1$132 ==.
                                   2772 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:155: lcd_clear();
      00078C 12 01 B8         [24] 2773 	lcall	_lcd_clear
                           0006B8  2774 	C$lab5.c$156$1$132 ==.
                           0006B8  2775 	XG$set_gains$0$0 ==.
      00078F 22               [24] 2776 	ret
                                   2777 ;------------------------------------------------------------
                                   2778 ;Allocation info for local variables in function 'XBR0_Init'
                                   2779 ;------------------------------------------------------------
                           0006B9  2780 	G$XBR0_Init$0$0 ==.
                           0006B9  2781 	C$lab5.c$158$1$132 ==.
                                   2782 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:158: void XBR0_Init(void)
                                   2783 ;	-----------------------------------------
                                   2784 ;	 function XBR0_Init
                                   2785 ;	-----------------------------------------
      000790                       2786 _XBR0_Init:
                           0006B9  2787 	C$lab5.c$160$1$134 ==.
                                   2788 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:160: XBR0 = 0x17;
      000790 75 E1 17         [24] 2789 	mov	_XBR0,#0x17
                           0006BC  2790 	C$lab5.c$161$1$134 ==.
                           0006BC  2791 	XG$XBR0_Init$0$0 ==.
      000793 22               [24] 2792 	ret
                                   2793 ;------------------------------------------------------------
                                   2794 ;Allocation info for local variables in function 'SMB_Init'
                                   2795 ;------------------------------------------------------------
                           0006BD  2796 	G$SMB_Init$0$0 ==.
                           0006BD  2797 	C$lab5.c$163$1$134 ==.
                                   2798 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:163: void SMB_Init(void)
                                   2799 ;	-----------------------------------------
                                   2800 ;	 function SMB_Init
                                   2801 ;	-----------------------------------------
      000794                       2802 _SMB_Init:
                           0006BD  2803 	C$lab5.c$165$1$136 ==.
                                   2804 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:165: SMB0CR =0x93;
      000794 75 CF 93         [24] 2805 	mov	_SMB0CR,#0x93
                           0006C0  2806 	C$lab5.c$166$1$136 ==.
                                   2807 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:166: ENSMB =1;
      000797 D2 C6            [12] 2808 	setb	_ENSMB
                           0006C2  2809 	C$lab5.c$167$1$136 ==.
                           0006C2  2810 	XG$SMB_Init$0$0 ==.
      000799 22               [24] 2811 	ret
                                   2812 ;------------------------------------------------------------
                                   2813 ;Allocation info for local variables in function 'Update_Value'
                                   2814 ;------------------------------------------------------------
                                   2815 ;incr                      Allocated with name '_Update_Value_PARM_2'
                                   2816 ;maxval                    Allocated with name '_Update_Value_PARM_3'
                                   2817 ;minval                    Allocated with name '_Update_Value_PARM_4'
                                   2818 ;Constant                  Allocated to registers r6 r7 
                                   2819 ;deflt                     Allocated to registers r4 r5 
                                   2820 ;input                     Allocated to registers r3 
                                   2821 ;------------------------------------------------------------
                           0006C3  2822 	G$Update_Value$0$0 ==.
                           0006C3  2823 	C$lab5.c$169$1$136 ==.
                                   2824 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:169: void Update_Value(int Constant, unsigned char incr, int maxval, int minval)
                                   2825 ;	-----------------------------------------
                                   2826 ;	 function Update_Value
                                   2827 ;	-----------------------------------------
      00079A                       2828 _Update_Value:
      00079A AE 82            [24] 2829 	mov	r6,dpl
      00079C AF 83            [24] 2830 	mov	r7,dph
                           0006C7  2831 	C$lab5.c$175$1$138 ==.
                                   2832 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:175: deflt = Constant;
      00079E 8E 04            [24] 2833 	mov	ar4,r6
      0007A0 8F 05            [24] 2834 	mov	ar5,r7
                           0006CB  2835 	C$lab5.c$176$1$138 ==.
                                   2836 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:176: while(1)
      0007A2                       2837 00114$:
                           0006CB  2838 	C$lab5.c$178$2$139 ==.
                                   2839 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:178: input = getchar();
      0007A2 C0 07            [24] 2840 	push	ar7
      0007A4 C0 06            [24] 2841 	push	ar6
      0007A6 C0 05            [24] 2842 	push	ar5
      0007A8 C0 04            [24] 2843 	push	ar4
      0007AA 12 01 24         [24] 2844 	lcall	_getchar
      0007AD AB 82            [24] 2845 	mov	r3,dpl
      0007AF D0 04            [24] 2846 	pop	ar4
      0007B1 D0 05            [24] 2847 	pop	ar5
      0007B3 D0 06            [24] 2848 	pop	ar6
      0007B5 D0 07            [24] 2849 	pop	ar7
                           0006E0  2850 	C$lab5.c$179$2$139 ==.
                                   2851 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:179: if (input == 'c') Constant = deflt;
      0007B7 BB 63 04         [24] 2852 	cjne	r3,#0x63,00102$
      0007BA 8C 06            [24] 2853 	mov	ar6,r4
      0007BC 8D 07            [24] 2854 	mov	ar7,r5
      0007BE                       2855 00102$:
                           0006E7  2856 	C$lab5.c$180$2$139 ==.
                                   2857 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:180: if (input == 'i')
      0007BE BB 69 1F         [24] 2858 	cjne	r3,#0x69,00106$
                           0006EA  2859 	C$lab5.c$182$3$140 ==.
                                   2860 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:182: Constant += incr;
      0007C1 A9 55            [24] 2861 	mov	r1,_Update_Value_PARM_2
      0007C3 7A 00            [12] 2862 	mov	r2,#0x00
      0007C5 E9               [12] 2863 	mov	a,r1
      0007C6 2E               [12] 2864 	add	a,r6
      0007C7 FE               [12] 2865 	mov	r6,a
      0007C8 EA               [12] 2866 	mov	a,r2
      0007C9 3F               [12] 2867 	addc	a,r7
      0007CA FF               [12] 2868 	mov	r7,a
                           0006F4  2869 	C$lab5.c$183$3$140 ==.
                                   2870 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:183: if (Constant > maxval) Constant = maxval;
      0007CB C3               [12] 2871 	clr	c
      0007CC E5 56            [12] 2872 	mov	a,_Update_Value_PARM_3
      0007CE 9E               [12] 2873 	subb	a,r6
      0007CF E5 57            [12] 2874 	mov	a,(_Update_Value_PARM_3 + 1)
      0007D1 64 80            [12] 2875 	xrl	a,#0x80
      0007D3 8F F0            [24] 2876 	mov	b,r7
      0007D5 63 F0 80         [24] 2877 	xrl	b,#0x80
      0007D8 95 F0            [12] 2878 	subb	a,b
      0007DA 50 04            [24] 2879 	jnc	00106$
      0007DC AE 56            [24] 2880 	mov	r6,_Update_Value_PARM_3
      0007DE AF 57            [24] 2881 	mov	r7,(_Update_Value_PARM_3 + 1)
      0007E0                       2882 00106$:
                           000709  2883 	C$lab5.c$185$2$139 ==.
                                   2884 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:185: if (input == 'd')
      0007E0 BB 64 20         [24] 2885 	cjne	r3,#0x64,00110$
                           00070C  2886 	C$lab5.c$187$3$141 ==.
                                   2887 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:187: Constant -= incr;
      0007E3 A9 55            [24] 2888 	mov	r1,_Update_Value_PARM_2
      0007E5 7A 00            [12] 2889 	mov	r2,#0x00
      0007E7 EE               [12] 2890 	mov	a,r6
      0007E8 C3               [12] 2891 	clr	c
      0007E9 99               [12] 2892 	subb	a,r1
      0007EA FE               [12] 2893 	mov	r6,a
      0007EB EF               [12] 2894 	mov	a,r7
      0007EC 9A               [12] 2895 	subb	a,r2
      0007ED FF               [12] 2896 	mov	r7,a
                           000717  2897 	C$lab5.c$188$3$141 ==.
                                   2898 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:188: if (Constant < minval) Constant = minval;
      0007EE C3               [12] 2899 	clr	c
      0007EF EE               [12] 2900 	mov	a,r6
      0007F0 95 58            [12] 2901 	subb	a,_Update_Value_PARM_4
      0007F2 EF               [12] 2902 	mov	a,r7
      0007F3 64 80            [12] 2903 	xrl	a,#0x80
      0007F5 85 59 F0         [24] 2904 	mov	b,(_Update_Value_PARM_4 + 1)
      0007F8 63 F0 80         [24] 2905 	xrl	b,#0x80
      0007FB 95 F0            [12] 2906 	subb	a,b
      0007FD 50 04            [24] 2907 	jnc	00110$
      0007FF AE 58            [24] 2908 	mov	r6,_Update_Value_PARM_4
      000801 AF 59            [24] 2909 	mov	r7,(_Update_Value_PARM_4 + 1)
      000803                       2910 00110$:
                           00072C  2911 	C$lab5.c$190$2$139 ==.
                                   2912 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:190: if (input == 'u')
      000803 BB 75 9C         [24] 2913 	cjne	r3,#0x75,00114$
                           00072F  2914 	C$lab5.c$192$3$142 ==.
                                   2915 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:192: return;
                           00072F  2916 	C$lab5.c$195$1$138 ==.
                           00072F  2917 	XG$Update_Value$0$0 ==.
      000806 22               [24] 2918 	ret
                                   2919 ;------------------------------------------------------------
                                   2920 ;Allocation info for local variables in function 'read_accels'
                                   2921 ;------------------------------------------------------------
                                   2922 ;Data                      Allocated with name '_read_accels_Data_1_144'
                                   2923 ;avg_gx                    Allocated with name '_read_accels_avg_gx_1_144'
                                   2924 ;avg_gy                    Allocated to registers r3 r4 
                                   2925 ;i                         Allocated to registers 
                                   2926 ;------------------------------------------------------------
                           000730  2927 	G$read_accels$0$0 ==.
                           000730  2928 	C$lab5.c$197$1$138 ==.
                                   2929 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:197: void read_accels(void)
                                   2930 ;	-----------------------------------------
                                   2931 ;	 function read_accels
                                   2932 ;	-----------------------------------------
      000807                       2933 _read_accels:
                           000730  2934 	C$lab5.c$201$1$138 ==.
                                   2935 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:201: char i =0;
                           000730  2936 	C$lab5.c$202$1$144 ==.
                                   2937 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:202: avg_gy=avg_gx=0;
      000807 E4               [12] 2938 	clr	a
      000808 FF               [12] 2939 	mov	r7,a
      000809 F5 5E            [12] 2940 	mov	_read_accels_avg_gx_1_144,a
      00080B F5 5F            [12] 2941 	mov	(_read_accels_avg_gx_1_144 + 1),a
      00080D FB               [12] 2942 	mov	r3,a
      00080E FC               [12] 2943 	mov	r4,a
                           000738  2944 	C$lab5.c$203$1$144 ==.
                                   2945 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:203: gx=gy=0;
      00080F F5 4E            [12] 2946 	mov	_gy,a
      000811 F5 4F            [12] 2947 	mov	(_gy + 1),a
      000813 F5 4C            [12] 2948 	mov	_gx,a
      000815 F5 4D            [12] 2949 	mov	(_gx + 1),a
      000817                       2950 00105$:
                           000740  2951 	C$lab5.c$204$1$144 ==.
                                   2952 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:204: for (; i < 12; i++)
      000817 C3               [12] 2953 	clr	c
      000818 EF               [12] 2954 	mov	a,r7
      000819 64 80            [12] 2955 	xrl	a,#0x80
      00081B 94 8C            [12] 2956 	subb	a,#0x8c
      00081D 40 03            [24] 2957 	jc	00119$
      00081F 02 08 BC         [24] 2958 	ljmp	00103$
      000822                       2959 00119$:
                           00074B  2960 	C$lab5.c$206$2$145 ==.
                                   2961 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:206: wait();
      000822 C0 07            [24] 2962 	push	ar7
      000824 C0 04            [24] 2963 	push	ar4
      000826 C0 03            [24] 2964 	push	ar3
      000828 12 06 DD         [24] 2965 	lcall	_wait
                           000754  2966 	C$lab5.c$207$2$145 ==.
                                   2967 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:207: i2c_read_data(0x30,0x27,Data,1);
      00082B 75 2D 5A         [24] 2968 	mov	_i2c_read_data_PARM_3,#_read_accels_Data_1_144
      00082E 75 2E 00         [24] 2969 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      000831 75 2F 40         [24] 2970 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      000834 75 2C 27         [24] 2971 	mov	_i2c_read_data_PARM_2,#0x27
      000837 75 30 01         [24] 2972 	mov	_i2c_read_data_PARM_4,#0x01
      00083A 75 82 30         [24] 2973 	mov	dpl,#0x30
      00083D 12 04 BF         [24] 2974 	lcall	_i2c_read_data
      000840 D0 03            [24] 2975 	pop	ar3
      000842 D0 04            [24] 2976 	pop	ar4
      000844 D0 07            [24] 2977 	pop	ar7
                           00076F  2978 	C$lab5.c$208$2$145 ==.
                                   2979 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:208: if (Data[0] & 0x03 == 0x03)
      000846 E5 5A            [12] 2980 	mov	a,_read_accels_Data_1_144
      000848 30 E0 6D         [24] 2981 	jnb	acc.0,00106$
                           000774  2982 	C$lab5.c$210$3$146 ==.
                                   2983 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:210: i2c_read_data(0x30,0x28|0x80,Data,4);
      00084B 75 2D 5A         [24] 2984 	mov	_i2c_read_data_PARM_3,#_read_accels_Data_1_144
      00084E 75 2E 00         [24] 2985 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      000851 75 2F 40         [24] 2986 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      000854 75 2C A8         [24] 2987 	mov	_i2c_read_data_PARM_2,#0xA8
      000857 75 30 04         [24] 2988 	mov	_i2c_read_data_PARM_4,#0x04
      00085A 75 82 30         [24] 2989 	mov	dpl,#0x30
      00085D C0 07            [24] 2990 	push	ar7
      00085F C0 04            [24] 2991 	push	ar4
      000861 C0 03            [24] 2992 	push	ar3
      000863 12 04 BF         [24] 2993 	lcall	_i2c_read_data
      000866 D0 03            [24] 2994 	pop	ar3
      000868 D0 04            [24] 2995 	pop	ar4
      00086A D0 07            [24] 2996 	pop	ar7
                           000795  2997 	C$lab5.c$211$3$146 ==.
                                   2998 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:211: avg_gx += ((Data[1] << 8) >> 4);
      00086C AA 5B            [24] 2999 	mov	r2,(_read_accels_Data_1_144 + 0x0001)
      00086E E5 5B            [12] 3000 	mov	a,(_read_accels_Data_1_144 + 0x0001)
      000870 33               [12] 3001 	rlc	a
      000871 95 E0            [12] 3002 	subb	a,acc
      000873 8A 06            [24] 3003 	mov	ar6,r2
      000875 7A 00            [12] 3004 	mov	r2,#0x00
      000877 EE               [12] 3005 	mov	a,r6
      000878 C4               [12] 3006 	swap	a
      000879 CA               [12] 3007 	xch	a,r2
      00087A C4               [12] 3008 	swap	a
      00087B 54 0F            [12] 3009 	anl	a,#0x0F
      00087D 6A               [12] 3010 	xrl	a,r2
      00087E CA               [12] 3011 	xch	a,r2
      00087F 54 0F            [12] 3012 	anl	a,#0x0F
      000881 CA               [12] 3013 	xch	a,r2
      000882 6A               [12] 3014 	xrl	a,r2
      000883 CA               [12] 3015 	xch	a,r2
      000884 30 E3 02         [24] 3016 	jnb	acc.3,00121$
      000887 44 F0            [12] 3017 	orl	a,#0xF0
      000889                       3018 00121$:
      000889 FE               [12] 3019 	mov	r6,a
      00088A EA               [12] 3020 	mov	a,r2
      00088B 25 5E            [12] 3021 	add	a,_read_accels_avg_gx_1_144
      00088D F5 5E            [12] 3022 	mov	_read_accels_avg_gx_1_144,a
      00088F EE               [12] 3023 	mov	a,r6
      000890 35 5F            [12] 3024 	addc	a,(_read_accels_avg_gx_1_144 + 1)
      000892 F5 5F            [12] 3025 	mov	(_read_accels_avg_gx_1_144 + 1),a
                           0007BD  3026 	C$lab5.c$212$3$146 ==.
                                   3027 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:212: avg_gy += ((Data[3] << 8) >> 4);
      000894 AD 5D            [24] 3028 	mov	r5,(_read_accels_Data_1_144 + 0x0003)
      000896 E5 5D            [12] 3029 	mov	a,(_read_accels_Data_1_144 + 0x0003)
      000898 33               [12] 3030 	rlc	a
      000899 95 E0            [12] 3031 	subb	a,acc
      00089B 8D 06            [24] 3032 	mov	ar6,r5
      00089D 7D 00            [12] 3033 	mov	r5,#0x00
      00089F EE               [12] 3034 	mov	a,r6
      0008A0 C4               [12] 3035 	swap	a
      0008A1 CD               [12] 3036 	xch	a,r5
      0008A2 C4               [12] 3037 	swap	a
      0008A3 54 0F            [12] 3038 	anl	a,#0x0F
      0008A5 6D               [12] 3039 	xrl	a,r5
      0008A6 CD               [12] 3040 	xch	a,r5
      0008A7 54 0F            [12] 3041 	anl	a,#0x0F
      0008A9 CD               [12] 3042 	xch	a,r5
      0008AA 6D               [12] 3043 	xrl	a,r5
      0008AB CD               [12] 3044 	xch	a,r5
      0008AC 30 E3 02         [24] 3045 	jnb	acc.3,00122$
      0008AF 44 F0            [12] 3046 	orl	a,#0xF0
      0008B1                       3047 00122$:
      0008B1 FE               [12] 3048 	mov	r6,a
      0008B2 ED               [12] 3049 	mov	a,r5
      0008B3 2B               [12] 3050 	add	a,r3
      0008B4 FB               [12] 3051 	mov	r3,a
      0008B5 EE               [12] 3052 	mov	a,r6
      0008B6 3C               [12] 3053 	addc	a,r4
      0008B7 FC               [12] 3054 	mov	r4,a
      0008B8                       3055 00106$:
                           0007E1  3056 	C$lab5.c$204$1$144 ==.
                                   3057 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:204: for (; i < 12; i++)
      0008B8 0F               [12] 3058 	inc	r7
      0008B9 02 08 17         [24] 3059 	ljmp	00105$
      0008BC                       3060 00103$:
                           0007E5  3061 	C$lab5.c$215$1$144 ==.
                                   3062 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:215: avg_gy= avg_gy/12;
      0008BC 75 11 0C         [24] 3063 	mov	__divsint_PARM_2,#0x0C
      0008BF 75 12 00         [24] 3064 	mov	(__divsint_PARM_2 + 1),#0x00
      0008C2 8B 82            [24] 3065 	mov	dpl,r3
      0008C4 8C 83            [24] 3066 	mov	dph,r4
      0008C6 12 11 D6         [24] 3067 	lcall	__divsint
      0008C9 AB 82            [24] 3068 	mov	r3,dpl
      0008CB AC 83            [24] 3069 	mov	r4,dph
                           0007F6  3070 	C$lab5.c$216$1$144 ==.
                                   3071 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:216: avg_gx= avg_gx/12;
      0008CD 75 11 0C         [24] 3072 	mov	__divsint_PARM_2,#0x0C
      0008D0 75 12 00         [24] 3073 	mov	(__divsint_PARM_2 + 1),#0x00
      0008D3 85 5E 82         [24] 3074 	mov	dpl,_read_accels_avg_gx_1_144
      0008D6 85 5F 83         [24] 3075 	mov	dph,(_read_accels_avg_gx_1_144 + 1)
      0008D9 C0 04            [24] 3076 	push	ar4
      0008DB C0 03            [24] 3077 	push	ar3
      0008DD 12 11 D6         [24] 3078 	lcall	__divsint
      0008E0 85 82 4C         [24] 3079 	mov	_gx,dpl
      0008E3 85 83 4D         [24] 3080 	mov	(_gx + 1),dph
      0008E6 D0 03            [24] 3081 	pop	ar3
      0008E8 D0 04            [24] 3082 	pop	ar4
                           000813  3083 	C$lab5.c$218$1$144 ==.
                                   3084 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:218: gy = avg_gy;
      0008EA 8B 4E            [24] 3085 	mov	_gy,r3
      0008EC 8C 4F            [24] 3086 	mov	(_gy + 1),r4
                           000817  3087 	C$lab5.c$221$1$144 ==.
                           000817  3088 	XG$read_accels$0$0 ==.
      0008EE 22               [24] 3089 	ret
                                   3090 ;------------------------------------------------------------
                                   3091 ;Allocation info for local variables in function 'set_servo_PWM'
                                   3092 ;------------------------------------------------------------
                           000818  3093 	G$set_servo_PWM$0$0 ==.
                           000818  3094 	C$lab5.c$223$1$144 ==.
                                   3095 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:223: void set_servo_PWM(void)
                                   3096 ;	-----------------------------------------
                                   3097 ;	 function set_servo_PWM
                                   3098 ;	-----------------------------------------
      0008EF                       3099 _set_servo_PWM:
                           000818  3100 	C$lab5.c$225$1$148 ==.
                                   3101 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:225: STR_PW = PW_CENTER - ks  * gx;
      0008EF AE 48            [24] 3102 	mov	r6,_ks
      0008F1 7F 00            [12] 3103 	mov	r7,#0x00
      0008F3 85 4C 11         [24] 3104 	mov	__mulint_PARM_2,_gx
      0008F6 85 4D 12         [24] 3105 	mov	(__mulint_PARM_2 + 1),(_gx + 1)
      0008F9 8E 82            [24] 3106 	mov	dpl,r6
      0008FB 8F 83            [24] 3107 	mov	dph,r7
      0008FD 12 0A 14         [24] 3108 	lcall	__mulint
      000900 AE 82            [24] 3109 	mov	r6,dpl
      000902 AF 83            [24] 3110 	mov	r7,dph
      000904 E5 32            [12] 3111 	mov	a,_PW_CENTER
      000906 C3               [12] 3112 	clr	c
      000907 9E               [12] 3113 	subb	a,r6
      000908 F5 40            [12] 3114 	mov	_STR_PW,a
      00090A E5 33            [12] 3115 	mov	a,(_PW_CENTER + 1)
      00090C 9F               [12] 3116 	subb	a,r7
      00090D F5 41            [12] 3117 	mov	(_STR_PW + 1),a
                           000838  3118 	C$lab5.c$226$1$148 ==.
                                   3119 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:226: if (STR_PW < PW_LEFT) STR_PW = PW_LEFT;
      00090F C3               [12] 3120 	clr	c
      000910 E5 40            [12] 3121 	mov	a,_STR_PW
      000912 95 36            [12] 3122 	subb	a,_PW_LEFT
      000914 E5 41            [12] 3123 	mov	a,(_STR_PW + 1)
      000916 95 37            [12] 3124 	subb	a,(_PW_LEFT + 1)
      000918 50 06            [24] 3125 	jnc	00102$
      00091A 85 36 40         [24] 3126 	mov	_STR_PW,_PW_LEFT
      00091D 85 37 41         [24] 3127 	mov	(_STR_PW + 1),(_PW_LEFT + 1)
      000920                       3128 00102$:
                           000849  3129 	C$lab5.c$227$1$148 ==.
                                   3130 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:227: if (STR_PW > PW_RIGHT) STR_PW = PW_RIGHT;
      000920 C3               [12] 3131 	clr	c
      000921 E5 34            [12] 3132 	mov	a,_PW_RIGHT
      000923 95 40            [12] 3133 	subb	a,_STR_PW
      000925 E5 35            [12] 3134 	mov	a,(_PW_RIGHT + 1)
      000927 95 41            [12] 3135 	subb	a,(_STR_PW + 1)
      000929 50 06            [24] 3136 	jnc	00104$
      00092B 85 34 40         [24] 3137 	mov	_STR_PW,_PW_RIGHT
      00092E 85 35 41         [24] 3138 	mov	(_STR_PW + 1),(_PW_RIGHT + 1)
      000931                       3139 00104$:
                           00085A  3140 	C$lab5.c$228$1$148 ==.
                                   3141 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:228: PCA0CP1 = 0xFFFF - STR_PW;
      000931 74 FF            [12] 3142 	mov	a,#0xFF
      000933 C3               [12] 3143 	clr	c
      000934 95 40            [12] 3144 	subb	a,_STR_PW
      000936 F5 EB            [12] 3145 	mov	((_PCA0CP1 >> 0) & 0xFF),a
      000938 74 FF            [12] 3146 	mov	a,#0xFF
      00093A 95 41            [12] 3147 	subb	a,(_STR_PW + 1)
      00093C F5 FB            [12] 3148 	mov	((_PCA0CP1 >> 8) & 0xFF),a
                           000867  3149 	C$lab5.c$229$1$148 ==.
                           000867  3150 	XG$set_servo_PWM$0$0 ==.
      00093E 22               [24] 3151 	ret
                                   3152 ;------------------------------------------------------------
                                   3153 ;Allocation info for local variables in function 'PCA_Init'
                                   3154 ;------------------------------------------------------------
                           000868  3155 	G$PCA_Init$0$0 ==.
                           000868  3156 	C$lab5.c$231$1$148 ==.
                                   3157 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:231: void PCA_Init(void)
                                   3158 ;	-----------------------------------------
                                   3159 ;	 function PCA_Init
                                   3160 ;	-----------------------------------------
      00093F                       3161 _PCA_Init:
                           000868  3162 	C$lab5.c$233$1$150 ==.
                                   3163 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:233: PCA0MD = 0x81;
      00093F 75 D9 81         [24] 3164 	mov	_PCA0MD,#0x81
                           00086B  3165 	C$lab5.c$234$1$150 ==.
                                   3166 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:234: PCA0CPM0 = 0xC2;
      000942 75 DA C2         [24] 3167 	mov	_PCA0CPM0,#0xC2
                           00086E  3168 	C$lab5.c$235$1$150 ==.
                                   3169 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:235: PCA0CPM1 = 0xC2;
      000945 75 DB C2         [24] 3170 	mov	_PCA0CPM1,#0xC2
                           000871  3171 	C$lab5.c$236$1$150 ==.
                                   3172 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:236: PCA0CN 	= 0x40;      //Enable PCA counter
      000948 75 D8 40         [24] 3173 	mov	_PCA0CN,#0x40
                           000874  3174 	C$lab5.c$237$1$150 ==.
                                   3175 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:237: EIE1 |= 0x08;       //Enable PCA interrupt
      00094B 43 E6 08         [24] 3176 	orl	_EIE1,#0x08
                           000877  3177 	C$lab5.c$238$1$150 ==.
                                   3178 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:238: EA = 1;             //Enable global interrupts
      00094E D2 AF            [12] 3179 	setb	_EA
                           000879  3180 	C$lab5.c$241$1$150 ==.
                           000879  3181 	XG$PCA_Init$0$0 ==.
      000950 22               [24] 3182 	ret
                                   3183 ;------------------------------------------------------------
                                   3184 ;Allocation info for local variables in function 'updateLCD'
                                   3185 ;------------------------------------------------------------
                           00087A  3186 	G$updateLCD$0$0 ==.
                           00087A  3187 	C$lab5.c$243$1$150 ==.
                                   3188 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:243: void updateLCD(void)
                                   3189 ;	-----------------------------------------
                                   3190 ;	 function updateLCD
                                   3191 ;	-----------------------------------------
      000951                       3192 _updateLCD:
                           00087A  3193 	C$lab5.c$245$1$152 ==.
                                   3194 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:245: lcd_clear();
      000951 12 01 B8         [24] 3195 	lcall	_lcd_clear
                           00087D  3196 	C$lab5.c$246$1$152 ==.
                                   3197 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:246: lcd_print("ks: %u, kdx: %u, kdy: %u\nMpw: %u, Spw: %u\n");
      000954 74 BE            [12] 3198 	mov	a,#___str_10
      000956 C0 E0            [24] 3199 	push	acc
      000958 74 12            [12] 3200 	mov	a,#(___str_10 >> 8)
      00095A C0 E0            [24] 3201 	push	acc
      00095C 74 80            [12] 3202 	mov	a,#0x80
      00095E C0 E0            [24] 3203 	push	acc
      000960 12 01 33         [24] 3204 	lcall	_lcd_print
      000963 15 81            [12] 3205 	dec	sp
      000965 15 81            [12] 3206 	dec	sp
      000967 15 81            [12] 3207 	dec	sp
                           000892  3208 	C$lab5.c$247$1$152 ==.
                           000892  3209 	XG$updateLCD$0$0 ==.
      000969 22               [24] 3210 	ret
                                   3211 ;------------------------------------------------------------
                                   3212 ;Allocation info for local variables in function 'set_drive_PWM'
                                   3213 ;------------------------------------------------------------
                           000893  3214 	G$set_drive_PWM$0$0 ==.
                           000893  3215 	C$lab5.c$249$1$152 ==.
                                   3216 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:249: void set_drive_PWM(void)
                                   3217 ;	-----------------------------------------
                                   3218 ;	 function set_drive_PWM
                                   3219 ;	-----------------------------------------
      00096A                       3220 _set_drive_PWM:
                           000893  3221 	C$lab5.c$251$1$154 ==.
                                   3222 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:251: DRV_PW = SERVO_PW + kdy * gy;
      00096A AE 49            [24] 3223 	mov	r6,_kdy
      00096C 7F 00            [12] 3224 	mov	r7,#0x00
      00096E 85 4E 11         [24] 3225 	mov	__mulint_PARM_2,_gy
      000971 85 4F 12         [24] 3226 	mov	(__mulint_PARM_2 + 1),(_gy + 1)
      000974 8E 82            [24] 3227 	mov	dpl,r6
      000976 8F 83            [24] 3228 	mov	dph,r7
      000978 12 0A 14         [24] 3229 	lcall	__mulint
      00097B AE 82            [24] 3230 	mov	r6,dpl
      00097D AF 83            [24] 3231 	mov	r7,dph
      00097F EE               [12] 3232 	mov	a,r6
      000980 25 38            [12] 3233 	add	a,_SERVO_PW
      000982 F5 3E            [12] 3234 	mov	_DRV_PW,a
      000984 EF               [12] 3235 	mov	a,r7
      000985 35 39            [12] 3236 	addc	a,(_SERVO_PW + 1)
      000987 F5 3F            [12] 3237 	mov	(_DRV_PW + 1),a
                           0008B2  3238 	C$lab5.c$252$1$154 ==.
                                   3239 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:252: DRV_PW += kdx * abs(gx); + ki * error_sum;
      000989 85 4C 82         [24] 3240 	mov	dpl,_gx
      00098C 85 4D 83         [24] 3241 	mov	dph,(_gx + 1)
      00098F 12 0A 07         [24] 3242 	lcall	_abs
      000992 85 82 11         [24] 3243 	mov	__mulint_PARM_2,dpl
      000995 85 83 12         [24] 3244 	mov	(__mulint_PARM_2 + 1),dph
      000998 AE 4A            [24] 3245 	mov	r6,_kdx
      00099A 7F 00            [12] 3246 	mov	r7,#0x00
      00099C 8E 82            [24] 3247 	mov	dpl,r6
      00099E 8F 83            [24] 3248 	mov	dph,r7
      0009A0 12 0A 14         [24] 3249 	lcall	__mulint
      0009A3 AE 82            [24] 3250 	mov	r6,dpl
      0009A5 AF 83            [24] 3251 	mov	r7,dph
      0009A7 EE               [12] 3252 	mov	a,r6
      0009A8 25 3E            [12] 3253 	add	a,_DRV_PW
      0009AA F5 3E            [12] 3254 	mov	_DRV_PW,a
      0009AC EF               [12] 3255 	mov	a,r7
      0009AD 35 3F            [12] 3256 	addc	a,(_DRV_PW + 1)
      0009AF F5 3F            [12] 3257 	mov	(_DRV_PW + 1),a
                           0008DA  3258 	C$lab5.c$253$1$154 ==.
                                   3259 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:253: error_sum += gy + abs(gx);
      0009B1 85 4C 82         [24] 3260 	mov	dpl,_gx
      0009B4 85 4D 83         [24] 3261 	mov	dph,(_gx + 1)
      0009B7 12 0A 07         [24] 3262 	lcall	_abs
      0009BA AE 82            [24] 3263 	mov	r6,dpl
      0009BC AF 83            [24] 3264 	mov	r7,dph
      0009BE EE               [12] 3265 	mov	a,r6
      0009BF 25 4E            [12] 3266 	add	a,_gy
      0009C1 FE               [12] 3267 	mov	r6,a
      0009C2 EF               [12] 3268 	mov	a,r7
      0009C3 35 4F            [12] 3269 	addc	a,(_gy + 1)
      0009C5 FF               [12] 3270 	mov	r7,a
      0009C6 EE               [12] 3271 	mov	a,r6
      0009C7 25 53            [12] 3272 	add	a,_error_sum
      0009C9 F5 53            [12] 3273 	mov	_error_sum,a
      0009CB EF               [12] 3274 	mov	a,r7
      0009CC 35 54            [12] 3275 	addc	a,(_error_sum + 1)
      0009CE F5 54            [12] 3276 	mov	(_error_sum + 1),a
                           0008F9  3277 	C$lab5.c$255$1$154 ==.
                                   3278 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:255: PCA0CP0 = 0xFFFF - DRV_PW;
      0009D0 74 FF            [12] 3279 	mov	a,#0xFF
      0009D2 C3               [12] 3280 	clr	c
      0009D3 95 3E            [12] 3281 	subb	a,_DRV_PW
      0009D5 F5 EA            [12] 3282 	mov	((_PCA0CP0 >> 0) & 0xFF),a
      0009D7 74 FF            [12] 3283 	mov	a,#0xFF
      0009D9 95 3F            [12] 3284 	subb	a,(_DRV_PW + 1)
      0009DB F5 FA            [12] 3285 	mov	((_PCA0CP0 >> 8) & 0xFF),a
                           000906  3286 	C$lab5.c$256$1$154 ==.
                           000906  3287 	XG$set_drive_PWM$0$0 ==.
      0009DD 22               [24] 3288 	ret
                                   3289 ;------------------------------------------------------------
                                   3290 ;Allocation info for local variables in function 'Port_Init'
                                   3291 ;------------------------------------------------------------
                           000907  3292 	G$Port_Init$0$0 ==.
                           000907  3293 	C$lab5.c$260$1$154 ==.
                                   3294 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:260: void Port_Init(void)
                                   3295 ;	-----------------------------------------
                                   3296 ;	 function Port_Init
                                   3297 ;	-----------------------------------------
      0009DE                       3298 _Port_Init:
                           000907  3299 	C$lab5.c$262$1$156 ==.
                                   3300 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:262: P1MDOUT |= 0x03;  //set output pin for CEX0 and CEX2 in push-pull mode
      0009DE 43 A5 03         [24] 3301 	orl	_P1MDOUT,#0x03
                           00090A  3302 	C$lab5.c$265$1$156 ==.
                                   3303 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:265: P3MDOUT &= ~0x40;
      0009E1 AF A7            [24] 3304 	mov	r7,_P3MDOUT
      0009E3 74 BF            [12] 3305 	mov	a,#0xBF
      0009E5 5F               [12] 3306 	anl	a,r7
      0009E6 F5 A7            [12] 3307 	mov	_P3MDOUT,a
                           000911  3308 	C$lab5.c$266$1$156 ==.
                                   3309 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:266: P3 = 0x40;
      0009E8 75 B0 40         [24] 3310 	mov	_P3,#0x40
                           000914  3311 	C$lab5.c$267$1$156 ==.
                           000914  3312 	XG$Port_Init$0$0 ==.
      0009EB 22               [24] 3313 	ret
                                   3314 	.area CSEG    (CODE)
                                   3315 	.area CONST   (CODE)
                           000000  3316 Flab5$__str_0$0$0 == .
      001212                       3317 ___str_0:
      001212 0A                    3318 	.db 0x0A
      001213 54 79 70 65 20 64 69  3319 	.ascii "Type digits; end w/#"
             67 69 74 73 3B 20 65
             6E 64 20 77 2F 23
      001227 00                    3320 	.db 0x00
                           000016  3321 Flab5$__str_1$0$0 == .
      001228                       3322 ___str_1:
      001228 20 20 20 20 20 25 63  3323 	.ascii "     %c%c%c%c%c"
             25 63 25 63 25 63 25
             63
      001237 00                    3324 	.db 0x00
                           000026  3325 Flab5$__str_2$0$0 == .
      001238                       3326 ___str_2:
      001238 25 63                 3327 	.ascii "%c"
      00123A 00                    3328 	.db 0x00
                           000029  3329 Flab5$__str_3$0$0 == .
      00123B                       3330 ___str_3:
      00123B 0D                    3331 	.db 0x0D
      00123C 0A                    3332 	.db 0x0A
      00123D 47 4F 21              3333 	.ascii "GO!"
      001240 00                    3334 	.db 0x00
                           00002F  3335 Flab5$__str_4$0$0 == .
      001241                       3336 ___str_4:
      001241 0D                    3337 	.db 0x0D
      001242 0A                    3338 	.db 0x0A
      001243 25 64                 3339 	.ascii "%d"
      001245 00                    3340 	.db 0x00
                           000034  3341 Flab5$__str_5$0$0 == .
      001246                       3342 ___str_5:
      001246 0D                    3343 	.db 0x0D
      001247 0A                    3344 	.db 0x0A
      001248 09                    3345 	.db 0x09
      001249 25 64 2C              3346 	.ascii "%d,"
      00124C 09                    3347 	.db 0x09
      00124D 25 64                 3348 	.ascii "%d"
      00124F 00                    3349 	.db 0x00
                           00003E  3350 Flab5$__str_6$0$0 == .
      001250                       3351 ___str_6:
      001250 50 6C 65 61 73 65 20  3352 	.ascii "Please enter a ks value:"
             65 6E 74 65 72 20 61
             20 6B 73 20 76 61 6C
             75 65 3A
      001268 0A                    3353 	.db 0x0A
      001269 20                    3354 	.ascii " "
      00126A 00                    3355 	.db 0x00
                           000059  3356 Flab5$__str_7$0$0 == .
      00126B                       3357 ___str_7:
      00126B 50 6C 65 61 73 65 20  3358 	.ascii "Please enter a kdx value:"
             65 6E 74 65 72 20 61
             20 6B 64 78 20 76 61
             6C 75 65 3A
      001284 0A                    3359 	.db 0x0A
      001285 20                    3360 	.ascii " "
      001286 00                    3361 	.db 0x00
                           000075  3362 Flab5$__str_8$0$0 == .
      001287                       3363 ___str_8:
      001287 50 6C 65 61 73 65 20  3364 	.ascii "Please enter a kdy value:"
             65 6E 74 65 72 20 61
             20 6B 64 79 20 76 61
             6C 75 65 3A
      0012A0 0A                    3365 	.db 0x0A
      0012A1 20                    3366 	.ascii " "
      0012A2 00                    3367 	.db 0x00
                           000091  3368 Flab5$__str_9$0$0 == .
      0012A3                       3369 ___str_9:
      0012A3 50 6C 65 61 73 65 20  3370 	.ascii "Please enter a ki value:"
             65 6E 74 65 72 20 61
             20 6B 69 20 76 61 6C
             75 65 3A
      0012BB 0A                    3371 	.db 0x0A
      0012BC 20                    3372 	.ascii " "
      0012BD 00                    3373 	.db 0x00
                           0000AC  3374 Flab5$__str_10$0$0 == .
      0012BE                       3375 ___str_10:
      0012BE 6B 73 3A 20 25 75 2C  3376 	.ascii "ks: %u, kdx: %u, kdy: %u"
             20 6B 64 78 3A 20 25
             75 2C 20 6B 64 79 3A
             20 25 75
      0012D6 0A                    3377 	.db 0x0A
      0012D7 4D 70 77 3A 20 25 75  3378 	.ascii "Mpw: %u, Spw: %u"
             2C 20 53 70 77 3A 20
             25 75
      0012E7 0A                    3379 	.db 0x0A
      0012E8 00                    3380 	.db 0x00
                                   3381 	.area XINIT   (CODE)
                                   3382 	.area CABS    (ABS,CODE)
