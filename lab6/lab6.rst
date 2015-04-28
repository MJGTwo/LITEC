                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (Apr  5 2014) (MINGW32)
                                      4 ; This file was generated Mon Apr 27 20:55:54 2015
                                      5 ;--------------------------------------------------------
                                      6 	.module lab6
                                      7 	.optsdcc -mmcs51 --model-small
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _PCA_ISR
                                     13 	.globl _main
                                     14 	.globl _read_keypad
                                     15 	.globl _strlen
                                     16 	.globl _Sys_Init
                                     17 	.globl _UART0_Init
                                     18 	.globl _SYSCLK_Init
                                     19 	.globl _vsprintf
                                     20 	.globl _printf
                                     21 	.globl _BUS_SCL
                                     22 	.globl _BUS_TOE
                                     23 	.globl _BUS_FTE
                                     24 	.globl _BUS_AA
                                     25 	.globl _BUS_INT
                                     26 	.globl _BUS_STOP
                                     27 	.globl _BUS_START
                                     28 	.globl _BUS_EN
                                     29 	.globl _BUS_BUSY
                                     30 	.globl _SPIF
                                     31 	.globl _WCOL
                                     32 	.globl _MODF
                                     33 	.globl _RXOVRN
                                     34 	.globl _TXBSY
                                     35 	.globl _SLVSEL
                                     36 	.globl _MSTEN
                                     37 	.globl _SPIEN
                                     38 	.globl _AD0EN
                                     39 	.globl _ADCEN
                                     40 	.globl _AD0TM
                                     41 	.globl _ADCTM
                                     42 	.globl _AD0INT
                                     43 	.globl _ADCINT
                                     44 	.globl _AD0BUSY
                                     45 	.globl _ADBUSY
                                     46 	.globl _AD0CM1
                                     47 	.globl _ADSTM1
                                     48 	.globl _AD0CM0
                                     49 	.globl _ADSTM0
                                     50 	.globl _AD0WINT
                                     51 	.globl _ADWINT
                                     52 	.globl _AD0LJST
                                     53 	.globl _ADLJST
                                     54 	.globl _CF
                                     55 	.globl _CR
                                     56 	.globl _CCF4
                                     57 	.globl _CCF3
                                     58 	.globl _CCF2
                                     59 	.globl _CCF1
                                     60 	.globl _CCF0
                                     61 	.globl _CY
                                     62 	.globl _AC
                                     63 	.globl _F0
                                     64 	.globl _RS1
                                     65 	.globl _RS0
                                     66 	.globl _OV
                                     67 	.globl _F1
                                     68 	.globl _P
                                     69 	.globl _TF2
                                     70 	.globl _EXF2
                                     71 	.globl _RCLK
                                     72 	.globl _TCLK
                                     73 	.globl _EXEN2
                                     74 	.globl _TR2
                                     75 	.globl _CT2
                                     76 	.globl _CPRL2
                                     77 	.globl _BUSY
                                     78 	.globl _ENSMB
                                     79 	.globl _STA
                                     80 	.globl _STO
                                     81 	.globl _SI
                                     82 	.globl _AA
                                     83 	.globl _SMBFTE
                                     84 	.globl _SMBTOE
                                     85 	.globl _PT2
                                     86 	.globl _PS
                                     87 	.globl _PS0
                                     88 	.globl _PT1
                                     89 	.globl _PX1
                                     90 	.globl _PT0
                                     91 	.globl _PX0
                                     92 	.globl _P3_7
                                     93 	.globl _P3_6
                                     94 	.globl _P3_5
                                     95 	.globl _P3_4
                                     96 	.globl _P3_3
                                     97 	.globl _P3_2
                                     98 	.globl _P3_1
                                     99 	.globl _P3_0
                                    100 	.globl _EA
                                    101 	.globl _ET2
                                    102 	.globl _ES
                                    103 	.globl _ES0
                                    104 	.globl _ET1
                                    105 	.globl _EX1
                                    106 	.globl _ET0
                                    107 	.globl _EX0
                                    108 	.globl _P2_7
                                    109 	.globl _P2_6
                                    110 	.globl _P2_5
                                    111 	.globl _P2_4
                                    112 	.globl _P2_3
                                    113 	.globl _P2_2
                                    114 	.globl _P2_1
                                    115 	.globl _P2_0
                                    116 	.globl _S0MODE
                                    117 	.globl _SM00
                                    118 	.globl _SM0
                                    119 	.globl _SM10
                                    120 	.globl _SM1
                                    121 	.globl _MCE0
                                    122 	.globl _SM20
                                    123 	.globl _SM2
                                    124 	.globl _REN0
                                    125 	.globl _REN
                                    126 	.globl _TB80
                                    127 	.globl _TB8
                                    128 	.globl _RB80
                                    129 	.globl _RB8
                                    130 	.globl _TI0
                                    131 	.globl _TI
                                    132 	.globl _RI0
                                    133 	.globl _RI
                                    134 	.globl _P1_7
                                    135 	.globl _P1_6
                                    136 	.globl _P1_5
                                    137 	.globl _P1_4
                                    138 	.globl _P1_3
                                    139 	.globl _P1_2
                                    140 	.globl _P1_1
                                    141 	.globl _P1_0
                                    142 	.globl _TF1
                                    143 	.globl _TR1
                                    144 	.globl _TF0
                                    145 	.globl _TR0
                                    146 	.globl _IE1
                                    147 	.globl _IT1
                                    148 	.globl _IE0
                                    149 	.globl _IT0
                                    150 	.globl _P0_7
                                    151 	.globl _P0_6
                                    152 	.globl _P0_5
                                    153 	.globl _P0_4
                                    154 	.globl _P0_3
                                    155 	.globl _P0_2
                                    156 	.globl _P0_1
                                    157 	.globl _P0_0
                                    158 	.globl _PCA0CP4
                                    159 	.globl _PCA0CP3
                                    160 	.globl _PCA0CP2
                                    161 	.globl _PCA0CP1
                                    162 	.globl _PCA0CP0
                                    163 	.globl _PCA0
                                    164 	.globl _DAC1
                                    165 	.globl _DAC0
                                    166 	.globl _ADC0LT
                                    167 	.globl _ADC0GT
                                    168 	.globl _ADC0
                                    169 	.globl _RCAP4
                                    170 	.globl _TMR4
                                    171 	.globl _TMR3RL
                                    172 	.globl _TMR3
                                    173 	.globl _RCAP2
                                    174 	.globl _TMR2
                                    175 	.globl _TMR1
                                    176 	.globl _TMR0
                                    177 	.globl _WDTCN
                                    178 	.globl _PCA0CPH4
                                    179 	.globl _PCA0CPH3
                                    180 	.globl _PCA0CPH2
                                    181 	.globl _PCA0CPH1
                                    182 	.globl _PCA0CPH0
                                    183 	.globl _PCA0H
                                    184 	.globl _SPI0CN
                                    185 	.globl _EIP2
                                    186 	.globl _EIP1
                                    187 	.globl _TH4
                                    188 	.globl _TL4
                                    189 	.globl _SADDR1
                                    190 	.globl _SBUF1
                                    191 	.globl _SCON1
                                    192 	.globl _B
                                    193 	.globl _RSTSRC
                                    194 	.globl _PCA0CPL4
                                    195 	.globl _PCA0CPL3
                                    196 	.globl _PCA0CPL2
                                    197 	.globl _PCA0CPL1
                                    198 	.globl _PCA0CPL0
                                    199 	.globl _PCA0L
                                    200 	.globl _ADC0CN
                                    201 	.globl _EIE2
                                    202 	.globl _EIE1
                                    203 	.globl _RCAP4H
                                    204 	.globl _RCAP4L
                                    205 	.globl _XBR2
                                    206 	.globl _XBR1
                                    207 	.globl _XBR0
                                    208 	.globl _ACC
                                    209 	.globl _PCA0CPM4
                                    210 	.globl _PCA0CPM3
                                    211 	.globl _PCA0CPM2
                                    212 	.globl _PCA0CPM1
                                    213 	.globl _PCA0CPM0
                                    214 	.globl _PCA0MD
                                    215 	.globl _PCA0CN
                                    216 	.globl _DAC1CN
                                    217 	.globl _DAC1H
                                    218 	.globl _DAC1L
                                    219 	.globl _DAC0CN
                                    220 	.globl _DAC0H
                                    221 	.globl _DAC0L
                                    222 	.globl _REF0CN
                                    223 	.globl _PSW
                                    224 	.globl _SMB0CR
                                    225 	.globl _TH2
                                    226 	.globl _TL2
                                    227 	.globl _RCAP2H
                                    228 	.globl _RCAP2L
                                    229 	.globl _T4CON
                                    230 	.globl _T2CON
                                    231 	.globl _ADC0LTH
                                    232 	.globl _ADC0LTL
                                    233 	.globl _ADC0GTH
                                    234 	.globl _ADC0GTL
                                    235 	.globl _SMB0ADR
                                    236 	.globl _SMB0DAT
                                    237 	.globl _SMB0STA
                                    238 	.globl _SMB0CN
                                    239 	.globl _ADC0H
                                    240 	.globl _ADC0L
                                    241 	.globl _P1MDIN
                                    242 	.globl _ADC0CF
                                    243 	.globl _AMX0SL
                                    244 	.globl _AMX0CF
                                    245 	.globl _SADEN0
                                    246 	.globl _IP
                                    247 	.globl _FLACL
                                    248 	.globl _FLSCL
                                    249 	.globl _P74OUT
                                    250 	.globl _OSCICN
                                    251 	.globl _OSCXCN
                                    252 	.globl _P3
                                    253 	.globl __XPAGE
                                    254 	.globl _EMI0CN
                                    255 	.globl _SADEN1
                                    256 	.globl _P3IF
                                    257 	.globl _AMX1SL
                                    258 	.globl _ADC1CF
                                    259 	.globl _ADC1CN
                                    260 	.globl _SADDR0
                                    261 	.globl _IE
                                    262 	.globl _P3MDOUT
                                    263 	.globl _PRT3CF
                                    264 	.globl _P2MDOUT
                                    265 	.globl _PRT2CF
                                    266 	.globl _P1MDOUT
                                    267 	.globl _PRT1CF
                                    268 	.globl _P0MDOUT
                                    269 	.globl _PRT0CF
                                    270 	.globl _EMI0CF
                                    271 	.globl _EMI0TC
                                    272 	.globl _P2
                                    273 	.globl _CPT1CN
                                    274 	.globl _CPT0CN
                                    275 	.globl _SPI0CKR
                                    276 	.globl _ADC1
                                    277 	.globl _SPI0DAT
                                    278 	.globl _SPI0CFG
                                    279 	.globl _SBUF0
                                    280 	.globl _SBUF
                                    281 	.globl _SCON0
                                    282 	.globl _SCON
                                    283 	.globl _P7
                                    284 	.globl _TMR3H
                                    285 	.globl _TMR3L
                                    286 	.globl _TMR3RLH
                                    287 	.globl _TMR3RLL
                                    288 	.globl _TMR3CN
                                    289 	.globl _P1
                                    290 	.globl _PSCTL
                                    291 	.globl _CKCON
                                    292 	.globl _TH1
                                    293 	.globl _TH0
                                    294 	.globl _TL1
                                    295 	.globl _TL0
                                    296 	.globl _TMOD
                                    297 	.globl _TCON
                                    298 	.globl _PCON
                                    299 	.globl _P6
                                    300 	.globl _P5
                                    301 	.globl _P4
                                    302 	.globl _DPH
                                    303 	.globl _DPL
                                    304 	.globl _SP
                                    305 	.globl _P0
                                    306 	.globl _old_error
                                    307 	.globl _error
                                    308 	.globl _actual_D
                                    309 	.globl _desired_D
                                    310 	.globl _dratio
                                    311 	.globl _ratio
                                    312 	.globl _kd
                                    313 	.globl _kp
                                    314 	.globl _r_data
                                    315 	.globl _offset
                                    316 	.globl _LTRST_lo_to_hi
                                    317 	.globl _RTRST_lo_to_hi
                                    318 	.globl _LTHRUST_PW
                                    319 	.globl _RTHRUST_PW
                                    320 	.globl _AGL_lo_to_hi
                                    321 	.globl _ANGLE_PW
                                    322 	.globl _RDR_lo_to_hi
                                    323 	.globl _RUDDER_PW
                                    324 	.globl _PW_DOWN_ANGLE
                                    325 	.globl _PW_CENTER_ANGLE
                                    326 	.globl _PW_UP_ANGLE
                                    327 	.globl _PW_RIGHT_RUDDER
                                    328 	.globl _PW_CENTER_RUDDER
                                    329 	.globl _PW_LEFT_RUDDER
                                    330 	.globl _PW_MAX_THRUST
                                    331 	.globl _PW_NUET_THRUST
                                    332 	.globl _PW_MIN_THRUST
                                    333 	.globl _count
                                    334 	.globl _i2c_read_data_PARM_4
                                    335 	.globl _i2c_read_data_PARM_3
                                    336 	.globl _i2c_read_data_PARM_2
                                    337 	.globl _i2c_write_data_PARM_4
                                    338 	.globl _i2c_write_data_PARM_3
                                    339 	.globl _i2c_write_data_PARM_2
                                    340 	.globl _putchar
                                    341 	.globl _getchar
                                    342 	.globl _lcd_print
                                    343 	.globl _lcd_clear
                                    344 	.globl _kpd_input
                                    345 	.globl _delay_time
                                    346 	.globl _i2c_start
                                    347 	.globl _i2c_write
                                    348 	.globl _i2c_write_and_stop
                                    349 	.globl _i2c_read
                                    350 	.globl _i2c_read_and_stop
                                    351 	.globl _i2c_write_data
                                    352 	.globl _i2c_read_data
                                    353 	.globl _Accel_Init
                                    354 	.globl _Calibrate
                                    355 	.globl _kpkd
                                    356 	.globl _Change_D
                                    357 	.globl _Read_Ranger
                                    358 	.globl _Steering_func
                                    359 	.globl _direction
                                    360 	.globl _ReadCompass
                                    361 	.globl _Rudder_cal
                                    362 	.globl _Angle_cal
                                    363 	.globl _Thrust_cal
                                    364 	.globl _Steering_Servo
                                    365 	.globl _start
                                    366 	.globl _wait
                                    367 	.globl _Port_Init
                                    368 	.globl _PCA_Init
                                    369 	.globl _XBR0_Init
                                    370 	.globl _SMB_Init
                                    371 	.globl _ADC_Init
                                    372 ;--------------------------------------------------------
                                    373 ; special function registers
                                    374 ;--------------------------------------------------------
                                    375 	.area RSEG    (ABS,DATA)
      000000                        376 	.org 0x0000
                           000080   377 G$P0$0$0 == 0x0080
                           000080   378 _P0	=	0x0080
                           000081   379 G$SP$0$0 == 0x0081
                           000081   380 _SP	=	0x0081
                           000082   381 G$DPL$0$0 == 0x0082
                           000082   382 _DPL	=	0x0082
                           000083   383 G$DPH$0$0 == 0x0083
                           000083   384 _DPH	=	0x0083
                           000084   385 G$P4$0$0 == 0x0084
                           000084   386 _P4	=	0x0084
                           000085   387 G$P5$0$0 == 0x0085
                           000085   388 _P5	=	0x0085
                           000086   389 G$P6$0$0 == 0x0086
                           000086   390 _P6	=	0x0086
                           000087   391 G$PCON$0$0 == 0x0087
                           000087   392 _PCON	=	0x0087
                           000088   393 G$TCON$0$0 == 0x0088
                           000088   394 _TCON	=	0x0088
                           000089   395 G$TMOD$0$0 == 0x0089
                           000089   396 _TMOD	=	0x0089
                           00008A   397 G$TL0$0$0 == 0x008a
                           00008A   398 _TL0	=	0x008a
                           00008B   399 G$TL1$0$0 == 0x008b
                           00008B   400 _TL1	=	0x008b
                           00008C   401 G$TH0$0$0 == 0x008c
                           00008C   402 _TH0	=	0x008c
                           00008D   403 G$TH1$0$0 == 0x008d
                           00008D   404 _TH1	=	0x008d
                           00008E   405 G$CKCON$0$0 == 0x008e
                           00008E   406 _CKCON	=	0x008e
                           00008F   407 G$PSCTL$0$0 == 0x008f
                           00008F   408 _PSCTL	=	0x008f
                           000090   409 G$P1$0$0 == 0x0090
                           000090   410 _P1	=	0x0090
                           000091   411 G$TMR3CN$0$0 == 0x0091
                           000091   412 _TMR3CN	=	0x0091
                           000092   413 G$TMR3RLL$0$0 == 0x0092
                           000092   414 _TMR3RLL	=	0x0092
                           000093   415 G$TMR3RLH$0$0 == 0x0093
                           000093   416 _TMR3RLH	=	0x0093
                           000094   417 G$TMR3L$0$0 == 0x0094
                           000094   418 _TMR3L	=	0x0094
                           000095   419 G$TMR3H$0$0 == 0x0095
                           000095   420 _TMR3H	=	0x0095
                           000096   421 G$P7$0$0 == 0x0096
                           000096   422 _P7	=	0x0096
                           000098   423 G$SCON$0$0 == 0x0098
                           000098   424 _SCON	=	0x0098
                           000098   425 G$SCON0$0$0 == 0x0098
                           000098   426 _SCON0	=	0x0098
                           000099   427 G$SBUF$0$0 == 0x0099
                           000099   428 _SBUF	=	0x0099
                           000099   429 G$SBUF0$0$0 == 0x0099
                           000099   430 _SBUF0	=	0x0099
                           00009A   431 G$SPI0CFG$0$0 == 0x009a
                           00009A   432 _SPI0CFG	=	0x009a
                           00009B   433 G$SPI0DAT$0$0 == 0x009b
                           00009B   434 _SPI0DAT	=	0x009b
                           00009C   435 G$ADC1$0$0 == 0x009c
                           00009C   436 _ADC1	=	0x009c
                           00009D   437 G$SPI0CKR$0$0 == 0x009d
                           00009D   438 _SPI0CKR	=	0x009d
                           00009E   439 G$CPT0CN$0$0 == 0x009e
                           00009E   440 _CPT0CN	=	0x009e
                           00009F   441 G$CPT1CN$0$0 == 0x009f
                           00009F   442 _CPT1CN	=	0x009f
                           0000A0   443 G$P2$0$0 == 0x00a0
                           0000A0   444 _P2	=	0x00a0
                           0000A1   445 G$EMI0TC$0$0 == 0x00a1
                           0000A1   446 _EMI0TC	=	0x00a1
                           0000A3   447 G$EMI0CF$0$0 == 0x00a3
                           0000A3   448 _EMI0CF	=	0x00a3
                           0000A4   449 G$PRT0CF$0$0 == 0x00a4
                           0000A4   450 _PRT0CF	=	0x00a4
                           0000A4   451 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   452 _P0MDOUT	=	0x00a4
                           0000A5   453 G$PRT1CF$0$0 == 0x00a5
                           0000A5   454 _PRT1CF	=	0x00a5
                           0000A5   455 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   456 _P1MDOUT	=	0x00a5
                           0000A6   457 G$PRT2CF$0$0 == 0x00a6
                           0000A6   458 _PRT2CF	=	0x00a6
                           0000A6   459 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   460 _P2MDOUT	=	0x00a6
                           0000A7   461 G$PRT3CF$0$0 == 0x00a7
                           0000A7   462 _PRT3CF	=	0x00a7
                           0000A7   463 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   464 _P3MDOUT	=	0x00a7
                           0000A8   465 G$IE$0$0 == 0x00a8
                           0000A8   466 _IE	=	0x00a8
                           0000A9   467 G$SADDR0$0$0 == 0x00a9
                           0000A9   468 _SADDR0	=	0x00a9
                           0000AA   469 G$ADC1CN$0$0 == 0x00aa
                           0000AA   470 _ADC1CN	=	0x00aa
                           0000AB   471 G$ADC1CF$0$0 == 0x00ab
                           0000AB   472 _ADC1CF	=	0x00ab
                           0000AC   473 G$AMX1SL$0$0 == 0x00ac
                           0000AC   474 _AMX1SL	=	0x00ac
                           0000AD   475 G$P3IF$0$0 == 0x00ad
                           0000AD   476 _P3IF	=	0x00ad
                           0000AE   477 G$SADEN1$0$0 == 0x00ae
                           0000AE   478 _SADEN1	=	0x00ae
                           0000AF   479 G$EMI0CN$0$0 == 0x00af
                           0000AF   480 _EMI0CN	=	0x00af
                           0000AF   481 G$_XPAGE$0$0 == 0x00af
                           0000AF   482 __XPAGE	=	0x00af
                           0000B0   483 G$P3$0$0 == 0x00b0
                           0000B0   484 _P3	=	0x00b0
                           0000B1   485 G$OSCXCN$0$0 == 0x00b1
                           0000B1   486 _OSCXCN	=	0x00b1
                           0000B2   487 G$OSCICN$0$0 == 0x00b2
                           0000B2   488 _OSCICN	=	0x00b2
                           0000B5   489 G$P74OUT$0$0 == 0x00b5
                           0000B5   490 _P74OUT	=	0x00b5
                           0000B6   491 G$FLSCL$0$0 == 0x00b6
                           0000B6   492 _FLSCL	=	0x00b6
                           0000B7   493 G$FLACL$0$0 == 0x00b7
                           0000B7   494 _FLACL	=	0x00b7
                           0000B8   495 G$IP$0$0 == 0x00b8
                           0000B8   496 _IP	=	0x00b8
                           0000B9   497 G$SADEN0$0$0 == 0x00b9
                           0000B9   498 _SADEN0	=	0x00b9
                           0000BA   499 G$AMX0CF$0$0 == 0x00ba
                           0000BA   500 _AMX0CF	=	0x00ba
                           0000BB   501 G$AMX0SL$0$0 == 0x00bb
                           0000BB   502 _AMX0SL	=	0x00bb
                           0000BC   503 G$ADC0CF$0$0 == 0x00bc
                           0000BC   504 _ADC0CF	=	0x00bc
                           0000BD   505 G$P1MDIN$0$0 == 0x00bd
                           0000BD   506 _P1MDIN	=	0x00bd
                           0000BE   507 G$ADC0L$0$0 == 0x00be
                           0000BE   508 _ADC0L	=	0x00be
                           0000BF   509 G$ADC0H$0$0 == 0x00bf
                           0000BF   510 _ADC0H	=	0x00bf
                           0000C0   511 G$SMB0CN$0$0 == 0x00c0
                           0000C0   512 _SMB0CN	=	0x00c0
                           0000C1   513 G$SMB0STA$0$0 == 0x00c1
                           0000C1   514 _SMB0STA	=	0x00c1
                           0000C2   515 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   516 _SMB0DAT	=	0x00c2
                           0000C3   517 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   518 _SMB0ADR	=	0x00c3
                           0000C4   519 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   520 _ADC0GTL	=	0x00c4
                           0000C5   521 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   522 _ADC0GTH	=	0x00c5
                           0000C6   523 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   524 _ADC0LTL	=	0x00c6
                           0000C7   525 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   526 _ADC0LTH	=	0x00c7
                           0000C8   527 G$T2CON$0$0 == 0x00c8
                           0000C8   528 _T2CON	=	0x00c8
                           0000C9   529 G$T4CON$0$0 == 0x00c9
                           0000C9   530 _T4CON	=	0x00c9
                           0000CA   531 G$RCAP2L$0$0 == 0x00ca
                           0000CA   532 _RCAP2L	=	0x00ca
                           0000CB   533 G$RCAP2H$0$0 == 0x00cb
                           0000CB   534 _RCAP2H	=	0x00cb
                           0000CC   535 G$TL2$0$0 == 0x00cc
                           0000CC   536 _TL2	=	0x00cc
                           0000CD   537 G$TH2$0$0 == 0x00cd
                           0000CD   538 _TH2	=	0x00cd
                           0000CF   539 G$SMB0CR$0$0 == 0x00cf
                           0000CF   540 _SMB0CR	=	0x00cf
                           0000D0   541 G$PSW$0$0 == 0x00d0
                           0000D0   542 _PSW	=	0x00d0
                           0000D1   543 G$REF0CN$0$0 == 0x00d1
                           0000D1   544 _REF0CN	=	0x00d1
                           0000D2   545 G$DAC0L$0$0 == 0x00d2
                           0000D2   546 _DAC0L	=	0x00d2
                           0000D3   547 G$DAC0H$0$0 == 0x00d3
                           0000D3   548 _DAC0H	=	0x00d3
                           0000D4   549 G$DAC0CN$0$0 == 0x00d4
                           0000D4   550 _DAC0CN	=	0x00d4
                           0000D5   551 G$DAC1L$0$0 == 0x00d5
                           0000D5   552 _DAC1L	=	0x00d5
                           0000D6   553 G$DAC1H$0$0 == 0x00d6
                           0000D6   554 _DAC1H	=	0x00d6
                           0000D7   555 G$DAC1CN$0$0 == 0x00d7
                           0000D7   556 _DAC1CN	=	0x00d7
                           0000D8   557 G$PCA0CN$0$0 == 0x00d8
                           0000D8   558 _PCA0CN	=	0x00d8
                           0000D9   559 G$PCA0MD$0$0 == 0x00d9
                           0000D9   560 _PCA0MD	=	0x00d9
                           0000DA   561 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   562 _PCA0CPM0	=	0x00da
                           0000DB   563 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   564 _PCA0CPM1	=	0x00db
                           0000DC   565 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   566 _PCA0CPM2	=	0x00dc
                           0000DD   567 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   568 _PCA0CPM3	=	0x00dd
                           0000DE   569 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   570 _PCA0CPM4	=	0x00de
                           0000E0   571 G$ACC$0$0 == 0x00e0
                           0000E0   572 _ACC	=	0x00e0
                           0000E1   573 G$XBR0$0$0 == 0x00e1
                           0000E1   574 _XBR0	=	0x00e1
                           0000E2   575 G$XBR1$0$0 == 0x00e2
                           0000E2   576 _XBR1	=	0x00e2
                           0000E3   577 G$XBR2$0$0 == 0x00e3
                           0000E3   578 _XBR2	=	0x00e3
                           0000E4   579 G$RCAP4L$0$0 == 0x00e4
                           0000E4   580 _RCAP4L	=	0x00e4
                           0000E5   581 G$RCAP4H$0$0 == 0x00e5
                           0000E5   582 _RCAP4H	=	0x00e5
                           0000E6   583 G$EIE1$0$0 == 0x00e6
                           0000E6   584 _EIE1	=	0x00e6
                           0000E7   585 G$EIE2$0$0 == 0x00e7
                           0000E7   586 _EIE2	=	0x00e7
                           0000E8   587 G$ADC0CN$0$0 == 0x00e8
                           0000E8   588 _ADC0CN	=	0x00e8
                           0000E9   589 G$PCA0L$0$0 == 0x00e9
                           0000E9   590 _PCA0L	=	0x00e9
                           0000EA   591 G$PCA0CPL0$0$0 == 0x00ea
                           0000EA   592 _PCA0CPL0	=	0x00ea
                           0000EB   593 G$PCA0CPL1$0$0 == 0x00eb
                           0000EB   594 _PCA0CPL1	=	0x00eb
                           0000EC   595 G$PCA0CPL2$0$0 == 0x00ec
                           0000EC   596 _PCA0CPL2	=	0x00ec
                           0000ED   597 G$PCA0CPL3$0$0 == 0x00ed
                           0000ED   598 _PCA0CPL3	=	0x00ed
                           0000EE   599 G$PCA0CPL4$0$0 == 0x00ee
                           0000EE   600 _PCA0CPL4	=	0x00ee
                           0000EF   601 G$RSTSRC$0$0 == 0x00ef
                           0000EF   602 _RSTSRC	=	0x00ef
                           0000F0   603 G$B$0$0 == 0x00f0
                           0000F0   604 _B	=	0x00f0
                           0000F1   605 G$SCON1$0$0 == 0x00f1
                           0000F1   606 _SCON1	=	0x00f1
                           0000F2   607 G$SBUF1$0$0 == 0x00f2
                           0000F2   608 _SBUF1	=	0x00f2
                           0000F3   609 G$SADDR1$0$0 == 0x00f3
                           0000F3   610 _SADDR1	=	0x00f3
                           0000F4   611 G$TL4$0$0 == 0x00f4
                           0000F4   612 _TL4	=	0x00f4
                           0000F5   613 G$TH4$0$0 == 0x00f5
                           0000F5   614 _TH4	=	0x00f5
                           0000F6   615 G$EIP1$0$0 == 0x00f6
                           0000F6   616 _EIP1	=	0x00f6
                           0000F7   617 G$EIP2$0$0 == 0x00f7
                           0000F7   618 _EIP2	=	0x00f7
                           0000F8   619 G$SPI0CN$0$0 == 0x00f8
                           0000F8   620 _SPI0CN	=	0x00f8
                           0000F9   621 G$PCA0H$0$0 == 0x00f9
                           0000F9   622 _PCA0H	=	0x00f9
                           0000FA   623 G$PCA0CPH0$0$0 == 0x00fa
                           0000FA   624 _PCA0CPH0	=	0x00fa
                           0000FB   625 G$PCA0CPH1$0$0 == 0x00fb
                           0000FB   626 _PCA0CPH1	=	0x00fb
                           0000FC   627 G$PCA0CPH2$0$0 == 0x00fc
                           0000FC   628 _PCA0CPH2	=	0x00fc
                           0000FD   629 G$PCA0CPH3$0$0 == 0x00fd
                           0000FD   630 _PCA0CPH3	=	0x00fd
                           0000FE   631 G$PCA0CPH4$0$0 == 0x00fe
                           0000FE   632 _PCA0CPH4	=	0x00fe
                           0000FF   633 G$WDTCN$0$0 == 0x00ff
                           0000FF   634 _WDTCN	=	0x00ff
                           008C8A   635 G$TMR0$0$0 == 0x8c8a
                           008C8A   636 _TMR0	=	0x8c8a
                           008D8B   637 G$TMR1$0$0 == 0x8d8b
                           008D8B   638 _TMR1	=	0x8d8b
                           00CDCC   639 G$TMR2$0$0 == 0xcdcc
                           00CDCC   640 _TMR2	=	0xcdcc
                           00CBCA   641 G$RCAP2$0$0 == 0xcbca
                           00CBCA   642 _RCAP2	=	0xcbca
                           009594   643 G$TMR3$0$0 == 0x9594
                           009594   644 _TMR3	=	0x9594
                           009392   645 G$TMR3RL$0$0 == 0x9392
                           009392   646 _TMR3RL	=	0x9392
                           00F5F4   647 G$TMR4$0$0 == 0xf5f4
                           00F5F4   648 _TMR4	=	0xf5f4
                           00E5E4   649 G$RCAP4$0$0 == 0xe5e4
                           00E5E4   650 _RCAP4	=	0xe5e4
                           00BFBE   651 G$ADC0$0$0 == 0xbfbe
                           00BFBE   652 _ADC0	=	0xbfbe
                           00C5C4   653 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   654 _ADC0GT	=	0xc5c4
                           00C7C6   655 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   656 _ADC0LT	=	0xc7c6
                           00D3D2   657 G$DAC0$0$0 == 0xd3d2
                           00D3D2   658 _DAC0	=	0xd3d2
                           00D6D5   659 G$DAC1$0$0 == 0xd6d5
                           00D6D5   660 _DAC1	=	0xd6d5
                           00F9E9   661 G$PCA0$0$0 == 0xf9e9
                           00F9E9   662 _PCA0	=	0xf9e9
                           00FAEA   663 G$PCA0CP0$0$0 == 0xfaea
                           00FAEA   664 _PCA0CP0	=	0xfaea
                           00FBEB   665 G$PCA0CP1$0$0 == 0xfbeb
                           00FBEB   666 _PCA0CP1	=	0xfbeb
                           00FCEC   667 G$PCA0CP2$0$0 == 0xfcec
                           00FCEC   668 _PCA0CP2	=	0xfcec
                           00FDED   669 G$PCA0CP3$0$0 == 0xfded
                           00FDED   670 _PCA0CP3	=	0xfded
                           00FEEE   671 G$PCA0CP4$0$0 == 0xfeee
                           00FEEE   672 _PCA0CP4	=	0xfeee
                                    673 ;--------------------------------------------------------
                                    674 ; special function bits
                                    675 ;--------------------------------------------------------
                                    676 	.area RSEG    (ABS,DATA)
      000000                        677 	.org 0x0000
                           000080   678 G$P0_0$0$0 == 0x0080
                           000080   679 _P0_0	=	0x0080
                           000081   680 G$P0_1$0$0 == 0x0081
                           000081   681 _P0_1	=	0x0081
                           000082   682 G$P0_2$0$0 == 0x0082
                           000082   683 _P0_2	=	0x0082
                           000083   684 G$P0_3$0$0 == 0x0083
                           000083   685 _P0_3	=	0x0083
                           000084   686 G$P0_4$0$0 == 0x0084
                           000084   687 _P0_4	=	0x0084
                           000085   688 G$P0_5$0$0 == 0x0085
                           000085   689 _P0_5	=	0x0085
                           000086   690 G$P0_6$0$0 == 0x0086
                           000086   691 _P0_6	=	0x0086
                           000087   692 G$P0_7$0$0 == 0x0087
                           000087   693 _P0_7	=	0x0087
                           000088   694 G$IT0$0$0 == 0x0088
                           000088   695 _IT0	=	0x0088
                           000089   696 G$IE0$0$0 == 0x0089
                           000089   697 _IE0	=	0x0089
                           00008A   698 G$IT1$0$0 == 0x008a
                           00008A   699 _IT1	=	0x008a
                           00008B   700 G$IE1$0$0 == 0x008b
                           00008B   701 _IE1	=	0x008b
                           00008C   702 G$TR0$0$0 == 0x008c
                           00008C   703 _TR0	=	0x008c
                           00008D   704 G$TF0$0$0 == 0x008d
                           00008D   705 _TF0	=	0x008d
                           00008E   706 G$TR1$0$0 == 0x008e
                           00008E   707 _TR1	=	0x008e
                           00008F   708 G$TF1$0$0 == 0x008f
                           00008F   709 _TF1	=	0x008f
                           000090   710 G$P1_0$0$0 == 0x0090
                           000090   711 _P1_0	=	0x0090
                           000091   712 G$P1_1$0$0 == 0x0091
                           000091   713 _P1_1	=	0x0091
                           000092   714 G$P1_2$0$0 == 0x0092
                           000092   715 _P1_2	=	0x0092
                           000093   716 G$P1_3$0$0 == 0x0093
                           000093   717 _P1_3	=	0x0093
                           000094   718 G$P1_4$0$0 == 0x0094
                           000094   719 _P1_4	=	0x0094
                           000095   720 G$P1_5$0$0 == 0x0095
                           000095   721 _P1_5	=	0x0095
                           000096   722 G$P1_6$0$0 == 0x0096
                           000096   723 _P1_6	=	0x0096
                           000097   724 G$P1_7$0$0 == 0x0097
                           000097   725 _P1_7	=	0x0097
                           000098   726 G$RI$0$0 == 0x0098
                           000098   727 _RI	=	0x0098
                           000098   728 G$RI0$0$0 == 0x0098
                           000098   729 _RI0	=	0x0098
                           000099   730 G$TI$0$0 == 0x0099
                           000099   731 _TI	=	0x0099
                           000099   732 G$TI0$0$0 == 0x0099
                           000099   733 _TI0	=	0x0099
                           00009A   734 G$RB8$0$0 == 0x009a
                           00009A   735 _RB8	=	0x009a
                           00009A   736 G$RB80$0$0 == 0x009a
                           00009A   737 _RB80	=	0x009a
                           00009B   738 G$TB8$0$0 == 0x009b
                           00009B   739 _TB8	=	0x009b
                           00009B   740 G$TB80$0$0 == 0x009b
                           00009B   741 _TB80	=	0x009b
                           00009C   742 G$REN$0$0 == 0x009c
                           00009C   743 _REN	=	0x009c
                           00009C   744 G$REN0$0$0 == 0x009c
                           00009C   745 _REN0	=	0x009c
                           00009D   746 G$SM2$0$0 == 0x009d
                           00009D   747 _SM2	=	0x009d
                           00009D   748 G$SM20$0$0 == 0x009d
                           00009D   749 _SM20	=	0x009d
                           00009D   750 G$MCE0$0$0 == 0x009d
                           00009D   751 _MCE0	=	0x009d
                           00009E   752 G$SM1$0$0 == 0x009e
                           00009E   753 _SM1	=	0x009e
                           00009E   754 G$SM10$0$0 == 0x009e
                           00009E   755 _SM10	=	0x009e
                           00009F   756 G$SM0$0$0 == 0x009f
                           00009F   757 _SM0	=	0x009f
                           00009F   758 G$SM00$0$0 == 0x009f
                           00009F   759 _SM00	=	0x009f
                           00009F   760 G$S0MODE$0$0 == 0x009f
                           00009F   761 _S0MODE	=	0x009f
                           0000A0   762 G$P2_0$0$0 == 0x00a0
                           0000A0   763 _P2_0	=	0x00a0
                           0000A1   764 G$P2_1$0$0 == 0x00a1
                           0000A1   765 _P2_1	=	0x00a1
                           0000A2   766 G$P2_2$0$0 == 0x00a2
                           0000A2   767 _P2_2	=	0x00a2
                           0000A3   768 G$P2_3$0$0 == 0x00a3
                           0000A3   769 _P2_3	=	0x00a3
                           0000A4   770 G$P2_4$0$0 == 0x00a4
                           0000A4   771 _P2_4	=	0x00a4
                           0000A5   772 G$P2_5$0$0 == 0x00a5
                           0000A5   773 _P2_5	=	0x00a5
                           0000A6   774 G$P2_6$0$0 == 0x00a6
                           0000A6   775 _P2_6	=	0x00a6
                           0000A7   776 G$P2_7$0$0 == 0x00a7
                           0000A7   777 _P2_7	=	0x00a7
                           0000A8   778 G$EX0$0$0 == 0x00a8
                           0000A8   779 _EX0	=	0x00a8
                           0000A9   780 G$ET0$0$0 == 0x00a9
                           0000A9   781 _ET0	=	0x00a9
                           0000AA   782 G$EX1$0$0 == 0x00aa
                           0000AA   783 _EX1	=	0x00aa
                           0000AB   784 G$ET1$0$0 == 0x00ab
                           0000AB   785 _ET1	=	0x00ab
                           0000AC   786 G$ES0$0$0 == 0x00ac
                           0000AC   787 _ES0	=	0x00ac
                           0000AC   788 G$ES$0$0 == 0x00ac
                           0000AC   789 _ES	=	0x00ac
                           0000AD   790 G$ET2$0$0 == 0x00ad
                           0000AD   791 _ET2	=	0x00ad
                           0000AF   792 G$EA$0$0 == 0x00af
                           0000AF   793 _EA	=	0x00af
                           0000B0   794 G$P3_0$0$0 == 0x00b0
                           0000B0   795 _P3_0	=	0x00b0
                           0000B1   796 G$P3_1$0$0 == 0x00b1
                           0000B1   797 _P3_1	=	0x00b1
                           0000B2   798 G$P3_2$0$0 == 0x00b2
                           0000B2   799 _P3_2	=	0x00b2
                           0000B3   800 G$P3_3$0$0 == 0x00b3
                           0000B3   801 _P3_3	=	0x00b3
                           0000B4   802 G$P3_4$0$0 == 0x00b4
                           0000B4   803 _P3_4	=	0x00b4
                           0000B5   804 G$P3_5$0$0 == 0x00b5
                           0000B5   805 _P3_5	=	0x00b5
                           0000B6   806 G$P3_6$0$0 == 0x00b6
                           0000B6   807 _P3_6	=	0x00b6
                           0000B7   808 G$P3_7$0$0 == 0x00b7
                           0000B7   809 _P3_7	=	0x00b7
                           0000B8   810 G$PX0$0$0 == 0x00b8
                           0000B8   811 _PX0	=	0x00b8
                           0000B9   812 G$PT0$0$0 == 0x00b9
                           0000B9   813 _PT0	=	0x00b9
                           0000BA   814 G$PX1$0$0 == 0x00ba
                           0000BA   815 _PX1	=	0x00ba
                           0000BB   816 G$PT1$0$0 == 0x00bb
                           0000BB   817 _PT1	=	0x00bb
                           0000BC   818 G$PS0$0$0 == 0x00bc
                           0000BC   819 _PS0	=	0x00bc
                           0000BC   820 G$PS$0$0 == 0x00bc
                           0000BC   821 _PS	=	0x00bc
                           0000BD   822 G$PT2$0$0 == 0x00bd
                           0000BD   823 _PT2	=	0x00bd
                           0000C0   824 G$SMBTOE$0$0 == 0x00c0
                           0000C0   825 _SMBTOE	=	0x00c0
                           0000C1   826 G$SMBFTE$0$0 == 0x00c1
                           0000C1   827 _SMBFTE	=	0x00c1
                           0000C2   828 G$AA$0$0 == 0x00c2
                           0000C2   829 _AA	=	0x00c2
                           0000C3   830 G$SI$0$0 == 0x00c3
                           0000C3   831 _SI	=	0x00c3
                           0000C4   832 G$STO$0$0 == 0x00c4
                           0000C4   833 _STO	=	0x00c4
                           0000C5   834 G$STA$0$0 == 0x00c5
                           0000C5   835 _STA	=	0x00c5
                           0000C6   836 G$ENSMB$0$0 == 0x00c6
                           0000C6   837 _ENSMB	=	0x00c6
                           0000C7   838 G$BUSY$0$0 == 0x00c7
                           0000C7   839 _BUSY	=	0x00c7
                           0000C8   840 G$CPRL2$0$0 == 0x00c8
                           0000C8   841 _CPRL2	=	0x00c8
                           0000C9   842 G$CT2$0$0 == 0x00c9
                           0000C9   843 _CT2	=	0x00c9
                           0000CA   844 G$TR2$0$0 == 0x00ca
                           0000CA   845 _TR2	=	0x00ca
                           0000CB   846 G$EXEN2$0$0 == 0x00cb
                           0000CB   847 _EXEN2	=	0x00cb
                           0000CC   848 G$TCLK$0$0 == 0x00cc
                           0000CC   849 _TCLK	=	0x00cc
                           0000CD   850 G$RCLK$0$0 == 0x00cd
                           0000CD   851 _RCLK	=	0x00cd
                           0000CE   852 G$EXF2$0$0 == 0x00ce
                           0000CE   853 _EXF2	=	0x00ce
                           0000CF   854 G$TF2$0$0 == 0x00cf
                           0000CF   855 _TF2	=	0x00cf
                           0000D0   856 G$P$0$0 == 0x00d0
                           0000D0   857 _P	=	0x00d0
                           0000D1   858 G$F1$0$0 == 0x00d1
                           0000D1   859 _F1	=	0x00d1
                           0000D2   860 G$OV$0$0 == 0x00d2
                           0000D2   861 _OV	=	0x00d2
                           0000D3   862 G$RS0$0$0 == 0x00d3
                           0000D3   863 _RS0	=	0x00d3
                           0000D4   864 G$RS1$0$0 == 0x00d4
                           0000D4   865 _RS1	=	0x00d4
                           0000D5   866 G$F0$0$0 == 0x00d5
                           0000D5   867 _F0	=	0x00d5
                           0000D6   868 G$AC$0$0 == 0x00d6
                           0000D6   869 _AC	=	0x00d6
                           0000D7   870 G$CY$0$0 == 0x00d7
                           0000D7   871 _CY	=	0x00d7
                           0000D8   872 G$CCF0$0$0 == 0x00d8
                           0000D8   873 _CCF0	=	0x00d8
                           0000D9   874 G$CCF1$0$0 == 0x00d9
                           0000D9   875 _CCF1	=	0x00d9
                           0000DA   876 G$CCF2$0$0 == 0x00da
                           0000DA   877 _CCF2	=	0x00da
                           0000DB   878 G$CCF3$0$0 == 0x00db
                           0000DB   879 _CCF3	=	0x00db
                           0000DC   880 G$CCF4$0$0 == 0x00dc
                           0000DC   881 _CCF4	=	0x00dc
                           0000DE   882 G$CR$0$0 == 0x00de
                           0000DE   883 _CR	=	0x00de
                           0000DF   884 G$CF$0$0 == 0x00df
                           0000DF   885 _CF	=	0x00df
                           0000E8   886 G$ADLJST$0$0 == 0x00e8
                           0000E8   887 _ADLJST	=	0x00e8
                           0000E8   888 G$AD0LJST$0$0 == 0x00e8
                           0000E8   889 _AD0LJST	=	0x00e8
                           0000E9   890 G$ADWINT$0$0 == 0x00e9
                           0000E9   891 _ADWINT	=	0x00e9
                           0000E9   892 G$AD0WINT$0$0 == 0x00e9
                           0000E9   893 _AD0WINT	=	0x00e9
                           0000EA   894 G$ADSTM0$0$0 == 0x00ea
                           0000EA   895 _ADSTM0	=	0x00ea
                           0000EA   896 G$AD0CM0$0$0 == 0x00ea
                           0000EA   897 _AD0CM0	=	0x00ea
                           0000EB   898 G$ADSTM1$0$0 == 0x00eb
                           0000EB   899 _ADSTM1	=	0x00eb
                           0000EB   900 G$AD0CM1$0$0 == 0x00eb
                           0000EB   901 _AD0CM1	=	0x00eb
                           0000EC   902 G$ADBUSY$0$0 == 0x00ec
                           0000EC   903 _ADBUSY	=	0x00ec
                           0000EC   904 G$AD0BUSY$0$0 == 0x00ec
                           0000EC   905 _AD0BUSY	=	0x00ec
                           0000ED   906 G$ADCINT$0$0 == 0x00ed
                           0000ED   907 _ADCINT	=	0x00ed
                           0000ED   908 G$AD0INT$0$0 == 0x00ed
                           0000ED   909 _AD0INT	=	0x00ed
                           0000EE   910 G$ADCTM$0$0 == 0x00ee
                           0000EE   911 _ADCTM	=	0x00ee
                           0000EE   912 G$AD0TM$0$0 == 0x00ee
                           0000EE   913 _AD0TM	=	0x00ee
                           0000EF   914 G$ADCEN$0$0 == 0x00ef
                           0000EF   915 _ADCEN	=	0x00ef
                           0000EF   916 G$AD0EN$0$0 == 0x00ef
                           0000EF   917 _AD0EN	=	0x00ef
                           0000F8   918 G$SPIEN$0$0 == 0x00f8
                           0000F8   919 _SPIEN	=	0x00f8
                           0000F9   920 G$MSTEN$0$0 == 0x00f9
                           0000F9   921 _MSTEN	=	0x00f9
                           0000FA   922 G$SLVSEL$0$0 == 0x00fa
                           0000FA   923 _SLVSEL	=	0x00fa
                           0000FB   924 G$TXBSY$0$0 == 0x00fb
                           0000FB   925 _TXBSY	=	0x00fb
                           0000FC   926 G$RXOVRN$0$0 == 0x00fc
                           0000FC   927 _RXOVRN	=	0x00fc
                           0000FD   928 G$MODF$0$0 == 0x00fd
                           0000FD   929 _MODF	=	0x00fd
                           0000FE   930 G$WCOL$0$0 == 0x00fe
                           0000FE   931 _WCOL	=	0x00fe
                           0000FF   932 G$SPIF$0$0 == 0x00ff
                           0000FF   933 _SPIF	=	0x00ff
                           0000C7   934 G$BUS_BUSY$0$0 == 0x00c7
                           0000C7   935 _BUS_BUSY	=	0x00c7
                           0000C6   936 G$BUS_EN$0$0 == 0x00c6
                           0000C6   937 _BUS_EN	=	0x00c6
                           0000C5   938 G$BUS_START$0$0 == 0x00c5
                           0000C5   939 _BUS_START	=	0x00c5
                           0000C4   940 G$BUS_STOP$0$0 == 0x00c4
                           0000C4   941 _BUS_STOP	=	0x00c4
                           0000C3   942 G$BUS_INT$0$0 == 0x00c3
                           0000C3   943 _BUS_INT	=	0x00c3
                           0000C2   944 G$BUS_AA$0$0 == 0x00c2
                           0000C2   945 _BUS_AA	=	0x00c2
                           0000C1   946 G$BUS_FTE$0$0 == 0x00c1
                           0000C1   947 _BUS_FTE	=	0x00c1
                           0000C0   948 G$BUS_TOE$0$0 == 0x00c0
                           0000C0   949 _BUS_TOE	=	0x00c0
                           000083   950 G$BUS_SCL$0$0 == 0x0083
                           000083   951 _BUS_SCL	=	0x0083
                                    952 ;--------------------------------------------------------
                                    953 ; overlayable register banks
                                    954 ;--------------------------------------------------------
                                    955 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        956 	.ds 8
                                    957 ;--------------------------------------------------------
                                    958 ; internal ram data
                                    959 ;--------------------------------------------------------
                                    960 	.area DSEG    (DATA)
                           000000   961 Llab6.lcd_clear$NumBytes$1$77==.
      000022                        962 _lcd_clear_NumBytes_1_77:
      000022                        963 	.ds 1
                           000001   964 Llab6.lcd_clear$Cmd$1$77==.
      000023                        965 _lcd_clear_Cmd_1_77:
      000023                        966 	.ds 2
                           000003   967 Llab6.read_keypad$Data$1$78==.
      000025                        968 _read_keypad_Data_1_78:
      000025                        969 	.ds 2
                           000005   970 Llab6.i2c_write_data$start_reg$1$97==.
      000027                        971 _i2c_write_data_PARM_2:
      000027                        972 	.ds 1
                           000006   973 Llab6.i2c_write_data$buffer$1$97==.
      000028                        974 _i2c_write_data_PARM_3:
      000028                        975 	.ds 3
                           000009   976 Llab6.i2c_write_data$num_bytes$1$97==.
      00002B                        977 _i2c_write_data_PARM_4:
      00002B                        978 	.ds 1
                           00000A   979 Llab6.i2c_read_data$start_reg$1$99==.
      00002C                        980 _i2c_read_data_PARM_2:
      00002C                        981 	.ds 1
                           00000B   982 Llab6.i2c_read_data$buffer$1$99==.
      00002D                        983 _i2c_read_data_PARM_3:
      00002D                        984 	.ds 3
                           00000E   985 Llab6.i2c_read_data$num_bytes$1$99==.
      000030                        986 _i2c_read_data_PARM_4:
      000030                        987 	.ds 1
                           00000F   988 Llab6.Accel_Init$Data2$1$103==.
      000031                        989 _Accel_Init_Data2_1_103:
      000031                        990 	.ds 1
                           000010   991 G$count$0$0==.
      000032                        992 _count::
      000032                        993 	.ds 2
                           000012   994 G$PW_MIN_THRUST$0$0==.
      000034                        995 _PW_MIN_THRUST::
      000034                        996 	.ds 2
                           000014   997 G$PW_NUET_THRUST$0$0==.
      000036                        998 _PW_NUET_THRUST::
      000036                        999 	.ds 2
                           000016  1000 G$PW_MAX_THRUST$0$0==.
      000038                       1001 _PW_MAX_THRUST::
      000038                       1002 	.ds 2
                           000018  1003 G$PW_LEFT_RUDDER$0$0==.
      00003A                       1004 _PW_LEFT_RUDDER::
      00003A                       1005 	.ds 2
                           00001A  1006 G$PW_CENTER_RUDDER$0$0==.
      00003C                       1007 _PW_CENTER_RUDDER::
      00003C                       1008 	.ds 2
                           00001C  1009 G$PW_RIGHT_RUDDER$0$0==.
      00003E                       1010 _PW_RIGHT_RUDDER::
      00003E                       1011 	.ds 2
                           00001E  1012 G$PW_UP_ANGLE$0$0==.
      000040                       1013 _PW_UP_ANGLE::
      000040                       1014 	.ds 2
                           000020  1015 G$PW_CENTER_ANGLE$0$0==.
      000042                       1016 _PW_CENTER_ANGLE::
      000042                       1017 	.ds 2
                           000022  1018 G$PW_DOWN_ANGLE$0$0==.
      000044                       1019 _PW_DOWN_ANGLE::
      000044                       1020 	.ds 2
                           000024  1021 G$RUDDER_PW$0$0==.
      000046                       1022 _RUDDER_PW::
      000046                       1023 	.ds 2
                           000026  1024 G$RDR_lo_to_hi$0$0==.
      000048                       1025 _RDR_lo_to_hi::
      000048                       1026 	.ds 2
                           000028  1027 G$ANGLE_PW$0$0==.
      00004A                       1028 _ANGLE_PW::
      00004A                       1029 	.ds 2
                           00002A  1030 G$AGL_lo_to_hi$0$0==.
      00004C                       1031 _AGL_lo_to_hi::
      00004C                       1032 	.ds 2
                           00002C  1033 G$RTHRUST_PW$0$0==.
      00004E                       1034 _RTHRUST_PW::
      00004E                       1035 	.ds 2
                           00002E  1036 G$LTHRUST_PW$0$0==.
      000050                       1037 _LTHRUST_PW::
      000050                       1038 	.ds 2
                           000030  1039 G$RTRST_lo_to_hi$0$0==.
      000052                       1040 _RTRST_lo_to_hi::
      000052                       1041 	.ds 2
                           000032  1042 G$LTRST_lo_to_hi$0$0==.
      000054                       1043 _LTRST_lo_to_hi::
      000054                       1044 	.ds 2
                           000034  1045 G$offset$0$0==.
      000056                       1046 _offset::
      000056                       1047 	.ds 2
                           000036  1048 G$r_data$0$0==.
      000058                       1049 _r_data::
      000058                       1050 	.ds 2
                           000038  1051 G$kp$0$0==.
      00005A                       1052 _kp::
      00005A                       1053 	.ds 2
                           00003A  1054 G$kd$0$0==.
      00005C                       1055 _kd::
      00005C                       1056 	.ds 2
                           00003C  1057 G$ratio$0$0==.
      00005E                       1058 _ratio::
      00005E                       1059 	.ds 2
                           00003E  1060 G$dratio$0$0==.
      000060                       1061 _dratio::
      000060                       1062 	.ds 2
                           000040  1063 Llab6.ReadCompass$Data$1$141==.
      000062                       1064 _ReadCompass_Data_1_141:
      000062                       1065 	.ds 2
                                   1066 ;--------------------------------------------------------
                                   1067 ; overlayable items in internal ram 
                                   1068 ;--------------------------------------------------------
                                   1069 	.area	OSEG    (OVR,DATA)
                                   1070 	.area	OSEG    (OVR,DATA)
                                   1071 	.area	OSEG    (OVR,DATA)
                                   1072 	.area	OSEG    (OVR,DATA)
                                   1073 	.area	OSEG    (OVR,DATA)
                                   1074 	.area	OSEG    (OVR,DATA)
                                   1075 	.area	OSEG    (OVR,DATA)
                                   1076 ;--------------------------------------------------------
                                   1077 ; Stack segment in internal ram 
                                   1078 ;--------------------------------------------------------
                                   1079 	.area	SSEG
      00007E                       1080 __start__stack:
      00007E                       1081 	.ds	1
                                   1082 
                                   1083 ;--------------------------------------------------------
                                   1084 ; indirectly addressable internal ram data
                                   1085 ;--------------------------------------------------------
                                   1086 	.area ISEG    (DATA)
                                   1087 ;--------------------------------------------------------
                                   1088 ; absolute internal ram data
                                   1089 ;--------------------------------------------------------
                                   1090 	.area IABS    (ABS,DATA)
                                   1091 	.area IABS    (ABS,DATA)
                                   1092 ;--------------------------------------------------------
                                   1093 ; bit data
                                   1094 ;--------------------------------------------------------
                                   1095 	.area BSEG    (BIT)
                                   1096 ;--------------------------------------------------------
                                   1097 ; paged external ram data
                                   1098 ;--------------------------------------------------------
                                   1099 	.area PSEG    (PAG,XDATA)
                                   1100 ;--------------------------------------------------------
                                   1101 ; external ram data
                                   1102 ;--------------------------------------------------------
                                   1103 	.area XSEG    (XDATA)
                           000000  1104 Llab6.lcd_print$text$1$73==.
      000001                       1105 _lcd_print_text_1_73:
      000001                       1106 	.ds 80
                           000050  1107 G$desired_D$0$0==.
      000051                       1108 _desired_D::
      000051                       1109 	.ds 2
                           000052  1110 G$actual_D$0$0==.
      000053                       1111 _actual_D::
      000053                       1112 	.ds 2
                           000054  1113 Llab6.Change_D$distance$1$131==.
      000055                       1114 _Change_D_distance_1_131:
      000055                       1115 	.ds 2
                           000056  1116 Llab6.Rudder_cal$value$1$143==.
      000057                       1117 _Rudder_cal_value_1_143:
      000057                       1118 	.ds 2
                           000058  1119 Llab6.Rudder_cal$times$1$143==.
      000059                       1120 _Rudder_cal_times_1_143:
      000059                       1121 	.ds 2
                           00005A  1122 Llab6.Angle_cal$value$1$162==.
      00005B                       1123 _Angle_cal_value_1_162:
      00005B                       1124 	.ds 2
                           00005C  1125 Llab6.Angle_cal$times$1$162==.
      00005D                       1126 _Angle_cal_times_1_162:
      00005D                       1127 	.ds 2
                           00005E  1128 Llab6.Thrust_cal$value$1$181==.
      00005F                       1129 _Thrust_cal_value_1_181:
      00005F                       1130 	.ds 2
                           000060  1131 Llab6.Thrust_cal$times$1$181==.
      000061                       1132 _Thrust_cal_times_1_181:
      000061                       1133 	.ds 2
                           000062  1134 Llab6.wait$old_count$1$216==.
      000063                       1135 _wait_old_count_1_216:
      000063                       1136 	.ds 2
                                   1137 ;--------------------------------------------------------
                                   1138 ; absolute external ram data
                                   1139 ;--------------------------------------------------------
                                   1140 	.area XABS    (ABS,XDATA)
                                   1141 ;--------------------------------------------------------
                                   1142 ; external initialized ram data
                                   1143 ;--------------------------------------------------------
                                   1144 	.area XISEG   (XDATA)
                           000000  1145 G$error$0$0==.
      000065                       1146 _error::
      000065                       1147 	.ds 2
                           000002  1148 G$old_error$0$0==.
      000067                       1149 _old_error::
      000067                       1150 	.ds 2
                                   1151 	.area HOME    (CODE)
                                   1152 	.area GSINIT0 (CODE)
                                   1153 	.area GSINIT1 (CODE)
                                   1154 	.area GSINIT2 (CODE)
                                   1155 	.area GSINIT3 (CODE)
                                   1156 	.area GSINIT4 (CODE)
                                   1157 	.area GSINIT5 (CODE)
                                   1158 	.area GSINIT  (CODE)
                                   1159 	.area GSFINAL (CODE)
                                   1160 	.area CSEG    (CODE)
                                   1161 ;--------------------------------------------------------
                                   1162 ; interrupt vector 
                                   1163 ;--------------------------------------------------------
                                   1164 	.area HOME    (CODE)
      000000                       1165 __interrupt_vect:
      000000 02 00 51         [24] 1166 	ljmp	__sdcc_gsinit_startup
      000003 32               [24] 1167 	reti
      000004                       1168 	.ds	7
      00000B 32               [24] 1169 	reti
      00000C                       1170 	.ds	7
      000013 32               [24] 1171 	reti
      000014                       1172 	.ds	7
      00001B 32               [24] 1173 	reti
      00001C                       1174 	.ds	7
      000023 32               [24] 1175 	reti
      000024                       1176 	.ds	7
      00002B 32               [24] 1177 	reti
      00002C                       1178 	.ds	7
      000033 32               [24] 1179 	reti
      000034                       1180 	.ds	7
      00003B 32               [24] 1181 	reti
      00003C                       1182 	.ds	7
      000043 32               [24] 1183 	reti
      000044                       1184 	.ds	7
      00004B 02 13 DB         [24] 1185 	ljmp	_PCA_ISR
                                   1186 ;--------------------------------------------------------
                                   1187 ; global & static initialisations
                                   1188 ;--------------------------------------------------------
                                   1189 	.area HOME    (CODE)
                                   1190 	.area GSINIT  (CODE)
                                   1191 	.area GSFINAL (CODE)
                                   1192 	.area GSINIT  (CODE)
                                   1193 	.globl __sdcc_gsinit_startup
                                   1194 	.globl __sdcc_program_startup
                                   1195 	.globl __start__stack
                                   1196 	.globl __mcs51_genXINIT
                                   1197 	.globl __mcs51_genXRAMCLEAR
                                   1198 	.globl __mcs51_genRAMCLEAR
                           000000  1199 	C$lab6.c$45$1$228 ==.
                                   1200 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:45: int count=0;
      0000AA E4               [12] 1201 	clr	a
      0000AB F5 32            [12] 1202 	mov	_count,a
      0000AD F5 33            [12] 1203 	mov	(_count + 1),a
                           000005  1204 	C$lab6.c$46$1$228 ==.
                                   1205 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:46: unsigned int PW_MIN_THRUST = 2000;
      0000AF 75 34 D0         [24] 1206 	mov	_PW_MIN_THRUST,#0xD0
      0000B2 75 35 07         [24] 1207 	mov	(_PW_MIN_THRUST + 1),#0x07
                           00000B  1208 	C$lab6.c$47$1$228 ==.
                                   1209 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:47: unsigned int PW_NUET_THRUST = 2750;
      0000B5 75 36 BE         [24] 1210 	mov	_PW_NUET_THRUST,#0xBE
      0000B8 75 37 0A         [24] 1211 	mov	(_PW_NUET_THRUST + 1),#0x0A
                           000011  1212 	C$lab6.c$48$1$228 ==.
                                   1213 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:48: unsigned int PW_MAX_THRUST = 3500;
      0000BB 75 38 AC         [24] 1214 	mov	_PW_MAX_THRUST,#0xAC
      0000BE 75 39 0D         [24] 1215 	mov	(_PW_MAX_THRUST + 1),#0x0D
                           000017  1216 	C$lab6.c$50$1$228 ==.
                                   1217 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:50: unsigned int PW_LEFT_RUDDER = 2000;
      0000C1 75 3A D0         [24] 1218 	mov	_PW_LEFT_RUDDER,#0xD0
      0000C4 75 3B 07         [24] 1219 	mov	(_PW_LEFT_RUDDER + 1),#0x07
                           00001D  1220 	C$lab6.c$51$1$228 ==.
                                   1221 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:51: unsigned int PW_CENTER_RUDDER = 2750;
      0000C7 75 3C BE         [24] 1222 	mov	_PW_CENTER_RUDDER,#0xBE
      0000CA 75 3D 0A         [24] 1223 	mov	(_PW_CENTER_RUDDER + 1),#0x0A
                           000023  1224 	C$lab6.c$52$1$228 ==.
                                   1225 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:52: unsigned int PW_RIGHT_RUDDER = 3500;
      0000CD 75 3E AC         [24] 1226 	mov	_PW_RIGHT_RUDDER,#0xAC
      0000D0 75 3F 0D         [24] 1227 	mov	(_PW_RIGHT_RUDDER + 1),#0x0D
                           000029  1228 	C$lab6.c$54$1$228 ==.
                                   1229 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:54: unsigned int PW_UP_ANGLE = 2880;
      0000D3 75 40 40         [24] 1230 	mov	_PW_UP_ANGLE,#0x40
      0000D6 75 41 0B         [24] 1231 	mov	(_PW_UP_ANGLE + 1),#0x0B
                           00002F  1232 	C$lab6.c$55$1$228 ==.
                                   1233 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:55: unsigned int PW_CENTER_ANGLE = 3530;
      0000D9 75 42 CA         [24] 1234 	mov	_PW_CENTER_ANGLE,#0xCA
      0000DC 75 43 0D         [24] 1235 	mov	(_PW_CENTER_ANGLE + 1),#0x0D
                           000035  1236 	C$lab6.c$56$1$228 ==.
                                   1237 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:56: unsigned int PW_DOWN_ANGLE = 4180;
      0000DF 75 44 54         [24] 1238 	mov	_PW_DOWN_ANGLE,#0x54
      0000E2 75 45 10         [24] 1239 	mov	(_PW_DOWN_ANGLE + 1),#0x10
                                   1240 	.area GSFINAL (CODE)
      0000E5 02 00 4E         [24] 1241 	ljmp	__sdcc_program_startup
                                   1242 ;--------------------------------------------------------
                                   1243 ; Home
                                   1244 ;--------------------------------------------------------
                                   1245 	.area HOME    (CODE)
                                   1246 	.area HOME    (CODE)
      00004E                       1247 __sdcc_program_startup:
      00004E 02 05 BE         [24] 1248 	ljmp	_main
                                   1249 ;	return from main will return to caller
                                   1250 ;--------------------------------------------------------
                                   1251 ; code
                                   1252 ;--------------------------------------------------------
                                   1253 	.area CSEG    (CODE)
                                   1254 ;------------------------------------------------------------
                                   1255 ;Allocation info for local variables in function 'SYSCLK_Init'
                                   1256 ;------------------------------------------------------------
                                   1257 ;i                         Allocated to registers 
                                   1258 ;------------------------------------------------------------
                           000000  1259 	G$SYSCLK_Init$0$0 ==.
                           000000  1260 	C$c8051_SDCC.h$42$0$0 ==.
                                   1261 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:42: void SYSCLK_Init(void)
                                   1262 ;	-----------------------------------------
                                   1263 ;	 function SYSCLK_Init
                                   1264 ;	-----------------------------------------
      0000E8                       1265 _SYSCLK_Init:
                           000007  1266 	ar7 = 0x07
                           000006  1267 	ar6 = 0x06
                           000005  1268 	ar5 = 0x05
                           000004  1269 	ar4 = 0x04
                           000003  1270 	ar3 = 0x03
                           000002  1271 	ar2 = 0x02
                           000001  1272 	ar1 = 0x01
                           000000  1273 	ar0 = 0x00
                           000000  1274 	C$c8051_SDCC.h$46$1$31 ==.
                                   1275 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:46: OSCXCN = 0x67;                      // start external oscillator with
      0000E8 75 B1 67         [24] 1276 	mov	_OSCXCN,#0x67
                           000003  1277 	C$c8051_SDCC.h$49$1$31 ==.
                                   1278 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:49: for (i=0; i < 256; i++);            // wait for oscillator to start
      0000EB 7E 00            [12] 1279 	mov	r6,#0x00
      0000ED 7F 01            [12] 1280 	mov	r7,#0x01
      0000EF                       1281 00107$:
      0000EF 1E               [12] 1282 	dec	r6
      0000F0 BE FF 01         [24] 1283 	cjne	r6,#0xFF,00121$
      0000F3 1F               [12] 1284 	dec	r7
      0000F4                       1285 00121$:
      0000F4 EE               [12] 1286 	mov	a,r6
      0000F5 4F               [12] 1287 	orl	a,r7
      0000F6 70 F7            [24] 1288 	jnz	00107$
                           000010  1289 	C$c8051_SDCC.h$51$1$31 ==.
                                   1290 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:51: while (!(OSCXCN & 0x80));           // Wait for crystal osc. to settle
      0000F8                       1291 00102$:
      0000F8 E5 B1            [12] 1292 	mov	a,_OSCXCN
      0000FA 30 E7 FB         [24] 1293 	jnb	acc.7,00102$
                           000015  1294 	C$c8051_SDCC.h$53$1$31 ==.
                                   1295 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:53: OSCICN = 0x88;                      // select external oscillator as SYSCLK
      0000FD 75 B2 88         [24] 1296 	mov	_OSCICN,#0x88
                           000018  1297 	C$c8051_SDCC.h$56$1$31 ==.
                           000018  1298 	XG$SYSCLK_Init$0$0 ==.
      000100 22               [24] 1299 	ret
                                   1300 ;------------------------------------------------------------
                                   1301 ;Allocation info for local variables in function 'UART0_Init'
                                   1302 ;------------------------------------------------------------
                           000019  1303 	G$UART0_Init$0$0 ==.
                           000019  1304 	C$c8051_SDCC.h$64$1$31 ==.
                                   1305 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:64: void UART0_Init(void)
                                   1306 ;	-----------------------------------------
                                   1307 ;	 function UART0_Init
                                   1308 ;	-----------------------------------------
      000101                       1309 _UART0_Init:
                           000019  1310 	C$c8051_SDCC.h$66$1$33 ==.
                                   1311 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:66: SCON0  = 0x50;                      // SCON0: mode 1, 8-bit UART, enable RX
      000101 75 98 50         [24] 1312 	mov	_SCON0,#0x50
                           00001C  1313 	C$c8051_SDCC.h$67$1$33 ==.
                                   1314 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:67: TMOD   = 0x20;                      // TMOD: timer 1, mode 2, 8-bit reload
      000104 75 89 20         [24] 1315 	mov	_TMOD,#0x20
                           00001F  1316 	C$c8051_SDCC.h$68$1$33 ==.
                                   1317 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:68: TH1    = -(SYSCLK/BAUDRATE/16);     // set Timer1 reload value for baudrate
      000107 75 8D DC         [24] 1318 	mov	_TH1,#0xDC
                           000022  1319 	C$c8051_SDCC.h$69$1$33 ==.
                                   1320 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:69: TR1    = 1;                         // start Timer1
      00010A D2 8E            [12] 1321 	setb	_TR1
                           000024  1322 	C$c8051_SDCC.h$70$1$33 ==.
                                   1323 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:70: CKCON |= 0x10;                      // Timer1 uses SYSCLK as time base
      00010C 43 8E 10         [24] 1324 	orl	_CKCON,#0x10
                           000027  1325 	C$c8051_SDCC.h$71$1$33 ==.
                                   1326 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:71: PCON  |= 0x80;                      // SMOD00 = 1 (disable baud rate 
      00010F 43 87 80         [24] 1327 	orl	_PCON,#0x80
                           00002A  1328 	C$c8051_SDCC.h$73$1$33 ==.
                                   1329 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:73: TI0    = 1;                         // Indicate TX0 ready
      000112 D2 99            [12] 1330 	setb	_TI0
                           00002C  1331 	C$c8051_SDCC.h$74$1$33 ==.
                                   1332 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:74: P0MDOUT |= 0x01;                    // Set TX0 to push/pull
      000114 43 A4 01         [24] 1333 	orl	_P0MDOUT,#0x01
                           00002F  1334 	C$c8051_SDCC.h$75$1$33 ==.
                           00002F  1335 	XG$UART0_Init$0$0 ==.
      000117 22               [24] 1336 	ret
                                   1337 ;------------------------------------------------------------
                                   1338 ;Allocation info for local variables in function 'Sys_Init'
                                   1339 ;------------------------------------------------------------
                           000030  1340 	G$Sys_Init$0$0 ==.
                           000030  1341 	C$c8051_SDCC.h$83$1$33 ==.
                                   1342 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:83: void Sys_Init(void)
                                   1343 ;	-----------------------------------------
                                   1344 ;	 function Sys_Init
                                   1345 ;	-----------------------------------------
      000118                       1346 _Sys_Init:
                           000030  1347 	C$c8051_SDCC.h$85$1$35 ==.
                                   1348 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:85: WDTCN = 0xde;			// disable watchdog timer
      000118 75 FF DE         [24] 1349 	mov	_WDTCN,#0xDE
                           000033  1350 	C$c8051_SDCC.h$86$1$35 ==.
                                   1351 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:86: WDTCN = 0xad;
      00011B 75 FF AD         [24] 1352 	mov	_WDTCN,#0xAD
                           000036  1353 	C$c8051_SDCC.h$88$1$35 ==.
                                   1354 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:88: SYSCLK_Init();			// initialize oscillator
      00011E 12 00 E8         [24] 1355 	lcall	_SYSCLK_Init
                           000039  1356 	C$c8051_SDCC.h$89$1$35 ==.
                                   1357 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:89: UART0_Init();			// initialize UART0
      000121 12 01 01         [24] 1358 	lcall	_UART0_Init
                           00003C  1359 	C$c8051_SDCC.h$91$1$35 ==.
                                   1360 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:91: XBR0 |= 0x04;
      000124 43 E1 04         [24] 1361 	orl	_XBR0,#0x04
                           00003F  1362 	C$c8051_SDCC.h$92$1$35 ==.
                                   1363 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:92: XBR2 |= 0x40;                    	// Enable crossbar and weak pull-ups
      000127 43 E3 40         [24] 1364 	orl	_XBR2,#0x40
                           000042  1365 	C$c8051_SDCC.h$93$1$35 ==.
                           000042  1366 	XG$Sys_Init$0$0 ==.
      00012A 22               [24] 1367 	ret
                                   1368 ;------------------------------------------------------------
                                   1369 ;Allocation info for local variables in function 'putchar'
                                   1370 ;------------------------------------------------------------
                                   1371 ;c                         Allocated to registers r7 
                                   1372 ;------------------------------------------------------------
                           000043  1373 	G$putchar$0$0 ==.
                           000043  1374 	C$c8051_SDCC.h$98$1$35 ==.
                                   1375 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:98: void putchar(char c)
                                   1376 ;	-----------------------------------------
                                   1377 ;	 function putchar
                                   1378 ;	-----------------------------------------
      00012B                       1379 _putchar:
      00012B AF 82            [24] 1380 	mov	r7,dpl
                           000045  1381 	C$c8051_SDCC.h$100$1$37 ==.
                                   1382 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:100: while (!TI0); 
      00012D                       1383 00101$:
                           000045  1384 	C$c8051_SDCC.h$101$1$37 ==.
                                   1385 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:101: TI0 = 0;
      00012D 10 99 02         [24] 1386 	jbc	_TI0,00112$
      000130 80 FB            [24] 1387 	sjmp	00101$
      000132                       1388 00112$:
                           00004A  1389 	C$c8051_SDCC.h$102$1$37 ==.
                                   1390 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:102: SBUF0 = c;
      000132 8F 99            [24] 1391 	mov	_SBUF0,r7
                           00004C  1392 	C$c8051_SDCC.h$103$1$37 ==.
                           00004C  1393 	XG$putchar$0$0 ==.
      000134 22               [24] 1394 	ret
                                   1395 ;------------------------------------------------------------
                                   1396 ;Allocation info for local variables in function 'getchar'
                                   1397 ;------------------------------------------------------------
                                   1398 ;c                         Allocated to registers 
                                   1399 ;------------------------------------------------------------
                           00004D  1400 	G$getchar$0$0 ==.
                           00004D  1401 	C$c8051_SDCC.h$108$1$37 ==.
                                   1402 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:108: char getchar(void)
                                   1403 ;	-----------------------------------------
                                   1404 ;	 function getchar
                                   1405 ;	-----------------------------------------
      000135                       1406 _getchar:
                           00004D  1407 	C$c8051_SDCC.h$111$1$39 ==.
                                   1408 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:111: while (!RI0);
      000135                       1409 00101$:
                           00004D  1410 	C$c8051_SDCC.h$112$1$39 ==.
                                   1411 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:112: RI0 = 0;
      000135 10 98 02         [24] 1412 	jbc	_RI0,00112$
      000138 80 FB            [24] 1413 	sjmp	00101$
      00013A                       1414 00112$:
                           000052  1415 	C$c8051_SDCC.h$113$1$39 ==.
                                   1416 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:113: c = SBUF0;
      00013A 85 99 82         [24] 1417 	mov	dpl,_SBUF0
                           000055  1418 	C$c8051_SDCC.h$114$1$39 ==.
                                   1419 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:114: putchar(c);                          // echo to terminal
      00013D 12 01 2B         [24] 1420 	lcall	_putchar
                           000058  1421 	C$c8051_SDCC.h$115$1$39 ==.
                                   1422 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:115: return SBUF0;
      000140 85 99 82         [24] 1423 	mov	dpl,_SBUF0
                           00005B  1424 	C$c8051_SDCC.h$116$1$39 ==.
                           00005B  1425 	XG$getchar$0$0 ==.
      000143 22               [24] 1426 	ret
                                   1427 ;------------------------------------------------------------
                                   1428 ;Allocation info for local variables in function 'lcd_print'
                                   1429 ;------------------------------------------------------------
                                   1430 ;fmt                       Allocated to stack - _bp -5
                                   1431 ;len                       Allocated to registers r6 
                                   1432 ;i                         Allocated to registers 
                                   1433 ;ap                        Allocated to registers 
                                   1434 ;text                      Allocated with name '_lcd_print_text_1_73'
                                   1435 ;------------------------------------------------------------
                           00005C  1436 	G$lcd_print$0$0 ==.
                           00005C  1437 	C$i2c.h$81$1$39 ==.
                                   1438 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:81: void lcd_print(const char *fmt, ...)
                                   1439 ;	-----------------------------------------
                                   1440 ;	 function lcd_print
                                   1441 ;	-----------------------------------------
      000144                       1442 _lcd_print:
      000144 C0 0F            [24] 1443 	push	_bp
      000146 85 81 0F         [24] 1444 	mov	_bp,sp
                           000061  1445 	C$i2c.h$87$1$73 ==.
                                   1446 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:87: if ( strlen(fmt) <= 0 ) return;   //If there is no data to print, return
      000149 E5 0F            [12] 1447 	mov	a,_bp
      00014B 24 FB            [12] 1448 	add	a,#0xfb
      00014D F8               [12] 1449 	mov	r0,a
      00014E 86 82            [24] 1450 	mov	dpl,@r0
      000150 08               [12] 1451 	inc	r0
      000151 86 83            [24] 1452 	mov	dph,@r0
      000153 08               [12] 1453 	inc	r0
      000154 86 F0            [24] 1454 	mov	b,@r0
      000156 12 1B 7A         [24] 1455 	lcall	_strlen
      000159 E5 82            [12] 1456 	mov	a,dpl
      00015B 85 83 F0         [24] 1457 	mov	b,dph
      00015E 45 F0            [12] 1458 	orl	a,b
      000160 70 02            [24] 1459 	jnz	00102$
      000162 80 62            [24] 1460 	sjmp	00109$
      000164                       1461 00102$:
                           00007C  1462 	C$i2c.h$89$2$74 ==.
                                   1463 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:89: va_start(ap, fmt);
      000164 E5 0F            [12] 1464 	mov	a,_bp
      000166 24 FB            [12] 1465 	add	a,#0xFB
      000168 FF               [12] 1466 	mov	r7,a
      000169 8F 0B            [24] 1467 	mov	_vsprintf_PARM_3,r7
                           000083  1468 	C$i2c.h$90$1$73 ==.
                                   1469 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:90: vsprintf(text, fmt, ap);
      00016B E5 0F            [12] 1470 	mov	a,_bp
      00016D 24 FB            [12] 1471 	add	a,#0xfb
      00016F F8               [12] 1472 	mov	r0,a
      000170 86 08            [24] 1473 	mov	_vsprintf_PARM_2,@r0
      000172 08               [12] 1474 	inc	r0
      000173 86 09            [24] 1475 	mov	(_vsprintf_PARM_2 + 1),@r0
      000175 08               [12] 1476 	inc	r0
      000176 86 0A            [24] 1477 	mov	(_vsprintf_PARM_2 + 2),@r0
      000178 90 00 01         [24] 1478 	mov	dptr,#_lcd_print_text_1_73
      00017B 75 F0 00         [24] 1479 	mov	b,#0x00
      00017E 12 14 A2         [24] 1480 	lcall	_vsprintf
                           000099  1481 	C$i2c.h$93$1$73 ==.
                                   1482 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:93: len = strlen(text);
      000181 90 00 01         [24] 1483 	mov	dptr,#_lcd_print_text_1_73
      000184 75 F0 00         [24] 1484 	mov	b,#0x00
      000187 12 1B 7A         [24] 1485 	lcall	_strlen
      00018A AE 82            [24] 1486 	mov	r6,dpl
                           0000A4  1487 	C$i2c.h$94$1$73 ==.
                                   1488 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:94: for(i=0; i<len; i++)
      00018C 7F 00            [12] 1489 	mov	r7,#0x00
      00018E                       1490 00107$:
      00018E C3               [12] 1491 	clr	c
      00018F EF               [12] 1492 	mov	a,r7
      000190 9E               [12] 1493 	subb	a,r6
      000191 50 1F            [24] 1494 	jnc	00105$
                           0000AB  1495 	C$i2c.h$96$2$76 ==.
                                   1496 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:96: if(text[i] == (unsigned char)'\n') text[i] = 13;
      000193 EF               [12] 1497 	mov	a,r7
      000194 24 01            [12] 1498 	add	a,#_lcd_print_text_1_73
      000196 F5 82            [12] 1499 	mov	dpl,a
      000198 E4               [12] 1500 	clr	a
      000199 34 00            [12] 1501 	addc	a,#(_lcd_print_text_1_73 >> 8)
      00019B F5 83            [12] 1502 	mov	dph,a
      00019D E0               [24] 1503 	movx	a,@dptr
      00019E FD               [12] 1504 	mov	r5,a
      00019F BD 0A 0D         [24] 1505 	cjne	r5,#0x0A,00108$
      0001A2 EF               [12] 1506 	mov	a,r7
      0001A3 24 01            [12] 1507 	add	a,#_lcd_print_text_1_73
      0001A5 F5 82            [12] 1508 	mov	dpl,a
      0001A7 E4               [12] 1509 	clr	a
      0001A8 34 00            [12] 1510 	addc	a,#(_lcd_print_text_1_73 >> 8)
      0001AA F5 83            [12] 1511 	mov	dph,a
      0001AC 74 0D            [12] 1512 	mov	a,#0x0D
      0001AE F0               [24] 1513 	movx	@dptr,a
      0001AF                       1514 00108$:
                           0000C7  1515 	C$i2c.h$94$1$73 ==.
                                   1516 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:94: for(i=0; i<len; i++)
      0001AF 0F               [12] 1517 	inc	r7
      0001B0 80 DC            [24] 1518 	sjmp	00107$
      0001B2                       1519 00105$:
                           0000CA  1520 	C$i2c.h$99$1$73 ==.
                                   1521 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:99: i2c_write_data(0xC6, 0x00, text, len);
      0001B2 75 28 01         [24] 1522 	mov	_i2c_write_data_PARM_3,#_lcd_print_text_1_73
      0001B5 75 29 00         [24] 1523 	mov	(_i2c_write_data_PARM_3 + 1),#(_lcd_print_text_1_73 >> 8)
      0001B8 75 2A 00         [24] 1524 	mov	(_i2c_write_data_PARM_3 + 2),#0x00
      0001BB 75 27 00         [24] 1525 	mov	_i2c_write_data_PARM_2,#0x00
      0001BE 8E 2B            [24] 1526 	mov	_i2c_write_data_PARM_4,r6
      0001C0 75 82 C6         [24] 1527 	mov	dpl,#0xC6
      0001C3 12 04 5A         [24] 1528 	lcall	_i2c_write_data
      0001C6                       1529 00109$:
      0001C6 D0 0F            [24] 1530 	pop	_bp
                           0000E0  1531 	C$i2c.h$100$1$73 ==.
                           0000E0  1532 	XG$lcd_print$0$0 ==.
      0001C8 22               [24] 1533 	ret
                                   1534 ;------------------------------------------------------------
                                   1535 ;Allocation info for local variables in function 'lcd_clear'
                                   1536 ;------------------------------------------------------------
                                   1537 ;NumBytes                  Allocated with name '_lcd_clear_NumBytes_1_77'
                                   1538 ;Cmd                       Allocated with name '_lcd_clear_Cmd_1_77'
                                   1539 ;------------------------------------------------------------
                           0000E1  1540 	G$lcd_clear$0$0 ==.
                           0000E1  1541 	C$i2c.h$103$1$73 ==.
                                   1542 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:103: void lcd_clear()
                                   1543 ;	-----------------------------------------
                                   1544 ;	 function lcd_clear
                                   1545 ;	-----------------------------------------
      0001C9                       1546 _lcd_clear:
                           0000E1  1547 	C$i2c.h$105$1$73 ==.
                                   1548 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:105: unsigned char NumBytes=0, Cmd[2];
      0001C9 75 22 00         [24] 1549 	mov	_lcd_clear_NumBytes_1_77,#0x00
                           0000E4  1550 	C$i2c.h$107$1$77 ==.
                                   1551 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:107: while(NumBytes < 64) i2c_read_data(0xC6, 0x00, &NumBytes, 1);
      0001CC                       1552 00101$:
      0001CC 74 C0            [12] 1553 	mov	a,#0x100 - 0x40
      0001CE 25 22            [12] 1554 	add	a,_lcd_clear_NumBytes_1_77
      0001D0 40 17            [24] 1555 	jc	00103$
      0001D2 75 2D 22         [24] 1556 	mov	_i2c_read_data_PARM_3,#_lcd_clear_NumBytes_1_77
      0001D5 75 2E 00         [24] 1557 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0001D8 75 2F 40         [24] 1558 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0001DB 75 2C 00         [24] 1559 	mov	_i2c_read_data_PARM_2,#0x00
      0001DE 75 30 01         [24] 1560 	mov	_i2c_read_data_PARM_4,#0x01
      0001E1 75 82 C6         [24] 1561 	mov	dpl,#0xC6
      0001E4 12 04 D0         [24] 1562 	lcall	_i2c_read_data
      0001E7 80 E3            [24] 1563 	sjmp	00101$
      0001E9                       1564 00103$:
                           000101  1565 	C$i2c.h$109$1$77 ==.
                                   1566 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:109: Cmd[0] = 12;
      0001E9 75 23 0C         [24] 1567 	mov	_lcd_clear_Cmd_1_77,#0x0C
                           000104  1568 	C$i2c.h$110$1$77 ==.
                                   1569 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:110: i2c_write_data(0xC6, 0x00, Cmd, 1);
      0001EC 75 28 23         [24] 1570 	mov	_i2c_write_data_PARM_3,#_lcd_clear_Cmd_1_77
      0001EF 75 29 00         [24] 1571 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      0001F2 75 2A 40         [24] 1572 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      0001F5 75 27 00         [24] 1573 	mov	_i2c_write_data_PARM_2,#0x00
      0001F8 75 2B 01         [24] 1574 	mov	_i2c_write_data_PARM_4,#0x01
      0001FB 75 82 C6         [24] 1575 	mov	dpl,#0xC6
      0001FE 12 04 5A         [24] 1576 	lcall	_i2c_write_data
                           000119  1577 	C$i2c.h$111$1$77 ==.
                           000119  1578 	XG$lcd_clear$0$0 ==.
      000201 22               [24] 1579 	ret
                                   1580 ;------------------------------------------------------------
                                   1581 ;Allocation info for local variables in function 'read_keypad'
                                   1582 ;------------------------------------------------------------
                                   1583 ;i                         Allocated to registers r7 
                                   1584 ;Data                      Allocated with name '_read_keypad_Data_1_78'
                                   1585 ;------------------------------------------------------------
                           00011A  1586 	G$read_keypad$0$0 ==.
                           00011A  1587 	C$i2c.h$114$1$77 ==.
                                   1588 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:114: char read_keypad()
                                   1589 ;	-----------------------------------------
                                   1590 ;	 function read_keypad
                                   1591 ;	-----------------------------------------
      000202                       1592 _read_keypad:
                           00011A  1593 	C$i2c.h$118$1$78 ==.
                                   1594 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:118: i2c_read_data(0xC6, 0x01, Data, 2); //Read I2C data on address 192, register 1, 2 bytes of data.
      000202 75 2D 25         [24] 1595 	mov	_i2c_read_data_PARM_3,#_read_keypad_Data_1_78
      000205 75 2E 00         [24] 1596 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      000208 75 2F 40         [24] 1597 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      00020B 75 2C 01         [24] 1598 	mov	_i2c_read_data_PARM_2,#0x01
      00020E 75 30 02         [24] 1599 	mov	_i2c_read_data_PARM_4,#0x02
      000211 75 82 C6         [24] 1600 	mov	dpl,#0xC6
      000214 12 04 D0         [24] 1601 	lcall	_i2c_read_data
                           00012F  1602 	C$i2c.h$119$1$78 ==.
                                   1603 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:119: if(Data[0] == 0xFF) return 0;  //No response on bus, no display
      000217 74 FF            [12] 1604 	mov	a,#0xFF
      000219 B5 25 05         [24] 1605 	cjne	a,_read_keypad_Data_1_78,00102$
      00021C 75 82 00         [24] 1606 	mov	dpl,#0x00
      00021F 80 5F            [24] 1607 	sjmp	00116$
      000221                       1608 00102$:
                           000139  1609 	C$i2c.h$121$1$78 ==.
                                   1610 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:121: for(i=0; i<8; i++)             //loop 8 times
      000221 7F 00            [12] 1611 	mov	r7,#0x00
      000223 8F 06            [24] 1612 	mov	ar6,r7
      000225                       1613 00114$:
                           00013D  1614 	C$i2c.h$123$2$79 ==.
                                   1615 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:123: if(Data[0] & (0x01 << i))  //find the ASCII value of the keypad read, if it is the current loop value
      000225 8E F0            [24] 1616 	mov	b,r6
      000227 05 F0            [12] 1617 	inc	b
      000229 7C 01            [12] 1618 	mov	r4,#0x01
      00022B 7D 00            [12] 1619 	mov	r5,#0x00
      00022D 80 06            [24] 1620 	sjmp	00145$
      00022F                       1621 00144$:
      00022F EC               [12] 1622 	mov	a,r4
      000230 2C               [12] 1623 	add	a,r4
      000231 FC               [12] 1624 	mov	r4,a
      000232 ED               [12] 1625 	mov	a,r5
      000233 33               [12] 1626 	rlc	a
      000234 FD               [12] 1627 	mov	r5,a
      000235                       1628 00145$:
      000235 D5 F0 F7         [24] 1629 	djnz	b,00144$
      000238 AA 25            [24] 1630 	mov	r2,_read_keypad_Data_1_78
      00023A 7B 00            [12] 1631 	mov	r3,#0x00
      00023C EA               [12] 1632 	mov	a,r2
      00023D 52 04            [12] 1633 	anl	ar4,a
      00023F EB               [12] 1634 	mov	a,r3
      000240 52 05            [12] 1635 	anl	ar5,a
      000242 EC               [12] 1636 	mov	a,r4
      000243 4D               [12] 1637 	orl	a,r5
      000244 60 07            [24] 1638 	jz	00115$
                           00015E  1639 	C$i2c.h$124$2$79 ==.
                                   1640 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:124: return i+49;
      000246 74 31            [12] 1641 	mov	a,#0x31
      000248 2F               [12] 1642 	add	a,r7
      000249 F5 82            [12] 1643 	mov	dpl,a
      00024B 80 33            [24] 1644 	sjmp	00116$
      00024D                       1645 00115$:
                           000165  1646 	C$i2c.h$121$1$78 ==.
                                   1647 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:121: for(i=0; i<8; i++)             //loop 8 times
      00024D 0E               [12] 1648 	inc	r6
      00024E 8E 07            [24] 1649 	mov	ar7,r6
      000250 BE 08 00         [24] 1650 	cjne	r6,#0x08,00147$
      000253                       1651 00147$:
      000253 40 D0            [24] 1652 	jc	00114$
                           00016D  1653 	C$i2c.h$127$1$78 ==.
                                   1654 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:127: if(Data[1] & 0x01) return '9'; //if the value is equal to 9 return 9.
      000255 E5 26            [12] 1655 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000257 30 E0 05         [24] 1656 	jnb	acc.0,00107$
      00025A 75 82 39         [24] 1657 	mov	dpl,#0x39
      00025D 80 21            [24] 1658 	sjmp	00116$
      00025F                       1659 00107$:
                           000177  1660 	C$i2c.h$129$1$78 ==.
                                   1661 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:129: if(Data[1] & 0x02) return '*'; //if the value is equal to the star.
      00025F E5 26            [12] 1662 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000261 30 E1 05         [24] 1663 	jnb	acc.1,00109$
      000264 75 82 2A         [24] 1664 	mov	dpl,#0x2A
      000267 80 17            [24] 1665 	sjmp	00116$
      000269                       1666 00109$:
                           000181  1667 	C$i2c.h$131$1$78 ==.
                                   1668 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:131: if(Data[1] & 0x04) return '0'; //if the value is equal to the 0 key
      000269 E5 26            [12] 1669 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      00026B 30 E2 05         [24] 1670 	jnb	acc.2,00111$
      00026E 75 82 30         [24] 1671 	mov	dpl,#0x30
      000271 80 0D            [24] 1672 	sjmp	00116$
      000273                       1673 00111$:
                           00018B  1674 	C$i2c.h$133$1$78 ==.
                                   1675 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:133: if(Data[1] & 0x08) return '#'; //if the value is equal to the pound key
      000273 E5 26            [12] 1676 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000275 30 E3 05         [24] 1677 	jnb	acc.3,00113$
      000278 75 82 23         [24] 1678 	mov	dpl,#0x23
      00027B 80 03            [24] 1679 	sjmp	00116$
      00027D                       1680 00113$:
                           000195  1681 	C$i2c.h$135$1$78 ==.
                                   1682 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:135: return -1;                     //else return a numerical -1 (0xFF)
      00027D 75 82 FF         [24] 1683 	mov	dpl,#0xFF
      000280                       1684 00116$:
                           000198  1685 	C$i2c.h$136$1$78 ==.
                           000198  1686 	XG$read_keypad$0$0 ==.
      000280 22               [24] 1687 	ret
                                   1688 ;------------------------------------------------------------
                                   1689 ;Allocation info for local variables in function 'kpd_input'
                                   1690 ;------------------------------------------------------------
                                   1691 ;mode                      Allocated to registers r7 
                                   1692 ;sum                       Allocated to registers r5 r6 
                                   1693 ;key                       Allocated to registers r3 
                                   1694 ;i                         Allocated to registers 
                                   1695 ;------------------------------------------------------------
                           000199  1696 	G$kpd_input$0$0 ==.
                           000199  1697 	C$i2c.h$148$1$78 ==.
                                   1698 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:148: unsigned int kpd_input(char mode)
                                   1699 ;	-----------------------------------------
                                   1700 ;	 function kpd_input
                                   1701 ;	-----------------------------------------
      000281                       1702 _kpd_input:
      000281 AF 82            [24] 1703 	mov	r7,dpl
                           00019B  1704 	C$i2c.h$153$1$81 ==.
                                   1705 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:153: sum = 0;
                           00019B  1706 	C$i2c.h$156$1$81 ==.
                                   1707 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:156: if(mode==0)lcd_print("\nType digits; end w/#");
      000283 E4               [12] 1708 	clr	a
      000284 FD               [12] 1709 	mov	r5,a
      000285 FE               [12] 1710 	mov	r6,a
      000286 EF               [12] 1711 	mov	a,r7
      000287 70 1D            [24] 1712 	jnz	00102$
      000289 C0 06            [24] 1713 	push	ar6
      00028B C0 05            [24] 1714 	push	ar5
      00028D 74 E8            [12] 1715 	mov	a,#___str_0
      00028F C0 E0            [24] 1716 	push	acc
      000291 74 1B            [12] 1717 	mov	a,#(___str_0 >> 8)
      000293 C0 E0            [24] 1718 	push	acc
      000295 74 80            [12] 1719 	mov	a,#0x80
      000297 C0 E0            [24] 1720 	push	acc
      000299 12 01 44         [24] 1721 	lcall	_lcd_print
      00029C 15 81            [12] 1722 	dec	sp
      00029E 15 81            [12] 1723 	dec	sp
      0002A0 15 81            [12] 1724 	dec	sp
      0002A2 D0 05            [24] 1725 	pop	ar5
      0002A4 D0 06            [24] 1726 	pop	ar6
      0002A6                       1727 00102$:
                           0001BE  1728 	C$i2c.h$158$1$81 ==.
                                   1729 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:158: lcd_print("     %c%c%c%c%c",0x08,0x08,0x08,0x08,0x08);
      0002A6 C0 06            [24] 1730 	push	ar6
      0002A8 C0 05            [24] 1731 	push	ar5
      0002AA 74 08            [12] 1732 	mov	a,#0x08
      0002AC C0 E0            [24] 1733 	push	acc
      0002AE E4               [12] 1734 	clr	a
      0002AF C0 E0            [24] 1735 	push	acc
      0002B1 74 08            [12] 1736 	mov	a,#0x08
      0002B3 C0 E0            [24] 1737 	push	acc
      0002B5 E4               [12] 1738 	clr	a
      0002B6 C0 E0            [24] 1739 	push	acc
      0002B8 74 08            [12] 1740 	mov	a,#0x08
      0002BA C0 E0            [24] 1741 	push	acc
      0002BC E4               [12] 1742 	clr	a
      0002BD C0 E0            [24] 1743 	push	acc
      0002BF 74 08            [12] 1744 	mov	a,#0x08
      0002C1 C0 E0            [24] 1745 	push	acc
      0002C3 E4               [12] 1746 	clr	a
      0002C4 C0 E0            [24] 1747 	push	acc
      0002C6 74 08            [12] 1748 	mov	a,#0x08
      0002C8 C0 E0            [24] 1749 	push	acc
      0002CA E4               [12] 1750 	clr	a
      0002CB C0 E0            [24] 1751 	push	acc
      0002CD 74 FE            [12] 1752 	mov	a,#___str_1
      0002CF C0 E0            [24] 1753 	push	acc
      0002D1 74 1B            [12] 1754 	mov	a,#(___str_1 >> 8)
      0002D3 C0 E0            [24] 1755 	push	acc
      0002D5 74 80            [12] 1756 	mov	a,#0x80
      0002D7 C0 E0            [24] 1757 	push	acc
      0002D9 12 01 44         [24] 1758 	lcall	_lcd_print
      0002DC E5 81            [12] 1759 	mov	a,sp
      0002DE 24 F3            [12] 1760 	add	a,#0xf3
      0002E0 F5 81            [12] 1761 	mov	sp,a
                           0001FA  1762 	C$i2c.h$160$1$81 ==.
                                   1763 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:160: delay_time(500000);	//Add 20ms delay before reading i2c in loop
      0002E2 90 A1 20         [24] 1764 	mov	dptr,#0xA120
      0002E5 75 F0 07         [24] 1765 	mov	b,#0x07
      0002E8 E4               [12] 1766 	clr	a
      0002E9 12 03 F5         [24] 1767 	lcall	_delay_time
      0002EC D0 05            [24] 1768 	pop	ar5
      0002EE D0 06            [24] 1769 	pop	ar6
                           000208  1770 	C$i2c.h$164$1$81 ==.
                                   1771 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:164: for(i=0; i<5; i++)
      0002F0 7F 00            [12] 1772 	mov	r7,#0x00
                           00020A  1773 	C$i2c.h$166$3$84 ==.
                                   1774 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:166: while(((key=read_keypad()) == -1) || (key == '*'))delay_time(10000);
      0002F2                       1775 00104$:
      0002F2 C0 07            [24] 1776 	push	ar7
      0002F4 C0 06            [24] 1777 	push	ar6
      0002F6 C0 05            [24] 1778 	push	ar5
      0002F8 12 02 02         [24] 1779 	lcall	_read_keypad
      0002FB AC 82            [24] 1780 	mov	r4,dpl
      0002FD D0 05            [24] 1781 	pop	ar5
      0002FF D0 06            [24] 1782 	pop	ar6
      000301 D0 07            [24] 1783 	pop	ar7
      000303 8C 03            [24] 1784 	mov	ar3,r4
      000305 BC FF 02         [24] 1785 	cjne	r4,#0xFF,00146$
      000308 80 03            [24] 1786 	sjmp	00105$
      00030A                       1787 00146$:
      00030A BB 2A 17         [24] 1788 	cjne	r3,#0x2A,00106$
      00030D                       1789 00105$:
      00030D 90 27 10         [24] 1790 	mov	dptr,#0x2710
      000310 E4               [12] 1791 	clr	a
      000311 F5 F0            [12] 1792 	mov	b,a
      000313 C0 07            [24] 1793 	push	ar7
      000315 C0 06            [24] 1794 	push	ar6
      000317 C0 05            [24] 1795 	push	ar5
      000319 12 03 F5         [24] 1796 	lcall	_delay_time
      00031C D0 05            [24] 1797 	pop	ar5
      00031E D0 06            [24] 1798 	pop	ar6
      000320 D0 07            [24] 1799 	pop	ar7
      000322 80 CE            [24] 1800 	sjmp	00104$
      000324                       1801 00106$:
                           00023C  1802 	C$i2c.h$167$2$82 ==.
                                   1803 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:167: if(key == '#')
      000324 BB 23 2A         [24] 1804 	cjne	r3,#0x23,00114$
                           00023F  1805 	C$i2c.h$169$3$83 ==.
                                   1806 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:169: while(read_keypad() == '#')delay_time(10000);
      000327                       1807 00107$:
      000327 C0 06            [24] 1808 	push	ar6
      000329 C0 05            [24] 1809 	push	ar5
      00032B 12 02 02         [24] 1810 	lcall	_read_keypad
      00032E AC 82            [24] 1811 	mov	r4,dpl
      000330 D0 05            [24] 1812 	pop	ar5
      000332 D0 06            [24] 1813 	pop	ar6
      000334 BC 23 13         [24] 1814 	cjne	r4,#0x23,00109$
      000337 90 27 10         [24] 1815 	mov	dptr,#0x2710
      00033A E4               [12] 1816 	clr	a
      00033B F5 F0            [12] 1817 	mov	b,a
      00033D C0 06            [24] 1818 	push	ar6
      00033F C0 05            [24] 1819 	push	ar5
      000341 12 03 F5         [24] 1820 	lcall	_delay_time
      000344 D0 05            [24] 1821 	pop	ar5
      000346 D0 06            [24] 1822 	pop	ar6
      000348 80 DD            [24] 1823 	sjmp	00107$
      00034A                       1824 00109$:
                           000262  1825 	C$i2c.h$170$3$83 ==.
                                   1826 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:170: return sum;
      00034A 8D 82            [24] 1827 	mov	dpl,r5
      00034C 8E 83            [24] 1828 	mov	dph,r6
      00034E 02 03 F4         [24] 1829 	ljmp	00119$
      000351                       1830 00114$:
                           000269  1831 	C$i2c.h$174$3$84 ==.
                                   1832 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:174: lcd_print("%c", key);
      000351 EB               [12] 1833 	mov	a,r3
      000352 FA               [12] 1834 	mov	r2,a
      000353 33               [12] 1835 	rlc	a
      000354 95 E0            [12] 1836 	subb	a,acc
      000356 FC               [12] 1837 	mov	r4,a
      000357 C0 07            [24] 1838 	push	ar7
      000359 C0 06            [24] 1839 	push	ar6
      00035B C0 05            [24] 1840 	push	ar5
      00035D C0 04            [24] 1841 	push	ar4
      00035F C0 03            [24] 1842 	push	ar3
      000361 C0 02            [24] 1843 	push	ar2
      000363 C0 02            [24] 1844 	push	ar2
      000365 C0 04            [24] 1845 	push	ar4
      000367 74 0E            [12] 1846 	mov	a,#___str_2
      000369 C0 E0            [24] 1847 	push	acc
      00036B 74 1C            [12] 1848 	mov	a,#(___str_2 >> 8)
      00036D C0 E0            [24] 1849 	push	acc
      00036F 74 80            [12] 1850 	mov	a,#0x80
      000371 C0 E0            [24] 1851 	push	acc
      000373 12 01 44         [24] 1852 	lcall	_lcd_print
      000376 E5 81            [12] 1853 	mov	a,sp
      000378 24 FB            [12] 1854 	add	a,#0xfb
      00037A F5 81            [12] 1855 	mov	sp,a
      00037C D0 02            [24] 1856 	pop	ar2
      00037E D0 03            [24] 1857 	pop	ar3
      000380 D0 04            [24] 1858 	pop	ar4
      000382 D0 05            [24] 1859 	pop	ar5
      000384 D0 06            [24] 1860 	pop	ar6
                           00029E  1861 	C$i2c.h$175$1$81 ==.
                                   1862 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:175: sum = sum*10 + key - '0';
      000386 8D 11            [24] 1863 	mov	__mulint_PARM_2,r5
      000388 8E 12            [24] 1864 	mov	(__mulint_PARM_2 + 1),r6
      00038A 90 00 0A         [24] 1865 	mov	dptr,#0x000A
      00038D C0 04            [24] 1866 	push	ar4
      00038F C0 03            [24] 1867 	push	ar3
      000391 C0 02            [24] 1868 	push	ar2
      000393 12 14 15         [24] 1869 	lcall	__mulint
      000396 A8 82            [24] 1870 	mov	r0,dpl
      000398 A9 83            [24] 1871 	mov	r1,dph
      00039A D0 02            [24] 1872 	pop	ar2
      00039C D0 03            [24] 1873 	pop	ar3
      00039E D0 04            [24] 1874 	pop	ar4
      0003A0 D0 07            [24] 1875 	pop	ar7
      0003A2 EA               [12] 1876 	mov	a,r2
      0003A3 28               [12] 1877 	add	a,r0
      0003A4 F8               [12] 1878 	mov	r0,a
      0003A5 EC               [12] 1879 	mov	a,r4
      0003A6 39               [12] 1880 	addc	a,r1
      0003A7 F9               [12] 1881 	mov	r1,a
      0003A8 E8               [12] 1882 	mov	a,r0
      0003A9 24 D0            [12] 1883 	add	a,#0xD0
      0003AB FD               [12] 1884 	mov	r5,a
      0003AC E9               [12] 1885 	mov	a,r1
      0003AD 34 FF            [12] 1886 	addc	a,#0xFF
      0003AF FE               [12] 1887 	mov	r6,a
                           0002C8  1888 	C$i2c.h$176$3$84 ==.
                                   1889 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:176: while(read_keypad() == key)delay_time(10000); //wait for key to be released
      0003B0                       1890 00110$:
      0003B0 C0 07            [24] 1891 	push	ar7
      0003B2 C0 06            [24] 1892 	push	ar6
      0003B4 C0 05            [24] 1893 	push	ar5
      0003B6 C0 03            [24] 1894 	push	ar3
      0003B8 12 02 02         [24] 1895 	lcall	_read_keypad
      0003BB AC 82            [24] 1896 	mov	r4,dpl
      0003BD D0 03            [24] 1897 	pop	ar3
      0003BF D0 05            [24] 1898 	pop	ar5
      0003C1 D0 06            [24] 1899 	pop	ar6
      0003C3 D0 07            [24] 1900 	pop	ar7
      0003C5 EC               [12] 1901 	mov	a,r4
      0003C6 B5 03 1B         [24] 1902 	cjne	a,ar3,00118$
      0003C9 90 27 10         [24] 1903 	mov	dptr,#0x2710
      0003CC E4               [12] 1904 	clr	a
      0003CD F5 F0            [12] 1905 	mov	b,a
      0003CF C0 07            [24] 1906 	push	ar7
      0003D1 C0 06            [24] 1907 	push	ar6
      0003D3 C0 05            [24] 1908 	push	ar5
      0003D5 C0 03            [24] 1909 	push	ar3
      0003D7 12 03 F5         [24] 1910 	lcall	_delay_time
      0003DA D0 03            [24] 1911 	pop	ar3
      0003DC D0 05            [24] 1912 	pop	ar5
      0003DE D0 06            [24] 1913 	pop	ar6
      0003E0 D0 07            [24] 1914 	pop	ar7
      0003E2 80 CC            [24] 1915 	sjmp	00110$
      0003E4                       1916 00118$:
                           0002FC  1917 	C$i2c.h$164$1$81 ==.
                                   1918 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:164: for(i=0; i<5; i++)
      0003E4 0F               [12] 1919 	inc	r7
      0003E5 C3               [12] 1920 	clr	c
      0003E6 EF               [12] 1921 	mov	a,r7
      0003E7 64 80            [12] 1922 	xrl	a,#0x80
      0003E9 94 85            [12] 1923 	subb	a,#0x85
      0003EB 50 03            [24] 1924 	jnc	00155$
      0003ED 02 02 F2         [24] 1925 	ljmp	00104$
      0003F0                       1926 00155$:
                           000308  1927 	C$i2c.h$179$1$81 ==.
                                   1928 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:179: return sum;
      0003F0 8D 82            [24] 1929 	mov	dpl,r5
      0003F2 8E 83            [24] 1930 	mov	dph,r6
      0003F4                       1931 00119$:
                           00030C  1932 	C$i2c.h$180$1$81 ==.
                           00030C  1933 	XG$kpd_input$0$0 ==.
      0003F4 22               [24] 1934 	ret
                                   1935 ;------------------------------------------------------------
                                   1936 ;Allocation info for local variables in function 'delay_time'
                                   1937 ;------------------------------------------------------------
                                   1938 ;time_end                  Allocated to registers r4 r5 r6 r7 
                                   1939 ;index                     Allocated to registers 
                                   1940 ;------------------------------------------------------------
                           00030D  1941 	G$delay_time$0$0 ==.
                           00030D  1942 	C$i2c.h$189$1$81 ==.
                                   1943 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:189: void delay_time (unsigned long time_end)
                                   1944 ;	-----------------------------------------
                                   1945 ;	 function delay_time
                                   1946 ;	-----------------------------------------
      0003F5                       1947 _delay_time:
      0003F5 AC 82            [24] 1948 	mov	r4,dpl
      0003F7 AD 83            [24] 1949 	mov	r5,dph
      0003F9 AE F0            [24] 1950 	mov	r6,b
      0003FB FF               [12] 1951 	mov	r7,a
                           000314  1952 	C$i2c.h$192$1$86 ==.
                                   1953 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:192: for (index = 0; index < time_end; index++); //for loop delay
      0003FC 78 00            [12] 1954 	mov	r0,#0x00
      0003FE 79 00            [12] 1955 	mov	r1,#0x00
      000400 7A 00            [12] 1956 	mov	r2,#0x00
      000402 7B 00            [12] 1957 	mov	r3,#0x00
      000404                       1958 00103$:
      000404 C3               [12] 1959 	clr	c
      000405 E8               [12] 1960 	mov	a,r0
      000406 9C               [12] 1961 	subb	a,r4
      000407 E9               [12] 1962 	mov	a,r1
      000408 9D               [12] 1963 	subb	a,r5
      000409 EA               [12] 1964 	mov	a,r2
      00040A 9E               [12] 1965 	subb	a,r6
      00040B EB               [12] 1966 	mov	a,r3
      00040C 9F               [12] 1967 	subb	a,r7
      00040D 50 0F            [24] 1968 	jnc	00105$
      00040F 08               [12] 1969 	inc	r0
      000410 B8 00 09         [24] 1970 	cjne	r0,#0x00,00115$
      000413 09               [12] 1971 	inc	r1
      000414 B9 00 05         [24] 1972 	cjne	r1,#0x00,00115$
      000417 0A               [12] 1973 	inc	r2
      000418 BA 00 E9         [24] 1974 	cjne	r2,#0x00,00103$
      00041B 0B               [12] 1975 	inc	r3
      00041C                       1976 00115$:
      00041C 80 E6            [24] 1977 	sjmp	00103$
      00041E                       1978 00105$:
                           000336  1979 	C$i2c.h$193$1$86 ==.
                           000336  1980 	XG$delay_time$0$0 ==.
      00041E 22               [24] 1981 	ret
                                   1982 ;------------------------------------------------------------
                                   1983 ;Allocation info for local variables in function 'i2c_start'
                                   1984 ;------------------------------------------------------------
                           000337  1985 	G$i2c_start$0$0 ==.
                           000337  1986 	C$i2c.h$196$1$86 ==.
                                   1987 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:196: void i2c_start(void)
                                   1988 ;	-----------------------------------------
                                   1989 ;	 function i2c_start
                                   1990 ;	-----------------------------------------
      00041F                       1991 _i2c_start:
                           000337  1992 	C$i2c.h$198$1$88 ==.
                                   1993 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:198: while(BUSY);              //Wait until SMBus0 is free
      00041F                       1994 00101$:
      00041F 20 C7 FD         [24] 1995 	jb	_BUSY,00101$
                           00033A  1996 	C$i2c.h$199$1$88 ==.
                                   1997 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:199: STA = 1;                  //Set Start Bit
      000422 D2 C5            [12] 1998 	setb	_STA
                           00033C  1999 	C$i2c.h$200$1$88 ==.
                                   2000 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:200: while(!SI);               //Wait until start sent
      000424                       2001 00104$:
      000424 30 C3 FD         [24] 2002 	jnb	_SI,00104$
                           00033F  2003 	C$i2c.h$201$1$88 ==.
                                   2004 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:201: STA = 0;                  //Clear start bit
      000427 C2 C5            [12] 2005 	clr	_STA
                           000341  2006 	C$i2c.h$202$1$88 ==.
                                   2007 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:202: SI = 0;                   //Clear SI
      000429 C2 C3            [12] 2008 	clr	_SI
                           000343  2009 	C$i2c.h$203$1$88 ==.
                           000343  2010 	XG$i2c_start$0$0 ==.
      00042B 22               [24] 2011 	ret
                                   2012 ;------------------------------------------------------------
                                   2013 ;Allocation info for local variables in function 'i2c_write'
                                   2014 ;------------------------------------------------------------
                                   2015 ;output_data               Allocated to registers 
                                   2016 ;------------------------------------------------------------
                           000344  2017 	G$i2c_write$0$0 ==.
                           000344  2018 	C$i2c.h$206$1$88 ==.
                                   2019 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:206: void i2c_write(unsigned char output_data)
                                   2020 ;	-----------------------------------------
                                   2021 ;	 function i2c_write
                                   2022 ;	-----------------------------------------
      00042C                       2023 _i2c_write:
      00042C 85 82 C2         [24] 2024 	mov	_SMB0DAT,dpl
                           000347  2025 	C$i2c.h$209$1$90 ==.
                                   2026 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:209: while(!SI);               //Wait until send is complete
      00042F                       2027 00101$:
                           000347  2028 	C$i2c.h$210$1$90 ==.
                                   2029 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:210: SI = 0;                   //Clear SI
      00042F 10 C3 02         [24] 2030 	jbc	_SI,00112$
      000432 80 FB            [24] 2031 	sjmp	00101$
      000434                       2032 00112$:
                           00034C  2033 	C$i2c.h$211$1$90 ==.
                           00034C  2034 	XG$i2c_write$0$0 ==.
      000434 22               [24] 2035 	ret
                                   2036 ;------------------------------------------------------------
                                   2037 ;Allocation info for local variables in function 'i2c_write_and_stop'
                                   2038 ;------------------------------------------------------------
                                   2039 ;output_data               Allocated to registers 
                                   2040 ;------------------------------------------------------------
                           00034D  2041 	G$i2c_write_and_stop$0$0 ==.
                           00034D  2042 	C$i2c.h$214$1$90 ==.
                                   2043 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:214: void i2c_write_and_stop(unsigned char output_data)
                                   2044 ;	-----------------------------------------
                                   2045 ;	 function i2c_write_and_stop
                                   2046 ;	-----------------------------------------
      000435                       2047 _i2c_write_and_stop:
      000435 85 82 C2         [24] 2048 	mov	_SMB0DAT,dpl
                           000350  2049 	C$i2c.h$217$1$92 ==.
                                   2050 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:217: STO = 1;                  //Set stop bit
      000438 D2 C4            [12] 2051 	setb	_STO
                           000352  2052 	C$i2c.h$218$1$92 ==.
                                   2053 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:218: while(!SI);               //Wait until send is complete
      00043A                       2054 00101$:
                           000352  2055 	C$i2c.h$219$1$92 ==.
                                   2056 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:219: SI = 0;                   //clear SI
      00043A 10 C3 02         [24] 2057 	jbc	_SI,00112$
      00043D 80 FB            [24] 2058 	sjmp	00101$
      00043F                       2059 00112$:
                           000357  2060 	C$i2c.h$220$1$92 ==.
                           000357  2061 	XG$i2c_write_and_stop$0$0 ==.
      00043F 22               [24] 2062 	ret
                                   2063 ;------------------------------------------------------------
                                   2064 ;Allocation info for local variables in function 'i2c_read'
                                   2065 ;------------------------------------------------------------
                                   2066 ;input_data                Allocated to registers 
                                   2067 ;------------------------------------------------------------
                           000358  2068 	G$i2c_read$0$0 ==.
                           000358  2069 	C$i2c.h$223$1$92 ==.
                                   2070 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:223: unsigned char i2c_read(void)
                                   2071 ;	-----------------------------------------
                                   2072 ;	 function i2c_read
                                   2073 ;	-----------------------------------------
      000440                       2074 _i2c_read:
                           000358  2075 	C$i2c.h$226$1$94 ==.
                                   2076 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:226: while(!SI);                //Wait until we have data to read
      000440                       2077 00101$:
      000440 30 C3 FD         [24] 2078 	jnb	_SI,00101$
                           00035B  2079 	C$i2c.h$227$1$94 ==.
                                   2080 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:227: input_data = SMB0DAT;      //Read the data
      000443 85 C2 82         [24] 2081 	mov	dpl,_SMB0DAT
                           00035E  2082 	C$i2c.h$228$1$94 ==.
                                   2083 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:228: SI = 0;                    //Clear SI
      000446 C2 C3            [12] 2084 	clr	_SI
                           000360  2085 	C$i2c.h$229$1$94 ==.
                                   2086 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:229: return input_data;         //Return the read data
                           000360  2087 	C$i2c.h$230$1$94 ==.
                           000360  2088 	XG$i2c_read$0$0 ==.
      000448 22               [24] 2089 	ret
                                   2090 ;------------------------------------------------------------
                                   2091 ;Allocation info for local variables in function 'i2c_read_and_stop'
                                   2092 ;------------------------------------------------------------
                                   2093 ;input_data                Allocated to registers r7 
                                   2094 ;------------------------------------------------------------
                           000361  2095 	G$i2c_read_and_stop$0$0 ==.
                           000361  2096 	C$i2c.h$233$1$94 ==.
                                   2097 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:233: unsigned char i2c_read_and_stop(void)
                                   2098 ;	-----------------------------------------
                                   2099 ;	 function i2c_read_and_stop
                                   2100 ;	-----------------------------------------
      000449                       2101 _i2c_read_and_stop:
                           000361  2102 	C$i2c.h$236$1$96 ==.
                                   2103 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:236: while(!SI);                //Wait until we have data to read
      000449                       2104 00101$:
      000449 30 C3 FD         [24] 2105 	jnb	_SI,00101$
                           000364  2106 	C$i2c.h$237$1$96 ==.
                                   2107 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:237: input_data = SMB0DAT;      //Read the data
      00044C AF C2            [24] 2108 	mov	r7,_SMB0DAT
                           000366  2109 	C$i2c.h$238$1$96 ==.
                                   2110 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:238: SI = 0;                    //Clear SI
      00044E C2 C3            [12] 2111 	clr	_SI
                           000368  2112 	C$i2c.h$239$1$96 ==.
                                   2113 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:239: STO = 1;                   //Set stop bit
      000450 D2 C4            [12] 2114 	setb	_STO
                           00036A  2115 	C$i2c.h$240$1$96 ==.
                                   2116 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:240: while(!SI);                //Wait for stop
      000452                       2117 00104$:
                           00036A  2118 	C$i2c.h$241$1$96 ==.
                                   2119 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:241: SI = 0;
      000452 10 C3 02         [24] 2120 	jbc	_SI,00122$
      000455 80 FB            [24] 2121 	sjmp	00104$
      000457                       2122 00122$:
                           00036F  2123 	C$i2c.h$242$1$96 ==.
                                   2124 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:242: return input_data;         //Return the read data
      000457 8F 82            [24] 2125 	mov	dpl,r7
                           000371  2126 	C$i2c.h$243$1$96 ==.
                           000371  2127 	XG$i2c_read_and_stop$0$0 ==.
      000459 22               [24] 2128 	ret
                                   2129 ;------------------------------------------------------------
                                   2130 ;Allocation info for local variables in function 'i2c_write_data'
                                   2131 ;------------------------------------------------------------
                                   2132 ;start_reg                 Allocated with name '_i2c_write_data_PARM_2'
                                   2133 ;buffer                    Allocated with name '_i2c_write_data_PARM_3'
                                   2134 ;num_bytes                 Allocated with name '_i2c_write_data_PARM_4'
                                   2135 ;addr                      Allocated to registers r7 
                                   2136 ;i                         Allocated to registers 
                                   2137 ;------------------------------------------------------------
                           000372  2138 	G$i2c_write_data$0$0 ==.
                           000372  2139 	C$i2c.h$246$1$96 ==.
                                   2140 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:246: void i2c_write_data(unsigned char addr, unsigned char start_reg, unsigned char *buffer, unsigned char num_bytes)
                                   2141 ;	-----------------------------------------
                                   2142 ;	 function i2c_write_data
                                   2143 ;	-----------------------------------------
      00045A                       2144 _i2c_write_data:
      00045A AF 82            [24] 2145 	mov	r7,dpl
                           000374  2146 	C$i2c.h$250$1$98 ==.
                                   2147 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:250: i2c_start();               //initiate I2C transfer
      00045C C0 07            [24] 2148 	push	ar7
      00045E 12 04 1F         [24] 2149 	lcall	_i2c_start
      000461 D0 07            [24] 2150 	pop	ar7
                           00037B  2151 	C$i2c.h$251$1$98 ==.
                                   2152 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:251: i2c_write(addr & ~0x01);   //write the desired address to the bus
      000463 74 FE            [12] 2153 	mov	a,#0xFE
      000465 5F               [12] 2154 	anl	a,r7
      000466 F5 82            [12] 2155 	mov	dpl,a
      000468 12 04 2C         [24] 2156 	lcall	_i2c_write
                           000383  2157 	C$i2c.h$252$1$98 ==.
                                   2158 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:252: i2c_write(start_reg);      //write the start register to the bus
      00046B 85 27 82         [24] 2159 	mov	dpl,_i2c_write_data_PARM_2
      00046E 12 04 2C         [24] 2160 	lcall	_i2c_write
                           000389  2161 	C$i2c.h$253$1$98 ==.
                                   2162 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:253: for(i=0; i<num_bytes-1; i++) //write the data to the register(s)
      000471 7F 00            [12] 2163 	mov	r7,#0x00
      000473                       2164 00103$:
      000473 AD 2B            [24] 2165 	mov	r5,_i2c_write_data_PARM_4
      000475 7E 00            [12] 2166 	mov	r6,#0x00
      000477 1D               [12] 2167 	dec	r5
      000478 BD FF 01         [24] 2168 	cjne	r5,#0xFF,00114$
      00047B 1E               [12] 2169 	dec	r6
      00047C                       2170 00114$:
      00047C 8F 03            [24] 2171 	mov	ar3,r7
      00047E 7C 00            [12] 2172 	mov	r4,#0x00
      000480 C3               [12] 2173 	clr	c
      000481 EB               [12] 2174 	mov	a,r3
      000482 9D               [12] 2175 	subb	a,r5
      000483 EC               [12] 2176 	mov	a,r4
      000484 64 80            [12] 2177 	xrl	a,#0x80
      000486 8E F0            [24] 2178 	mov	b,r6
      000488 63 F0 80         [24] 2179 	xrl	b,#0x80
      00048B 95 F0            [12] 2180 	subb	a,b
      00048D 50 1F            [24] 2181 	jnc	00101$
                           0003A7  2182 	C$i2c.h$254$1$98 ==.
                                   2183 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:254: i2c_write(buffer[i]);
      00048F EF               [12] 2184 	mov	a,r7
      000490 25 28            [12] 2185 	add	a,_i2c_write_data_PARM_3
      000492 FC               [12] 2186 	mov	r4,a
      000493 E4               [12] 2187 	clr	a
      000494 35 29            [12] 2188 	addc	a,(_i2c_write_data_PARM_3 + 1)
      000496 FD               [12] 2189 	mov	r5,a
      000497 AE 2A            [24] 2190 	mov	r6,(_i2c_write_data_PARM_3 + 2)
      000499 8C 82            [24] 2191 	mov	dpl,r4
      00049B 8D 83            [24] 2192 	mov	dph,r5
      00049D 8E F0            [24] 2193 	mov	b,r6
      00049F 12 1B 92         [24] 2194 	lcall	__gptrget
      0004A2 F5 82            [12] 2195 	mov	dpl,a
      0004A4 C0 07            [24] 2196 	push	ar7
      0004A6 12 04 2C         [24] 2197 	lcall	_i2c_write
      0004A9 D0 07            [24] 2198 	pop	ar7
                           0003C3  2199 	C$i2c.h$253$1$98 ==.
                                   2200 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:253: for(i=0; i<num_bytes-1; i++) //write the data to the register(s)
      0004AB 0F               [12] 2201 	inc	r7
      0004AC 80 C5            [24] 2202 	sjmp	00103$
      0004AE                       2203 00101$:
                           0003C6  2204 	C$i2c.h$255$1$98 ==.
                                   2205 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:255: i2c_write_and_stop(buffer[num_bytes-1]); //Stop transfer
      0004AE AE 2B            [24] 2206 	mov	r6,_i2c_write_data_PARM_4
      0004B0 7F 00            [12] 2207 	mov	r7,#0x00
      0004B2 1E               [12] 2208 	dec	r6
      0004B3 BE FF 01         [24] 2209 	cjne	r6,#0xFF,00116$
      0004B6 1F               [12] 2210 	dec	r7
      0004B7                       2211 00116$:
      0004B7 EE               [12] 2212 	mov	a,r6
      0004B8 25 28            [12] 2213 	add	a,_i2c_write_data_PARM_3
      0004BA FE               [12] 2214 	mov	r6,a
      0004BB EF               [12] 2215 	mov	a,r7
      0004BC 35 29            [12] 2216 	addc	a,(_i2c_write_data_PARM_3 + 1)
      0004BE FF               [12] 2217 	mov	r7,a
      0004BF AD 2A            [24] 2218 	mov	r5,(_i2c_write_data_PARM_3 + 2)
      0004C1 8E 82            [24] 2219 	mov	dpl,r6
      0004C3 8F 83            [24] 2220 	mov	dph,r7
      0004C5 8D F0            [24] 2221 	mov	b,r5
      0004C7 12 1B 92         [24] 2222 	lcall	__gptrget
      0004CA F5 82            [12] 2223 	mov	dpl,a
      0004CC 12 04 35         [24] 2224 	lcall	_i2c_write_and_stop
                           0003E7  2225 	C$i2c.h$256$1$98 ==.
                           0003E7  2226 	XG$i2c_write_data$0$0 ==.
      0004CF 22               [24] 2227 	ret
                                   2228 ;------------------------------------------------------------
                                   2229 ;Allocation info for local variables in function 'i2c_read_data'
                                   2230 ;------------------------------------------------------------
                                   2231 ;start_reg                 Allocated with name '_i2c_read_data_PARM_2'
                                   2232 ;buffer                    Allocated with name '_i2c_read_data_PARM_3'
                                   2233 ;num_bytes                 Allocated with name '_i2c_read_data_PARM_4'
                                   2234 ;addr                      Allocated to registers r7 
                                   2235 ;j                         Allocated to registers 
                                   2236 ;------------------------------------------------------------
                           0003E8  2237 	G$i2c_read_data$0$0 ==.
                           0003E8  2238 	C$i2c.h$259$1$98 ==.
                                   2239 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:259: void i2c_read_data(unsigned char addr, unsigned char start_reg, unsigned char *buffer, unsigned char num_bytes)
                                   2240 ;	-----------------------------------------
                                   2241 ;	 function i2c_read_data
                                   2242 ;	-----------------------------------------
      0004D0                       2243 _i2c_read_data:
      0004D0 AF 82            [24] 2244 	mov	r7,dpl
                           0003EA  2245 	C$i2c.h$262$1$100 ==.
                                   2246 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:262: i2c_start();               //Start I2C transfer
      0004D2 C0 07            [24] 2247 	push	ar7
      0004D4 12 04 1F         [24] 2248 	lcall	_i2c_start
      0004D7 D0 07            [24] 2249 	pop	ar7
                           0003F1  2250 	C$i2c.h$263$1$100 ==.
                                   2251 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:263: i2c_write(addr & ~0x01);   //Write address of device that will be written to, send 0
      0004D9 8F 06            [24] 2252 	mov	ar6,r7
      0004DB 74 FE            [12] 2253 	mov	a,#0xFE
      0004DD 5E               [12] 2254 	anl	a,r6
      0004DE F5 82            [12] 2255 	mov	dpl,a
      0004E0 C0 07            [24] 2256 	push	ar7
      0004E2 12 04 2C         [24] 2257 	lcall	_i2c_write
                           0003FD  2258 	C$i2c.h$264$1$100 ==.
                                   2259 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:264: i2c_write_and_stop(start_reg); //Write & stop the 1st register to be read
      0004E5 85 2C 82         [24] 2260 	mov	dpl,_i2c_read_data_PARM_2
      0004E8 12 04 35         [24] 2261 	lcall	_i2c_write_and_stop
                           000403  2262 	C$i2c.h$265$1$100 ==.
                                   2263 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:265: i2c_start();               //Start I2C transfer
      0004EB 12 04 1F         [24] 2264 	lcall	_i2c_start
      0004EE D0 07            [24] 2265 	pop	ar7
                           000408  2266 	C$i2c.h$266$1$100 ==.
                                   2267 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:266: i2c_write(addr | 0x01);    //Write address again, this time indicating a read operation
      0004F0 74 01            [12] 2268 	mov	a,#0x01
      0004F2 4F               [12] 2269 	orl	a,r7
      0004F3 F5 82            [12] 2270 	mov	dpl,a
      0004F5 12 04 2C         [24] 2271 	lcall	_i2c_write
                           000410  2272 	C$i2c.h$267$1$100 ==.
                                   2273 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:267: for(j = 0; j < num_bytes - 1; j++)
      0004F8 7F 00            [12] 2274 	mov	r7,#0x00
      0004FA                       2275 00103$:
      0004FA AD 30            [24] 2276 	mov	r5,_i2c_read_data_PARM_4
      0004FC 7E 00            [12] 2277 	mov	r6,#0x00
      0004FE 1D               [12] 2278 	dec	r5
      0004FF BD FF 01         [24] 2279 	cjne	r5,#0xFF,00114$
      000502 1E               [12] 2280 	dec	r6
      000503                       2281 00114$:
      000503 8F 03            [24] 2282 	mov	ar3,r7
      000505 7C 00            [12] 2283 	mov	r4,#0x00
      000507 C3               [12] 2284 	clr	c
      000508 EB               [12] 2285 	mov	a,r3
      000509 9D               [12] 2286 	subb	a,r5
      00050A EC               [12] 2287 	mov	a,r4
      00050B 64 80            [12] 2288 	xrl	a,#0x80
      00050D 8E F0            [24] 2289 	mov	b,r6
      00050F 63 F0 80         [24] 2290 	xrl	b,#0x80
      000512 95 F0            [12] 2291 	subb	a,b
      000514 50 2E            [24] 2292 	jnc	00101$
                           00042E  2293 	C$i2c.h$269$2$101 ==.
                                   2294 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:269: AA = 1;                //Set acknowledge bit
      000516 D2 C2            [12] 2295 	setb	_AA
                           000430  2296 	C$i2c.h$270$2$101 ==.
                                   2297 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:270: buffer[j] = i2c_read();//Read data, save it in buffer
      000518 EF               [12] 2298 	mov	a,r7
      000519 25 2D            [12] 2299 	add	a,_i2c_read_data_PARM_3
      00051B FC               [12] 2300 	mov	r4,a
      00051C E4               [12] 2301 	clr	a
      00051D 35 2E            [12] 2302 	addc	a,(_i2c_read_data_PARM_3 + 1)
      00051F FD               [12] 2303 	mov	r5,a
      000520 AE 2F            [24] 2304 	mov	r6,(_i2c_read_data_PARM_3 + 2)
      000522 C0 07            [24] 2305 	push	ar7
      000524 C0 06            [24] 2306 	push	ar6
      000526 C0 05            [24] 2307 	push	ar5
      000528 C0 04            [24] 2308 	push	ar4
      00052A 12 04 40         [24] 2309 	lcall	_i2c_read
      00052D AB 82            [24] 2310 	mov	r3,dpl
      00052F D0 04            [24] 2311 	pop	ar4
      000531 D0 05            [24] 2312 	pop	ar5
      000533 D0 06            [24] 2313 	pop	ar6
      000535 D0 07            [24] 2314 	pop	ar7
      000537 8C 82            [24] 2315 	mov	dpl,r4
      000539 8D 83            [24] 2316 	mov	dph,r5
      00053B 8E F0            [24] 2317 	mov	b,r6
      00053D EB               [12] 2318 	mov	a,r3
      00053E 12 13 FA         [24] 2319 	lcall	__gptrput
                           000459  2320 	C$i2c.h$267$1$100 ==.
                                   2321 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:267: for(j = 0; j < num_bytes - 1; j++)
      000541 0F               [12] 2322 	inc	r7
      000542 80 B6            [24] 2323 	sjmp	00103$
      000544                       2324 00101$:
                           00045C  2325 	C$i2c.h$272$1$100 ==.
                                   2326 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:272: AA = 0;
      000544 C2 C2            [12] 2327 	clr	_AA
                           00045E  2328 	C$i2c.h$273$1$100 ==.
                                   2329 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:273: buffer[num_bytes - 1] = i2c_read_and_stop(); //Read the last byte and stop, save it in the buffer
      000546 AE 30            [24] 2330 	mov	r6,_i2c_read_data_PARM_4
      000548 7F 00            [12] 2331 	mov	r7,#0x00
      00054A 1E               [12] 2332 	dec	r6
      00054B BE FF 01         [24] 2333 	cjne	r6,#0xFF,00116$
      00054E 1F               [12] 2334 	dec	r7
      00054F                       2335 00116$:
      00054F EE               [12] 2336 	mov	a,r6
      000550 25 2D            [12] 2337 	add	a,_i2c_read_data_PARM_3
      000552 FE               [12] 2338 	mov	r6,a
      000553 EF               [12] 2339 	mov	a,r7
      000554 35 2E            [12] 2340 	addc	a,(_i2c_read_data_PARM_3 + 1)
      000556 FF               [12] 2341 	mov	r7,a
      000557 AD 2F            [24] 2342 	mov	r5,(_i2c_read_data_PARM_3 + 2)
      000559 C0 07            [24] 2343 	push	ar7
      00055B C0 06            [24] 2344 	push	ar6
      00055D C0 05            [24] 2345 	push	ar5
      00055F 12 04 49         [24] 2346 	lcall	_i2c_read_and_stop
      000562 AC 82            [24] 2347 	mov	r4,dpl
      000564 D0 05            [24] 2348 	pop	ar5
      000566 D0 06            [24] 2349 	pop	ar6
      000568 D0 07            [24] 2350 	pop	ar7
      00056A 8E 82            [24] 2351 	mov	dpl,r6
      00056C 8F 83            [24] 2352 	mov	dph,r7
      00056E 8D F0            [24] 2353 	mov	b,r5
      000570 EC               [12] 2354 	mov	a,r4
      000571 12 13 FA         [24] 2355 	lcall	__gptrput
                           00048C  2356 	C$i2c.h$274$1$100 ==.
                           00048C  2357 	XG$i2c_read_data$0$0 ==.
      000574 22               [24] 2358 	ret
                                   2359 ;------------------------------------------------------------
                                   2360 ;Allocation info for local variables in function 'Accel_Init'
                                   2361 ;------------------------------------------------------------
                                   2362 ;Data2                     Allocated with name '_Accel_Init_Data2_1_103'
                                   2363 ;------------------------------------------------------------
                           00048D  2364 	G$Accel_Init$0$0 ==.
                           00048D  2365 	C$i2c.h$283$1$100 ==.
                                   2366 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:283: void Accel_Init(void)
                                   2367 ;	-----------------------------------------
                                   2368 ;	 function Accel_Init
                                   2369 ;	-----------------------------------------
      000575                       2370 _Accel_Init:
                           00048D  2371 	C$i2c.h$287$1$103 ==.
                                   2372 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:287: Data2[0]=0x23;	//normal power mode, 50Hz ODR, y & x axes enabled
      000575 75 31 23         [24] 2373 	mov	_Accel_Init_Data2_1_103,#0x23
                           000490  2374 	C$i2c.h$289$1$103 ==.
                                   2375 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:289: i2c_write_data(addr_accel, 0x20, Data2, 1);
      000578 75 28 31         [24] 2376 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      00057B 75 29 00         [24] 2377 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      00057E 75 2A 40         [24] 2378 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000581 75 27 20         [24] 2379 	mov	_i2c_write_data_PARM_2,#0x20
      000584 75 2B 01         [24] 2380 	mov	_i2c_write_data_PARM_4,#0x01
      000587 75 82 30         [24] 2381 	mov	dpl,#0x30
      00058A 12 04 5A         [24] 2382 	lcall	_i2c_write_data
                           0004A5  2383 	C$i2c.h$290$1$103 ==.
                                   2384 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:290: Data2[0]=0x00;	//Default - no filtering
      00058D 75 31 00         [24] 2385 	mov	_Accel_Init_Data2_1_103,#0x00
                           0004A8  2386 	C$i2c.h$292$1$103 ==.
                                   2387 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:292: i2c_write_data(addr_accel, 0x21, Data2, 1);
      000590 75 28 31         [24] 2388 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      000593 75 29 00         [24] 2389 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      000596 75 2A 40         [24] 2390 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000599 75 27 21         [24] 2391 	mov	_i2c_write_data_PARM_2,#0x21
      00059C 75 2B 01         [24] 2392 	mov	_i2c_write_data_PARM_4,#0x01
      00059F 75 82 30         [24] 2393 	mov	dpl,#0x30
      0005A2 12 04 5A         [24] 2394 	lcall	_i2c_write_data
                           0004BD  2395 	C$i2c.h$293$1$103 ==.
                                   2396 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:293: Data2[0]=0x00;	//default - no interrupts enabled
      0005A5 75 31 00         [24] 2397 	mov	_Accel_Init_Data2_1_103,#0x00
                           0004C0  2398 	C$i2c.h$294$1$103 ==.
                                   2399 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:294: i2c_write_data(addr_accel, 0x22, Data2, 1);
      0005A8 75 28 31         [24] 2400 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      0005AB 75 29 00         [24] 2401 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      0005AE 75 2A 40         [24] 2402 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      0005B1 75 27 22         [24] 2403 	mov	_i2c_write_data_PARM_2,#0x22
      0005B4 75 2B 01         [24] 2404 	mov	_i2c_write_data_PARM_4,#0x01
      0005B7 75 82 30         [24] 2405 	mov	dpl,#0x30
      0005BA 12 04 5A         [24] 2406 	lcall	_i2c_write_data
                           0004D5  2407 	C$i2c.h$298$1$103 ==.
                           0004D5  2408 	XG$Accel_Init$0$0 ==.
      0005BD 22               [24] 2409 	ret
                                   2410 ;------------------------------------------------------------
                                   2411 ;Allocation info for local variables in function 'main'
                                   2412 ;------------------------------------------------------------
                           0004D6  2413 	G$main$0$0 ==.
                           0004D6  2414 	C$lab6.c$81$1$103 ==.
                                   2415 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:81: void main(void)
                                   2416 ;	-----------------------------------------
                                   2417 ;	 function main
                                   2418 ;	-----------------------------------------
      0005BE                       2419 _main:
                           0004D6  2420 	C$lab6.c$83$1$123 ==.
                                   2421 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:83: Sys_Init();
      0005BE 12 01 18         [24] 2422 	lcall	_Sys_Init
                           0004D9  2423 	C$lab6.c$84$1$123 ==.
                                   2424 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:84: putchar(' '); //the quotes in this line may not format correctly
      0005C1 75 82 20         [24] 2425 	mov	dpl,#0x20
      0005C4 12 01 2B         [24] 2426 	lcall	_putchar
                           0004DF  2427 	C$lab6.c$85$1$123 ==.
                                   2428 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:85: Port_Init();
      0005C7 12 13 97         [24] 2429 	lcall	_Port_Init
                           0004E2  2430 	C$lab6.c$86$1$123 ==.
                                   2431 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:86: XBR0_Init();
      0005CA 12 13 C7         [24] 2432 	lcall	_XBR0_Init
                           0004E5  2433 	C$lab6.c$87$1$123 ==.
                                   2434 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:87: PCA_Init();
      0005CD 12 13 AF         [24] 2435 	lcall	_PCA_Init
                           0004E8  2436 	C$lab6.c$88$1$123 ==.
                                   2437 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:88: SMB_Init();
      0005D0 12 13 CB         [24] 2438 	lcall	_SMB_Init
                           0004EB  2439 	C$lab6.c$89$1$123 ==.
                                   2440 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:89: ADC_Init();
      0005D3 12 13 D1         [24] 2441 	lcall	_ADC_Init
                           0004EE  2442 	C$lab6.c$91$1$123 ==.
                                   2443 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:91: count =0;
      0005D6 E4               [12] 2444 	clr	a
      0005D7 F5 32            [12] 2445 	mov	_count,a
      0005D9 F5 33            [12] 2446 	mov	(_count + 1),a
                           0004F3  2447 	C$lab6.c$93$1$123 ==.
                                   2448 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:93: RUDDER_PW= PW_CENTER_RUDDER;
      0005DB 85 3C 46         [24] 2449 	mov	_RUDDER_PW,_PW_CENTER_RUDDER
      0005DE 85 3D 47         [24] 2450 	mov	(_RUDDER_PW + 1),(_PW_CENTER_RUDDER + 1)
                           0004F9  2451 	C$lab6.c$94$1$123 ==.
                                   2452 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:94: ANGLE_PW = PW_CENTER_ANGLE;
      0005E1 85 42 4A         [24] 2453 	mov	_ANGLE_PW,_PW_CENTER_ANGLE
      0005E4 85 43 4B         [24] 2454 	mov	(_ANGLE_PW + 1),(_PW_CENTER_ANGLE + 1)
                           0004FF  2455 	C$lab6.c$95$1$123 ==.
                                   2456 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:95: RTHRUST_PW = PW_NUET_THRUST;
      0005E7 85 36 4E         [24] 2457 	mov	_RTHRUST_PW,_PW_NUET_THRUST
      0005EA 85 37 4F         [24] 2458 	mov	(_RTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
                           000505  2459 	C$lab6.c$96$1$123 ==.
                                   2460 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:96: LTHRUST_PW = PW_NUET_THRUST;
      0005ED 85 36 50         [24] 2461 	mov	_LTHRUST_PW,_PW_NUET_THRUST
      0005F0 85 37 51         [24] 2462 	mov	(_LTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
                           00050B  2463 	C$lab6.c$98$1$123 ==.
                                   2464 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:98: RDR_lo_to_hi = 0xFFFF - RUDDER_PW;
      0005F3 14               [12] 2465 	dec	a
      0005F4 C3               [12] 2466 	clr	c
      0005F5 95 46            [12] 2467 	subb	a,_RUDDER_PW
      0005F7 F5 48            [12] 2468 	mov	_RDR_lo_to_hi,a
      0005F9 74 FF            [12] 2469 	mov	a,#0xFF
      0005FB 95 47            [12] 2470 	subb	a,(_RUDDER_PW + 1)
      0005FD F5 49            [12] 2471 	mov	(_RDR_lo_to_hi + 1),a
                           000517  2472 	C$lab6.c$99$1$123 ==.
                                   2473 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:99: RTRST_lo_to_hi = 0xFFFF - RTHRUST_PW;
      0005FF 74 FF            [12] 2474 	mov	a,#0xFF
      000601 C3               [12] 2475 	clr	c
      000602 95 4E            [12] 2476 	subb	a,_RTHRUST_PW
      000604 F5 52            [12] 2477 	mov	_RTRST_lo_to_hi,a
      000606 74 FF            [12] 2478 	mov	a,#0xFF
      000608 95 4F            [12] 2479 	subb	a,(_RTHRUST_PW + 1)
      00060A F5 53            [12] 2480 	mov	(_RTRST_lo_to_hi + 1),a
                           000524  2481 	C$lab6.c$100$1$123 ==.
                                   2482 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:100: LTRST_lo_to_hi = 0xFFFF - LTHRUST_PW;
      00060C 74 FF            [12] 2483 	mov	a,#0xFF
      00060E C3               [12] 2484 	clr	c
      00060F 95 50            [12] 2485 	subb	a,_LTHRUST_PW
      000611 F5 54            [12] 2486 	mov	_LTRST_lo_to_hi,a
      000613 74 FF            [12] 2487 	mov	a,#0xFF
      000615 95 51            [12] 2488 	subb	a,(_LTHRUST_PW + 1)
      000617 F5 55            [12] 2489 	mov	(_LTRST_lo_to_hi + 1),a
                           000531  2490 	C$lab6.c$101$1$123 ==.
                                   2491 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:101: AGL_lo_to_hi = 0xFFFF - ANGLE_PW;
      000619 74 FF            [12] 2492 	mov	a,#0xFF
      00061B C3               [12] 2493 	clr	c
      00061C 95 4A            [12] 2494 	subb	a,_ANGLE_PW
      00061E F5 4C            [12] 2495 	mov	_AGL_lo_to_hi,a
      000620 74 FF            [12] 2496 	mov	a,#0xFF
      000622 95 4B            [12] 2497 	subb	a,(_ANGLE_PW + 1)
      000624 F5 4D            [12] 2498 	mov	(_AGL_lo_to_hi + 1),a
                           00053E  2499 	C$lab6.c$103$1$123 ==.
                                   2500 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:103: PCA0CP0 = RDR_lo_to_hi;
      000626 85 48 EA         [24] 2501 	mov	((_PCA0CP0 >> 0) & 0xFF),_RDR_lo_to_hi
      000629 85 49 FA         [24] 2502 	mov	((_PCA0CP0 >> 8) & 0xFF),(_RDR_lo_to_hi + 1)
                           000544  2503 	C$lab6.c$104$1$123 ==.
                                   2504 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:104: PCA0CP1 = AGL_lo_to_hi;	
      00062C 85 4C EB         [24] 2505 	mov	((_PCA0CP1 >> 0) & 0xFF),_AGL_lo_to_hi
      00062F 85 4D FB         [24] 2506 	mov	((_PCA0CP1 >> 8) & 0xFF),(_AGL_lo_to_hi + 1)
                           00054A  2507 	C$lab6.c$105$1$123 ==.
                                   2508 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:105: PCA0CP2 = RTRST_lo_to_hi;
      000632 85 52 EC         [24] 2509 	mov	((_PCA0CP2 >> 0) & 0xFF),_RTRST_lo_to_hi
      000635 85 53 FC         [24] 2510 	mov	((_PCA0CP2 >> 8) & 0xFF),(_RTRST_lo_to_hi + 1)
                           000550  2511 	C$lab6.c$106$1$123 ==.
                                   2512 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:106: PCA0CP3 = LTRST_lo_to_hi;
      000638 85 54 ED         [24] 2513 	mov	((_PCA0CP3 >> 0) & 0xFF),_LTRST_lo_to_hi
      00063B 85 55 FD         [24] 2514 	mov	((_PCA0CP3 >> 8) & 0xFF),(_LTRST_lo_to_hi + 1)
                           000556  2515 	C$lab6.c$108$1$123 ==.
                                   2516 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:108: kpkd();
      00063E 12 06 CB         [24] 2517 	lcall	_kpkd
                           000559  2518 	C$lab6.c$112$1$123 ==.
                                   2519 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:112: direction();
      000641 12 08 09         [24] 2520 	lcall	_direction
                           00055C  2521 	C$lab6.c$113$1$123 ==.
                                   2522 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:113: while (1)
      000644                       2523 00104$:
                           00055C  2524 	C$lab6.c$116$2$124 ==.
                                   2525 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:116: wait();
      000644 12 13 70         [24] 2526 	lcall	_wait
                           00055F  2527 	C$lab6.c$117$2$124 ==.
                                   2528 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:117: if ((count +1) % 2 ==0)
      000647 85 32 82         [24] 2529 	mov	dpl,_count
      00064A 85 33 83         [24] 2530 	mov	dph,(_count + 1)
      00064D A3               [24] 2531 	inc	dptr
      00064E 75 11 02         [24] 2532 	mov	__modsint_PARM_2,#0x02
      000651 75 12 00         [24] 2533 	mov	(__modsint_PARM_2 + 1),#0x00
      000654 12 1B AE         [24] 2534 	lcall	__modsint
      000657 E5 82            [12] 2535 	mov	a,dpl
      000659 85 83 F0         [24] 2536 	mov	b,dph
      00065C 45 F0            [12] 2537 	orl	a,b
      00065E 70 03            [24] 2538 	jnz	00102$
                           000578  2539 	C$lab6.c$120$3$125 ==.
                                   2540 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:120: Steering_func();
      000660 12 07 9B         [24] 2541 	lcall	_Steering_func
      000663                       2542 00102$:
                           00057B  2543 	C$lab6.c$122$2$124 ==.
                                   2544 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:122: Change_D();
      000663 12 07 17         [24] 2545 	lcall	_Change_D
      000666 80 DC            [24] 2546 	sjmp	00104$
                           000580  2547 	C$lab6.c$126$1$123 ==.
                           000580  2548 	XG$main$0$0 ==.
      000668 22               [24] 2549 	ret
                                   2550 ;------------------------------------------------------------
                                   2551 ;Allocation info for local variables in function 'Calibrate'
                                   2552 ;------------------------------------------------------------
                           000581  2553 	G$Calibrate$0$0 ==.
                           000581  2554 	C$lab6.c$128$1$123 ==.
                                   2555 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:128: void Calibrate(void)
                                   2556 ;	-----------------------------------------
                                   2557 ;	 function Calibrate
                                   2558 ;	-----------------------------------------
      000669                       2559 _Calibrate:
                           000581  2560 	C$lab6.c$132$1$127 ==.
                                   2561 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:132: Rudder_cal();
      000669 12 08 BB         [24] 2562 	lcall	_Rudder_cal
                           000584  2563 	C$lab6.c$133$1$127 ==.
                                   2564 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:133: RUDDER_PW= PW_CENTER_RUDDER;
      00066C 85 3C 46         [24] 2565 	mov	_RUDDER_PW,_PW_CENTER_RUDDER
      00066F 85 3D 47         [24] 2566 	mov	(_RUDDER_PW + 1),(_PW_CENTER_RUDDER + 1)
                           00058A  2567 	C$lab6.c$134$1$127 ==.
                                   2568 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:134: RDR_lo_to_hi = 0xFFFF - RUDDER_PW;
      000672 74 FF            [12] 2569 	mov	a,#0xFF
      000674 C3               [12] 2570 	clr	c
      000675 95 46            [12] 2571 	subb	a,_RUDDER_PW
      000677 F5 48            [12] 2572 	mov	_RDR_lo_to_hi,a
      000679 74 FF            [12] 2573 	mov	a,#0xFF
      00067B 95 47            [12] 2574 	subb	a,(_RUDDER_PW + 1)
      00067D F5 49            [12] 2575 	mov	(_RDR_lo_to_hi + 1),a
                           000597  2576 	C$lab6.c$135$1$127 ==.
                                   2577 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:135: PCA0CP0 = RDR_lo_to_hi;
      00067F 85 48 EA         [24] 2578 	mov	((_PCA0CP0 >> 0) & 0xFF),_RDR_lo_to_hi
      000682 85 49 FA         [24] 2579 	mov	((_PCA0CP0 >> 8) & 0xFF),(_RDR_lo_to_hi + 1)
                           00059D  2580 	C$lab6.c$137$1$127 ==.
                                   2581 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:137: Angle_cal();
      000685 12 0B 68         [24] 2582 	lcall	_Angle_cal
                           0005A0  2583 	C$lab6.c$138$1$127 ==.
                                   2584 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:138: ANGLE_PW = PW_CENTER_ANGLE;
      000688 85 42 4A         [24] 2585 	mov	_ANGLE_PW,_PW_CENTER_ANGLE
      00068B 85 43 4B         [24] 2586 	mov	(_ANGLE_PW + 1),(_PW_CENTER_ANGLE + 1)
                           0005A6  2587 	C$lab6.c$139$1$127 ==.
                                   2588 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:139: AGL_lo_to_hi = 0xFFFF - ANGLE_PW;
      00068E 74 FF            [12] 2589 	mov	a,#0xFF
      000690 C3               [12] 2590 	clr	c
      000691 95 4A            [12] 2591 	subb	a,_ANGLE_PW
      000693 F5 4C            [12] 2592 	mov	_AGL_lo_to_hi,a
      000695 74 FF            [12] 2593 	mov	a,#0xFF
      000697 95 4B            [12] 2594 	subb	a,(_ANGLE_PW + 1)
      000699 F5 4D            [12] 2595 	mov	(_AGL_lo_to_hi + 1),a
                           0005B3  2596 	C$lab6.c$140$1$127 ==.
                                   2597 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:140: PCA0CP1 = AGL_lo_to_hi;
      00069B 85 4C EB         [24] 2598 	mov	((_PCA0CP1 >> 0) & 0xFF),_AGL_lo_to_hi
      00069E 85 4D FB         [24] 2599 	mov	((_PCA0CP1 >> 8) & 0xFF),(_AGL_lo_to_hi + 1)
                           0005B9  2600 	C$lab6.c$142$1$127 ==.
                                   2601 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:142: Thrust_cal();
      0006A1 12 0E 23         [24] 2602 	lcall	_Thrust_cal
                           0005BC  2603 	C$lab6.c$143$1$127 ==.
                                   2604 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:143: RTHRUST_PW = PW_NUET_THRUST;
      0006A4 85 36 4E         [24] 2605 	mov	_RTHRUST_PW,_PW_NUET_THRUST
      0006A7 85 37 4F         [24] 2606 	mov	(_RTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
                           0005C2  2607 	C$lab6.c$144$1$127 ==.
                                   2608 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:144: LTHRUST_PW = PW_NUET_THRUST;
      0006AA 85 36 50         [24] 2609 	mov	_LTHRUST_PW,_PW_NUET_THRUST
      0006AD 85 37 51         [24] 2610 	mov	(_LTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
                           0005C8  2611 	C$lab6.c$145$1$127 ==.
                                   2612 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:145: RTRST_lo_to_hi = 0xFFFF - RTHRUST_PW;
      0006B0 74 FF            [12] 2613 	mov	a,#0xFF
      0006B2 C3               [12] 2614 	clr	c
      0006B3 95 4E            [12] 2615 	subb	a,_RTHRUST_PW
      0006B5 F5 52            [12] 2616 	mov	_RTRST_lo_to_hi,a
      0006B7 74 FF            [12] 2617 	mov	a,#0xFF
      0006B9 95 4F            [12] 2618 	subb	a,(_RTHRUST_PW + 1)
      0006BB F5 53            [12] 2619 	mov	(_RTRST_lo_to_hi + 1),a
                           0005D5  2620 	C$lab6.c$146$1$127 ==.
                                   2621 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:146: LTRST_lo_to_hi = 0xFFFF - LTHRUST_PW;
      0006BD 74 FF            [12] 2622 	mov	a,#0xFF
      0006BF C3               [12] 2623 	clr	c
      0006C0 95 50            [12] 2624 	subb	a,_LTHRUST_PW
      0006C2 F5 54            [12] 2625 	mov	_LTRST_lo_to_hi,a
      0006C4 74 FF            [12] 2626 	mov	a,#0xFF
      0006C6 95 51            [12] 2627 	subb	a,(_LTHRUST_PW + 1)
      0006C8 F5 55            [12] 2628 	mov	(_LTRST_lo_to_hi + 1),a
                           0005E2  2629 	C$lab6.c$147$1$127 ==.
                           0005E2  2630 	XG$Calibrate$0$0 ==.
      0006CA 22               [24] 2631 	ret
                                   2632 ;------------------------------------------------------------
                                   2633 ;Allocation info for local variables in function 'kpkd'
                                   2634 ;------------------------------------------------------------
                           0005E3  2635 	G$kpkd$0$0 ==.
                           0005E3  2636 	C$lab6.c$149$1$127 ==.
                                   2637 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:149: void kpkd(void)
                                   2638 ;	-----------------------------------------
                                   2639 ;	 function kpkd
                                   2640 ;	-----------------------------------------
      0006CB                       2641 _kpkd:
                           0005E3  2642 	C$lab6.c$151$1$129 ==.
                                   2643 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:151: lcd_clear();
      0006CB 12 01 C9         [24] 2644 	lcall	_lcd_clear
                           0005E6  2645 	C$lab6.c$152$1$129 ==.
                                   2646 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:152: lcd_print("Please enter a kp value:\n ");
      0006CE 74 11            [12] 2647 	mov	a,#___str_3
      0006D0 C0 E0            [24] 2648 	push	acc
      0006D2 74 1C            [12] 2649 	mov	a,#(___str_3 >> 8)
      0006D4 C0 E0            [24] 2650 	push	acc
      0006D6 74 80            [12] 2651 	mov	a,#0x80
      0006D8 C0 E0            [24] 2652 	push	acc
      0006DA 12 01 44         [24] 2653 	lcall	_lcd_print
      0006DD 15 81            [12] 2654 	dec	sp
      0006DF 15 81            [12] 2655 	dec	sp
      0006E1 15 81            [12] 2656 	dec	sp
                           0005FB  2657 	C$lab6.c$153$1$129 ==.
                                   2658 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:153: kp = kpd_input(0);
      0006E3 75 82 00         [24] 2659 	mov	dpl,#0x00
      0006E6 12 02 81         [24] 2660 	lcall	_kpd_input
      0006E9 85 82 5A         [24] 2661 	mov	_kp,dpl
      0006EC 85 83 5B         [24] 2662 	mov	(_kp + 1),dph
                           000607  2663 	C$lab6.c$154$1$129 ==.
                                   2664 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:154: lcd_clear();
      0006EF 12 01 C9         [24] 2665 	lcall	_lcd_clear
                           00060A  2666 	C$lab6.c$155$1$129 ==.
                                   2667 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:155: lcd_print("Please enter a kd value:\n ");
      0006F2 74 2C            [12] 2668 	mov	a,#___str_4
      0006F4 C0 E0            [24] 2669 	push	acc
      0006F6 74 1C            [12] 2670 	mov	a,#(___str_4 >> 8)
      0006F8 C0 E0            [24] 2671 	push	acc
      0006FA 74 80            [12] 2672 	mov	a,#0x80
      0006FC C0 E0            [24] 2673 	push	acc
      0006FE 12 01 44         [24] 2674 	lcall	_lcd_print
      000701 15 81            [12] 2675 	dec	sp
      000703 15 81            [12] 2676 	dec	sp
      000705 15 81            [12] 2677 	dec	sp
                           00061F  2678 	C$lab6.c$156$1$129 ==.
                                   2679 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:156: kd = kpd_input(0);
      000707 75 82 00         [24] 2680 	mov	dpl,#0x00
      00070A 12 02 81         [24] 2681 	lcall	_kpd_input
      00070D 85 82 5C         [24] 2682 	mov	_kd,dpl
      000710 85 83 5D         [24] 2683 	mov	(_kd + 1),dph
                           00062B  2684 	C$lab6.c$157$1$129 ==.
                                   2685 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:157: lcd_clear();
      000713 12 01 C9         [24] 2686 	lcall	_lcd_clear
                           00062E  2687 	C$lab6.c$158$1$129 ==.
                           00062E  2688 	XG$kpkd$0$0 ==.
      000716 22               [24] 2689 	ret
                                   2690 ;------------------------------------------------------------
                                   2691 ;Allocation info for local variables in function 'Change_D'
                                   2692 ;------------------------------------------------------------
                                   2693 ;distance                  Allocated with name '_Change_D_distance_1_131'
                                   2694 ;------------------------------------------------------------
                           00062F  2695 	G$Change_D$0$0 ==.
                           00062F  2696 	C$lab6.c$161$1$129 ==.
                                   2697 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:161: void Change_D(void)
                                   2698 ;	-----------------------------------------
                                   2699 ;	 function Change_D
                                   2700 ;	-----------------------------------------
      000717                       2701 _Change_D:
                           00062F  2702 	C$lab6.c$163$1$129 ==.
                                   2703 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:163: __xdata unsigned int distance=100;
      000717 90 00 55         [24] 2704 	mov	dptr,#_Change_D_distance_1_131
      00071A 74 64            [12] 2705 	mov	a,#0x64
      00071C F0               [24] 2706 	movx	@dptr,a
      00071D E4               [12] 2707 	clr	a
      00071E A3               [24] 2708 	inc	dptr
      00071F F0               [24] 2709 	movx	@dptr,a
                           000638  2710 	C$lab6.c$164$1$131 ==.
                                   2711 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:164: if (count +1 % 4 == 0)
      000720 04               [12] 2712 	inc	a
      000721 25 32            [12] 2713 	add	a,_count
      000723 FE               [12] 2714 	mov	r6,a
      000724 E4               [12] 2715 	clr	a
      000725 35 33            [12] 2716 	addc	a,(_count + 1)
      000727 FF               [12] 2717 	mov	r7,a
      000728 4E               [12] 2718 	orl	a,r6
      000729 70 10            [24] 2719 	jnz	00102$
                           000643  2720 	C$lab6.c$166$2$132 ==.
                                   2721 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:166: distance = Read_Ranger();
      00072B 12 07 75         [24] 2722 	lcall	_Read_Ranger
      00072E E5 82            [12] 2723 	mov	a,dpl
      000730 85 83 F0         [24] 2724 	mov	b,dph
      000733 90 00 55         [24] 2725 	mov	dptr,#_Change_D_distance_1_131
      000736 F0               [24] 2726 	movx	@dptr,a
      000737 E5 F0            [12] 2727 	mov	a,b
      000739 A3               [24] 2728 	inc	dptr
      00073A F0               [24] 2729 	movx	@dptr,a
      00073B                       2730 00102$:
                           000653  2731 	C$lab6.c$168$1$131 ==.
                                   2732 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:168: if (distance < 50)
      00073B 90 00 55         [24] 2733 	mov	dptr,#_Change_D_distance_1_131
      00073E E0               [24] 2734 	movx	a,@dptr
      00073F FE               [12] 2735 	mov	r6,a
      000740 A3               [24] 2736 	inc	dptr
      000741 E0               [24] 2737 	movx	a,@dptr
      000742 FF               [12] 2738 	mov	r7,a
      000743 C3               [12] 2739 	clr	c
      000744 EE               [12] 2740 	mov	a,r6
      000745 94 32            [12] 2741 	subb	a,#0x32
      000747 EF               [12] 2742 	mov	a,r7
      000748 94 00            [12] 2743 	subb	a,#0x00
      00074A 50 28            [24] 2744 	jnc	00105$
                           000664  2745 	C$lab6.c$170$2$133 ==.
                                   2746 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:170: desired_D = (desired_D + 1800) % 3600;
      00074C 90 00 51         [24] 2747 	mov	dptr,#_desired_D
      00074F E0               [24] 2748 	movx	a,@dptr
      000750 FE               [12] 2749 	mov	r6,a
      000751 A3               [24] 2750 	inc	dptr
      000752 E0               [24] 2751 	movx	a,@dptr
      000753 FF               [12] 2752 	mov	r7,a
      000754 74 08            [12] 2753 	mov	a,#0x08
      000756 2E               [12] 2754 	add	a,r6
      000757 F5 82            [12] 2755 	mov	dpl,a
      000759 74 07            [12] 2756 	mov	a,#0x07
      00075B 3F               [12] 2757 	addc	a,r7
      00075C F5 83            [12] 2758 	mov	dph,a
      00075E 75 11 10         [24] 2759 	mov	__modsint_PARM_2,#0x10
      000761 75 12 0E         [24] 2760 	mov	(__modsint_PARM_2 + 1),#0x0E
      000764 12 1B AE         [24] 2761 	lcall	__modsint
      000767 E5 82            [12] 2762 	mov	a,dpl
      000769 85 83 F0         [24] 2763 	mov	b,dph
      00076C 90 00 51         [24] 2764 	mov	dptr,#_desired_D
      00076F F0               [24] 2765 	movx	@dptr,a
      000770 E5 F0            [12] 2766 	mov	a,b
      000772 A3               [24] 2767 	inc	dptr
      000773 F0               [24] 2768 	movx	@dptr,a
      000774                       2769 00105$:
                           00068C  2770 	C$lab6.c$172$1$131 ==.
                           00068C  2771 	XG$Change_D$0$0 ==.
      000774 22               [24] 2772 	ret
                                   2773 ;------------------------------------------------------------
                                   2774 ;Allocation info for local variables in function 'Read_Ranger'
                                   2775 ;------------------------------------------------------------
                                   2776 ;r_addr                    Allocated to registers 
                                   2777 ;read                      Allocated to registers 
                                   2778 ;------------------------------------------------------------
                           00068D  2779 	G$Read_Ranger$0$0 ==.
                           00068D  2780 	C$lab6.c$174$1$131 ==.
                                   2781 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:174: unsigned int Read_Ranger(void)
                                   2782 ;	-----------------------------------------
                                   2783 ;	 function Read_Ranger
                                   2784 ;	-----------------------------------------
      000775                       2785 _Read_Ranger:
                           00068D  2786 	C$lab6.c$180$1$135 ==.
                                   2787 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:180: i2c_read_data(r_addr, 2, r_data, 2);
      000775 75 2D 58         [24] 2788 	mov	_i2c_read_data_PARM_3,#_r_data
      000778 75 2E 00         [24] 2789 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      00077B 75 2F 40         [24] 2790 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      00077E 75 2C 02         [24] 2791 	mov	_i2c_read_data_PARM_2,#0x02
      000781 75 30 02         [24] 2792 	mov	_i2c_read_data_PARM_4,#0x02
      000784 75 82 E0         [24] 2793 	mov	dpl,#0xE0
      000787 12 04 D0         [24] 2794 	lcall	_i2c_read_data
                           0006A2  2795 	C$lab6.c$181$1$135 ==.
                                   2796 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:181: read = (((unsigned int) r_data[0] <<8) | r_data[1]);
      00078A AF 58            [24] 2797 	mov	r7,_r_data
      00078C 7E 00            [12] 2798 	mov	r6,#0x00
      00078E AC 59            [24] 2799 	mov	r4,(_r_data + 0x0001)
      000790 7D 00            [12] 2800 	mov	r5,#0x00
      000792 EC               [12] 2801 	mov	a,r4
      000793 4E               [12] 2802 	orl	a,r6
      000794 F5 82            [12] 2803 	mov	dpl,a
      000796 ED               [12] 2804 	mov	a,r5
      000797 4F               [12] 2805 	orl	a,r7
      000798 F5 83            [12] 2806 	mov	dph,a
                           0006B2  2807 	C$lab6.c$182$1$135 ==.
                                   2808 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:182: return read;
                           0006B2  2809 	C$lab6.c$183$1$135 ==.
                           0006B2  2810 	XG$Read_Ranger$0$0 ==.
      00079A 22               [24] 2811 	ret
                                   2812 ;------------------------------------------------------------
                                   2813 ;Allocation info for local variables in function 'Steering_func'
                                   2814 ;------------------------------------------------------------
                           0006B3  2815 	G$Steering_func$0$0 ==.
                           0006B3  2816 	C$lab6.c$185$1$135 ==.
                                   2817 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:185: void Steering_func(void)    ///FUNCTION TO HOLD ACTIONS FOR STEERING
                                   2818 ;	-----------------------------------------
                                   2819 ;	 function Steering_func
                                   2820 ;	-----------------------------------------
      00079B                       2821 _Steering_func:
                           0006B3  2822 	C$lab6.c$188$1$137 ==.
                                   2823 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:188: actual_D = ReadCompass();
      00079B 12 08 95         [24] 2824 	lcall	_ReadCompass
      00079E E5 82            [12] 2825 	mov	a,dpl
      0007A0 85 83 F0         [24] 2826 	mov	b,dph
      0007A3 90 00 53         [24] 2827 	mov	dptr,#_actual_D
      0007A6 F0               [24] 2828 	movx	@dptr,a
      0007A7 E5 F0            [12] 2829 	mov	a,b
      0007A9 A3               [24] 2830 	inc	dptr
      0007AA F0               [24] 2831 	movx	@dptr,a
                           0006C3  2832 	C$lab6.c$189$1$137 ==.
                                   2833 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:189: lcd_clear();
      0007AB 12 01 C9         [24] 2834 	lcall	_lcd_clear
                           0006C6  2835 	C$lab6.c$190$1$137 ==.
                                   2836 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:190: lcd_print("%d", actual_D);
      0007AE 90 00 53         [24] 2837 	mov	dptr,#_actual_D
      0007B1 E0               [24] 2838 	movx	a,@dptr
      0007B2 C0 E0            [24] 2839 	push	acc
      0007B4 A3               [24] 2840 	inc	dptr
      0007B5 E0               [24] 2841 	movx	a,@dptr
      0007B6 C0 E0            [24] 2842 	push	acc
      0007B8 74 47            [12] 2843 	mov	a,#___str_5
      0007BA C0 E0            [24] 2844 	push	acc
      0007BC 74 1C            [12] 2845 	mov	a,#(___str_5 >> 8)
      0007BE C0 E0            [24] 2846 	push	acc
      0007C0 74 80            [12] 2847 	mov	a,#0x80
      0007C2 C0 E0            [24] 2848 	push	acc
      0007C4 12 01 44         [24] 2849 	lcall	_lcd_print
      0007C7 E5 81            [12] 2850 	mov	a,sp
      0007C9 24 FB            [12] 2851 	add	a,#0xfb
      0007CB F5 81            [12] 2852 	mov	sp,a
                           0006E5  2853 	C$lab6.c$191$1$137 ==.
                                   2854 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:191: offset = (unsigned int)((actual_D +3600- desired_D ) % 3600);
      0007CD 90 00 53         [24] 2855 	mov	dptr,#_actual_D
      0007D0 E0               [24] 2856 	movx	a,@dptr
      0007D1 FE               [12] 2857 	mov	r6,a
      0007D2 A3               [24] 2858 	inc	dptr
      0007D3 E0               [24] 2859 	movx	a,@dptr
      0007D4 FF               [12] 2860 	mov	r7,a
      0007D5 74 10            [12] 2861 	mov	a,#0x10
      0007D7 2E               [12] 2862 	add	a,r6
      0007D8 FE               [12] 2863 	mov	r6,a
      0007D9 74 0E            [12] 2864 	mov	a,#0x0E
      0007DB 3F               [12] 2865 	addc	a,r7
      0007DC FF               [12] 2866 	mov	r7,a
      0007DD 90 00 51         [24] 2867 	mov	dptr,#_desired_D
      0007E0 E0               [24] 2868 	movx	a,@dptr
      0007E1 FC               [12] 2869 	mov	r4,a
      0007E2 A3               [24] 2870 	inc	dptr
      0007E3 E0               [24] 2871 	movx	a,@dptr
      0007E4 FD               [12] 2872 	mov	r5,a
      0007E5 EE               [12] 2873 	mov	a,r6
      0007E6 C3               [12] 2874 	clr	c
      0007E7 9C               [12] 2875 	subb	a,r4
      0007E8 F5 82            [12] 2876 	mov	dpl,a
      0007EA EF               [12] 2877 	mov	a,r7
      0007EB 9D               [12] 2878 	subb	a,r5
      0007EC F5 83            [12] 2879 	mov	dph,a
      0007EE 75 11 10         [24] 2880 	mov	__modsint_PARM_2,#0x10
      0007F1 75 12 0E         [24] 2881 	mov	(__modsint_PARM_2 + 1),#0x0E
      0007F4 12 1B AE         [24] 2882 	lcall	__modsint
      0007F7 AE 82            [24] 2883 	mov	r6,dpl
      0007F9 AF 83            [24] 2884 	mov	r7,dph
      0007FB 8E 56            [24] 2885 	mov	_offset,r6
      0007FD 8F 57            [24] 2886 	mov	(_offset + 1),r7
                           000717  2887 	C$lab6.c$192$1$137 ==.
                                   2888 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:192: Steering_Servo(offset);
      0007FF 85 56 82         [24] 2889 	mov	dpl,_offset
      000802 85 57 83         [24] 2890 	mov	dph,(_offset + 1)
      000805 12 11 52         [24] 2891 	lcall	_Steering_Servo
                           000720  2892 	C$lab6.c$194$1$137 ==.
                           000720  2893 	XG$Steering_func$0$0 ==.
      000808 22               [24] 2894 	ret
                                   2895 ;------------------------------------------------------------
                                   2896 ;Allocation info for local variables in function 'direction'
                                   2897 ;------------------------------------------------------------
                                   2898 ;value                     Allocated to registers r6 r7 
                                   2899 ;------------------------------------------------------------
                           000721  2900 	G$direction$0$0 ==.
                           000721  2901 	C$lab6.c$196$1$137 ==.
                                   2902 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:196: unsigned int direction(void)        ///ADJUSTS THE VALUES OF DIRECTION SO THE DESIRED DIRECTION IS THE CAR'S 'NORTH'
                                   2903 ;	-----------------------------------------
                                   2904 ;	 function direction
                                   2905 ;	-----------------------------------------
      000809                       2906 _direction:
                           000721  2907 	C$lab6.c$199$1$139 ==.
                                   2908 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:199: count =0;
      000809 E4               [12] 2909 	clr	a
      00080A F5 32            [12] 2910 	mov	_count,a
      00080C F5 33            [12] 2911 	mov	(_count + 1),a
                           000726  2912 	C$lab6.c$200$1$139 ==.
                                   2913 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:200: while (count < 1);
      00080E                       2914 00101$:
      00080E C3               [12] 2915 	clr	c
      00080F E5 32            [12] 2916 	mov	a,_count
      000811 94 01            [12] 2917 	subb	a,#0x01
      000813 E5 33            [12] 2918 	mov	a,(_count + 1)
      000815 64 80            [12] 2919 	xrl	a,#0x80
      000817 94 80            [12] 2920 	subb	a,#0x80
      000819 40 F3            [24] 2921 	jc	00101$
                           000733  2922 	C$lab6.c$201$1$139 ==.
                                   2923 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:201: lcd_clear();
      00081B 12 01 C9         [24] 2924 	lcall	_lcd_clear
                           000736  2925 	C$lab6.c$202$1$139 ==.
                                   2926 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:202: lcd_print("Calibration:\nHello world!\n012_345_678:\nabc def ghij");
      00081E 74 4A            [12] 2927 	mov	a,#___str_6
      000820 C0 E0            [24] 2928 	push	acc
      000822 74 1C            [12] 2929 	mov	a,#(___str_6 >> 8)
      000824 C0 E0            [24] 2930 	push	acc
      000826 74 80            [12] 2931 	mov	a,#0x80
      000828 C0 E0            [24] 2932 	push	acc
      00082A 12 01 44         [24] 2933 	lcall	_lcd_print
      00082D 15 81            [12] 2934 	dec	sp
      00082F 15 81            [12] 2935 	dec	sp
      000831 15 81            [12] 2936 	dec	sp
                           00074B  2937 	C$lab6.c$203$1$139 ==.
                                   2938 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:203: start();
      000833 12 13 60         [24] 2939 	lcall	_start
                           00074E  2940 	C$lab6.c$204$1$139 ==.
                                   2941 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:204: lcd_clear();
      000836 12 01 C9         [24] 2942 	lcall	_lcd_clear
                           000751  2943 	C$lab6.c$205$1$139 ==.
                                   2944 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:205: value = kpd_input(0);
      000839 75 82 00         [24] 2945 	mov	dpl,#0x00
      00083C 12 02 81         [24] 2946 	lcall	_kpd_input
      00083F AE 82            [24] 2947 	mov	r6,dpl
      000841 AF 83            [24] 2948 	mov	r7,dph
                           00075B  2949 	C$lab6.c$206$1$139 ==.
                                   2950 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:206: lcd_clear();
      000843 C0 07            [24] 2951 	push	ar7
      000845 C0 06            [24] 2952 	push	ar6
      000847 12 01 C9         [24] 2953 	lcall	_lcd_clear
      00084A D0 06            [24] 2954 	pop	ar6
      00084C D0 07            [24] 2955 	pop	ar7
                           000766  2956 	C$lab6.c$207$1$139 ==.
                                   2957 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:207: lcd_print("\r\nThe desired direction is: %d", value);
      00084E C0 07            [24] 2958 	push	ar7
      000850 C0 06            [24] 2959 	push	ar6
      000852 C0 06            [24] 2960 	push	ar6
      000854 C0 07            [24] 2961 	push	ar7
      000856 74 7E            [12] 2962 	mov	a,#___str_7
      000858 C0 E0            [24] 2963 	push	acc
      00085A 74 1C            [12] 2964 	mov	a,#(___str_7 >> 8)
      00085C C0 E0            [24] 2965 	push	acc
      00085E 74 80            [12] 2966 	mov	a,#0x80
      000860 C0 E0            [24] 2967 	push	acc
      000862 12 01 44         [24] 2968 	lcall	_lcd_print
      000865 E5 81            [12] 2969 	mov	a,sp
      000867 24 FB            [12] 2970 	add	a,#0xfb
      000869 F5 81            [12] 2971 	mov	sp,a
      00086B D0 06            [24] 2972 	pop	ar6
      00086D D0 07            [24] 2973 	pop	ar7
                           000787  2974 	C$lab6.c$208$1$139 ==.
                                   2975 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:208: printf("\r\nThe desired direction is: %d", value);
      00086F C0 07            [24] 2976 	push	ar7
      000871 C0 06            [24] 2977 	push	ar6
      000873 C0 06            [24] 2978 	push	ar6
      000875 C0 07            [24] 2979 	push	ar7
      000877 74 7E            [12] 2980 	mov	a,#___str_7
      000879 C0 E0            [24] 2981 	push	acc
      00087B 74 1C            [12] 2982 	mov	a,#(___str_7 >> 8)
      00087D C0 E0            [24] 2983 	push	acc
      00087F 74 80            [12] 2984 	mov	a,#0x80
      000881 C0 E0            [24] 2985 	push	acc
      000883 12 15 9E         [24] 2986 	lcall	_printf
      000886 E5 81            [12] 2987 	mov	a,sp
      000888 24 FB            [12] 2988 	add	a,#0xfb
      00088A F5 81            [12] 2989 	mov	sp,a
      00088C D0 06            [24] 2990 	pop	ar6
      00088E D0 07            [24] 2991 	pop	ar7
                           0007A8  2992 	C$lab6.c$210$1$139 ==.
                                   2993 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:210: return value;
      000890 8E 82            [24] 2994 	mov	dpl,r6
      000892 8F 83            [24] 2995 	mov	dph,r7
                           0007AC  2996 	C$lab6.c$212$1$139 ==.
                           0007AC  2997 	XG$direction$0$0 ==.
      000894 22               [24] 2998 	ret
                                   2999 ;------------------------------------------------------------
                                   3000 ;Allocation info for local variables in function 'ReadCompass'
                                   3001 ;------------------------------------------------------------
                                   3002 ;Data                      Allocated with name '_ReadCompass_Data_1_141'
                                   3003 ;Crange                    Allocated to registers 
                                   3004 ;addr                      Allocated to registers 
                                   3005 ;------------------------------------------------------------
                           0007AD  3006 	G$ReadCompass$0$0 ==.
                           0007AD  3007 	C$lab6.c$214$1$139 ==.
                                   3008 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:214: unsigned int ReadCompass(void)
                                   3009 ;	-----------------------------------------
                                   3010 ;	 function ReadCompass
                                   3011 ;	-----------------------------------------
      000895                       3012 _ReadCompass:
                           0007AD  3013 	C$lab6.c$220$1$141 ==.
                                   3014 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:220: i2c_read_data(addr, 2,Data,2);
      000895 75 2D 62         [24] 3015 	mov	_i2c_read_data_PARM_3,#_ReadCompass_Data_1_141
      000898 75 2E 00         [24] 3016 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      00089B 75 2F 40         [24] 3017 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      00089E 75 2C 02         [24] 3018 	mov	_i2c_read_data_PARM_2,#0x02
      0008A1 75 30 02         [24] 3019 	mov	_i2c_read_data_PARM_4,#0x02
      0008A4 75 82 C0         [24] 3020 	mov	dpl,#0xC0
      0008A7 12 04 D0         [24] 3021 	lcall	_i2c_read_data
                           0007C2  3022 	C$lab6.c$221$1$141 ==.
                                   3023 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:221: Crange = ((unsigned int) Data[0] << 8 | Data[1]);
      0008AA AF 62            [24] 3024 	mov	r7,_ReadCompass_Data_1_141
      0008AC 7E 00            [12] 3025 	mov	r6,#0x00
      0008AE AC 63            [24] 3026 	mov	r4,(_ReadCompass_Data_1_141 + 0x0001)
      0008B0 7D 00            [12] 3027 	mov	r5,#0x00
      0008B2 EC               [12] 3028 	mov	a,r4
      0008B3 4E               [12] 3029 	orl	a,r6
      0008B4 F5 82            [12] 3030 	mov	dpl,a
      0008B6 ED               [12] 3031 	mov	a,r5
      0008B7 4F               [12] 3032 	orl	a,r7
      0008B8 F5 83            [12] 3033 	mov	dph,a
                           0007D2  3034 	C$lab6.c$222$1$141 ==.
                                   3035 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:222: return Crange;
                           0007D2  3036 	C$lab6.c$223$1$141 ==.
                           0007D2  3037 	XG$ReadCompass$0$0 ==.
      0008BA 22               [24] 3038 	ret
                                   3039 ;------------------------------------------------------------
                                   3040 ;Allocation info for local variables in function 'Rudder_cal'
                                   3041 ;------------------------------------------------------------
                                   3042 ;st                        Allocated to registers r7 
                                   3043 ;value                     Allocated with name '_Rudder_cal_value_1_143'
                                   3044 ;times                     Allocated with name '_Rudder_cal_times_1_143'
                                   3045 ;------------------------------------------------------------
                           0007D3  3046 	G$Rudder_cal$0$0 ==.
                           0007D3  3047 	C$lab6.c$225$1$141 ==.
                                   3048 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:225: void Rudder_cal(void)
                                   3049 ;	-----------------------------------------
                                   3050 ;	 function Rudder_cal
                                   3051 ;	-----------------------------------------
      0008BB                       3052 _Rudder_cal:
                           0007D3  3053 	C$lab6.c$228$1$141 ==.
                                   3054 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:228: __xdata int value =0;
      0008BB 90 00 57         [24] 3055 	mov	dptr,#_Rudder_cal_value_1_143
      0008BE E4               [12] 3056 	clr	a
      0008BF F0               [24] 3057 	movx	@dptr,a
      0008C0 A3               [24] 3058 	inc	dptr
      0008C1 F0               [24] 3059 	movx	@dptr,a
                           0007DA  3060 	C$lab6.c$229$1$141 ==.
                                   3061 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:229: __xdata int times =0;
      0008C2 90 00 59         [24] 3062 	mov	dptr,#_Rudder_cal_times_1_143
      0008C5 F0               [24] 3063 	movx	@dptr,a
      0008C6 A3               [24] 3064 	inc	dptr
      0008C7 F0               [24] 3065 	movx	@dptr,a
                           0007E0  3066 	C$lab6.c$230$1$143 ==.
                                   3067 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:230: count =0;
      0008C8 F5 32            [12] 3068 	mov	_count,a
      0008CA F5 33            [12] 3069 	mov	(_count + 1),a
                           0007E4  3070 	C$lab6.c$231$1$143 ==.
                                   3071 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:231: lcd_clear();
      0008CC 12 01 C9         [24] 3072 	lcall	_lcd_clear
                           0007E7  3073 	C$lab6.c$232$1$143 ==.
                                   3074 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:232: lcd_print("Rudder Calibration");
      0008CF 74 9D            [12] 3075 	mov	a,#___str_8
      0008D1 C0 E0            [24] 3076 	push	acc
      0008D3 74 1C            [12] 3077 	mov	a,#(___str_8 >> 8)
      0008D5 C0 E0            [24] 3078 	push	acc
      0008D7 74 80            [12] 3079 	mov	a,#0x80
      0008D9 C0 E0            [24] 3080 	push	acc
      0008DB 12 01 44         [24] 3081 	lcall	_lcd_print
      0008DE 15 81            [12] 3082 	dec	sp
      0008E0 15 81            [12] 3083 	dec	sp
      0008E2 15 81            [12] 3084 	dec	sp
                           0007FC  3085 	C$lab6.c$233$1$143 ==.
                                   3086 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:233: while (count < 50);
      0008E4                       3087 00101$:
      0008E4 C3               [12] 3088 	clr	c
      0008E5 E5 32            [12] 3089 	mov	a,_count
      0008E7 94 32            [12] 3090 	subb	a,#0x32
      0008E9 E5 33            [12] 3091 	mov	a,(_count + 1)
      0008EB 64 80            [12] 3092 	xrl	a,#0x80
      0008ED 94 80            [12] 3093 	subb	a,#0x80
      0008EF 40 F3            [24] 3094 	jc	00101$
                           000809  3095 	C$lab6.c$234$1$143 ==.
                                   3096 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:234: lcd_clear();
      0008F1 12 01 C9         [24] 3097 	lcall	_lcd_clear
                           00080C  3098 	C$lab6.c$238$2$144 ==.
                                   3099 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:238: count =0;
      0008F4 E4               [12] 3100 	clr	a
      0008F5 F5 32            [12] 3101 	mov	_count,a
      0008F7 F5 33            [12] 3102 	mov	(_count + 1),a
                           000811  3103 	C$lab6.c$239$2$144 ==.
                                   3104 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:239: while (count < 1);
      0008F9                       3105 00104$:
      0008F9 C3               [12] 3106 	clr	c
      0008FA E5 32            [12] 3107 	mov	a,_count
      0008FC 94 01            [12] 3108 	subb	a,#0x01
      0008FE E5 33            [12] 3109 	mov	a,(_count + 1)
      000900 64 80            [12] 3110 	xrl	a,#0x80
      000902 94 80            [12] 3111 	subb	a,#0x80
      000904 40 F3            [24] 3112 	jc	00104$
                           00081E  3113 	C$lab6.c$240$2$144 ==.
                                   3114 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:240: lcd_clear();
      000906 12 01 C9         [24] 3115 	lcall	_lcd_clear
                           000821  3116 	C$lab6.c$241$2$144 ==.
                                   3117 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:241: lcd_print("go left: press 1\n go right: press 2\nPress * for next screen");
      000909 74 B0            [12] 3118 	mov	a,#___str_9
      00090B C0 E0            [24] 3119 	push	acc
      00090D 74 1C            [12] 3120 	mov	a,#(___str_9 >> 8)
      00090F C0 E0            [24] 3121 	push	acc
      000911 74 80            [12] 3122 	mov	a,#0x80
      000913 C0 E0            [24] 3123 	push	acc
      000915 12 01 44         [24] 3124 	lcall	_lcd_print
      000918 15 81            [12] 3125 	dec	sp
      00091A 15 81            [12] 3126 	dec	sp
      00091C 15 81            [12] 3127 	dec	sp
                           000836  3128 	C$lab6.c$242$2$144 ==.
                                   3129 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:242: start();
      00091E 12 13 60         [24] 3130 	lcall	_start
                           000839  3131 	C$lab6.c$243$2$144 ==.
                                   3132 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:243: lcd_clear();
      000921 12 01 C9         [24] 3133 	lcall	_lcd_clear
                           00083C  3134 	C$lab6.c$244$2$144 ==.
                                   3135 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:244: lcd_print("\n confirm: press 3\n press * to begin");
      000924 74 EC            [12] 3136 	mov	a,#___str_10
      000926 C0 E0            [24] 3137 	push	acc
      000928 74 1C            [12] 3138 	mov	a,#(___str_10 >> 8)
      00092A C0 E0            [24] 3139 	push	acc
      00092C 74 80            [12] 3140 	mov	a,#0x80
      00092E C0 E0            [24] 3141 	push	acc
      000930 12 01 44         [24] 3142 	lcall	_lcd_print
      000933 15 81            [12] 3143 	dec	sp
      000935 15 81            [12] 3144 	dec	sp
      000937 15 81            [12] 3145 	dec	sp
                           000851  3146 	C$lab6.c$245$2$144 ==.
                                   3147 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:245: start();
      000939 12 13 60         [24] 3148 	lcall	_start
                           000854  3149 	C$lab6.c$246$2$144 ==.
                                   3150 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:246: st =0;
      00093C 7F 00            [12] 3151 	mov	r7,#0x00
                           000856  3152 	C$lab6.c$247$5$147 ==.
                                   3153 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:247: while (1)
      00093E                       3154 00146$:
                           000856  3155 	C$lab6.c$249$3$145 ==.
                                   3156 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:249: printf("\r\n %u",RUDDER_PW);
      00093E C0 07            [24] 3157 	push	ar7
      000940 C0 46            [24] 3158 	push	_RUDDER_PW
      000942 C0 47            [24] 3159 	push	(_RUDDER_PW + 1)
      000944 74 11            [12] 3160 	mov	a,#___str_11
      000946 C0 E0            [24] 3161 	push	acc
      000948 74 1D            [12] 3162 	mov	a,#(___str_11 >> 8)
      00094A C0 E0            [24] 3163 	push	acc
      00094C 74 80            [12] 3164 	mov	a,#0x80
      00094E C0 E0            [24] 3165 	push	acc
      000950 12 15 9E         [24] 3166 	lcall	_printf
      000953 E5 81            [12] 3167 	mov	a,sp
      000955 24 FB            [12] 3168 	add	a,#0xfb
      000957 F5 81            [12] 3169 	mov	sp,a
      000959 D0 07            [24] 3170 	pop	ar7
                           000873  3171 	C$lab6.c$250$3$145 ==.
                                   3172 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:250: RDR_lo_to_hi = 0xFFFF - RUDDER_PW;
      00095B 74 FF            [12] 3173 	mov	a,#0xFF
      00095D C3               [12] 3174 	clr	c
      00095E 95 46            [12] 3175 	subb	a,_RUDDER_PW
      000960 F5 48            [12] 3176 	mov	_RDR_lo_to_hi,a
      000962 74 FF            [12] 3177 	mov	a,#0xFF
      000964 95 47            [12] 3178 	subb	a,(_RUDDER_PW + 1)
      000966 F5 49            [12] 3179 	mov	(_RDR_lo_to_hi + 1),a
                           000880  3180 	C$lab6.c$251$3$145 ==.
                                   3181 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:251: PCA0CP0 = RDR_lo_to_hi;
      000968 85 48 EA         [24] 3182 	mov	((_PCA0CP0 >> 0) & 0xFF),_RDR_lo_to_hi
      00096B 85 49 FA         [24] 3183 	mov	((_PCA0CP0 >> 8) & 0xFF),(_RDR_lo_to_hi + 1)
                           000886  3184 	C$lab6.c$253$3$145 ==.
                                   3185 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:253: if (times == 0 )
      00096E 90 00 59         [24] 3186 	mov	dptr,#_Rudder_cal_times_1_143
      000971 E0               [24] 3187 	movx	a,@dptr
      000972 FD               [12] 3188 	mov	r5,a
      000973 A3               [24] 3189 	inc	dptr
      000974 E0               [24] 3190 	movx	a,@dptr
      000975 FE               [12] 3191 	mov	r6,a
      000976 4D               [12] 3192 	orl	a,r5
      000977 60 03            [24] 3193 	jz	00215$
      000979 02 0A 24         [24] 3194 	ljmp	00143$
      00097C                       3195 00215$:
                           000894  3196 	C$lab6.c$255$4$146 ==.
                                   3197 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:255: if (value ==0)
      00097C 90 00 57         [24] 3198 	mov	dptr,#_Rudder_cal_value_1_143
      00097F E0               [24] 3199 	movx	a,@dptr
      000980 FD               [12] 3200 	mov	r5,a
      000981 A3               [24] 3201 	inc	dptr
      000982 E0               [24] 3202 	movx	a,@dptr
      000983 FE               [12] 3203 	mov	r6,a
      000984 4D               [12] 3204 	orl	a,r5
      000985 70 27            [24] 3205 	jnz	00110$
                           00089F  3206 	C$lab6.c$257$5$147 ==.
                                   3207 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:257: lcd_clear();
      000987 C0 07            [24] 3208 	push	ar7
      000989 12 01 C9         [24] 3209 	lcall	_lcd_clear
                           0008A4  3210 	C$lab6.c$258$5$147 ==.
                                   3211 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:258: lcd_print("Now calibrating Min_PW\n");
      00098C 74 17            [12] 3212 	mov	a,#___str_12
      00098E C0 E0            [24] 3213 	push	acc
      000990 74 1D            [12] 3214 	mov	a,#(___str_12 >> 8)
      000992 C0 E0            [24] 3215 	push	acc
      000994 74 80            [12] 3216 	mov	a,#0x80
      000996 C0 E0            [24] 3217 	push	acc
      000998 12 01 44         [24] 3218 	lcall	_lcd_print
      00099B 15 81            [12] 3219 	dec	sp
      00099D 15 81            [12] 3220 	dec	sp
      00099F 15 81            [12] 3221 	dec	sp
      0009A1 D0 07            [24] 3222 	pop	ar7
                           0008BB  3223 	C$lab6.c$259$5$147 ==.
                                   3224 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:259: if (st ==0 ) RUDDER_PW = PW_LEFT_RUDDER;
      0009A3 EF               [12] 3225 	mov	a,r7
      0009A4 70 06            [24] 3226 	jnz	00108$
      0009A6 85 3A 46         [24] 3227 	mov	_RUDDER_PW,_PW_LEFT_RUDDER
      0009A9 85 3B 47         [24] 3228 	mov	(_RUDDER_PW + 1),(_PW_LEFT_RUDDER + 1)
      0009AC                       3229 00108$:
                           0008C4  3230 	C$lab6.c$260$5$147 ==.
                                   3231 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:260: st =1;
      0009AC 7F 01            [12] 3232 	mov	r7,#0x01
      0009AE                       3233 00110$:
                           0008C6  3234 	C$lab6.c$262$4$146 ==.
                                   3235 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:262: value = kpd_input(1);
      0009AE 75 82 01         [24] 3236 	mov	dpl,#0x01
      0009B1 C0 07            [24] 3237 	push	ar7
      0009B3 12 02 81         [24] 3238 	lcall	_kpd_input
      0009B6 AD 82            [24] 3239 	mov	r5,dpl
      0009B8 AE 83            [24] 3240 	mov	r6,dph
      0009BA D0 07            [24] 3241 	pop	ar7
      0009BC 90 00 57         [24] 3242 	mov	dptr,#_Rudder_cal_value_1_143
      0009BF ED               [12] 3243 	mov	a,r5
      0009C0 F0               [24] 3244 	movx	@dptr,a
      0009C1 EE               [12] 3245 	mov	a,r6
      0009C2 A3               [24] 3246 	inc	dptr
      0009C3 F0               [24] 3247 	movx	@dptr,a
                           0008DC  3248 	C$lab6.c$263$4$146 ==.
                                   3249 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:263: if (value == 1)
      0009C4 BD 01 12         [24] 3250 	cjne	r5,#0x01,00117$
      0009C7 BE 00 0F         [24] 3251 	cjne	r6,#0x00,00117$
                           0008E2  3252 	C$lab6.c$265$5$148 ==.
                                   3253 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:265: RUDDER_PW -= 20;
      0009CA E5 46            [12] 3254 	mov	a,_RUDDER_PW
      0009CC 24 EC            [12] 3255 	add	a,#0xEC
      0009CE F5 46            [12] 3256 	mov	_RUDDER_PW,a
      0009D0 E5 47            [12] 3257 	mov	a,(_RUDDER_PW + 1)
      0009D2 34 FF            [12] 3258 	addc	a,#0xFF
      0009D4 F5 47            [12] 3259 	mov	(_RUDDER_PW + 1),a
      0009D6 02 09 3E         [24] 3260 	ljmp	00146$
      0009D9                       3261 00117$:
                           0008F1  3262 	C$lab6.c$267$4$146 ==.
                                   3263 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:267: else if (value==2)
      0009D9 90 00 57         [24] 3264 	mov	dptr,#_Rudder_cal_value_1_143
      0009DC E0               [24] 3265 	movx	a,@dptr
      0009DD FD               [12] 3266 	mov	r5,a
      0009DE A3               [24] 3267 	inc	dptr
      0009DF E0               [24] 3268 	movx	a,@dptr
      0009E0 FE               [12] 3269 	mov	r6,a
      0009E1 BD 02 11         [24] 3270 	cjne	r5,#0x02,00114$
      0009E4 BE 00 0E         [24] 3271 	cjne	r6,#0x00,00114$
                           0008FF  3272 	C$lab6.c$269$5$149 ==.
                                   3273 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:269: RUDDER_PW += 20;
      0009E7 74 14            [12] 3274 	mov	a,#0x14
      0009E9 25 46            [12] 3275 	add	a,_RUDDER_PW
      0009EB F5 46            [12] 3276 	mov	_RUDDER_PW,a
      0009ED E4               [12] 3277 	clr	a
      0009EE 35 47            [12] 3278 	addc	a,(_RUDDER_PW + 1)
      0009F0 F5 47            [12] 3279 	mov	(_RUDDER_PW + 1),a
      0009F2 02 09 3E         [24] 3280 	ljmp	00146$
      0009F5                       3281 00114$:
                           00090D  3282 	C$lab6.c$271$4$146 ==.
                                   3283 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:271: else if (value == 3)
      0009F5 90 00 57         [24] 3284 	mov	dptr,#_Rudder_cal_value_1_143
      0009F8 E0               [24] 3285 	movx	a,@dptr
      0009F9 FD               [12] 3286 	mov	r5,a
      0009FA A3               [24] 3287 	inc	dptr
      0009FB E0               [24] 3288 	movx	a,@dptr
      0009FC FE               [12] 3289 	mov	r6,a
      0009FD BD 03 05         [24] 3290 	cjne	r5,#0x03,00222$
      000A00 BE 00 02         [24] 3291 	cjne	r6,#0x00,00222$
      000A03 80 03            [24] 3292 	sjmp	00223$
      000A05                       3293 00222$:
      000A05 02 09 3E         [24] 3294 	ljmp	00146$
      000A08                       3295 00223$:
                           000920  3296 	C$lab6.c$273$5$150 ==.
                                   3297 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:273: times++;
      000A08 90 00 59         [24] 3298 	mov	dptr,#_Rudder_cal_times_1_143
      000A0B E0               [24] 3299 	movx	a,@dptr
      000A0C 24 01            [12] 3300 	add	a,#0x01
      000A0E F0               [24] 3301 	movx	@dptr,a
      000A0F A3               [24] 3302 	inc	dptr
      000A10 E0               [24] 3303 	movx	a,@dptr
      000A11 34 00            [12] 3304 	addc	a,#0x00
      000A13 F0               [24] 3305 	movx	@dptr,a
                           00092C  3306 	C$lab6.c$274$5$150 ==.
                                   3307 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:274: value =0;
      000A14 90 00 57         [24] 3308 	mov	dptr,#_Rudder_cal_value_1_143
      000A17 E4               [12] 3309 	clr	a
      000A18 F0               [24] 3310 	movx	@dptr,a
      000A19 A3               [24] 3311 	inc	dptr
      000A1A F0               [24] 3312 	movx	@dptr,a
                           000933  3313 	C$lab6.c$275$5$150 ==.
                                   3314 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:275: PW_LEFT_RUDDER = RUDDER_PW;
      000A1B 85 46 3A         [24] 3315 	mov	_PW_LEFT_RUDDER,_RUDDER_PW
      000A1E 85 47 3B         [24] 3316 	mov	(_PW_LEFT_RUDDER + 1),(_RUDDER_PW + 1)
      000A21 02 09 3E         [24] 3317 	ljmp	00146$
      000A24                       3318 00143$:
                           00093C  3319 	C$lab6.c$278$3$145 ==.
                                   3320 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:278: else if (times ==1)
      000A24 90 00 59         [24] 3321 	mov	dptr,#_Rudder_cal_times_1_143
      000A27 E0               [24] 3322 	movx	a,@dptr
      000A28 FD               [12] 3323 	mov	r5,a
      000A29 A3               [24] 3324 	inc	dptr
      000A2A E0               [24] 3325 	movx	a,@dptr
      000A2B FE               [12] 3326 	mov	r6,a
      000A2C BD 01 05         [24] 3327 	cjne	r5,#0x01,00224$
      000A2F BE 00 02         [24] 3328 	cjne	r6,#0x00,00224$
      000A32 80 03            [24] 3329 	sjmp	00225$
      000A34                       3330 00224$:
      000A34 02 0A DA         [24] 3331 	ljmp	00140$
      000A37                       3332 00225$:
                           00094F  3333 	C$lab6.c$280$4$151 ==.
                                   3334 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:280: if (value ==0)
      000A37 90 00 57         [24] 3335 	mov	dptr,#_Rudder_cal_value_1_143
      000A3A E0               [24] 3336 	movx	a,@dptr
      000A3B FD               [12] 3337 	mov	r5,a
      000A3C A3               [24] 3338 	inc	dptr
      000A3D E0               [24] 3339 	movx	a,@dptr
      000A3E FE               [12] 3340 	mov	r6,a
      000A3F 4D               [12] 3341 	orl	a,r5
      000A40 70 22            [24] 3342 	jnz	00120$
                           00095A  3343 	C$lab6.c$282$5$152 ==.
                                   3344 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:282: lcd_clear();
      000A42 C0 07            [24] 3345 	push	ar7
      000A44 12 01 C9         [24] 3346 	lcall	_lcd_clear
                           00095F  3347 	C$lab6.c$283$5$152 ==.
                                   3348 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:283: lcd_print("Now calibrating Cen_PW");
      000A47 74 2F            [12] 3349 	mov	a,#___str_13
      000A49 C0 E0            [24] 3350 	push	acc
      000A4B 74 1D            [12] 3351 	mov	a,#(___str_13 >> 8)
      000A4D C0 E0            [24] 3352 	push	acc
      000A4F 74 80            [12] 3353 	mov	a,#0x80
      000A51 C0 E0            [24] 3354 	push	acc
      000A53 12 01 44         [24] 3355 	lcall	_lcd_print
      000A56 15 81            [12] 3356 	dec	sp
      000A58 15 81            [12] 3357 	dec	sp
      000A5A 15 81            [12] 3358 	dec	sp
      000A5C D0 07            [24] 3359 	pop	ar7
                           000976  3360 	C$lab6.c$284$5$152 ==.
                                   3361 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:284: RUDDER_PW = PW_CENTER_RUDDER;
      000A5E 85 3C 46         [24] 3362 	mov	_RUDDER_PW,_PW_CENTER_RUDDER
      000A61 85 3D 47         [24] 3363 	mov	(_RUDDER_PW + 1),(_PW_CENTER_RUDDER + 1)
      000A64                       3364 00120$:
                           00097C  3365 	C$lab6.c$286$4$151 ==.
                                   3366 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:286: value = kpd_input(1);
      000A64 75 82 01         [24] 3367 	mov	dpl,#0x01
      000A67 C0 07            [24] 3368 	push	ar7
      000A69 12 02 81         [24] 3369 	lcall	_kpd_input
      000A6C AD 82            [24] 3370 	mov	r5,dpl
      000A6E AE 83            [24] 3371 	mov	r6,dph
      000A70 D0 07            [24] 3372 	pop	ar7
      000A72 90 00 57         [24] 3373 	mov	dptr,#_Rudder_cal_value_1_143
      000A75 ED               [12] 3374 	mov	a,r5
      000A76 F0               [24] 3375 	movx	@dptr,a
      000A77 EE               [12] 3376 	mov	a,r6
      000A78 A3               [24] 3377 	inc	dptr
      000A79 F0               [24] 3378 	movx	@dptr,a
                           000992  3379 	C$lab6.c$287$4$151 ==.
                                   3380 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:287: if (value == 1)
      000A7A BD 01 12         [24] 3381 	cjne	r5,#0x01,00127$
      000A7D BE 00 0F         [24] 3382 	cjne	r6,#0x00,00127$
                           000998  3383 	C$lab6.c$289$5$153 ==.
                                   3384 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:289: RUDDER_PW -= 20;
      000A80 E5 46            [12] 3385 	mov	a,_RUDDER_PW
      000A82 24 EC            [12] 3386 	add	a,#0xEC
      000A84 F5 46            [12] 3387 	mov	_RUDDER_PW,a
      000A86 E5 47            [12] 3388 	mov	a,(_RUDDER_PW + 1)
      000A88 34 FF            [12] 3389 	addc	a,#0xFF
      000A8A F5 47            [12] 3390 	mov	(_RUDDER_PW + 1),a
      000A8C 02 09 3E         [24] 3391 	ljmp	00146$
      000A8F                       3392 00127$:
                           0009A7  3393 	C$lab6.c$291$4$151 ==.
                                   3394 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:291: else if (value==2)
      000A8F 90 00 57         [24] 3395 	mov	dptr,#_Rudder_cal_value_1_143
      000A92 E0               [24] 3396 	movx	a,@dptr
      000A93 FD               [12] 3397 	mov	r5,a
      000A94 A3               [24] 3398 	inc	dptr
      000A95 E0               [24] 3399 	movx	a,@dptr
      000A96 FE               [12] 3400 	mov	r6,a
      000A97 BD 02 11         [24] 3401 	cjne	r5,#0x02,00124$
      000A9A BE 00 0E         [24] 3402 	cjne	r6,#0x00,00124$
                           0009B5  3403 	C$lab6.c$293$5$154 ==.
                                   3404 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:293: RUDDER_PW += 20;
      000A9D 74 14            [12] 3405 	mov	a,#0x14
      000A9F 25 46            [12] 3406 	add	a,_RUDDER_PW
      000AA1 F5 46            [12] 3407 	mov	_RUDDER_PW,a
      000AA3 E4               [12] 3408 	clr	a
      000AA4 35 47            [12] 3409 	addc	a,(_RUDDER_PW + 1)
      000AA6 F5 47            [12] 3410 	mov	(_RUDDER_PW + 1),a
      000AA8 02 09 3E         [24] 3411 	ljmp	00146$
      000AAB                       3412 00124$:
                           0009C3  3413 	C$lab6.c$295$4$151 ==.
                                   3414 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:295: else if (value == 3)
      000AAB 90 00 57         [24] 3415 	mov	dptr,#_Rudder_cal_value_1_143
      000AAE E0               [24] 3416 	movx	a,@dptr
      000AAF FD               [12] 3417 	mov	r5,a
      000AB0 A3               [24] 3418 	inc	dptr
      000AB1 E0               [24] 3419 	movx	a,@dptr
      000AB2 FE               [12] 3420 	mov	r6,a
      000AB3 BD 03 05         [24] 3421 	cjne	r5,#0x03,00231$
      000AB6 BE 00 02         [24] 3422 	cjne	r6,#0x00,00231$
      000AB9 80 03            [24] 3423 	sjmp	00232$
      000ABB                       3424 00231$:
      000ABB 02 09 3E         [24] 3425 	ljmp	00146$
      000ABE                       3426 00232$:
                           0009D6  3427 	C$lab6.c$297$5$155 ==.
                                   3428 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:297: times++;
      000ABE 90 00 59         [24] 3429 	mov	dptr,#_Rudder_cal_times_1_143
      000AC1 E0               [24] 3430 	movx	a,@dptr
      000AC2 24 01            [12] 3431 	add	a,#0x01
      000AC4 F0               [24] 3432 	movx	@dptr,a
      000AC5 A3               [24] 3433 	inc	dptr
      000AC6 E0               [24] 3434 	movx	a,@dptr
      000AC7 34 00            [12] 3435 	addc	a,#0x00
      000AC9 F0               [24] 3436 	movx	@dptr,a
                           0009E2  3437 	C$lab6.c$298$5$155 ==.
                                   3438 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:298: value=0;
      000ACA 90 00 57         [24] 3439 	mov	dptr,#_Rudder_cal_value_1_143
      000ACD E4               [12] 3440 	clr	a
      000ACE F0               [24] 3441 	movx	@dptr,a
      000ACF A3               [24] 3442 	inc	dptr
      000AD0 F0               [24] 3443 	movx	@dptr,a
                           0009E9  3444 	C$lab6.c$299$5$155 ==.
                                   3445 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:299: PW_CENTER_RUDDER = RUDDER_PW;
      000AD1 85 46 3C         [24] 3446 	mov	_PW_CENTER_RUDDER,_RUDDER_PW
      000AD4 85 47 3D         [24] 3447 	mov	(_PW_CENTER_RUDDER + 1),(_RUDDER_PW + 1)
      000AD7 02 09 3E         [24] 3448 	ljmp	00146$
      000ADA                       3449 00140$:
                           0009F2  3450 	C$lab6.c$304$4$156 ==.
                                   3451 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:304: if (value==0)
      000ADA 90 00 57         [24] 3452 	mov	dptr,#_Rudder_cal_value_1_143
      000ADD E0               [24] 3453 	movx	a,@dptr
      000ADE FD               [12] 3454 	mov	r5,a
      000ADF A3               [24] 3455 	inc	dptr
      000AE0 E0               [24] 3456 	movx	a,@dptr
      000AE1 FE               [12] 3457 	mov	r6,a
      000AE2 4D               [12] 3458 	orl	a,r5
      000AE3 70 22            [24] 3459 	jnz	00130$
                           0009FD  3460 	C$lab6.c$306$5$157 ==.
                                   3461 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:306: lcd_clear();
      000AE5 C0 07            [24] 3462 	push	ar7
      000AE7 12 01 C9         [24] 3463 	lcall	_lcd_clear
                           000A02  3464 	C$lab6.c$307$5$157 ==.
                                   3465 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:307: lcd_print("Now calibrating Max_PW");
      000AEA 74 46            [12] 3466 	mov	a,#___str_14
      000AEC C0 E0            [24] 3467 	push	acc
      000AEE 74 1D            [12] 3468 	mov	a,#(___str_14 >> 8)
      000AF0 C0 E0            [24] 3469 	push	acc
      000AF2 74 80            [12] 3470 	mov	a,#0x80
      000AF4 C0 E0            [24] 3471 	push	acc
      000AF6 12 01 44         [24] 3472 	lcall	_lcd_print
      000AF9 15 81            [12] 3473 	dec	sp
      000AFB 15 81            [12] 3474 	dec	sp
      000AFD 15 81            [12] 3475 	dec	sp
      000AFF D0 07            [24] 3476 	pop	ar7
                           000A19  3477 	C$lab6.c$308$5$157 ==.
                                   3478 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:308: RUDDER_PW = PW_RIGHT_RUDDER;
      000B01 85 3E 46         [24] 3479 	mov	_RUDDER_PW,_PW_RIGHT_RUDDER
      000B04 85 3F 47         [24] 3480 	mov	(_RUDDER_PW + 1),(_PW_RIGHT_RUDDER + 1)
      000B07                       3481 00130$:
                           000A1F  3482 	C$lab6.c$310$4$156 ==.
                                   3483 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:310: value = kpd_input(1);
      000B07 75 82 01         [24] 3484 	mov	dpl,#0x01
      000B0A C0 07            [24] 3485 	push	ar7
      000B0C 12 02 81         [24] 3486 	lcall	_kpd_input
      000B0F AD 82            [24] 3487 	mov	r5,dpl
      000B11 AE 83            [24] 3488 	mov	r6,dph
      000B13 D0 07            [24] 3489 	pop	ar7
      000B15 90 00 57         [24] 3490 	mov	dptr,#_Rudder_cal_value_1_143
      000B18 ED               [12] 3491 	mov	a,r5
      000B19 F0               [24] 3492 	movx	@dptr,a
      000B1A EE               [12] 3493 	mov	a,r6
      000B1B A3               [24] 3494 	inc	dptr
      000B1C F0               [24] 3495 	movx	@dptr,a
                           000A35  3496 	C$lab6.c$311$4$156 ==.
                                   3497 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:311: if (value == 1)
      000B1D BD 01 12         [24] 3498 	cjne	r5,#0x01,00137$
      000B20 BE 00 0F         [24] 3499 	cjne	r6,#0x00,00137$
                           000A3B  3500 	C$lab6.c$313$5$158 ==.
                                   3501 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:313: RUDDER_PW -= 20;
      000B23 E5 46            [12] 3502 	mov	a,_RUDDER_PW
      000B25 24 EC            [12] 3503 	add	a,#0xEC
      000B27 F5 46            [12] 3504 	mov	_RUDDER_PW,a
      000B29 E5 47            [12] 3505 	mov	a,(_RUDDER_PW + 1)
      000B2B 34 FF            [12] 3506 	addc	a,#0xFF
      000B2D F5 47            [12] 3507 	mov	(_RUDDER_PW + 1),a
      000B2F 02 09 3E         [24] 3508 	ljmp	00146$
      000B32                       3509 00137$:
                           000A4A  3510 	C$lab6.c$315$4$156 ==.
                                   3511 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:315: else if (value==2)
      000B32 90 00 57         [24] 3512 	mov	dptr,#_Rudder_cal_value_1_143
      000B35 E0               [24] 3513 	movx	a,@dptr
      000B36 FD               [12] 3514 	mov	r5,a
      000B37 A3               [24] 3515 	inc	dptr
      000B38 E0               [24] 3516 	movx	a,@dptr
      000B39 FE               [12] 3517 	mov	r6,a
      000B3A BD 02 11         [24] 3518 	cjne	r5,#0x02,00134$
      000B3D BE 00 0E         [24] 3519 	cjne	r6,#0x00,00134$
                           000A58  3520 	C$lab6.c$317$5$159 ==.
                                   3521 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:317: RUDDER_PW += 20;
      000B40 74 14            [12] 3522 	mov	a,#0x14
      000B42 25 46            [12] 3523 	add	a,_RUDDER_PW
      000B44 F5 46            [12] 3524 	mov	_RUDDER_PW,a
      000B46 E4               [12] 3525 	clr	a
      000B47 35 47            [12] 3526 	addc	a,(_RUDDER_PW + 1)
      000B49 F5 47            [12] 3527 	mov	(_RUDDER_PW + 1),a
      000B4B 02 09 3E         [24] 3528 	ljmp	00146$
      000B4E                       3529 00134$:
                           000A66  3530 	C$lab6.c$319$4$156 ==.
                                   3531 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:319: else if (value == 3)
      000B4E 90 00 57         [24] 3532 	mov	dptr,#_Rudder_cal_value_1_143
      000B51 E0               [24] 3533 	movx	a,@dptr
      000B52 FD               [12] 3534 	mov	r5,a
      000B53 A3               [24] 3535 	inc	dptr
      000B54 E0               [24] 3536 	movx	a,@dptr
      000B55 FE               [12] 3537 	mov	r6,a
      000B56 BD 03 05         [24] 3538 	cjne	r5,#0x03,00238$
      000B59 BE 00 02         [24] 3539 	cjne	r6,#0x00,00238$
      000B5C 80 03            [24] 3540 	sjmp	00239$
      000B5E                       3541 00238$:
      000B5E 02 09 3E         [24] 3542 	ljmp	00146$
      000B61                       3543 00239$:
                           000A79  3544 	C$lab6.c$321$5$160 ==.
                                   3545 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:321: PW_RIGHT_RUDDER = RUDDER_PW;
      000B61 85 46 3E         [24] 3546 	mov	_PW_RIGHT_RUDDER,_RUDDER_PW
      000B64 85 47 3F         [24] 3547 	mov	(_PW_RIGHT_RUDDER + 1),(_RUDDER_PW + 1)
                           000A7F  3548 	C$lab6.c$322$5$160 ==.
                                   3549 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:322: return;
                           000A7F  3550 	C$lab6.c$331$1$143 ==.
                           000A7F  3551 	XG$Rudder_cal$0$0 ==.
      000B67 22               [24] 3552 	ret
                                   3553 ;------------------------------------------------------------
                                   3554 ;Allocation info for local variables in function 'Angle_cal'
                                   3555 ;------------------------------------------------------------
                                   3556 ;st                        Allocated to registers r7 
                                   3557 ;value                     Allocated with name '_Angle_cal_value_1_162'
                                   3558 ;times                     Allocated with name '_Angle_cal_times_1_162'
                                   3559 ;------------------------------------------------------------
                           000A80  3560 	G$Angle_cal$0$0 ==.
                           000A80  3561 	C$lab6.c$333$1$143 ==.
                                   3562 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:333: void Angle_cal(void)
                                   3563 ;	-----------------------------------------
                                   3564 ;	 function Angle_cal
                                   3565 ;	-----------------------------------------
      000B68                       3566 _Angle_cal:
                           000A80  3567 	C$lab6.c$336$1$143 ==.
                                   3568 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:336: __xdata int value =0;
      000B68 90 00 5B         [24] 3569 	mov	dptr,#_Angle_cal_value_1_162
      000B6B E4               [12] 3570 	clr	a
      000B6C F0               [24] 3571 	movx	@dptr,a
      000B6D A3               [24] 3572 	inc	dptr
      000B6E F0               [24] 3573 	movx	@dptr,a
                           000A87  3574 	C$lab6.c$337$1$143 ==.
                                   3575 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:337: __xdata int times =0;
      000B6F 90 00 5D         [24] 3576 	mov	dptr,#_Angle_cal_times_1_162
      000B72 F0               [24] 3577 	movx	@dptr,a
      000B73 A3               [24] 3578 	inc	dptr
      000B74 F0               [24] 3579 	movx	@dptr,a
                           000A8D  3580 	C$lab6.c$338$1$162 ==.
                                   3581 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:338: count =0;
      000B75 F5 32            [12] 3582 	mov	_count,a
      000B77 F5 33            [12] 3583 	mov	(_count + 1),a
                           000A91  3584 	C$lab6.c$339$1$162 ==.
                                   3585 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:339: lcd_clear();
      000B79 12 01 C9         [24] 3586 	lcall	_lcd_clear
                           000A94  3587 	C$lab6.c$340$1$162 ==.
                                   3588 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:340: lcd_print("Angle Calibration");
      000B7C 74 5D            [12] 3589 	mov	a,#___str_15
      000B7E C0 E0            [24] 3590 	push	acc
      000B80 74 1D            [12] 3591 	mov	a,#(___str_15 >> 8)
      000B82 C0 E0            [24] 3592 	push	acc
      000B84 74 80            [12] 3593 	mov	a,#0x80
      000B86 C0 E0            [24] 3594 	push	acc
      000B88 12 01 44         [24] 3595 	lcall	_lcd_print
      000B8B 15 81            [12] 3596 	dec	sp
      000B8D 15 81            [12] 3597 	dec	sp
      000B8F 15 81            [12] 3598 	dec	sp
                           000AA9  3599 	C$lab6.c$341$1$162 ==.
                                   3600 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:341: while (count < 50);
      000B91                       3601 00101$:
      000B91 C3               [12] 3602 	clr	c
      000B92 E5 32            [12] 3603 	mov	a,_count
      000B94 94 32            [12] 3604 	subb	a,#0x32
      000B96 E5 33            [12] 3605 	mov	a,(_count + 1)
      000B98 64 80            [12] 3606 	xrl	a,#0x80
      000B9A 94 80            [12] 3607 	subb	a,#0x80
      000B9C 40 F3            [24] 3608 	jc	00101$
                           000AB6  3609 	C$lab6.c$342$1$162 ==.
                                   3610 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:342: lcd_clear();
      000B9E 12 01 C9         [24] 3611 	lcall	_lcd_clear
                           000AB9  3612 	C$lab6.c$345$2$163 ==.
                                   3613 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:345: count = 0;
      000BA1 E4               [12] 3614 	clr	a
      000BA2 F5 32            [12] 3615 	mov	_count,a
      000BA4 F5 33            [12] 3616 	mov	(_count + 1),a
                           000ABE  3617 	C$lab6.c$346$2$163 ==.
                                   3618 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:346: while (count < 1);
      000BA6                       3619 00104$:
      000BA6 C3               [12] 3620 	clr	c
      000BA7 E5 32            [12] 3621 	mov	a,_count
      000BA9 94 01            [12] 3622 	subb	a,#0x01
      000BAB E5 33            [12] 3623 	mov	a,(_count + 1)
      000BAD 64 80            [12] 3624 	xrl	a,#0x80
      000BAF 94 80            [12] 3625 	subb	a,#0x80
      000BB1 40 F3            [24] 3626 	jc	00104$
                           000ACB  3627 	C$lab6.c$347$2$163 ==.
                                   3628 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:347: lcd_clear();
      000BB3 12 01 C9         [24] 3629 	lcall	_lcd_clear
                           000ACE  3630 	C$lab6.c$348$2$163 ==.
                                   3631 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:348: lcd_print("go left: press 1\n go right: press 2\nPress * for next screen");
      000BB6 74 B0            [12] 3632 	mov	a,#___str_9
      000BB8 C0 E0            [24] 3633 	push	acc
      000BBA 74 1C            [12] 3634 	mov	a,#(___str_9 >> 8)
      000BBC C0 E0            [24] 3635 	push	acc
      000BBE 74 80            [12] 3636 	mov	a,#0x80
      000BC0 C0 E0            [24] 3637 	push	acc
      000BC2 12 01 44         [24] 3638 	lcall	_lcd_print
      000BC5 15 81            [12] 3639 	dec	sp
      000BC7 15 81            [12] 3640 	dec	sp
      000BC9 15 81            [12] 3641 	dec	sp
                           000AE3  3642 	C$lab6.c$349$2$163 ==.
                                   3643 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:349: start();
      000BCB 12 13 60         [24] 3644 	lcall	_start
                           000AE6  3645 	C$lab6.c$350$2$163 ==.
                                   3646 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:350: lcd_clear();
      000BCE 12 01 C9         [24] 3647 	lcall	_lcd_clear
                           000AE9  3648 	C$lab6.c$351$2$163 ==.
                                   3649 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:351: lcd_print("\n confirm: press 3\n press * to begin");
      000BD1 74 EC            [12] 3650 	mov	a,#___str_10
      000BD3 C0 E0            [24] 3651 	push	acc
      000BD5 74 1C            [12] 3652 	mov	a,#(___str_10 >> 8)
      000BD7 C0 E0            [24] 3653 	push	acc
      000BD9 74 80            [12] 3654 	mov	a,#0x80
      000BDB C0 E0            [24] 3655 	push	acc
      000BDD 12 01 44         [24] 3656 	lcall	_lcd_print
      000BE0 15 81            [12] 3657 	dec	sp
      000BE2 15 81            [12] 3658 	dec	sp
      000BE4 15 81            [12] 3659 	dec	sp
                           000AFE  3660 	C$lab6.c$352$2$163 ==.
                                   3661 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:352: start();
      000BE6 12 13 60         [24] 3662 	lcall	_start
                           000B01  3663 	C$lab6.c$353$2$163 ==.
                                   3664 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:353: st =0;
      000BE9 7F 00            [12] 3665 	mov	r7,#0x00
                           000B03  3666 	C$lab6.c$354$5$166 ==.
                                   3667 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:354: while (1)
      000BEB                       3668 00150$:
                           000B03  3669 	C$lab6.c$356$3$164 ==.
                                   3670 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:356: printf("\r\n %u",ANGLE_PW);
      000BEB C0 07            [24] 3671 	push	ar7
      000BED C0 4A            [24] 3672 	push	_ANGLE_PW
      000BEF C0 4B            [24] 3673 	push	(_ANGLE_PW + 1)
      000BF1 74 11            [12] 3674 	mov	a,#___str_11
      000BF3 C0 E0            [24] 3675 	push	acc
      000BF5 74 1D            [12] 3676 	mov	a,#(___str_11 >> 8)
      000BF7 C0 E0            [24] 3677 	push	acc
      000BF9 74 80            [12] 3678 	mov	a,#0x80
      000BFB C0 E0            [24] 3679 	push	acc
      000BFD 12 15 9E         [24] 3680 	lcall	_printf
      000C00 E5 81            [12] 3681 	mov	a,sp
      000C02 24 FB            [12] 3682 	add	a,#0xfb
      000C04 F5 81            [12] 3683 	mov	sp,a
      000C06 D0 07            [24] 3684 	pop	ar7
                           000B20  3685 	C$lab6.c$357$3$164 ==.
                                   3686 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:357: AGL_lo_to_hi = 0xFFFF - ANGLE_PW;
      000C08 74 FF            [12] 3687 	mov	a,#0xFF
      000C0A C3               [12] 3688 	clr	c
      000C0B 95 4A            [12] 3689 	subb	a,_ANGLE_PW
      000C0D F5 4C            [12] 3690 	mov	_AGL_lo_to_hi,a
      000C0F 74 FF            [12] 3691 	mov	a,#0xFF
      000C11 95 4B            [12] 3692 	subb	a,(_ANGLE_PW + 1)
      000C13 F5 4D            [12] 3693 	mov	(_AGL_lo_to_hi + 1),a
                           000B2D  3694 	C$lab6.c$358$3$164 ==.
                                   3695 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:358: PCA0CP1 = AGL_lo_to_hi;
      000C15 85 4C EB         [24] 3696 	mov	((_PCA0CP1 >> 0) & 0xFF),_AGL_lo_to_hi
      000C18 85 4D FB         [24] 3697 	mov	((_PCA0CP1 >> 8) & 0xFF),(_AGL_lo_to_hi + 1)
                           000B33  3698 	C$lab6.c$360$3$164 ==.
                                   3699 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:360: if (times == 0 )
      000C1B 90 00 5D         [24] 3700 	mov	dptr,#_Angle_cal_times_1_162
      000C1E E0               [24] 3701 	movx	a,@dptr
      000C1F FD               [12] 3702 	mov	r5,a
      000C20 A3               [24] 3703 	inc	dptr
      000C21 E0               [24] 3704 	movx	a,@dptr
      000C22 FE               [12] 3705 	mov	r6,a
      000C23 4D               [12] 3706 	orl	a,r5
      000C24 60 03            [24] 3707 	jz	00225$
      000C26 02 0C D3         [24] 3708 	ljmp	00147$
      000C29                       3709 00225$:
                           000B41  3710 	C$lab6.c$362$4$165 ==.
                                   3711 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:362: if (value ==0)
      000C29 90 00 5B         [24] 3712 	mov	dptr,#_Angle_cal_value_1_162
      000C2C E0               [24] 3713 	movx	a,@dptr
      000C2D FD               [12] 3714 	mov	r5,a
      000C2E A3               [24] 3715 	inc	dptr
      000C2F E0               [24] 3716 	movx	a,@dptr
      000C30 FE               [12] 3717 	mov	r6,a
      000C31 4D               [12] 3718 	orl	a,r5
      000C32 70 27            [24] 3719 	jnz	00110$
                           000B4C  3720 	C$lab6.c$364$5$166 ==.
                                   3721 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:364: lcd_clear();
      000C34 C0 07            [24] 3722 	push	ar7
      000C36 12 01 C9         [24] 3723 	lcall	_lcd_clear
                           000B51  3724 	C$lab6.c$365$5$166 ==.
                                   3725 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:365: lcd_print("Now calibrating Min_PW UP ANGLE");
      000C39 74 6F            [12] 3726 	mov	a,#___str_16
      000C3B C0 E0            [24] 3727 	push	acc
      000C3D 74 1D            [12] 3728 	mov	a,#(___str_16 >> 8)
      000C3F C0 E0            [24] 3729 	push	acc
      000C41 74 80            [12] 3730 	mov	a,#0x80
      000C43 C0 E0            [24] 3731 	push	acc
      000C45 12 01 44         [24] 3732 	lcall	_lcd_print
      000C48 15 81            [12] 3733 	dec	sp
      000C4A 15 81            [12] 3734 	dec	sp
      000C4C 15 81            [12] 3735 	dec	sp
      000C4E D0 07            [24] 3736 	pop	ar7
                           000B68  3737 	C$lab6.c$366$5$166 ==.
                                   3738 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:366: if (st == 0) ANGLE_PW = PW_UP_ANGLE;
      000C50 EF               [12] 3739 	mov	a,r7
      000C51 70 06            [24] 3740 	jnz	00108$
      000C53 85 40 4A         [24] 3741 	mov	_ANGLE_PW,_PW_UP_ANGLE
      000C56 85 41 4B         [24] 3742 	mov	(_ANGLE_PW + 1),(_PW_UP_ANGLE + 1)
      000C59                       3743 00108$:
                           000B71  3744 	C$lab6.c$367$5$166 ==.
                                   3745 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:367: st =1;
      000C59 7F 01            [12] 3746 	mov	r7,#0x01
      000C5B                       3747 00110$:
                           000B73  3748 	C$lab6.c$369$4$165 ==.
                                   3749 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:369: value = kpd_input(1);
      000C5B 75 82 01         [24] 3750 	mov	dpl,#0x01
      000C5E C0 07            [24] 3751 	push	ar7
      000C60 12 02 81         [24] 3752 	lcall	_kpd_input
      000C63 AD 82            [24] 3753 	mov	r5,dpl
      000C65 AE 83            [24] 3754 	mov	r6,dph
      000C67 D0 07            [24] 3755 	pop	ar7
      000C69 90 00 5B         [24] 3756 	mov	dptr,#_Angle_cal_value_1_162
      000C6C ED               [12] 3757 	mov	a,r5
      000C6D F0               [24] 3758 	movx	@dptr,a
      000C6E EE               [12] 3759 	mov	a,r6
      000C6F A3               [24] 3760 	inc	dptr
      000C70 F0               [24] 3761 	movx	@dptr,a
                           000B89  3762 	C$lab6.c$370$4$165 ==.
                                   3763 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:370: if (value == 1)
      000C71 BD 01 12         [24] 3764 	cjne	r5,#0x01,00117$
      000C74 BE 00 0F         [24] 3765 	cjne	r6,#0x00,00117$
                           000B8F  3766 	C$lab6.c$372$5$167 ==.
                                   3767 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:372: ANGLE_PW -= 30;
      000C77 E5 4A            [12] 3768 	mov	a,_ANGLE_PW
      000C79 24 E2            [12] 3769 	add	a,#0xE2
      000C7B F5 4A            [12] 3770 	mov	_ANGLE_PW,a
      000C7D E5 4B            [12] 3771 	mov	a,(_ANGLE_PW + 1)
      000C7F 34 FF            [12] 3772 	addc	a,#0xFF
      000C81 F5 4B            [12] 3773 	mov	(_ANGLE_PW + 1),a
      000C83 02 0B EB         [24] 3774 	ljmp	00150$
      000C86                       3775 00117$:
                           000B9E  3776 	C$lab6.c$374$4$165 ==.
                                   3777 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:374: else if (value==2)
      000C86 90 00 5B         [24] 3778 	mov	dptr,#_Angle_cal_value_1_162
      000C89 E0               [24] 3779 	movx	a,@dptr
      000C8A FD               [12] 3780 	mov	r5,a
      000C8B A3               [24] 3781 	inc	dptr
      000C8C E0               [24] 3782 	movx	a,@dptr
      000C8D FE               [12] 3783 	mov	r6,a
      000C8E BD 02 11         [24] 3784 	cjne	r5,#0x02,00114$
      000C91 BE 00 0E         [24] 3785 	cjne	r6,#0x00,00114$
                           000BAC  3786 	C$lab6.c$376$5$168 ==.
                                   3787 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:376: ANGLE_PW += 30;
      000C94 74 1E            [12] 3788 	mov	a,#0x1E
      000C96 25 4A            [12] 3789 	add	a,_ANGLE_PW
      000C98 F5 4A            [12] 3790 	mov	_ANGLE_PW,a
      000C9A E4               [12] 3791 	clr	a
      000C9B 35 4B            [12] 3792 	addc	a,(_ANGLE_PW + 1)
      000C9D F5 4B            [12] 3793 	mov	(_ANGLE_PW + 1),a
      000C9F 02 0B EB         [24] 3794 	ljmp	00150$
      000CA2                       3795 00114$:
                           000BBA  3796 	C$lab6.c$378$4$165 ==.
                                   3797 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:378: else if (value == 3)
      000CA2 90 00 5B         [24] 3798 	mov	dptr,#_Angle_cal_value_1_162
      000CA5 E0               [24] 3799 	movx	a,@dptr
      000CA6 FD               [12] 3800 	mov	r5,a
      000CA7 A3               [24] 3801 	inc	dptr
      000CA8 E0               [24] 3802 	movx	a,@dptr
      000CA9 FE               [12] 3803 	mov	r6,a
      000CAA BD 03 05         [24] 3804 	cjne	r5,#0x03,00232$
      000CAD BE 00 02         [24] 3805 	cjne	r6,#0x00,00232$
      000CB0 80 03            [24] 3806 	sjmp	00233$
      000CB2                       3807 00232$:
      000CB2 02 0B EB         [24] 3808 	ljmp	00150$
      000CB5                       3809 00233$:
                           000BCD  3810 	C$lab6.c$380$5$169 ==.
                                   3811 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:380: times++;
      000CB5 90 00 5D         [24] 3812 	mov	dptr,#_Angle_cal_times_1_162
      000CB8 E0               [24] 3813 	movx	a,@dptr
      000CB9 24 01            [12] 3814 	add	a,#0x01
      000CBB F0               [24] 3815 	movx	@dptr,a
      000CBC A3               [24] 3816 	inc	dptr
      000CBD E0               [24] 3817 	movx	a,@dptr
      000CBE 34 00            [12] 3818 	addc	a,#0x00
      000CC0 F0               [24] 3819 	movx	@dptr,a
                           000BD9  3820 	C$lab6.c$381$5$169 ==.
                                   3821 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:381: value =0;
      000CC1 90 00 5B         [24] 3822 	mov	dptr,#_Angle_cal_value_1_162
      000CC4 E4               [12] 3823 	clr	a
      000CC5 F0               [24] 3824 	movx	@dptr,a
      000CC6 A3               [24] 3825 	inc	dptr
      000CC7 F0               [24] 3826 	movx	@dptr,a
                           000BE0  3827 	C$lab6.c$382$5$169 ==.
                                   3828 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:382: st=0;
      000CC8 7F 00            [12] 3829 	mov	r7,#0x00
                           000BE2  3830 	C$lab6.c$383$5$169 ==.
                                   3831 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:383: PW_UP_ANGLE = ANGLE_PW;
      000CCA 85 4A 40         [24] 3832 	mov	_PW_UP_ANGLE,_ANGLE_PW
      000CCD 85 4B 41         [24] 3833 	mov	(_PW_UP_ANGLE + 1),(_ANGLE_PW + 1)
      000CD0 02 0B EB         [24] 3834 	ljmp	00150$
      000CD3                       3835 00147$:
                           000BEB  3836 	C$lab6.c$386$3$164 ==.
                                   3837 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:386: else if (times ==1)
      000CD3 90 00 5D         [24] 3838 	mov	dptr,#_Angle_cal_times_1_162
      000CD6 E0               [24] 3839 	movx	a,@dptr
      000CD7 FD               [12] 3840 	mov	r5,a
      000CD8 A3               [24] 3841 	inc	dptr
      000CD9 E0               [24] 3842 	movx	a,@dptr
      000CDA FE               [12] 3843 	mov	r6,a
      000CDB BD 01 05         [24] 3844 	cjne	r5,#0x01,00234$
      000CDE BE 00 02         [24] 3845 	cjne	r6,#0x00,00234$
      000CE1 80 03            [24] 3846 	sjmp	00235$
      000CE3                       3847 00234$:
      000CE3 02 0D 90         [24] 3848 	ljmp	00144$
      000CE6                       3849 00235$:
                           000BFE  3850 	C$lab6.c$388$4$170 ==.
                                   3851 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:388: if (value ==0)
      000CE6 90 00 5B         [24] 3852 	mov	dptr,#_Angle_cal_value_1_162
      000CE9 E0               [24] 3853 	movx	a,@dptr
      000CEA FD               [12] 3854 	mov	r5,a
      000CEB A3               [24] 3855 	inc	dptr
      000CEC E0               [24] 3856 	movx	a,@dptr
      000CED FE               [12] 3857 	mov	r6,a
      000CEE 4D               [12] 3858 	orl	a,r5
      000CEF 70 27            [24] 3859 	jnz	00122$
                           000C09  3860 	C$lab6.c$390$5$171 ==.
                                   3861 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:390: lcd_clear();
      000CF1 C0 07            [24] 3862 	push	ar7
      000CF3 12 01 C9         [24] 3863 	lcall	_lcd_clear
                           000C0E  3864 	C$lab6.c$391$5$171 ==.
                                   3865 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:391: lcd_print("Now calibrating Cen_PW");
      000CF6 74 2F            [12] 3866 	mov	a,#___str_13
      000CF8 C0 E0            [24] 3867 	push	acc
      000CFA 74 1D            [12] 3868 	mov	a,#(___str_13 >> 8)
      000CFC C0 E0            [24] 3869 	push	acc
      000CFE 74 80            [12] 3870 	mov	a,#0x80
      000D00 C0 E0            [24] 3871 	push	acc
      000D02 12 01 44         [24] 3872 	lcall	_lcd_print
      000D05 15 81            [12] 3873 	dec	sp
      000D07 15 81            [12] 3874 	dec	sp
      000D09 15 81            [12] 3875 	dec	sp
      000D0B D0 07            [24] 3876 	pop	ar7
                           000C25  3877 	C$lab6.c$392$5$171 ==.
                                   3878 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:392: if (st == 0) ANGLE_PW = PW_CENTER_ANGLE;
      000D0D EF               [12] 3879 	mov	a,r7
      000D0E 70 06            [24] 3880 	jnz	00120$
      000D10 85 42 4A         [24] 3881 	mov	_ANGLE_PW,_PW_CENTER_ANGLE
      000D13 85 43 4B         [24] 3882 	mov	(_ANGLE_PW + 1),(_PW_CENTER_ANGLE + 1)
      000D16                       3883 00120$:
                           000C2E  3884 	C$lab6.c$393$5$171 ==.
                                   3885 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:393: st=1;
      000D16 7F 01            [12] 3886 	mov	r7,#0x01
      000D18                       3887 00122$:
                           000C30  3888 	C$lab6.c$395$4$170 ==.
                                   3889 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:395: value = kpd_input(1);
      000D18 75 82 01         [24] 3890 	mov	dpl,#0x01
      000D1B C0 07            [24] 3891 	push	ar7
      000D1D 12 02 81         [24] 3892 	lcall	_kpd_input
      000D20 AD 82            [24] 3893 	mov	r5,dpl
      000D22 AE 83            [24] 3894 	mov	r6,dph
      000D24 D0 07            [24] 3895 	pop	ar7
      000D26 90 00 5B         [24] 3896 	mov	dptr,#_Angle_cal_value_1_162
      000D29 ED               [12] 3897 	mov	a,r5
      000D2A F0               [24] 3898 	movx	@dptr,a
      000D2B EE               [12] 3899 	mov	a,r6
      000D2C A3               [24] 3900 	inc	dptr
      000D2D F0               [24] 3901 	movx	@dptr,a
                           000C46  3902 	C$lab6.c$396$4$170 ==.
                                   3903 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:396: if (value == 1)
      000D2E BD 01 12         [24] 3904 	cjne	r5,#0x01,00129$
      000D31 BE 00 0F         [24] 3905 	cjne	r6,#0x00,00129$
                           000C4C  3906 	C$lab6.c$398$5$172 ==.
                                   3907 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:398: ANGLE_PW -= 30;
      000D34 E5 4A            [12] 3908 	mov	a,_ANGLE_PW
      000D36 24 E2            [12] 3909 	add	a,#0xE2
      000D38 F5 4A            [12] 3910 	mov	_ANGLE_PW,a
      000D3A E5 4B            [12] 3911 	mov	a,(_ANGLE_PW + 1)
      000D3C 34 FF            [12] 3912 	addc	a,#0xFF
      000D3E F5 4B            [12] 3913 	mov	(_ANGLE_PW + 1),a
      000D40 02 0B EB         [24] 3914 	ljmp	00150$
      000D43                       3915 00129$:
                           000C5B  3916 	C$lab6.c$400$4$170 ==.
                                   3917 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:400: else if (value==2)
      000D43 90 00 5B         [24] 3918 	mov	dptr,#_Angle_cal_value_1_162
      000D46 E0               [24] 3919 	movx	a,@dptr
      000D47 FD               [12] 3920 	mov	r5,a
      000D48 A3               [24] 3921 	inc	dptr
      000D49 E0               [24] 3922 	movx	a,@dptr
      000D4A FE               [12] 3923 	mov	r6,a
      000D4B BD 02 11         [24] 3924 	cjne	r5,#0x02,00126$
      000D4E BE 00 0E         [24] 3925 	cjne	r6,#0x00,00126$
                           000C69  3926 	C$lab6.c$402$5$173 ==.
                                   3927 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:402: ANGLE_PW += 30;
      000D51 74 1E            [12] 3928 	mov	a,#0x1E
      000D53 25 4A            [12] 3929 	add	a,_ANGLE_PW
      000D55 F5 4A            [12] 3930 	mov	_ANGLE_PW,a
      000D57 E4               [12] 3931 	clr	a
      000D58 35 4B            [12] 3932 	addc	a,(_ANGLE_PW + 1)
      000D5A F5 4B            [12] 3933 	mov	(_ANGLE_PW + 1),a
      000D5C 02 0B EB         [24] 3934 	ljmp	00150$
      000D5F                       3935 00126$:
                           000C77  3936 	C$lab6.c$404$4$170 ==.
                                   3937 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:404: else if (value == 3)
      000D5F 90 00 5B         [24] 3938 	mov	dptr,#_Angle_cal_value_1_162
      000D62 E0               [24] 3939 	movx	a,@dptr
      000D63 FD               [12] 3940 	mov	r5,a
      000D64 A3               [24] 3941 	inc	dptr
      000D65 E0               [24] 3942 	movx	a,@dptr
      000D66 FE               [12] 3943 	mov	r6,a
      000D67 BD 03 05         [24] 3944 	cjne	r5,#0x03,00242$
      000D6A BE 00 02         [24] 3945 	cjne	r6,#0x00,00242$
      000D6D 80 03            [24] 3946 	sjmp	00243$
      000D6F                       3947 00242$:
      000D6F 02 0B EB         [24] 3948 	ljmp	00150$
      000D72                       3949 00243$:
                           000C8A  3950 	C$lab6.c$406$5$174 ==.
                                   3951 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:406: times++;
      000D72 90 00 5D         [24] 3952 	mov	dptr,#_Angle_cal_times_1_162
      000D75 E0               [24] 3953 	movx	a,@dptr
      000D76 24 01            [12] 3954 	add	a,#0x01
      000D78 F0               [24] 3955 	movx	@dptr,a
      000D79 A3               [24] 3956 	inc	dptr
      000D7A E0               [24] 3957 	movx	a,@dptr
      000D7B 34 00            [12] 3958 	addc	a,#0x00
      000D7D F0               [24] 3959 	movx	@dptr,a
                           000C96  3960 	C$lab6.c$407$5$174 ==.
                                   3961 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:407: value=0;
      000D7E 90 00 5B         [24] 3962 	mov	dptr,#_Angle_cal_value_1_162
      000D81 E4               [12] 3963 	clr	a
      000D82 F0               [24] 3964 	movx	@dptr,a
      000D83 A3               [24] 3965 	inc	dptr
      000D84 F0               [24] 3966 	movx	@dptr,a
                           000C9D  3967 	C$lab6.c$408$5$174 ==.
                                   3968 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:408: st=0;
      000D85 7F 00            [12] 3969 	mov	r7,#0x00
                           000C9F  3970 	C$lab6.c$409$5$174 ==.
                                   3971 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:409: PW_CENTER_ANGLE = ANGLE_PW;
      000D87 85 4A 42         [24] 3972 	mov	_PW_CENTER_ANGLE,_ANGLE_PW
      000D8A 85 4B 43         [24] 3973 	mov	(_PW_CENTER_ANGLE + 1),(_ANGLE_PW + 1)
      000D8D 02 0B EB         [24] 3974 	ljmp	00150$
      000D90                       3975 00144$:
                           000CA8  3976 	C$lab6.c$414$4$175 ==.
                                   3977 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:414: if (value==0)
      000D90 90 00 5B         [24] 3978 	mov	dptr,#_Angle_cal_value_1_162
      000D93 E0               [24] 3979 	movx	a,@dptr
      000D94 FD               [12] 3980 	mov	r5,a
      000D95 A3               [24] 3981 	inc	dptr
      000D96 E0               [24] 3982 	movx	a,@dptr
      000D97 FE               [12] 3983 	mov	r6,a
      000D98 4D               [12] 3984 	orl	a,r5
      000D99 70 27            [24] 3985 	jnz	00134$
                           000CB3  3986 	C$lab6.c$416$5$176 ==.
                                   3987 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:416: lcd_clear();
      000D9B C0 07            [24] 3988 	push	ar7
      000D9D 12 01 C9         [24] 3989 	lcall	_lcd_clear
                           000CB8  3990 	C$lab6.c$417$5$176 ==.
                                   3991 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:417: lcd_print("Now calibrating Max_PW DOWN ANGLE");
      000DA0 74 8F            [12] 3992 	mov	a,#___str_17
      000DA2 C0 E0            [24] 3993 	push	acc
      000DA4 74 1D            [12] 3994 	mov	a,#(___str_17 >> 8)
      000DA6 C0 E0            [24] 3995 	push	acc
      000DA8 74 80            [12] 3996 	mov	a,#0x80
      000DAA C0 E0            [24] 3997 	push	acc
      000DAC 12 01 44         [24] 3998 	lcall	_lcd_print
      000DAF 15 81            [12] 3999 	dec	sp
      000DB1 15 81            [12] 4000 	dec	sp
      000DB3 15 81            [12] 4001 	dec	sp
      000DB5 D0 07            [24] 4002 	pop	ar7
                           000CCF  4003 	C$lab6.c$418$5$176 ==.
                                   4004 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:418: if (st == 0) ANGLE_PW = PW_DOWN_ANGLE;
      000DB7 EF               [12] 4005 	mov	a,r7
      000DB8 70 06            [24] 4006 	jnz	00132$
      000DBA 85 44 4A         [24] 4007 	mov	_ANGLE_PW,_PW_DOWN_ANGLE
      000DBD 85 45 4B         [24] 4008 	mov	(_ANGLE_PW + 1),(_PW_DOWN_ANGLE + 1)
      000DC0                       4009 00132$:
                           000CD8  4010 	C$lab6.c$419$5$176 ==.
                                   4011 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:419: st=1;
      000DC0 7F 01            [12] 4012 	mov	r7,#0x01
      000DC2                       4013 00134$:
                           000CDA  4014 	C$lab6.c$421$4$175 ==.
                                   4015 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:421: value = kpd_input(1);
      000DC2 75 82 01         [24] 4016 	mov	dpl,#0x01
      000DC5 C0 07            [24] 4017 	push	ar7
      000DC7 12 02 81         [24] 4018 	lcall	_kpd_input
      000DCA AD 82            [24] 4019 	mov	r5,dpl
      000DCC AE 83            [24] 4020 	mov	r6,dph
      000DCE D0 07            [24] 4021 	pop	ar7
      000DD0 90 00 5B         [24] 4022 	mov	dptr,#_Angle_cal_value_1_162
      000DD3 ED               [12] 4023 	mov	a,r5
      000DD4 F0               [24] 4024 	movx	@dptr,a
      000DD5 EE               [12] 4025 	mov	a,r6
      000DD6 A3               [24] 4026 	inc	dptr
      000DD7 F0               [24] 4027 	movx	@dptr,a
                           000CF0  4028 	C$lab6.c$422$4$175 ==.
                                   4029 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:422: if (value == 1)
      000DD8 BD 01 12         [24] 4030 	cjne	r5,#0x01,00141$
      000DDB BE 00 0F         [24] 4031 	cjne	r6,#0x00,00141$
                           000CF6  4032 	C$lab6.c$424$5$177 ==.
                                   4033 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:424: ANGLE_PW -= 30;
      000DDE E5 4A            [12] 4034 	mov	a,_ANGLE_PW
      000DE0 24 E2            [12] 4035 	add	a,#0xE2
      000DE2 F5 4A            [12] 4036 	mov	_ANGLE_PW,a
      000DE4 E5 4B            [12] 4037 	mov	a,(_ANGLE_PW + 1)
      000DE6 34 FF            [12] 4038 	addc	a,#0xFF
      000DE8 F5 4B            [12] 4039 	mov	(_ANGLE_PW + 1),a
      000DEA 02 0B EB         [24] 4040 	ljmp	00150$
      000DED                       4041 00141$:
                           000D05  4042 	C$lab6.c$426$4$175 ==.
                                   4043 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:426: else if (value==2)
      000DED 90 00 5B         [24] 4044 	mov	dptr,#_Angle_cal_value_1_162
      000DF0 E0               [24] 4045 	movx	a,@dptr
      000DF1 FD               [12] 4046 	mov	r5,a
      000DF2 A3               [24] 4047 	inc	dptr
      000DF3 E0               [24] 4048 	movx	a,@dptr
      000DF4 FE               [12] 4049 	mov	r6,a
      000DF5 BD 02 11         [24] 4050 	cjne	r5,#0x02,00138$
      000DF8 BE 00 0E         [24] 4051 	cjne	r6,#0x00,00138$
                           000D13  4052 	C$lab6.c$428$5$178 ==.
                                   4053 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:428: ANGLE_PW += 30;
      000DFB 74 1E            [12] 4054 	mov	a,#0x1E
      000DFD 25 4A            [12] 4055 	add	a,_ANGLE_PW
      000DFF F5 4A            [12] 4056 	mov	_ANGLE_PW,a
      000E01 E4               [12] 4057 	clr	a
      000E02 35 4B            [12] 4058 	addc	a,(_ANGLE_PW + 1)
      000E04 F5 4B            [12] 4059 	mov	(_ANGLE_PW + 1),a
      000E06 02 0B EB         [24] 4060 	ljmp	00150$
      000E09                       4061 00138$:
                           000D21  4062 	C$lab6.c$430$4$175 ==.
                                   4063 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:430: else if (value == 3)
      000E09 90 00 5B         [24] 4064 	mov	dptr,#_Angle_cal_value_1_162
      000E0C E0               [24] 4065 	movx	a,@dptr
      000E0D FD               [12] 4066 	mov	r5,a
      000E0E A3               [24] 4067 	inc	dptr
      000E0F E0               [24] 4068 	movx	a,@dptr
      000E10 FE               [12] 4069 	mov	r6,a
      000E11 BD 03 05         [24] 4070 	cjne	r5,#0x03,00250$
      000E14 BE 00 02         [24] 4071 	cjne	r6,#0x00,00250$
      000E17 80 03            [24] 4072 	sjmp	00251$
      000E19                       4073 00250$:
      000E19 02 0B EB         [24] 4074 	ljmp	00150$
      000E1C                       4075 00251$:
                           000D34  4076 	C$lab6.c$432$5$179 ==.
                                   4077 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:432: PW_DOWN_ANGLE = ANGLE_PW;
      000E1C 85 4A 44         [24] 4078 	mov	_PW_DOWN_ANGLE,_ANGLE_PW
      000E1F 85 4B 45         [24] 4079 	mov	(_PW_DOWN_ANGLE + 1),(_ANGLE_PW + 1)
                           000D3A  4080 	C$lab6.c$433$5$179 ==.
                                   4081 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:433: return;
                           000D3A  4082 	C$lab6.c$438$1$162 ==.
                           000D3A  4083 	XG$Angle_cal$0$0 ==.
      000E22 22               [24] 4084 	ret
                                   4085 ;------------------------------------------------------------
                                   4086 ;Allocation info for local variables in function 'Thrust_cal'
                                   4087 ;------------------------------------------------------------
                                   4088 ;st                        Allocated to registers r7 
                                   4089 ;value                     Allocated with name '_Thrust_cal_value_1_181'
                                   4090 ;times                     Allocated with name '_Thrust_cal_times_1_181'
                                   4091 ;------------------------------------------------------------
                           000D3B  4092 	G$Thrust_cal$0$0 ==.
                           000D3B  4093 	C$lab6.c$440$1$162 ==.
                                   4094 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:440: void Thrust_cal(void)
                                   4095 ;	-----------------------------------------
                                   4096 ;	 function Thrust_cal
                                   4097 ;	-----------------------------------------
      000E23                       4098 _Thrust_cal:
                           000D3B  4099 	C$lab6.c$443$1$162 ==.
                                   4100 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:443: __xdata int value =0;
      000E23 90 00 5F         [24] 4101 	mov	dptr,#_Thrust_cal_value_1_181
      000E26 E4               [12] 4102 	clr	a
      000E27 F0               [24] 4103 	movx	@dptr,a
      000E28 A3               [24] 4104 	inc	dptr
      000E29 F0               [24] 4105 	movx	@dptr,a
                           000D42  4106 	C$lab6.c$445$1$181 ==.
                                   4107 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:445: count =0;
      000E2A F5 32            [12] 4108 	mov	_count,a
      000E2C F5 33            [12] 4109 	mov	(_count + 1),a
                           000D46  4110 	C$lab6.c$446$1$181 ==.
                                   4111 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:446: lcd_clear();
      000E2E 12 01 C9         [24] 4112 	lcall	_lcd_clear
                           000D49  4113 	C$lab6.c$447$1$181 ==.
                                   4114 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:447: lcd_print("Thrust Calibration");
      000E31 74 B1            [12] 4115 	mov	a,#___str_18
      000E33 C0 E0            [24] 4116 	push	acc
      000E35 74 1D            [12] 4117 	mov	a,#(___str_18 >> 8)
      000E37 C0 E0            [24] 4118 	push	acc
      000E39 74 80            [12] 4119 	mov	a,#0x80
      000E3B C0 E0            [24] 4120 	push	acc
      000E3D 12 01 44         [24] 4121 	lcall	_lcd_print
      000E40 15 81            [12] 4122 	dec	sp
      000E42 15 81            [12] 4123 	dec	sp
      000E44 15 81            [12] 4124 	dec	sp
                           000D5E  4125 	C$lab6.c$448$1$181 ==.
                                   4126 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:448: while (count < 50);
      000E46                       4127 00101$:
      000E46 C3               [12] 4128 	clr	c
      000E47 E5 32            [12] 4129 	mov	a,_count
      000E49 94 32            [12] 4130 	subb	a,#0x32
      000E4B E5 33            [12] 4131 	mov	a,(_count + 1)
      000E4D 64 80            [12] 4132 	xrl	a,#0x80
      000E4F 94 80            [12] 4133 	subb	a,#0x80
      000E51 40 F3            [24] 4134 	jc	00101$
                           000D6B  4135 	C$lab6.c$449$1$181 ==.
                                   4136 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:449: lcd_clear();
      000E53 12 01 C9         [24] 4137 	lcall	_lcd_clear
                           000D6E  4138 	C$lab6.c$453$2$182 ==.
                                   4139 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:453: count = 0;
      000E56 E4               [12] 4140 	clr	a
      000E57 F5 32            [12] 4141 	mov	_count,a
      000E59 F5 33            [12] 4142 	mov	(_count + 1),a
                           000D73  4143 	C$lab6.c$454$2$182 ==.
                                   4144 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:454: while (count < 1);
      000E5B                       4145 00104$:
      000E5B C3               [12] 4146 	clr	c
      000E5C E5 32            [12] 4147 	mov	a,_count
      000E5E 94 01            [12] 4148 	subb	a,#0x01
      000E60 E5 33            [12] 4149 	mov	a,(_count + 1)
      000E62 64 80            [12] 4150 	xrl	a,#0x80
      000E64 94 80            [12] 4151 	subb	a,#0x80
      000E66 40 F3            [24] 4152 	jc	00104$
                           000D80  4153 	C$lab6.c$455$2$182 ==.
                                   4154 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:455: lcd_clear();
      000E68 12 01 C9         [24] 4155 	lcall	_lcd_clear
                           000D83  4156 	C$lab6.c$456$2$182 ==.
                                   4157 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:456: lcd_print("go left: press 1\n go right: press 2\nPress * for next screen");
      000E6B 74 B0            [12] 4158 	mov	a,#___str_9
      000E6D C0 E0            [24] 4159 	push	acc
      000E6F 74 1C            [12] 4160 	mov	a,#(___str_9 >> 8)
      000E71 C0 E0            [24] 4161 	push	acc
      000E73 74 80            [12] 4162 	mov	a,#0x80
      000E75 C0 E0            [24] 4163 	push	acc
      000E77 12 01 44         [24] 4164 	lcall	_lcd_print
      000E7A 15 81            [12] 4165 	dec	sp
      000E7C 15 81            [12] 4166 	dec	sp
      000E7E 15 81            [12] 4167 	dec	sp
                           000D98  4168 	C$lab6.c$457$2$182 ==.
                                   4169 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:457: start();
      000E80 12 13 60         [24] 4170 	lcall	_start
                           000D9B  4171 	C$lab6.c$458$2$182 ==.
                                   4172 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:458: lcd_clear();
      000E83 12 01 C9         [24] 4173 	lcall	_lcd_clear
                           000D9E  4174 	C$lab6.c$459$2$182 ==.
                                   4175 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:459: lcd_print("\n confirm: press 3\n press * to begin");
      000E86 74 EC            [12] 4176 	mov	a,#___str_10
      000E88 C0 E0            [24] 4177 	push	acc
      000E8A 74 1C            [12] 4178 	mov	a,#(___str_10 >> 8)
      000E8C C0 E0            [24] 4179 	push	acc
      000E8E 74 80            [12] 4180 	mov	a,#0x80
      000E90 C0 E0            [24] 4181 	push	acc
      000E92 12 01 44         [24] 4182 	lcall	_lcd_print
      000E95 15 81            [12] 4183 	dec	sp
      000E97 15 81            [12] 4184 	dec	sp
      000E99 15 81            [12] 4185 	dec	sp
                           000DB3  4186 	C$lab6.c$460$2$182 ==.
                                   4187 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:460: start();
      000E9B 12 13 60         [24] 4188 	lcall	_start
                           000DB6  4189 	C$lab6.c$461$2$182 ==.
                                   4190 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:461: st =0;
      000E9E 7F 00            [12] 4191 	mov	r7,#0x00
                           000DB8  4192 	C$lab6.c$462$2$182 ==.
                                   4193 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:462: times=0;
      000EA0 90 00 61         [24] 4194 	mov	dptr,#_Thrust_cal_times_1_181
      000EA3 E4               [12] 4195 	clr	a
      000EA4 F0               [24] 4196 	movx	@dptr,a
      000EA5 A3               [24] 4197 	inc	dptr
      000EA6 F0               [24] 4198 	movx	@dptr,a
                           000DBF  4199 	C$lab6.c$463$5$185 ==.
                                   4200 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:463: while (1)
      000EA7                       4201 00153$:
                           000DBF  4202 	C$lab6.c$465$3$183 ==.
                                   4203 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:465: printf("\r\n %u",RTHRUST_PW);
      000EA7 C0 07            [24] 4204 	push	ar7
      000EA9 C0 4E            [24] 4205 	push	_RTHRUST_PW
      000EAB C0 4F            [24] 4206 	push	(_RTHRUST_PW + 1)
      000EAD 74 11            [12] 4207 	mov	a,#___str_11
      000EAF C0 E0            [24] 4208 	push	acc
      000EB1 74 1D            [12] 4209 	mov	a,#(___str_11 >> 8)
      000EB3 C0 E0            [24] 4210 	push	acc
      000EB5 74 80            [12] 4211 	mov	a,#0x80
      000EB7 C0 E0            [24] 4212 	push	acc
      000EB9 12 15 9E         [24] 4213 	lcall	_printf
      000EBC E5 81            [12] 4214 	mov	a,sp
      000EBE 24 FB            [12] 4215 	add	a,#0xfb
      000EC0 F5 81            [12] 4216 	mov	sp,a
      000EC2 D0 07            [24] 4217 	pop	ar7
                           000DDC  4218 	C$lab6.c$466$3$183 ==.
                                   4219 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:466: RTRST_lo_to_hi = 0xFFFF - RTHRUST_PW;
      000EC4 74 FF            [12] 4220 	mov	a,#0xFF
      000EC6 C3               [12] 4221 	clr	c
      000EC7 95 4E            [12] 4222 	subb	a,_RTHRUST_PW
      000EC9 F5 52            [12] 4223 	mov	_RTRST_lo_to_hi,a
      000ECB 74 FF            [12] 4224 	mov	a,#0xFF
      000ECD 95 4F            [12] 4225 	subb	a,(_RTHRUST_PW + 1)
      000ECF F5 53            [12] 4226 	mov	(_RTRST_lo_to_hi + 1),a
                           000DE9  4227 	C$lab6.c$467$3$183 ==.
                                   4228 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:467: LTRST_lo_to_hi = 0xFFFF - LTHRUST_PW;
      000ED1 74 FF            [12] 4229 	mov	a,#0xFF
      000ED3 C3               [12] 4230 	clr	c
      000ED4 95 50            [12] 4231 	subb	a,_LTHRUST_PW
      000ED6 F5 54            [12] 4232 	mov	_LTRST_lo_to_hi,a
      000ED8 74 FF            [12] 4233 	mov	a,#0xFF
      000EDA 95 51            [12] 4234 	subb	a,(_LTHRUST_PW + 1)
      000EDC F5 55            [12] 4235 	mov	(_LTRST_lo_to_hi + 1),a
                           000DF6  4236 	C$lab6.c$468$3$183 ==.
                                   4237 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:468: PCA0CP2 = RTRST_lo_to_hi;
      000EDE 85 52 EC         [24] 4238 	mov	((_PCA0CP2 >> 0) & 0xFF),_RTRST_lo_to_hi
      000EE1 85 53 FC         [24] 4239 	mov	((_PCA0CP2 >> 8) & 0xFF),(_RTRST_lo_to_hi + 1)
                           000DFC  4240 	C$lab6.c$469$3$183 ==.
                                   4241 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:469: PCA0CP3 = LTRST_lo_to_hi;
      000EE4 85 54 ED         [24] 4242 	mov	((_PCA0CP3 >> 0) & 0xFF),_LTRST_lo_to_hi
      000EE7 85 55 FD         [24] 4243 	mov	((_PCA0CP3 >> 8) & 0xFF),(_LTRST_lo_to_hi + 1)
                           000E02  4244 	C$lab6.c$473$3$183 ==.
                                   4245 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:473: if (times == 0 )
      000EEA 90 00 61         [24] 4246 	mov	dptr,#_Thrust_cal_times_1_181
      000EED E0               [24] 4247 	movx	a,@dptr
      000EEE FD               [12] 4248 	mov	r5,a
      000EEF A3               [24] 4249 	inc	dptr
      000EF0 E0               [24] 4250 	movx	a,@dptr
      000EF1 FE               [12] 4251 	mov	r6,a
      000EF2 4D               [12] 4252 	orl	a,r5
      000EF3 60 03            [24] 4253 	jz	00231$
      000EF5 02 0F BF         [24] 4254 	ljmp	00150$
      000EF8                       4255 00231$:
                           000E10  4256 	C$lab6.c$475$4$184 ==.
                                   4257 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:475: if (value ==0)
      000EF8 90 00 5F         [24] 4258 	mov	dptr,#_Thrust_cal_value_1_181
      000EFB E0               [24] 4259 	movx	a,@dptr
      000EFC FD               [12] 4260 	mov	r5,a
      000EFD A3               [24] 4261 	inc	dptr
      000EFE E0               [24] 4262 	movx	a,@dptr
      000EFF FE               [12] 4263 	mov	r6,a
      000F00 4D               [12] 4264 	orl	a,r5
      000F01 70 2D            [24] 4265 	jnz	00110$
                           000E1B  4266 	C$lab6.c$477$5$185 ==.
                                   4267 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:477: lcd_clear();
      000F03 C0 07            [24] 4268 	push	ar7
      000F05 12 01 C9         [24] 4269 	lcall	_lcd_clear
                           000E20  4270 	C$lab6.c$478$5$185 ==.
                                   4271 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:478: lcd_print("Now calibrating Min_PW");
      000F08 74 C4            [12] 4272 	mov	a,#___str_19
      000F0A C0 E0            [24] 4273 	push	acc
      000F0C 74 1D            [12] 4274 	mov	a,#(___str_19 >> 8)
      000F0E C0 E0            [24] 4275 	push	acc
      000F10 74 80            [12] 4276 	mov	a,#0x80
      000F12 C0 E0            [24] 4277 	push	acc
      000F14 12 01 44         [24] 4278 	lcall	_lcd_print
      000F17 15 81            [12] 4279 	dec	sp
      000F19 15 81            [12] 4280 	dec	sp
      000F1B 15 81            [12] 4281 	dec	sp
      000F1D D0 07            [24] 4282 	pop	ar7
                           000E37  4283 	C$lab6.c$479$5$185 ==.
                                   4284 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:479: if (st ==0)
      000F1F EF               [12] 4285 	mov	a,r7
      000F20 70 0C            [24] 4286 	jnz	00108$
                           000E3A  4287 	C$lab6.c$481$6$186 ==.
                                   4288 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:481: RTHRUST_PW = PW_MIN_THRUST;
      000F22 85 34 4E         [24] 4289 	mov	_RTHRUST_PW,_PW_MIN_THRUST
      000F25 85 35 4F         [24] 4290 	mov	(_RTHRUST_PW + 1),(_PW_MIN_THRUST + 1)
                           000E40  4291 	C$lab6.c$482$6$186 ==.
                                   4292 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:482: LTHRUST_PW = PW_MIN_THRUST;
      000F28 85 34 50         [24] 4293 	mov	_LTHRUST_PW,_PW_MIN_THRUST
      000F2B 85 35 51         [24] 4294 	mov	(_LTHRUST_PW + 1),(_PW_MIN_THRUST + 1)
      000F2E                       4295 00108$:
                           000E46  4296 	C$lab6.c$484$5$185 ==.
                                   4297 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:484: st =1;
      000F2E 7F 01            [12] 4298 	mov	r7,#0x01
      000F30                       4299 00110$:
                           000E48  4300 	C$lab6.c$486$4$184 ==.
                                   4301 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:486: value = kpd_input(1);
      000F30 75 82 01         [24] 4302 	mov	dpl,#0x01
      000F33 C0 07            [24] 4303 	push	ar7
      000F35 12 02 81         [24] 4304 	lcall	_kpd_input
      000F38 AD 82            [24] 4305 	mov	r5,dpl
      000F3A AE 83            [24] 4306 	mov	r6,dph
      000F3C D0 07            [24] 4307 	pop	ar7
      000F3E 90 00 5F         [24] 4308 	mov	dptr,#_Thrust_cal_value_1_181
      000F41 ED               [12] 4309 	mov	a,r5
      000F42 F0               [24] 4310 	movx	@dptr,a
      000F43 EE               [12] 4311 	mov	a,r6
      000F44 A3               [24] 4312 	inc	dptr
      000F45 F0               [24] 4313 	movx	@dptr,a
                           000E5E  4314 	C$lab6.c$487$4$184 ==.
                                   4315 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:487: if (value == 1)
      000F46 BD 01 1D         [24] 4316 	cjne	r5,#0x01,00117$
      000F49 BE 00 1A         [24] 4317 	cjne	r6,#0x00,00117$
                           000E64  4318 	C$lab6.c$489$5$187 ==.
                                   4319 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:489: RTHRUST_PW -= 30;
      000F4C E5 4E            [12] 4320 	mov	a,_RTHRUST_PW
      000F4E 24 E2            [12] 4321 	add	a,#0xE2
      000F50 F5 4E            [12] 4322 	mov	_RTHRUST_PW,a
      000F52 E5 4F            [12] 4323 	mov	a,(_RTHRUST_PW + 1)
      000F54 34 FF            [12] 4324 	addc	a,#0xFF
      000F56 F5 4F            [12] 4325 	mov	(_RTHRUST_PW + 1),a
                           000E70  4326 	C$lab6.c$490$5$187 ==.
                                   4327 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:490: LTHRUST_PW += 30;
      000F58 74 1E            [12] 4328 	mov	a,#0x1E
      000F5A 25 50            [12] 4329 	add	a,_LTHRUST_PW
      000F5C F5 50            [12] 4330 	mov	_LTHRUST_PW,a
      000F5E E4               [12] 4331 	clr	a
      000F5F 35 51            [12] 4332 	addc	a,(_LTHRUST_PW + 1)
      000F61 F5 51            [12] 4333 	mov	(_LTHRUST_PW + 1),a
      000F63 02 0E A7         [24] 4334 	ljmp	00153$
      000F66                       4335 00117$:
                           000E7E  4336 	C$lab6.c$492$4$184 ==.
                                   4337 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:492: else if (value==2)
      000F66 90 00 5F         [24] 4338 	mov	dptr,#_Thrust_cal_value_1_181
      000F69 E0               [24] 4339 	movx	a,@dptr
      000F6A FD               [12] 4340 	mov	r5,a
      000F6B A3               [24] 4341 	inc	dptr
      000F6C E0               [24] 4342 	movx	a,@dptr
      000F6D FE               [12] 4343 	mov	r6,a
      000F6E BD 02 1D         [24] 4344 	cjne	r5,#0x02,00114$
      000F71 BE 00 1A         [24] 4345 	cjne	r6,#0x00,00114$
                           000E8C  4346 	C$lab6.c$494$5$188 ==.
                                   4347 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:494: RTHRUST_PW += 30;
      000F74 74 1E            [12] 4348 	mov	a,#0x1E
      000F76 25 4E            [12] 4349 	add	a,_RTHRUST_PW
      000F78 F5 4E            [12] 4350 	mov	_RTHRUST_PW,a
      000F7A E4               [12] 4351 	clr	a
      000F7B 35 4F            [12] 4352 	addc	a,(_RTHRUST_PW + 1)
      000F7D F5 4F            [12] 4353 	mov	(_RTHRUST_PW + 1),a
                           000E97  4354 	C$lab6.c$495$5$188 ==.
                                   4355 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:495: LTHRUST_PW -= 30;
      000F7F E5 50            [12] 4356 	mov	a,_LTHRUST_PW
      000F81 24 E2            [12] 4357 	add	a,#0xE2
      000F83 F5 50            [12] 4358 	mov	_LTHRUST_PW,a
      000F85 E5 51            [12] 4359 	mov	a,(_LTHRUST_PW + 1)
      000F87 34 FF            [12] 4360 	addc	a,#0xFF
      000F89 F5 51            [12] 4361 	mov	(_LTHRUST_PW + 1),a
      000F8B 02 0E A7         [24] 4362 	ljmp	00153$
      000F8E                       4363 00114$:
                           000EA6  4364 	C$lab6.c$497$4$184 ==.
                                   4365 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:497: else if (value == 3)
      000F8E 90 00 5F         [24] 4366 	mov	dptr,#_Thrust_cal_value_1_181
      000F91 E0               [24] 4367 	movx	a,@dptr
      000F92 FD               [12] 4368 	mov	r5,a
      000F93 A3               [24] 4369 	inc	dptr
      000F94 E0               [24] 4370 	movx	a,@dptr
      000F95 FE               [12] 4371 	mov	r6,a
      000F96 BD 03 05         [24] 4372 	cjne	r5,#0x03,00238$
      000F99 BE 00 02         [24] 4373 	cjne	r6,#0x00,00238$
      000F9C 80 03            [24] 4374 	sjmp	00239$
      000F9E                       4375 00238$:
      000F9E 02 0E A7         [24] 4376 	ljmp	00153$
      000FA1                       4377 00239$:
                           000EB9  4378 	C$lab6.c$499$5$189 ==.
                                   4379 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:499: times++;
      000FA1 90 00 61         [24] 4380 	mov	dptr,#_Thrust_cal_times_1_181
      000FA4 E0               [24] 4381 	movx	a,@dptr
      000FA5 24 01            [12] 4382 	add	a,#0x01
      000FA7 F0               [24] 4383 	movx	@dptr,a
      000FA8 A3               [24] 4384 	inc	dptr
      000FA9 E0               [24] 4385 	movx	a,@dptr
      000FAA 34 00            [12] 4386 	addc	a,#0x00
      000FAC F0               [24] 4387 	movx	@dptr,a
                           000EC5  4388 	C$lab6.c$500$5$189 ==.
                                   4389 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:500: value =0;
      000FAD 90 00 5F         [24] 4390 	mov	dptr,#_Thrust_cal_value_1_181
      000FB0 E4               [12] 4391 	clr	a
      000FB1 F0               [24] 4392 	movx	@dptr,a
      000FB2 A3               [24] 4393 	inc	dptr
      000FB3 F0               [24] 4394 	movx	@dptr,a
                           000ECC  4395 	C$lab6.c$501$5$189 ==.
                                   4396 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:501: st=0;
      000FB4 7F 00            [12] 4397 	mov	r7,#0x00
                           000ECE  4398 	C$lab6.c$502$5$189 ==.
                                   4399 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:502: PW_MIN_THRUST = RTHRUST_PW;
      000FB6 85 4E 34         [24] 4400 	mov	_PW_MIN_THRUST,_RTHRUST_PW
      000FB9 85 4F 35         [24] 4401 	mov	(_PW_MIN_THRUST + 1),(_RTHRUST_PW + 1)
      000FBC 02 0E A7         [24] 4402 	ljmp	00153$
      000FBF                       4403 00150$:
                           000ED7  4404 	C$lab6.c$506$3$183 ==.
                                   4405 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:506: else if (times ==1)
      000FBF 90 00 61         [24] 4406 	mov	dptr,#_Thrust_cal_times_1_181
      000FC2 E0               [24] 4407 	movx	a,@dptr
      000FC3 FD               [12] 4408 	mov	r5,a
      000FC4 A3               [24] 4409 	inc	dptr
      000FC5 E0               [24] 4410 	movx	a,@dptr
      000FC6 FE               [12] 4411 	mov	r6,a
      000FC7 BD 01 05         [24] 4412 	cjne	r5,#0x01,00240$
      000FCA BE 00 02         [24] 4413 	cjne	r6,#0x00,00240$
      000FCD 80 03            [24] 4414 	sjmp	00241$
      000FCF                       4415 00240$:
      000FCF 02 10 99         [24] 4416 	ljmp	00147$
      000FD2                       4417 00241$:
                           000EEA  4418 	C$lab6.c$508$4$190 ==.
                                   4419 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:508: if (value ==0)
      000FD2 90 00 5F         [24] 4420 	mov	dptr,#_Thrust_cal_value_1_181
      000FD5 E0               [24] 4421 	movx	a,@dptr
      000FD6 FD               [12] 4422 	mov	r5,a
      000FD7 A3               [24] 4423 	inc	dptr
      000FD8 E0               [24] 4424 	movx	a,@dptr
      000FD9 FE               [12] 4425 	mov	r6,a
      000FDA 4D               [12] 4426 	orl	a,r5
      000FDB 70 2D            [24] 4427 	jnz	00122$
                           000EF5  4428 	C$lab6.c$510$5$191 ==.
                                   4429 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:510: lcd_clear();
      000FDD C0 07            [24] 4430 	push	ar7
      000FDF 12 01 C9         [24] 4431 	lcall	_lcd_clear
                           000EFA  4432 	C$lab6.c$511$5$191 ==.
                                   4433 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:511: lcd_print("Now calibrating Min_PW");
      000FE2 74 C4            [12] 4434 	mov	a,#___str_19
      000FE4 C0 E0            [24] 4435 	push	acc
      000FE6 74 1D            [12] 4436 	mov	a,#(___str_19 >> 8)
      000FE8 C0 E0            [24] 4437 	push	acc
      000FEA 74 80            [12] 4438 	mov	a,#0x80
      000FEC C0 E0            [24] 4439 	push	acc
      000FEE 12 01 44         [24] 4440 	lcall	_lcd_print
      000FF1 15 81            [12] 4441 	dec	sp
      000FF3 15 81            [12] 4442 	dec	sp
      000FF5 15 81            [12] 4443 	dec	sp
      000FF7 D0 07            [24] 4444 	pop	ar7
                           000F11  4445 	C$lab6.c$512$5$191 ==.
                                   4446 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:512: if (st ==0)
      000FF9 EF               [12] 4447 	mov	a,r7
      000FFA 70 0C            [24] 4448 	jnz	00120$
                           000F14  4449 	C$lab6.c$514$6$192 ==.
                                   4450 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:514: RTHRUST_PW = PW_NUET_THRUST;
      000FFC 85 36 4E         [24] 4451 	mov	_RTHRUST_PW,_PW_NUET_THRUST
      000FFF 85 37 4F         [24] 4452 	mov	(_RTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
                           000F1A  4453 	C$lab6.c$515$6$192 ==.
                                   4454 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:515: LTHRUST_PW = PW_NUET_THRUST;
      001002 85 36 50         [24] 4455 	mov	_LTHRUST_PW,_PW_NUET_THRUST
      001005 85 37 51         [24] 4456 	mov	(_LTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
      001008                       4457 00120$:
                           000F20  4458 	C$lab6.c$517$5$191 ==.
                                   4459 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:517: st =1;
      001008 7F 01            [12] 4460 	mov	r7,#0x01
      00100A                       4461 00122$:
                           000F22  4462 	C$lab6.c$519$4$190 ==.
                                   4463 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:519: value = kpd_input(1);
      00100A 75 82 01         [24] 4464 	mov	dpl,#0x01
      00100D C0 07            [24] 4465 	push	ar7
      00100F 12 02 81         [24] 4466 	lcall	_kpd_input
      001012 AD 82            [24] 4467 	mov	r5,dpl
      001014 AE 83            [24] 4468 	mov	r6,dph
      001016 D0 07            [24] 4469 	pop	ar7
      001018 90 00 5F         [24] 4470 	mov	dptr,#_Thrust_cal_value_1_181
      00101B ED               [12] 4471 	mov	a,r5
      00101C F0               [24] 4472 	movx	@dptr,a
      00101D EE               [12] 4473 	mov	a,r6
      00101E A3               [24] 4474 	inc	dptr
      00101F F0               [24] 4475 	movx	@dptr,a
                           000F38  4476 	C$lab6.c$520$4$190 ==.
                                   4477 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:520: if (value == 1)
      001020 BD 01 1D         [24] 4478 	cjne	r5,#0x01,00129$
      001023 BE 00 1A         [24] 4479 	cjne	r6,#0x00,00129$
                           000F3E  4480 	C$lab6.c$522$5$193 ==.
                                   4481 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:522: RTHRUST_PW -= 30;
      001026 E5 4E            [12] 4482 	mov	a,_RTHRUST_PW
      001028 24 E2            [12] 4483 	add	a,#0xE2
      00102A F5 4E            [12] 4484 	mov	_RTHRUST_PW,a
      00102C E5 4F            [12] 4485 	mov	a,(_RTHRUST_PW + 1)
      00102E 34 FF            [12] 4486 	addc	a,#0xFF
      001030 F5 4F            [12] 4487 	mov	(_RTHRUST_PW + 1),a
                           000F4A  4488 	C$lab6.c$523$5$193 ==.
                                   4489 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:523: LTHRUST_PW += 30;
      001032 74 1E            [12] 4490 	mov	a,#0x1E
      001034 25 50            [12] 4491 	add	a,_LTHRUST_PW
      001036 F5 50            [12] 4492 	mov	_LTHRUST_PW,a
      001038 E4               [12] 4493 	clr	a
      001039 35 51            [12] 4494 	addc	a,(_LTHRUST_PW + 1)
      00103B F5 51            [12] 4495 	mov	(_LTHRUST_PW + 1),a
      00103D 02 0E A7         [24] 4496 	ljmp	00153$
      001040                       4497 00129$:
                           000F58  4498 	C$lab6.c$525$4$190 ==.
                                   4499 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:525: else if (value==2)
      001040 90 00 5F         [24] 4500 	mov	dptr,#_Thrust_cal_value_1_181
      001043 E0               [24] 4501 	movx	a,@dptr
      001044 FD               [12] 4502 	mov	r5,a
      001045 A3               [24] 4503 	inc	dptr
      001046 E0               [24] 4504 	movx	a,@dptr
      001047 FE               [12] 4505 	mov	r6,a
      001048 BD 02 1D         [24] 4506 	cjne	r5,#0x02,00126$
      00104B BE 00 1A         [24] 4507 	cjne	r6,#0x00,00126$
                           000F66  4508 	C$lab6.c$527$5$194 ==.
                                   4509 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:527: RTHRUST_PW += 30;
      00104E 74 1E            [12] 4510 	mov	a,#0x1E
      001050 25 4E            [12] 4511 	add	a,_RTHRUST_PW
      001052 F5 4E            [12] 4512 	mov	_RTHRUST_PW,a
      001054 E4               [12] 4513 	clr	a
      001055 35 4F            [12] 4514 	addc	a,(_RTHRUST_PW + 1)
      001057 F5 4F            [12] 4515 	mov	(_RTHRUST_PW + 1),a
                           000F71  4516 	C$lab6.c$528$5$194 ==.
                                   4517 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:528: LTHRUST_PW -= 30;
      001059 E5 50            [12] 4518 	mov	a,_LTHRUST_PW
      00105B 24 E2            [12] 4519 	add	a,#0xE2
      00105D F5 50            [12] 4520 	mov	_LTHRUST_PW,a
      00105F E5 51            [12] 4521 	mov	a,(_LTHRUST_PW + 1)
      001061 34 FF            [12] 4522 	addc	a,#0xFF
      001063 F5 51            [12] 4523 	mov	(_LTHRUST_PW + 1),a
      001065 02 0E A7         [24] 4524 	ljmp	00153$
      001068                       4525 00126$:
                           000F80  4526 	C$lab6.c$530$4$190 ==.
                                   4527 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:530: else if (value == 3)
      001068 90 00 5F         [24] 4528 	mov	dptr,#_Thrust_cal_value_1_181
      00106B E0               [24] 4529 	movx	a,@dptr
      00106C FD               [12] 4530 	mov	r5,a
      00106D A3               [24] 4531 	inc	dptr
      00106E E0               [24] 4532 	movx	a,@dptr
      00106F FE               [12] 4533 	mov	r6,a
      001070 BD 03 05         [24] 4534 	cjne	r5,#0x03,00248$
      001073 BE 00 02         [24] 4535 	cjne	r6,#0x00,00248$
      001076 80 03            [24] 4536 	sjmp	00249$
      001078                       4537 00248$:
      001078 02 0E A7         [24] 4538 	ljmp	00153$
      00107B                       4539 00249$:
                           000F93  4540 	C$lab6.c$532$5$195 ==.
                                   4541 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:532: times++;
      00107B 90 00 61         [24] 4542 	mov	dptr,#_Thrust_cal_times_1_181
      00107E E0               [24] 4543 	movx	a,@dptr
      00107F 24 01            [12] 4544 	add	a,#0x01
      001081 F0               [24] 4545 	movx	@dptr,a
      001082 A3               [24] 4546 	inc	dptr
      001083 E0               [24] 4547 	movx	a,@dptr
      001084 34 00            [12] 4548 	addc	a,#0x00
      001086 F0               [24] 4549 	movx	@dptr,a
                           000F9F  4550 	C$lab6.c$533$5$195 ==.
                                   4551 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:533: value =0;
      001087 90 00 5F         [24] 4552 	mov	dptr,#_Thrust_cal_value_1_181
      00108A E4               [12] 4553 	clr	a
      00108B F0               [24] 4554 	movx	@dptr,a
      00108C A3               [24] 4555 	inc	dptr
      00108D F0               [24] 4556 	movx	@dptr,a
                           000FA6  4557 	C$lab6.c$534$5$195 ==.
                                   4558 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:534: st=0;
      00108E 7F 00            [12] 4559 	mov	r7,#0x00
                           000FA8  4560 	C$lab6.c$535$5$195 ==.
                                   4561 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:535: PW_NUET_THRUST = RTHRUST_PW;
      001090 85 4E 36         [24] 4562 	mov	_PW_NUET_THRUST,_RTHRUST_PW
      001093 85 4F 37         [24] 4563 	mov	(_PW_NUET_THRUST + 1),(_RTHRUST_PW + 1)
      001096 02 0E A7         [24] 4564 	ljmp	00153$
      001099                       4565 00147$:
                           000FB1  4566 	C$lab6.c$538$3$183 ==.
                                   4567 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:538: else if(times == 2)
      001099 90 00 61         [24] 4568 	mov	dptr,#_Thrust_cal_times_1_181
      00109C E0               [24] 4569 	movx	a,@dptr
      00109D FD               [12] 4570 	mov	r5,a
      00109E A3               [24] 4571 	inc	dptr
      00109F E0               [24] 4572 	movx	a,@dptr
      0010A0 FE               [12] 4573 	mov	r6,a
      0010A1 BD 02 05         [24] 4574 	cjne	r5,#0x02,00250$
      0010A4 BE 00 02         [24] 4575 	cjne	r6,#0x00,00250$
      0010A7 80 03            [24] 4576 	sjmp	00251$
      0010A9                       4577 00250$:
      0010A9 02 11 51         [24] 4578 	ljmp	00144$
      0010AC                       4579 00251$:
                           000FC4  4580 	C$lab6.c$540$4$196 ==.
                                   4581 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:540: if (value==0)
      0010AC 90 00 5F         [24] 4582 	mov	dptr,#_Thrust_cal_value_1_181
      0010AF E0               [24] 4583 	movx	a,@dptr
      0010B0 FD               [12] 4584 	mov	r5,a
      0010B1 A3               [24] 4585 	inc	dptr
      0010B2 E0               [24] 4586 	movx	a,@dptr
      0010B3 FE               [12] 4587 	mov	r6,a
      0010B4 4D               [12] 4588 	orl	a,r5
      0010B5 70 2B            [24] 4589 	jnz	00134$
                           000FCF  4590 	C$lab6.c$542$5$197 ==.
                                   4591 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:542: lcd_clear();
      0010B7 C0 07            [24] 4592 	push	ar7
      0010B9 12 01 C9         [24] 4593 	lcall	_lcd_clear
                           000FD4  4594 	C$lab6.c$543$5$197 ==.
                                   4595 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:543: lcd_print("Now calibrating Max_PW");
      0010BC 74 46            [12] 4596 	mov	a,#___str_14
      0010BE C0 E0            [24] 4597 	push	acc
      0010C0 74 1D            [12] 4598 	mov	a,#(___str_14 >> 8)
      0010C2 C0 E0            [24] 4599 	push	acc
      0010C4 74 80            [12] 4600 	mov	a,#0x80
      0010C6 C0 E0            [24] 4601 	push	acc
      0010C8 12 01 44         [24] 4602 	lcall	_lcd_print
      0010CB 15 81            [12] 4603 	dec	sp
      0010CD 15 81            [12] 4604 	dec	sp
      0010CF 15 81            [12] 4605 	dec	sp
      0010D1 D0 07            [24] 4606 	pop	ar7
                           000FEB  4607 	C$lab6.c$544$5$197 ==.
                                   4608 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:544: if (st == 0)
      0010D3 EF               [12] 4609 	mov	a,r7
      0010D4 70 0C            [24] 4610 	jnz	00134$
                           000FEE  4611 	C$lab6.c$546$6$198 ==.
                                   4612 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:546: RTHRUST_PW = PW_MAX_THRUST;
      0010D6 85 38 4E         [24] 4613 	mov	_RTHRUST_PW,_PW_MAX_THRUST
      0010D9 85 39 4F         [24] 4614 	mov	(_RTHRUST_PW + 1),(_PW_MAX_THRUST + 1)
                           000FF4  4615 	C$lab6.c$547$6$198 ==.
                                   4616 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:547: LTHRUST_PW = PW_MAX_THRUST;
      0010DC 85 38 50         [24] 4617 	mov	_LTHRUST_PW,_PW_MAX_THRUST
      0010DF 85 39 51         [24] 4618 	mov	(_LTHRUST_PW + 1),(_PW_MAX_THRUST + 1)
      0010E2                       4619 00134$:
                           000FFA  4620 	C$lab6.c$551$4$196 ==.
                                   4621 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:551: value = kpd_input(1);
      0010E2 75 82 01         [24] 4622 	mov	dpl,#0x01
      0010E5 C0 07            [24] 4623 	push	ar7
      0010E7 12 02 81         [24] 4624 	lcall	_kpd_input
      0010EA AD 82            [24] 4625 	mov	r5,dpl
      0010EC AE 83            [24] 4626 	mov	r6,dph
      0010EE D0 07            [24] 4627 	pop	ar7
      0010F0 90 00 5F         [24] 4628 	mov	dptr,#_Thrust_cal_value_1_181
      0010F3 ED               [12] 4629 	mov	a,r5
      0010F4 F0               [24] 4630 	movx	@dptr,a
      0010F5 EE               [12] 4631 	mov	a,r6
      0010F6 A3               [24] 4632 	inc	dptr
      0010F7 F0               [24] 4633 	movx	@dptr,a
                           001010  4634 	C$lab6.c$552$4$196 ==.
                                   4635 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:552: if (value == 1)
      0010F8 BD 01 12         [24] 4636 	cjne	r5,#0x01,00141$
      0010FB BE 00 0F         [24] 4637 	cjne	r6,#0x00,00141$
                           001016  4638 	C$lab6.c$554$5$199 ==.
                                   4639 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:554: RTHRUST_PW -= 30;
      0010FE E5 4E            [12] 4640 	mov	a,_RTHRUST_PW
      001100 24 E2            [12] 4641 	add	a,#0xE2
      001102 F5 4E            [12] 4642 	mov	_RTHRUST_PW,a
      001104 E5 4F            [12] 4643 	mov	a,(_RTHRUST_PW + 1)
      001106 34 FF            [12] 4644 	addc	a,#0xFF
      001108 F5 4F            [12] 4645 	mov	(_RTHRUST_PW + 1),a
      00110A 02 0E A7         [24] 4646 	ljmp	00153$
      00110D                       4647 00141$:
                           001025  4648 	C$lab6.c$556$4$196 ==.
                                   4649 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:556: else if (value==2)
      00110D 90 00 5F         [24] 4650 	mov	dptr,#_Thrust_cal_value_1_181
      001110 E0               [24] 4651 	movx	a,@dptr
      001111 FD               [12] 4652 	mov	r5,a
      001112 A3               [24] 4653 	inc	dptr
      001113 E0               [24] 4654 	movx	a,@dptr
      001114 FE               [12] 4655 	mov	r6,a
      001115 BD 02 11         [24] 4656 	cjne	r5,#0x02,00138$
      001118 BE 00 0E         [24] 4657 	cjne	r6,#0x00,00138$
                           001033  4658 	C$lab6.c$558$5$200 ==.
                                   4659 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:558: RTHRUST_PW += 30;
      00111B 74 1E            [12] 4660 	mov	a,#0x1E
      00111D 25 4E            [12] 4661 	add	a,_RTHRUST_PW
      00111F F5 4E            [12] 4662 	mov	_RTHRUST_PW,a
      001121 E4               [12] 4663 	clr	a
      001122 35 4F            [12] 4664 	addc	a,(_RTHRUST_PW + 1)
      001124 F5 4F            [12] 4665 	mov	(_RTHRUST_PW + 1),a
      001126 02 0E A7         [24] 4666 	ljmp	00153$
      001129                       4667 00138$:
                           001041  4668 	C$lab6.c$560$4$196 ==.
                                   4669 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:560: else if (value == 3)
      001129 90 00 5F         [24] 4670 	mov	dptr,#_Thrust_cal_value_1_181
      00112C E0               [24] 4671 	movx	a,@dptr
      00112D FD               [12] 4672 	mov	r5,a
      00112E A3               [24] 4673 	inc	dptr
      00112F E0               [24] 4674 	movx	a,@dptr
      001130 FE               [12] 4675 	mov	r6,a
      001131 BD 03 05         [24] 4676 	cjne	r5,#0x03,00258$
      001134 BE 00 02         [24] 4677 	cjne	r6,#0x00,00258$
      001137 80 03            [24] 4678 	sjmp	00259$
      001139                       4679 00258$:
      001139 02 0E A7         [24] 4680 	ljmp	00153$
      00113C                       4681 00259$:
                           001054  4682 	C$lab6.c$562$5$201 ==.
                                   4683 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:562: PW_MAX_THRUST = RTHRUST_PW;
      00113C 85 4E 38         [24] 4684 	mov	_PW_MAX_THRUST,_RTHRUST_PW
      00113F 85 4F 39         [24] 4685 	mov	(_PW_MAX_THRUST + 1),(_RTHRUST_PW + 1)
                           00105A  4686 	C$lab6.c$563$5$201 ==.
                                   4687 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:563: LTHRUST_PW =PW_NUET_THRUST;
      001142 85 36 50         [24] 4688 	mov	_LTHRUST_PW,_PW_NUET_THRUST
      001145 85 37 51         [24] 4689 	mov	(_LTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
                           001060  4690 	C$lab6.c$564$5$201 ==.
                                   4691 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:564: RTHRUST_PW =PW_NUET_THRUST;
      001148 85 36 4E         [24] 4692 	mov	_RTHRUST_PW,_PW_NUET_THRUST
      00114B 85 37 4F         [24] 4693 	mov	(_RTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
      00114E 02 0E A7         [24] 4694 	ljmp	00153$
      001151                       4695 00144$:
                           001069  4696 	C$lab6.c$567$3$183 ==.
                                   4697 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:567: else return;
                           001069  4698 	C$lab6.c$570$1$181 ==.
                           001069  4699 	XG$Thrust_cal$0$0 ==.
      001151 22               [24] 4700 	ret
                                   4701 ;------------------------------------------------------------
                                   4702 ;Allocation info for local variables in function 'Steering_Servo'
                                   4703 ;------------------------------------------------------------
                                   4704 ;direction                 Allocated to registers r6 r7 
                                   4705 ;------------------------------------------------------------
                           00106A  4706 	G$Steering_Servo$0$0 ==.
                           00106A  4707 	C$lab6.c$573$1$181 ==.
                                   4708 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:573: void Steering_Servo(unsigned int direction)
                                   4709 ;	-----------------------------------------
                                   4710 ;	 function Steering_Servo
                                   4711 ;	-----------------------------------------
      001152                       4712 _Steering_Servo:
      001152 AE 82            [24] 4713 	mov	r6,dpl
      001154 AF 83            [24] 4714 	mov	r7,dph
                           00106E  4715 	C$lab6.c$579$1$203 ==.
                                   4716 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:579: if (direction > 3500 || direction < 100)
      001156 C3               [12] 4717 	clr	c
      001157 74 AC            [12] 4718 	mov	a,#0xAC
      001159 9E               [12] 4719 	subb	a,r6
      00115A 74 0D            [12] 4720 	mov	a,#0x0D
      00115C 9F               [12] 4721 	subb	a,r7
      00115D 40 08            [24] 4722 	jc	00104$
      00115F EE               [12] 4723 	mov	a,r6
      001160 94 64            [12] 4724 	subb	a,#0x64
      001162 EF               [12] 4725 	mov	a,r7
      001163 94 00            [12] 4726 	subb	a,#0x00
      001165 50 09            [24] 4727 	jnc	00105$
      001167                       4728 00104$:
                           00107F  4729 	C$lab6.c$581$2$204 ==.
                                   4730 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:581: error =0;
      001167 90 00 65         [24] 4731 	mov	dptr,#_error
      00116A E4               [12] 4732 	clr	a
      00116B F0               [24] 4733 	movx	@dptr,a
      00116C A3               [24] 4734 	inc	dptr
      00116D F0               [24] 4735 	movx	@dptr,a
      00116E 80 33            [24] 4736 	sjmp	00106$
      001170                       4737 00105$:
                           001088  4738 	C$lab6.c$583$1$203 ==.
                                   4739 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:583: else if (direction > 1800)
      001170 C3               [12] 4740 	clr	c
      001171 74 08            [12] 4741 	mov	a,#0x08
      001173 9E               [12] 4742 	subb	a,r6
      001174 74 07            [12] 4743 	mov	a,#0x07
      001176 9F               [12] 4744 	subb	a,r7
      001177 50 13            [24] 4745 	jnc	00102$
                           001091  4746 	C$lab6.c$585$2$205 ==.
                                   4747 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:585: error = (3600 - (int) direction);
      001179 8E 04            [24] 4748 	mov	ar4,r6
      00117B 8F 05            [24] 4749 	mov	ar5,r7
      00117D 90 00 65         [24] 4750 	mov	dptr,#_error
      001180 74 10            [12] 4751 	mov	a,#0x10
      001182 C3               [12] 4752 	clr	c
      001183 9C               [12] 4753 	subb	a,r4
      001184 F0               [24] 4754 	movx	@dptr,a
      001185 74 0E            [12] 4755 	mov	a,#0x0E
      001187 9D               [12] 4756 	subb	a,r5
      001188 A3               [24] 4757 	inc	dptr
      001189 F0               [24] 4758 	movx	@dptr,a
      00118A 80 17            [24] 4759 	sjmp	00106$
      00118C                       4760 00102$:
                           0010A4  4761 	C$lab6.c$589$1$203 ==.
                                   4762 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:589: error = -1* direction;
      00118C 8E 11            [24] 4763 	mov	__mulint_PARM_2,r6
      00118E 8F 12            [24] 4764 	mov	(__mulint_PARM_2 + 1),r7
      001190 90 FF FF         [24] 4765 	mov	dptr,#0xFFFF
      001193 12 14 15         [24] 4766 	lcall	__mulint
      001196 E5 82            [12] 4767 	mov	a,dpl
      001198 85 83 F0         [24] 4768 	mov	b,dph
      00119B 90 00 65         [24] 4769 	mov	dptr,#_error
      00119E F0               [24] 4770 	movx	@dptr,a
      00119F E5 F0            [12] 4771 	mov	a,b
      0011A1 A3               [24] 4772 	inc	dptr
      0011A2 F0               [24] 4773 	movx	@dptr,a
      0011A3                       4774 00106$:
                           0010BB  4775 	C$lab6.c$592$1$203 ==.
                                   4776 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:592: RUDDER_PW  = PW_CENTER_RUDDER + (int) (((int) kp* (int) error) - (int) kd * ((int)old_error -(int) error));
      0011A3 90 00 65         [24] 4777 	mov	dptr,#_error
      0011A6 E0               [24] 4778 	movx	a,@dptr
      0011A7 FE               [12] 4779 	mov	r6,a
      0011A8 A3               [24] 4780 	inc	dptr
      0011A9 E0               [24] 4781 	movx	a,@dptr
      0011AA FF               [12] 4782 	mov	r7,a
      0011AB 8E 11            [24] 4783 	mov	__mulint_PARM_2,r6
      0011AD 8F 12            [24] 4784 	mov	(__mulint_PARM_2 + 1),r7
      0011AF 85 5A 82         [24] 4785 	mov	dpl,_kp
      0011B2 85 5B 83         [24] 4786 	mov	dph,(_kp + 1)
      0011B5 C0 07            [24] 4787 	push	ar7
      0011B7 C0 06            [24] 4788 	push	ar6
      0011B9 12 14 15         [24] 4789 	lcall	__mulint
      0011BC AC 82            [24] 4790 	mov	r4,dpl
      0011BE AD 83            [24] 4791 	mov	r5,dph
      0011C0 D0 06            [24] 4792 	pop	ar6
      0011C2 D0 07            [24] 4793 	pop	ar7
      0011C4 90 00 67         [24] 4794 	mov	dptr,#_old_error
      0011C7 E0               [24] 4795 	movx	a,@dptr
      0011C8 FA               [12] 4796 	mov	r2,a
      0011C9 A3               [24] 4797 	inc	dptr
      0011CA E0               [24] 4798 	movx	a,@dptr
      0011CB FB               [12] 4799 	mov	r3,a
      0011CC EA               [12] 4800 	mov	a,r2
      0011CD C3               [12] 4801 	clr	c
      0011CE 9E               [12] 4802 	subb	a,r6
      0011CF F5 11            [12] 4803 	mov	__mulint_PARM_2,a
      0011D1 EB               [12] 4804 	mov	a,r3
      0011D2 9F               [12] 4805 	subb	a,r7
      0011D3 F5 12            [12] 4806 	mov	(__mulint_PARM_2 + 1),a
      0011D5 85 5C 82         [24] 4807 	mov	dpl,_kd
      0011D8 85 5D 83         [24] 4808 	mov	dph,(_kd + 1)
      0011DB C0 07            [24] 4809 	push	ar7
      0011DD C0 06            [24] 4810 	push	ar6
      0011DF C0 05            [24] 4811 	push	ar5
      0011E1 C0 04            [24] 4812 	push	ar4
      0011E3 12 14 15         [24] 4813 	lcall	__mulint
      0011E6 AA 82            [24] 4814 	mov	r2,dpl
      0011E8 AB 83            [24] 4815 	mov	r3,dph
      0011EA D0 04            [24] 4816 	pop	ar4
      0011EC D0 05            [24] 4817 	pop	ar5
      0011EE D0 06            [24] 4818 	pop	ar6
      0011F0 D0 07            [24] 4819 	pop	ar7
      0011F2 EC               [12] 4820 	mov	a,r4
      0011F3 C3               [12] 4821 	clr	c
      0011F4 9A               [12] 4822 	subb	a,r2
      0011F5 FC               [12] 4823 	mov	r4,a
      0011F6 ED               [12] 4824 	mov	a,r5
      0011F7 9B               [12] 4825 	subb	a,r3
      0011F8 FD               [12] 4826 	mov	r5,a
      0011F9 EC               [12] 4827 	mov	a,r4
      0011FA 25 3C            [12] 4828 	add	a,_PW_CENTER_RUDDER
      0011FC F5 46            [12] 4829 	mov	_RUDDER_PW,a
      0011FE ED               [12] 4830 	mov	a,r5
      0011FF 35 3D            [12] 4831 	addc	a,(_PW_CENTER_RUDDER + 1)
      001201 F5 47            [12] 4832 	mov	(_RUDDER_PW + 1),a
                           00111B  4833 	C$lab6.c$594$1$203 ==.
                                   4834 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:594: RTHRUST_PW = PW_NUET_THRUST   - (int) (((int) kp* (int) error) - (int) kd * ((int)old_error -(int) error));
      001203 E5 36            [12] 4835 	mov	a,_PW_NUET_THRUST
      001205 C3               [12] 4836 	clr	c
      001206 9C               [12] 4837 	subb	a,r4
      001207 F5 4E            [12] 4838 	mov	_RTHRUST_PW,a
      001209 E5 37            [12] 4839 	mov	a,(_PW_NUET_THRUST + 1)
      00120B 9D               [12] 4840 	subb	a,r5
      00120C F5 4F            [12] 4841 	mov	(_RTHRUST_PW + 1),a
                           001126  4842 	C$lab6.c$596$1$203 ==.
                                   4843 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:596: LTHRUST_PW = PW_NUET_THRUST   + (int) (((int) kp* (int) error) - (int) kd * ((int)old_error -(int) error));
      00120E EC               [12] 4844 	mov	a,r4
      00120F 25 36            [12] 4845 	add	a,_PW_NUET_THRUST
      001211 F5 50            [12] 4846 	mov	_LTHRUST_PW,a
      001213 ED               [12] 4847 	mov	a,r5
      001214 35 37            [12] 4848 	addc	a,(_PW_NUET_THRUST + 1)
      001216 F5 51            [12] 4849 	mov	(_LTHRUST_PW + 1),a
                           001130  4850 	C$lab6.c$598$1$203 ==.
                                   4851 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:598: old_error=error;
      001218 90 00 67         [24] 4852 	mov	dptr,#_old_error
      00121B EE               [12] 4853 	mov	a,r6
      00121C F0               [24] 4854 	movx	@dptr,a
      00121D EF               [12] 4855 	mov	a,r7
      00121E A3               [24] 4856 	inc	dptr
      00121F F0               [24] 4857 	movx	@dptr,a
                           001138  4858 	C$lab6.c$599$1$203 ==.
                                   4859 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:599: if (count % 25 == 0) printf("\r\n%d\t%u\t%u\t%u\t%d", error,RUDDER_PW,RTHRUST_PW,LTHRUST_PW,(int) (((int) kp* (int) error) - (int) kd * ((int)old_error -(int) error)));
      001220 75 11 19         [24] 4860 	mov	__modsint_PARM_2,#0x19
      001223 75 12 00         [24] 4861 	mov	(__modsint_PARM_2 + 1),#0x00
      001226 85 32 82         [24] 4862 	mov	dpl,_count
      001229 85 33 83         [24] 4863 	mov	dph,(_count + 1)
      00122C 12 1B AE         [24] 4864 	lcall	__modsint
      00122F E5 82            [12] 4865 	mov	a,dpl
      001231 85 83 F0         [24] 4866 	mov	b,dph
      001234 45 F0            [12] 4867 	orl	a,b
      001236 60 03            [24] 4868 	jz	00157$
      001238 02 12 BA         [24] 4869 	ljmp	00109$
      00123B                       4870 00157$:
      00123B 90 00 65         [24] 4871 	mov	dptr,#_error
      00123E E0               [24] 4872 	movx	a,@dptr
      00123F FE               [12] 4873 	mov	r6,a
      001240 A3               [24] 4874 	inc	dptr
      001241 E0               [24] 4875 	movx	a,@dptr
      001242 FF               [12] 4876 	mov	r7,a
      001243 8E 11            [24] 4877 	mov	__mulint_PARM_2,r6
      001245 8F 12            [24] 4878 	mov	(__mulint_PARM_2 + 1),r7
      001247 85 5A 82         [24] 4879 	mov	dpl,_kp
      00124A 85 5B 83         [24] 4880 	mov	dph,(_kp + 1)
      00124D C0 07            [24] 4881 	push	ar7
      00124F C0 06            [24] 4882 	push	ar6
      001251 12 14 15         [24] 4883 	lcall	__mulint
      001254 AC 82            [24] 4884 	mov	r4,dpl
      001256 AD 83            [24] 4885 	mov	r5,dph
      001258 D0 06            [24] 4886 	pop	ar6
      00125A D0 07            [24] 4887 	pop	ar7
      00125C 90 00 67         [24] 4888 	mov	dptr,#_old_error
      00125F E0               [24] 4889 	movx	a,@dptr
      001260 FA               [12] 4890 	mov	r2,a
      001261 A3               [24] 4891 	inc	dptr
      001262 E0               [24] 4892 	movx	a,@dptr
      001263 FB               [12] 4893 	mov	r3,a
      001264 EA               [12] 4894 	mov	a,r2
      001265 C3               [12] 4895 	clr	c
      001266 9E               [12] 4896 	subb	a,r6
      001267 F5 11            [12] 4897 	mov	__mulint_PARM_2,a
      001269 EB               [12] 4898 	mov	a,r3
      00126A 9F               [12] 4899 	subb	a,r7
      00126B F5 12            [12] 4900 	mov	(__mulint_PARM_2 + 1),a
      00126D 85 5C 82         [24] 4901 	mov	dpl,_kd
      001270 85 5D 83         [24] 4902 	mov	dph,(_kd + 1)
      001273 C0 07            [24] 4903 	push	ar7
      001275 C0 06            [24] 4904 	push	ar6
      001277 C0 05            [24] 4905 	push	ar5
      001279 C0 04            [24] 4906 	push	ar4
      00127B 12 14 15         [24] 4907 	lcall	__mulint
      00127E AA 82            [24] 4908 	mov	r2,dpl
      001280 AB 83            [24] 4909 	mov	r3,dph
      001282 D0 04            [24] 4910 	pop	ar4
      001284 D0 05            [24] 4911 	pop	ar5
      001286 D0 06            [24] 4912 	pop	ar6
      001288 D0 07            [24] 4913 	pop	ar7
      00128A EC               [12] 4914 	mov	a,r4
      00128B C3               [12] 4915 	clr	c
      00128C 9A               [12] 4916 	subb	a,r2
      00128D FC               [12] 4917 	mov	r4,a
      00128E ED               [12] 4918 	mov	a,r5
      00128F 9B               [12] 4919 	subb	a,r3
      001290 FD               [12] 4920 	mov	r5,a
      001291 C0 04            [24] 4921 	push	ar4
      001293 C0 05            [24] 4922 	push	ar5
      001295 C0 50            [24] 4923 	push	_LTHRUST_PW
      001297 C0 51            [24] 4924 	push	(_LTHRUST_PW + 1)
      001299 C0 4E            [24] 4925 	push	_RTHRUST_PW
      00129B C0 4F            [24] 4926 	push	(_RTHRUST_PW + 1)
      00129D C0 46            [24] 4927 	push	_RUDDER_PW
      00129F C0 47            [24] 4928 	push	(_RUDDER_PW + 1)
      0012A1 C0 06            [24] 4929 	push	ar6
      0012A3 C0 07            [24] 4930 	push	ar7
      0012A5 74 DB            [12] 4931 	mov	a,#___str_20
      0012A7 C0 E0            [24] 4932 	push	acc
      0012A9 74 1D            [12] 4933 	mov	a,#(___str_20 >> 8)
      0012AB C0 E0            [24] 4934 	push	acc
      0012AD 74 80            [12] 4935 	mov	a,#0x80
      0012AF C0 E0            [24] 4936 	push	acc
      0012B1 12 15 9E         [24] 4937 	lcall	_printf
      0012B4 E5 81            [12] 4938 	mov	a,sp
      0012B6 24 F3            [12] 4939 	add	a,#0xf3
      0012B8 F5 81            [12] 4940 	mov	sp,a
      0012BA                       4941 00109$:
                           0011D2  4942 	C$lab6.c$601$1$203 ==.
                                   4943 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:601: if (RUDDER_PW >= PW_RIGHT_RUDDER)
      0012BA C3               [12] 4944 	clr	c
      0012BB E5 46            [12] 4945 	mov	a,_RUDDER_PW
      0012BD 95 3E            [12] 4946 	subb	a,_PW_RIGHT_RUDDER
      0012BF E5 47            [12] 4947 	mov	a,(_RUDDER_PW + 1)
      0012C1 95 3F            [12] 4948 	subb	a,(_PW_RIGHT_RUDDER + 1)
      0012C3 40 08            [24] 4949 	jc	00113$
                           0011DD  4950 	C$lab6.c$603$2$207 ==.
                                   4951 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:603: RUDDER_PW = PW_RIGHT_RUDDER;
      0012C5 85 3E 46         [24] 4952 	mov	_RUDDER_PW,_PW_RIGHT_RUDDER
      0012C8 85 3F 47         [24] 4953 	mov	(_RUDDER_PW + 1),(_PW_RIGHT_RUDDER + 1)
      0012CB 80 11            [24] 4954 	sjmp	00114$
      0012CD                       4955 00113$:
                           0011E5  4956 	C$lab6.c$605$1$203 ==.
                                   4957 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:605: else if(RUDDER_PW <= PW_LEFT_RUDDER)
      0012CD C3               [12] 4958 	clr	c
      0012CE E5 3A            [12] 4959 	mov	a,_PW_LEFT_RUDDER
      0012D0 95 46            [12] 4960 	subb	a,_RUDDER_PW
      0012D2 E5 3B            [12] 4961 	mov	a,(_PW_LEFT_RUDDER + 1)
      0012D4 95 47            [12] 4962 	subb	a,(_RUDDER_PW + 1)
      0012D6 40 06            [24] 4963 	jc	00114$
                           0011F0  4964 	C$lab6.c$607$2$208 ==.
                                   4965 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:607: RUDDER_PW = PW_LEFT_RUDDER;
      0012D8 85 3A 46         [24] 4966 	mov	_RUDDER_PW,_PW_LEFT_RUDDER
      0012DB 85 3B 47         [24] 4967 	mov	(_RUDDER_PW + 1),(_PW_LEFT_RUDDER + 1)
      0012DE                       4968 00114$:
                           0011F6  4969 	C$lab6.c$610$1$203 ==.
                                   4970 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:610: if (RTHRUST_PW >= PW_MAX_THRUST)
      0012DE C3               [12] 4971 	clr	c
      0012DF E5 4E            [12] 4972 	mov	a,_RTHRUST_PW
      0012E1 95 38            [12] 4973 	subb	a,_PW_MAX_THRUST
      0012E3 E5 4F            [12] 4974 	mov	a,(_RTHRUST_PW + 1)
      0012E5 95 39            [12] 4975 	subb	a,(_PW_MAX_THRUST + 1)
      0012E7 40 08            [24] 4976 	jc	00118$
                           001201  4977 	C$lab6.c$612$2$209 ==.
                                   4978 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:612: RTHRUST_PW = PW_MAX_THRUST;
      0012E9 85 38 4E         [24] 4979 	mov	_RTHRUST_PW,_PW_MAX_THRUST
      0012EC 85 39 4F         [24] 4980 	mov	(_RTHRUST_PW + 1),(_PW_MAX_THRUST + 1)
      0012EF 80 11            [24] 4981 	sjmp	00119$
      0012F1                       4982 00118$:
                           001209  4983 	C$lab6.c$614$1$203 ==.
                                   4984 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:614: else if (RTHRUST_PW <=  PW_MIN_THRUST)
      0012F1 C3               [12] 4985 	clr	c
      0012F2 E5 34            [12] 4986 	mov	a,_PW_MIN_THRUST
      0012F4 95 4E            [12] 4987 	subb	a,_RTHRUST_PW
      0012F6 E5 35            [12] 4988 	mov	a,(_PW_MIN_THRUST + 1)
      0012F8 95 4F            [12] 4989 	subb	a,(_RTHRUST_PW + 1)
      0012FA 40 06            [24] 4990 	jc	00119$
                           001214  4991 	C$lab6.c$616$2$210 ==.
                                   4992 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:616: RTHRUST_PW = PW_MIN_THRUST;
      0012FC 85 34 4E         [24] 4993 	mov	_RTHRUST_PW,_PW_MIN_THRUST
      0012FF 85 35 4F         [24] 4994 	mov	(_RTHRUST_PW + 1),(_PW_MIN_THRUST + 1)
      001302                       4995 00119$:
                           00121A  4996 	C$lab6.c$618$1$203 ==.
                                   4997 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:618: if (LTHRUST_PW >= PW_MAX_THRUST)
      001302 C3               [12] 4998 	clr	c
      001303 E5 50            [12] 4999 	mov	a,_LTHRUST_PW
      001305 95 38            [12] 5000 	subb	a,_PW_MAX_THRUST
      001307 E5 51            [12] 5001 	mov	a,(_LTHRUST_PW + 1)
      001309 95 39            [12] 5002 	subb	a,(_PW_MAX_THRUST + 1)
      00130B 40 08            [24] 5003 	jc	00123$
                           001225  5004 	C$lab6.c$620$2$211 ==.
                                   5005 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:620: LTHRUST_PW = PW_MAX_THRUST;
      00130D 85 38 50         [24] 5006 	mov	_LTHRUST_PW,_PW_MAX_THRUST
      001310 85 39 51         [24] 5007 	mov	(_LTHRUST_PW + 1),(_PW_MAX_THRUST + 1)
      001313 80 11            [24] 5008 	sjmp	00124$
      001315                       5009 00123$:
                           00122D  5010 	C$lab6.c$622$1$203 ==.
                                   5011 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:622: else if(LTHRUST_PW <= PW_MIN_THRUST)
      001315 C3               [12] 5012 	clr	c
      001316 E5 34            [12] 5013 	mov	a,_PW_MIN_THRUST
      001318 95 50            [12] 5014 	subb	a,_LTHRUST_PW
      00131A E5 35            [12] 5015 	mov	a,(_PW_MIN_THRUST + 1)
      00131C 95 51            [12] 5016 	subb	a,(_LTHRUST_PW + 1)
      00131E 40 06            [24] 5017 	jc	00124$
                           001238  5018 	C$lab6.c$624$2$212 ==.
                                   5019 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:624: LTHRUST_PW = PW_MIN_THRUST;
      001320 85 34 50         [24] 5020 	mov	_LTHRUST_PW,_PW_MIN_THRUST
      001323 85 35 51         [24] 5021 	mov	(_LTHRUST_PW + 1),(_PW_MIN_THRUST + 1)
      001326                       5022 00124$:
                           00123E  5023 	C$lab6.c$627$1$203 ==.
                                   5024 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:627: RDR_lo_to_hi = 0xFFFF - RUDDER_PW ;
      001326 74 FF            [12] 5025 	mov	a,#0xFF
      001328 C3               [12] 5026 	clr	c
      001329 95 46            [12] 5027 	subb	a,_RUDDER_PW
      00132B F5 48            [12] 5028 	mov	_RDR_lo_to_hi,a
      00132D 74 FF            [12] 5029 	mov	a,#0xFF
      00132F 95 47            [12] 5030 	subb	a,(_RUDDER_PW + 1)
      001331 F5 49            [12] 5031 	mov	(_RDR_lo_to_hi + 1),a
                           00124B  5032 	C$lab6.c$628$1$203 ==.
                                   5033 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:628: RTRST_lo_to_hi = 0xFFFF - RTHRUST_PW;
      001333 74 FF            [12] 5034 	mov	a,#0xFF
      001335 C3               [12] 5035 	clr	c
      001336 95 4E            [12] 5036 	subb	a,_RTHRUST_PW
      001338 F5 52            [12] 5037 	mov	_RTRST_lo_to_hi,a
      00133A 74 FF            [12] 5038 	mov	a,#0xFF
      00133C 95 4F            [12] 5039 	subb	a,(_RTHRUST_PW + 1)
      00133E F5 53            [12] 5040 	mov	(_RTRST_lo_to_hi + 1),a
                           001258  5041 	C$lab6.c$629$1$203 ==.
                                   5042 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:629: LTRST_lo_to_hi = 0xFFFF - LTHRUST_PW;
      001340 74 FF            [12] 5043 	mov	a,#0xFF
      001342 C3               [12] 5044 	clr	c
      001343 95 50            [12] 5045 	subb	a,_LTHRUST_PW
      001345 F5 54            [12] 5046 	mov	_LTRST_lo_to_hi,a
      001347 74 FF            [12] 5047 	mov	a,#0xFF
      001349 95 51            [12] 5048 	subb	a,(_LTHRUST_PW + 1)
      00134B F5 55            [12] 5049 	mov	(_LTRST_lo_to_hi + 1),a
                           001265  5050 	C$lab6.c$631$1$203 ==.
                                   5051 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:631: PCA0CP0 = RDR_lo_to_hi;
      00134D 85 48 EA         [24] 5052 	mov	((_PCA0CP0 >> 0) & 0xFF),_RDR_lo_to_hi
      001350 85 49 FA         [24] 5053 	mov	((_PCA0CP0 >> 8) & 0xFF),(_RDR_lo_to_hi + 1)
                           00126B  5054 	C$lab6.c$632$1$203 ==.
                                   5055 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:632: PCA0CP2 = RTRST_lo_to_hi;
      001353 85 52 EC         [24] 5056 	mov	((_PCA0CP2 >> 0) & 0xFF),_RTRST_lo_to_hi
      001356 85 53 FC         [24] 5057 	mov	((_PCA0CP2 >> 8) & 0xFF),(_RTRST_lo_to_hi + 1)
                           001271  5058 	C$lab6.c$633$1$203 ==.
                                   5059 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:633: PCA0CP3 = LTRST_lo_to_hi;
      001359 85 54 ED         [24] 5060 	mov	((_PCA0CP3 >> 0) & 0xFF),_LTRST_lo_to_hi
      00135C 85 55 FD         [24] 5061 	mov	((_PCA0CP3 >> 8) & 0xFF),(_LTRST_lo_to_hi + 1)
                           001277  5062 	C$lab6.c$634$1$203 ==.
                           001277  5063 	XG$Steering_Servo$0$0 ==.
      00135F 22               [24] 5064 	ret
                                   5065 ;------------------------------------------------------------
                                   5066 ;Allocation info for local variables in function 'start'
                                   5067 ;------------------------------------------------------------
                           001278  5068 	G$start$0$0 ==.
                           001278  5069 	C$lab6.c$636$1$203 ==.
                                   5070 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:636: void start(void)            ///WAITS UNTIL '*' IS ENTERED
                                   5071 ;	-----------------------------------------
                                   5072 ;	 function start
                                   5073 ;	-----------------------------------------
      001360                       5074 _start:
                           001278  5075 	C$lab6.c$638$1$214 ==.
                                   5076 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:638: while (read_keypad() != '*') wait();
      001360                       5077 00101$:
      001360 12 02 02         [24] 5078 	lcall	_read_keypad
      001363 AF 82            [24] 5079 	mov	r7,dpl
      001365 BF 2A 02         [24] 5080 	cjne	r7,#0x2A,00112$
      001368 80 05            [24] 5081 	sjmp	00104$
      00136A                       5082 00112$:
      00136A 12 13 70         [24] 5083 	lcall	_wait
      00136D 80 F1            [24] 5084 	sjmp	00101$
      00136F                       5085 00104$:
                           001287  5086 	C$lab6.c$639$1$214 ==.
                           001287  5087 	XG$start$0$0 ==.
      00136F 22               [24] 5088 	ret
                                   5089 ;------------------------------------------------------------
                                   5090 ;Allocation info for local variables in function 'wait'
                                   5091 ;------------------------------------------------------------
                                   5092 ;old_count                 Allocated with name '_wait_old_count_1_216'
                                   5093 ;------------------------------------------------------------
                           001288  5094 	G$wait$0$0 ==.
                           001288  5095 	C$lab6.c$643$1$214 ==.
                                   5096 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:643: void wait(void)
                                   5097 ;	-----------------------------------------
                                   5098 ;	 function wait
                                   5099 ;	-----------------------------------------
      001370                       5100 _wait:
                           001288  5101 	C$lab6.c$645$1$216 ==.
                                   5102 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:645: __xdata int old_count = count+1;
      001370 90 00 63         [24] 5103 	mov	dptr,#_wait_old_count_1_216
      001373 74 01            [12] 5104 	mov	a,#0x01
      001375 25 32            [12] 5105 	add	a,_count
      001377 F0               [24] 5106 	movx	@dptr,a
      001378 E4               [12] 5107 	clr	a
      001379 35 33            [12] 5108 	addc	a,(_count + 1)
      00137B A3               [24] 5109 	inc	dptr
      00137C F0               [24] 5110 	movx	@dptr,a
                           001295  5111 	C$lab6.c$646$1$216 ==.
                                   5112 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:646: while (old_count> count);
      00137D 90 00 63         [24] 5113 	mov	dptr,#_wait_old_count_1_216
      001380 E0               [24] 5114 	movx	a,@dptr
      001381 FE               [12] 5115 	mov	r6,a
      001382 A3               [24] 5116 	inc	dptr
      001383 E0               [24] 5117 	movx	a,@dptr
      001384 FF               [12] 5118 	mov	r7,a
      001385                       5119 00101$:
      001385 C3               [12] 5120 	clr	c
      001386 E5 32            [12] 5121 	mov	a,_count
      001388 9E               [12] 5122 	subb	a,r6
      001389 E5 33            [12] 5123 	mov	a,(_count + 1)
      00138B 64 80            [12] 5124 	xrl	a,#0x80
      00138D 8F F0            [24] 5125 	mov	b,r7
      00138F 63 F0 80         [24] 5126 	xrl	b,#0x80
      001392 95 F0            [12] 5127 	subb	a,b
      001394 40 EF            [24] 5128 	jc	00101$
                           0012AE  5129 	C$lab6.c$647$1$216 ==.
                           0012AE  5130 	XG$wait$0$0 ==.
      001396 22               [24] 5131 	ret
                                   5132 ;------------------------------------------------------------
                                   5133 ;Allocation info for local variables in function 'Port_Init'
                                   5134 ;------------------------------------------------------------
                           0012AF  5135 	G$Port_Init$0$0 ==.
                           0012AF  5136 	C$lab6.c$649$1$216 ==.
                                   5137 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:649: void Port_Init(void)
                                   5138 ;	-----------------------------------------
                                   5139 ;	 function Port_Init
                                   5140 ;	-----------------------------------------
      001397                       5141 _Port_Init:
                           0012AF  5142 	C$lab6.c$651$1$218 ==.
                                   5143 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:651: P0MDOUT &= ~0x32;
      001397 AF A4            [24] 5144 	mov	r7,_P0MDOUT
      001399 74 CD            [12] 5145 	mov	a,#0xCD
      00139B 5F               [12] 5146 	anl	a,r7
      00139C F5 A4            [12] 5147 	mov	_P0MDOUT,a
                           0012B6  5148 	C$lab6.c$653$1$218 ==.
                                   5149 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:653: P1MDIN  &= ~0x20;
      00139E AF BD            [24] 5150 	mov	r7,_P1MDIN
      0013A0 74 DF            [12] 5151 	mov	a,#0xDF
      0013A2 5F               [12] 5152 	anl	a,r7
      0013A3 F5 BD            [12] 5153 	mov	_P1MDIN,a
                           0012BD  5154 	C$lab6.c$655$1$218 ==.
                                   5155 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:655: P1MDOUT |= 0x0F;
      0013A5 43 A5 0F         [24] 5156 	orl	_P1MDOUT,#0x0F
                           0012C0  5157 	C$lab6.c$656$1$218 ==.
                                   5158 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:656: P1MDOUT &= 0x20;
      0013A8 53 A5 20         [24] 5159 	anl	_P1MDOUT,#0x20
                           0012C3  5160 	C$lab6.c$658$1$218 ==.
                                   5161 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:658: P1 		 = 0x20;
      0013AB 75 90 20         [24] 5162 	mov	_P1,#0x20
                           0012C6  5163 	C$lab6.c$661$1$218 ==.
                           0012C6  5164 	XG$Port_Init$0$0 ==.
      0013AE 22               [24] 5165 	ret
                                   5166 ;------------------------------------------------------------
                                   5167 ;Allocation info for local variables in function 'PCA_Init'
                                   5168 ;------------------------------------------------------------
                           0012C7  5169 	G$PCA_Init$0$0 ==.
                           0012C7  5170 	C$lab6.c$663$1$218 ==.
                                   5171 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:663: void PCA_Init(void)
                                   5172 ;	-----------------------------------------
                                   5173 ;	 function PCA_Init
                                   5174 ;	-----------------------------------------
      0013AF                       5175 _PCA_Init:
                           0012C7  5176 	C$lab6.c$665$1$220 ==.
                                   5177 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:665: PCA0MD   = 0x81;
      0013AF 75 D9 81         [24] 5178 	mov	_PCA0MD,#0x81
                           0012CA  5179 	C$lab6.c$666$1$220 ==.
                                   5180 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:666: PCA0CPM0 = 0xC2;    //CCM0 in 16-bit compare mode FOR STEERING
      0013B2 75 DA C2         [24] 5181 	mov	_PCA0CPM0,#0xC2
                           0012CD  5182 	C$lab6.c$667$1$220 ==.
                                   5183 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:667: PCA0CPM1 = 0xC2;
      0013B5 75 DB C2         [24] 5184 	mov	_PCA0CPM1,#0xC2
                           0012D0  5185 	C$lab6.c$668$1$220 ==.
                                   5186 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:668: PCA0CPM2 = 0xC2;    //CCM2 in 16-bit compare mode FOR MOTOR
      0013B8 75 DC C2         [24] 5187 	mov	_PCA0CPM2,#0xC2
                           0012D3  5188 	C$lab6.c$669$1$220 ==.
                                   5189 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:669: PCA0CPM3 = 0XC2;
      0013BB 75 DD C2         [24] 5190 	mov	_PCA0CPM3,#0xC2
                           0012D6  5191 	C$lab6.c$670$1$220 ==.
                                   5192 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:670: PCA0CN 	 = 0x40;    //Enable PCA counter
      0013BE 75 D8 40         [24] 5193 	mov	_PCA0CN,#0x40
                           0012D9  5194 	C$lab6.c$671$1$220 ==.
                                   5195 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:671: EIE1    |= 0x08;    //Enable PCA interrupt
      0013C1 43 E6 08         [24] 5196 	orl	_EIE1,#0x08
                           0012DC  5197 	C$lab6.c$672$1$220 ==.
                                   5198 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:672: EA       = 1   ;    //Enable global interrupts
      0013C4 D2 AF            [12] 5199 	setb	_EA
                           0012DE  5200 	C$lab6.c$673$1$220 ==.
                           0012DE  5201 	XG$PCA_Init$0$0 ==.
      0013C6 22               [24] 5202 	ret
                                   5203 ;------------------------------------------------------------
                                   5204 ;Allocation info for local variables in function 'XBR0_Init'
                                   5205 ;------------------------------------------------------------
                           0012DF  5206 	G$XBR0_Init$0$0 ==.
                           0012DF  5207 	C$lab6.c$676$1$220 ==.
                                   5208 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:676: void XBR0_Init(void)
                                   5209 ;	-----------------------------------------
                                   5210 ;	 function XBR0_Init
                                   5211 ;	-----------------------------------------
      0013C7                       5212 _XBR0_Init:
                           0012DF  5213 	C$lab6.c$678$1$222 ==.
                                   5214 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:678: XBR0 = 0x27;
      0013C7 75 E1 27         [24] 5215 	mov	_XBR0,#0x27
                           0012E2  5216 	C$lab6.c$679$1$222 ==.
                           0012E2  5217 	XG$XBR0_Init$0$0 ==.
      0013CA 22               [24] 5218 	ret
                                   5219 ;------------------------------------------------------------
                                   5220 ;Allocation info for local variables in function 'SMB_Init'
                                   5221 ;------------------------------------------------------------
                           0012E3  5222 	G$SMB_Init$0$0 ==.
                           0012E3  5223 	C$lab6.c$681$1$222 ==.
                                   5224 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:681: void SMB_Init(void)
                                   5225 ;	-----------------------------------------
                                   5226 ;	 function SMB_Init
                                   5227 ;	-----------------------------------------
      0013CB                       5228 _SMB_Init:
                           0012E3  5229 	C$lab6.c$683$1$224 ==.
                                   5230 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:683: SMB0CR =0x93;
      0013CB 75 CF 93         [24] 5231 	mov	_SMB0CR,#0x93
                           0012E6  5232 	C$lab6.c$684$1$224 ==.
                                   5233 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:684: ENSMB =1;
      0013CE D2 C6            [12] 5234 	setb	_ENSMB
                           0012E8  5235 	C$lab6.c$685$1$224 ==.
                           0012E8  5236 	XG$SMB_Init$0$0 ==.
      0013D0 22               [24] 5237 	ret
                                   5238 ;------------------------------------------------------------
                                   5239 ;Allocation info for local variables in function 'ADC_Init'
                                   5240 ;------------------------------------------------------------
                           0012E9  5241 	G$ADC_Init$0$0 ==.
                           0012E9  5242 	C$lab6.c$687$1$224 ==.
                                   5243 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:687: void ADC_Init(void)								/////SETS ADC 
                                   5244 ;	-----------------------------------------
                                   5245 ;	 function ADC_Init
                                   5246 ;	-----------------------------------------
      0013D1                       5247 _ADC_Init:
                           0012E9  5248 	C$lab6.c$689$1$226 ==.
                                   5249 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:689: REF0CN = 0x03;
      0013D1 75 D1 03         [24] 5250 	mov	_REF0CN,#0x03
                           0012EC  5251 	C$lab6.c$690$1$226 ==.
                                   5252 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:690: ADC1CN = 0x80;
      0013D4 75 AA 80         [24] 5253 	mov	_ADC1CN,#0x80
                           0012EF  5254 	C$lab6.c$691$1$226 ==.
                                   5255 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:691: ADC1CF |= 0x01;
      0013D7 43 AB 01         [24] 5256 	orl	_ADC1CF,#0x01
                           0012F2  5257 	C$lab6.c$692$1$226 ==.
                           0012F2  5258 	XG$ADC_Init$0$0 ==.
      0013DA 22               [24] 5259 	ret
                                   5260 ;------------------------------------------------------------
                                   5261 ;Allocation info for local variables in function 'PCA_ISR'
                                   5262 ;------------------------------------------------------------
                           0012F3  5263 	G$PCA_ISR$0$0 ==.
                           0012F3  5264 	C$lab6.c$694$1$226 ==.
                                   5265 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:694: void PCA_ISR ( void ) __interrupt 9
                                   5266 ;	-----------------------------------------
                                   5267 ;	 function PCA_ISR
                                   5268 ;	-----------------------------------------
      0013DB                       5269 _PCA_ISR:
      0013DB C0 E0            [24] 5270 	push	acc
      0013DD C0 D0            [24] 5271 	push	psw
                           0012F7  5272 	C$lab6.c$697$1$228 ==.
                                   5273 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:697: if (CF)
                           0012F7  5274 	C$lab6.c$699$2$229 ==.
                                   5275 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:699: CF =0;
      0013DF 10 DF 02         [24] 5276 	jbc	_CF,00108$
      0013E2 80 0E            [24] 5277 	sjmp	00102$
      0013E4                       5278 00108$:
                           0012FC  5279 	C$lab6.c$700$2$229 ==.
                                   5280 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:700: PCA0 = PCA_START;
      0013E4 75 E9 00         [24] 5281 	mov	((_PCA0 >> 0) & 0xFF),#0x00
      0013E7 75 F9 70         [24] 5282 	mov	((_PCA0 >> 8) & 0xFF),#0x70
                           001302  5283 	C$lab6.c$701$2$229 ==.
                                   5284 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:701: count++;
      0013EA 05 32            [12] 5285 	inc	_count
      0013EC E4               [12] 5286 	clr	a
      0013ED B5 32 02         [24] 5287 	cjne	a,_count,00109$
      0013F0 05 33            [12] 5288 	inc	(_count + 1)
      0013F2                       5289 00109$:
      0013F2                       5290 00102$:
                           00130A  5291 	C$lab6.c$706$1$228 ==.
                                   5292 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:706: PCA0CN &= 0xC0;
      0013F2 53 D8 C0         [24] 5293 	anl	_PCA0CN,#0xC0
      0013F5 D0 D0            [24] 5294 	pop	psw
      0013F7 D0 E0            [24] 5295 	pop	acc
                           001311  5296 	C$lab6.c$707$1$228 ==.
                           001311  5297 	XG$PCA_ISR$0$0 ==.
      0013F9 32               [24] 5298 	reti
                                   5299 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   5300 ;	eliminated unneeded push/pop dpl
                                   5301 ;	eliminated unneeded push/pop dph
                                   5302 ;	eliminated unneeded push/pop b
                                   5303 	.area CSEG    (CODE)
                                   5304 	.area CONST   (CODE)
                           000000  5305 Flab6$__str_0$0$0 == .
      001BE8                       5306 ___str_0:
      001BE8 0A                    5307 	.db 0x0A
      001BE9 54 79 70 65 20 64 69  5308 	.ascii "Type digits; end w/#"
             67 69 74 73 3B 20 65
             6E 64 20 77 2F 23
      001BFD 00                    5309 	.db 0x00
                           000016  5310 Flab6$__str_1$0$0 == .
      001BFE                       5311 ___str_1:
      001BFE 20 20 20 20 20 25 63  5312 	.ascii "     %c%c%c%c%c"
             25 63 25 63 25 63 25
             63
      001C0D 00                    5313 	.db 0x00
                           000026  5314 Flab6$__str_2$0$0 == .
      001C0E                       5315 ___str_2:
      001C0E 25 63                 5316 	.ascii "%c"
      001C10 00                    5317 	.db 0x00
                           000029  5318 Flab6$__str_3$0$0 == .
      001C11                       5319 ___str_3:
      001C11 50 6C 65 61 73 65 20  5320 	.ascii "Please enter a kp value:"
             65 6E 74 65 72 20 61
             20 6B 70 20 76 61 6C
             75 65 3A
      001C29 0A                    5321 	.db 0x0A
      001C2A 20                    5322 	.ascii " "
      001C2B 00                    5323 	.db 0x00
                           000044  5324 Flab6$__str_4$0$0 == .
      001C2C                       5325 ___str_4:
      001C2C 50 6C 65 61 73 65 20  5326 	.ascii "Please enter a kd value:"
             65 6E 74 65 72 20 61
             20 6B 64 20 76 61 6C
             75 65 3A
      001C44 0A                    5327 	.db 0x0A
      001C45 20                    5328 	.ascii " "
      001C46 00                    5329 	.db 0x00
                           00005F  5330 Flab6$__str_5$0$0 == .
      001C47                       5331 ___str_5:
      001C47 25 64                 5332 	.ascii "%d"
      001C49 00                    5333 	.db 0x00
                           000062  5334 Flab6$__str_6$0$0 == .
      001C4A                       5335 ___str_6:
      001C4A 43 61 6C 69 62 72 61  5336 	.ascii "Calibration:"
             74 69 6F 6E 3A
      001C56 0A                    5337 	.db 0x0A
      001C57 48 65 6C 6C 6F 20 77  5338 	.ascii "Hello world!"
             6F 72 6C 64 21
      001C63 0A                    5339 	.db 0x0A
      001C64 30 31 32 5F 33 34 35  5340 	.ascii "012_345_678:"
             5F 36 37 38 3A
      001C70 0A                    5341 	.db 0x0A
      001C71 61 62 63 20 64 65 66  5342 	.ascii "abc def ghij"
             20 67 68 69 6A
      001C7D 00                    5343 	.db 0x00
                           000096  5344 Flab6$__str_7$0$0 == .
      001C7E                       5345 ___str_7:
      001C7E 0D                    5346 	.db 0x0D
      001C7F 0A                    5347 	.db 0x0A
      001C80 54 68 65 20 64 65 73  5348 	.ascii "The desired direction is: %d"
             69 72 65 64 20 64 69
             72 65 63 74 69 6F 6E
             20 69 73 3A 20 25 64
      001C9C 00                    5349 	.db 0x00
                           0000B5  5350 Flab6$__str_8$0$0 == .
      001C9D                       5351 ___str_8:
      001C9D 52 75 64 64 65 72 20  5352 	.ascii "Rudder Calibration"
             43 61 6C 69 62 72 61
             74 69 6F 6E
      001CAF 00                    5353 	.db 0x00
                           0000C8  5354 Flab6$__str_9$0$0 == .
      001CB0                       5355 ___str_9:
      001CB0 67 6F 20 6C 65 66 74  5356 	.ascii "go left: press 1"
             3A 20 70 72 65 73 73
             20 31
      001CC0 0A                    5357 	.db 0x0A
      001CC1 20 67 6F 20 72 69 67  5358 	.ascii " go right: press 2"
             68 74 3A 20 70 72 65
             73 73 20 32
      001CD3 0A                    5359 	.db 0x0A
      001CD4 50 72 65 73 73 20 2A  5360 	.ascii "Press * for next screen"
             20 66 6F 72 20 6E 65
             78 74 20 73 63 72 65
             65 6E
      001CEB 00                    5361 	.db 0x00
                           000104  5362 Flab6$__str_10$0$0 == .
      001CEC                       5363 ___str_10:
      001CEC 0A                    5364 	.db 0x0A
      001CED 20 63 6F 6E 66 69 72  5365 	.ascii " confirm: press 3"
             6D 3A 20 70 72 65 73
             73 20 33
      001CFE 0A                    5366 	.db 0x0A
      001CFF 20 70 72 65 73 73 20  5367 	.ascii " press * to begin"
             2A 20 74 6F 20 62 65
             67 69 6E
      001D10 00                    5368 	.db 0x00
                           000129  5369 Flab6$__str_11$0$0 == .
      001D11                       5370 ___str_11:
      001D11 0D                    5371 	.db 0x0D
      001D12 0A                    5372 	.db 0x0A
      001D13 20 25 75              5373 	.ascii " %u"
      001D16 00                    5374 	.db 0x00
                           00012F  5375 Flab6$__str_12$0$0 == .
      001D17                       5376 ___str_12:
      001D17 4E 6F 77 20 63 61 6C  5377 	.ascii "Now calibrating Min_PW"
             69 62 72 61 74 69 6E
             67 20 4D 69 6E 5F 50
             57
      001D2D 0A                    5378 	.db 0x0A
      001D2E 00                    5379 	.db 0x00
                           000147  5380 Flab6$__str_13$0$0 == .
      001D2F                       5381 ___str_13:
      001D2F 4E 6F 77 20 63 61 6C  5382 	.ascii "Now calibrating Cen_PW"
             69 62 72 61 74 69 6E
             67 20 43 65 6E 5F 50
             57
      001D45 00                    5383 	.db 0x00
                           00015E  5384 Flab6$__str_14$0$0 == .
      001D46                       5385 ___str_14:
      001D46 4E 6F 77 20 63 61 6C  5386 	.ascii "Now calibrating Max_PW"
             69 62 72 61 74 69 6E
             67 20 4D 61 78 5F 50
             57
      001D5C 00                    5387 	.db 0x00
                           000175  5388 Flab6$__str_15$0$0 == .
      001D5D                       5389 ___str_15:
      001D5D 41 6E 67 6C 65 20 43  5390 	.ascii "Angle Calibration"
             61 6C 69 62 72 61 74
             69 6F 6E
      001D6E 00                    5391 	.db 0x00
                           000187  5392 Flab6$__str_16$0$0 == .
      001D6F                       5393 ___str_16:
      001D6F 4E 6F 77 20 63 61 6C  5394 	.ascii "Now calibrating Min_PW UP ANGLE"
             69 62 72 61 74 69 6E
             67 20 4D 69 6E 5F 50
             57 20 55 50 20 41 4E
             47 4C 45
      001D8E 00                    5395 	.db 0x00
                           0001A7  5396 Flab6$__str_17$0$0 == .
      001D8F                       5397 ___str_17:
      001D8F 4E 6F 77 20 63 61 6C  5398 	.ascii "Now calibrating Max_PW DOWN ANGLE"
             69 62 72 61 74 69 6E
             67 20 4D 61 78 5F 50
             57 20 44 4F 57 4E 20
             41 4E 47 4C 45
      001DB0 00                    5399 	.db 0x00
                           0001C9  5400 Flab6$__str_18$0$0 == .
      001DB1                       5401 ___str_18:
      001DB1 54 68 72 75 73 74 20  5402 	.ascii "Thrust Calibration"
             43 61 6C 69 62 72 61
             74 69 6F 6E
      001DC3 00                    5403 	.db 0x00
                           0001DC  5404 Flab6$__str_19$0$0 == .
      001DC4                       5405 ___str_19:
      001DC4 4E 6F 77 20 63 61 6C  5406 	.ascii "Now calibrating Min_PW"
             69 62 72 61 74 69 6E
             67 20 4D 69 6E 5F 50
             57
      001DDA 00                    5407 	.db 0x00
                           0001F3  5408 Flab6$__str_20$0$0 == .
      001DDB                       5409 ___str_20:
      001DDB 0D                    5410 	.db 0x0D
      001DDC 0A                    5411 	.db 0x0A
      001DDD 25 64                 5412 	.ascii "%d"
      001DDF 09                    5413 	.db 0x09
      001DE0 25 75                 5414 	.ascii "%u"
      001DE2 09                    5415 	.db 0x09
      001DE3 25 75                 5416 	.ascii "%u"
      001DE5 09                    5417 	.db 0x09
      001DE6 25 75                 5418 	.ascii "%u"
      001DE8 09                    5419 	.db 0x09
      001DE9 25 64                 5420 	.ascii "%d"
      001DEB 00                    5421 	.db 0x00
                                   5422 	.area XINIT   (CODE)
                           000000  5423 Flab6$__xinit_error$0$0 == .
      001DF7                       5424 __xinit__error:
      001DF7 00 00                 5425 	.byte #0x00,#0x00	;  0
                           000002  5426 Flab6$__xinit_old_error$0$0 == .
      001DF9                       5427 __xinit__old_error:
      001DF9 00 00                 5428 	.byte #0x00,#0x00	;  0
                                   5429 	.area CABS    (ABS,CODE)
