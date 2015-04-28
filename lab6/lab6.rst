                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (Apr  5 2014) (MINGW32)
                                      4 ; This file was generated Tue Apr 28 10:39:15 2015
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
                           000054  1113 Llab6.Rudder_cal$value$1$143==.
      000055                       1114 _Rudder_cal_value_1_143:
      000055                       1115 	.ds 2
                           000056  1116 Llab6.Rudder_cal$times$1$143==.
      000057                       1117 _Rudder_cal_times_1_143:
      000057                       1118 	.ds 2
                           000058  1119 Llab6.Angle_cal$value$1$162==.
      000059                       1120 _Angle_cal_value_1_162:
      000059                       1121 	.ds 2
                           00005A  1122 Llab6.Angle_cal$times$1$162==.
      00005B                       1123 _Angle_cal_times_1_162:
      00005B                       1124 	.ds 2
                           00005C  1125 Llab6.Thrust_cal$value$1$181==.
      00005D                       1126 _Thrust_cal_value_1_181:
      00005D                       1127 	.ds 2
                           00005E  1128 Llab6.Thrust_cal$times$1$181==.
      00005F                       1129 _Thrust_cal_times_1_181:
      00005F                       1130 	.ds 2
                           000060  1131 Llab6.wait$old_count$1$216==.
      000061                       1132 _wait_old_count_1_216:
      000061                       1133 	.ds 2
                                   1134 ;--------------------------------------------------------
                                   1135 ; absolute external ram data
                                   1136 ;--------------------------------------------------------
                                   1137 	.area XABS    (ABS,XDATA)
                                   1138 ;--------------------------------------------------------
                                   1139 ; external initialized ram data
                                   1140 ;--------------------------------------------------------
                                   1141 	.area XISEG   (XDATA)
                           000000  1142 G$error$0$0==.
      000063                       1143 _error::
      000063                       1144 	.ds 2
                           000002  1145 G$old_error$0$0==.
      000065                       1146 _old_error::
      000065                       1147 	.ds 2
                                   1148 	.area HOME    (CODE)
                                   1149 	.area GSINIT0 (CODE)
                                   1150 	.area GSINIT1 (CODE)
                                   1151 	.area GSINIT2 (CODE)
                                   1152 	.area GSINIT3 (CODE)
                                   1153 	.area GSINIT4 (CODE)
                                   1154 	.area GSINIT5 (CODE)
                                   1155 	.area GSINIT  (CODE)
                                   1156 	.area GSFINAL (CODE)
                                   1157 	.area CSEG    (CODE)
                                   1158 ;--------------------------------------------------------
                                   1159 ; interrupt vector 
                                   1160 ;--------------------------------------------------------
                                   1161 	.area HOME    (CODE)
      000000                       1162 __interrupt_vect:
      000000 02 00 51         [24] 1163 	ljmp	__sdcc_gsinit_startup
      000003 32               [24] 1164 	reti
      000004                       1165 	.ds	7
      00000B 32               [24] 1166 	reti
      00000C                       1167 	.ds	7
      000013 32               [24] 1168 	reti
      000014                       1169 	.ds	7
      00001B 32               [24] 1170 	reti
      00001C                       1171 	.ds	7
      000023 32               [24] 1172 	reti
      000024                       1173 	.ds	7
      00002B 32               [24] 1174 	reti
      00002C                       1175 	.ds	7
      000033 32               [24] 1176 	reti
      000034                       1177 	.ds	7
      00003B 32               [24] 1178 	reti
      00003C                       1179 	.ds	7
      000043 32               [24] 1180 	reti
      000044                       1181 	.ds	7
      00004B 02 13 5C         [24] 1182 	ljmp	_PCA_ISR
                                   1183 ;--------------------------------------------------------
                                   1184 ; global & static initialisations
                                   1185 ;--------------------------------------------------------
                                   1186 	.area HOME    (CODE)
                                   1187 	.area GSINIT  (CODE)
                                   1188 	.area GSFINAL (CODE)
                                   1189 	.area GSINIT  (CODE)
                                   1190 	.globl __sdcc_gsinit_startup
                                   1191 	.globl __sdcc_program_startup
                                   1192 	.globl __start__stack
                                   1193 	.globl __mcs51_genXINIT
                                   1194 	.globl __mcs51_genXRAMCLEAR
                                   1195 	.globl __mcs51_genRAMCLEAR
                           000000  1196 	C$lab6.c$45$1$228 ==.
                                   1197 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:45: int count=0;
      0000AA E4               [12] 1198 	clr	a
      0000AB F5 32            [12] 1199 	mov	_count,a
      0000AD F5 33            [12] 1200 	mov	(_count + 1),a
                           000005  1201 	C$lab6.c$46$1$228 ==.
                                   1202 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:46: unsigned int PW_MIN_THRUST = 2000;
      0000AF 75 34 D0         [24] 1203 	mov	_PW_MIN_THRUST,#0xD0
      0000B2 75 35 07         [24] 1204 	mov	(_PW_MIN_THRUST + 1),#0x07
                           00000B  1205 	C$lab6.c$47$1$228 ==.
                                   1206 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:47: unsigned int PW_NUET_THRUST = 2750;
      0000B5 75 36 BE         [24] 1207 	mov	_PW_NUET_THRUST,#0xBE
      0000B8 75 37 0A         [24] 1208 	mov	(_PW_NUET_THRUST + 1),#0x0A
                           000011  1209 	C$lab6.c$48$1$228 ==.
                                   1210 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:48: unsigned int PW_MAX_THRUST = 3500;
      0000BB 75 38 AC         [24] 1211 	mov	_PW_MAX_THRUST,#0xAC
      0000BE 75 39 0D         [24] 1212 	mov	(_PW_MAX_THRUST + 1),#0x0D
                           000017  1213 	C$lab6.c$50$1$228 ==.
                                   1214 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:50: unsigned int PW_LEFT_RUDDER = 2000;
      0000C1 75 3A D0         [24] 1215 	mov	_PW_LEFT_RUDDER,#0xD0
      0000C4 75 3B 07         [24] 1216 	mov	(_PW_LEFT_RUDDER + 1),#0x07
                           00001D  1217 	C$lab6.c$51$1$228 ==.
                                   1218 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:51: unsigned int PW_CENTER_RUDDER = 2750;
      0000C7 75 3C BE         [24] 1219 	mov	_PW_CENTER_RUDDER,#0xBE
      0000CA 75 3D 0A         [24] 1220 	mov	(_PW_CENTER_RUDDER + 1),#0x0A
                           000023  1221 	C$lab6.c$52$1$228 ==.
                                   1222 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:52: unsigned int PW_RIGHT_RUDDER = 3500;
      0000CD 75 3E AC         [24] 1223 	mov	_PW_RIGHT_RUDDER,#0xAC
      0000D0 75 3F 0D         [24] 1224 	mov	(_PW_RIGHT_RUDDER + 1),#0x0D
                           000029  1225 	C$lab6.c$54$1$228 ==.
                                   1226 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:54: unsigned int PW_UP_ANGLE = 2880;
      0000D3 75 40 40         [24] 1227 	mov	_PW_UP_ANGLE,#0x40
      0000D6 75 41 0B         [24] 1228 	mov	(_PW_UP_ANGLE + 1),#0x0B
                           00002F  1229 	C$lab6.c$55$1$228 ==.
                                   1230 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:55: unsigned int PW_CENTER_ANGLE = 3530;
      0000D9 75 42 CA         [24] 1231 	mov	_PW_CENTER_ANGLE,#0xCA
      0000DC 75 43 0D         [24] 1232 	mov	(_PW_CENTER_ANGLE + 1),#0x0D
                           000035  1233 	C$lab6.c$56$1$228 ==.
                                   1234 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:56: unsigned int PW_DOWN_ANGLE = 4180;
      0000DF 75 44 54         [24] 1235 	mov	_PW_DOWN_ANGLE,#0x54
      0000E2 75 45 10         [24] 1236 	mov	(_PW_DOWN_ANGLE + 1),#0x10
                                   1237 	.area GSFINAL (CODE)
      0000E5 02 00 4E         [24] 1238 	ljmp	__sdcc_program_startup
                                   1239 ;--------------------------------------------------------
                                   1240 ; Home
                                   1241 ;--------------------------------------------------------
                                   1242 	.area HOME    (CODE)
                                   1243 	.area HOME    (CODE)
      00004E                       1244 __sdcc_program_startup:
      00004E 02 05 BE         [24] 1245 	ljmp	_main
                                   1246 ;	return from main will return to caller
                                   1247 ;--------------------------------------------------------
                                   1248 ; code
                                   1249 ;--------------------------------------------------------
                                   1250 	.area CSEG    (CODE)
                                   1251 ;------------------------------------------------------------
                                   1252 ;Allocation info for local variables in function 'SYSCLK_Init'
                                   1253 ;------------------------------------------------------------
                                   1254 ;i                         Allocated to registers 
                                   1255 ;------------------------------------------------------------
                           000000  1256 	G$SYSCLK_Init$0$0 ==.
                           000000  1257 	C$c8051_SDCC.h$42$0$0 ==.
                                   1258 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:42: void SYSCLK_Init(void)
                                   1259 ;	-----------------------------------------
                                   1260 ;	 function SYSCLK_Init
                                   1261 ;	-----------------------------------------
      0000E8                       1262 _SYSCLK_Init:
                           000007  1263 	ar7 = 0x07
                           000006  1264 	ar6 = 0x06
                           000005  1265 	ar5 = 0x05
                           000004  1266 	ar4 = 0x04
                           000003  1267 	ar3 = 0x03
                           000002  1268 	ar2 = 0x02
                           000001  1269 	ar1 = 0x01
                           000000  1270 	ar0 = 0x00
                           000000  1271 	C$c8051_SDCC.h$46$1$31 ==.
                                   1272 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:46: OSCXCN = 0x67;                      // start external oscillator with
      0000E8 75 B1 67         [24] 1273 	mov	_OSCXCN,#0x67
                           000003  1274 	C$c8051_SDCC.h$49$1$31 ==.
                                   1275 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:49: for (i=0; i < 256; i++);            // wait for oscillator to start
      0000EB 7E 00            [12] 1276 	mov	r6,#0x00
      0000ED 7F 01            [12] 1277 	mov	r7,#0x01
      0000EF                       1278 00107$:
      0000EF 1E               [12] 1279 	dec	r6
      0000F0 BE FF 01         [24] 1280 	cjne	r6,#0xFF,00121$
      0000F3 1F               [12] 1281 	dec	r7
      0000F4                       1282 00121$:
      0000F4 EE               [12] 1283 	mov	a,r6
      0000F5 4F               [12] 1284 	orl	a,r7
      0000F6 70 F7            [24] 1285 	jnz	00107$
                           000010  1286 	C$c8051_SDCC.h$51$1$31 ==.
                                   1287 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:51: while (!(OSCXCN & 0x80));           // Wait for crystal osc. to settle
      0000F8                       1288 00102$:
      0000F8 E5 B1            [12] 1289 	mov	a,_OSCXCN
      0000FA 30 E7 FB         [24] 1290 	jnb	acc.7,00102$
                           000015  1291 	C$c8051_SDCC.h$53$1$31 ==.
                                   1292 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:53: OSCICN = 0x88;                      // select external oscillator as SYSCLK
      0000FD 75 B2 88         [24] 1293 	mov	_OSCICN,#0x88
                           000018  1294 	C$c8051_SDCC.h$56$1$31 ==.
                           000018  1295 	XG$SYSCLK_Init$0$0 ==.
      000100 22               [24] 1296 	ret
                                   1297 ;------------------------------------------------------------
                                   1298 ;Allocation info for local variables in function 'UART0_Init'
                                   1299 ;------------------------------------------------------------
                           000019  1300 	G$UART0_Init$0$0 ==.
                           000019  1301 	C$c8051_SDCC.h$64$1$31 ==.
                                   1302 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:64: void UART0_Init(void)
                                   1303 ;	-----------------------------------------
                                   1304 ;	 function UART0_Init
                                   1305 ;	-----------------------------------------
      000101                       1306 _UART0_Init:
                           000019  1307 	C$c8051_SDCC.h$66$1$33 ==.
                                   1308 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:66: SCON0  = 0x50;                      // SCON0: mode 1, 8-bit UART, enable RX
      000101 75 98 50         [24] 1309 	mov	_SCON0,#0x50
                           00001C  1310 	C$c8051_SDCC.h$67$1$33 ==.
                                   1311 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:67: TMOD   = 0x20;                      // TMOD: timer 1, mode 2, 8-bit reload
      000104 75 89 20         [24] 1312 	mov	_TMOD,#0x20
                           00001F  1313 	C$c8051_SDCC.h$68$1$33 ==.
                                   1314 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:68: TH1    = -(SYSCLK/BAUDRATE/16);     // set Timer1 reload value for baudrate
      000107 75 8D DC         [24] 1315 	mov	_TH1,#0xDC
                           000022  1316 	C$c8051_SDCC.h$69$1$33 ==.
                                   1317 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:69: TR1    = 1;                         // start Timer1
      00010A D2 8E            [12] 1318 	setb	_TR1
                           000024  1319 	C$c8051_SDCC.h$70$1$33 ==.
                                   1320 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:70: CKCON |= 0x10;                      // Timer1 uses SYSCLK as time base
      00010C 43 8E 10         [24] 1321 	orl	_CKCON,#0x10
                           000027  1322 	C$c8051_SDCC.h$71$1$33 ==.
                                   1323 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:71: PCON  |= 0x80;                      // SMOD00 = 1 (disable baud rate 
      00010F 43 87 80         [24] 1324 	orl	_PCON,#0x80
                           00002A  1325 	C$c8051_SDCC.h$73$1$33 ==.
                                   1326 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:73: TI0    = 1;                         // Indicate TX0 ready
      000112 D2 99            [12] 1327 	setb	_TI0
                           00002C  1328 	C$c8051_SDCC.h$74$1$33 ==.
                                   1329 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:74: P0MDOUT |= 0x01;                    // Set TX0 to push/pull
      000114 43 A4 01         [24] 1330 	orl	_P0MDOUT,#0x01
                           00002F  1331 	C$c8051_SDCC.h$75$1$33 ==.
                           00002F  1332 	XG$UART0_Init$0$0 ==.
      000117 22               [24] 1333 	ret
                                   1334 ;------------------------------------------------------------
                                   1335 ;Allocation info for local variables in function 'Sys_Init'
                                   1336 ;------------------------------------------------------------
                           000030  1337 	G$Sys_Init$0$0 ==.
                           000030  1338 	C$c8051_SDCC.h$83$1$33 ==.
                                   1339 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:83: void Sys_Init(void)
                                   1340 ;	-----------------------------------------
                                   1341 ;	 function Sys_Init
                                   1342 ;	-----------------------------------------
      000118                       1343 _Sys_Init:
                           000030  1344 	C$c8051_SDCC.h$85$1$35 ==.
                                   1345 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:85: WDTCN = 0xde;			// disable watchdog timer
      000118 75 FF DE         [24] 1346 	mov	_WDTCN,#0xDE
                           000033  1347 	C$c8051_SDCC.h$86$1$35 ==.
                                   1348 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:86: WDTCN = 0xad;
      00011B 75 FF AD         [24] 1349 	mov	_WDTCN,#0xAD
                           000036  1350 	C$c8051_SDCC.h$88$1$35 ==.
                                   1351 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:88: SYSCLK_Init();			// initialize oscillator
      00011E 12 00 E8         [24] 1352 	lcall	_SYSCLK_Init
                           000039  1353 	C$c8051_SDCC.h$89$1$35 ==.
                                   1354 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:89: UART0_Init();			// initialize UART0
      000121 12 01 01         [24] 1355 	lcall	_UART0_Init
                           00003C  1356 	C$c8051_SDCC.h$91$1$35 ==.
                                   1357 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:91: XBR0 |= 0x04;
      000124 43 E1 04         [24] 1358 	orl	_XBR0,#0x04
                           00003F  1359 	C$c8051_SDCC.h$92$1$35 ==.
                                   1360 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:92: XBR2 |= 0x40;                    	// Enable crossbar and weak pull-ups
      000127 43 E3 40         [24] 1361 	orl	_XBR2,#0x40
                           000042  1362 	C$c8051_SDCC.h$93$1$35 ==.
                           000042  1363 	XG$Sys_Init$0$0 ==.
      00012A 22               [24] 1364 	ret
                                   1365 ;------------------------------------------------------------
                                   1366 ;Allocation info for local variables in function 'putchar'
                                   1367 ;------------------------------------------------------------
                                   1368 ;c                         Allocated to registers r7 
                                   1369 ;------------------------------------------------------------
                           000043  1370 	G$putchar$0$0 ==.
                           000043  1371 	C$c8051_SDCC.h$98$1$35 ==.
                                   1372 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:98: void putchar(char c)
                                   1373 ;	-----------------------------------------
                                   1374 ;	 function putchar
                                   1375 ;	-----------------------------------------
      00012B                       1376 _putchar:
      00012B AF 82            [24] 1377 	mov	r7,dpl
                           000045  1378 	C$c8051_SDCC.h$100$1$37 ==.
                                   1379 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:100: while (!TI0); 
      00012D                       1380 00101$:
                           000045  1381 	C$c8051_SDCC.h$101$1$37 ==.
                                   1382 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:101: TI0 = 0;
      00012D 10 99 02         [24] 1383 	jbc	_TI0,00112$
      000130 80 FB            [24] 1384 	sjmp	00101$
      000132                       1385 00112$:
                           00004A  1386 	C$c8051_SDCC.h$102$1$37 ==.
                                   1387 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:102: SBUF0 = c;
      000132 8F 99            [24] 1388 	mov	_SBUF0,r7
                           00004C  1389 	C$c8051_SDCC.h$103$1$37 ==.
                           00004C  1390 	XG$putchar$0$0 ==.
      000134 22               [24] 1391 	ret
                                   1392 ;------------------------------------------------------------
                                   1393 ;Allocation info for local variables in function 'getchar'
                                   1394 ;------------------------------------------------------------
                                   1395 ;c                         Allocated to registers 
                                   1396 ;------------------------------------------------------------
                           00004D  1397 	G$getchar$0$0 ==.
                           00004D  1398 	C$c8051_SDCC.h$108$1$37 ==.
                                   1399 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:108: char getchar(void)
                                   1400 ;	-----------------------------------------
                                   1401 ;	 function getchar
                                   1402 ;	-----------------------------------------
      000135                       1403 _getchar:
                           00004D  1404 	C$c8051_SDCC.h$111$1$39 ==.
                                   1405 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:111: while (!RI0);
      000135                       1406 00101$:
                           00004D  1407 	C$c8051_SDCC.h$112$1$39 ==.
                                   1408 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:112: RI0 = 0;
      000135 10 98 02         [24] 1409 	jbc	_RI0,00112$
      000138 80 FB            [24] 1410 	sjmp	00101$
      00013A                       1411 00112$:
                           000052  1412 	C$c8051_SDCC.h$113$1$39 ==.
                                   1413 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:113: c = SBUF0;
      00013A 85 99 82         [24] 1414 	mov	dpl,_SBUF0
                           000055  1415 	C$c8051_SDCC.h$114$1$39 ==.
                                   1416 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:114: putchar(c);                          // echo to terminal
      00013D 12 01 2B         [24] 1417 	lcall	_putchar
                           000058  1418 	C$c8051_SDCC.h$115$1$39 ==.
                                   1419 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:115: return SBUF0;
      000140 85 99 82         [24] 1420 	mov	dpl,_SBUF0
                           00005B  1421 	C$c8051_SDCC.h$116$1$39 ==.
                           00005B  1422 	XG$getchar$0$0 ==.
      000143 22               [24] 1423 	ret
                                   1424 ;------------------------------------------------------------
                                   1425 ;Allocation info for local variables in function 'lcd_print'
                                   1426 ;------------------------------------------------------------
                                   1427 ;fmt                       Allocated to stack - _bp -5
                                   1428 ;len                       Allocated to registers r6 
                                   1429 ;i                         Allocated to registers 
                                   1430 ;ap                        Allocated to registers 
                                   1431 ;text                      Allocated with name '_lcd_print_text_1_73'
                                   1432 ;------------------------------------------------------------
                           00005C  1433 	G$lcd_print$0$0 ==.
                           00005C  1434 	C$i2c.h$81$1$39 ==.
                                   1435 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:81: void lcd_print(const char *fmt, ...)
                                   1436 ;	-----------------------------------------
                                   1437 ;	 function lcd_print
                                   1438 ;	-----------------------------------------
      000144                       1439 _lcd_print:
      000144 C0 0F            [24] 1440 	push	_bp
      000146 85 81 0F         [24] 1441 	mov	_bp,sp
                           000061  1442 	C$i2c.h$87$1$73 ==.
                                   1443 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:87: if ( strlen(fmt) <= 0 ) return;   //If there is no data to print, return
      000149 E5 0F            [12] 1444 	mov	a,_bp
      00014B 24 FB            [12] 1445 	add	a,#0xfb
      00014D F8               [12] 1446 	mov	r0,a
      00014E 86 82            [24] 1447 	mov	dpl,@r0
      000150 08               [12] 1448 	inc	r0
      000151 86 83            [24] 1449 	mov	dph,@r0
      000153 08               [12] 1450 	inc	r0
      000154 86 F0            [24] 1451 	mov	b,@r0
      000156 12 1A FB         [24] 1452 	lcall	_strlen
      000159 E5 82            [12] 1453 	mov	a,dpl
      00015B 85 83 F0         [24] 1454 	mov	b,dph
      00015E 45 F0            [12] 1455 	orl	a,b
      000160 70 02            [24] 1456 	jnz	00102$
      000162 80 62            [24] 1457 	sjmp	00109$
      000164                       1458 00102$:
                           00007C  1459 	C$i2c.h$89$2$74 ==.
                                   1460 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:89: va_start(ap, fmt);
      000164 E5 0F            [12] 1461 	mov	a,_bp
      000166 24 FB            [12] 1462 	add	a,#0xFB
      000168 FF               [12] 1463 	mov	r7,a
      000169 8F 0B            [24] 1464 	mov	_vsprintf_PARM_3,r7
                           000083  1465 	C$i2c.h$90$1$73 ==.
                                   1466 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:90: vsprintf(text, fmt, ap);
      00016B E5 0F            [12] 1467 	mov	a,_bp
      00016D 24 FB            [12] 1468 	add	a,#0xfb
      00016F F8               [12] 1469 	mov	r0,a
      000170 86 08            [24] 1470 	mov	_vsprintf_PARM_2,@r0
      000172 08               [12] 1471 	inc	r0
      000173 86 09            [24] 1472 	mov	(_vsprintf_PARM_2 + 1),@r0
      000175 08               [12] 1473 	inc	r0
      000176 86 0A            [24] 1474 	mov	(_vsprintf_PARM_2 + 2),@r0
      000178 90 00 01         [24] 1475 	mov	dptr,#_lcd_print_text_1_73
      00017B 75 F0 00         [24] 1476 	mov	b,#0x00
      00017E 12 14 23         [24] 1477 	lcall	_vsprintf
                           000099  1478 	C$i2c.h$93$1$73 ==.
                                   1479 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:93: len = strlen(text);
      000181 90 00 01         [24] 1480 	mov	dptr,#_lcd_print_text_1_73
      000184 75 F0 00         [24] 1481 	mov	b,#0x00
      000187 12 1A FB         [24] 1482 	lcall	_strlen
      00018A AE 82            [24] 1483 	mov	r6,dpl
                           0000A4  1484 	C$i2c.h$94$1$73 ==.
                                   1485 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:94: for(i=0; i<len; i++)
      00018C 7F 00            [12] 1486 	mov	r7,#0x00
      00018E                       1487 00107$:
      00018E C3               [12] 1488 	clr	c
      00018F EF               [12] 1489 	mov	a,r7
      000190 9E               [12] 1490 	subb	a,r6
      000191 50 1F            [24] 1491 	jnc	00105$
                           0000AB  1492 	C$i2c.h$96$2$76 ==.
                                   1493 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:96: if(text[i] == (unsigned char)'\n') text[i] = 13;
      000193 EF               [12] 1494 	mov	a,r7
      000194 24 01            [12] 1495 	add	a,#_lcd_print_text_1_73
      000196 F5 82            [12] 1496 	mov	dpl,a
      000198 E4               [12] 1497 	clr	a
      000199 34 00            [12] 1498 	addc	a,#(_lcd_print_text_1_73 >> 8)
      00019B F5 83            [12] 1499 	mov	dph,a
      00019D E0               [24] 1500 	movx	a,@dptr
      00019E FD               [12] 1501 	mov	r5,a
      00019F BD 0A 0D         [24] 1502 	cjne	r5,#0x0A,00108$
      0001A2 EF               [12] 1503 	mov	a,r7
      0001A3 24 01            [12] 1504 	add	a,#_lcd_print_text_1_73
      0001A5 F5 82            [12] 1505 	mov	dpl,a
      0001A7 E4               [12] 1506 	clr	a
      0001A8 34 00            [12] 1507 	addc	a,#(_lcd_print_text_1_73 >> 8)
      0001AA F5 83            [12] 1508 	mov	dph,a
      0001AC 74 0D            [12] 1509 	mov	a,#0x0D
      0001AE F0               [24] 1510 	movx	@dptr,a
      0001AF                       1511 00108$:
                           0000C7  1512 	C$i2c.h$94$1$73 ==.
                                   1513 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:94: for(i=0; i<len; i++)
      0001AF 0F               [12] 1514 	inc	r7
      0001B0 80 DC            [24] 1515 	sjmp	00107$
      0001B2                       1516 00105$:
                           0000CA  1517 	C$i2c.h$99$1$73 ==.
                                   1518 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:99: i2c_write_data(0xC6, 0x00, text, len);
      0001B2 75 28 01         [24] 1519 	mov	_i2c_write_data_PARM_3,#_lcd_print_text_1_73
      0001B5 75 29 00         [24] 1520 	mov	(_i2c_write_data_PARM_3 + 1),#(_lcd_print_text_1_73 >> 8)
      0001B8 75 2A 00         [24] 1521 	mov	(_i2c_write_data_PARM_3 + 2),#0x00
      0001BB 75 27 00         [24] 1522 	mov	_i2c_write_data_PARM_2,#0x00
      0001BE 8E 2B            [24] 1523 	mov	_i2c_write_data_PARM_4,r6
      0001C0 75 82 C6         [24] 1524 	mov	dpl,#0xC6
      0001C3 12 04 5A         [24] 1525 	lcall	_i2c_write_data
      0001C6                       1526 00109$:
      0001C6 D0 0F            [24] 1527 	pop	_bp
                           0000E0  1528 	C$i2c.h$100$1$73 ==.
                           0000E0  1529 	XG$lcd_print$0$0 ==.
      0001C8 22               [24] 1530 	ret
                                   1531 ;------------------------------------------------------------
                                   1532 ;Allocation info for local variables in function 'lcd_clear'
                                   1533 ;------------------------------------------------------------
                                   1534 ;NumBytes                  Allocated with name '_lcd_clear_NumBytes_1_77'
                                   1535 ;Cmd                       Allocated with name '_lcd_clear_Cmd_1_77'
                                   1536 ;------------------------------------------------------------
                           0000E1  1537 	G$lcd_clear$0$0 ==.
                           0000E1  1538 	C$i2c.h$103$1$73 ==.
                                   1539 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:103: void lcd_clear()
                                   1540 ;	-----------------------------------------
                                   1541 ;	 function lcd_clear
                                   1542 ;	-----------------------------------------
      0001C9                       1543 _lcd_clear:
                           0000E1  1544 	C$i2c.h$105$1$73 ==.
                                   1545 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:105: unsigned char NumBytes=0, Cmd[2];
      0001C9 75 22 00         [24] 1546 	mov	_lcd_clear_NumBytes_1_77,#0x00
                           0000E4  1547 	C$i2c.h$107$1$77 ==.
                                   1548 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:107: while(NumBytes < 64) i2c_read_data(0xC6, 0x00, &NumBytes, 1);
      0001CC                       1549 00101$:
      0001CC 74 C0            [12] 1550 	mov	a,#0x100 - 0x40
      0001CE 25 22            [12] 1551 	add	a,_lcd_clear_NumBytes_1_77
      0001D0 40 17            [24] 1552 	jc	00103$
      0001D2 75 2D 22         [24] 1553 	mov	_i2c_read_data_PARM_3,#_lcd_clear_NumBytes_1_77
      0001D5 75 2E 00         [24] 1554 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0001D8 75 2F 40         [24] 1555 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0001DB 75 2C 00         [24] 1556 	mov	_i2c_read_data_PARM_2,#0x00
      0001DE 75 30 01         [24] 1557 	mov	_i2c_read_data_PARM_4,#0x01
      0001E1 75 82 C6         [24] 1558 	mov	dpl,#0xC6
      0001E4 12 04 D0         [24] 1559 	lcall	_i2c_read_data
      0001E7 80 E3            [24] 1560 	sjmp	00101$
      0001E9                       1561 00103$:
                           000101  1562 	C$i2c.h$109$1$77 ==.
                                   1563 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:109: Cmd[0] = 12;
      0001E9 75 23 0C         [24] 1564 	mov	_lcd_clear_Cmd_1_77,#0x0C
                           000104  1565 	C$i2c.h$110$1$77 ==.
                                   1566 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:110: i2c_write_data(0xC6, 0x00, Cmd, 1);
      0001EC 75 28 23         [24] 1567 	mov	_i2c_write_data_PARM_3,#_lcd_clear_Cmd_1_77
      0001EF 75 29 00         [24] 1568 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      0001F2 75 2A 40         [24] 1569 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      0001F5 75 27 00         [24] 1570 	mov	_i2c_write_data_PARM_2,#0x00
      0001F8 75 2B 01         [24] 1571 	mov	_i2c_write_data_PARM_4,#0x01
      0001FB 75 82 C6         [24] 1572 	mov	dpl,#0xC6
      0001FE 12 04 5A         [24] 1573 	lcall	_i2c_write_data
                           000119  1574 	C$i2c.h$111$1$77 ==.
                           000119  1575 	XG$lcd_clear$0$0 ==.
      000201 22               [24] 1576 	ret
                                   1577 ;------------------------------------------------------------
                                   1578 ;Allocation info for local variables in function 'read_keypad'
                                   1579 ;------------------------------------------------------------
                                   1580 ;i                         Allocated to registers r7 
                                   1581 ;Data                      Allocated with name '_read_keypad_Data_1_78'
                                   1582 ;------------------------------------------------------------
                           00011A  1583 	G$read_keypad$0$0 ==.
                           00011A  1584 	C$i2c.h$114$1$77 ==.
                                   1585 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:114: char read_keypad()
                                   1586 ;	-----------------------------------------
                                   1587 ;	 function read_keypad
                                   1588 ;	-----------------------------------------
      000202                       1589 _read_keypad:
                           00011A  1590 	C$i2c.h$118$1$78 ==.
                                   1591 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:118: i2c_read_data(0xC6, 0x01, Data, 2); //Read I2C data on address 192, register 1, 2 bytes of data.
      000202 75 2D 25         [24] 1592 	mov	_i2c_read_data_PARM_3,#_read_keypad_Data_1_78
      000205 75 2E 00         [24] 1593 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      000208 75 2F 40         [24] 1594 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      00020B 75 2C 01         [24] 1595 	mov	_i2c_read_data_PARM_2,#0x01
      00020E 75 30 02         [24] 1596 	mov	_i2c_read_data_PARM_4,#0x02
      000211 75 82 C6         [24] 1597 	mov	dpl,#0xC6
      000214 12 04 D0         [24] 1598 	lcall	_i2c_read_data
                           00012F  1599 	C$i2c.h$119$1$78 ==.
                                   1600 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:119: if(Data[0] == 0xFF) return 0;  //No response on bus, no display
      000217 74 FF            [12] 1601 	mov	a,#0xFF
      000219 B5 25 05         [24] 1602 	cjne	a,_read_keypad_Data_1_78,00102$
      00021C 75 82 00         [24] 1603 	mov	dpl,#0x00
      00021F 80 5F            [24] 1604 	sjmp	00116$
      000221                       1605 00102$:
                           000139  1606 	C$i2c.h$121$1$78 ==.
                                   1607 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:121: for(i=0; i<8; i++)             //loop 8 times
      000221 7F 00            [12] 1608 	mov	r7,#0x00
      000223 8F 06            [24] 1609 	mov	ar6,r7
      000225                       1610 00114$:
                           00013D  1611 	C$i2c.h$123$2$79 ==.
                                   1612 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:123: if(Data[0] & (0x01 << i))  //find the ASCII value of the keypad read, if it is the current loop value
      000225 8E F0            [24] 1613 	mov	b,r6
      000227 05 F0            [12] 1614 	inc	b
      000229 7C 01            [12] 1615 	mov	r4,#0x01
      00022B 7D 00            [12] 1616 	mov	r5,#0x00
      00022D 80 06            [24] 1617 	sjmp	00145$
      00022F                       1618 00144$:
      00022F EC               [12] 1619 	mov	a,r4
      000230 2C               [12] 1620 	add	a,r4
      000231 FC               [12] 1621 	mov	r4,a
      000232 ED               [12] 1622 	mov	a,r5
      000233 33               [12] 1623 	rlc	a
      000234 FD               [12] 1624 	mov	r5,a
      000235                       1625 00145$:
      000235 D5 F0 F7         [24] 1626 	djnz	b,00144$
      000238 AA 25            [24] 1627 	mov	r2,_read_keypad_Data_1_78
      00023A 7B 00            [12] 1628 	mov	r3,#0x00
      00023C EA               [12] 1629 	mov	a,r2
      00023D 52 04            [12] 1630 	anl	ar4,a
      00023F EB               [12] 1631 	mov	a,r3
      000240 52 05            [12] 1632 	anl	ar5,a
      000242 EC               [12] 1633 	mov	a,r4
      000243 4D               [12] 1634 	orl	a,r5
      000244 60 07            [24] 1635 	jz	00115$
                           00015E  1636 	C$i2c.h$124$2$79 ==.
                                   1637 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:124: return i+49;
      000246 74 31            [12] 1638 	mov	a,#0x31
      000248 2F               [12] 1639 	add	a,r7
      000249 F5 82            [12] 1640 	mov	dpl,a
      00024B 80 33            [24] 1641 	sjmp	00116$
      00024D                       1642 00115$:
                           000165  1643 	C$i2c.h$121$1$78 ==.
                                   1644 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:121: for(i=0; i<8; i++)             //loop 8 times
      00024D 0E               [12] 1645 	inc	r6
      00024E 8E 07            [24] 1646 	mov	ar7,r6
      000250 BE 08 00         [24] 1647 	cjne	r6,#0x08,00147$
      000253                       1648 00147$:
      000253 40 D0            [24] 1649 	jc	00114$
                           00016D  1650 	C$i2c.h$127$1$78 ==.
                                   1651 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:127: if(Data[1] & 0x01) return '9'; //if the value is equal to 9 return 9.
      000255 E5 26            [12] 1652 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000257 30 E0 05         [24] 1653 	jnb	acc.0,00107$
      00025A 75 82 39         [24] 1654 	mov	dpl,#0x39
      00025D 80 21            [24] 1655 	sjmp	00116$
      00025F                       1656 00107$:
                           000177  1657 	C$i2c.h$129$1$78 ==.
                                   1658 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:129: if(Data[1] & 0x02) return '*'; //if the value is equal to the star.
      00025F E5 26            [12] 1659 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000261 30 E1 05         [24] 1660 	jnb	acc.1,00109$
      000264 75 82 2A         [24] 1661 	mov	dpl,#0x2A
      000267 80 17            [24] 1662 	sjmp	00116$
      000269                       1663 00109$:
                           000181  1664 	C$i2c.h$131$1$78 ==.
                                   1665 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:131: if(Data[1] & 0x04) return '0'; //if the value is equal to the 0 key
      000269 E5 26            [12] 1666 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      00026B 30 E2 05         [24] 1667 	jnb	acc.2,00111$
      00026E 75 82 30         [24] 1668 	mov	dpl,#0x30
      000271 80 0D            [24] 1669 	sjmp	00116$
      000273                       1670 00111$:
                           00018B  1671 	C$i2c.h$133$1$78 ==.
                                   1672 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:133: if(Data[1] & 0x08) return '#'; //if the value is equal to the pound key
      000273 E5 26            [12] 1673 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000275 30 E3 05         [24] 1674 	jnb	acc.3,00113$
      000278 75 82 23         [24] 1675 	mov	dpl,#0x23
      00027B 80 03            [24] 1676 	sjmp	00116$
      00027D                       1677 00113$:
                           000195  1678 	C$i2c.h$135$1$78 ==.
                                   1679 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:135: return -1;                     //else return a numerical -1 (0xFF)
      00027D 75 82 FF         [24] 1680 	mov	dpl,#0xFF
      000280                       1681 00116$:
                           000198  1682 	C$i2c.h$136$1$78 ==.
                           000198  1683 	XG$read_keypad$0$0 ==.
      000280 22               [24] 1684 	ret
                                   1685 ;------------------------------------------------------------
                                   1686 ;Allocation info for local variables in function 'kpd_input'
                                   1687 ;------------------------------------------------------------
                                   1688 ;mode                      Allocated to registers r7 
                                   1689 ;sum                       Allocated to registers r5 r6 
                                   1690 ;key                       Allocated to registers r3 
                                   1691 ;i                         Allocated to registers 
                                   1692 ;------------------------------------------------------------
                           000199  1693 	G$kpd_input$0$0 ==.
                           000199  1694 	C$i2c.h$148$1$78 ==.
                                   1695 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:148: unsigned int kpd_input(char mode)
                                   1696 ;	-----------------------------------------
                                   1697 ;	 function kpd_input
                                   1698 ;	-----------------------------------------
      000281                       1699 _kpd_input:
      000281 AF 82            [24] 1700 	mov	r7,dpl
                           00019B  1701 	C$i2c.h$153$1$81 ==.
                                   1702 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:153: sum = 0;
                           00019B  1703 	C$i2c.h$156$1$81 ==.
                                   1704 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:156: if(mode==0)lcd_print("\nType digits; end w/#");
      000283 E4               [12] 1705 	clr	a
      000284 FD               [12] 1706 	mov	r5,a
      000285 FE               [12] 1707 	mov	r6,a
      000286 EF               [12] 1708 	mov	a,r7
      000287 70 1D            [24] 1709 	jnz	00102$
      000289 C0 06            [24] 1710 	push	ar6
      00028B C0 05            [24] 1711 	push	ar5
      00028D 74 69            [12] 1712 	mov	a,#___str_0
      00028F C0 E0            [24] 1713 	push	acc
      000291 74 1B            [12] 1714 	mov	a,#(___str_0 >> 8)
      000293 C0 E0            [24] 1715 	push	acc
      000295 74 80            [12] 1716 	mov	a,#0x80
      000297 C0 E0            [24] 1717 	push	acc
      000299 12 01 44         [24] 1718 	lcall	_lcd_print
      00029C 15 81            [12] 1719 	dec	sp
      00029E 15 81            [12] 1720 	dec	sp
      0002A0 15 81            [12] 1721 	dec	sp
      0002A2 D0 05            [24] 1722 	pop	ar5
      0002A4 D0 06            [24] 1723 	pop	ar6
      0002A6                       1724 00102$:
                           0001BE  1725 	C$i2c.h$158$1$81 ==.
                                   1726 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:158: lcd_print("     %c%c%c%c%c",0x08,0x08,0x08,0x08,0x08);
      0002A6 C0 06            [24] 1727 	push	ar6
      0002A8 C0 05            [24] 1728 	push	ar5
      0002AA 74 08            [12] 1729 	mov	a,#0x08
      0002AC C0 E0            [24] 1730 	push	acc
      0002AE E4               [12] 1731 	clr	a
      0002AF C0 E0            [24] 1732 	push	acc
      0002B1 74 08            [12] 1733 	mov	a,#0x08
      0002B3 C0 E0            [24] 1734 	push	acc
      0002B5 E4               [12] 1735 	clr	a
      0002B6 C0 E0            [24] 1736 	push	acc
      0002B8 74 08            [12] 1737 	mov	a,#0x08
      0002BA C0 E0            [24] 1738 	push	acc
      0002BC E4               [12] 1739 	clr	a
      0002BD C0 E0            [24] 1740 	push	acc
      0002BF 74 08            [12] 1741 	mov	a,#0x08
      0002C1 C0 E0            [24] 1742 	push	acc
      0002C3 E4               [12] 1743 	clr	a
      0002C4 C0 E0            [24] 1744 	push	acc
      0002C6 74 08            [12] 1745 	mov	a,#0x08
      0002C8 C0 E0            [24] 1746 	push	acc
      0002CA E4               [12] 1747 	clr	a
      0002CB C0 E0            [24] 1748 	push	acc
      0002CD 74 7F            [12] 1749 	mov	a,#___str_1
      0002CF C0 E0            [24] 1750 	push	acc
      0002D1 74 1B            [12] 1751 	mov	a,#(___str_1 >> 8)
      0002D3 C0 E0            [24] 1752 	push	acc
      0002D5 74 80            [12] 1753 	mov	a,#0x80
      0002D7 C0 E0            [24] 1754 	push	acc
      0002D9 12 01 44         [24] 1755 	lcall	_lcd_print
      0002DC E5 81            [12] 1756 	mov	a,sp
      0002DE 24 F3            [12] 1757 	add	a,#0xf3
      0002E0 F5 81            [12] 1758 	mov	sp,a
                           0001FA  1759 	C$i2c.h$160$1$81 ==.
                                   1760 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:160: delay_time(500000);	//Add 20ms delay before reading i2c in loop
      0002E2 90 A1 20         [24] 1761 	mov	dptr,#0xA120
      0002E5 75 F0 07         [24] 1762 	mov	b,#0x07
      0002E8 E4               [12] 1763 	clr	a
      0002E9 12 03 F5         [24] 1764 	lcall	_delay_time
      0002EC D0 05            [24] 1765 	pop	ar5
      0002EE D0 06            [24] 1766 	pop	ar6
                           000208  1767 	C$i2c.h$164$1$81 ==.
                                   1768 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:164: for(i=0; i<5; i++)
      0002F0 7F 00            [12] 1769 	mov	r7,#0x00
                           00020A  1770 	C$i2c.h$166$3$84 ==.
                                   1771 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:166: while(((key=read_keypad()) == -1) || (key == '*'))delay_time(10000);
      0002F2                       1772 00104$:
      0002F2 C0 07            [24] 1773 	push	ar7
      0002F4 C0 06            [24] 1774 	push	ar6
      0002F6 C0 05            [24] 1775 	push	ar5
      0002F8 12 02 02         [24] 1776 	lcall	_read_keypad
      0002FB AC 82            [24] 1777 	mov	r4,dpl
      0002FD D0 05            [24] 1778 	pop	ar5
      0002FF D0 06            [24] 1779 	pop	ar6
      000301 D0 07            [24] 1780 	pop	ar7
      000303 8C 03            [24] 1781 	mov	ar3,r4
      000305 BC FF 02         [24] 1782 	cjne	r4,#0xFF,00146$
      000308 80 03            [24] 1783 	sjmp	00105$
      00030A                       1784 00146$:
      00030A BB 2A 17         [24] 1785 	cjne	r3,#0x2A,00106$
      00030D                       1786 00105$:
      00030D 90 27 10         [24] 1787 	mov	dptr,#0x2710
      000310 E4               [12] 1788 	clr	a
      000311 F5 F0            [12] 1789 	mov	b,a
      000313 C0 07            [24] 1790 	push	ar7
      000315 C0 06            [24] 1791 	push	ar6
      000317 C0 05            [24] 1792 	push	ar5
      000319 12 03 F5         [24] 1793 	lcall	_delay_time
      00031C D0 05            [24] 1794 	pop	ar5
      00031E D0 06            [24] 1795 	pop	ar6
      000320 D0 07            [24] 1796 	pop	ar7
      000322 80 CE            [24] 1797 	sjmp	00104$
      000324                       1798 00106$:
                           00023C  1799 	C$i2c.h$167$2$82 ==.
                                   1800 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:167: if(key == '#')
      000324 BB 23 2A         [24] 1801 	cjne	r3,#0x23,00114$
                           00023F  1802 	C$i2c.h$169$3$83 ==.
                                   1803 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:169: while(read_keypad() == '#')delay_time(10000);
      000327                       1804 00107$:
      000327 C0 06            [24] 1805 	push	ar6
      000329 C0 05            [24] 1806 	push	ar5
      00032B 12 02 02         [24] 1807 	lcall	_read_keypad
      00032E AC 82            [24] 1808 	mov	r4,dpl
      000330 D0 05            [24] 1809 	pop	ar5
      000332 D0 06            [24] 1810 	pop	ar6
      000334 BC 23 13         [24] 1811 	cjne	r4,#0x23,00109$
      000337 90 27 10         [24] 1812 	mov	dptr,#0x2710
      00033A E4               [12] 1813 	clr	a
      00033B F5 F0            [12] 1814 	mov	b,a
      00033D C0 06            [24] 1815 	push	ar6
      00033F C0 05            [24] 1816 	push	ar5
      000341 12 03 F5         [24] 1817 	lcall	_delay_time
      000344 D0 05            [24] 1818 	pop	ar5
      000346 D0 06            [24] 1819 	pop	ar6
      000348 80 DD            [24] 1820 	sjmp	00107$
      00034A                       1821 00109$:
                           000262  1822 	C$i2c.h$170$3$83 ==.
                                   1823 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:170: return sum;
      00034A 8D 82            [24] 1824 	mov	dpl,r5
      00034C 8E 83            [24] 1825 	mov	dph,r6
      00034E 02 03 F4         [24] 1826 	ljmp	00119$
      000351                       1827 00114$:
                           000269  1828 	C$i2c.h$174$3$84 ==.
                                   1829 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:174: lcd_print("%c", key);
      000351 EB               [12] 1830 	mov	a,r3
      000352 FA               [12] 1831 	mov	r2,a
      000353 33               [12] 1832 	rlc	a
      000354 95 E0            [12] 1833 	subb	a,acc
      000356 FC               [12] 1834 	mov	r4,a
      000357 C0 07            [24] 1835 	push	ar7
      000359 C0 06            [24] 1836 	push	ar6
      00035B C0 05            [24] 1837 	push	ar5
      00035D C0 04            [24] 1838 	push	ar4
      00035F C0 03            [24] 1839 	push	ar3
      000361 C0 02            [24] 1840 	push	ar2
      000363 C0 02            [24] 1841 	push	ar2
      000365 C0 04            [24] 1842 	push	ar4
      000367 74 8F            [12] 1843 	mov	a,#___str_2
      000369 C0 E0            [24] 1844 	push	acc
      00036B 74 1B            [12] 1845 	mov	a,#(___str_2 >> 8)
      00036D C0 E0            [24] 1846 	push	acc
      00036F 74 80            [12] 1847 	mov	a,#0x80
      000371 C0 E0            [24] 1848 	push	acc
      000373 12 01 44         [24] 1849 	lcall	_lcd_print
      000376 E5 81            [12] 1850 	mov	a,sp
      000378 24 FB            [12] 1851 	add	a,#0xfb
      00037A F5 81            [12] 1852 	mov	sp,a
      00037C D0 02            [24] 1853 	pop	ar2
      00037E D0 03            [24] 1854 	pop	ar3
      000380 D0 04            [24] 1855 	pop	ar4
      000382 D0 05            [24] 1856 	pop	ar5
      000384 D0 06            [24] 1857 	pop	ar6
                           00029E  1858 	C$i2c.h$175$1$81 ==.
                                   1859 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:175: sum = sum*10 + key - '0';
      000386 8D 11            [24] 1860 	mov	__mulint_PARM_2,r5
      000388 8E 12            [24] 1861 	mov	(__mulint_PARM_2 + 1),r6
      00038A 90 00 0A         [24] 1862 	mov	dptr,#0x000A
      00038D C0 04            [24] 1863 	push	ar4
      00038F C0 03            [24] 1864 	push	ar3
      000391 C0 02            [24] 1865 	push	ar2
      000393 12 13 96         [24] 1866 	lcall	__mulint
      000396 A8 82            [24] 1867 	mov	r0,dpl
      000398 A9 83            [24] 1868 	mov	r1,dph
      00039A D0 02            [24] 1869 	pop	ar2
      00039C D0 03            [24] 1870 	pop	ar3
      00039E D0 04            [24] 1871 	pop	ar4
      0003A0 D0 07            [24] 1872 	pop	ar7
      0003A2 EA               [12] 1873 	mov	a,r2
      0003A3 28               [12] 1874 	add	a,r0
      0003A4 F8               [12] 1875 	mov	r0,a
      0003A5 EC               [12] 1876 	mov	a,r4
      0003A6 39               [12] 1877 	addc	a,r1
      0003A7 F9               [12] 1878 	mov	r1,a
      0003A8 E8               [12] 1879 	mov	a,r0
      0003A9 24 D0            [12] 1880 	add	a,#0xD0
      0003AB FD               [12] 1881 	mov	r5,a
      0003AC E9               [12] 1882 	mov	a,r1
      0003AD 34 FF            [12] 1883 	addc	a,#0xFF
      0003AF FE               [12] 1884 	mov	r6,a
                           0002C8  1885 	C$i2c.h$176$3$84 ==.
                                   1886 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:176: while(read_keypad() == key)delay_time(10000); //wait for key to be released
      0003B0                       1887 00110$:
      0003B0 C0 07            [24] 1888 	push	ar7
      0003B2 C0 06            [24] 1889 	push	ar6
      0003B4 C0 05            [24] 1890 	push	ar5
      0003B6 C0 03            [24] 1891 	push	ar3
      0003B8 12 02 02         [24] 1892 	lcall	_read_keypad
      0003BB AC 82            [24] 1893 	mov	r4,dpl
      0003BD D0 03            [24] 1894 	pop	ar3
      0003BF D0 05            [24] 1895 	pop	ar5
      0003C1 D0 06            [24] 1896 	pop	ar6
      0003C3 D0 07            [24] 1897 	pop	ar7
      0003C5 EC               [12] 1898 	mov	a,r4
      0003C6 B5 03 1B         [24] 1899 	cjne	a,ar3,00118$
      0003C9 90 27 10         [24] 1900 	mov	dptr,#0x2710
      0003CC E4               [12] 1901 	clr	a
      0003CD F5 F0            [12] 1902 	mov	b,a
      0003CF C0 07            [24] 1903 	push	ar7
      0003D1 C0 06            [24] 1904 	push	ar6
      0003D3 C0 05            [24] 1905 	push	ar5
      0003D5 C0 03            [24] 1906 	push	ar3
      0003D7 12 03 F5         [24] 1907 	lcall	_delay_time
      0003DA D0 03            [24] 1908 	pop	ar3
      0003DC D0 05            [24] 1909 	pop	ar5
      0003DE D0 06            [24] 1910 	pop	ar6
      0003E0 D0 07            [24] 1911 	pop	ar7
      0003E2 80 CC            [24] 1912 	sjmp	00110$
      0003E4                       1913 00118$:
                           0002FC  1914 	C$i2c.h$164$1$81 ==.
                                   1915 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:164: for(i=0; i<5; i++)
      0003E4 0F               [12] 1916 	inc	r7
      0003E5 C3               [12] 1917 	clr	c
      0003E6 EF               [12] 1918 	mov	a,r7
      0003E7 64 80            [12] 1919 	xrl	a,#0x80
      0003E9 94 85            [12] 1920 	subb	a,#0x85
      0003EB 50 03            [24] 1921 	jnc	00155$
      0003ED 02 02 F2         [24] 1922 	ljmp	00104$
      0003F0                       1923 00155$:
                           000308  1924 	C$i2c.h$179$1$81 ==.
                                   1925 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:179: return sum;
      0003F0 8D 82            [24] 1926 	mov	dpl,r5
      0003F2 8E 83            [24] 1927 	mov	dph,r6
      0003F4                       1928 00119$:
                           00030C  1929 	C$i2c.h$180$1$81 ==.
                           00030C  1930 	XG$kpd_input$0$0 ==.
      0003F4 22               [24] 1931 	ret
                                   1932 ;------------------------------------------------------------
                                   1933 ;Allocation info for local variables in function 'delay_time'
                                   1934 ;------------------------------------------------------------
                                   1935 ;time_end                  Allocated to registers r4 r5 r6 r7 
                                   1936 ;index                     Allocated to registers 
                                   1937 ;------------------------------------------------------------
                           00030D  1938 	G$delay_time$0$0 ==.
                           00030D  1939 	C$i2c.h$189$1$81 ==.
                                   1940 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:189: void delay_time (unsigned long time_end)
                                   1941 ;	-----------------------------------------
                                   1942 ;	 function delay_time
                                   1943 ;	-----------------------------------------
      0003F5                       1944 _delay_time:
      0003F5 AC 82            [24] 1945 	mov	r4,dpl
      0003F7 AD 83            [24] 1946 	mov	r5,dph
      0003F9 AE F0            [24] 1947 	mov	r6,b
      0003FB FF               [12] 1948 	mov	r7,a
                           000314  1949 	C$i2c.h$192$1$86 ==.
                                   1950 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:192: for (index = 0; index < time_end; index++); //for loop delay
      0003FC 78 00            [12] 1951 	mov	r0,#0x00
      0003FE 79 00            [12] 1952 	mov	r1,#0x00
      000400 7A 00            [12] 1953 	mov	r2,#0x00
      000402 7B 00            [12] 1954 	mov	r3,#0x00
      000404                       1955 00103$:
      000404 C3               [12] 1956 	clr	c
      000405 E8               [12] 1957 	mov	a,r0
      000406 9C               [12] 1958 	subb	a,r4
      000407 E9               [12] 1959 	mov	a,r1
      000408 9D               [12] 1960 	subb	a,r5
      000409 EA               [12] 1961 	mov	a,r2
      00040A 9E               [12] 1962 	subb	a,r6
      00040B EB               [12] 1963 	mov	a,r3
      00040C 9F               [12] 1964 	subb	a,r7
      00040D 50 0F            [24] 1965 	jnc	00105$
      00040F 08               [12] 1966 	inc	r0
      000410 B8 00 09         [24] 1967 	cjne	r0,#0x00,00115$
      000413 09               [12] 1968 	inc	r1
      000414 B9 00 05         [24] 1969 	cjne	r1,#0x00,00115$
      000417 0A               [12] 1970 	inc	r2
      000418 BA 00 E9         [24] 1971 	cjne	r2,#0x00,00103$
      00041B 0B               [12] 1972 	inc	r3
      00041C                       1973 00115$:
      00041C 80 E6            [24] 1974 	sjmp	00103$
      00041E                       1975 00105$:
                           000336  1976 	C$i2c.h$193$1$86 ==.
                           000336  1977 	XG$delay_time$0$0 ==.
      00041E 22               [24] 1978 	ret
                                   1979 ;------------------------------------------------------------
                                   1980 ;Allocation info for local variables in function 'i2c_start'
                                   1981 ;------------------------------------------------------------
                           000337  1982 	G$i2c_start$0$0 ==.
                           000337  1983 	C$i2c.h$196$1$86 ==.
                                   1984 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:196: void i2c_start(void)
                                   1985 ;	-----------------------------------------
                                   1986 ;	 function i2c_start
                                   1987 ;	-----------------------------------------
      00041F                       1988 _i2c_start:
                           000337  1989 	C$i2c.h$198$1$88 ==.
                                   1990 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:198: while(BUSY);              //Wait until SMBus0 is free
      00041F                       1991 00101$:
      00041F 20 C7 FD         [24] 1992 	jb	_BUSY,00101$
                           00033A  1993 	C$i2c.h$199$1$88 ==.
                                   1994 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:199: STA = 1;                  //Set Start Bit
      000422 D2 C5            [12] 1995 	setb	_STA
                           00033C  1996 	C$i2c.h$200$1$88 ==.
                                   1997 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:200: while(!SI);               //Wait until start sent
      000424                       1998 00104$:
      000424 30 C3 FD         [24] 1999 	jnb	_SI,00104$
                           00033F  2000 	C$i2c.h$201$1$88 ==.
                                   2001 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:201: STA = 0;                  //Clear start bit
      000427 C2 C5            [12] 2002 	clr	_STA
                           000341  2003 	C$i2c.h$202$1$88 ==.
                                   2004 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:202: SI = 0;                   //Clear SI
      000429 C2 C3            [12] 2005 	clr	_SI
                           000343  2006 	C$i2c.h$203$1$88 ==.
                           000343  2007 	XG$i2c_start$0$0 ==.
      00042B 22               [24] 2008 	ret
                                   2009 ;------------------------------------------------------------
                                   2010 ;Allocation info for local variables in function 'i2c_write'
                                   2011 ;------------------------------------------------------------
                                   2012 ;output_data               Allocated to registers 
                                   2013 ;------------------------------------------------------------
                           000344  2014 	G$i2c_write$0$0 ==.
                           000344  2015 	C$i2c.h$206$1$88 ==.
                                   2016 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:206: void i2c_write(unsigned char output_data)
                                   2017 ;	-----------------------------------------
                                   2018 ;	 function i2c_write
                                   2019 ;	-----------------------------------------
      00042C                       2020 _i2c_write:
      00042C 85 82 C2         [24] 2021 	mov	_SMB0DAT,dpl
                           000347  2022 	C$i2c.h$209$1$90 ==.
                                   2023 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:209: while(!SI);               //Wait until send is complete
      00042F                       2024 00101$:
                           000347  2025 	C$i2c.h$210$1$90 ==.
                                   2026 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:210: SI = 0;                   //Clear SI
      00042F 10 C3 02         [24] 2027 	jbc	_SI,00112$
      000432 80 FB            [24] 2028 	sjmp	00101$
      000434                       2029 00112$:
                           00034C  2030 	C$i2c.h$211$1$90 ==.
                           00034C  2031 	XG$i2c_write$0$0 ==.
      000434 22               [24] 2032 	ret
                                   2033 ;------------------------------------------------------------
                                   2034 ;Allocation info for local variables in function 'i2c_write_and_stop'
                                   2035 ;------------------------------------------------------------
                                   2036 ;output_data               Allocated to registers 
                                   2037 ;------------------------------------------------------------
                           00034D  2038 	G$i2c_write_and_stop$0$0 ==.
                           00034D  2039 	C$i2c.h$214$1$90 ==.
                                   2040 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:214: void i2c_write_and_stop(unsigned char output_data)
                                   2041 ;	-----------------------------------------
                                   2042 ;	 function i2c_write_and_stop
                                   2043 ;	-----------------------------------------
      000435                       2044 _i2c_write_and_stop:
      000435 85 82 C2         [24] 2045 	mov	_SMB0DAT,dpl
                           000350  2046 	C$i2c.h$217$1$92 ==.
                                   2047 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:217: STO = 1;                  //Set stop bit
      000438 D2 C4            [12] 2048 	setb	_STO
                           000352  2049 	C$i2c.h$218$1$92 ==.
                                   2050 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:218: while(!SI);               //Wait until send is complete
      00043A                       2051 00101$:
                           000352  2052 	C$i2c.h$219$1$92 ==.
                                   2053 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:219: SI = 0;                   //clear SI
      00043A 10 C3 02         [24] 2054 	jbc	_SI,00112$
      00043D 80 FB            [24] 2055 	sjmp	00101$
      00043F                       2056 00112$:
                           000357  2057 	C$i2c.h$220$1$92 ==.
                           000357  2058 	XG$i2c_write_and_stop$0$0 ==.
      00043F 22               [24] 2059 	ret
                                   2060 ;------------------------------------------------------------
                                   2061 ;Allocation info for local variables in function 'i2c_read'
                                   2062 ;------------------------------------------------------------
                                   2063 ;input_data                Allocated to registers 
                                   2064 ;------------------------------------------------------------
                           000358  2065 	G$i2c_read$0$0 ==.
                           000358  2066 	C$i2c.h$223$1$92 ==.
                                   2067 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:223: unsigned char i2c_read(void)
                                   2068 ;	-----------------------------------------
                                   2069 ;	 function i2c_read
                                   2070 ;	-----------------------------------------
      000440                       2071 _i2c_read:
                           000358  2072 	C$i2c.h$226$1$94 ==.
                                   2073 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:226: while(!SI);                //Wait until we have data to read
      000440                       2074 00101$:
      000440 30 C3 FD         [24] 2075 	jnb	_SI,00101$
                           00035B  2076 	C$i2c.h$227$1$94 ==.
                                   2077 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:227: input_data = SMB0DAT;      //Read the data
      000443 85 C2 82         [24] 2078 	mov	dpl,_SMB0DAT
                           00035E  2079 	C$i2c.h$228$1$94 ==.
                                   2080 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:228: SI = 0;                    //Clear SI
      000446 C2 C3            [12] 2081 	clr	_SI
                           000360  2082 	C$i2c.h$229$1$94 ==.
                                   2083 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:229: return input_data;         //Return the read data
                           000360  2084 	C$i2c.h$230$1$94 ==.
                           000360  2085 	XG$i2c_read$0$0 ==.
      000448 22               [24] 2086 	ret
                                   2087 ;------------------------------------------------------------
                                   2088 ;Allocation info for local variables in function 'i2c_read_and_stop'
                                   2089 ;------------------------------------------------------------
                                   2090 ;input_data                Allocated to registers r7 
                                   2091 ;------------------------------------------------------------
                           000361  2092 	G$i2c_read_and_stop$0$0 ==.
                           000361  2093 	C$i2c.h$233$1$94 ==.
                                   2094 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:233: unsigned char i2c_read_and_stop(void)
                                   2095 ;	-----------------------------------------
                                   2096 ;	 function i2c_read_and_stop
                                   2097 ;	-----------------------------------------
      000449                       2098 _i2c_read_and_stop:
                           000361  2099 	C$i2c.h$236$1$96 ==.
                                   2100 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:236: while(!SI);                //Wait until we have data to read
      000449                       2101 00101$:
      000449 30 C3 FD         [24] 2102 	jnb	_SI,00101$
                           000364  2103 	C$i2c.h$237$1$96 ==.
                                   2104 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:237: input_data = SMB0DAT;      //Read the data
      00044C AF C2            [24] 2105 	mov	r7,_SMB0DAT
                           000366  2106 	C$i2c.h$238$1$96 ==.
                                   2107 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:238: SI = 0;                    //Clear SI
      00044E C2 C3            [12] 2108 	clr	_SI
                           000368  2109 	C$i2c.h$239$1$96 ==.
                                   2110 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:239: STO = 1;                   //Set stop bit
      000450 D2 C4            [12] 2111 	setb	_STO
                           00036A  2112 	C$i2c.h$240$1$96 ==.
                                   2113 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:240: while(!SI);                //Wait for stop
      000452                       2114 00104$:
                           00036A  2115 	C$i2c.h$241$1$96 ==.
                                   2116 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:241: SI = 0;
      000452 10 C3 02         [24] 2117 	jbc	_SI,00122$
      000455 80 FB            [24] 2118 	sjmp	00104$
      000457                       2119 00122$:
                           00036F  2120 	C$i2c.h$242$1$96 ==.
                                   2121 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:242: return input_data;         //Return the read data
      000457 8F 82            [24] 2122 	mov	dpl,r7
                           000371  2123 	C$i2c.h$243$1$96 ==.
                           000371  2124 	XG$i2c_read_and_stop$0$0 ==.
      000459 22               [24] 2125 	ret
                                   2126 ;------------------------------------------------------------
                                   2127 ;Allocation info for local variables in function 'i2c_write_data'
                                   2128 ;------------------------------------------------------------
                                   2129 ;start_reg                 Allocated with name '_i2c_write_data_PARM_2'
                                   2130 ;buffer                    Allocated with name '_i2c_write_data_PARM_3'
                                   2131 ;num_bytes                 Allocated with name '_i2c_write_data_PARM_4'
                                   2132 ;addr                      Allocated to registers r7 
                                   2133 ;i                         Allocated to registers 
                                   2134 ;------------------------------------------------------------
                           000372  2135 	G$i2c_write_data$0$0 ==.
                           000372  2136 	C$i2c.h$246$1$96 ==.
                                   2137 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:246: void i2c_write_data(unsigned char addr, unsigned char start_reg, unsigned char *buffer, unsigned char num_bytes)
                                   2138 ;	-----------------------------------------
                                   2139 ;	 function i2c_write_data
                                   2140 ;	-----------------------------------------
      00045A                       2141 _i2c_write_data:
      00045A AF 82            [24] 2142 	mov	r7,dpl
                           000374  2143 	C$i2c.h$250$1$98 ==.
                                   2144 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:250: i2c_start();               //initiate I2C transfer
      00045C C0 07            [24] 2145 	push	ar7
      00045E 12 04 1F         [24] 2146 	lcall	_i2c_start
      000461 D0 07            [24] 2147 	pop	ar7
                           00037B  2148 	C$i2c.h$251$1$98 ==.
                                   2149 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:251: i2c_write(addr & ~0x01);   //write the desired address to the bus
      000463 74 FE            [12] 2150 	mov	a,#0xFE
      000465 5F               [12] 2151 	anl	a,r7
      000466 F5 82            [12] 2152 	mov	dpl,a
      000468 12 04 2C         [24] 2153 	lcall	_i2c_write
                           000383  2154 	C$i2c.h$252$1$98 ==.
                                   2155 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:252: i2c_write(start_reg);      //write the start register to the bus
      00046B 85 27 82         [24] 2156 	mov	dpl,_i2c_write_data_PARM_2
      00046E 12 04 2C         [24] 2157 	lcall	_i2c_write
                           000389  2158 	C$i2c.h$253$1$98 ==.
                                   2159 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:253: for(i=0; i<num_bytes-1; i++) //write the data to the register(s)
      000471 7F 00            [12] 2160 	mov	r7,#0x00
      000473                       2161 00103$:
      000473 AD 2B            [24] 2162 	mov	r5,_i2c_write_data_PARM_4
      000475 7E 00            [12] 2163 	mov	r6,#0x00
      000477 1D               [12] 2164 	dec	r5
      000478 BD FF 01         [24] 2165 	cjne	r5,#0xFF,00114$
      00047B 1E               [12] 2166 	dec	r6
      00047C                       2167 00114$:
      00047C 8F 03            [24] 2168 	mov	ar3,r7
      00047E 7C 00            [12] 2169 	mov	r4,#0x00
      000480 C3               [12] 2170 	clr	c
      000481 EB               [12] 2171 	mov	a,r3
      000482 9D               [12] 2172 	subb	a,r5
      000483 EC               [12] 2173 	mov	a,r4
      000484 64 80            [12] 2174 	xrl	a,#0x80
      000486 8E F0            [24] 2175 	mov	b,r6
      000488 63 F0 80         [24] 2176 	xrl	b,#0x80
      00048B 95 F0            [12] 2177 	subb	a,b
      00048D 50 1F            [24] 2178 	jnc	00101$
                           0003A7  2179 	C$i2c.h$254$1$98 ==.
                                   2180 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:254: i2c_write(buffer[i]);
      00048F EF               [12] 2181 	mov	a,r7
      000490 25 28            [12] 2182 	add	a,_i2c_write_data_PARM_3
      000492 FC               [12] 2183 	mov	r4,a
      000493 E4               [12] 2184 	clr	a
      000494 35 29            [12] 2185 	addc	a,(_i2c_write_data_PARM_3 + 1)
      000496 FD               [12] 2186 	mov	r5,a
      000497 AE 2A            [24] 2187 	mov	r6,(_i2c_write_data_PARM_3 + 2)
      000499 8C 82            [24] 2188 	mov	dpl,r4
      00049B 8D 83            [24] 2189 	mov	dph,r5
      00049D 8E F0            [24] 2190 	mov	b,r6
      00049F 12 1B 13         [24] 2191 	lcall	__gptrget
      0004A2 F5 82            [12] 2192 	mov	dpl,a
      0004A4 C0 07            [24] 2193 	push	ar7
      0004A6 12 04 2C         [24] 2194 	lcall	_i2c_write
      0004A9 D0 07            [24] 2195 	pop	ar7
                           0003C3  2196 	C$i2c.h$253$1$98 ==.
                                   2197 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:253: for(i=0; i<num_bytes-1; i++) //write the data to the register(s)
      0004AB 0F               [12] 2198 	inc	r7
      0004AC 80 C5            [24] 2199 	sjmp	00103$
      0004AE                       2200 00101$:
                           0003C6  2201 	C$i2c.h$255$1$98 ==.
                                   2202 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:255: i2c_write_and_stop(buffer[num_bytes-1]); //Stop transfer
      0004AE AE 2B            [24] 2203 	mov	r6,_i2c_write_data_PARM_4
      0004B0 7F 00            [12] 2204 	mov	r7,#0x00
      0004B2 1E               [12] 2205 	dec	r6
      0004B3 BE FF 01         [24] 2206 	cjne	r6,#0xFF,00116$
      0004B6 1F               [12] 2207 	dec	r7
      0004B7                       2208 00116$:
      0004B7 EE               [12] 2209 	mov	a,r6
      0004B8 25 28            [12] 2210 	add	a,_i2c_write_data_PARM_3
      0004BA FE               [12] 2211 	mov	r6,a
      0004BB EF               [12] 2212 	mov	a,r7
      0004BC 35 29            [12] 2213 	addc	a,(_i2c_write_data_PARM_3 + 1)
      0004BE FF               [12] 2214 	mov	r7,a
      0004BF AD 2A            [24] 2215 	mov	r5,(_i2c_write_data_PARM_3 + 2)
      0004C1 8E 82            [24] 2216 	mov	dpl,r6
      0004C3 8F 83            [24] 2217 	mov	dph,r7
      0004C5 8D F0            [24] 2218 	mov	b,r5
      0004C7 12 1B 13         [24] 2219 	lcall	__gptrget
      0004CA F5 82            [12] 2220 	mov	dpl,a
      0004CC 12 04 35         [24] 2221 	lcall	_i2c_write_and_stop
                           0003E7  2222 	C$i2c.h$256$1$98 ==.
                           0003E7  2223 	XG$i2c_write_data$0$0 ==.
      0004CF 22               [24] 2224 	ret
                                   2225 ;------------------------------------------------------------
                                   2226 ;Allocation info for local variables in function 'i2c_read_data'
                                   2227 ;------------------------------------------------------------
                                   2228 ;start_reg                 Allocated with name '_i2c_read_data_PARM_2'
                                   2229 ;buffer                    Allocated with name '_i2c_read_data_PARM_3'
                                   2230 ;num_bytes                 Allocated with name '_i2c_read_data_PARM_4'
                                   2231 ;addr                      Allocated to registers r7 
                                   2232 ;j                         Allocated to registers 
                                   2233 ;------------------------------------------------------------
                           0003E8  2234 	G$i2c_read_data$0$0 ==.
                           0003E8  2235 	C$i2c.h$259$1$98 ==.
                                   2236 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:259: void i2c_read_data(unsigned char addr, unsigned char start_reg, unsigned char *buffer, unsigned char num_bytes)
                                   2237 ;	-----------------------------------------
                                   2238 ;	 function i2c_read_data
                                   2239 ;	-----------------------------------------
      0004D0                       2240 _i2c_read_data:
      0004D0 AF 82            [24] 2241 	mov	r7,dpl
                           0003EA  2242 	C$i2c.h$262$1$100 ==.
                                   2243 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:262: i2c_start();               //Start I2C transfer
      0004D2 C0 07            [24] 2244 	push	ar7
      0004D4 12 04 1F         [24] 2245 	lcall	_i2c_start
      0004D7 D0 07            [24] 2246 	pop	ar7
                           0003F1  2247 	C$i2c.h$263$1$100 ==.
                                   2248 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:263: i2c_write(addr & ~0x01);   //Write address of device that will be written to, send 0
      0004D9 8F 06            [24] 2249 	mov	ar6,r7
      0004DB 74 FE            [12] 2250 	mov	a,#0xFE
      0004DD 5E               [12] 2251 	anl	a,r6
      0004DE F5 82            [12] 2252 	mov	dpl,a
      0004E0 C0 07            [24] 2253 	push	ar7
      0004E2 12 04 2C         [24] 2254 	lcall	_i2c_write
                           0003FD  2255 	C$i2c.h$264$1$100 ==.
                                   2256 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:264: i2c_write_and_stop(start_reg); //Write & stop the 1st register to be read
      0004E5 85 2C 82         [24] 2257 	mov	dpl,_i2c_read_data_PARM_2
      0004E8 12 04 35         [24] 2258 	lcall	_i2c_write_and_stop
                           000403  2259 	C$i2c.h$265$1$100 ==.
                                   2260 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:265: i2c_start();               //Start I2C transfer
      0004EB 12 04 1F         [24] 2261 	lcall	_i2c_start
      0004EE D0 07            [24] 2262 	pop	ar7
                           000408  2263 	C$i2c.h$266$1$100 ==.
                                   2264 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:266: i2c_write(addr | 0x01);    //Write address again, this time indicating a read operation
      0004F0 74 01            [12] 2265 	mov	a,#0x01
      0004F2 4F               [12] 2266 	orl	a,r7
      0004F3 F5 82            [12] 2267 	mov	dpl,a
      0004F5 12 04 2C         [24] 2268 	lcall	_i2c_write
                           000410  2269 	C$i2c.h$267$1$100 ==.
                                   2270 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:267: for(j = 0; j < num_bytes - 1; j++)
      0004F8 7F 00            [12] 2271 	mov	r7,#0x00
      0004FA                       2272 00103$:
      0004FA AD 30            [24] 2273 	mov	r5,_i2c_read_data_PARM_4
      0004FC 7E 00            [12] 2274 	mov	r6,#0x00
      0004FE 1D               [12] 2275 	dec	r5
      0004FF BD FF 01         [24] 2276 	cjne	r5,#0xFF,00114$
      000502 1E               [12] 2277 	dec	r6
      000503                       2278 00114$:
      000503 8F 03            [24] 2279 	mov	ar3,r7
      000505 7C 00            [12] 2280 	mov	r4,#0x00
      000507 C3               [12] 2281 	clr	c
      000508 EB               [12] 2282 	mov	a,r3
      000509 9D               [12] 2283 	subb	a,r5
      00050A EC               [12] 2284 	mov	a,r4
      00050B 64 80            [12] 2285 	xrl	a,#0x80
      00050D 8E F0            [24] 2286 	mov	b,r6
      00050F 63 F0 80         [24] 2287 	xrl	b,#0x80
      000512 95 F0            [12] 2288 	subb	a,b
      000514 50 2E            [24] 2289 	jnc	00101$
                           00042E  2290 	C$i2c.h$269$2$101 ==.
                                   2291 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:269: AA = 1;                //Set acknowledge bit
      000516 D2 C2            [12] 2292 	setb	_AA
                           000430  2293 	C$i2c.h$270$2$101 ==.
                                   2294 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:270: buffer[j] = i2c_read();//Read data, save it in buffer
      000518 EF               [12] 2295 	mov	a,r7
      000519 25 2D            [12] 2296 	add	a,_i2c_read_data_PARM_3
      00051B FC               [12] 2297 	mov	r4,a
      00051C E4               [12] 2298 	clr	a
      00051D 35 2E            [12] 2299 	addc	a,(_i2c_read_data_PARM_3 + 1)
      00051F FD               [12] 2300 	mov	r5,a
      000520 AE 2F            [24] 2301 	mov	r6,(_i2c_read_data_PARM_3 + 2)
      000522 C0 07            [24] 2302 	push	ar7
      000524 C0 06            [24] 2303 	push	ar6
      000526 C0 05            [24] 2304 	push	ar5
      000528 C0 04            [24] 2305 	push	ar4
      00052A 12 04 40         [24] 2306 	lcall	_i2c_read
      00052D AB 82            [24] 2307 	mov	r3,dpl
      00052F D0 04            [24] 2308 	pop	ar4
      000531 D0 05            [24] 2309 	pop	ar5
      000533 D0 06            [24] 2310 	pop	ar6
      000535 D0 07            [24] 2311 	pop	ar7
      000537 8C 82            [24] 2312 	mov	dpl,r4
      000539 8D 83            [24] 2313 	mov	dph,r5
      00053B 8E F0            [24] 2314 	mov	b,r6
      00053D EB               [12] 2315 	mov	a,r3
      00053E 12 13 7B         [24] 2316 	lcall	__gptrput
                           000459  2317 	C$i2c.h$267$1$100 ==.
                                   2318 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:267: for(j = 0; j < num_bytes - 1; j++)
      000541 0F               [12] 2319 	inc	r7
      000542 80 B6            [24] 2320 	sjmp	00103$
      000544                       2321 00101$:
                           00045C  2322 	C$i2c.h$272$1$100 ==.
                                   2323 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:272: AA = 0;
      000544 C2 C2            [12] 2324 	clr	_AA
                           00045E  2325 	C$i2c.h$273$1$100 ==.
                                   2326 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:273: buffer[num_bytes - 1] = i2c_read_and_stop(); //Read the last byte and stop, save it in the buffer
      000546 AE 30            [24] 2327 	mov	r6,_i2c_read_data_PARM_4
      000548 7F 00            [12] 2328 	mov	r7,#0x00
      00054A 1E               [12] 2329 	dec	r6
      00054B BE FF 01         [24] 2330 	cjne	r6,#0xFF,00116$
      00054E 1F               [12] 2331 	dec	r7
      00054F                       2332 00116$:
      00054F EE               [12] 2333 	mov	a,r6
      000550 25 2D            [12] 2334 	add	a,_i2c_read_data_PARM_3
      000552 FE               [12] 2335 	mov	r6,a
      000553 EF               [12] 2336 	mov	a,r7
      000554 35 2E            [12] 2337 	addc	a,(_i2c_read_data_PARM_3 + 1)
      000556 FF               [12] 2338 	mov	r7,a
      000557 AD 2F            [24] 2339 	mov	r5,(_i2c_read_data_PARM_3 + 2)
      000559 C0 07            [24] 2340 	push	ar7
      00055B C0 06            [24] 2341 	push	ar6
      00055D C0 05            [24] 2342 	push	ar5
      00055F 12 04 49         [24] 2343 	lcall	_i2c_read_and_stop
      000562 AC 82            [24] 2344 	mov	r4,dpl
      000564 D0 05            [24] 2345 	pop	ar5
      000566 D0 06            [24] 2346 	pop	ar6
      000568 D0 07            [24] 2347 	pop	ar7
      00056A 8E 82            [24] 2348 	mov	dpl,r6
      00056C 8F 83            [24] 2349 	mov	dph,r7
      00056E 8D F0            [24] 2350 	mov	b,r5
      000570 EC               [12] 2351 	mov	a,r4
      000571 12 13 7B         [24] 2352 	lcall	__gptrput
                           00048C  2353 	C$i2c.h$274$1$100 ==.
                           00048C  2354 	XG$i2c_read_data$0$0 ==.
      000574 22               [24] 2355 	ret
                                   2356 ;------------------------------------------------------------
                                   2357 ;Allocation info for local variables in function 'Accel_Init'
                                   2358 ;------------------------------------------------------------
                                   2359 ;Data2                     Allocated with name '_Accel_Init_Data2_1_103'
                                   2360 ;------------------------------------------------------------
                           00048D  2361 	G$Accel_Init$0$0 ==.
                           00048D  2362 	C$i2c.h$283$1$100 ==.
                                   2363 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:283: void Accel_Init(void)
                                   2364 ;	-----------------------------------------
                                   2365 ;	 function Accel_Init
                                   2366 ;	-----------------------------------------
      000575                       2367 _Accel_Init:
                           00048D  2368 	C$i2c.h$287$1$103 ==.
                                   2369 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:287: Data2[0]=0x23;	//normal power mode, 50Hz ODR, y & x axes enabled
      000575 75 31 23         [24] 2370 	mov	_Accel_Init_Data2_1_103,#0x23
                           000490  2371 	C$i2c.h$289$1$103 ==.
                                   2372 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:289: i2c_write_data(addr_accel, 0x20, Data2, 1);
      000578 75 28 31         [24] 2373 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      00057B 75 29 00         [24] 2374 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      00057E 75 2A 40         [24] 2375 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000581 75 27 20         [24] 2376 	mov	_i2c_write_data_PARM_2,#0x20
      000584 75 2B 01         [24] 2377 	mov	_i2c_write_data_PARM_4,#0x01
      000587 75 82 30         [24] 2378 	mov	dpl,#0x30
      00058A 12 04 5A         [24] 2379 	lcall	_i2c_write_data
                           0004A5  2380 	C$i2c.h$290$1$103 ==.
                                   2381 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:290: Data2[0]=0x00;	//Default - no filtering
      00058D 75 31 00         [24] 2382 	mov	_Accel_Init_Data2_1_103,#0x00
                           0004A8  2383 	C$i2c.h$292$1$103 ==.
                                   2384 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:292: i2c_write_data(addr_accel, 0x21, Data2, 1);
      000590 75 28 31         [24] 2385 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      000593 75 29 00         [24] 2386 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      000596 75 2A 40         [24] 2387 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000599 75 27 21         [24] 2388 	mov	_i2c_write_data_PARM_2,#0x21
      00059C 75 2B 01         [24] 2389 	mov	_i2c_write_data_PARM_4,#0x01
      00059F 75 82 30         [24] 2390 	mov	dpl,#0x30
      0005A2 12 04 5A         [24] 2391 	lcall	_i2c_write_data
                           0004BD  2392 	C$i2c.h$293$1$103 ==.
                                   2393 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:293: Data2[0]=0x00;	//default - no interrupts enabled
      0005A5 75 31 00         [24] 2394 	mov	_Accel_Init_Data2_1_103,#0x00
                           0004C0  2395 	C$i2c.h$294$1$103 ==.
                                   2396 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:294: i2c_write_data(addr_accel, 0x22, Data2, 1);
      0005A8 75 28 31         [24] 2397 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      0005AB 75 29 00         [24] 2398 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      0005AE 75 2A 40         [24] 2399 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      0005B1 75 27 22         [24] 2400 	mov	_i2c_write_data_PARM_2,#0x22
      0005B4 75 2B 01         [24] 2401 	mov	_i2c_write_data_PARM_4,#0x01
      0005B7 75 82 30         [24] 2402 	mov	dpl,#0x30
      0005BA 12 04 5A         [24] 2403 	lcall	_i2c_write_data
                           0004D5  2404 	C$i2c.h$298$1$103 ==.
                           0004D5  2405 	XG$Accel_Init$0$0 ==.
      0005BD 22               [24] 2406 	ret
                                   2407 ;------------------------------------------------------------
                                   2408 ;Allocation info for local variables in function 'main'
                                   2409 ;------------------------------------------------------------
                           0004D6  2410 	G$main$0$0 ==.
                           0004D6  2411 	C$lab6.c$81$1$103 ==.
                                   2412 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:81: void main(void)
                                   2413 ;	-----------------------------------------
                                   2414 ;	 function main
                                   2415 ;	-----------------------------------------
      0005BE                       2416 _main:
                           0004D6  2417 	C$lab6.c$83$1$123 ==.
                                   2418 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:83: Sys_Init();
      0005BE 12 01 18         [24] 2419 	lcall	_Sys_Init
                           0004D9  2420 	C$lab6.c$84$1$123 ==.
                                   2421 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:84: putchar(' '); //the quotes in this line may not format correctly
      0005C1 75 82 20         [24] 2422 	mov	dpl,#0x20
      0005C4 12 01 2B         [24] 2423 	lcall	_putchar
                           0004DF  2424 	C$lab6.c$85$1$123 ==.
                                   2425 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:85: Port_Init();
      0005C7 12 13 18         [24] 2426 	lcall	_Port_Init
                           0004E2  2427 	C$lab6.c$86$1$123 ==.
                                   2428 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:86: XBR0_Init();
      0005CA 12 13 48         [24] 2429 	lcall	_XBR0_Init
                           0004E5  2430 	C$lab6.c$87$1$123 ==.
                                   2431 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:87: PCA_Init();
      0005CD 12 13 30         [24] 2432 	lcall	_PCA_Init
                           0004E8  2433 	C$lab6.c$88$1$123 ==.
                                   2434 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:88: SMB_Init();
      0005D0 12 13 4C         [24] 2435 	lcall	_SMB_Init
                           0004EB  2436 	C$lab6.c$89$1$123 ==.
                                   2437 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:89: ADC_Init();
      0005D3 12 13 52         [24] 2438 	lcall	_ADC_Init
                           0004EE  2439 	C$lab6.c$91$1$123 ==.
                                   2440 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:91: count =0;
      0005D6 E4               [12] 2441 	clr	a
      0005D7 F5 32            [12] 2442 	mov	_count,a
      0005D9 F5 33            [12] 2443 	mov	(_count + 1),a
                           0004F3  2444 	C$lab6.c$93$1$123 ==.
                                   2445 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:93: RUDDER_PW= PW_CENTER_RUDDER;
      0005DB 85 3C 46         [24] 2446 	mov	_RUDDER_PW,_PW_CENTER_RUDDER
      0005DE 85 3D 47         [24] 2447 	mov	(_RUDDER_PW + 1),(_PW_CENTER_RUDDER + 1)
                           0004F9  2448 	C$lab6.c$94$1$123 ==.
                                   2449 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:94: ANGLE_PW = PW_CENTER_ANGLE;
      0005E1 85 42 4A         [24] 2450 	mov	_ANGLE_PW,_PW_CENTER_ANGLE
      0005E4 85 43 4B         [24] 2451 	mov	(_ANGLE_PW + 1),(_PW_CENTER_ANGLE + 1)
                           0004FF  2452 	C$lab6.c$95$1$123 ==.
                                   2453 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:95: RTHRUST_PW = PW_NUET_THRUST;
      0005E7 85 36 4E         [24] 2454 	mov	_RTHRUST_PW,_PW_NUET_THRUST
      0005EA 85 37 4F         [24] 2455 	mov	(_RTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
                           000505  2456 	C$lab6.c$96$1$123 ==.
                                   2457 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:96: LTHRUST_PW = PW_NUET_THRUST;
      0005ED 85 36 50         [24] 2458 	mov	_LTHRUST_PW,_PW_NUET_THRUST
      0005F0 85 37 51         [24] 2459 	mov	(_LTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
                           00050B  2460 	C$lab6.c$98$1$123 ==.
                                   2461 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:98: RDR_lo_to_hi = 0xFFFF - RUDDER_PW;
      0005F3 14               [12] 2462 	dec	a
      0005F4 C3               [12] 2463 	clr	c
      0005F5 95 46            [12] 2464 	subb	a,_RUDDER_PW
      0005F7 F5 48            [12] 2465 	mov	_RDR_lo_to_hi,a
      0005F9 74 FF            [12] 2466 	mov	a,#0xFF
      0005FB 95 47            [12] 2467 	subb	a,(_RUDDER_PW + 1)
      0005FD F5 49            [12] 2468 	mov	(_RDR_lo_to_hi + 1),a
                           000517  2469 	C$lab6.c$99$1$123 ==.
                                   2470 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:99: RTRST_lo_to_hi = 0xFFFF - RTHRUST_PW;
      0005FF 74 FF            [12] 2471 	mov	a,#0xFF
      000601 C3               [12] 2472 	clr	c
      000602 95 4E            [12] 2473 	subb	a,_RTHRUST_PW
      000604 F5 52            [12] 2474 	mov	_RTRST_lo_to_hi,a
      000606 74 FF            [12] 2475 	mov	a,#0xFF
      000608 95 4F            [12] 2476 	subb	a,(_RTHRUST_PW + 1)
      00060A F5 53            [12] 2477 	mov	(_RTRST_lo_to_hi + 1),a
                           000524  2478 	C$lab6.c$100$1$123 ==.
                                   2479 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:100: LTRST_lo_to_hi = 0xFFFF - LTHRUST_PW;
      00060C 74 FF            [12] 2480 	mov	a,#0xFF
      00060E C3               [12] 2481 	clr	c
      00060F 95 50            [12] 2482 	subb	a,_LTHRUST_PW
      000611 F5 54            [12] 2483 	mov	_LTRST_lo_to_hi,a
      000613 74 FF            [12] 2484 	mov	a,#0xFF
      000615 95 51            [12] 2485 	subb	a,(_LTHRUST_PW + 1)
      000617 F5 55            [12] 2486 	mov	(_LTRST_lo_to_hi + 1),a
                           000531  2487 	C$lab6.c$101$1$123 ==.
                                   2488 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:101: AGL_lo_to_hi = 0xFFFF - ANGLE_PW;
      000619 74 FF            [12] 2489 	mov	a,#0xFF
      00061B C3               [12] 2490 	clr	c
      00061C 95 4A            [12] 2491 	subb	a,_ANGLE_PW
      00061E F5 4C            [12] 2492 	mov	_AGL_lo_to_hi,a
      000620 74 FF            [12] 2493 	mov	a,#0xFF
      000622 95 4B            [12] 2494 	subb	a,(_ANGLE_PW + 1)
      000624 F5 4D            [12] 2495 	mov	(_AGL_lo_to_hi + 1),a
                           00053E  2496 	C$lab6.c$103$1$123 ==.
                                   2497 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:103: PCA0CP0 = RDR_lo_to_hi;
      000626 85 48 EA         [24] 2498 	mov	((_PCA0CP0 >> 0) & 0xFF),_RDR_lo_to_hi
      000629 85 49 FA         [24] 2499 	mov	((_PCA0CP0 >> 8) & 0xFF),(_RDR_lo_to_hi + 1)
                           000544  2500 	C$lab6.c$104$1$123 ==.
                                   2501 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:104: PCA0CP1 = AGL_lo_to_hi;	
      00062C 85 4C EB         [24] 2502 	mov	((_PCA0CP1 >> 0) & 0xFF),_AGL_lo_to_hi
      00062F 85 4D FB         [24] 2503 	mov	((_PCA0CP1 >> 8) & 0xFF),(_AGL_lo_to_hi + 1)
                           00054A  2504 	C$lab6.c$105$1$123 ==.
                                   2505 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:105: PCA0CP2 = RTRST_lo_to_hi;
      000632 85 52 EC         [24] 2506 	mov	((_PCA0CP2 >> 0) & 0xFF),_RTRST_lo_to_hi
      000635 85 53 FC         [24] 2507 	mov	((_PCA0CP2 >> 8) & 0xFF),(_RTRST_lo_to_hi + 1)
                           000550  2508 	C$lab6.c$106$1$123 ==.
                                   2509 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:106: PCA0CP3 = LTRST_lo_to_hi;
      000638 85 54 ED         [24] 2510 	mov	((_PCA0CP3 >> 0) & 0xFF),_LTRST_lo_to_hi
      00063B 85 55 FD         [24] 2511 	mov	((_PCA0CP3 >> 8) & 0xFF),(_LTRST_lo_to_hi + 1)
                           000556  2512 	C$lab6.c$108$1$123 ==.
                                   2513 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:108: kpkd();
      00063E 12 06 C8         [24] 2514 	lcall	_kpkd
                           000559  2515 	C$lab6.c$112$1$123 ==.
                                   2516 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:112: direction();
      000641 12 08 1A         [24] 2517 	lcall	_direction
                           00055C  2518 	C$lab6.c$113$1$123 ==.
                                   2519 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:113: while (1)
      000644                       2520 00104$:
                           00055C  2521 	C$lab6.c$116$2$124 ==.
                                   2522 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:116: wait();
      000644 12 12 F1         [24] 2523 	lcall	_wait
                           00055F  2524 	C$lab6.c$117$2$124 ==.
                                   2525 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:117: if ((count +1) % 2 ==0)
      000647 85 32 82         [24] 2526 	mov	dpl,_count
      00064A 85 33 83         [24] 2527 	mov	dph,(_count + 1)
      00064D A3               [24] 2528 	inc	dptr
      00064E 75 11 02         [24] 2529 	mov	__modsint_PARM_2,#0x02
      000651 75 12 00         [24] 2530 	mov	(__modsint_PARM_2 + 1),#0x00
      000654 12 1B 2F         [24] 2531 	lcall	__modsint
      000657 E5 82            [12] 2532 	mov	a,dpl
      000659 85 83 F0         [24] 2533 	mov	b,dph
      00065C 45 F0            [12] 2534 	orl	a,b
      00065E 70 E4            [24] 2535 	jnz	00104$
                           000578  2536 	C$lab6.c$120$3$125 ==.
                                   2537 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:120: Steering_func();
      000660 12 07 AC         [24] 2538 	lcall	_Steering_func
                           00057B  2539 	C$lab6.c$122$1$123 ==.
                                   2540 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:122: if ((count +1) % 4 ==0)
      000663 80 DF            [24] 2541 	sjmp	00104$
                           00057D  2542 	C$lab6.c$128$1$123 ==.
                           00057D  2543 	XG$main$0$0 ==.
      000665 22               [24] 2544 	ret
                                   2545 ;------------------------------------------------------------
                                   2546 ;Allocation info for local variables in function 'Calibrate'
                                   2547 ;------------------------------------------------------------
                           00057E  2548 	G$Calibrate$0$0 ==.
                           00057E  2549 	C$lab6.c$130$1$123 ==.
                                   2550 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:130: void Calibrate(void)
                                   2551 ;	-----------------------------------------
                                   2552 ;	 function Calibrate
                                   2553 ;	-----------------------------------------
      000666                       2554 _Calibrate:
                           00057E  2555 	C$lab6.c$134$1$128 ==.
                                   2556 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:134: Rudder_cal();
      000666 12 08 CC         [24] 2557 	lcall	_Rudder_cal
                           000581  2558 	C$lab6.c$135$1$128 ==.
                                   2559 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:135: RUDDER_PW= PW_CENTER_RUDDER;
      000669 85 3C 46         [24] 2560 	mov	_RUDDER_PW,_PW_CENTER_RUDDER
      00066C 85 3D 47         [24] 2561 	mov	(_RUDDER_PW + 1),(_PW_CENTER_RUDDER + 1)
                           000587  2562 	C$lab6.c$136$1$128 ==.
                                   2563 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:136: RDR_lo_to_hi = 0xFFFF - RUDDER_PW;
      00066F 74 FF            [12] 2564 	mov	a,#0xFF
      000671 C3               [12] 2565 	clr	c
      000672 95 46            [12] 2566 	subb	a,_RUDDER_PW
      000674 F5 48            [12] 2567 	mov	_RDR_lo_to_hi,a
      000676 74 FF            [12] 2568 	mov	a,#0xFF
      000678 95 47            [12] 2569 	subb	a,(_RUDDER_PW + 1)
      00067A F5 49            [12] 2570 	mov	(_RDR_lo_to_hi + 1),a
                           000594  2571 	C$lab6.c$137$1$128 ==.
                                   2572 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:137: PCA0CP0 = RDR_lo_to_hi;
      00067C 85 48 EA         [24] 2573 	mov	((_PCA0CP0 >> 0) & 0xFF),_RDR_lo_to_hi
      00067F 85 49 FA         [24] 2574 	mov	((_PCA0CP0 >> 8) & 0xFF),(_RDR_lo_to_hi + 1)
                           00059A  2575 	C$lab6.c$139$1$128 ==.
                                   2576 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:139: Angle_cal();
      000682 12 0B 79         [24] 2577 	lcall	_Angle_cal
                           00059D  2578 	C$lab6.c$140$1$128 ==.
                                   2579 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:140: ANGLE_PW = PW_CENTER_ANGLE;
      000685 85 42 4A         [24] 2580 	mov	_ANGLE_PW,_PW_CENTER_ANGLE
      000688 85 43 4B         [24] 2581 	mov	(_ANGLE_PW + 1),(_PW_CENTER_ANGLE + 1)
                           0005A3  2582 	C$lab6.c$141$1$128 ==.
                                   2583 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:141: AGL_lo_to_hi = 0xFFFF - ANGLE_PW;
      00068B 74 FF            [12] 2584 	mov	a,#0xFF
      00068D C3               [12] 2585 	clr	c
      00068E 95 4A            [12] 2586 	subb	a,_ANGLE_PW
      000690 F5 4C            [12] 2587 	mov	_AGL_lo_to_hi,a
      000692 74 FF            [12] 2588 	mov	a,#0xFF
      000694 95 4B            [12] 2589 	subb	a,(_ANGLE_PW + 1)
      000696 F5 4D            [12] 2590 	mov	(_AGL_lo_to_hi + 1),a
                           0005B0  2591 	C$lab6.c$142$1$128 ==.
                                   2592 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:142: PCA0CP1 = AGL_lo_to_hi;
      000698 85 4C EB         [24] 2593 	mov	((_PCA0CP1 >> 0) & 0xFF),_AGL_lo_to_hi
      00069B 85 4D FB         [24] 2594 	mov	((_PCA0CP1 >> 8) & 0xFF),(_AGL_lo_to_hi + 1)
                           0005B6  2595 	C$lab6.c$144$1$128 ==.
                                   2596 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:144: Thrust_cal();
      00069E 12 0E 34         [24] 2597 	lcall	_Thrust_cal
                           0005B9  2598 	C$lab6.c$145$1$128 ==.
                                   2599 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:145: RTHRUST_PW = PW_NUET_THRUST;
      0006A1 85 36 4E         [24] 2600 	mov	_RTHRUST_PW,_PW_NUET_THRUST
      0006A4 85 37 4F         [24] 2601 	mov	(_RTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
                           0005BF  2602 	C$lab6.c$146$1$128 ==.
                                   2603 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:146: LTHRUST_PW = PW_NUET_THRUST;
      0006A7 85 36 50         [24] 2604 	mov	_LTHRUST_PW,_PW_NUET_THRUST
      0006AA 85 37 51         [24] 2605 	mov	(_LTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
                           0005C5  2606 	C$lab6.c$147$1$128 ==.
                                   2607 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:147: RTRST_lo_to_hi = 0xFFFF - RTHRUST_PW;
      0006AD 74 FF            [12] 2608 	mov	a,#0xFF
      0006AF C3               [12] 2609 	clr	c
      0006B0 95 4E            [12] 2610 	subb	a,_RTHRUST_PW
      0006B2 F5 52            [12] 2611 	mov	_RTRST_lo_to_hi,a
      0006B4 74 FF            [12] 2612 	mov	a,#0xFF
      0006B6 95 4F            [12] 2613 	subb	a,(_RTHRUST_PW + 1)
      0006B8 F5 53            [12] 2614 	mov	(_RTRST_lo_to_hi + 1),a
                           0005D2  2615 	C$lab6.c$148$1$128 ==.
                                   2616 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:148: LTRST_lo_to_hi = 0xFFFF - LTHRUST_PW;
      0006BA 74 FF            [12] 2617 	mov	a,#0xFF
      0006BC C3               [12] 2618 	clr	c
      0006BD 95 50            [12] 2619 	subb	a,_LTHRUST_PW
      0006BF F5 54            [12] 2620 	mov	_LTRST_lo_to_hi,a
      0006C1 74 FF            [12] 2621 	mov	a,#0xFF
      0006C3 95 51            [12] 2622 	subb	a,(_LTHRUST_PW + 1)
      0006C5 F5 55            [12] 2623 	mov	(_LTRST_lo_to_hi + 1),a
                           0005DF  2624 	C$lab6.c$149$1$128 ==.
                           0005DF  2625 	XG$Calibrate$0$0 ==.
      0006C7 22               [24] 2626 	ret
                                   2627 ;------------------------------------------------------------
                                   2628 ;Allocation info for local variables in function 'kpkd'
                                   2629 ;------------------------------------------------------------
                           0005E0  2630 	G$kpkd$0$0 ==.
                           0005E0  2631 	C$lab6.c$151$1$128 ==.
                                   2632 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:151: void kpkd(void)
                                   2633 ;	-----------------------------------------
                                   2634 ;	 function kpkd
                                   2635 ;	-----------------------------------------
      0006C8                       2636 _kpkd:
                           0005E0  2637 	C$lab6.c$153$1$130 ==.
                                   2638 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:153: lcd_clear();
      0006C8 12 01 C9         [24] 2639 	lcall	_lcd_clear
                           0005E3  2640 	C$lab6.c$154$1$130 ==.
                                   2641 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:154: lcd_print("Please enter a kp value:\n ");
      0006CB 74 92            [12] 2642 	mov	a,#___str_3
      0006CD C0 E0            [24] 2643 	push	acc
      0006CF 74 1B            [12] 2644 	mov	a,#(___str_3 >> 8)
      0006D1 C0 E0            [24] 2645 	push	acc
      0006D3 74 80            [12] 2646 	mov	a,#0x80
      0006D5 C0 E0            [24] 2647 	push	acc
      0006D7 12 01 44         [24] 2648 	lcall	_lcd_print
      0006DA 15 81            [12] 2649 	dec	sp
      0006DC 15 81            [12] 2650 	dec	sp
      0006DE 15 81            [12] 2651 	dec	sp
                           0005F8  2652 	C$lab6.c$155$1$130 ==.
                                   2653 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:155: kp = kpd_input(0);
      0006E0 75 82 00         [24] 2654 	mov	dpl,#0x00
      0006E3 12 02 81         [24] 2655 	lcall	_kpd_input
      0006E6 85 82 5A         [24] 2656 	mov	_kp,dpl
      0006E9 85 83 5B         [24] 2657 	mov	(_kp + 1),dph
                           000604  2658 	C$lab6.c$156$1$130 ==.
                                   2659 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:156: lcd_clear();
      0006EC 12 01 C9         [24] 2660 	lcall	_lcd_clear
                           000607  2661 	C$lab6.c$157$1$130 ==.
                                   2662 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:157: lcd_print("Please enter a kd value:\n ");
      0006EF 74 AD            [12] 2663 	mov	a,#___str_4
      0006F1 C0 E0            [24] 2664 	push	acc
      0006F3 74 1B            [12] 2665 	mov	a,#(___str_4 >> 8)
      0006F5 C0 E0            [24] 2666 	push	acc
      0006F7 74 80            [12] 2667 	mov	a,#0x80
      0006F9 C0 E0            [24] 2668 	push	acc
      0006FB 12 01 44         [24] 2669 	lcall	_lcd_print
      0006FE 15 81            [12] 2670 	dec	sp
      000700 15 81            [12] 2671 	dec	sp
      000702 15 81            [12] 2672 	dec	sp
                           00061C  2673 	C$lab6.c$158$1$130 ==.
                                   2674 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:158: kd = kpd_input(0);
      000704 75 82 00         [24] 2675 	mov	dpl,#0x00
      000707 12 02 81         [24] 2676 	lcall	_kpd_input
      00070A 85 82 5C         [24] 2677 	mov	_kd,dpl
      00070D 85 83 5D         [24] 2678 	mov	(_kd + 1),dph
                           000628  2679 	C$lab6.c$159$1$130 ==.
                                   2680 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:159: lcd_clear();
      000710 12 01 C9         [24] 2681 	lcall	_lcd_clear
                           00062B  2682 	C$lab6.c$160$1$130 ==.
                           00062B  2683 	XG$kpkd$0$0 ==.
      000713 22               [24] 2684 	ret
                                   2685 ;------------------------------------------------------------
                                   2686 ;Allocation info for local variables in function 'Change_D'
                                   2687 ;------------------------------------------------------------
                                   2688 ;distance                  Allocated with name '_Change_D_distance_1_132'
                                   2689 ;------------------------------------------------------------
                           00062C  2690 	G$Change_D$0$0 ==.
                           00062C  2691 	C$lab6.c$163$1$130 ==.
                                   2692 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:163: void Change_D(void)
                                   2693 ;	-----------------------------------------
                                   2694 ;	 function Change_D
                                   2695 ;	-----------------------------------------
      000714                       2696 _Change_D:
                           00062C  2697 	C$lab6.c$168$1$132 ==.
                                   2698 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:168: distance = Read_Ranger();
      000714 12 07 6E         [24] 2699 	lcall	_Read_Ranger
      000717 AE 82            [24] 2700 	mov	r6,dpl
      000719 AF 83            [24] 2701 	mov	r7,dph
                           000633  2702 	C$lab6.c$169$1$132 ==.
                                   2703 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:169: printf("\r\n%u", distance);
      00071B C0 07            [24] 2704 	push	ar7
      00071D C0 06            [24] 2705 	push	ar6
      00071F C0 06            [24] 2706 	push	ar6
      000721 C0 07            [24] 2707 	push	ar7
      000723 74 C8            [12] 2708 	mov	a,#___str_5
      000725 C0 E0            [24] 2709 	push	acc
      000727 74 1B            [12] 2710 	mov	a,#(___str_5 >> 8)
      000729 C0 E0            [24] 2711 	push	acc
      00072B 74 80            [12] 2712 	mov	a,#0x80
      00072D C0 E0            [24] 2713 	push	acc
      00072F 12 15 1F         [24] 2714 	lcall	_printf
      000732 E5 81            [12] 2715 	mov	a,sp
      000734 24 FB            [12] 2716 	add	a,#0xfb
      000736 F5 81            [12] 2717 	mov	sp,a
      000738 D0 06            [24] 2718 	pop	ar6
      00073A D0 07            [24] 2719 	pop	ar7
                           000654  2720 	C$lab6.c$171$1$132 ==.
                                   2721 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:171: if (distance < 50)
      00073C C3               [12] 2722 	clr	c
      00073D EE               [12] 2723 	mov	a,r6
      00073E 94 32            [12] 2724 	subb	a,#0x32
      000740 EF               [12] 2725 	mov	a,r7
      000741 94 00            [12] 2726 	subb	a,#0x00
      000743 50 28            [24] 2727 	jnc	00103$
                           00065D  2728 	C$lab6.c$173$2$133 ==.
                                   2729 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:173: desired_D = (desired_D + 1800) % 3600;
      000745 90 00 51         [24] 2730 	mov	dptr,#_desired_D
      000748 E0               [24] 2731 	movx	a,@dptr
      000749 FE               [12] 2732 	mov	r6,a
      00074A A3               [24] 2733 	inc	dptr
      00074B E0               [24] 2734 	movx	a,@dptr
      00074C FF               [12] 2735 	mov	r7,a
      00074D 74 08            [12] 2736 	mov	a,#0x08
      00074F 2E               [12] 2737 	add	a,r6
      000750 F5 82            [12] 2738 	mov	dpl,a
      000752 74 07            [12] 2739 	mov	a,#0x07
      000754 3F               [12] 2740 	addc	a,r7
      000755 F5 83            [12] 2741 	mov	dph,a
      000757 75 11 10         [24] 2742 	mov	__modsint_PARM_2,#0x10
      00075A 75 12 0E         [24] 2743 	mov	(__modsint_PARM_2 + 1),#0x0E
      00075D 12 1B 2F         [24] 2744 	lcall	__modsint
      000760 E5 82            [12] 2745 	mov	a,dpl
      000762 85 83 F0         [24] 2746 	mov	b,dph
      000765 90 00 51         [24] 2747 	mov	dptr,#_desired_D
      000768 F0               [24] 2748 	movx	@dptr,a
      000769 E5 F0            [12] 2749 	mov	a,b
      00076B A3               [24] 2750 	inc	dptr
      00076C F0               [24] 2751 	movx	@dptr,a
      00076D                       2752 00103$:
                           000685  2753 	C$lab6.c$175$1$132 ==.
                           000685  2754 	XG$Change_D$0$0 ==.
      00076D 22               [24] 2755 	ret
                                   2756 ;------------------------------------------------------------
                                   2757 ;Allocation info for local variables in function 'Read_Ranger'
                                   2758 ;------------------------------------------------------------
                                   2759 ;r_addr                    Allocated to registers 
                                   2760 ;read                      Allocated to registers 
                                   2761 ;------------------------------------------------------------
                           000686  2762 	G$Read_Ranger$0$0 ==.
                           000686  2763 	C$lab6.c$177$1$132 ==.
                                   2764 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:177: unsigned int Read_Ranger(void)
                                   2765 ;	-----------------------------------------
                                   2766 ;	 function Read_Ranger
                                   2767 ;	-----------------------------------------
      00076E                       2768 _Read_Ranger:
                           000686  2769 	C$lab6.c$182$1$135 ==.
                                   2770 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:182: r_data[0] = 0x51;
      00076E 75 58 51         [24] 2771 	mov	_r_data,#0x51
                           000689  2772 	C$lab6.c$183$1$135 ==.
                                   2773 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:183: i2c_read_data(r_addr, 0, r_data, 1);
      000771 75 2D 58         [24] 2774 	mov	_i2c_read_data_PARM_3,#_r_data
      000774 75 2E 00         [24] 2775 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      000777 75 2F 40         [24] 2776 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      00077A 75 2C 00         [24] 2777 	mov	_i2c_read_data_PARM_2,#0x00
      00077D 75 30 01         [24] 2778 	mov	_i2c_read_data_PARM_4,#0x01
      000780 75 82 E0         [24] 2779 	mov	dpl,#0xE0
      000783 12 04 D0         [24] 2780 	lcall	_i2c_read_data
                           00069E  2781 	C$lab6.c$185$1$135 ==.
                                   2782 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:185: i2c_read_data(r_addr, 2, r_data, 2);
      000786 75 2D 58         [24] 2783 	mov	_i2c_read_data_PARM_3,#_r_data
      000789 75 2E 00         [24] 2784 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      00078C 75 2F 40         [24] 2785 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      00078F 75 2C 02         [24] 2786 	mov	_i2c_read_data_PARM_2,#0x02
      000792 75 30 02         [24] 2787 	mov	_i2c_read_data_PARM_4,#0x02
      000795 75 82 E0         [24] 2788 	mov	dpl,#0xE0
      000798 12 04 D0         [24] 2789 	lcall	_i2c_read_data
                           0006B3  2790 	C$lab6.c$186$1$135 ==.
                                   2791 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:186: read = (((unsigned int) r_data[0] <<8) | r_data[1]);
      00079B AF 58            [24] 2792 	mov	r7,_r_data
      00079D 7E 00            [12] 2793 	mov	r6,#0x00
      00079F AC 59            [24] 2794 	mov	r4,(_r_data + 0x0001)
      0007A1 7D 00            [12] 2795 	mov	r5,#0x00
      0007A3 EC               [12] 2796 	mov	a,r4
      0007A4 4E               [12] 2797 	orl	a,r6
      0007A5 F5 82            [12] 2798 	mov	dpl,a
      0007A7 ED               [12] 2799 	mov	a,r5
      0007A8 4F               [12] 2800 	orl	a,r7
      0007A9 F5 83            [12] 2801 	mov	dph,a
                           0006C3  2802 	C$lab6.c$187$1$135 ==.
                                   2803 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:187: return read;
                           0006C3  2804 	C$lab6.c$188$1$135 ==.
                           0006C3  2805 	XG$Read_Ranger$0$0 ==.
      0007AB 22               [24] 2806 	ret
                                   2807 ;------------------------------------------------------------
                                   2808 ;Allocation info for local variables in function 'Steering_func'
                                   2809 ;------------------------------------------------------------
                           0006C4  2810 	G$Steering_func$0$0 ==.
                           0006C4  2811 	C$lab6.c$190$1$135 ==.
                                   2812 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:190: void Steering_func(void)    ///FUNCTION TO HOLD ACTIONS FOR STEERING
                                   2813 ;	-----------------------------------------
                                   2814 ;	 function Steering_func
                                   2815 ;	-----------------------------------------
      0007AC                       2816 _Steering_func:
                           0006C4  2817 	C$lab6.c$192$1$137 ==.
                                   2818 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:192: actual_D = ReadCompass();
      0007AC 12 08 A6         [24] 2819 	lcall	_ReadCompass
      0007AF E5 82            [12] 2820 	mov	a,dpl
      0007B1 85 83 F0         [24] 2821 	mov	b,dph
      0007B4 90 00 53         [24] 2822 	mov	dptr,#_actual_D
      0007B7 F0               [24] 2823 	movx	@dptr,a
      0007B8 E5 F0            [12] 2824 	mov	a,b
      0007BA A3               [24] 2825 	inc	dptr
      0007BB F0               [24] 2826 	movx	@dptr,a
                           0006D4  2827 	C$lab6.c$193$1$137 ==.
                                   2828 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:193: lcd_clear();
      0007BC 12 01 C9         [24] 2829 	lcall	_lcd_clear
                           0006D7  2830 	C$lab6.c$194$1$137 ==.
                                   2831 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:194: lcd_print("%d", actual_D);
      0007BF 90 00 53         [24] 2832 	mov	dptr,#_actual_D
      0007C2 E0               [24] 2833 	movx	a,@dptr
      0007C3 C0 E0            [24] 2834 	push	acc
      0007C5 A3               [24] 2835 	inc	dptr
      0007C6 E0               [24] 2836 	movx	a,@dptr
      0007C7 C0 E0            [24] 2837 	push	acc
      0007C9 74 CD            [12] 2838 	mov	a,#___str_6
      0007CB C0 E0            [24] 2839 	push	acc
      0007CD 74 1B            [12] 2840 	mov	a,#(___str_6 >> 8)
      0007CF C0 E0            [24] 2841 	push	acc
      0007D1 74 80            [12] 2842 	mov	a,#0x80
      0007D3 C0 E0            [24] 2843 	push	acc
      0007D5 12 01 44         [24] 2844 	lcall	_lcd_print
      0007D8 E5 81            [12] 2845 	mov	a,sp
      0007DA 24 FB            [12] 2846 	add	a,#0xfb
      0007DC F5 81            [12] 2847 	mov	sp,a
                           0006F6  2848 	C$lab6.c$195$1$137 ==.
                                   2849 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:195: offset = (unsigned int)((actual_D +3600- desired_D ) % 3600);
      0007DE 90 00 53         [24] 2850 	mov	dptr,#_actual_D
      0007E1 E0               [24] 2851 	movx	a,@dptr
      0007E2 FE               [12] 2852 	mov	r6,a
      0007E3 A3               [24] 2853 	inc	dptr
      0007E4 E0               [24] 2854 	movx	a,@dptr
      0007E5 FF               [12] 2855 	mov	r7,a
      0007E6 74 10            [12] 2856 	mov	a,#0x10
      0007E8 2E               [12] 2857 	add	a,r6
      0007E9 FE               [12] 2858 	mov	r6,a
      0007EA 74 0E            [12] 2859 	mov	a,#0x0E
      0007EC 3F               [12] 2860 	addc	a,r7
      0007ED FF               [12] 2861 	mov	r7,a
      0007EE 90 00 51         [24] 2862 	mov	dptr,#_desired_D
      0007F1 E0               [24] 2863 	movx	a,@dptr
      0007F2 FC               [12] 2864 	mov	r4,a
      0007F3 A3               [24] 2865 	inc	dptr
      0007F4 E0               [24] 2866 	movx	a,@dptr
      0007F5 FD               [12] 2867 	mov	r5,a
      0007F6 EE               [12] 2868 	mov	a,r6
      0007F7 C3               [12] 2869 	clr	c
      0007F8 9C               [12] 2870 	subb	a,r4
      0007F9 F5 82            [12] 2871 	mov	dpl,a
      0007FB EF               [12] 2872 	mov	a,r7
      0007FC 9D               [12] 2873 	subb	a,r5
      0007FD F5 83            [12] 2874 	mov	dph,a
      0007FF 75 11 10         [24] 2875 	mov	__modsint_PARM_2,#0x10
      000802 75 12 0E         [24] 2876 	mov	(__modsint_PARM_2 + 1),#0x0E
      000805 12 1B 2F         [24] 2877 	lcall	__modsint
      000808 AE 82            [24] 2878 	mov	r6,dpl
      00080A AF 83            [24] 2879 	mov	r7,dph
      00080C 8E 56            [24] 2880 	mov	_offset,r6
      00080E 8F 57            [24] 2881 	mov	(_offset + 1),r7
                           000728  2882 	C$lab6.c$196$1$137 ==.
                                   2883 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:196: Steering_Servo(offset);
      000810 85 56 82         [24] 2884 	mov	dpl,_offset
      000813 85 57 83         [24] 2885 	mov	dph,(_offset + 1)
      000816 12 11 63         [24] 2886 	lcall	_Steering_Servo
                           000731  2887 	C$lab6.c$197$1$137 ==.
                           000731  2888 	XG$Steering_func$0$0 ==.
      000819 22               [24] 2889 	ret
                                   2890 ;------------------------------------------------------------
                                   2891 ;Allocation info for local variables in function 'direction'
                                   2892 ;------------------------------------------------------------
                                   2893 ;value                     Allocated to registers r6 r7 
                                   2894 ;------------------------------------------------------------
                           000732  2895 	G$direction$0$0 ==.
                           000732  2896 	C$lab6.c$199$1$137 ==.
                                   2897 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:199: unsigned int direction(void)        ///ADJUSTS THE VALUES OF DIRECTION SO THE DESIRED DIRECTION IS THE CAR'S 'NORTH'
                                   2898 ;	-----------------------------------------
                                   2899 ;	 function direction
                                   2900 ;	-----------------------------------------
      00081A                       2901 _direction:
                           000732  2902 	C$lab6.c$202$1$139 ==.
                                   2903 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:202: count =0;
      00081A E4               [12] 2904 	clr	a
      00081B F5 32            [12] 2905 	mov	_count,a
      00081D F5 33            [12] 2906 	mov	(_count + 1),a
                           000737  2907 	C$lab6.c$203$1$139 ==.
                                   2908 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:203: while (count < 1);
      00081F                       2909 00101$:
      00081F C3               [12] 2910 	clr	c
      000820 E5 32            [12] 2911 	mov	a,_count
      000822 94 01            [12] 2912 	subb	a,#0x01
      000824 E5 33            [12] 2913 	mov	a,(_count + 1)
      000826 64 80            [12] 2914 	xrl	a,#0x80
      000828 94 80            [12] 2915 	subb	a,#0x80
      00082A 40 F3            [24] 2916 	jc	00101$
                           000744  2917 	C$lab6.c$204$1$139 ==.
                                   2918 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:204: lcd_clear();
      00082C 12 01 C9         [24] 2919 	lcall	_lcd_clear
                           000747  2920 	C$lab6.c$205$1$139 ==.
                                   2921 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:205: lcd_print("Calibration:\nHello world!\n012_345_678:\nabc def ghij");
      00082F 74 D0            [12] 2922 	mov	a,#___str_7
      000831 C0 E0            [24] 2923 	push	acc
      000833 74 1B            [12] 2924 	mov	a,#(___str_7 >> 8)
      000835 C0 E0            [24] 2925 	push	acc
      000837 74 80            [12] 2926 	mov	a,#0x80
      000839 C0 E0            [24] 2927 	push	acc
      00083B 12 01 44         [24] 2928 	lcall	_lcd_print
      00083E 15 81            [12] 2929 	dec	sp
      000840 15 81            [12] 2930 	dec	sp
      000842 15 81            [12] 2931 	dec	sp
                           00075C  2932 	C$lab6.c$206$1$139 ==.
                                   2933 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:206: start();
      000844 12 12 E1         [24] 2934 	lcall	_start
                           00075F  2935 	C$lab6.c$207$1$139 ==.
                                   2936 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:207: lcd_clear();
      000847 12 01 C9         [24] 2937 	lcall	_lcd_clear
                           000762  2938 	C$lab6.c$208$1$139 ==.
                                   2939 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:208: value = kpd_input(0);
      00084A 75 82 00         [24] 2940 	mov	dpl,#0x00
      00084D 12 02 81         [24] 2941 	lcall	_kpd_input
      000850 AE 82            [24] 2942 	mov	r6,dpl
      000852 AF 83            [24] 2943 	mov	r7,dph
                           00076C  2944 	C$lab6.c$209$1$139 ==.
                                   2945 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:209: lcd_clear();
      000854 C0 07            [24] 2946 	push	ar7
      000856 C0 06            [24] 2947 	push	ar6
      000858 12 01 C9         [24] 2948 	lcall	_lcd_clear
      00085B D0 06            [24] 2949 	pop	ar6
      00085D D0 07            [24] 2950 	pop	ar7
                           000777  2951 	C$lab6.c$210$1$139 ==.
                                   2952 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:210: lcd_print("\r\nThe desired direction is: %d", value);
      00085F C0 07            [24] 2953 	push	ar7
      000861 C0 06            [24] 2954 	push	ar6
      000863 C0 06            [24] 2955 	push	ar6
      000865 C0 07            [24] 2956 	push	ar7
      000867 74 04            [12] 2957 	mov	a,#___str_8
      000869 C0 E0            [24] 2958 	push	acc
      00086B 74 1C            [12] 2959 	mov	a,#(___str_8 >> 8)
      00086D C0 E0            [24] 2960 	push	acc
      00086F 74 80            [12] 2961 	mov	a,#0x80
      000871 C0 E0            [24] 2962 	push	acc
      000873 12 01 44         [24] 2963 	lcall	_lcd_print
      000876 E5 81            [12] 2964 	mov	a,sp
      000878 24 FB            [12] 2965 	add	a,#0xfb
      00087A F5 81            [12] 2966 	mov	sp,a
      00087C D0 06            [24] 2967 	pop	ar6
      00087E D0 07            [24] 2968 	pop	ar7
                           000798  2969 	C$lab6.c$211$1$139 ==.
                                   2970 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:211: printf("\r\nThe desired direction is: %d", value);
      000880 C0 07            [24] 2971 	push	ar7
      000882 C0 06            [24] 2972 	push	ar6
      000884 C0 06            [24] 2973 	push	ar6
      000886 C0 07            [24] 2974 	push	ar7
      000888 74 04            [12] 2975 	mov	a,#___str_8
      00088A C0 E0            [24] 2976 	push	acc
      00088C 74 1C            [12] 2977 	mov	a,#(___str_8 >> 8)
      00088E C0 E0            [24] 2978 	push	acc
      000890 74 80            [12] 2979 	mov	a,#0x80
      000892 C0 E0            [24] 2980 	push	acc
      000894 12 15 1F         [24] 2981 	lcall	_printf
      000897 E5 81            [12] 2982 	mov	a,sp
      000899 24 FB            [12] 2983 	add	a,#0xfb
      00089B F5 81            [12] 2984 	mov	sp,a
      00089D D0 06            [24] 2985 	pop	ar6
      00089F D0 07            [24] 2986 	pop	ar7
                           0007B9  2987 	C$lab6.c$213$1$139 ==.
                                   2988 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:213: return value;
      0008A1 8E 82            [24] 2989 	mov	dpl,r6
      0008A3 8F 83            [24] 2990 	mov	dph,r7
                           0007BD  2991 	C$lab6.c$214$1$139 ==.
                           0007BD  2992 	XG$direction$0$0 ==.
      0008A5 22               [24] 2993 	ret
                                   2994 ;------------------------------------------------------------
                                   2995 ;Allocation info for local variables in function 'ReadCompass'
                                   2996 ;------------------------------------------------------------
                                   2997 ;Data                      Allocated with name '_ReadCompass_Data_1_141'
                                   2998 ;Crange                    Allocated to registers 
                                   2999 ;addr                      Allocated to registers 
                                   3000 ;------------------------------------------------------------
                           0007BE  3001 	G$ReadCompass$0$0 ==.
                           0007BE  3002 	C$lab6.c$216$1$139 ==.
                                   3003 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:216: unsigned int ReadCompass(void)
                                   3004 ;	-----------------------------------------
                                   3005 ;	 function ReadCompass
                                   3006 ;	-----------------------------------------
      0008A6                       3007 _ReadCompass:
                           0007BE  3008 	C$lab6.c$222$1$141 ==.
                                   3009 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:222: i2c_read_data(addr, 2,Data,2);
      0008A6 75 2D 62         [24] 3010 	mov	_i2c_read_data_PARM_3,#_ReadCompass_Data_1_141
      0008A9 75 2E 00         [24] 3011 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0008AC 75 2F 40         [24] 3012 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0008AF 75 2C 02         [24] 3013 	mov	_i2c_read_data_PARM_2,#0x02
      0008B2 75 30 02         [24] 3014 	mov	_i2c_read_data_PARM_4,#0x02
      0008B5 75 82 C0         [24] 3015 	mov	dpl,#0xC0
      0008B8 12 04 D0         [24] 3016 	lcall	_i2c_read_data
                           0007D3  3017 	C$lab6.c$223$1$141 ==.
                                   3018 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:223: Crange = ((unsigned int) Data[0] << 8 | Data[1]);
      0008BB AF 62            [24] 3019 	mov	r7,_ReadCompass_Data_1_141
      0008BD 7E 00            [12] 3020 	mov	r6,#0x00
      0008BF AC 63            [24] 3021 	mov	r4,(_ReadCompass_Data_1_141 + 0x0001)
      0008C1 7D 00            [12] 3022 	mov	r5,#0x00
      0008C3 EC               [12] 3023 	mov	a,r4
      0008C4 4E               [12] 3024 	orl	a,r6
      0008C5 F5 82            [12] 3025 	mov	dpl,a
      0008C7 ED               [12] 3026 	mov	a,r5
      0008C8 4F               [12] 3027 	orl	a,r7
      0008C9 F5 83            [12] 3028 	mov	dph,a
                           0007E3  3029 	C$lab6.c$224$1$141 ==.
                                   3030 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:224: return Crange;
                           0007E3  3031 	C$lab6.c$225$1$141 ==.
                           0007E3  3032 	XG$ReadCompass$0$0 ==.
      0008CB 22               [24] 3033 	ret
                                   3034 ;------------------------------------------------------------
                                   3035 ;Allocation info for local variables in function 'Rudder_cal'
                                   3036 ;------------------------------------------------------------
                                   3037 ;st                        Allocated to registers r7 
                                   3038 ;value                     Allocated with name '_Rudder_cal_value_1_143'
                                   3039 ;times                     Allocated with name '_Rudder_cal_times_1_143'
                                   3040 ;------------------------------------------------------------
                           0007E4  3041 	G$Rudder_cal$0$0 ==.
                           0007E4  3042 	C$lab6.c$227$1$141 ==.
                                   3043 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:227: void Rudder_cal(void)
                                   3044 ;	-----------------------------------------
                                   3045 ;	 function Rudder_cal
                                   3046 ;	-----------------------------------------
      0008CC                       3047 _Rudder_cal:
                           0007E4  3048 	C$lab6.c$230$1$141 ==.
                                   3049 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:230: __xdata int value =0;
      0008CC 90 00 55         [24] 3050 	mov	dptr,#_Rudder_cal_value_1_143
      0008CF E4               [12] 3051 	clr	a
      0008D0 F0               [24] 3052 	movx	@dptr,a
      0008D1 A3               [24] 3053 	inc	dptr
      0008D2 F0               [24] 3054 	movx	@dptr,a
                           0007EB  3055 	C$lab6.c$231$1$141 ==.
                                   3056 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:231: __xdata int times =0;
      0008D3 90 00 57         [24] 3057 	mov	dptr,#_Rudder_cal_times_1_143
      0008D6 F0               [24] 3058 	movx	@dptr,a
      0008D7 A3               [24] 3059 	inc	dptr
      0008D8 F0               [24] 3060 	movx	@dptr,a
                           0007F1  3061 	C$lab6.c$232$1$143 ==.
                                   3062 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:232: count =0;
      0008D9 F5 32            [12] 3063 	mov	_count,a
      0008DB F5 33            [12] 3064 	mov	(_count + 1),a
                           0007F5  3065 	C$lab6.c$233$1$143 ==.
                                   3066 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:233: lcd_clear();
      0008DD 12 01 C9         [24] 3067 	lcall	_lcd_clear
                           0007F8  3068 	C$lab6.c$234$1$143 ==.
                                   3069 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:234: lcd_print("Rudder Calibration");
      0008E0 74 23            [12] 3070 	mov	a,#___str_9
      0008E2 C0 E0            [24] 3071 	push	acc
      0008E4 74 1C            [12] 3072 	mov	a,#(___str_9 >> 8)
      0008E6 C0 E0            [24] 3073 	push	acc
      0008E8 74 80            [12] 3074 	mov	a,#0x80
      0008EA C0 E0            [24] 3075 	push	acc
      0008EC 12 01 44         [24] 3076 	lcall	_lcd_print
      0008EF 15 81            [12] 3077 	dec	sp
      0008F1 15 81            [12] 3078 	dec	sp
      0008F3 15 81            [12] 3079 	dec	sp
                           00080D  3080 	C$lab6.c$235$1$143 ==.
                                   3081 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:235: while (count < 50);
      0008F5                       3082 00101$:
      0008F5 C3               [12] 3083 	clr	c
      0008F6 E5 32            [12] 3084 	mov	a,_count
      0008F8 94 32            [12] 3085 	subb	a,#0x32
      0008FA E5 33            [12] 3086 	mov	a,(_count + 1)
      0008FC 64 80            [12] 3087 	xrl	a,#0x80
      0008FE 94 80            [12] 3088 	subb	a,#0x80
      000900 40 F3            [24] 3089 	jc	00101$
                           00081A  3090 	C$lab6.c$236$1$143 ==.
                                   3091 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:236: lcd_clear();
      000902 12 01 C9         [24] 3092 	lcall	_lcd_clear
                           00081D  3093 	C$lab6.c$240$2$144 ==.
                                   3094 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:240: count =0;
      000905 E4               [12] 3095 	clr	a
      000906 F5 32            [12] 3096 	mov	_count,a
      000908 F5 33            [12] 3097 	mov	(_count + 1),a
                           000822  3098 	C$lab6.c$241$2$144 ==.
                                   3099 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:241: while (count < 1);
      00090A                       3100 00104$:
      00090A C3               [12] 3101 	clr	c
      00090B E5 32            [12] 3102 	mov	a,_count
      00090D 94 01            [12] 3103 	subb	a,#0x01
      00090F E5 33            [12] 3104 	mov	a,(_count + 1)
      000911 64 80            [12] 3105 	xrl	a,#0x80
      000913 94 80            [12] 3106 	subb	a,#0x80
      000915 40 F3            [24] 3107 	jc	00104$
                           00082F  3108 	C$lab6.c$242$2$144 ==.
                                   3109 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:242: lcd_clear();
      000917 12 01 C9         [24] 3110 	lcall	_lcd_clear
                           000832  3111 	C$lab6.c$243$2$144 ==.
                                   3112 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:243: lcd_print("go left: press 1\n go right: press 2\nPress * for next screen");
      00091A 74 36            [12] 3113 	mov	a,#___str_10
      00091C C0 E0            [24] 3114 	push	acc
      00091E 74 1C            [12] 3115 	mov	a,#(___str_10 >> 8)
      000920 C0 E0            [24] 3116 	push	acc
      000922 74 80            [12] 3117 	mov	a,#0x80
      000924 C0 E0            [24] 3118 	push	acc
      000926 12 01 44         [24] 3119 	lcall	_lcd_print
      000929 15 81            [12] 3120 	dec	sp
      00092B 15 81            [12] 3121 	dec	sp
      00092D 15 81            [12] 3122 	dec	sp
                           000847  3123 	C$lab6.c$244$2$144 ==.
                                   3124 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:244: start();
      00092F 12 12 E1         [24] 3125 	lcall	_start
                           00084A  3126 	C$lab6.c$245$2$144 ==.
                                   3127 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:245: lcd_clear();
      000932 12 01 C9         [24] 3128 	lcall	_lcd_clear
                           00084D  3129 	C$lab6.c$246$2$144 ==.
                                   3130 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:246: lcd_print("\n confirm: press 3\n press * to begin");
      000935 74 72            [12] 3131 	mov	a,#___str_11
      000937 C0 E0            [24] 3132 	push	acc
      000939 74 1C            [12] 3133 	mov	a,#(___str_11 >> 8)
      00093B C0 E0            [24] 3134 	push	acc
      00093D 74 80            [12] 3135 	mov	a,#0x80
      00093F C0 E0            [24] 3136 	push	acc
      000941 12 01 44         [24] 3137 	lcall	_lcd_print
      000944 15 81            [12] 3138 	dec	sp
      000946 15 81            [12] 3139 	dec	sp
      000948 15 81            [12] 3140 	dec	sp
                           000862  3141 	C$lab6.c$247$2$144 ==.
                                   3142 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:247: start();
      00094A 12 12 E1         [24] 3143 	lcall	_start
                           000865  3144 	C$lab6.c$248$2$144 ==.
                                   3145 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:248: st =0;
      00094D 7F 00            [12] 3146 	mov	r7,#0x00
                           000867  3147 	C$lab6.c$249$5$147 ==.
                                   3148 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:249: while (1)
      00094F                       3149 00146$:
                           000867  3150 	C$lab6.c$251$3$145 ==.
                                   3151 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:251: printf("\r\n %u",RUDDER_PW);
      00094F C0 07            [24] 3152 	push	ar7
      000951 C0 46            [24] 3153 	push	_RUDDER_PW
      000953 C0 47            [24] 3154 	push	(_RUDDER_PW + 1)
      000955 74 97            [12] 3155 	mov	a,#___str_12
      000957 C0 E0            [24] 3156 	push	acc
      000959 74 1C            [12] 3157 	mov	a,#(___str_12 >> 8)
      00095B C0 E0            [24] 3158 	push	acc
      00095D 74 80            [12] 3159 	mov	a,#0x80
      00095F C0 E0            [24] 3160 	push	acc
      000961 12 15 1F         [24] 3161 	lcall	_printf
      000964 E5 81            [12] 3162 	mov	a,sp
      000966 24 FB            [12] 3163 	add	a,#0xfb
      000968 F5 81            [12] 3164 	mov	sp,a
      00096A D0 07            [24] 3165 	pop	ar7
                           000884  3166 	C$lab6.c$252$3$145 ==.
                                   3167 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:252: RDR_lo_to_hi = 0xFFFF - RUDDER_PW;
      00096C 74 FF            [12] 3168 	mov	a,#0xFF
      00096E C3               [12] 3169 	clr	c
      00096F 95 46            [12] 3170 	subb	a,_RUDDER_PW
      000971 F5 48            [12] 3171 	mov	_RDR_lo_to_hi,a
      000973 74 FF            [12] 3172 	mov	a,#0xFF
      000975 95 47            [12] 3173 	subb	a,(_RUDDER_PW + 1)
      000977 F5 49            [12] 3174 	mov	(_RDR_lo_to_hi + 1),a
                           000891  3175 	C$lab6.c$253$3$145 ==.
                                   3176 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:253: PCA0CP0 = RDR_lo_to_hi;
      000979 85 48 EA         [24] 3177 	mov	((_PCA0CP0 >> 0) & 0xFF),_RDR_lo_to_hi
      00097C 85 49 FA         [24] 3178 	mov	((_PCA0CP0 >> 8) & 0xFF),(_RDR_lo_to_hi + 1)
                           000897  3179 	C$lab6.c$255$3$145 ==.
                                   3180 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:255: if (times == 0 )
      00097F 90 00 57         [24] 3181 	mov	dptr,#_Rudder_cal_times_1_143
      000982 E0               [24] 3182 	movx	a,@dptr
      000983 FD               [12] 3183 	mov	r5,a
      000984 A3               [24] 3184 	inc	dptr
      000985 E0               [24] 3185 	movx	a,@dptr
      000986 FE               [12] 3186 	mov	r6,a
      000987 4D               [12] 3187 	orl	a,r5
      000988 60 03            [24] 3188 	jz	00215$
      00098A 02 0A 35         [24] 3189 	ljmp	00143$
      00098D                       3190 00215$:
                           0008A5  3191 	C$lab6.c$257$4$146 ==.
                                   3192 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:257: if (value ==0)
      00098D 90 00 55         [24] 3193 	mov	dptr,#_Rudder_cal_value_1_143
      000990 E0               [24] 3194 	movx	a,@dptr
      000991 FD               [12] 3195 	mov	r5,a
      000992 A3               [24] 3196 	inc	dptr
      000993 E0               [24] 3197 	movx	a,@dptr
      000994 FE               [12] 3198 	mov	r6,a
      000995 4D               [12] 3199 	orl	a,r5
      000996 70 27            [24] 3200 	jnz	00110$
                           0008B0  3201 	C$lab6.c$259$5$147 ==.
                                   3202 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:259: lcd_clear();
      000998 C0 07            [24] 3203 	push	ar7
      00099A 12 01 C9         [24] 3204 	lcall	_lcd_clear
                           0008B5  3205 	C$lab6.c$260$5$147 ==.
                                   3206 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:260: lcd_print("Now calibrating Min_PW\n");
      00099D 74 9D            [12] 3207 	mov	a,#___str_13
      00099F C0 E0            [24] 3208 	push	acc
      0009A1 74 1C            [12] 3209 	mov	a,#(___str_13 >> 8)
      0009A3 C0 E0            [24] 3210 	push	acc
      0009A5 74 80            [12] 3211 	mov	a,#0x80
      0009A7 C0 E0            [24] 3212 	push	acc
      0009A9 12 01 44         [24] 3213 	lcall	_lcd_print
      0009AC 15 81            [12] 3214 	dec	sp
      0009AE 15 81            [12] 3215 	dec	sp
      0009B0 15 81            [12] 3216 	dec	sp
      0009B2 D0 07            [24] 3217 	pop	ar7
                           0008CC  3218 	C$lab6.c$261$5$147 ==.
                                   3219 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:261: if (st ==0 ) RUDDER_PW = PW_LEFT_RUDDER;
      0009B4 EF               [12] 3220 	mov	a,r7
      0009B5 70 06            [24] 3221 	jnz	00108$
      0009B7 85 3A 46         [24] 3222 	mov	_RUDDER_PW,_PW_LEFT_RUDDER
      0009BA 85 3B 47         [24] 3223 	mov	(_RUDDER_PW + 1),(_PW_LEFT_RUDDER + 1)
      0009BD                       3224 00108$:
                           0008D5  3225 	C$lab6.c$262$5$147 ==.
                                   3226 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:262: st =1;
      0009BD 7F 01            [12] 3227 	mov	r7,#0x01
      0009BF                       3228 00110$:
                           0008D7  3229 	C$lab6.c$264$4$146 ==.
                                   3230 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:264: value = kpd_input(1);
      0009BF 75 82 01         [24] 3231 	mov	dpl,#0x01
      0009C2 C0 07            [24] 3232 	push	ar7
      0009C4 12 02 81         [24] 3233 	lcall	_kpd_input
      0009C7 AD 82            [24] 3234 	mov	r5,dpl
      0009C9 AE 83            [24] 3235 	mov	r6,dph
      0009CB D0 07            [24] 3236 	pop	ar7
      0009CD 90 00 55         [24] 3237 	mov	dptr,#_Rudder_cal_value_1_143
      0009D0 ED               [12] 3238 	mov	a,r5
      0009D1 F0               [24] 3239 	movx	@dptr,a
      0009D2 EE               [12] 3240 	mov	a,r6
      0009D3 A3               [24] 3241 	inc	dptr
      0009D4 F0               [24] 3242 	movx	@dptr,a
                           0008ED  3243 	C$lab6.c$265$4$146 ==.
                                   3244 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:265: if (value == 1)
      0009D5 BD 01 12         [24] 3245 	cjne	r5,#0x01,00117$
      0009D8 BE 00 0F         [24] 3246 	cjne	r6,#0x00,00117$
                           0008F3  3247 	C$lab6.c$267$5$148 ==.
                                   3248 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:267: RUDDER_PW -= 20;
      0009DB E5 46            [12] 3249 	mov	a,_RUDDER_PW
      0009DD 24 EC            [12] 3250 	add	a,#0xEC
      0009DF F5 46            [12] 3251 	mov	_RUDDER_PW,a
      0009E1 E5 47            [12] 3252 	mov	a,(_RUDDER_PW + 1)
      0009E3 34 FF            [12] 3253 	addc	a,#0xFF
      0009E5 F5 47            [12] 3254 	mov	(_RUDDER_PW + 1),a
      0009E7 02 09 4F         [24] 3255 	ljmp	00146$
      0009EA                       3256 00117$:
                           000902  3257 	C$lab6.c$269$4$146 ==.
                                   3258 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:269: else if (value==2)
      0009EA 90 00 55         [24] 3259 	mov	dptr,#_Rudder_cal_value_1_143
      0009ED E0               [24] 3260 	movx	a,@dptr
      0009EE FD               [12] 3261 	mov	r5,a
      0009EF A3               [24] 3262 	inc	dptr
      0009F0 E0               [24] 3263 	movx	a,@dptr
      0009F1 FE               [12] 3264 	mov	r6,a
      0009F2 BD 02 11         [24] 3265 	cjne	r5,#0x02,00114$
      0009F5 BE 00 0E         [24] 3266 	cjne	r6,#0x00,00114$
                           000910  3267 	C$lab6.c$271$5$149 ==.
                                   3268 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:271: RUDDER_PW += 20;
      0009F8 74 14            [12] 3269 	mov	a,#0x14
      0009FA 25 46            [12] 3270 	add	a,_RUDDER_PW
      0009FC F5 46            [12] 3271 	mov	_RUDDER_PW,a
      0009FE E4               [12] 3272 	clr	a
      0009FF 35 47            [12] 3273 	addc	a,(_RUDDER_PW + 1)
      000A01 F5 47            [12] 3274 	mov	(_RUDDER_PW + 1),a
      000A03 02 09 4F         [24] 3275 	ljmp	00146$
      000A06                       3276 00114$:
                           00091E  3277 	C$lab6.c$273$4$146 ==.
                                   3278 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:273: else if (value == 3)
      000A06 90 00 55         [24] 3279 	mov	dptr,#_Rudder_cal_value_1_143
      000A09 E0               [24] 3280 	movx	a,@dptr
      000A0A FD               [12] 3281 	mov	r5,a
      000A0B A3               [24] 3282 	inc	dptr
      000A0C E0               [24] 3283 	movx	a,@dptr
      000A0D FE               [12] 3284 	mov	r6,a
      000A0E BD 03 05         [24] 3285 	cjne	r5,#0x03,00222$
      000A11 BE 00 02         [24] 3286 	cjne	r6,#0x00,00222$
      000A14 80 03            [24] 3287 	sjmp	00223$
      000A16                       3288 00222$:
      000A16 02 09 4F         [24] 3289 	ljmp	00146$
      000A19                       3290 00223$:
                           000931  3291 	C$lab6.c$275$5$150 ==.
                                   3292 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:275: times++;
      000A19 90 00 57         [24] 3293 	mov	dptr,#_Rudder_cal_times_1_143
      000A1C E0               [24] 3294 	movx	a,@dptr
      000A1D 24 01            [12] 3295 	add	a,#0x01
      000A1F F0               [24] 3296 	movx	@dptr,a
      000A20 A3               [24] 3297 	inc	dptr
      000A21 E0               [24] 3298 	movx	a,@dptr
      000A22 34 00            [12] 3299 	addc	a,#0x00
      000A24 F0               [24] 3300 	movx	@dptr,a
                           00093D  3301 	C$lab6.c$276$5$150 ==.
                                   3302 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:276: value =0;
      000A25 90 00 55         [24] 3303 	mov	dptr,#_Rudder_cal_value_1_143
      000A28 E4               [12] 3304 	clr	a
      000A29 F0               [24] 3305 	movx	@dptr,a
      000A2A A3               [24] 3306 	inc	dptr
      000A2B F0               [24] 3307 	movx	@dptr,a
                           000944  3308 	C$lab6.c$277$5$150 ==.
                                   3309 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:277: PW_LEFT_RUDDER = RUDDER_PW;
      000A2C 85 46 3A         [24] 3310 	mov	_PW_LEFT_RUDDER,_RUDDER_PW
      000A2F 85 47 3B         [24] 3311 	mov	(_PW_LEFT_RUDDER + 1),(_RUDDER_PW + 1)
      000A32 02 09 4F         [24] 3312 	ljmp	00146$
      000A35                       3313 00143$:
                           00094D  3314 	C$lab6.c$280$3$145 ==.
                                   3315 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:280: else if (times ==1)
      000A35 90 00 57         [24] 3316 	mov	dptr,#_Rudder_cal_times_1_143
      000A38 E0               [24] 3317 	movx	a,@dptr
      000A39 FD               [12] 3318 	mov	r5,a
      000A3A A3               [24] 3319 	inc	dptr
      000A3B E0               [24] 3320 	movx	a,@dptr
      000A3C FE               [12] 3321 	mov	r6,a
      000A3D BD 01 05         [24] 3322 	cjne	r5,#0x01,00224$
      000A40 BE 00 02         [24] 3323 	cjne	r6,#0x00,00224$
      000A43 80 03            [24] 3324 	sjmp	00225$
      000A45                       3325 00224$:
      000A45 02 0A EB         [24] 3326 	ljmp	00140$
      000A48                       3327 00225$:
                           000960  3328 	C$lab6.c$282$4$151 ==.
                                   3329 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:282: if (value ==0)
      000A48 90 00 55         [24] 3330 	mov	dptr,#_Rudder_cal_value_1_143
      000A4B E0               [24] 3331 	movx	a,@dptr
      000A4C FD               [12] 3332 	mov	r5,a
      000A4D A3               [24] 3333 	inc	dptr
      000A4E E0               [24] 3334 	movx	a,@dptr
      000A4F FE               [12] 3335 	mov	r6,a
      000A50 4D               [12] 3336 	orl	a,r5
      000A51 70 22            [24] 3337 	jnz	00120$
                           00096B  3338 	C$lab6.c$284$5$152 ==.
                                   3339 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:284: lcd_clear();
      000A53 C0 07            [24] 3340 	push	ar7
      000A55 12 01 C9         [24] 3341 	lcall	_lcd_clear
                           000970  3342 	C$lab6.c$285$5$152 ==.
                                   3343 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:285: lcd_print("Now calibrating Cen_PW");
      000A58 74 B5            [12] 3344 	mov	a,#___str_14
      000A5A C0 E0            [24] 3345 	push	acc
      000A5C 74 1C            [12] 3346 	mov	a,#(___str_14 >> 8)
      000A5E C0 E0            [24] 3347 	push	acc
      000A60 74 80            [12] 3348 	mov	a,#0x80
      000A62 C0 E0            [24] 3349 	push	acc
      000A64 12 01 44         [24] 3350 	lcall	_lcd_print
      000A67 15 81            [12] 3351 	dec	sp
      000A69 15 81            [12] 3352 	dec	sp
      000A6B 15 81            [12] 3353 	dec	sp
      000A6D D0 07            [24] 3354 	pop	ar7
                           000987  3355 	C$lab6.c$286$5$152 ==.
                                   3356 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:286: RUDDER_PW = PW_CENTER_RUDDER;
      000A6F 85 3C 46         [24] 3357 	mov	_RUDDER_PW,_PW_CENTER_RUDDER
      000A72 85 3D 47         [24] 3358 	mov	(_RUDDER_PW + 1),(_PW_CENTER_RUDDER + 1)
      000A75                       3359 00120$:
                           00098D  3360 	C$lab6.c$288$4$151 ==.
                                   3361 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:288: value = kpd_input(1);
      000A75 75 82 01         [24] 3362 	mov	dpl,#0x01
      000A78 C0 07            [24] 3363 	push	ar7
      000A7A 12 02 81         [24] 3364 	lcall	_kpd_input
      000A7D AD 82            [24] 3365 	mov	r5,dpl
      000A7F AE 83            [24] 3366 	mov	r6,dph
      000A81 D0 07            [24] 3367 	pop	ar7
      000A83 90 00 55         [24] 3368 	mov	dptr,#_Rudder_cal_value_1_143
      000A86 ED               [12] 3369 	mov	a,r5
      000A87 F0               [24] 3370 	movx	@dptr,a
      000A88 EE               [12] 3371 	mov	a,r6
      000A89 A3               [24] 3372 	inc	dptr
      000A8A F0               [24] 3373 	movx	@dptr,a
                           0009A3  3374 	C$lab6.c$289$4$151 ==.
                                   3375 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:289: if (value == 1)
      000A8B BD 01 12         [24] 3376 	cjne	r5,#0x01,00127$
      000A8E BE 00 0F         [24] 3377 	cjne	r6,#0x00,00127$
                           0009A9  3378 	C$lab6.c$291$5$153 ==.
                                   3379 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:291: RUDDER_PW -= 20;
      000A91 E5 46            [12] 3380 	mov	a,_RUDDER_PW
      000A93 24 EC            [12] 3381 	add	a,#0xEC
      000A95 F5 46            [12] 3382 	mov	_RUDDER_PW,a
      000A97 E5 47            [12] 3383 	mov	a,(_RUDDER_PW + 1)
      000A99 34 FF            [12] 3384 	addc	a,#0xFF
      000A9B F5 47            [12] 3385 	mov	(_RUDDER_PW + 1),a
      000A9D 02 09 4F         [24] 3386 	ljmp	00146$
      000AA0                       3387 00127$:
                           0009B8  3388 	C$lab6.c$293$4$151 ==.
                                   3389 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:293: else if (value==2)
      000AA0 90 00 55         [24] 3390 	mov	dptr,#_Rudder_cal_value_1_143
      000AA3 E0               [24] 3391 	movx	a,@dptr
      000AA4 FD               [12] 3392 	mov	r5,a
      000AA5 A3               [24] 3393 	inc	dptr
      000AA6 E0               [24] 3394 	movx	a,@dptr
      000AA7 FE               [12] 3395 	mov	r6,a
      000AA8 BD 02 11         [24] 3396 	cjne	r5,#0x02,00124$
      000AAB BE 00 0E         [24] 3397 	cjne	r6,#0x00,00124$
                           0009C6  3398 	C$lab6.c$295$5$154 ==.
                                   3399 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:295: RUDDER_PW += 20;
      000AAE 74 14            [12] 3400 	mov	a,#0x14
      000AB0 25 46            [12] 3401 	add	a,_RUDDER_PW
      000AB2 F5 46            [12] 3402 	mov	_RUDDER_PW,a
      000AB4 E4               [12] 3403 	clr	a
      000AB5 35 47            [12] 3404 	addc	a,(_RUDDER_PW + 1)
      000AB7 F5 47            [12] 3405 	mov	(_RUDDER_PW + 1),a
      000AB9 02 09 4F         [24] 3406 	ljmp	00146$
      000ABC                       3407 00124$:
                           0009D4  3408 	C$lab6.c$297$4$151 ==.
                                   3409 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:297: else if (value == 3)
      000ABC 90 00 55         [24] 3410 	mov	dptr,#_Rudder_cal_value_1_143
      000ABF E0               [24] 3411 	movx	a,@dptr
      000AC0 FD               [12] 3412 	mov	r5,a
      000AC1 A3               [24] 3413 	inc	dptr
      000AC2 E0               [24] 3414 	movx	a,@dptr
      000AC3 FE               [12] 3415 	mov	r6,a
      000AC4 BD 03 05         [24] 3416 	cjne	r5,#0x03,00231$
      000AC7 BE 00 02         [24] 3417 	cjne	r6,#0x00,00231$
      000ACA 80 03            [24] 3418 	sjmp	00232$
      000ACC                       3419 00231$:
      000ACC 02 09 4F         [24] 3420 	ljmp	00146$
      000ACF                       3421 00232$:
                           0009E7  3422 	C$lab6.c$299$5$155 ==.
                                   3423 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:299: times++;
      000ACF 90 00 57         [24] 3424 	mov	dptr,#_Rudder_cal_times_1_143
      000AD2 E0               [24] 3425 	movx	a,@dptr
      000AD3 24 01            [12] 3426 	add	a,#0x01
      000AD5 F0               [24] 3427 	movx	@dptr,a
      000AD6 A3               [24] 3428 	inc	dptr
      000AD7 E0               [24] 3429 	movx	a,@dptr
      000AD8 34 00            [12] 3430 	addc	a,#0x00
      000ADA F0               [24] 3431 	movx	@dptr,a
                           0009F3  3432 	C$lab6.c$300$5$155 ==.
                                   3433 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:300: value=0;
      000ADB 90 00 55         [24] 3434 	mov	dptr,#_Rudder_cal_value_1_143
      000ADE E4               [12] 3435 	clr	a
      000ADF F0               [24] 3436 	movx	@dptr,a
      000AE0 A3               [24] 3437 	inc	dptr
      000AE1 F0               [24] 3438 	movx	@dptr,a
                           0009FA  3439 	C$lab6.c$301$5$155 ==.
                                   3440 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:301: PW_CENTER_RUDDER = RUDDER_PW;
      000AE2 85 46 3C         [24] 3441 	mov	_PW_CENTER_RUDDER,_RUDDER_PW
      000AE5 85 47 3D         [24] 3442 	mov	(_PW_CENTER_RUDDER + 1),(_RUDDER_PW + 1)
      000AE8 02 09 4F         [24] 3443 	ljmp	00146$
      000AEB                       3444 00140$:
                           000A03  3445 	C$lab6.c$306$4$156 ==.
                                   3446 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:306: if (value==0)
      000AEB 90 00 55         [24] 3447 	mov	dptr,#_Rudder_cal_value_1_143
      000AEE E0               [24] 3448 	movx	a,@dptr
      000AEF FD               [12] 3449 	mov	r5,a
      000AF0 A3               [24] 3450 	inc	dptr
      000AF1 E0               [24] 3451 	movx	a,@dptr
      000AF2 FE               [12] 3452 	mov	r6,a
      000AF3 4D               [12] 3453 	orl	a,r5
      000AF4 70 22            [24] 3454 	jnz	00130$
                           000A0E  3455 	C$lab6.c$308$5$157 ==.
                                   3456 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:308: lcd_clear();
      000AF6 C0 07            [24] 3457 	push	ar7
      000AF8 12 01 C9         [24] 3458 	lcall	_lcd_clear
                           000A13  3459 	C$lab6.c$309$5$157 ==.
                                   3460 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:309: lcd_print("Now calibrating Max_PW");
      000AFB 74 CC            [12] 3461 	mov	a,#___str_15
      000AFD C0 E0            [24] 3462 	push	acc
      000AFF 74 1C            [12] 3463 	mov	a,#(___str_15 >> 8)
      000B01 C0 E0            [24] 3464 	push	acc
      000B03 74 80            [12] 3465 	mov	a,#0x80
      000B05 C0 E0            [24] 3466 	push	acc
      000B07 12 01 44         [24] 3467 	lcall	_lcd_print
      000B0A 15 81            [12] 3468 	dec	sp
      000B0C 15 81            [12] 3469 	dec	sp
      000B0E 15 81            [12] 3470 	dec	sp
      000B10 D0 07            [24] 3471 	pop	ar7
                           000A2A  3472 	C$lab6.c$310$5$157 ==.
                                   3473 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:310: RUDDER_PW = PW_RIGHT_RUDDER;
      000B12 85 3E 46         [24] 3474 	mov	_RUDDER_PW,_PW_RIGHT_RUDDER
      000B15 85 3F 47         [24] 3475 	mov	(_RUDDER_PW + 1),(_PW_RIGHT_RUDDER + 1)
      000B18                       3476 00130$:
                           000A30  3477 	C$lab6.c$312$4$156 ==.
                                   3478 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:312: value = kpd_input(1);
      000B18 75 82 01         [24] 3479 	mov	dpl,#0x01
      000B1B C0 07            [24] 3480 	push	ar7
      000B1D 12 02 81         [24] 3481 	lcall	_kpd_input
      000B20 AD 82            [24] 3482 	mov	r5,dpl
      000B22 AE 83            [24] 3483 	mov	r6,dph
      000B24 D0 07            [24] 3484 	pop	ar7
      000B26 90 00 55         [24] 3485 	mov	dptr,#_Rudder_cal_value_1_143
      000B29 ED               [12] 3486 	mov	a,r5
      000B2A F0               [24] 3487 	movx	@dptr,a
      000B2B EE               [12] 3488 	mov	a,r6
      000B2C A3               [24] 3489 	inc	dptr
      000B2D F0               [24] 3490 	movx	@dptr,a
                           000A46  3491 	C$lab6.c$313$4$156 ==.
                                   3492 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:313: if (value == 1)
      000B2E BD 01 12         [24] 3493 	cjne	r5,#0x01,00137$
      000B31 BE 00 0F         [24] 3494 	cjne	r6,#0x00,00137$
                           000A4C  3495 	C$lab6.c$315$5$158 ==.
                                   3496 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:315: RUDDER_PW -= 20;
      000B34 E5 46            [12] 3497 	mov	a,_RUDDER_PW
      000B36 24 EC            [12] 3498 	add	a,#0xEC
      000B38 F5 46            [12] 3499 	mov	_RUDDER_PW,a
      000B3A E5 47            [12] 3500 	mov	a,(_RUDDER_PW + 1)
      000B3C 34 FF            [12] 3501 	addc	a,#0xFF
      000B3E F5 47            [12] 3502 	mov	(_RUDDER_PW + 1),a
      000B40 02 09 4F         [24] 3503 	ljmp	00146$
      000B43                       3504 00137$:
                           000A5B  3505 	C$lab6.c$317$4$156 ==.
                                   3506 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:317: else if (value==2)
      000B43 90 00 55         [24] 3507 	mov	dptr,#_Rudder_cal_value_1_143
      000B46 E0               [24] 3508 	movx	a,@dptr
      000B47 FD               [12] 3509 	mov	r5,a
      000B48 A3               [24] 3510 	inc	dptr
      000B49 E0               [24] 3511 	movx	a,@dptr
      000B4A FE               [12] 3512 	mov	r6,a
      000B4B BD 02 11         [24] 3513 	cjne	r5,#0x02,00134$
      000B4E BE 00 0E         [24] 3514 	cjne	r6,#0x00,00134$
                           000A69  3515 	C$lab6.c$319$5$159 ==.
                                   3516 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:319: RUDDER_PW += 20;
      000B51 74 14            [12] 3517 	mov	a,#0x14
      000B53 25 46            [12] 3518 	add	a,_RUDDER_PW
      000B55 F5 46            [12] 3519 	mov	_RUDDER_PW,a
      000B57 E4               [12] 3520 	clr	a
      000B58 35 47            [12] 3521 	addc	a,(_RUDDER_PW + 1)
      000B5A F5 47            [12] 3522 	mov	(_RUDDER_PW + 1),a
      000B5C 02 09 4F         [24] 3523 	ljmp	00146$
      000B5F                       3524 00134$:
                           000A77  3525 	C$lab6.c$321$4$156 ==.
                                   3526 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:321: else if (value == 3)
      000B5F 90 00 55         [24] 3527 	mov	dptr,#_Rudder_cal_value_1_143
      000B62 E0               [24] 3528 	movx	a,@dptr
      000B63 FD               [12] 3529 	mov	r5,a
      000B64 A3               [24] 3530 	inc	dptr
      000B65 E0               [24] 3531 	movx	a,@dptr
      000B66 FE               [12] 3532 	mov	r6,a
      000B67 BD 03 05         [24] 3533 	cjne	r5,#0x03,00238$
      000B6A BE 00 02         [24] 3534 	cjne	r6,#0x00,00238$
      000B6D 80 03            [24] 3535 	sjmp	00239$
      000B6F                       3536 00238$:
      000B6F 02 09 4F         [24] 3537 	ljmp	00146$
      000B72                       3538 00239$:
                           000A8A  3539 	C$lab6.c$323$5$160 ==.
                                   3540 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:323: PW_RIGHT_RUDDER = RUDDER_PW;
      000B72 85 46 3E         [24] 3541 	mov	_PW_RIGHT_RUDDER,_RUDDER_PW
      000B75 85 47 3F         [24] 3542 	mov	(_PW_RIGHT_RUDDER + 1),(_RUDDER_PW + 1)
                           000A90  3543 	C$lab6.c$324$5$160 ==.
                                   3544 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:324: return;
                           000A90  3545 	C$lab6.c$333$1$143 ==.
                           000A90  3546 	XG$Rudder_cal$0$0 ==.
      000B78 22               [24] 3547 	ret
                                   3548 ;------------------------------------------------------------
                                   3549 ;Allocation info for local variables in function 'Angle_cal'
                                   3550 ;------------------------------------------------------------
                                   3551 ;st                        Allocated to registers r7 
                                   3552 ;value                     Allocated with name '_Angle_cal_value_1_162'
                                   3553 ;times                     Allocated with name '_Angle_cal_times_1_162'
                                   3554 ;------------------------------------------------------------
                           000A91  3555 	G$Angle_cal$0$0 ==.
                           000A91  3556 	C$lab6.c$335$1$143 ==.
                                   3557 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:335: void Angle_cal(void)
                                   3558 ;	-----------------------------------------
                                   3559 ;	 function Angle_cal
                                   3560 ;	-----------------------------------------
      000B79                       3561 _Angle_cal:
                           000A91  3562 	C$lab6.c$338$1$143 ==.
                                   3563 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:338: __xdata int value =0;
      000B79 90 00 59         [24] 3564 	mov	dptr,#_Angle_cal_value_1_162
      000B7C E4               [12] 3565 	clr	a
      000B7D F0               [24] 3566 	movx	@dptr,a
      000B7E A3               [24] 3567 	inc	dptr
      000B7F F0               [24] 3568 	movx	@dptr,a
                           000A98  3569 	C$lab6.c$339$1$143 ==.
                                   3570 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:339: __xdata int times =0;
      000B80 90 00 5B         [24] 3571 	mov	dptr,#_Angle_cal_times_1_162
      000B83 F0               [24] 3572 	movx	@dptr,a
      000B84 A3               [24] 3573 	inc	dptr
      000B85 F0               [24] 3574 	movx	@dptr,a
                           000A9E  3575 	C$lab6.c$340$1$162 ==.
                                   3576 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:340: count =0;
      000B86 F5 32            [12] 3577 	mov	_count,a
      000B88 F5 33            [12] 3578 	mov	(_count + 1),a
                           000AA2  3579 	C$lab6.c$341$1$162 ==.
                                   3580 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:341: lcd_clear();
      000B8A 12 01 C9         [24] 3581 	lcall	_lcd_clear
                           000AA5  3582 	C$lab6.c$342$1$162 ==.
                                   3583 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:342: lcd_print("Angle Calibration");
      000B8D 74 E3            [12] 3584 	mov	a,#___str_16
      000B8F C0 E0            [24] 3585 	push	acc
      000B91 74 1C            [12] 3586 	mov	a,#(___str_16 >> 8)
      000B93 C0 E0            [24] 3587 	push	acc
      000B95 74 80            [12] 3588 	mov	a,#0x80
      000B97 C0 E0            [24] 3589 	push	acc
      000B99 12 01 44         [24] 3590 	lcall	_lcd_print
      000B9C 15 81            [12] 3591 	dec	sp
      000B9E 15 81            [12] 3592 	dec	sp
      000BA0 15 81            [12] 3593 	dec	sp
                           000ABA  3594 	C$lab6.c$343$1$162 ==.
                                   3595 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:343: while (count < 50);
      000BA2                       3596 00101$:
      000BA2 C3               [12] 3597 	clr	c
      000BA3 E5 32            [12] 3598 	mov	a,_count
      000BA5 94 32            [12] 3599 	subb	a,#0x32
      000BA7 E5 33            [12] 3600 	mov	a,(_count + 1)
      000BA9 64 80            [12] 3601 	xrl	a,#0x80
      000BAB 94 80            [12] 3602 	subb	a,#0x80
      000BAD 40 F3            [24] 3603 	jc	00101$
                           000AC7  3604 	C$lab6.c$344$1$162 ==.
                                   3605 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:344: lcd_clear();
      000BAF 12 01 C9         [24] 3606 	lcall	_lcd_clear
                           000ACA  3607 	C$lab6.c$347$2$163 ==.
                                   3608 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:347: count = 0;
      000BB2 E4               [12] 3609 	clr	a
      000BB3 F5 32            [12] 3610 	mov	_count,a
      000BB5 F5 33            [12] 3611 	mov	(_count + 1),a
                           000ACF  3612 	C$lab6.c$348$2$163 ==.
                                   3613 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:348: while (count < 1);
      000BB7                       3614 00104$:
      000BB7 C3               [12] 3615 	clr	c
      000BB8 E5 32            [12] 3616 	mov	a,_count
      000BBA 94 01            [12] 3617 	subb	a,#0x01
      000BBC E5 33            [12] 3618 	mov	a,(_count + 1)
      000BBE 64 80            [12] 3619 	xrl	a,#0x80
      000BC0 94 80            [12] 3620 	subb	a,#0x80
      000BC2 40 F3            [24] 3621 	jc	00104$
                           000ADC  3622 	C$lab6.c$349$2$163 ==.
                                   3623 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:349: lcd_clear();
      000BC4 12 01 C9         [24] 3624 	lcall	_lcd_clear
                           000ADF  3625 	C$lab6.c$350$2$163 ==.
                                   3626 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:350: lcd_print("go left: press 1\n go right: press 2\nPress * for next screen");
      000BC7 74 36            [12] 3627 	mov	a,#___str_10
      000BC9 C0 E0            [24] 3628 	push	acc
      000BCB 74 1C            [12] 3629 	mov	a,#(___str_10 >> 8)
      000BCD C0 E0            [24] 3630 	push	acc
      000BCF 74 80            [12] 3631 	mov	a,#0x80
      000BD1 C0 E0            [24] 3632 	push	acc
      000BD3 12 01 44         [24] 3633 	lcall	_lcd_print
      000BD6 15 81            [12] 3634 	dec	sp
      000BD8 15 81            [12] 3635 	dec	sp
      000BDA 15 81            [12] 3636 	dec	sp
                           000AF4  3637 	C$lab6.c$351$2$163 ==.
                                   3638 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:351: start();
      000BDC 12 12 E1         [24] 3639 	lcall	_start
                           000AF7  3640 	C$lab6.c$352$2$163 ==.
                                   3641 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:352: lcd_clear();
      000BDF 12 01 C9         [24] 3642 	lcall	_lcd_clear
                           000AFA  3643 	C$lab6.c$353$2$163 ==.
                                   3644 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:353: lcd_print("\n confirm: press 3\n press * to begin");
      000BE2 74 72            [12] 3645 	mov	a,#___str_11
      000BE4 C0 E0            [24] 3646 	push	acc
      000BE6 74 1C            [12] 3647 	mov	a,#(___str_11 >> 8)
      000BE8 C0 E0            [24] 3648 	push	acc
      000BEA 74 80            [12] 3649 	mov	a,#0x80
      000BEC C0 E0            [24] 3650 	push	acc
      000BEE 12 01 44         [24] 3651 	lcall	_lcd_print
      000BF1 15 81            [12] 3652 	dec	sp
      000BF3 15 81            [12] 3653 	dec	sp
      000BF5 15 81            [12] 3654 	dec	sp
                           000B0F  3655 	C$lab6.c$354$2$163 ==.
                                   3656 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:354: start();
      000BF7 12 12 E1         [24] 3657 	lcall	_start
                           000B12  3658 	C$lab6.c$355$2$163 ==.
                                   3659 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:355: st =0;
      000BFA 7F 00            [12] 3660 	mov	r7,#0x00
                           000B14  3661 	C$lab6.c$356$5$166 ==.
                                   3662 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:356: while (1)
      000BFC                       3663 00150$:
                           000B14  3664 	C$lab6.c$358$3$164 ==.
                                   3665 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:358: printf("\r\n %u",ANGLE_PW);
      000BFC C0 07            [24] 3666 	push	ar7
      000BFE C0 4A            [24] 3667 	push	_ANGLE_PW
      000C00 C0 4B            [24] 3668 	push	(_ANGLE_PW + 1)
      000C02 74 97            [12] 3669 	mov	a,#___str_12
      000C04 C0 E0            [24] 3670 	push	acc
      000C06 74 1C            [12] 3671 	mov	a,#(___str_12 >> 8)
      000C08 C0 E0            [24] 3672 	push	acc
      000C0A 74 80            [12] 3673 	mov	a,#0x80
      000C0C C0 E0            [24] 3674 	push	acc
      000C0E 12 15 1F         [24] 3675 	lcall	_printf
      000C11 E5 81            [12] 3676 	mov	a,sp
      000C13 24 FB            [12] 3677 	add	a,#0xfb
      000C15 F5 81            [12] 3678 	mov	sp,a
      000C17 D0 07            [24] 3679 	pop	ar7
                           000B31  3680 	C$lab6.c$359$3$164 ==.
                                   3681 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:359: AGL_lo_to_hi = 0xFFFF - ANGLE_PW;
      000C19 74 FF            [12] 3682 	mov	a,#0xFF
      000C1B C3               [12] 3683 	clr	c
      000C1C 95 4A            [12] 3684 	subb	a,_ANGLE_PW
      000C1E F5 4C            [12] 3685 	mov	_AGL_lo_to_hi,a
      000C20 74 FF            [12] 3686 	mov	a,#0xFF
      000C22 95 4B            [12] 3687 	subb	a,(_ANGLE_PW + 1)
      000C24 F5 4D            [12] 3688 	mov	(_AGL_lo_to_hi + 1),a
                           000B3E  3689 	C$lab6.c$360$3$164 ==.
                                   3690 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:360: PCA0CP1 = AGL_lo_to_hi;
      000C26 85 4C EB         [24] 3691 	mov	((_PCA0CP1 >> 0) & 0xFF),_AGL_lo_to_hi
      000C29 85 4D FB         [24] 3692 	mov	((_PCA0CP1 >> 8) & 0xFF),(_AGL_lo_to_hi + 1)
                           000B44  3693 	C$lab6.c$362$3$164 ==.
                                   3694 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:362: if (times == 0 )
      000C2C 90 00 5B         [24] 3695 	mov	dptr,#_Angle_cal_times_1_162
      000C2F E0               [24] 3696 	movx	a,@dptr
      000C30 FD               [12] 3697 	mov	r5,a
      000C31 A3               [24] 3698 	inc	dptr
      000C32 E0               [24] 3699 	movx	a,@dptr
      000C33 FE               [12] 3700 	mov	r6,a
      000C34 4D               [12] 3701 	orl	a,r5
      000C35 60 03            [24] 3702 	jz	00225$
      000C37 02 0C E4         [24] 3703 	ljmp	00147$
      000C3A                       3704 00225$:
                           000B52  3705 	C$lab6.c$364$4$165 ==.
                                   3706 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:364: if (value ==0)
      000C3A 90 00 59         [24] 3707 	mov	dptr,#_Angle_cal_value_1_162
      000C3D E0               [24] 3708 	movx	a,@dptr
      000C3E FD               [12] 3709 	mov	r5,a
      000C3F A3               [24] 3710 	inc	dptr
      000C40 E0               [24] 3711 	movx	a,@dptr
      000C41 FE               [12] 3712 	mov	r6,a
      000C42 4D               [12] 3713 	orl	a,r5
      000C43 70 27            [24] 3714 	jnz	00110$
                           000B5D  3715 	C$lab6.c$366$5$166 ==.
                                   3716 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:366: lcd_clear();
      000C45 C0 07            [24] 3717 	push	ar7
      000C47 12 01 C9         [24] 3718 	lcall	_lcd_clear
                           000B62  3719 	C$lab6.c$367$5$166 ==.
                                   3720 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:367: lcd_print("Now calibrating Min_PW UP ANGLE");
      000C4A 74 F5            [12] 3721 	mov	a,#___str_17
      000C4C C0 E0            [24] 3722 	push	acc
      000C4E 74 1C            [12] 3723 	mov	a,#(___str_17 >> 8)
      000C50 C0 E0            [24] 3724 	push	acc
      000C52 74 80            [12] 3725 	mov	a,#0x80
      000C54 C0 E0            [24] 3726 	push	acc
      000C56 12 01 44         [24] 3727 	lcall	_lcd_print
      000C59 15 81            [12] 3728 	dec	sp
      000C5B 15 81            [12] 3729 	dec	sp
      000C5D 15 81            [12] 3730 	dec	sp
      000C5F D0 07            [24] 3731 	pop	ar7
                           000B79  3732 	C$lab6.c$368$5$166 ==.
                                   3733 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:368: if (st == 0) ANGLE_PW = PW_UP_ANGLE;
      000C61 EF               [12] 3734 	mov	a,r7
      000C62 70 06            [24] 3735 	jnz	00108$
      000C64 85 40 4A         [24] 3736 	mov	_ANGLE_PW,_PW_UP_ANGLE
      000C67 85 41 4B         [24] 3737 	mov	(_ANGLE_PW + 1),(_PW_UP_ANGLE + 1)
      000C6A                       3738 00108$:
                           000B82  3739 	C$lab6.c$369$5$166 ==.
                                   3740 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:369: st =1;
      000C6A 7F 01            [12] 3741 	mov	r7,#0x01
      000C6C                       3742 00110$:
                           000B84  3743 	C$lab6.c$371$4$165 ==.
                                   3744 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:371: value = kpd_input(1);
      000C6C 75 82 01         [24] 3745 	mov	dpl,#0x01
      000C6F C0 07            [24] 3746 	push	ar7
      000C71 12 02 81         [24] 3747 	lcall	_kpd_input
      000C74 AD 82            [24] 3748 	mov	r5,dpl
      000C76 AE 83            [24] 3749 	mov	r6,dph
      000C78 D0 07            [24] 3750 	pop	ar7
      000C7A 90 00 59         [24] 3751 	mov	dptr,#_Angle_cal_value_1_162
      000C7D ED               [12] 3752 	mov	a,r5
      000C7E F0               [24] 3753 	movx	@dptr,a
      000C7F EE               [12] 3754 	mov	a,r6
      000C80 A3               [24] 3755 	inc	dptr
      000C81 F0               [24] 3756 	movx	@dptr,a
                           000B9A  3757 	C$lab6.c$372$4$165 ==.
                                   3758 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:372: if (value == 1)
      000C82 BD 01 12         [24] 3759 	cjne	r5,#0x01,00117$
      000C85 BE 00 0F         [24] 3760 	cjne	r6,#0x00,00117$
                           000BA0  3761 	C$lab6.c$374$5$167 ==.
                                   3762 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:374: ANGLE_PW -= 30;
      000C88 E5 4A            [12] 3763 	mov	a,_ANGLE_PW
      000C8A 24 E2            [12] 3764 	add	a,#0xE2
      000C8C F5 4A            [12] 3765 	mov	_ANGLE_PW,a
      000C8E E5 4B            [12] 3766 	mov	a,(_ANGLE_PW + 1)
      000C90 34 FF            [12] 3767 	addc	a,#0xFF
      000C92 F5 4B            [12] 3768 	mov	(_ANGLE_PW + 1),a
      000C94 02 0B FC         [24] 3769 	ljmp	00150$
      000C97                       3770 00117$:
                           000BAF  3771 	C$lab6.c$376$4$165 ==.
                                   3772 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:376: else if (value==2)
      000C97 90 00 59         [24] 3773 	mov	dptr,#_Angle_cal_value_1_162
      000C9A E0               [24] 3774 	movx	a,@dptr
      000C9B FD               [12] 3775 	mov	r5,a
      000C9C A3               [24] 3776 	inc	dptr
      000C9D E0               [24] 3777 	movx	a,@dptr
      000C9E FE               [12] 3778 	mov	r6,a
      000C9F BD 02 11         [24] 3779 	cjne	r5,#0x02,00114$
      000CA2 BE 00 0E         [24] 3780 	cjne	r6,#0x00,00114$
                           000BBD  3781 	C$lab6.c$378$5$168 ==.
                                   3782 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:378: ANGLE_PW += 30;
      000CA5 74 1E            [12] 3783 	mov	a,#0x1E
      000CA7 25 4A            [12] 3784 	add	a,_ANGLE_PW
      000CA9 F5 4A            [12] 3785 	mov	_ANGLE_PW,a
      000CAB E4               [12] 3786 	clr	a
      000CAC 35 4B            [12] 3787 	addc	a,(_ANGLE_PW + 1)
      000CAE F5 4B            [12] 3788 	mov	(_ANGLE_PW + 1),a
      000CB0 02 0B FC         [24] 3789 	ljmp	00150$
      000CB3                       3790 00114$:
                           000BCB  3791 	C$lab6.c$380$4$165 ==.
                                   3792 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:380: else if (value == 3)
      000CB3 90 00 59         [24] 3793 	mov	dptr,#_Angle_cal_value_1_162
      000CB6 E0               [24] 3794 	movx	a,@dptr
      000CB7 FD               [12] 3795 	mov	r5,a
      000CB8 A3               [24] 3796 	inc	dptr
      000CB9 E0               [24] 3797 	movx	a,@dptr
      000CBA FE               [12] 3798 	mov	r6,a
      000CBB BD 03 05         [24] 3799 	cjne	r5,#0x03,00232$
      000CBE BE 00 02         [24] 3800 	cjne	r6,#0x00,00232$
      000CC1 80 03            [24] 3801 	sjmp	00233$
      000CC3                       3802 00232$:
      000CC3 02 0B FC         [24] 3803 	ljmp	00150$
      000CC6                       3804 00233$:
                           000BDE  3805 	C$lab6.c$382$5$169 ==.
                                   3806 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:382: times++;
      000CC6 90 00 5B         [24] 3807 	mov	dptr,#_Angle_cal_times_1_162
      000CC9 E0               [24] 3808 	movx	a,@dptr
      000CCA 24 01            [12] 3809 	add	a,#0x01
      000CCC F0               [24] 3810 	movx	@dptr,a
      000CCD A3               [24] 3811 	inc	dptr
      000CCE E0               [24] 3812 	movx	a,@dptr
      000CCF 34 00            [12] 3813 	addc	a,#0x00
      000CD1 F0               [24] 3814 	movx	@dptr,a
                           000BEA  3815 	C$lab6.c$383$5$169 ==.
                                   3816 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:383: value =0;
      000CD2 90 00 59         [24] 3817 	mov	dptr,#_Angle_cal_value_1_162
      000CD5 E4               [12] 3818 	clr	a
      000CD6 F0               [24] 3819 	movx	@dptr,a
      000CD7 A3               [24] 3820 	inc	dptr
      000CD8 F0               [24] 3821 	movx	@dptr,a
                           000BF1  3822 	C$lab6.c$384$5$169 ==.
                                   3823 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:384: st=0;
      000CD9 7F 00            [12] 3824 	mov	r7,#0x00
                           000BF3  3825 	C$lab6.c$385$5$169 ==.
                                   3826 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:385: PW_UP_ANGLE = ANGLE_PW;
      000CDB 85 4A 40         [24] 3827 	mov	_PW_UP_ANGLE,_ANGLE_PW
      000CDE 85 4B 41         [24] 3828 	mov	(_PW_UP_ANGLE + 1),(_ANGLE_PW + 1)
      000CE1 02 0B FC         [24] 3829 	ljmp	00150$
      000CE4                       3830 00147$:
                           000BFC  3831 	C$lab6.c$388$3$164 ==.
                                   3832 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:388: else if (times ==1)
      000CE4 90 00 5B         [24] 3833 	mov	dptr,#_Angle_cal_times_1_162
      000CE7 E0               [24] 3834 	movx	a,@dptr
      000CE8 FD               [12] 3835 	mov	r5,a
      000CE9 A3               [24] 3836 	inc	dptr
      000CEA E0               [24] 3837 	movx	a,@dptr
      000CEB FE               [12] 3838 	mov	r6,a
      000CEC BD 01 05         [24] 3839 	cjne	r5,#0x01,00234$
      000CEF BE 00 02         [24] 3840 	cjne	r6,#0x00,00234$
      000CF2 80 03            [24] 3841 	sjmp	00235$
      000CF4                       3842 00234$:
      000CF4 02 0D A1         [24] 3843 	ljmp	00144$
      000CF7                       3844 00235$:
                           000C0F  3845 	C$lab6.c$390$4$170 ==.
                                   3846 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:390: if (value ==0)
      000CF7 90 00 59         [24] 3847 	mov	dptr,#_Angle_cal_value_1_162
      000CFA E0               [24] 3848 	movx	a,@dptr
      000CFB FD               [12] 3849 	mov	r5,a
      000CFC A3               [24] 3850 	inc	dptr
      000CFD E0               [24] 3851 	movx	a,@dptr
      000CFE FE               [12] 3852 	mov	r6,a
      000CFF 4D               [12] 3853 	orl	a,r5
      000D00 70 27            [24] 3854 	jnz	00122$
                           000C1A  3855 	C$lab6.c$392$5$171 ==.
                                   3856 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:392: lcd_clear();
      000D02 C0 07            [24] 3857 	push	ar7
      000D04 12 01 C9         [24] 3858 	lcall	_lcd_clear
                           000C1F  3859 	C$lab6.c$393$5$171 ==.
                                   3860 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:393: lcd_print("Now calibrating Cen_PW");
      000D07 74 B5            [12] 3861 	mov	a,#___str_14
      000D09 C0 E0            [24] 3862 	push	acc
      000D0B 74 1C            [12] 3863 	mov	a,#(___str_14 >> 8)
      000D0D C0 E0            [24] 3864 	push	acc
      000D0F 74 80            [12] 3865 	mov	a,#0x80
      000D11 C0 E0            [24] 3866 	push	acc
      000D13 12 01 44         [24] 3867 	lcall	_lcd_print
      000D16 15 81            [12] 3868 	dec	sp
      000D18 15 81            [12] 3869 	dec	sp
      000D1A 15 81            [12] 3870 	dec	sp
      000D1C D0 07            [24] 3871 	pop	ar7
                           000C36  3872 	C$lab6.c$394$5$171 ==.
                                   3873 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:394: if (st == 0) ANGLE_PW = PW_CENTER_ANGLE;
      000D1E EF               [12] 3874 	mov	a,r7
      000D1F 70 06            [24] 3875 	jnz	00120$
      000D21 85 42 4A         [24] 3876 	mov	_ANGLE_PW,_PW_CENTER_ANGLE
      000D24 85 43 4B         [24] 3877 	mov	(_ANGLE_PW + 1),(_PW_CENTER_ANGLE + 1)
      000D27                       3878 00120$:
                           000C3F  3879 	C$lab6.c$395$5$171 ==.
                                   3880 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:395: st=1;
      000D27 7F 01            [12] 3881 	mov	r7,#0x01
      000D29                       3882 00122$:
                           000C41  3883 	C$lab6.c$397$4$170 ==.
                                   3884 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:397: value = kpd_input(1);
      000D29 75 82 01         [24] 3885 	mov	dpl,#0x01
      000D2C C0 07            [24] 3886 	push	ar7
      000D2E 12 02 81         [24] 3887 	lcall	_kpd_input
      000D31 AD 82            [24] 3888 	mov	r5,dpl
      000D33 AE 83            [24] 3889 	mov	r6,dph
      000D35 D0 07            [24] 3890 	pop	ar7
      000D37 90 00 59         [24] 3891 	mov	dptr,#_Angle_cal_value_1_162
      000D3A ED               [12] 3892 	mov	a,r5
      000D3B F0               [24] 3893 	movx	@dptr,a
      000D3C EE               [12] 3894 	mov	a,r6
      000D3D A3               [24] 3895 	inc	dptr
      000D3E F0               [24] 3896 	movx	@dptr,a
                           000C57  3897 	C$lab6.c$398$4$170 ==.
                                   3898 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:398: if (value == 1)
      000D3F BD 01 12         [24] 3899 	cjne	r5,#0x01,00129$
      000D42 BE 00 0F         [24] 3900 	cjne	r6,#0x00,00129$
                           000C5D  3901 	C$lab6.c$400$5$172 ==.
                                   3902 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:400: ANGLE_PW -= 30;
      000D45 E5 4A            [12] 3903 	mov	a,_ANGLE_PW
      000D47 24 E2            [12] 3904 	add	a,#0xE2
      000D49 F5 4A            [12] 3905 	mov	_ANGLE_PW,a
      000D4B E5 4B            [12] 3906 	mov	a,(_ANGLE_PW + 1)
      000D4D 34 FF            [12] 3907 	addc	a,#0xFF
      000D4F F5 4B            [12] 3908 	mov	(_ANGLE_PW + 1),a
      000D51 02 0B FC         [24] 3909 	ljmp	00150$
      000D54                       3910 00129$:
                           000C6C  3911 	C$lab6.c$402$4$170 ==.
                                   3912 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:402: else if (value==2)
      000D54 90 00 59         [24] 3913 	mov	dptr,#_Angle_cal_value_1_162
      000D57 E0               [24] 3914 	movx	a,@dptr
      000D58 FD               [12] 3915 	mov	r5,a
      000D59 A3               [24] 3916 	inc	dptr
      000D5A E0               [24] 3917 	movx	a,@dptr
      000D5B FE               [12] 3918 	mov	r6,a
      000D5C BD 02 11         [24] 3919 	cjne	r5,#0x02,00126$
      000D5F BE 00 0E         [24] 3920 	cjne	r6,#0x00,00126$
                           000C7A  3921 	C$lab6.c$404$5$173 ==.
                                   3922 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:404: ANGLE_PW += 30;
      000D62 74 1E            [12] 3923 	mov	a,#0x1E
      000D64 25 4A            [12] 3924 	add	a,_ANGLE_PW
      000D66 F5 4A            [12] 3925 	mov	_ANGLE_PW,a
      000D68 E4               [12] 3926 	clr	a
      000D69 35 4B            [12] 3927 	addc	a,(_ANGLE_PW + 1)
      000D6B F5 4B            [12] 3928 	mov	(_ANGLE_PW + 1),a
      000D6D 02 0B FC         [24] 3929 	ljmp	00150$
      000D70                       3930 00126$:
                           000C88  3931 	C$lab6.c$406$4$170 ==.
                                   3932 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:406: else if (value == 3)
      000D70 90 00 59         [24] 3933 	mov	dptr,#_Angle_cal_value_1_162
      000D73 E0               [24] 3934 	movx	a,@dptr
      000D74 FD               [12] 3935 	mov	r5,a
      000D75 A3               [24] 3936 	inc	dptr
      000D76 E0               [24] 3937 	movx	a,@dptr
      000D77 FE               [12] 3938 	mov	r6,a
      000D78 BD 03 05         [24] 3939 	cjne	r5,#0x03,00242$
      000D7B BE 00 02         [24] 3940 	cjne	r6,#0x00,00242$
      000D7E 80 03            [24] 3941 	sjmp	00243$
      000D80                       3942 00242$:
      000D80 02 0B FC         [24] 3943 	ljmp	00150$
      000D83                       3944 00243$:
                           000C9B  3945 	C$lab6.c$408$5$174 ==.
                                   3946 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:408: times++;
      000D83 90 00 5B         [24] 3947 	mov	dptr,#_Angle_cal_times_1_162
      000D86 E0               [24] 3948 	movx	a,@dptr
      000D87 24 01            [12] 3949 	add	a,#0x01
      000D89 F0               [24] 3950 	movx	@dptr,a
      000D8A A3               [24] 3951 	inc	dptr
      000D8B E0               [24] 3952 	movx	a,@dptr
      000D8C 34 00            [12] 3953 	addc	a,#0x00
      000D8E F0               [24] 3954 	movx	@dptr,a
                           000CA7  3955 	C$lab6.c$409$5$174 ==.
                                   3956 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:409: value=0;
      000D8F 90 00 59         [24] 3957 	mov	dptr,#_Angle_cal_value_1_162
      000D92 E4               [12] 3958 	clr	a
      000D93 F0               [24] 3959 	movx	@dptr,a
      000D94 A3               [24] 3960 	inc	dptr
      000D95 F0               [24] 3961 	movx	@dptr,a
                           000CAE  3962 	C$lab6.c$410$5$174 ==.
                                   3963 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:410: st=0;
      000D96 7F 00            [12] 3964 	mov	r7,#0x00
                           000CB0  3965 	C$lab6.c$411$5$174 ==.
                                   3966 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:411: PW_CENTER_ANGLE = ANGLE_PW;
      000D98 85 4A 42         [24] 3967 	mov	_PW_CENTER_ANGLE,_ANGLE_PW
      000D9B 85 4B 43         [24] 3968 	mov	(_PW_CENTER_ANGLE + 1),(_ANGLE_PW + 1)
      000D9E 02 0B FC         [24] 3969 	ljmp	00150$
      000DA1                       3970 00144$:
                           000CB9  3971 	C$lab6.c$416$4$175 ==.
                                   3972 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:416: if (value==0)
      000DA1 90 00 59         [24] 3973 	mov	dptr,#_Angle_cal_value_1_162
      000DA4 E0               [24] 3974 	movx	a,@dptr
      000DA5 FD               [12] 3975 	mov	r5,a
      000DA6 A3               [24] 3976 	inc	dptr
      000DA7 E0               [24] 3977 	movx	a,@dptr
      000DA8 FE               [12] 3978 	mov	r6,a
      000DA9 4D               [12] 3979 	orl	a,r5
      000DAA 70 27            [24] 3980 	jnz	00134$
                           000CC4  3981 	C$lab6.c$418$5$176 ==.
                                   3982 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:418: lcd_clear();
      000DAC C0 07            [24] 3983 	push	ar7
      000DAE 12 01 C9         [24] 3984 	lcall	_lcd_clear
                           000CC9  3985 	C$lab6.c$419$5$176 ==.
                                   3986 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:419: lcd_print("Now calibrating Max_PW DOWN ANGLE");
      000DB1 74 15            [12] 3987 	mov	a,#___str_18
      000DB3 C0 E0            [24] 3988 	push	acc
      000DB5 74 1D            [12] 3989 	mov	a,#(___str_18 >> 8)
      000DB7 C0 E0            [24] 3990 	push	acc
      000DB9 74 80            [12] 3991 	mov	a,#0x80
      000DBB C0 E0            [24] 3992 	push	acc
      000DBD 12 01 44         [24] 3993 	lcall	_lcd_print
      000DC0 15 81            [12] 3994 	dec	sp
      000DC2 15 81            [12] 3995 	dec	sp
      000DC4 15 81            [12] 3996 	dec	sp
      000DC6 D0 07            [24] 3997 	pop	ar7
                           000CE0  3998 	C$lab6.c$420$5$176 ==.
                                   3999 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:420: if (st == 0) ANGLE_PW = PW_DOWN_ANGLE;
      000DC8 EF               [12] 4000 	mov	a,r7
      000DC9 70 06            [24] 4001 	jnz	00132$
      000DCB 85 44 4A         [24] 4002 	mov	_ANGLE_PW,_PW_DOWN_ANGLE
      000DCE 85 45 4B         [24] 4003 	mov	(_ANGLE_PW + 1),(_PW_DOWN_ANGLE + 1)
      000DD1                       4004 00132$:
                           000CE9  4005 	C$lab6.c$421$5$176 ==.
                                   4006 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:421: st=1;
      000DD1 7F 01            [12] 4007 	mov	r7,#0x01
      000DD3                       4008 00134$:
                           000CEB  4009 	C$lab6.c$423$4$175 ==.
                                   4010 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:423: value = kpd_input(1);
      000DD3 75 82 01         [24] 4011 	mov	dpl,#0x01
      000DD6 C0 07            [24] 4012 	push	ar7
      000DD8 12 02 81         [24] 4013 	lcall	_kpd_input
      000DDB AD 82            [24] 4014 	mov	r5,dpl
      000DDD AE 83            [24] 4015 	mov	r6,dph
      000DDF D0 07            [24] 4016 	pop	ar7
      000DE1 90 00 59         [24] 4017 	mov	dptr,#_Angle_cal_value_1_162
      000DE4 ED               [12] 4018 	mov	a,r5
      000DE5 F0               [24] 4019 	movx	@dptr,a
      000DE6 EE               [12] 4020 	mov	a,r6
      000DE7 A3               [24] 4021 	inc	dptr
      000DE8 F0               [24] 4022 	movx	@dptr,a
                           000D01  4023 	C$lab6.c$424$4$175 ==.
                                   4024 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:424: if (value == 1)
      000DE9 BD 01 12         [24] 4025 	cjne	r5,#0x01,00141$
      000DEC BE 00 0F         [24] 4026 	cjne	r6,#0x00,00141$
                           000D07  4027 	C$lab6.c$426$5$177 ==.
                                   4028 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:426: ANGLE_PW -= 30;
      000DEF E5 4A            [12] 4029 	mov	a,_ANGLE_PW
      000DF1 24 E2            [12] 4030 	add	a,#0xE2
      000DF3 F5 4A            [12] 4031 	mov	_ANGLE_PW,a
      000DF5 E5 4B            [12] 4032 	mov	a,(_ANGLE_PW + 1)
      000DF7 34 FF            [12] 4033 	addc	a,#0xFF
      000DF9 F5 4B            [12] 4034 	mov	(_ANGLE_PW + 1),a
      000DFB 02 0B FC         [24] 4035 	ljmp	00150$
      000DFE                       4036 00141$:
                           000D16  4037 	C$lab6.c$428$4$175 ==.
                                   4038 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:428: else if (value==2)
      000DFE 90 00 59         [24] 4039 	mov	dptr,#_Angle_cal_value_1_162
      000E01 E0               [24] 4040 	movx	a,@dptr
      000E02 FD               [12] 4041 	mov	r5,a
      000E03 A3               [24] 4042 	inc	dptr
      000E04 E0               [24] 4043 	movx	a,@dptr
      000E05 FE               [12] 4044 	mov	r6,a
      000E06 BD 02 11         [24] 4045 	cjne	r5,#0x02,00138$
      000E09 BE 00 0E         [24] 4046 	cjne	r6,#0x00,00138$
                           000D24  4047 	C$lab6.c$430$5$178 ==.
                                   4048 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:430: ANGLE_PW += 30;
      000E0C 74 1E            [12] 4049 	mov	a,#0x1E
      000E0E 25 4A            [12] 4050 	add	a,_ANGLE_PW
      000E10 F5 4A            [12] 4051 	mov	_ANGLE_PW,a
      000E12 E4               [12] 4052 	clr	a
      000E13 35 4B            [12] 4053 	addc	a,(_ANGLE_PW + 1)
      000E15 F5 4B            [12] 4054 	mov	(_ANGLE_PW + 1),a
      000E17 02 0B FC         [24] 4055 	ljmp	00150$
      000E1A                       4056 00138$:
                           000D32  4057 	C$lab6.c$432$4$175 ==.
                                   4058 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:432: else if (value == 3)
      000E1A 90 00 59         [24] 4059 	mov	dptr,#_Angle_cal_value_1_162
      000E1D E0               [24] 4060 	movx	a,@dptr
      000E1E FD               [12] 4061 	mov	r5,a
      000E1F A3               [24] 4062 	inc	dptr
      000E20 E0               [24] 4063 	movx	a,@dptr
      000E21 FE               [12] 4064 	mov	r6,a
      000E22 BD 03 05         [24] 4065 	cjne	r5,#0x03,00250$
      000E25 BE 00 02         [24] 4066 	cjne	r6,#0x00,00250$
      000E28 80 03            [24] 4067 	sjmp	00251$
      000E2A                       4068 00250$:
      000E2A 02 0B FC         [24] 4069 	ljmp	00150$
      000E2D                       4070 00251$:
                           000D45  4071 	C$lab6.c$434$5$179 ==.
                                   4072 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:434: PW_DOWN_ANGLE = ANGLE_PW;
      000E2D 85 4A 44         [24] 4073 	mov	_PW_DOWN_ANGLE,_ANGLE_PW
      000E30 85 4B 45         [24] 4074 	mov	(_PW_DOWN_ANGLE + 1),(_ANGLE_PW + 1)
                           000D4B  4075 	C$lab6.c$435$5$179 ==.
                                   4076 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:435: return;
                           000D4B  4077 	C$lab6.c$440$1$162 ==.
                           000D4B  4078 	XG$Angle_cal$0$0 ==.
      000E33 22               [24] 4079 	ret
                                   4080 ;------------------------------------------------------------
                                   4081 ;Allocation info for local variables in function 'Thrust_cal'
                                   4082 ;------------------------------------------------------------
                                   4083 ;st                        Allocated to registers r7 
                                   4084 ;value                     Allocated with name '_Thrust_cal_value_1_181'
                                   4085 ;times                     Allocated with name '_Thrust_cal_times_1_181'
                                   4086 ;------------------------------------------------------------
                           000D4C  4087 	G$Thrust_cal$0$0 ==.
                           000D4C  4088 	C$lab6.c$442$1$162 ==.
                                   4089 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:442: void Thrust_cal(void)
                                   4090 ;	-----------------------------------------
                                   4091 ;	 function Thrust_cal
                                   4092 ;	-----------------------------------------
      000E34                       4093 _Thrust_cal:
                           000D4C  4094 	C$lab6.c$445$1$162 ==.
                                   4095 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:445: __xdata int value =0;
      000E34 90 00 5D         [24] 4096 	mov	dptr,#_Thrust_cal_value_1_181
      000E37 E4               [12] 4097 	clr	a
      000E38 F0               [24] 4098 	movx	@dptr,a
      000E39 A3               [24] 4099 	inc	dptr
      000E3A F0               [24] 4100 	movx	@dptr,a
                           000D53  4101 	C$lab6.c$447$1$181 ==.
                                   4102 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:447: count =0;
      000E3B F5 32            [12] 4103 	mov	_count,a
      000E3D F5 33            [12] 4104 	mov	(_count + 1),a
                           000D57  4105 	C$lab6.c$448$1$181 ==.
                                   4106 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:448: lcd_clear();
      000E3F 12 01 C9         [24] 4107 	lcall	_lcd_clear
                           000D5A  4108 	C$lab6.c$449$1$181 ==.
                                   4109 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:449: lcd_print("Thrust Calibration");
      000E42 74 37            [12] 4110 	mov	a,#___str_19
      000E44 C0 E0            [24] 4111 	push	acc
      000E46 74 1D            [12] 4112 	mov	a,#(___str_19 >> 8)
      000E48 C0 E0            [24] 4113 	push	acc
      000E4A 74 80            [12] 4114 	mov	a,#0x80
      000E4C C0 E0            [24] 4115 	push	acc
      000E4E 12 01 44         [24] 4116 	lcall	_lcd_print
      000E51 15 81            [12] 4117 	dec	sp
      000E53 15 81            [12] 4118 	dec	sp
      000E55 15 81            [12] 4119 	dec	sp
                           000D6F  4120 	C$lab6.c$450$1$181 ==.
                                   4121 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:450: while (count < 50);
      000E57                       4122 00101$:
      000E57 C3               [12] 4123 	clr	c
      000E58 E5 32            [12] 4124 	mov	a,_count
      000E5A 94 32            [12] 4125 	subb	a,#0x32
      000E5C E5 33            [12] 4126 	mov	a,(_count + 1)
      000E5E 64 80            [12] 4127 	xrl	a,#0x80
      000E60 94 80            [12] 4128 	subb	a,#0x80
      000E62 40 F3            [24] 4129 	jc	00101$
                           000D7C  4130 	C$lab6.c$451$1$181 ==.
                                   4131 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:451: lcd_clear();
      000E64 12 01 C9         [24] 4132 	lcall	_lcd_clear
                           000D7F  4133 	C$lab6.c$455$2$182 ==.
                                   4134 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:455: count = 0;
      000E67 E4               [12] 4135 	clr	a
      000E68 F5 32            [12] 4136 	mov	_count,a
      000E6A F5 33            [12] 4137 	mov	(_count + 1),a
                           000D84  4138 	C$lab6.c$456$2$182 ==.
                                   4139 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:456: while (count < 1);
      000E6C                       4140 00104$:
      000E6C C3               [12] 4141 	clr	c
      000E6D E5 32            [12] 4142 	mov	a,_count
      000E6F 94 01            [12] 4143 	subb	a,#0x01
      000E71 E5 33            [12] 4144 	mov	a,(_count + 1)
      000E73 64 80            [12] 4145 	xrl	a,#0x80
      000E75 94 80            [12] 4146 	subb	a,#0x80
      000E77 40 F3            [24] 4147 	jc	00104$
                           000D91  4148 	C$lab6.c$457$2$182 ==.
                                   4149 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:457: lcd_clear();
      000E79 12 01 C9         [24] 4150 	lcall	_lcd_clear
                           000D94  4151 	C$lab6.c$458$2$182 ==.
                                   4152 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:458: lcd_print("go left: press 1\n go right: press 2\nPress * for next screen");
      000E7C 74 36            [12] 4153 	mov	a,#___str_10
      000E7E C0 E0            [24] 4154 	push	acc
      000E80 74 1C            [12] 4155 	mov	a,#(___str_10 >> 8)
      000E82 C0 E0            [24] 4156 	push	acc
      000E84 74 80            [12] 4157 	mov	a,#0x80
      000E86 C0 E0            [24] 4158 	push	acc
      000E88 12 01 44         [24] 4159 	lcall	_lcd_print
      000E8B 15 81            [12] 4160 	dec	sp
      000E8D 15 81            [12] 4161 	dec	sp
      000E8F 15 81            [12] 4162 	dec	sp
                           000DA9  4163 	C$lab6.c$459$2$182 ==.
                                   4164 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:459: start();
      000E91 12 12 E1         [24] 4165 	lcall	_start
                           000DAC  4166 	C$lab6.c$460$2$182 ==.
                                   4167 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:460: lcd_clear();
      000E94 12 01 C9         [24] 4168 	lcall	_lcd_clear
                           000DAF  4169 	C$lab6.c$461$2$182 ==.
                                   4170 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:461: lcd_print("\n confirm: press 3\n press * to begin");
      000E97 74 72            [12] 4171 	mov	a,#___str_11
      000E99 C0 E0            [24] 4172 	push	acc
      000E9B 74 1C            [12] 4173 	mov	a,#(___str_11 >> 8)
      000E9D C0 E0            [24] 4174 	push	acc
      000E9F 74 80            [12] 4175 	mov	a,#0x80
      000EA1 C0 E0            [24] 4176 	push	acc
      000EA3 12 01 44         [24] 4177 	lcall	_lcd_print
      000EA6 15 81            [12] 4178 	dec	sp
      000EA8 15 81            [12] 4179 	dec	sp
      000EAA 15 81            [12] 4180 	dec	sp
                           000DC4  4181 	C$lab6.c$462$2$182 ==.
                                   4182 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:462: start();
      000EAC 12 12 E1         [24] 4183 	lcall	_start
                           000DC7  4184 	C$lab6.c$463$2$182 ==.
                                   4185 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:463: st =0;
      000EAF 7F 00            [12] 4186 	mov	r7,#0x00
                           000DC9  4187 	C$lab6.c$464$2$182 ==.
                                   4188 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:464: times=0;
      000EB1 90 00 5F         [24] 4189 	mov	dptr,#_Thrust_cal_times_1_181
      000EB4 E4               [12] 4190 	clr	a
      000EB5 F0               [24] 4191 	movx	@dptr,a
      000EB6 A3               [24] 4192 	inc	dptr
      000EB7 F0               [24] 4193 	movx	@dptr,a
                           000DD0  4194 	C$lab6.c$465$5$185 ==.
                                   4195 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:465: while (1)
      000EB8                       4196 00153$:
                           000DD0  4197 	C$lab6.c$467$3$183 ==.
                                   4198 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:467: printf("\r\n %u",RTHRUST_PW);
      000EB8 C0 07            [24] 4199 	push	ar7
      000EBA C0 4E            [24] 4200 	push	_RTHRUST_PW
      000EBC C0 4F            [24] 4201 	push	(_RTHRUST_PW + 1)
      000EBE 74 97            [12] 4202 	mov	a,#___str_12
      000EC0 C0 E0            [24] 4203 	push	acc
      000EC2 74 1C            [12] 4204 	mov	a,#(___str_12 >> 8)
      000EC4 C0 E0            [24] 4205 	push	acc
      000EC6 74 80            [12] 4206 	mov	a,#0x80
      000EC8 C0 E0            [24] 4207 	push	acc
      000ECA 12 15 1F         [24] 4208 	lcall	_printf
      000ECD E5 81            [12] 4209 	mov	a,sp
      000ECF 24 FB            [12] 4210 	add	a,#0xfb
      000ED1 F5 81            [12] 4211 	mov	sp,a
      000ED3 D0 07            [24] 4212 	pop	ar7
                           000DED  4213 	C$lab6.c$468$3$183 ==.
                                   4214 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:468: RTRST_lo_to_hi = 0xFFFF - RTHRUST_PW;
      000ED5 74 FF            [12] 4215 	mov	a,#0xFF
      000ED7 C3               [12] 4216 	clr	c
      000ED8 95 4E            [12] 4217 	subb	a,_RTHRUST_PW
      000EDA F5 52            [12] 4218 	mov	_RTRST_lo_to_hi,a
      000EDC 74 FF            [12] 4219 	mov	a,#0xFF
      000EDE 95 4F            [12] 4220 	subb	a,(_RTHRUST_PW + 1)
      000EE0 F5 53            [12] 4221 	mov	(_RTRST_lo_to_hi + 1),a
                           000DFA  4222 	C$lab6.c$469$3$183 ==.
                                   4223 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:469: LTRST_lo_to_hi = 0xFFFF - LTHRUST_PW;
      000EE2 74 FF            [12] 4224 	mov	a,#0xFF
      000EE4 C3               [12] 4225 	clr	c
      000EE5 95 50            [12] 4226 	subb	a,_LTHRUST_PW
      000EE7 F5 54            [12] 4227 	mov	_LTRST_lo_to_hi,a
      000EE9 74 FF            [12] 4228 	mov	a,#0xFF
      000EEB 95 51            [12] 4229 	subb	a,(_LTHRUST_PW + 1)
      000EED F5 55            [12] 4230 	mov	(_LTRST_lo_to_hi + 1),a
                           000E07  4231 	C$lab6.c$470$3$183 ==.
                                   4232 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:470: PCA0CP2 = RTRST_lo_to_hi;
      000EEF 85 52 EC         [24] 4233 	mov	((_PCA0CP2 >> 0) & 0xFF),_RTRST_lo_to_hi
      000EF2 85 53 FC         [24] 4234 	mov	((_PCA0CP2 >> 8) & 0xFF),(_RTRST_lo_to_hi + 1)
                           000E0D  4235 	C$lab6.c$471$3$183 ==.
                                   4236 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:471: PCA0CP3 = LTRST_lo_to_hi;
      000EF5 85 54 ED         [24] 4237 	mov	((_PCA0CP3 >> 0) & 0xFF),_LTRST_lo_to_hi
      000EF8 85 55 FD         [24] 4238 	mov	((_PCA0CP3 >> 8) & 0xFF),(_LTRST_lo_to_hi + 1)
                           000E13  4239 	C$lab6.c$475$3$183 ==.
                                   4240 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:475: if (times == 0 )
      000EFB 90 00 5F         [24] 4241 	mov	dptr,#_Thrust_cal_times_1_181
      000EFE E0               [24] 4242 	movx	a,@dptr
      000EFF FD               [12] 4243 	mov	r5,a
      000F00 A3               [24] 4244 	inc	dptr
      000F01 E0               [24] 4245 	movx	a,@dptr
      000F02 FE               [12] 4246 	mov	r6,a
      000F03 4D               [12] 4247 	orl	a,r5
      000F04 60 03            [24] 4248 	jz	00231$
      000F06 02 0F D0         [24] 4249 	ljmp	00150$
      000F09                       4250 00231$:
                           000E21  4251 	C$lab6.c$477$4$184 ==.
                                   4252 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:477: if (value ==0)
      000F09 90 00 5D         [24] 4253 	mov	dptr,#_Thrust_cal_value_1_181
      000F0C E0               [24] 4254 	movx	a,@dptr
      000F0D FD               [12] 4255 	mov	r5,a
      000F0E A3               [24] 4256 	inc	dptr
      000F0F E0               [24] 4257 	movx	a,@dptr
      000F10 FE               [12] 4258 	mov	r6,a
      000F11 4D               [12] 4259 	orl	a,r5
      000F12 70 2D            [24] 4260 	jnz	00110$
                           000E2C  4261 	C$lab6.c$479$5$185 ==.
                                   4262 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:479: lcd_clear();
      000F14 C0 07            [24] 4263 	push	ar7
      000F16 12 01 C9         [24] 4264 	lcall	_lcd_clear
                           000E31  4265 	C$lab6.c$480$5$185 ==.
                                   4266 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:480: lcd_print("Now calibrating Min_PW");
      000F19 74 4A            [12] 4267 	mov	a,#___str_20
      000F1B C0 E0            [24] 4268 	push	acc
      000F1D 74 1D            [12] 4269 	mov	a,#(___str_20 >> 8)
      000F1F C0 E0            [24] 4270 	push	acc
      000F21 74 80            [12] 4271 	mov	a,#0x80
      000F23 C0 E0            [24] 4272 	push	acc
      000F25 12 01 44         [24] 4273 	lcall	_lcd_print
      000F28 15 81            [12] 4274 	dec	sp
      000F2A 15 81            [12] 4275 	dec	sp
      000F2C 15 81            [12] 4276 	dec	sp
      000F2E D0 07            [24] 4277 	pop	ar7
                           000E48  4278 	C$lab6.c$481$5$185 ==.
                                   4279 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:481: if (st ==0)
      000F30 EF               [12] 4280 	mov	a,r7
      000F31 70 0C            [24] 4281 	jnz	00108$
                           000E4B  4282 	C$lab6.c$483$6$186 ==.
                                   4283 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:483: RTHRUST_PW = PW_MIN_THRUST;
      000F33 85 34 4E         [24] 4284 	mov	_RTHRUST_PW,_PW_MIN_THRUST
      000F36 85 35 4F         [24] 4285 	mov	(_RTHRUST_PW + 1),(_PW_MIN_THRUST + 1)
                           000E51  4286 	C$lab6.c$484$6$186 ==.
                                   4287 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:484: LTHRUST_PW = PW_MIN_THRUST;
      000F39 85 34 50         [24] 4288 	mov	_LTHRUST_PW,_PW_MIN_THRUST
      000F3C 85 35 51         [24] 4289 	mov	(_LTHRUST_PW + 1),(_PW_MIN_THRUST + 1)
      000F3F                       4290 00108$:
                           000E57  4291 	C$lab6.c$486$5$185 ==.
                                   4292 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:486: st =1;
      000F3F 7F 01            [12] 4293 	mov	r7,#0x01
      000F41                       4294 00110$:
                           000E59  4295 	C$lab6.c$488$4$184 ==.
                                   4296 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:488: value = kpd_input(1);
      000F41 75 82 01         [24] 4297 	mov	dpl,#0x01
      000F44 C0 07            [24] 4298 	push	ar7
      000F46 12 02 81         [24] 4299 	lcall	_kpd_input
      000F49 AD 82            [24] 4300 	mov	r5,dpl
      000F4B AE 83            [24] 4301 	mov	r6,dph
      000F4D D0 07            [24] 4302 	pop	ar7
      000F4F 90 00 5D         [24] 4303 	mov	dptr,#_Thrust_cal_value_1_181
      000F52 ED               [12] 4304 	mov	a,r5
      000F53 F0               [24] 4305 	movx	@dptr,a
      000F54 EE               [12] 4306 	mov	a,r6
      000F55 A3               [24] 4307 	inc	dptr
      000F56 F0               [24] 4308 	movx	@dptr,a
                           000E6F  4309 	C$lab6.c$489$4$184 ==.
                                   4310 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:489: if (value == 1)
      000F57 BD 01 1D         [24] 4311 	cjne	r5,#0x01,00117$
      000F5A BE 00 1A         [24] 4312 	cjne	r6,#0x00,00117$
                           000E75  4313 	C$lab6.c$491$5$187 ==.
                                   4314 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:491: RTHRUST_PW -= 30;
      000F5D E5 4E            [12] 4315 	mov	a,_RTHRUST_PW
      000F5F 24 E2            [12] 4316 	add	a,#0xE2
      000F61 F5 4E            [12] 4317 	mov	_RTHRUST_PW,a
      000F63 E5 4F            [12] 4318 	mov	a,(_RTHRUST_PW + 1)
      000F65 34 FF            [12] 4319 	addc	a,#0xFF
      000F67 F5 4F            [12] 4320 	mov	(_RTHRUST_PW + 1),a
                           000E81  4321 	C$lab6.c$492$5$187 ==.
                                   4322 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:492: LTHRUST_PW += 30;
      000F69 74 1E            [12] 4323 	mov	a,#0x1E
      000F6B 25 50            [12] 4324 	add	a,_LTHRUST_PW
      000F6D F5 50            [12] 4325 	mov	_LTHRUST_PW,a
      000F6F E4               [12] 4326 	clr	a
      000F70 35 51            [12] 4327 	addc	a,(_LTHRUST_PW + 1)
      000F72 F5 51            [12] 4328 	mov	(_LTHRUST_PW + 1),a
      000F74 02 0E B8         [24] 4329 	ljmp	00153$
      000F77                       4330 00117$:
                           000E8F  4331 	C$lab6.c$494$4$184 ==.
                                   4332 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:494: else if (value==2)
      000F77 90 00 5D         [24] 4333 	mov	dptr,#_Thrust_cal_value_1_181
      000F7A E0               [24] 4334 	movx	a,@dptr
      000F7B FD               [12] 4335 	mov	r5,a
      000F7C A3               [24] 4336 	inc	dptr
      000F7D E0               [24] 4337 	movx	a,@dptr
      000F7E FE               [12] 4338 	mov	r6,a
      000F7F BD 02 1D         [24] 4339 	cjne	r5,#0x02,00114$
      000F82 BE 00 1A         [24] 4340 	cjne	r6,#0x00,00114$
                           000E9D  4341 	C$lab6.c$496$5$188 ==.
                                   4342 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:496: RTHRUST_PW += 30;
      000F85 74 1E            [12] 4343 	mov	a,#0x1E
      000F87 25 4E            [12] 4344 	add	a,_RTHRUST_PW
      000F89 F5 4E            [12] 4345 	mov	_RTHRUST_PW,a
      000F8B E4               [12] 4346 	clr	a
      000F8C 35 4F            [12] 4347 	addc	a,(_RTHRUST_PW + 1)
      000F8E F5 4F            [12] 4348 	mov	(_RTHRUST_PW + 1),a
                           000EA8  4349 	C$lab6.c$497$5$188 ==.
                                   4350 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:497: LTHRUST_PW -= 30;
      000F90 E5 50            [12] 4351 	mov	a,_LTHRUST_PW
      000F92 24 E2            [12] 4352 	add	a,#0xE2
      000F94 F5 50            [12] 4353 	mov	_LTHRUST_PW,a
      000F96 E5 51            [12] 4354 	mov	a,(_LTHRUST_PW + 1)
      000F98 34 FF            [12] 4355 	addc	a,#0xFF
      000F9A F5 51            [12] 4356 	mov	(_LTHRUST_PW + 1),a
      000F9C 02 0E B8         [24] 4357 	ljmp	00153$
      000F9F                       4358 00114$:
                           000EB7  4359 	C$lab6.c$499$4$184 ==.
                                   4360 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:499: else if (value == 3)
      000F9F 90 00 5D         [24] 4361 	mov	dptr,#_Thrust_cal_value_1_181
      000FA2 E0               [24] 4362 	movx	a,@dptr
      000FA3 FD               [12] 4363 	mov	r5,a
      000FA4 A3               [24] 4364 	inc	dptr
      000FA5 E0               [24] 4365 	movx	a,@dptr
      000FA6 FE               [12] 4366 	mov	r6,a
      000FA7 BD 03 05         [24] 4367 	cjne	r5,#0x03,00238$
      000FAA BE 00 02         [24] 4368 	cjne	r6,#0x00,00238$
      000FAD 80 03            [24] 4369 	sjmp	00239$
      000FAF                       4370 00238$:
      000FAF 02 0E B8         [24] 4371 	ljmp	00153$
      000FB2                       4372 00239$:
                           000ECA  4373 	C$lab6.c$501$5$189 ==.
                                   4374 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:501: times++;
      000FB2 90 00 5F         [24] 4375 	mov	dptr,#_Thrust_cal_times_1_181
      000FB5 E0               [24] 4376 	movx	a,@dptr
      000FB6 24 01            [12] 4377 	add	a,#0x01
      000FB8 F0               [24] 4378 	movx	@dptr,a
      000FB9 A3               [24] 4379 	inc	dptr
      000FBA E0               [24] 4380 	movx	a,@dptr
      000FBB 34 00            [12] 4381 	addc	a,#0x00
      000FBD F0               [24] 4382 	movx	@dptr,a
                           000ED6  4383 	C$lab6.c$502$5$189 ==.
                                   4384 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:502: value =0;
      000FBE 90 00 5D         [24] 4385 	mov	dptr,#_Thrust_cal_value_1_181
      000FC1 E4               [12] 4386 	clr	a
      000FC2 F0               [24] 4387 	movx	@dptr,a
      000FC3 A3               [24] 4388 	inc	dptr
      000FC4 F0               [24] 4389 	movx	@dptr,a
                           000EDD  4390 	C$lab6.c$503$5$189 ==.
                                   4391 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:503: st=0;
      000FC5 7F 00            [12] 4392 	mov	r7,#0x00
                           000EDF  4393 	C$lab6.c$504$5$189 ==.
                                   4394 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:504: PW_MIN_THRUST = RTHRUST_PW;
      000FC7 85 4E 34         [24] 4395 	mov	_PW_MIN_THRUST,_RTHRUST_PW
      000FCA 85 4F 35         [24] 4396 	mov	(_PW_MIN_THRUST + 1),(_RTHRUST_PW + 1)
      000FCD 02 0E B8         [24] 4397 	ljmp	00153$
      000FD0                       4398 00150$:
                           000EE8  4399 	C$lab6.c$508$3$183 ==.
                                   4400 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:508: else if (times ==1)
      000FD0 90 00 5F         [24] 4401 	mov	dptr,#_Thrust_cal_times_1_181
      000FD3 E0               [24] 4402 	movx	a,@dptr
      000FD4 FD               [12] 4403 	mov	r5,a
      000FD5 A3               [24] 4404 	inc	dptr
      000FD6 E0               [24] 4405 	movx	a,@dptr
      000FD7 FE               [12] 4406 	mov	r6,a
      000FD8 BD 01 05         [24] 4407 	cjne	r5,#0x01,00240$
      000FDB BE 00 02         [24] 4408 	cjne	r6,#0x00,00240$
      000FDE 80 03            [24] 4409 	sjmp	00241$
      000FE0                       4410 00240$:
      000FE0 02 10 AA         [24] 4411 	ljmp	00147$
      000FE3                       4412 00241$:
                           000EFB  4413 	C$lab6.c$510$4$190 ==.
                                   4414 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:510: if (value ==0)
      000FE3 90 00 5D         [24] 4415 	mov	dptr,#_Thrust_cal_value_1_181
      000FE6 E0               [24] 4416 	movx	a,@dptr
      000FE7 FD               [12] 4417 	mov	r5,a
      000FE8 A3               [24] 4418 	inc	dptr
      000FE9 E0               [24] 4419 	movx	a,@dptr
      000FEA FE               [12] 4420 	mov	r6,a
      000FEB 4D               [12] 4421 	orl	a,r5
      000FEC 70 2D            [24] 4422 	jnz	00122$
                           000F06  4423 	C$lab6.c$512$5$191 ==.
                                   4424 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:512: lcd_clear();
      000FEE C0 07            [24] 4425 	push	ar7
      000FF0 12 01 C9         [24] 4426 	lcall	_lcd_clear
                           000F0B  4427 	C$lab6.c$513$5$191 ==.
                                   4428 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:513: lcd_print("Now calibrating Min_PW");
      000FF3 74 4A            [12] 4429 	mov	a,#___str_20
      000FF5 C0 E0            [24] 4430 	push	acc
      000FF7 74 1D            [12] 4431 	mov	a,#(___str_20 >> 8)
      000FF9 C0 E0            [24] 4432 	push	acc
      000FFB 74 80            [12] 4433 	mov	a,#0x80
      000FFD C0 E0            [24] 4434 	push	acc
      000FFF 12 01 44         [24] 4435 	lcall	_lcd_print
      001002 15 81            [12] 4436 	dec	sp
      001004 15 81            [12] 4437 	dec	sp
      001006 15 81            [12] 4438 	dec	sp
      001008 D0 07            [24] 4439 	pop	ar7
                           000F22  4440 	C$lab6.c$514$5$191 ==.
                                   4441 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:514: if (st ==0)
      00100A EF               [12] 4442 	mov	a,r7
      00100B 70 0C            [24] 4443 	jnz	00120$
                           000F25  4444 	C$lab6.c$516$6$192 ==.
                                   4445 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:516: RTHRUST_PW = PW_NUET_THRUST;
      00100D 85 36 4E         [24] 4446 	mov	_RTHRUST_PW,_PW_NUET_THRUST
      001010 85 37 4F         [24] 4447 	mov	(_RTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
                           000F2B  4448 	C$lab6.c$517$6$192 ==.
                                   4449 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:517: LTHRUST_PW = PW_NUET_THRUST;
      001013 85 36 50         [24] 4450 	mov	_LTHRUST_PW,_PW_NUET_THRUST
      001016 85 37 51         [24] 4451 	mov	(_LTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
      001019                       4452 00120$:
                           000F31  4453 	C$lab6.c$519$5$191 ==.
                                   4454 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:519: st =1;
      001019 7F 01            [12] 4455 	mov	r7,#0x01
      00101B                       4456 00122$:
                           000F33  4457 	C$lab6.c$521$4$190 ==.
                                   4458 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:521: value = kpd_input(1);
      00101B 75 82 01         [24] 4459 	mov	dpl,#0x01
      00101E C0 07            [24] 4460 	push	ar7
      001020 12 02 81         [24] 4461 	lcall	_kpd_input
      001023 AD 82            [24] 4462 	mov	r5,dpl
      001025 AE 83            [24] 4463 	mov	r6,dph
      001027 D0 07            [24] 4464 	pop	ar7
      001029 90 00 5D         [24] 4465 	mov	dptr,#_Thrust_cal_value_1_181
      00102C ED               [12] 4466 	mov	a,r5
      00102D F0               [24] 4467 	movx	@dptr,a
      00102E EE               [12] 4468 	mov	a,r6
      00102F A3               [24] 4469 	inc	dptr
      001030 F0               [24] 4470 	movx	@dptr,a
                           000F49  4471 	C$lab6.c$522$4$190 ==.
                                   4472 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:522: if (value == 1)
      001031 BD 01 1D         [24] 4473 	cjne	r5,#0x01,00129$
      001034 BE 00 1A         [24] 4474 	cjne	r6,#0x00,00129$
                           000F4F  4475 	C$lab6.c$524$5$193 ==.
                                   4476 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:524: RTHRUST_PW -= 30;
      001037 E5 4E            [12] 4477 	mov	a,_RTHRUST_PW
      001039 24 E2            [12] 4478 	add	a,#0xE2
      00103B F5 4E            [12] 4479 	mov	_RTHRUST_PW,a
      00103D E5 4F            [12] 4480 	mov	a,(_RTHRUST_PW + 1)
      00103F 34 FF            [12] 4481 	addc	a,#0xFF
      001041 F5 4F            [12] 4482 	mov	(_RTHRUST_PW + 1),a
                           000F5B  4483 	C$lab6.c$525$5$193 ==.
                                   4484 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:525: LTHRUST_PW += 30;
      001043 74 1E            [12] 4485 	mov	a,#0x1E
      001045 25 50            [12] 4486 	add	a,_LTHRUST_PW
      001047 F5 50            [12] 4487 	mov	_LTHRUST_PW,a
      001049 E4               [12] 4488 	clr	a
      00104A 35 51            [12] 4489 	addc	a,(_LTHRUST_PW + 1)
      00104C F5 51            [12] 4490 	mov	(_LTHRUST_PW + 1),a
      00104E 02 0E B8         [24] 4491 	ljmp	00153$
      001051                       4492 00129$:
                           000F69  4493 	C$lab6.c$527$4$190 ==.
                                   4494 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:527: else if (value==2)
      001051 90 00 5D         [24] 4495 	mov	dptr,#_Thrust_cal_value_1_181
      001054 E0               [24] 4496 	movx	a,@dptr
      001055 FD               [12] 4497 	mov	r5,a
      001056 A3               [24] 4498 	inc	dptr
      001057 E0               [24] 4499 	movx	a,@dptr
      001058 FE               [12] 4500 	mov	r6,a
      001059 BD 02 1D         [24] 4501 	cjne	r5,#0x02,00126$
      00105C BE 00 1A         [24] 4502 	cjne	r6,#0x00,00126$
                           000F77  4503 	C$lab6.c$529$5$194 ==.
                                   4504 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:529: RTHRUST_PW += 30;
      00105F 74 1E            [12] 4505 	mov	a,#0x1E
      001061 25 4E            [12] 4506 	add	a,_RTHRUST_PW
      001063 F5 4E            [12] 4507 	mov	_RTHRUST_PW,a
      001065 E4               [12] 4508 	clr	a
      001066 35 4F            [12] 4509 	addc	a,(_RTHRUST_PW + 1)
      001068 F5 4F            [12] 4510 	mov	(_RTHRUST_PW + 1),a
                           000F82  4511 	C$lab6.c$530$5$194 ==.
                                   4512 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:530: LTHRUST_PW -= 30;
      00106A E5 50            [12] 4513 	mov	a,_LTHRUST_PW
      00106C 24 E2            [12] 4514 	add	a,#0xE2
      00106E F5 50            [12] 4515 	mov	_LTHRUST_PW,a
      001070 E5 51            [12] 4516 	mov	a,(_LTHRUST_PW + 1)
      001072 34 FF            [12] 4517 	addc	a,#0xFF
      001074 F5 51            [12] 4518 	mov	(_LTHRUST_PW + 1),a
      001076 02 0E B8         [24] 4519 	ljmp	00153$
      001079                       4520 00126$:
                           000F91  4521 	C$lab6.c$532$4$190 ==.
                                   4522 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:532: else if (value == 3)
      001079 90 00 5D         [24] 4523 	mov	dptr,#_Thrust_cal_value_1_181
      00107C E0               [24] 4524 	movx	a,@dptr
      00107D FD               [12] 4525 	mov	r5,a
      00107E A3               [24] 4526 	inc	dptr
      00107F E0               [24] 4527 	movx	a,@dptr
      001080 FE               [12] 4528 	mov	r6,a
      001081 BD 03 05         [24] 4529 	cjne	r5,#0x03,00248$
      001084 BE 00 02         [24] 4530 	cjne	r6,#0x00,00248$
      001087 80 03            [24] 4531 	sjmp	00249$
      001089                       4532 00248$:
      001089 02 0E B8         [24] 4533 	ljmp	00153$
      00108C                       4534 00249$:
                           000FA4  4535 	C$lab6.c$534$5$195 ==.
                                   4536 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:534: times++;
      00108C 90 00 5F         [24] 4537 	mov	dptr,#_Thrust_cal_times_1_181
      00108F E0               [24] 4538 	movx	a,@dptr
      001090 24 01            [12] 4539 	add	a,#0x01
      001092 F0               [24] 4540 	movx	@dptr,a
      001093 A3               [24] 4541 	inc	dptr
      001094 E0               [24] 4542 	movx	a,@dptr
      001095 34 00            [12] 4543 	addc	a,#0x00
      001097 F0               [24] 4544 	movx	@dptr,a
                           000FB0  4545 	C$lab6.c$535$5$195 ==.
                                   4546 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:535: value =0;
      001098 90 00 5D         [24] 4547 	mov	dptr,#_Thrust_cal_value_1_181
      00109B E4               [12] 4548 	clr	a
      00109C F0               [24] 4549 	movx	@dptr,a
      00109D A3               [24] 4550 	inc	dptr
      00109E F0               [24] 4551 	movx	@dptr,a
                           000FB7  4552 	C$lab6.c$536$5$195 ==.
                                   4553 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:536: st=0;
      00109F 7F 00            [12] 4554 	mov	r7,#0x00
                           000FB9  4555 	C$lab6.c$537$5$195 ==.
                                   4556 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:537: PW_NUET_THRUST = RTHRUST_PW;
      0010A1 85 4E 36         [24] 4557 	mov	_PW_NUET_THRUST,_RTHRUST_PW
      0010A4 85 4F 37         [24] 4558 	mov	(_PW_NUET_THRUST + 1),(_RTHRUST_PW + 1)
      0010A7 02 0E B8         [24] 4559 	ljmp	00153$
      0010AA                       4560 00147$:
                           000FC2  4561 	C$lab6.c$540$3$183 ==.
                                   4562 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:540: else if(times == 2)
      0010AA 90 00 5F         [24] 4563 	mov	dptr,#_Thrust_cal_times_1_181
      0010AD E0               [24] 4564 	movx	a,@dptr
      0010AE FD               [12] 4565 	mov	r5,a
      0010AF A3               [24] 4566 	inc	dptr
      0010B0 E0               [24] 4567 	movx	a,@dptr
      0010B1 FE               [12] 4568 	mov	r6,a
      0010B2 BD 02 05         [24] 4569 	cjne	r5,#0x02,00250$
      0010B5 BE 00 02         [24] 4570 	cjne	r6,#0x00,00250$
      0010B8 80 03            [24] 4571 	sjmp	00251$
      0010BA                       4572 00250$:
      0010BA 02 11 62         [24] 4573 	ljmp	00144$
      0010BD                       4574 00251$:
                           000FD5  4575 	C$lab6.c$542$4$196 ==.
                                   4576 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:542: if (value==0)
      0010BD 90 00 5D         [24] 4577 	mov	dptr,#_Thrust_cal_value_1_181
      0010C0 E0               [24] 4578 	movx	a,@dptr
      0010C1 FD               [12] 4579 	mov	r5,a
      0010C2 A3               [24] 4580 	inc	dptr
      0010C3 E0               [24] 4581 	movx	a,@dptr
      0010C4 FE               [12] 4582 	mov	r6,a
      0010C5 4D               [12] 4583 	orl	a,r5
      0010C6 70 2B            [24] 4584 	jnz	00134$
                           000FE0  4585 	C$lab6.c$544$5$197 ==.
                                   4586 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:544: lcd_clear();
      0010C8 C0 07            [24] 4587 	push	ar7
      0010CA 12 01 C9         [24] 4588 	lcall	_lcd_clear
                           000FE5  4589 	C$lab6.c$545$5$197 ==.
                                   4590 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:545: lcd_print("Now calibrating Max_PW");
      0010CD 74 CC            [12] 4591 	mov	a,#___str_15
      0010CF C0 E0            [24] 4592 	push	acc
      0010D1 74 1C            [12] 4593 	mov	a,#(___str_15 >> 8)
      0010D3 C0 E0            [24] 4594 	push	acc
      0010D5 74 80            [12] 4595 	mov	a,#0x80
      0010D7 C0 E0            [24] 4596 	push	acc
      0010D9 12 01 44         [24] 4597 	lcall	_lcd_print
      0010DC 15 81            [12] 4598 	dec	sp
      0010DE 15 81            [12] 4599 	dec	sp
      0010E0 15 81            [12] 4600 	dec	sp
      0010E2 D0 07            [24] 4601 	pop	ar7
                           000FFC  4602 	C$lab6.c$546$5$197 ==.
                                   4603 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:546: if (st == 0)
      0010E4 EF               [12] 4604 	mov	a,r7
      0010E5 70 0C            [24] 4605 	jnz	00134$
                           000FFF  4606 	C$lab6.c$548$6$198 ==.
                                   4607 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:548: RTHRUST_PW = PW_MAX_THRUST;
      0010E7 85 38 4E         [24] 4608 	mov	_RTHRUST_PW,_PW_MAX_THRUST
      0010EA 85 39 4F         [24] 4609 	mov	(_RTHRUST_PW + 1),(_PW_MAX_THRUST + 1)
                           001005  4610 	C$lab6.c$549$6$198 ==.
                                   4611 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:549: LTHRUST_PW = PW_MAX_THRUST;
      0010ED 85 38 50         [24] 4612 	mov	_LTHRUST_PW,_PW_MAX_THRUST
      0010F0 85 39 51         [24] 4613 	mov	(_LTHRUST_PW + 1),(_PW_MAX_THRUST + 1)
      0010F3                       4614 00134$:
                           00100B  4615 	C$lab6.c$553$4$196 ==.
                                   4616 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:553: value = kpd_input(1);
      0010F3 75 82 01         [24] 4617 	mov	dpl,#0x01
      0010F6 C0 07            [24] 4618 	push	ar7
      0010F8 12 02 81         [24] 4619 	lcall	_kpd_input
      0010FB AD 82            [24] 4620 	mov	r5,dpl
      0010FD AE 83            [24] 4621 	mov	r6,dph
      0010FF D0 07            [24] 4622 	pop	ar7
      001101 90 00 5D         [24] 4623 	mov	dptr,#_Thrust_cal_value_1_181
      001104 ED               [12] 4624 	mov	a,r5
      001105 F0               [24] 4625 	movx	@dptr,a
      001106 EE               [12] 4626 	mov	a,r6
      001107 A3               [24] 4627 	inc	dptr
      001108 F0               [24] 4628 	movx	@dptr,a
                           001021  4629 	C$lab6.c$554$4$196 ==.
                                   4630 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:554: if (value == 1)
      001109 BD 01 12         [24] 4631 	cjne	r5,#0x01,00141$
      00110C BE 00 0F         [24] 4632 	cjne	r6,#0x00,00141$
                           001027  4633 	C$lab6.c$556$5$199 ==.
                                   4634 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:556: RTHRUST_PW -= 30;
      00110F E5 4E            [12] 4635 	mov	a,_RTHRUST_PW
      001111 24 E2            [12] 4636 	add	a,#0xE2
      001113 F5 4E            [12] 4637 	mov	_RTHRUST_PW,a
      001115 E5 4F            [12] 4638 	mov	a,(_RTHRUST_PW + 1)
      001117 34 FF            [12] 4639 	addc	a,#0xFF
      001119 F5 4F            [12] 4640 	mov	(_RTHRUST_PW + 1),a
      00111B 02 0E B8         [24] 4641 	ljmp	00153$
      00111E                       4642 00141$:
                           001036  4643 	C$lab6.c$558$4$196 ==.
                                   4644 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:558: else if (value==2)
      00111E 90 00 5D         [24] 4645 	mov	dptr,#_Thrust_cal_value_1_181
      001121 E0               [24] 4646 	movx	a,@dptr
      001122 FD               [12] 4647 	mov	r5,a
      001123 A3               [24] 4648 	inc	dptr
      001124 E0               [24] 4649 	movx	a,@dptr
      001125 FE               [12] 4650 	mov	r6,a
      001126 BD 02 11         [24] 4651 	cjne	r5,#0x02,00138$
      001129 BE 00 0E         [24] 4652 	cjne	r6,#0x00,00138$
                           001044  4653 	C$lab6.c$560$5$200 ==.
                                   4654 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:560: RTHRUST_PW += 30;
      00112C 74 1E            [12] 4655 	mov	a,#0x1E
      00112E 25 4E            [12] 4656 	add	a,_RTHRUST_PW
      001130 F5 4E            [12] 4657 	mov	_RTHRUST_PW,a
      001132 E4               [12] 4658 	clr	a
      001133 35 4F            [12] 4659 	addc	a,(_RTHRUST_PW + 1)
      001135 F5 4F            [12] 4660 	mov	(_RTHRUST_PW + 1),a
      001137 02 0E B8         [24] 4661 	ljmp	00153$
      00113A                       4662 00138$:
                           001052  4663 	C$lab6.c$562$4$196 ==.
                                   4664 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:562: else if (value == 3)
      00113A 90 00 5D         [24] 4665 	mov	dptr,#_Thrust_cal_value_1_181
      00113D E0               [24] 4666 	movx	a,@dptr
      00113E FD               [12] 4667 	mov	r5,a
      00113F A3               [24] 4668 	inc	dptr
      001140 E0               [24] 4669 	movx	a,@dptr
      001141 FE               [12] 4670 	mov	r6,a
      001142 BD 03 05         [24] 4671 	cjne	r5,#0x03,00258$
      001145 BE 00 02         [24] 4672 	cjne	r6,#0x00,00258$
      001148 80 03            [24] 4673 	sjmp	00259$
      00114A                       4674 00258$:
      00114A 02 0E B8         [24] 4675 	ljmp	00153$
      00114D                       4676 00259$:
                           001065  4677 	C$lab6.c$564$5$201 ==.
                                   4678 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:564: PW_MAX_THRUST = RTHRUST_PW;
      00114D 85 4E 38         [24] 4679 	mov	_PW_MAX_THRUST,_RTHRUST_PW
      001150 85 4F 39         [24] 4680 	mov	(_PW_MAX_THRUST + 1),(_RTHRUST_PW + 1)
                           00106B  4681 	C$lab6.c$565$5$201 ==.
                                   4682 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:565: LTHRUST_PW =PW_NUET_THRUST;
      001153 85 36 50         [24] 4683 	mov	_LTHRUST_PW,_PW_NUET_THRUST
      001156 85 37 51         [24] 4684 	mov	(_LTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
                           001071  4685 	C$lab6.c$566$5$201 ==.
                                   4686 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:566: RTHRUST_PW =PW_NUET_THRUST;
      001159 85 36 4E         [24] 4687 	mov	_RTHRUST_PW,_PW_NUET_THRUST
      00115C 85 37 4F         [24] 4688 	mov	(_RTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
      00115F 02 0E B8         [24] 4689 	ljmp	00153$
      001162                       4690 00144$:
                           00107A  4691 	C$lab6.c$569$3$183 ==.
                                   4692 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:569: else return;
                           00107A  4693 	C$lab6.c$572$1$181 ==.
                           00107A  4694 	XG$Thrust_cal$0$0 ==.
      001162 22               [24] 4695 	ret
                                   4696 ;------------------------------------------------------------
                                   4697 ;Allocation info for local variables in function 'Steering_Servo'
                                   4698 ;------------------------------------------------------------
                                   4699 ;direction                 Allocated to registers r6 r7 
                                   4700 ;------------------------------------------------------------
                           00107B  4701 	G$Steering_Servo$0$0 ==.
                           00107B  4702 	C$lab6.c$575$1$181 ==.
                                   4703 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:575: void Steering_Servo(unsigned int direction)
                                   4704 ;	-----------------------------------------
                                   4705 ;	 function Steering_Servo
                                   4706 ;	-----------------------------------------
      001163                       4707 _Steering_Servo:
      001163 AE 82            [24] 4708 	mov	r6,dpl
      001165 AF 83            [24] 4709 	mov	r7,dph
                           00107F  4710 	C$lab6.c$581$1$203 ==.
                                   4711 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:581: if (direction > 3500 || direction < 100)
      001167 C3               [12] 4712 	clr	c
      001168 74 AC            [12] 4713 	mov	a,#0xAC
      00116A 9E               [12] 4714 	subb	a,r6
      00116B 74 0D            [12] 4715 	mov	a,#0x0D
      00116D 9F               [12] 4716 	subb	a,r7
      00116E 40 08            [24] 4717 	jc	00104$
      001170 EE               [12] 4718 	mov	a,r6
      001171 94 64            [12] 4719 	subb	a,#0x64
      001173 EF               [12] 4720 	mov	a,r7
      001174 94 00            [12] 4721 	subb	a,#0x00
      001176 50 09            [24] 4722 	jnc	00105$
      001178                       4723 00104$:
                           001090  4724 	C$lab6.c$583$2$204 ==.
                                   4725 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:583: error =0;
      001178 90 00 63         [24] 4726 	mov	dptr,#_error
      00117B E4               [12] 4727 	clr	a
      00117C F0               [24] 4728 	movx	@dptr,a
      00117D A3               [24] 4729 	inc	dptr
      00117E F0               [24] 4730 	movx	@dptr,a
      00117F 80 33            [24] 4731 	sjmp	00106$
      001181                       4732 00105$:
                           001099  4733 	C$lab6.c$585$1$203 ==.
                                   4734 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:585: else if (direction > 1800)
      001181 C3               [12] 4735 	clr	c
      001182 74 08            [12] 4736 	mov	a,#0x08
      001184 9E               [12] 4737 	subb	a,r6
      001185 74 07            [12] 4738 	mov	a,#0x07
      001187 9F               [12] 4739 	subb	a,r7
      001188 50 13            [24] 4740 	jnc	00102$
                           0010A2  4741 	C$lab6.c$587$2$205 ==.
                                   4742 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:587: error = (3600 - (int) direction);
      00118A 8E 04            [24] 4743 	mov	ar4,r6
      00118C 8F 05            [24] 4744 	mov	ar5,r7
      00118E 90 00 63         [24] 4745 	mov	dptr,#_error
      001191 74 10            [12] 4746 	mov	a,#0x10
      001193 C3               [12] 4747 	clr	c
      001194 9C               [12] 4748 	subb	a,r4
      001195 F0               [24] 4749 	movx	@dptr,a
      001196 74 0E            [12] 4750 	mov	a,#0x0E
      001198 9D               [12] 4751 	subb	a,r5
      001199 A3               [24] 4752 	inc	dptr
      00119A F0               [24] 4753 	movx	@dptr,a
      00119B 80 17            [24] 4754 	sjmp	00106$
      00119D                       4755 00102$:
                           0010B5  4756 	C$lab6.c$591$1$203 ==.
                                   4757 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:591: error = -1* direction;
      00119D 8E 11            [24] 4758 	mov	__mulint_PARM_2,r6
      00119F 8F 12            [24] 4759 	mov	(__mulint_PARM_2 + 1),r7
      0011A1 90 FF FF         [24] 4760 	mov	dptr,#0xFFFF
      0011A4 12 13 96         [24] 4761 	lcall	__mulint
      0011A7 E5 82            [12] 4762 	mov	a,dpl
      0011A9 85 83 F0         [24] 4763 	mov	b,dph
      0011AC 90 00 63         [24] 4764 	mov	dptr,#_error
      0011AF F0               [24] 4765 	movx	@dptr,a
      0011B0 E5 F0            [12] 4766 	mov	a,b
      0011B2 A3               [24] 4767 	inc	dptr
      0011B3 F0               [24] 4768 	movx	@dptr,a
      0011B4                       4769 00106$:
                           0010CC  4770 	C$lab6.c$594$1$203 ==.
                                   4771 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:594: RUDDER_PW  = PW_CENTER_RUDDER + (int) (((int) kp* (int) error) - (int) kd * ((int)old_error -(int) error));
      0011B4 90 00 63         [24] 4772 	mov	dptr,#_error
      0011B7 E0               [24] 4773 	movx	a,@dptr
      0011B8 FE               [12] 4774 	mov	r6,a
      0011B9 A3               [24] 4775 	inc	dptr
      0011BA E0               [24] 4776 	movx	a,@dptr
      0011BB FF               [12] 4777 	mov	r7,a
      0011BC 8E 11            [24] 4778 	mov	__mulint_PARM_2,r6
      0011BE 8F 12            [24] 4779 	mov	(__mulint_PARM_2 + 1),r7
      0011C0 85 5A 82         [24] 4780 	mov	dpl,_kp
      0011C3 85 5B 83         [24] 4781 	mov	dph,(_kp + 1)
      0011C6 C0 07            [24] 4782 	push	ar7
      0011C8 C0 06            [24] 4783 	push	ar6
      0011CA 12 13 96         [24] 4784 	lcall	__mulint
      0011CD AC 82            [24] 4785 	mov	r4,dpl
      0011CF AD 83            [24] 4786 	mov	r5,dph
      0011D1 D0 06            [24] 4787 	pop	ar6
      0011D3 D0 07            [24] 4788 	pop	ar7
      0011D5 90 00 65         [24] 4789 	mov	dptr,#_old_error
      0011D8 E0               [24] 4790 	movx	a,@dptr
      0011D9 FA               [12] 4791 	mov	r2,a
      0011DA A3               [24] 4792 	inc	dptr
      0011DB E0               [24] 4793 	movx	a,@dptr
      0011DC FB               [12] 4794 	mov	r3,a
      0011DD EA               [12] 4795 	mov	a,r2
      0011DE C3               [12] 4796 	clr	c
      0011DF 9E               [12] 4797 	subb	a,r6
      0011E0 F5 11            [12] 4798 	mov	__mulint_PARM_2,a
      0011E2 EB               [12] 4799 	mov	a,r3
      0011E3 9F               [12] 4800 	subb	a,r7
      0011E4 F5 12            [12] 4801 	mov	(__mulint_PARM_2 + 1),a
      0011E6 85 5C 82         [24] 4802 	mov	dpl,_kd
      0011E9 85 5D 83         [24] 4803 	mov	dph,(_kd + 1)
      0011EC C0 07            [24] 4804 	push	ar7
      0011EE C0 06            [24] 4805 	push	ar6
      0011F0 C0 05            [24] 4806 	push	ar5
      0011F2 C0 04            [24] 4807 	push	ar4
      0011F4 12 13 96         [24] 4808 	lcall	__mulint
      0011F7 AA 82            [24] 4809 	mov	r2,dpl
      0011F9 AB 83            [24] 4810 	mov	r3,dph
      0011FB D0 04            [24] 4811 	pop	ar4
      0011FD D0 05            [24] 4812 	pop	ar5
      0011FF D0 06            [24] 4813 	pop	ar6
      001201 D0 07            [24] 4814 	pop	ar7
      001203 EC               [12] 4815 	mov	a,r4
      001204 C3               [12] 4816 	clr	c
      001205 9A               [12] 4817 	subb	a,r2
      001206 FC               [12] 4818 	mov	r4,a
      001207 ED               [12] 4819 	mov	a,r5
      001208 9B               [12] 4820 	subb	a,r3
      001209 FD               [12] 4821 	mov	r5,a
      00120A 8C 02            [24] 4822 	mov	ar2,r4
      00120C 8D 03            [24] 4823 	mov	ar3,r5
      00120E EA               [12] 4824 	mov	a,r2
      00120F 25 3C            [12] 4825 	add	a,_PW_CENTER_RUDDER
      001211 F5 46            [12] 4826 	mov	_RUDDER_PW,a
      001213 EB               [12] 4827 	mov	a,r3
      001214 35 3D            [12] 4828 	addc	a,(_PW_CENTER_RUDDER + 1)
      001216 F5 47            [12] 4829 	mov	(_RUDDER_PW + 1),a
                           001130  4830 	C$lab6.c$596$1$203 ==.
                                   4831 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:596: RTHRUST_PW = PW_NUET_THRUST   + (int) -1* (((int) kp* (int) error) - (int) kd * ((int)old_error -(int) error));
      001218 C3               [12] 4832 	clr	c
      001219 E4               [12] 4833 	clr	a
      00121A 9C               [12] 4834 	subb	a,r4
      00121B FC               [12] 4835 	mov	r4,a
      00121C E4               [12] 4836 	clr	a
      00121D 9D               [12] 4837 	subb	a,r5
      00121E FD               [12] 4838 	mov	r5,a
      00121F EC               [12] 4839 	mov	a,r4
      001220 25 36            [12] 4840 	add	a,_PW_NUET_THRUST
      001222 F5 4E            [12] 4841 	mov	_RTHRUST_PW,a
      001224 ED               [12] 4842 	mov	a,r5
      001225 35 37            [12] 4843 	addc	a,(_PW_NUET_THRUST + 1)
      001227 F5 4F            [12] 4844 	mov	(_RTHRUST_PW + 1),a
                           001141  4845 	C$lab6.c$598$1$203 ==.
                                   4846 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:598: LTHRUST_PW = PW_NUET_THRUST   + (int) (((int) kp* (int) error) - (int) kd * ((int)old_error -(int) error));
      001229 EA               [12] 4847 	mov	a,r2
      00122A 25 36            [12] 4848 	add	a,_PW_NUET_THRUST
      00122C F5 50            [12] 4849 	mov	_LTHRUST_PW,a
      00122E EB               [12] 4850 	mov	a,r3
      00122F 35 37            [12] 4851 	addc	a,(_PW_NUET_THRUST + 1)
      001231 F5 51            [12] 4852 	mov	(_LTHRUST_PW + 1),a
                           00114B  4853 	C$lab6.c$600$1$203 ==.
                                   4854 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:600: old_error=error;
      001233 90 00 65         [24] 4855 	mov	dptr,#_old_error
      001236 EE               [12] 4856 	mov	a,r6
      001237 F0               [24] 4857 	movx	@dptr,a
      001238 EF               [12] 4858 	mov	a,r7
      001239 A3               [24] 4859 	inc	dptr
      00123A F0               [24] 4860 	movx	@dptr,a
                           001153  4861 	C$lab6.c$603$1$203 ==.
                                   4862 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:603: if (RUDDER_PW >= PW_RIGHT_RUDDER)
      00123B C3               [12] 4863 	clr	c
      00123C E5 46            [12] 4864 	mov	a,_RUDDER_PW
      00123E 95 3E            [12] 4865 	subb	a,_PW_RIGHT_RUDDER
      001240 E5 47            [12] 4866 	mov	a,(_RUDDER_PW + 1)
      001242 95 3F            [12] 4867 	subb	a,(_PW_RIGHT_RUDDER + 1)
      001244 40 08            [24] 4868 	jc	00111$
                           00115E  4869 	C$lab6.c$605$2$207 ==.
                                   4870 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:605: RUDDER_PW = PW_RIGHT_RUDDER;
      001246 85 3E 46         [24] 4871 	mov	_RUDDER_PW,_PW_RIGHT_RUDDER
      001249 85 3F 47         [24] 4872 	mov	(_RUDDER_PW + 1),(_PW_RIGHT_RUDDER + 1)
      00124C 80 11            [24] 4873 	sjmp	00112$
      00124E                       4874 00111$:
                           001166  4875 	C$lab6.c$607$1$203 ==.
                                   4876 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:607: else if(RUDDER_PW <= PW_LEFT_RUDDER)
      00124E C3               [12] 4877 	clr	c
      00124F E5 3A            [12] 4878 	mov	a,_PW_LEFT_RUDDER
      001251 95 46            [12] 4879 	subb	a,_RUDDER_PW
      001253 E5 3B            [12] 4880 	mov	a,(_PW_LEFT_RUDDER + 1)
      001255 95 47            [12] 4881 	subb	a,(_RUDDER_PW + 1)
      001257 40 06            [24] 4882 	jc	00112$
                           001171  4883 	C$lab6.c$609$2$208 ==.
                                   4884 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:609: RUDDER_PW = PW_LEFT_RUDDER;
      001259 85 3A 46         [24] 4885 	mov	_RUDDER_PW,_PW_LEFT_RUDDER
      00125C 85 3B 47         [24] 4886 	mov	(_RUDDER_PW + 1),(_PW_LEFT_RUDDER + 1)
      00125F                       4887 00112$:
                           001177  4888 	C$lab6.c$612$1$203 ==.
                                   4889 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:612: if (RTHRUST_PW >= PW_MAX_THRUST)
      00125F C3               [12] 4890 	clr	c
      001260 E5 4E            [12] 4891 	mov	a,_RTHRUST_PW
      001262 95 38            [12] 4892 	subb	a,_PW_MAX_THRUST
      001264 E5 4F            [12] 4893 	mov	a,(_RTHRUST_PW + 1)
      001266 95 39            [12] 4894 	subb	a,(_PW_MAX_THRUST + 1)
      001268 40 08            [24] 4895 	jc	00116$
                           001182  4896 	C$lab6.c$614$2$209 ==.
                                   4897 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:614: RTHRUST_PW = PW_MAX_THRUST;
      00126A 85 38 4E         [24] 4898 	mov	_RTHRUST_PW,_PW_MAX_THRUST
      00126D 85 39 4F         [24] 4899 	mov	(_RTHRUST_PW + 1),(_PW_MAX_THRUST + 1)
      001270 80 11            [24] 4900 	sjmp	00117$
      001272                       4901 00116$:
                           00118A  4902 	C$lab6.c$616$1$203 ==.
                                   4903 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:616: else if (RTHRUST_PW <=  PW_MIN_THRUST)
      001272 C3               [12] 4904 	clr	c
      001273 E5 34            [12] 4905 	mov	a,_PW_MIN_THRUST
      001275 95 4E            [12] 4906 	subb	a,_RTHRUST_PW
      001277 E5 35            [12] 4907 	mov	a,(_PW_MIN_THRUST + 1)
      001279 95 4F            [12] 4908 	subb	a,(_RTHRUST_PW + 1)
      00127B 40 06            [24] 4909 	jc	00117$
                           001195  4910 	C$lab6.c$618$2$210 ==.
                                   4911 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:618: RTHRUST_PW = PW_MIN_THRUST;
      00127D 85 34 4E         [24] 4912 	mov	_RTHRUST_PW,_PW_MIN_THRUST
      001280 85 35 4F         [24] 4913 	mov	(_RTHRUST_PW + 1),(_PW_MIN_THRUST + 1)
      001283                       4914 00117$:
                           00119B  4915 	C$lab6.c$620$1$203 ==.
                                   4916 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:620: if (LTHRUST_PW >= PW_MAX_THRUST)
      001283 C3               [12] 4917 	clr	c
      001284 E5 50            [12] 4918 	mov	a,_LTHRUST_PW
      001286 95 38            [12] 4919 	subb	a,_PW_MAX_THRUST
      001288 E5 51            [12] 4920 	mov	a,(_LTHRUST_PW + 1)
      00128A 95 39            [12] 4921 	subb	a,(_PW_MAX_THRUST + 1)
      00128C 40 08            [24] 4922 	jc	00121$
                           0011A6  4923 	C$lab6.c$622$2$211 ==.
                                   4924 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:622: LTHRUST_PW = PW_MAX_THRUST;
      00128E 85 38 50         [24] 4925 	mov	_LTHRUST_PW,_PW_MAX_THRUST
      001291 85 39 51         [24] 4926 	mov	(_LTHRUST_PW + 1),(_PW_MAX_THRUST + 1)
      001294 80 11            [24] 4927 	sjmp	00122$
      001296                       4928 00121$:
                           0011AE  4929 	C$lab6.c$624$1$203 ==.
                                   4930 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:624: else if(LTHRUST_PW <= PW_MIN_THRUST)
      001296 C3               [12] 4931 	clr	c
      001297 E5 34            [12] 4932 	mov	a,_PW_MIN_THRUST
      001299 95 50            [12] 4933 	subb	a,_LTHRUST_PW
      00129B E5 35            [12] 4934 	mov	a,(_PW_MIN_THRUST + 1)
      00129D 95 51            [12] 4935 	subb	a,(_LTHRUST_PW + 1)
      00129F 40 06            [24] 4936 	jc	00122$
                           0011B9  4937 	C$lab6.c$626$2$212 ==.
                                   4938 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:626: LTHRUST_PW = PW_MIN_THRUST;
      0012A1 85 34 50         [24] 4939 	mov	_LTHRUST_PW,_PW_MIN_THRUST
      0012A4 85 35 51         [24] 4940 	mov	(_LTHRUST_PW + 1),(_PW_MIN_THRUST + 1)
      0012A7                       4941 00122$:
                           0011BF  4942 	C$lab6.c$629$1$203 ==.
                                   4943 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:629: RDR_lo_to_hi = 0xFFFF - RUDDER_PW ;
      0012A7 74 FF            [12] 4944 	mov	a,#0xFF
      0012A9 C3               [12] 4945 	clr	c
      0012AA 95 46            [12] 4946 	subb	a,_RUDDER_PW
      0012AC F5 48            [12] 4947 	mov	_RDR_lo_to_hi,a
      0012AE 74 FF            [12] 4948 	mov	a,#0xFF
      0012B0 95 47            [12] 4949 	subb	a,(_RUDDER_PW + 1)
      0012B2 F5 49            [12] 4950 	mov	(_RDR_lo_to_hi + 1),a
                           0011CC  4951 	C$lab6.c$630$1$203 ==.
                                   4952 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:630: RTRST_lo_to_hi = 0xFFFF - RTHRUST_PW;
      0012B4 74 FF            [12] 4953 	mov	a,#0xFF
      0012B6 C3               [12] 4954 	clr	c
      0012B7 95 4E            [12] 4955 	subb	a,_RTHRUST_PW
      0012B9 F5 52            [12] 4956 	mov	_RTRST_lo_to_hi,a
      0012BB 74 FF            [12] 4957 	mov	a,#0xFF
      0012BD 95 4F            [12] 4958 	subb	a,(_RTHRUST_PW + 1)
      0012BF F5 53            [12] 4959 	mov	(_RTRST_lo_to_hi + 1),a
                           0011D9  4960 	C$lab6.c$631$1$203 ==.
                                   4961 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:631: LTRST_lo_to_hi = 0xFFFF - LTHRUST_PW;
      0012C1 74 FF            [12] 4962 	mov	a,#0xFF
      0012C3 C3               [12] 4963 	clr	c
      0012C4 95 50            [12] 4964 	subb	a,_LTHRUST_PW
      0012C6 F5 54            [12] 4965 	mov	_LTRST_lo_to_hi,a
      0012C8 74 FF            [12] 4966 	mov	a,#0xFF
      0012CA 95 51            [12] 4967 	subb	a,(_LTHRUST_PW + 1)
      0012CC F5 55            [12] 4968 	mov	(_LTRST_lo_to_hi + 1),a
                           0011E6  4969 	C$lab6.c$633$1$203 ==.
                                   4970 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:633: PCA0CP0 = RDR_lo_to_hi;
      0012CE 85 48 EA         [24] 4971 	mov	((_PCA0CP0 >> 0) & 0xFF),_RDR_lo_to_hi
      0012D1 85 49 FA         [24] 4972 	mov	((_PCA0CP0 >> 8) & 0xFF),(_RDR_lo_to_hi + 1)
                           0011EC  4973 	C$lab6.c$634$1$203 ==.
                                   4974 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:634: PCA0CP2 = RTRST_lo_to_hi;
      0012D4 85 52 EC         [24] 4975 	mov	((_PCA0CP2 >> 0) & 0xFF),_RTRST_lo_to_hi
      0012D7 85 53 FC         [24] 4976 	mov	((_PCA0CP2 >> 8) & 0xFF),(_RTRST_lo_to_hi + 1)
                           0011F2  4977 	C$lab6.c$635$1$203 ==.
                                   4978 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:635: PCA0CP3 = LTRST_lo_to_hi;
      0012DA 85 54 ED         [24] 4979 	mov	((_PCA0CP3 >> 0) & 0xFF),_LTRST_lo_to_hi
      0012DD 85 55 FD         [24] 4980 	mov	((_PCA0CP3 >> 8) & 0xFF),(_LTRST_lo_to_hi + 1)
                           0011F8  4981 	C$lab6.c$636$1$203 ==.
                           0011F8  4982 	XG$Steering_Servo$0$0 ==.
      0012E0 22               [24] 4983 	ret
                                   4984 ;------------------------------------------------------------
                                   4985 ;Allocation info for local variables in function 'start'
                                   4986 ;------------------------------------------------------------
                           0011F9  4987 	G$start$0$0 ==.
                           0011F9  4988 	C$lab6.c$638$1$203 ==.
                                   4989 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:638: void start(void)            ///WAITS UNTIL '*' IS ENTERED
                                   4990 ;	-----------------------------------------
                                   4991 ;	 function start
                                   4992 ;	-----------------------------------------
      0012E1                       4993 _start:
                           0011F9  4994 	C$lab6.c$640$1$214 ==.
                                   4995 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:640: while (read_keypad() != '*') wait();
      0012E1                       4996 00101$:
      0012E1 12 02 02         [24] 4997 	lcall	_read_keypad
      0012E4 AF 82            [24] 4998 	mov	r7,dpl
      0012E6 BF 2A 02         [24] 4999 	cjne	r7,#0x2A,00112$
      0012E9 80 05            [24] 5000 	sjmp	00104$
      0012EB                       5001 00112$:
      0012EB 12 12 F1         [24] 5002 	lcall	_wait
      0012EE 80 F1            [24] 5003 	sjmp	00101$
      0012F0                       5004 00104$:
                           001208  5005 	C$lab6.c$641$1$214 ==.
                           001208  5006 	XG$start$0$0 ==.
      0012F0 22               [24] 5007 	ret
                                   5008 ;------------------------------------------------------------
                                   5009 ;Allocation info for local variables in function 'wait'
                                   5010 ;------------------------------------------------------------
                                   5011 ;old_count                 Allocated with name '_wait_old_count_1_216'
                                   5012 ;------------------------------------------------------------
                           001209  5013 	G$wait$0$0 ==.
                           001209  5014 	C$lab6.c$645$1$214 ==.
                                   5015 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:645: void wait(void)
                                   5016 ;	-----------------------------------------
                                   5017 ;	 function wait
                                   5018 ;	-----------------------------------------
      0012F1                       5019 _wait:
                           001209  5020 	C$lab6.c$647$1$216 ==.
                                   5021 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:647: __xdata int old_count = count+1;
      0012F1 90 00 61         [24] 5022 	mov	dptr,#_wait_old_count_1_216
      0012F4 74 01            [12] 5023 	mov	a,#0x01
      0012F6 25 32            [12] 5024 	add	a,_count
      0012F8 F0               [24] 5025 	movx	@dptr,a
      0012F9 E4               [12] 5026 	clr	a
      0012FA 35 33            [12] 5027 	addc	a,(_count + 1)
      0012FC A3               [24] 5028 	inc	dptr
      0012FD F0               [24] 5029 	movx	@dptr,a
                           001216  5030 	C$lab6.c$648$1$216 ==.
                                   5031 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:648: while (old_count> count);
      0012FE 90 00 61         [24] 5032 	mov	dptr,#_wait_old_count_1_216
      001301 E0               [24] 5033 	movx	a,@dptr
      001302 FE               [12] 5034 	mov	r6,a
      001303 A3               [24] 5035 	inc	dptr
      001304 E0               [24] 5036 	movx	a,@dptr
      001305 FF               [12] 5037 	mov	r7,a
      001306                       5038 00101$:
      001306 C3               [12] 5039 	clr	c
      001307 E5 32            [12] 5040 	mov	a,_count
      001309 9E               [12] 5041 	subb	a,r6
      00130A E5 33            [12] 5042 	mov	a,(_count + 1)
      00130C 64 80            [12] 5043 	xrl	a,#0x80
      00130E 8F F0            [24] 5044 	mov	b,r7
      001310 63 F0 80         [24] 5045 	xrl	b,#0x80
      001313 95 F0            [12] 5046 	subb	a,b
      001315 40 EF            [24] 5047 	jc	00101$
                           00122F  5048 	C$lab6.c$649$1$216 ==.
                           00122F  5049 	XG$wait$0$0 ==.
      001317 22               [24] 5050 	ret
                                   5051 ;------------------------------------------------------------
                                   5052 ;Allocation info for local variables in function 'Port_Init'
                                   5053 ;------------------------------------------------------------
                           001230  5054 	G$Port_Init$0$0 ==.
                           001230  5055 	C$lab6.c$651$1$216 ==.
                                   5056 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:651: void Port_Init(void)
                                   5057 ;	-----------------------------------------
                                   5058 ;	 function Port_Init
                                   5059 ;	-----------------------------------------
      001318                       5060 _Port_Init:
                           001230  5061 	C$lab6.c$653$1$218 ==.
                                   5062 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:653: P0MDOUT &= ~0x32;
      001318 AF A4            [24] 5063 	mov	r7,_P0MDOUT
      00131A 74 CD            [12] 5064 	mov	a,#0xCD
      00131C 5F               [12] 5065 	anl	a,r7
      00131D F5 A4            [12] 5066 	mov	_P0MDOUT,a
                           001237  5067 	C$lab6.c$655$1$218 ==.
                                   5068 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:655: P1MDIN  &= ~0x20;
      00131F AF BD            [24] 5069 	mov	r7,_P1MDIN
      001321 74 DF            [12] 5070 	mov	a,#0xDF
      001323 5F               [12] 5071 	anl	a,r7
      001324 F5 BD            [12] 5072 	mov	_P1MDIN,a
                           00123E  5073 	C$lab6.c$657$1$218 ==.
                                   5074 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:657: P1MDOUT |= 0x0F;
      001326 43 A5 0F         [24] 5075 	orl	_P1MDOUT,#0x0F
                           001241  5076 	C$lab6.c$658$1$218 ==.
                                   5077 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:658: P1MDOUT &= 0x20;
      001329 53 A5 20         [24] 5078 	anl	_P1MDOUT,#0x20
                           001244  5079 	C$lab6.c$660$1$218 ==.
                                   5080 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:660: P1 		 = 0x20;
      00132C 75 90 20         [24] 5081 	mov	_P1,#0x20
                           001247  5082 	C$lab6.c$663$1$218 ==.
                           001247  5083 	XG$Port_Init$0$0 ==.
      00132F 22               [24] 5084 	ret
                                   5085 ;------------------------------------------------------------
                                   5086 ;Allocation info for local variables in function 'PCA_Init'
                                   5087 ;------------------------------------------------------------
                           001248  5088 	G$PCA_Init$0$0 ==.
                           001248  5089 	C$lab6.c$665$1$218 ==.
                                   5090 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:665: void PCA_Init(void)
                                   5091 ;	-----------------------------------------
                                   5092 ;	 function PCA_Init
                                   5093 ;	-----------------------------------------
      001330                       5094 _PCA_Init:
                           001248  5095 	C$lab6.c$667$1$220 ==.
                                   5096 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:667: PCA0MD   = 0x81;
      001330 75 D9 81         [24] 5097 	mov	_PCA0MD,#0x81
                           00124B  5098 	C$lab6.c$668$1$220 ==.
                                   5099 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:668: PCA0CPM0 = 0xC2;    //CCM0 in 16-bit compare mode FOR STEERING
      001333 75 DA C2         [24] 5100 	mov	_PCA0CPM0,#0xC2
                           00124E  5101 	C$lab6.c$669$1$220 ==.
                                   5102 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:669: PCA0CPM1 = 0xC2;
      001336 75 DB C2         [24] 5103 	mov	_PCA0CPM1,#0xC2
                           001251  5104 	C$lab6.c$670$1$220 ==.
                                   5105 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:670: PCA0CPM2 = 0xC2;    //CCM2 in 16-bit compare mode FOR MOTOR
      001339 75 DC C2         [24] 5106 	mov	_PCA0CPM2,#0xC2
                           001254  5107 	C$lab6.c$671$1$220 ==.
                                   5108 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:671: PCA0CPM3 = 0XC2;
      00133C 75 DD C2         [24] 5109 	mov	_PCA0CPM3,#0xC2
                           001257  5110 	C$lab6.c$672$1$220 ==.
                                   5111 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:672: PCA0CN 	 = 0x40;    //Enable PCA counter
      00133F 75 D8 40         [24] 5112 	mov	_PCA0CN,#0x40
                           00125A  5113 	C$lab6.c$673$1$220 ==.
                                   5114 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:673: EIE1    |= 0x08;    //Enable PCA interrupt
      001342 43 E6 08         [24] 5115 	orl	_EIE1,#0x08
                           00125D  5116 	C$lab6.c$674$1$220 ==.
                                   5117 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:674: EA       = 1   ;    //Enable global interrupts
      001345 D2 AF            [12] 5118 	setb	_EA
                           00125F  5119 	C$lab6.c$675$1$220 ==.
                           00125F  5120 	XG$PCA_Init$0$0 ==.
      001347 22               [24] 5121 	ret
                                   5122 ;------------------------------------------------------------
                                   5123 ;Allocation info for local variables in function 'XBR0_Init'
                                   5124 ;------------------------------------------------------------
                           001260  5125 	G$XBR0_Init$0$0 ==.
                           001260  5126 	C$lab6.c$678$1$220 ==.
                                   5127 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:678: void XBR0_Init(void)
                                   5128 ;	-----------------------------------------
                                   5129 ;	 function XBR0_Init
                                   5130 ;	-----------------------------------------
      001348                       5131 _XBR0_Init:
                           001260  5132 	C$lab6.c$680$1$222 ==.
                                   5133 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:680: XBR0 = 0x27;
      001348 75 E1 27         [24] 5134 	mov	_XBR0,#0x27
                           001263  5135 	C$lab6.c$681$1$222 ==.
                           001263  5136 	XG$XBR0_Init$0$0 ==.
      00134B 22               [24] 5137 	ret
                                   5138 ;------------------------------------------------------------
                                   5139 ;Allocation info for local variables in function 'SMB_Init'
                                   5140 ;------------------------------------------------------------
                           001264  5141 	G$SMB_Init$0$0 ==.
                           001264  5142 	C$lab6.c$683$1$222 ==.
                                   5143 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:683: void SMB_Init(void)
                                   5144 ;	-----------------------------------------
                                   5145 ;	 function SMB_Init
                                   5146 ;	-----------------------------------------
      00134C                       5147 _SMB_Init:
                           001264  5148 	C$lab6.c$685$1$224 ==.
                                   5149 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:685: SMB0CR =0x93;
      00134C 75 CF 93         [24] 5150 	mov	_SMB0CR,#0x93
                           001267  5151 	C$lab6.c$686$1$224 ==.
                                   5152 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:686: ENSMB =1;
      00134F D2 C6            [12] 5153 	setb	_ENSMB
                           001269  5154 	C$lab6.c$687$1$224 ==.
                           001269  5155 	XG$SMB_Init$0$0 ==.
      001351 22               [24] 5156 	ret
                                   5157 ;------------------------------------------------------------
                                   5158 ;Allocation info for local variables in function 'ADC_Init'
                                   5159 ;------------------------------------------------------------
                           00126A  5160 	G$ADC_Init$0$0 ==.
                           00126A  5161 	C$lab6.c$689$1$224 ==.
                                   5162 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:689: void ADC_Init(void)								/////SETS ADC 
                                   5163 ;	-----------------------------------------
                                   5164 ;	 function ADC_Init
                                   5165 ;	-----------------------------------------
      001352                       5166 _ADC_Init:
                           00126A  5167 	C$lab6.c$691$1$226 ==.
                                   5168 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:691: REF0CN = 0x03;
      001352 75 D1 03         [24] 5169 	mov	_REF0CN,#0x03
                           00126D  5170 	C$lab6.c$692$1$226 ==.
                                   5171 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:692: ADC1CN = 0x80;
      001355 75 AA 80         [24] 5172 	mov	_ADC1CN,#0x80
                           001270  5173 	C$lab6.c$693$1$226 ==.
                                   5174 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:693: ADC1CF |= 0x01;
      001358 43 AB 01         [24] 5175 	orl	_ADC1CF,#0x01
                           001273  5176 	C$lab6.c$694$1$226 ==.
                           001273  5177 	XG$ADC_Init$0$0 ==.
      00135B 22               [24] 5178 	ret
                                   5179 ;------------------------------------------------------------
                                   5180 ;Allocation info for local variables in function 'PCA_ISR'
                                   5181 ;------------------------------------------------------------
                           001274  5182 	G$PCA_ISR$0$0 ==.
                           001274  5183 	C$lab6.c$696$1$226 ==.
                                   5184 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:696: void PCA_ISR ( void ) __interrupt 9
                                   5185 ;	-----------------------------------------
                                   5186 ;	 function PCA_ISR
                                   5187 ;	-----------------------------------------
      00135C                       5188 _PCA_ISR:
      00135C C0 E0            [24] 5189 	push	acc
      00135E C0 D0            [24] 5190 	push	psw
                           001278  5191 	C$lab6.c$699$1$228 ==.
                                   5192 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:699: if (CF)
                           001278  5193 	C$lab6.c$701$2$229 ==.
                                   5194 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:701: CF =0;
      001360 10 DF 02         [24] 5195 	jbc	_CF,00108$
      001363 80 0E            [24] 5196 	sjmp	00102$
      001365                       5197 00108$:
                           00127D  5198 	C$lab6.c$702$2$229 ==.
                                   5199 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:702: PCA0 = PCA_START;
      001365 75 E9 00         [24] 5200 	mov	((_PCA0 >> 0) & 0xFF),#0x00
      001368 75 F9 70         [24] 5201 	mov	((_PCA0 >> 8) & 0xFF),#0x70
                           001283  5202 	C$lab6.c$703$2$229 ==.
                                   5203 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:703: count++;
      00136B 05 32            [12] 5204 	inc	_count
      00136D E4               [12] 5205 	clr	a
      00136E B5 32 02         [24] 5206 	cjne	a,_count,00109$
      001371 05 33            [12] 5207 	inc	(_count + 1)
      001373                       5208 00109$:
      001373                       5209 00102$:
                           00128B  5210 	C$lab6.c$708$1$228 ==.
                                   5211 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:708: PCA0CN &= 0xC0;
      001373 53 D8 C0         [24] 5212 	anl	_PCA0CN,#0xC0
      001376 D0 D0            [24] 5213 	pop	psw
      001378 D0 E0            [24] 5214 	pop	acc
                           001292  5215 	C$lab6.c$709$1$228 ==.
                           001292  5216 	XG$PCA_ISR$0$0 ==.
      00137A 32               [24] 5217 	reti
                                   5218 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   5219 ;	eliminated unneeded push/pop dpl
                                   5220 ;	eliminated unneeded push/pop dph
                                   5221 ;	eliminated unneeded push/pop b
                                   5222 	.area CSEG    (CODE)
                                   5223 	.area CONST   (CODE)
                           000000  5224 Flab6$__str_0$0$0 == .
      001B69                       5225 ___str_0:
      001B69 0A                    5226 	.db 0x0A
      001B6A 54 79 70 65 20 64 69  5227 	.ascii "Type digits; end w/#"
             67 69 74 73 3B 20 65
             6E 64 20 77 2F 23
      001B7E 00                    5228 	.db 0x00
                           000016  5229 Flab6$__str_1$0$0 == .
      001B7F                       5230 ___str_1:
      001B7F 20 20 20 20 20 25 63  5231 	.ascii "     %c%c%c%c%c"
             25 63 25 63 25 63 25
             63
      001B8E 00                    5232 	.db 0x00
                           000026  5233 Flab6$__str_2$0$0 == .
      001B8F                       5234 ___str_2:
      001B8F 25 63                 5235 	.ascii "%c"
      001B91 00                    5236 	.db 0x00
                           000029  5237 Flab6$__str_3$0$0 == .
      001B92                       5238 ___str_3:
      001B92 50 6C 65 61 73 65 20  5239 	.ascii "Please enter a kp value:"
             65 6E 74 65 72 20 61
             20 6B 70 20 76 61 6C
             75 65 3A
      001BAA 0A                    5240 	.db 0x0A
      001BAB 20                    5241 	.ascii " "
      001BAC 00                    5242 	.db 0x00
                           000044  5243 Flab6$__str_4$0$0 == .
      001BAD                       5244 ___str_4:
      001BAD 50 6C 65 61 73 65 20  5245 	.ascii "Please enter a kd value:"
             65 6E 74 65 72 20 61
             20 6B 64 20 76 61 6C
             75 65 3A
      001BC5 0A                    5246 	.db 0x0A
      001BC6 20                    5247 	.ascii " "
      001BC7 00                    5248 	.db 0x00
                           00005F  5249 Flab6$__str_5$0$0 == .
      001BC8                       5250 ___str_5:
      001BC8 0D                    5251 	.db 0x0D
      001BC9 0A                    5252 	.db 0x0A
      001BCA 25 75                 5253 	.ascii "%u"
      001BCC 00                    5254 	.db 0x00
                           000064  5255 Flab6$__str_6$0$0 == .
      001BCD                       5256 ___str_6:
      001BCD 25 64                 5257 	.ascii "%d"
      001BCF 00                    5258 	.db 0x00
                           000067  5259 Flab6$__str_7$0$0 == .
      001BD0                       5260 ___str_7:
      001BD0 43 61 6C 69 62 72 61  5261 	.ascii "Calibration:"
             74 69 6F 6E 3A
      001BDC 0A                    5262 	.db 0x0A
      001BDD 48 65 6C 6C 6F 20 77  5263 	.ascii "Hello world!"
             6F 72 6C 64 21
      001BE9 0A                    5264 	.db 0x0A
      001BEA 30 31 32 5F 33 34 35  5265 	.ascii "012_345_678:"
             5F 36 37 38 3A
      001BF6 0A                    5266 	.db 0x0A
      001BF7 61 62 63 20 64 65 66  5267 	.ascii "abc def ghij"
             20 67 68 69 6A
      001C03 00                    5268 	.db 0x00
                           00009B  5269 Flab6$__str_8$0$0 == .
      001C04                       5270 ___str_8:
      001C04 0D                    5271 	.db 0x0D
      001C05 0A                    5272 	.db 0x0A
      001C06 54 68 65 20 64 65 73  5273 	.ascii "The desired direction is: %d"
             69 72 65 64 20 64 69
             72 65 63 74 69 6F 6E
             20 69 73 3A 20 25 64
      001C22 00                    5274 	.db 0x00
                           0000BA  5275 Flab6$__str_9$0$0 == .
      001C23                       5276 ___str_9:
      001C23 52 75 64 64 65 72 20  5277 	.ascii "Rudder Calibration"
             43 61 6C 69 62 72 61
             74 69 6F 6E
      001C35 00                    5278 	.db 0x00
                           0000CD  5279 Flab6$__str_10$0$0 == .
      001C36                       5280 ___str_10:
      001C36 67 6F 20 6C 65 66 74  5281 	.ascii "go left: press 1"
             3A 20 70 72 65 73 73
             20 31
      001C46 0A                    5282 	.db 0x0A
      001C47 20 67 6F 20 72 69 67  5283 	.ascii " go right: press 2"
             68 74 3A 20 70 72 65
             73 73 20 32
      001C59 0A                    5284 	.db 0x0A
      001C5A 50 72 65 73 73 20 2A  5285 	.ascii "Press * for next screen"
             20 66 6F 72 20 6E 65
             78 74 20 73 63 72 65
             65 6E
      001C71 00                    5286 	.db 0x00
                           000109  5287 Flab6$__str_11$0$0 == .
      001C72                       5288 ___str_11:
      001C72 0A                    5289 	.db 0x0A
      001C73 20 63 6F 6E 66 69 72  5290 	.ascii " confirm: press 3"
             6D 3A 20 70 72 65 73
             73 20 33
      001C84 0A                    5291 	.db 0x0A
      001C85 20 70 72 65 73 73 20  5292 	.ascii " press * to begin"
             2A 20 74 6F 20 62 65
             67 69 6E
      001C96 00                    5293 	.db 0x00
                           00012E  5294 Flab6$__str_12$0$0 == .
      001C97                       5295 ___str_12:
      001C97 0D                    5296 	.db 0x0D
      001C98 0A                    5297 	.db 0x0A
      001C99 20 25 75              5298 	.ascii " %u"
      001C9C 00                    5299 	.db 0x00
                           000134  5300 Flab6$__str_13$0$0 == .
      001C9D                       5301 ___str_13:
      001C9D 4E 6F 77 20 63 61 6C  5302 	.ascii "Now calibrating Min_PW"
             69 62 72 61 74 69 6E
             67 20 4D 69 6E 5F 50
             57
      001CB3 0A                    5303 	.db 0x0A
      001CB4 00                    5304 	.db 0x00
                           00014C  5305 Flab6$__str_14$0$0 == .
      001CB5                       5306 ___str_14:
      001CB5 4E 6F 77 20 63 61 6C  5307 	.ascii "Now calibrating Cen_PW"
             69 62 72 61 74 69 6E
             67 20 43 65 6E 5F 50
             57
      001CCB 00                    5308 	.db 0x00
                           000163  5309 Flab6$__str_15$0$0 == .
      001CCC                       5310 ___str_15:
      001CCC 4E 6F 77 20 63 61 6C  5311 	.ascii "Now calibrating Max_PW"
             69 62 72 61 74 69 6E
             67 20 4D 61 78 5F 50
             57
      001CE2 00                    5312 	.db 0x00
                           00017A  5313 Flab6$__str_16$0$0 == .
      001CE3                       5314 ___str_16:
      001CE3 41 6E 67 6C 65 20 43  5315 	.ascii "Angle Calibration"
             61 6C 69 62 72 61 74
             69 6F 6E
      001CF4 00                    5316 	.db 0x00
                           00018C  5317 Flab6$__str_17$0$0 == .
      001CF5                       5318 ___str_17:
      001CF5 4E 6F 77 20 63 61 6C  5319 	.ascii "Now calibrating Min_PW UP ANGLE"
             69 62 72 61 74 69 6E
             67 20 4D 69 6E 5F 50
             57 20 55 50 20 41 4E
             47 4C 45
      001D14 00                    5320 	.db 0x00
                           0001AC  5321 Flab6$__str_18$0$0 == .
      001D15                       5322 ___str_18:
      001D15 4E 6F 77 20 63 61 6C  5323 	.ascii "Now calibrating Max_PW DOWN ANGLE"
             69 62 72 61 74 69 6E
             67 20 4D 61 78 5F 50
             57 20 44 4F 57 4E 20
             41 4E 47 4C 45
      001D36 00                    5324 	.db 0x00
                           0001CE  5325 Flab6$__str_19$0$0 == .
      001D37                       5326 ___str_19:
      001D37 54 68 72 75 73 74 20  5327 	.ascii "Thrust Calibration"
             43 61 6C 69 62 72 61
             74 69 6F 6E
      001D49 00                    5328 	.db 0x00
                           0001E1  5329 Flab6$__str_20$0$0 == .
      001D4A                       5330 ___str_20:
      001D4A 4E 6F 77 20 63 61 6C  5331 	.ascii "Now calibrating Min_PW"
             69 62 72 61 74 69 6E
             67 20 4D 69 6E 5F 50
             57
      001D60 00                    5332 	.db 0x00
                                   5333 	.area XINIT   (CODE)
                           000000  5334 Flab6$__xinit_error$0$0 == .
      001D6C                       5335 __xinit__error:
      001D6C 00 00                 5336 	.byte #0x00,#0x00	;  0
                           000002  5337 Flab6$__xinit_old_error$0$0 == .
      001D6E                       5338 __xinit__old_error:
      001D6E 00 00                 5339 	.byte #0x00,#0x00	;  0
                                   5340 	.area CABS    (ABS,CODE)
