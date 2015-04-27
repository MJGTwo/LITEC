                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (Apr  5 2014) (MINGW32)
                                      4 ; This file was generated Mon Apr 27 19:21:33 2015
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
                           000062  1134 Llab6.wait$old_count$1$213==.
      000063                       1135 _wait_old_count_1_213:
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
      00004B 02 13 58         [24] 1185 	ljmp	_PCA_ISR
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
                           000000  1199 	C$lab6.c$45$1$225 ==.
                                   1200 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:45: int count=0;
      0000AA E4               [12] 1201 	clr	a
      0000AB F5 32            [12] 1202 	mov	_count,a
      0000AD F5 33            [12] 1203 	mov	(_count + 1),a
                           000005  1204 	C$lab6.c$46$1$225 ==.
                                   1205 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:46: unsigned int PW_MIN_THRUST = 2000;
      0000AF 75 34 D0         [24] 1206 	mov	_PW_MIN_THRUST,#0xD0
      0000B2 75 35 07         [24] 1207 	mov	(_PW_MIN_THRUST + 1),#0x07
                           00000B  1208 	C$lab6.c$47$1$225 ==.
                                   1209 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:47: unsigned int PW_NUET_THRUST = 2750;
      0000B5 75 36 BE         [24] 1210 	mov	_PW_NUET_THRUST,#0xBE
      0000B8 75 37 0A         [24] 1211 	mov	(_PW_NUET_THRUST + 1),#0x0A
                           000011  1212 	C$lab6.c$48$1$225 ==.
                                   1213 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:48: unsigned int PW_MAX_THRUST = 3500;
      0000BB 75 38 AC         [24] 1214 	mov	_PW_MAX_THRUST,#0xAC
      0000BE 75 39 0D         [24] 1215 	mov	(_PW_MAX_THRUST + 1),#0x0D
                           000017  1216 	C$lab6.c$50$1$225 ==.
                                   1217 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:50: unsigned int PW_LEFT_RUDDER = 2000;
      0000C1 75 3A D0         [24] 1218 	mov	_PW_LEFT_RUDDER,#0xD0
      0000C4 75 3B 07         [24] 1219 	mov	(_PW_LEFT_RUDDER + 1),#0x07
                           00001D  1220 	C$lab6.c$51$1$225 ==.
                                   1221 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:51: unsigned int PW_CENTER_RUDDER = 2750;
      0000C7 75 3C BE         [24] 1222 	mov	_PW_CENTER_RUDDER,#0xBE
      0000CA 75 3D 0A         [24] 1223 	mov	(_PW_CENTER_RUDDER + 1),#0x0A
                           000023  1224 	C$lab6.c$52$1$225 ==.
                                   1225 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:52: unsigned int PW_RIGHT_RUDDER = 3500;
      0000CD 75 3E AC         [24] 1226 	mov	_PW_RIGHT_RUDDER,#0xAC
      0000D0 75 3F 0D         [24] 1227 	mov	(_PW_RIGHT_RUDDER + 1),#0x0D
                           000029  1228 	C$lab6.c$54$1$225 ==.
                                   1229 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:54: unsigned int PW_UP_ANGLE = 2880;
      0000D3 75 40 40         [24] 1230 	mov	_PW_UP_ANGLE,#0x40
      0000D6 75 41 0B         [24] 1231 	mov	(_PW_UP_ANGLE + 1),#0x0B
                           00002F  1232 	C$lab6.c$55$1$225 ==.
                                   1233 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:55: unsigned int PW_CENTER_ANGLE = 3530;
      0000D9 75 42 CA         [24] 1234 	mov	_PW_CENTER_ANGLE,#0xCA
      0000DC 75 43 0D         [24] 1235 	mov	(_PW_CENTER_ANGLE + 1),#0x0D
                           000035  1236 	C$lab6.c$56$1$225 ==.
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
      000156 12 1A F7         [24] 1455 	lcall	_strlen
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
      00017E 12 14 1F         [24] 1480 	lcall	_vsprintf
                           000099  1481 	C$i2c.h$93$1$73 ==.
                                   1482 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:93: len = strlen(text);
      000181 90 00 01         [24] 1483 	mov	dptr,#_lcd_print_text_1_73
      000184 75 F0 00         [24] 1484 	mov	b,#0x00
      000187 12 1A F7         [24] 1485 	lcall	_strlen
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
      00028D 74 65            [12] 1715 	mov	a,#___str_0
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
      0002CD 74 7B            [12] 1752 	mov	a,#___str_1
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
      000367 74 8B            [12] 1846 	mov	a,#___str_2
      000369 C0 E0            [24] 1847 	push	acc
      00036B 74 1B            [12] 1848 	mov	a,#(___str_2 >> 8)
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
      000393 12 13 92         [24] 1869 	lcall	__mulint
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
      00049F 12 1B 0F         [24] 2194 	lcall	__gptrget
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
      0004C7 12 1B 0F         [24] 2222 	lcall	__gptrget
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
      00053E 12 13 77         [24] 2319 	lcall	__gptrput
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
      000571 12 13 77         [24] 2355 	lcall	__gptrput
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
      0005C7 12 13 14         [24] 2429 	lcall	_Port_Init
                           0004E2  2430 	C$lab6.c$86$1$123 ==.
                                   2431 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:86: XBR0_Init();
      0005CA 12 13 44         [24] 2432 	lcall	_XBR0_Init
                           0004E5  2433 	C$lab6.c$87$1$123 ==.
                                   2434 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:87: PCA_Init();
      0005CD 12 13 2C         [24] 2435 	lcall	_PCA_Init
                           0004E8  2436 	C$lab6.c$88$1$123 ==.
                                   2437 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:88: SMB_Init();
      0005D0 12 13 48         [24] 2438 	lcall	_SMB_Init
                           0004EB  2439 	C$lab6.c$89$1$123 ==.
                                   2440 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:89: ADC_Init();
      0005D3 12 13 4E         [24] 2441 	lcall	_ADC_Init
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
      00063E 12 06 D3         [24] 2517 	lcall	_kpkd
                           000559  2518 	C$lab6.c$112$1$123 ==.
                                   2519 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:112: direction();
      000641 12 08 11         [24] 2520 	lcall	_direction
                           00055C  2521 	C$lab6.c$113$1$123 ==.
                                   2522 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:113: while (1)
      000644                       2523 00104$:
                           00055C  2524 	C$lab6.c$115$2$124 ==.
                                   2525 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:115: printf("\ntest");
      000644 74 8E            [12] 2526 	mov	a,#___str_3
      000646 C0 E0            [24] 2527 	push	acc
      000648 74 1B            [12] 2528 	mov	a,#(___str_3 >> 8)
      00064A C0 E0            [24] 2529 	push	acc
      00064C 74 80            [12] 2530 	mov	a,#0x80
      00064E C0 E0            [24] 2531 	push	acc
      000650 12 15 1B         [24] 2532 	lcall	_printf
      000653 15 81            [12] 2533 	dec	sp
      000655 15 81            [12] 2534 	dec	sp
      000657 15 81            [12] 2535 	dec	sp
                           000571  2536 	C$lab6.c$116$2$124 ==.
                                   2537 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:116: wait();
      000659 12 12 ED         [24] 2538 	lcall	_wait
                           000574  2539 	C$lab6.c$117$2$124 ==.
                                   2540 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:117: if (count +1 % 2 ==0)
      00065C 74 01            [12] 2541 	mov	a,#0x01
      00065E 25 32            [12] 2542 	add	a,_count
      000660 FE               [12] 2543 	mov	r6,a
      000661 E4               [12] 2544 	clr	a
      000662 35 33            [12] 2545 	addc	a,(_count + 1)
      000664 FF               [12] 2546 	mov	r7,a
      000665 4E               [12] 2547 	orl	a,r6
      000666 70 03            [24] 2548 	jnz	00102$
                           000580  2549 	C$lab6.c$119$3$125 ==.
                                   2550 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:119: Steering_func();
      000668 12 07 A3         [24] 2551 	lcall	_Steering_func
      00066B                       2552 00102$:
                           000583  2553 	C$lab6.c$121$2$124 ==.
                                   2554 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:121: Change_D();
      00066B 12 07 1F         [24] 2555 	lcall	_Change_D
      00066E 80 D4            [24] 2556 	sjmp	00104$
                           000588  2557 	C$lab6.c$125$1$123 ==.
                           000588  2558 	XG$main$0$0 ==.
      000670 22               [24] 2559 	ret
                                   2560 ;------------------------------------------------------------
                                   2561 ;Allocation info for local variables in function 'Calibrate'
                                   2562 ;------------------------------------------------------------
                           000589  2563 	G$Calibrate$0$0 ==.
                           000589  2564 	C$lab6.c$127$1$123 ==.
                                   2565 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:127: void Calibrate(void)
                                   2566 ;	-----------------------------------------
                                   2567 ;	 function Calibrate
                                   2568 ;	-----------------------------------------
      000671                       2569 _Calibrate:
                           000589  2570 	C$lab6.c$131$1$127 ==.
                                   2571 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:131: Rudder_cal();
      000671 12 08 C3         [24] 2572 	lcall	_Rudder_cal
                           00058C  2573 	C$lab6.c$132$1$127 ==.
                                   2574 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:132: RUDDER_PW= PW_CENTER_RUDDER;
      000674 85 3C 46         [24] 2575 	mov	_RUDDER_PW,_PW_CENTER_RUDDER
      000677 85 3D 47         [24] 2576 	mov	(_RUDDER_PW + 1),(_PW_CENTER_RUDDER + 1)
                           000592  2577 	C$lab6.c$133$1$127 ==.
                                   2578 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:133: RDR_lo_to_hi = 0xFFFF - RUDDER_PW;
      00067A 74 FF            [12] 2579 	mov	a,#0xFF
      00067C C3               [12] 2580 	clr	c
      00067D 95 46            [12] 2581 	subb	a,_RUDDER_PW
      00067F F5 48            [12] 2582 	mov	_RDR_lo_to_hi,a
      000681 74 FF            [12] 2583 	mov	a,#0xFF
      000683 95 47            [12] 2584 	subb	a,(_RUDDER_PW + 1)
      000685 F5 49            [12] 2585 	mov	(_RDR_lo_to_hi + 1),a
                           00059F  2586 	C$lab6.c$134$1$127 ==.
                                   2587 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:134: PCA0CP0 = RDR_lo_to_hi;
      000687 85 48 EA         [24] 2588 	mov	((_PCA0CP0 >> 0) & 0xFF),_RDR_lo_to_hi
      00068A 85 49 FA         [24] 2589 	mov	((_PCA0CP0 >> 8) & 0xFF),(_RDR_lo_to_hi + 1)
                           0005A5  2590 	C$lab6.c$136$1$127 ==.
                                   2591 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:136: Angle_cal();
      00068D 12 0B 70         [24] 2592 	lcall	_Angle_cal
                           0005A8  2593 	C$lab6.c$137$1$127 ==.
                                   2594 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:137: ANGLE_PW = PW_CENTER_ANGLE;
      000690 85 42 4A         [24] 2595 	mov	_ANGLE_PW,_PW_CENTER_ANGLE
      000693 85 43 4B         [24] 2596 	mov	(_ANGLE_PW + 1),(_PW_CENTER_ANGLE + 1)
                           0005AE  2597 	C$lab6.c$138$1$127 ==.
                                   2598 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:138: AGL_lo_to_hi = 0xFFFF - ANGLE_PW;
      000696 74 FF            [12] 2599 	mov	a,#0xFF
      000698 C3               [12] 2600 	clr	c
      000699 95 4A            [12] 2601 	subb	a,_ANGLE_PW
      00069B F5 4C            [12] 2602 	mov	_AGL_lo_to_hi,a
      00069D 74 FF            [12] 2603 	mov	a,#0xFF
      00069F 95 4B            [12] 2604 	subb	a,(_ANGLE_PW + 1)
      0006A1 F5 4D            [12] 2605 	mov	(_AGL_lo_to_hi + 1),a
                           0005BB  2606 	C$lab6.c$139$1$127 ==.
                                   2607 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:139: PCA0CP1 = AGL_lo_to_hi;
      0006A3 85 4C EB         [24] 2608 	mov	((_PCA0CP1 >> 0) & 0xFF),_AGL_lo_to_hi
      0006A6 85 4D FB         [24] 2609 	mov	((_PCA0CP1 >> 8) & 0xFF),(_AGL_lo_to_hi + 1)
                           0005C1  2610 	C$lab6.c$141$1$127 ==.
                                   2611 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:141: Thrust_cal();
      0006A9 12 0E 2B         [24] 2612 	lcall	_Thrust_cal
                           0005C4  2613 	C$lab6.c$142$1$127 ==.
                                   2614 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:142: RTHRUST_PW = PW_NUET_THRUST;
      0006AC 85 36 4E         [24] 2615 	mov	_RTHRUST_PW,_PW_NUET_THRUST
      0006AF 85 37 4F         [24] 2616 	mov	(_RTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
                           0005CA  2617 	C$lab6.c$143$1$127 ==.
                                   2618 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:143: LTHRUST_PW = PW_NUET_THRUST;
      0006B2 85 36 50         [24] 2619 	mov	_LTHRUST_PW,_PW_NUET_THRUST
      0006B5 85 37 51         [24] 2620 	mov	(_LTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
                           0005D0  2621 	C$lab6.c$144$1$127 ==.
                                   2622 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:144: RTRST_lo_to_hi = 0xFFFF - RTHRUST_PW;
      0006B8 74 FF            [12] 2623 	mov	a,#0xFF
      0006BA C3               [12] 2624 	clr	c
      0006BB 95 4E            [12] 2625 	subb	a,_RTHRUST_PW
      0006BD F5 52            [12] 2626 	mov	_RTRST_lo_to_hi,a
      0006BF 74 FF            [12] 2627 	mov	a,#0xFF
      0006C1 95 4F            [12] 2628 	subb	a,(_RTHRUST_PW + 1)
      0006C3 F5 53            [12] 2629 	mov	(_RTRST_lo_to_hi + 1),a
                           0005DD  2630 	C$lab6.c$145$1$127 ==.
                                   2631 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:145: LTRST_lo_to_hi = 0xFFFF - LTHRUST_PW;
      0006C5 74 FF            [12] 2632 	mov	a,#0xFF
      0006C7 C3               [12] 2633 	clr	c
      0006C8 95 50            [12] 2634 	subb	a,_LTHRUST_PW
      0006CA F5 54            [12] 2635 	mov	_LTRST_lo_to_hi,a
      0006CC 74 FF            [12] 2636 	mov	a,#0xFF
      0006CE 95 51            [12] 2637 	subb	a,(_LTHRUST_PW + 1)
      0006D0 F5 55            [12] 2638 	mov	(_LTRST_lo_to_hi + 1),a
                           0005EA  2639 	C$lab6.c$146$1$127 ==.
                           0005EA  2640 	XG$Calibrate$0$0 ==.
      0006D2 22               [24] 2641 	ret
                                   2642 ;------------------------------------------------------------
                                   2643 ;Allocation info for local variables in function 'kpkd'
                                   2644 ;------------------------------------------------------------
                           0005EB  2645 	G$kpkd$0$0 ==.
                           0005EB  2646 	C$lab6.c$148$1$127 ==.
                                   2647 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:148: void kpkd(void)
                                   2648 ;	-----------------------------------------
                                   2649 ;	 function kpkd
                                   2650 ;	-----------------------------------------
      0006D3                       2651 _kpkd:
                           0005EB  2652 	C$lab6.c$150$1$129 ==.
                                   2653 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:150: lcd_clear();
      0006D3 12 01 C9         [24] 2654 	lcall	_lcd_clear
                           0005EE  2655 	C$lab6.c$151$1$129 ==.
                                   2656 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:151: lcd_print("Please enter a kp value:\n ");
      0006D6 74 94            [12] 2657 	mov	a,#___str_4
      0006D8 C0 E0            [24] 2658 	push	acc
      0006DA 74 1B            [12] 2659 	mov	a,#(___str_4 >> 8)
      0006DC C0 E0            [24] 2660 	push	acc
      0006DE 74 80            [12] 2661 	mov	a,#0x80
      0006E0 C0 E0            [24] 2662 	push	acc
      0006E2 12 01 44         [24] 2663 	lcall	_lcd_print
      0006E5 15 81            [12] 2664 	dec	sp
      0006E7 15 81            [12] 2665 	dec	sp
      0006E9 15 81            [12] 2666 	dec	sp
                           000603  2667 	C$lab6.c$152$1$129 ==.
                                   2668 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:152: kp = kpd_input(0);
      0006EB 75 82 00         [24] 2669 	mov	dpl,#0x00
      0006EE 12 02 81         [24] 2670 	lcall	_kpd_input
      0006F1 85 82 5A         [24] 2671 	mov	_kp,dpl
      0006F4 85 83 5B         [24] 2672 	mov	(_kp + 1),dph
                           00060F  2673 	C$lab6.c$153$1$129 ==.
                                   2674 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:153: lcd_clear();
      0006F7 12 01 C9         [24] 2675 	lcall	_lcd_clear
                           000612  2676 	C$lab6.c$154$1$129 ==.
                                   2677 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:154: lcd_print("Please enter a kd value:\n ");
      0006FA 74 AF            [12] 2678 	mov	a,#___str_5
      0006FC C0 E0            [24] 2679 	push	acc
      0006FE 74 1B            [12] 2680 	mov	a,#(___str_5 >> 8)
      000700 C0 E0            [24] 2681 	push	acc
      000702 74 80            [12] 2682 	mov	a,#0x80
      000704 C0 E0            [24] 2683 	push	acc
      000706 12 01 44         [24] 2684 	lcall	_lcd_print
      000709 15 81            [12] 2685 	dec	sp
      00070B 15 81            [12] 2686 	dec	sp
      00070D 15 81            [12] 2687 	dec	sp
                           000627  2688 	C$lab6.c$155$1$129 ==.
                                   2689 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:155: kd = kpd_input(0);
      00070F 75 82 00         [24] 2690 	mov	dpl,#0x00
      000712 12 02 81         [24] 2691 	lcall	_kpd_input
      000715 85 82 5C         [24] 2692 	mov	_kd,dpl
      000718 85 83 5D         [24] 2693 	mov	(_kd + 1),dph
                           000633  2694 	C$lab6.c$156$1$129 ==.
                                   2695 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:156: lcd_clear();
      00071B 12 01 C9         [24] 2696 	lcall	_lcd_clear
                           000636  2697 	C$lab6.c$157$1$129 ==.
                           000636  2698 	XG$kpkd$0$0 ==.
      00071E 22               [24] 2699 	ret
                                   2700 ;------------------------------------------------------------
                                   2701 ;Allocation info for local variables in function 'Change_D'
                                   2702 ;------------------------------------------------------------
                                   2703 ;distance                  Allocated with name '_Change_D_distance_1_131'
                                   2704 ;------------------------------------------------------------
                           000637  2705 	G$Change_D$0$0 ==.
                           000637  2706 	C$lab6.c$160$1$129 ==.
                                   2707 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:160: void Change_D(void)
                                   2708 ;	-----------------------------------------
                                   2709 ;	 function Change_D
                                   2710 ;	-----------------------------------------
      00071F                       2711 _Change_D:
                           000637  2712 	C$lab6.c$162$1$129 ==.
                                   2713 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:162: __xdata unsigned int distance=100;
      00071F 90 00 55         [24] 2714 	mov	dptr,#_Change_D_distance_1_131
      000722 74 64            [12] 2715 	mov	a,#0x64
      000724 F0               [24] 2716 	movx	@dptr,a
      000725 E4               [12] 2717 	clr	a
      000726 A3               [24] 2718 	inc	dptr
      000727 F0               [24] 2719 	movx	@dptr,a
                           000640  2720 	C$lab6.c$163$1$131 ==.
                                   2721 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:163: if (count +1 % 4 == 0)
      000728 04               [12] 2722 	inc	a
      000729 25 32            [12] 2723 	add	a,_count
      00072B FE               [12] 2724 	mov	r6,a
      00072C E4               [12] 2725 	clr	a
      00072D 35 33            [12] 2726 	addc	a,(_count + 1)
      00072F FF               [12] 2727 	mov	r7,a
      000730 4E               [12] 2728 	orl	a,r6
      000731 70 10            [24] 2729 	jnz	00102$
                           00064B  2730 	C$lab6.c$165$2$132 ==.
                                   2731 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:165: distance = Read_Ranger();
      000733 12 07 7D         [24] 2732 	lcall	_Read_Ranger
      000736 E5 82            [12] 2733 	mov	a,dpl
      000738 85 83 F0         [24] 2734 	mov	b,dph
      00073B 90 00 55         [24] 2735 	mov	dptr,#_Change_D_distance_1_131
      00073E F0               [24] 2736 	movx	@dptr,a
      00073F E5 F0            [12] 2737 	mov	a,b
      000741 A3               [24] 2738 	inc	dptr
      000742 F0               [24] 2739 	movx	@dptr,a
      000743                       2740 00102$:
                           00065B  2741 	C$lab6.c$167$1$131 ==.
                                   2742 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:167: if (distance < 50)
      000743 90 00 55         [24] 2743 	mov	dptr,#_Change_D_distance_1_131
      000746 E0               [24] 2744 	movx	a,@dptr
      000747 FE               [12] 2745 	mov	r6,a
      000748 A3               [24] 2746 	inc	dptr
      000749 E0               [24] 2747 	movx	a,@dptr
      00074A FF               [12] 2748 	mov	r7,a
      00074B C3               [12] 2749 	clr	c
      00074C EE               [12] 2750 	mov	a,r6
      00074D 94 32            [12] 2751 	subb	a,#0x32
      00074F EF               [12] 2752 	mov	a,r7
      000750 94 00            [12] 2753 	subb	a,#0x00
      000752 50 28            [24] 2754 	jnc	00105$
                           00066C  2755 	C$lab6.c$169$2$133 ==.
                                   2756 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:169: desired_D = (desired_D + 1800) % 3600;
      000754 90 00 51         [24] 2757 	mov	dptr,#_desired_D
      000757 E0               [24] 2758 	movx	a,@dptr
      000758 FE               [12] 2759 	mov	r6,a
      000759 A3               [24] 2760 	inc	dptr
      00075A E0               [24] 2761 	movx	a,@dptr
      00075B FF               [12] 2762 	mov	r7,a
      00075C 74 08            [12] 2763 	mov	a,#0x08
      00075E 2E               [12] 2764 	add	a,r6
      00075F F5 82            [12] 2765 	mov	dpl,a
      000761 74 07            [12] 2766 	mov	a,#0x07
      000763 3F               [12] 2767 	addc	a,r7
      000764 F5 83            [12] 2768 	mov	dph,a
      000766 75 11 10         [24] 2769 	mov	__modsint_PARM_2,#0x10
      000769 75 12 0E         [24] 2770 	mov	(__modsint_PARM_2 + 1),#0x0E
      00076C 12 1B 2B         [24] 2771 	lcall	__modsint
      00076F E5 82            [12] 2772 	mov	a,dpl
      000771 85 83 F0         [24] 2773 	mov	b,dph
      000774 90 00 51         [24] 2774 	mov	dptr,#_desired_D
      000777 F0               [24] 2775 	movx	@dptr,a
      000778 E5 F0            [12] 2776 	mov	a,b
      00077A A3               [24] 2777 	inc	dptr
      00077B F0               [24] 2778 	movx	@dptr,a
      00077C                       2779 00105$:
                           000694  2780 	C$lab6.c$171$1$131 ==.
                           000694  2781 	XG$Change_D$0$0 ==.
      00077C 22               [24] 2782 	ret
                                   2783 ;------------------------------------------------------------
                                   2784 ;Allocation info for local variables in function 'Read_Ranger'
                                   2785 ;------------------------------------------------------------
                                   2786 ;r_addr                    Allocated to registers 
                                   2787 ;read                      Allocated to registers 
                                   2788 ;------------------------------------------------------------
                           000695  2789 	G$Read_Ranger$0$0 ==.
                           000695  2790 	C$lab6.c$173$1$131 ==.
                                   2791 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:173: unsigned int Read_Ranger(void)
                                   2792 ;	-----------------------------------------
                                   2793 ;	 function Read_Ranger
                                   2794 ;	-----------------------------------------
      00077D                       2795 _Read_Ranger:
                           000695  2796 	C$lab6.c$179$1$135 ==.
                                   2797 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:179: i2c_read_data(r_addr, 2, r_data, 2);
      00077D 75 2D 58         [24] 2798 	mov	_i2c_read_data_PARM_3,#_r_data
      000780 75 2E 00         [24] 2799 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      000783 75 2F 40         [24] 2800 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      000786 75 2C 02         [24] 2801 	mov	_i2c_read_data_PARM_2,#0x02
      000789 75 30 02         [24] 2802 	mov	_i2c_read_data_PARM_4,#0x02
      00078C 75 82 E0         [24] 2803 	mov	dpl,#0xE0
      00078F 12 04 D0         [24] 2804 	lcall	_i2c_read_data
                           0006AA  2805 	C$lab6.c$180$1$135 ==.
                                   2806 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:180: read = (((unsigned int) r_data[0] <<8) | r_data[1]);
      000792 AF 58            [24] 2807 	mov	r7,_r_data
      000794 7E 00            [12] 2808 	mov	r6,#0x00
      000796 AC 59            [24] 2809 	mov	r4,(_r_data + 0x0001)
      000798 7D 00            [12] 2810 	mov	r5,#0x00
      00079A EC               [12] 2811 	mov	a,r4
      00079B 4E               [12] 2812 	orl	a,r6
      00079C F5 82            [12] 2813 	mov	dpl,a
      00079E ED               [12] 2814 	mov	a,r5
      00079F 4F               [12] 2815 	orl	a,r7
      0007A0 F5 83            [12] 2816 	mov	dph,a
                           0006BA  2817 	C$lab6.c$181$1$135 ==.
                                   2818 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:181: return read;
                           0006BA  2819 	C$lab6.c$182$1$135 ==.
                           0006BA  2820 	XG$Read_Ranger$0$0 ==.
      0007A2 22               [24] 2821 	ret
                                   2822 ;------------------------------------------------------------
                                   2823 ;Allocation info for local variables in function 'Steering_func'
                                   2824 ;------------------------------------------------------------
                           0006BB  2825 	G$Steering_func$0$0 ==.
                           0006BB  2826 	C$lab6.c$184$1$135 ==.
                                   2827 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:184: void Steering_func(void)    ///FUNCTION TO HOLD ACTIONS FOR STEERING
                                   2828 ;	-----------------------------------------
                                   2829 ;	 function Steering_func
                                   2830 ;	-----------------------------------------
      0007A3                       2831 _Steering_func:
                           0006BB  2832 	C$lab6.c$186$1$137 ==.
                                   2833 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:186: actual_D = ReadCompass();
      0007A3 12 08 9D         [24] 2834 	lcall	_ReadCompass
      0007A6 E5 82            [12] 2835 	mov	a,dpl
      0007A8 85 83 F0         [24] 2836 	mov	b,dph
      0007AB 90 00 53         [24] 2837 	mov	dptr,#_actual_D
      0007AE F0               [24] 2838 	movx	@dptr,a
      0007AF E5 F0            [12] 2839 	mov	a,b
      0007B1 A3               [24] 2840 	inc	dptr
      0007B2 F0               [24] 2841 	movx	@dptr,a
                           0006CB  2842 	C$lab6.c$187$1$137 ==.
                                   2843 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:187: lcd_clear();
      0007B3 12 01 C9         [24] 2844 	lcall	_lcd_clear
                           0006CE  2845 	C$lab6.c$188$1$137 ==.
                                   2846 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:188: lcd_print("%d", actual_D);
      0007B6 90 00 53         [24] 2847 	mov	dptr,#_actual_D
      0007B9 E0               [24] 2848 	movx	a,@dptr
      0007BA C0 E0            [24] 2849 	push	acc
      0007BC A3               [24] 2850 	inc	dptr
      0007BD E0               [24] 2851 	movx	a,@dptr
      0007BE C0 E0            [24] 2852 	push	acc
      0007C0 74 CA            [12] 2853 	mov	a,#___str_6
      0007C2 C0 E0            [24] 2854 	push	acc
      0007C4 74 1B            [12] 2855 	mov	a,#(___str_6 >> 8)
      0007C6 C0 E0            [24] 2856 	push	acc
      0007C8 74 80            [12] 2857 	mov	a,#0x80
      0007CA C0 E0            [24] 2858 	push	acc
      0007CC 12 01 44         [24] 2859 	lcall	_lcd_print
      0007CF E5 81            [12] 2860 	mov	a,sp
      0007D1 24 FB            [12] 2861 	add	a,#0xfb
      0007D3 F5 81            [12] 2862 	mov	sp,a
                           0006ED  2863 	C$lab6.c$189$1$137 ==.
                                   2864 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:189: offset = (unsigned int)((actual_D +3600- desired_D ) % 3600);
      0007D5 90 00 53         [24] 2865 	mov	dptr,#_actual_D
      0007D8 E0               [24] 2866 	movx	a,@dptr
      0007D9 FE               [12] 2867 	mov	r6,a
      0007DA A3               [24] 2868 	inc	dptr
      0007DB E0               [24] 2869 	movx	a,@dptr
      0007DC FF               [12] 2870 	mov	r7,a
      0007DD 74 10            [12] 2871 	mov	a,#0x10
      0007DF 2E               [12] 2872 	add	a,r6
      0007E0 FE               [12] 2873 	mov	r6,a
      0007E1 74 0E            [12] 2874 	mov	a,#0x0E
      0007E3 3F               [12] 2875 	addc	a,r7
      0007E4 FF               [12] 2876 	mov	r7,a
      0007E5 90 00 51         [24] 2877 	mov	dptr,#_desired_D
      0007E8 E0               [24] 2878 	movx	a,@dptr
      0007E9 FC               [12] 2879 	mov	r4,a
      0007EA A3               [24] 2880 	inc	dptr
      0007EB E0               [24] 2881 	movx	a,@dptr
      0007EC FD               [12] 2882 	mov	r5,a
      0007ED EE               [12] 2883 	mov	a,r6
      0007EE C3               [12] 2884 	clr	c
      0007EF 9C               [12] 2885 	subb	a,r4
      0007F0 F5 82            [12] 2886 	mov	dpl,a
      0007F2 EF               [12] 2887 	mov	a,r7
      0007F3 9D               [12] 2888 	subb	a,r5
      0007F4 F5 83            [12] 2889 	mov	dph,a
      0007F6 75 11 10         [24] 2890 	mov	__modsint_PARM_2,#0x10
      0007F9 75 12 0E         [24] 2891 	mov	(__modsint_PARM_2 + 1),#0x0E
      0007FC 12 1B 2B         [24] 2892 	lcall	__modsint
      0007FF AE 82            [24] 2893 	mov	r6,dpl
      000801 AF 83            [24] 2894 	mov	r7,dph
      000803 8E 56            [24] 2895 	mov	_offset,r6
      000805 8F 57            [24] 2896 	mov	(_offset + 1),r7
                           00071F  2897 	C$lab6.c$190$1$137 ==.
                                   2898 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:190: Steering_Servo(offset);
      000807 85 56 82         [24] 2899 	mov	dpl,_offset
      00080A 85 57 83         [24] 2900 	mov	dph,(_offset + 1)
      00080D 12 11 5A         [24] 2901 	lcall	_Steering_Servo
                           000728  2902 	C$lab6.c$192$1$137 ==.
                           000728  2903 	XG$Steering_func$0$0 ==.
      000810 22               [24] 2904 	ret
                                   2905 ;------------------------------------------------------------
                                   2906 ;Allocation info for local variables in function 'direction'
                                   2907 ;------------------------------------------------------------
                                   2908 ;value                     Allocated to registers r6 r7 
                                   2909 ;------------------------------------------------------------
                           000729  2910 	G$direction$0$0 ==.
                           000729  2911 	C$lab6.c$194$1$137 ==.
                                   2912 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:194: unsigned int direction(void)        ///ADJUSTS THE VALUES OF DIRECTION SO THE DESIRED DIRECTION IS THE CAR'S 'NORTH'
                                   2913 ;	-----------------------------------------
                                   2914 ;	 function direction
                                   2915 ;	-----------------------------------------
      000811                       2916 _direction:
                           000729  2917 	C$lab6.c$197$1$139 ==.
                                   2918 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:197: count =0;
      000811 E4               [12] 2919 	clr	a
      000812 F5 32            [12] 2920 	mov	_count,a
      000814 F5 33            [12] 2921 	mov	(_count + 1),a
                           00072E  2922 	C$lab6.c$198$1$139 ==.
                                   2923 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:198: while (count < 1);
      000816                       2924 00101$:
      000816 C3               [12] 2925 	clr	c
      000817 E5 32            [12] 2926 	mov	a,_count
      000819 94 01            [12] 2927 	subb	a,#0x01
      00081B E5 33            [12] 2928 	mov	a,(_count + 1)
      00081D 64 80            [12] 2929 	xrl	a,#0x80
      00081F 94 80            [12] 2930 	subb	a,#0x80
      000821 40 F3            [24] 2931 	jc	00101$
                           00073B  2932 	C$lab6.c$199$1$139 ==.
                                   2933 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:199: lcd_clear();
      000823 12 01 C9         [24] 2934 	lcall	_lcd_clear
                           00073E  2935 	C$lab6.c$200$1$139 ==.
                                   2936 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:200: lcd_print("Calibration:\nHello world!\n012_345_678:\nabc def ghij");
      000826 74 CD            [12] 2937 	mov	a,#___str_7
      000828 C0 E0            [24] 2938 	push	acc
      00082A 74 1B            [12] 2939 	mov	a,#(___str_7 >> 8)
      00082C C0 E0            [24] 2940 	push	acc
      00082E 74 80            [12] 2941 	mov	a,#0x80
      000830 C0 E0            [24] 2942 	push	acc
      000832 12 01 44         [24] 2943 	lcall	_lcd_print
      000835 15 81            [12] 2944 	dec	sp
      000837 15 81            [12] 2945 	dec	sp
      000839 15 81            [12] 2946 	dec	sp
                           000753  2947 	C$lab6.c$201$1$139 ==.
                                   2948 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:201: start();
      00083B 12 12 DD         [24] 2949 	lcall	_start
                           000756  2950 	C$lab6.c$202$1$139 ==.
                                   2951 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:202: lcd_clear();
      00083E 12 01 C9         [24] 2952 	lcall	_lcd_clear
                           000759  2953 	C$lab6.c$203$1$139 ==.
                                   2954 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:203: value = kpd_input(0);
      000841 75 82 00         [24] 2955 	mov	dpl,#0x00
      000844 12 02 81         [24] 2956 	lcall	_kpd_input
      000847 AE 82            [24] 2957 	mov	r6,dpl
      000849 AF 83            [24] 2958 	mov	r7,dph
                           000763  2959 	C$lab6.c$204$1$139 ==.
                                   2960 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:204: lcd_clear();
      00084B C0 07            [24] 2961 	push	ar7
      00084D C0 06            [24] 2962 	push	ar6
      00084F 12 01 C9         [24] 2963 	lcall	_lcd_clear
      000852 D0 06            [24] 2964 	pop	ar6
      000854 D0 07            [24] 2965 	pop	ar7
                           00076E  2966 	C$lab6.c$205$1$139 ==.
                                   2967 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:205: lcd_print("\r\nThe desired direction is: %d", value);
      000856 C0 07            [24] 2968 	push	ar7
      000858 C0 06            [24] 2969 	push	ar6
      00085A C0 06            [24] 2970 	push	ar6
      00085C C0 07            [24] 2971 	push	ar7
      00085E 74 01            [12] 2972 	mov	a,#___str_8
      000860 C0 E0            [24] 2973 	push	acc
      000862 74 1C            [12] 2974 	mov	a,#(___str_8 >> 8)
      000864 C0 E0            [24] 2975 	push	acc
      000866 74 80            [12] 2976 	mov	a,#0x80
      000868 C0 E0            [24] 2977 	push	acc
      00086A 12 01 44         [24] 2978 	lcall	_lcd_print
      00086D E5 81            [12] 2979 	mov	a,sp
      00086F 24 FB            [12] 2980 	add	a,#0xfb
      000871 F5 81            [12] 2981 	mov	sp,a
      000873 D0 06            [24] 2982 	pop	ar6
      000875 D0 07            [24] 2983 	pop	ar7
                           00078F  2984 	C$lab6.c$206$1$139 ==.
                                   2985 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:206: printf("\r\nThe desired direction is: %d", value);
      000877 C0 07            [24] 2986 	push	ar7
      000879 C0 06            [24] 2987 	push	ar6
      00087B C0 06            [24] 2988 	push	ar6
      00087D C0 07            [24] 2989 	push	ar7
      00087F 74 01            [12] 2990 	mov	a,#___str_8
      000881 C0 E0            [24] 2991 	push	acc
      000883 74 1C            [12] 2992 	mov	a,#(___str_8 >> 8)
      000885 C0 E0            [24] 2993 	push	acc
      000887 74 80            [12] 2994 	mov	a,#0x80
      000889 C0 E0            [24] 2995 	push	acc
      00088B 12 15 1B         [24] 2996 	lcall	_printf
      00088E E5 81            [12] 2997 	mov	a,sp
      000890 24 FB            [12] 2998 	add	a,#0xfb
      000892 F5 81            [12] 2999 	mov	sp,a
      000894 D0 06            [24] 3000 	pop	ar6
      000896 D0 07            [24] 3001 	pop	ar7
                           0007B0  3002 	C$lab6.c$208$1$139 ==.
                                   3003 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:208: return value;
      000898 8E 82            [24] 3004 	mov	dpl,r6
      00089A 8F 83            [24] 3005 	mov	dph,r7
                           0007B4  3006 	C$lab6.c$210$1$139 ==.
                           0007B4  3007 	XG$direction$0$0 ==.
      00089C 22               [24] 3008 	ret
                                   3009 ;------------------------------------------------------------
                                   3010 ;Allocation info for local variables in function 'ReadCompass'
                                   3011 ;------------------------------------------------------------
                                   3012 ;Data                      Allocated with name '_ReadCompass_Data_1_141'
                                   3013 ;Crange                    Allocated to registers 
                                   3014 ;addr                      Allocated to registers 
                                   3015 ;------------------------------------------------------------
                           0007B5  3016 	G$ReadCompass$0$0 ==.
                           0007B5  3017 	C$lab6.c$212$1$139 ==.
                                   3018 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:212: unsigned int ReadCompass(void)
                                   3019 ;	-----------------------------------------
                                   3020 ;	 function ReadCompass
                                   3021 ;	-----------------------------------------
      00089D                       3022 _ReadCompass:
                           0007B5  3023 	C$lab6.c$218$1$141 ==.
                                   3024 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:218: i2c_read_data(addr, 2,Data,2);
      00089D 75 2D 62         [24] 3025 	mov	_i2c_read_data_PARM_3,#_ReadCompass_Data_1_141
      0008A0 75 2E 00         [24] 3026 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0008A3 75 2F 40         [24] 3027 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0008A6 75 2C 02         [24] 3028 	mov	_i2c_read_data_PARM_2,#0x02
      0008A9 75 30 02         [24] 3029 	mov	_i2c_read_data_PARM_4,#0x02
      0008AC 75 82 C0         [24] 3030 	mov	dpl,#0xC0
      0008AF 12 04 D0         [24] 3031 	lcall	_i2c_read_data
                           0007CA  3032 	C$lab6.c$219$1$141 ==.
                                   3033 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:219: Crange = ((unsigned int) Data[0] << 8 | Data[1]);
      0008B2 AF 62            [24] 3034 	mov	r7,_ReadCompass_Data_1_141
      0008B4 7E 00            [12] 3035 	mov	r6,#0x00
      0008B6 AC 63            [24] 3036 	mov	r4,(_ReadCompass_Data_1_141 + 0x0001)
      0008B8 7D 00            [12] 3037 	mov	r5,#0x00
      0008BA EC               [12] 3038 	mov	a,r4
      0008BB 4E               [12] 3039 	orl	a,r6
      0008BC F5 82            [12] 3040 	mov	dpl,a
      0008BE ED               [12] 3041 	mov	a,r5
      0008BF 4F               [12] 3042 	orl	a,r7
      0008C0 F5 83            [12] 3043 	mov	dph,a
                           0007DA  3044 	C$lab6.c$220$1$141 ==.
                                   3045 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:220: return Crange;
                           0007DA  3046 	C$lab6.c$221$1$141 ==.
                           0007DA  3047 	XG$ReadCompass$0$0 ==.
      0008C2 22               [24] 3048 	ret
                                   3049 ;------------------------------------------------------------
                                   3050 ;Allocation info for local variables in function 'Rudder_cal'
                                   3051 ;------------------------------------------------------------
                                   3052 ;st                        Allocated to registers r7 
                                   3053 ;value                     Allocated with name '_Rudder_cal_value_1_143'
                                   3054 ;times                     Allocated with name '_Rudder_cal_times_1_143'
                                   3055 ;------------------------------------------------------------
                           0007DB  3056 	G$Rudder_cal$0$0 ==.
                           0007DB  3057 	C$lab6.c$223$1$141 ==.
                                   3058 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:223: void Rudder_cal(void)
                                   3059 ;	-----------------------------------------
                                   3060 ;	 function Rudder_cal
                                   3061 ;	-----------------------------------------
      0008C3                       3062 _Rudder_cal:
                           0007DB  3063 	C$lab6.c$226$1$141 ==.
                                   3064 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:226: __xdata int value =0;
      0008C3 90 00 57         [24] 3065 	mov	dptr,#_Rudder_cal_value_1_143
      0008C6 E4               [12] 3066 	clr	a
      0008C7 F0               [24] 3067 	movx	@dptr,a
      0008C8 A3               [24] 3068 	inc	dptr
      0008C9 F0               [24] 3069 	movx	@dptr,a
                           0007E2  3070 	C$lab6.c$227$1$141 ==.
                                   3071 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:227: __xdata int times =0;
      0008CA 90 00 59         [24] 3072 	mov	dptr,#_Rudder_cal_times_1_143
      0008CD F0               [24] 3073 	movx	@dptr,a
      0008CE A3               [24] 3074 	inc	dptr
      0008CF F0               [24] 3075 	movx	@dptr,a
                           0007E8  3076 	C$lab6.c$228$1$143 ==.
                                   3077 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:228: count =0;
      0008D0 F5 32            [12] 3078 	mov	_count,a
      0008D2 F5 33            [12] 3079 	mov	(_count + 1),a
                           0007EC  3080 	C$lab6.c$229$1$143 ==.
                                   3081 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:229: lcd_clear();
      0008D4 12 01 C9         [24] 3082 	lcall	_lcd_clear
                           0007EF  3083 	C$lab6.c$230$1$143 ==.
                                   3084 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:230: lcd_print("Rudder Calibration");
      0008D7 74 20            [12] 3085 	mov	a,#___str_9
      0008D9 C0 E0            [24] 3086 	push	acc
      0008DB 74 1C            [12] 3087 	mov	a,#(___str_9 >> 8)
      0008DD C0 E0            [24] 3088 	push	acc
      0008DF 74 80            [12] 3089 	mov	a,#0x80
      0008E1 C0 E0            [24] 3090 	push	acc
      0008E3 12 01 44         [24] 3091 	lcall	_lcd_print
      0008E6 15 81            [12] 3092 	dec	sp
      0008E8 15 81            [12] 3093 	dec	sp
      0008EA 15 81            [12] 3094 	dec	sp
                           000804  3095 	C$lab6.c$231$1$143 ==.
                                   3096 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:231: while (count < 50);
      0008EC                       3097 00101$:
      0008EC C3               [12] 3098 	clr	c
      0008ED E5 32            [12] 3099 	mov	a,_count
      0008EF 94 32            [12] 3100 	subb	a,#0x32
      0008F1 E5 33            [12] 3101 	mov	a,(_count + 1)
      0008F3 64 80            [12] 3102 	xrl	a,#0x80
      0008F5 94 80            [12] 3103 	subb	a,#0x80
      0008F7 40 F3            [24] 3104 	jc	00101$
                           000811  3105 	C$lab6.c$232$1$143 ==.
                                   3106 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:232: lcd_clear();
      0008F9 12 01 C9         [24] 3107 	lcall	_lcd_clear
                           000814  3108 	C$lab6.c$236$2$144 ==.
                                   3109 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:236: count =0;
      0008FC E4               [12] 3110 	clr	a
      0008FD F5 32            [12] 3111 	mov	_count,a
      0008FF F5 33            [12] 3112 	mov	(_count + 1),a
                           000819  3113 	C$lab6.c$237$2$144 ==.
                                   3114 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:237: while (count < 1);
      000901                       3115 00104$:
      000901 C3               [12] 3116 	clr	c
      000902 E5 32            [12] 3117 	mov	a,_count
      000904 94 01            [12] 3118 	subb	a,#0x01
      000906 E5 33            [12] 3119 	mov	a,(_count + 1)
      000908 64 80            [12] 3120 	xrl	a,#0x80
      00090A 94 80            [12] 3121 	subb	a,#0x80
      00090C 40 F3            [24] 3122 	jc	00104$
                           000826  3123 	C$lab6.c$238$2$144 ==.
                                   3124 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:238: lcd_clear();
      00090E 12 01 C9         [24] 3125 	lcall	_lcd_clear
                           000829  3126 	C$lab6.c$239$2$144 ==.
                                   3127 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:239: lcd_print("go left: press 1\n go right: press 2\nPress * for next screen");
      000911 74 33            [12] 3128 	mov	a,#___str_10
      000913 C0 E0            [24] 3129 	push	acc
      000915 74 1C            [12] 3130 	mov	a,#(___str_10 >> 8)
      000917 C0 E0            [24] 3131 	push	acc
      000919 74 80            [12] 3132 	mov	a,#0x80
      00091B C0 E0            [24] 3133 	push	acc
      00091D 12 01 44         [24] 3134 	lcall	_lcd_print
      000920 15 81            [12] 3135 	dec	sp
      000922 15 81            [12] 3136 	dec	sp
      000924 15 81            [12] 3137 	dec	sp
                           00083E  3138 	C$lab6.c$240$2$144 ==.
                                   3139 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:240: start();
      000926 12 12 DD         [24] 3140 	lcall	_start
                           000841  3141 	C$lab6.c$241$2$144 ==.
                                   3142 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:241: lcd_clear();
      000929 12 01 C9         [24] 3143 	lcall	_lcd_clear
                           000844  3144 	C$lab6.c$242$2$144 ==.
                                   3145 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:242: lcd_print("\n confirm: press 3\n press * to begin");
      00092C 74 6F            [12] 3146 	mov	a,#___str_11
      00092E C0 E0            [24] 3147 	push	acc
      000930 74 1C            [12] 3148 	mov	a,#(___str_11 >> 8)
      000932 C0 E0            [24] 3149 	push	acc
      000934 74 80            [12] 3150 	mov	a,#0x80
      000936 C0 E0            [24] 3151 	push	acc
      000938 12 01 44         [24] 3152 	lcall	_lcd_print
      00093B 15 81            [12] 3153 	dec	sp
      00093D 15 81            [12] 3154 	dec	sp
      00093F 15 81            [12] 3155 	dec	sp
                           000859  3156 	C$lab6.c$243$2$144 ==.
                                   3157 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:243: start();
      000941 12 12 DD         [24] 3158 	lcall	_start
                           00085C  3159 	C$lab6.c$244$2$144 ==.
                                   3160 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:244: st =0;
      000944 7F 00            [12] 3161 	mov	r7,#0x00
                           00085E  3162 	C$lab6.c$245$5$147 ==.
                                   3163 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:245: while (1)
      000946                       3164 00146$:
                           00085E  3165 	C$lab6.c$247$3$145 ==.
                                   3166 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:247: printf("\r\n %u",RUDDER_PW);
      000946 C0 07            [24] 3167 	push	ar7
      000948 C0 46            [24] 3168 	push	_RUDDER_PW
      00094A C0 47            [24] 3169 	push	(_RUDDER_PW + 1)
      00094C 74 94            [12] 3170 	mov	a,#___str_12
      00094E C0 E0            [24] 3171 	push	acc
      000950 74 1C            [12] 3172 	mov	a,#(___str_12 >> 8)
      000952 C0 E0            [24] 3173 	push	acc
      000954 74 80            [12] 3174 	mov	a,#0x80
      000956 C0 E0            [24] 3175 	push	acc
      000958 12 15 1B         [24] 3176 	lcall	_printf
      00095B E5 81            [12] 3177 	mov	a,sp
      00095D 24 FB            [12] 3178 	add	a,#0xfb
      00095F F5 81            [12] 3179 	mov	sp,a
      000961 D0 07            [24] 3180 	pop	ar7
                           00087B  3181 	C$lab6.c$248$3$145 ==.
                                   3182 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:248: RDR_lo_to_hi = 0xFFFF - RUDDER_PW;
      000963 74 FF            [12] 3183 	mov	a,#0xFF
      000965 C3               [12] 3184 	clr	c
      000966 95 46            [12] 3185 	subb	a,_RUDDER_PW
      000968 F5 48            [12] 3186 	mov	_RDR_lo_to_hi,a
      00096A 74 FF            [12] 3187 	mov	a,#0xFF
      00096C 95 47            [12] 3188 	subb	a,(_RUDDER_PW + 1)
      00096E F5 49            [12] 3189 	mov	(_RDR_lo_to_hi + 1),a
                           000888  3190 	C$lab6.c$249$3$145 ==.
                                   3191 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:249: PCA0CP0 = RDR_lo_to_hi;
      000970 85 48 EA         [24] 3192 	mov	((_PCA0CP0 >> 0) & 0xFF),_RDR_lo_to_hi
      000973 85 49 FA         [24] 3193 	mov	((_PCA0CP0 >> 8) & 0xFF),(_RDR_lo_to_hi + 1)
                           00088E  3194 	C$lab6.c$251$3$145 ==.
                                   3195 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:251: if (times == 0 )
      000976 90 00 59         [24] 3196 	mov	dptr,#_Rudder_cal_times_1_143
      000979 E0               [24] 3197 	movx	a,@dptr
      00097A FD               [12] 3198 	mov	r5,a
      00097B A3               [24] 3199 	inc	dptr
      00097C E0               [24] 3200 	movx	a,@dptr
      00097D FE               [12] 3201 	mov	r6,a
      00097E 4D               [12] 3202 	orl	a,r5
      00097F 60 03            [24] 3203 	jz	00215$
      000981 02 0A 2C         [24] 3204 	ljmp	00143$
      000984                       3205 00215$:
                           00089C  3206 	C$lab6.c$253$4$146 ==.
                                   3207 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:253: if (value ==0)
      000984 90 00 57         [24] 3208 	mov	dptr,#_Rudder_cal_value_1_143
      000987 E0               [24] 3209 	movx	a,@dptr
      000988 FD               [12] 3210 	mov	r5,a
      000989 A3               [24] 3211 	inc	dptr
      00098A E0               [24] 3212 	movx	a,@dptr
      00098B FE               [12] 3213 	mov	r6,a
      00098C 4D               [12] 3214 	orl	a,r5
      00098D 70 27            [24] 3215 	jnz	00110$
                           0008A7  3216 	C$lab6.c$255$5$147 ==.
                                   3217 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:255: lcd_clear();
      00098F C0 07            [24] 3218 	push	ar7
      000991 12 01 C9         [24] 3219 	lcall	_lcd_clear
                           0008AC  3220 	C$lab6.c$256$5$147 ==.
                                   3221 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:256: lcd_print("Now calibrating Min_PW\n");
      000994 74 9A            [12] 3222 	mov	a,#___str_13
      000996 C0 E0            [24] 3223 	push	acc
      000998 74 1C            [12] 3224 	mov	a,#(___str_13 >> 8)
      00099A C0 E0            [24] 3225 	push	acc
      00099C 74 80            [12] 3226 	mov	a,#0x80
      00099E C0 E0            [24] 3227 	push	acc
      0009A0 12 01 44         [24] 3228 	lcall	_lcd_print
      0009A3 15 81            [12] 3229 	dec	sp
      0009A5 15 81            [12] 3230 	dec	sp
      0009A7 15 81            [12] 3231 	dec	sp
      0009A9 D0 07            [24] 3232 	pop	ar7
                           0008C3  3233 	C$lab6.c$257$5$147 ==.
                                   3234 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:257: if (st ==0 ) RUDDER_PW = PW_LEFT_RUDDER;
      0009AB EF               [12] 3235 	mov	a,r7
      0009AC 70 06            [24] 3236 	jnz	00108$
      0009AE 85 3A 46         [24] 3237 	mov	_RUDDER_PW,_PW_LEFT_RUDDER
      0009B1 85 3B 47         [24] 3238 	mov	(_RUDDER_PW + 1),(_PW_LEFT_RUDDER + 1)
      0009B4                       3239 00108$:
                           0008CC  3240 	C$lab6.c$258$5$147 ==.
                                   3241 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:258: st =1;
      0009B4 7F 01            [12] 3242 	mov	r7,#0x01
      0009B6                       3243 00110$:
                           0008CE  3244 	C$lab6.c$260$4$146 ==.
                                   3245 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:260: value = kpd_input(1);
      0009B6 75 82 01         [24] 3246 	mov	dpl,#0x01
      0009B9 C0 07            [24] 3247 	push	ar7
      0009BB 12 02 81         [24] 3248 	lcall	_kpd_input
      0009BE AD 82            [24] 3249 	mov	r5,dpl
      0009C0 AE 83            [24] 3250 	mov	r6,dph
      0009C2 D0 07            [24] 3251 	pop	ar7
      0009C4 90 00 57         [24] 3252 	mov	dptr,#_Rudder_cal_value_1_143
      0009C7 ED               [12] 3253 	mov	a,r5
      0009C8 F0               [24] 3254 	movx	@dptr,a
      0009C9 EE               [12] 3255 	mov	a,r6
      0009CA A3               [24] 3256 	inc	dptr
      0009CB F0               [24] 3257 	movx	@dptr,a
                           0008E4  3258 	C$lab6.c$261$4$146 ==.
                                   3259 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:261: if (value == 1)
      0009CC BD 01 12         [24] 3260 	cjne	r5,#0x01,00117$
      0009CF BE 00 0F         [24] 3261 	cjne	r6,#0x00,00117$
                           0008EA  3262 	C$lab6.c$263$5$148 ==.
                                   3263 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:263: RUDDER_PW -= 20;
      0009D2 E5 46            [12] 3264 	mov	a,_RUDDER_PW
      0009D4 24 EC            [12] 3265 	add	a,#0xEC
      0009D6 F5 46            [12] 3266 	mov	_RUDDER_PW,a
      0009D8 E5 47            [12] 3267 	mov	a,(_RUDDER_PW + 1)
      0009DA 34 FF            [12] 3268 	addc	a,#0xFF
      0009DC F5 47            [12] 3269 	mov	(_RUDDER_PW + 1),a
      0009DE 02 09 46         [24] 3270 	ljmp	00146$
      0009E1                       3271 00117$:
                           0008F9  3272 	C$lab6.c$265$4$146 ==.
                                   3273 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:265: else if (value==2)
      0009E1 90 00 57         [24] 3274 	mov	dptr,#_Rudder_cal_value_1_143
      0009E4 E0               [24] 3275 	movx	a,@dptr
      0009E5 FD               [12] 3276 	mov	r5,a
      0009E6 A3               [24] 3277 	inc	dptr
      0009E7 E0               [24] 3278 	movx	a,@dptr
      0009E8 FE               [12] 3279 	mov	r6,a
      0009E9 BD 02 11         [24] 3280 	cjne	r5,#0x02,00114$
      0009EC BE 00 0E         [24] 3281 	cjne	r6,#0x00,00114$
                           000907  3282 	C$lab6.c$267$5$149 ==.
                                   3283 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:267: RUDDER_PW += 20;
      0009EF 74 14            [12] 3284 	mov	a,#0x14
      0009F1 25 46            [12] 3285 	add	a,_RUDDER_PW
      0009F3 F5 46            [12] 3286 	mov	_RUDDER_PW,a
      0009F5 E4               [12] 3287 	clr	a
      0009F6 35 47            [12] 3288 	addc	a,(_RUDDER_PW + 1)
      0009F8 F5 47            [12] 3289 	mov	(_RUDDER_PW + 1),a
      0009FA 02 09 46         [24] 3290 	ljmp	00146$
      0009FD                       3291 00114$:
                           000915  3292 	C$lab6.c$269$4$146 ==.
                                   3293 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:269: else if (value == 3)
      0009FD 90 00 57         [24] 3294 	mov	dptr,#_Rudder_cal_value_1_143
      000A00 E0               [24] 3295 	movx	a,@dptr
      000A01 FD               [12] 3296 	mov	r5,a
      000A02 A3               [24] 3297 	inc	dptr
      000A03 E0               [24] 3298 	movx	a,@dptr
      000A04 FE               [12] 3299 	mov	r6,a
      000A05 BD 03 05         [24] 3300 	cjne	r5,#0x03,00222$
      000A08 BE 00 02         [24] 3301 	cjne	r6,#0x00,00222$
      000A0B 80 03            [24] 3302 	sjmp	00223$
      000A0D                       3303 00222$:
      000A0D 02 09 46         [24] 3304 	ljmp	00146$
      000A10                       3305 00223$:
                           000928  3306 	C$lab6.c$271$5$150 ==.
                                   3307 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:271: times++;
      000A10 90 00 59         [24] 3308 	mov	dptr,#_Rudder_cal_times_1_143
      000A13 E0               [24] 3309 	movx	a,@dptr
      000A14 24 01            [12] 3310 	add	a,#0x01
      000A16 F0               [24] 3311 	movx	@dptr,a
      000A17 A3               [24] 3312 	inc	dptr
      000A18 E0               [24] 3313 	movx	a,@dptr
      000A19 34 00            [12] 3314 	addc	a,#0x00
      000A1B F0               [24] 3315 	movx	@dptr,a
                           000934  3316 	C$lab6.c$272$5$150 ==.
                                   3317 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:272: value =0;
      000A1C 90 00 57         [24] 3318 	mov	dptr,#_Rudder_cal_value_1_143
      000A1F E4               [12] 3319 	clr	a
      000A20 F0               [24] 3320 	movx	@dptr,a
      000A21 A3               [24] 3321 	inc	dptr
      000A22 F0               [24] 3322 	movx	@dptr,a
                           00093B  3323 	C$lab6.c$273$5$150 ==.
                                   3324 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:273: PW_LEFT_RUDDER = RUDDER_PW;
      000A23 85 46 3A         [24] 3325 	mov	_PW_LEFT_RUDDER,_RUDDER_PW
      000A26 85 47 3B         [24] 3326 	mov	(_PW_LEFT_RUDDER + 1),(_RUDDER_PW + 1)
      000A29 02 09 46         [24] 3327 	ljmp	00146$
      000A2C                       3328 00143$:
                           000944  3329 	C$lab6.c$276$3$145 ==.
                                   3330 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:276: else if (times ==1)
      000A2C 90 00 59         [24] 3331 	mov	dptr,#_Rudder_cal_times_1_143
      000A2F E0               [24] 3332 	movx	a,@dptr
      000A30 FD               [12] 3333 	mov	r5,a
      000A31 A3               [24] 3334 	inc	dptr
      000A32 E0               [24] 3335 	movx	a,@dptr
      000A33 FE               [12] 3336 	mov	r6,a
      000A34 BD 01 05         [24] 3337 	cjne	r5,#0x01,00224$
      000A37 BE 00 02         [24] 3338 	cjne	r6,#0x00,00224$
      000A3A 80 03            [24] 3339 	sjmp	00225$
      000A3C                       3340 00224$:
      000A3C 02 0A E2         [24] 3341 	ljmp	00140$
      000A3F                       3342 00225$:
                           000957  3343 	C$lab6.c$278$4$151 ==.
                                   3344 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:278: if (value ==0)
      000A3F 90 00 57         [24] 3345 	mov	dptr,#_Rudder_cal_value_1_143
      000A42 E0               [24] 3346 	movx	a,@dptr
      000A43 FD               [12] 3347 	mov	r5,a
      000A44 A3               [24] 3348 	inc	dptr
      000A45 E0               [24] 3349 	movx	a,@dptr
      000A46 FE               [12] 3350 	mov	r6,a
      000A47 4D               [12] 3351 	orl	a,r5
      000A48 70 22            [24] 3352 	jnz	00120$
                           000962  3353 	C$lab6.c$280$5$152 ==.
                                   3354 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:280: lcd_clear();
      000A4A C0 07            [24] 3355 	push	ar7
      000A4C 12 01 C9         [24] 3356 	lcall	_lcd_clear
                           000967  3357 	C$lab6.c$281$5$152 ==.
                                   3358 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:281: lcd_print("Now calibrating Cen_PW");
      000A4F 74 B2            [12] 3359 	mov	a,#___str_14
      000A51 C0 E0            [24] 3360 	push	acc
      000A53 74 1C            [12] 3361 	mov	a,#(___str_14 >> 8)
      000A55 C0 E0            [24] 3362 	push	acc
      000A57 74 80            [12] 3363 	mov	a,#0x80
      000A59 C0 E0            [24] 3364 	push	acc
      000A5B 12 01 44         [24] 3365 	lcall	_lcd_print
      000A5E 15 81            [12] 3366 	dec	sp
      000A60 15 81            [12] 3367 	dec	sp
      000A62 15 81            [12] 3368 	dec	sp
      000A64 D0 07            [24] 3369 	pop	ar7
                           00097E  3370 	C$lab6.c$282$5$152 ==.
                                   3371 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:282: RUDDER_PW = PW_CENTER_RUDDER;
      000A66 85 3C 46         [24] 3372 	mov	_RUDDER_PW,_PW_CENTER_RUDDER
      000A69 85 3D 47         [24] 3373 	mov	(_RUDDER_PW + 1),(_PW_CENTER_RUDDER + 1)
      000A6C                       3374 00120$:
                           000984  3375 	C$lab6.c$284$4$151 ==.
                                   3376 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:284: value = kpd_input(1);
      000A6C 75 82 01         [24] 3377 	mov	dpl,#0x01
      000A6F C0 07            [24] 3378 	push	ar7
      000A71 12 02 81         [24] 3379 	lcall	_kpd_input
      000A74 AD 82            [24] 3380 	mov	r5,dpl
      000A76 AE 83            [24] 3381 	mov	r6,dph
      000A78 D0 07            [24] 3382 	pop	ar7
      000A7A 90 00 57         [24] 3383 	mov	dptr,#_Rudder_cal_value_1_143
      000A7D ED               [12] 3384 	mov	a,r5
      000A7E F0               [24] 3385 	movx	@dptr,a
      000A7F EE               [12] 3386 	mov	a,r6
      000A80 A3               [24] 3387 	inc	dptr
      000A81 F0               [24] 3388 	movx	@dptr,a
                           00099A  3389 	C$lab6.c$285$4$151 ==.
                                   3390 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:285: if (value == 1)
      000A82 BD 01 12         [24] 3391 	cjne	r5,#0x01,00127$
      000A85 BE 00 0F         [24] 3392 	cjne	r6,#0x00,00127$
                           0009A0  3393 	C$lab6.c$287$5$153 ==.
                                   3394 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:287: RUDDER_PW -= 20;
      000A88 E5 46            [12] 3395 	mov	a,_RUDDER_PW
      000A8A 24 EC            [12] 3396 	add	a,#0xEC
      000A8C F5 46            [12] 3397 	mov	_RUDDER_PW,a
      000A8E E5 47            [12] 3398 	mov	a,(_RUDDER_PW + 1)
      000A90 34 FF            [12] 3399 	addc	a,#0xFF
      000A92 F5 47            [12] 3400 	mov	(_RUDDER_PW + 1),a
      000A94 02 09 46         [24] 3401 	ljmp	00146$
      000A97                       3402 00127$:
                           0009AF  3403 	C$lab6.c$289$4$151 ==.
                                   3404 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:289: else if (value==2)
      000A97 90 00 57         [24] 3405 	mov	dptr,#_Rudder_cal_value_1_143
      000A9A E0               [24] 3406 	movx	a,@dptr
      000A9B FD               [12] 3407 	mov	r5,a
      000A9C A3               [24] 3408 	inc	dptr
      000A9D E0               [24] 3409 	movx	a,@dptr
      000A9E FE               [12] 3410 	mov	r6,a
      000A9F BD 02 11         [24] 3411 	cjne	r5,#0x02,00124$
      000AA2 BE 00 0E         [24] 3412 	cjne	r6,#0x00,00124$
                           0009BD  3413 	C$lab6.c$291$5$154 ==.
                                   3414 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:291: RUDDER_PW += 20;
      000AA5 74 14            [12] 3415 	mov	a,#0x14
      000AA7 25 46            [12] 3416 	add	a,_RUDDER_PW
      000AA9 F5 46            [12] 3417 	mov	_RUDDER_PW,a
      000AAB E4               [12] 3418 	clr	a
      000AAC 35 47            [12] 3419 	addc	a,(_RUDDER_PW + 1)
      000AAE F5 47            [12] 3420 	mov	(_RUDDER_PW + 1),a
      000AB0 02 09 46         [24] 3421 	ljmp	00146$
      000AB3                       3422 00124$:
                           0009CB  3423 	C$lab6.c$293$4$151 ==.
                                   3424 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:293: else if (value == 3)
      000AB3 90 00 57         [24] 3425 	mov	dptr,#_Rudder_cal_value_1_143
      000AB6 E0               [24] 3426 	movx	a,@dptr
      000AB7 FD               [12] 3427 	mov	r5,a
      000AB8 A3               [24] 3428 	inc	dptr
      000AB9 E0               [24] 3429 	movx	a,@dptr
      000ABA FE               [12] 3430 	mov	r6,a
      000ABB BD 03 05         [24] 3431 	cjne	r5,#0x03,00231$
      000ABE BE 00 02         [24] 3432 	cjne	r6,#0x00,00231$
      000AC1 80 03            [24] 3433 	sjmp	00232$
      000AC3                       3434 00231$:
      000AC3 02 09 46         [24] 3435 	ljmp	00146$
      000AC6                       3436 00232$:
                           0009DE  3437 	C$lab6.c$295$5$155 ==.
                                   3438 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:295: times++;
      000AC6 90 00 59         [24] 3439 	mov	dptr,#_Rudder_cal_times_1_143
      000AC9 E0               [24] 3440 	movx	a,@dptr
      000ACA 24 01            [12] 3441 	add	a,#0x01
      000ACC F0               [24] 3442 	movx	@dptr,a
      000ACD A3               [24] 3443 	inc	dptr
      000ACE E0               [24] 3444 	movx	a,@dptr
      000ACF 34 00            [12] 3445 	addc	a,#0x00
      000AD1 F0               [24] 3446 	movx	@dptr,a
                           0009EA  3447 	C$lab6.c$296$5$155 ==.
                                   3448 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:296: value=0;
      000AD2 90 00 57         [24] 3449 	mov	dptr,#_Rudder_cal_value_1_143
      000AD5 E4               [12] 3450 	clr	a
      000AD6 F0               [24] 3451 	movx	@dptr,a
      000AD7 A3               [24] 3452 	inc	dptr
      000AD8 F0               [24] 3453 	movx	@dptr,a
                           0009F1  3454 	C$lab6.c$297$5$155 ==.
                                   3455 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:297: PW_CENTER_RUDDER = RUDDER_PW;
      000AD9 85 46 3C         [24] 3456 	mov	_PW_CENTER_RUDDER,_RUDDER_PW
      000ADC 85 47 3D         [24] 3457 	mov	(_PW_CENTER_RUDDER + 1),(_RUDDER_PW + 1)
      000ADF 02 09 46         [24] 3458 	ljmp	00146$
      000AE2                       3459 00140$:
                           0009FA  3460 	C$lab6.c$302$4$156 ==.
                                   3461 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:302: if (value==0)
      000AE2 90 00 57         [24] 3462 	mov	dptr,#_Rudder_cal_value_1_143
      000AE5 E0               [24] 3463 	movx	a,@dptr
      000AE6 FD               [12] 3464 	mov	r5,a
      000AE7 A3               [24] 3465 	inc	dptr
      000AE8 E0               [24] 3466 	movx	a,@dptr
      000AE9 FE               [12] 3467 	mov	r6,a
      000AEA 4D               [12] 3468 	orl	a,r5
      000AEB 70 22            [24] 3469 	jnz	00130$
                           000A05  3470 	C$lab6.c$304$5$157 ==.
                                   3471 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:304: lcd_clear();
      000AED C0 07            [24] 3472 	push	ar7
      000AEF 12 01 C9         [24] 3473 	lcall	_lcd_clear
                           000A0A  3474 	C$lab6.c$305$5$157 ==.
                                   3475 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:305: lcd_print("Now calibrating Max_PW");
      000AF2 74 C9            [12] 3476 	mov	a,#___str_15
      000AF4 C0 E0            [24] 3477 	push	acc
      000AF6 74 1C            [12] 3478 	mov	a,#(___str_15 >> 8)
      000AF8 C0 E0            [24] 3479 	push	acc
      000AFA 74 80            [12] 3480 	mov	a,#0x80
      000AFC C0 E0            [24] 3481 	push	acc
      000AFE 12 01 44         [24] 3482 	lcall	_lcd_print
      000B01 15 81            [12] 3483 	dec	sp
      000B03 15 81            [12] 3484 	dec	sp
      000B05 15 81            [12] 3485 	dec	sp
      000B07 D0 07            [24] 3486 	pop	ar7
                           000A21  3487 	C$lab6.c$306$5$157 ==.
                                   3488 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:306: RUDDER_PW = PW_RIGHT_RUDDER;
      000B09 85 3E 46         [24] 3489 	mov	_RUDDER_PW,_PW_RIGHT_RUDDER
      000B0C 85 3F 47         [24] 3490 	mov	(_RUDDER_PW + 1),(_PW_RIGHT_RUDDER + 1)
      000B0F                       3491 00130$:
                           000A27  3492 	C$lab6.c$308$4$156 ==.
                                   3493 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:308: value = kpd_input(1);
      000B0F 75 82 01         [24] 3494 	mov	dpl,#0x01
      000B12 C0 07            [24] 3495 	push	ar7
      000B14 12 02 81         [24] 3496 	lcall	_kpd_input
      000B17 AD 82            [24] 3497 	mov	r5,dpl
      000B19 AE 83            [24] 3498 	mov	r6,dph
      000B1B D0 07            [24] 3499 	pop	ar7
      000B1D 90 00 57         [24] 3500 	mov	dptr,#_Rudder_cal_value_1_143
      000B20 ED               [12] 3501 	mov	a,r5
      000B21 F0               [24] 3502 	movx	@dptr,a
      000B22 EE               [12] 3503 	mov	a,r6
      000B23 A3               [24] 3504 	inc	dptr
      000B24 F0               [24] 3505 	movx	@dptr,a
                           000A3D  3506 	C$lab6.c$309$4$156 ==.
                                   3507 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:309: if (value == 1)
      000B25 BD 01 12         [24] 3508 	cjne	r5,#0x01,00137$
      000B28 BE 00 0F         [24] 3509 	cjne	r6,#0x00,00137$
                           000A43  3510 	C$lab6.c$311$5$158 ==.
                                   3511 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:311: RUDDER_PW -= 20;
      000B2B E5 46            [12] 3512 	mov	a,_RUDDER_PW
      000B2D 24 EC            [12] 3513 	add	a,#0xEC
      000B2F F5 46            [12] 3514 	mov	_RUDDER_PW,a
      000B31 E5 47            [12] 3515 	mov	a,(_RUDDER_PW + 1)
      000B33 34 FF            [12] 3516 	addc	a,#0xFF
      000B35 F5 47            [12] 3517 	mov	(_RUDDER_PW + 1),a
      000B37 02 09 46         [24] 3518 	ljmp	00146$
      000B3A                       3519 00137$:
                           000A52  3520 	C$lab6.c$313$4$156 ==.
                                   3521 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:313: else if (value==2)
      000B3A 90 00 57         [24] 3522 	mov	dptr,#_Rudder_cal_value_1_143
      000B3D E0               [24] 3523 	movx	a,@dptr
      000B3E FD               [12] 3524 	mov	r5,a
      000B3F A3               [24] 3525 	inc	dptr
      000B40 E0               [24] 3526 	movx	a,@dptr
      000B41 FE               [12] 3527 	mov	r6,a
      000B42 BD 02 11         [24] 3528 	cjne	r5,#0x02,00134$
      000B45 BE 00 0E         [24] 3529 	cjne	r6,#0x00,00134$
                           000A60  3530 	C$lab6.c$315$5$159 ==.
                                   3531 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:315: RUDDER_PW += 20;
      000B48 74 14            [12] 3532 	mov	a,#0x14
      000B4A 25 46            [12] 3533 	add	a,_RUDDER_PW
      000B4C F5 46            [12] 3534 	mov	_RUDDER_PW,a
      000B4E E4               [12] 3535 	clr	a
      000B4F 35 47            [12] 3536 	addc	a,(_RUDDER_PW + 1)
      000B51 F5 47            [12] 3537 	mov	(_RUDDER_PW + 1),a
      000B53 02 09 46         [24] 3538 	ljmp	00146$
      000B56                       3539 00134$:
                           000A6E  3540 	C$lab6.c$317$4$156 ==.
                                   3541 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:317: else if (value == 3)
      000B56 90 00 57         [24] 3542 	mov	dptr,#_Rudder_cal_value_1_143
      000B59 E0               [24] 3543 	movx	a,@dptr
      000B5A FD               [12] 3544 	mov	r5,a
      000B5B A3               [24] 3545 	inc	dptr
      000B5C E0               [24] 3546 	movx	a,@dptr
      000B5D FE               [12] 3547 	mov	r6,a
      000B5E BD 03 05         [24] 3548 	cjne	r5,#0x03,00238$
      000B61 BE 00 02         [24] 3549 	cjne	r6,#0x00,00238$
      000B64 80 03            [24] 3550 	sjmp	00239$
      000B66                       3551 00238$:
      000B66 02 09 46         [24] 3552 	ljmp	00146$
      000B69                       3553 00239$:
                           000A81  3554 	C$lab6.c$319$5$160 ==.
                                   3555 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:319: PW_RIGHT_RUDDER = RUDDER_PW;
      000B69 85 46 3E         [24] 3556 	mov	_PW_RIGHT_RUDDER,_RUDDER_PW
      000B6C 85 47 3F         [24] 3557 	mov	(_PW_RIGHT_RUDDER + 1),(_RUDDER_PW + 1)
                           000A87  3558 	C$lab6.c$320$5$160 ==.
                                   3559 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:320: return;
                           000A87  3560 	C$lab6.c$329$1$143 ==.
                           000A87  3561 	XG$Rudder_cal$0$0 ==.
      000B6F 22               [24] 3562 	ret
                                   3563 ;------------------------------------------------------------
                                   3564 ;Allocation info for local variables in function 'Angle_cal'
                                   3565 ;------------------------------------------------------------
                                   3566 ;st                        Allocated to registers r7 
                                   3567 ;value                     Allocated with name '_Angle_cal_value_1_162'
                                   3568 ;times                     Allocated with name '_Angle_cal_times_1_162'
                                   3569 ;------------------------------------------------------------
                           000A88  3570 	G$Angle_cal$0$0 ==.
                           000A88  3571 	C$lab6.c$331$1$143 ==.
                                   3572 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:331: void Angle_cal(void)
                                   3573 ;	-----------------------------------------
                                   3574 ;	 function Angle_cal
                                   3575 ;	-----------------------------------------
      000B70                       3576 _Angle_cal:
                           000A88  3577 	C$lab6.c$334$1$143 ==.
                                   3578 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:334: __xdata int value =0;
      000B70 90 00 5B         [24] 3579 	mov	dptr,#_Angle_cal_value_1_162
      000B73 E4               [12] 3580 	clr	a
      000B74 F0               [24] 3581 	movx	@dptr,a
      000B75 A3               [24] 3582 	inc	dptr
      000B76 F0               [24] 3583 	movx	@dptr,a
                           000A8F  3584 	C$lab6.c$335$1$143 ==.
                                   3585 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:335: __xdata int times =0;
      000B77 90 00 5D         [24] 3586 	mov	dptr,#_Angle_cal_times_1_162
      000B7A F0               [24] 3587 	movx	@dptr,a
      000B7B A3               [24] 3588 	inc	dptr
      000B7C F0               [24] 3589 	movx	@dptr,a
                           000A95  3590 	C$lab6.c$336$1$162 ==.
                                   3591 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:336: count =0;
      000B7D F5 32            [12] 3592 	mov	_count,a
      000B7F F5 33            [12] 3593 	mov	(_count + 1),a
                           000A99  3594 	C$lab6.c$337$1$162 ==.
                                   3595 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:337: lcd_clear();
      000B81 12 01 C9         [24] 3596 	lcall	_lcd_clear
                           000A9C  3597 	C$lab6.c$338$1$162 ==.
                                   3598 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:338: lcd_print("Angle Calibration");
      000B84 74 E0            [12] 3599 	mov	a,#___str_16
      000B86 C0 E0            [24] 3600 	push	acc
      000B88 74 1C            [12] 3601 	mov	a,#(___str_16 >> 8)
      000B8A C0 E0            [24] 3602 	push	acc
      000B8C 74 80            [12] 3603 	mov	a,#0x80
      000B8E C0 E0            [24] 3604 	push	acc
      000B90 12 01 44         [24] 3605 	lcall	_lcd_print
      000B93 15 81            [12] 3606 	dec	sp
      000B95 15 81            [12] 3607 	dec	sp
      000B97 15 81            [12] 3608 	dec	sp
                           000AB1  3609 	C$lab6.c$339$1$162 ==.
                                   3610 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:339: while (count < 50);
      000B99                       3611 00101$:
      000B99 C3               [12] 3612 	clr	c
      000B9A E5 32            [12] 3613 	mov	a,_count
      000B9C 94 32            [12] 3614 	subb	a,#0x32
      000B9E E5 33            [12] 3615 	mov	a,(_count + 1)
      000BA0 64 80            [12] 3616 	xrl	a,#0x80
      000BA2 94 80            [12] 3617 	subb	a,#0x80
      000BA4 40 F3            [24] 3618 	jc	00101$
                           000ABE  3619 	C$lab6.c$340$1$162 ==.
                                   3620 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:340: lcd_clear();
      000BA6 12 01 C9         [24] 3621 	lcall	_lcd_clear
                           000AC1  3622 	C$lab6.c$343$2$163 ==.
                                   3623 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:343: count = 0;
      000BA9 E4               [12] 3624 	clr	a
      000BAA F5 32            [12] 3625 	mov	_count,a
      000BAC F5 33            [12] 3626 	mov	(_count + 1),a
                           000AC6  3627 	C$lab6.c$344$2$163 ==.
                                   3628 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:344: while (count < 1);
      000BAE                       3629 00104$:
      000BAE C3               [12] 3630 	clr	c
      000BAF E5 32            [12] 3631 	mov	a,_count
      000BB1 94 01            [12] 3632 	subb	a,#0x01
      000BB3 E5 33            [12] 3633 	mov	a,(_count + 1)
      000BB5 64 80            [12] 3634 	xrl	a,#0x80
      000BB7 94 80            [12] 3635 	subb	a,#0x80
      000BB9 40 F3            [24] 3636 	jc	00104$
                           000AD3  3637 	C$lab6.c$345$2$163 ==.
                                   3638 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:345: lcd_clear();
      000BBB 12 01 C9         [24] 3639 	lcall	_lcd_clear
                           000AD6  3640 	C$lab6.c$346$2$163 ==.
                                   3641 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:346: lcd_print("go left: press 1\n go right: press 2\nPress * for next screen");
      000BBE 74 33            [12] 3642 	mov	a,#___str_10
      000BC0 C0 E0            [24] 3643 	push	acc
      000BC2 74 1C            [12] 3644 	mov	a,#(___str_10 >> 8)
      000BC4 C0 E0            [24] 3645 	push	acc
      000BC6 74 80            [12] 3646 	mov	a,#0x80
      000BC8 C0 E0            [24] 3647 	push	acc
      000BCA 12 01 44         [24] 3648 	lcall	_lcd_print
      000BCD 15 81            [12] 3649 	dec	sp
      000BCF 15 81            [12] 3650 	dec	sp
      000BD1 15 81            [12] 3651 	dec	sp
                           000AEB  3652 	C$lab6.c$347$2$163 ==.
                                   3653 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:347: start();
      000BD3 12 12 DD         [24] 3654 	lcall	_start
                           000AEE  3655 	C$lab6.c$348$2$163 ==.
                                   3656 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:348: lcd_clear();
      000BD6 12 01 C9         [24] 3657 	lcall	_lcd_clear
                           000AF1  3658 	C$lab6.c$349$2$163 ==.
                                   3659 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:349: lcd_print("\n confirm: press 3\n press * to begin");
      000BD9 74 6F            [12] 3660 	mov	a,#___str_11
      000BDB C0 E0            [24] 3661 	push	acc
      000BDD 74 1C            [12] 3662 	mov	a,#(___str_11 >> 8)
      000BDF C0 E0            [24] 3663 	push	acc
      000BE1 74 80            [12] 3664 	mov	a,#0x80
      000BE3 C0 E0            [24] 3665 	push	acc
      000BE5 12 01 44         [24] 3666 	lcall	_lcd_print
      000BE8 15 81            [12] 3667 	dec	sp
      000BEA 15 81            [12] 3668 	dec	sp
      000BEC 15 81            [12] 3669 	dec	sp
                           000B06  3670 	C$lab6.c$350$2$163 ==.
                                   3671 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:350: start();
      000BEE 12 12 DD         [24] 3672 	lcall	_start
                           000B09  3673 	C$lab6.c$351$2$163 ==.
                                   3674 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:351: st =0;
      000BF1 7F 00            [12] 3675 	mov	r7,#0x00
                           000B0B  3676 	C$lab6.c$352$5$166 ==.
                                   3677 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:352: while (1)
      000BF3                       3678 00150$:
                           000B0B  3679 	C$lab6.c$354$3$164 ==.
                                   3680 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:354: printf("\r\n %u",ANGLE_PW);
      000BF3 C0 07            [24] 3681 	push	ar7
      000BF5 C0 4A            [24] 3682 	push	_ANGLE_PW
      000BF7 C0 4B            [24] 3683 	push	(_ANGLE_PW + 1)
      000BF9 74 94            [12] 3684 	mov	a,#___str_12
      000BFB C0 E0            [24] 3685 	push	acc
      000BFD 74 1C            [12] 3686 	mov	a,#(___str_12 >> 8)
      000BFF C0 E0            [24] 3687 	push	acc
      000C01 74 80            [12] 3688 	mov	a,#0x80
      000C03 C0 E0            [24] 3689 	push	acc
      000C05 12 15 1B         [24] 3690 	lcall	_printf
      000C08 E5 81            [12] 3691 	mov	a,sp
      000C0A 24 FB            [12] 3692 	add	a,#0xfb
      000C0C F5 81            [12] 3693 	mov	sp,a
      000C0E D0 07            [24] 3694 	pop	ar7
                           000B28  3695 	C$lab6.c$355$3$164 ==.
                                   3696 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:355: AGL_lo_to_hi = 0xFFFF - ANGLE_PW;
      000C10 74 FF            [12] 3697 	mov	a,#0xFF
      000C12 C3               [12] 3698 	clr	c
      000C13 95 4A            [12] 3699 	subb	a,_ANGLE_PW
      000C15 F5 4C            [12] 3700 	mov	_AGL_lo_to_hi,a
      000C17 74 FF            [12] 3701 	mov	a,#0xFF
      000C19 95 4B            [12] 3702 	subb	a,(_ANGLE_PW + 1)
      000C1B F5 4D            [12] 3703 	mov	(_AGL_lo_to_hi + 1),a
                           000B35  3704 	C$lab6.c$356$3$164 ==.
                                   3705 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:356: PCA0CP1 = AGL_lo_to_hi;
      000C1D 85 4C EB         [24] 3706 	mov	((_PCA0CP1 >> 0) & 0xFF),_AGL_lo_to_hi
      000C20 85 4D FB         [24] 3707 	mov	((_PCA0CP1 >> 8) & 0xFF),(_AGL_lo_to_hi + 1)
                           000B3B  3708 	C$lab6.c$358$3$164 ==.
                                   3709 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:358: if (times == 0 )
      000C23 90 00 5D         [24] 3710 	mov	dptr,#_Angle_cal_times_1_162
      000C26 E0               [24] 3711 	movx	a,@dptr
      000C27 FD               [12] 3712 	mov	r5,a
      000C28 A3               [24] 3713 	inc	dptr
      000C29 E0               [24] 3714 	movx	a,@dptr
      000C2A FE               [12] 3715 	mov	r6,a
      000C2B 4D               [12] 3716 	orl	a,r5
      000C2C 60 03            [24] 3717 	jz	00225$
      000C2E 02 0C DB         [24] 3718 	ljmp	00147$
      000C31                       3719 00225$:
                           000B49  3720 	C$lab6.c$360$4$165 ==.
                                   3721 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:360: if (value ==0)
      000C31 90 00 5B         [24] 3722 	mov	dptr,#_Angle_cal_value_1_162
      000C34 E0               [24] 3723 	movx	a,@dptr
      000C35 FD               [12] 3724 	mov	r5,a
      000C36 A3               [24] 3725 	inc	dptr
      000C37 E0               [24] 3726 	movx	a,@dptr
      000C38 FE               [12] 3727 	mov	r6,a
      000C39 4D               [12] 3728 	orl	a,r5
      000C3A 70 27            [24] 3729 	jnz	00110$
                           000B54  3730 	C$lab6.c$362$5$166 ==.
                                   3731 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:362: lcd_clear();
      000C3C C0 07            [24] 3732 	push	ar7
      000C3E 12 01 C9         [24] 3733 	lcall	_lcd_clear
                           000B59  3734 	C$lab6.c$363$5$166 ==.
                                   3735 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:363: lcd_print("Now calibrating Min_PW UP ANGLE");
      000C41 74 F2            [12] 3736 	mov	a,#___str_17
      000C43 C0 E0            [24] 3737 	push	acc
      000C45 74 1C            [12] 3738 	mov	a,#(___str_17 >> 8)
      000C47 C0 E0            [24] 3739 	push	acc
      000C49 74 80            [12] 3740 	mov	a,#0x80
      000C4B C0 E0            [24] 3741 	push	acc
      000C4D 12 01 44         [24] 3742 	lcall	_lcd_print
      000C50 15 81            [12] 3743 	dec	sp
      000C52 15 81            [12] 3744 	dec	sp
      000C54 15 81            [12] 3745 	dec	sp
      000C56 D0 07            [24] 3746 	pop	ar7
                           000B70  3747 	C$lab6.c$364$5$166 ==.
                                   3748 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:364: if (st == 0) ANGLE_PW = PW_UP_ANGLE;
      000C58 EF               [12] 3749 	mov	a,r7
      000C59 70 06            [24] 3750 	jnz	00108$
      000C5B 85 40 4A         [24] 3751 	mov	_ANGLE_PW,_PW_UP_ANGLE
      000C5E 85 41 4B         [24] 3752 	mov	(_ANGLE_PW + 1),(_PW_UP_ANGLE + 1)
      000C61                       3753 00108$:
                           000B79  3754 	C$lab6.c$365$5$166 ==.
                                   3755 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:365: st =1;
      000C61 7F 01            [12] 3756 	mov	r7,#0x01
      000C63                       3757 00110$:
                           000B7B  3758 	C$lab6.c$367$4$165 ==.
                                   3759 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:367: value = kpd_input(1);
      000C63 75 82 01         [24] 3760 	mov	dpl,#0x01
      000C66 C0 07            [24] 3761 	push	ar7
      000C68 12 02 81         [24] 3762 	lcall	_kpd_input
      000C6B AD 82            [24] 3763 	mov	r5,dpl
      000C6D AE 83            [24] 3764 	mov	r6,dph
      000C6F D0 07            [24] 3765 	pop	ar7
      000C71 90 00 5B         [24] 3766 	mov	dptr,#_Angle_cal_value_1_162
      000C74 ED               [12] 3767 	mov	a,r5
      000C75 F0               [24] 3768 	movx	@dptr,a
      000C76 EE               [12] 3769 	mov	a,r6
      000C77 A3               [24] 3770 	inc	dptr
      000C78 F0               [24] 3771 	movx	@dptr,a
                           000B91  3772 	C$lab6.c$368$4$165 ==.
                                   3773 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:368: if (value == 1)
      000C79 BD 01 12         [24] 3774 	cjne	r5,#0x01,00117$
      000C7C BE 00 0F         [24] 3775 	cjne	r6,#0x00,00117$
                           000B97  3776 	C$lab6.c$370$5$167 ==.
                                   3777 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:370: ANGLE_PW -= 30;
      000C7F E5 4A            [12] 3778 	mov	a,_ANGLE_PW
      000C81 24 E2            [12] 3779 	add	a,#0xE2
      000C83 F5 4A            [12] 3780 	mov	_ANGLE_PW,a
      000C85 E5 4B            [12] 3781 	mov	a,(_ANGLE_PW + 1)
      000C87 34 FF            [12] 3782 	addc	a,#0xFF
      000C89 F5 4B            [12] 3783 	mov	(_ANGLE_PW + 1),a
      000C8B 02 0B F3         [24] 3784 	ljmp	00150$
      000C8E                       3785 00117$:
                           000BA6  3786 	C$lab6.c$372$4$165 ==.
                                   3787 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:372: else if (value==2)
      000C8E 90 00 5B         [24] 3788 	mov	dptr,#_Angle_cal_value_1_162
      000C91 E0               [24] 3789 	movx	a,@dptr
      000C92 FD               [12] 3790 	mov	r5,a
      000C93 A3               [24] 3791 	inc	dptr
      000C94 E0               [24] 3792 	movx	a,@dptr
      000C95 FE               [12] 3793 	mov	r6,a
      000C96 BD 02 11         [24] 3794 	cjne	r5,#0x02,00114$
      000C99 BE 00 0E         [24] 3795 	cjne	r6,#0x00,00114$
                           000BB4  3796 	C$lab6.c$374$5$168 ==.
                                   3797 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:374: ANGLE_PW += 30;
      000C9C 74 1E            [12] 3798 	mov	a,#0x1E
      000C9E 25 4A            [12] 3799 	add	a,_ANGLE_PW
      000CA0 F5 4A            [12] 3800 	mov	_ANGLE_PW,a
      000CA2 E4               [12] 3801 	clr	a
      000CA3 35 4B            [12] 3802 	addc	a,(_ANGLE_PW + 1)
      000CA5 F5 4B            [12] 3803 	mov	(_ANGLE_PW + 1),a
      000CA7 02 0B F3         [24] 3804 	ljmp	00150$
      000CAA                       3805 00114$:
                           000BC2  3806 	C$lab6.c$376$4$165 ==.
                                   3807 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:376: else if (value == 3)
      000CAA 90 00 5B         [24] 3808 	mov	dptr,#_Angle_cal_value_1_162
      000CAD E0               [24] 3809 	movx	a,@dptr
      000CAE FD               [12] 3810 	mov	r5,a
      000CAF A3               [24] 3811 	inc	dptr
      000CB0 E0               [24] 3812 	movx	a,@dptr
      000CB1 FE               [12] 3813 	mov	r6,a
      000CB2 BD 03 05         [24] 3814 	cjne	r5,#0x03,00232$
      000CB5 BE 00 02         [24] 3815 	cjne	r6,#0x00,00232$
      000CB8 80 03            [24] 3816 	sjmp	00233$
      000CBA                       3817 00232$:
      000CBA 02 0B F3         [24] 3818 	ljmp	00150$
      000CBD                       3819 00233$:
                           000BD5  3820 	C$lab6.c$378$5$169 ==.
                                   3821 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:378: times++;
      000CBD 90 00 5D         [24] 3822 	mov	dptr,#_Angle_cal_times_1_162
      000CC0 E0               [24] 3823 	movx	a,@dptr
      000CC1 24 01            [12] 3824 	add	a,#0x01
      000CC3 F0               [24] 3825 	movx	@dptr,a
      000CC4 A3               [24] 3826 	inc	dptr
      000CC5 E0               [24] 3827 	movx	a,@dptr
      000CC6 34 00            [12] 3828 	addc	a,#0x00
      000CC8 F0               [24] 3829 	movx	@dptr,a
                           000BE1  3830 	C$lab6.c$379$5$169 ==.
                                   3831 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:379: value =0;
      000CC9 90 00 5B         [24] 3832 	mov	dptr,#_Angle_cal_value_1_162
      000CCC E4               [12] 3833 	clr	a
      000CCD F0               [24] 3834 	movx	@dptr,a
      000CCE A3               [24] 3835 	inc	dptr
      000CCF F0               [24] 3836 	movx	@dptr,a
                           000BE8  3837 	C$lab6.c$380$5$169 ==.
                                   3838 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:380: st=0;
      000CD0 7F 00            [12] 3839 	mov	r7,#0x00
                           000BEA  3840 	C$lab6.c$381$5$169 ==.
                                   3841 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:381: PW_UP_ANGLE = ANGLE_PW;
      000CD2 85 4A 40         [24] 3842 	mov	_PW_UP_ANGLE,_ANGLE_PW
      000CD5 85 4B 41         [24] 3843 	mov	(_PW_UP_ANGLE + 1),(_ANGLE_PW + 1)
      000CD8 02 0B F3         [24] 3844 	ljmp	00150$
      000CDB                       3845 00147$:
                           000BF3  3846 	C$lab6.c$384$3$164 ==.
                                   3847 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:384: else if (times ==1)
      000CDB 90 00 5D         [24] 3848 	mov	dptr,#_Angle_cal_times_1_162
      000CDE E0               [24] 3849 	movx	a,@dptr
      000CDF FD               [12] 3850 	mov	r5,a
      000CE0 A3               [24] 3851 	inc	dptr
      000CE1 E0               [24] 3852 	movx	a,@dptr
      000CE2 FE               [12] 3853 	mov	r6,a
      000CE3 BD 01 05         [24] 3854 	cjne	r5,#0x01,00234$
      000CE6 BE 00 02         [24] 3855 	cjne	r6,#0x00,00234$
      000CE9 80 03            [24] 3856 	sjmp	00235$
      000CEB                       3857 00234$:
      000CEB 02 0D 98         [24] 3858 	ljmp	00144$
      000CEE                       3859 00235$:
                           000C06  3860 	C$lab6.c$386$4$170 ==.
                                   3861 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:386: if (value ==0)
      000CEE 90 00 5B         [24] 3862 	mov	dptr,#_Angle_cal_value_1_162
      000CF1 E0               [24] 3863 	movx	a,@dptr
      000CF2 FD               [12] 3864 	mov	r5,a
      000CF3 A3               [24] 3865 	inc	dptr
      000CF4 E0               [24] 3866 	movx	a,@dptr
      000CF5 FE               [12] 3867 	mov	r6,a
      000CF6 4D               [12] 3868 	orl	a,r5
      000CF7 70 27            [24] 3869 	jnz	00122$
                           000C11  3870 	C$lab6.c$388$5$171 ==.
                                   3871 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:388: lcd_clear();
      000CF9 C0 07            [24] 3872 	push	ar7
      000CFB 12 01 C9         [24] 3873 	lcall	_lcd_clear
                           000C16  3874 	C$lab6.c$389$5$171 ==.
                                   3875 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:389: lcd_print("Now calibrating Cen_PW");
      000CFE 74 B2            [12] 3876 	mov	a,#___str_14
      000D00 C0 E0            [24] 3877 	push	acc
      000D02 74 1C            [12] 3878 	mov	a,#(___str_14 >> 8)
      000D04 C0 E0            [24] 3879 	push	acc
      000D06 74 80            [12] 3880 	mov	a,#0x80
      000D08 C0 E0            [24] 3881 	push	acc
      000D0A 12 01 44         [24] 3882 	lcall	_lcd_print
      000D0D 15 81            [12] 3883 	dec	sp
      000D0F 15 81            [12] 3884 	dec	sp
      000D11 15 81            [12] 3885 	dec	sp
      000D13 D0 07            [24] 3886 	pop	ar7
                           000C2D  3887 	C$lab6.c$390$5$171 ==.
                                   3888 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:390: if (st == 0) ANGLE_PW = PW_CENTER_ANGLE;
      000D15 EF               [12] 3889 	mov	a,r7
      000D16 70 06            [24] 3890 	jnz	00120$
      000D18 85 42 4A         [24] 3891 	mov	_ANGLE_PW,_PW_CENTER_ANGLE
      000D1B 85 43 4B         [24] 3892 	mov	(_ANGLE_PW + 1),(_PW_CENTER_ANGLE + 1)
      000D1E                       3893 00120$:
                           000C36  3894 	C$lab6.c$391$5$171 ==.
                                   3895 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:391: st=1;
      000D1E 7F 01            [12] 3896 	mov	r7,#0x01
      000D20                       3897 00122$:
                           000C38  3898 	C$lab6.c$393$4$170 ==.
                                   3899 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:393: value = kpd_input(1);
      000D20 75 82 01         [24] 3900 	mov	dpl,#0x01
      000D23 C0 07            [24] 3901 	push	ar7
      000D25 12 02 81         [24] 3902 	lcall	_kpd_input
      000D28 AD 82            [24] 3903 	mov	r5,dpl
      000D2A AE 83            [24] 3904 	mov	r6,dph
      000D2C D0 07            [24] 3905 	pop	ar7
      000D2E 90 00 5B         [24] 3906 	mov	dptr,#_Angle_cal_value_1_162
      000D31 ED               [12] 3907 	mov	a,r5
      000D32 F0               [24] 3908 	movx	@dptr,a
      000D33 EE               [12] 3909 	mov	a,r6
      000D34 A3               [24] 3910 	inc	dptr
      000D35 F0               [24] 3911 	movx	@dptr,a
                           000C4E  3912 	C$lab6.c$394$4$170 ==.
                                   3913 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:394: if (value == 1)
      000D36 BD 01 12         [24] 3914 	cjne	r5,#0x01,00129$
      000D39 BE 00 0F         [24] 3915 	cjne	r6,#0x00,00129$
                           000C54  3916 	C$lab6.c$396$5$172 ==.
                                   3917 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:396: ANGLE_PW -= 30;
      000D3C E5 4A            [12] 3918 	mov	a,_ANGLE_PW
      000D3E 24 E2            [12] 3919 	add	a,#0xE2
      000D40 F5 4A            [12] 3920 	mov	_ANGLE_PW,a
      000D42 E5 4B            [12] 3921 	mov	a,(_ANGLE_PW + 1)
      000D44 34 FF            [12] 3922 	addc	a,#0xFF
      000D46 F5 4B            [12] 3923 	mov	(_ANGLE_PW + 1),a
      000D48 02 0B F3         [24] 3924 	ljmp	00150$
      000D4B                       3925 00129$:
                           000C63  3926 	C$lab6.c$398$4$170 ==.
                                   3927 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:398: else if (value==2)
      000D4B 90 00 5B         [24] 3928 	mov	dptr,#_Angle_cal_value_1_162
      000D4E E0               [24] 3929 	movx	a,@dptr
      000D4F FD               [12] 3930 	mov	r5,a
      000D50 A3               [24] 3931 	inc	dptr
      000D51 E0               [24] 3932 	movx	a,@dptr
      000D52 FE               [12] 3933 	mov	r6,a
      000D53 BD 02 11         [24] 3934 	cjne	r5,#0x02,00126$
      000D56 BE 00 0E         [24] 3935 	cjne	r6,#0x00,00126$
                           000C71  3936 	C$lab6.c$400$5$173 ==.
                                   3937 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:400: ANGLE_PW += 30;
      000D59 74 1E            [12] 3938 	mov	a,#0x1E
      000D5B 25 4A            [12] 3939 	add	a,_ANGLE_PW
      000D5D F5 4A            [12] 3940 	mov	_ANGLE_PW,a
      000D5F E4               [12] 3941 	clr	a
      000D60 35 4B            [12] 3942 	addc	a,(_ANGLE_PW + 1)
      000D62 F5 4B            [12] 3943 	mov	(_ANGLE_PW + 1),a
      000D64 02 0B F3         [24] 3944 	ljmp	00150$
      000D67                       3945 00126$:
                           000C7F  3946 	C$lab6.c$402$4$170 ==.
                                   3947 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:402: else if (value == 3)
      000D67 90 00 5B         [24] 3948 	mov	dptr,#_Angle_cal_value_1_162
      000D6A E0               [24] 3949 	movx	a,@dptr
      000D6B FD               [12] 3950 	mov	r5,a
      000D6C A3               [24] 3951 	inc	dptr
      000D6D E0               [24] 3952 	movx	a,@dptr
      000D6E FE               [12] 3953 	mov	r6,a
      000D6F BD 03 05         [24] 3954 	cjne	r5,#0x03,00242$
      000D72 BE 00 02         [24] 3955 	cjne	r6,#0x00,00242$
      000D75 80 03            [24] 3956 	sjmp	00243$
      000D77                       3957 00242$:
      000D77 02 0B F3         [24] 3958 	ljmp	00150$
      000D7A                       3959 00243$:
                           000C92  3960 	C$lab6.c$404$5$174 ==.
                                   3961 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:404: times++;
      000D7A 90 00 5D         [24] 3962 	mov	dptr,#_Angle_cal_times_1_162
      000D7D E0               [24] 3963 	movx	a,@dptr
      000D7E 24 01            [12] 3964 	add	a,#0x01
      000D80 F0               [24] 3965 	movx	@dptr,a
      000D81 A3               [24] 3966 	inc	dptr
      000D82 E0               [24] 3967 	movx	a,@dptr
      000D83 34 00            [12] 3968 	addc	a,#0x00
      000D85 F0               [24] 3969 	movx	@dptr,a
                           000C9E  3970 	C$lab6.c$405$5$174 ==.
                                   3971 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:405: value=0;
      000D86 90 00 5B         [24] 3972 	mov	dptr,#_Angle_cal_value_1_162
      000D89 E4               [12] 3973 	clr	a
      000D8A F0               [24] 3974 	movx	@dptr,a
      000D8B A3               [24] 3975 	inc	dptr
      000D8C F0               [24] 3976 	movx	@dptr,a
                           000CA5  3977 	C$lab6.c$406$5$174 ==.
                                   3978 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:406: st=0;
      000D8D 7F 00            [12] 3979 	mov	r7,#0x00
                           000CA7  3980 	C$lab6.c$407$5$174 ==.
                                   3981 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:407: PW_CENTER_ANGLE = ANGLE_PW;
      000D8F 85 4A 42         [24] 3982 	mov	_PW_CENTER_ANGLE,_ANGLE_PW
      000D92 85 4B 43         [24] 3983 	mov	(_PW_CENTER_ANGLE + 1),(_ANGLE_PW + 1)
      000D95 02 0B F3         [24] 3984 	ljmp	00150$
      000D98                       3985 00144$:
                           000CB0  3986 	C$lab6.c$412$4$175 ==.
                                   3987 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:412: if (value==0)
      000D98 90 00 5B         [24] 3988 	mov	dptr,#_Angle_cal_value_1_162
      000D9B E0               [24] 3989 	movx	a,@dptr
      000D9C FD               [12] 3990 	mov	r5,a
      000D9D A3               [24] 3991 	inc	dptr
      000D9E E0               [24] 3992 	movx	a,@dptr
      000D9F FE               [12] 3993 	mov	r6,a
      000DA0 4D               [12] 3994 	orl	a,r5
      000DA1 70 27            [24] 3995 	jnz	00134$
                           000CBB  3996 	C$lab6.c$414$5$176 ==.
                                   3997 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:414: lcd_clear();
      000DA3 C0 07            [24] 3998 	push	ar7
      000DA5 12 01 C9         [24] 3999 	lcall	_lcd_clear
                           000CC0  4000 	C$lab6.c$415$5$176 ==.
                                   4001 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:415: lcd_print("Now calibrating Max_PW DOWN ANGLE");
      000DA8 74 12            [12] 4002 	mov	a,#___str_18
      000DAA C0 E0            [24] 4003 	push	acc
      000DAC 74 1D            [12] 4004 	mov	a,#(___str_18 >> 8)
      000DAE C0 E0            [24] 4005 	push	acc
      000DB0 74 80            [12] 4006 	mov	a,#0x80
      000DB2 C0 E0            [24] 4007 	push	acc
      000DB4 12 01 44         [24] 4008 	lcall	_lcd_print
      000DB7 15 81            [12] 4009 	dec	sp
      000DB9 15 81            [12] 4010 	dec	sp
      000DBB 15 81            [12] 4011 	dec	sp
      000DBD D0 07            [24] 4012 	pop	ar7
                           000CD7  4013 	C$lab6.c$416$5$176 ==.
                                   4014 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:416: if (st == 0) ANGLE_PW = PW_DOWN_ANGLE;
      000DBF EF               [12] 4015 	mov	a,r7
      000DC0 70 06            [24] 4016 	jnz	00132$
      000DC2 85 44 4A         [24] 4017 	mov	_ANGLE_PW,_PW_DOWN_ANGLE
      000DC5 85 45 4B         [24] 4018 	mov	(_ANGLE_PW + 1),(_PW_DOWN_ANGLE + 1)
      000DC8                       4019 00132$:
                           000CE0  4020 	C$lab6.c$417$5$176 ==.
                                   4021 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:417: st=1;
      000DC8 7F 01            [12] 4022 	mov	r7,#0x01
      000DCA                       4023 00134$:
                           000CE2  4024 	C$lab6.c$419$4$175 ==.
                                   4025 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:419: value = kpd_input(1);
      000DCA 75 82 01         [24] 4026 	mov	dpl,#0x01
      000DCD C0 07            [24] 4027 	push	ar7
      000DCF 12 02 81         [24] 4028 	lcall	_kpd_input
      000DD2 AD 82            [24] 4029 	mov	r5,dpl
      000DD4 AE 83            [24] 4030 	mov	r6,dph
      000DD6 D0 07            [24] 4031 	pop	ar7
      000DD8 90 00 5B         [24] 4032 	mov	dptr,#_Angle_cal_value_1_162
      000DDB ED               [12] 4033 	mov	a,r5
      000DDC F0               [24] 4034 	movx	@dptr,a
      000DDD EE               [12] 4035 	mov	a,r6
      000DDE A3               [24] 4036 	inc	dptr
      000DDF F0               [24] 4037 	movx	@dptr,a
                           000CF8  4038 	C$lab6.c$420$4$175 ==.
                                   4039 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:420: if (value == 1)
      000DE0 BD 01 12         [24] 4040 	cjne	r5,#0x01,00141$
      000DE3 BE 00 0F         [24] 4041 	cjne	r6,#0x00,00141$
                           000CFE  4042 	C$lab6.c$422$5$177 ==.
                                   4043 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:422: ANGLE_PW -= 30;
      000DE6 E5 4A            [12] 4044 	mov	a,_ANGLE_PW
      000DE8 24 E2            [12] 4045 	add	a,#0xE2
      000DEA F5 4A            [12] 4046 	mov	_ANGLE_PW,a
      000DEC E5 4B            [12] 4047 	mov	a,(_ANGLE_PW + 1)
      000DEE 34 FF            [12] 4048 	addc	a,#0xFF
      000DF0 F5 4B            [12] 4049 	mov	(_ANGLE_PW + 1),a
      000DF2 02 0B F3         [24] 4050 	ljmp	00150$
      000DF5                       4051 00141$:
                           000D0D  4052 	C$lab6.c$424$4$175 ==.
                                   4053 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:424: else if (value==2)
      000DF5 90 00 5B         [24] 4054 	mov	dptr,#_Angle_cal_value_1_162
      000DF8 E0               [24] 4055 	movx	a,@dptr
      000DF9 FD               [12] 4056 	mov	r5,a
      000DFA A3               [24] 4057 	inc	dptr
      000DFB E0               [24] 4058 	movx	a,@dptr
      000DFC FE               [12] 4059 	mov	r6,a
      000DFD BD 02 11         [24] 4060 	cjne	r5,#0x02,00138$
      000E00 BE 00 0E         [24] 4061 	cjne	r6,#0x00,00138$
                           000D1B  4062 	C$lab6.c$426$5$178 ==.
                                   4063 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:426: ANGLE_PW += 30;
      000E03 74 1E            [12] 4064 	mov	a,#0x1E
      000E05 25 4A            [12] 4065 	add	a,_ANGLE_PW
      000E07 F5 4A            [12] 4066 	mov	_ANGLE_PW,a
      000E09 E4               [12] 4067 	clr	a
      000E0A 35 4B            [12] 4068 	addc	a,(_ANGLE_PW + 1)
      000E0C F5 4B            [12] 4069 	mov	(_ANGLE_PW + 1),a
      000E0E 02 0B F3         [24] 4070 	ljmp	00150$
      000E11                       4071 00138$:
                           000D29  4072 	C$lab6.c$428$4$175 ==.
                                   4073 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:428: else if (value == 3)
      000E11 90 00 5B         [24] 4074 	mov	dptr,#_Angle_cal_value_1_162
      000E14 E0               [24] 4075 	movx	a,@dptr
      000E15 FD               [12] 4076 	mov	r5,a
      000E16 A3               [24] 4077 	inc	dptr
      000E17 E0               [24] 4078 	movx	a,@dptr
      000E18 FE               [12] 4079 	mov	r6,a
      000E19 BD 03 05         [24] 4080 	cjne	r5,#0x03,00250$
      000E1C BE 00 02         [24] 4081 	cjne	r6,#0x00,00250$
      000E1F 80 03            [24] 4082 	sjmp	00251$
      000E21                       4083 00250$:
      000E21 02 0B F3         [24] 4084 	ljmp	00150$
      000E24                       4085 00251$:
                           000D3C  4086 	C$lab6.c$430$5$179 ==.
                                   4087 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:430: PW_DOWN_ANGLE = ANGLE_PW;
      000E24 85 4A 44         [24] 4088 	mov	_PW_DOWN_ANGLE,_ANGLE_PW
      000E27 85 4B 45         [24] 4089 	mov	(_PW_DOWN_ANGLE + 1),(_ANGLE_PW + 1)
                           000D42  4090 	C$lab6.c$431$5$179 ==.
                                   4091 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:431: return;
                           000D42  4092 	C$lab6.c$436$1$162 ==.
                           000D42  4093 	XG$Angle_cal$0$0 ==.
      000E2A 22               [24] 4094 	ret
                                   4095 ;------------------------------------------------------------
                                   4096 ;Allocation info for local variables in function 'Thrust_cal'
                                   4097 ;------------------------------------------------------------
                                   4098 ;st                        Allocated to registers r7 
                                   4099 ;value                     Allocated with name '_Thrust_cal_value_1_181'
                                   4100 ;times                     Allocated with name '_Thrust_cal_times_1_181'
                                   4101 ;------------------------------------------------------------
                           000D43  4102 	G$Thrust_cal$0$0 ==.
                           000D43  4103 	C$lab6.c$438$1$162 ==.
                                   4104 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:438: void Thrust_cal(void)
                                   4105 ;	-----------------------------------------
                                   4106 ;	 function Thrust_cal
                                   4107 ;	-----------------------------------------
      000E2B                       4108 _Thrust_cal:
                           000D43  4109 	C$lab6.c$441$1$162 ==.
                                   4110 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:441: __xdata int value =0;
      000E2B 90 00 5F         [24] 4111 	mov	dptr,#_Thrust_cal_value_1_181
      000E2E E4               [12] 4112 	clr	a
      000E2F F0               [24] 4113 	movx	@dptr,a
      000E30 A3               [24] 4114 	inc	dptr
      000E31 F0               [24] 4115 	movx	@dptr,a
                           000D4A  4116 	C$lab6.c$443$1$181 ==.
                                   4117 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:443: count =0;
      000E32 F5 32            [12] 4118 	mov	_count,a
      000E34 F5 33            [12] 4119 	mov	(_count + 1),a
                           000D4E  4120 	C$lab6.c$444$1$181 ==.
                                   4121 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:444: lcd_clear();
      000E36 12 01 C9         [24] 4122 	lcall	_lcd_clear
                           000D51  4123 	C$lab6.c$445$1$181 ==.
                                   4124 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:445: lcd_print("Thrust Calibration");
      000E39 74 34            [12] 4125 	mov	a,#___str_19
      000E3B C0 E0            [24] 4126 	push	acc
      000E3D 74 1D            [12] 4127 	mov	a,#(___str_19 >> 8)
      000E3F C0 E0            [24] 4128 	push	acc
      000E41 74 80            [12] 4129 	mov	a,#0x80
      000E43 C0 E0            [24] 4130 	push	acc
      000E45 12 01 44         [24] 4131 	lcall	_lcd_print
      000E48 15 81            [12] 4132 	dec	sp
      000E4A 15 81            [12] 4133 	dec	sp
      000E4C 15 81            [12] 4134 	dec	sp
                           000D66  4135 	C$lab6.c$446$1$181 ==.
                                   4136 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:446: while (count < 50);
      000E4E                       4137 00101$:
      000E4E C3               [12] 4138 	clr	c
      000E4F E5 32            [12] 4139 	mov	a,_count
      000E51 94 32            [12] 4140 	subb	a,#0x32
      000E53 E5 33            [12] 4141 	mov	a,(_count + 1)
      000E55 64 80            [12] 4142 	xrl	a,#0x80
      000E57 94 80            [12] 4143 	subb	a,#0x80
      000E59 40 F3            [24] 4144 	jc	00101$
                           000D73  4145 	C$lab6.c$447$1$181 ==.
                                   4146 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:447: lcd_clear();
      000E5B 12 01 C9         [24] 4147 	lcall	_lcd_clear
                           000D76  4148 	C$lab6.c$451$2$182 ==.
                                   4149 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:451: count = 0;
      000E5E E4               [12] 4150 	clr	a
      000E5F F5 32            [12] 4151 	mov	_count,a
      000E61 F5 33            [12] 4152 	mov	(_count + 1),a
                           000D7B  4153 	C$lab6.c$452$2$182 ==.
                                   4154 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:452: while (count < 1);
      000E63                       4155 00104$:
      000E63 C3               [12] 4156 	clr	c
      000E64 E5 32            [12] 4157 	mov	a,_count
      000E66 94 01            [12] 4158 	subb	a,#0x01
      000E68 E5 33            [12] 4159 	mov	a,(_count + 1)
      000E6A 64 80            [12] 4160 	xrl	a,#0x80
      000E6C 94 80            [12] 4161 	subb	a,#0x80
      000E6E 40 F3            [24] 4162 	jc	00104$
                           000D88  4163 	C$lab6.c$453$2$182 ==.
                                   4164 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:453: lcd_clear();
      000E70 12 01 C9         [24] 4165 	lcall	_lcd_clear
                           000D8B  4166 	C$lab6.c$454$2$182 ==.
                                   4167 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:454: lcd_print("go left: press 1\n go right: press 2\nPress * for next screen");
      000E73 74 33            [12] 4168 	mov	a,#___str_10
      000E75 C0 E0            [24] 4169 	push	acc
      000E77 74 1C            [12] 4170 	mov	a,#(___str_10 >> 8)
      000E79 C0 E0            [24] 4171 	push	acc
      000E7B 74 80            [12] 4172 	mov	a,#0x80
      000E7D C0 E0            [24] 4173 	push	acc
      000E7F 12 01 44         [24] 4174 	lcall	_lcd_print
      000E82 15 81            [12] 4175 	dec	sp
      000E84 15 81            [12] 4176 	dec	sp
      000E86 15 81            [12] 4177 	dec	sp
                           000DA0  4178 	C$lab6.c$455$2$182 ==.
                                   4179 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:455: start();
      000E88 12 12 DD         [24] 4180 	lcall	_start
                           000DA3  4181 	C$lab6.c$456$2$182 ==.
                                   4182 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:456: lcd_clear();
      000E8B 12 01 C9         [24] 4183 	lcall	_lcd_clear
                           000DA6  4184 	C$lab6.c$457$2$182 ==.
                                   4185 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:457: lcd_print("\n confirm: press 3\n press * to begin");
      000E8E 74 6F            [12] 4186 	mov	a,#___str_11
      000E90 C0 E0            [24] 4187 	push	acc
      000E92 74 1C            [12] 4188 	mov	a,#(___str_11 >> 8)
      000E94 C0 E0            [24] 4189 	push	acc
      000E96 74 80            [12] 4190 	mov	a,#0x80
      000E98 C0 E0            [24] 4191 	push	acc
      000E9A 12 01 44         [24] 4192 	lcall	_lcd_print
      000E9D 15 81            [12] 4193 	dec	sp
      000E9F 15 81            [12] 4194 	dec	sp
      000EA1 15 81            [12] 4195 	dec	sp
                           000DBB  4196 	C$lab6.c$458$2$182 ==.
                                   4197 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:458: start();
      000EA3 12 12 DD         [24] 4198 	lcall	_start
                           000DBE  4199 	C$lab6.c$459$2$182 ==.
                                   4200 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:459: st =0;
      000EA6 7F 00            [12] 4201 	mov	r7,#0x00
                           000DC0  4202 	C$lab6.c$460$2$182 ==.
                                   4203 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:460: times=0;
      000EA8 90 00 61         [24] 4204 	mov	dptr,#_Thrust_cal_times_1_181
      000EAB E4               [12] 4205 	clr	a
      000EAC F0               [24] 4206 	movx	@dptr,a
      000EAD A3               [24] 4207 	inc	dptr
      000EAE F0               [24] 4208 	movx	@dptr,a
                           000DC7  4209 	C$lab6.c$461$5$185 ==.
                                   4210 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:461: while (1)
      000EAF                       4211 00153$:
                           000DC7  4212 	C$lab6.c$463$3$183 ==.
                                   4213 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:463: printf("\r\n %u",RTHRUST_PW);
      000EAF C0 07            [24] 4214 	push	ar7
      000EB1 C0 4E            [24] 4215 	push	_RTHRUST_PW
      000EB3 C0 4F            [24] 4216 	push	(_RTHRUST_PW + 1)
      000EB5 74 94            [12] 4217 	mov	a,#___str_12
      000EB7 C0 E0            [24] 4218 	push	acc
      000EB9 74 1C            [12] 4219 	mov	a,#(___str_12 >> 8)
      000EBB C0 E0            [24] 4220 	push	acc
      000EBD 74 80            [12] 4221 	mov	a,#0x80
      000EBF C0 E0            [24] 4222 	push	acc
      000EC1 12 15 1B         [24] 4223 	lcall	_printf
      000EC4 E5 81            [12] 4224 	mov	a,sp
      000EC6 24 FB            [12] 4225 	add	a,#0xfb
      000EC8 F5 81            [12] 4226 	mov	sp,a
      000ECA D0 07            [24] 4227 	pop	ar7
                           000DE4  4228 	C$lab6.c$464$3$183 ==.
                                   4229 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:464: RTRST_lo_to_hi = 0xFFFF - RTHRUST_PW;
      000ECC 74 FF            [12] 4230 	mov	a,#0xFF
      000ECE C3               [12] 4231 	clr	c
      000ECF 95 4E            [12] 4232 	subb	a,_RTHRUST_PW
      000ED1 F5 52            [12] 4233 	mov	_RTRST_lo_to_hi,a
      000ED3 74 FF            [12] 4234 	mov	a,#0xFF
      000ED5 95 4F            [12] 4235 	subb	a,(_RTHRUST_PW + 1)
      000ED7 F5 53            [12] 4236 	mov	(_RTRST_lo_to_hi + 1),a
                           000DF1  4237 	C$lab6.c$465$3$183 ==.
                                   4238 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:465: LTRST_lo_to_hi = 0xFFFF - LTHRUST_PW;
      000ED9 74 FF            [12] 4239 	mov	a,#0xFF
      000EDB C3               [12] 4240 	clr	c
      000EDC 95 50            [12] 4241 	subb	a,_LTHRUST_PW
      000EDE F5 54            [12] 4242 	mov	_LTRST_lo_to_hi,a
      000EE0 74 FF            [12] 4243 	mov	a,#0xFF
      000EE2 95 51            [12] 4244 	subb	a,(_LTHRUST_PW + 1)
      000EE4 F5 55            [12] 4245 	mov	(_LTRST_lo_to_hi + 1),a
                           000DFE  4246 	C$lab6.c$466$3$183 ==.
                                   4247 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:466: PCA0CP2 = RTRST_lo_to_hi;
      000EE6 85 52 EC         [24] 4248 	mov	((_PCA0CP2 >> 0) & 0xFF),_RTRST_lo_to_hi
      000EE9 85 53 FC         [24] 4249 	mov	((_PCA0CP2 >> 8) & 0xFF),(_RTRST_lo_to_hi + 1)
                           000E04  4250 	C$lab6.c$467$3$183 ==.
                                   4251 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:467: PCA0CP3 = LTRST_lo_to_hi;
      000EEC 85 54 ED         [24] 4252 	mov	((_PCA0CP3 >> 0) & 0xFF),_LTRST_lo_to_hi
      000EEF 85 55 FD         [24] 4253 	mov	((_PCA0CP3 >> 8) & 0xFF),(_LTRST_lo_to_hi + 1)
                           000E0A  4254 	C$lab6.c$471$3$183 ==.
                                   4255 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:471: if (times == 0 )
      000EF2 90 00 61         [24] 4256 	mov	dptr,#_Thrust_cal_times_1_181
      000EF5 E0               [24] 4257 	movx	a,@dptr
      000EF6 FD               [12] 4258 	mov	r5,a
      000EF7 A3               [24] 4259 	inc	dptr
      000EF8 E0               [24] 4260 	movx	a,@dptr
      000EF9 FE               [12] 4261 	mov	r6,a
      000EFA 4D               [12] 4262 	orl	a,r5
      000EFB 60 03            [24] 4263 	jz	00231$
      000EFD 02 0F C7         [24] 4264 	ljmp	00150$
      000F00                       4265 00231$:
                           000E18  4266 	C$lab6.c$473$4$184 ==.
                                   4267 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:473: if (value ==0)
      000F00 90 00 5F         [24] 4268 	mov	dptr,#_Thrust_cal_value_1_181
      000F03 E0               [24] 4269 	movx	a,@dptr
      000F04 FD               [12] 4270 	mov	r5,a
      000F05 A3               [24] 4271 	inc	dptr
      000F06 E0               [24] 4272 	movx	a,@dptr
      000F07 FE               [12] 4273 	mov	r6,a
      000F08 4D               [12] 4274 	orl	a,r5
      000F09 70 2D            [24] 4275 	jnz	00110$
                           000E23  4276 	C$lab6.c$475$5$185 ==.
                                   4277 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:475: lcd_clear();
      000F0B C0 07            [24] 4278 	push	ar7
      000F0D 12 01 C9         [24] 4279 	lcall	_lcd_clear
                           000E28  4280 	C$lab6.c$476$5$185 ==.
                                   4281 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:476: lcd_print("Now calibrating Min_PW");
      000F10 74 47            [12] 4282 	mov	a,#___str_20
      000F12 C0 E0            [24] 4283 	push	acc
      000F14 74 1D            [12] 4284 	mov	a,#(___str_20 >> 8)
      000F16 C0 E0            [24] 4285 	push	acc
      000F18 74 80            [12] 4286 	mov	a,#0x80
      000F1A C0 E0            [24] 4287 	push	acc
      000F1C 12 01 44         [24] 4288 	lcall	_lcd_print
      000F1F 15 81            [12] 4289 	dec	sp
      000F21 15 81            [12] 4290 	dec	sp
      000F23 15 81            [12] 4291 	dec	sp
      000F25 D0 07            [24] 4292 	pop	ar7
                           000E3F  4293 	C$lab6.c$477$5$185 ==.
                                   4294 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:477: if (st ==0)
      000F27 EF               [12] 4295 	mov	a,r7
      000F28 70 0C            [24] 4296 	jnz	00108$
                           000E42  4297 	C$lab6.c$479$6$186 ==.
                                   4298 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:479: RTHRUST_PW = PW_MIN_THRUST;
      000F2A 85 34 4E         [24] 4299 	mov	_RTHRUST_PW,_PW_MIN_THRUST
      000F2D 85 35 4F         [24] 4300 	mov	(_RTHRUST_PW + 1),(_PW_MIN_THRUST + 1)
                           000E48  4301 	C$lab6.c$480$6$186 ==.
                                   4302 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:480: LTHRUST_PW = PW_MIN_THRUST;
      000F30 85 34 50         [24] 4303 	mov	_LTHRUST_PW,_PW_MIN_THRUST
      000F33 85 35 51         [24] 4304 	mov	(_LTHRUST_PW + 1),(_PW_MIN_THRUST + 1)
      000F36                       4305 00108$:
                           000E4E  4306 	C$lab6.c$482$5$185 ==.
                                   4307 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:482: st =1;
      000F36 7F 01            [12] 4308 	mov	r7,#0x01
      000F38                       4309 00110$:
                           000E50  4310 	C$lab6.c$484$4$184 ==.
                                   4311 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:484: value = kpd_input(1);
      000F38 75 82 01         [24] 4312 	mov	dpl,#0x01
      000F3B C0 07            [24] 4313 	push	ar7
      000F3D 12 02 81         [24] 4314 	lcall	_kpd_input
      000F40 AD 82            [24] 4315 	mov	r5,dpl
      000F42 AE 83            [24] 4316 	mov	r6,dph
      000F44 D0 07            [24] 4317 	pop	ar7
      000F46 90 00 5F         [24] 4318 	mov	dptr,#_Thrust_cal_value_1_181
      000F49 ED               [12] 4319 	mov	a,r5
      000F4A F0               [24] 4320 	movx	@dptr,a
      000F4B EE               [12] 4321 	mov	a,r6
      000F4C A3               [24] 4322 	inc	dptr
      000F4D F0               [24] 4323 	movx	@dptr,a
                           000E66  4324 	C$lab6.c$485$4$184 ==.
                                   4325 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:485: if (value == 1)
      000F4E BD 01 1D         [24] 4326 	cjne	r5,#0x01,00117$
      000F51 BE 00 1A         [24] 4327 	cjne	r6,#0x00,00117$
                           000E6C  4328 	C$lab6.c$487$5$187 ==.
                                   4329 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:487: RTHRUST_PW -= 30;
      000F54 E5 4E            [12] 4330 	mov	a,_RTHRUST_PW
      000F56 24 E2            [12] 4331 	add	a,#0xE2
      000F58 F5 4E            [12] 4332 	mov	_RTHRUST_PW,a
      000F5A E5 4F            [12] 4333 	mov	a,(_RTHRUST_PW + 1)
      000F5C 34 FF            [12] 4334 	addc	a,#0xFF
      000F5E F5 4F            [12] 4335 	mov	(_RTHRUST_PW + 1),a
                           000E78  4336 	C$lab6.c$488$5$187 ==.
                                   4337 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:488: LTHRUST_PW += 30;
      000F60 74 1E            [12] 4338 	mov	a,#0x1E
      000F62 25 50            [12] 4339 	add	a,_LTHRUST_PW
      000F64 F5 50            [12] 4340 	mov	_LTHRUST_PW,a
      000F66 E4               [12] 4341 	clr	a
      000F67 35 51            [12] 4342 	addc	a,(_LTHRUST_PW + 1)
      000F69 F5 51            [12] 4343 	mov	(_LTHRUST_PW + 1),a
      000F6B 02 0E AF         [24] 4344 	ljmp	00153$
      000F6E                       4345 00117$:
                           000E86  4346 	C$lab6.c$490$4$184 ==.
                                   4347 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:490: else if (value==2)
      000F6E 90 00 5F         [24] 4348 	mov	dptr,#_Thrust_cal_value_1_181
      000F71 E0               [24] 4349 	movx	a,@dptr
      000F72 FD               [12] 4350 	mov	r5,a
      000F73 A3               [24] 4351 	inc	dptr
      000F74 E0               [24] 4352 	movx	a,@dptr
      000F75 FE               [12] 4353 	mov	r6,a
      000F76 BD 02 1D         [24] 4354 	cjne	r5,#0x02,00114$
      000F79 BE 00 1A         [24] 4355 	cjne	r6,#0x00,00114$
                           000E94  4356 	C$lab6.c$492$5$188 ==.
                                   4357 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:492: RTHRUST_PW += 30;
      000F7C 74 1E            [12] 4358 	mov	a,#0x1E
      000F7E 25 4E            [12] 4359 	add	a,_RTHRUST_PW
      000F80 F5 4E            [12] 4360 	mov	_RTHRUST_PW,a
      000F82 E4               [12] 4361 	clr	a
      000F83 35 4F            [12] 4362 	addc	a,(_RTHRUST_PW + 1)
      000F85 F5 4F            [12] 4363 	mov	(_RTHRUST_PW + 1),a
                           000E9F  4364 	C$lab6.c$493$5$188 ==.
                                   4365 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:493: LTHRUST_PW -= 30;
      000F87 E5 50            [12] 4366 	mov	a,_LTHRUST_PW
      000F89 24 E2            [12] 4367 	add	a,#0xE2
      000F8B F5 50            [12] 4368 	mov	_LTHRUST_PW,a
      000F8D E5 51            [12] 4369 	mov	a,(_LTHRUST_PW + 1)
      000F8F 34 FF            [12] 4370 	addc	a,#0xFF
      000F91 F5 51            [12] 4371 	mov	(_LTHRUST_PW + 1),a
      000F93 02 0E AF         [24] 4372 	ljmp	00153$
      000F96                       4373 00114$:
                           000EAE  4374 	C$lab6.c$495$4$184 ==.
                                   4375 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:495: else if (value == 3)
      000F96 90 00 5F         [24] 4376 	mov	dptr,#_Thrust_cal_value_1_181
      000F99 E0               [24] 4377 	movx	a,@dptr
      000F9A FD               [12] 4378 	mov	r5,a
      000F9B A3               [24] 4379 	inc	dptr
      000F9C E0               [24] 4380 	movx	a,@dptr
      000F9D FE               [12] 4381 	mov	r6,a
      000F9E BD 03 05         [24] 4382 	cjne	r5,#0x03,00238$
      000FA1 BE 00 02         [24] 4383 	cjne	r6,#0x00,00238$
      000FA4 80 03            [24] 4384 	sjmp	00239$
      000FA6                       4385 00238$:
      000FA6 02 0E AF         [24] 4386 	ljmp	00153$
      000FA9                       4387 00239$:
                           000EC1  4388 	C$lab6.c$497$5$189 ==.
                                   4389 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:497: times++;
      000FA9 90 00 61         [24] 4390 	mov	dptr,#_Thrust_cal_times_1_181
      000FAC E0               [24] 4391 	movx	a,@dptr
      000FAD 24 01            [12] 4392 	add	a,#0x01
      000FAF F0               [24] 4393 	movx	@dptr,a
      000FB0 A3               [24] 4394 	inc	dptr
      000FB1 E0               [24] 4395 	movx	a,@dptr
      000FB2 34 00            [12] 4396 	addc	a,#0x00
      000FB4 F0               [24] 4397 	movx	@dptr,a
                           000ECD  4398 	C$lab6.c$498$5$189 ==.
                                   4399 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:498: value =0;
      000FB5 90 00 5F         [24] 4400 	mov	dptr,#_Thrust_cal_value_1_181
      000FB8 E4               [12] 4401 	clr	a
      000FB9 F0               [24] 4402 	movx	@dptr,a
      000FBA A3               [24] 4403 	inc	dptr
      000FBB F0               [24] 4404 	movx	@dptr,a
                           000ED4  4405 	C$lab6.c$499$5$189 ==.
                                   4406 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:499: st=0;
      000FBC 7F 00            [12] 4407 	mov	r7,#0x00
                           000ED6  4408 	C$lab6.c$500$5$189 ==.
                                   4409 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:500: PW_MIN_THRUST = RTHRUST_PW;
      000FBE 85 4E 34         [24] 4410 	mov	_PW_MIN_THRUST,_RTHRUST_PW
      000FC1 85 4F 35         [24] 4411 	mov	(_PW_MIN_THRUST + 1),(_RTHRUST_PW + 1)
      000FC4 02 0E AF         [24] 4412 	ljmp	00153$
      000FC7                       4413 00150$:
                           000EDF  4414 	C$lab6.c$504$3$183 ==.
                                   4415 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:504: else if (times ==1)
      000FC7 90 00 61         [24] 4416 	mov	dptr,#_Thrust_cal_times_1_181
      000FCA E0               [24] 4417 	movx	a,@dptr
      000FCB FD               [12] 4418 	mov	r5,a
      000FCC A3               [24] 4419 	inc	dptr
      000FCD E0               [24] 4420 	movx	a,@dptr
      000FCE FE               [12] 4421 	mov	r6,a
      000FCF BD 01 05         [24] 4422 	cjne	r5,#0x01,00240$
      000FD2 BE 00 02         [24] 4423 	cjne	r6,#0x00,00240$
      000FD5 80 03            [24] 4424 	sjmp	00241$
      000FD7                       4425 00240$:
      000FD7 02 10 A1         [24] 4426 	ljmp	00147$
      000FDA                       4427 00241$:
                           000EF2  4428 	C$lab6.c$506$4$190 ==.
                                   4429 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:506: if (value ==0)
      000FDA 90 00 5F         [24] 4430 	mov	dptr,#_Thrust_cal_value_1_181
      000FDD E0               [24] 4431 	movx	a,@dptr
      000FDE FD               [12] 4432 	mov	r5,a
      000FDF A3               [24] 4433 	inc	dptr
      000FE0 E0               [24] 4434 	movx	a,@dptr
      000FE1 FE               [12] 4435 	mov	r6,a
      000FE2 4D               [12] 4436 	orl	a,r5
      000FE3 70 2D            [24] 4437 	jnz	00122$
                           000EFD  4438 	C$lab6.c$508$5$191 ==.
                                   4439 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:508: lcd_clear();
      000FE5 C0 07            [24] 4440 	push	ar7
      000FE7 12 01 C9         [24] 4441 	lcall	_lcd_clear
                           000F02  4442 	C$lab6.c$509$5$191 ==.
                                   4443 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:509: lcd_print("Now calibrating Min_PW");
      000FEA 74 47            [12] 4444 	mov	a,#___str_20
      000FEC C0 E0            [24] 4445 	push	acc
      000FEE 74 1D            [12] 4446 	mov	a,#(___str_20 >> 8)
      000FF0 C0 E0            [24] 4447 	push	acc
      000FF2 74 80            [12] 4448 	mov	a,#0x80
      000FF4 C0 E0            [24] 4449 	push	acc
      000FF6 12 01 44         [24] 4450 	lcall	_lcd_print
      000FF9 15 81            [12] 4451 	dec	sp
      000FFB 15 81            [12] 4452 	dec	sp
      000FFD 15 81            [12] 4453 	dec	sp
      000FFF D0 07            [24] 4454 	pop	ar7
                           000F19  4455 	C$lab6.c$510$5$191 ==.
                                   4456 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:510: if (st ==0)
      001001 EF               [12] 4457 	mov	a,r7
      001002 70 0C            [24] 4458 	jnz	00120$
                           000F1C  4459 	C$lab6.c$512$6$192 ==.
                                   4460 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:512: RTHRUST_PW = PW_NUET_THRUST;
      001004 85 36 4E         [24] 4461 	mov	_RTHRUST_PW,_PW_NUET_THRUST
      001007 85 37 4F         [24] 4462 	mov	(_RTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
                           000F22  4463 	C$lab6.c$513$6$192 ==.
                                   4464 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:513: LTHRUST_PW = PW_NUET_THRUST;
      00100A 85 36 50         [24] 4465 	mov	_LTHRUST_PW,_PW_NUET_THRUST
      00100D 85 37 51         [24] 4466 	mov	(_LTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
      001010                       4467 00120$:
                           000F28  4468 	C$lab6.c$515$5$191 ==.
                                   4469 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:515: st =1;
      001010 7F 01            [12] 4470 	mov	r7,#0x01
      001012                       4471 00122$:
                           000F2A  4472 	C$lab6.c$517$4$190 ==.
                                   4473 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:517: value = kpd_input(1);
      001012 75 82 01         [24] 4474 	mov	dpl,#0x01
      001015 C0 07            [24] 4475 	push	ar7
      001017 12 02 81         [24] 4476 	lcall	_kpd_input
      00101A AD 82            [24] 4477 	mov	r5,dpl
      00101C AE 83            [24] 4478 	mov	r6,dph
      00101E D0 07            [24] 4479 	pop	ar7
      001020 90 00 5F         [24] 4480 	mov	dptr,#_Thrust_cal_value_1_181
      001023 ED               [12] 4481 	mov	a,r5
      001024 F0               [24] 4482 	movx	@dptr,a
      001025 EE               [12] 4483 	mov	a,r6
      001026 A3               [24] 4484 	inc	dptr
      001027 F0               [24] 4485 	movx	@dptr,a
                           000F40  4486 	C$lab6.c$518$4$190 ==.
                                   4487 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:518: if (value == 1)
      001028 BD 01 1D         [24] 4488 	cjne	r5,#0x01,00129$
      00102B BE 00 1A         [24] 4489 	cjne	r6,#0x00,00129$
                           000F46  4490 	C$lab6.c$520$5$193 ==.
                                   4491 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:520: RTHRUST_PW -= 30;
      00102E E5 4E            [12] 4492 	mov	a,_RTHRUST_PW
      001030 24 E2            [12] 4493 	add	a,#0xE2
      001032 F5 4E            [12] 4494 	mov	_RTHRUST_PW,a
      001034 E5 4F            [12] 4495 	mov	a,(_RTHRUST_PW + 1)
      001036 34 FF            [12] 4496 	addc	a,#0xFF
      001038 F5 4F            [12] 4497 	mov	(_RTHRUST_PW + 1),a
                           000F52  4498 	C$lab6.c$521$5$193 ==.
                                   4499 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:521: LTHRUST_PW += 30;
      00103A 74 1E            [12] 4500 	mov	a,#0x1E
      00103C 25 50            [12] 4501 	add	a,_LTHRUST_PW
      00103E F5 50            [12] 4502 	mov	_LTHRUST_PW,a
      001040 E4               [12] 4503 	clr	a
      001041 35 51            [12] 4504 	addc	a,(_LTHRUST_PW + 1)
      001043 F5 51            [12] 4505 	mov	(_LTHRUST_PW + 1),a
      001045 02 0E AF         [24] 4506 	ljmp	00153$
      001048                       4507 00129$:
                           000F60  4508 	C$lab6.c$523$4$190 ==.
                                   4509 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:523: else if (value==2)
      001048 90 00 5F         [24] 4510 	mov	dptr,#_Thrust_cal_value_1_181
      00104B E0               [24] 4511 	movx	a,@dptr
      00104C FD               [12] 4512 	mov	r5,a
      00104D A3               [24] 4513 	inc	dptr
      00104E E0               [24] 4514 	movx	a,@dptr
      00104F FE               [12] 4515 	mov	r6,a
      001050 BD 02 1D         [24] 4516 	cjne	r5,#0x02,00126$
      001053 BE 00 1A         [24] 4517 	cjne	r6,#0x00,00126$
                           000F6E  4518 	C$lab6.c$525$5$194 ==.
                                   4519 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:525: RTHRUST_PW += 30;
      001056 74 1E            [12] 4520 	mov	a,#0x1E
      001058 25 4E            [12] 4521 	add	a,_RTHRUST_PW
      00105A F5 4E            [12] 4522 	mov	_RTHRUST_PW,a
      00105C E4               [12] 4523 	clr	a
      00105D 35 4F            [12] 4524 	addc	a,(_RTHRUST_PW + 1)
      00105F F5 4F            [12] 4525 	mov	(_RTHRUST_PW + 1),a
                           000F79  4526 	C$lab6.c$526$5$194 ==.
                                   4527 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:526: LTHRUST_PW -= 30;
      001061 E5 50            [12] 4528 	mov	a,_LTHRUST_PW
      001063 24 E2            [12] 4529 	add	a,#0xE2
      001065 F5 50            [12] 4530 	mov	_LTHRUST_PW,a
      001067 E5 51            [12] 4531 	mov	a,(_LTHRUST_PW + 1)
      001069 34 FF            [12] 4532 	addc	a,#0xFF
      00106B F5 51            [12] 4533 	mov	(_LTHRUST_PW + 1),a
      00106D 02 0E AF         [24] 4534 	ljmp	00153$
      001070                       4535 00126$:
                           000F88  4536 	C$lab6.c$528$4$190 ==.
                                   4537 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:528: else if (value == 3)
      001070 90 00 5F         [24] 4538 	mov	dptr,#_Thrust_cal_value_1_181
      001073 E0               [24] 4539 	movx	a,@dptr
      001074 FD               [12] 4540 	mov	r5,a
      001075 A3               [24] 4541 	inc	dptr
      001076 E0               [24] 4542 	movx	a,@dptr
      001077 FE               [12] 4543 	mov	r6,a
      001078 BD 03 05         [24] 4544 	cjne	r5,#0x03,00248$
      00107B BE 00 02         [24] 4545 	cjne	r6,#0x00,00248$
      00107E 80 03            [24] 4546 	sjmp	00249$
      001080                       4547 00248$:
      001080 02 0E AF         [24] 4548 	ljmp	00153$
      001083                       4549 00249$:
                           000F9B  4550 	C$lab6.c$530$5$195 ==.
                                   4551 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:530: times++;
      001083 90 00 61         [24] 4552 	mov	dptr,#_Thrust_cal_times_1_181
      001086 E0               [24] 4553 	movx	a,@dptr
      001087 24 01            [12] 4554 	add	a,#0x01
      001089 F0               [24] 4555 	movx	@dptr,a
      00108A A3               [24] 4556 	inc	dptr
      00108B E0               [24] 4557 	movx	a,@dptr
      00108C 34 00            [12] 4558 	addc	a,#0x00
      00108E F0               [24] 4559 	movx	@dptr,a
                           000FA7  4560 	C$lab6.c$531$5$195 ==.
                                   4561 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:531: value =0;
      00108F 90 00 5F         [24] 4562 	mov	dptr,#_Thrust_cal_value_1_181
      001092 E4               [12] 4563 	clr	a
      001093 F0               [24] 4564 	movx	@dptr,a
      001094 A3               [24] 4565 	inc	dptr
      001095 F0               [24] 4566 	movx	@dptr,a
                           000FAE  4567 	C$lab6.c$532$5$195 ==.
                                   4568 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:532: st=0;
      001096 7F 00            [12] 4569 	mov	r7,#0x00
                           000FB0  4570 	C$lab6.c$533$5$195 ==.
                                   4571 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:533: PW_NUET_THRUST = RTHRUST_PW;
      001098 85 4E 36         [24] 4572 	mov	_PW_NUET_THRUST,_RTHRUST_PW
      00109B 85 4F 37         [24] 4573 	mov	(_PW_NUET_THRUST + 1),(_RTHRUST_PW + 1)
      00109E 02 0E AF         [24] 4574 	ljmp	00153$
      0010A1                       4575 00147$:
                           000FB9  4576 	C$lab6.c$536$3$183 ==.
                                   4577 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:536: else if(times == 2)
      0010A1 90 00 61         [24] 4578 	mov	dptr,#_Thrust_cal_times_1_181
      0010A4 E0               [24] 4579 	movx	a,@dptr
      0010A5 FD               [12] 4580 	mov	r5,a
      0010A6 A3               [24] 4581 	inc	dptr
      0010A7 E0               [24] 4582 	movx	a,@dptr
      0010A8 FE               [12] 4583 	mov	r6,a
      0010A9 BD 02 05         [24] 4584 	cjne	r5,#0x02,00250$
      0010AC BE 00 02         [24] 4585 	cjne	r6,#0x00,00250$
      0010AF 80 03            [24] 4586 	sjmp	00251$
      0010B1                       4587 00250$:
      0010B1 02 11 59         [24] 4588 	ljmp	00144$
      0010B4                       4589 00251$:
                           000FCC  4590 	C$lab6.c$538$4$196 ==.
                                   4591 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:538: if (value==0)
      0010B4 90 00 5F         [24] 4592 	mov	dptr,#_Thrust_cal_value_1_181
      0010B7 E0               [24] 4593 	movx	a,@dptr
      0010B8 FD               [12] 4594 	mov	r5,a
      0010B9 A3               [24] 4595 	inc	dptr
      0010BA E0               [24] 4596 	movx	a,@dptr
      0010BB FE               [12] 4597 	mov	r6,a
      0010BC 4D               [12] 4598 	orl	a,r5
      0010BD 70 2B            [24] 4599 	jnz	00134$
                           000FD7  4600 	C$lab6.c$540$5$197 ==.
                                   4601 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:540: lcd_clear();
      0010BF C0 07            [24] 4602 	push	ar7
      0010C1 12 01 C9         [24] 4603 	lcall	_lcd_clear
                           000FDC  4604 	C$lab6.c$541$5$197 ==.
                                   4605 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:541: lcd_print("Now calibrating Max_PW");
      0010C4 74 C9            [12] 4606 	mov	a,#___str_15
      0010C6 C0 E0            [24] 4607 	push	acc
      0010C8 74 1C            [12] 4608 	mov	a,#(___str_15 >> 8)
      0010CA C0 E0            [24] 4609 	push	acc
      0010CC 74 80            [12] 4610 	mov	a,#0x80
      0010CE C0 E0            [24] 4611 	push	acc
      0010D0 12 01 44         [24] 4612 	lcall	_lcd_print
      0010D3 15 81            [12] 4613 	dec	sp
      0010D5 15 81            [12] 4614 	dec	sp
      0010D7 15 81            [12] 4615 	dec	sp
      0010D9 D0 07            [24] 4616 	pop	ar7
                           000FF3  4617 	C$lab6.c$542$5$197 ==.
                                   4618 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:542: if (st == 0)
      0010DB EF               [12] 4619 	mov	a,r7
      0010DC 70 0C            [24] 4620 	jnz	00134$
                           000FF6  4621 	C$lab6.c$544$6$198 ==.
                                   4622 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:544: RTHRUST_PW = PW_MAX_THRUST;
      0010DE 85 38 4E         [24] 4623 	mov	_RTHRUST_PW,_PW_MAX_THRUST
      0010E1 85 39 4F         [24] 4624 	mov	(_RTHRUST_PW + 1),(_PW_MAX_THRUST + 1)
                           000FFC  4625 	C$lab6.c$545$6$198 ==.
                                   4626 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:545: LTHRUST_PW = PW_MAX_THRUST;
      0010E4 85 38 50         [24] 4627 	mov	_LTHRUST_PW,_PW_MAX_THRUST
      0010E7 85 39 51         [24] 4628 	mov	(_LTHRUST_PW + 1),(_PW_MAX_THRUST + 1)
      0010EA                       4629 00134$:
                           001002  4630 	C$lab6.c$549$4$196 ==.
                                   4631 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:549: value = kpd_input(1);
      0010EA 75 82 01         [24] 4632 	mov	dpl,#0x01
      0010ED C0 07            [24] 4633 	push	ar7
      0010EF 12 02 81         [24] 4634 	lcall	_kpd_input
      0010F2 AD 82            [24] 4635 	mov	r5,dpl
      0010F4 AE 83            [24] 4636 	mov	r6,dph
      0010F6 D0 07            [24] 4637 	pop	ar7
      0010F8 90 00 5F         [24] 4638 	mov	dptr,#_Thrust_cal_value_1_181
      0010FB ED               [12] 4639 	mov	a,r5
      0010FC F0               [24] 4640 	movx	@dptr,a
      0010FD EE               [12] 4641 	mov	a,r6
      0010FE A3               [24] 4642 	inc	dptr
      0010FF F0               [24] 4643 	movx	@dptr,a
                           001018  4644 	C$lab6.c$550$4$196 ==.
                                   4645 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:550: if (value == 1)
      001100 BD 01 12         [24] 4646 	cjne	r5,#0x01,00141$
      001103 BE 00 0F         [24] 4647 	cjne	r6,#0x00,00141$
                           00101E  4648 	C$lab6.c$552$5$199 ==.
                                   4649 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:552: RTHRUST_PW -= 30;
      001106 E5 4E            [12] 4650 	mov	a,_RTHRUST_PW
      001108 24 E2            [12] 4651 	add	a,#0xE2
      00110A F5 4E            [12] 4652 	mov	_RTHRUST_PW,a
      00110C E5 4F            [12] 4653 	mov	a,(_RTHRUST_PW + 1)
      00110E 34 FF            [12] 4654 	addc	a,#0xFF
      001110 F5 4F            [12] 4655 	mov	(_RTHRUST_PW + 1),a
      001112 02 0E AF         [24] 4656 	ljmp	00153$
      001115                       4657 00141$:
                           00102D  4658 	C$lab6.c$554$4$196 ==.
                                   4659 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:554: else if (value==2)
      001115 90 00 5F         [24] 4660 	mov	dptr,#_Thrust_cal_value_1_181
      001118 E0               [24] 4661 	movx	a,@dptr
      001119 FD               [12] 4662 	mov	r5,a
      00111A A3               [24] 4663 	inc	dptr
      00111B E0               [24] 4664 	movx	a,@dptr
      00111C FE               [12] 4665 	mov	r6,a
      00111D BD 02 11         [24] 4666 	cjne	r5,#0x02,00138$
      001120 BE 00 0E         [24] 4667 	cjne	r6,#0x00,00138$
                           00103B  4668 	C$lab6.c$556$5$200 ==.
                                   4669 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:556: RTHRUST_PW += 30;
      001123 74 1E            [12] 4670 	mov	a,#0x1E
      001125 25 4E            [12] 4671 	add	a,_RTHRUST_PW
      001127 F5 4E            [12] 4672 	mov	_RTHRUST_PW,a
      001129 E4               [12] 4673 	clr	a
      00112A 35 4F            [12] 4674 	addc	a,(_RTHRUST_PW + 1)
      00112C F5 4F            [12] 4675 	mov	(_RTHRUST_PW + 1),a
      00112E 02 0E AF         [24] 4676 	ljmp	00153$
      001131                       4677 00138$:
                           001049  4678 	C$lab6.c$558$4$196 ==.
                                   4679 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:558: else if (value == 3)
      001131 90 00 5F         [24] 4680 	mov	dptr,#_Thrust_cal_value_1_181
      001134 E0               [24] 4681 	movx	a,@dptr
      001135 FD               [12] 4682 	mov	r5,a
      001136 A3               [24] 4683 	inc	dptr
      001137 E0               [24] 4684 	movx	a,@dptr
      001138 FE               [12] 4685 	mov	r6,a
      001139 BD 03 05         [24] 4686 	cjne	r5,#0x03,00258$
      00113C BE 00 02         [24] 4687 	cjne	r6,#0x00,00258$
      00113F 80 03            [24] 4688 	sjmp	00259$
      001141                       4689 00258$:
      001141 02 0E AF         [24] 4690 	ljmp	00153$
      001144                       4691 00259$:
                           00105C  4692 	C$lab6.c$560$5$201 ==.
                                   4693 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:560: PW_MAX_THRUST = RTHRUST_PW;
      001144 85 4E 38         [24] 4694 	mov	_PW_MAX_THRUST,_RTHRUST_PW
      001147 85 4F 39         [24] 4695 	mov	(_PW_MAX_THRUST + 1),(_RTHRUST_PW + 1)
                           001062  4696 	C$lab6.c$561$5$201 ==.
                                   4697 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:561: LTHRUST_PW =PW_NUET_THRUST;
      00114A 85 36 50         [24] 4698 	mov	_LTHRUST_PW,_PW_NUET_THRUST
      00114D 85 37 51         [24] 4699 	mov	(_LTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
                           001068  4700 	C$lab6.c$562$5$201 ==.
                                   4701 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:562: RTHRUST_PW =PW_NUET_THRUST;
      001150 85 36 4E         [24] 4702 	mov	_RTHRUST_PW,_PW_NUET_THRUST
      001153 85 37 4F         [24] 4703 	mov	(_RTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
      001156 02 0E AF         [24] 4704 	ljmp	00153$
      001159                       4705 00144$:
                           001071  4706 	C$lab6.c$565$3$183 ==.
                                   4707 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:565: else return;
                           001071  4708 	C$lab6.c$568$1$181 ==.
                           001071  4709 	XG$Thrust_cal$0$0 ==.
      001159 22               [24] 4710 	ret
                                   4711 ;------------------------------------------------------------
                                   4712 ;Allocation info for local variables in function 'Steering_Servo'
                                   4713 ;------------------------------------------------------------
                                   4714 ;direction                 Allocated to registers r6 r7 
                                   4715 ;------------------------------------------------------------
                           001072  4716 	G$Steering_Servo$0$0 ==.
                           001072  4717 	C$lab6.c$571$1$181 ==.
                                   4718 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:571: void Steering_Servo(unsigned int direction)
                                   4719 ;	-----------------------------------------
                                   4720 ;	 function Steering_Servo
                                   4721 ;	-----------------------------------------
      00115A                       4722 _Steering_Servo:
      00115A AE 82            [24] 4723 	mov	r6,dpl
      00115C AF 83            [24] 4724 	mov	r7,dph
                           001076  4725 	C$lab6.c$575$1$203 ==.
                                   4726 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:575: error = desired_D - direction;
      00115E 90 00 51         [24] 4727 	mov	dptr,#_desired_D
      001161 E0               [24] 4728 	movx	a,@dptr
      001162 FC               [12] 4729 	mov	r4,a
      001163 A3               [24] 4730 	inc	dptr
      001164 E0               [24] 4731 	movx	a,@dptr
      001165 FD               [12] 4732 	mov	r5,a
      001166 EC               [12] 4733 	mov	a,r4
      001167 C3               [12] 4734 	clr	c
      001168 9E               [12] 4735 	subb	a,r6
      001169 FE               [12] 4736 	mov	r6,a
      00116A ED               [12] 4737 	mov	a,r5
      00116B 9F               [12] 4738 	subb	a,r7
      00116C FF               [12] 4739 	mov	r7,a
      00116D 90 00 65         [24] 4740 	mov	dptr,#_error
      001170 EE               [12] 4741 	mov	a,r6
      001171 F0               [24] 4742 	movx	@dptr,a
      001172 EF               [12] 4743 	mov	a,r7
      001173 A3               [24] 4744 	inc	dptr
      001174 F0               [24] 4745 	movx	@dptr,a
                           00108D  4746 	C$lab6.c$577$1$203 ==.
                                   4747 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:577: RUDDER_PW  = PW_CENTER_RUDDER + (kp*error) + kd * (old_error - error);
      001175 8E 11            [24] 4748 	mov	__mulint_PARM_2,r6
      001177 8F 12            [24] 4749 	mov	(__mulint_PARM_2 + 1),r7
      001179 85 5A 82         [24] 4750 	mov	dpl,_kp
      00117C 85 5B 83         [24] 4751 	mov	dph,(_kp + 1)
      00117F C0 07            [24] 4752 	push	ar7
      001181 C0 06            [24] 4753 	push	ar6
      001183 12 13 92         [24] 4754 	lcall	__mulint
      001186 AC 82            [24] 4755 	mov	r4,dpl
      001188 AD 83            [24] 4756 	mov	r5,dph
      00118A D0 06            [24] 4757 	pop	ar6
      00118C D0 07            [24] 4758 	pop	ar7
      00118E EC               [12] 4759 	mov	a,r4
      00118F 25 3C            [12] 4760 	add	a,_PW_CENTER_RUDDER
      001191 FC               [12] 4761 	mov	r4,a
      001192 ED               [12] 4762 	mov	a,r5
      001193 35 3D            [12] 4763 	addc	a,(_PW_CENTER_RUDDER + 1)
      001195 FD               [12] 4764 	mov	r5,a
      001196 90 00 67         [24] 4765 	mov	dptr,#_old_error
      001199 E0               [24] 4766 	movx	a,@dptr
      00119A FA               [12] 4767 	mov	r2,a
      00119B A3               [24] 4768 	inc	dptr
      00119C E0               [24] 4769 	movx	a,@dptr
      00119D FB               [12] 4770 	mov	r3,a
      00119E EA               [12] 4771 	mov	a,r2
      00119F C3               [12] 4772 	clr	c
      0011A0 9E               [12] 4773 	subb	a,r6
      0011A1 F5 11            [12] 4774 	mov	__mulint_PARM_2,a
      0011A3 EB               [12] 4775 	mov	a,r3
      0011A4 9F               [12] 4776 	subb	a,r7
      0011A5 F5 12            [12] 4777 	mov	(__mulint_PARM_2 + 1),a
      0011A7 85 5C 82         [24] 4778 	mov	dpl,_kd
      0011AA 85 5D 83         [24] 4779 	mov	dph,(_kd + 1)
      0011AD C0 07            [24] 4780 	push	ar7
      0011AF C0 06            [24] 4781 	push	ar6
      0011B1 C0 05            [24] 4782 	push	ar5
      0011B3 C0 04            [24] 4783 	push	ar4
      0011B5 12 13 92         [24] 4784 	lcall	__mulint
      0011B8 AA 82            [24] 4785 	mov	r2,dpl
      0011BA AB 83            [24] 4786 	mov	r3,dph
      0011BC D0 04            [24] 4787 	pop	ar4
      0011BE D0 05            [24] 4788 	pop	ar5
      0011C0 D0 06            [24] 4789 	pop	ar6
      0011C2 D0 07            [24] 4790 	pop	ar7
      0011C4 EA               [12] 4791 	mov	a,r2
      0011C5 2C               [12] 4792 	add	a,r4
      0011C6 F5 46            [12] 4793 	mov	_RUDDER_PW,a
      0011C8 EB               [12] 4794 	mov	a,r3
      0011C9 3D               [12] 4795 	addc	a,r5
      0011CA F5 47            [12] 4796 	mov	(_RUDDER_PW + 1),a
                           0010E4  4797 	C$lab6.c$579$1$203 ==.
                                   4798 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:579: RTHRUST_PW = PW_NUET_THRUST   + (kp*error) + kd * (old_error - error);
      0011CC 8E 11            [24] 4799 	mov	__mulint_PARM_2,r6
      0011CE 8F 12            [24] 4800 	mov	(__mulint_PARM_2 + 1),r7
      0011D0 85 5A 82         [24] 4801 	mov	dpl,_kp
      0011D3 85 5B 83         [24] 4802 	mov	dph,(_kp + 1)
      0011D6 C0 07            [24] 4803 	push	ar7
      0011D8 C0 06            [24] 4804 	push	ar6
      0011DA C0 03            [24] 4805 	push	ar3
      0011DC C0 02            [24] 4806 	push	ar2
      0011DE 12 13 92         [24] 4807 	lcall	__mulint
      0011E1 AC 82            [24] 4808 	mov	r4,dpl
      0011E3 AD 83            [24] 4809 	mov	r5,dph
      0011E5 D0 02            [24] 4810 	pop	ar2
      0011E7 D0 03            [24] 4811 	pop	ar3
      0011E9 D0 06            [24] 4812 	pop	ar6
      0011EB D0 07            [24] 4813 	pop	ar7
      0011ED EC               [12] 4814 	mov	a,r4
      0011EE 25 36            [12] 4815 	add	a,_PW_NUET_THRUST
      0011F0 FC               [12] 4816 	mov	r4,a
      0011F1 ED               [12] 4817 	mov	a,r5
      0011F2 35 37            [12] 4818 	addc	a,(_PW_NUET_THRUST + 1)
      0011F4 FD               [12] 4819 	mov	r5,a
      0011F5 EA               [12] 4820 	mov	a,r2
      0011F6 2C               [12] 4821 	add	a,r4
      0011F7 F5 4E            [12] 4822 	mov	_RTHRUST_PW,a
      0011F9 EB               [12] 4823 	mov	a,r3
      0011FA 3D               [12] 4824 	addc	a,r5
      0011FB F5 4F            [12] 4825 	mov	(_RTHRUST_PW + 1),a
                           001115  4826 	C$lab6.c$581$1$203 ==.
                                   4827 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:581: LTHRUST_PW = PW_NUET_THRUST   - (kp*error) + kd * (old_error - error);
      0011FD 8E 11            [24] 4828 	mov	__mulint_PARM_2,r6
      0011FF 8F 12            [24] 4829 	mov	(__mulint_PARM_2 + 1),r7
      001201 85 5A 82         [24] 4830 	mov	dpl,_kp
      001204 85 5B 83         [24] 4831 	mov	dph,(_kp + 1)
      001207 C0 07            [24] 4832 	push	ar7
      001209 C0 06            [24] 4833 	push	ar6
      00120B C0 03            [24] 4834 	push	ar3
      00120D C0 02            [24] 4835 	push	ar2
      00120F 12 13 92         [24] 4836 	lcall	__mulint
      001212 AC 82            [24] 4837 	mov	r4,dpl
      001214 AD 83            [24] 4838 	mov	r5,dph
      001216 D0 02            [24] 4839 	pop	ar2
      001218 D0 03            [24] 4840 	pop	ar3
      00121A D0 06            [24] 4841 	pop	ar6
      00121C D0 07            [24] 4842 	pop	ar7
      00121E E5 36            [12] 4843 	mov	a,_PW_NUET_THRUST
      001220 C3               [12] 4844 	clr	c
      001221 9C               [12] 4845 	subb	a,r4
      001222 FC               [12] 4846 	mov	r4,a
      001223 E5 37            [12] 4847 	mov	a,(_PW_NUET_THRUST + 1)
      001225 9D               [12] 4848 	subb	a,r5
      001226 FD               [12] 4849 	mov	r5,a
      001227 EA               [12] 4850 	mov	a,r2
      001228 2C               [12] 4851 	add	a,r4
      001229 F5 50            [12] 4852 	mov	_LTHRUST_PW,a
      00122B EB               [12] 4853 	mov	a,r3
      00122C 3D               [12] 4854 	addc	a,r5
      00122D F5 51            [12] 4855 	mov	(_LTHRUST_PW + 1),a
                           001147  4856 	C$lab6.c$583$1$203 ==.
                                   4857 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:583: old_error=error;
      00122F 90 00 67         [24] 4858 	mov	dptr,#_old_error
      001232 EE               [12] 4859 	mov	a,r6
      001233 F0               [24] 4860 	movx	@dptr,a
      001234 EF               [12] 4861 	mov	a,r7
      001235 A3               [24] 4862 	inc	dptr
      001236 F0               [24] 4863 	movx	@dptr,a
                           00114F  4864 	C$lab6.c$586$1$203 ==.
                                   4865 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:586: if (RUDDER_PW >= PW_RIGHT_RUDDER)
      001237 C3               [12] 4866 	clr	c
      001238 E5 46            [12] 4867 	mov	a,_RUDDER_PW
      00123A 95 3E            [12] 4868 	subb	a,_PW_RIGHT_RUDDER
      00123C E5 47            [12] 4869 	mov	a,(_RUDDER_PW + 1)
      00123E 95 3F            [12] 4870 	subb	a,(_PW_RIGHT_RUDDER + 1)
      001240 40 08            [24] 4871 	jc	00104$
                           00115A  4872 	C$lab6.c$588$2$204 ==.
                                   4873 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:588: RUDDER_PW = PW_RIGHT_RUDDER;
      001242 85 3E 46         [24] 4874 	mov	_RUDDER_PW,_PW_RIGHT_RUDDER
      001245 85 3F 47         [24] 4875 	mov	(_RUDDER_PW + 1),(_PW_RIGHT_RUDDER + 1)
      001248 80 11            [24] 4876 	sjmp	00105$
      00124A                       4877 00104$:
                           001162  4878 	C$lab6.c$590$1$203 ==.
                                   4879 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:590: else if(RUDDER_PW <= PW_LEFT_RUDDER)
      00124A C3               [12] 4880 	clr	c
      00124B E5 3A            [12] 4881 	mov	a,_PW_LEFT_RUDDER
      00124D 95 46            [12] 4882 	subb	a,_RUDDER_PW
      00124F E5 3B            [12] 4883 	mov	a,(_PW_LEFT_RUDDER + 1)
      001251 95 47            [12] 4884 	subb	a,(_RUDDER_PW + 1)
      001253 40 06            [24] 4885 	jc	00105$
                           00116D  4886 	C$lab6.c$592$2$205 ==.
                                   4887 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:592: RUDDER_PW = PW_LEFT_RUDDER;
      001255 85 3A 46         [24] 4888 	mov	_RUDDER_PW,_PW_LEFT_RUDDER
      001258 85 3B 47         [24] 4889 	mov	(_RUDDER_PW + 1),(_PW_LEFT_RUDDER + 1)
      00125B                       4890 00105$:
                           001173  4891 	C$lab6.c$595$1$203 ==.
                                   4892 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:595: if (RTHRUST_PW >= PW_MAX_THRUST)
      00125B C3               [12] 4893 	clr	c
      00125C E5 4E            [12] 4894 	mov	a,_RTHRUST_PW
      00125E 95 38            [12] 4895 	subb	a,_PW_MAX_THRUST
      001260 E5 4F            [12] 4896 	mov	a,(_RTHRUST_PW + 1)
      001262 95 39            [12] 4897 	subb	a,(_PW_MAX_THRUST + 1)
      001264 40 08            [24] 4898 	jc	00109$
                           00117E  4899 	C$lab6.c$597$2$206 ==.
                                   4900 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:597: RTHRUST_PW = PW_MAX_THRUST;
      001266 85 38 4E         [24] 4901 	mov	_RTHRUST_PW,_PW_MAX_THRUST
      001269 85 39 4F         [24] 4902 	mov	(_RTHRUST_PW + 1),(_PW_MAX_THRUST + 1)
      00126C 80 11            [24] 4903 	sjmp	00110$
      00126E                       4904 00109$:
                           001186  4905 	C$lab6.c$599$1$203 ==.
                                   4906 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:599: else if (RTHRUST_PW <=  PW_MIN_THRUST)
      00126E C3               [12] 4907 	clr	c
      00126F E5 34            [12] 4908 	mov	a,_PW_MIN_THRUST
      001271 95 4E            [12] 4909 	subb	a,_RTHRUST_PW
      001273 E5 35            [12] 4910 	mov	a,(_PW_MIN_THRUST + 1)
      001275 95 4F            [12] 4911 	subb	a,(_RTHRUST_PW + 1)
      001277 40 06            [24] 4912 	jc	00110$
                           001191  4913 	C$lab6.c$601$2$207 ==.
                                   4914 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:601: RTHRUST_PW = PW_MIN_THRUST;
      001279 85 34 4E         [24] 4915 	mov	_RTHRUST_PW,_PW_MIN_THRUST
      00127C 85 35 4F         [24] 4916 	mov	(_RTHRUST_PW + 1),(_PW_MIN_THRUST + 1)
      00127F                       4917 00110$:
                           001197  4918 	C$lab6.c$603$1$203 ==.
                                   4919 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:603: if (LTHRUST_PW >= PW_MAX_THRUST)
      00127F C3               [12] 4920 	clr	c
      001280 E5 50            [12] 4921 	mov	a,_LTHRUST_PW
      001282 95 38            [12] 4922 	subb	a,_PW_MAX_THRUST
      001284 E5 51            [12] 4923 	mov	a,(_LTHRUST_PW + 1)
      001286 95 39            [12] 4924 	subb	a,(_PW_MAX_THRUST + 1)
      001288 40 08            [24] 4925 	jc	00114$
                           0011A2  4926 	C$lab6.c$605$2$208 ==.
                                   4927 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:605: LTHRUST_PW = PW_MAX_THRUST;
      00128A 85 38 50         [24] 4928 	mov	_LTHRUST_PW,_PW_MAX_THRUST
      00128D 85 39 51         [24] 4929 	mov	(_LTHRUST_PW + 1),(_PW_MAX_THRUST + 1)
      001290 80 11            [24] 4930 	sjmp	00115$
      001292                       4931 00114$:
                           0011AA  4932 	C$lab6.c$607$1$203 ==.
                                   4933 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:607: else if(LTHRUST_PW <= PW_MIN_THRUST)
      001292 C3               [12] 4934 	clr	c
      001293 E5 34            [12] 4935 	mov	a,_PW_MIN_THRUST
      001295 95 50            [12] 4936 	subb	a,_LTHRUST_PW
      001297 E5 35            [12] 4937 	mov	a,(_PW_MIN_THRUST + 1)
      001299 95 51            [12] 4938 	subb	a,(_LTHRUST_PW + 1)
      00129B 40 06            [24] 4939 	jc	00115$
                           0011B5  4940 	C$lab6.c$609$2$209 ==.
                                   4941 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:609: LTHRUST_PW = PW_MIN_THRUST;
      00129D 85 34 50         [24] 4942 	mov	_LTHRUST_PW,_PW_MIN_THRUST
      0012A0 85 35 51         [24] 4943 	mov	(_LTHRUST_PW + 1),(_PW_MIN_THRUST + 1)
      0012A3                       4944 00115$:
                           0011BB  4945 	C$lab6.c$612$1$203 ==.
                                   4946 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:612: RDR_lo_to_hi = 0xFFFF - RUDDER_PW ;
      0012A3 74 FF            [12] 4947 	mov	a,#0xFF
      0012A5 C3               [12] 4948 	clr	c
      0012A6 95 46            [12] 4949 	subb	a,_RUDDER_PW
      0012A8 F5 48            [12] 4950 	mov	_RDR_lo_to_hi,a
      0012AA 74 FF            [12] 4951 	mov	a,#0xFF
      0012AC 95 47            [12] 4952 	subb	a,(_RUDDER_PW + 1)
      0012AE F5 49            [12] 4953 	mov	(_RDR_lo_to_hi + 1),a
                           0011C8  4954 	C$lab6.c$613$1$203 ==.
                                   4955 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:613: RTRST_lo_to_hi = 0xFFFF - RTHRUST_PW;
      0012B0 74 FF            [12] 4956 	mov	a,#0xFF
      0012B2 C3               [12] 4957 	clr	c
      0012B3 95 4E            [12] 4958 	subb	a,_RTHRUST_PW
      0012B5 F5 52            [12] 4959 	mov	_RTRST_lo_to_hi,a
      0012B7 74 FF            [12] 4960 	mov	a,#0xFF
      0012B9 95 4F            [12] 4961 	subb	a,(_RTHRUST_PW + 1)
      0012BB F5 53            [12] 4962 	mov	(_RTRST_lo_to_hi + 1),a
                           0011D5  4963 	C$lab6.c$614$1$203 ==.
                                   4964 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:614: LTRST_lo_to_hi = 0xFFFF - LTHRUST_PW;
      0012BD 74 FF            [12] 4965 	mov	a,#0xFF
      0012BF C3               [12] 4966 	clr	c
      0012C0 95 50            [12] 4967 	subb	a,_LTHRUST_PW
      0012C2 F5 54            [12] 4968 	mov	_LTRST_lo_to_hi,a
      0012C4 74 FF            [12] 4969 	mov	a,#0xFF
      0012C6 95 51            [12] 4970 	subb	a,(_LTHRUST_PW + 1)
      0012C8 F5 55            [12] 4971 	mov	(_LTRST_lo_to_hi + 1),a
                           0011E2  4972 	C$lab6.c$616$1$203 ==.
                                   4973 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:616: PCA0CP0 = RDR_lo_to_hi;
      0012CA 85 48 EA         [24] 4974 	mov	((_PCA0CP0 >> 0) & 0xFF),_RDR_lo_to_hi
      0012CD 85 49 FA         [24] 4975 	mov	((_PCA0CP0 >> 8) & 0xFF),(_RDR_lo_to_hi + 1)
                           0011E8  4976 	C$lab6.c$617$1$203 ==.
                                   4977 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:617: PCA0CP2 = RTRST_lo_to_hi;
      0012D0 85 52 EC         [24] 4978 	mov	((_PCA0CP2 >> 0) & 0xFF),_RTRST_lo_to_hi
      0012D3 85 53 FC         [24] 4979 	mov	((_PCA0CP2 >> 8) & 0xFF),(_RTRST_lo_to_hi + 1)
                           0011EE  4980 	C$lab6.c$618$1$203 ==.
                                   4981 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:618: PCA0CP3 = LTRST_lo_to_hi;
      0012D6 85 54 ED         [24] 4982 	mov	((_PCA0CP3 >> 0) & 0xFF),_LTRST_lo_to_hi
      0012D9 85 55 FD         [24] 4983 	mov	((_PCA0CP3 >> 8) & 0xFF),(_LTRST_lo_to_hi + 1)
                           0011F4  4984 	C$lab6.c$619$1$203 ==.
                           0011F4  4985 	XG$Steering_Servo$0$0 ==.
      0012DC 22               [24] 4986 	ret
                                   4987 ;------------------------------------------------------------
                                   4988 ;Allocation info for local variables in function 'start'
                                   4989 ;------------------------------------------------------------
                           0011F5  4990 	G$start$0$0 ==.
                           0011F5  4991 	C$lab6.c$621$1$203 ==.
                                   4992 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:621: void start(void)            ///WAITS UNTIL '*' IS ENTERED
                                   4993 ;	-----------------------------------------
                                   4994 ;	 function start
                                   4995 ;	-----------------------------------------
      0012DD                       4996 _start:
                           0011F5  4997 	C$lab6.c$623$1$211 ==.
                                   4998 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:623: while (read_keypad() != '*') wait();
      0012DD                       4999 00101$:
      0012DD 12 02 02         [24] 5000 	lcall	_read_keypad
      0012E0 AF 82            [24] 5001 	mov	r7,dpl
      0012E2 BF 2A 02         [24] 5002 	cjne	r7,#0x2A,00112$
      0012E5 80 05            [24] 5003 	sjmp	00104$
      0012E7                       5004 00112$:
      0012E7 12 12 ED         [24] 5005 	lcall	_wait
      0012EA 80 F1            [24] 5006 	sjmp	00101$
      0012EC                       5007 00104$:
                           001204  5008 	C$lab6.c$624$1$211 ==.
                           001204  5009 	XG$start$0$0 ==.
      0012EC 22               [24] 5010 	ret
                                   5011 ;------------------------------------------------------------
                                   5012 ;Allocation info for local variables in function 'wait'
                                   5013 ;------------------------------------------------------------
                                   5014 ;old_count                 Allocated with name '_wait_old_count_1_213'
                                   5015 ;------------------------------------------------------------
                           001205  5016 	G$wait$0$0 ==.
                           001205  5017 	C$lab6.c$628$1$211 ==.
                                   5018 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:628: void wait(void)
                                   5019 ;	-----------------------------------------
                                   5020 ;	 function wait
                                   5021 ;	-----------------------------------------
      0012ED                       5022 _wait:
                           001205  5023 	C$lab6.c$630$1$213 ==.
                                   5024 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:630: __xdata int old_count = count+1;
      0012ED 90 00 63         [24] 5025 	mov	dptr,#_wait_old_count_1_213
      0012F0 74 01            [12] 5026 	mov	a,#0x01
      0012F2 25 32            [12] 5027 	add	a,_count
      0012F4 F0               [24] 5028 	movx	@dptr,a
      0012F5 E4               [12] 5029 	clr	a
      0012F6 35 33            [12] 5030 	addc	a,(_count + 1)
      0012F8 A3               [24] 5031 	inc	dptr
      0012F9 F0               [24] 5032 	movx	@dptr,a
                           001212  5033 	C$lab6.c$631$1$213 ==.
                                   5034 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:631: while (old_count> count);
      0012FA 90 00 63         [24] 5035 	mov	dptr,#_wait_old_count_1_213
      0012FD E0               [24] 5036 	movx	a,@dptr
      0012FE FE               [12] 5037 	mov	r6,a
      0012FF A3               [24] 5038 	inc	dptr
      001300 E0               [24] 5039 	movx	a,@dptr
      001301 FF               [12] 5040 	mov	r7,a
      001302                       5041 00101$:
      001302 C3               [12] 5042 	clr	c
      001303 E5 32            [12] 5043 	mov	a,_count
      001305 9E               [12] 5044 	subb	a,r6
      001306 E5 33            [12] 5045 	mov	a,(_count + 1)
      001308 64 80            [12] 5046 	xrl	a,#0x80
      00130A 8F F0            [24] 5047 	mov	b,r7
      00130C 63 F0 80         [24] 5048 	xrl	b,#0x80
      00130F 95 F0            [12] 5049 	subb	a,b
      001311 40 EF            [24] 5050 	jc	00101$
                           00122B  5051 	C$lab6.c$632$1$213 ==.
                           00122B  5052 	XG$wait$0$0 ==.
      001313 22               [24] 5053 	ret
                                   5054 ;------------------------------------------------------------
                                   5055 ;Allocation info for local variables in function 'Port_Init'
                                   5056 ;------------------------------------------------------------
                           00122C  5057 	G$Port_Init$0$0 ==.
                           00122C  5058 	C$lab6.c$634$1$213 ==.
                                   5059 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:634: void Port_Init(void)
                                   5060 ;	-----------------------------------------
                                   5061 ;	 function Port_Init
                                   5062 ;	-----------------------------------------
      001314                       5063 _Port_Init:
                           00122C  5064 	C$lab6.c$636$1$215 ==.
                                   5065 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:636: P0MDOUT &= ~0x32;
      001314 AF A4            [24] 5066 	mov	r7,_P0MDOUT
      001316 74 CD            [12] 5067 	mov	a,#0xCD
      001318 5F               [12] 5068 	anl	a,r7
      001319 F5 A4            [12] 5069 	mov	_P0MDOUT,a
                           001233  5070 	C$lab6.c$638$1$215 ==.
                                   5071 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:638: P1MDIN  &= ~0x20;
      00131B AF BD            [24] 5072 	mov	r7,_P1MDIN
      00131D 74 DF            [12] 5073 	mov	a,#0xDF
      00131F 5F               [12] 5074 	anl	a,r7
      001320 F5 BD            [12] 5075 	mov	_P1MDIN,a
                           00123A  5076 	C$lab6.c$640$1$215 ==.
                                   5077 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:640: P1MDOUT |= 0x0F;
      001322 43 A5 0F         [24] 5078 	orl	_P1MDOUT,#0x0F
                           00123D  5079 	C$lab6.c$641$1$215 ==.
                                   5080 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:641: P1MDOUT &= 0x20;
      001325 53 A5 20         [24] 5081 	anl	_P1MDOUT,#0x20
                           001240  5082 	C$lab6.c$643$1$215 ==.
                                   5083 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:643: P1 		 = 0x20;
      001328 75 90 20         [24] 5084 	mov	_P1,#0x20
                           001243  5085 	C$lab6.c$646$1$215 ==.
                           001243  5086 	XG$Port_Init$0$0 ==.
      00132B 22               [24] 5087 	ret
                                   5088 ;------------------------------------------------------------
                                   5089 ;Allocation info for local variables in function 'PCA_Init'
                                   5090 ;------------------------------------------------------------
                           001244  5091 	G$PCA_Init$0$0 ==.
                           001244  5092 	C$lab6.c$648$1$215 ==.
                                   5093 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:648: void PCA_Init(void)
                                   5094 ;	-----------------------------------------
                                   5095 ;	 function PCA_Init
                                   5096 ;	-----------------------------------------
      00132C                       5097 _PCA_Init:
                           001244  5098 	C$lab6.c$650$1$217 ==.
                                   5099 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:650: PCA0MD   = 0x81;
      00132C 75 D9 81         [24] 5100 	mov	_PCA0MD,#0x81
                           001247  5101 	C$lab6.c$651$1$217 ==.
                                   5102 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:651: PCA0CPM0 = 0xC2;    //CCM0 in 16-bit compare mode FOR STEERING
      00132F 75 DA C2         [24] 5103 	mov	_PCA0CPM0,#0xC2
                           00124A  5104 	C$lab6.c$652$1$217 ==.
                                   5105 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:652: PCA0CPM1 = 0xC2;
      001332 75 DB C2         [24] 5106 	mov	_PCA0CPM1,#0xC2
                           00124D  5107 	C$lab6.c$653$1$217 ==.
                                   5108 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:653: PCA0CPM2 = 0xC2;    //CCM2 in 16-bit compare mode FOR MOTOR
      001335 75 DC C2         [24] 5109 	mov	_PCA0CPM2,#0xC2
                           001250  5110 	C$lab6.c$654$1$217 ==.
                                   5111 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:654: PCA0CPM3 = 0XC2;
      001338 75 DD C2         [24] 5112 	mov	_PCA0CPM3,#0xC2
                           001253  5113 	C$lab6.c$655$1$217 ==.
                                   5114 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:655: PCA0CN 	 = 0x40;    //Enable PCA counter
      00133B 75 D8 40         [24] 5115 	mov	_PCA0CN,#0x40
                           001256  5116 	C$lab6.c$656$1$217 ==.
                                   5117 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:656: EIE1    |= 0x08;    //Enable PCA interrupt
      00133E 43 E6 08         [24] 5118 	orl	_EIE1,#0x08
                           001259  5119 	C$lab6.c$657$1$217 ==.
                                   5120 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:657: EA       = 1   ;    //Enable global interrupts
      001341 D2 AF            [12] 5121 	setb	_EA
                           00125B  5122 	C$lab6.c$658$1$217 ==.
                           00125B  5123 	XG$PCA_Init$0$0 ==.
      001343 22               [24] 5124 	ret
                                   5125 ;------------------------------------------------------------
                                   5126 ;Allocation info for local variables in function 'XBR0_Init'
                                   5127 ;------------------------------------------------------------
                           00125C  5128 	G$XBR0_Init$0$0 ==.
                           00125C  5129 	C$lab6.c$661$1$217 ==.
                                   5130 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:661: void XBR0_Init(void)
                                   5131 ;	-----------------------------------------
                                   5132 ;	 function XBR0_Init
                                   5133 ;	-----------------------------------------
      001344                       5134 _XBR0_Init:
                           00125C  5135 	C$lab6.c$663$1$219 ==.
                                   5136 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:663: XBR0 = 0x27;
      001344 75 E1 27         [24] 5137 	mov	_XBR0,#0x27
                           00125F  5138 	C$lab6.c$664$1$219 ==.
                           00125F  5139 	XG$XBR0_Init$0$0 ==.
      001347 22               [24] 5140 	ret
                                   5141 ;------------------------------------------------------------
                                   5142 ;Allocation info for local variables in function 'SMB_Init'
                                   5143 ;------------------------------------------------------------
                           001260  5144 	G$SMB_Init$0$0 ==.
                           001260  5145 	C$lab6.c$666$1$219 ==.
                                   5146 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:666: void SMB_Init(void)
                                   5147 ;	-----------------------------------------
                                   5148 ;	 function SMB_Init
                                   5149 ;	-----------------------------------------
      001348                       5150 _SMB_Init:
                           001260  5151 	C$lab6.c$668$1$221 ==.
                                   5152 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:668: SMB0CR =0x93;
      001348 75 CF 93         [24] 5153 	mov	_SMB0CR,#0x93
                           001263  5154 	C$lab6.c$669$1$221 ==.
                                   5155 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:669: ENSMB =1;
      00134B D2 C6            [12] 5156 	setb	_ENSMB
                           001265  5157 	C$lab6.c$670$1$221 ==.
                           001265  5158 	XG$SMB_Init$0$0 ==.
      00134D 22               [24] 5159 	ret
                                   5160 ;------------------------------------------------------------
                                   5161 ;Allocation info for local variables in function 'ADC_Init'
                                   5162 ;------------------------------------------------------------
                           001266  5163 	G$ADC_Init$0$0 ==.
                           001266  5164 	C$lab6.c$672$1$221 ==.
                                   5165 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:672: void ADC_Init(void)								/////SETS ADC 
                                   5166 ;	-----------------------------------------
                                   5167 ;	 function ADC_Init
                                   5168 ;	-----------------------------------------
      00134E                       5169 _ADC_Init:
                           001266  5170 	C$lab6.c$674$1$223 ==.
                                   5171 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:674: REF0CN = 0x03;
      00134E 75 D1 03         [24] 5172 	mov	_REF0CN,#0x03
                           001269  5173 	C$lab6.c$675$1$223 ==.
                                   5174 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:675: ADC1CN = 0x80;
      001351 75 AA 80         [24] 5175 	mov	_ADC1CN,#0x80
                           00126C  5176 	C$lab6.c$676$1$223 ==.
                                   5177 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:676: ADC1CF |= 0x01;
      001354 43 AB 01         [24] 5178 	orl	_ADC1CF,#0x01
                           00126F  5179 	C$lab6.c$677$1$223 ==.
                           00126F  5180 	XG$ADC_Init$0$0 ==.
      001357 22               [24] 5181 	ret
                                   5182 ;------------------------------------------------------------
                                   5183 ;Allocation info for local variables in function 'PCA_ISR'
                                   5184 ;------------------------------------------------------------
                           001270  5185 	G$PCA_ISR$0$0 ==.
                           001270  5186 	C$lab6.c$679$1$223 ==.
                                   5187 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:679: void PCA_ISR ( void ) __interrupt 9
                                   5188 ;	-----------------------------------------
                                   5189 ;	 function PCA_ISR
                                   5190 ;	-----------------------------------------
      001358                       5191 _PCA_ISR:
      001358 C0 E0            [24] 5192 	push	acc
      00135A C0 D0            [24] 5193 	push	psw
                           001274  5194 	C$lab6.c$682$1$225 ==.
                                   5195 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:682: if (CF)
                           001274  5196 	C$lab6.c$684$2$226 ==.
                                   5197 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:684: CF =0;
      00135C 10 DF 02         [24] 5198 	jbc	_CF,00108$
      00135F 80 0E            [24] 5199 	sjmp	00102$
      001361                       5200 00108$:
                           001279  5201 	C$lab6.c$685$2$226 ==.
                                   5202 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:685: PCA0 = PCA_START;
      001361 75 E9 00         [24] 5203 	mov	((_PCA0 >> 0) & 0xFF),#0x00
      001364 75 F9 70         [24] 5204 	mov	((_PCA0 >> 8) & 0xFF),#0x70
                           00127F  5205 	C$lab6.c$686$2$226 ==.
                                   5206 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:686: count++;
      001367 05 32            [12] 5207 	inc	_count
      001369 E4               [12] 5208 	clr	a
      00136A B5 32 02         [24] 5209 	cjne	a,_count,00109$
      00136D 05 33            [12] 5210 	inc	(_count + 1)
      00136F                       5211 00109$:
      00136F                       5212 00102$:
                           001287  5213 	C$lab6.c$691$1$225 ==.
                                   5214 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:691: PCA0CN &= 0xC0;
      00136F 53 D8 C0         [24] 5215 	anl	_PCA0CN,#0xC0
      001372 D0 D0            [24] 5216 	pop	psw
      001374 D0 E0            [24] 5217 	pop	acc
                           00128E  5218 	C$lab6.c$692$1$225 ==.
                           00128E  5219 	XG$PCA_ISR$0$0 ==.
      001376 32               [24] 5220 	reti
                                   5221 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   5222 ;	eliminated unneeded push/pop dpl
                                   5223 ;	eliminated unneeded push/pop dph
                                   5224 ;	eliminated unneeded push/pop b
                                   5225 	.area CSEG    (CODE)
                                   5226 	.area CONST   (CODE)
                           000000  5227 Flab6$__str_0$0$0 == .
      001B65                       5228 ___str_0:
      001B65 0A                    5229 	.db 0x0A
      001B66 54 79 70 65 20 64 69  5230 	.ascii "Type digits; end w/#"
             67 69 74 73 3B 20 65
             6E 64 20 77 2F 23
      001B7A 00                    5231 	.db 0x00
                           000016  5232 Flab6$__str_1$0$0 == .
      001B7B                       5233 ___str_1:
      001B7B 20 20 20 20 20 25 63  5234 	.ascii "     %c%c%c%c%c"
             25 63 25 63 25 63 25
             63
      001B8A 00                    5235 	.db 0x00
                           000026  5236 Flab6$__str_2$0$0 == .
      001B8B                       5237 ___str_2:
      001B8B 25 63                 5238 	.ascii "%c"
      001B8D 00                    5239 	.db 0x00
                           000029  5240 Flab6$__str_3$0$0 == .
      001B8E                       5241 ___str_3:
      001B8E 0A                    5242 	.db 0x0A
      001B8F 74 65 73 74           5243 	.ascii "test"
      001B93 00                    5244 	.db 0x00
                           00002F  5245 Flab6$__str_4$0$0 == .
      001B94                       5246 ___str_4:
      001B94 50 6C 65 61 73 65 20  5247 	.ascii "Please enter a kp value:"
             65 6E 74 65 72 20 61
             20 6B 70 20 76 61 6C
             75 65 3A
      001BAC 0A                    5248 	.db 0x0A
      001BAD 20                    5249 	.ascii " "
      001BAE 00                    5250 	.db 0x00
                           00004A  5251 Flab6$__str_5$0$0 == .
      001BAF                       5252 ___str_5:
      001BAF 50 6C 65 61 73 65 20  5253 	.ascii "Please enter a kd value:"
             65 6E 74 65 72 20 61
             20 6B 64 20 76 61 6C
             75 65 3A
      001BC7 0A                    5254 	.db 0x0A
      001BC8 20                    5255 	.ascii " "
      001BC9 00                    5256 	.db 0x00
                           000065  5257 Flab6$__str_6$0$0 == .
      001BCA                       5258 ___str_6:
      001BCA 25 64                 5259 	.ascii "%d"
      001BCC 00                    5260 	.db 0x00
                           000068  5261 Flab6$__str_7$0$0 == .
      001BCD                       5262 ___str_7:
      001BCD 43 61 6C 69 62 72 61  5263 	.ascii "Calibration:"
             74 69 6F 6E 3A
      001BD9 0A                    5264 	.db 0x0A
      001BDA 48 65 6C 6C 6F 20 77  5265 	.ascii "Hello world!"
             6F 72 6C 64 21
      001BE6 0A                    5266 	.db 0x0A
      001BE7 30 31 32 5F 33 34 35  5267 	.ascii "012_345_678:"
             5F 36 37 38 3A
      001BF3 0A                    5268 	.db 0x0A
      001BF4 61 62 63 20 64 65 66  5269 	.ascii "abc def ghij"
             20 67 68 69 6A
      001C00 00                    5270 	.db 0x00
                           00009C  5271 Flab6$__str_8$0$0 == .
      001C01                       5272 ___str_8:
      001C01 0D                    5273 	.db 0x0D
      001C02 0A                    5274 	.db 0x0A
      001C03 54 68 65 20 64 65 73  5275 	.ascii "The desired direction is: %d"
             69 72 65 64 20 64 69
             72 65 63 74 69 6F 6E
             20 69 73 3A 20 25 64
      001C1F 00                    5276 	.db 0x00
                           0000BB  5277 Flab6$__str_9$0$0 == .
      001C20                       5278 ___str_9:
      001C20 52 75 64 64 65 72 20  5279 	.ascii "Rudder Calibration"
             43 61 6C 69 62 72 61
             74 69 6F 6E
      001C32 00                    5280 	.db 0x00
                           0000CE  5281 Flab6$__str_10$0$0 == .
      001C33                       5282 ___str_10:
      001C33 67 6F 20 6C 65 66 74  5283 	.ascii "go left: press 1"
             3A 20 70 72 65 73 73
             20 31
      001C43 0A                    5284 	.db 0x0A
      001C44 20 67 6F 20 72 69 67  5285 	.ascii " go right: press 2"
             68 74 3A 20 70 72 65
             73 73 20 32
      001C56 0A                    5286 	.db 0x0A
      001C57 50 72 65 73 73 20 2A  5287 	.ascii "Press * for next screen"
             20 66 6F 72 20 6E 65
             78 74 20 73 63 72 65
             65 6E
      001C6E 00                    5288 	.db 0x00
                           00010A  5289 Flab6$__str_11$0$0 == .
      001C6F                       5290 ___str_11:
      001C6F 0A                    5291 	.db 0x0A
      001C70 20 63 6F 6E 66 69 72  5292 	.ascii " confirm: press 3"
             6D 3A 20 70 72 65 73
             73 20 33
      001C81 0A                    5293 	.db 0x0A
      001C82 20 70 72 65 73 73 20  5294 	.ascii " press * to begin"
             2A 20 74 6F 20 62 65
             67 69 6E
      001C93 00                    5295 	.db 0x00
                           00012F  5296 Flab6$__str_12$0$0 == .
      001C94                       5297 ___str_12:
      001C94 0D                    5298 	.db 0x0D
      001C95 0A                    5299 	.db 0x0A
      001C96 20 25 75              5300 	.ascii " %u"
      001C99 00                    5301 	.db 0x00
                           000135  5302 Flab6$__str_13$0$0 == .
      001C9A                       5303 ___str_13:
      001C9A 4E 6F 77 20 63 61 6C  5304 	.ascii "Now calibrating Min_PW"
             69 62 72 61 74 69 6E
             67 20 4D 69 6E 5F 50
             57
      001CB0 0A                    5305 	.db 0x0A
      001CB1 00                    5306 	.db 0x00
                           00014D  5307 Flab6$__str_14$0$0 == .
      001CB2                       5308 ___str_14:
      001CB2 4E 6F 77 20 63 61 6C  5309 	.ascii "Now calibrating Cen_PW"
             69 62 72 61 74 69 6E
             67 20 43 65 6E 5F 50
             57
      001CC8 00                    5310 	.db 0x00
                           000164  5311 Flab6$__str_15$0$0 == .
      001CC9                       5312 ___str_15:
      001CC9 4E 6F 77 20 63 61 6C  5313 	.ascii "Now calibrating Max_PW"
             69 62 72 61 74 69 6E
             67 20 4D 61 78 5F 50
             57
      001CDF 00                    5314 	.db 0x00
                           00017B  5315 Flab6$__str_16$0$0 == .
      001CE0                       5316 ___str_16:
      001CE0 41 6E 67 6C 65 20 43  5317 	.ascii "Angle Calibration"
             61 6C 69 62 72 61 74
             69 6F 6E
      001CF1 00                    5318 	.db 0x00
                           00018D  5319 Flab6$__str_17$0$0 == .
      001CF2                       5320 ___str_17:
      001CF2 4E 6F 77 20 63 61 6C  5321 	.ascii "Now calibrating Min_PW UP ANGLE"
             69 62 72 61 74 69 6E
             67 20 4D 69 6E 5F 50
             57 20 55 50 20 41 4E
             47 4C 45
      001D11 00                    5322 	.db 0x00
                           0001AD  5323 Flab6$__str_18$0$0 == .
      001D12                       5324 ___str_18:
      001D12 4E 6F 77 20 63 61 6C  5325 	.ascii "Now calibrating Max_PW DOWN ANGLE"
             69 62 72 61 74 69 6E
             67 20 4D 61 78 5F 50
             57 20 44 4F 57 4E 20
             41 4E 47 4C 45
      001D33 00                    5326 	.db 0x00
                           0001CF  5327 Flab6$__str_19$0$0 == .
      001D34                       5328 ___str_19:
      001D34 54 68 72 75 73 74 20  5329 	.ascii "Thrust Calibration"
             43 61 6C 69 62 72 61
             74 69 6F 6E
      001D46 00                    5330 	.db 0x00
                           0001E2  5331 Flab6$__str_20$0$0 == .
      001D47                       5332 ___str_20:
      001D47 4E 6F 77 20 63 61 6C  5333 	.ascii "Now calibrating Min_PW"
             69 62 72 61 74 69 6E
             67 20 4D 69 6E 5F 50
             57
      001D5D 00                    5334 	.db 0x00
                                   5335 	.area XINIT   (CODE)
                           000000  5336 Flab6$__xinit_error$0$0 == .
      001D69                       5337 __xinit__error:
      001D69 00 00                 5338 	.byte #0x00,#0x00	;  0
                           000002  5339 Flab6$__xinit_old_error$0$0 == .
      001D6B                       5340 __xinit__old_error:
      001D6B 00 00                 5341 	.byte #0x00,#0x00	;  0
                                   5342 	.area CABS    (ABS,CODE)
