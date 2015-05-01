                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (Apr  5 2014) (MINGW32)
                                      4 ; This file was generated Fri May 01 08:10:54 2015
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
                                    314 	.globl _r_addr
                                    315 	.globl _r_data
                                    316 	.globl _offset
                                    317 	.globl _LTRST_lo_to_hi
                                    318 	.globl _RTRST_lo_to_hi
                                    319 	.globl _LTHRUST_PW
                                    320 	.globl _RTHRUST_PW
                                    321 	.globl _AGL_lo_to_hi
                                    322 	.globl _ANGLE_PW
                                    323 	.globl _RDR_lo_to_hi
                                    324 	.globl _RUDDER_PW
                                    325 	.globl _PW_DOWN_ANGLE
                                    326 	.globl _PW_CENTER_ANGLE
                                    327 	.globl _PW_UP_ANGLE
                                    328 	.globl _PW_RIGHT_RUDDER
                                    329 	.globl _PW_CENTER_RUDDER
                                    330 	.globl _PW_LEFT_RUDDER
                                    331 	.globl _PW_MAX_THRUST
                                    332 	.globl _PW_NUET_THRUST
                                    333 	.globl _PW_MIN_THRUST
                                    334 	.globl _count
                                    335 	.globl _i2c_read_data_PARM_4
                                    336 	.globl _i2c_read_data_PARM_3
                                    337 	.globl _i2c_read_data_PARM_2
                                    338 	.globl _i2c_write_data_PARM_4
                                    339 	.globl _i2c_write_data_PARM_3
                                    340 	.globl _i2c_write_data_PARM_2
                                    341 	.globl _putchar
                                    342 	.globl _getchar
                                    343 	.globl _lcd_print
                                    344 	.globl _lcd_clear
                                    345 	.globl _kpd_input
                                    346 	.globl _delay_time
                                    347 	.globl _i2c_start
                                    348 	.globl _i2c_write
                                    349 	.globl _i2c_write_and_stop
                                    350 	.globl _i2c_read
                                    351 	.globl _i2c_read_and_stop
                                    352 	.globl _i2c_write_data
                                    353 	.globl _i2c_read_data
                                    354 	.globl _Accel_Init
                                    355 	.globl _Calibrate
                                    356 	.globl _kpkd
                                    357 	.globl _Change_D
                                    358 	.globl _Read_Ranger
                                    359 	.globl _Steering_func
                                    360 	.globl _direction
                                    361 	.globl _ReadCompass
                                    362 	.globl _Rudder_cal
                                    363 	.globl _Angle_cal
                                    364 	.globl _Thrust_cal
                                    365 	.globl _Steering_Servo
                                    366 	.globl _start
                                    367 	.globl _wait
                                    368 	.globl _Port_Init
                                    369 	.globl _PCA_Init
                                    370 	.globl _XBR0_Init
                                    371 	.globl _SMB_Init
                                    372 	.globl _ADC_Init
                                    373 ;--------------------------------------------------------
                                    374 ; special function registers
                                    375 ;--------------------------------------------------------
                                    376 	.area RSEG    (ABS,DATA)
      000000                        377 	.org 0x0000
                           000080   378 G$P0$0$0 == 0x0080
                           000080   379 _P0	=	0x0080
                           000081   380 G$SP$0$0 == 0x0081
                           000081   381 _SP	=	0x0081
                           000082   382 G$DPL$0$0 == 0x0082
                           000082   383 _DPL	=	0x0082
                           000083   384 G$DPH$0$0 == 0x0083
                           000083   385 _DPH	=	0x0083
                           000084   386 G$P4$0$0 == 0x0084
                           000084   387 _P4	=	0x0084
                           000085   388 G$P5$0$0 == 0x0085
                           000085   389 _P5	=	0x0085
                           000086   390 G$P6$0$0 == 0x0086
                           000086   391 _P6	=	0x0086
                           000087   392 G$PCON$0$0 == 0x0087
                           000087   393 _PCON	=	0x0087
                           000088   394 G$TCON$0$0 == 0x0088
                           000088   395 _TCON	=	0x0088
                           000089   396 G$TMOD$0$0 == 0x0089
                           000089   397 _TMOD	=	0x0089
                           00008A   398 G$TL0$0$0 == 0x008a
                           00008A   399 _TL0	=	0x008a
                           00008B   400 G$TL1$0$0 == 0x008b
                           00008B   401 _TL1	=	0x008b
                           00008C   402 G$TH0$0$0 == 0x008c
                           00008C   403 _TH0	=	0x008c
                           00008D   404 G$TH1$0$0 == 0x008d
                           00008D   405 _TH1	=	0x008d
                           00008E   406 G$CKCON$0$0 == 0x008e
                           00008E   407 _CKCON	=	0x008e
                           00008F   408 G$PSCTL$0$0 == 0x008f
                           00008F   409 _PSCTL	=	0x008f
                           000090   410 G$P1$0$0 == 0x0090
                           000090   411 _P1	=	0x0090
                           000091   412 G$TMR3CN$0$0 == 0x0091
                           000091   413 _TMR3CN	=	0x0091
                           000092   414 G$TMR3RLL$0$0 == 0x0092
                           000092   415 _TMR3RLL	=	0x0092
                           000093   416 G$TMR3RLH$0$0 == 0x0093
                           000093   417 _TMR3RLH	=	0x0093
                           000094   418 G$TMR3L$0$0 == 0x0094
                           000094   419 _TMR3L	=	0x0094
                           000095   420 G$TMR3H$0$0 == 0x0095
                           000095   421 _TMR3H	=	0x0095
                           000096   422 G$P7$0$0 == 0x0096
                           000096   423 _P7	=	0x0096
                           000098   424 G$SCON$0$0 == 0x0098
                           000098   425 _SCON	=	0x0098
                           000098   426 G$SCON0$0$0 == 0x0098
                           000098   427 _SCON0	=	0x0098
                           000099   428 G$SBUF$0$0 == 0x0099
                           000099   429 _SBUF	=	0x0099
                           000099   430 G$SBUF0$0$0 == 0x0099
                           000099   431 _SBUF0	=	0x0099
                           00009A   432 G$SPI0CFG$0$0 == 0x009a
                           00009A   433 _SPI0CFG	=	0x009a
                           00009B   434 G$SPI0DAT$0$0 == 0x009b
                           00009B   435 _SPI0DAT	=	0x009b
                           00009C   436 G$ADC1$0$0 == 0x009c
                           00009C   437 _ADC1	=	0x009c
                           00009D   438 G$SPI0CKR$0$0 == 0x009d
                           00009D   439 _SPI0CKR	=	0x009d
                           00009E   440 G$CPT0CN$0$0 == 0x009e
                           00009E   441 _CPT0CN	=	0x009e
                           00009F   442 G$CPT1CN$0$0 == 0x009f
                           00009F   443 _CPT1CN	=	0x009f
                           0000A0   444 G$P2$0$0 == 0x00a0
                           0000A0   445 _P2	=	0x00a0
                           0000A1   446 G$EMI0TC$0$0 == 0x00a1
                           0000A1   447 _EMI0TC	=	0x00a1
                           0000A3   448 G$EMI0CF$0$0 == 0x00a3
                           0000A3   449 _EMI0CF	=	0x00a3
                           0000A4   450 G$PRT0CF$0$0 == 0x00a4
                           0000A4   451 _PRT0CF	=	0x00a4
                           0000A4   452 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   453 _P0MDOUT	=	0x00a4
                           0000A5   454 G$PRT1CF$0$0 == 0x00a5
                           0000A5   455 _PRT1CF	=	0x00a5
                           0000A5   456 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   457 _P1MDOUT	=	0x00a5
                           0000A6   458 G$PRT2CF$0$0 == 0x00a6
                           0000A6   459 _PRT2CF	=	0x00a6
                           0000A6   460 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   461 _P2MDOUT	=	0x00a6
                           0000A7   462 G$PRT3CF$0$0 == 0x00a7
                           0000A7   463 _PRT3CF	=	0x00a7
                           0000A7   464 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   465 _P3MDOUT	=	0x00a7
                           0000A8   466 G$IE$0$0 == 0x00a8
                           0000A8   467 _IE	=	0x00a8
                           0000A9   468 G$SADDR0$0$0 == 0x00a9
                           0000A9   469 _SADDR0	=	0x00a9
                           0000AA   470 G$ADC1CN$0$0 == 0x00aa
                           0000AA   471 _ADC1CN	=	0x00aa
                           0000AB   472 G$ADC1CF$0$0 == 0x00ab
                           0000AB   473 _ADC1CF	=	0x00ab
                           0000AC   474 G$AMX1SL$0$0 == 0x00ac
                           0000AC   475 _AMX1SL	=	0x00ac
                           0000AD   476 G$P3IF$0$0 == 0x00ad
                           0000AD   477 _P3IF	=	0x00ad
                           0000AE   478 G$SADEN1$0$0 == 0x00ae
                           0000AE   479 _SADEN1	=	0x00ae
                           0000AF   480 G$EMI0CN$0$0 == 0x00af
                           0000AF   481 _EMI0CN	=	0x00af
                           0000AF   482 G$_XPAGE$0$0 == 0x00af
                           0000AF   483 __XPAGE	=	0x00af
                           0000B0   484 G$P3$0$0 == 0x00b0
                           0000B0   485 _P3	=	0x00b0
                           0000B1   486 G$OSCXCN$0$0 == 0x00b1
                           0000B1   487 _OSCXCN	=	0x00b1
                           0000B2   488 G$OSCICN$0$0 == 0x00b2
                           0000B2   489 _OSCICN	=	0x00b2
                           0000B5   490 G$P74OUT$0$0 == 0x00b5
                           0000B5   491 _P74OUT	=	0x00b5
                           0000B6   492 G$FLSCL$0$0 == 0x00b6
                           0000B6   493 _FLSCL	=	0x00b6
                           0000B7   494 G$FLACL$0$0 == 0x00b7
                           0000B7   495 _FLACL	=	0x00b7
                           0000B8   496 G$IP$0$0 == 0x00b8
                           0000B8   497 _IP	=	0x00b8
                           0000B9   498 G$SADEN0$0$0 == 0x00b9
                           0000B9   499 _SADEN0	=	0x00b9
                           0000BA   500 G$AMX0CF$0$0 == 0x00ba
                           0000BA   501 _AMX0CF	=	0x00ba
                           0000BB   502 G$AMX0SL$0$0 == 0x00bb
                           0000BB   503 _AMX0SL	=	0x00bb
                           0000BC   504 G$ADC0CF$0$0 == 0x00bc
                           0000BC   505 _ADC0CF	=	0x00bc
                           0000BD   506 G$P1MDIN$0$0 == 0x00bd
                           0000BD   507 _P1MDIN	=	0x00bd
                           0000BE   508 G$ADC0L$0$0 == 0x00be
                           0000BE   509 _ADC0L	=	0x00be
                           0000BF   510 G$ADC0H$0$0 == 0x00bf
                           0000BF   511 _ADC0H	=	0x00bf
                           0000C0   512 G$SMB0CN$0$0 == 0x00c0
                           0000C0   513 _SMB0CN	=	0x00c0
                           0000C1   514 G$SMB0STA$0$0 == 0x00c1
                           0000C1   515 _SMB0STA	=	0x00c1
                           0000C2   516 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   517 _SMB0DAT	=	0x00c2
                           0000C3   518 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   519 _SMB0ADR	=	0x00c3
                           0000C4   520 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   521 _ADC0GTL	=	0x00c4
                           0000C5   522 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   523 _ADC0GTH	=	0x00c5
                           0000C6   524 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   525 _ADC0LTL	=	0x00c6
                           0000C7   526 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   527 _ADC0LTH	=	0x00c7
                           0000C8   528 G$T2CON$0$0 == 0x00c8
                           0000C8   529 _T2CON	=	0x00c8
                           0000C9   530 G$T4CON$0$0 == 0x00c9
                           0000C9   531 _T4CON	=	0x00c9
                           0000CA   532 G$RCAP2L$0$0 == 0x00ca
                           0000CA   533 _RCAP2L	=	0x00ca
                           0000CB   534 G$RCAP2H$0$0 == 0x00cb
                           0000CB   535 _RCAP2H	=	0x00cb
                           0000CC   536 G$TL2$0$0 == 0x00cc
                           0000CC   537 _TL2	=	0x00cc
                           0000CD   538 G$TH2$0$0 == 0x00cd
                           0000CD   539 _TH2	=	0x00cd
                           0000CF   540 G$SMB0CR$0$0 == 0x00cf
                           0000CF   541 _SMB0CR	=	0x00cf
                           0000D0   542 G$PSW$0$0 == 0x00d0
                           0000D0   543 _PSW	=	0x00d0
                           0000D1   544 G$REF0CN$0$0 == 0x00d1
                           0000D1   545 _REF0CN	=	0x00d1
                           0000D2   546 G$DAC0L$0$0 == 0x00d2
                           0000D2   547 _DAC0L	=	0x00d2
                           0000D3   548 G$DAC0H$0$0 == 0x00d3
                           0000D3   549 _DAC0H	=	0x00d3
                           0000D4   550 G$DAC0CN$0$0 == 0x00d4
                           0000D4   551 _DAC0CN	=	0x00d4
                           0000D5   552 G$DAC1L$0$0 == 0x00d5
                           0000D5   553 _DAC1L	=	0x00d5
                           0000D6   554 G$DAC1H$0$0 == 0x00d6
                           0000D6   555 _DAC1H	=	0x00d6
                           0000D7   556 G$DAC1CN$0$0 == 0x00d7
                           0000D7   557 _DAC1CN	=	0x00d7
                           0000D8   558 G$PCA0CN$0$0 == 0x00d8
                           0000D8   559 _PCA0CN	=	0x00d8
                           0000D9   560 G$PCA0MD$0$0 == 0x00d9
                           0000D9   561 _PCA0MD	=	0x00d9
                           0000DA   562 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   563 _PCA0CPM0	=	0x00da
                           0000DB   564 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   565 _PCA0CPM1	=	0x00db
                           0000DC   566 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   567 _PCA0CPM2	=	0x00dc
                           0000DD   568 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   569 _PCA0CPM3	=	0x00dd
                           0000DE   570 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   571 _PCA0CPM4	=	0x00de
                           0000E0   572 G$ACC$0$0 == 0x00e0
                           0000E0   573 _ACC	=	0x00e0
                           0000E1   574 G$XBR0$0$0 == 0x00e1
                           0000E1   575 _XBR0	=	0x00e1
                           0000E2   576 G$XBR1$0$0 == 0x00e2
                           0000E2   577 _XBR1	=	0x00e2
                           0000E3   578 G$XBR2$0$0 == 0x00e3
                           0000E3   579 _XBR2	=	0x00e3
                           0000E4   580 G$RCAP4L$0$0 == 0x00e4
                           0000E4   581 _RCAP4L	=	0x00e4
                           0000E5   582 G$RCAP4H$0$0 == 0x00e5
                           0000E5   583 _RCAP4H	=	0x00e5
                           0000E6   584 G$EIE1$0$0 == 0x00e6
                           0000E6   585 _EIE1	=	0x00e6
                           0000E7   586 G$EIE2$0$0 == 0x00e7
                           0000E7   587 _EIE2	=	0x00e7
                           0000E8   588 G$ADC0CN$0$0 == 0x00e8
                           0000E8   589 _ADC0CN	=	0x00e8
                           0000E9   590 G$PCA0L$0$0 == 0x00e9
                           0000E9   591 _PCA0L	=	0x00e9
                           0000EA   592 G$PCA0CPL0$0$0 == 0x00ea
                           0000EA   593 _PCA0CPL0	=	0x00ea
                           0000EB   594 G$PCA0CPL1$0$0 == 0x00eb
                           0000EB   595 _PCA0CPL1	=	0x00eb
                           0000EC   596 G$PCA0CPL2$0$0 == 0x00ec
                           0000EC   597 _PCA0CPL2	=	0x00ec
                           0000ED   598 G$PCA0CPL3$0$0 == 0x00ed
                           0000ED   599 _PCA0CPL3	=	0x00ed
                           0000EE   600 G$PCA0CPL4$0$0 == 0x00ee
                           0000EE   601 _PCA0CPL4	=	0x00ee
                           0000EF   602 G$RSTSRC$0$0 == 0x00ef
                           0000EF   603 _RSTSRC	=	0x00ef
                           0000F0   604 G$B$0$0 == 0x00f0
                           0000F0   605 _B	=	0x00f0
                           0000F1   606 G$SCON1$0$0 == 0x00f1
                           0000F1   607 _SCON1	=	0x00f1
                           0000F2   608 G$SBUF1$0$0 == 0x00f2
                           0000F2   609 _SBUF1	=	0x00f2
                           0000F3   610 G$SADDR1$0$0 == 0x00f3
                           0000F3   611 _SADDR1	=	0x00f3
                           0000F4   612 G$TL4$0$0 == 0x00f4
                           0000F4   613 _TL4	=	0x00f4
                           0000F5   614 G$TH4$0$0 == 0x00f5
                           0000F5   615 _TH4	=	0x00f5
                           0000F6   616 G$EIP1$0$0 == 0x00f6
                           0000F6   617 _EIP1	=	0x00f6
                           0000F7   618 G$EIP2$0$0 == 0x00f7
                           0000F7   619 _EIP2	=	0x00f7
                           0000F8   620 G$SPI0CN$0$0 == 0x00f8
                           0000F8   621 _SPI0CN	=	0x00f8
                           0000F9   622 G$PCA0H$0$0 == 0x00f9
                           0000F9   623 _PCA0H	=	0x00f9
                           0000FA   624 G$PCA0CPH0$0$0 == 0x00fa
                           0000FA   625 _PCA0CPH0	=	0x00fa
                           0000FB   626 G$PCA0CPH1$0$0 == 0x00fb
                           0000FB   627 _PCA0CPH1	=	0x00fb
                           0000FC   628 G$PCA0CPH2$0$0 == 0x00fc
                           0000FC   629 _PCA0CPH2	=	0x00fc
                           0000FD   630 G$PCA0CPH3$0$0 == 0x00fd
                           0000FD   631 _PCA0CPH3	=	0x00fd
                           0000FE   632 G$PCA0CPH4$0$0 == 0x00fe
                           0000FE   633 _PCA0CPH4	=	0x00fe
                           0000FF   634 G$WDTCN$0$0 == 0x00ff
                           0000FF   635 _WDTCN	=	0x00ff
                           008C8A   636 G$TMR0$0$0 == 0x8c8a
                           008C8A   637 _TMR0	=	0x8c8a
                           008D8B   638 G$TMR1$0$0 == 0x8d8b
                           008D8B   639 _TMR1	=	0x8d8b
                           00CDCC   640 G$TMR2$0$0 == 0xcdcc
                           00CDCC   641 _TMR2	=	0xcdcc
                           00CBCA   642 G$RCAP2$0$0 == 0xcbca
                           00CBCA   643 _RCAP2	=	0xcbca
                           009594   644 G$TMR3$0$0 == 0x9594
                           009594   645 _TMR3	=	0x9594
                           009392   646 G$TMR3RL$0$0 == 0x9392
                           009392   647 _TMR3RL	=	0x9392
                           00F5F4   648 G$TMR4$0$0 == 0xf5f4
                           00F5F4   649 _TMR4	=	0xf5f4
                           00E5E4   650 G$RCAP4$0$0 == 0xe5e4
                           00E5E4   651 _RCAP4	=	0xe5e4
                           00BFBE   652 G$ADC0$0$0 == 0xbfbe
                           00BFBE   653 _ADC0	=	0xbfbe
                           00C5C4   654 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   655 _ADC0GT	=	0xc5c4
                           00C7C6   656 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   657 _ADC0LT	=	0xc7c6
                           00D3D2   658 G$DAC0$0$0 == 0xd3d2
                           00D3D2   659 _DAC0	=	0xd3d2
                           00D6D5   660 G$DAC1$0$0 == 0xd6d5
                           00D6D5   661 _DAC1	=	0xd6d5
                           00F9E9   662 G$PCA0$0$0 == 0xf9e9
                           00F9E9   663 _PCA0	=	0xf9e9
                           00FAEA   664 G$PCA0CP0$0$0 == 0xfaea
                           00FAEA   665 _PCA0CP0	=	0xfaea
                           00FBEB   666 G$PCA0CP1$0$0 == 0xfbeb
                           00FBEB   667 _PCA0CP1	=	0xfbeb
                           00FCEC   668 G$PCA0CP2$0$0 == 0xfcec
                           00FCEC   669 _PCA0CP2	=	0xfcec
                           00FDED   670 G$PCA0CP3$0$0 == 0xfded
                           00FDED   671 _PCA0CP3	=	0xfded
                           00FEEE   672 G$PCA0CP4$0$0 == 0xfeee
                           00FEEE   673 _PCA0CP4	=	0xfeee
                                    674 ;--------------------------------------------------------
                                    675 ; special function bits
                                    676 ;--------------------------------------------------------
                                    677 	.area RSEG    (ABS,DATA)
      000000                        678 	.org 0x0000
                           000080   679 G$P0_0$0$0 == 0x0080
                           000080   680 _P0_0	=	0x0080
                           000081   681 G$P0_1$0$0 == 0x0081
                           000081   682 _P0_1	=	0x0081
                           000082   683 G$P0_2$0$0 == 0x0082
                           000082   684 _P0_2	=	0x0082
                           000083   685 G$P0_3$0$0 == 0x0083
                           000083   686 _P0_3	=	0x0083
                           000084   687 G$P0_4$0$0 == 0x0084
                           000084   688 _P0_4	=	0x0084
                           000085   689 G$P0_5$0$0 == 0x0085
                           000085   690 _P0_5	=	0x0085
                           000086   691 G$P0_6$0$0 == 0x0086
                           000086   692 _P0_6	=	0x0086
                           000087   693 G$P0_7$0$0 == 0x0087
                           000087   694 _P0_7	=	0x0087
                           000088   695 G$IT0$0$0 == 0x0088
                           000088   696 _IT0	=	0x0088
                           000089   697 G$IE0$0$0 == 0x0089
                           000089   698 _IE0	=	0x0089
                           00008A   699 G$IT1$0$0 == 0x008a
                           00008A   700 _IT1	=	0x008a
                           00008B   701 G$IE1$0$0 == 0x008b
                           00008B   702 _IE1	=	0x008b
                           00008C   703 G$TR0$0$0 == 0x008c
                           00008C   704 _TR0	=	0x008c
                           00008D   705 G$TF0$0$0 == 0x008d
                           00008D   706 _TF0	=	0x008d
                           00008E   707 G$TR1$0$0 == 0x008e
                           00008E   708 _TR1	=	0x008e
                           00008F   709 G$TF1$0$0 == 0x008f
                           00008F   710 _TF1	=	0x008f
                           000090   711 G$P1_0$0$0 == 0x0090
                           000090   712 _P1_0	=	0x0090
                           000091   713 G$P1_1$0$0 == 0x0091
                           000091   714 _P1_1	=	0x0091
                           000092   715 G$P1_2$0$0 == 0x0092
                           000092   716 _P1_2	=	0x0092
                           000093   717 G$P1_3$0$0 == 0x0093
                           000093   718 _P1_3	=	0x0093
                           000094   719 G$P1_4$0$0 == 0x0094
                           000094   720 _P1_4	=	0x0094
                           000095   721 G$P1_5$0$0 == 0x0095
                           000095   722 _P1_5	=	0x0095
                           000096   723 G$P1_6$0$0 == 0x0096
                           000096   724 _P1_6	=	0x0096
                           000097   725 G$P1_7$0$0 == 0x0097
                           000097   726 _P1_7	=	0x0097
                           000098   727 G$RI$0$0 == 0x0098
                           000098   728 _RI	=	0x0098
                           000098   729 G$RI0$0$0 == 0x0098
                           000098   730 _RI0	=	0x0098
                           000099   731 G$TI$0$0 == 0x0099
                           000099   732 _TI	=	0x0099
                           000099   733 G$TI0$0$0 == 0x0099
                           000099   734 _TI0	=	0x0099
                           00009A   735 G$RB8$0$0 == 0x009a
                           00009A   736 _RB8	=	0x009a
                           00009A   737 G$RB80$0$0 == 0x009a
                           00009A   738 _RB80	=	0x009a
                           00009B   739 G$TB8$0$0 == 0x009b
                           00009B   740 _TB8	=	0x009b
                           00009B   741 G$TB80$0$0 == 0x009b
                           00009B   742 _TB80	=	0x009b
                           00009C   743 G$REN$0$0 == 0x009c
                           00009C   744 _REN	=	0x009c
                           00009C   745 G$REN0$0$0 == 0x009c
                           00009C   746 _REN0	=	0x009c
                           00009D   747 G$SM2$0$0 == 0x009d
                           00009D   748 _SM2	=	0x009d
                           00009D   749 G$SM20$0$0 == 0x009d
                           00009D   750 _SM20	=	0x009d
                           00009D   751 G$MCE0$0$0 == 0x009d
                           00009D   752 _MCE0	=	0x009d
                           00009E   753 G$SM1$0$0 == 0x009e
                           00009E   754 _SM1	=	0x009e
                           00009E   755 G$SM10$0$0 == 0x009e
                           00009E   756 _SM10	=	0x009e
                           00009F   757 G$SM0$0$0 == 0x009f
                           00009F   758 _SM0	=	0x009f
                           00009F   759 G$SM00$0$0 == 0x009f
                           00009F   760 _SM00	=	0x009f
                           00009F   761 G$S0MODE$0$0 == 0x009f
                           00009F   762 _S0MODE	=	0x009f
                           0000A0   763 G$P2_0$0$0 == 0x00a0
                           0000A0   764 _P2_0	=	0x00a0
                           0000A1   765 G$P2_1$0$0 == 0x00a1
                           0000A1   766 _P2_1	=	0x00a1
                           0000A2   767 G$P2_2$0$0 == 0x00a2
                           0000A2   768 _P2_2	=	0x00a2
                           0000A3   769 G$P2_3$0$0 == 0x00a3
                           0000A3   770 _P2_3	=	0x00a3
                           0000A4   771 G$P2_4$0$0 == 0x00a4
                           0000A4   772 _P2_4	=	0x00a4
                           0000A5   773 G$P2_5$0$0 == 0x00a5
                           0000A5   774 _P2_5	=	0x00a5
                           0000A6   775 G$P2_6$0$0 == 0x00a6
                           0000A6   776 _P2_6	=	0x00a6
                           0000A7   777 G$P2_7$0$0 == 0x00a7
                           0000A7   778 _P2_7	=	0x00a7
                           0000A8   779 G$EX0$0$0 == 0x00a8
                           0000A8   780 _EX0	=	0x00a8
                           0000A9   781 G$ET0$0$0 == 0x00a9
                           0000A9   782 _ET0	=	0x00a9
                           0000AA   783 G$EX1$0$0 == 0x00aa
                           0000AA   784 _EX1	=	0x00aa
                           0000AB   785 G$ET1$0$0 == 0x00ab
                           0000AB   786 _ET1	=	0x00ab
                           0000AC   787 G$ES0$0$0 == 0x00ac
                           0000AC   788 _ES0	=	0x00ac
                           0000AC   789 G$ES$0$0 == 0x00ac
                           0000AC   790 _ES	=	0x00ac
                           0000AD   791 G$ET2$0$0 == 0x00ad
                           0000AD   792 _ET2	=	0x00ad
                           0000AF   793 G$EA$0$0 == 0x00af
                           0000AF   794 _EA	=	0x00af
                           0000B0   795 G$P3_0$0$0 == 0x00b0
                           0000B0   796 _P3_0	=	0x00b0
                           0000B1   797 G$P3_1$0$0 == 0x00b1
                           0000B1   798 _P3_1	=	0x00b1
                           0000B2   799 G$P3_2$0$0 == 0x00b2
                           0000B2   800 _P3_2	=	0x00b2
                           0000B3   801 G$P3_3$0$0 == 0x00b3
                           0000B3   802 _P3_3	=	0x00b3
                           0000B4   803 G$P3_4$0$0 == 0x00b4
                           0000B4   804 _P3_4	=	0x00b4
                           0000B5   805 G$P3_5$0$0 == 0x00b5
                           0000B5   806 _P3_5	=	0x00b5
                           0000B6   807 G$P3_6$0$0 == 0x00b6
                           0000B6   808 _P3_6	=	0x00b6
                           0000B7   809 G$P3_7$0$0 == 0x00b7
                           0000B7   810 _P3_7	=	0x00b7
                           0000B8   811 G$PX0$0$0 == 0x00b8
                           0000B8   812 _PX0	=	0x00b8
                           0000B9   813 G$PT0$0$0 == 0x00b9
                           0000B9   814 _PT0	=	0x00b9
                           0000BA   815 G$PX1$0$0 == 0x00ba
                           0000BA   816 _PX1	=	0x00ba
                           0000BB   817 G$PT1$0$0 == 0x00bb
                           0000BB   818 _PT1	=	0x00bb
                           0000BC   819 G$PS0$0$0 == 0x00bc
                           0000BC   820 _PS0	=	0x00bc
                           0000BC   821 G$PS$0$0 == 0x00bc
                           0000BC   822 _PS	=	0x00bc
                           0000BD   823 G$PT2$0$0 == 0x00bd
                           0000BD   824 _PT2	=	0x00bd
                           0000C0   825 G$SMBTOE$0$0 == 0x00c0
                           0000C0   826 _SMBTOE	=	0x00c0
                           0000C1   827 G$SMBFTE$0$0 == 0x00c1
                           0000C1   828 _SMBFTE	=	0x00c1
                           0000C2   829 G$AA$0$0 == 0x00c2
                           0000C2   830 _AA	=	0x00c2
                           0000C3   831 G$SI$0$0 == 0x00c3
                           0000C3   832 _SI	=	0x00c3
                           0000C4   833 G$STO$0$0 == 0x00c4
                           0000C4   834 _STO	=	0x00c4
                           0000C5   835 G$STA$0$0 == 0x00c5
                           0000C5   836 _STA	=	0x00c5
                           0000C6   837 G$ENSMB$0$0 == 0x00c6
                           0000C6   838 _ENSMB	=	0x00c6
                           0000C7   839 G$BUSY$0$0 == 0x00c7
                           0000C7   840 _BUSY	=	0x00c7
                           0000C8   841 G$CPRL2$0$0 == 0x00c8
                           0000C8   842 _CPRL2	=	0x00c8
                           0000C9   843 G$CT2$0$0 == 0x00c9
                           0000C9   844 _CT2	=	0x00c9
                           0000CA   845 G$TR2$0$0 == 0x00ca
                           0000CA   846 _TR2	=	0x00ca
                           0000CB   847 G$EXEN2$0$0 == 0x00cb
                           0000CB   848 _EXEN2	=	0x00cb
                           0000CC   849 G$TCLK$0$0 == 0x00cc
                           0000CC   850 _TCLK	=	0x00cc
                           0000CD   851 G$RCLK$0$0 == 0x00cd
                           0000CD   852 _RCLK	=	0x00cd
                           0000CE   853 G$EXF2$0$0 == 0x00ce
                           0000CE   854 _EXF2	=	0x00ce
                           0000CF   855 G$TF2$0$0 == 0x00cf
                           0000CF   856 _TF2	=	0x00cf
                           0000D0   857 G$P$0$0 == 0x00d0
                           0000D0   858 _P	=	0x00d0
                           0000D1   859 G$F1$0$0 == 0x00d1
                           0000D1   860 _F1	=	0x00d1
                           0000D2   861 G$OV$0$0 == 0x00d2
                           0000D2   862 _OV	=	0x00d2
                           0000D3   863 G$RS0$0$0 == 0x00d3
                           0000D3   864 _RS0	=	0x00d3
                           0000D4   865 G$RS1$0$0 == 0x00d4
                           0000D4   866 _RS1	=	0x00d4
                           0000D5   867 G$F0$0$0 == 0x00d5
                           0000D5   868 _F0	=	0x00d5
                           0000D6   869 G$AC$0$0 == 0x00d6
                           0000D6   870 _AC	=	0x00d6
                           0000D7   871 G$CY$0$0 == 0x00d7
                           0000D7   872 _CY	=	0x00d7
                           0000D8   873 G$CCF0$0$0 == 0x00d8
                           0000D8   874 _CCF0	=	0x00d8
                           0000D9   875 G$CCF1$0$0 == 0x00d9
                           0000D9   876 _CCF1	=	0x00d9
                           0000DA   877 G$CCF2$0$0 == 0x00da
                           0000DA   878 _CCF2	=	0x00da
                           0000DB   879 G$CCF3$0$0 == 0x00db
                           0000DB   880 _CCF3	=	0x00db
                           0000DC   881 G$CCF4$0$0 == 0x00dc
                           0000DC   882 _CCF4	=	0x00dc
                           0000DE   883 G$CR$0$0 == 0x00de
                           0000DE   884 _CR	=	0x00de
                           0000DF   885 G$CF$0$0 == 0x00df
                           0000DF   886 _CF	=	0x00df
                           0000E8   887 G$ADLJST$0$0 == 0x00e8
                           0000E8   888 _ADLJST	=	0x00e8
                           0000E8   889 G$AD0LJST$0$0 == 0x00e8
                           0000E8   890 _AD0LJST	=	0x00e8
                           0000E9   891 G$ADWINT$0$0 == 0x00e9
                           0000E9   892 _ADWINT	=	0x00e9
                           0000E9   893 G$AD0WINT$0$0 == 0x00e9
                           0000E9   894 _AD0WINT	=	0x00e9
                           0000EA   895 G$ADSTM0$0$0 == 0x00ea
                           0000EA   896 _ADSTM0	=	0x00ea
                           0000EA   897 G$AD0CM0$0$0 == 0x00ea
                           0000EA   898 _AD0CM0	=	0x00ea
                           0000EB   899 G$ADSTM1$0$0 == 0x00eb
                           0000EB   900 _ADSTM1	=	0x00eb
                           0000EB   901 G$AD0CM1$0$0 == 0x00eb
                           0000EB   902 _AD0CM1	=	0x00eb
                           0000EC   903 G$ADBUSY$0$0 == 0x00ec
                           0000EC   904 _ADBUSY	=	0x00ec
                           0000EC   905 G$AD0BUSY$0$0 == 0x00ec
                           0000EC   906 _AD0BUSY	=	0x00ec
                           0000ED   907 G$ADCINT$0$0 == 0x00ed
                           0000ED   908 _ADCINT	=	0x00ed
                           0000ED   909 G$AD0INT$0$0 == 0x00ed
                           0000ED   910 _AD0INT	=	0x00ed
                           0000EE   911 G$ADCTM$0$0 == 0x00ee
                           0000EE   912 _ADCTM	=	0x00ee
                           0000EE   913 G$AD0TM$0$0 == 0x00ee
                           0000EE   914 _AD0TM	=	0x00ee
                           0000EF   915 G$ADCEN$0$0 == 0x00ef
                           0000EF   916 _ADCEN	=	0x00ef
                           0000EF   917 G$AD0EN$0$0 == 0x00ef
                           0000EF   918 _AD0EN	=	0x00ef
                           0000F8   919 G$SPIEN$0$0 == 0x00f8
                           0000F8   920 _SPIEN	=	0x00f8
                           0000F9   921 G$MSTEN$0$0 == 0x00f9
                           0000F9   922 _MSTEN	=	0x00f9
                           0000FA   923 G$SLVSEL$0$0 == 0x00fa
                           0000FA   924 _SLVSEL	=	0x00fa
                           0000FB   925 G$TXBSY$0$0 == 0x00fb
                           0000FB   926 _TXBSY	=	0x00fb
                           0000FC   927 G$RXOVRN$0$0 == 0x00fc
                           0000FC   928 _RXOVRN	=	0x00fc
                           0000FD   929 G$MODF$0$0 == 0x00fd
                           0000FD   930 _MODF	=	0x00fd
                           0000FE   931 G$WCOL$0$0 == 0x00fe
                           0000FE   932 _WCOL	=	0x00fe
                           0000FF   933 G$SPIF$0$0 == 0x00ff
                           0000FF   934 _SPIF	=	0x00ff
                           0000C7   935 G$BUS_BUSY$0$0 == 0x00c7
                           0000C7   936 _BUS_BUSY	=	0x00c7
                           0000C6   937 G$BUS_EN$0$0 == 0x00c6
                           0000C6   938 _BUS_EN	=	0x00c6
                           0000C5   939 G$BUS_START$0$0 == 0x00c5
                           0000C5   940 _BUS_START	=	0x00c5
                           0000C4   941 G$BUS_STOP$0$0 == 0x00c4
                           0000C4   942 _BUS_STOP	=	0x00c4
                           0000C3   943 G$BUS_INT$0$0 == 0x00c3
                           0000C3   944 _BUS_INT	=	0x00c3
                           0000C2   945 G$BUS_AA$0$0 == 0x00c2
                           0000C2   946 _BUS_AA	=	0x00c2
                           0000C1   947 G$BUS_FTE$0$0 == 0x00c1
                           0000C1   948 _BUS_FTE	=	0x00c1
                           0000C0   949 G$BUS_TOE$0$0 == 0x00c0
                           0000C0   950 _BUS_TOE	=	0x00c0
                           000083   951 G$BUS_SCL$0$0 == 0x0083
                           000083   952 _BUS_SCL	=	0x0083
                                    953 ;--------------------------------------------------------
                                    954 ; overlayable register banks
                                    955 ;--------------------------------------------------------
                                    956 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        957 	.ds 8
                                    958 ;--------------------------------------------------------
                                    959 ; internal ram data
                                    960 ;--------------------------------------------------------
                                    961 	.area DSEG    (DATA)
                           000000   962 Llab6.lcd_clear$NumBytes$1$77==.
      000022                        963 _lcd_clear_NumBytes_1_77:
      000022                        964 	.ds 1
                           000001   965 Llab6.lcd_clear$Cmd$1$77==.
      000023                        966 _lcd_clear_Cmd_1_77:
      000023                        967 	.ds 2
                           000003   968 Llab6.read_keypad$Data$1$78==.
      000025                        969 _read_keypad_Data_1_78:
      000025                        970 	.ds 2
                           000005   971 Llab6.i2c_write_data$start_reg$1$97==.
      000027                        972 _i2c_write_data_PARM_2:
      000027                        973 	.ds 1
                           000006   974 Llab6.i2c_write_data$buffer$1$97==.
      000028                        975 _i2c_write_data_PARM_3:
      000028                        976 	.ds 3
                           000009   977 Llab6.i2c_write_data$num_bytes$1$97==.
      00002B                        978 _i2c_write_data_PARM_4:
      00002B                        979 	.ds 1
                           00000A   980 Llab6.i2c_read_data$start_reg$1$99==.
      00002C                        981 _i2c_read_data_PARM_2:
      00002C                        982 	.ds 1
                           00000B   983 Llab6.i2c_read_data$buffer$1$99==.
      00002D                        984 _i2c_read_data_PARM_3:
      00002D                        985 	.ds 3
                           00000E   986 Llab6.i2c_read_data$num_bytes$1$99==.
      000030                        987 _i2c_read_data_PARM_4:
      000030                        988 	.ds 1
                           00000F   989 Llab6.Accel_Init$Data2$1$103==.
      000031                        990 _Accel_Init_Data2_1_103:
      000031                        991 	.ds 1
                           000010   992 G$count$0$0==.
      000032                        993 _count::
      000032                        994 	.ds 2
                           000012   995 G$PW_MIN_THRUST$0$0==.
      000034                        996 _PW_MIN_THRUST::
      000034                        997 	.ds 2
                           000014   998 G$PW_NUET_THRUST$0$0==.
      000036                        999 _PW_NUET_THRUST::
      000036                       1000 	.ds 2
                           000016  1001 G$PW_MAX_THRUST$0$0==.
      000038                       1002 _PW_MAX_THRUST::
      000038                       1003 	.ds 2
                           000018  1004 G$PW_LEFT_RUDDER$0$0==.
      00003A                       1005 _PW_LEFT_RUDDER::
      00003A                       1006 	.ds 2
                           00001A  1007 G$PW_CENTER_RUDDER$0$0==.
      00003C                       1008 _PW_CENTER_RUDDER::
      00003C                       1009 	.ds 2
                           00001C  1010 G$PW_RIGHT_RUDDER$0$0==.
      00003E                       1011 _PW_RIGHT_RUDDER::
      00003E                       1012 	.ds 2
                           00001E  1013 G$PW_UP_ANGLE$0$0==.
      000040                       1014 _PW_UP_ANGLE::
      000040                       1015 	.ds 2
                           000020  1016 G$PW_CENTER_ANGLE$0$0==.
      000042                       1017 _PW_CENTER_ANGLE::
      000042                       1018 	.ds 2
                           000022  1019 G$PW_DOWN_ANGLE$0$0==.
      000044                       1020 _PW_DOWN_ANGLE::
      000044                       1021 	.ds 2
                           000024  1022 G$RUDDER_PW$0$0==.
      000046                       1023 _RUDDER_PW::
      000046                       1024 	.ds 2
                           000026  1025 G$RDR_lo_to_hi$0$0==.
      000048                       1026 _RDR_lo_to_hi::
      000048                       1027 	.ds 2
                           000028  1028 G$ANGLE_PW$0$0==.
      00004A                       1029 _ANGLE_PW::
      00004A                       1030 	.ds 2
                           00002A  1031 G$AGL_lo_to_hi$0$0==.
      00004C                       1032 _AGL_lo_to_hi::
      00004C                       1033 	.ds 2
                           00002C  1034 G$RTHRUST_PW$0$0==.
      00004E                       1035 _RTHRUST_PW::
      00004E                       1036 	.ds 2
                           00002E  1037 G$LTHRUST_PW$0$0==.
      000050                       1038 _LTHRUST_PW::
      000050                       1039 	.ds 2
                           000030  1040 G$RTRST_lo_to_hi$0$0==.
      000052                       1041 _RTRST_lo_to_hi::
      000052                       1042 	.ds 2
                           000032  1043 G$LTRST_lo_to_hi$0$0==.
      000054                       1044 _LTRST_lo_to_hi::
      000054                       1045 	.ds 2
                           000034  1046 G$offset$0$0==.
      000056                       1047 _offset::
      000056                       1048 	.ds 2
                           000036  1049 G$r_data$0$0==.
      000058                       1050 _r_data::
      000058                       1051 	.ds 2
                           000038  1052 G$r_addr$0$0==.
      00005A                       1053 _r_addr::
      00005A                       1054 	.ds 1
                           000039  1055 G$kp$0$0==.
      00005B                       1056 _kp::
      00005B                       1057 	.ds 2
                           00003B  1058 G$kd$0$0==.
      00005D                       1059 _kd::
      00005D                       1060 	.ds 2
                           00003D  1061 G$ratio$0$0==.
      00005F                       1062 _ratio::
      00005F                       1063 	.ds 2
                           00003F  1064 G$dratio$0$0==.
      000061                       1065 _dratio::
      000061                       1066 	.ds 2
                           000041  1067 Llab6.ReadCompass$Data$1$142==.
      000063                       1068 _ReadCompass_Data_1_142:
      000063                       1069 	.ds 2
                                   1070 ;--------------------------------------------------------
                                   1071 ; overlayable items in internal ram 
                                   1072 ;--------------------------------------------------------
                                   1073 	.area	OSEG    (OVR,DATA)
                                   1074 	.area	OSEG    (OVR,DATA)
                                   1075 	.area	OSEG    (OVR,DATA)
                                   1076 	.area	OSEG    (OVR,DATA)
                                   1077 	.area	OSEG    (OVR,DATA)
                                   1078 	.area	OSEG    (OVR,DATA)
                                   1079 	.area	OSEG    (OVR,DATA)
                                   1080 ;--------------------------------------------------------
                                   1081 ; Stack segment in internal ram 
                                   1082 ;--------------------------------------------------------
                                   1083 	.area	SSEG
      00007F                       1084 __start__stack:
      00007F                       1085 	.ds	1
                                   1086 
                                   1087 ;--------------------------------------------------------
                                   1088 ; indirectly addressable internal ram data
                                   1089 ;--------------------------------------------------------
                                   1090 	.area ISEG    (DATA)
                                   1091 ;--------------------------------------------------------
                                   1092 ; absolute internal ram data
                                   1093 ;--------------------------------------------------------
                                   1094 	.area IABS    (ABS,DATA)
                                   1095 	.area IABS    (ABS,DATA)
                                   1096 ;--------------------------------------------------------
                                   1097 ; bit data
                                   1098 ;--------------------------------------------------------
                                   1099 	.area BSEG    (BIT)
                                   1100 ;--------------------------------------------------------
                                   1101 ; paged external ram data
                                   1102 ;--------------------------------------------------------
                                   1103 	.area PSEG    (PAG,XDATA)
                                   1104 ;--------------------------------------------------------
                                   1105 ; external ram data
                                   1106 ;--------------------------------------------------------
                                   1107 	.area XSEG    (XDATA)
                           000000  1108 Llab6.lcd_print$text$1$73==.
      000001                       1109 _lcd_print_text_1_73:
      000001                       1110 	.ds 80
                           000050  1111 G$desired_D$0$0==.
      000051                       1112 _desired_D::
      000051                       1113 	.ds 2
                           000052  1114 G$actual_D$0$0==.
      000053                       1115 _actual_D::
      000053                       1116 	.ds 2
                           000054  1117 Llab6.Change_D$distance$1$132==.
      000055                       1118 _Change_D_distance_1_132:
      000055                       1119 	.ds 2
                           000056  1120 Llab6.Change_D$temp$1$132==.
      000057                       1121 _Change_D_temp_1_132:
      000057                       1122 	.ds 2
                           000058  1123 Llab6.Rudder_cal$value$1$144==.
      000059                       1124 _Rudder_cal_value_1_144:
      000059                       1125 	.ds 2
                           00005A  1126 Llab6.Rudder_cal$times$1$144==.
      00005B                       1127 _Rudder_cal_times_1_144:
      00005B                       1128 	.ds 2
                           00005C  1129 Llab6.Angle_cal$value$1$163==.
      00005D                       1130 _Angle_cal_value_1_163:
      00005D                       1131 	.ds 2
                           00005E  1132 Llab6.Angle_cal$times$1$163==.
      00005F                       1133 _Angle_cal_times_1_163:
      00005F                       1134 	.ds 2
                           000060  1135 Llab6.Thrust_cal$value$1$182==.
      000061                       1136 _Thrust_cal_value_1_182:
      000061                       1137 	.ds 2
                           000062  1138 Llab6.Thrust_cal$times$1$182==.
      000063                       1139 _Thrust_cal_times_1_182:
      000063                       1140 	.ds 2
                           000064  1141 Llab6.wait$old_count$1$217==.
      000065                       1142 _wait_old_count_1_217:
      000065                       1143 	.ds 2
                                   1144 ;--------------------------------------------------------
                                   1145 ; absolute external ram data
                                   1146 ;--------------------------------------------------------
                                   1147 	.area XABS    (ABS,XDATA)
                                   1148 ;--------------------------------------------------------
                                   1149 ; external initialized ram data
                                   1150 ;--------------------------------------------------------
                                   1151 	.area XISEG   (XDATA)
                           000000  1152 G$error$0$0==.
      000067                       1153 _error::
      000067                       1154 	.ds 2
                           000002  1155 G$old_error$0$0==.
      000069                       1156 _old_error::
      000069                       1157 	.ds 2
                                   1158 	.area HOME    (CODE)
                                   1159 	.area GSINIT0 (CODE)
                                   1160 	.area GSINIT1 (CODE)
                                   1161 	.area GSINIT2 (CODE)
                                   1162 	.area GSINIT3 (CODE)
                                   1163 	.area GSINIT4 (CODE)
                                   1164 	.area GSINIT5 (CODE)
                                   1165 	.area GSINIT  (CODE)
                                   1166 	.area GSFINAL (CODE)
                                   1167 	.area CSEG    (CODE)
                                   1168 ;--------------------------------------------------------
                                   1169 ; interrupt vector 
                                   1170 ;--------------------------------------------------------
                                   1171 	.area HOME    (CODE)
      000000                       1172 __interrupt_vect:
      000000 02 00 51         [24] 1173 	ljmp	__sdcc_gsinit_startup
      000003 32               [24] 1174 	reti
      000004                       1175 	.ds	7
      00000B 32               [24] 1176 	reti
      00000C                       1177 	.ds	7
      000013 32               [24] 1178 	reti
      000014                       1179 	.ds	7
      00001B 32               [24] 1180 	reti
      00001C                       1181 	.ds	7
      000023 32               [24] 1182 	reti
      000024                       1183 	.ds	7
      00002B 32               [24] 1184 	reti
      00002C                       1185 	.ds	7
      000033 32               [24] 1186 	reti
      000034                       1187 	.ds	7
      00003B 32               [24] 1188 	reti
      00003C                       1189 	.ds	7
      000043 32               [24] 1190 	reti
      000044                       1191 	.ds	7
      00004B 02 13 CD         [24] 1192 	ljmp	_PCA_ISR
                                   1193 ;--------------------------------------------------------
                                   1194 ; global & static initialisations
                                   1195 ;--------------------------------------------------------
                                   1196 	.area HOME    (CODE)
                                   1197 	.area GSINIT  (CODE)
                                   1198 	.area GSFINAL (CODE)
                                   1199 	.area GSINIT  (CODE)
                                   1200 	.globl __sdcc_gsinit_startup
                                   1201 	.globl __sdcc_program_startup
                                   1202 	.globl __start__stack
                                   1203 	.globl __mcs51_genXINIT
                                   1204 	.globl __mcs51_genXRAMCLEAR
                                   1205 	.globl __mcs51_genRAMCLEAR
                           000000  1206 	C$lab6.c$45$1$229 ==.
                                   1207 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:45: int count=0;
      0000AA E4               [12] 1208 	clr	a
      0000AB F5 32            [12] 1209 	mov	_count,a
      0000AD F5 33            [12] 1210 	mov	(_count + 1),a
                           000005  1211 	C$lab6.c$46$1$229 ==.
                                   1212 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:46: unsigned int PW_MIN_THRUST = 2000;
      0000AF 75 34 D0         [24] 1213 	mov	_PW_MIN_THRUST,#0xD0
      0000B2 75 35 07         [24] 1214 	mov	(_PW_MIN_THRUST + 1),#0x07
                           00000B  1215 	C$lab6.c$47$1$229 ==.
                                   1216 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:47: unsigned int PW_NUET_THRUST = 2750;
      0000B5 75 36 BE         [24] 1217 	mov	_PW_NUET_THRUST,#0xBE
      0000B8 75 37 0A         [24] 1218 	mov	(_PW_NUET_THRUST + 1),#0x0A
                           000011  1219 	C$lab6.c$48$1$229 ==.
                                   1220 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:48: unsigned int PW_MAX_THRUST = 3500;
      0000BB 75 38 AC         [24] 1221 	mov	_PW_MAX_THRUST,#0xAC
      0000BE 75 39 0D         [24] 1222 	mov	(_PW_MAX_THRUST + 1),#0x0D
                           000017  1223 	C$lab6.c$50$1$229 ==.
                                   1224 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:50: unsigned int PW_LEFT_RUDDER = 2000;
      0000C1 75 3A D0         [24] 1225 	mov	_PW_LEFT_RUDDER,#0xD0
      0000C4 75 3B 07         [24] 1226 	mov	(_PW_LEFT_RUDDER + 1),#0x07
                           00001D  1227 	C$lab6.c$51$1$229 ==.
                                   1228 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:51: unsigned int PW_CENTER_RUDDER = 2750;
      0000C7 75 3C BE         [24] 1229 	mov	_PW_CENTER_RUDDER,#0xBE
      0000CA 75 3D 0A         [24] 1230 	mov	(_PW_CENTER_RUDDER + 1),#0x0A
                           000023  1231 	C$lab6.c$52$1$229 ==.
                                   1232 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:52: unsigned int PW_RIGHT_RUDDER = 3500;
      0000CD 75 3E AC         [24] 1233 	mov	_PW_RIGHT_RUDDER,#0xAC
      0000D0 75 3F 0D         [24] 1234 	mov	(_PW_RIGHT_RUDDER + 1),#0x0D
                           000029  1235 	C$lab6.c$54$1$229 ==.
                                   1236 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:54: unsigned int PW_UP_ANGLE = 2880;
      0000D3 75 40 40         [24] 1237 	mov	_PW_UP_ANGLE,#0x40
      0000D6 75 41 0B         [24] 1238 	mov	(_PW_UP_ANGLE + 1),#0x0B
                           00002F  1239 	C$lab6.c$55$1$229 ==.
                                   1240 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:55: unsigned int PW_CENTER_ANGLE = 3530;
      0000D9 75 42 CA         [24] 1241 	mov	_PW_CENTER_ANGLE,#0xCA
      0000DC 75 43 0D         [24] 1242 	mov	(_PW_CENTER_ANGLE + 1),#0x0D
                           000035  1243 	C$lab6.c$56$1$229 ==.
                                   1244 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:56: unsigned int PW_DOWN_ANGLE = 4180;
      0000DF 75 44 54         [24] 1245 	mov	_PW_DOWN_ANGLE,#0x54
      0000E2 75 45 10         [24] 1246 	mov	(_PW_DOWN_ANGLE + 1),#0x10
                           00003B  1247 	C$lab6.c$75$1$229 ==.
                                   1248 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:75: unsigned char r_addr = 0xE0;
      0000E5 75 5A E0         [24] 1249 	mov	_r_addr,#0xE0
                                   1250 	.area GSFINAL (CODE)
      0000E8 02 00 4E         [24] 1251 	ljmp	__sdcc_program_startup
                                   1252 ;--------------------------------------------------------
                                   1253 ; Home
                                   1254 ;--------------------------------------------------------
                                   1255 	.area HOME    (CODE)
                                   1256 	.area HOME    (CODE)
      00004E                       1257 __sdcc_program_startup:
      00004E 02 05 C1         [24] 1258 	ljmp	_main
                                   1259 ;	return from main will return to caller
                                   1260 ;--------------------------------------------------------
                                   1261 ; code
                                   1262 ;--------------------------------------------------------
                                   1263 	.area CSEG    (CODE)
                                   1264 ;------------------------------------------------------------
                                   1265 ;Allocation info for local variables in function 'SYSCLK_Init'
                                   1266 ;------------------------------------------------------------
                                   1267 ;i                         Allocated to registers 
                                   1268 ;------------------------------------------------------------
                           000000  1269 	G$SYSCLK_Init$0$0 ==.
                           000000  1270 	C$c8051_SDCC.h$42$0$0 ==.
                                   1271 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:42: void SYSCLK_Init(void)
                                   1272 ;	-----------------------------------------
                                   1273 ;	 function SYSCLK_Init
                                   1274 ;	-----------------------------------------
      0000EB                       1275 _SYSCLK_Init:
                           000007  1276 	ar7 = 0x07
                           000006  1277 	ar6 = 0x06
                           000005  1278 	ar5 = 0x05
                           000004  1279 	ar4 = 0x04
                           000003  1280 	ar3 = 0x03
                           000002  1281 	ar2 = 0x02
                           000001  1282 	ar1 = 0x01
                           000000  1283 	ar0 = 0x00
                           000000  1284 	C$c8051_SDCC.h$46$1$31 ==.
                                   1285 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:46: OSCXCN = 0x67;                      // start external oscillator with
      0000EB 75 B1 67         [24] 1286 	mov	_OSCXCN,#0x67
                           000003  1287 	C$c8051_SDCC.h$49$1$31 ==.
                                   1288 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:49: for (i=0; i < 256; i++);            // wait for oscillator to start
      0000EE 7E 00            [12] 1289 	mov	r6,#0x00
      0000F0 7F 01            [12] 1290 	mov	r7,#0x01
      0000F2                       1291 00107$:
      0000F2 1E               [12] 1292 	dec	r6
      0000F3 BE FF 01         [24] 1293 	cjne	r6,#0xFF,00121$
      0000F6 1F               [12] 1294 	dec	r7
      0000F7                       1295 00121$:
      0000F7 EE               [12] 1296 	mov	a,r6
      0000F8 4F               [12] 1297 	orl	a,r7
      0000F9 70 F7            [24] 1298 	jnz	00107$
                           000010  1299 	C$c8051_SDCC.h$51$1$31 ==.
                                   1300 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:51: while (!(OSCXCN & 0x80));           // Wait for crystal osc. to settle
      0000FB                       1301 00102$:
      0000FB E5 B1            [12] 1302 	mov	a,_OSCXCN
      0000FD 30 E7 FB         [24] 1303 	jnb	acc.7,00102$
                           000015  1304 	C$c8051_SDCC.h$53$1$31 ==.
                                   1305 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:53: OSCICN = 0x88;                      // select external oscillator as SYSCLK
      000100 75 B2 88         [24] 1306 	mov	_OSCICN,#0x88
                           000018  1307 	C$c8051_SDCC.h$56$1$31 ==.
                           000018  1308 	XG$SYSCLK_Init$0$0 ==.
      000103 22               [24] 1309 	ret
                                   1310 ;------------------------------------------------------------
                                   1311 ;Allocation info for local variables in function 'UART0_Init'
                                   1312 ;------------------------------------------------------------
                           000019  1313 	G$UART0_Init$0$0 ==.
                           000019  1314 	C$c8051_SDCC.h$64$1$31 ==.
                                   1315 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:64: void UART0_Init(void)
                                   1316 ;	-----------------------------------------
                                   1317 ;	 function UART0_Init
                                   1318 ;	-----------------------------------------
      000104                       1319 _UART0_Init:
                           000019  1320 	C$c8051_SDCC.h$66$1$33 ==.
                                   1321 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:66: SCON0  = 0x50;                      // SCON0: mode 1, 8-bit UART, enable RX
      000104 75 98 50         [24] 1322 	mov	_SCON0,#0x50
                           00001C  1323 	C$c8051_SDCC.h$67$1$33 ==.
                                   1324 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:67: TMOD   = 0x20;                      // TMOD: timer 1, mode 2, 8-bit reload
      000107 75 89 20         [24] 1325 	mov	_TMOD,#0x20
                           00001F  1326 	C$c8051_SDCC.h$68$1$33 ==.
                                   1327 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:68: TH1    = -(SYSCLK/BAUDRATE/16);     // set Timer1 reload value for baudrate
      00010A 75 8D DC         [24] 1328 	mov	_TH1,#0xDC
                           000022  1329 	C$c8051_SDCC.h$69$1$33 ==.
                                   1330 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:69: TR1    = 1;                         // start Timer1
      00010D D2 8E            [12] 1331 	setb	_TR1
                           000024  1332 	C$c8051_SDCC.h$70$1$33 ==.
                                   1333 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:70: CKCON |= 0x10;                      // Timer1 uses SYSCLK as time base
      00010F 43 8E 10         [24] 1334 	orl	_CKCON,#0x10
                           000027  1335 	C$c8051_SDCC.h$71$1$33 ==.
                                   1336 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:71: PCON  |= 0x80;                      // SMOD00 = 1 (disable baud rate 
      000112 43 87 80         [24] 1337 	orl	_PCON,#0x80
                           00002A  1338 	C$c8051_SDCC.h$73$1$33 ==.
                                   1339 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:73: TI0    = 1;                         // Indicate TX0 ready
      000115 D2 99            [12] 1340 	setb	_TI0
                           00002C  1341 	C$c8051_SDCC.h$74$1$33 ==.
                                   1342 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:74: P0MDOUT |= 0x01;                    // Set TX0 to push/pull
      000117 43 A4 01         [24] 1343 	orl	_P0MDOUT,#0x01
                           00002F  1344 	C$c8051_SDCC.h$75$1$33 ==.
                           00002F  1345 	XG$UART0_Init$0$0 ==.
      00011A 22               [24] 1346 	ret
                                   1347 ;------------------------------------------------------------
                                   1348 ;Allocation info for local variables in function 'Sys_Init'
                                   1349 ;------------------------------------------------------------
                           000030  1350 	G$Sys_Init$0$0 ==.
                           000030  1351 	C$c8051_SDCC.h$83$1$33 ==.
                                   1352 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:83: void Sys_Init(void)
                                   1353 ;	-----------------------------------------
                                   1354 ;	 function Sys_Init
                                   1355 ;	-----------------------------------------
      00011B                       1356 _Sys_Init:
                           000030  1357 	C$c8051_SDCC.h$85$1$35 ==.
                                   1358 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:85: WDTCN = 0xde;			// disable watchdog timer
      00011B 75 FF DE         [24] 1359 	mov	_WDTCN,#0xDE
                           000033  1360 	C$c8051_SDCC.h$86$1$35 ==.
                                   1361 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:86: WDTCN = 0xad;
      00011E 75 FF AD         [24] 1362 	mov	_WDTCN,#0xAD
                           000036  1363 	C$c8051_SDCC.h$88$1$35 ==.
                                   1364 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:88: SYSCLK_Init();			// initialize oscillator
      000121 12 00 EB         [24] 1365 	lcall	_SYSCLK_Init
                           000039  1366 	C$c8051_SDCC.h$89$1$35 ==.
                                   1367 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:89: UART0_Init();			// initialize UART0
      000124 12 01 04         [24] 1368 	lcall	_UART0_Init
                           00003C  1369 	C$c8051_SDCC.h$91$1$35 ==.
                                   1370 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:91: XBR0 |= 0x04;
      000127 43 E1 04         [24] 1371 	orl	_XBR0,#0x04
                           00003F  1372 	C$c8051_SDCC.h$92$1$35 ==.
                                   1373 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:92: XBR2 |= 0x40;                    	// Enable crossbar and weak pull-ups
      00012A 43 E3 40         [24] 1374 	orl	_XBR2,#0x40
                           000042  1375 	C$c8051_SDCC.h$93$1$35 ==.
                           000042  1376 	XG$Sys_Init$0$0 ==.
      00012D 22               [24] 1377 	ret
                                   1378 ;------------------------------------------------------------
                                   1379 ;Allocation info for local variables in function 'putchar'
                                   1380 ;------------------------------------------------------------
                                   1381 ;c                         Allocated to registers r7 
                                   1382 ;------------------------------------------------------------
                           000043  1383 	G$putchar$0$0 ==.
                           000043  1384 	C$c8051_SDCC.h$98$1$35 ==.
                                   1385 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:98: void putchar(char c)
                                   1386 ;	-----------------------------------------
                                   1387 ;	 function putchar
                                   1388 ;	-----------------------------------------
      00012E                       1389 _putchar:
      00012E AF 82            [24] 1390 	mov	r7,dpl
                           000045  1391 	C$c8051_SDCC.h$100$1$37 ==.
                                   1392 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:100: while (!TI0); 
      000130                       1393 00101$:
                           000045  1394 	C$c8051_SDCC.h$101$1$37 ==.
                                   1395 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:101: TI0 = 0;
      000130 10 99 02         [24] 1396 	jbc	_TI0,00112$
      000133 80 FB            [24] 1397 	sjmp	00101$
      000135                       1398 00112$:
                           00004A  1399 	C$c8051_SDCC.h$102$1$37 ==.
                                   1400 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:102: SBUF0 = c;
      000135 8F 99            [24] 1401 	mov	_SBUF0,r7
                           00004C  1402 	C$c8051_SDCC.h$103$1$37 ==.
                           00004C  1403 	XG$putchar$0$0 ==.
      000137 22               [24] 1404 	ret
                                   1405 ;------------------------------------------------------------
                                   1406 ;Allocation info for local variables in function 'getchar'
                                   1407 ;------------------------------------------------------------
                                   1408 ;c                         Allocated to registers 
                                   1409 ;------------------------------------------------------------
                           00004D  1410 	G$getchar$0$0 ==.
                           00004D  1411 	C$c8051_SDCC.h$108$1$37 ==.
                                   1412 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:108: char getchar(void)
                                   1413 ;	-----------------------------------------
                                   1414 ;	 function getchar
                                   1415 ;	-----------------------------------------
      000138                       1416 _getchar:
                           00004D  1417 	C$c8051_SDCC.h$111$1$39 ==.
                                   1418 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:111: while (!RI0);
      000138                       1419 00101$:
                           00004D  1420 	C$c8051_SDCC.h$112$1$39 ==.
                                   1421 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:112: RI0 = 0;
      000138 10 98 02         [24] 1422 	jbc	_RI0,00112$
      00013B 80 FB            [24] 1423 	sjmp	00101$
      00013D                       1424 00112$:
                           000052  1425 	C$c8051_SDCC.h$113$1$39 ==.
                                   1426 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:113: c = SBUF0;
      00013D 85 99 82         [24] 1427 	mov	dpl,_SBUF0
                           000055  1428 	C$c8051_SDCC.h$114$1$39 ==.
                                   1429 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:114: putchar(c);                          // echo to terminal
      000140 12 01 2E         [24] 1430 	lcall	_putchar
                           000058  1431 	C$c8051_SDCC.h$115$1$39 ==.
                                   1432 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:115: return SBUF0;
      000143 85 99 82         [24] 1433 	mov	dpl,_SBUF0
                           00005B  1434 	C$c8051_SDCC.h$116$1$39 ==.
                           00005B  1435 	XG$getchar$0$0 ==.
      000146 22               [24] 1436 	ret
                                   1437 ;------------------------------------------------------------
                                   1438 ;Allocation info for local variables in function 'lcd_print'
                                   1439 ;------------------------------------------------------------
                                   1440 ;fmt                       Allocated to stack - _bp -5
                                   1441 ;len                       Allocated to registers r6 
                                   1442 ;i                         Allocated to registers 
                                   1443 ;ap                        Allocated to registers 
                                   1444 ;text                      Allocated with name '_lcd_print_text_1_73'
                                   1445 ;------------------------------------------------------------
                           00005C  1446 	G$lcd_print$0$0 ==.
                           00005C  1447 	C$i2c.h$81$1$39 ==.
                                   1448 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:81: void lcd_print(const char *fmt, ...)
                                   1449 ;	-----------------------------------------
                                   1450 ;	 function lcd_print
                                   1451 ;	-----------------------------------------
      000147                       1452 _lcd_print:
      000147 C0 0F            [24] 1453 	push	_bp
      000149 85 81 0F         [24] 1454 	mov	_bp,sp
                           000061  1455 	C$i2c.h$87$1$73 ==.
                                   1456 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:87: if ( strlen(fmt) <= 0 ) return;   //If there is no data to print, return
      00014C E5 0F            [12] 1457 	mov	a,_bp
      00014E 24 FB            [12] 1458 	add	a,#0xfb
      000150 F8               [12] 1459 	mov	r0,a
      000151 86 82            [24] 1460 	mov	dpl,@r0
      000153 08               [12] 1461 	inc	r0
      000154 86 83            [24] 1462 	mov	dph,@r0
      000156 08               [12] 1463 	inc	r0
      000157 86 F0            [24] 1464 	mov	b,@r0
      000159 12 1B 6C         [24] 1465 	lcall	_strlen
      00015C E5 82            [12] 1466 	mov	a,dpl
      00015E 85 83 F0         [24] 1467 	mov	b,dph
      000161 45 F0            [12] 1468 	orl	a,b
      000163 70 02            [24] 1469 	jnz	00102$
      000165 80 62            [24] 1470 	sjmp	00109$
      000167                       1471 00102$:
                           00007C  1472 	C$i2c.h$89$2$74 ==.
                                   1473 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:89: va_start(ap, fmt);
      000167 E5 0F            [12] 1474 	mov	a,_bp
      000169 24 FB            [12] 1475 	add	a,#0xFB
      00016B FF               [12] 1476 	mov	r7,a
      00016C 8F 0B            [24] 1477 	mov	_vsprintf_PARM_3,r7
                           000083  1478 	C$i2c.h$90$1$73 ==.
                                   1479 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:90: vsprintf(text, fmt, ap);
      00016E E5 0F            [12] 1480 	mov	a,_bp
      000170 24 FB            [12] 1481 	add	a,#0xfb
      000172 F8               [12] 1482 	mov	r0,a
      000173 86 08            [24] 1483 	mov	_vsprintf_PARM_2,@r0
      000175 08               [12] 1484 	inc	r0
      000176 86 09            [24] 1485 	mov	(_vsprintf_PARM_2 + 1),@r0
      000178 08               [12] 1486 	inc	r0
      000179 86 0A            [24] 1487 	mov	(_vsprintf_PARM_2 + 2),@r0
      00017B 90 00 01         [24] 1488 	mov	dptr,#_lcd_print_text_1_73
      00017E 75 F0 00         [24] 1489 	mov	b,#0x00
      000181 12 14 94         [24] 1490 	lcall	_vsprintf
                           000099  1491 	C$i2c.h$93$1$73 ==.
                                   1492 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:93: len = strlen(text);
      000184 90 00 01         [24] 1493 	mov	dptr,#_lcd_print_text_1_73
      000187 75 F0 00         [24] 1494 	mov	b,#0x00
      00018A 12 1B 6C         [24] 1495 	lcall	_strlen
      00018D AE 82            [24] 1496 	mov	r6,dpl
                           0000A4  1497 	C$i2c.h$94$1$73 ==.
                                   1498 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:94: for(i=0; i<len; i++)
      00018F 7F 00            [12] 1499 	mov	r7,#0x00
      000191                       1500 00107$:
      000191 C3               [12] 1501 	clr	c
      000192 EF               [12] 1502 	mov	a,r7
      000193 9E               [12] 1503 	subb	a,r6
      000194 50 1F            [24] 1504 	jnc	00105$
                           0000AB  1505 	C$i2c.h$96$2$76 ==.
                                   1506 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:96: if(text[i] == (unsigned char)'\n') text[i] = 13;
      000196 EF               [12] 1507 	mov	a,r7
      000197 24 01            [12] 1508 	add	a,#_lcd_print_text_1_73
      000199 F5 82            [12] 1509 	mov	dpl,a
      00019B E4               [12] 1510 	clr	a
      00019C 34 00            [12] 1511 	addc	a,#(_lcd_print_text_1_73 >> 8)
      00019E F5 83            [12] 1512 	mov	dph,a
      0001A0 E0               [24] 1513 	movx	a,@dptr
      0001A1 FD               [12] 1514 	mov	r5,a
      0001A2 BD 0A 0D         [24] 1515 	cjne	r5,#0x0A,00108$
      0001A5 EF               [12] 1516 	mov	a,r7
      0001A6 24 01            [12] 1517 	add	a,#_lcd_print_text_1_73
      0001A8 F5 82            [12] 1518 	mov	dpl,a
      0001AA E4               [12] 1519 	clr	a
      0001AB 34 00            [12] 1520 	addc	a,#(_lcd_print_text_1_73 >> 8)
      0001AD F5 83            [12] 1521 	mov	dph,a
      0001AF 74 0D            [12] 1522 	mov	a,#0x0D
      0001B1 F0               [24] 1523 	movx	@dptr,a
      0001B2                       1524 00108$:
                           0000C7  1525 	C$i2c.h$94$1$73 ==.
                                   1526 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:94: for(i=0; i<len; i++)
      0001B2 0F               [12] 1527 	inc	r7
      0001B3 80 DC            [24] 1528 	sjmp	00107$
      0001B5                       1529 00105$:
                           0000CA  1530 	C$i2c.h$99$1$73 ==.
                                   1531 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:99: i2c_write_data(0xC6, 0x00, text, len);
      0001B5 75 28 01         [24] 1532 	mov	_i2c_write_data_PARM_3,#_lcd_print_text_1_73
      0001B8 75 29 00         [24] 1533 	mov	(_i2c_write_data_PARM_3 + 1),#(_lcd_print_text_1_73 >> 8)
      0001BB 75 2A 00         [24] 1534 	mov	(_i2c_write_data_PARM_3 + 2),#0x00
      0001BE 75 27 00         [24] 1535 	mov	_i2c_write_data_PARM_2,#0x00
      0001C1 8E 2B            [24] 1536 	mov	_i2c_write_data_PARM_4,r6
      0001C3 75 82 C6         [24] 1537 	mov	dpl,#0xC6
      0001C6 12 04 5D         [24] 1538 	lcall	_i2c_write_data
      0001C9                       1539 00109$:
      0001C9 D0 0F            [24] 1540 	pop	_bp
                           0000E0  1541 	C$i2c.h$100$1$73 ==.
                           0000E0  1542 	XG$lcd_print$0$0 ==.
      0001CB 22               [24] 1543 	ret
                                   1544 ;------------------------------------------------------------
                                   1545 ;Allocation info for local variables in function 'lcd_clear'
                                   1546 ;------------------------------------------------------------
                                   1547 ;NumBytes                  Allocated with name '_lcd_clear_NumBytes_1_77'
                                   1548 ;Cmd                       Allocated with name '_lcd_clear_Cmd_1_77'
                                   1549 ;------------------------------------------------------------
                           0000E1  1550 	G$lcd_clear$0$0 ==.
                           0000E1  1551 	C$i2c.h$103$1$73 ==.
                                   1552 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:103: void lcd_clear()
                                   1553 ;	-----------------------------------------
                                   1554 ;	 function lcd_clear
                                   1555 ;	-----------------------------------------
      0001CC                       1556 _lcd_clear:
                           0000E1  1557 	C$i2c.h$105$1$73 ==.
                                   1558 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:105: unsigned char NumBytes=0, Cmd[2];
      0001CC 75 22 00         [24] 1559 	mov	_lcd_clear_NumBytes_1_77,#0x00
                           0000E4  1560 	C$i2c.h$107$1$77 ==.
                                   1561 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:107: while(NumBytes < 64) i2c_read_data(0xC6, 0x00, &NumBytes, 1);
      0001CF                       1562 00101$:
      0001CF 74 C0            [12] 1563 	mov	a,#0x100 - 0x40
      0001D1 25 22            [12] 1564 	add	a,_lcd_clear_NumBytes_1_77
      0001D3 40 17            [24] 1565 	jc	00103$
      0001D5 75 2D 22         [24] 1566 	mov	_i2c_read_data_PARM_3,#_lcd_clear_NumBytes_1_77
      0001D8 75 2E 00         [24] 1567 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0001DB 75 2F 40         [24] 1568 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0001DE 75 2C 00         [24] 1569 	mov	_i2c_read_data_PARM_2,#0x00
      0001E1 75 30 01         [24] 1570 	mov	_i2c_read_data_PARM_4,#0x01
      0001E4 75 82 C6         [24] 1571 	mov	dpl,#0xC6
      0001E7 12 04 D3         [24] 1572 	lcall	_i2c_read_data
      0001EA 80 E3            [24] 1573 	sjmp	00101$
      0001EC                       1574 00103$:
                           000101  1575 	C$i2c.h$109$1$77 ==.
                                   1576 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:109: Cmd[0] = 12;
      0001EC 75 23 0C         [24] 1577 	mov	_lcd_clear_Cmd_1_77,#0x0C
                           000104  1578 	C$i2c.h$110$1$77 ==.
                                   1579 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:110: i2c_write_data(0xC6, 0x00, Cmd, 1);
      0001EF 75 28 23         [24] 1580 	mov	_i2c_write_data_PARM_3,#_lcd_clear_Cmd_1_77
      0001F2 75 29 00         [24] 1581 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      0001F5 75 2A 40         [24] 1582 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      0001F8 75 27 00         [24] 1583 	mov	_i2c_write_data_PARM_2,#0x00
      0001FB 75 2B 01         [24] 1584 	mov	_i2c_write_data_PARM_4,#0x01
      0001FE 75 82 C6         [24] 1585 	mov	dpl,#0xC6
      000201 12 04 5D         [24] 1586 	lcall	_i2c_write_data
                           000119  1587 	C$i2c.h$111$1$77 ==.
                           000119  1588 	XG$lcd_clear$0$0 ==.
      000204 22               [24] 1589 	ret
                                   1590 ;------------------------------------------------------------
                                   1591 ;Allocation info for local variables in function 'read_keypad'
                                   1592 ;------------------------------------------------------------
                                   1593 ;i                         Allocated to registers r7 
                                   1594 ;Data                      Allocated with name '_read_keypad_Data_1_78'
                                   1595 ;------------------------------------------------------------
                           00011A  1596 	G$read_keypad$0$0 ==.
                           00011A  1597 	C$i2c.h$114$1$77 ==.
                                   1598 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:114: char read_keypad()
                                   1599 ;	-----------------------------------------
                                   1600 ;	 function read_keypad
                                   1601 ;	-----------------------------------------
      000205                       1602 _read_keypad:
                           00011A  1603 	C$i2c.h$118$1$78 ==.
                                   1604 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:118: i2c_read_data(0xC6, 0x01, Data, 2); //Read I2C data on address 192, register 1, 2 bytes of data.
      000205 75 2D 25         [24] 1605 	mov	_i2c_read_data_PARM_3,#_read_keypad_Data_1_78
      000208 75 2E 00         [24] 1606 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      00020B 75 2F 40         [24] 1607 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      00020E 75 2C 01         [24] 1608 	mov	_i2c_read_data_PARM_2,#0x01
      000211 75 30 02         [24] 1609 	mov	_i2c_read_data_PARM_4,#0x02
      000214 75 82 C6         [24] 1610 	mov	dpl,#0xC6
      000217 12 04 D3         [24] 1611 	lcall	_i2c_read_data
                           00012F  1612 	C$i2c.h$119$1$78 ==.
                                   1613 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:119: if(Data[0] == 0xFF) return 0;  //No response on bus, no display
      00021A 74 FF            [12] 1614 	mov	a,#0xFF
      00021C B5 25 05         [24] 1615 	cjne	a,_read_keypad_Data_1_78,00102$
      00021F 75 82 00         [24] 1616 	mov	dpl,#0x00
      000222 80 5F            [24] 1617 	sjmp	00116$
      000224                       1618 00102$:
                           000139  1619 	C$i2c.h$121$1$78 ==.
                                   1620 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:121: for(i=0; i<8; i++)             //loop 8 times
      000224 7F 00            [12] 1621 	mov	r7,#0x00
      000226 8F 06            [24] 1622 	mov	ar6,r7
      000228                       1623 00114$:
                           00013D  1624 	C$i2c.h$123$2$79 ==.
                                   1625 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:123: if(Data[0] & (0x01 << i))  //find the ASCII value of the keypad read, if it is the current loop value
      000228 8E F0            [24] 1626 	mov	b,r6
      00022A 05 F0            [12] 1627 	inc	b
      00022C 7C 01            [12] 1628 	mov	r4,#0x01
      00022E 7D 00            [12] 1629 	mov	r5,#0x00
      000230 80 06            [24] 1630 	sjmp	00145$
      000232                       1631 00144$:
      000232 EC               [12] 1632 	mov	a,r4
      000233 2C               [12] 1633 	add	a,r4
      000234 FC               [12] 1634 	mov	r4,a
      000235 ED               [12] 1635 	mov	a,r5
      000236 33               [12] 1636 	rlc	a
      000237 FD               [12] 1637 	mov	r5,a
      000238                       1638 00145$:
      000238 D5 F0 F7         [24] 1639 	djnz	b,00144$
      00023B AA 25            [24] 1640 	mov	r2,_read_keypad_Data_1_78
      00023D 7B 00            [12] 1641 	mov	r3,#0x00
      00023F EA               [12] 1642 	mov	a,r2
      000240 52 04            [12] 1643 	anl	ar4,a
      000242 EB               [12] 1644 	mov	a,r3
      000243 52 05            [12] 1645 	anl	ar5,a
      000245 EC               [12] 1646 	mov	a,r4
      000246 4D               [12] 1647 	orl	a,r5
      000247 60 07            [24] 1648 	jz	00115$
                           00015E  1649 	C$i2c.h$124$2$79 ==.
                                   1650 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:124: return i+49;
      000249 74 31            [12] 1651 	mov	a,#0x31
      00024B 2F               [12] 1652 	add	a,r7
      00024C F5 82            [12] 1653 	mov	dpl,a
      00024E 80 33            [24] 1654 	sjmp	00116$
      000250                       1655 00115$:
                           000165  1656 	C$i2c.h$121$1$78 ==.
                                   1657 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:121: for(i=0; i<8; i++)             //loop 8 times
      000250 0E               [12] 1658 	inc	r6
      000251 8E 07            [24] 1659 	mov	ar7,r6
      000253 BE 08 00         [24] 1660 	cjne	r6,#0x08,00147$
      000256                       1661 00147$:
      000256 40 D0            [24] 1662 	jc	00114$
                           00016D  1663 	C$i2c.h$127$1$78 ==.
                                   1664 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:127: if(Data[1] & 0x01) return '9'; //if the value is equal to 9 return 9.
      000258 E5 26            [12] 1665 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      00025A 30 E0 05         [24] 1666 	jnb	acc.0,00107$
      00025D 75 82 39         [24] 1667 	mov	dpl,#0x39
      000260 80 21            [24] 1668 	sjmp	00116$
      000262                       1669 00107$:
                           000177  1670 	C$i2c.h$129$1$78 ==.
                                   1671 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:129: if(Data[1] & 0x02) return '*'; //if the value is equal to the star.
      000262 E5 26            [12] 1672 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000264 30 E1 05         [24] 1673 	jnb	acc.1,00109$
      000267 75 82 2A         [24] 1674 	mov	dpl,#0x2A
      00026A 80 17            [24] 1675 	sjmp	00116$
      00026C                       1676 00109$:
                           000181  1677 	C$i2c.h$131$1$78 ==.
                                   1678 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:131: if(Data[1] & 0x04) return '0'; //if the value is equal to the 0 key
      00026C E5 26            [12] 1679 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      00026E 30 E2 05         [24] 1680 	jnb	acc.2,00111$
      000271 75 82 30         [24] 1681 	mov	dpl,#0x30
      000274 80 0D            [24] 1682 	sjmp	00116$
      000276                       1683 00111$:
                           00018B  1684 	C$i2c.h$133$1$78 ==.
                                   1685 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:133: if(Data[1] & 0x08) return '#'; //if the value is equal to the pound key
      000276 E5 26            [12] 1686 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000278 30 E3 05         [24] 1687 	jnb	acc.3,00113$
      00027B 75 82 23         [24] 1688 	mov	dpl,#0x23
      00027E 80 03            [24] 1689 	sjmp	00116$
      000280                       1690 00113$:
                           000195  1691 	C$i2c.h$135$1$78 ==.
                                   1692 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:135: return -1;                     //else return a numerical -1 (0xFF)
      000280 75 82 FF         [24] 1693 	mov	dpl,#0xFF
      000283                       1694 00116$:
                           000198  1695 	C$i2c.h$136$1$78 ==.
                           000198  1696 	XG$read_keypad$0$0 ==.
      000283 22               [24] 1697 	ret
                                   1698 ;------------------------------------------------------------
                                   1699 ;Allocation info for local variables in function 'kpd_input'
                                   1700 ;------------------------------------------------------------
                                   1701 ;mode                      Allocated to registers r7 
                                   1702 ;sum                       Allocated to registers r5 r6 
                                   1703 ;key                       Allocated to registers r3 
                                   1704 ;i                         Allocated to registers 
                                   1705 ;------------------------------------------------------------
                           000199  1706 	G$kpd_input$0$0 ==.
                           000199  1707 	C$i2c.h$148$1$78 ==.
                                   1708 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:148: unsigned int kpd_input(char mode)
                                   1709 ;	-----------------------------------------
                                   1710 ;	 function kpd_input
                                   1711 ;	-----------------------------------------
      000284                       1712 _kpd_input:
      000284 AF 82            [24] 1713 	mov	r7,dpl
                           00019B  1714 	C$i2c.h$153$1$81 ==.
                                   1715 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:153: sum = 0;
                           00019B  1716 	C$i2c.h$156$1$81 ==.
                                   1717 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:156: if(mode==0)lcd_print("\nType digits; end w/#");
      000286 E4               [12] 1718 	clr	a
      000287 FD               [12] 1719 	mov	r5,a
      000288 FE               [12] 1720 	mov	r6,a
      000289 EF               [12] 1721 	mov	a,r7
      00028A 70 1D            [24] 1722 	jnz	00102$
      00028C C0 06            [24] 1723 	push	ar6
      00028E C0 05            [24] 1724 	push	ar5
      000290 74 DA            [12] 1725 	mov	a,#___str_0
      000292 C0 E0            [24] 1726 	push	acc
      000294 74 1B            [12] 1727 	mov	a,#(___str_0 >> 8)
      000296 C0 E0            [24] 1728 	push	acc
      000298 74 80            [12] 1729 	mov	a,#0x80
      00029A C0 E0            [24] 1730 	push	acc
      00029C 12 01 47         [24] 1731 	lcall	_lcd_print
      00029F 15 81            [12] 1732 	dec	sp
      0002A1 15 81            [12] 1733 	dec	sp
      0002A3 15 81            [12] 1734 	dec	sp
      0002A5 D0 05            [24] 1735 	pop	ar5
      0002A7 D0 06            [24] 1736 	pop	ar6
      0002A9                       1737 00102$:
                           0001BE  1738 	C$i2c.h$158$1$81 ==.
                                   1739 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:158: lcd_print("     %c%c%c%c%c",0x08,0x08,0x08,0x08,0x08);
      0002A9 C0 06            [24] 1740 	push	ar6
      0002AB C0 05            [24] 1741 	push	ar5
      0002AD 74 08            [12] 1742 	mov	a,#0x08
      0002AF C0 E0            [24] 1743 	push	acc
      0002B1 E4               [12] 1744 	clr	a
      0002B2 C0 E0            [24] 1745 	push	acc
      0002B4 74 08            [12] 1746 	mov	a,#0x08
      0002B6 C0 E0            [24] 1747 	push	acc
      0002B8 E4               [12] 1748 	clr	a
      0002B9 C0 E0            [24] 1749 	push	acc
      0002BB 74 08            [12] 1750 	mov	a,#0x08
      0002BD C0 E0            [24] 1751 	push	acc
      0002BF E4               [12] 1752 	clr	a
      0002C0 C0 E0            [24] 1753 	push	acc
      0002C2 74 08            [12] 1754 	mov	a,#0x08
      0002C4 C0 E0            [24] 1755 	push	acc
      0002C6 E4               [12] 1756 	clr	a
      0002C7 C0 E0            [24] 1757 	push	acc
      0002C9 74 08            [12] 1758 	mov	a,#0x08
      0002CB C0 E0            [24] 1759 	push	acc
      0002CD E4               [12] 1760 	clr	a
      0002CE C0 E0            [24] 1761 	push	acc
      0002D0 74 F0            [12] 1762 	mov	a,#___str_1
      0002D2 C0 E0            [24] 1763 	push	acc
      0002D4 74 1B            [12] 1764 	mov	a,#(___str_1 >> 8)
      0002D6 C0 E0            [24] 1765 	push	acc
      0002D8 74 80            [12] 1766 	mov	a,#0x80
      0002DA C0 E0            [24] 1767 	push	acc
      0002DC 12 01 47         [24] 1768 	lcall	_lcd_print
      0002DF E5 81            [12] 1769 	mov	a,sp
      0002E1 24 F3            [12] 1770 	add	a,#0xf3
      0002E3 F5 81            [12] 1771 	mov	sp,a
                           0001FA  1772 	C$i2c.h$160$1$81 ==.
                                   1773 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:160: delay_time(500000);	//Add 20ms delay before reading i2c in loop
      0002E5 90 A1 20         [24] 1774 	mov	dptr,#0xA120
      0002E8 75 F0 07         [24] 1775 	mov	b,#0x07
      0002EB E4               [12] 1776 	clr	a
      0002EC 12 03 F8         [24] 1777 	lcall	_delay_time
      0002EF D0 05            [24] 1778 	pop	ar5
      0002F1 D0 06            [24] 1779 	pop	ar6
                           000208  1780 	C$i2c.h$164$1$81 ==.
                                   1781 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:164: for(i=0; i<5; i++)
      0002F3 7F 00            [12] 1782 	mov	r7,#0x00
                           00020A  1783 	C$i2c.h$166$3$84 ==.
                                   1784 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:166: while(((key=read_keypad()) == -1) || (key == '*'))delay_time(10000);
      0002F5                       1785 00104$:
      0002F5 C0 07            [24] 1786 	push	ar7
      0002F7 C0 06            [24] 1787 	push	ar6
      0002F9 C0 05            [24] 1788 	push	ar5
      0002FB 12 02 05         [24] 1789 	lcall	_read_keypad
      0002FE AC 82            [24] 1790 	mov	r4,dpl
      000300 D0 05            [24] 1791 	pop	ar5
      000302 D0 06            [24] 1792 	pop	ar6
      000304 D0 07            [24] 1793 	pop	ar7
      000306 8C 03            [24] 1794 	mov	ar3,r4
      000308 BC FF 02         [24] 1795 	cjne	r4,#0xFF,00146$
      00030B 80 03            [24] 1796 	sjmp	00105$
      00030D                       1797 00146$:
      00030D BB 2A 17         [24] 1798 	cjne	r3,#0x2A,00106$
      000310                       1799 00105$:
      000310 90 27 10         [24] 1800 	mov	dptr,#0x2710
      000313 E4               [12] 1801 	clr	a
      000314 F5 F0            [12] 1802 	mov	b,a
      000316 C0 07            [24] 1803 	push	ar7
      000318 C0 06            [24] 1804 	push	ar6
      00031A C0 05            [24] 1805 	push	ar5
      00031C 12 03 F8         [24] 1806 	lcall	_delay_time
      00031F D0 05            [24] 1807 	pop	ar5
      000321 D0 06            [24] 1808 	pop	ar6
      000323 D0 07            [24] 1809 	pop	ar7
      000325 80 CE            [24] 1810 	sjmp	00104$
      000327                       1811 00106$:
                           00023C  1812 	C$i2c.h$167$2$82 ==.
                                   1813 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:167: if(key == '#')
      000327 BB 23 2A         [24] 1814 	cjne	r3,#0x23,00114$
                           00023F  1815 	C$i2c.h$169$3$83 ==.
                                   1816 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:169: while(read_keypad() == '#')delay_time(10000);
      00032A                       1817 00107$:
      00032A C0 06            [24] 1818 	push	ar6
      00032C C0 05            [24] 1819 	push	ar5
      00032E 12 02 05         [24] 1820 	lcall	_read_keypad
      000331 AC 82            [24] 1821 	mov	r4,dpl
      000333 D0 05            [24] 1822 	pop	ar5
      000335 D0 06            [24] 1823 	pop	ar6
      000337 BC 23 13         [24] 1824 	cjne	r4,#0x23,00109$
      00033A 90 27 10         [24] 1825 	mov	dptr,#0x2710
      00033D E4               [12] 1826 	clr	a
      00033E F5 F0            [12] 1827 	mov	b,a
      000340 C0 06            [24] 1828 	push	ar6
      000342 C0 05            [24] 1829 	push	ar5
      000344 12 03 F8         [24] 1830 	lcall	_delay_time
      000347 D0 05            [24] 1831 	pop	ar5
      000349 D0 06            [24] 1832 	pop	ar6
      00034B 80 DD            [24] 1833 	sjmp	00107$
      00034D                       1834 00109$:
                           000262  1835 	C$i2c.h$170$3$83 ==.
                                   1836 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:170: return sum;
      00034D 8D 82            [24] 1837 	mov	dpl,r5
      00034F 8E 83            [24] 1838 	mov	dph,r6
      000351 02 03 F7         [24] 1839 	ljmp	00119$
      000354                       1840 00114$:
                           000269  1841 	C$i2c.h$174$3$84 ==.
                                   1842 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:174: lcd_print("%c", key);
      000354 EB               [12] 1843 	mov	a,r3
      000355 FA               [12] 1844 	mov	r2,a
      000356 33               [12] 1845 	rlc	a
      000357 95 E0            [12] 1846 	subb	a,acc
      000359 FC               [12] 1847 	mov	r4,a
      00035A C0 07            [24] 1848 	push	ar7
      00035C C0 06            [24] 1849 	push	ar6
      00035E C0 05            [24] 1850 	push	ar5
      000360 C0 04            [24] 1851 	push	ar4
      000362 C0 03            [24] 1852 	push	ar3
      000364 C0 02            [24] 1853 	push	ar2
      000366 C0 02            [24] 1854 	push	ar2
      000368 C0 04            [24] 1855 	push	ar4
      00036A 74 00            [12] 1856 	mov	a,#___str_2
      00036C C0 E0            [24] 1857 	push	acc
      00036E 74 1C            [12] 1858 	mov	a,#(___str_2 >> 8)
      000370 C0 E0            [24] 1859 	push	acc
      000372 74 80            [12] 1860 	mov	a,#0x80
      000374 C0 E0            [24] 1861 	push	acc
      000376 12 01 47         [24] 1862 	lcall	_lcd_print
      000379 E5 81            [12] 1863 	mov	a,sp
      00037B 24 FB            [12] 1864 	add	a,#0xfb
      00037D F5 81            [12] 1865 	mov	sp,a
      00037F D0 02            [24] 1866 	pop	ar2
      000381 D0 03            [24] 1867 	pop	ar3
      000383 D0 04            [24] 1868 	pop	ar4
      000385 D0 05            [24] 1869 	pop	ar5
      000387 D0 06            [24] 1870 	pop	ar6
                           00029E  1871 	C$i2c.h$175$1$81 ==.
                                   1872 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:175: sum = sum*10 + key - '0';
      000389 8D 11            [24] 1873 	mov	__mulint_PARM_2,r5
      00038B 8E 12            [24] 1874 	mov	(__mulint_PARM_2 + 1),r6
      00038D 90 00 0A         [24] 1875 	mov	dptr,#0x000A
      000390 C0 04            [24] 1876 	push	ar4
      000392 C0 03            [24] 1877 	push	ar3
      000394 C0 02            [24] 1878 	push	ar2
      000396 12 14 07         [24] 1879 	lcall	__mulint
      000399 A8 82            [24] 1880 	mov	r0,dpl
      00039B A9 83            [24] 1881 	mov	r1,dph
      00039D D0 02            [24] 1882 	pop	ar2
      00039F D0 03            [24] 1883 	pop	ar3
      0003A1 D0 04            [24] 1884 	pop	ar4
      0003A3 D0 07            [24] 1885 	pop	ar7
      0003A5 EA               [12] 1886 	mov	a,r2
      0003A6 28               [12] 1887 	add	a,r0
      0003A7 F8               [12] 1888 	mov	r0,a
      0003A8 EC               [12] 1889 	mov	a,r4
      0003A9 39               [12] 1890 	addc	a,r1
      0003AA F9               [12] 1891 	mov	r1,a
      0003AB E8               [12] 1892 	mov	a,r0
      0003AC 24 D0            [12] 1893 	add	a,#0xD0
      0003AE FD               [12] 1894 	mov	r5,a
      0003AF E9               [12] 1895 	mov	a,r1
      0003B0 34 FF            [12] 1896 	addc	a,#0xFF
      0003B2 FE               [12] 1897 	mov	r6,a
                           0002C8  1898 	C$i2c.h$176$3$84 ==.
                                   1899 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:176: while(read_keypad() == key)delay_time(10000); //wait for key to be released
      0003B3                       1900 00110$:
      0003B3 C0 07            [24] 1901 	push	ar7
      0003B5 C0 06            [24] 1902 	push	ar6
      0003B7 C0 05            [24] 1903 	push	ar5
      0003B9 C0 03            [24] 1904 	push	ar3
      0003BB 12 02 05         [24] 1905 	lcall	_read_keypad
      0003BE AC 82            [24] 1906 	mov	r4,dpl
      0003C0 D0 03            [24] 1907 	pop	ar3
      0003C2 D0 05            [24] 1908 	pop	ar5
      0003C4 D0 06            [24] 1909 	pop	ar6
      0003C6 D0 07            [24] 1910 	pop	ar7
      0003C8 EC               [12] 1911 	mov	a,r4
      0003C9 B5 03 1B         [24] 1912 	cjne	a,ar3,00118$
      0003CC 90 27 10         [24] 1913 	mov	dptr,#0x2710
      0003CF E4               [12] 1914 	clr	a
      0003D0 F5 F0            [12] 1915 	mov	b,a
      0003D2 C0 07            [24] 1916 	push	ar7
      0003D4 C0 06            [24] 1917 	push	ar6
      0003D6 C0 05            [24] 1918 	push	ar5
      0003D8 C0 03            [24] 1919 	push	ar3
      0003DA 12 03 F8         [24] 1920 	lcall	_delay_time
      0003DD D0 03            [24] 1921 	pop	ar3
      0003DF D0 05            [24] 1922 	pop	ar5
      0003E1 D0 06            [24] 1923 	pop	ar6
      0003E3 D0 07            [24] 1924 	pop	ar7
      0003E5 80 CC            [24] 1925 	sjmp	00110$
      0003E7                       1926 00118$:
                           0002FC  1927 	C$i2c.h$164$1$81 ==.
                                   1928 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:164: for(i=0; i<5; i++)
      0003E7 0F               [12] 1929 	inc	r7
      0003E8 C3               [12] 1930 	clr	c
      0003E9 EF               [12] 1931 	mov	a,r7
      0003EA 64 80            [12] 1932 	xrl	a,#0x80
      0003EC 94 85            [12] 1933 	subb	a,#0x85
      0003EE 50 03            [24] 1934 	jnc	00155$
      0003F0 02 02 F5         [24] 1935 	ljmp	00104$
      0003F3                       1936 00155$:
                           000308  1937 	C$i2c.h$179$1$81 ==.
                                   1938 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:179: return sum;
      0003F3 8D 82            [24] 1939 	mov	dpl,r5
      0003F5 8E 83            [24] 1940 	mov	dph,r6
      0003F7                       1941 00119$:
                           00030C  1942 	C$i2c.h$180$1$81 ==.
                           00030C  1943 	XG$kpd_input$0$0 ==.
      0003F7 22               [24] 1944 	ret
                                   1945 ;------------------------------------------------------------
                                   1946 ;Allocation info for local variables in function 'delay_time'
                                   1947 ;------------------------------------------------------------
                                   1948 ;time_end                  Allocated to registers r4 r5 r6 r7 
                                   1949 ;index                     Allocated to registers 
                                   1950 ;------------------------------------------------------------
                           00030D  1951 	G$delay_time$0$0 ==.
                           00030D  1952 	C$i2c.h$189$1$81 ==.
                                   1953 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:189: void delay_time (unsigned long time_end)
                                   1954 ;	-----------------------------------------
                                   1955 ;	 function delay_time
                                   1956 ;	-----------------------------------------
      0003F8                       1957 _delay_time:
      0003F8 AC 82            [24] 1958 	mov	r4,dpl
      0003FA AD 83            [24] 1959 	mov	r5,dph
      0003FC AE F0            [24] 1960 	mov	r6,b
      0003FE FF               [12] 1961 	mov	r7,a
                           000314  1962 	C$i2c.h$192$1$86 ==.
                                   1963 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:192: for (index = 0; index < time_end; index++); //for loop delay
      0003FF 78 00            [12] 1964 	mov	r0,#0x00
      000401 79 00            [12] 1965 	mov	r1,#0x00
      000403 7A 00            [12] 1966 	mov	r2,#0x00
      000405 7B 00            [12] 1967 	mov	r3,#0x00
      000407                       1968 00103$:
      000407 C3               [12] 1969 	clr	c
      000408 E8               [12] 1970 	mov	a,r0
      000409 9C               [12] 1971 	subb	a,r4
      00040A E9               [12] 1972 	mov	a,r1
      00040B 9D               [12] 1973 	subb	a,r5
      00040C EA               [12] 1974 	mov	a,r2
      00040D 9E               [12] 1975 	subb	a,r6
      00040E EB               [12] 1976 	mov	a,r3
      00040F 9F               [12] 1977 	subb	a,r7
      000410 50 0F            [24] 1978 	jnc	00105$
      000412 08               [12] 1979 	inc	r0
      000413 B8 00 09         [24] 1980 	cjne	r0,#0x00,00115$
      000416 09               [12] 1981 	inc	r1
      000417 B9 00 05         [24] 1982 	cjne	r1,#0x00,00115$
      00041A 0A               [12] 1983 	inc	r2
      00041B BA 00 E9         [24] 1984 	cjne	r2,#0x00,00103$
      00041E 0B               [12] 1985 	inc	r3
      00041F                       1986 00115$:
      00041F 80 E6            [24] 1987 	sjmp	00103$
      000421                       1988 00105$:
                           000336  1989 	C$i2c.h$193$1$86 ==.
                           000336  1990 	XG$delay_time$0$0 ==.
      000421 22               [24] 1991 	ret
                                   1992 ;------------------------------------------------------------
                                   1993 ;Allocation info for local variables in function 'i2c_start'
                                   1994 ;------------------------------------------------------------
                           000337  1995 	G$i2c_start$0$0 ==.
                           000337  1996 	C$i2c.h$196$1$86 ==.
                                   1997 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:196: void i2c_start(void)
                                   1998 ;	-----------------------------------------
                                   1999 ;	 function i2c_start
                                   2000 ;	-----------------------------------------
      000422                       2001 _i2c_start:
                           000337  2002 	C$i2c.h$198$1$88 ==.
                                   2003 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:198: while(BUSY);              //Wait until SMBus0 is free
      000422                       2004 00101$:
      000422 20 C7 FD         [24] 2005 	jb	_BUSY,00101$
                           00033A  2006 	C$i2c.h$199$1$88 ==.
                                   2007 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:199: STA = 1;                  //Set Start Bit
      000425 D2 C5            [12] 2008 	setb	_STA
                           00033C  2009 	C$i2c.h$200$1$88 ==.
                                   2010 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:200: while(!SI);               //Wait until start sent
      000427                       2011 00104$:
      000427 30 C3 FD         [24] 2012 	jnb	_SI,00104$
                           00033F  2013 	C$i2c.h$201$1$88 ==.
                                   2014 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:201: STA = 0;                  //Clear start bit
      00042A C2 C5            [12] 2015 	clr	_STA
                           000341  2016 	C$i2c.h$202$1$88 ==.
                                   2017 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:202: SI = 0;                   //Clear SI
      00042C C2 C3            [12] 2018 	clr	_SI
                           000343  2019 	C$i2c.h$203$1$88 ==.
                           000343  2020 	XG$i2c_start$0$0 ==.
      00042E 22               [24] 2021 	ret
                                   2022 ;------------------------------------------------------------
                                   2023 ;Allocation info for local variables in function 'i2c_write'
                                   2024 ;------------------------------------------------------------
                                   2025 ;output_data               Allocated to registers 
                                   2026 ;------------------------------------------------------------
                           000344  2027 	G$i2c_write$0$0 ==.
                           000344  2028 	C$i2c.h$206$1$88 ==.
                                   2029 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:206: void i2c_write(unsigned char output_data)
                                   2030 ;	-----------------------------------------
                                   2031 ;	 function i2c_write
                                   2032 ;	-----------------------------------------
      00042F                       2033 _i2c_write:
      00042F 85 82 C2         [24] 2034 	mov	_SMB0DAT,dpl
                           000347  2035 	C$i2c.h$209$1$90 ==.
                                   2036 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:209: while(!SI);               //Wait until send is complete
      000432                       2037 00101$:
                           000347  2038 	C$i2c.h$210$1$90 ==.
                                   2039 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:210: SI = 0;                   //Clear SI
      000432 10 C3 02         [24] 2040 	jbc	_SI,00112$
      000435 80 FB            [24] 2041 	sjmp	00101$
      000437                       2042 00112$:
                           00034C  2043 	C$i2c.h$211$1$90 ==.
                           00034C  2044 	XG$i2c_write$0$0 ==.
      000437 22               [24] 2045 	ret
                                   2046 ;------------------------------------------------------------
                                   2047 ;Allocation info for local variables in function 'i2c_write_and_stop'
                                   2048 ;------------------------------------------------------------
                                   2049 ;output_data               Allocated to registers 
                                   2050 ;------------------------------------------------------------
                           00034D  2051 	G$i2c_write_and_stop$0$0 ==.
                           00034D  2052 	C$i2c.h$214$1$90 ==.
                                   2053 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:214: void i2c_write_and_stop(unsigned char output_data)
                                   2054 ;	-----------------------------------------
                                   2055 ;	 function i2c_write_and_stop
                                   2056 ;	-----------------------------------------
      000438                       2057 _i2c_write_and_stop:
      000438 85 82 C2         [24] 2058 	mov	_SMB0DAT,dpl
                           000350  2059 	C$i2c.h$217$1$92 ==.
                                   2060 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:217: STO = 1;                  //Set stop bit
      00043B D2 C4            [12] 2061 	setb	_STO
                           000352  2062 	C$i2c.h$218$1$92 ==.
                                   2063 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:218: while(!SI);               //Wait until send is complete
      00043D                       2064 00101$:
                           000352  2065 	C$i2c.h$219$1$92 ==.
                                   2066 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:219: SI = 0;                   //clear SI
      00043D 10 C3 02         [24] 2067 	jbc	_SI,00112$
      000440 80 FB            [24] 2068 	sjmp	00101$
      000442                       2069 00112$:
                           000357  2070 	C$i2c.h$220$1$92 ==.
                           000357  2071 	XG$i2c_write_and_stop$0$0 ==.
      000442 22               [24] 2072 	ret
                                   2073 ;------------------------------------------------------------
                                   2074 ;Allocation info for local variables in function 'i2c_read'
                                   2075 ;------------------------------------------------------------
                                   2076 ;input_data                Allocated to registers 
                                   2077 ;------------------------------------------------------------
                           000358  2078 	G$i2c_read$0$0 ==.
                           000358  2079 	C$i2c.h$223$1$92 ==.
                                   2080 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:223: unsigned char i2c_read(void)
                                   2081 ;	-----------------------------------------
                                   2082 ;	 function i2c_read
                                   2083 ;	-----------------------------------------
      000443                       2084 _i2c_read:
                           000358  2085 	C$i2c.h$226$1$94 ==.
                                   2086 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:226: while(!SI);                //Wait until we have data to read
      000443                       2087 00101$:
      000443 30 C3 FD         [24] 2088 	jnb	_SI,00101$
                           00035B  2089 	C$i2c.h$227$1$94 ==.
                                   2090 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:227: input_data = SMB0DAT;      //Read the data
      000446 85 C2 82         [24] 2091 	mov	dpl,_SMB0DAT
                           00035E  2092 	C$i2c.h$228$1$94 ==.
                                   2093 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:228: SI = 0;                    //Clear SI
      000449 C2 C3            [12] 2094 	clr	_SI
                           000360  2095 	C$i2c.h$229$1$94 ==.
                                   2096 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:229: return input_data;         //Return the read data
                           000360  2097 	C$i2c.h$230$1$94 ==.
                           000360  2098 	XG$i2c_read$0$0 ==.
      00044B 22               [24] 2099 	ret
                                   2100 ;------------------------------------------------------------
                                   2101 ;Allocation info for local variables in function 'i2c_read_and_stop'
                                   2102 ;------------------------------------------------------------
                                   2103 ;input_data                Allocated to registers r7 
                                   2104 ;------------------------------------------------------------
                           000361  2105 	G$i2c_read_and_stop$0$0 ==.
                           000361  2106 	C$i2c.h$233$1$94 ==.
                                   2107 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:233: unsigned char i2c_read_and_stop(void)
                                   2108 ;	-----------------------------------------
                                   2109 ;	 function i2c_read_and_stop
                                   2110 ;	-----------------------------------------
      00044C                       2111 _i2c_read_and_stop:
                           000361  2112 	C$i2c.h$236$1$96 ==.
                                   2113 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:236: while(!SI);                //Wait until we have data to read
      00044C                       2114 00101$:
      00044C 30 C3 FD         [24] 2115 	jnb	_SI,00101$
                           000364  2116 	C$i2c.h$237$1$96 ==.
                                   2117 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:237: input_data = SMB0DAT;      //Read the data
      00044F AF C2            [24] 2118 	mov	r7,_SMB0DAT
                           000366  2119 	C$i2c.h$238$1$96 ==.
                                   2120 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:238: SI = 0;                    //Clear SI
      000451 C2 C3            [12] 2121 	clr	_SI
                           000368  2122 	C$i2c.h$239$1$96 ==.
                                   2123 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:239: STO = 1;                   //Set stop bit
      000453 D2 C4            [12] 2124 	setb	_STO
                           00036A  2125 	C$i2c.h$240$1$96 ==.
                                   2126 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:240: while(!SI);                //Wait for stop
      000455                       2127 00104$:
                           00036A  2128 	C$i2c.h$241$1$96 ==.
                                   2129 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:241: SI = 0;
      000455 10 C3 02         [24] 2130 	jbc	_SI,00122$
      000458 80 FB            [24] 2131 	sjmp	00104$
      00045A                       2132 00122$:
                           00036F  2133 	C$i2c.h$242$1$96 ==.
                                   2134 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:242: return input_data;         //Return the read data
      00045A 8F 82            [24] 2135 	mov	dpl,r7
                           000371  2136 	C$i2c.h$243$1$96 ==.
                           000371  2137 	XG$i2c_read_and_stop$0$0 ==.
      00045C 22               [24] 2138 	ret
                                   2139 ;------------------------------------------------------------
                                   2140 ;Allocation info for local variables in function 'i2c_write_data'
                                   2141 ;------------------------------------------------------------
                                   2142 ;start_reg                 Allocated with name '_i2c_write_data_PARM_2'
                                   2143 ;buffer                    Allocated with name '_i2c_write_data_PARM_3'
                                   2144 ;num_bytes                 Allocated with name '_i2c_write_data_PARM_4'
                                   2145 ;addr                      Allocated to registers r7 
                                   2146 ;i                         Allocated to registers 
                                   2147 ;------------------------------------------------------------
                           000372  2148 	G$i2c_write_data$0$0 ==.
                           000372  2149 	C$i2c.h$246$1$96 ==.
                                   2150 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:246: void i2c_write_data(unsigned char addr, unsigned char start_reg, unsigned char *buffer, unsigned char num_bytes)
                                   2151 ;	-----------------------------------------
                                   2152 ;	 function i2c_write_data
                                   2153 ;	-----------------------------------------
      00045D                       2154 _i2c_write_data:
      00045D AF 82            [24] 2155 	mov	r7,dpl
                           000374  2156 	C$i2c.h$250$1$98 ==.
                                   2157 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:250: i2c_start();               //initiate I2C transfer
      00045F C0 07            [24] 2158 	push	ar7
      000461 12 04 22         [24] 2159 	lcall	_i2c_start
      000464 D0 07            [24] 2160 	pop	ar7
                           00037B  2161 	C$i2c.h$251$1$98 ==.
                                   2162 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:251: i2c_write(addr & ~0x01);   //write the desired address to the bus
      000466 74 FE            [12] 2163 	mov	a,#0xFE
      000468 5F               [12] 2164 	anl	a,r7
      000469 F5 82            [12] 2165 	mov	dpl,a
      00046B 12 04 2F         [24] 2166 	lcall	_i2c_write
                           000383  2167 	C$i2c.h$252$1$98 ==.
                                   2168 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:252: i2c_write(start_reg);      //write the start register to the bus
      00046E 85 27 82         [24] 2169 	mov	dpl,_i2c_write_data_PARM_2
      000471 12 04 2F         [24] 2170 	lcall	_i2c_write
                           000389  2171 	C$i2c.h$253$1$98 ==.
                                   2172 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:253: for(i=0; i<num_bytes-1; i++) //write the data to the register(s)
      000474 7F 00            [12] 2173 	mov	r7,#0x00
      000476                       2174 00103$:
      000476 AD 2B            [24] 2175 	mov	r5,_i2c_write_data_PARM_4
      000478 7E 00            [12] 2176 	mov	r6,#0x00
      00047A 1D               [12] 2177 	dec	r5
      00047B BD FF 01         [24] 2178 	cjne	r5,#0xFF,00114$
      00047E 1E               [12] 2179 	dec	r6
      00047F                       2180 00114$:
      00047F 8F 03            [24] 2181 	mov	ar3,r7
      000481 7C 00            [12] 2182 	mov	r4,#0x00
      000483 C3               [12] 2183 	clr	c
      000484 EB               [12] 2184 	mov	a,r3
      000485 9D               [12] 2185 	subb	a,r5
      000486 EC               [12] 2186 	mov	a,r4
      000487 64 80            [12] 2187 	xrl	a,#0x80
      000489 8E F0            [24] 2188 	mov	b,r6
      00048B 63 F0 80         [24] 2189 	xrl	b,#0x80
      00048E 95 F0            [12] 2190 	subb	a,b
      000490 50 1F            [24] 2191 	jnc	00101$
                           0003A7  2192 	C$i2c.h$254$1$98 ==.
                                   2193 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:254: i2c_write(buffer[i]);
      000492 EF               [12] 2194 	mov	a,r7
      000493 25 28            [12] 2195 	add	a,_i2c_write_data_PARM_3
      000495 FC               [12] 2196 	mov	r4,a
      000496 E4               [12] 2197 	clr	a
      000497 35 29            [12] 2198 	addc	a,(_i2c_write_data_PARM_3 + 1)
      000499 FD               [12] 2199 	mov	r5,a
      00049A AE 2A            [24] 2200 	mov	r6,(_i2c_write_data_PARM_3 + 2)
      00049C 8C 82            [24] 2201 	mov	dpl,r4
      00049E 8D 83            [24] 2202 	mov	dph,r5
      0004A0 8E F0            [24] 2203 	mov	b,r6
      0004A2 12 1B 84         [24] 2204 	lcall	__gptrget
      0004A5 F5 82            [12] 2205 	mov	dpl,a
      0004A7 C0 07            [24] 2206 	push	ar7
      0004A9 12 04 2F         [24] 2207 	lcall	_i2c_write
      0004AC D0 07            [24] 2208 	pop	ar7
                           0003C3  2209 	C$i2c.h$253$1$98 ==.
                                   2210 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:253: for(i=0; i<num_bytes-1; i++) //write the data to the register(s)
      0004AE 0F               [12] 2211 	inc	r7
      0004AF 80 C5            [24] 2212 	sjmp	00103$
      0004B1                       2213 00101$:
                           0003C6  2214 	C$i2c.h$255$1$98 ==.
                                   2215 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:255: i2c_write_and_stop(buffer[num_bytes-1]); //Stop transfer
      0004B1 AE 2B            [24] 2216 	mov	r6,_i2c_write_data_PARM_4
      0004B3 7F 00            [12] 2217 	mov	r7,#0x00
      0004B5 1E               [12] 2218 	dec	r6
      0004B6 BE FF 01         [24] 2219 	cjne	r6,#0xFF,00116$
      0004B9 1F               [12] 2220 	dec	r7
      0004BA                       2221 00116$:
      0004BA EE               [12] 2222 	mov	a,r6
      0004BB 25 28            [12] 2223 	add	a,_i2c_write_data_PARM_3
      0004BD FE               [12] 2224 	mov	r6,a
      0004BE EF               [12] 2225 	mov	a,r7
      0004BF 35 29            [12] 2226 	addc	a,(_i2c_write_data_PARM_3 + 1)
      0004C1 FF               [12] 2227 	mov	r7,a
      0004C2 AD 2A            [24] 2228 	mov	r5,(_i2c_write_data_PARM_3 + 2)
      0004C4 8E 82            [24] 2229 	mov	dpl,r6
      0004C6 8F 83            [24] 2230 	mov	dph,r7
      0004C8 8D F0            [24] 2231 	mov	b,r5
      0004CA 12 1B 84         [24] 2232 	lcall	__gptrget
      0004CD F5 82            [12] 2233 	mov	dpl,a
      0004CF 12 04 38         [24] 2234 	lcall	_i2c_write_and_stop
                           0003E7  2235 	C$i2c.h$256$1$98 ==.
                           0003E7  2236 	XG$i2c_write_data$0$0 ==.
      0004D2 22               [24] 2237 	ret
                                   2238 ;------------------------------------------------------------
                                   2239 ;Allocation info for local variables in function 'i2c_read_data'
                                   2240 ;------------------------------------------------------------
                                   2241 ;start_reg                 Allocated with name '_i2c_read_data_PARM_2'
                                   2242 ;buffer                    Allocated with name '_i2c_read_data_PARM_3'
                                   2243 ;num_bytes                 Allocated with name '_i2c_read_data_PARM_4'
                                   2244 ;addr                      Allocated to registers r7 
                                   2245 ;j                         Allocated to registers 
                                   2246 ;------------------------------------------------------------
                           0003E8  2247 	G$i2c_read_data$0$0 ==.
                           0003E8  2248 	C$i2c.h$259$1$98 ==.
                                   2249 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:259: void i2c_read_data(unsigned char addr, unsigned char start_reg, unsigned char *buffer, unsigned char num_bytes)
                                   2250 ;	-----------------------------------------
                                   2251 ;	 function i2c_read_data
                                   2252 ;	-----------------------------------------
      0004D3                       2253 _i2c_read_data:
      0004D3 AF 82            [24] 2254 	mov	r7,dpl
                           0003EA  2255 	C$i2c.h$262$1$100 ==.
                                   2256 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:262: i2c_start();               //Start I2C transfer
      0004D5 C0 07            [24] 2257 	push	ar7
      0004D7 12 04 22         [24] 2258 	lcall	_i2c_start
      0004DA D0 07            [24] 2259 	pop	ar7
                           0003F1  2260 	C$i2c.h$263$1$100 ==.
                                   2261 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:263: i2c_write(addr & ~0x01);   //Write address of device that will be written to, send 0
      0004DC 8F 06            [24] 2262 	mov	ar6,r7
      0004DE 74 FE            [12] 2263 	mov	a,#0xFE
      0004E0 5E               [12] 2264 	anl	a,r6
      0004E1 F5 82            [12] 2265 	mov	dpl,a
      0004E3 C0 07            [24] 2266 	push	ar7
      0004E5 12 04 2F         [24] 2267 	lcall	_i2c_write
                           0003FD  2268 	C$i2c.h$264$1$100 ==.
                                   2269 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:264: i2c_write_and_stop(start_reg); //Write & stop the 1st register to be read
      0004E8 85 2C 82         [24] 2270 	mov	dpl,_i2c_read_data_PARM_2
      0004EB 12 04 38         [24] 2271 	lcall	_i2c_write_and_stop
                           000403  2272 	C$i2c.h$265$1$100 ==.
                                   2273 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:265: i2c_start();               //Start I2C transfer
      0004EE 12 04 22         [24] 2274 	lcall	_i2c_start
      0004F1 D0 07            [24] 2275 	pop	ar7
                           000408  2276 	C$i2c.h$266$1$100 ==.
                                   2277 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:266: i2c_write(addr | 0x01);    //Write address again, this time indicating a read operation
      0004F3 74 01            [12] 2278 	mov	a,#0x01
      0004F5 4F               [12] 2279 	orl	a,r7
      0004F6 F5 82            [12] 2280 	mov	dpl,a
      0004F8 12 04 2F         [24] 2281 	lcall	_i2c_write
                           000410  2282 	C$i2c.h$267$1$100 ==.
                                   2283 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:267: for(j = 0; j < num_bytes - 1; j++)
      0004FB 7F 00            [12] 2284 	mov	r7,#0x00
      0004FD                       2285 00103$:
      0004FD AD 30            [24] 2286 	mov	r5,_i2c_read_data_PARM_4
      0004FF 7E 00            [12] 2287 	mov	r6,#0x00
      000501 1D               [12] 2288 	dec	r5
      000502 BD FF 01         [24] 2289 	cjne	r5,#0xFF,00114$
      000505 1E               [12] 2290 	dec	r6
      000506                       2291 00114$:
      000506 8F 03            [24] 2292 	mov	ar3,r7
      000508 7C 00            [12] 2293 	mov	r4,#0x00
      00050A C3               [12] 2294 	clr	c
      00050B EB               [12] 2295 	mov	a,r3
      00050C 9D               [12] 2296 	subb	a,r5
      00050D EC               [12] 2297 	mov	a,r4
      00050E 64 80            [12] 2298 	xrl	a,#0x80
      000510 8E F0            [24] 2299 	mov	b,r6
      000512 63 F0 80         [24] 2300 	xrl	b,#0x80
      000515 95 F0            [12] 2301 	subb	a,b
      000517 50 2E            [24] 2302 	jnc	00101$
                           00042E  2303 	C$i2c.h$269$2$101 ==.
                                   2304 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:269: AA = 1;                //Set acknowledge bit
      000519 D2 C2            [12] 2305 	setb	_AA
                           000430  2306 	C$i2c.h$270$2$101 ==.
                                   2307 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:270: buffer[j] = i2c_read();//Read data, save it in buffer
      00051B EF               [12] 2308 	mov	a,r7
      00051C 25 2D            [12] 2309 	add	a,_i2c_read_data_PARM_3
      00051E FC               [12] 2310 	mov	r4,a
      00051F E4               [12] 2311 	clr	a
      000520 35 2E            [12] 2312 	addc	a,(_i2c_read_data_PARM_3 + 1)
      000522 FD               [12] 2313 	mov	r5,a
      000523 AE 2F            [24] 2314 	mov	r6,(_i2c_read_data_PARM_3 + 2)
      000525 C0 07            [24] 2315 	push	ar7
      000527 C0 06            [24] 2316 	push	ar6
      000529 C0 05            [24] 2317 	push	ar5
      00052B C0 04            [24] 2318 	push	ar4
      00052D 12 04 43         [24] 2319 	lcall	_i2c_read
      000530 AB 82            [24] 2320 	mov	r3,dpl
      000532 D0 04            [24] 2321 	pop	ar4
      000534 D0 05            [24] 2322 	pop	ar5
      000536 D0 06            [24] 2323 	pop	ar6
      000538 D0 07            [24] 2324 	pop	ar7
      00053A 8C 82            [24] 2325 	mov	dpl,r4
      00053C 8D 83            [24] 2326 	mov	dph,r5
      00053E 8E F0            [24] 2327 	mov	b,r6
      000540 EB               [12] 2328 	mov	a,r3
      000541 12 13 EC         [24] 2329 	lcall	__gptrput
                           000459  2330 	C$i2c.h$267$1$100 ==.
                                   2331 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:267: for(j = 0; j < num_bytes - 1; j++)
      000544 0F               [12] 2332 	inc	r7
      000545 80 B6            [24] 2333 	sjmp	00103$
      000547                       2334 00101$:
                           00045C  2335 	C$i2c.h$272$1$100 ==.
                                   2336 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:272: AA = 0;
      000547 C2 C2            [12] 2337 	clr	_AA
                           00045E  2338 	C$i2c.h$273$1$100 ==.
                                   2339 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:273: buffer[num_bytes - 1] = i2c_read_and_stop(); //Read the last byte and stop, save it in the buffer
      000549 AE 30            [24] 2340 	mov	r6,_i2c_read_data_PARM_4
      00054B 7F 00            [12] 2341 	mov	r7,#0x00
      00054D 1E               [12] 2342 	dec	r6
      00054E BE FF 01         [24] 2343 	cjne	r6,#0xFF,00116$
      000551 1F               [12] 2344 	dec	r7
      000552                       2345 00116$:
      000552 EE               [12] 2346 	mov	a,r6
      000553 25 2D            [12] 2347 	add	a,_i2c_read_data_PARM_3
      000555 FE               [12] 2348 	mov	r6,a
      000556 EF               [12] 2349 	mov	a,r7
      000557 35 2E            [12] 2350 	addc	a,(_i2c_read_data_PARM_3 + 1)
      000559 FF               [12] 2351 	mov	r7,a
      00055A AD 2F            [24] 2352 	mov	r5,(_i2c_read_data_PARM_3 + 2)
      00055C C0 07            [24] 2353 	push	ar7
      00055E C0 06            [24] 2354 	push	ar6
      000560 C0 05            [24] 2355 	push	ar5
      000562 12 04 4C         [24] 2356 	lcall	_i2c_read_and_stop
      000565 AC 82            [24] 2357 	mov	r4,dpl
      000567 D0 05            [24] 2358 	pop	ar5
      000569 D0 06            [24] 2359 	pop	ar6
      00056B D0 07            [24] 2360 	pop	ar7
      00056D 8E 82            [24] 2361 	mov	dpl,r6
      00056F 8F 83            [24] 2362 	mov	dph,r7
      000571 8D F0            [24] 2363 	mov	b,r5
      000573 EC               [12] 2364 	mov	a,r4
      000574 12 13 EC         [24] 2365 	lcall	__gptrput
                           00048C  2366 	C$i2c.h$274$1$100 ==.
                           00048C  2367 	XG$i2c_read_data$0$0 ==.
      000577 22               [24] 2368 	ret
                                   2369 ;------------------------------------------------------------
                                   2370 ;Allocation info for local variables in function 'Accel_Init'
                                   2371 ;------------------------------------------------------------
                                   2372 ;Data2                     Allocated with name '_Accel_Init_Data2_1_103'
                                   2373 ;------------------------------------------------------------
                           00048D  2374 	G$Accel_Init$0$0 ==.
                           00048D  2375 	C$i2c.h$283$1$100 ==.
                                   2376 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:283: void Accel_Init(void)
                                   2377 ;	-----------------------------------------
                                   2378 ;	 function Accel_Init
                                   2379 ;	-----------------------------------------
      000578                       2380 _Accel_Init:
                           00048D  2381 	C$i2c.h$287$1$103 ==.
                                   2382 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:287: Data2[0]=0x23;	//normal power mode, 50Hz ODR, y & x axes enabled
      000578 75 31 23         [24] 2383 	mov	_Accel_Init_Data2_1_103,#0x23
                           000490  2384 	C$i2c.h$289$1$103 ==.
                                   2385 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:289: i2c_write_data(addr_accel, 0x20, Data2, 1);
      00057B 75 28 31         [24] 2386 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      00057E 75 29 00         [24] 2387 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      000581 75 2A 40         [24] 2388 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000584 75 27 20         [24] 2389 	mov	_i2c_write_data_PARM_2,#0x20
      000587 75 2B 01         [24] 2390 	mov	_i2c_write_data_PARM_4,#0x01
      00058A 75 82 30         [24] 2391 	mov	dpl,#0x30
      00058D 12 04 5D         [24] 2392 	lcall	_i2c_write_data
                           0004A5  2393 	C$i2c.h$290$1$103 ==.
                                   2394 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:290: Data2[0]=0x00;	//Default - no filtering
      000590 75 31 00         [24] 2395 	mov	_Accel_Init_Data2_1_103,#0x00
                           0004A8  2396 	C$i2c.h$292$1$103 ==.
                                   2397 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:292: i2c_write_data(addr_accel, 0x21, Data2, 1);
      000593 75 28 31         [24] 2398 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      000596 75 29 00         [24] 2399 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      000599 75 2A 40         [24] 2400 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      00059C 75 27 21         [24] 2401 	mov	_i2c_write_data_PARM_2,#0x21
      00059F 75 2B 01         [24] 2402 	mov	_i2c_write_data_PARM_4,#0x01
      0005A2 75 82 30         [24] 2403 	mov	dpl,#0x30
      0005A5 12 04 5D         [24] 2404 	lcall	_i2c_write_data
                           0004BD  2405 	C$i2c.h$293$1$103 ==.
                                   2406 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:293: Data2[0]=0x00;	//default - no interrupts enabled
      0005A8 75 31 00         [24] 2407 	mov	_Accel_Init_Data2_1_103,#0x00
                           0004C0  2408 	C$i2c.h$294$1$103 ==.
                                   2409 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:294: i2c_write_data(addr_accel, 0x22, Data2, 1);
      0005AB 75 28 31         [24] 2410 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      0005AE 75 29 00         [24] 2411 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      0005B1 75 2A 40         [24] 2412 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      0005B4 75 27 22         [24] 2413 	mov	_i2c_write_data_PARM_2,#0x22
      0005B7 75 2B 01         [24] 2414 	mov	_i2c_write_data_PARM_4,#0x01
      0005BA 75 82 30         [24] 2415 	mov	dpl,#0x30
      0005BD 12 04 5D         [24] 2416 	lcall	_i2c_write_data
                           0004D5  2417 	C$i2c.h$298$1$103 ==.
                           0004D5  2418 	XG$Accel_Init$0$0 ==.
      0005C0 22               [24] 2419 	ret
                                   2420 ;------------------------------------------------------------
                                   2421 ;Allocation info for local variables in function 'main'
                                   2422 ;------------------------------------------------------------
                           0004D6  2423 	G$main$0$0 ==.
                           0004D6  2424 	C$lab6.c$82$1$103 ==.
                                   2425 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:82: void main(void)
                                   2426 ;	-----------------------------------------
                                   2427 ;	 function main
                                   2428 ;	-----------------------------------------
      0005C1                       2429 _main:
                           0004D6  2430 	C$lab6.c$84$1$123 ==.
                                   2431 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:84: Sys_Init();
      0005C1 12 01 1B         [24] 2432 	lcall	_Sys_Init
                           0004D9  2433 	C$lab6.c$85$1$123 ==.
                                   2434 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:85: putchar(' '); //the quotes in this line may not format correctly
      0005C4 75 82 20         [24] 2435 	mov	dpl,#0x20
      0005C7 12 01 2E         [24] 2436 	lcall	_putchar
                           0004DF  2437 	C$lab6.c$86$1$123 ==.
                                   2438 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:86: Port_Init();
      0005CA 12 13 89         [24] 2439 	lcall	_Port_Init
                           0004E2  2440 	C$lab6.c$87$1$123 ==.
                                   2441 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:87: XBR0_Init();
      0005CD 12 13 B9         [24] 2442 	lcall	_XBR0_Init
                           0004E5  2443 	C$lab6.c$88$1$123 ==.
                                   2444 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:88: PCA_Init();
      0005D0 12 13 A1         [24] 2445 	lcall	_PCA_Init
                           0004E8  2446 	C$lab6.c$89$1$123 ==.
                                   2447 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:89: SMB_Init();
      0005D3 12 13 BD         [24] 2448 	lcall	_SMB_Init
                           0004EB  2449 	C$lab6.c$90$1$123 ==.
                                   2450 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:90: ADC_Init();
      0005D6 12 13 C3         [24] 2451 	lcall	_ADC_Init
                           0004EE  2452 	C$lab6.c$92$1$123 ==.
                                   2453 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:92: count =0;
      0005D9 E4               [12] 2454 	clr	a
      0005DA F5 32            [12] 2455 	mov	_count,a
      0005DC F5 33            [12] 2456 	mov	(_count + 1),a
                           0004F3  2457 	C$lab6.c$94$1$123 ==.
                                   2458 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:94: RUDDER_PW= PW_CENTER_RUDDER;
      0005DE 85 3C 46         [24] 2459 	mov	_RUDDER_PW,_PW_CENTER_RUDDER
      0005E1 85 3D 47         [24] 2460 	mov	(_RUDDER_PW + 1),(_PW_CENTER_RUDDER + 1)
                           0004F9  2461 	C$lab6.c$95$1$123 ==.
                                   2462 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:95: ANGLE_PW = PW_CENTER_ANGLE;
      0005E4 85 42 4A         [24] 2463 	mov	_ANGLE_PW,_PW_CENTER_ANGLE
      0005E7 85 43 4B         [24] 2464 	mov	(_ANGLE_PW + 1),(_PW_CENTER_ANGLE + 1)
                           0004FF  2465 	C$lab6.c$96$1$123 ==.
                                   2466 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:96: RTHRUST_PW = PW_NUET_THRUST;
      0005EA 85 36 4E         [24] 2467 	mov	_RTHRUST_PW,_PW_NUET_THRUST
      0005ED 85 37 4F         [24] 2468 	mov	(_RTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
                           000505  2469 	C$lab6.c$97$1$123 ==.
                                   2470 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:97: LTHRUST_PW = PW_NUET_THRUST;
      0005F0 85 36 50         [24] 2471 	mov	_LTHRUST_PW,_PW_NUET_THRUST
      0005F3 85 37 51         [24] 2472 	mov	(_LTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
                           00050B  2473 	C$lab6.c$99$1$123 ==.
                                   2474 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:99: RDR_lo_to_hi = 0xFFFF - RUDDER_PW;
      0005F6 14               [12] 2475 	dec	a
      0005F7 C3               [12] 2476 	clr	c
      0005F8 95 46            [12] 2477 	subb	a,_RUDDER_PW
      0005FA F5 48            [12] 2478 	mov	_RDR_lo_to_hi,a
      0005FC 74 FF            [12] 2479 	mov	a,#0xFF
      0005FE 95 47            [12] 2480 	subb	a,(_RUDDER_PW + 1)
      000600 F5 49            [12] 2481 	mov	(_RDR_lo_to_hi + 1),a
                           000517  2482 	C$lab6.c$100$1$123 ==.
                                   2483 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:100: RTRST_lo_to_hi = 0xFFFF - RTHRUST_PW;
      000602 74 FF            [12] 2484 	mov	a,#0xFF
      000604 C3               [12] 2485 	clr	c
      000605 95 4E            [12] 2486 	subb	a,_RTHRUST_PW
      000607 F5 52            [12] 2487 	mov	_RTRST_lo_to_hi,a
      000609 74 FF            [12] 2488 	mov	a,#0xFF
      00060B 95 4F            [12] 2489 	subb	a,(_RTHRUST_PW + 1)
      00060D F5 53            [12] 2490 	mov	(_RTRST_lo_to_hi + 1),a
                           000524  2491 	C$lab6.c$101$1$123 ==.
                                   2492 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:101: LTRST_lo_to_hi = 0xFFFF - LTHRUST_PW;
      00060F 74 FF            [12] 2493 	mov	a,#0xFF
      000611 C3               [12] 2494 	clr	c
      000612 95 50            [12] 2495 	subb	a,_LTHRUST_PW
      000614 F5 54            [12] 2496 	mov	_LTRST_lo_to_hi,a
      000616 74 FF            [12] 2497 	mov	a,#0xFF
      000618 95 51            [12] 2498 	subb	a,(_LTHRUST_PW + 1)
      00061A F5 55            [12] 2499 	mov	(_LTRST_lo_to_hi + 1),a
                           000531  2500 	C$lab6.c$102$1$123 ==.
                                   2501 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:102: AGL_lo_to_hi = 0xFFFF - ANGLE_PW;
      00061C 74 FF            [12] 2502 	mov	a,#0xFF
      00061E C3               [12] 2503 	clr	c
      00061F 95 4A            [12] 2504 	subb	a,_ANGLE_PW
      000621 F5 4C            [12] 2505 	mov	_AGL_lo_to_hi,a
      000623 74 FF            [12] 2506 	mov	a,#0xFF
      000625 95 4B            [12] 2507 	subb	a,(_ANGLE_PW + 1)
      000627 F5 4D            [12] 2508 	mov	(_AGL_lo_to_hi + 1),a
                           00053E  2509 	C$lab6.c$104$1$123 ==.
                                   2510 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:104: PCA0CP0 = RDR_lo_to_hi;
      000629 85 48 EA         [24] 2511 	mov	((_PCA0CP0 >> 0) & 0xFF),_RDR_lo_to_hi
      00062C 85 49 FA         [24] 2512 	mov	((_PCA0CP0 >> 8) & 0xFF),(_RDR_lo_to_hi + 1)
                           000544  2513 	C$lab6.c$105$1$123 ==.
                                   2514 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:105: PCA0CP1 = AGL_lo_to_hi;	
      00062F 85 4C EB         [24] 2515 	mov	((_PCA0CP1 >> 0) & 0xFF),_AGL_lo_to_hi
      000632 85 4D FB         [24] 2516 	mov	((_PCA0CP1 >> 8) & 0xFF),(_AGL_lo_to_hi + 1)
                           00054A  2517 	C$lab6.c$106$1$123 ==.
                                   2518 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:106: PCA0CP2 = RTRST_lo_to_hi;
      000635 85 52 EC         [24] 2519 	mov	((_PCA0CP2 >> 0) & 0xFF),_RTRST_lo_to_hi
      000638 85 53 FC         [24] 2520 	mov	((_PCA0CP2 >> 8) & 0xFF),(_RTRST_lo_to_hi + 1)
                           000550  2521 	C$lab6.c$107$1$123 ==.
                                   2522 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:107: PCA0CP3 = LTRST_lo_to_hi;
      00063B 85 54 ED         [24] 2523 	mov	((_PCA0CP3 >> 0) & 0xFF),_LTRST_lo_to_hi
      00063E 85 55 FD         [24] 2524 	mov	((_PCA0CP3 >> 8) & 0xFF),(_LTRST_lo_to_hi + 1)
                           000556  2525 	C$lab6.c$109$1$123 ==.
                                   2526 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:109: kpkd();
      000641 12 06 E7         [24] 2527 	lcall	_kpkd
                           000559  2528 	C$lab6.c$113$1$123 ==.
                                   2529 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:113: direction();
      000644 12 08 8B         [24] 2530 	lcall	_direction
                           00055C  2531 	C$lab6.c$114$1$123 ==.
                                   2532 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:114: while (1)
      000647                       2533 00106$:
                           00055C  2534 	C$lab6.c$117$2$124 ==.
                                   2535 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:117: wait();
      000647 12 13 62         [24] 2536 	lcall	_wait
                           00055F  2537 	C$lab6.c$118$2$124 ==.
                                   2538 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:118: if ((count +1) % 2 ==0)
      00064A 85 32 82         [24] 2539 	mov	dpl,_count
      00064D 85 33 83         [24] 2540 	mov	dph,(_count + 1)
      000650 A3               [24] 2541 	inc	dptr
      000651 75 11 02         [24] 2542 	mov	__modsint_PARM_2,#0x02
      000654 75 12 00         [24] 2543 	mov	(__modsint_PARM_2 + 1),#0x00
      000657 12 1B A0         [24] 2544 	lcall	__modsint
      00065A E5 82            [12] 2545 	mov	a,dpl
      00065C 85 83 F0         [24] 2546 	mov	b,dph
      00065F 45 F0            [12] 2547 	orl	a,b
      000661 70 03            [24] 2548 	jnz	00102$
                           000578  2549 	C$lab6.c$121$3$125 ==.
                                   2550 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:121: Steering_func();
      000663 12 08 1D         [24] 2551 	lcall	_Steering_func
      000666                       2552 00102$:
                           00057B  2553 	C$lab6.c$123$2$124 ==.
                                   2554 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:123: if ((count +1) % 4 ==0)
      000666 85 32 82         [24] 2555 	mov	dpl,_count
      000669 85 33 83         [24] 2556 	mov	dph,(_count + 1)
      00066C A3               [24] 2557 	inc	dptr
      00066D 75 11 04         [24] 2558 	mov	__modsint_PARM_2,#0x04
      000670 75 12 00         [24] 2559 	mov	(__modsint_PARM_2 + 1),#0x00
      000673 12 1B A0         [24] 2560 	lcall	__modsint
      000676 E5 82            [12] 2561 	mov	a,dpl
      000678 85 83 F0         [24] 2562 	mov	b,dph
      00067B 45 F0            [12] 2563 	orl	a,b
      00067D 70 C8            [24] 2564 	jnz	00106$
                           000594  2565 	C$lab6.c$125$3$126 ==.
                                   2566 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:125: Change_D();
      00067F 12 07 33         [24] 2567 	lcall	_Change_D
      000682 80 C3            [24] 2568 	sjmp	00106$
                           000599  2569 	C$lab6.c$129$1$123 ==.
                           000599  2570 	XG$main$0$0 ==.
      000684 22               [24] 2571 	ret
                                   2572 ;------------------------------------------------------------
                                   2573 ;Allocation info for local variables in function 'Calibrate'
                                   2574 ;------------------------------------------------------------
                           00059A  2575 	G$Calibrate$0$0 ==.
                           00059A  2576 	C$lab6.c$131$1$123 ==.
                                   2577 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:131: void Calibrate(void)
                                   2578 ;	-----------------------------------------
                                   2579 ;	 function Calibrate
                                   2580 ;	-----------------------------------------
      000685                       2581 _Calibrate:
                           00059A  2582 	C$lab6.c$135$1$128 ==.
                                   2583 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:135: Rudder_cal();
      000685 12 09 3D         [24] 2584 	lcall	_Rudder_cal
                           00059D  2585 	C$lab6.c$136$1$128 ==.
                                   2586 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:136: RUDDER_PW= PW_CENTER_RUDDER;
      000688 85 3C 46         [24] 2587 	mov	_RUDDER_PW,_PW_CENTER_RUDDER
      00068B 85 3D 47         [24] 2588 	mov	(_RUDDER_PW + 1),(_PW_CENTER_RUDDER + 1)
                           0005A3  2589 	C$lab6.c$137$1$128 ==.
                                   2590 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:137: RDR_lo_to_hi = 0xFFFF - RUDDER_PW;
      00068E 74 FF            [12] 2591 	mov	a,#0xFF
      000690 C3               [12] 2592 	clr	c
      000691 95 46            [12] 2593 	subb	a,_RUDDER_PW
      000693 F5 48            [12] 2594 	mov	_RDR_lo_to_hi,a
      000695 74 FF            [12] 2595 	mov	a,#0xFF
      000697 95 47            [12] 2596 	subb	a,(_RUDDER_PW + 1)
      000699 F5 49            [12] 2597 	mov	(_RDR_lo_to_hi + 1),a
                           0005B0  2598 	C$lab6.c$138$1$128 ==.
                                   2599 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:138: PCA0CP0 = RDR_lo_to_hi;
      00069B 85 48 EA         [24] 2600 	mov	((_PCA0CP0 >> 0) & 0xFF),_RDR_lo_to_hi
      00069E 85 49 FA         [24] 2601 	mov	((_PCA0CP0 >> 8) & 0xFF),(_RDR_lo_to_hi + 1)
                           0005B6  2602 	C$lab6.c$140$1$128 ==.
                                   2603 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:140: Angle_cal();
      0006A1 12 0B EA         [24] 2604 	lcall	_Angle_cal
                           0005B9  2605 	C$lab6.c$141$1$128 ==.
                                   2606 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:141: ANGLE_PW = PW_CENTER_ANGLE;
      0006A4 85 42 4A         [24] 2607 	mov	_ANGLE_PW,_PW_CENTER_ANGLE
      0006A7 85 43 4B         [24] 2608 	mov	(_ANGLE_PW + 1),(_PW_CENTER_ANGLE + 1)
                           0005BF  2609 	C$lab6.c$142$1$128 ==.
                                   2610 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:142: AGL_lo_to_hi = 0xFFFF - ANGLE_PW;
      0006AA 74 FF            [12] 2611 	mov	a,#0xFF
      0006AC C3               [12] 2612 	clr	c
      0006AD 95 4A            [12] 2613 	subb	a,_ANGLE_PW
      0006AF F5 4C            [12] 2614 	mov	_AGL_lo_to_hi,a
      0006B1 74 FF            [12] 2615 	mov	a,#0xFF
      0006B3 95 4B            [12] 2616 	subb	a,(_ANGLE_PW + 1)
      0006B5 F5 4D            [12] 2617 	mov	(_AGL_lo_to_hi + 1),a
                           0005CC  2618 	C$lab6.c$143$1$128 ==.
                                   2619 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:143: PCA0CP1 = AGL_lo_to_hi;
      0006B7 85 4C EB         [24] 2620 	mov	((_PCA0CP1 >> 0) & 0xFF),_AGL_lo_to_hi
      0006BA 85 4D FB         [24] 2621 	mov	((_PCA0CP1 >> 8) & 0xFF),(_AGL_lo_to_hi + 1)
                           0005D2  2622 	C$lab6.c$145$1$128 ==.
                                   2623 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:145: Thrust_cal();
      0006BD 12 0E A5         [24] 2624 	lcall	_Thrust_cal
                           0005D5  2625 	C$lab6.c$146$1$128 ==.
                                   2626 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:146: RTHRUST_PW = PW_NUET_THRUST;
      0006C0 85 36 4E         [24] 2627 	mov	_RTHRUST_PW,_PW_NUET_THRUST
      0006C3 85 37 4F         [24] 2628 	mov	(_RTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
                           0005DB  2629 	C$lab6.c$147$1$128 ==.
                                   2630 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:147: LTHRUST_PW = PW_NUET_THRUST;
      0006C6 85 36 50         [24] 2631 	mov	_LTHRUST_PW,_PW_NUET_THRUST
      0006C9 85 37 51         [24] 2632 	mov	(_LTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
                           0005E1  2633 	C$lab6.c$148$1$128 ==.
                                   2634 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:148: RTRST_lo_to_hi = 0xFFFF - RTHRUST_PW;
      0006CC 74 FF            [12] 2635 	mov	a,#0xFF
      0006CE C3               [12] 2636 	clr	c
      0006CF 95 4E            [12] 2637 	subb	a,_RTHRUST_PW
      0006D1 F5 52            [12] 2638 	mov	_RTRST_lo_to_hi,a
      0006D3 74 FF            [12] 2639 	mov	a,#0xFF
      0006D5 95 4F            [12] 2640 	subb	a,(_RTHRUST_PW + 1)
      0006D7 F5 53            [12] 2641 	mov	(_RTRST_lo_to_hi + 1),a
                           0005EE  2642 	C$lab6.c$149$1$128 ==.
                                   2643 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:149: LTRST_lo_to_hi = 0xFFFF - LTHRUST_PW;
      0006D9 74 FF            [12] 2644 	mov	a,#0xFF
      0006DB C3               [12] 2645 	clr	c
      0006DC 95 50            [12] 2646 	subb	a,_LTHRUST_PW
      0006DE F5 54            [12] 2647 	mov	_LTRST_lo_to_hi,a
      0006E0 74 FF            [12] 2648 	mov	a,#0xFF
      0006E2 95 51            [12] 2649 	subb	a,(_LTHRUST_PW + 1)
      0006E4 F5 55            [12] 2650 	mov	(_LTRST_lo_to_hi + 1),a
                           0005FB  2651 	C$lab6.c$150$1$128 ==.
                           0005FB  2652 	XG$Calibrate$0$0 ==.
      0006E6 22               [24] 2653 	ret
                                   2654 ;------------------------------------------------------------
                                   2655 ;Allocation info for local variables in function 'kpkd'
                                   2656 ;------------------------------------------------------------
                           0005FC  2657 	G$kpkd$0$0 ==.
                           0005FC  2658 	C$lab6.c$152$1$128 ==.
                                   2659 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:152: void kpkd(void)
                                   2660 ;	-----------------------------------------
                                   2661 ;	 function kpkd
                                   2662 ;	-----------------------------------------
      0006E7                       2663 _kpkd:
                           0005FC  2664 	C$lab6.c$154$1$130 ==.
                                   2665 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:154: lcd_clear();
      0006E7 12 01 CC         [24] 2666 	lcall	_lcd_clear
                           0005FF  2667 	C$lab6.c$155$1$130 ==.
                                   2668 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:155: lcd_print("Please enter a kp value:\n ");
      0006EA 74 03            [12] 2669 	mov	a,#___str_3
      0006EC C0 E0            [24] 2670 	push	acc
      0006EE 74 1C            [12] 2671 	mov	a,#(___str_3 >> 8)
      0006F0 C0 E0            [24] 2672 	push	acc
      0006F2 74 80            [12] 2673 	mov	a,#0x80
      0006F4 C0 E0            [24] 2674 	push	acc
      0006F6 12 01 47         [24] 2675 	lcall	_lcd_print
      0006F9 15 81            [12] 2676 	dec	sp
      0006FB 15 81            [12] 2677 	dec	sp
      0006FD 15 81            [12] 2678 	dec	sp
                           000614  2679 	C$lab6.c$156$1$130 ==.
                                   2680 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:156: kp = kpd_input(0);
      0006FF 75 82 00         [24] 2681 	mov	dpl,#0x00
      000702 12 02 84         [24] 2682 	lcall	_kpd_input
      000705 85 82 5B         [24] 2683 	mov	_kp,dpl
      000708 85 83 5C         [24] 2684 	mov	(_kp + 1),dph
                           000620  2685 	C$lab6.c$157$1$130 ==.
                                   2686 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:157: lcd_clear();
      00070B 12 01 CC         [24] 2687 	lcall	_lcd_clear
                           000623  2688 	C$lab6.c$158$1$130 ==.
                                   2689 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:158: lcd_print("Please enter a kd value:\n ");
      00070E 74 1E            [12] 2690 	mov	a,#___str_4
      000710 C0 E0            [24] 2691 	push	acc
      000712 74 1C            [12] 2692 	mov	a,#(___str_4 >> 8)
      000714 C0 E0            [24] 2693 	push	acc
      000716 74 80            [12] 2694 	mov	a,#0x80
      000718 C0 E0            [24] 2695 	push	acc
      00071A 12 01 47         [24] 2696 	lcall	_lcd_print
      00071D 15 81            [12] 2697 	dec	sp
      00071F 15 81            [12] 2698 	dec	sp
      000721 15 81            [12] 2699 	dec	sp
                           000638  2700 	C$lab6.c$159$1$130 ==.
                                   2701 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:159: kd = kpd_input(0);
      000723 75 82 00         [24] 2702 	mov	dpl,#0x00
      000726 12 02 84         [24] 2703 	lcall	_kpd_input
      000729 85 82 5D         [24] 2704 	mov	_kd,dpl
      00072C 85 83 5E         [24] 2705 	mov	(_kd + 1),dph
                           000644  2706 	C$lab6.c$160$1$130 ==.
                                   2707 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:160: lcd_clear();
      00072F 12 01 CC         [24] 2708 	lcall	_lcd_clear
                           000647  2709 	C$lab6.c$161$1$130 ==.
                           000647  2710 	XG$kpkd$0$0 ==.
      000732 22               [24] 2711 	ret
                                   2712 ;------------------------------------------------------------
                                   2713 ;Allocation info for local variables in function 'Change_D'
                                   2714 ;------------------------------------------------------------
                                   2715 ;distance                  Allocated with name '_Change_D_distance_1_132'
                                   2716 ;temp                      Allocated with name '_Change_D_temp_1_132'
                                   2717 ;------------------------------------------------------------
                           000648  2718 	G$Change_D$0$0 ==.
                           000648  2719 	C$lab6.c$164$1$130 ==.
                                   2720 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:164: void Change_D(void)
                                   2721 ;	-----------------------------------------
                                   2722 ;	 function Change_D
                                   2723 ;	-----------------------------------------
      000733                       2724 _Change_D:
                           000648  2725 	C$lab6.c$166$1$130 ==.
                                   2726 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:166: __xdata unsigned int distance=40;
      000733 90 00 55         [24] 2727 	mov	dptr,#_Change_D_distance_1_132
      000736 74 28            [12] 2728 	mov	a,#0x28
      000738 F0               [24] 2729 	movx	@dptr,a
      000739 E4               [12] 2730 	clr	a
      00073A A3               [24] 2731 	inc	dptr
      00073B F0               [24] 2732 	movx	@dptr,a
                           000651  2733 	C$lab6.c$167$1$130 ==.
                                   2734 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:167: __xdata int temp =1;
      00073C 90 00 57         [24] 2735 	mov	dptr,#_Change_D_temp_1_132
      00073F 04               [12] 2736 	inc	a
      000740 F0               [24] 2737 	movx	@dptr,a
      000741 E4               [12] 2738 	clr	a
      000742 A3               [24] 2739 	inc	dptr
      000743 F0               [24] 2740 	movx	@dptr,a
                           000659  2741 	C$lab6.c$168$2$133 ==.
                                   2742 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:168: while (distance < 50)
      000744                       2743 00104$:
      000744 90 00 55         [24] 2744 	mov	dptr,#_Change_D_distance_1_132
      000747 E0               [24] 2745 	movx	a,@dptr
      000748 FE               [12] 2746 	mov	r6,a
      000749 A3               [24] 2747 	inc	dptr
      00074A E0               [24] 2748 	movx	a,@dptr
      00074B FF               [12] 2749 	mov	r7,a
      00074C C3               [12] 2750 	clr	c
      00074D EE               [12] 2751 	mov	a,r6
      00074E 94 32            [12] 2752 	subb	a,#0x32
      000750 EF               [12] 2753 	mov	a,r7
      000751 94 00            [12] 2754 	subb	a,#0x00
      000753 40 03            [24] 2755 	jc	00121$
      000755 02 07 F6         [24] 2756 	ljmp	00107$
      000758                       2757 00121$:
                           00066D  2758 	C$lab6.c$171$2$133 ==.
                                   2759 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:171: distance = Read_Ranger();
      000758 12 07 F7         [24] 2760 	lcall	_Read_Ranger
      00075B AE 82            [24] 2761 	mov	r6,dpl
      00075D AF 83            [24] 2762 	mov	r7,dph
      00075F 90 00 55         [24] 2763 	mov	dptr,#_Change_D_distance_1_132
      000762 EE               [12] 2764 	mov	a,r6
      000763 F0               [24] 2765 	movx	@dptr,a
      000764 EF               [12] 2766 	mov	a,r7
      000765 A3               [24] 2767 	inc	dptr
      000766 F0               [24] 2768 	movx	@dptr,a
                           00067C  2769 	C$lab6.c$172$2$133 ==.
                                   2770 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:172: r_data[0] = 0x51;
      000767 75 58 51         [24] 2771 	mov	_r_data,#0x51
                           00067F  2772 	C$lab6.c$173$2$133 ==.
                                   2773 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:173: i2c_write_data(r_addr, 0, r_data, 1);
      00076A 75 28 58         [24] 2774 	mov	_i2c_write_data_PARM_3,#_r_data
      00076D 75 29 00         [24] 2775 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      000770 75 2A 40         [24] 2776 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000773 75 27 00         [24] 2777 	mov	_i2c_write_data_PARM_2,#0x00
      000776 75 2B 01         [24] 2778 	mov	_i2c_write_data_PARM_4,#0x01
      000779 85 5A 82         [24] 2779 	mov	dpl,_r_addr
      00077C C0 07            [24] 2780 	push	ar7
      00077E C0 06            [24] 2781 	push	ar6
      000780 12 04 5D         [24] 2782 	lcall	_i2c_write_data
      000783 D0 06            [24] 2783 	pop	ar6
      000785 D0 07            [24] 2784 	pop	ar7
                           00069C  2785 	C$lab6.c$174$2$133 ==.
                                   2786 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:174: printf("\r\n%u", distance);
      000787 C0 07            [24] 2787 	push	ar7
      000789 C0 06            [24] 2788 	push	ar6
      00078B C0 06            [24] 2789 	push	ar6
      00078D C0 07            [24] 2790 	push	ar7
      00078F 74 39            [12] 2791 	mov	a,#___str_5
      000791 C0 E0            [24] 2792 	push	acc
      000793 74 1C            [12] 2793 	mov	a,#(___str_5 >> 8)
      000795 C0 E0            [24] 2794 	push	acc
      000797 74 80            [12] 2795 	mov	a,#0x80
      000799 C0 E0            [24] 2796 	push	acc
      00079B 12 15 90         [24] 2797 	lcall	_printf
      00079E E5 81            [12] 2798 	mov	a,sp
      0007A0 24 FB            [12] 2799 	add	a,#0xfb
      0007A2 F5 81            [12] 2800 	mov	sp,a
      0007A4 D0 06            [24] 2801 	pop	ar6
      0007A6 D0 07            [24] 2802 	pop	ar7
                           0006BD  2803 	C$lab6.c$176$2$133 ==.
                                   2804 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:176: if (distance < 50 && temp ==1)
      0007A8 C3               [12] 2805 	clr	c
      0007A9 EE               [12] 2806 	mov	a,r6
      0007AA 94 32            [12] 2807 	subb	a,#0x32
      0007AC EF               [12] 2808 	mov	a,r7
      0007AD 94 00            [12] 2809 	subb	a,#0x00
      0007AF 50 93            [24] 2810 	jnc	00104$
      0007B1 90 00 57         [24] 2811 	mov	dptr,#_Change_D_temp_1_132
      0007B4 E0               [24] 2812 	movx	a,@dptr
      0007B5 FE               [12] 2813 	mov	r6,a
      0007B6 A3               [24] 2814 	inc	dptr
      0007B7 E0               [24] 2815 	movx	a,@dptr
      0007B8 FF               [12] 2816 	mov	r7,a
      0007B9 BE 01 05         [24] 2817 	cjne	r6,#0x01,00123$
      0007BC BF 00 02         [24] 2818 	cjne	r7,#0x00,00123$
      0007BF 80 03            [24] 2819 	sjmp	00124$
      0007C1                       2820 00123$:
      0007C1 02 07 44         [24] 2821 	ljmp	00104$
      0007C4                       2822 00124$:
                           0006D9  2823 	C$lab6.c$178$3$134 ==.
                                   2824 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:178: desired_D = (desired_D + 1800) % 3600;
      0007C4 90 00 51         [24] 2825 	mov	dptr,#_desired_D
      0007C7 E0               [24] 2826 	movx	a,@dptr
      0007C8 FE               [12] 2827 	mov	r6,a
      0007C9 A3               [24] 2828 	inc	dptr
      0007CA E0               [24] 2829 	movx	a,@dptr
      0007CB FF               [12] 2830 	mov	r7,a
      0007CC 74 08            [12] 2831 	mov	a,#0x08
      0007CE 2E               [12] 2832 	add	a,r6
      0007CF F5 82            [12] 2833 	mov	dpl,a
      0007D1 74 07            [12] 2834 	mov	a,#0x07
      0007D3 3F               [12] 2835 	addc	a,r7
      0007D4 F5 83            [12] 2836 	mov	dph,a
      0007D6 75 11 10         [24] 2837 	mov	__modsint_PARM_2,#0x10
      0007D9 75 12 0E         [24] 2838 	mov	(__modsint_PARM_2 + 1),#0x0E
      0007DC 12 1B A0         [24] 2839 	lcall	__modsint
      0007DF E5 82            [12] 2840 	mov	a,dpl
      0007E1 85 83 F0         [24] 2841 	mov	b,dph
      0007E4 90 00 51         [24] 2842 	mov	dptr,#_desired_D
      0007E7 F0               [24] 2843 	movx	@dptr,a
      0007E8 E5 F0            [12] 2844 	mov	a,b
      0007EA A3               [24] 2845 	inc	dptr
      0007EB F0               [24] 2846 	movx	@dptr,a
                           000701  2847 	C$lab6.c$179$3$134 ==.
                                   2848 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:179: temp =0;
      0007EC 90 00 57         [24] 2849 	mov	dptr,#_Change_D_temp_1_132
      0007EF E4               [12] 2850 	clr	a
      0007F0 F0               [24] 2851 	movx	@dptr,a
      0007F1 A3               [24] 2852 	inc	dptr
      0007F2 F0               [24] 2853 	movx	@dptr,a
      0007F3 02 07 44         [24] 2854 	ljmp	00104$
      0007F6                       2855 00107$:
                           00070B  2856 	C$lab6.c$183$1$132 ==.
                           00070B  2857 	XG$Change_D$0$0 ==.
      0007F6 22               [24] 2858 	ret
                                   2859 ;------------------------------------------------------------
                                   2860 ;Allocation info for local variables in function 'Read_Ranger'
                                   2861 ;------------------------------------------------------------
                                   2862 ;read                      Allocated to registers 
                                   2863 ;------------------------------------------------------------
                           00070C  2864 	G$Read_Ranger$0$0 ==.
                           00070C  2865 	C$lab6.c$185$1$132 ==.
                                   2866 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:185: unsigned int Read_Ranger(void)
                                   2867 ;	-----------------------------------------
                                   2868 ;	 function Read_Ranger
                                   2869 ;	-----------------------------------------
      0007F7                       2870 _Read_Ranger:
                           00070C  2871 	C$lab6.c$188$1$136 ==.
                                   2872 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:188: i2c_read_data(r_addr, 2, r_data, 2);
      0007F7 75 2D 58         [24] 2873 	mov	_i2c_read_data_PARM_3,#_r_data
      0007FA 75 2E 00         [24] 2874 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0007FD 75 2F 40         [24] 2875 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      000800 75 2C 02         [24] 2876 	mov	_i2c_read_data_PARM_2,#0x02
      000803 75 30 02         [24] 2877 	mov	_i2c_read_data_PARM_4,#0x02
      000806 85 5A 82         [24] 2878 	mov	dpl,_r_addr
      000809 12 04 D3         [24] 2879 	lcall	_i2c_read_data
                           000721  2880 	C$lab6.c$189$1$136 ==.
                                   2881 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:189: read = (((unsigned int) r_data[0] <<8) | r_data[1]);
      00080C AF 58            [24] 2882 	mov	r7,_r_data
      00080E 7E 00            [12] 2883 	mov	r6,#0x00
      000810 AC 59            [24] 2884 	mov	r4,(_r_data + 0x0001)
      000812 7D 00            [12] 2885 	mov	r5,#0x00
      000814 EC               [12] 2886 	mov	a,r4
      000815 4E               [12] 2887 	orl	a,r6
      000816 F5 82            [12] 2888 	mov	dpl,a
      000818 ED               [12] 2889 	mov	a,r5
      000819 4F               [12] 2890 	orl	a,r7
      00081A F5 83            [12] 2891 	mov	dph,a
                           000731  2892 	C$lab6.c$190$1$136 ==.
                                   2893 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:190: return read;
                           000731  2894 	C$lab6.c$191$1$136 ==.
                           000731  2895 	XG$Read_Ranger$0$0 ==.
      00081C 22               [24] 2896 	ret
                                   2897 ;------------------------------------------------------------
                                   2898 ;Allocation info for local variables in function 'Steering_func'
                                   2899 ;------------------------------------------------------------
                           000732  2900 	G$Steering_func$0$0 ==.
                           000732  2901 	C$lab6.c$193$1$136 ==.
                                   2902 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:193: void Steering_func(void)    ///FUNCTION TO HOLD ACTIONS FOR STEERING
                                   2903 ;	-----------------------------------------
                                   2904 ;	 function Steering_func
                                   2905 ;	-----------------------------------------
      00081D                       2906 _Steering_func:
                           000732  2907 	C$lab6.c$195$1$138 ==.
                                   2908 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:195: actual_D = ReadCompass();
      00081D 12 09 17         [24] 2909 	lcall	_ReadCompass
      000820 E5 82            [12] 2910 	mov	a,dpl
      000822 85 83 F0         [24] 2911 	mov	b,dph
      000825 90 00 53         [24] 2912 	mov	dptr,#_actual_D
      000828 F0               [24] 2913 	movx	@dptr,a
      000829 E5 F0            [12] 2914 	mov	a,b
      00082B A3               [24] 2915 	inc	dptr
      00082C F0               [24] 2916 	movx	@dptr,a
                           000742  2917 	C$lab6.c$196$1$138 ==.
                                   2918 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:196: lcd_clear();
      00082D 12 01 CC         [24] 2919 	lcall	_lcd_clear
                           000745  2920 	C$lab6.c$197$1$138 ==.
                                   2921 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:197: lcd_print("%d", actual_D);
      000830 90 00 53         [24] 2922 	mov	dptr,#_actual_D
      000833 E0               [24] 2923 	movx	a,@dptr
      000834 C0 E0            [24] 2924 	push	acc
      000836 A3               [24] 2925 	inc	dptr
      000837 E0               [24] 2926 	movx	a,@dptr
      000838 C0 E0            [24] 2927 	push	acc
      00083A 74 3E            [12] 2928 	mov	a,#___str_6
      00083C C0 E0            [24] 2929 	push	acc
      00083E 74 1C            [12] 2930 	mov	a,#(___str_6 >> 8)
      000840 C0 E0            [24] 2931 	push	acc
      000842 74 80            [12] 2932 	mov	a,#0x80
      000844 C0 E0            [24] 2933 	push	acc
      000846 12 01 47         [24] 2934 	lcall	_lcd_print
      000849 E5 81            [12] 2935 	mov	a,sp
      00084B 24 FB            [12] 2936 	add	a,#0xfb
      00084D F5 81            [12] 2937 	mov	sp,a
                           000764  2938 	C$lab6.c$198$1$138 ==.
                                   2939 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:198: offset = (unsigned int)((actual_D +3600- desired_D ) % 3600);
      00084F 90 00 53         [24] 2940 	mov	dptr,#_actual_D
      000852 E0               [24] 2941 	movx	a,@dptr
      000853 FE               [12] 2942 	mov	r6,a
      000854 A3               [24] 2943 	inc	dptr
      000855 E0               [24] 2944 	movx	a,@dptr
      000856 FF               [12] 2945 	mov	r7,a
      000857 74 10            [12] 2946 	mov	a,#0x10
      000859 2E               [12] 2947 	add	a,r6
      00085A FE               [12] 2948 	mov	r6,a
      00085B 74 0E            [12] 2949 	mov	a,#0x0E
      00085D 3F               [12] 2950 	addc	a,r7
      00085E FF               [12] 2951 	mov	r7,a
      00085F 90 00 51         [24] 2952 	mov	dptr,#_desired_D
      000862 E0               [24] 2953 	movx	a,@dptr
      000863 FC               [12] 2954 	mov	r4,a
      000864 A3               [24] 2955 	inc	dptr
      000865 E0               [24] 2956 	movx	a,@dptr
      000866 FD               [12] 2957 	mov	r5,a
      000867 EE               [12] 2958 	mov	a,r6
      000868 C3               [12] 2959 	clr	c
      000869 9C               [12] 2960 	subb	a,r4
      00086A F5 82            [12] 2961 	mov	dpl,a
      00086C EF               [12] 2962 	mov	a,r7
      00086D 9D               [12] 2963 	subb	a,r5
      00086E F5 83            [12] 2964 	mov	dph,a
      000870 75 11 10         [24] 2965 	mov	__modsint_PARM_2,#0x10
      000873 75 12 0E         [24] 2966 	mov	(__modsint_PARM_2 + 1),#0x0E
      000876 12 1B A0         [24] 2967 	lcall	__modsint
      000879 AE 82            [24] 2968 	mov	r6,dpl
      00087B AF 83            [24] 2969 	mov	r7,dph
      00087D 8E 56            [24] 2970 	mov	_offset,r6
      00087F 8F 57            [24] 2971 	mov	(_offset + 1),r7
                           000796  2972 	C$lab6.c$199$1$138 ==.
                                   2973 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:199: Steering_Servo(offset);
      000881 85 56 82         [24] 2974 	mov	dpl,_offset
      000884 85 57 83         [24] 2975 	mov	dph,(_offset + 1)
      000887 12 11 D4         [24] 2976 	lcall	_Steering_Servo
                           00079F  2977 	C$lab6.c$200$1$138 ==.
                           00079F  2978 	XG$Steering_func$0$0 ==.
      00088A 22               [24] 2979 	ret
                                   2980 ;------------------------------------------------------------
                                   2981 ;Allocation info for local variables in function 'direction'
                                   2982 ;------------------------------------------------------------
                                   2983 ;value                     Allocated to registers r6 r7 
                                   2984 ;------------------------------------------------------------
                           0007A0  2985 	G$direction$0$0 ==.
                           0007A0  2986 	C$lab6.c$202$1$138 ==.
                                   2987 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:202: unsigned int direction(void)        ///ADJUSTS THE VALUES OF DIRECTION SO THE DESIRED DIRECTION IS THE CAR'S 'NORTH'
                                   2988 ;	-----------------------------------------
                                   2989 ;	 function direction
                                   2990 ;	-----------------------------------------
      00088B                       2991 _direction:
                           0007A0  2992 	C$lab6.c$205$1$140 ==.
                                   2993 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:205: count =0;
      00088B E4               [12] 2994 	clr	a
      00088C F5 32            [12] 2995 	mov	_count,a
      00088E F5 33            [12] 2996 	mov	(_count + 1),a
                           0007A5  2997 	C$lab6.c$206$1$140 ==.
                                   2998 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:206: while (count < 1);
      000890                       2999 00101$:
      000890 C3               [12] 3000 	clr	c
      000891 E5 32            [12] 3001 	mov	a,_count
      000893 94 01            [12] 3002 	subb	a,#0x01
      000895 E5 33            [12] 3003 	mov	a,(_count + 1)
      000897 64 80            [12] 3004 	xrl	a,#0x80
      000899 94 80            [12] 3005 	subb	a,#0x80
      00089B 40 F3            [24] 3006 	jc	00101$
                           0007B2  3007 	C$lab6.c$207$1$140 ==.
                                   3008 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:207: lcd_clear();
      00089D 12 01 CC         [24] 3009 	lcall	_lcd_clear
                           0007B5  3010 	C$lab6.c$208$1$140 ==.
                                   3011 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:208: lcd_print("Calibration:\nHello world!\n012_345_678:\nabc def ghij");
      0008A0 74 41            [12] 3012 	mov	a,#___str_7
      0008A2 C0 E0            [24] 3013 	push	acc
      0008A4 74 1C            [12] 3014 	mov	a,#(___str_7 >> 8)
      0008A6 C0 E0            [24] 3015 	push	acc
      0008A8 74 80            [12] 3016 	mov	a,#0x80
      0008AA C0 E0            [24] 3017 	push	acc
      0008AC 12 01 47         [24] 3018 	lcall	_lcd_print
      0008AF 15 81            [12] 3019 	dec	sp
      0008B1 15 81            [12] 3020 	dec	sp
      0008B3 15 81            [12] 3021 	dec	sp
                           0007CA  3022 	C$lab6.c$209$1$140 ==.
                                   3023 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:209: start();
      0008B5 12 13 52         [24] 3024 	lcall	_start
                           0007CD  3025 	C$lab6.c$210$1$140 ==.
                                   3026 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:210: lcd_clear();
      0008B8 12 01 CC         [24] 3027 	lcall	_lcd_clear
                           0007D0  3028 	C$lab6.c$211$1$140 ==.
                                   3029 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:211: value = kpd_input(0);
      0008BB 75 82 00         [24] 3030 	mov	dpl,#0x00
      0008BE 12 02 84         [24] 3031 	lcall	_kpd_input
      0008C1 AE 82            [24] 3032 	mov	r6,dpl
      0008C3 AF 83            [24] 3033 	mov	r7,dph
                           0007DA  3034 	C$lab6.c$212$1$140 ==.
                                   3035 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:212: lcd_clear();
      0008C5 C0 07            [24] 3036 	push	ar7
      0008C7 C0 06            [24] 3037 	push	ar6
      0008C9 12 01 CC         [24] 3038 	lcall	_lcd_clear
      0008CC D0 06            [24] 3039 	pop	ar6
      0008CE D0 07            [24] 3040 	pop	ar7
                           0007E5  3041 	C$lab6.c$213$1$140 ==.
                                   3042 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:213: lcd_print("\r\nThe desired direction is: %d", value);
      0008D0 C0 07            [24] 3043 	push	ar7
      0008D2 C0 06            [24] 3044 	push	ar6
      0008D4 C0 06            [24] 3045 	push	ar6
      0008D6 C0 07            [24] 3046 	push	ar7
      0008D8 74 75            [12] 3047 	mov	a,#___str_8
      0008DA C0 E0            [24] 3048 	push	acc
      0008DC 74 1C            [12] 3049 	mov	a,#(___str_8 >> 8)
      0008DE C0 E0            [24] 3050 	push	acc
      0008E0 74 80            [12] 3051 	mov	a,#0x80
      0008E2 C0 E0            [24] 3052 	push	acc
      0008E4 12 01 47         [24] 3053 	lcall	_lcd_print
      0008E7 E5 81            [12] 3054 	mov	a,sp
      0008E9 24 FB            [12] 3055 	add	a,#0xfb
      0008EB F5 81            [12] 3056 	mov	sp,a
      0008ED D0 06            [24] 3057 	pop	ar6
      0008EF D0 07            [24] 3058 	pop	ar7
                           000806  3059 	C$lab6.c$214$1$140 ==.
                                   3060 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:214: printf("\r\nThe desired direction is: %d", value);
      0008F1 C0 07            [24] 3061 	push	ar7
      0008F3 C0 06            [24] 3062 	push	ar6
      0008F5 C0 06            [24] 3063 	push	ar6
      0008F7 C0 07            [24] 3064 	push	ar7
      0008F9 74 75            [12] 3065 	mov	a,#___str_8
      0008FB C0 E0            [24] 3066 	push	acc
      0008FD 74 1C            [12] 3067 	mov	a,#(___str_8 >> 8)
      0008FF C0 E0            [24] 3068 	push	acc
      000901 74 80            [12] 3069 	mov	a,#0x80
      000903 C0 E0            [24] 3070 	push	acc
      000905 12 15 90         [24] 3071 	lcall	_printf
      000908 E5 81            [12] 3072 	mov	a,sp
      00090A 24 FB            [12] 3073 	add	a,#0xfb
      00090C F5 81            [12] 3074 	mov	sp,a
      00090E D0 06            [24] 3075 	pop	ar6
      000910 D0 07            [24] 3076 	pop	ar7
                           000827  3077 	C$lab6.c$216$1$140 ==.
                                   3078 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:216: return value;
      000912 8E 82            [24] 3079 	mov	dpl,r6
      000914 8F 83            [24] 3080 	mov	dph,r7
                           00082B  3081 	C$lab6.c$217$1$140 ==.
                           00082B  3082 	XG$direction$0$0 ==.
      000916 22               [24] 3083 	ret
                                   3084 ;------------------------------------------------------------
                                   3085 ;Allocation info for local variables in function 'ReadCompass'
                                   3086 ;------------------------------------------------------------
                                   3087 ;Data                      Allocated with name '_ReadCompass_Data_1_142'
                                   3088 ;Crange                    Allocated to registers 
                                   3089 ;addr                      Allocated to registers 
                                   3090 ;------------------------------------------------------------
                           00082C  3091 	G$ReadCompass$0$0 ==.
                           00082C  3092 	C$lab6.c$219$1$140 ==.
                                   3093 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:219: unsigned int ReadCompass(void)
                                   3094 ;	-----------------------------------------
                                   3095 ;	 function ReadCompass
                                   3096 ;	-----------------------------------------
      000917                       3097 _ReadCompass:
                           00082C  3098 	C$lab6.c$225$1$142 ==.
                                   3099 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:225: i2c_read_data(addr, 2,Data,2);
      000917 75 2D 63         [24] 3100 	mov	_i2c_read_data_PARM_3,#_ReadCompass_Data_1_142
      00091A 75 2E 00         [24] 3101 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      00091D 75 2F 40         [24] 3102 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      000920 75 2C 02         [24] 3103 	mov	_i2c_read_data_PARM_2,#0x02
      000923 75 30 02         [24] 3104 	mov	_i2c_read_data_PARM_4,#0x02
      000926 75 82 C0         [24] 3105 	mov	dpl,#0xC0
      000929 12 04 D3         [24] 3106 	lcall	_i2c_read_data
                           000841  3107 	C$lab6.c$226$1$142 ==.
                                   3108 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:226: Crange = ((unsigned int) Data[0] << 8 | Data[1]);
      00092C AF 63            [24] 3109 	mov	r7,_ReadCompass_Data_1_142
      00092E 7E 00            [12] 3110 	mov	r6,#0x00
      000930 AC 64            [24] 3111 	mov	r4,(_ReadCompass_Data_1_142 + 0x0001)
      000932 7D 00            [12] 3112 	mov	r5,#0x00
      000934 EC               [12] 3113 	mov	a,r4
      000935 4E               [12] 3114 	orl	a,r6
      000936 F5 82            [12] 3115 	mov	dpl,a
      000938 ED               [12] 3116 	mov	a,r5
      000939 4F               [12] 3117 	orl	a,r7
      00093A F5 83            [12] 3118 	mov	dph,a
                           000851  3119 	C$lab6.c$227$1$142 ==.
                                   3120 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:227: return Crange;
                           000851  3121 	C$lab6.c$228$1$142 ==.
                           000851  3122 	XG$ReadCompass$0$0 ==.
      00093C 22               [24] 3123 	ret
                                   3124 ;------------------------------------------------------------
                                   3125 ;Allocation info for local variables in function 'Rudder_cal'
                                   3126 ;------------------------------------------------------------
                                   3127 ;st                        Allocated to registers r7 
                                   3128 ;value                     Allocated with name '_Rudder_cal_value_1_144'
                                   3129 ;times                     Allocated with name '_Rudder_cal_times_1_144'
                                   3130 ;------------------------------------------------------------
                           000852  3131 	G$Rudder_cal$0$0 ==.
                           000852  3132 	C$lab6.c$230$1$142 ==.
                                   3133 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:230: void Rudder_cal(void)
                                   3134 ;	-----------------------------------------
                                   3135 ;	 function Rudder_cal
                                   3136 ;	-----------------------------------------
      00093D                       3137 _Rudder_cal:
                           000852  3138 	C$lab6.c$233$1$142 ==.
                                   3139 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:233: __xdata int value =0;
      00093D 90 00 59         [24] 3140 	mov	dptr,#_Rudder_cal_value_1_144
      000940 E4               [12] 3141 	clr	a
      000941 F0               [24] 3142 	movx	@dptr,a
      000942 A3               [24] 3143 	inc	dptr
      000943 F0               [24] 3144 	movx	@dptr,a
                           000859  3145 	C$lab6.c$234$1$142 ==.
                                   3146 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:234: __xdata int times =0;
      000944 90 00 5B         [24] 3147 	mov	dptr,#_Rudder_cal_times_1_144
      000947 F0               [24] 3148 	movx	@dptr,a
      000948 A3               [24] 3149 	inc	dptr
      000949 F0               [24] 3150 	movx	@dptr,a
                           00085F  3151 	C$lab6.c$235$1$144 ==.
                                   3152 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:235: count =0;
      00094A F5 32            [12] 3153 	mov	_count,a
      00094C F5 33            [12] 3154 	mov	(_count + 1),a
                           000863  3155 	C$lab6.c$236$1$144 ==.
                                   3156 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:236: lcd_clear();
      00094E 12 01 CC         [24] 3157 	lcall	_lcd_clear
                           000866  3158 	C$lab6.c$237$1$144 ==.
                                   3159 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:237: lcd_print("Rudder Calibration");
      000951 74 94            [12] 3160 	mov	a,#___str_9
      000953 C0 E0            [24] 3161 	push	acc
      000955 74 1C            [12] 3162 	mov	a,#(___str_9 >> 8)
      000957 C0 E0            [24] 3163 	push	acc
      000959 74 80            [12] 3164 	mov	a,#0x80
      00095B C0 E0            [24] 3165 	push	acc
      00095D 12 01 47         [24] 3166 	lcall	_lcd_print
      000960 15 81            [12] 3167 	dec	sp
      000962 15 81            [12] 3168 	dec	sp
      000964 15 81            [12] 3169 	dec	sp
                           00087B  3170 	C$lab6.c$238$1$144 ==.
                                   3171 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:238: while (count < 50);
      000966                       3172 00101$:
      000966 C3               [12] 3173 	clr	c
      000967 E5 32            [12] 3174 	mov	a,_count
      000969 94 32            [12] 3175 	subb	a,#0x32
      00096B E5 33            [12] 3176 	mov	a,(_count + 1)
      00096D 64 80            [12] 3177 	xrl	a,#0x80
      00096F 94 80            [12] 3178 	subb	a,#0x80
      000971 40 F3            [24] 3179 	jc	00101$
                           000888  3180 	C$lab6.c$239$1$144 ==.
                                   3181 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:239: lcd_clear();
      000973 12 01 CC         [24] 3182 	lcall	_lcd_clear
                           00088B  3183 	C$lab6.c$243$2$145 ==.
                                   3184 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:243: count =0;
      000976 E4               [12] 3185 	clr	a
      000977 F5 32            [12] 3186 	mov	_count,a
      000979 F5 33            [12] 3187 	mov	(_count + 1),a
                           000890  3188 	C$lab6.c$244$2$145 ==.
                                   3189 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:244: while (count < 1);
      00097B                       3190 00104$:
      00097B C3               [12] 3191 	clr	c
      00097C E5 32            [12] 3192 	mov	a,_count
      00097E 94 01            [12] 3193 	subb	a,#0x01
      000980 E5 33            [12] 3194 	mov	a,(_count + 1)
      000982 64 80            [12] 3195 	xrl	a,#0x80
      000984 94 80            [12] 3196 	subb	a,#0x80
      000986 40 F3            [24] 3197 	jc	00104$
                           00089D  3198 	C$lab6.c$245$2$145 ==.
                                   3199 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:245: lcd_clear();
      000988 12 01 CC         [24] 3200 	lcall	_lcd_clear
                           0008A0  3201 	C$lab6.c$246$2$145 ==.
                                   3202 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:246: lcd_print("go left: press 1\n go right: press 2\nPress * for next screen");
      00098B 74 A7            [12] 3203 	mov	a,#___str_10
      00098D C0 E0            [24] 3204 	push	acc
      00098F 74 1C            [12] 3205 	mov	a,#(___str_10 >> 8)
      000991 C0 E0            [24] 3206 	push	acc
      000993 74 80            [12] 3207 	mov	a,#0x80
      000995 C0 E0            [24] 3208 	push	acc
      000997 12 01 47         [24] 3209 	lcall	_lcd_print
      00099A 15 81            [12] 3210 	dec	sp
      00099C 15 81            [12] 3211 	dec	sp
      00099E 15 81            [12] 3212 	dec	sp
                           0008B5  3213 	C$lab6.c$247$2$145 ==.
                                   3214 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:247: start();
      0009A0 12 13 52         [24] 3215 	lcall	_start
                           0008B8  3216 	C$lab6.c$248$2$145 ==.
                                   3217 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:248: lcd_clear();
      0009A3 12 01 CC         [24] 3218 	lcall	_lcd_clear
                           0008BB  3219 	C$lab6.c$249$2$145 ==.
                                   3220 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:249: lcd_print("\n confirm: press 3\n press * to begin");
      0009A6 74 E3            [12] 3221 	mov	a,#___str_11
      0009A8 C0 E0            [24] 3222 	push	acc
      0009AA 74 1C            [12] 3223 	mov	a,#(___str_11 >> 8)
      0009AC C0 E0            [24] 3224 	push	acc
      0009AE 74 80            [12] 3225 	mov	a,#0x80
      0009B0 C0 E0            [24] 3226 	push	acc
      0009B2 12 01 47         [24] 3227 	lcall	_lcd_print
      0009B5 15 81            [12] 3228 	dec	sp
      0009B7 15 81            [12] 3229 	dec	sp
      0009B9 15 81            [12] 3230 	dec	sp
                           0008D0  3231 	C$lab6.c$250$2$145 ==.
                                   3232 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:250: start();
      0009BB 12 13 52         [24] 3233 	lcall	_start
                           0008D3  3234 	C$lab6.c$251$2$145 ==.
                                   3235 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:251: st =0;
      0009BE 7F 00            [12] 3236 	mov	r7,#0x00
                           0008D5  3237 	C$lab6.c$252$5$148 ==.
                                   3238 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:252: while (1)
      0009C0                       3239 00146$:
                           0008D5  3240 	C$lab6.c$254$3$146 ==.
                                   3241 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:254: printf("\r\n %u",RUDDER_PW);
      0009C0 C0 07            [24] 3242 	push	ar7
      0009C2 C0 46            [24] 3243 	push	_RUDDER_PW
      0009C4 C0 47            [24] 3244 	push	(_RUDDER_PW + 1)
      0009C6 74 08            [12] 3245 	mov	a,#___str_12
      0009C8 C0 E0            [24] 3246 	push	acc
      0009CA 74 1D            [12] 3247 	mov	a,#(___str_12 >> 8)
      0009CC C0 E0            [24] 3248 	push	acc
      0009CE 74 80            [12] 3249 	mov	a,#0x80
      0009D0 C0 E0            [24] 3250 	push	acc
      0009D2 12 15 90         [24] 3251 	lcall	_printf
      0009D5 E5 81            [12] 3252 	mov	a,sp
      0009D7 24 FB            [12] 3253 	add	a,#0xfb
      0009D9 F5 81            [12] 3254 	mov	sp,a
      0009DB D0 07            [24] 3255 	pop	ar7
                           0008F2  3256 	C$lab6.c$255$3$146 ==.
                                   3257 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:255: RDR_lo_to_hi = 0xFFFF - RUDDER_PW;
      0009DD 74 FF            [12] 3258 	mov	a,#0xFF
      0009DF C3               [12] 3259 	clr	c
      0009E0 95 46            [12] 3260 	subb	a,_RUDDER_PW
      0009E2 F5 48            [12] 3261 	mov	_RDR_lo_to_hi,a
      0009E4 74 FF            [12] 3262 	mov	a,#0xFF
      0009E6 95 47            [12] 3263 	subb	a,(_RUDDER_PW + 1)
      0009E8 F5 49            [12] 3264 	mov	(_RDR_lo_to_hi + 1),a
                           0008FF  3265 	C$lab6.c$256$3$146 ==.
                                   3266 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:256: PCA0CP0 = RDR_lo_to_hi;
      0009EA 85 48 EA         [24] 3267 	mov	((_PCA0CP0 >> 0) & 0xFF),_RDR_lo_to_hi
      0009ED 85 49 FA         [24] 3268 	mov	((_PCA0CP0 >> 8) & 0xFF),(_RDR_lo_to_hi + 1)
                           000905  3269 	C$lab6.c$258$3$146 ==.
                                   3270 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:258: if (times == 0 )
      0009F0 90 00 5B         [24] 3271 	mov	dptr,#_Rudder_cal_times_1_144
      0009F3 E0               [24] 3272 	movx	a,@dptr
      0009F4 FD               [12] 3273 	mov	r5,a
      0009F5 A3               [24] 3274 	inc	dptr
      0009F6 E0               [24] 3275 	movx	a,@dptr
      0009F7 FE               [12] 3276 	mov	r6,a
      0009F8 4D               [12] 3277 	orl	a,r5
      0009F9 60 03            [24] 3278 	jz	00215$
      0009FB 02 0A A6         [24] 3279 	ljmp	00143$
      0009FE                       3280 00215$:
                           000913  3281 	C$lab6.c$260$4$147 ==.
                                   3282 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:260: if (value ==0)
      0009FE 90 00 59         [24] 3283 	mov	dptr,#_Rudder_cal_value_1_144
      000A01 E0               [24] 3284 	movx	a,@dptr
      000A02 FD               [12] 3285 	mov	r5,a
      000A03 A3               [24] 3286 	inc	dptr
      000A04 E0               [24] 3287 	movx	a,@dptr
      000A05 FE               [12] 3288 	mov	r6,a
      000A06 4D               [12] 3289 	orl	a,r5
      000A07 70 27            [24] 3290 	jnz	00110$
                           00091E  3291 	C$lab6.c$262$5$148 ==.
                                   3292 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:262: lcd_clear();
      000A09 C0 07            [24] 3293 	push	ar7
      000A0B 12 01 CC         [24] 3294 	lcall	_lcd_clear
                           000923  3295 	C$lab6.c$263$5$148 ==.
                                   3296 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:263: lcd_print("Now calibrating Min_PW\n");
      000A0E 74 0E            [12] 3297 	mov	a,#___str_13
      000A10 C0 E0            [24] 3298 	push	acc
      000A12 74 1D            [12] 3299 	mov	a,#(___str_13 >> 8)
      000A14 C0 E0            [24] 3300 	push	acc
      000A16 74 80            [12] 3301 	mov	a,#0x80
      000A18 C0 E0            [24] 3302 	push	acc
      000A1A 12 01 47         [24] 3303 	lcall	_lcd_print
      000A1D 15 81            [12] 3304 	dec	sp
      000A1F 15 81            [12] 3305 	dec	sp
      000A21 15 81            [12] 3306 	dec	sp
      000A23 D0 07            [24] 3307 	pop	ar7
                           00093A  3308 	C$lab6.c$264$5$148 ==.
                                   3309 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:264: if (st ==0 ) RUDDER_PW = PW_LEFT_RUDDER;
      000A25 EF               [12] 3310 	mov	a,r7
      000A26 70 06            [24] 3311 	jnz	00108$
      000A28 85 3A 46         [24] 3312 	mov	_RUDDER_PW,_PW_LEFT_RUDDER
      000A2B 85 3B 47         [24] 3313 	mov	(_RUDDER_PW + 1),(_PW_LEFT_RUDDER + 1)
      000A2E                       3314 00108$:
                           000943  3315 	C$lab6.c$265$5$148 ==.
                                   3316 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:265: st =1;
      000A2E 7F 01            [12] 3317 	mov	r7,#0x01
      000A30                       3318 00110$:
                           000945  3319 	C$lab6.c$267$4$147 ==.
                                   3320 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:267: value = kpd_input(1);
      000A30 75 82 01         [24] 3321 	mov	dpl,#0x01
      000A33 C0 07            [24] 3322 	push	ar7
      000A35 12 02 84         [24] 3323 	lcall	_kpd_input
      000A38 AD 82            [24] 3324 	mov	r5,dpl
      000A3A AE 83            [24] 3325 	mov	r6,dph
      000A3C D0 07            [24] 3326 	pop	ar7
      000A3E 90 00 59         [24] 3327 	mov	dptr,#_Rudder_cal_value_1_144
      000A41 ED               [12] 3328 	mov	a,r5
      000A42 F0               [24] 3329 	movx	@dptr,a
      000A43 EE               [12] 3330 	mov	a,r6
      000A44 A3               [24] 3331 	inc	dptr
      000A45 F0               [24] 3332 	movx	@dptr,a
                           00095B  3333 	C$lab6.c$268$4$147 ==.
                                   3334 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:268: if (value == 1)
      000A46 BD 01 12         [24] 3335 	cjne	r5,#0x01,00117$
      000A49 BE 00 0F         [24] 3336 	cjne	r6,#0x00,00117$
                           000961  3337 	C$lab6.c$270$5$149 ==.
                                   3338 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:270: RUDDER_PW -= 20;
      000A4C E5 46            [12] 3339 	mov	a,_RUDDER_PW
      000A4E 24 EC            [12] 3340 	add	a,#0xEC
      000A50 F5 46            [12] 3341 	mov	_RUDDER_PW,a
      000A52 E5 47            [12] 3342 	mov	a,(_RUDDER_PW + 1)
      000A54 34 FF            [12] 3343 	addc	a,#0xFF
      000A56 F5 47            [12] 3344 	mov	(_RUDDER_PW + 1),a
      000A58 02 09 C0         [24] 3345 	ljmp	00146$
      000A5B                       3346 00117$:
                           000970  3347 	C$lab6.c$272$4$147 ==.
                                   3348 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:272: else if (value==2)
      000A5B 90 00 59         [24] 3349 	mov	dptr,#_Rudder_cal_value_1_144
      000A5E E0               [24] 3350 	movx	a,@dptr
      000A5F FD               [12] 3351 	mov	r5,a
      000A60 A3               [24] 3352 	inc	dptr
      000A61 E0               [24] 3353 	movx	a,@dptr
      000A62 FE               [12] 3354 	mov	r6,a
      000A63 BD 02 11         [24] 3355 	cjne	r5,#0x02,00114$
      000A66 BE 00 0E         [24] 3356 	cjne	r6,#0x00,00114$
                           00097E  3357 	C$lab6.c$274$5$150 ==.
                                   3358 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:274: RUDDER_PW += 20;
      000A69 74 14            [12] 3359 	mov	a,#0x14
      000A6B 25 46            [12] 3360 	add	a,_RUDDER_PW
      000A6D F5 46            [12] 3361 	mov	_RUDDER_PW,a
      000A6F E4               [12] 3362 	clr	a
      000A70 35 47            [12] 3363 	addc	a,(_RUDDER_PW + 1)
      000A72 F5 47            [12] 3364 	mov	(_RUDDER_PW + 1),a
      000A74 02 09 C0         [24] 3365 	ljmp	00146$
      000A77                       3366 00114$:
                           00098C  3367 	C$lab6.c$276$4$147 ==.
                                   3368 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:276: else if (value == 3)
      000A77 90 00 59         [24] 3369 	mov	dptr,#_Rudder_cal_value_1_144
      000A7A E0               [24] 3370 	movx	a,@dptr
      000A7B FD               [12] 3371 	mov	r5,a
      000A7C A3               [24] 3372 	inc	dptr
      000A7D E0               [24] 3373 	movx	a,@dptr
      000A7E FE               [12] 3374 	mov	r6,a
      000A7F BD 03 05         [24] 3375 	cjne	r5,#0x03,00222$
      000A82 BE 00 02         [24] 3376 	cjne	r6,#0x00,00222$
      000A85 80 03            [24] 3377 	sjmp	00223$
      000A87                       3378 00222$:
      000A87 02 09 C0         [24] 3379 	ljmp	00146$
      000A8A                       3380 00223$:
                           00099F  3381 	C$lab6.c$278$5$151 ==.
                                   3382 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:278: times++;
      000A8A 90 00 5B         [24] 3383 	mov	dptr,#_Rudder_cal_times_1_144
      000A8D E0               [24] 3384 	movx	a,@dptr
      000A8E 24 01            [12] 3385 	add	a,#0x01
      000A90 F0               [24] 3386 	movx	@dptr,a
      000A91 A3               [24] 3387 	inc	dptr
      000A92 E0               [24] 3388 	movx	a,@dptr
      000A93 34 00            [12] 3389 	addc	a,#0x00
      000A95 F0               [24] 3390 	movx	@dptr,a
                           0009AB  3391 	C$lab6.c$279$5$151 ==.
                                   3392 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:279: value =0;
      000A96 90 00 59         [24] 3393 	mov	dptr,#_Rudder_cal_value_1_144
      000A99 E4               [12] 3394 	clr	a
      000A9A F0               [24] 3395 	movx	@dptr,a
      000A9B A3               [24] 3396 	inc	dptr
      000A9C F0               [24] 3397 	movx	@dptr,a
                           0009B2  3398 	C$lab6.c$280$5$151 ==.
                                   3399 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:280: PW_LEFT_RUDDER = RUDDER_PW;
      000A9D 85 46 3A         [24] 3400 	mov	_PW_LEFT_RUDDER,_RUDDER_PW
      000AA0 85 47 3B         [24] 3401 	mov	(_PW_LEFT_RUDDER + 1),(_RUDDER_PW + 1)
      000AA3 02 09 C0         [24] 3402 	ljmp	00146$
      000AA6                       3403 00143$:
                           0009BB  3404 	C$lab6.c$283$3$146 ==.
                                   3405 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:283: else if (times ==1)
      000AA6 90 00 5B         [24] 3406 	mov	dptr,#_Rudder_cal_times_1_144
      000AA9 E0               [24] 3407 	movx	a,@dptr
      000AAA FD               [12] 3408 	mov	r5,a
      000AAB A3               [24] 3409 	inc	dptr
      000AAC E0               [24] 3410 	movx	a,@dptr
      000AAD FE               [12] 3411 	mov	r6,a
      000AAE BD 01 05         [24] 3412 	cjne	r5,#0x01,00224$
      000AB1 BE 00 02         [24] 3413 	cjne	r6,#0x00,00224$
      000AB4 80 03            [24] 3414 	sjmp	00225$
      000AB6                       3415 00224$:
      000AB6 02 0B 5C         [24] 3416 	ljmp	00140$
      000AB9                       3417 00225$:
                           0009CE  3418 	C$lab6.c$285$4$152 ==.
                                   3419 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:285: if (value ==0)
      000AB9 90 00 59         [24] 3420 	mov	dptr,#_Rudder_cal_value_1_144
      000ABC E0               [24] 3421 	movx	a,@dptr
      000ABD FD               [12] 3422 	mov	r5,a
      000ABE A3               [24] 3423 	inc	dptr
      000ABF E0               [24] 3424 	movx	a,@dptr
      000AC0 FE               [12] 3425 	mov	r6,a
      000AC1 4D               [12] 3426 	orl	a,r5
      000AC2 70 22            [24] 3427 	jnz	00120$
                           0009D9  3428 	C$lab6.c$287$5$153 ==.
                                   3429 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:287: lcd_clear();
      000AC4 C0 07            [24] 3430 	push	ar7
      000AC6 12 01 CC         [24] 3431 	lcall	_lcd_clear
                           0009DE  3432 	C$lab6.c$288$5$153 ==.
                                   3433 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:288: lcd_print("Now calibrating Cen_PW");
      000AC9 74 26            [12] 3434 	mov	a,#___str_14
      000ACB C0 E0            [24] 3435 	push	acc
      000ACD 74 1D            [12] 3436 	mov	a,#(___str_14 >> 8)
      000ACF C0 E0            [24] 3437 	push	acc
      000AD1 74 80            [12] 3438 	mov	a,#0x80
      000AD3 C0 E0            [24] 3439 	push	acc
      000AD5 12 01 47         [24] 3440 	lcall	_lcd_print
      000AD8 15 81            [12] 3441 	dec	sp
      000ADA 15 81            [12] 3442 	dec	sp
      000ADC 15 81            [12] 3443 	dec	sp
      000ADE D0 07            [24] 3444 	pop	ar7
                           0009F5  3445 	C$lab6.c$289$5$153 ==.
                                   3446 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:289: RUDDER_PW = PW_CENTER_RUDDER;
      000AE0 85 3C 46         [24] 3447 	mov	_RUDDER_PW,_PW_CENTER_RUDDER
      000AE3 85 3D 47         [24] 3448 	mov	(_RUDDER_PW + 1),(_PW_CENTER_RUDDER + 1)
      000AE6                       3449 00120$:
                           0009FB  3450 	C$lab6.c$291$4$152 ==.
                                   3451 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:291: value = kpd_input(1);
      000AE6 75 82 01         [24] 3452 	mov	dpl,#0x01
      000AE9 C0 07            [24] 3453 	push	ar7
      000AEB 12 02 84         [24] 3454 	lcall	_kpd_input
      000AEE AD 82            [24] 3455 	mov	r5,dpl
      000AF0 AE 83            [24] 3456 	mov	r6,dph
      000AF2 D0 07            [24] 3457 	pop	ar7
      000AF4 90 00 59         [24] 3458 	mov	dptr,#_Rudder_cal_value_1_144
      000AF7 ED               [12] 3459 	mov	a,r5
      000AF8 F0               [24] 3460 	movx	@dptr,a
      000AF9 EE               [12] 3461 	mov	a,r6
      000AFA A3               [24] 3462 	inc	dptr
      000AFB F0               [24] 3463 	movx	@dptr,a
                           000A11  3464 	C$lab6.c$292$4$152 ==.
                                   3465 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:292: if (value == 1)
      000AFC BD 01 12         [24] 3466 	cjne	r5,#0x01,00127$
      000AFF BE 00 0F         [24] 3467 	cjne	r6,#0x00,00127$
                           000A17  3468 	C$lab6.c$294$5$154 ==.
                                   3469 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:294: RUDDER_PW -= 20;
      000B02 E5 46            [12] 3470 	mov	a,_RUDDER_PW
      000B04 24 EC            [12] 3471 	add	a,#0xEC
      000B06 F5 46            [12] 3472 	mov	_RUDDER_PW,a
      000B08 E5 47            [12] 3473 	mov	a,(_RUDDER_PW + 1)
      000B0A 34 FF            [12] 3474 	addc	a,#0xFF
      000B0C F5 47            [12] 3475 	mov	(_RUDDER_PW + 1),a
      000B0E 02 09 C0         [24] 3476 	ljmp	00146$
      000B11                       3477 00127$:
                           000A26  3478 	C$lab6.c$296$4$152 ==.
                                   3479 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:296: else if (value==2)
      000B11 90 00 59         [24] 3480 	mov	dptr,#_Rudder_cal_value_1_144
      000B14 E0               [24] 3481 	movx	a,@dptr
      000B15 FD               [12] 3482 	mov	r5,a
      000B16 A3               [24] 3483 	inc	dptr
      000B17 E0               [24] 3484 	movx	a,@dptr
      000B18 FE               [12] 3485 	mov	r6,a
      000B19 BD 02 11         [24] 3486 	cjne	r5,#0x02,00124$
      000B1C BE 00 0E         [24] 3487 	cjne	r6,#0x00,00124$
                           000A34  3488 	C$lab6.c$298$5$155 ==.
                                   3489 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:298: RUDDER_PW += 20;
      000B1F 74 14            [12] 3490 	mov	a,#0x14
      000B21 25 46            [12] 3491 	add	a,_RUDDER_PW
      000B23 F5 46            [12] 3492 	mov	_RUDDER_PW,a
      000B25 E4               [12] 3493 	clr	a
      000B26 35 47            [12] 3494 	addc	a,(_RUDDER_PW + 1)
      000B28 F5 47            [12] 3495 	mov	(_RUDDER_PW + 1),a
      000B2A 02 09 C0         [24] 3496 	ljmp	00146$
      000B2D                       3497 00124$:
                           000A42  3498 	C$lab6.c$300$4$152 ==.
                                   3499 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:300: else if (value == 3)
      000B2D 90 00 59         [24] 3500 	mov	dptr,#_Rudder_cal_value_1_144
      000B30 E0               [24] 3501 	movx	a,@dptr
      000B31 FD               [12] 3502 	mov	r5,a
      000B32 A3               [24] 3503 	inc	dptr
      000B33 E0               [24] 3504 	movx	a,@dptr
      000B34 FE               [12] 3505 	mov	r6,a
      000B35 BD 03 05         [24] 3506 	cjne	r5,#0x03,00231$
      000B38 BE 00 02         [24] 3507 	cjne	r6,#0x00,00231$
      000B3B 80 03            [24] 3508 	sjmp	00232$
      000B3D                       3509 00231$:
      000B3D 02 09 C0         [24] 3510 	ljmp	00146$
      000B40                       3511 00232$:
                           000A55  3512 	C$lab6.c$302$5$156 ==.
                                   3513 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:302: times++;
      000B40 90 00 5B         [24] 3514 	mov	dptr,#_Rudder_cal_times_1_144
      000B43 E0               [24] 3515 	movx	a,@dptr
      000B44 24 01            [12] 3516 	add	a,#0x01
      000B46 F0               [24] 3517 	movx	@dptr,a
      000B47 A3               [24] 3518 	inc	dptr
      000B48 E0               [24] 3519 	movx	a,@dptr
      000B49 34 00            [12] 3520 	addc	a,#0x00
      000B4B F0               [24] 3521 	movx	@dptr,a
                           000A61  3522 	C$lab6.c$303$5$156 ==.
                                   3523 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:303: value=0;
      000B4C 90 00 59         [24] 3524 	mov	dptr,#_Rudder_cal_value_1_144
      000B4F E4               [12] 3525 	clr	a
      000B50 F0               [24] 3526 	movx	@dptr,a
      000B51 A3               [24] 3527 	inc	dptr
      000B52 F0               [24] 3528 	movx	@dptr,a
                           000A68  3529 	C$lab6.c$304$5$156 ==.
                                   3530 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:304: PW_CENTER_RUDDER = RUDDER_PW;
      000B53 85 46 3C         [24] 3531 	mov	_PW_CENTER_RUDDER,_RUDDER_PW
      000B56 85 47 3D         [24] 3532 	mov	(_PW_CENTER_RUDDER + 1),(_RUDDER_PW + 1)
      000B59 02 09 C0         [24] 3533 	ljmp	00146$
      000B5C                       3534 00140$:
                           000A71  3535 	C$lab6.c$309$4$157 ==.
                                   3536 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:309: if (value==0)
      000B5C 90 00 59         [24] 3537 	mov	dptr,#_Rudder_cal_value_1_144
      000B5F E0               [24] 3538 	movx	a,@dptr
      000B60 FD               [12] 3539 	mov	r5,a
      000B61 A3               [24] 3540 	inc	dptr
      000B62 E0               [24] 3541 	movx	a,@dptr
      000B63 FE               [12] 3542 	mov	r6,a
      000B64 4D               [12] 3543 	orl	a,r5
      000B65 70 22            [24] 3544 	jnz	00130$
                           000A7C  3545 	C$lab6.c$311$5$158 ==.
                                   3546 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:311: lcd_clear();
      000B67 C0 07            [24] 3547 	push	ar7
      000B69 12 01 CC         [24] 3548 	lcall	_lcd_clear
                           000A81  3549 	C$lab6.c$312$5$158 ==.
                                   3550 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:312: lcd_print("Now calibrating Max_PW");
      000B6C 74 3D            [12] 3551 	mov	a,#___str_15
      000B6E C0 E0            [24] 3552 	push	acc
      000B70 74 1D            [12] 3553 	mov	a,#(___str_15 >> 8)
      000B72 C0 E0            [24] 3554 	push	acc
      000B74 74 80            [12] 3555 	mov	a,#0x80
      000B76 C0 E0            [24] 3556 	push	acc
      000B78 12 01 47         [24] 3557 	lcall	_lcd_print
      000B7B 15 81            [12] 3558 	dec	sp
      000B7D 15 81            [12] 3559 	dec	sp
      000B7F 15 81            [12] 3560 	dec	sp
      000B81 D0 07            [24] 3561 	pop	ar7
                           000A98  3562 	C$lab6.c$313$5$158 ==.
                                   3563 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:313: RUDDER_PW = PW_RIGHT_RUDDER;
      000B83 85 3E 46         [24] 3564 	mov	_RUDDER_PW,_PW_RIGHT_RUDDER
      000B86 85 3F 47         [24] 3565 	mov	(_RUDDER_PW + 1),(_PW_RIGHT_RUDDER + 1)
      000B89                       3566 00130$:
                           000A9E  3567 	C$lab6.c$315$4$157 ==.
                                   3568 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:315: value = kpd_input(1);
      000B89 75 82 01         [24] 3569 	mov	dpl,#0x01
      000B8C C0 07            [24] 3570 	push	ar7
      000B8E 12 02 84         [24] 3571 	lcall	_kpd_input
      000B91 AD 82            [24] 3572 	mov	r5,dpl
      000B93 AE 83            [24] 3573 	mov	r6,dph
      000B95 D0 07            [24] 3574 	pop	ar7
      000B97 90 00 59         [24] 3575 	mov	dptr,#_Rudder_cal_value_1_144
      000B9A ED               [12] 3576 	mov	a,r5
      000B9B F0               [24] 3577 	movx	@dptr,a
      000B9C EE               [12] 3578 	mov	a,r6
      000B9D A3               [24] 3579 	inc	dptr
      000B9E F0               [24] 3580 	movx	@dptr,a
                           000AB4  3581 	C$lab6.c$316$4$157 ==.
                                   3582 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:316: if (value == 1)
      000B9F BD 01 12         [24] 3583 	cjne	r5,#0x01,00137$
      000BA2 BE 00 0F         [24] 3584 	cjne	r6,#0x00,00137$
                           000ABA  3585 	C$lab6.c$318$5$159 ==.
                                   3586 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:318: RUDDER_PW -= 20;
      000BA5 E5 46            [12] 3587 	mov	a,_RUDDER_PW
      000BA7 24 EC            [12] 3588 	add	a,#0xEC
      000BA9 F5 46            [12] 3589 	mov	_RUDDER_PW,a
      000BAB E5 47            [12] 3590 	mov	a,(_RUDDER_PW + 1)
      000BAD 34 FF            [12] 3591 	addc	a,#0xFF
      000BAF F5 47            [12] 3592 	mov	(_RUDDER_PW + 1),a
      000BB1 02 09 C0         [24] 3593 	ljmp	00146$
      000BB4                       3594 00137$:
                           000AC9  3595 	C$lab6.c$320$4$157 ==.
                                   3596 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:320: else if (value==2)
      000BB4 90 00 59         [24] 3597 	mov	dptr,#_Rudder_cal_value_1_144
      000BB7 E0               [24] 3598 	movx	a,@dptr
      000BB8 FD               [12] 3599 	mov	r5,a
      000BB9 A3               [24] 3600 	inc	dptr
      000BBA E0               [24] 3601 	movx	a,@dptr
      000BBB FE               [12] 3602 	mov	r6,a
      000BBC BD 02 11         [24] 3603 	cjne	r5,#0x02,00134$
      000BBF BE 00 0E         [24] 3604 	cjne	r6,#0x00,00134$
                           000AD7  3605 	C$lab6.c$322$5$160 ==.
                                   3606 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:322: RUDDER_PW += 20;
      000BC2 74 14            [12] 3607 	mov	a,#0x14
      000BC4 25 46            [12] 3608 	add	a,_RUDDER_PW
      000BC6 F5 46            [12] 3609 	mov	_RUDDER_PW,a
      000BC8 E4               [12] 3610 	clr	a
      000BC9 35 47            [12] 3611 	addc	a,(_RUDDER_PW + 1)
      000BCB F5 47            [12] 3612 	mov	(_RUDDER_PW + 1),a
      000BCD 02 09 C0         [24] 3613 	ljmp	00146$
      000BD0                       3614 00134$:
                           000AE5  3615 	C$lab6.c$324$4$157 ==.
                                   3616 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:324: else if (value == 3)
      000BD0 90 00 59         [24] 3617 	mov	dptr,#_Rudder_cal_value_1_144
      000BD3 E0               [24] 3618 	movx	a,@dptr
      000BD4 FD               [12] 3619 	mov	r5,a
      000BD5 A3               [24] 3620 	inc	dptr
      000BD6 E0               [24] 3621 	movx	a,@dptr
      000BD7 FE               [12] 3622 	mov	r6,a
      000BD8 BD 03 05         [24] 3623 	cjne	r5,#0x03,00238$
      000BDB BE 00 02         [24] 3624 	cjne	r6,#0x00,00238$
      000BDE 80 03            [24] 3625 	sjmp	00239$
      000BE0                       3626 00238$:
      000BE0 02 09 C0         [24] 3627 	ljmp	00146$
      000BE3                       3628 00239$:
                           000AF8  3629 	C$lab6.c$326$5$161 ==.
                                   3630 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:326: PW_RIGHT_RUDDER = RUDDER_PW;
      000BE3 85 46 3E         [24] 3631 	mov	_PW_RIGHT_RUDDER,_RUDDER_PW
      000BE6 85 47 3F         [24] 3632 	mov	(_PW_RIGHT_RUDDER + 1),(_RUDDER_PW + 1)
                           000AFE  3633 	C$lab6.c$327$5$161 ==.
                                   3634 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:327: return;
                           000AFE  3635 	C$lab6.c$336$1$144 ==.
                           000AFE  3636 	XG$Rudder_cal$0$0 ==.
      000BE9 22               [24] 3637 	ret
                                   3638 ;------------------------------------------------------------
                                   3639 ;Allocation info for local variables in function 'Angle_cal'
                                   3640 ;------------------------------------------------------------
                                   3641 ;st                        Allocated to registers r7 
                                   3642 ;value                     Allocated with name '_Angle_cal_value_1_163'
                                   3643 ;times                     Allocated with name '_Angle_cal_times_1_163'
                                   3644 ;------------------------------------------------------------
                           000AFF  3645 	G$Angle_cal$0$0 ==.
                           000AFF  3646 	C$lab6.c$338$1$144 ==.
                                   3647 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:338: void Angle_cal(void)
                                   3648 ;	-----------------------------------------
                                   3649 ;	 function Angle_cal
                                   3650 ;	-----------------------------------------
      000BEA                       3651 _Angle_cal:
                           000AFF  3652 	C$lab6.c$341$1$144 ==.
                                   3653 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:341: __xdata int value =0;
      000BEA 90 00 5D         [24] 3654 	mov	dptr,#_Angle_cal_value_1_163
      000BED E4               [12] 3655 	clr	a
      000BEE F0               [24] 3656 	movx	@dptr,a
      000BEF A3               [24] 3657 	inc	dptr
      000BF0 F0               [24] 3658 	movx	@dptr,a
                           000B06  3659 	C$lab6.c$342$1$144 ==.
                                   3660 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:342: __xdata int times =0;
      000BF1 90 00 5F         [24] 3661 	mov	dptr,#_Angle_cal_times_1_163
      000BF4 F0               [24] 3662 	movx	@dptr,a
      000BF5 A3               [24] 3663 	inc	dptr
      000BF6 F0               [24] 3664 	movx	@dptr,a
                           000B0C  3665 	C$lab6.c$343$1$163 ==.
                                   3666 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:343: count =0;
      000BF7 F5 32            [12] 3667 	mov	_count,a
      000BF9 F5 33            [12] 3668 	mov	(_count + 1),a
                           000B10  3669 	C$lab6.c$344$1$163 ==.
                                   3670 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:344: lcd_clear();
      000BFB 12 01 CC         [24] 3671 	lcall	_lcd_clear
                           000B13  3672 	C$lab6.c$345$1$163 ==.
                                   3673 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:345: lcd_print("Angle Calibration");
      000BFE 74 54            [12] 3674 	mov	a,#___str_16
      000C00 C0 E0            [24] 3675 	push	acc
      000C02 74 1D            [12] 3676 	mov	a,#(___str_16 >> 8)
      000C04 C0 E0            [24] 3677 	push	acc
      000C06 74 80            [12] 3678 	mov	a,#0x80
      000C08 C0 E0            [24] 3679 	push	acc
      000C0A 12 01 47         [24] 3680 	lcall	_lcd_print
      000C0D 15 81            [12] 3681 	dec	sp
      000C0F 15 81            [12] 3682 	dec	sp
      000C11 15 81            [12] 3683 	dec	sp
                           000B28  3684 	C$lab6.c$346$1$163 ==.
                                   3685 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:346: while (count < 50);
      000C13                       3686 00101$:
      000C13 C3               [12] 3687 	clr	c
      000C14 E5 32            [12] 3688 	mov	a,_count
      000C16 94 32            [12] 3689 	subb	a,#0x32
      000C18 E5 33            [12] 3690 	mov	a,(_count + 1)
      000C1A 64 80            [12] 3691 	xrl	a,#0x80
      000C1C 94 80            [12] 3692 	subb	a,#0x80
      000C1E 40 F3            [24] 3693 	jc	00101$
                           000B35  3694 	C$lab6.c$347$1$163 ==.
                                   3695 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:347: lcd_clear();
      000C20 12 01 CC         [24] 3696 	lcall	_lcd_clear
                           000B38  3697 	C$lab6.c$350$2$164 ==.
                                   3698 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:350: count = 0;
      000C23 E4               [12] 3699 	clr	a
      000C24 F5 32            [12] 3700 	mov	_count,a
      000C26 F5 33            [12] 3701 	mov	(_count + 1),a
                           000B3D  3702 	C$lab6.c$351$2$164 ==.
                                   3703 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:351: while (count < 1);
      000C28                       3704 00104$:
      000C28 C3               [12] 3705 	clr	c
      000C29 E5 32            [12] 3706 	mov	a,_count
      000C2B 94 01            [12] 3707 	subb	a,#0x01
      000C2D E5 33            [12] 3708 	mov	a,(_count + 1)
      000C2F 64 80            [12] 3709 	xrl	a,#0x80
      000C31 94 80            [12] 3710 	subb	a,#0x80
      000C33 40 F3            [24] 3711 	jc	00104$
                           000B4A  3712 	C$lab6.c$352$2$164 ==.
                                   3713 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:352: lcd_clear();
      000C35 12 01 CC         [24] 3714 	lcall	_lcd_clear
                           000B4D  3715 	C$lab6.c$353$2$164 ==.
                                   3716 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:353: lcd_print("go left: press 1\n go right: press 2\nPress * for next screen");
      000C38 74 A7            [12] 3717 	mov	a,#___str_10
      000C3A C0 E0            [24] 3718 	push	acc
      000C3C 74 1C            [12] 3719 	mov	a,#(___str_10 >> 8)
      000C3E C0 E0            [24] 3720 	push	acc
      000C40 74 80            [12] 3721 	mov	a,#0x80
      000C42 C0 E0            [24] 3722 	push	acc
      000C44 12 01 47         [24] 3723 	lcall	_lcd_print
      000C47 15 81            [12] 3724 	dec	sp
      000C49 15 81            [12] 3725 	dec	sp
      000C4B 15 81            [12] 3726 	dec	sp
                           000B62  3727 	C$lab6.c$354$2$164 ==.
                                   3728 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:354: start();
      000C4D 12 13 52         [24] 3729 	lcall	_start
                           000B65  3730 	C$lab6.c$355$2$164 ==.
                                   3731 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:355: lcd_clear();
      000C50 12 01 CC         [24] 3732 	lcall	_lcd_clear
                           000B68  3733 	C$lab6.c$356$2$164 ==.
                                   3734 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:356: lcd_print("\n confirm: press 3\n press * to begin");
      000C53 74 E3            [12] 3735 	mov	a,#___str_11
      000C55 C0 E0            [24] 3736 	push	acc
      000C57 74 1C            [12] 3737 	mov	a,#(___str_11 >> 8)
      000C59 C0 E0            [24] 3738 	push	acc
      000C5B 74 80            [12] 3739 	mov	a,#0x80
      000C5D C0 E0            [24] 3740 	push	acc
      000C5F 12 01 47         [24] 3741 	lcall	_lcd_print
      000C62 15 81            [12] 3742 	dec	sp
      000C64 15 81            [12] 3743 	dec	sp
      000C66 15 81            [12] 3744 	dec	sp
                           000B7D  3745 	C$lab6.c$357$2$164 ==.
                                   3746 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:357: start();
      000C68 12 13 52         [24] 3747 	lcall	_start
                           000B80  3748 	C$lab6.c$358$2$164 ==.
                                   3749 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:358: st =0;
      000C6B 7F 00            [12] 3750 	mov	r7,#0x00
                           000B82  3751 	C$lab6.c$359$5$167 ==.
                                   3752 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:359: while (1)
      000C6D                       3753 00150$:
                           000B82  3754 	C$lab6.c$361$3$165 ==.
                                   3755 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:361: printf("\r\n %u",ANGLE_PW);
      000C6D C0 07            [24] 3756 	push	ar7
      000C6F C0 4A            [24] 3757 	push	_ANGLE_PW
      000C71 C0 4B            [24] 3758 	push	(_ANGLE_PW + 1)
      000C73 74 08            [12] 3759 	mov	a,#___str_12
      000C75 C0 E0            [24] 3760 	push	acc
      000C77 74 1D            [12] 3761 	mov	a,#(___str_12 >> 8)
      000C79 C0 E0            [24] 3762 	push	acc
      000C7B 74 80            [12] 3763 	mov	a,#0x80
      000C7D C0 E0            [24] 3764 	push	acc
      000C7F 12 15 90         [24] 3765 	lcall	_printf
      000C82 E5 81            [12] 3766 	mov	a,sp
      000C84 24 FB            [12] 3767 	add	a,#0xfb
      000C86 F5 81            [12] 3768 	mov	sp,a
      000C88 D0 07            [24] 3769 	pop	ar7
                           000B9F  3770 	C$lab6.c$362$3$165 ==.
                                   3771 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:362: AGL_lo_to_hi = 0xFFFF - ANGLE_PW;
      000C8A 74 FF            [12] 3772 	mov	a,#0xFF
      000C8C C3               [12] 3773 	clr	c
      000C8D 95 4A            [12] 3774 	subb	a,_ANGLE_PW
      000C8F F5 4C            [12] 3775 	mov	_AGL_lo_to_hi,a
      000C91 74 FF            [12] 3776 	mov	a,#0xFF
      000C93 95 4B            [12] 3777 	subb	a,(_ANGLE_PW + 1)
      000C95 F5 4D            [12] 3778 	mov	(_AGL_lo_to_hi + 1),a
                           000BAC  3779 	C$lab6.c$363$3$165 ==.
                                   3780 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:363: PCA0CP1 = AGL_lo_to_hi;
      000C97 85 4C EB         [24] 3781 	mov	((_PCA0CP1 >> 0) & 0xFF),_AGL_lo_to_hi
      000C9A 85 4D FB         [24] 3782 	mov	((_PCA0CP1 >> 8) & 0xFF),(_AGL_lo_to_hi + 1)
                           000BB2  3783 	C$lab6.c$365$3$165 ==.
                                   3784 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:365: if (times == 0 )
      000C9D 90 00 5F         [24] 3785 	mov	dptr,#_Angle_cal_times_1_163
      000CA0 E0               [24] 3786 	movx	a,@dptr
      000CA1 FD               [12] 3787 	mov	r5,a
      000CA2 A3               [24] 3788 	inc	dptr
      000CA3 E0               [24] 3789 	movx	a,@dptr
      000CA4 FE               [12] 3790 	mov	r6,a
      000CA5 4D               [12] 3791 	orl	a,r5
      000CA6 60 03            [24] 3792 	jz	00225$
      000CA8 02 0D 55         [24] 3793 	ljmp	00147$
      000CAB                       3794 00225$:
                           000BC0  3795 	C$lab6.c$367$4$166 ==.
                                   3796 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:367: if (value ==0)
      000CAB 90 00 5D         [24] 3797 	mov	dptr,#_Angle_cal_value_1_163
      000CAE E0               [24] 3798 	movx	a,@dptr
      000CAF FD               [12] 3799 	mov	r5,a
      000CB0 A3               [24] 3800 	inc	dptr
      000CB1 E0               [24] 3801 	movx	a,@dptr
      000CB2 FE               [12] 3802 	mov	r6,a
      000CB3 4D               [12] 3803 	orl	a,r5
      000CB4 70 27            [24] 3804 	jnz	00110$
                           000BCB  3805 	C$lab6.c$369$5$167 ==.
                                   3806 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:369: lcd_clear();
      000CB6 C0 07            [24] 3807 	push	ar7
      000CB8 12 01 CC         [24] 3808 	lcall	_lcd_clear
                           000BD0  3809 	C$lab6.c$370$5$167 ==.
                                   3810 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:370: lcd_print("Now calibrating Min_PW UP ANGLE");
      000CBB 74 66            [12] 3811 	mov	a,#___str_17
      000CBD C0 E0            [24] 3812 	push	acc
      000CBF 74 1D            [12] 3813 	mov	a,#(___str_17 >> 8)
      000CC1 C0 E0            [24] 3814 	push	acc
      000CC3 74 80            [12] 3815 	mov	a,#0x80
      000CC5 C0 E0            [24] 3816 	push	acc
      000CC7 12 01 47         [24] 3817 	lcall	_lcd_print
      000CCA 15 81            [12] 3818 	dec	sp
      000CCC 15 81            [12] 3819 	dec	sp
      000CCE 15 81            [12] 3820 	dec	sp
      000CD0 D0 07            [24] 3821 	pop	ar7
                           000BE7  3822 	C$lab6.c$371$5$167 ==.
                                   3823 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:371: if (st == 0) ANGLE_PW = PW_UP_ANGLE;
      000CD2 EF               [12] 3824 	mov	a,r7
      000CD3 70 06            [24] 3825 	jnz	00108$
      000CD5 85 40 4A         [24] 3826 	mov	_ANGLE_PW,_PW_UP_ANGLE
      000CD8 85 41 4B         [24] 3827 	mov	(_ANGLE_PW + 1),(_PW_UP_ANGLE + 1)
      000CDB                       3828 00108$:
                           000BF0  3829 	C$lab6.c$372$5$167 ==.
                                   3830 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:372: st =1;
      000CDB 7F 01            [12] 3831 	mov	r7,#0x01
      000CDD                       3832 00110$:
                           000BF2  3833 	C$lab6.c$374$4$166 ==.
                                   3834 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:374: value = kpd_input(1);
      000CDD 75 82 01         [24] 3835 	mov	dpl,#0x01
      000CE0 C0 07            [24] 3836 	push	ar7
      000CE2 12 02 84         [24] 3837 	lcall	_kpd_input
      000CE5 AD 82            [24] 3838 	mov	r5,dpl
      000CE7 AE 83            [24] 3839 	mov	r6,dph
      000CE9 D0 07            [24] 3840 	pop	ar7
      000CEB 90 00 5D         [24] 3841 	mov	dptr,#_Angle_cal_value_1_163
      000CEE ED               [12] 3842 	mov	a,r5
      000CEF F0               [24] 3843 	movx	@dptr,a
      000CF0 EE               [12] 3844 	mov	a,r6
      000CF1 A3               [24] 3845 	inc	dptr
      000CF2 F0               [24] 3846 	movx	@dptr,a
                           000C08  3847 	C$lab6.c$375$4$166 ==.
                                   3848 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:375: if (value == 1)
      000CF3 BD 01 12         [24] 3849 	cjne	r5,#0x01,00117$
      000CF6 BE 00 0F         [24] 3850 	cjne	r6,#0x00,00117$
                           000C0E  3851 	C$lab6.c$377$5$168 ==.
                                   3852 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:377: ANGLE_PW -= 30;
      000CF9 E5 4A            [12] 3853 	mov	a,_ANGLE_PW
      000CFB 24 E2            [12] 3854 	add	a,#0xE2
      000CFD F5 4A            [12] 3855 	mov	_ANGLE_PW,a
      000CFF E5 4B            [12] 3856 	mov	a,(_ANGLE_PW + 1)
      000D01 34 FF            [12] 3857 	addc	a,#0xFF
      000D03 F5 4B            [12] 3858 	mov	(_ANGLE_PW + 1),a
      000D05 02 0C 6D         [24] 3859 	ljmp	00150$
      000D08                       3860 00117$:
                           000C1D  3861 	C$lab6.c$379$4$166 ==.
                                   3862 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:379: else if (value==2)
      000D08 90 00 5D         [24] 3863 	mov	dptr,#_Angle_cal_value_1_163
      000D0B E0               [24] 3864 	movx	a,@dptr
      000D0C FD               [12] 3865 	mov	r5,a
      000D0D A3               [24] 3866 	inc	dptr
      000D0E E0               [24] 3867 	movx	a,@dptr
      000D0F FE               [12] 3868 	mov	r6,a
      000D10 BD 02 11         [24] 3869 	cjne	r5,#0x02,00114$
      000D13 BE 00 0E         [24] 3870 	cjne	r6,#0x00,00114$
                           000C2B  3871 	C$lab6.c$381$5$169 ==.
                                   3872 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:381: ANGLE_PW += 30;
      000D16 74 1E            [12] 3873 	mov	a,#0x1E
      000D18 25 4A            [12] 3874 	add	a,_ANGLE_PW
      000D1A F5 4A            [12] 3875 	mov	_ANGLE_PW,a
      000D1C E4               [12] 3876 	clr	a
      000D1D 35 4B            [12] 3877 	addc	a,(_ANGLE_PW + 1)
      000D1F F5 4B            [12] 3878 	mov	(_ANGLE_PW + 1),a
      000D21 02 0C 6D         [24] 3879 	ljmp	00150$
      000D24                       3880 00114$:
                           000C39  3881 	C$lab6.c$383$4$166 ==.
                                   3882 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:383: else if (value == 3)
      000D24 90 00 5D         [24] 3883 	mov	dptr,#_Angle_cal_value_1_163
      000D27 E0               [24] 3884 	movx	a,@dptr
      000D28 FD               [12] 3885 	mov	r5,a
      000D29 A3               [24] 3886 	inc	dptr
      000D2A E0               [24] 3887 	movx	a,@dptr
      000D2B FE               [12] 3888 	mov	r6,a
      000D2C BD 03 05         [24] 3889 	cjne	r5,#0x03,00232$
      000D2F BE 00 02         [24] 3890 	cjne	r6,#0x00,00232$
      000D32 80 03            [24] 3891 	sjmp	00233$
      000D34                       3892 00232$:
      000D34 02 0C 6D         [24] 3893 	ljmp	00150$
      000D37                       3894 00233$:
                           000C4C  3895 	C$lab6.c$385$5$170 ==.
                                   3896 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:385: times++;
      000D37 90 00 5F         [24] 3897 	mov	dptr,#_Angle_cal_times_1_163
      000D3A E0               [24] 3898 	movx	a,@dptr
      000D3B 24 01            [12] 3899 	add	a,#0x01
      000D3D F0               [24] 3900 	movx	@dptr,a
      000D3E A3               [24] 3901 	inc	dptr
      000D3F E0               [24] 3902 	movx	a,@dptr
      000D40 34 00            [12] 3903 	addc	a,#0x00
      000D42 F0               [24] 3904 	movx	@dptr,a
                           000C58  3905 	C$lab6.c$386$5$170 ==.
                                   3906 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:386: value =0;
      000D43 90 00 5D         [24] 3907 	mov	dptr,#_Angle_cal_value_1_163
      000D46 E4               [12] 3908 	clr	a
      000D47 F0               [24] 3909 	movx	@dptr,a
      000D48 A3               [24] 3910 	inc	dptr
      000D49 F0               [24] 3911 	movx	@dptr,a
                           000C5F  3912 	C$lab6.c$387$5$170 ==.
                                   3913 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:387: st=0;
      000D4A 7F 00            [12] 3914 	mov	r7,#0x00
                           000C61  3915 	C$lab6.c$388$5$170 ==.
                                   3916 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:388: PW_UP_ANGLE = ANGLE_PW;
      000D4C 85 4A 40         [24] 3917 	mov	_PW_UP_ANGLE,_ANGLE_PW
      000D4F 85 4B 41         [24] 3918 	mov	(_PW_UP_ANGLE + 1),(_ANGLE_PW + 1)
      000D52 02 0C 6D         [24] 3919 	ljmp	00150$
      000D55                       3920 00147$:
                           000C6A  3921 	C$lab6.c$391$3$165 ==.
                                   3922 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:391: else if (times ==1)
      000D55 90 00 5F         [24] 3923 	mov	dptr,#_Angle_cal_times_1_163
      000D58 E0               [24] 3924 	movx	a,@dptr
      000D59 FD               [12] 3925 	mov	r5,a
      000D5A A3               [24] 3926 	inc	dptr
      000D5B E0               [24] 3927 	movx	a,@dptr
      000D5C FE               [12] 3928 	mov	r6,a
      000D5D BD 01 05         [24] 3929 	cjne	r5,#0x01,00234$
      000D60 BE 00 02         [24] 3930 	cjne	r6,#0x00,00234$
      000D63 80 03            [24] 3931 	sjmp	00235$
      000D65                       3932 00234$:
      000D65 02 0E 12         [24] 3933 	ljmp	00144$
      000D68                       3934 00235$:
                           000C7D  3935 	C$lab6.c$393$4$171 ==.
                                   3936 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:393: if (value ==0)
      000D68 90 00 5D         [24] 3937 	mov	dptr,#_Angle_cal_value_1_163
      000D6B E0               [24] 3938 	movx	a,@dptr
      000D6C FD               [12] 3939 	mov	r5,a
      000D6D A3               [24] 3940 	inc	dptr
      000D6E E0               [24] 3941 	movx	a,@dptr
      000D6F FE               [12] 3942 	mov	r6,a
      000D70 4D               [12] 3943 	orl	a,r5
      000D71 70 27            [24] 3944 	jnz	00122$
                           000C88  3945 	C$lab6.c$395$5$172 ==.
                                   3946 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:395: lcd_clear();
      000D73 C0 07            [24] 3947 	push	ar7
      000D75 12 01 CC         [24] 3948 	lcall	_lcd_clear
                           000C8D  3949 	C$lab6.c$396$5$172 ==.
                                   3950 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:396: lcd_print("Now calibrating Cen_PW");
      000D78 74 26            [12] 3951 	mov	a,#___str_14
      000D7A C0 E0            [24] 3952 	push	acc
      000D7C 74 1D            [12] 3953 	mov	a,#(___str_14 >> 8)
      000D7E C0 E0            [24] 3954 	push	acc
      000D80 74 80            [12] 3955 	mov	a,#0x80
      000D82 C0 E0            [24] 3956 	push	acc
      000D84 12 01 47         [24] 3957 	lcall	_lcd_print
      000D87 15 81            [12] 3958 	dec	sp
      000D89 15 81            [12] 3959 	dec	sp
      000D8B 15 81            [12] 3960 	dec	sp
      000D8D D0 07            [24] 3961 	pop	ar7
                           000CA4  3962 	C$lab6.c$397$5$172 ==.
                                   3963 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:397: if (st == 0) ANGLE_PW = PW_CENTER_ANGLE;
      000D8F EF               [12] 3964 	mov	a,r7
      000D90 70 06            [24] 3965 	jnz	00120$
      000D92 85 42 4A         [24] 3966 	mov	_ANGLE_PW,_PW_CENTER_ANGLE
      000D95 85 43 4B         [24] 3967 	mov	(_ANGLE_PW + 1),(_PW_CENTER_ANGLE + 1)
      000D98                       3968 00120$:
                           000CAD  3969 	C$lab6.c$398$5$172 ==.
                                   3970 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:398: st=1;
      000D98 7F 01            [12] 3971 	mov	r7,#0x01
      000D9A                       3972 00122$:
                           000CAF  3973 	C$lab6.c$400$4$171 ==.
                                   3974 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:400: value = kpd_input(1);
      000D9A 75 82 01         [24] 3975 	mov	dpl,#0x01
      000D9D C0 07            [24] 3976 	push	ar7
      000D9F 12 02 84         [24] 3977 	lcall	_kpd_input
      000DA2 AD 82            [24] 3978 	mov	r5,dpl
      000DA4 AE 83            [24] 3979 	mov	r6,dph
      000DA6 D0 07            [24] 3980 	pop	ar7
      000DA8 90 00 5D         [24] 3981 	mov	dptr,#_Angle_cal_value_1_163
      000DAB ED               [12] 3982 	mov	a,r5
      000DAC F0               [24] 3983 	movx	@dptr,a
      000DAD EE               [12] 3984 	mov	a,r6
      000DAE A3               [24] 3985 	inc	dptr
      000DAF F0               [24] 3986 	movx	@dptr,a
                           000CC5  3987 	C$lab6.c$401$4$171 ==.
                                   3988 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:401: if (value == 1)
      000DB0 BD 01 12         [24] 3989 	cjne	r5,#0x01,00129$
      000DB3 BE 00 0F         [24] 3990 	cjne	r6,#0x00,00129$
                           000CCB  3991 	C$lab6.c$403$5$173 ==.
                                   3992 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:403: ANGLE_PW -= 30;
      000DB6 E5 4A            [12] 3993 	mov	a,_ANGLE_PW
      000DB8 24 E2            [12] 3994 	add	a,#0xE2
      000DBA F5 4A            [12] 3995 	mov	_ANGLE_PW,a
      000DBC E5 4B            [12] 3996 	mov	a,(_ANGLE_PW + 1)
      000DBE 34 FF            [12] 3997 	addc	a,#0xFF
      000DC0 F5 4B            [12] 3998 	mov	(_ANGLE_PW + 1),a
      000DC2 02 0C 6D         [24] 3999 	ljmp	00150$
      000DC5                       4000 00129$:
                           000CDA  4001 	C$lab6.c$405$4$171 ==.
                                   4002 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:405: else if (value==2)
      000DC5 90 00 5D         [24] 4003 	mov	dptr,#_Angle_cal_value_1_163
      000DC8 E0               [24] 4004 	movx	a,@dptr
      000DC9 FD               [12] 4005 	mov	r5,a
      000DCA A3               [24] 4006 	inc	dptr
      000DCB E0               [24] 4007 	movx	a,@dptr
      000DCC FE               [12] 4008 	mov	r6,a
      000DCD BD 02 11         [24] 4009 	cjne	r5,#0x02,00126$
      000DD0 BE 00 0E         [24] 4010 	cjne	r6,#0x00,00126$
                           000CE8  4011 	C$lab6.c$407$5$174 ==.
                                   4012 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:407: ANGLE_PW += 30;
      000DD3 74 1E            [12] 4013 	mov	a,#0x1E
      000DD5 25 4A            [12] 4014 	add	a,_ANGLE_PW
      000DD7 F5 4A            [12] 4015 	mov	_ANGLE_PW,a
      000DD9 E4               [12] 4016 	clr	a
      000DDA 35 4B            [12] 4017 	addc	a,(_ANGLE_PW + 1)
      000DDC F5 4B            [12] 4018 	mov	(_ANGLE_PW + 1),a
      000DDE 02 0C 6D         [24] 4019 	ljmp	00150$
      000DE1                       4020 00126$:
                           000CF6  4021 	C$lab6.c$409$4$171 ==.
                                   4022 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:409: else if (value == 3)
      000DE1 90 00 5D         [24] 4023 	mov	dptr,#_Angle_cal_value_1_163
      000DE4 E0               [24] 4024 	movx	a,@dptr
      000DE5 FD               [12] 4025 	mov	r5,a
      000DE6 A3               [24] 4026 	inc	dptr
      000DE7 E0               [24] 4027 	movx	a,@dptr
      000DE8 FE               [12] 4028 	mov	r6,a
      000DE9 BD 03 05         [24] 4029 	cjne	r5,#0x03,00242$
      000DEC BE 00 02         [24] 4030 	cjne	r6,#0x00,00242$
      000DEF 80 03            [24] 4031 	sjmp	00243$
      000DF1                       4032 00242$:
      000DF1 02 0C 6D         [24] 4033 	ljmp	00150$
      000DF4                       4034 00243$:
                           000D09  4035 	C$lab6.c$411$5$175 ==.
                                   4036 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:411: times++;
      000DF4 90 00 5F         [24] 4037 	mov	dptr,#_Angle_cal_times_1_163
      000DF7 E0               [24] 4038 	movx	a,@dptr
      000DF8 24 01            [12] 4039 	add	a,#0x01
      000DFA F0               [24] 4040 	movx	@dptr,a
      000DFB A3               [24] 4041 	inc	dptr
      000DFC E0               [24] 4042 	movx	a,@dptr
      000DFD 34 00            [12] 4043 	addc	a,#0x00
      000DFF F0               [24] 4044 	movx	@dptr,a
                           000D15  4045 	C$lab6.c$412$5$175 ==.
                                   4046 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:412: value=0;
      000E00 90 00 5D         [24] 4047 	mov	dptr,#_Angle_cal_value_1_163
      000E03 E4               [12] 4048 	clr	a
      000E04 F0               [24] 4049 	movx	@dptr,a
      000E05 A3               [24] 4050 	inc	dptr
      000E06 F0               [24] 4051 	movx	@dptr,a
                           000D1C  4052 	C$lab6.c$413$5$175 ==.
                                   4053 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:413: st=0;
      000E07 7F 00            [12] 4054 	mov	r7,#0x00
                           000D1E  4055 	C$lab6.c$414$5$175 ==.
                                   4056 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:414: PW_CENTER_ANGLE = ANGLE_PW;
      000E09 85 4A 42         [24] 4057 	mov	_PW_CENTER_ANGLE,_ANGLE_PW
      000E0C 85 4B 43         [24] 4058 	mov	(_PW_CENTER_ANGLE + 1),(_ANGLE_PW + 1)
      000E0F 02 0C 6D         [24] 4059 	ljmp	00150$
      000E12                       4060 00144$:
                           000D27  4061 	C$lab6.c$419$4$176 ==.
                                   4062 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:419: if (value==0)
      000E12 90 00 5D         [24] 4063 	mov	dptr,#_Angle_cal_value_1_163
      000E15 E0               [24] 4064 	movx	a,@dptr
      000E16 FD               [12] 4065 	mov	r5,a
      000E17 A3               [24] 4066 	inc	dptr
      000E18 E0               [24] 4067 	movx	a,@dptr
      000E19 FE               [12] 4068 	mov	r6,a
      000E1A 4D               [12] 4069 	orl	a,r5
      000E1B 70 27            [24] 4070 	jnz	00134$
                           000D32  4071 	C$lab6.c$421$5$177 ==.
                                   4072 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:421: lcd_clear();
      000E1D C0 07            [24] 4073 	push	ar7
      000E1F 12 01 CC         [24] 4074 	lcall	_lcd_clear
                           000D37  4075 	C$lab6.c$422$5$177 ==.
                                   4076 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:422: lcd_print("Now calibrating Max_PW DOWN ANGLE");
      000E22 74 86            [12] 4077 	mov	a,#___str_18
      000E24 C0 E0            [24] 4078 	push	acc
      000E26 74 1D            [12] 4079 	mov	a,#(___str_18 >> 8)
      000E28 C0 E0            [24] 4080 	push	acc
      000E2A 74 80            [12] 4081 	mov	a,#0x80
      000E2C C0 E0            [24] 4082 	push	acc
      000E2E 12 01 47         [24] 4083 	lcall	_lcd_print
      000E31 15 81            [12] 4084 	dec	sp
      000E33 15 81            [12] 4085 	dec	sp
      000E35 15 81            [12] 4086 	dec	sp
      000E37 D0 07            [24] 4087 	pop	ar7
                           000D4E  4088 	C$lab6.c$423$5$177 ==.
                                   4089 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:423: if (st == 0) ANGLE_PW = PW_DOWN_ANGLE;
      000E39 EF               [12] 4090 	mov	a,r7
      000E3A 70 06            [24] 4091 	jnz	00132$
      000E3C 85 44 4A         [24] 4092 	mov	_ANGLE_PW,_PW_DOWN_ANGLE
      000E3F 85 45 4B         [24] 4093 	mov	(_ANGLE_PW + 1),(_PW_DOWN_ANGLE + 1)
      000E42                       4094 00132$:
                           000D57  4095 	C$lab6.c$424$5$177 ==.
                                   4096 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:424: st=1;
      000E42 7F 01            [12] 4097 	mov	r7,#0x01
      000E44                       4098 00134$:
                           000D59  4099 	C$lab6.c$426$4$176 ==.
                                   4100 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:426: value = kpd_input(1);
      000E44 75 82 01         [24] 4101 	mov	dpl,#0x01
      000E47 C0 07            [24] 4102 	push	ar7
      000E49 12 02 84         [24] 4103 	lcall	_kpd_input
      000E4C AD 82            [24] 4104 	mov	r5,dpl
      000E4E AE 83            [24] 4105 	mov	r6,dph
      000E50 D0 07            [24] 4106 	pop	ar7
      000E52 90 00 5D         [24] 4107 	mov	dptr,#_Angle_cal_value_1_163
      000E55 ED               [12] 4108 	mov	a,r5
      000E56 F0               [24] 4109 	movx	@dptr,a
      000E57 EE               [12] 4110 	mov	a,r6
      000E58 A3               [24] 4111 	inc	dptr
      000E59 F0               [24] 4112 	movx	@dptr,a
                           000D6F  4113 	C$lab6.c$427$4$176 ==.
                                   4114 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:427: if (value == 1)
      000E5A BD 01 12         [24] 4115 	cjne	r5,#0x01,00141$
      000E5D BE 00 0F         [24] 4116 	cjne	r6,#0x00,00141$
                           000D75  4117 	C$lab6.c$429$5$178 ==.
                                   4118 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:429: ANGLE_PW -= 30;
      000E60 E5 4A            [12] 4119 	mov	a,_ANGLE_PW
      000E62 24 E2            [12] 4120 	add	a,#0xE2
      000E64 F5 4A            [12] 4121 	mov	_ANGLE_PW,a
      000E66 E5 4B            [12] 4122 	mov	a,(_ANGLE_PW + 1)
      000E68 34 FF            [12] 4123 	addc	a,#0xFF
      000E6A F5 4B            [12] 4124 	mov	(_ANGLE_PW + 1),a
      000E6C 02 0C 6D         [24] 4125 	ljmp	00150$
      000E6F                       4126 00141$:
                           000D84  4127 	C$lab6.c$431$4$176 ==.
                                   4128 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:431: else if (value==2)
      000E6F 90 00 5D         [24] 4129 	mov	dptr,#_Angle_cal_value_1_163
      000E72 E0               [24] 4130 	movx	a,@dptr
      000E73 FD               [12] 4131 	mov	r5,a
      000E74 A3               [24] 4132 	inc	dptr
      000E75 E0               [24] 4133 	movx	a,@dptr
      000E76 FE               [12] 4134 	mov	r6,a
      000E77 BD 02 11         [24] 4135 	cjne	r5,#0x02,00138$
      000E7A BE 00 0E         [24] 4136 	cjne	r6,#0x00,00138$
                           000D92  4137 	C$lab6.c$433$5$179 ==.
                                   4138 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:433: ANGLE_PW += 30;
      000E7D 74 1E            [12] 4139 	mov	a,#0x1E
      000E7F 25 4A            [12] 4140 	add	a,_ANGLE_PW
      000E81 F5 4A            [12] 4141 	mov	_ANGLE_PW,a
      000E83 E4               [12] 4142 	clr	a
      000E84 35 4B            [12] 4143 	addc	a,(_ANGLE_PW + 1)
      000E86 F5 4B            [12] 4144 	mov	(_ANGLE_PW + 1),a
      000E88 02 0C 6D         [24] 4145 	ljmp	00150$
      000E8B                       4146 00138$:
                           000DA0  4147 	C$lab6.c$435$4$176 ==.
                                   4148 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:435: else if (value == 3)
      000E8B 90 00 5D         [24] 4149 	mov	dptr,#_Angle_cal_value_1_163
      000E8E E0               [24] 4150 	movx	a,@dptr
      000E8F FD               [12] 4151 	mov	r5,a
      000E90 A3               [24] 4152 	inc	dptr
      000E91 E0               [24] 4153 	movx	a,@dptr
      000E92 FE               [12] 4154 	mov	r6,a
      000E93 BD 03 05         [24] 4155 	cjne	r5,#0x03,00250$
      000E96 BE 00 02         [24] 4156 	cjne	r6,#0x00,00250$
      000E99 80 03            [24] 4157 	sjmp	00251$
      000E9B                       4158 00250$:
      000E9B 02 0C 6D         [24] 4159 	ljmp	00150$
      000E9E                       4160 00251$:
                           000DB3  4161 	C$lab6.c$437$5$180 ==.
                                   4162 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:437: PW_DOWN_ANGLE = ANGLE_PW;
      000E9E 85 4A 44         [24] 4163 	mov	_PW_DOWN_ANGLE,_ANGLE_PW
      000EA1 85 4B 45         [24] 4164 	mov	(_PW_DOWN_ANGLE + 1),(_ANGLE_PW + 1)
                           000DB9  4165 	C$lab6.c$438$5$180 ==.
                                   4166 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:438: return;
                           000DB9  4167 	C$lab6.c$443$1$163 ==.
                           000DB9  4168 	XG$Angle_cal$0$0 ==.
      000EA4 22               [24] 4169 	ret
                                   4170 ;------------------------------------------------------------
                                   4171 ;Allocation info for local variables in function 'Thrust_cal'
                                   4172 ;------------------------------------------------------------
                                   4173 ;st                        Allocated to registers r7 
                                   4174 ;value                     Allocated with name '_Thrust_cal_value_1_182'
                                   4175 ;times                     Allocated with name '_Thrust_cal_times_1_182'
                                   4176 ;------------------------------------------------------------
                           000DBA  4177 	G$Thrust_cal$0$0 ==.
                           000DBA  4178 	C$lab6.c$445$1$163 ==.
                                   4179 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:445: void Thrust_cal(void)
                                   4180 ;	-----------------------------------------
                                   4181 ;	 function Thrust_cal
                                   4182 ;	-----------------------------------------
      000EA5                       4183 _Thrust_cal:
                           000DBA  4184 	C$lab6.c$448$1$163 ==.
                                   4185 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:448: __xdata int value =0;
      000EA5 90 00 61         [24] 4186 	mov	dptr,#_Thrust_cal_value_1_182
      000EA8 E4               [12] 4187 	clr	a
      000EA9 F0               [24] 4188 	movx	@dptr,a
      000EAA A3               [24] 4189 	inc	dptr
      000EAB F0               [24] 4190 	movx	@dptr,a
                           000DC1  4191 	C$lab6.c$450$1$182 ==.
                                   4192 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:450: count =0;
      000EAC F5 32            [12] 4193 	mov	_count,a
      000EAE F5 33            [12] 4194 	mov	(_count + 1),a
                           000DC5  4195 	C$lab6.c$451$1$182 ==.
                                   4196 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:451: lcd_clear();
      000EB0 12 01 CC         [24] 4197 	lcall	_lcd_clear
                           000DC8  4198 	C$lab6.c$452$1$182 ==.
                                   4199 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:452: lcd_print("Thrust Calibration");
      000EB3 74 A8            [12] 4200 	mov	a,#___str_19
      000EB5 C0 E0            [24] 4201 	push	acc
      000EB7 74 1D            [12] 4202 	mov	a,#(___str_19 >> 8)
      000EB9 C0 E0            [24] 4203 	push	acc
      000EBB 74 80            [12] 4204 	mov	a,#0x80
      000EBD C0 E0            [24] 4205 	push	acc
      000EBF 12 01 47         [24] 4206 	lcall	_lcd_print
      000EC2 15 81            [12] 4207 	dec	sp
      000EC4 15 81            [12] 4208 	dec	sp
      000EC6 15 81            [12] 4209 	dec	sp
                           000DDD  4210 	C$lab6.c$453$1$182 ==.
                                   4211 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:453: while (count < 50);
      000EC8                       4212 00101$:
      000EC8 C3               [12] 4213 	clr	c
      000EC9 E5 32            [12] 4214 	mov	a,_count
      000ECB 94 32            [12] 4215 	subb	a,#0x32
      000ECD E5 33            [12] 4216 	mov	a,(_count + 1)
      000ECF 64 80            [12] 4217 	xrl	a,#0x80
      000ED1 94 80            [12] 4218 	subb	a,#0x80
      000ED3 40 F3            [24] 4219 	jc	00101$
                           000DEA  4220 	C$lab6.c$454$1$182 ==.
                                   4221 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:454: lcd_clear();
      000ED5 12 01 CC         [24] 4222 	lcall	_lcd_clear
                           000DED  4223 	C$lab6.c$458$2$183 ==.
                                   4224 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:458: count = 0;
      000ED8 E4               [12] 4225 	clr	a
      000ED9 F5 32            [12] 4226 	mov	_count,a
      000EDB F5 33            [12] 4227 	mov	(_count + 1),a
                           000DF2  4228 	C$lab6.c$459$2$183 ==.
                                   4229 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:459: while (count < 1);
      000EDD                       4230 00104$:
      000EDD C3               [12] 4231 	clr	c
      000EDE E5 32            [12] 4232 	mov	a,_count
      000EE0 94 01            [12] 4233 	subb	a,#0x01
      000EE2 E5 33            [12] 4234 	mov	a,(_count + 1)
      000EE4 64 80            [12] 4235 	xrl	a,#0x80
      000EE6 94 80            [12] 4236 	subb	a,#0x80
      000EE8 40 F3            [24] 4237 	jc	00104$
                           000DFF  4238 	C$lab6.c$460$2$183 ==.
                                   4239 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:460: lcd_clear();
      000EEA 12 01 CC         [24] 4240 	lcall	_lcd_clear
                           000E02  4241 	C$lab6.c$461$2$183 ==.
                                   4242 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:461: lcd_print("go left: press 1\n go right: press 2\nPress * for next screen");
      000EED 74 A7            [12] 4243 	mov	a,#___str_10
      000EEF C0 E0            [24] 4244 	push	acc
      000EF1 74 1C            [12] 4245 	mov	a,#(___str_10 >> 8)
      000EF3 C0 E0            [24] 4246 	push	acc
      000EF5 74 80            [12] 4247 	mov	a,#0x80
      000EF7 C0 E0            [24] 4248 	push	acc
      000EF9 12 01 47         [24] 4249 	lcall	_lcd_print
      000EFC 15 81            [12] 4250 	dec	sp
      000EFE 15 81            [12] 4251 	dec	sp
      000F00 15 81            [12] 4252 	dec	sp
                           000E17  4253 	C$lab6.c$462$2$183 ==.
                                   4254 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:462: start();
      000F02 12 13 52         [24] 4255 	lcall	_start
                           000E1A  4256 	C$lab6.c$463$2$183 ==.
                                   4257 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:463: lcd_clear();
      000F05 12 01 CC         [24] 4258 	lcall	_lcd_clear
                           000E1D  4259 	C$lab6.c$464$2$183 ==.
                                   4260 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:464: lcd_print("\n confirm: press 3\n press * to begin");
      000F08 74 E3            [12] 4261 	mov	a,#___str_11
      000F0A C0 E0            [24] 4262 	push	acc
      000F0C 74 1C            [12] 4263 	mov	a,#(___str_11 >> 8)
      000F0E C0 E0            [24] 4264 	push	acc
      000F10 74 80            [12] 4265 	mov	a,#0x80
      000F12 C0 E0            [24] 4266 	push	acc
      000F14 12 01 47         [24] 4267 	lcall	_lcd_print
      000F17 15 81            [12] 4268 	dec	sp
      000F19 15 81            [12] 4269 	dec	sp
      000F1B 15 81            [12] 4270 	dec	sp
                           000E32  4271 	C$lab6.c$465$2$183 ==.
                                   4272 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:465: start();
      000F1D 12 13 52         [24] 4273 	lcall	_start
                           000E35  4274 	C$lab6.c$466$2$183 ==.
                                   4275 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:466: st =0;
      000F20 7F 00            [12] 4276 	mov	r7,#0x00
                           000E37  4277 	C$lab6.c$467$2$183 ==.
                                   4278 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:467: times=0;
      000F22 90 00 63         [24] 4279 	mov	dptr,#_Thrust_cal_times_1_182
      000F25 E4               [12] 4280 	clr	a
      000F26 F0               [24] 4281 	movx	@dptr,a
      000F27 A3               [24] 4282 	inc	dptr
      000F28 F0               [24] 4283 	movx	@dptr,a
                           000E3E  4284 	C$lab6.c$468$5$186 ==.
                                   4285 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:468: while (1)
      000F29                       4286 00153$:
                           000E3E  4287 	C$lab6.c$470$3$184 ==.
                                   4288 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:470: printf("\r\n %u",RTHRUST_PW);
      000F29 C0 07            [24] 4289 	push	ar7
      000F2B C0 4E            [24] 4290 	push	_RTHRUST_PW
      000F2D C0 4F            [24] 4291 	push	(_RTHRUST_PW + 1)
      000F2F 74 08            [12] 4292 	mov	a,#___str_12
      000F31 C0 E0            [24] 4293 	push	acc
      000F33 74 1D            [12] 4294 	mov	a,#(___str_12 >> 8)
      000F35 C0 E0            [24] 4295 	push	acc
      000F37 74 80            [12] 4296 	mov	a,#0x80
      000F39 C0 E0            [24] 4297 	push	acc
      000F3B 12 15 90         [24] 4298 	lcall	_printf
      000F3E E5 81            [12] 4299 	mov	a,sp
      000F40 24 FB            [12] 4300 	add	a,#0xfb
      000F42 F5 81            [12] 4301 	mov	sp,a
      000F44 D0 07            [24] 4302 	pop	ar7
                           000E5B  4303 	C$lab6.c$471$3$184 ==.
                                   4304 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:471: RTRST_lo_to_hi = 0xFFFF - RTHRUST_PW;
      000F46 74 FF            [12] 4305 	mov	a,#0xFF
      000F48 C3               [12] 4306 	clr	c
      000F49 95 4E            [12] 4307 	subb	a,_RTHRUST_PW
      000F4B F5 52            [12] 4308 	mov	_RTRST_lo_to_hi,a
      000F4D 74 FF            [12] 4309 	mov	a,#0xFF
      000F4F 95 4F            [12] 4310 	subb	a,(_RTHRUST_PW + 1)
      000F51 F5 53            [12] 4311 	mov	(_RTRST_lo_to_hi + 1),a
                           000E68  4312 	C$lab6.c$472$3$184 ==.
                                   4313 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:472: LTRST_lo_to_hi = 0xFFFF - LTHRUST_PW;
      000F53 74 FF            [12] 4314 	mov	a,#0xFF
      000F55 C3               [12] 4315 	clr	c
      000F56 95 50            [12] 4316 	subb	a,_LTHRUST_PW
      000F58 F5 54            [12] 4317 	mov	_LTRST_lo_to_hi,a
      000F5A 74 FF            [12] 4318 	mov	a,#0xFF
      000F5C 95 51            [12] 4319 	subb	a,(_LTHRUST_PW + 1)
      000F5E F5 55            [12] 4320 	mov	(_LTRST_lo_to_hi + 1),a
                           000E75  4321 	C$lab6.c$473$3$184 ==.
                                   4322 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:473: PCA0CP2 = RTRST_lo_to_hi;
      000F60 85 52 EC         [24] 4323 	mov	((_PCA0CP2 >> 0) & 0xFF),_RTRST_lo_to_hi
      000F63 85 53 FC         [24] 4324 	mov	((_PCA0CP2 >> 8) & 0xFF),(_RTRST_lo_to_hi + 1)
                           000E7B  4325 	C$lab6.c$474$3$184 ==.
                                   4326 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:474: PCA0CP3 = LTRST_lo_to_hi;
      000F66 85 54 ED         [24] 4327 	mov	((_PCA0CP3 >> 0) & 0xFF),_LTRST_lo_to_hi
      000F69 85 55 FD         [24] 4328 	mov	((_PCA0CP3 >> 8) & 0xFF),(_LTRST_lo_to_hi + 1)
                           000E81  4329 	C$lab6.c$478$3$184 ==.
                                   4330 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:478: if (times == 0 )
      000F6C 90 00 63         [24] 4331 	mov	dptr,#_Thrust_cal_times_1_182
      000F6F E0               [24] 4332 	movx	a,@dptr
      000F70 FD               [12] 4333 	mov	r5,a
      000F71 A3               [24] 4334 	inc	dptr
      000F72 E0               [24] 4335 	movx	a,@dptr
      000F73 FE               [12] 4336 	mov	r6,a
      000F74 4D               [12] 4337 	orl	a,r5
      000F75 60 03            [24] 4338 	jz	00231$
      000F77 02 10 41         [24] 4339 	ljmp	00150$
      000F7A                       4340 00231$:
                           000E8F  4341 	C$lab6.c$480$4$185 ==.
                                   4342 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:480: if (value ==0)
      000F7A 90 00 61         [24] 4343 	mov	dptr,#_Thrust_cal_value_1_182
      000F7D E0               [24] 4344 	movx	a,@dptr
      000F7E FD               [12] 4345 	mov	r5,a
      000F7F A3               [24] 4346 	inc	dptr
      000F80 E0               [24] 4347 	movx	a,@dptr
      000F81 FE               [12] 4348 	mov	r6,a
      000F82 4D               [12] 4349 	orl	a,r5
      000F83 70 2D            [24] 4350 	jnz	00110$
                           000E9A  4351 	C$lab6.c$482$5$186 ==.
                                   4352 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:482: lcd_clear();
      000F85 C0 07            [24] 4353 	push	ar7
      000F87 12 01 CC         [24] 4354 	lcall	_lcd_clear
                           000E9F  4355 	C$lab6.c$483$5$186 ==.
                                   4356 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:483: lcd_print("Now calibrating Min_PW");
      000F8A 74 BB            [12] 4357 	mov	a,#___str_20
      000F8C C0 E0            [24] 4358 	push	acc
      000F8E 74 1D            [12] 4359 	mov	a,#(___str_20 >> 8)
      000F90 C0 E0            [24] 4360 	push	acc
      000F92 74 80            [12] 4361 	mov	a,#0x80
      000F94 C0 E0            [24] 4362 	push	acc
      000F96 12 01 47         [24] 4363 	lcall	_lcd_print
      000F99 15 81            [12] 4364 	dec	sp
      000F9B 15 81            [12] 4365 	dec	sp
      000F9D 15 81            [12] 4366 	dec	sp
      000F9F D0 07            [24] 4367 	pop	ar7
                           000EB6  4368 	C$lab6.c$484$5$186 ==.
                                   4369 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:484: if (st ==0)
      000FA1 EF               [12] 4370 	mov	a,r7
      000FA2 70 0C            [24] 4371 	jnz	00108$
                           000EB9  4372 	C$lab6.c$486$6$187 ==.
                                   4373 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:486: RTHRUST_PW = PW_MIN_THRUST;
      000FA4 85 34 4E         [24] 4374 	mov	_RTHRUST_PW,_PW_MIN_THRUST
      000FA7 85 35 4F         [24] 4375 	mov	(_RTHRUST_PW + 1),(_PW_MIN_THRUST + 1)
                           000EBF  4376 	C$lab6.c$487$6$187 ==.
                                   4377 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:487: LTHRUST_PW = PW_MIN_THRUST;
      000FAA 85 34 50         [24] 4378 	mov	_LTHRUST_PW,_PW_MIN_THRUST
      000FAD 85 35 51         [24] 4379 	mov	(_LTHRUST_PW + 1),(_PW_MIN_THRUST + 1)
      000FB0                       4380 00108$:
                           000EC5  4381 	C$lab6.c$489$5$186 ==.
                                   4382 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:489: st =1;
      000FB0 7F 01            [12] 4383 	mov	r7,#0x01
      000FB2                       4384 00110$:
                           000EC7  4385 	C$lab6.c$491$4$185 ==.
                                   4386 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:491: value = kpd_input(1);
      000FB2 75 82 01         [24] 4387 	mov	dpl,#0x01
      000FB5 C0 07            [24] 4388 	push	ar7
      000FB7 12 02 84         [24] 4389 	lcall	_kpd_input
      000FBA AD 82            [24] 4390 	mov	r5,dpl
      000FBC AE 83            [24] 4391 	mov	r6,dph
      000FBE D0 07            [24] 4392 	pop	ar7
      000FC0 90 00 61         [24] 4393 	mov	dptr,#_Thrust_cal_value_1_182
      000FC3 ED               [12] 4394 	mov	a,r5
      000FC4 F0               [24] 4395 	movx	@dptr,a
      000FC5 EE               [12] 4396 	mov	a,r6
      000FC6 A3               [24] 4397 	inc	dptr
      000FC7 F0               [24] 4398 	movx	@dptr,a
                           000EDD  4399 	C$lab6.c$492$4$185 ==.
                                   4400 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:492: if (value == 1)
      000FC8 BD 01 1D         [24] 4401 	cjne	r5,#0x01,00117$
      000FCB BE 00 1A         [24] 4402 	cjne	r6,#0x00,00117$
                           000EE3  4403 	C$lab6.c$494$5$188 ==.
                                   4404 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:494: RTHRUST_PW -= 30;
      000FCE E5 4E            [12] 4405 	mov	a,_RTHRUST_PW
      000FD0 24 E2            [12] 4406 	add	a,#0xE2
      000FD2 F5 4E            [12] 4407 	mov	_RTHRUST_PW,a
      000FD4 E5 4F            [12] 4408 	mov	a,(_RTHRUST_PW + 1)
      000FD6 34 FF            [12] 4409 	addc	a,#0xFF
      000FD8 F5 4F            [12] 4410 	mov	(_RTHRUST_PW + 1),a
                           000EEF  4411 	C$lab6.c$495$5$188 ==.
                                   4412 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:495: LTHRUST_PW += 30;
      000FDA 74 1E            [12] 4413 	mov	a,#0x1E
      000FDC 25 50            [12] 4414 	add	a,_LTHRUST_PW
      000FDE F5 50            [12] 4415 	mov	_LTHRUST_PW,a
      000FE0 E4               [12] 4416 	clr	a
      000FE1 35 51            [12] 4417 	addc	a,(_LTHRUST_PW + 1)
      000FE3 F5 51            [12] 4418 	mov	(_LTHRUST_PW + 1),a
      000FE5 02 0F 29         [24] 4419 	ljmp	00153$
      000FE8                       4420 00117$:
                           000EFD  4421 	C$lab6.c$497$4$185 ==.
                                   4422 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:497: else if (value==2)
      000FE8 90 00 61         [24] 4423 	mov	dptr,#_Thrust_cal_value_1_182
      000FEB E0               [24] 4424 	movx	a,@dptr
      000FEC FD               [12] 4425 	mov	r5,a
      000FED A3               [24] 4426 	inc	dptr
      000FEE E0               [24] 4427 	movx	a,@dptr
      000FEF FE               [12] 4428 	mov	r6,a
      000FF0 BD 02 1D         [24] 4429 	cjne	r5,#0x02,00114$
      000FF3 BE 00 1A         [24] 4430 	cjne	r6,#0x00,00114$
                           000F0B  4431 	C$lab6.c$499$5$189 ==.
                                   4432 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:499: RTHRUST_PW += 30;
      000FF6 74 1E            [12] 4433 	mov	a,#0x1E
      000FF8 25 4E            [12] 4434 	add	a,_RTHRUST_PW
      000FFA F5 4E            [12] 4435 	mov	_RTHRUST_PW,a
      000FFC E4               [12] 4436 	clr	a
      000FFD 35 4F            [12] 4437 	addc	a,(_RTHRUST_PW + 1)
      000FFF F5 4F            [12] 4438 	mov	(_RTHRUST_PW + 1),a
                           000F16  4439 	C$lab6.c$500$5$189 ==.
                                   4440 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:500: LTHRUST_PW -= 30;
      001001 E5 50            [12] 4441 	mov	a,_LTHRUST_PW
      001003 24 E2            [12] 4442 	add	a,#0xE2
      001005 F5 50            [12] 4443 	mov	_LTHRUST_PW,a
      001007 E5 51            [12] 4444 	mov	a,(_LTHRUST_PW + 1)
      001009 34 FF            [12] 4445 	addc	a,#0xFF
      00100B F5 51            [12] 4446 	mov	(_LTHRUST_PW + 1),a
      00100D 02 0F 29         [24] 4447 	ljmp	00153$
      001010                       4448 00114$:
                           000F25  4449 	C$lab6.c$502$4$185 ==.
                                   4450 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:502: else if (value == 3)
      001010 90 00 61         [24] 4451 	mov	dptr,#_Thrust_cal_value_1_182
      001013 E0               [24] 4452 	movx	a,@dptr
      001014 FD               [12] 4453 	mov	r5,a
      001015 A3               [24] 4454 	inc	dptr
      001016 E0               [24] 4455 	movx	a,@dptr
      001017 FE               [12] 4456 	mov	r6,a
      001018 BD 03 05         [24] 4457 	cjne	r5,#0x03,00238$
      00101B BE 00 02         [24] 4458 	cjne	r6,#0x00,00238$
      00101E 80 03            [24] 4459 	sjmp	00239$
      001020                       4460 00238$:
      001020 02 0F 29         [24] 4461 	ljmp	00153$
      001023                       4462 00239$:
                           000F38  4463 	C$lab6.c$504$5$190 ==.
                                   4464 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:504: times++;
      001023 90 00 63         [24] 4465 	mov	dptr,#_Thrust_cal_times_1_182
      001026 E0               [24] 4466 	movx	a,@dptr
      001027 24 01            [12] 4467 	add	a,#0x01
      001029 F0               [24] 4468 	movx	@dptr,a
      00102A A3               [24] 4469 	inc	dptr
      00102B E0               [24] 4470 	movx	a,@dptr
      00102C 34 00            [12] 4471 	addc	a,#0x00
      00102E F0               [24] 4472 	movx	@dptr,a
                           000F44  4473 	C$lab6.c$505$5$190 ==.
                                   4474 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:505: value =0;
      00102F 90 00 61         [24] 4475 	mov	dptr,#_Thrust_cal_value_1_182
      001032 E4               [12] 4476 	clr	a
      001033 F0               [24] 4477 	movx	@dptr,a
      001034 A3               [24] 4478 	inc	dptr
      001035 F0               [24] 4479 	movx	@dptr,a
                           000F4B  4480 	C$lab6.c$506$5$190 ==.
                                   4481 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:506: st=0;
      001036 7F 00            [12] 4482 	mov	r7,#0x00
                           000F4D  4483 	C$lab6.c$507$5$190 ==.
                                   4484 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:507: PW_MIN_THRUST = RTHRUST_PW;
      001038 85 4E 34         [24] 4485 	mov	_PW_MIN_THRUST,_RTHRUST_PW
      00103B 85 4F 35         [24] 4486 	mov	(_PW_MIN_THRUST + 1),(_RTHRUST_PW + 1)
      00103E 02 0F 29         [24] 4487 	ljmp	00153$
      001041                       4488 00150$:
                           000F56  4489 	C$lab6.c$511$3$184 ==.
                                   4490 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:511: else if (times ==1)
      001041 90 00 63         [24] 4491 	mov	dptr,#_Thrust_cal_times_1_182
      001044 E0               [24] 4492 	movx	a,@dptr
      001045 FD               [12] 4493 	mov	r5,a
      001046 A3               [24] 4494 	inc	dptr
      001047 E0               [24] 4495 	movx	a,@dptr
      001048 FE               [12] 4496 	mov	r6,a
      001049 BD 01 05         [24] 4497 	cjne	r5,#0x01,00240$
      00104C BE 00 02         [24] 4498 	cjne	r6,#0x00,00240$
      00104F 80 03            [24] 4499 	sjmp	00241$
      001051                       4500 00240$:
      001051 02 11 1B         [24] 4501 	ljmp	00147$
      001054                       4502 00241$:
                           000F69  4503 	C$lab6.c$513$4$191 ==.
                                   4504 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:513: if (value ==0)
      001054 90 00 61         [24] 4505 	mov	dptr,#_Thrust_cal_value_1_182
      001057 E0               [24] 4506 	movx	a,@dptr
      001058 FD               [12] 4507 	mov	r5,a
      001059 A3               [24] 4508 	inc	dptr
      00105A E0               [24] 4509 	movx	a,@dptr
      00105B FE               [12] 4510 	mov	r6,a
      00105C 4D               [12] 4511 	orl	a,r5
      00105D 70 2D            [24] 4512 	jnz	00122$
                           000F74  4513 	C$lab6.c$515$5$192 ==.
                                   4514 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:515: lcd_clear();
      00105F C0 07            [24] 4515 	push	ar7
      001061 12 01 CC         [24] 4516 	lcall	_lcd_clear
                           000F79  4517 	C$lab6.c$516$5$192 ==.
                                   4518 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:516: lcd_print("Now calibrating Min_PW");
      001064 74 BB            [12] 4519 	mov	a,#___str_20
      001066 C0 E0            [24] 4520 	push	acc
      001068 74 1D            [12] 4521 	mov	a,#(___str_20 >> 8)
      00106A C0 E0            [24] 4522 	push	acc
      00106C 74 80            [12] 4523 	mov	a,#0x80
      00106E C0 E0            [24] 4524 	push	acc
      001070 12 01 47         [24] 4525 	lcall	_lcd_print
      001073 15 81            [12] 4526 	dec	sp
      001075 15 81            [12] 4527 	dec	sp
      001077 15 81            [12] 4528 	dec	sp
      001079 D0 07            [24] 4529 	pop	ar7
                           000F90  4530 	C$lab6.c$517$5$192 ==.
                                   4531 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:517: if (st ==0)
      00107B EF               [12] 4532 	mov	a,r7
      00107C 70 0C            [24] 4533 	jnz	00120$
                           000F93  4534 	C$lab6.c$519$6$193 ==.
                                   4535 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:519: RTHRUST_PW = PW_NUET_THRUST;
      00107E 85 36 4E         [24] 4536 	mov	_RTHRUST_PW,_PW_NUET_THRUST
      001081 85 37 4F         [24] 4537 	mov	(_RTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
                           000F99  4538 	C$lab6.c$520$6$193 ==.
                                   4539 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:520: LTHRUST_PW = PW_NUET_THRUST;
      001084 85 36 50         [24] 4540 	mov	_LTHRUST_PW,_PW_NUET_THRUST
      001087 85 37 51         [24] 4541 	mov	(_LTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
      00108A                       4542 00120$:
                           000F9F  4543 	C$lab6.c$522$5$192 ==.
                                   4544 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:522: st =1;
      00108A 7F 01            [12] 4545 	mov	r7,#0x01
      00108C                       4546 00122$:
                           000FA1  4547 	C$lab6.c$524$4$191 ==.
                                   4548 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:524: value = kpd_input(1);
      00108C 75 82 01         [24] 4549 	mov	dpl,#0x01
      00108F C0 07            [24] 4550 	push	ar7
      001091 12 02 84         [24] 4551 	lcall	_kpd_input
      001094 AD 82            [24] 4552 	mov	r5,dpl
      001096 AE 83            [24] 4553 	mov	r6,dph
      001098 D0 07            [24] 4554 	pop	ar7
      00109A 90 00 61         [24] 4555 	mov	dptr,#_Thrust_cal_value_1_182
      00109D ED               [12] 4556 	mov	a,r5
      00109E F0               [24] 4557 	movx	@dptr,a
      00109F EE               [12] 4558 	mov	a,r6
      0010A0 A3               [24] 4559 	inc	dptr
      0010A1 F0               [24] 4560 	movx	@dptr,a
                           000FB7  4561 	C$lab6.c$525$4$191 ==.
                                   4562 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:525: if (value == 1)
      0010A2 BD 01 1D         [24] 4563 	cjne	r5,#0x01,00129$
      0010A5 BE 00 1A         [24] 4564 	cjne	r6,#0x00,00129$
                           000FBD  4565 	C$lab6.c$527$5$194 ==.
                                   4566 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:527: RTHRUST_PW -= 30;
      0010A8 E5 4E            [12] 4567 	mov	a,_RTHRUST_PW
      0010AA 24 E2            [12] 4568 	add	a,#0xE2
      0010AC F5 4E            [12] 4569 	mov	_RTHRUST_PW,a
      0010AE E5 4F            [12] 4570 	mov	a,(_RTHRUST_PW + 1)
      0010B0 34 FF            [12] 4571 	addc	a,#0xFF
      0010B2 F5 4F            [12] 4572 	mov	(_RTHRUST_PW + 1),a
                           000FC9  4573 	C$lab6.c$528$5$194 ==.
                                   4574 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:528: LTHRUST_PW += 30;
      0010B4 74 1E            [12] 4575 	mov	a,#0x1E
      0010B6 25 50            [12] 4576 	add	a,_LTHRUST_PW
      0010B8 F5 50            [12] 4577 	mov	_LTHRUST_PW,a
      0010BA E4               [12] 4578 	clr	a
      0010BB 35 51            [12] 4579 	addc	a,(_LTHRUST_PW + 1)
      0010BD F5 51            [12] 4580 	mov	(_LTHRUST_PW + 1),a
      0010BF 02 0F 29         [24] 4581 	ljmp	00153$
      0010C2                       4582 00129$:
                           000FD7  4583 	C$lab6.c$530$4$191 ==.
                                   4584 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:530: else if (value==2)
      0010C2 90 00 61         [24] 4585 	mov	dptr,#_Thrust_cal_value_1_182
      0010C5 E0               [24] 4586 	movx	a,@dptr
      0010C6 FD               [12] 4587 	mov	r5,a
      0010C7 A3               [24] 4588 	inc	dptr
      0010C8 E0               [24] 4589 	movx	a,@dptr
      0010C9 FE               [12] 4590 	mov	r6,a
      0010CA BD 02 1D         [24] 4591 	cjne	r5,#0x02,00126$
      0010CD BE 00 1A         [24] 4592 	cjne	r6,#0x00,00126$
                           000FE5  4593 	C$lab6.c$532$5$195 ==.
                                   4594 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:532: RTHRUST_PW += 30;
      0010D0 74 1E            [12] 4595 	mov	a,#0x1E
      0010D2 25 4E            [12] 4596 	add	a,_RTHRUST_PW
      0010D4 F5 4E            [12] 4597 	mov	_RTHRUST_PW,a
      0010D6 E4               [12] 4598 	clr	a
      0010D7 35 4F            [12] 4599 	addc	a,(_RTHRUST_PW + 1)
      0010D9 F5 4F            [12] 4600 	mov	(_RTHRUST_PW + 1),a
                           000FF0  4601 	C$lab6.c$533$5$195 ==.
                                   4602 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:533: LTHRUST_PW -= 30;
      0010DB E5 50            [12] 4603 	mov	a,_LTHRUST_PW
      0010DD 24 E2            [12] 4604 	add	a,#0xE2
      0010DF F5 50            [12] 4605 	mov	_LTHRUST_PW,a
      0010E1 E5 51            [12] 4606 	mov	a,(_LTHRUST_PW + 1)
      0010E3 34 FF            [12] 4607 	addc	a,#0xFF
      0010E5 F5 51            [12] 4608 	mov	(_LTHRUST_PW + 1),a
      0010E7 02 0F 29         [24] 4609 	ljmp	00153$
      0010EA                       4610 00126$:
                           000FFF  4611 	C$lab6.c$535$4$191 ==.
                                   4612 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:535: else if (value == 3)
      0010EA 90 00 61         [24] 4613 	mov	dptr,#_Thrust_cal_value_1_182
      0010ED E0               [24] 4614 	movx	a,@dptr
      0010EE FD               [12] 4615 	mov	r5,a
      0010EF A3               [24] 4616 	inc	dptr
      0010F0 E0               [24] 4617 	movx	a,@dptr
      0010F1 FE               [12] 4618 	mov	r6,a
      0010F2 BD 03 05         [24] 4619 	cjne	r5,#0x03,00248$
      0010F5 BE 00 02         [24] 4620 	cjne	r6,#0x00,00248$
      0010F8 80 03            [24] 4621 	sjmp	00249$
      0010FA                       4622 00248$:
      0010FA 02 0F 29         [24] 4623 	ljmp	00153$
      0010FD                       4624 00249$:
                           001012  4625 	C$lab6.c$537$5$196 ==.
                                   4626 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:537: times++;
      0010FD 90 00 63         [24] 4627 	mov	dptr,#_Thrust_cal_times_1_182
      001100 E0               [24] 4628 	movx	a,@dptr
      001101 24 01            [12] 4629 	add	a,#0x01
      001103 F0               [24] 4630 	movx	@dptr,a
      001104 A3               [24] 4631 	inc	dptr
      001105 E0               [24] 4632 	movx	a,@dptr
      001106 34 00            [12] 4633 	addc	a,#0x00
      001108 F0               [24] 4634 	movx	@dptr,a
                           00101E  4635 	C$lab6.c$538$5$196 ==.
                                   4636 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:538: value =0;
      001109 90 00 61         [24] 4637 	mov	dptr,#_Thrust_cal_value_1_182
      00110C E4               [12] 4638 	clr	a
      00110D F0               [24] 4639 	movx	@dptr,a
      00110E A3               [24] 4640 	inc	dptr
      00110F F0               [24] 4641 	movx	@dptr,a
                           001025  4642 	C$lab6.c$539$5$196 ==.
                                   4643 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:539: st=0;
      001110 7F 00            [12] 4644 	mov	r7,#0x00
                           001027  4645 	C$lab6.c$540$5$196 ==.
                                   4646 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:540: PW_NUET_THRUST = RTHRUST_PW;
      001112 85 4E 36         [24] 4647 	mov	_PW_NUET_THRUST,_RTHRUST_PW
      001115 85 4F 37         [24] 4648 	mov	(_PW_NUET_THRUST + 1),(_RTHRUST_PW + 1)
      001118 02 0F 29         [24] 4649 	ljmp	00153$
      00111B                       4650 00147$:
                           001030  4651 	C$lab6.c$543$3$184 ==.
                                   4652 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:543: else if(times == 2)
      00111B 90 00 63         [24] 4653 	mov	dptr,#_Thrust_cal_times_1_182
      00111E E0               [24] 4654 	movx	a,@dptr
      00111F FD               [12] 4655 	mov	r5,a
      001120 A3               [24] 4656 	inc	dptr
      001121 E0               [24] 4657 	movx	a,@dptr
      001122 FE               [12] 4658 	mov	r6,a
      001123 BD 02 05         [24] 4659 	cjne	r5,#0x02,00250$
      001126 BE 00 02         [24] 4660 	cjne	r6,#0x00,00250$
      001129 80 03            [24] 4661 	sjmp	00251$
      00112B                       4662 00250$:
      00112B 02 11 D3         [24] 4663 	ljmp	00144$
      00112E                       4664 00251$:
                           001043  4665 	C$lab6.c$545$4$197 ==.
                                   4666 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:545: if (value==0)
      00112E 90 00 61         [24] 4667 	mov	dptr,#_Thrust_cal_value_1_182
      001131 E0               [24] 4668 	movx	a,@dptr
      001132 FD               [12] 4669 	mov	r5,a
      001133 A3               [24] 4670 	inc	dptr
      001134 E0               [24] 4671 	movx	a,@dptr
      001135 FE               [12] 4672 	mov	r6,a
      001136 4D               [12] 4673 	orl	a,r5
      001137 70 2B            [24] 4674 	jnz	00134$
                           00104E  4675 	C$lab6.c$547$5$198 ==.
                                   4676 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:547: lcd_clear();
      001139 C0 07            [24] 4677 	push	ar7
      00113B 12 01 CC         [24] 4678 	lcall	_lcd_clear
                           001053  4679 	C$lab6.c$548$5$198 ==.
                                   4680 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:548: lcd_print("Now calibrating Max_PW");
      00113E 74 3D            [12] 4681 	mov	a,#___str_15
      001140 C0 E0            [24] 4682 	push	acc
      001142 74 1D            [12] 4683 	mov	a,#(___str_15 >> 8)
      001144 C0 E0            [24] 4684 	push	acc
      001146 74 80            [12] 4685 	mov	a,#0x80
      001148 C0 E0            [24] 4686 	push	acc
      00114A 12 01 47         [24] 4687 	lcall	_lcd_print
      00114D 15 81            [12] 4688 	dec	sp
      00114F 15 81            [12] 4689 	dec	sp
      001151 15 81            [12] 4690 	dec	sp
      001153 D0 07            [24] 4691 	pop	ar7
                           00106A  4692 	C$lab6.c$549$5$198 ==.
                                   4693 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:549: if (st == 0)
      001155 EF               [12] 4694 	mov	a,r7
      001156 70 0C            [24] 4695 	jnz	00134$
                           00106D  4696 	C$lab6.c$551$6$199 ==.
                                   4697 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:551: RTHRUST_PW = PW_MAX_THRUST;
      001158 85 38 4E         [24] 4698 	mov	_RTHRUST_PW,_PW_MAX_THRUST
      00115B 85 39 4F         [24] 4699 	mov	(_RTHRUST_PW + 1),(_PW_MAX_THRUST + 1)
                           001073  4700 	C$lab6.c$552$6$199 ==.
                                   4701 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:552: LTHRUST_PW = PW_MAX_THRUST;
      00115E 85 38 50         [24] 4702 	mov	_LTHRUST_PW,_PW_MAX_THRUST
      001161 85 39 51         [24] 4703 	mov	(_LTHRUST_PW + 1),(_PW_MAX_THRUST + 1)
      001164                       4704 00134$:
                           001079  4705 	C$lab6.c$556$4$197 ==.
                                   4706 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:556: value = kpd_input(1);
      001164 75 82 01         [24] 4707 	mov	dpl,#0x01
      001167 C0 07            [24] 4708 	push	ar7
      001169 12 02 84         [24] 4709 	lcall	_kpd_input
      00116C AD 82            [24] 4710 	mov	r5,dpl
      00116E AE 83            [24] 4711 	mov	r6,dph
      001170 D0 07            [24] 4712 	pop	ar7
      001172 90 00 61         [24] 4713 	mov	dptr,#_Thrust_cal_value_1_182
      001175 ED               [12] 4714 	mov	a,r5
      001176 F0               [24] 4715 	movx	@dptr,a
      001177 EE               [12] 4716 	mov	a,r6
      001178 A3               [24] 4717 	inc	dptr
      001179 F0               [24] 4718 	movx	@dptr,a
                           00108F  4719 	C$lab6.c$557$4$197 ==.
                                   4720 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:557: if (value == 1)
      00117A BD 01 12         [24] 4721 	cjne	r5,#0x01,00141$
      00117D BE 00 0F         [24] 4722 	cjne	r6,#0x00,00141$
                           001095  4723 	C$lab6.c$559$5$200 ==.
                                   4724 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:559: RTHRUST_PW -= 30;
      001180 E5 4E            [12] 4725 	mov	a,_RTHRUST_PW
      001182 24 E2            [12] 4726 	add	a,#0xE2
      001184 F5 4E            [12] 4727 	mov	_RTHRUST_PW,a
      001186 E5 4F            [12] 4728 	mov	a,(_RTHRUST_PW + 1)
      001188 34 FF            [12] 4729 	addc	a,#0xFF
      00118A F5 4F            [12] 4730 	mov	(_RTHRUST_PW + 1),a
      00118C 02 0F 29         [24] 4731 	ljmp	00153$
      00118F                       4732 00141$:
                           0010A4  4733 	C$lab6.c$561$4$197 ==.
                                   4734 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:561: else if (value==2)
      00118F 90 00 61         [24] 4735 	mov	dptr,#_Thrust_cal_value_1_182
      001192 E0               [24] 4736 	movx	a,@dptr
      001193 FD               [12] 4737 	mov	r5,a
      001194 A3               [24] 4738 	inc	dptr
      001195 E0               [24] 4739 	movx	a,@dptr
      001196 FE               [12] 4740 	mov	r6,a
      001197 BD 02 11         [24] 4741 	cjne	r5,#0x02,00138$
      00119A BE 00 0E         [24] 4742 	cjne	r6,#0x00,00138$
                           0010B2  4743 	C$lab6.c$563$5$201 ==.
                                   4744 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:563: RTHRUST_PW += 30;
      00119D 74 1E            [12] 4745 	mov	a,#0x1E
      00119F 25 4E            [12] 4746 	add	a,_RTHRUST_PW
      0011A1 F5 4E            [12] 4747 	mov	_RTHRUST_PW,a
      0011A3 E4               [12] 4748 	clr	a
      0011A4 35 4F            [12] 4749 	addc	a,(_RTHRUST_PW + 1)
      0011A6 F5 4F            [12] 4750 	mov	(_RTHRUST_PW + 1),a
      0011A8 02 0F 29         [24] 4751 	ljmp	00153$
      0011AB                       4752 00138$:
                           0010C0  4753 	C$lab6.c$565$4$197 ==.
                                   4754 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:565: else if (value == 3)
      0011AB 90 00 61         [24] 4755 	mov	dptr,#_Thrust_cal_value_1_182
      0011AE E0               [24] 4756 	movx	a,@dptr
      0011AF FD               [12] 4757 	mov	r5,a
      0011B0 A3               [24] 4758 	inc	dptr
      0011B1 E0               [24] 4759 	movx	a,@dptr
      0011B2 FE               [12] 4760 	mov	r6,a
      0011B3 BD 03 05         [24] 4761 	cjne	r5,#0x03,00258$
      0011B6 BE 00 02         [24] 4762 	cjne	r6,#0x00,00258$
      0011B9 80 03            [24] 4763 	sjmp	00259$
      0011BB                       4764 00258$:
      0011BB 02 0F 29         [24] 4765 	ljmp	00153$
      0011BE                       4766 00259$:
                           0010D3  4767 	C$lab6.c$567$5$202 ==.
                                   4768 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:567: PW_MAX_THRUST = RTHRUST_PW;
      0011BE 85 4E 38         [24] 4769 	mov	_PW_MAX_THRUST,_RTHRUST_PW
      0011C1 85 4F 39         [24] 4770 	mov	(_PW_MAX_THRUST + 1),(_RTHRUST_PW + 1)
                           0010D9  4771 	C$lab6.c$568$5$202 ==.
                                   4772 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:568: LTHRUST_PW =PW_NUET_THRUST;
      0011C4 85 36 50         [24] 4773 	mov	_LTHRUST_PW,_PW_NUET_THRUST
      0011C7 85 37 51         [24] 4774 	mov	(_LTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
                           0010DF  4775 	C$lab6.c$569$5$202 ==.
                                   4776 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:569: RTHRUST_PW =PW_NUET_THRUST;
      0011CA 85 36 4E         [24] 4777 	mov	_RTHRUST_PW,_PW_NUET_THRUST
      0011CD 85 37 4F         [24] 4778 	mov	(_RTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
      0011D0 02 0F 29         [24] 4779 	ljmp	00153$
      0011D3                       4780 00144$:
                           0010E8  4781 	C$lab6.c$572$3$184 ==.
                                   4782 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:572: else return;
                           0010E8  4783 	C$lab6.c$575$1$182 ==.
                           0010E8  4784 	XG$Thrust_cal$0$0 ==.
      0011D3 22               [24] 4785 	ret
                                   4786 ;------------------------------------------------------------
                                   4787 ;Allocation info for local variables in function 'Steering_Servo'
                                   4788 ;------------------------------------------------------------
                                   4789 ;direction                 Allocated to registers r6 r7 
                                   4790 ;------------------------------------------------------------
                           0010E9  4791 	G$Steering_Servo$0$0 ==.
                           0010E9  4792 	C$lab6.c$578$1$182 ==.
                                   4793 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:578: void Steering_Servo(unsigned int direction)
                                   4794 ;	-----------------------------------------
                                   4795 ;	 function Steering_Servo
                                   4796 ;	-----------------------------------------
      0011D4                       4797 _Steering_Servo:
      0011D4 AE 82            [24] 4798 	mov	r6,dpl
      0011D6 AF 83            [24] 4799 	mov	r7,dph
                           0010ED  4800 	C$lab6.c$584$1$204 ==.
                                   4801 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:584: if (direction > 3500 || direction < 100)
      0011D8 C3               [12] 4802 	clr	c
      0011D9 74 AC            [12] 4803 	mov	a,#0xAC
      0011DB 9E               [12] 4804 	subb	a,r6
      0011DC 74 0D            [12] 4805 	mov	a,#0x0D
      0011DE 9F               [12] 4806 	subb	a,r7
      0011DF 40 08            [24] 4807 	jc	00104$
      0011E1 EE               [12] 4808 	mov	a,r6
      0011E2 94 64            [12] 4809 	subb	a,#0x64
      0011E4 EF               [12] 4810 	mov	a,r7
      0011E5 94 00            [12] 4811 	subb	a,#0x00
      0011E7 50 09            [24] 4812 	jnc	00105$
      0011E9                       4813 00104$:
                           0010FE  4814 	C$lab6.c$586$2$205 ==.
                                   4815 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:586: error =0;
      0011E9 90 00 67         [24] 4816 	mov	dptr,#_error
      0011EC E4               [12] 4817 	clr	a
      0011ED F0               [24] 4818 	movx	@dptr,a
      0011EE A3               [24] 4819 	inc	dptr
      0011EF F0               [24] 4820 	movx	@dptr,a
      0011F0 80 33            [24] 4821 	sjmp	00106$
      0011F2                       4822 00105$:
                           001107  4823 	C$lab6.c$588$1$204 ==.
                                   4824 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:588: else if (direction > 1800)
      0011F2 C3               [12] 4825 	clr	c
      0011F3 74 08            [12] 4826 	mov	a,#0x08
      0011F5 9E               [12] 4827 	subb	a,r6
      0011F6 74 07            [12] 4828 	mov	a,#0x07
      0011F8 9F               [12] 4829 	subb	a,r7
      0011F9 50 13            [24] 4830 	jnc	00102$
                           001110  4831 	C$lab6.c$590$2$206 ==.
                                   4832 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:590: error = (3600 - (int) direction);
      0011FB 8E 04            [24] 4833 	mov	ar4,r6
      0011FD 8F 05            [24] 4834 	mov	ar5,r7
      0011FF 90 00 67         [24] 4835 	mov	dptr,#_error
      001202 74 10            [12] 4836 	mov	a,#0x10
      001204 C3               [12] 4837 	clr	c
      001205 9C               [12] 4838 	subb	a,r4
      001206 F0               [24] 4839 	movx	@dptr,a
      001207 74 0E            [12] 4840 	mov	a,#0x0E
      001209 9D               [12] 4841 	subb	a,r5
      00120A A3               [24] 4842 	inc	dptr
      00120B F0               [24] 4843 	movx	@dptr,a
      00120C 80 17            [24] 4844 	sjmp	00106$
      00120E                       4845 00102$:
                           001123  4846 	C$lab6.c$594$1$204 ==.
                                   4847 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:594: error = -1* direction;
      00120E 8E 11            [24] 4848 	mov	__mulint_PARM_2,r6
      001210 8F 12            [24] 4849 	mov	(__mulint_PARM_2 + 1),r7
      001212 90 FF FF         [24] 4850 	mov	dptr,#0xFFFF
      001215 12 14 07         [24] 4851 	lcall	__mulint
      001218 E5 82            [12] 4852 	mov	a,dpl
      00121A 85 83 F0         [24] 4853 	mov	b,dph
      00121D 90 00 67         [24] 4854 	mov	dptr,#_error
      001220 F0               [24] 4855 	movx	@dptr,a
      001221 E5 F0            [12] 4856 	mov	a,b
      001223 A3               [24] 4857 	inc	dptr
      001224 F0               [24] 4858 	movx	@dptr,a
      001225                       4859 00106$:
                           00113A  4860 	C$lab6.c$597$1$204 ==.
                                   4861 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:597: RUDDER_PW  = PW_CENTER_RUDDER + (int) (((int) kp* (int) error) - (int) kd * ((int)old_error -(int) error));
      001225 90 00 67         [24] 4862 	mov	dptr,#_error
      001228 E0               [24] 4863 	movx	a,@dptr
      001229 FE               [12] 4864 	mov	r6,a
      00122A A3               [24] 4865 	inc	dptr
      00122B E0               [24] 4866 	movx	a,@dptr
      00122C FF               [12] 4867 	mov	r7,a
      00122D 8E 11            [24] 4868 	mov	__mulint_PARM_2,r6
      00122F 8F 12            [24] 4869 	mov	(__mulint_PARM_2 + 1),r7
      001231 85 5B 82         [24] 4870 	mov	dpl,_kp
      001234 85 5C 83         [24] 4871 	mov	dph,(_kp + 1)
      001237 C0 07            [24] 4872 	push	ar7
      001239 C0 06            [24] 4873 	push	ar6
      00123B 12 14 07         [24] 4874 	lcall	__mulint
      00123E AC 82            [24] 4875 	mov	r4,dpl
      001240 AD 83            [24] 4876 	mov	r5,dph
      001242 D0 06            [24] 4877 	pop	ar6
      001244 D0 07            [24] 4878 	pop	ar7
      001246 90 00 69         [24] 4879 	mov	dptr,#_old_error
      001249 E0               [24] 4880 	movx	a,@dptr
      00124A FA               [12] 4881 	mov	r2,a
      00124B A3               [24] 4882 	inc	dptr
      00124C E0               [24] 4883 	movx	a,@dptr
      00124D FB               [12] 4884 	mov	r3,a
      00124E EA               [12] 4885 	mov	a,r2
      00124F C3               [12] 4886 	clr	c
      001250 9E               [12] 4887 	subb	a,r6
      001251 F5 11            [12] 4888 	mov	__mulint_PARM_2,a
      001253 EB               [12] 4889 	mov	a,r3
      001254 9F               [12] 4890 	subb	a,r7
      001255 F5 12            [12] 4891 	mov	(__mulint_PARM_2 + 1),a
      001257 85 5D 82         [24] 4892 	mov	dpl,_kd
      00125A 85 5E 83         [24] 4893 	mov	dph,(_kd + 1)
      00125D C0 07            [24] 4894 	push	ar7
      00125F C0 06            [24] 4895 	push	ar6
      001261 C0 05            [24] 4896 	push	ar5
      001263 C0 04            [24] 4897 	push	ar4
      001265 12 14 07         [24] 4898 	lcall	__mulint
      001268 AA 82            [24] 4899 	mov	r2,dpl
      00126A AB 83            [24] 4900 	mov	r3,dph
      00126C D0 04            [24] 4901 	pop	ar4
      00126E D0 05            [24] 4902 	pop	ar5
      001270 D0 06            [24] 4903 	pop	ar6
      001272 D0 07            [24] 4904 	pop	ar7
      001274 EC               [12] 4905 	mov	a,r4
      001275 C3               [12] 4906 	clr	c
      001276 9A               [12] 4907 	subb	a,r2
      001277 FC               [12] 4908 	mov	r4,a
      001278 ED               [12] 4909 	mov	a,r5
      001279 9B               [12] 4910 	subb	a,r3
      00127A FD               [12] 4911 	mov	r5,a
      00127B 8C 02            [24] 4912 	mov	ar2,r4
      00127D 8D 03            [24] 4913 	mov	ar3,r5
      00127F EA               [12] 4914 	mov	a,r2
      001280 25 3C            [12] 4915 	add	a,_PW_CENTER_RUDDER
      001282 F5 46            [12] 4916 	mov	_RUDDER_PW,a
      001284 EB               [12] 4917 	mov	a,r3
      001285 35 3D            [12] 4918 	addc	a,(_PW_CENTER_RUDDER + 1)
      001287 F5 47            [12] 4919 	mov	(_RUDDER_PW + 1),a
                           00119E  4920 	C$lab6.c$599$1$204 ==.
                                   4921 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:599: RTHRUST_PW = PW_NUET_THRUST   + (int) -1* (((int) kp* (int) error) - (int) kd * ((int)old_error -(int) error));
      001289 C3               [12] 4922 	clr	c
      00128A E4               [12] 4923 	clr	a
      00128B 9C               [12] 4924 	subb	a,r4
      00128C FC               [12] 4925 	mov	r4,a
      00128D E4               [12] 4926 	clr	a
      00128E 9D               [12] 4927 	subb	a,r5
      00128F FD               [12] 4928 	mov	r5,a
      001290 EC               [12] 4929 	mov	a,r4
      001291 25 36            [12] 4930 	add	a,_PW_NUET_THRUST
      001293 F5 4E            [12] 4931 	mov	_RTHRUST_PW,a
      001295 ED               [12] 4932 	mov	a,r5
      001296 35 37            [12] 4933 	addc	a,(_PW_NUET_THRUST + 1)
      001298 F5 4F            [12] 4934 	mov	(_RTHRUST_PW + 1),a
                           0011AF  4935 	C$lab6.c$601$1$204 ==.
                                   4936 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:601: LTHRUST_PW = PW_NUET_THRUST   + (int) (((int) kp* (int) error) - (int) kd * ((int)old_error -(int) error));
      00129A EA               [12] 4937 	mov	a,r2
      00129B 25 36            [12] 4938 	add	a,_PW_NUET_THRUST
      00129D F5 50            [12] 4939 	mov	_LTHRUST_PW,a
      00129F EB               [12] 4940 	mov	a,r3
      0012A0 35 37            [12] 4941 	addc	a,(_PW_NUET_THRUST + 1)
      0012A2 F5 51            [12] 4942 	mov	(_LTHRUST_PW + 1),a
                           0011B9  4943 	C$lab6.c$603$1$204 ==.
                                   4944 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:603: old_error=error;
      0012A4 90 00 69         [24] 4945 	mov	dptr,#_old_error
      0012A7 EE               [12] 4946 	mov	a,r6
      0012A8 F0               [24] 4947 	movx	@dptr,a
      0012A9 EF               [12] 4948 	mov	a,r7
      0012AA A3               [24] 4949 	inc	dptr
      0012AB F0               [24] 4950 	movx	@dptr,a
                           0011C1  4951 	C$lab6.c$606$1$204 ==.
                                   4952 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:606: if (RUDDER_PW >= PW_RIGHT_RUDDER)
      0012AC C3               [12] 4953 	clr	c
      0012AD E5 46            [12] 4954 	mov	a,_RUDDER_PW
      0012AF 95 3E            [12] 4955 	subb	a,_PW_RIGHT_RUDDER
      0012B1 E5 47            [12] 4956 	mov	a,(_RUDDER_PW + 1)
      0012B3 95 3F            [12] 4957 	subb	a,(_PW_RIGHT_RUDDER + 1)
      0012B5 40 08            [24] 4958 	jc	00111$
                           0011CC  4959 	C$lab6.c$608$2$208 ==.
                                   4960 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:608: RUDDER_PW = PW_RIGHT_RUDDER;
      0012B7 85 3E 46         [24] 4961 	mov	_RUDDER_PW,_PW_RIGHT_RUDDER
      0012BA 85 3F 47         [24] 4962 	mov	(_RUDDER_PW + 1),(_PW_RIGHT_RUDDER + 1)
      0012BD 80 11            [24] 4963 	sjmp	00112$
      0012BF                       4964 00111$:
                           0011D4  4965 	C$lab6.c$610$1$204 ==.
                                   4966 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:610: else if(RUDDER_PW <= PW_LEFT_RUDDER)
      0012BF C3               [12] 4967 	clr	c
      0012C0 E5 3A            [12] 4968 	mov	a,_PW_LEFT_RUDDER
      0012C2 95 46            [12] 4969 	subb	a,_RUDDER_PW
      0012C4 E5 3B            [12] 4970 	mov	a,(_PW_LEFT_RUDDER + 1)
      0012C6 95 47            [12] 4971 	subb	a,(_RUDDER_PW + 1)
      0012C8 40 06            [24] 4972 	jc	00112$
                           0011DF  4973 	C$lab6.c$612$2$209 ==.
                                   4974 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:612: RUDDER_PW = PW_LEFT_RUDDER;
      0012CA 85 3A 46         [24] 4975 	mov	_RUDDER_PW,_PW_LEFT_RUDDER
      0012CD 85 3B 47         [24] 4976 	mov	(_RUDDER_PW + 1),(_PW_LEFT_RUDDER + 1)
      0012D0                       4977 00112$:
                           0011E5  4978 	C$lab6.c$615$1$204 ==.
                                   4979 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:615: if (RTHRUST_PW >= PW_MAX_THRUST)
      0012D0 C3               [12] 4980 	clr	c
      0012D1 E5 4E            [12] 4981 	mov	a,_RTHRUST_PW
      0012D3 95 38            [12] 4982 	subb	a,_PW_MAX_THRUST
      0012D5 E5 4F            [12] 4983 	mov	a,(_RTHRUST_PW + 1)
      0012D7 95 39            [12] 4984 	subb	a,(_PW_MAX_THRUST + 1)
      0012D9 40 08            [24] 4985 	jc	00116$
                           0011F0  4986 	C$lab6.c$617$2$210 ==.
                                   4987 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:617: RTHRUST_PW = PW_MAX_THRUST;
      0012DB 85 38 4E         [24] 4988 	mov	_RTHRUST_PW,_PW_MAX_THRUST
      0012DE 85 39 4F         [24] 4989 	mov	(_RTHRUST_PW + 1),(_PW_MAX_THRUST + 1)
      0012E1 80 11            [24] 4990 	sjmp	00117$
      0012E3                       4991 00116$:
                           0011F8  4992 	C$lab6.c$619$1$204 ==.
                                   4993 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:619: else if (RTHRUST_PW <=  PW_MIN_THRUST)
      0012E3 C3               [12] 4994 	clr	c
      0012E4 E5 34            [12] 4995 	mov	a,_PW_MIN_THRUST
      0012E6 95 4E            [12] 4996 	subb	a,_RTHRUST_PW
      0012E8 E5 35            [12] 4997 	mov	a,(_PW_MIN_THRUST + 1)
      0012EA 95 4F            [12] 4998 	subb	a,(_RTHRUST_PW + 1)
      0012EC 40 06            [24] 4999 	jc	00117$
                           001203  5000 	C$lab6.c$621$2$211 ==.
                                   5001 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:621: RTHRUST_PW = PW_MIN_THRUST;
      0012EE 85 34 4E         [24] 5002 	mov	_RTHRUST_PW,_PW_MIN_THRUST
      0012F1 85 35 4F         [24] 5003 	mov	(_RTHRUST_PW + 1),(_PW_MIN_THRUST + 1)
      0012F4                       5004 00117$:
                           001209  5005 	C$lab6.c$623$1$204 ==.
                                   5006 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:623: if (LTHRUST_PW >= PW_MAX_THRUST)
      0012F4 C3               [12] 5007 	clr	c
      0012F5 E5 50            [12] 5008 	mov	a,_LTHRUST_PW
      0012F7 95 38            [12] 5009 	subb	a,_PW_MAX_THRUST
      0012F9 E5 51            [12] 5010 	mov	a,(_LTHRUST_PW + 1)
      0012FB 95 39            [12] 5011 	subb	a,(_PW_MAX_THRUST + 1)
      0012FD 40 08            [24] 5012 	jc	00121$
                           001214  5013 	C$lab6.c$625$2$212 ==.
                                   5014 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:625: LTHRUST_PW = PW_MAX_THRUST;
      0012FF 85 38 50         [24] 5015 	mov	_LTHRUST_PW,_PW_MAX_THRUST
      001302 85 39 51         [24] 5016 	mov	(_LTHRUST_PW + 1),(_PW_MAX_THRUST + 1)
      001305 80 11            [24] 5017 	sjmp	00122$
      001307                       5018 00121$:
                           00121C  5019 	C$lab6.c$627$1$204 ==.
                                   5020 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:627: else if(LTHRUST_PW <= PW_MIN_THRUST)
      001307 C3               [12] 5021 	clr	c
      001308 E5 34            [12] 5022 	mov	a,_PW_MIN_THRUST
      00130A 95 50            [12] 5023 	subb	a,_LTHRUST_PW
      00130C E5 35            [12] 5024 	mov	a,(_PW_MIN_THRUST + 1)
      00130E 95 51            [12] 5025 	subb	a,(_LTHRUST_PW + 1)
      001310 40 06            [24] 5026 	jc	00122$
                           001227  5027 	C$lab6.c$629$2$213 ==.
                                   5028 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:629: LTHRUST_PW = PW_MIN_THRUST;
      001312 85 34 50         [24] 5029 	mov	_LTHRUST_PW,_PW_MIN_THRUST
      001315 85 35 51         [24] 5030 	mov	(_LTHRUST_PW + 1),(_PW_MIN_THRUST + 1)
      001318                       5031 00122$:
                           00122D  5032 	C$lab6.c$632$1$204 ==.
                                   5033 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:632: RDR_lo_to_hi = 0xFFFF - RUDDER_PW ;
      001318 74 FF            [12] 5034 	mov	a,#0xFF
      00131A C3               [12] 5035 	clr	c
      00131B 95 46            [12] 5036 	subb	a,_RUDDER_PW
      00131D F5 48            [12] 5037 	mov	_RDR_lo_to_hi,a
      00131F 74 FF            [12] 5038 	mov	a,#0xFF
      001321 95 47            [12] 5039 	subb	a,(_RUDDER_PW + 1)
      001323 F5 49            [12] 5040 	mov	(_RDR_lo_to_hi + 1),a
                           00123A  5041 	C$lab6.c$633$1$204 ==.
                                   5042 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:633: RTRST_lo_to_hi = 0xFFFF - RTHRUST_PW;
      001325 74 FF            [12] 5043 	mov	a,#0xFF
      001327 C3               [12] 5044 	clr	c
      001328 95 4E            [12] 5045 	subb	a,_RTHRUST_PW
      00132A F5 52            [12] 5046 	mov	_RTRST_lo_to_hi,a
      00132C 74 FF            [12] 5047 	mov	a,#0xFF
      00132E 95 4F            [12] 5048 	subb	a,(_RTHRUST_PW + 1)
      001330 F5 53            [12] 5049 	mov	(_RTRST_lo_to_hi + 1),a
                           001247  5050 	C$lab6.c$634$1$204 ==.
                                   5051 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:634: LTRST_lo_to_hi = 0xFFFF - LTHRUST_PW;
      001332 74 FF            [12] 5052 	mov	a,#0xFF
      001334 C3               [12] 5053 	clr	c
      001335 95 50            [12] 5054 	subb	a,_LTHRUST_PW
      001337 F5 54            [12] 5055 	mov	_LTRST_lo_to_hi,a
      001339 74 FF            [12] 5056 	mov	a,#0xFF
      00133B 95 51            [12] 5057 	subb	a,(_LTHRUST_PW + 1)
      00133D F5 55            [12] 5058 	mov	(_LTRST_lo_to_hi + 1),a
                           001254  5059 	C$lab6.c$636$1$204 ==.
                                   5060 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:636: PCA0CP0 = RDR_lo_to_hi;
      00133F 85 48 EA         [24] 5061 	mov	((_PCA0CP0 >> 0) & 0xFF),_RDR_lo_to_hi
      001342 85 49 FA         [24] 5062 	mov	((_PCA0CP0 >> 8) & 0xFF),(_RDR_lo_to_hi + 1)
                           00125A  5063 	C$lab6.c$637$1$204 ==.
                                   5064 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:637: PCA0CP2 = RTRST_lo_to_hi;
      001345 85 52 EC         [24] 5065 	mov	((_PCA0CP2 >> 0) & 0xFF),_RTRST_lo_to_hi
      001348 85 53 FC         [24] 5066 	mov	((_PCA0CP2 >> 8) & 0xFF),(_RTRST_lo_to_hi + 1)
                           001260  5067 	C$lab6.c$638$1$204 ==.
                                   5068 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:638: PCA0CP3 = LTRST_lo_to_hi;
      00134B 85 54 ED         [24] 5069 	mov	((_PCA0CP3 >> 0) & 0xFF),_LTRST_lo_to_hi
      00134E 85 55 FD         [24] 5070 	mov	((_PCA0CP3 >> 8) & 0xFF),(_LTRST_lo_to_hi + 1)
                           001266  5071 	C$lab6.c$639$1$204 ==.
                           001266  5072 	XG$Steering_Servo$0$0 ==.
      001351 22               [24] 5073 	ret
                                   5074 ;------------------------------------------------------------
                                   5075 ;Allocation info for local variables in function 'start'
                                   5076 ;------------------------------------------------------------
                           001267  5077 	G$start$0$0 ==.
                           001267  5078 	C$lab6.c$641$1$204 ==.
                                   5079 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:641: void start(void)            ///WAITS UNTIL '*' IS ENTERED
                                   5080 ;	-----------------------------------------
                                   5081 ;	 function start
                                   5082 ;	-----------------------------------------
      001352                       5083 _start:
                           001267  5084 	C$lab6.c$643$1$215 ==.
                                   5085 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:643: while (read_keypad() != '*') wait();
      001352                       5086 00101$:
      001352 12 02 05         [24] 5087 	lcall	_read_keypad
      001355 AF 82            [24] 5088 	mov	r7,dpl
      001357 BF 2A 02         [24] 5089 	cjne	r7,#0x2A,00112$
      00135A 80 05            [24] 5090 	sjmp	00104$
      00135C                       5091 00112$:
      00135C 12 13 62         [24] 5092 	lcall	_wait
      00135F 80 F1            [24] 5093 	sjmp	00101$
      001361                       5094 00104$:
                           001276  5095 	C$lab6.c$644$1$215 ==.
                           001276  5096 	XG$start$0$0 ==.
      001361 22               [24] 5097 	ret
                                   5098 ;------------------------------------------------------------
                                   5099 ;Allocation info for local variables in function 'wait'
                                   5100 ;------------------------------------------------------------
                                   5101 ;old_count                 Allocated with name '_wait_old_count_1_217'
                                   5102 ;------------------------------------------------------------
                           001277  5103 	G$wait$0$0 ==.
                           001277  5104 	C$lab6.c$648$1$215 ==.
                                   5105 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:648: void wait(void)
                                   5106 ;	-----------------------------------------
                                   5107 ;	 function wait
                                   5108 ;	-----------------------------------------
      001362                       5109 _wait:
                           001277  5110 	C$lab6.c$650$1$217 ==.
                                   5111 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:650: __xdata int old_count = count+1;
      001362 90 00 65         [24] 5112 	mov	dptr,#_wait_old_count_1_217
      001365 74 01            [12] 5113 	mov	a,#0x01
      001367 25 32            [12] 5114 	add	a,_count
      001369 F0               [24] 5115 	movx	@dptr,a
      00136A E4               [12] 5116 	clr	a
      00136B 35 33            [12] 5117 	addc	a,(_count + 1)
      00136D A3               [24] 5118 	inc	dptr
      00136E F0               [24] 5119 	movx	@dptr,a
                           001284  5120 	C$lab6.c$651$1$217 ==.
                                   5121 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:651: while (old_count> count);
      00136F 90 00 65         [24] 5122 	mov	dptr,#_wait_old_count_1_217
      001372 E0               [24] 5123 	movx	a,@dptr
      001373 FE               [12] 5124 	mov	r6,a
      001374 A3               [24] 5125 	inc	dptr
      001375 E0               [24] 5126 	movx	a,@dptr
      001376 FF               [12] 5127 	mov	r7,a
      001377                       5128 00101$:
      001377 C3               [12] 5129 	clr	c
      001378 E5 32            [12] 5130 	mov	a,_count
      00137A 9E               [12] 5131 	subb	a,r6
      00137B E5 33            [12] 5132 	mov	a,(_count + 1)
      00137D 64 80            [12] 5133 	xrl	a,#0x80
      00137F 8F F0            [24] 5134 	mov	b,r7
      001381 63 F0 80         [24] 5135 	xrl	b,#0x80
      001384 95 F0            [12] 5136 	subb	a,b
      001386 40 EF            [24] 5137 	jc	00101$
                           00129D  5138 	C$lab6.c$652$1$217 ==.
                           00129D  5139 	XG$wait$0$0 ==.
      001388 22               [24] 5140 	ret
                                   5141 ;------------------------------------------------------------
                                   5142 ;Allocation info for local variables in function 'Port_Init'
                                   5143 ;------------------------------------------------------------
                           00129E  5144 	G$Port_Init$0$0 ==.
                           00129E  5145 	C$lab6.c$654$1$217 ==.
                                   5146 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:654: void Port_Init(void)
                                   5147 ;	-----------------------------------------
                                   5148 ;	 function Port_Init
                                   5149 ;	-----------------------------------------
      001389                       5150 _Port_Init:
                           00129E  5151 	C$lab6.c$656$1$219 ==.
                                   5152 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:656: P0MDOUT &= ~0x32;
      001389 AF A4            [24] 5153 	mov	r7,_P0MDOUT
      00138B 74 CD            [12] 5154 	mov	a,#0xCD
      00138D 5F               [12] 5155 	anl	a,r7
      00138E F5 A4            [12] 5156 	mov	_P0MDOUT,a
                           0012A5  5157 	C$lab6.c$658$1$219 ==.
                                   5158 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:658: P1MDIN  &= ~0x20;
      001390 AF BD            [24] 5159 	mov	r7,_P1MDIN
      001392 74 DF            [12] 5160 	mov	a,#0xDF
      001394 5F               [12] 5161 	anl	a,r7
      001395 F5 BD            [12] 5162 	mov	_P1MDIN,a
                           0012AC  5163 	C$lab6.c$660$1$219 ==.
                                   5164 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:660: P1MDOUT |= 0x0F;
      001397 43 A5 0F         [24] 5165 	orl	_P1MDOUT,#0x0F
                           0012AF  5166 	C$lab6.c$661$1$219 ==.
                                   5167 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:661: P1MDOUT &= 0x20;
      00139A 53 A5 20         [24] 5168 	anl	_P1MDOUT,#0x20
                           0012B2  5169 	C$lab6.c$663$1$219 ==.
                                   5170 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:663: P1 		 = 0x20;
      00139D 75 90 20         [24] 5171 	mov	_P1,#0x20
                           0012B5  5172 	C$lab6.c$666$1$219 ==.
                           0012B5  5173 	XG$Port_Init$0$0 ==.
      0013A0 22               [24] 5174 	ret
                                   5175 ;------------------------------------------------------------
                                   5176 ;Allocation info for local variables in function 'PCA_Init'
                                   5177 ;------------------------------------------------------------
                           0012B6  5178 	G$PCA_Init$0$0 ==.
                           0012B6  5179 	C$lab6.c$668$1$219 ==.
                                   5180 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:668: void PCA_Init(void)
                                   5181 ;	-----------------------------------------
                                   5182 ;	 function PCA_Init
                                   5183 ;	-----------------------------------------
      0013A1                       5184 _PCA_Init:
                           0012B6  5185 	C$lab6.c$670$1$221 ==.
                                   5186 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:670: PCA0MD   = 0x81;
      0013A1 75 D9 81         [24] 5187 	mov	_PCA0MD,#0x81
                           0012B9  5188 	C$lab6.c$671$1$221 ==.
                                   5189 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:671: PCA0CPM0 = 0xC2;    //CCM0 in 16-bit compare mode FOR STEERING
      0013A4 75 DA C2         [24] 5190 	mov	_PCA0CPM0,#0xC2
                           0012BC  5191 	C$lab6.c$672$1$221 ==.
                                   5192 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:672: PCA0CPM1 = 0xC2;
      0013A7 75 DB C2         [24] 5193 	mov	_PCA0CPM1,#0xC2
                           0012BF  5194 	C$lab6.c$673$1$221 ==.
                                   5195 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:673: PCA0CPM2 = 0xC2;    //CCM2 in 16-bit compare mode FOR MOTOR
      0013AA 75 DC C2         [24] 5196 	mov	_PCA0CPM2,#0xC2
                           0012C2  5197 	C$lab6.c$674$1$221 ==.
                                   5198 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:674: PCA0CPM3 = 0XC2;
      0013AD 75 DD C2         [24] 5199 	mov	_PCA0CPM3,#0xC2
                           0012C5  5200 	C$lab6.c$675$1$221 ==.
                                   5201 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:675: PCA0CN 	 = 0x40;    //Enable PCA counter
      0013B0 75 D8 40         [24] 5202 	mov	_PCA0CN,#0x40
                           0012C8  5203 	C$lab6.c$676$1$221 ==.
                                   5204 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:676: EIE1    |= 0x08;    //Enable PCA interrupt
      0013B3 43 E6 08         [24] 5205 	orl	_EIE1,#0x08
                           0012CB  5206 	C$lab6.c$677$1$221 ==.
                                   5207 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:677: EA       = 1   ;    //Enable global interrupts
      0013B6 D2 AF            [12] 5208 	setb	_EA
                           0012CD  5209 	C$lab6.c$678$1$221 ==.
                           0012CD  5210 	XG$PCA_Init$0$0 ==.
      0013B8 22               [24] 5211 	ret
                                   5212 ;------------------------------------------------------------
                                   5213 ;Allocation info for local variables in function 'XBR0_Init'
                                   5214 ;------------------------------------------------------------
                           0012CE  5215 	G$XBR0_Init$0$0 ==.
                           0012CE  5216 	C$lab6.c$681$1$221 ==.
                                   5217 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:681: void XBR0_Init(void)
                                   5218 ;	-----------------------------------------
                                   5219 ;	 function XBR0_Init
                                   5220 ;	-----------------------------------------
      0013B9                       5221 _XBR0_Init:
                           0012CE  5222 	C$lab6.c$683$1$223 ==.
                                   5223 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:683: XBR0 = 0x27;
      0013B9 75 E1 27         [24] 5224 	mov	_XBR0,#0x27
                           0012D1  5225 	C$lab6.c$684$1$223 ==.
                           0012D1  5226 	XG$XBR0_Init$0$0 ==.
      0013BC 22               [24] 5227 	ret
                                   5228 ;------------------------------------------------------------
                                   5229 ;Allocation info for local variables in function 'SMB_Init'
                                   5230 ;------------------------------------------------------------
                           0012D2  5231 	G$SMB_Init$0$0 ==.
                           0012D2  5232 	C$lab6.c$686$1$223 ==.
                                   5233 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:686: void SMB_Init(void)
                                   5234 ;	-----------------------------------------
                                   5235 ;	 function SMB_Init
                                   5236 ;	-----------------------------------------
      0013BD                       5237 _SMB_Init:
                           0012D2  5238 	C$lab6.c$688$1$225 ==.
                                   5239 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:688: SMB0CR =0x93;
      0013BD 75 CF 93         [24] 5240 	mov	_SMB0CR,#0x93
                           0012D5  5241 	C$lab6.c$689$1$225 ==.
                                   5242 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:689: ENSMB =1;
      0013C0 D2 C6            [12] 5243 	setb	_ENSMB
                           0012D7  5244 	C$lab6.c$690$1$225 ==.
                           0012D7  5245 	XG$SMB_Init$0$0 ==.
      0013C2 22               [24] 5246 	ret
                                   5247 ;------------------------------------------------------------
                                   5248 ;Allocation info for local variables in function 'ADC_Init'
                                   5249 ;------------------------------------------------------------
                           0012D8  5250 	G$ADC_Init$0$0 ==.
                           0012D8  5251 	C$lab6.c$692$1$225 ==.
                                   5252 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:692: void ADC_Init(void)								/////SETS ADC 
                                   5253 ;	-----------------------------------------
                                   5254 ;	 function ADC_Init
                                   5255 ;	-----------------------------------------
      0013C3                       5256 _ADC_Init:
                           0012D8  5257 	C$lab6.c$694$1$227 ==.
                                   5258 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:694: REF0CN = 0x03;
      0013C3 75 D1 03         [24] 5259 	mov	_REF0CN,#0x03
                           0012DB  5260 	C$lab6.c$695$1$227 ==.
                                   5261 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:695: ADC1CN = 0x80;
      0013C6 75 AA 80         [24] 5262 	mov	_ADC1CN,#0x80
                           0012DE  5263 	C$lab6.c$696$1$227 ==.
                                   5264 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:696: ADC1CF |= 0x01;
      0013C9 43 AB 01         [24] 5265 	orl	_ADC1CF,#0x01
                           0012E1  5266 	C$lab6.c$697$1$227 ==.
                           0012E1  5267 	XG$ADC_Init$0$0 ==.
      0013CC 22               [24] 5268 	ret
                                   5269 ;------------------------------------------------------------
                                   5270 ;Allocation info for local variables in function 'PCA_ISR'
                                   5271 ;------------------------------------------------------------
                           0012E2  5272 	G$PCA_ISR$0$0 ==.
                           0012E2  5273 	C$lab6.c$699$1$227 ==.
                                   5274 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:699: void PCA_ISR ( void ) __interrupt 9
                                   5275 ;	-----------------------------------------
                                   5276 ;	 function PCA_ISR
                                   5277 ;	-----------------------------------------
      0013CD                       5278 _PCA_ISR:
      0013CD C0 E0            [24] 5279 	push	acc
      0013CF C0 D0            [24] 5280 	push	psw
                           0012E6  5281 	C$lab6.c$702$1$229 ==.
                                   5282 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:702: if (CF)
                           0012E6  5283 	C$lab6.c$704$2$230 ==.
                                   5284 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:704: CF =0;
      0013D1 10 DF 02         [24] 5285 	jbc	_CF,00108$
      0013D4 80 0E            [24] 5286 	sjmp	00102$
      0013D6                       5287 00108$:
                           0012EB  5288 	C$lab6.c$705$2$230 ==.
                                   5289 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:705: PCA0 = PCA_START;
      0013D6 75 E9 00         [24] 5290 	mov	((_PCA0 >> 0) & 0xFF),#0x00
      0013D9 75 F9 70         [24] 5291 	mov	((_PCA0 >> 8) & 0xFF),#0x70
                           0012F1  5292 	C$lab6.c$706$2$230 ==.
                                   5293 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:706: count++;
      0013DC 05 32            [12] 5294 	inc	_count
      0013DE E4               [12] 5295 	clr	a
      0013DF B5 32 02         [24] 5296 	cjne	a,_count,00109$
      0013E2 05 33            [12] 5297 	inc	(_count + 1)
      0013E4                       5298 00109$:
      0013E4                       5299 00102$:
                           0012F9  5300 	C$lab6.c$711$1$229 ==.
                                   5301 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:711: PCA0CN &= 0xC0;
      0013E4 53 D8 C0         [24] 5302 	anl	_PCA0CN,#0xC0
      0013E7 D0 D0            [24] 5303 	pop	psw
      0013E9 D0 E0            [24] 5304 	pop	acc
                           001300  5305 	C$lab6.c$712$1$229 ==.
                           001300  5306 	XG$PCA_ISR$0$0 ==.
      0013EB 32               [24] 5307 	reti
                                   5308 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   5309 ;	eliminated unneeded push/pop dpl
                                   5310 ;	eliminated unneeded push/pop dph
                                   5311 ;	eliminated unneeded push/pop b
                                   5312 	.area CSEG    (CODE)
                                   5313 	.area CONST   (CODE)
                           000000  5314 Flab6$__str_0$0$0 == .
      001BDA                       5315 ___str_0:
      001BDA 0A                    5316 	.db 0x0A
      001BDB 54 79 70 65 20 64 69  5317 	.ascii "Type digits; end w/#"
             67 69 74 73 3B 20 65
             6E 64 20 77 2F 23
      001BEF 00                    5318 	.db 0x00
                           000016  5319 Flab6$__str_1$0$0 == .
      001BF0                       5320 ___str_1:
      001BF0 20 20 20 20 20 25 63  5321 	.ascii "     %c%c%c%c%c"
             25 63 25 63 25 63 25
             63
      001BFF 00                    5322 	.db 0x00
                           000026  5323 Flab6$__str_2$0$0 == .
      001C00                       5324 ___str_2:
      001C00 25 63                 5325 	.ascii "%c"
      001C02 00                    5326 	.db 0x00
                           000029  5327 Flab6$__str_3$0$0 == .
      001C03                       5328 ___str_3:
      001C03 50 6C 65 61 73 65 20  5329 	.ascii "Please enter a kp value:"
             65 6E 74 65 72 20 61
             20 6B 70 20 76 61 6C
             75 65 3A
      001C1B 0A                    5330 	.db 0x0A
      001C1C 20                    5331 	.ascii " "
      001C1D 00                    5332 	.db 0x00
                           000044  5333 Flab6$__str_4$0$0 == .
      001C1E                       5334 ___str_4:
      001C1E 50 6C 65 61 73 65 20  5335 	.ascii "Please enter a kd value:"
             65 6E 74 65 72 20 61
             20 6B 64 20 76 61 6C
             75 65 3A
      001C36 0A                    5336 	.db 0x0A
      001C37 20                    5337 	.ascii " "
      001C38 00                    5338 	.db 0x00
                           00005F  5339 Flab6$__str_5$0$0 == .
      001C39                       5340 ___str_5:
      001C39 0D                    5341 	.db 0x0D
      001C3A 0A                    5342 	.db 0x0A
      001C3B 25 75                 5343 	.ascii "%u"
      001C3D 00                    5344 	.db 0x00
                           000064  5345 Flab6$__str_6$0$0 == .
      001C3E                       5346 ___str_6:
      001C3E 25 64                 5347 	.ascii "%d"
      001C40 00                    5348 	.db 0x00
                           000067  5349 Flab6$__str_7$0$0 == .
      001C41                       5350 ___str_7:
      001C41 43 61 6C 69 62 72 61  5351 	.ascii "Calibration:"
             74 69 6F 6E 3A
      001C4D 0A                    5352 	.db 0x0A
      001C4E 48 65 6C 6C 6F 20 77  5353 	.ascii "Hello world!"
             6F 72 6C 64 21
      001C5A 0A                    5354 	.db 0x0A
      001C5B 30 31 32 5F 33 34 35  5355 	.ascii "012_345_678:"
             5F 36 37 38 3A
      001C67 0A                    5356 	.db 0x0A
      001C68 61 62 63 20 64 65 66  5357 	.ascii "abc def ghij"
             20 67 68 69 6A
      001C74 00                    5358 	.db 0x00
                           00009B  5359 Flab6$__str_8$0$0 == .
      001C75                       5360 ___str_8:
      001C75 0D                    5361 	.db 0x0D
      001C76 0A                    5362 	.db 0x0A
      001C77 54 68 65 20 64 65 73  5363 	.ascii "The desired direction is: %d"
             69 72 65 64 20 64 69
             72 65 63 74 69 6F 6E
             20 69 73 3A 20 25 64
      001C93 00                    5364 	.db 0x00
                           0000BA  5365 Flab6$__str_9$0$0 == .
      001C94                       5366 ___str_9:
      001C94 52 75 64 64 65 72 20  5367 	.ascii "Rudder Calibration"
             43 61 6C 69 62 72 61
             74 69 6F 6E
      001CA6 00                    5368 	.db 0x00
                           0000CD  5369 Flab6$__str_10$0$0 == .
      001CA7                       5370 ___str_10:
      001CA7 67 6F 20 6C 65 66 74  5371 	.ascii "go left: press 1"
             3A 20 70 72 65 73 73
             20 31
      001CB7 0A                    5372 	.db 0x0A
      001CB8 20 67 6F 20 72 69 67  5373 	.ascii " go right: press 2"
             68 74 3A 20 70 72 65
             73 73 20 32
      001CCA 0A                    5374 	.db 0x0A
      001CCB 50 72 65 73 73 20 2A  5375 	.ascii "Press * for next screen"
             20 66 6F 72 20 6E 65
             78 74 20 73 63 72 65
             65 6E
      001CE2 00                    5376 	.db 0x00
                           000109  5377 Flab6$__str_11$0$0 == .
      001CE3                       5378 ___str_11:
      001CE3 0A                    5379 	.db 0x0A
      001CE4 20 63 6F 6E 66 69 72  5380 	.ascii " confirm: press 3"
             6D 3A 20 70 72 65 73
             73 20 33
      001CF5 0A                    5381 	.db 0x0A
      001CF6 20 70 72 65 73 73 20  5382 	.ascii " press * to begin"
             2A 20 74 6F 20 62 65
             67 69 6E
      001D07 00                    5383 	.db 0x00
                           00012E  5384 Flab6$__str_12$0$0 == .
      001D08                       5385 ___str_12:
      001D08 0D                    5386 	.db 0x0D
      001D09 0A                    5387 	.db 0x0A
      001D0A 20 25 75              5388 	.ascii " %u"
      001D0D 00                    5389 	.db 0x00
                           000134  5390 Flab6$__str_13$0$0 == .
      001D0E                       5391 ___str_13:
      001D0E 4E 6F 77 20 63 61 6C  5392 	.ascii "Now calibrating Min_PW"
             69 62 72 61 74 69 6E
             67 20 4D 69 6E 5F 50
             57
      001D24 0A                    5393 	.db 0x0A
      001D25 00                    5394 	.db 0x00
                           00014C  5395 Flab6$__str_14$0$0 == .
      001D26                       5396 ___str_14:
      001D26 4E 6F 77 20 63 61 6C  5397 	.ascii "Now calibrating Cen_PW"
             69 62 72 61 74 69 6E
             67 20 43 65 6E 5F 50
             57
      001D3C 00                    5398 	.db 0x00
                           000163  5399 Flab6$__str_15$0$0 == .
      001D3D                       5400 ___str_15:
      001D3D 4E 6F 77 20 63 61 6C  5401 	.ascii "Now calibrating Max_PW"
             69 62 72 61 74 69 6E
             67 20 4D 61 78 5F 50
             57
      001D53 00                    5402 	.db 0x00
                           00017A  5403 Flab6$__str_16$0$0 == .
      001D54                       5404 ___str_16:
      001D54 41 6E 67 6C 65 20 43  5405 	.ascii "Angle Calibration"
             61 6C 69 62 72 61 74
             69 6F 6E
      001D65 00                    5406 	.db 0x00
                           00018C  5407 Flab6$__str_17$0$0 == .
      001D66                       5408 ___str_17:
      001D66 4E 6F 77 20 63 61 6C  5409 	.ascii "Now calibrating Min_PW UP ANGLE"
             69 62 72 61 74 69 6E
             67 20 4D 69 6E 5F 50
             57 20 55 50 20 41 4E
             47 4C 45
      001D85 00                    5410 	.db 0x00
                           0001AC  5411 Flab6$__str_18$0$0 == .
      001D86                       5412 ___str_18:
      001D86 4E 6F 77 20 63 61 6C  5413 	.ascii "Now calibrating Max_PW DOWN ANGLE"
             69 62 72 61 74 69 6E
             67 20 4D 61 78 5F 50
             57 20 44 4F 57 4E 20
             41 4E 47 4C 45
      001DA7 00                    5414 	.db 0x00
                           0001CE  5415 Flab6$__str_19$0$0 == .
      001DA8                       5416 ___str_19:
      001DA8 54 68 72 75 73 74 20  5417 	.ascii "Thrust Calibration"
             43 61 6C 69 62 72 61
             74 69 6F 6E
      001DBA 00                    5418 	.db 0x00
                           0001E1  5419 Flab6$__str_20$0$0 == .
      001DBB                       5420 ___str_20:
      001DBB 4E 6F 77 20 63 61 6C  5421 	.ascii "Now calibrating Min_PW"
             69 62 72 61 74 69 6E
             67 20 4D 69 6E 5F 50
             57
      001DD1 00                    5422 	.db 0x00
                                   5423 	.area XINIT   (CODE)
                           000000  5424 Flab6$__xinit_error$0$0 == .
      001DDD                       5425 __xinit__error:
      001DDD 00 00                 5426 	.byte #0x00,#0x00	;  0
                           000002  5427 Flab6$__xinit_old_error$0$0 == .
      001DDF                       5428 __xinit__old_error:
      001DDF 00 00                 5429 	.byte #0x00,#0x00	;  0
                                   5430 	.area CABS    (ABS,CODE)
