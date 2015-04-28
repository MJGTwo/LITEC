                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (Apr  5 2014) (MINGW32)
                                      4 ; This file was generated Tue Apr 28 10:48:55 2015
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
                           000041  1067 Llab6.ReadCompass$Data$1$141==.
      000063                       1068 _ReadCompass_Data_1_141:
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
                           000054  1117 Llab6.Rudder_cal$value$1$143==.
      000055                       1118 _Rudder_cal_value_1_143:
      000055                       1119 	.ds 2
                           000056  1120 Llab6.Rudder_cal$times$1$143==.
      000057                       1121 _Rudder_cal_times_1_143:
      000057                       1122 	.ds 2
                           000058  1123 Llab6.Angle_cal$value$1$162==.
      000059                       1124 _Angle_cal_value_1_162:
      000059                       1125 	.ds 2
                           00005A  1126 Llab6.Angle_cal$times$1$162==.
      00005B                       1127 _Angle_cal_times_1_162:
      00005B                       1128 	.ds 2
                           00005C  1129 Llab6.Thrust_cal$value$1$181==.
      00005D                       1130 _Thrust_cal_value_1_181:
      00005D                       1131 	.ds 2
                           00005E  1132 Llab6.Thrust_cal$times$1$181==.
      00005F                       1133 _Thrust_cal_times_1_181:
      00005F                       1134 	.ds 2
                           000060  1135 Llab6.wait$old_count$1$216==.
      000061                       1136 _wait_old_count_1_216:
      000061                       1137 	.ds 2
                                   1138 ;--------------------------------------------------------
                                   1139 ; absolute external ram data
                                   1140 ;--------------------------------------------------------
                                   1141 	.area XABS    (ABS,XDATA)
                                   1142 ;--------------------------------------------------------
                                   1143 ; external initialized ram data
                                   1144 ;--------------------------------------------------------
                                   1145 	.area XISEG   (XDATA)
                           000000  1146 G$error$0$0==.
      000063                       1147 _error::
      000063                       1148 	.ds 2
                           000002  1149 G$old_error$0$0==.
      000065                       1150 _old_error::
      000065                       1151 	.ds 2
                                   1152 	.area HOME    (CODE)
                                   1153 	.area GSINIT0 (CODE)
                                   1154 	.area GSINIT1 (CODE)
                                   1155 	.area GSINIT2 (CODE)
                                   1156 	.area GSINIT3 (CODE)
                                   1157 	.area GSINIT4 (CODE)
                                   1158 	.area GSINIT5 (CODE)
                                   1159 	.area GSINIT  (CODE)
                                   1160 	.area GSFINAL (CODE)
                                   1161 	.area CSEG    (CODE)
                                   1162 ;--------------------------------------------------------
                                   1163 ; interrupt vector 
                                   1164 ;--------------------------------------------------------
                                   1165 	.area HOME    (CODE)
      000000                       1166 __interrupt_vect:
      000000 02 00 51         [24] 1167 	ljmp	__sdcc_gsinit_startup
      000003 32               [24] 1168 	reti
      000004                       1169 	.ds	7
      00000B 32               [24] 1170 	reti
      00000C                       1171 	.ds	7
      000013 32               [24] 1172 	reti
      000014                       1173 	.ds	7
      00001B 32               [24] 1174 	reti
      00001C                       1175 	.ds	7
      000023 32               [24] 1176 	reti
      000024                       1177 	.ds	7
      00002B 32               [24] 1178 	reti
      00002C                       1179 	.ds	7
      000033 32               [24] 1180 	reti
      000034                       1181 	.ds	7
      00003B 32               [24] 1182 	reti
      00003C                       1183 	.ds	7
      000043 32               [24] 1184 	reti
      000044                       1185 	.ds	7
      00004B 02 13 83         [24] 1186 	ljmp	_PCA_ISR
                                   1187 ;--------------------------------------------------------
                                   1188 ; global & static initialisations
                                   1189 ;--------------------------------------------------------
                                   1190 	.area HOME    (CODE)
                                   1191 	.area GSINIT  (CODE)
                                   1192 	.area GSFINAL (CODE)
                                   1193 	.area GSINIT  (CODE)
                                   1194 	.globl __sdcc_gsinit_startup
                                   1195 	.globl __sdcc_program_startup
                                   1196 	.globl __start__stack
                                   1197 	.globl __mcs51_genXINIT
                                   1198 	.globl __mcs51_genXRAMCLEAR
                                   1199 	.globl __mcs51_genRAMCLEAR
                           000000  1200 	C$lab6.c$45$1$228 ==.
                                   1201 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:45: int count=0;
      0000AA E4               [12] 1202 	clr	a
      0000AB F5 32            [12] 1203 	mov	_count,a
      0000AD F5 33            [12] 1204 	mov	(_count + 1),a
                           000005  1205 	C$lab6.c$46$1$228 ==.
                                   1206 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:46: unsigned int PW_MIN_THRUST = 2000;
      0000AF 75 34 D0         [24] 1207 	mov	_PW_MIN_THRUST,#0xD0
      0000B2 75 35 07         [24] 1208 	mov	(_PW_MIN_THRUST + 1),#0x07
                           00000B  1209 	C$lab6.c$47$1$228 ==.
                                   1210 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:47: unsigned int PW_NUET_THRUST = 2750;
      0000B5 75 36 BE         [24] 1211 	mov	_PW_NUET_THRUST,#0xBE
      0000B8 75 37 0A         [24] 1212 	mov	(_PW_NUET_THRUST + 1),#0x0A
                           000011  1213 	C$lab6.c$48$1$228 ==.
                                   1214 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:48: unsigned int PW_MAX_THRUST = 3500;
      0000BB 75 38 AC         [24] 1215 	mov	_PW_MAX_THRUST,#0xAC
      0000BE 75 39 0D         [24] 1216 	mov	(_PW_MAX_THRUST + 1),#0x0D
                           000017  1217 	C$lab6.c$50$1$228 ==.
                                   1218 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:50: unsigned int PW_LEFT_RUDDER = 2000;
      0000C1 75 3A D0         [24] 1219 	mov	_PW_LEFT_RUDDER,#0xD0
      0000C4 75 3B 07         [24] 1220 	mov	(_PW_LEFT_RUDDER + 1),#0x07
                           00001D  1221 	C$lab6.c$51$1$228 ==.
                                   1222 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:51: unsigned int PW_CENTER_RUDDER = 2750;
      0000C7 75 3C BE         [24] 1223 	mov	_PW_CENTER_RUDDER,#0xBE
      0000CA 75 3D 0A         [24] 1224 	mov	(_PW_CENTER_RUDDER + 1),#0x0A
                           000023  1225 	C$lab6.c$52$1$228 ==.
                                   1226 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:52: unsigned int PW_RIGHT_RUDDER = 3500;
      0000CD 75 3E AC         [24] 1227 	mov	_PW_RIGHT_RUDDER,#0xAC
      0000D0 75 3F 0D         [24] 1228 	mov	(_PW_RIGHT_RUDDER + 1),#0x0D
                           000029  1229 	C$lab6.c$54$1$228 ==.
                                   1230 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:54: unsigned int PW_UP_ANGLE = 2880;
      0000D3 75 40 40         [24] 1231 	mov	_PW_UP_ANGLE,#0x40
      0000D6 75 41 0B         [24] 1232 	mov	(_PW_UP_ANGLE + 1),#0x0B
                           00002F  1233 	C$lab6.c$55$1$228 ==.
                                   1234 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:55: unsigned int PW_CENTER_ANGLE = 3530;
      0000D9 75 42 CA         [24] 1235 	mov	_PW_CENTER_ANGLE,#0xCA
      0000DC 75 43 0D         [24] 1236 	mov	(_PW_CENTER_ANGLE + 1),#0x0D
                           000035  1237 	C$lab6.c$56$1$228 ==.
                                   1238 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:56: unsigned int PW_DOWN_ANGLE = 4180;
      0000DF 75 44 54         [24] 1239 	mov	_PW_DOWN_ANGLE,#0x54
      0000E2 75 45 10         [24] 1240 	mov	(_PW_DOWN_ANGLE + 1),#0x10
                           00003B  1241 	C$lab6.c$75$1$228 ==.
                                   1242 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:75: unsigned char r_addr = 0xE0;
      0000E5 75 5A E0         [24] 1243 	mov	_r_addr,#0xE0
                                   1244 	.area GSFINAL (CODE)
      0000E8 02 00 4E         [24] 1245 	ljmp	__sdcc_program_startup
                                   1246 ;--------------------------------------------------------
                                   1247 ; Home
                                   1248 ;--------------------------------------------------------
                                   1249 	.area HOME    (CODE)
                                   1250 	.area HOME    (CODE)
      00004E                       1251 __sdcc_program_startup:
      00004E 02 05 C1         [24] 1252 	ljmp	_main
                                   1253 ;	return from main will return to caller
                                   1254 ;--------------------------------------------------------
                                   1255 ; code
                                   1256 ;--------------------------------------------------------
                                   1257 	.area CSEG    (CODE)
                                   1258 ;------------------------------------------------------------
                                   1259 ;Allocation info for local variables in function 'SYSCLK_Init'
                                   1260 ;------------------------------------------------------------
                                   1261 ;i                         Allocated to registers 
                                   1262 ;------------------------------------------------------------
                           000000  1263 	G$SYSCLK_Init$0$0 ==.
                           000000  1264 	C$c8051_SDCC.h$42$0$0 ==.
                                   1265 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:42: void SYSCLK_Init(void)
                                   1266 ;	-----------------------------------------
                                   1267 ;	 function SYSCLK_Init
                                   1268 ;	-----------------------------------------
      0000EB                       1269 _SYSCLK_Init:
                           000007  1270 	ar7 = 0x07
                           000006  1271 	ar6 = 0x06
                           000005  1272 	ar5 = 0x05
                           000004  1273 	ar4 = 0x04
                           000003  1274 	ar3 = 0x03
                           000002  1275 	ar2 = 0x02
                           000001  1276 	ar1 = 0x01
                           000000  1277 	ar0 = 0x00
                           000000  1278 	C$c8051_SDCC.h$46$1$31 ==.
                                   1279 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:46: OSCXCN = 0x67;                      // start external oscillator with
      0000EB 75 B1 67         [24] 1280 	mov	_OSCXCN,#0x67
                           000003  1281 	C$c8051_SDCC.h$49$1$31 ==.
                                   1282 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:49: for (i=0; i < 256; i++);            // wait for oscillator to start
      0000EE 7E 00            [12] 1283 	mov	r6,#0x00
      0000F0 7F 01            [12] 1284 	mov	r7,#0x01
      0000F2                       1285 00107$:
      0000F2 1E               [12] 1286 	dec	r6
      0000F3 BE FF 01         [24] 1287 	cjne	r6,#0xFF,00121$
      0000F6 1F               [12] 1288 	dec	r7
      0000F7                       1289 00121$:
      0000F7 EE               [12] 1290 	mov	a,r6
      0000F8 4F               [12] 1291 	orl	a,r7
      0000F9 70 F7            [24] 1292 	jnz	00107$
                           000010  1293 	C$c8051_SDCC.h$51$1$31 ==.
                                   1294 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:51: while (!(OSCXCN & 0x80));           // Wait for crystal osc. to settle
      0000FB                       1295 00102$:
      0000FB E5 B1            [12] 1296 	mov	a,_OSCXCN
      0000FD 30 E7 FB         [24] 1297 	jnb	acc.7,00102$
                           000015  1298 	C$c8051_SDCC.h$53$1$31 ==.
                                   1299 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:53: OSCICN = 0x88;                      // select external oscillator as SYSCLK
      000100 75 B2 88         [24] 1300 	mov	_OSCICN,#0x88
                           000018  1301 	C$c8051_SDCC.h$56$1$31 ==.
                           000018  1302 	XG$SYSCLK_Init$0$0 ==.
      000103 22               [24] 1303 	ret
                                   1304 ;------------------------------------------------------------
                                   1305 ;Allocation info for local variables in function 'UART0_Init'
                                   1306 ;------------------------------------------------------------
                           000019  1307 	G$UART0_Init$0$0 ==.
                           000019  1308 	C$c8051_SDCC.h$64$1$31 ==.
                                   1309 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:64: void UART0_Init(void)
                                   1310 ;	-----------------------------------------
                                   1311 ;	 function UART0_Init
                                   1312 ;	-----------------------------------------
      000104                       1313 _UART0_Init:
                           000019  1314 	C$c8051_SDCC.h$66$1$33 ==.
                                   1315 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:66: SCON0  = 0x50;                      // SCON0: mode 1, 8-bit UART, enable RX
      000104 75 98 50         [24] 1316 	mov	_SCON0,#0x50
                           00001C  1317 	C$c8051_SDCC.h$67$1$33 ==.
                                   1318 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:67: TMOD   = 0x20;                      // TMOD: timer 1, mode 2, 8-bit reload
      000107 75 89 20         [24] 1319 	mov	_TMOD,#0x20
                           00001F  1320 	C$c8051_SDCC.h$68$1$33 ==.
                                   1321 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:68: TH1    = -(SYSCLK/BAUDRATE/16);     // set Timer1 reload value for baudrate
      00010A 75 8D DC         [24] 1322 	mov	_TH1,#0xDC
                           000022  1323 	C$c8051_SDCC.h$69$1$33 ==.
                                   1324 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:69: TR1    = 1;                         // start Timer1
      00010D D2 8E            [12] 1325 	setb	_TR1
                           000024  1326 	C$c8051_SDCC.h$70$1$33 ==.
                                   1327 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:70: CKCON |= 0x10;                      // Timer1 uses SYSCLK as time base
      00010F 43 8E 10         [24] 1328 	orl	_CKCON,#0x10
                           000027  1329 	C$c8051_SDCC.h$71$1$33 ==.
                                   1330 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:71: PCON  |= 0x80;                      // SMOD00 = 1 (disable baud rate 
      000112 43 87 80         [24] 1331 	orl	_PCON,#0x80
                           00002A  1332 	C$c8051_SDCC.h$73$1$33 ==.
                                   1333 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:73: TI0    = 1;                         // Indicate TX0 ready
      000115 D2 99            [12] 1334 	setb	_TI0
                           00002C  1335 	C$c8051_SDCC.h$74$1$33 ==.
                                   1336 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:74: P0MDOUT |= 0x01;                    // Set TX0 to push/pull
      000117 43 A4 01         [24] 1337 	orl	_P0MDOUT,#0x01
                           00002F  1338 	C$c8051_SDCC.h$75$1$33 ==.
                           00002F  1339 	XG$UART0_Init$0$0 ==.
      00011A 22               [24] 1340 	ret
                                   1341 ;------------------------------------------------------------
                                   1342 ;Allocation info for local variables in function 'Sys_Init'
                                   1343 ;------------------------------------------------------------
                           000030  1344 	G$Sys_Init$0$0 ==.
                           000030  1345 	C$c8051_SDCC.h$83$1$33 ==.
                                   1346 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:83: void Sys_Init(void)
                                   1347 ;	-----------------------------------------
                                   1348 ;	 function Sys_Init
                                   1349 ;	-----------------------------------------
      00011B                       1350 _Sys_Init:
                           000030  1351 	C$c8051_SDCC.h$85$1$35 ==.
                                   1352 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:85: WDTCN = 0xde;			// disable watchdog timer
      00011B 75 FF DE         [24] 1353 	mov	_WDTCN,#0xDE
                           000033  1354 	C$c8051_SDCC.h$86$1$35 ==.
                                   1355 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:86: WDTCN = 0xad;
      00011E 75 FF AD         [24] 1356 	mov	_WDTCN,#0xAD
                           000036  1357 	C$c8051_SDCC.h$88$1$35 ==.
                                   1358 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:88: SYSCLK_Init();			// initialize oscillator
      000121 12 00 EB         [24] 1359 	lcall	_SYSCLK_Init
                           000039  1360 	C$c8051_SDCC.h$89$1$35 ==.
                                   1361 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:89: UART0_Init();			// initialize UART0
      000124 12 01 04         [24] 1362 	lcall	_UART0_Init
                           00003C  1363 	C$c8051_SDCC.h$91$1$35 ==.
                                   1364 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:91: XBR0 |= 0x04;
      000127 43 E1 04         [24] 1365 	orl	_XBR0,#0x04
                           00003F  1366 	C$c8051_SDCC.h$92$1$35 ==.
                                   1367 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:92: XBR2 |= 0x40;                    	// Enable crossbar and weak pull-ups
      00012A 43 E3 40         [24] 1368 	orl	_XBR2,#0x40
                           000042  1369 	C$c8051_SDCC.h$93$1$35 ==.
                           000042  1370 	XG$Sys_Init$0$0 ==.
      00012D 22               [24] 1371 	ret
                                   1372 ;------------------------------------------------------------
                                   1373 ;Allocation info for local variables in function 'putchar'
                                   1374 ;------------------------------------------------------------
                                   1375 ;c                         Allocated to registers r7 
                                   1376 ;------------------------------------------------------------
                           000043  1377 	G$putchar$0$0 ==.
                           000043  1378 	C$c8051_SDCC.h$98$1$35 ==.
                                   1379 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:98: void putchar(char c)
                                   1380 ;	-----------------------------------------
                                   1381 ;	 function putchar
                                   1382 ;	-----------------------------------------
      00012E                       1383 _putchar:
      00012E AF 82            [24] 1384 	mov	r7,dpl
                           000045  1385 	C$c8051_SDCC.h$100$1$37 ==.
                                   1386 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:100: while (!TI0); 
      000130                       1387 00101$:
                           000045  1388 	C$c8051_SDCC.h$101$1$37 ==.
                                   1389 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:101: TI0 = 0;
      000130 10 99 02         [24] 1390 	jbc	_TI0,00112$
      000133 80 FB            [24] 1391 	sjmp	00101$
      000135                       1392 00112$:
                           00004A  1393 	C$c8051_SDCC.h$102$1$37 ==.
                                   1394 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:102: SBUF0 = c;
      000135 8F 99            [24] 1395 	mov	_SBUF0,r7
                           00004C  1396 	C$c8051_SDCC.h$103$1$37 ==.
                           00004C  1397 	XG$putchar$0$0 ==.
      000137 22               [24] 1398 	ret
                                   1399 ;------------------------------------------------------------
                                   1400 ;Allocation info for local variables in function 'getchar'
                                   1401 ;------------------------------------------------------------
                                   1402 ;c                         Allocated to registers 
                                   1403 ;------------------------------------------------------------
                           00004D  1404 	G$getchar$0$0 ==.
                           00004D  1405 	C$c8051_SDCC.h$108$1$37 ==.
                                   1406 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:108: char getchar(void)
                                   1407 ;	-----------------------------------------
                                   1408 ;	 function getchar
                                   1409 ;	-----------------------------------------
      000138                       1410 _getchar:
                           00004D  1411 	C$c8051_SDCC.h$111$1$39 ==.
                                   1412 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:111: while (!RI0);
      000138                       1413 00101$:
                           00004D  1414 	C$c8051_SDCC.h$112$1$39 ==.
                                   1415 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:112: RI0 = 0;
      000138 10 98 02         [24] 1416 	jbc	_RI0,00112$
      00013B 80 FB            [24] 1417 	sjmp	00101$
      00013D                       1418 00112$:
                           000052  1419 	C$c8051_SDCC.h$113$1$39 ==.
                                   1420 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:113: c = SBUF0;
      00013D 85 99 82         [24] 1421 	mov	dpl,_SBUF0
                           000055  1422 	C$c8051_SDCC.h$114$1$39 ==.
                                   1423 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:114: putchar(c);                          // echo to terminal
      000140 12 01 2E         [24] 1424 	lcall	_putchar
                           000058  1425 	C$c8051_SDCC.h$115$1$39 ==.
                                   1426 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:115: return SBUF0;
      000143 85 99 82         [24] 1427 	mov	dpl,_SBUF0
                           00005B  1428 	C$c8051_SDCC.h$116$1$39 ==.
                           00005B  1429 	XG$getchar$0$0 ==.
      000146 22               [24] 1430 	ret
                                   1431 ;------------------------------------------------------------
                                   1432 ;Allocation info for local variables in function 'lcd_print'
                                   1433 ;------------------------------------------------------------
                                   1434 ;fmt                       Allocated to stack - _bp -5
                                   1435 ;len                       Allocated to registers r6 
                                   1436 ;i                         Allocated to registers 
                                   1437 ;ap                        Allocated to registers 
                                   1438 ;text                      Allocated with name '_lcd_print_text_1_73'
                                   1439 ;------------------------------------------------------------
                           00005C  1440 	G$lcd_print$0$0 ==.
                           00005C  1441 	C$i2c.h$81$1$39 ==.
                                   1442 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:81: void lcd_print(const char *fmt, ...)
                                   1443 ;	-----------------------------------------
                                   1444 ;	 function lcd_print
                                   1445 ;	-----------------------------------------
      000147                       1446 _lcd_print:
      000147 C0 0F            [24] 1447 	push	_bp
      000149 85 81 0F         [24] 1448 	mov	_bp,sp
                           000061  1449 	C$i2c.h$87$1$73 ==.
                                   1450 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:87: if ( strlen(fmt) <= 0 ) return;   //If there is no data to print, return
      00014C E5 0F            [12] 1451 	mov	a,_bp
      00014E 24 FB            [12] 1452 	add	a,#0xfb
      000150 F8               [12] 1453 	mov	r0,a
      000151 86 82            [24] 1454 	mov	dpl,@r0
      000153 08               [12] 1455 	inc	r0
      000154 86 83            [24] 1456 	mov	dph,@r0
      000156 08               [12] 1457 	inc	r0
      000157 86 F0            [24] 1458 	mov	b,@r0
      000159 12 1B 22         [24] 1459 	lcall	_strlen
      00015C E5 82            [12] 1460 	mov	a,dpl
      00015E 85 83 F0         [24] 1461 	mov	b,dph
      000161 45 F0            [12] 1462 	orl	a,b
      000163 70 02            [24] 1463 	jnz	00102$
      000165 80 62            [24] 1464 	sjmp	00109$
      000167                       1465 00102$:
                           00007C  1466 	C$i2c.h$89$2$74 ==.
                                   1467 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:89: va_start(ap, fmt);
      000167 E5 0F            [12] 1468 	mov	a,_bp
      000169 24 FB            [12] 1469 	add	a,#0xFB
      00016B FF               [12] 1470 	mov	r7,a
      00016C 8F 0B            [24] 1471 	mov	_vsprintf_PARM_3,r7
                           000083  1472 	C$i2c.h$90$1$73 ==.
                                   1473 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:90: vsprintf(text, fmt, ap);
      00016E E5 0F            [12] 1474 	mov	a,_bp
      000170 24 FB            [12] 1475 	add	a,#0xfb
      000172 F8               [12] 1476 	mov	r0,a
      000173 86 08            [24] 1477 	mov	_vsprintf_PARM_2,@r0
      000175 08               [12] 1478 	inc	r0
      000176 86 09            [24] 1479 	mov	(_vsprintf_PARM_2 + 1),@r0
      000178 08               [12] 1480 	inc	r0
      000179 86 0A            [24] 1481 	mov	(_vsprintf_PARM_2 + 2),@r0
      00017B 90 00 01         [24] 1482 	mov	dptr,#_lcd_print_text_1_73
      00017E 75 F0 00         [24] 1483 	mov	b,#0x00
      000181 12 14 4A         [24] 1484 	lcall	_vsprintf
                           000099  1485 	C$i2c.h$93$1$73 ==.
                                   1486 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:93: len = strlen(text);
      000184 90 00 01         [24] 1487 	mov	dptr,#_lcd_print_text_1_73
      000187 75 F0 00         [24] 1488 	mov	b,#0x00
      00018A 12 1B 22         [24] 1489 	lcall	_strlen
      00018D AE 82            [24] 1490 	mov	r6,dpl
                           0000A4  1491 	C$i2c.h$94$1$73 ==.
                                   1492 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:94: for(i=0; i<len; i++)
      00018F 7F 00            [12] 1493 	mov	r7,#0x00
      000191                       1494 00107$:
      000191 C3               [12] 1495 	clr	c
      000192 EF               [12] 1496 	mov	a,r7
      000193 9E               [12] 1497 	subb	a,r6
      000194 50 1F            [24] 1498 	jnc	00105$
                           0000AB  1499 	C$i2c.h$96$2$76 ==.
                                   1500 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:96: if(text[i] == (unsigned char)'\n') text[i] = 13;
      000196 EF               [12] 1501 	mov	a,r7
      000197 24 01            [12] 1502 	add	a,#_lcd_print_text_1_73
      000199 F5 82            [12] 1503 	mov	dpl,a
      00019B E4               [12] 1504 	clr	a
      00019C 34 00            [12] 1505 	addc	a,#(_lcd_print_text_1_73 >> 8)
      00019E F5 83            [12] 1506 	mov	dph,a
      0001A0 E0               [24] 1507 	movx	a,@dptr
      0001A1 FD               [12] 1508 	mov	r5,a
      0001A2 BD 0A 0D         [24] 1509 	cjne	r5,#0x0A,00108$
      0001A5 EF               [12] 1510 	mov	a,r7
      0001A6 24 01            [12] 1511 	add	a,#_lcd_print_text_1_73
      0001A8 F5 82            [12] 1512 	mov	dpl,a
      0001AA E4               [12] 1513 	clr	a
      0001AB 34 00            [12] 1514 	addc	a,#(_lcd_print_text_1_73 >> 8)
      0001AD F5 83            [12] 1515 	mov	dph,a
      0001AF 74 0D            [12] 1516 	mov	a,#0x0D
      0001B1 F0               [24] 1517 	movx	@dptr,a
      0001B2                       1518 00108$:
                           0000C7  1519 	C$i2c.h$94$1$73 ==.
                                   1520 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:94: for(i=0; i<len; i++)
      0001B2 0F               [12] 1521 	inc	r7
      0001B3 80 DC            [24] 1522 	sjmp	00107$
      0001B5                       1523 00105$:
                           0000CA  1524 	C$i2c.h$99$1$73 ==.
                                   1525 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:99: i2c_write_data(0xC6, 0x00, text, len);
      0001B5 75 28 01         [24] 1526 	mov	_i2c_write_data_PARM_3,#_lcd_print_text_1_73
      0001B8 75 29 00         [24] 1527 	mov	(_i2c_write_data_PARM_3 + 1),#(_lcd_print_text_1_73 >> 8)
      0001BB 75 2A 00         [24] 1528 	mov	(_i2c_write_data_PARM_3 + 2),#0x00
      0001BE 75 27 00         [24] 1529 	mov	_i2c_write_data_PARM_2,#0x00
      0001C1 8E 2B            [24] 1530 	mov	_i2c_write_data_PARM_4,r6
      0001C3 75 82 C6         [24] 1531 	mov	dpl,#0xC6
      0001C6 12 04 5D         [24] 1532 	lcall	_i2c_write_data
      0001C9                       1533 00109$:
      0001C9 D0 0F            [24] 1534 	pop	_bp
                           0000E0  1535 	C$i2c.h$100$1$73 ==.
                           0000E0  1536 	XG$lcd_print$0$0 ==.
      0001CB 22               [24] 1537 	ret
                                   1538 ;------------------------------------------------------------
                                   1539 ;Allocation info for local variables in function 'lcd_clear'
                                   1540 ;------------------------------------------------------------
                                   1541 ;NumBytes                  Allocated with name '_lcd_clear_NumBytes_1_77'
                                   1542 ;Cmd                       Allocated with name '_lcd_clear_Cmd_1_77'
                                   1543 ;------------------------------------------------------------
                           0000E1  1544 	G$lcd_clear$0$0 ==.
                           0000E1  1545 	C$i2c.h$103$1$73 ==.
                                   1546 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:103: void lcd_clear()
                                   1547 ;	-----------------------------------------
                                   1548 ;	 function lcd_clear
                                   1549 ;	-----------------------------------------
      0001CC                       1550 _lcd_clear:
                           0000E1  1551 	C$i2c.h$105$1$73 ==.
                                   1552 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:105: unsigned char NumBytes=0, Cmd[2];
      0001CC 75 22 00         [24] 1553 	mov	_lcd_clear_NumBytes_1_77,#0x00
                           0000E4  1554 	C$i2c.h$107$1$77 ==.
                                   1555 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:107: while(NumBytes < 64) i2c_read_data(0xC6, 0x00, &NumBytes, 1);
      0001CF                       1556 00101$:
      0001CF 74 C0            [12] 1557 	mov	a,#0x100 - 0x40
      0001D1 25 22            [12] 1558 	add	a,_lcd_clear_NumBytes_1_77
      0001D3 40 17            [24] 1559 	jc	00103$
      0001D5 75 2D 22         [24] 1560 	mov	_i2c_read_data_PARM_3,#_lcd_clear_NumBytes_1_77
      0001D8 75 2E 00         [24] 1561 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0001DB 75 2F 40         [24] 1562 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0001DE 75 2C 00         [24] 1563 	mov	_i2c_read_data_PARM_2,#0x00
      0001E1 75 30 01         [24] 1564 	mov	_i2c_read_data_PARM_4,#0x01
      0001E4 75 82 C6         [24] 1565 	mov	dpl,#0xC6
      0001E7 12 04 D3         [24] 1566 	lcall	_i2c_read_data
      0001EA 80 E3            [24] 1567 	sjmp	00101$
      0001EC                       1568 00103$:
                           000101  1569 	C$i2c.h$109$1$77 ==.
                                   1570 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:109: Cmd[0] = 12;
      0001EC 75 23 0C         [24] 1571 	mov	_lcd_clear_Cmd_1_77,#0x0C
                           000104  1572 	C$i2c.h$110$1$77 ==.
                                   1573 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:110: i2c_write_data(0xC6, 0x00, Cmd, 1);
      0001EF 75 28 23         [24] 1574 	mov	_i2c_write_data_PARM_3,#_lcd_clear_Cmd_1_77
      0001F2 75 29 00         [24] 1575 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      0001F5 75 2A 40         [24] 1576 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      0001F8 75 27 00         [24] 1577 	mov	_i2c_write_data_PARM_2,#0x00
      0001FB 75 2B 01         [24] 1578 	mov	_i2c_write_data_PARM_4,#0x01
      0001FE 75 82 C6         [24] 1579 	mov	dpl,#0xC6
      000201 12 04 5D         [24] 1580 	lcall	_i2c_write_data
                           000119  1581 	C$i2c.h$111$1$77 ==.
                           000119  1582 	XG$lcd_clear$0$0 ==.
      000204 22               [24] 1583 	ret
                                   1584 ;------------------------------------------------------------
                                   1585 ;Allocation info for local variables in function 'read_keypad'
                                   1586 ;------------------------------------------------------------
                                   1587 ;i                         Allocated to registers r7 
                                   1588 ;Data                      Allocated with name '_read_keypad_Data_1_78'
                                   1589 ;------------------------------------------------------------
                           00011A  1590 	G$read_keypad$0$0 ==.
                           00011A  1591 	C$i2c.h$114$1$77 ==.
                                   1592 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:114: char read_keypad()
                                   1593 ;	-----------------------------------------
                                   1594 ;	 function read_keypad
                                   1595 ;	-----------------------------------------
      000205                       1596 _read_keypad:
                           00011A  1597 	C$i2c.h$118$1$78 ==.
                                   1598 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:118: i2c_read_data(0xC6, 0x01, Data, 2); //Read I2C data on address 192, register 1, 2 bytes of data.
      000205 75 2D 25         [24] 1599 	mov	_i2c_read_data_PARM_3,#_read_keypad_Data_1_78
      000208 75 2E 00         [24] 1600 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      00020B 75 2F 40         [24] 1601 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      00020E 75 2C 01         [24] 1602 	mov	_i2c_read_data_PARM_2,#0x01
      000211 75 30 02         [24] 1603 	mov	_i2c_read_data_PARM_4,#0x02
      000214 75 82 C6         [24] 1604 	mov	dpl,#0xC6
      000217 12 04 D3         [24] 1605 	lcall	_i2c_read_data
                           00012F  1606 	C$i2c.h$119$1$78 ==.
                                   1607 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:119: if(Data[0] == 0xFF) return 0;  //No response on bus, no display
      00021A 74 FF            [12] 1608 	mov	a,#0xFF
      00021C B5 25 05         [24] 1609 	cjne	a,_read_keypad_Data_1_78,00102$
      00021F 75 82 00         [24] 1610 	mov	dpl,#0x00
      000222 80 5F            [24] 1611 	sjmp	00116$
      000224                       1612 00102$:
                           000139  1613 	C$i2c.h$121$1$78 ==.
                                   1614 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:121: for(i=0; i<8; i++)             //loop 8 times
      000224 7F 00            [12] 1615 	mov	r7,#0x00
      000226 8F 06            [24] 1616 	mov	ar6,r7
      000228                       1617 00114$:
                           00013D  1618 	C$i2c.h$123$2$79 ==.
                                   1619 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:123: if(Data[0] & (0x01 << i))  //find the ASCII value of the keypad read, if it is the current loop value
      000228 8E F0            [24] 1620 	mov	b,r6
      00022A 05 F0            [12] 1621 	inc	b
      00022C 7C 01            [12] 1622 	mov	r4,#0x01
      00022E 7D 00            [12] 1623 	mov	r5,#0x00
      000230 80 06            [24] 1624 	sjmp	00145$
      000232                       1625 00144$:
      000232 EC               [12] 1626 	mov	a,r4
      000233 2C               [12] 1627 	add	a,r4
      000234 FC               [12] 1628 	mov	r4,a
      000235 ED               [12] 1629 	mov	a,r5
      000236 33               [12] 1630 	rlc	a
      000237 FD               [12] 1631 	mov	r5,a
      000238                       1632 00145$:
      000238 D5 F0 F7         [24] 1633 	djnz	b,00144$
      00023B AA 25            [24] 1634 	mov	r2,_read_keypad_Data_1_78
      00023D 7B 00            [12] 1635 	mov	r3,#0x00
      00023F EA               [12] 1636 	mov	a,r2
      000240 52 04            [12] 1637 	anl	ar4,a
      000242 EB               [12] 1638 	mov	a,r3
      000243 52 05            [12] 1639 	anl	ar5,a
      000245 EC               [12] 1640 	mov	a,r4
      000246 4D               [12] 1641 	orl	a,r5
      000247 60 07            [24] 1642 	jz	00115$
                           00015E  1643 	C$i2c.h$124$2$79 ==.
                                   1644 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:124: return i+49;
      000249 74 31            [12] 1645 	mov	a,#0x31
      00024B 2F               [12] 1646 	add	a,r7
      00024C F5 82            [12] 1647 	mov	dpl,a
      00024E 80 33            [24] 1648 	sjmp	00116$
      000250                       1649 00115$:
                           000165  1650 	C$i2c.h$121$1$78 ==.
                                   1651 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:121: for(i=0; i<8; i++)             //loop 8 times
      000250 0E               [12] 1652 	inc	r6
      000251 8E 07            [24] 1653 	mov	ar7,r6
      000253 BE 08 00         [24] 1654 	cjne	r6,#0x08,00147$
      000256                       1655 00147$:
      000256 40 D0            [24] 1656 	jc	00114$
                           00016D  1657 	C$i2c.h$127$1$78 ==.
                                   1658 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:127: if(Data[1] & 0x01) return '9'; //if the value is equal to 9 return 9.
      000258 E5 26            [12] 1659 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      00025A 30 E0 05         [24] 1660 	jnb	acc.0,00107$
      00025D 75 82 39         [24] 1661 	mov	dpl,#0x39
      000260 80 21            [24] 1662 	sjmp	00116$
      000262                       1663 00107$:
                           000177  1664 	C$i2c.h$129$1$78 ==.
                                   1665 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:129: if(Data[1] & 0x02) return '*'; //if the value is equal to the star.
      000262 E5 26            [12] 1666 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000264 30 E1 05         [24] 1667 	jnb	acc.1,00109$
      000267 75 82 2A         [24] 1668 	mov	dpl,#0x2A
      00026A 80 17            [24] 1669 	sjmp	00116$
      00026C                       1670 00109$:
                           000181  1671 	C$i2c.h$131$1$78 ==.
                                   1672 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:131: if(Data[1] & 0x04) return '0'; //if the value is equal to the 0 key
      00026C E5 26            [12] 1673 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      00026E 30 E2 05         [24] 1674 	jnb	acc.2,00111$
      000271 75 82 30         [24] 1675 	mov	dpl,#0x30
      000274 80 0D            [24] 1676 	sjmp	00116$
      000276                       1677 00111$:
                           00018B  1678 	C$i2c.h$133$1$78 ==.
                                   1679 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:133: if(Data[1] & 0x08) return '#'; //if the value is equal to the pound key
      000276 E5 26            [12] 1680 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000278 30 E3 05         [24] 1681 	jnb	acc.3,00113$
      00027B 75 82 23         [24] 1682 	mov	dpl,#0x23
      00027E 80 03            [24] 1683 	sjmp	00116$
      000280                       1684 00113$:
                           000195  1685 	C$i2c.h$135$1$78 ==.
                                   1686 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:135: return -1;                     //else return a numerical -1 (0xFF)
      000280 75 82 FF         [24] 1687 	mov	dpl,#0xFF
      000283                       1688 00116$:
                           000198  1689 	C$i2c.h$136$1$78 ==.
                           000198  1690 	XG$read_keypad$0$0 ==.
      000283 22               [24] 1691 	ret
                                   1692 ;------------------------------------------------------------
                                   1693 ;Allocation info for local variables in function 'kpd_input'
                                   1694 ;------------------------------------------------------------
                                   1695 ;mode                      Allocated to registers r7 
                                   1696 ;sum                       Allocated to registers r5 r6 
                                   1697 ;key                       Allocated to registers r3 
                                   1698 ;i                         Allocated to registers 
                                   1699 ;------------------------------------------------------------
                           000199  1700 	G$kpd_input$0$0 ==.
                           000199  1701 	C$i2c.h$148$1$78 ==.
                                   1702 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:148: unsigned int kpd_input(char mode)
                                   1703 ;	-----------------------------------------
                                   1704 ;	 function kpd_input
                                   1705 ;	-----------------------------------------
      000284                       1706 _kpd_input:
      000284 AF 82            [24] 1707 	mov	r7,dpl
                           00019B  1708 	C$i2c.h$153$1$81 ==.
                                   1709 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:153: sum = 0;
                           00019B  1710 	C$i2c.h$156$1$81 ==.
                                   1711 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:156: if(mode==0)lcd_print("\nType digits; end w/#");
      000286 E4               [12] 1712 	clr	a
      000287 FD               [12] 1713 	mov	r5,a
      000288 FE               [12] 1714 	mov	r6,a
      000289 EF               [12] 1715 	mov	a,r7
      00028A 70 1D            [24] 1716 	jnz	00102$
      00028C C0 06            [24] 1717 	push	ar6
      00028E C0 05            [24] 1718 	push	ar5
      000290 74 90            [12] 1719 	mov	a,#___str_0
      000292 C0 E0            [24] 1720 	push	acc
      000294 74 1B            [12] 1721 	mov	a,#(___str_0 >> 8)
      000296 C0 E0            [24] 1722 	push	acc
      000298 74 80            [12] 1723 	mov	a,#0x80
      00029A C0 E0            [24] 1724 	push	acc
      00029C 12 01 47         [24] 1725 	lcall	_lcd_print
      00029F 15 81            [12] 1726 	dec	sp
      0002A1 15 81            [12] 1727 	dec	sp
      0002A3 15 81            [12] 1728 	dec	sp
      0002A5 D0 05            [24] 1729 	pop	ar5
      0002A7 D0 06            [24] 1730 	pop	ar6
      0002A9                       1731 00102$:
                           0001BE  1732 	C$i2c.h$158$1$81 ==.
                                   1733 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:158: lcd_print("     %c%c%c%c%c",0x08,0x08,0x08,0x08,0x08);
      0002A9 C0 06            [24] 1734 	push	ar6
      0002AB C0 05            [24] 1735 	push	ar5
      0002AD 74 08            [12] 1736 	mov	a,#0x08
      0002AF C0 E0            [24] 1737 	push	acc
      0002B1 E4               [12] 1738 	clr	a
      0002B2 C0 E0            [24] 1739 	push	acc
      0002B4 74 08            [12] 1740 	mov	a,#0x08
      0002B6 C0 E0            [24] 1741 	push	acc
      0002B8 E4               [12] 1742 	clr	a
      0002B9 C0 E0            [24] 1743 	push	acc
      0002BB 74 08            [12] 1744 	mov	a,#0x08
      0002BD C0 E0            [24] 1745 	push	acc
      0002BF E4               [12] 1746 	clr	a
      0002C0 C0 E0            [24] 1747 	push	acc
      0002C2 74 08            [12] 1748 	mov	a,#0x08
      0002C4 C0 E0            [24] 1749 	push	acc
      0002C6 E4               [12] 1750 	clr	a
      0002C7 C0 E0            [24] 1751 	push	acc
      0002C9 74 08            [12] 1752 	mov	a,#0x08
      0002CB C0 E0            [24] 1753 	push	acc
      0002CD E4               [12] 1754 	clr	a
      0002CE C0 E0            [24] 1755 	push	acc
      0002D0 74 A6            [12] 1756 	mov	a,#___str_1
      0002D2 C0 E0            [24] 1757 	push	acc
      0002D4 74 1B            [12] 1758 	mov	a,#(___str_1 >> 8)
      0002D6 C0 E0            [24] 1759 	push	acc
      0002D8 74 80            [12] 1760 	mov	a,#0x80
      0002DA C0 E0            [24] 1761 	push	acc
      0002DC 12 01 47         [24] 1762 	lcall	_lcd_print
      0002DF E5 81            [12] 1763 	mov	a,sp
      0002E1 24 F3            [12] 1764 	add	a,#0xf3
      0002E3 F5 81            [12] 1765 	mov	sp,a
                           0001FA  1766 	C$i2c.h$160$1$81 ==.
                                   1767 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:160: delay_time(500000);	//Add 20ms delay before reading i2c in loop
      0002E5 90 A1 20         [24] 1768 	mov	dptr,#0xA120
      0002E8 75 F0 07         [24] 1769 	mov	b,#0x07
      0002EB E4               [12] 1770 	clr	a
      0002EC 12 03 F8         [24] 1771 	lcall	_delay_time
      0002EF D0 05            [24] 1772 	pop	ar5
      0002F1 D0 06            [24] 1773 	pop	ar6
                           000208  1774 	C$i2c.h$164$1$81 ==.
                                   1775 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:164: for(i=0; i<5; i++)
      0002F3 7F 00            [12] 1776 	mov	r7,#0x00
                           00020A  1777 	C$i2c.h$166$3$84 ==.
                                   1778 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:166: while(((key=read_keypad()) == -1) || (key == '*'))delay_time(10000);
      0002F5                       1779 00104$:
      0002F5 C0 07            [24] 1780 	push	ar7
      0002F7 C0 06            [24] 1781 	push	ar6
      0002F9 C0 05            [24] 1782 	push	ar5
      0002FB 12 02 05         [24] 1783 	lcall	_read_keypad
      0002FE AC 82            [24] 1784 	mov	r4,dpl
      000300 D0 05            [24] 1785 	pop	ar5
      000302 D0 06            [24] 1786 	pop	ar6
      000304 D0 07            [24] 1787 	pop	ar7
      000306 8C 03            [24] 1788 	mov	ar3,r4
      000308 BC FF 02         [24] 1789 	cjne	r4,#0xFF,00146$
      00030B 80 03            [24] 1790 	sjmp	00105$
      00030D                       1791 00146$:
      00030D BB 2A 17         [24] 1792 	cjne	r3,#0x2A,00106$
      000310                       1793 00105$:
      000310 90 27 10         [24] 1794 	mov	dptr,#0x2710
      000313 E4               [12] 1795 	clr	a
      000314 F5 F0            [12] 1796 	mov	b,a
      000316 C0 07            [24] 1797 	push	ar7
      000318 C0 06            [24] 1798 	push	ar6
      00031A C0 05            [24] 1799 	push	ar5
      00031C 12 03 F8         [24] 1800 	lcall	_delay_time
      00031F D0 05            [24] 1801 	pop	ar5
      000321 D0 06            [24] 1802 	pop	ar6
      000323 D0 07            [24] 1803 	pop	ar7
      000325 80 CE            [24] 1804 	sjmp	00104$
      000327                       1805 00106$:
                           00023C  1806 	C$i2c.h$167$2$82 ==.
                                   1807 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:167: if(key == '#')
      000327 BB 23 2A         [24] 1808 	cjne	r3,#0x23,00114$
                           00023F  1809 	C$i2c.h$169$3$83 ==.
                                   1810 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:169: while(read_keypad() == '#')delay_time(10000);
      00032A                       1811 00107$:
      00032A C0 06            [24] 1812 	push	ar6
      00032C C0 05            [24] 1813 	push	ar5
      00032E 12 02 05         [24] 1814 	lcall	_read_keypad
      000331 AC 82            [24] 1815 	mov	r4,dpl
      000333 D0 05            [24] 1816 	pop	ar5
      000335 D0 06            [24] 1817 	pop	ar6
      000337 BC 23 13         [24] 1818 	cjne	r4,#0x23,00109$
      00033A 90 27 10         [24] 1819 	mov	dptr,#0x2710
      00033D E4               [12] 1820 	clr	a
      00033E F5 F0            [12] 1821 	mov	b,a
      000340 C0 06            [24] 1822 	push	ar6
      000342 C0 05            [24] 1823 	push	ar5
      000344 12 03 F8         [24] 1824 	lcall	_delay_time
      000347 D0 05            [24] 1825 	pop	ar5
      000349 D0 06            [24] 1826 	pop	ar6
      00034B 80 DD            [24] 1827 	sjmp	00107$
      00034D                       1828 00109$:
                           000262  1829 	C$i2c.h$170$3$83 ==.
                                   1830 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:170: return sum;
      00034D 8D 82            [24] 1831 	mov	dpl,r5
      00034F 8E 83            [24] 1832 	mov	dph,r6
      000351 02 03 F7         [24] 1833 	ljmp	00119$
      000354                       1834 00114$:
                           000269  1835 	C$i2c.h$174$3$84 ==.
                                   1836 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:174: lcd_print("%c", key);
      000354 EB               [12] 1837 	mov	a,r3
      000355 FA               [12] 1838 	mov	r2,a
      000356 33               [12] 1839 	rlc	a
      000357 95 E0            [12] 1840 	subb	a,acc
      000359 FC               [12] 1841 	mov	r4,a
      00035A C0 07            [24] 1842 	push	ar7
      00035C C0 06            [24] 1843 	push	ar6
      00035E C0 05            [24] 1844 	push	ar5
      000360 C0 04            [24] 1845 	push	ar4
      000362 C0 03            [24] 1846 	push	ar3
      000364 C0 02            [24] 1847 	push	ar2
      000366 C0 02            [24] 1848 	push	ar2
      000368 C0 04            [24] 1849 	push	ar4
      00036A 74 B6            [12] 1850 	mov	a,#___str_2
      00036C C0 E0            [24] 1851 	push	acc
      00036E 74 1B            [12] 1852 	mov	a,#(___str_2 >> 8)
      000370 C0 E0            [24] 1853 	push	acc
      000372 74 80            [12] 1854 	mov	a,#0x80
      000374 C0 E0            [24] 1855 	push	acc
      000376 12 01 47         [24] 1856 	lcall	_lcd_print
      000379 E5 81            [12] 1857 	mov	a,sp
      00037B 24 FB            [12] 1858 	add	a,#0xfb
      00037D F5 81            [12] 1859 	mov	sp,a
      00037F D0 02            [24] 1860 	pop	ar2
      000381 D0 03            [24] 1861 	pop	ar3
      000383 D0 04            [24] 1862 	pop	ar4
      000385 D0 05            [24] 1863 	pop	ar5
      000387 D0 06            [24] 1864 	pop	ar6
                           00029E  1865 	C$i2c.h$175$1$81 ==.
                                   1866 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:175: sum = sum*10 + key - '0';
      000389 8D 11            [24] 1867 	mov	__mulint_PARM_2,r5
      00038B 8E 12            [24] 1868 	mov	(__mulint_PARM_2 + 1),r6
      00038D 90 00 0A         [24] 1869 	mov	dptr,#0x000A
      000390 C0 04            [24] 1870 	push	ar4
      000392 C0 03            [24] 1871 	push	ar3
      000394 C0 02            [24] 1872 	push	ar2
      000396 12 13 BD         [24] 1873 	lcall	__mulint
      000399 A8 82            [24] 1874 	mov	r0,dpl
      00039B A9 83            [24] 1875 	mov	r1,dph
      00039D D0 02            [24] 1876 	pop	ar2
      00039F D0 03            [24] 1877 	pop	ar3
      0003A1 D0 04            [24] 1878 	pop	ar4
      0003A3 D0 07            [24] 1879 	pop	ar7
      0003A5 EA               [12] 1880 	mov	a,r2
      0003A6 28               [12] 1881 	add	a,r0
      0003A7 F8               [12] 1882 	mov	r0,a
      0003A8 EC               [12] 1883 	mov	a,r4
      0003A9 39               [12] 1884 	addc	a,r1
      0003AA F9               [12] 1885 	mov	r1,a
      0003AB E8               [12] 1886 	mov	a,r0
      0003AC 24 D0            [12] 1887 	add	a,#0xD0
      0003AE FD               [12] 1888 	mov	r5,a
      0003AF E9               [12] 1889 	mov	a,r1
      0003B0 34 FF            [12] 1890 	addc	a,#0xFF
      0003B2 FE               [12] 1891 	mov	r6,a
                           0002C8  1892 	C$i2c.h$176$3$84 ==.
                                   1893 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:176: while(read_keypad() == key)delay_time(10000); //wait for key to be released
      0003B3                       1894 00110$:
      0003B3 C0 07            [24] 1895 	push	ar7
      0003B5 C0 06            [24] 1896 	push	ar6
      0003B7 C0 05            [24] 1897 	push	ar5
      0003B9 C0 03            [24] 1898 	push	ar3
      0003BB 12 02 05         [24] 1899 	lcall	_read_keypad
      0003BE AC 82            [24] 1900 	mov	r4,dpl
      0003C0 D0 03            [24] 1901 	pop	ar3
      0003C2 D0 05            [24] 1902 	pop	ar5
      0003C4 D0 06            [24] 1903 	pop	ar6
      0003C6 D0 07            [24] 1904 	pop	ar7
      0003C8 EC               [12] 1905 	mov	a,r4
      0003C9 B5 03 1B         [24] 1906 	cjne	a,ar3,00118$
      0003CC 90 27 10         [24] 1907 	mov	dptr,#0x2710
      0003CF E4               [12] 1908 	clr	a
      0003D0 F5 F0            [12] 1909 	mov	b,a
      0003D2 C0 07            [24] 1910 	push	ar7
      0003D4 C0 06            [24] 1911 	push	ar6
      0003D6 C0 05            [24] 1912 	push	ar5
      0003D8 C0 03            [24] 1913 	push	ar3
      0003DA 12 03 F8         [24] 1914 	lcall	_delay_time
      0003DD D0 03            [24] 1915 	pop	ar3
      0003DF D0 05            [24] 1916 	pop	ar5
      0003E1 D0 06            [24] 1917 	pop	ar6
      0003E3 D0 07            [24] 1918 	pop	ar7
      0003E5 80 CC            [24] 1919 	sjmp	00110$
      0003E7                       1920 00118$:
                           0002FC  1921 	C$i2c.h$164$1$81 ==.
                                   1922 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:164: for(i=0; i<5; i++)
      0003E7 0F               [12] 1923 	inc	r7
      0003E8 C3               [12] 1924 	clr	c
      0003E9 EF               [12] 1925 	mov	a,r7
      0003EA 64 80            [12] 1926 	xrl	a,#0x80
      0003EC 94 85            [12] 1927 	subb	a,#0x85
      0003EE 50 03            [24] 1928 	jnc	00155$
      0003F0 02 02 F5         [24] 1929 	ljmp	00104$
      0003F3                       1930 00155$:
                           000308  1931 	C$i2c.h$179$1$81 ==.
                                   1932 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:179: return sum;
      0003F3 8D 82            [24] 1933 	mov	dpl,r5
      0003F5 8E 83            [24] 1934 	mov	dph,r6
      0003F7                       1935 00119$:
                           00030C  1936 	C$i2c.h$180$1$81 ==.
                           00030C  1937 	XG$kpd_input$0$0 ==.
      0003F7 22               [24] 1938 	ret
                                   1939 ;------------------------------------------------------------
                                   1940 ;Allocation info for local variables in function 'delay_time'
                                   1941 ;------------------------------------------------------------
                                   1942 ;time_end                  Allocated to registers r4 r5 r6 r7 
                                   1943 ;index                     Allocated to registers 
                                   1944 ;------------------------------------------------------------
                           00030D  1945 	G$delay_time$0$0 ==.
                           00030D  1946 	C$i2c.h$189$1$81 ==.
                                   1947 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:189: void delay_time (unsigned long time_end)
                                   1948 ;	-----------------------------------------
                                   1949 ;	 function delay_time
                                   1950 ;	-----------------------------------------
      0003F8                       1951 _delay_time:
      0003F8 AC 82            [24] 1952 	mov	r4,dpl
      0003FA AD 83            [24] 1953 	mov	r5,dph
      0003FC AE F0            [24] 1954 	mov	r6,b
      0003FE FF               [12] 1955 	mov	r7,a
                           000314  1956 	C$i2c.h$192$1$86 ==.
                                   1957 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:192: for (index = 0; index < time_end; index++); //for loop delay
      0003FF 78 00            [12] 1958 	mov	r0,#0x00
      000401 79 00            [12] 1959 	mov	r1,#0x00
      000403 7A 00            [12] 1960 	mov	r2,#0x00
      000405 7B 00            [12] 1961 	mov	r3,#0x00
      000407                       1962 00103$:
      000407 C3               [12] 1963 	clr	c
      000408 E8               [12] 1964 	mov	a,r0
      000409 9C               [12] 1965 	subb	a,r4
      00040A E9               [12] 1966 	mov	a,r1
      00040B 9D               [12] 1967 	subb	a,r5
      00040C EA               [12] 1968 	mov	a,r2
      00040D 9E               [12] 1969 	subb	a,r6
      00040E EB               [12] 1970 	mov	a,r3
      00040F 9F               [12] 1971 	subb	a,r7
      000410 50 0F            [24] 1972 	jnc	00105$
      000412 08               [12] 1973 	inc	r0
      000413 B8 00 09         [24] 1974 	cjne	r0,#0x00,00115$
      000416 09               [12] 1975 	inc	r1
      000417 B9 00 05         [24] 1976 	cjne	r1,#0x00,00115$
      00041A 0A               [12] 1977 	inc	r2
      00041B BA 00 E9         [24] 1978 	cjne	r2,#0x00,00103$
      00041E 0B               [12] 1979 	inc	r3
      00041F                       1980 00115$:
      00041F 80 E6            [24] 1981 	sjmp	00103$
      000421                       1982 00105$:
                           000336  1983 	C$i2c.h$193$1$86 ==.
                           000336  1984 	XG$delay_time$0$0 ==.
      000421 22               [24] 1985 	ret
                                   1986 ;------------------------------------------------------------
                                   1987 ;Allocation info for local variables in function 'i2c_start'
                                   1988 ;------------------------------------------------------------
                           000337  1989 	G$i2c_start$0$0 ==.
                           000337  1990 	C$i2c.h$196$1$86 ==.
                                   1991 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:196: void i2c_start(void)
                                   1992 ;	-----------------------------------------
                                   1993 ;	 function i2c_start
                                   1994 ;	-----------------------------------------
      000422                       1995 _i2c_start:
                           000337  1996 	C$i2c.h$198$1$88 ==.
                                   1997 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:198: while(BUSY);              //Wait until SMBus0 is free
      000422                       1998 00101$:
      000422 20 C7 FD         [24] 1999 	jb	_BUSY,00101$
                           00033A  2000 	C$i2c.h$199$1$88 ==.
                                   2001 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:199: STA = 1;                  //Set Start Bit
      000425 D2 C5            [12] 2002 	setb	_STA
                           00033C  2003 	C$i2c.h$200$1$88 ==.
                                   2004 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:200: while(!SI);               //Wait until start sent
      000427                       2005 00104$:
      000427 30 C3 FD         [24] 2006 	jnb	_SI,00104$
                           00033F  2007 	C$i2c.h$201$1$88 ==.
                                   2008 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:201: STA = 0;                  //Clear start bit
      00042A C2 C5            [12] 2009 	clr	_STA
                           000341  2010 	C$i2c.h$202$1$88 ==.
                                   2011 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:202: SI = 0;                   //Clear SI
      00042C C2 C3            [12] 2012 	clr	_SI
                           000343  2013 	C$i2c.h$203$1$88 ==.
                           000343  2014 	XG$i2c_start$0$0 ==.
      00042E 22               [24] 2015 	ret
                                   2016 ;------------------------------------------------------------
                                   2017 ;Allocation info for local variables in function 'i2c_write'
                                   2018 ;------------------------------------------------------------
                                   2019 ;output_data               Allocated to registers 
                                   2020 ;------------------------------------------------------------
                           000344  2021 	G$i2c_write$0$0 ==.
                           000344  2022 	C$i2c.h$206$1$88 ==.
                                   2023 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:206: void i2c_write(unsigned char output_data)
                                   2024 ;	-----------------------------------------
                                   2025 ;	 function i2c_write
                                   2026 ;	-----------------------------------------
      00042F                       2027 _i2c_write:
      00042F 85 82 C2         [24] 2028 	mov	_SMB0DAT,dpl
                           000347  2029 	C$i2c.h$209$1$90 ==.
                                   2030 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:209: while(!SI);               //Wait until send is complete
      000432                       2031 00101$:
                           000347  2032 	C$i2c.h$210$1$90 ==.
                                   2033 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:210: SI = 0;                   //Clear SI
      000432 10 C3 02         [24] 2034 	jbc	_SI,00112$
      000435 80 FB            [24] 2035 	sjmp	00101$
      000437                       2036 00112$:
                           00034C  2037 	C$i2c.h$211$1$90 ==.
                           00034C  2038 	XG$i2c_write$0$0 ==.
      000437 22               [24] 2039 	ret
                                   2040 ;------------------------------------------------------------
                                   2041 ;Allocation info for local variables in function 'i2c_write_and_stop'
                                   2042 ;------------------------------------------------------------
                                   2043 ;output_data               Allocated to registers 
                                   2044 ;------------------------------------------------------------
                           00034D  2045 	G$i2c_write_and_stop$0$0 ==.
                           00034D  2046 	C$i2c.h$214$1$90 ==.
                                   2047 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:214: void i2c_write_and_stop(unsigned char output_data)
                                   2048 ;	-----------------------------------------
                                   2049 ;	 function i2c_write_and_stop
                                   2050 ;	-----------------------------------------
      000438                       2051 _i2c_write_and_stop:
      000438 85 82 C2         [24] 2052 	mov	_SMB0DAT,dpl
                           000350  2053 	C$i2c.h$217$1$92 ==.
                                   2054 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:217: STO = 1;                  //Set stop bit
      00043B D2 C4            [12] 2055 	setb	_STO
                           000352  2056 	C$i2c.h$218$1$92 ==.
                                   2057 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:218: while(!SI);               //Wait until send is complete
      00043D                       2058 00101$:
                           000352  2059 	C$i2c.h$219$1$92 ==.
                                   2060 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:219: SI = 0;                   //clear SI
      00043D 10 C3 02         [24] 2061 	jbc	_SI,00112$
      000440 80 FB            [24] 2062 	sjmp	00101$
      000442                       2063 00112$:
                           000357  2064 	C$i2c.h$220$1$92 ==.
                           000357  2065 	XG$i2c_write_and_stop$0$0 ==.
      000442 22               [24] 2066 	ret
                                   2067 ;------------------------------------------------------------
                                   2068 ;Allocation info for local variables in function 'i2c_read'
                                   2069 ;------------------------------------------------------------
                                   2070 ;input_data                Allocated to registers 
                                   2071 ;------------------------------------------------------------
                           000358  2072 	G$i2c_read$0$0 ==.
                           000358  2073 	C$i2c.h$223$1$92 ==.
                                   2074 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:223: unsigned char i2c_read(void)
                                   2075 ;	-----------------------------------------
                                   2076 ;	 function i2c_read
                                   2077 ;	-----------------------------------------
      000443                       2078 _i2c_read:
                           000358  2079 	C$i2c.h$226$1$94 ==.
                                   2080 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:226: while(!SI);                //Wait until we have data to read
      000443                       2081 00101$:
      000443 30 C3 FD         [24] 2082 	jnb	_SI,00101$
                           00035B  2083 	C$i2c.h$227$1$94 ==.
                                   2084 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:227: input_data = SMB0DAT;      //Read the data
      000446 85 C2 82         [24] 2085 	mov	dpl,_SMB0DAT
                           00035E  2086 	C$i2c.h$228$1$94 ==.
                                   2087 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:228: SI = 0;                    //Clear SI
      000449 C2 C3            [12] 2088 	clr	_SI
                           000360  2089 	C$i2c.h$229$1$94 ==.
                                   2090 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:229: return input_data;         //Return the read data
                           000360  2091 	C$i2c.h$230$1$94 ==.
                           000360  2092 	XG$i2c_read$0$0 ==.
      00044B 22               [24] 2093 	ret
                                   2094 ;------------------------------------------------------------
                                   2095 ;Allocation info for local variables in function 'i2c_read_and_stop'
                                   2096 ;------------------------------------------------------------
                                   2097 ;input_data                Allocated to registers r7 
                                   2098 ;------------------------------------------------------------
                           000361  2099 	G$i2c_read_and_stop$0$0 ==.
                           000361  2100 	C$i2c.h$233$1$94 ==.
                                   2101 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:233: unsigned char i2c_read_and_stop(void)
                                   2102 ;	-----------------------------------------
                                   2103 ;	 function i2c_read_and_stop
                                   2104 ;	-----------------------------------------
      00044C                       2105 _i2c_read_and_stop:
                           000361  2106 	C$i2c.h$236$1$96 ==.
                                   2107 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:236: while(!SI);                //Wait until we have data to read
      00044C                       2108 00101$:
      00044C 30 C3 FD         [24] 2109 	jnb	_SI,00101$
                           000364  2110 	C$i2c.h$237$1$96 ==.
                                   2111 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:237: input_data = SMB0DAT;      //Read the data
      00044F AF C2            [24] 2112 	mov	r7,_SMB0DAT
                           000366  2113 	C$i2c.h$238$1$96 ==.
                                   2114 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:238: SI = 0;                    //Clear SI
      000451 C2 C3            [12] 2115 	clr	_SI
                           000368  2116 	C$i2c.h$239$1$96 ==.
                                   2117 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:239: STO = 1;                   //Set stop bit
      000453 D2 C4            [12] 2118 	setb	_STO
                           00036A  2119 	C$i2c.h$240$1$96 ==.
                                   2120 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:240: while(!SI);                //Wait for stop
      000455                       2121 00104$:
                           00036A  2122 	C$i2c.h$241$1$96 ==.
                                   2123 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:241: SI = 0;
      000455 10 C3 02         [24] 2124 	jbc	_SI,00122$
      000458 80 FB            [24] 2125 	sjmp	00104$
      00045A                       2126 00122$:
                           00036F  2127 	C$i2c.h$242$1$96 ==.
                                   2128 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:242: return input_data;         //Return the read data
      00045A 8F 82            [24] 2129 	mov	dpl,r7
                           000371  2130 	C$i2c.h$243$1$96 ==.
                           000371  2131 	XG$i2c_read_and_stop$0$0 ==.
      00045C 22               [24] 2132 	ret
                                   2133 ;------------------------------------------------------------
                                   2134 ;Allocation info for local variables in function 'i2c_write_data'
                                   2135 ;------------------------------------------------------------
                                   2136 ;start_reg                 Allocated with name '_i2c_write_data_PARM_2'
                                   2137 ;buffer                    Allocated with name '_i2c_write_data_PARM_3'
                                   2138 ;num_bytes                 Allocated with name '_i2c_write_data_PARM_4'
                                   2139 ;addr                      Allocated to registers r7 
                                   2140 ;i                         Allocated to registers 
                                   2141 ;------------------------------------------------------------
                           000372  2142 	G$i2c_write_data$0$0 ==.
                           000372  2143 	C$i2c.h$246$1$96 ==.
                                   2144 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:246: void i2c_write_data(unsigned char addr, unsigned char start_reg, unsigned char *buffer, unsigned char num_bytes)
                                   2145 ;	-----------------------------------------
                                   2146 ;	 function i2c_write_data
                                   2147 ;	-----------------------------------------
      00045D                       2148 _i2c_write_data:
      00045D AF 82            [24] 2149 	mov	r7,dpl
                           000374  2150 	C$i2c.h$250$1$98 ==.
                                   2151 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:250: i2c_start();               //initiate I2C transfer
      00045F C0 07            [24] 2152 	push	ar7
      000461 12 04 22         [24] 2153 	lcall	_i2c_start
      000464 D0 07            [24] 2154 	pop	ar7
                           00037B  2155 	C$i2c.h$251$1$98 ==.
                                   2156 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:251: i2c_write(addr & ~0x01);   //write the desired address to the bus
      000466 74 FE            [12] 2157 	mov	a,#0xFE
      000468 5F               [12] 2158 	anl	a,r7
      000469 F5 82            [12] 2159 	mov	dpl,a
      00046B 12 04 2F         [24] 2160 	lcall	_i2c_write
                           000383  2161 	C$i2c.h$252$1$98 ==.
                                   2162 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:252: i2c_write(start_reg);      //write the start register to the bus
      00046E 85 27 82         [24] 2163 	mov	dpl,_i2c_write_data_PARM_2
      000471 12 04 2F         [24] 2164 	lcall	_i2c_write
                           000389  2165 	C$i2c.h$253$1$98 ==.
                                   2166 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:253: for(i=0; i<num_bytes-1; i++) //write the data to the register(s)
      000474 7F 00            [12] 2167 	mov	r7,#0x00
      000476                       2168 00103$:
      000476 AD 2B            [24] 2169 	mov	r5,_i2c_write_data_PARM_4
      000478 7E 00            [12] 2170 	mov	r6,#0x00
      00047A 1D               [12] 2171 	dec	r5
      00047B BD FF 01         [24] 2172 	cjne	r5,#0xFF,00114$
      00047E 1E               [12] 2173 	dec	r6
      00047F                       2174 00114$:
      00047F 8F 03            [24] 2175 	mov	ar3,r7
      000481 7C 00            [12] 2176 	mov	r4,#0x00
      000483 C3               [12] 2177 	clr	c
      000484 EB               [12] 2178 	mov	a,r3
      000485 9D               [12] 2179 	subb	a,r5
      000486 EC               [12] 2180 	mov	a,r4
      000487 64 80            [12] 2181 	xrl	a,#0x80
      000489 8E F0            [24] 2182 	mov	b,r6
      00048B 63 F0 80         [24] 2183 	xrl	b,#0x80
      00048E 95 F0            [12] 2184 	subb	a,b
      000490 50 1F            [24] 2185 	jnc	00101$
                           0003A7  2186 	C$i2c.h$254$1$98 ==.
                                   2187 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:254: i2c_write(buffer[i]);
      000492 EF               [12] 2188 	mov	a,r7
      000493 25 28            [12] 2189 	add	a,_i2c_write_data_PARM_3
      000495 FC               [12] 2190 	mov	r4,a
      000496 E4               [12] 2191 	clr	a
      000497 35 29            [12] 2192 	addc	a,(_i2c_write_data_PARM_3 + 1)
      000499 FD               [12] 2193 	mov	r5,a
      00049A AE 2A            [24] 2194 	mov	r6,(_i2c_write_data_PARM_3 + 2)
      00049C 8C 82            [24] 2195 	mov	dpl,r4
      00049E 8D 83            [24] 2196 	mov	dph,r5
      0004A0 8E F0            [24] 2197 	mov	b,r6
      0004A2 12 1B 3A         [24] 2198 	lcall	__gptrget
      0004A5 F5 82            [12] 2199 	mov	dpl,a
      0004A7 C0 07            [24] 2200 	push	ar7
      0004A9 12 04 2F         [24] 2201 	lcall	_i2c_write
      0004AC D0 07            [24] 2202 	pop	ar7
                           0003C3  2203 	C$i2c.h$253$1$98 ==.
                                   2204 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:253: for(i=0; i<num_bytes-1; i++) //write the data to the register(s)
      0004AE 0F               [12] 2205 	inc	r7
      0004AF 80 C5            [24] 2206 	sjmp	00103$
      0004B1                       2207 00101$:
                           0003C6  2208 	C$i2c.h$255$1$98 ==.
                                   2209 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:255: i2c_write_and_stop(buffer[num_bytes-1]); //Stop transfer
      0004B1 AE 2B            [24] 2210 	mov	r6,_i2c_write_data_PARM_4
      0004B3 7F 00            [12] 2211 	mov	r7,#0x00
      0004B5 1E               [12] 2212 	dec	r6
      0004B6 BE FF 01         [24] 2213 	cjne	r6,#0xFF,00116$
      0004B9 1F               [12] 2214 	dec	r7
      0004BA                       2215 00116$:
      0004BA EE               [12] 2216 	mov	a,r6
      0004BB 25 28            [12] 2217 	add	a,_i2c_write_data_PARM_3
      0004BD FE               [12] 2218 	mov	r6,a
      0004BE EF               [12] 2219 	mov	a,r7
      0004BF 35 29            [12] 2220 	addc	a,(_i2c_write_data_PARM_3 + 1)
      0004C1 FF               [12] 2221 	mov	r7,a
      0004C2 AD 2A            [24] 2222 	mov	r5,(_i2c_write_data_PARM_3 + 2)
      0004C4 8E 82            [24] 2223 	mov	dpl,r6
      0004C6 8F 83            [24] 2224 	mov	dph,r7
      0004C8 8D F0            [24] 2225 	mov	b,r5
      0004CA 12 1B 3A         [24] 2226 	lcall	__gptrget
      0004CD F5 82            [12] 2227 	mov	dpl,a
      0004CF 12 04 38         [24] 2228 	lcall	_i2c_write_and_stop
                           0003E7  2229 	C$i2c.h$256$1$98 ==.
                           0003E7  2230 	XG$i2c_write_data$0$0 ==.
      0004D2 22               [24] 2231 	ret
                                   2232 ;------------------------------------------------------------
                                   2233 ;Allocation info for local variables in function 'i2c_read_data'
                                   2234 ;------------------------------------------------------------
                                   2235 ;start_reg                 Allocated with name '_i2c_read_data_PARM_2'
                                   2236 ;buffer                    Allocated with name '_i2c_read_data_PARM_3'
                                   2237 ;num_bytes                 Allocated with name '_i2c_read_data_PARM_4'
                                   2238 ;addr                      Allocated to registers r7 
                                   2239 ;j                         Allocated to registers 
                                   2240 ;------------------------------------------------------------
                           0003E8  2241 	G$i2c_read_data$0$0 ==.
                           0003E8  2242 	C$i2c.h$259$1$98 ==.
                                   2243 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:259: void i2c_read_data(unsigned char addr, unsigned char start_reg, unsigned char *buffer, unsigned char num_bytes)
                                   2244 ;	-----------------------------------------
                                   2245 ;	 function i2c_read_data
                                   2246 ;	-----------------------------------------
      0004D3                       2247 _i2c_read_data:
      0004D3 AF 82            [24] 2248 	mov	r7,dpl
                           0003EA  2249 	C$i2c.h$262$1$100 ==.
                                   2250 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:262: i2c_start();               //Start I2C transfer
      0004D5 C0 07            [24] 2251 	push	ar7
      0004D7 12 04 22         [24] 2252 	lcall	_i2c_start
      0004DA D0 07            [24] 2253 	pop	ar7
                           0003F1  2254 	C$i2c.h$263$1$100 ==.
                                   2255 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:263: i2c_write(addr & ~0x01);   //Write address of device that will be written to, send 0
      0004DC 8F 06            [24] 2256 	mov	ar6,r7
      0004DE 74 FE            [12] 2257 	mov	a,#0xFE
      0004E0 5E               [12] 2258 	anl	a,r6
      0004E1 F5 82            [12] 2259 	mov	dpl,a
      0004E3 C0 07            [24] 2260 	push	ar7
      0004E5 12 04 2F         [24] 2261 	lcall	_i2c_write
                           0003FD  2262 	C$i2c.h$264$1$100 ==.
                                   2263 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:264: i2c_write_and_stop(start_reg); //Write & stop the 1st register to be read
      0004E8 85 2C 82         [24] 2264 	mov	dpl,_i2c_read_data_PARM_2
      0004EB 12 04 38         [24] 2265 	lcall	_i2c_write_and_stop
                           000403  2266 	C$i2c.h$265$1$100 ==.
                                   2267 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:265: i2c_start();               //Start I2C transfer
      0004EE 12 04 22         [24] 2268 	lcall	_i2c_start
      0004F1 D0 07            [24] 2269 	pop	ar7
                           000408  2270 	C$i2c.h$266$1$100 ==.
                                   2271 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:266: i2c_write(addr | 0x01);    //Write address again, this time indicating a read operation
      0004F3 74 01            [12] 2272 	mov	a,#0x01
      0004F5 4F               [12] 2273 	orl	a,r7
      0004F6 F5 82            [12] 2274 	mov	dpl,a
      0004F8 12 04 2F         [24] 2275 	lcall	_i2c_write
                           000410  2276 	C$i2c.h$267$1$100 ==.
                                   2277 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:267: for(j = 0; j < num_bytes - 1; j++)
      0004FB 7F 00            [12] 2278 	mov	r7,#0x00
      0004FD                       2279 00103$:
      0004FD AD 30            [24] 2280 	mov	r5,_i2c_read_data_PARM_4
      0004FF 7E 00            [12] 2281 	mov	r6,#0x00
      000501 1D               [12] 2282 	dec	r5
      000502 BD FF 01         [24] 2283 	cjne	r5,#0xFF,00114$
      000505 1E               [12] 2284 	dec	r6
      000506                       2285 00114$:
      000506 8F 03            [24] 2286 	mov	ar3,r7
      000508 7C 00            [12] 2287 	mov	r4,#0x00
      00050A C3               [12] 2288 	clr	c
      00050B EB               [12] 2289 	mov	a,r3
      00050C 9D               [12] 2290 	subb	a,r5
      00050D EC               [12] 2291 	mov	a,r4
      00050E 64 80            [12] 2292 	xrl	a,#0x80
      000510 8E F0            [24] 2293 	mov	b,r6
      000512 63 F0 80         [24] 2294 	xrl	b,#0x80
      000515 95 F0            [12] 2295 	subb	a,b
      000517 50 2E            [24] 2296 	jnc	00101$
                           00042E  2297 	C$i2c.h$269$2$101 ==.
                                   2298 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:269: AA = 1;                //Set acknowledge bit
      000519 D2 C2            [12] 2299 	setb	_AA
                           000430  2300 	C$i2c.h$270$2$101 ==.
                                   2301 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:270: buffer[j] = i2c_read();//Read data, save it in buffer
      00051B EF               [12] 2302 	mov	a,r7
      00051C 25 2D            [12] 2303 	add	a,_i2c_read_data_PARM_3
      00051E FC               [12] 2304 	mov	r4,a
      00051F E4               [12] 2305 	clr	a
      000520 35 2E            [12] 2306 	addc	a,(_i2c_read_data_PARM_3 + 1)
      000522 FD               [12] 2307 	mov	r5,a
      000523 AE 2F            [24] 2308 	mov	r6,(_i2c_read_data_PARM_3 + 2)
      000525 C0 07            [24] 2309 	push	ar7
      000527 C0 06            [24] 2310 	push	ar6
      000529 C0 05            [24] 2311 	push	ar5
      00052B C0 04            [24] 2312 	push	ar4
      00052D 12 04 43         [24] 2313 	lcall	_i2c_read
      000530 AB 82            [24] 2314 	mov	r3,dpl
      000532 D0 04            [24] 2315 	pop	ar4
      000534 D0 05            [24] 2316 	pop	ar5
      000536 D0 06            [24] 2317 	pop	ar6
      000538 D0 07            [24] 2318 	pop	ar7
      00053A 8C 82            [24] 2319 	mov	dpl,r4
      00053C 8D 83            [24] 2320 	mov	dph,r5
      00053E 8E F0            [24] 2321 	mov	b,r6
      000540 EB               [12] 2322 	mov	a,r3
      000541 12 13 A2         [24] 2323 	lcall	__gptrput
                           000459  2324 	C$i2c.h$267$1$100 ==.
                                   2325 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:267: for(j = 0; j < num_bytes - 1; j++)
      000544 0F               [12] 2326 	inc	r7
      000545 80 B6            [24] 2327 	sjmp	00103$
      000547                       2328 00101$:
                           00045C  2329 	C$i2c.h$272$1$100 ==.
                                   2330 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:272: AA = 0;
      000547 C2 C2            [12] 2331 	clr	_AA
                           00045E  2332 	C$i2c.h$273$1$100 ==.
                                   2333 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:273: buffer[num_bytes - 1] = i2c_read_and_stop(); //Read the last byte and stop, save it in the buffer
      000549 AE 30            [24] 2334 	mov	r6,_i2c_read_data_PARM_4
      00054B 7F 00            [12] 2335 	mov	r7,#0x00
      00054D 1E               [12] 2336 	dec	r6
      00054E BE FF 01         [24] 2337 	cjne	r6,#0xFF,00116$
      000551 1F               [12] 2338 	dec	r7
      000552                       2339 00116$:
      000552 EE               [12] 2340 	mov	a,r6
      000553 25 2D            [12] 2341 	add	a,_i2c_read_data_PARM_3
      000555 FE               [12] 2342 	mov	r6,a
      000556 EF               [12] 2343 	mov	a,r7
      000557 35 2E            [12] 2344 	addc	a,(_i2c_read_data_PARM_3 + 1)
      000559 FF               [12] 2345 	mov	r7,a
      00055A AD 2F            [24] 2346 	mov	r5,(_i2c_read_data_PARM_3 + 2)
      00055C C0 07            [24] 2347 	push	ar7
      00055E C0 06            [24] 2348 	push	ar6
      000560 C0 05            [24] 2349 	push	ar5
      000562 12 04 4C         [24] 2350 	lcall	_i2c_read_and_stop
      000565 AC 82            [24] 2351 	mov	r4,dpl
      000567 D0 05            [24] 2352 	pop	ar5
      000569 D0 06            [24] 2353 	pop	ar6
      00056B D0 07            [24] 2354 	pop	ar7
      00056D 8E 82            [24] 2355 	mov	dpl,r6
      00056F 8F 83            [24] 2356 	mov	dph,r7
      000571 8D F0            [24] 2357 	mov	b,r5
      000573 EC               [12] 2358 	mov	a,r4
      000574 12 13 A2         [24] 2359 	lcall	__gptrput
                           00048C  2360 	C$i2c.h$274$1$100 ==.
                           00048C  2361 	XG$i2c_read_data$0$0 ==.
      000577 22               [24] 2362 	ret
                                   2363 ;------------------------------------------------------------
                                   2364 ;Allocation info for local variables in function 'Accel_Init'
                                   2365 ;------------------------------------------------------------
                                   2366 ;Data2                     Allocated with name '_Accel_Init_Data2_1_103'
                                   2367 ;------------------------------------------------------------
                           00048D  2368 	G$Accel_Init$0$0 ==.
                           00048D  2369 	C$i2c.h$283$1$100 ==.
                                   2370 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:283: void Accel_Init(void)
                                   2371 ;	-----------------------------------------
                                   2372 ;	 function Accel_Init
                                   2373 ;	-----------------------------------------
      000578                       2374 _Accel_Init:
                           00048D  2375 	C$i2c.h$287$1$103 ==.
                                   2376 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:287: Data2[0]=0x23;	//normal power mode, 50Hz ODR, y & x axes enabled
      000578 75 31 23         [24] 2377 	mov	_Accel_Init_Data2_1_103,#0x23
                           000490  2378 	C$i2c.h$289$1$103 ==.
                                   2379 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:289: i2c_write_data(addr_accel, 0x20, Data2, 1);
      00057B 75 28 31         [24] 2380 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      00057E 75 29 00         [24] 2381 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      000581 75 2A 40         [24] 2382 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000584 75 27 20         [24] 2383 	mov	_i2c_write_data_PARM_2,#0x20
      000587 75 2B 01         [24] 2384 	mov	_i2c_write_data_PARM_4,#0x01
      00058A 75 82 30         [24] 2385 	mov	dpl,#0x30
      00058D 12 04 5D         [24] 2386 	lcall	_i2c_write_data
                           0004A5  2387 	C$i2c.h$290$1$103 ==.
                                   2388 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:290: Data2[0]=0x00;	//Default - no filtering
      000590 75 31 00         [24] 2389 	mov	_Accel_Init_Data2_1_103,#0x00
                           0004A8  2390 	C$i2c.h$292$1$103 ==.
                                   2391 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:292: i2c_write_data(addr_accel, 0x21, Data2, 1);
      000593 75 28 31         [24] 2392 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      000596 75 29 00         [24] 2393 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      000599 75 2A 40         [24] 2394 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      00059C 75 27 21         [24] 2395 	mov	_i2c_write_data_PARM_2,#0x21
      00059F 75 2B 01         [24] 2396 	mov	_i2c_write_data_PARM_4,#0x01
      0005A2 75 82 30         [24] 2397 	mov	dpl,#0x30
      0005A5 12 04 5D         [24] 2398 	lcall	_i2c_write_data
                           0004BD  2399 	C$i2c.h$293$1$103 ==.
                                   2400 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:293: Data2[0]=0x00;	//default - no interrupts enabled
      0005A8 75 31 00         [24] 2401 	mov	_Accel_Init_Data2_1_103,#0x00
                           0004C0  2402 	C$i2c.h$294$1$103 ==.
                                   2403 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:294: i2c_write_data(addr_accel, 0x22, Data2, 1);
      0005AB 75 28 31         [24] 2404 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      0005AE 75 29 00         [24] 2405 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      0005B1 75 2A 40         [24] 2406 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      0005B4 75 27 22         [24] 2407 	mov	_i2c_write_data_PARM_2,#0x22
      0005B7 75 2B 01         [24] 2408 	mov	_i2c_write_data_PARM_4,#0x01
      0005BA 75 82 30         [24] 2409 	mov	dpl,#0x30
      0005BD 12 04 5D         [24] 2410 	lcall	_i2c_write_data
                           0004D5  2411 	C$i2c.h$298$1$103 ==.
                           0004D5  2412 	XG$Accel_Init$0$0 ==.
      0005C0 22               [24] 2413 	ret
                                   2414 ;------------------------------------------------------------
                                   2415 ;Allocation info for local variables in function 'main'
                                   2416 ;------------------------------------------------------------
                           0004D6  2417 	G$main$0$0 ==.
                           0004D6  2418 	C$lab6.c$82$1$103 ==.
                                   2419 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:82: void main(void)
                                   2420 ;	-----------------------------------------
                                   2421 ;	 function main
                                   2422 ;	-----------------------------------------
      0005C1                       2423 _main:
                           0004D6  2424 	C$lab6.c$84$1$123 ==.
                                   2425 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:84: Sys_Init();
      0005C1 12 01 1B         [24] 2426 	lcall	_Sys_Init
                           0004D9  2427 	C$lab6.c$85$1$123 ==.
                                   2428 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:85: putchar(' '); //the quotes in this line may not format correctly
      0005C4 75 82 20         [24] 2429 	mov	dpl,#0x20
      0005C7 12 01 2E         [24] 2430 	lcall	_putchar
                           0004DF  2431 	C$lab6.c$86$1$123 ==.
                                   2432 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:86: Port_Init();
      0005CA 12 13 3F         [24] 2433 	lcall	_Port_Init
                           0004E2  2434 	C$lab6.c$87$1$123 ==.
                                   2435 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:87: XBR0_Init();
      0005CD 12 13 6F         [24] 2436 	lcall	_XBR0_Init
                           0004E5  2437 	C$lab6.c$88$1$123 ==.
                                   2438 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:88: PCA_Init();
      0005D0 12 13 57         [24] 2439 	lcall	_PCA_Init
                           0004E8  2440 	C$lab6.c$89$1$123 ==.
                                   2441 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:89: SMB_Init();
      0005D3 12 13 73         [24] 2442 	lcall	_SMB_Init
                           0004EB  2443 	C$lab6.c$90$1$123 ==.
                                   2444 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:90: ADC_Init();
      0005D6 12 13 79         [24] 2445 	lcall	_ADC_Init
                           0004EE  2446 	C$lab6.c$92$1$123 ==.
                                   2447 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:92: count =0;
      0005D9 E4               [12] 2448 	clr	a
      0005DA F5 32            [12] 2449 	mov	_count,a
      0005DC F5 33            [12] 2450 	mov	(_count + 1),a
                           0004F3  2451 	C$lab6.c$94$1$123 ==.
                                   2452 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:94: RUDDER_PW= PW_CENTER_RUDDER;
      0005DE 85 3C 46         [24] 2453 	mov	_RUDDER_PW,_PW_CENTER_RUDDER
      0005E1 85 3D 47         [24] 2454 	mov	(_RUDDER_PW + 1),(_PW_CENTER_RUDDER + 1)
                           0004F9  2455 	C$lab6.c$95$1$123 ==.
                                   2456 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:95: ANGLE_PW = PW_CENTER_ANGLE;
      0005E4 85 42 4A         [24] 2457 	mov	_ANGLE_PW,_PW_CENTER_ANGLE
      0005E7 85 43 4B         [24] 2458 	mov	(_ANGLE_PW + 1),(_PW_CENTER_ANGLE + 1)
                           0004FF  2459 	C$lab6.c$96$1$123 ==.
                                   2460 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:96: RTHRUST_PW = PW_NUET_THRUST;
      0005EA 85 36 4E         [24] 2461 	mov	_RTHRUST_PW,_PW_NUET_THRUST
      0005ED 85 37 4F         [24] 2462 	mov	(_RTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
                           000505  2463 	C$lab6.c$97$1$123 ==.
                                   2464 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:97: LTHRUST_PW = PW_NUET_THRUST;
      0005F0 85 36 50         [24] 2465 	mov	_LTHRUST_PW,_PW_NUET_THRUST
      0005F3 85 37 51         [24] 2466 	mov	(_LTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
                           00050B  2467 	C$lab6.c$99$1$123 ==.
                                   2468 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:99: RDR_lo_to_hi = 0xFFFF - RUDDER_PW;
      0005F6 14               [12] 2469 	dec	a
      0005F7 C3               [12] 2470 	clr	c
      0005F8 95 46            [12] 2471 	subb	a,_RUDDER_PW
      0005FA F5 48            [12] 2472 	mov	_RDR_lo_to_hi,a
      0005FC 74 FF            [12] 2473 	mov	a,#0xFF
      0005FE 95 47            [12] 2474 	subb	a,(_RUDDER_PW + 1)
      000600 F5 49            [12] 2475 	mov	(_RDR_lo_to_hi + 1),a
                           000517  2476 	C$lab6.c$100$1$123 ==.
                                   2477 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:100: RTRST_lo_to_hi = 0xFFFF - RTHRUST_PW;
      000602 74 FF            [12] 2478 	mov	a,#0xFF
      000604 C3               [12] 2479 	clr	c
      000605 95 4E            [12] 2480 	subb	a,_RTHRUST_PW
      000607 F5 52            [12] 2481 	mov	_RTRST_lo_to_hi,a
      000609 74 FF            [12] 2482 	mov	a,#0xFF
      00060B 95 4F            [12] 2483 	subb	a,(_RTHRUST_PW + 1)
      00060D F5 53            [12] 2484 	mov	(_RTRST_lo_to_hi + 1),a
                           000524  2485 	C$lab6.c$101$1$123 ==.
                                   2486 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:101: LTRST_lo_to_hi = 0xFFFF - LTHRUST_PW;
      00060F 74 FF            [12] 2487 	mov	a,#0xFF
      000611 C3               [12] 2488 	clr	c
      000612 95 50            [12] 2489 	subb	a,_LTHRUST_PW
      000614 F5 54            [12] 2490 	mov	_LTRST_lo_to_hi,a
      000616 74 FF            [12] 2491 	mov	a,#0xFF
      000618 95 51            [12] 2492 	subb	a,(_LTHRUST_PW + 1)
      00061A F5 55            [12] 2493 	mov	(_LTRST_lo_to_hi + 1),a
                           000531  2494 	C$lab6.c$102$1$123 ==.
                                   2495 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:102: AGL_lo_to_hi = 0xFFFF - ANGLE_PW;
      00061C 74 FF            [12] 2496 	mov	a,#0xFF
      00061E C3               [12] 2497 	clr	c
      00061F 95 4A            [12] 2498 	subb	a,_ANGLE_PW
      000621 F5 4C            [12] 2499 	mov	_AGL_lo_to_hi,a
      000623 74 FF            [12] 2500 	mov	a,#0xFF
      000625 95 4B            [12] 2501 	subb	a,(_ANGLE_PW + 1)
      000627 F5 4D            [12] 2502 	mov	(_AGL_lo_to_hi + 1),a
                           00053E  2503 	C$lab6.c$104$1$123 ==.
                                   2504 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:104: PCA0CP0 = RDR_lo_to_hi;
      000629 85 48 EA         [24] 2505 	mov	((_PCA0CP0 >> 0) & 0xFF),_RDR_lo_to_hi
      00062C 85 49 FA         [24] 2506 	mov	((_PCA0CP0 >> 8) & 0xFF),(_RDR_lo_to_hi + 1)
                           000544  2507 	C$lab6.c$105$1$123 ==.
                                   2508 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:105: PCA0CP1 = AGL_lo_to_hi;	
      00062F 85 4C EB         [24] 2509 	mov	((_PCA0CP1 >> 0) & 0xFF),_AGL_lo_to_hi
      000632 85 4D FB         [24] 2510 	mov	((_PCA0CP1 >> 8) & 0xFF),(_AGL_lo_to_hi + 1)
                           00054A  2511 	C$lab6.c$106$1$123 ==.
                                   2512 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:106: PCA0CP2 = RTRST_lo_to_hi;
      000635 85 52 EC         [24] 2513 	mov	((_PCA0CP2 >> 0) & 0xFF),_RTRST_lo_to_hi
      000638 85 53 FC         [24] 2514 	mov	((_PCA0CP2 >> 8) & 0xFF),(_RTRST_lo_to_hi + 1)
                           000550  2515 	C$lab6.c$107$1$123 ==.
                                   2516 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:107: PCA0CP3 = LTRST_lo_to_hi;
      00063B 85 54 ED         [24] 2517 	mov	((_PCA0CP3 >> 0) & 0xFF),_LTRST_lo_to_hi
      00063E 85 55 FD         [24] 2518 	mov	((_PCA0CP3 >> 8) & 0xFF),(_LTRST_lo_to_hi + 1)
                           000556  2519 	C$lab6.c$109$1$123 ==.
                                   2520 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:109: kpkd();
      000641 12 06 E7         [24] 2521 	lcall	_kpkd
                           000559  2522 	C$lab6.c$113$1$123 ==.
                                   2523 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:113: direction();
      000644 12 08 41         [24] 2524 	lcall	_direction
                           00055C  2525 	C$lab6.c$114$1$123 ==.
                                   2526 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:114: while (1)
      000647                       2527 00106$:
                           00055C  2528 	C$lab6.c$117$2$124 ==.
                                   2529 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:117: wait();
      000647 12 13 18         [24] 2530 	lcall	_wait
                           00055F  2531 	C$lab6.c$118$2$124 ==.
                                   2532 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:118: if ((count +1) % 2 ==0)
      00064A 85 32 82         [24] 2533 	mov	dpl,_count
      00064D 85 33 83         [24] 2534 	mov	dph,(_count + 1)
      000650 A3               [24] 2535 	inc	dptr
      000651 75 11 02         [24] 2536 	mov	__modsint_PARM_2,#0x02
      000654 75 12 00         [24] 2537 	mov	(__modsint_PARM_2 + 1),#0x00
      000657 12 1B 56         [24] 2538 	lcall	__modsint
      00065A E5 82            [12] 2539 	mov	a,dpl
      00065C 85 83 F0         [24] 2540 	mov	b,dph
      00065F 45 F0            [12] 2541 	orl	a,b
      000661 70 03            [24] 2542 	jnz	00102$
                           000578  2543 	C$lab6.c$121$3$125 ==.
                                   2544 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:121: Steering_func();
      000663 12 07 D3         [24] 2545 	lcall	_Steering_func
      000666                       2546 00102$:
                           00057B  2547 	C$lab6.c$123$2$124 ==.
                                   2548 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:123: if ((count +1) % 8 ==0)
      000666 85 32 82         [24] 2549 	mov	dpl,_count
      000669 85 33 83         [24] 2550 	mov	dph,(_count + 1)
      00066C A3               [24] 2551 	inc	dptr
      00066D 75 11 08         [24] 2552 	mov	__modsint_PARM_2,#0x08
      000670 75 12 00         [24] 2553 	mov	(__modsint_PARM_2 + 1),#0x00
      000673 12 1B 56         [24] 2554 	lcall	__modsint
      000676 E5 82            [12] 2555 	mov	a,dpl
      000678 85 83 F0         [24] 2556 	mov	b,dph
      00067B 45 F0            [12] 2557 	orl	a,b
      00067D 70 C8            [24] 2558 	jnz	00106$
                           000594  2559 	C$lab6.c$125$3$126 ==.
                                   2560 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:125: Change_D();
      00067F 12 07 33         [24] 2561 	lcall	_Change_D
      000682 80 C3            [24] 2562 	sjmp	00106$
                           000599  2563 	C$lab6.c$129$1$123 ==.
                           000599  2564 	XG$main$0$0 ==.
      000684 22               [24] 2565 	ret
                                   2566 ;------------------------------------------------------------
                                   2567 ;Allocation info for local variables in function 'Calibrate'
                                   2568 ;------------------------------------------------------------
                           00059A  2569 	G$Calibrate$0$0 ==.
                           00059A  2570 	C$lab6.c$131$1$123 ==.
                                   2571 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:131: void Calibrate(void)
                                   2572 ;	-----------------------------------------
                                   2573 ;	 function Calibrate
                                   2574 ;	-----------------------------------------
      000685                       2575 _Calibrate:
                           00059A  2576 	C$lab6.c$135$1$128 ==.
                                   2577 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:135: Rudder_cal();
      000685 12 08 F3         [24] 2578 	lcall	_Rudder_cal
                           00059D  2579 	C$lab6.c$136$1$128 ==.
                                   2580 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:136: RUDDER_PW= PW_CENTER_RUDDER;
      000688 85 3C 46         [24] 2581 	mov	_RUDDER_PW,_PW_CENTER_RUDDER
      00068B 85 3D 47         [24] 2582 	mov	(_RUDDER_PW + 1),(_PW_CENTER_RUDDER + 1)
                           0005A3  2583 	C$lab6.c$137$1$128 ==.
                                   2584 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:137: RDR_lo_to_hi = 0xFFFF - RUDDER_PW;
      00068E 74 FF            [12] 2585 	mov	a,#0xFF
      000690 C3               [12] 2586 	clr	c
      000691 95 46            [12] 2587 	subb	a,_RUDDER_PW
      000693 F5 48            [12] 2588 	mov	_RDR_lo_to_hi,a
      000695 74 FF            [12] 2589 	mov	a,#0xFF
      000697 95 47            [12] 2590 	subb	a,(_RUDDER_PW + 1)
      000699 F5 49            [12] 2591 	mov	(_RDR_lo_to_hi + 1),a
                           0005B0  2592 	C$lab6.c$138$1$128 ==.
                                   2593 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:138: PCA0CP0 = RDR_lo_to_hi;
      00069B 85 48 EA         [24] 2594 	mov	((_PCA0CP0 >> 0) & 0xFF),_RDR_lo_to_hi
      00069E 85 49 FA         [24] 2595 	mov	((_PCA0CP0 >> 8) & 0xFF),(_RDR_lo_to_hi + 1)
                           0005B6  2596 	C$lab6.c$140$1$128 ==.
                                   2597 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:140: Angle_cal();
      0006A1 12 0B A0         [24] 2598 	lcall	_Angle_cal
                           0005B9  2599 	C$lab6.c$141$1$128 ==.
                                   2600 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:141: ANGLE_PW = PW_CENTER_ANGLE;
      0006A4 85 42 4A         [24] 2601 	mov	_ANGLE_PW,_PW_CENTER_ANGLE
      0006A7 85 43 4B         [24] 2602 	mov	(_ANGLE_PW + 1),(_PW_CENTER_ANGLE + 1)
                           0005BF  2603 	C$lab6.c$142$1$128 ==.
                                   2604 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:142: AGL_lo_to_hi = 0xFFFF - ANGLE_PW;
      0006AA 74 FF            [12] 2605 	mov	a,#0xFF
      0006AC C3               [12] 2606 	clr	c
      0006AD 95 4A            [12] 2607 	subb	a,_ANGLE_PW
      0006AF F5 4C            [12] 2608 	mov	_AGL_lo_to_hi,a
      0006B1 74 FF            [12] 2609 	mov	a,#0xFF
      0006B3 95 4B            [12] 2610 	subb	a,(_ANGLE_PW + 1)
      0006B5 F5 4D            [12] 2611 	mov	(_AGL_lo_to_hi + 1),a
                           0005CC  2612 	C$lab6.c$143$1$128 ==.
                                   2613 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:143: PCA0CP1 = AGL_lo_to_hi;
      0006B7 85 4C EB         [24] 2614 	mov	((_PCA0CP1 >> 0) & 0xFF),_AGL_lo_to_hi
      0006BA 85 4D FB         [24] 2615 	mov	((_PCA0CP1 >> 8) & 0xFF),(_AGL_lo_to_hi + 1)
                           0005D2  2616 	C$lab6.c$145$1$128 ==.
                                   2617 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:145: Thrust_cal();
      0006BD 12 0E 5B         [24] 2618 	lcall	_Thrust_cal
                           0005D5  2619 	C$lab6.c$146$1$128 ==.
                                   2620 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:146: RTHRUST_PW = PW_NUET_THRUST;
      0006C0 85 36 4E         [24] 2621 	mov	_RTHRUST_PW,_PW_NUET_THRUST
      0006C3 85 37 4F         [24] 2622 	mov	(_RTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
                           0005DB  2623 	C$lab6.c$147$1$128 ==.
                                   2624 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:147: LTHRUST_PW = PW_NUET_THRUST;
      0006C6 85 36 50         [24] 2625 	mov	_LTHRUST_PW,_PW_NUET_THRUST
      0006C9 85 37 51         [24] 2626 	mov	(_LTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
                           0005E1  2627 	C$lab6.c$148$1$128 ==.
                                   2628 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:148: RTRST_lo_to_hi = 0xFFFF - RTHRUST_PW;
      0006CC 74 FF            [12] 2629 	mov	a,#0xFF
      0006CE C3               [12] 2630 	clr	c
      0006CF 95 4E            [12] 2631 	subb	a,_RTHRUST_PW
      0006D1 F5 52            [12] 2632 	mov	_RTRST_lo_to_hi,a
      0006D3 74 FF            [12] 2633 	mov	a,#0xFF
      0006D5 95 4F            [12] 2634 	subb	a,(_RTHRUST_PW + 1)
      0006D7 F5 53            [12] 2635 	mov	(_RTRST_lo_to_hi + 1),a
                           0005EE  2636 	C$lab6.c$149$1$128 ==.
                                   2637 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:149: LTRST_lo_to_hi = 0xFFFF - LTHRUST_PW;
      0006D9 74 FF            [12] 2638 	mov	a,#0xFF
      0006DB C3               [12] 2639 	clr	c
      0006DC 95 50            [12] 2640 	subb	a,_LTHRUST_PW
      0006DE F5 54            [12] 2641 	mov	_LTRST_lo_to_hi,a
      0006E0 74 FF            [12] 2642 	mov	a,#0xFF
      0006E2 95 51            [12] 2643 	subb	a,(_LTHRUST_PW + 1)
      0006E4 F5 55            [12] 2644 	mov	(_LTRST_lo_to_hi + 1),a
                           0005FB  2645 	C$lab6.c$150$1$128 ==.
                           0005FB  2646 	XG$Calibrate$0$0 ==.
      0006E6 22               [24] 2647 	ret
                                   2648 ;------------------------------------------------------------
                                   2649 ;Allocation info for local variables in function 'kpkd'
                                   2650 ;------------------------------------------------------------
                           0005FC  2651 	G$kpkd$0$0 ==.
                           0005FC  2652 	C$lab6.c$152$1$128 ==.
                                   2653 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:152: void kpkd(void)
                                   2654 ;	-----------------------------------------
                                   2655 ;	 function kpkd
                                   2656 ;	-----------------------------------------
      0006E7                       2657 _kpkd:
                           0005FC  2658 	C$lab6.c$154$1$130 ==.
                                   2659 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:154: lcd_clear();
      0006E7 12 01 CC         [24] 2660 	lcall	_lcd_clear
                           0005FF  2661 	C$lab6.c$155$1$130 ==.
                                   2662 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:155: lcd_print("Please enter a kp value:\n ");
      0006EA 74 B9            [12] 2663 	mov	a,#___str_3
      0006EC C0 E0            [24] 2664 	push	acc
      0006EE 74 1B            [12] 2665 	mov	a,#(___str_3 >> 8)
      0006F0 C0 E0            [24] 2666 	push	acc
      0006F2 74 80            [12] 2667 	mov	a,#0x80
      0006F4 C0 E0            [24] 2668 	push	acc
      0006F6 12 01 47         [24] 2669 	lcall	_lcd_print
      0006F9 15 81            [12] 2670 	dec	sp
      0006FB 15 81            [12] 2671 	dec	sp
      0006FD 15 81            [12] 2672 	dec	sp
                           000614  2673 	C$lab6.c$156$1$130 ==.
                                   2674 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:156: kp = kpd_input(0);
      0006FF 75 82 00         [24] 2675 	mov	dpl,#0x00
      000702 12 02 84         [24] 2676 	lcall	_kpd_input
      000705 85 82 5B         [24] 2677 	mov	_kp,dpl
      000708 85 83 5C         [24] 2678 	mov	(_kp + 1),dph
                           000620  2679 	C$lab6.c$157$1$130 ==.
                                   2680 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:157: lcd_clear();
      00070B 12 01 CC         [24] 2681 	lcall	_lcd_clear
                           000623  2682 	C$lab6.c$158$1$130 ==.
                                   2683 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:158: lcd_print("Please enter a kd value:\n ");
      00070E 74 D4            [12] 2684 	mov	a,#___str_4
      000710 C0 E0            [24] 2685 	push	acc
      000712 74 1B            [12] 2686 	mov	a,#(___str_4 >> 8)
      000714 C0 E0            [24] 2687 	push	acc
      000716 74 80            [12] 2688 	mov	a,#0x80
      000718 C0 E0            [24] 2689 	push	acc
      00071A 12 01 47         [24] 2690 	lcall	_lcd_print
      00071D 15 81            [12] 2691 	dec	sp
      00071F 15 81            [12] 2692 	dec	sp
      000721 15 81            [12] 2693 	dec	sp
                           000638  2694 	C$lab6.c$159$1$130 ==.
                                   2695 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:159: kd = kpd_input(0);
      000723 75 82 00         [24] 2696 	mov	dpl,#0x00
      000726 12 02 84         [24] 2697 	lcall	_kpd_input
      000729 85 82 5D         [24] 2698 	mov	_kd,dpl
      00072C 85 83 5E         [24] 2699 	mov	(_kd + 1),dph
                           000644  2700 	C$lab6.c$160$1$130 ==.
                                   2701 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:160: lcd_clear();
      00072F 12 01 CC         [24] 2702 	lcall	_lcd_clear
                           000647  2703 	C$lab6.c$161$1$130 ==.
                           000647  2704 	XG$kpkd$0$0 ==.
      000732 22               [24] 2705 	ret
                                   2706 ;------------------------------------------------------------
                                   2707 ;Allocation info for local variables in function 'Change_D'
                                   2708 ;------------------------------------------------------------
                                   2709 ;distance                  Allocated with name '_Change_D_distance_1_132'
                                   2710 ;------------------------------------------------------------
                           000648  2711 	G$Change_D$0$0 ==.
                           000648  2712 	C$lab6.c$164$1$130 ==.
                                   2713 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:164: void Change_D(void)
                                   2714 ;	-----------------------------------------
                                   2715 ;	 function Change_D
                                   2716 ;	-----------------------------------------
      000733                       2717 _Change_D:
                           000648  2718 	C$lab6.c$168$1$132 ==.
                                   2719 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:168: distance = Read_Ranger();
      000733 12 07 AD         [24] 2720 	lcall	_Read_Ranger
      000736 AE 82            [24] 2721 	mov	r6,dpl
      000738 AF 83            [24] 2722 	mov	r7,dph
                           00064F  2723 	C$lab6.c$169$1$132 ==.
                                   2724 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:169: r_data[0] = 0x51;
      00073A 75 58 51         [24] 2725 	mov	_r_data,#0x51
                           000652  2726 	C$lab6.c$170$1$132 ==.
                                   2727 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:170: i2c_write_data(r_addr, 0, r_data, 1);
      00073D 75 28 58         [24] 2728 	mov	_i2c_write_data_PARM_3,#_r_data
      000740 75 29 00         [24] 2729 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      000743 75 2A 40         [24] 2730 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000746 75 27 00         [24] 2731 	mov	_i2c_write_data_PARM_2,#0x00
      000749 75 2B 01         [24] 2732 	mov	_i2c_write_data_PARM_4,#0x01
      00074C 85 5A 82         [24] 2733 	mov	dpl,_r_addr
      00074F C0 07            [24] 2734 	push	ar7
      000751 C0 06            [24] 2735 	push	ar6
      000753 12 04 5D         [24] 2736 	lcall	_i2c_write_data
      000756 D0 06            [24] 2737 	pop	ar6
      000758 D0 07            [24] 2738 	pop	ar7
                           00066F  2739 	C$lab6.c$171$1$132 ==.
                                   2740 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:171: printf("\r\n%u", distance);
      00075A C0 07            [24] 2741 	push	ar7
      00075C C0 06            [24] 2742 	push	ar6
      00075E C0 06            [24] 2743 	push	ar6
      000760 C0 07            [24] 2744 	push	ar7
      000762 74 EF            [12] 2745 	mov	a,#___str_5
      000764 C0 E0            [24] 2746 	push	acc
      000766 74 1B            [12] 2747 	mov	a,#(___str_5 >> 8)
      000768 C0 E0            [24] 2748 	push	acc
      00076A 74 80            [12] 2749 	mov	a,#0x80
      00076C C0 E0            [24] 2750 	push	acc
      00076E 12 15 46         [24] 2751 	lcall	_printf
      000771 E5 81            [12] 2752 	mov	a,sp
      000773 24 FB            [12] 2753 	add	a,#0xfb
      000775 F5 81            [12] 2754 	mov	sp,a
      000777 D0 06            [24] 2755 	pop	ar6
      000779 D0 07            [24] 2756 	pop	ar7
                           000690  2757 	C$lab6.c$173$1$132 ==.
                                   2758 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:173: if (distance < 50)
      00077B C3               [12] 2759 	clr	c
      00077C EE               [12] 2760 	mov	a,r6
      00077D 94 32            [12] 2761 	subb	a,#0x32
      00077F EF               [12] 2762 	mov	a,r7
      000780 94 00            [12] 2763 	subb	a,#0x00
      000782 50 28            [24] 2764 	jnc	00103$
                           000699  2765 	C$lab6.c$175$2$133 ==.
                                   2766 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:175: desired_D = (desired_D + 1800) % 3600;
      000784 90 00 51         [24] 2767 	mov	dptr,#_desired_D
      000787 E0               [24] 2768 	movx	a,@dptr
      000788 FE               [12] 2769 	mov	r6,a
      000789 A3               [24] 2770 	inc	dptr
      00078A E0               [24] 2771 	movx	a,@dptr
      00078B FF               [12] 2772 	mov	r7,a
      00078C 74 08            [12] 2773 	mov	a,#0x08
      00078E 2E               [12] 2774 	add	a,r6
      00078F F5 82            [12] 2775 	mov	dpl,a
      000791 74 07            [12] 2776 	mov	a,#0x07
      000793 3F               [12] 2777 	addc	a,r7
      000794 F5 83            [12] 2778 	mov	dph,a
      000796 75 11 10         [24] 2779 	mov	__modsint_PARM_2,#0x10
      000799 75 12 0E         [24] 2780 	mov	(__modsint_PARM_2 + 1),#0x0E
      00079C 12 1B 56         [24] 2781 	lcall	__modsint
      00079F E5 82            [12] 2782 	mov	a,dpl
      0007A1 85 83 F0         [24] 2783 	mov	b,dph
      0007A4 90 00 51         [24] 2784 	mov	dptr,#_desired_D
      0007A7 F0               [24] 2785 	movx	@dptr,a
      0007A8 E5 F0            [12] 2786 	mov	a,b
      0007AA A3               [24] 2787 	inc	dptr
      0007AB F0               [24] 2788 	movx	@dptr,a
      0007AC                       2789 00103$:
                           0006C1  2790 	C$lab6.c$177$1$132 ==.
                           0006C1  2791 	XG$Change_D$0$0 ==.
      0007AC 22               [24] 2792 	ret
                                   2793 ;------------------------------------------------------------
                                   2794 ;Allocation info for local variables in function 'Read_Ranger'
                                   2795 ;------------------------------------------------------------
                                   2796 ;read                      Allocated to registers 
                                   2797 ;------------------------------------------------------------
                           0006C2  2798 	G$Read_Ranger$0$0 ==.
                           0006C2  2799 	C$lab6.c$179$1$132 ==.
                                   2800 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:179: unsigned int Read_Ranger(void)
                                   2801 ;	-----------------------------------------
                                   2802 ;	 function Read_Ranger
                                   2803 ;	-----------------------------------------
      0007AD                       2804 _Read_Ranger:
                           0006C2  2805 	C$lab6.c$182$1$135 ==.
                                   2806 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:182: i2c_read_data(r_addr, 2, r_data, 2);
      0007AD 75 2D 58         [24] 2807 	mov	_i2c_read_data_PARM_3,#_r_data
      0007B0 75 2E 00         [24] 2808 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0007B3 75 2F 40         [24] 2809 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0007B6 75 2C 02         [24] 2810 	mov	_i2c_read_data_PARM_2,#0x02
      0007B9 75 30 02         [24] 2811 	mov	_i2c_read_data_PARM_4,#0x02
      0007BC 85 5A 82         [24] 2812 	mov	dpl,_r_addr
      0007BF 12 04 D3         [24] 2813 	lcall	_i2c_read_data
                           0006D7  2814 	C$lab6.c$183$1$135 ==.
                                   2815 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:183: read = (((unsigned int) r_data[0] <<8) | r_data[1]);
      0007C2 AF 58            [24] 2816 	mov	r7,_r_data
      0007C4 7E 00            [12] 2817 	mov	r6,#0x00
      0007C6 AC 59            [24] 2818 	mov	r4,(_r_data + 0x0001)
      0007C8 7D 00            [12] 2819 	mov	r5,#0x00
      0007CA EC               [12] 2820 	mov	a,r4
      0007CB 4E               [12] 2821 	orl	a,r6
      0007CC F5 82            [12] 2822 	mov	dpl,a
      0007CE ED               [12] 2823 	mov	a,r5
      0007CF 4F               [12] 2824 	orl	a,r7
      0007D0 F5 83            [12] 2825 	mov	dph,a
                           0006E7  2826 	C$lab6.c$184$1$135 ==.
                                   2827 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:184: return read;
                           0006E7  2828 	C$lab6.c$185$1$135 ==.
                           0006E7  2829 	XG$Read_Ranger$0$0 ==.
      0007D2 22               [24] 2830 	ret
                                   2831 ;------------------------------------------------------------
                                   2832 ;Allocation info for local variables in function 'Steering_func'
                                   2833 ;------------------------------------------------------------
                           0006E8  2834 	G$Steering_func$0$0 ==.
                           0006E8  2835 	C$lab6.c$187$1$135 ==.
                                   2836 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:187: void Steering_func(void)    ///FUNCTION TO HOLD ACTIONS FOR STEERING
                                   2837 ;	-----------------------------------------
                                   2838 ;	 function Steering_func
                                   2839 ;	-----------------------------------------
      0007D3                       2840 _Steering_func:
                           0006E8  2841 	C$lab6.c$189$1$137 ==.
                                   2842 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:189: actual_D = ReadCompass();
      0007D3 12 08 CD         [24] 2843 	lcall	_ReadCompass
      0007D6 E5 82            [12] 2844 	mov	a,dpl
      0007D8 85 83 F0         [24] 2845 	mov	b,dph
      0007DB 90 00 53         [24] 2846 	mov	dptr,#_actual_D
      0007DE F0               [24] 2847 	movx	@dptr,a
      0007DF E5 F0            [12] 2848 	mov	a,b
      0007E1 A3               [24] 2849 	inc	dptr
      0007E2 F0               [24] 2850 	movx	@dptr,a
                           0006F8  2851 	C$lab6.c$190$1$137 ==.
                                   2852 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:190: lcd_clear();
      0007E3 12 01 CC         [24] 2853 	lcall	_lcd_clear
                           0006FB  2854 	C$lab6.c$191$1$137 ==.
                                   2855 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:191: lcd_print("%d", actual_D);
      0007E6 90 00 53         [24] 2856 	mov	dptr,#_actual_D
      0007E9 E0               [24] 2857 	movx	a,@dptr
      0007EA C0 E0            [24] 2858 	push	acc
      0007EC A3               [24] 2859 	inc	dptr
      0007ED E0               [24] 2860 	movx	a,@dptr
      0007EE C0 E0            [24] 2861 	push	acc
      0007F0 74 F4            [12] 2862 	mov	a,#___str_6
      0007F2 C0 E0            [24] 2863 	push	acc
      0007F4 74 1B            [12] 2864 	mov	a,#(___str_6 >> 8)
      0007F6 C0 E0            [24] 2865 	push	acc
      0007F8 74 80            [12] 2866 	mov	a,#0x80
      0007FA C0 E0            [24] 2867 	push	acc
      0007FC 12 01 47         [24] 2868 	lcall	_lcd_print
      0007FF E5 81            [12] 2869 	mov	a,sp
      000801 24 FB            [12] 2870 	add	a,#0xfb
      000803 F5 81            [12] 2871 	mov	sp,a
                           00071A  2872 	C$lab6.c$192$1$137 ==.
                                   2873 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:192: offset = (unsigned int)((actual_D +3600- desired_D ) % 3600);
      000805 90 00 53         [24] 2874 	mov	dptr,#_actual_D
      000808 E0               [24] 2875 	movx	a,@dptr
      000809 FE               [12] 2876 	mov	r6,a
      00080A A3               [24] 2877 	inc	dptr
      00080B E0               [24] 2878 	movx	a,@dptr
      00080C FF               [12] 2879 	mov	r7,a
      00080D 74 10            [12] 2880 	mov	a,#0x10
      00080F 2E               [12] 2881 	add	a,r6
      000810 FE               [12] 2882 	mov	r6,a
      000811 74 0E            [12] 2883 	mov	a,#0x0E
      000813 3F               [12] 2884 	addc	a,r7
      000814 FF               [12] 2885 	mov	r7,a
      000815 90 00 51         [24] 2886 	mov	dptr,#_desired_D
      000818 E0               [24] 2887 	movx	a,@dptr
      000819 FC               [12] 2888 	mov	r4,a
      00081A A3               [24] 2889 	inc	dptr
      00081B E0               [24] 2890 	movx	a,@dptr
      00081C FD               [12] 2891 	mov	r5,a
      00081D EE               [12] 2892 	mov	a,r6
      00081E C3               [12] 2893 	clr	c
      00081F 9C               [12] 2894 	subb	a,r4
      000820 F5 82            [12] 2895 	mov	dpl,a
      000822 EF               [12] 2896 	mov	a,r7
      000823 9D               [12] 2897 	subb	a,r5
      000824 F5 83            [12] 2898 	mov	dph,a
      000826 75 11 10         [24] 2899 	mov	__modsint_PARM_2,#0x10
      000829 75 12 0E         [24] 2900 	mov	(__modsint_PARM_2 + 1),#0x0E
      00082C 12 1B 56         [24] 2901 	lcall	__modsint
      00082F AE 82            [24] 2902 	mov	r6,dpl
      000831 AF 83            [24] 2903 	mov	r7,dph
      000833 8E 56            [24] 2904 	mov	_offset,r6
      000835 8F 57            [24] 2905 	mov	(_offset + 1),r7
                           00074C  2906 	C$lab6.c$193$1$137 ==.
                                   2907 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:193: Steering_Servo(offset);
      000837 85 56 82         [24] 2908 	mov	dpl,_offset
      00083A 85 57 83         [24] 2909 	mov	dph,(_offset + 1)
      00083D 12 11 8A         [24] 2910 	lcall	_Steering_Servo
                           000755  2911 	C$lab6.c$194$1$137 ==.
                           000755  2912 	XG$Steering_func$0$0 ==.
      000840 22               [24] 2913 	ret
                                   2914 ;------------------------------------------------------------
                                   2915 ;Allocation info for local variables in function 'direction'
                                   2916 ;------------------------------------------------------------
                                   2917 ;value                     Allocated to registers r6 r7 
                                   2918 ;------------------------------------------------------------
                           000756  2919 	G$direction$0$0 ==.
                           000756  2920 	C$lab6.c$196$1$137 ==.
                                   2921 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:196: unsigned int direction(void)        ///ADJUSTS THE VALUES OF DIRECTION SO THE DESIRED DIRECTION IS THE CAR'S 'NORTH'
                                   2922 ;	-----------------------------------------
                                   2923 ;	 function direction
                                   2924 ;	-----------------------------------------
      000841                       2925 _direction:
                           000756  2926 	C$lab6.c$199$1$139 ==.
                                   2927 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:199: count =0;
      000841 E4               [12] 2928 	clr	a
      000842 F5 32            [12] 2929 	mov	_count,a
      000844 F5 33            [12] 2930 	mov	(_count + 1),a
                           00075B  2931 	C$lab6.c$200$1$139 ==.
                                   2932 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:200: while (count < 1);
      000846                       2933 00101$:
      000846 C3               [12] 2934 	clr	c
      000847 E5 32            [12] 2935 	mov	a,_count
      000849 94 01            [12] 2936 	subb	a,#0x01
      00084B E5 33            [12] 2937 	mov	a,(_count + 1)
      00084D 64 80            [12] 2938 	xrl	a,#0x80
      00084F 94 80            [12] 2939 	subb	a,#0x80
      000851 40 F3            [24] 2940 	jc	00101$
                           000768  2941 	C$lab6.c$201$1$139 ==.
                                   2942 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:201: lcd_clear();
      000853 12 01 CC         [24] 2943 	lcall	_lcd_clear
                           00076B  2944 	C$lab6.c$202$1$139 ==.
                                   2945 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:202: lcd_print("Calibration:\nHello world!\n012_345_678:\nabc def ghij");
      000856 74 F7            [12] 2946 	mov	a,#___str_7
      000858 C0 E0            [24] 2947 	push	acc
      00085A 74 1B            [12] 2948 	mov	a,#(___str_7 >> 8)
      00085C C0 E0            [24] 2949 	push	acc
      00085E 74 80            [12] 2950 	mov	a,#0x80
      000860 C0 E0            [24] 2951 	push	acc
      000862 12 01 47         [24] 2952 	lcall	_lcd_print
      000865 15 81            [12] 2953 	dec	sp
      000867 15 81            [12] 2954 	dec	sp
      000869 15 81            [12] 2955 	dec	sp
                           000780  2956 	C$lab6.c$203$1$139 ==.
                                   2957 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:203: start();
      00086B 12 13 08         [24] 2958 	lcall	_start
                           000783  2959 	C$lab6.c$204$1$139 ==.
                                   2960 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:204: lcd_clear();
      00086E 12 01 CC         [24] 2961 	lcall	_lcd_clear
                           000786  2962 	C$lab6.c$205$1$139 ==.
                                   2963 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:205: value = kpd_input(0);
      000871 75 82 00         [24] 2964 	mov	dpl,#0x00
      000874 12 02 84         [24] 2965 	lcall	_kpd_input
      000877 AE 82            [24] 2966 	mov	r6,dpl
      000879 AF 83            [24] 2967 	mov	r7,dph
                           000790  2968 	C$lab6.c$206$1$139 ==.
                                   2969 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:206: lcd_clear();
      00087B C0 07            [24] 2970 	push	ar7
      00087D C0 06            [24] 2971 	push	ar6
      00087F 12 01 CC         [24] 2972 	lcall	_lcd_clear
      000882 D0 06            [24] 2973 	pop	ar6
      000884 D0 07            [24] 2974 	pop	ar7
                           00079B  2975 	C$lab6.c$207$1$139 ==.
                                   2976 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:207: lcd_print("\r\nThe desired direction is: %d", value);
      000886 C0 07            [24] 2977 	push	ar7
      000888 C0 06            [24] 2978 	push	ar6
      00088A C0 06            [24] 2979 	push	ar6
      00088C C0 07            [24] 2980 	push	ar7
      00088E 74 2B            [12] 2981 	mov	a,#___str_8
      000890 C0 E0            [24] 2982 	push	acc
      000892 74 1C            [12] 2983 	mov	a,#(___str_8 >> 8)
      000894 C0 E0            [24] 2984 	push	acc
      000896 74 80            [12] 2985 	mov	a,#0x80
      000898 C0 E0            [24] 2986 	push	acc
      00089A 12 01 47         [24] 2987 	lcall	_lcd_print
      00089D E5 81            [12] 2988 	mov	a,sp
      00089F 24 FB            [12] 2989 	add	a,#0xfb
      0008A1 F5 81            [12] 2990 	mov	sp,a
      0008A3 D0 06            [24] 2991 	pop	ar6
      0008A5 D0 07            [24] 2992 	pop	ar7
                           0007BC  2993 	C$lab6.c$208$1$139 ==.
                                   2994 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:208: printf("\r\nThe desired direction is: %d", value);
      0008A7 C0 07            [24] 2995 	push	ar7
      0008A9 C0 06            [24] 2996 	push	ar6
      0008AB C0 06            [24] 2997 	push	ar6
      0008AD C0 07            [24] 2998 	push	ar7
      0008AF 74 2B            [12] 2999 	mov	a,#___str_8
      0008B1 C0 E0            [24] 3000 	push	acc
      0008B3 74 1C            [12] 3001 	mov	a,#(___str_8 >> 8)
      0008B5 C0 E0            [24] 3002 	push	acc
      0008B7 74 80            [12] 3003 	mov	a,#0x80
      0008B9 C0 E0            [24] 3004 	push	acc
      0008BB 12 15 46         [24] 3005 	lcall	_printf
      0008BE E5 81            [12] 3006 	mov	a,sp
      0008C0 24 FB            [12] 3007 	add	a,#0xfb
      0008C2 F5 81            [12] 3008 	mov	sp,a
      0008C4 D0 06            [24] 3009 	pop	ar6
      0008C6 D0 07            [24] 3010 	pop	ar7
                           0007DD  3011 	C$lab6.c$210$1$139 ==.
                                   3012 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:210: return value;
      0008C8 8E 82            [24] 3013 	mov	dpl,r6
      0008CA 8F 83            [24] 3014 	mov	dph,r7
                           0007E1  3015 	C$lab6.c$211$1$139 ==.
                           0007E1  3016 	XG$direction$0$0 ==.
      0008CC 22               [24] 3017 	ret
                                   3018 ;------------------------------------------------------------
                                   3019 ;Allocation info for local variables in function 'ReadCompass'
                                   3020 ;------------------------------------------------------------
                                   3021 ;Data                      Allocated with name '_ReadCompass_Data_1_141'
                                   3022 ;Crange                    Allocated to registers 
                                   3023 ;addr                      Allocated to registers 
                                   3024 ;------------------------------------------------------------
                           0007E2  3025 	G$ReadCompass$0$0 ==.
                           0007E2  3026 	C$lab6.c$213$1$139 ==.
                                   3027 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:213: unsigned int ReadCompass(void)
                                   3028 ;	-----------------------------------------
                                   3029 ;	 function ReadCompass
                                   3030 ;	-----------------------------------------
      0008CD                       3031 _ReadCompass:
                           0007E2  3032 	C$lab6.c$219$1$141 ==.
                                   3033 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:219: i2c_read_data(addr, 2,Data,2);
      0008CD 75 2D 63         [24] 3034 	mov	_i2c_read_data_PARM_3,#_ReadCompass_Data_1_141
      0008D0 75 2E 00         [24] 3035 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0008D3 75 2F 40         [24] 3036 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0008D6 75 2C 02         [24] 3037 	mov	_i2c_read_data_PARM_2,#0x02
      0008D9 75 30 02         [24] 3038 	mov	_i2c_read_data_PARM_4,#0x02
      0008DC 75 82 C0         [24] 3039 	mov	dpl,#0xC0
      0008DF 12 04 D3         [24] 3040 	lcall	_i2c_read_data
                           0007F7  3041 	C$lab6.c$220$1$141 ==.
                                   3042 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:220: Crange = ((unsigned int) Data[0] << 8 | Data[1]);
      0008E2 AF 63            [24] 3043 	mov	r7,_ReadCompass_Data_1_141
      0008E4 7E 00            [12] 3044 	mov	r6,#0x00
      0008E6 AC 64            [24] 3045 	mov	r4,(_ReadCompass_Data_1_141 + 0x0001)
      0008E8 7D 00            [12] 3046 	mov	r5,#0x00
      0008EA EC               [12] 3047 	mov	a,r4
      0008EB 4E               [12] 3048 	orl	a,r6
      0008EC F5 82            [12] 3049 	mov	dpl,a
      0008EE ED               [12] 3050 	mov	a,r5
      0008EF 4F               [12] 3051 	orl	a,r7
      0008F0 F5 83            [12] 3052 	mov	dph,a
                           000807  3053 	C$lab6.c$221$1$141 ==.
                                   3054 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:221: return Crange;
                           000807  3055 	C$lab6.c$222$1$141 ==.
                           000807  3056 	XG$ReadCompass$0$0 ==.
      0008F2 22               [24] 3057 	ret
                                   3058 ;------------------------------------------------------------
                                   3059 ;Allocation info for local variables in function 'Rudder_cal'
                                   3060 ;------------------------------------------------------------
                                   3061 ;st                        Allocated to registers r7 
                                   3062 ;value                     Allocated with name '_Rudder_cal_value_1_143'
                                   3063 ;times                     Allocated with name '_Rudder_cal_times_1_143'
                                   3064 ;------------------------------------------------------------
                           000808  3065 	G$Rudder_cal$0$0 ==.
                           000808  3066 	C$lab6.c$224$1$141 ==.
                                   3067 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:224: void Rudder_cal(void)
                                   3068 ;	-----------------------------------------
                                   3069 ;	 function Rudder_cal
                                   3070 ;	-----------------------------------------
      0008F3                       3071 _Rudder_cal:
                           000808  3072 	C$lab6.c$227$1$141 ==.
                                   3073 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:227: __xdata int value =0;
      0008F3 90 00 55         [24] 3074 	mov	dptr,#_Rudder_cal_value_1_143
      0008F6 E4               [12] 3075 	clr	a
      0008F7 F0               [24] 3076 	movx	@dptr,a
      0008F8 A3               [24] 3077 	inc	dptr
      0008F9 F0               [24] 3078 	movx	@dptr,a
                           00080F  3079 	C$lab6.c$228$1$141 ==.
                                   3080 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:228: __xdata int times =0;
      0008FA 90 00 57         [24] 3081 	mov	dptr,#_Rudder_cal_times_1_143
      0008FD F0               [24] 3082 	movx	@dptr,a
      0008FE A3               [24] 3083 	inc	dptr
      0008FF F0               [24] 3084 	movx	@dptr,a
                           000815  3085 	C$lab6.c$229$1$143 ==.
                                   3086 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:229: count =0;
      000900 F5 32            [12] 3087 	mov	_count,a
      000902 F5 33            [12] 3088 	mov	(_count + 1),a
                           000819  3089 	C$lab6.c$230$1$143 ==.
                                   3090 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:230: lcd_clear();
      000904 12 01 CC         [24] 3091 	lcall	_lcd_clear
                           00081C  3092 	C$lab6.c$231$1$143 ==.
                                   3093 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:231: lcd_print("Rudder Calibration");
      000907 74 4A            [12] 3094 	mov	a,#___str_9
      000909 C0 E0            [24] 3095 	push	acc
      00090B 74 1C            [12] 3096 	mov	a,#(___str_9 >> 8)
      00090D C0 E0            [24] 3097 	push	acc
      00090F 74 80            [12] 3098 	mov	a,#0x80
      000911 C0 E0            [24] 3099 	push	acc
      000913 12 01 47         [24] 3100 	lcall	_lcd_print
      000916 15 81            [12] 3101 	dec	sp
      000918 15 81            [12] 3102 	dec	sp
      00091A 15 81            [12] 3103 	dec	sp
                           000831  3104 	C$lab6.c$232$1$143 ==.
                                   3105 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:232: while (count < 50);
      00091C                       3106 00101$:
      00091C C3               [12] 3107 	clr	c
      00091D E5 32            [12] 3108 	mov	a,_count
      00091F 94 32            [12] 3109 	subb	a,#0x32
      000921 E5 33            [12] 3110 	mov	a,(_count + 1)
      000923 64 80            [12] 3111 	xrl	a,#0x80
      000925 94 80            [12] 3112 	subb	a,#0x80
      000927 40 F3            [24] 3113 	jc	00101$
                           00083E  3114 	C$lab6.c$233$1$143 ==.
                                   3115 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:233: lcd_clear();
      000929 12 01 CC         [24] 3116 	lcall	_lcd_clear
                           000841  3117 	C$lab6.c$237$2$144 ==.
                                   3118 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:237: count =0;
      00092C E4               [12] 3119 	clr	a
      00092D F5 32            [12] 3120 	mov	_count,a
      00092F F5 33            [12] 3121 	mov	(_count + 1),a
                           000846  3122 	C$lab6.c$238$2$144 ==.
                                   3123 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:238: while (count < 1);
      000931                       3124 00104$:
      000931 C3               [12] 3125 	clr	c
      000932 E5 32            [12] 3126 	mov	a,_count
      000934 94 01            [12] 3127 	subb	a,#0x01
      000936 E5 33            [12] 3128 	mov	a,(_count + 1)
      000938 64 80            [12] 3129 	xrl	a,#0x80
      00093A 94 80            [12] 3130 	subb	a,#0x80
      00093C 40 F3            [24] 3131 	jc	00104$
                           000853  3132 	C$lab6.c$239$2$144 ==.
                                   3133 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:239: lcd_clear();
      00093E 12 01 CC         [24] 3134 	lcall	_lcd_clear
                           000856  3135 	C$lab6.c$240$2$144 ==.
                                   3136 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:240: lcd_print("go left: press 1\n go right: press 2\nPress * for next screen");
      000941 74 5D            [12] 3137 	mov	a,#___str_10
      000943 C0 E0            [24] 3138 	push	acc
      000945 74 1C            [12] 3139 	mov	a,#(___str_10 >> 8)
      000947 C0 E0            [24] 3140 	push	acc
      000949 74 80            [12] 3141 	mov	a,#0x80
      00094B C0 E0            [24] 3142 	push	acc
      00094D 12 01 47         [24] 3143 	lcall	_lcd_print
      000950 15 81            [12] 3144 	dec	sp
      000952 15 81            [12] 3145 	dec	sp
      000954 15 81            [12] 3146 	dec	sp
                           00086B  3147 	C$lab6.c$241$2$144 ==.
                                   3148 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:241: start();
      000956 12 13 08         [24] 3149 	lcall	_start
                           00086E  3150 	C$lab6.c$242$2$144 ==.
                                   3151 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:242: lcd_clear();
      000959 12 01 CC         [24] 3152 	lcall	_lcd_clear
                           000871  3153 	C$lab6.c$243$2$144 ==.
                                   3154 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:243: lcd_print("\n confirm: press 3\n press * to begin");
      00095C 74 99            [12] 3155 	mov	a,#___str_11
      00095E C0 E0            [24] 3156 	push	acc
      000960 74 1C            [12] 3157 	mov	a,#(___str_11 >> 8)
      000962 C0 E0            [24] 3158 	push	acc
      000964 74 80            [12] 3159 	mov	a,#0x80
      000966 C0 E0            [24] 3160 	push	acc
      000968 12 01 47         [24] 3161 	lcall	_lcd_print
      00096B 15 81            [12] 3162 	dec	sp
      00096D 15 81            [12] 3163 	dec	sp
      00096F 15 81            [12] 3164 	dec	sp
                           000886  3165 	C$lab6.c$244$2$144 ==.
                                   3166 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:244: start();
      000971 12 13 08         [24] 3167 	lcall	_start
                           000889  3168 	C$lab6.c$245$2$144 ==.
                                   3169 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:245: st =0;
      000974 7F 00            [12] 3170 	mov	r7,#0x00
                           00088B  3171 	C$lab6.c$246$5$147 ==.
                                   3172 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:246: while (1)
      000976                       3173 00146$:
                           00088B  3174 	C$lab6.c$248$3$145 ==.
                                   3175 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:248: printf("\r\n %u",RUDDER_PW);
      000976 C0 07            [24] 3176 	push	ar7
      000978 C0 46            [24] 3177 	push	_RUDDER_PW
      00097A C0 47            [24] 3178 	push	(_RUDDER_PW + 1)
      00097C 74 BE            [12] 3179 	mov	a,#___str_12
      00097E C0 E0            [24] 3180 	push	acc
      000980 74 1C            [12] 3181 	mov	a,#(___str_12 >> 8)
      000982 C0 E0            [24] 3182 	push	acc
      000984 74 80            [12] 3183 	mov	a,#0x80
      000986 C0 E0            [24] 3184 	push	acc
      000988 12 15 46         [24] 3185 	lcall	_printf
      00098B E5 81            [12] 3186 	mov	a,sp
      00098D 24 FB            [12] 3187 	add	a,#0xfb
      00098F F5 81            [12] 3188 	mov	sp,a
      000991 D0 07            [24] 3189 	pop	ar7
                           0008A8  3190 	C$lab6.c$249$3$145 ==.
                                   3191 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:249: RDR_lo_to_hi = 0xFFFF - RUDDER_PW;
      000993 74 FF            [12] 3192 	mov	a,#0xFF
      000995 C3               [12] 3193 	clr	c
      000996 95 46            [12] 3194 	subb	a,_RUDDER_PW
      000998 F5 48            [12] 3195 	mov	_RDR_lo_to_hi,a
      00099A 74 FF            [12] 3196 	mov	a,#0xFF
      00099C 95 47            [12] 3197 	subb	a,(_RUDDER_PW + 1)
      00099E F5 49            [12] 3198 	mov	(_RDR_lo_to_hi + 1),a
                           0008B5  3199 	C$lab6.c$250$3$145 ==.
                                   3200 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:250: PCA0CP0 = RDR_lo_to_hi;
      0009A0 85 48 EA         [24] 3201 	mov	((_PCA0CP0 >> 0) & 0xFF),_RDR_lo_to_hi
      0009A3 85 49 FA         [24] 3202 	mov	((_PCA0CP0 >> 8) & 0xFF),(_RDR_lo_to_hi + 1)
                           0008BB  3203 	C$lab6.c$252$3$145 ==.
                                   3204 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:252: if (times == 0 )
      0009A6 90 00 57         [24] 3205 	mov	dptr,#_Rudder_cal_times_1_143
      0009A9 E0               [24] 3206 	movx	a,@dptr
      0009AA FD               [12] 3207 	mov	r5,a
      0009AB A3               [24] 3208 	inc	dptr
      0009AC E0               [24] 3209 	movx	a,@dptr
      0009AD FE               [12] 3210 	mov	r6,a
      0009AE 4D               [12] 3211 	orl	a,r5
      0009AF 60 03            [24] 3212 	jz	00215$
      0009B1 02 0A 5C         [24] 3213 	ljmp	00143$
      0009B4                       3214 00215$:
                           0008C9  3215 	C$lab6.c$254$4$146 ==.
                                   3216 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:254: if (value ==0)
      0009B4 90 00 55         [24] 3217 	mov	dptr,#_Rudder_cal_value_1_143
      0009B7 E0               [24] 3218 	movx	a,@dptr
      0009B8 FD               [12] 3219 	mov	r5,a
      0009B9 A3               [24] 3220 	inc	dptr
      0009BA E0               [24] 3221 	movx	a,@dptr
      0009BB FE               [12] 3222 	mov	r6,a
      0009BC 4D               [12] 3223 	orl	a,r5
      0009BD 70 27            [24] 3224 	jnz	00110$
                           0008D4  3225 	C$lab6.c$256$5$147 ==.
                                   3226 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:256: lcd_clear();
      0009BF C0 07            [24] 3227 	push	ar7
      0009C1 12 01 CC         [24] 3228 	lcall	_lcd_clear
                           0008D9  3229 	C$lab6.c$257$5$147 ==.
                                   3230 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:257: lcd_print("Now calibrating Min_PW\n");
      0009C4 74 C4            [12] 3231 	mov	a,#___str_13
      0009C6 C0 E0            [24] 3232 	push	acc
      0009C8 74 1C            [12] 3233 	mov	a,#(___str_13 >> 8)
      0009CA C0 E0            [24] 3234 	push	acc
      0009CC 74 80            [12] 3235 	mov	a,#0x80
      0009CE C0 E0            [24] 3236 	push	acc
      0009D0 12 01 47         [24] 3237 	lcall	_lcd_print
      0009D3 15 81            [12] 3238 	dec	sp
      0009D5 15 81            [12] 3239 	dec	sp
      0009D7 15 81            [12] 3240 	dec	sp
      0009D9 D0 07            [24] 3241 	pop	ar7
                           0008F0  3242 	C$lab6.c$258$5$147 ==.
                                   3243 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:258: if (st ==0 ) RUDDER_PW = PW_LEFT_RUDDER;
      0009DB EF               [12] 3244 	mov	a,r7
      0009DC 70 06            [24] 3245 	jnz	00108$
      0009DE 85 3A 46         [24] 3246 	mov	_RUDDER_PW,_PW_LEFT_RUDDER
      0009E1 85 3B 47         [24] 3247 	mov	(_RUDDER_PW + 1),(_PW_LEFT_RUDDER + 1)
      0009E4                       3248 00108$:
                           0008F9  3249 	C$lab6.c$259$5$147 ==.
                                   3250 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:259: st =1;
      0009E4 7F 01            [12] 3251 	mov	r7,#0x01
      0009E6                       3252 00110$:
                           0008FB  3253 	C$lab6.c$261$4$146 ==.
                                   3254 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:261: value = kpd_input(1);
      0009E6 75 82 01         [24] 3255 	mov	dpl,#0x01
      0009E9 C0 07            [24] 3256 	push	ar7
      0009EB 12 02 84         [24] 3257 	lcall	_kpd_input
      0009EE AD 82            [24] 3258 	mov	r5,dpl
      0009F0 AE 83            [24] 3259 	mov	r6,dph
      0009F2 D0 07            [24] 3260 	pop	ar7
      0009F4 90 00 55         [24] 3261 	mov	dptr,#_Rudder_cal_value_1_143
      0009F7 ED               [12] 3262 	mov	a,r5
      0009F8 F0               [24] 3263 	movx	@dptr,a
      0009F9 EE               [12] 3264 	mov	a,r6
      0009FA A3               [24] 3265 	inc	dptr
      0009FB F0               [24] 3266 	movx	@dptr,a
                           000911  3267 	C$lab6.c$262$4$146 ==.
                                   3268 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:262: if (value == 1)
      0009FC BD 01 12         [24] 3269 	cjne	r5,#0x01,00117$
      0009FF BE 00 0F         [24] 3270 	cjne	r6,#0x00,00117$
                           000917  3271 	C$lab6.c$264$5$148 ==.
                                   3272 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:264: RUDDER_PW -= 20;
      000A02 E5 46            [12] 3273 	mov	a,_RUDDER_PW
      000A04 24 EC            [12] 3274 	add	a,#0xEC
      000A06 F5 46            [12] 3275 	mov	_RUDDER_PW,a
      000A08 E5 47            [12] 3276 	mov	a,(_RUDDER_PW + 1)
      000A0A 34 FF            [12] 3277 	addc	a,#0xFF
      000A0C F5 47            [12] 3278 	mov	(_RUDDER_PW + 1),a
      000A0E 02 09 76         [24] 3279 	ljmp	00146$
      000A11                       3280 00117$:
                           000926  3281 	C$lab6.c$266$4$146 ==.
                                   3282 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:266: else if (value==2)
      000A11 90 00 55         [24] 3283 	mov	dptr,#_Rudder_cal_value_1_143
      000A14 E0               [24] 3284 	movx	a,@dptr
      000A15 FD               [12] 3285 	mov	r5,a
      000A16 A3               [24] 3286 	inc	dptr
      000A17 E0               [24] 3287 	movx	a,@dptr
      000A18 FE               [12] 3288 	mov	r6,a
      000A19 BD 02 11         [24] 3289 	cjne	r5,#0x02,00114$
      000A1C BE 00 0E         [24] 3290 	cjne	r6,#0x00,00114$
                           000934  3291 	C$lab6.c$268$5$149 ==.
                                   3292 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:268: RUDDER_PW += 20;
      000A1F 74 14            [12] 3293 	mov	a,#0x14
      000A21 25 46            [12] 3294 	add	a,_RUDDER_PW
      000A23 F5 46            [12] 3295 	mov	_RUDDER_PW,a
      000A25 E4               [12] 3296 	clr	a
      000A26 35 47            [12] 3297 	addc	a,(_RUDDER_PW + 1)
      000A28 F5 47            [12] 3298 	mov	(_RUDDER_PW + 1),a
      000A2A 02 09 76         [24] 3299 	ljmp	00146$
      000A2D                       3300 00114$:
                           000942  3301 	C$lab6.c$270$4$146 ==.
                                   3302 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:270: else if (value == 3)
      000A2D 90 00 55         [24] 3303 	mov	dptr,#_Rudder_cal_value_1_143
      000A30 E0               [24] 3304 	movx	a,@dptr
      000A31 FD               [12] 3305 	mov	r5,a
      000A32 A3               [24] 3306 	inc	dptr
      000A33 E0               [24] 3307 	movx	a,@dptr
      000A34 FE               [12] 3308 	mov	r6,a
      000A35 BD 03 05         [24] 3309 	cjne	r5,#0x03,00222$
      000A38 BE 00 02         [24] 3310 	cjne	r6,#0x00,00222$
      000A3B 80 03            [24] 3311 	sjmp	00223$
      000A3D                       3312 00222$:
      000A3D 02 09 76         [24] 3313 	ljmp	00146$
      000A40                       3314 00223$:
                           000955  3315 	C$lab6.c$272$5$150 ==.
                                   3316 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:272: times++;
      000A40 90 00 57         [24] 3317 	mov	dptr,#_Rudder_cal_times_1_143
      000A43 E0               [24] 3318 	movx	a,@dptr
      000A44 24 01            [12] 3319 	add	a,#0x01
      000A46 F0               [24] 3320 	movx	@dptr,a
      000A47 A3               [24] 3321 	inc	dptr
      000A48 E0               [24] 3322 	movx	a,@dptr
      000A49 34 00            [12] 3323 	addc	a,#0x00
      000A4B F0               [24] 3324 	movx	@dptr,a
                           000961  3325 	C$lab6.c$273$5$150 ==.
                                   3326 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:273: value =0;
      000A4C 90 00 55         [24] 3327 	mov	dptr,#_Rudder_cal_value_1_143
      000A4F E4               [12] 3328 	clr	a
      000A50 F0               [24] 3329 	movx	@dptr,a
      000A51 A3               [24] 3330 	inc	dptr
      000A52 F0               [24] 3331 	movx	@dptr,a
                           000968  3332 	C$lab6.c$274$5$150 ==.
                                   3333 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:274: PW_LEFT_RUDDER = RUDDER_PW;
      000A53 85 46 3A         [24] 3334 	mov	_PW_LEFT_RUDDER,_RUDDER_PW
      000A56 85 47 3B         [24] 3335 	mov	(_PW_LEFT_RUDDER + 1),(_RUDDER_PW + 1)
      000A59 02 09 76         [24] 3336 	ljmp	00146$
      000A5C                       3337 00143$:
                           000971  3338 	C$lab6.c$277$3$145 ==.
                                   3339 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:277: else if (times ==1)
      000A5C 90 00 57         [24] 3340 	mov	dptr,#_Rudder_cal_times_1_143
      000A5F E0               [24] 3341 	movx	a,@dptr
      000A60 FD               [12] 3342 	mov	r5,a
      000A61 A3               [24] 3343 	inc	dptr
      000A62 E0               [24] 3344 	movx	a,@dptr
      000A63 FE               [12] 3345 	mov	r6,a
      000A64 BD 01 05         [24] 3346 	cjne	r5,#0x01,00224$
      000A67 BE 00 02         [24] 3347 	cjne	r6,#0x00,00224$
      000A6A 80 03            [24] 3348 	sjmp	00225$
      000A6C                       3349 00224$:
      000A6C 02 0B 12         [24] 3350 	ljmp	00140$
      000A6F                       3351 00225$:
                           000984  3352 	C$lab6.c$279$4$151 ==.
                                   3353 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:279: if (value ==0)
      000A6F 90 00 55         [24] 3354 	mov	dptr,#_Rudder_cal_value_1_143
      000A72 E0               [24] 3355 	movx	a,@dptr
      000A73 FD               [12] 3356 	mov	r5,a
      000A74 A3               [24] 3357 	inc	dptr
      000A75 E0               [24] 3358 	movx	a,@dptr
      000A76 FE               [12] 3359 	mov	r6,a
      000A77 4D               [12] 3360 	orl	a,r5
      000A78 70 22            [24] 3361 	jnz	00120$
                           00098F  3362 	C$lab6.c$281$5$152 ==.
                                   3363 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:281: lcd_clear();
      000A7A C0 07            [24] 3364 	push	ar7
      000A7C 12 01 CC         [24] 3365 	lcall	_lcd_clear
                           000994  3366 	C$lab6.c$282$5$152 ==.
                                   3367 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:282: lcd_print("Now calibrating Cen_PW");
      000A7F 74 DC            [12] 3368 	mov	a,#___str_14
      000A81 C0 E0            [24] 3369 	push	acc
      000A83 74 1C            [12] 3370 	mov	a,#(___str_14 >> 8)
      000A85 C0 E0            [24] 3371 	push	acc
      000A87 74 80            [12] 3372 	mov	a,#0x80
      000A89 C0 E0            [24] 3373 	push	acc
      000A8B 12 01 47         [24] 3374 	lcall	_lcd_print
      000A8E 15 81            [12] 3375 	dec	sp
      000A90 15 81            [12] 3376 	dec	sp
      000A92 15 81            [12] 3377 	dec	sp
      000A94 D0 07            [24] 3378 	pop	ar7
                           0009AB  3379 	C$lab6.c$283$5$152 ==.
                                   3380 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:283: RUDDER_PW = PW_CENTER_RUDDER;
      000A96 85 3C 46         [24] 3381 	mov	_RUDDER_PW,_PW_CENTER_RUDDER
      000A99 85 3D 47         [24] 3382 	mov	(_RUDDER_PW + 1),(_PW_CENTER_RUDDER + 1)
      000A9C                       3383 00120$:
                           0009B1  3384 	C$lab6.c$285$4$151 ==.
                                   3385 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:285: value = kpd_input(1);
      000A9C 75 82 01         [24] 3386 	mov	dpl,#0x01
      000A9F C0 07            [24] 3387 	push	ar7
      000AA1 12 02 84         [24] 3388 	lcall	_kpd_input
      000AA4 AD 82            [24] 3389 	mov	r5,dpl
      000AA6 AE 83            [24] 3390 	mov	r6,dph
      000AA8 D0 07            [24] 3391 	pop	ar7
      000AAA 90 00 55         [24] 3392 	mov	dptr,#_Rudder_cal_value_1_143
      000AAD ED               [12] 3393 	mov	a,r5
      000AAE F0               [24] 3394 	movx	@dptr,a
      000AAF EE               [12] 3395 	mov	a,r6
      000AB0 A3               [24] 3396 	inc	dptr
      000AB1 F0               [24] 3397 	movx	@dptr,a
                           0009C7  3398 	C$lab6.c$286$4$151 ==.
                                   3399 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:286: if (value == 1)
      000AB2 BD 01 12         [24] 3400 	cjne	r5,#0x01,00127$
      000AB5 BE 00 0F         [24] 3401 	cjne	r6,#0x00,00127$
                           0009CD  3402 	C$lab6.c$288$5$153 ==.
                                   3403 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:288: RUDDER_PW -= 20;
      000AB8 E5 46            [12] 3404 	mov	a,_RUDDER_PW
      000ABA 24 EC            [12] 3405 	add	a,#0xEC
      000ABC F5 46            [12] 3406 	mov	_RUDDER_PW,a
      000ABE E5 47            [12] 3407 	mov	a,(_RUDDER_PW + 1)
      000AC0 34 FF            [12] 3408 	addc	a,#0xFF
      000AC2 F5 47            [12] 3409 	mov	(_RUDDER_PW + 1),a
      000AC4 02 09 76         [24] 3410 	ljmp	00146$
      000AC7                       3411 00127$:
                           0009DC  3412 	C$lab6.c$290$4$151 ==.
                                   3413 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:290: else if (value==2)
      000AC7 90 00 55         [24] 3414 	mov	dptr,#_Rudder_cal_value_1_143
      000ACA E0               [24] 3415 	movx	a,@dptr
      000ACB FD               [12] 3416 	mov	r5,a
      000ACC A3               [24] 3417 	inc	dptr
      000ACD E0               [24] 3418 	movx	a,@dptr
      000ACE FE               [12] 3419 	mov	r6,a
      000ACF BD 02 11         [24] 3420 	cjne	r5,#0x02,00124$
      000AD2 BE 00 0E         [24] 3421 	cjne	r6,#0x00,00124$
                           0009EA  3422 	C$lab6.c$292$5$154 ==.
                                   3423 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:292: RUDDER_PW += 20;
      000AD5 74 14            [12] 3424 	mov	a,#0x14
      000AD7 25 46            [12] 3425 	add	a,_RUDDER_PW
      000AD9 F5 46            [12] 3426 	mov	_RUDDER_PW,a
      000ADB E4               [12] 3427 	clr	a
      000ADC 35 47            [12] 3428 	addc	a,(_RUDDER_PW + 1)
      000ADE F5 47            [12] 3429 	mov	(_RUDDER_PW + 1),a
      000AE0 02 09 76         [24] 3430 	ljmp	00146$
      000AE3                       3431 00124$:
                           0009F8  3432 	C$lab6.c$294$4$151 ==.
                                   3433 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:294: else if (value == 3)
      000AE3 90 00 55         [24] 3434 	mov	dptr,#_Rudder_cal_value_1_143
      000AE6 E0               [24] 3435 	movx	a,@dptr
      000AE7 FD               [12] 3436 	mov	r5,a
      000AE8 A3               [24] 3437 	inc	dptr
      000AE9 E0               [24] 3438 	movx	a,@dptr
      000AEA FE               [12] 3439 	mov	r6,a
      000AEB BD 03 05         [24] 3440 	cjne	r5,#0x03,00231$
      000AEE BE 00 02         [24] 3441 	cjne	r6,#0x00,00231$
      000AF1 80 03            [24] 3442 	sjmp	00232$
      000AF3                       3443 00231$:
      000AF3 02 09 76         [24] 3444 	ljmp	00146$
      000AF6                       3445 00232$:
                           000A0B  3446 	C$lab6.c$296$5$155 ==.
                                   3447 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:296: times++;
      000AF6 90 00 57         [24] 3448 	mov	dptr,#_Rudder_cal_times_1_143
      000AF9 E0               [24] 3449 	movx	a,@dptr
      000AFA 24 01            [12] 3450 	add	a,#0x01
      000AFC F0               [24] 3451 	movx	@dptr,a
      000AFD A3               [24] 3452 	inc	dptr
      000AFE E0               [24] 3453 	movx	a,@dptr
      000AFF 34 00            [12] 3454 	addc	a,#0x00
      000B01 F0               [24] 3455 	movx	@dptr,a
                           000A17  3456 	C$lab6.c$297$5$155 ==.
                                   3457 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:297: value=0;
      000B02 90 00 55         [24] 3458 	mov	dptr,#_Rudder_cal_value_1_143
      000B05 E4               [12] 3459 	clr	a
      000B06 F0               [24] 3460 	movx	@dptr,a
      000B07 A3               [24] 3461 	inc	dptr
      000B08 F0               [24] 3462 	movx	@dptr,a
                           000A1E  3463 	C$lab6.c$298$5$155 ==.
                                   3464 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:298: PW_CENTER_RUDDER = RUDDER_PW;
      000B09 85 46 3C         [24] 3465 	mov	_PW_CENTER_RUDDER,_RUDDER_PW
      000B0C 85 47 3D         [24] 3466 	mov	(_PW_CENTER_RUDDER + 1),(_RUDDER_PW + 1)
      000B0F 02 09 76         [24] 3467 	ljmp	00146$
      000B12                       3468 00140$:
                           000A27  3469 	C$lab6.c$303$4$156 ==.
                                   3470 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:303: if (value==0)
      000B12 90 00 55         [24] 3471 	mov	dptr,#_Rudder_cal_value_1_143
      000B15 E0               [24] 3472 	movx	a,@dptr
      000B16 FD               [12] 3473 	mov	r5,a
      000B17 A3               [24] 3474 	inc	dptr
      000B18 E0               [24] 3475 	movx	a,@dptr
      000B19 FE               [12] 3476 	mov	r6,a
      000B1A 4D               [12] 3477 	orl	a,r5
      000B1B 70 22            [24] 3478 	jnz	00130$
                           000A32  3479 	C$lab6.c$305$5$157 ==.
                                   3480 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:305: lcd_clear();
      000B1D C0 07            [24] 3481 	push	ar7
      000B1F 12 01 CC         [24] 3482 	lcall	_lcd_clear
                           000A37  3483 	C$lab6.c$306$5$157 ==.
                                   3484 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:306: lcd_print("Now calibrating Max_PW");
      000B22 74 F3            [12] 3485 	mov	a,#___str_15
      000B24 C0 E0            [24] 3486 	push	acc
      000B26 74 1C            [12] 3487 	mov	a,#(___str_15 >> 8)
      000B28 C0 E0            [24] 3488 	push	acc
      000B2A 74 80            [12] 3489 	mov	a,#0x80
      000B2C C0 E0            [24] 3490 	push	acc
      000B2E 12 01 47         [24] 3491 	lcall	_lcd_print
      000B31 15 81            [12] 3492 	dec	sp
      000B33 15 81            [12] 3493 	dec	sp
      000B35 15 81            [12] 3494 	dec	sp
      000B37 D0 07            [24] 3495 	pop	ar7
                           000A4E  3496 	C$lab6.c$307$5$157 ==.
                                   3497 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:307: RUDDER_PW = PW_RIGHT_RUDDER;
      000B39 85 3E 46         [24] 3498 	mov	_RUDDER_PW,_PW_RIGHT_RUDDER
      000B3C 85 3F 47         [24] 3499 	mov	(_RUDDER_PW + 1),(_PW_RIGHT_RUDDER + 1)
      000B3F                       3500 00130$:
                           000A54  3501 	C$lab6.c$309$4$156 ==.
                                   3502 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:309: value = kpd_input(1);
      000B3F 75 82 01         [24] 3503 	mov	dpl,#0x01
      000B42 C0 07            [24] 3504 	push	ar7
      000B44 12 02 84         [24] 3505 	lcall	_kpd_input
      000B47 AD 82            [24] 3506 	mov	r5,dpl
      000B49 AE 83            [24] 3507 	mov	r6,dph
      000B4B D0 07            [24] 3508 	pop	ar7
      000B4D 90 00 55         [24] 3509 	mov	dptr,#_Rudder_cal_value_1_143
      000B50 ED               [12] 3510 	mov	a,r5
      000B51 F0               [24] 3511 	movx	@dptr,a
      000B52 EE               [12] 3512 	mov	a,r6
      000B53 A3               [24] 3513 	inc	dptr
      000B54 F0               [24] 3514 	movx	@dptr,a
                           000A6A  3515 	C$lab6.c$310$4$156 ==.
                                   3516 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:310: if (value == 1)
      000B55 BD 01 12         [24] 3517 	cjne	r5,#0x01,00137$
      000B58 BE 00 0F         [24] 3518 	cjne	r6,#0x00,00137$
                           000A70  3519 	C$lab6.c$312$5$158 ==.
                                   3520 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:312: RUDDER_PW -= 20;
      000B5B E5 46            [12] 3521 	mov	a,_RUDDER_PW
      000B5D 24 EC            [12] 3522 	add	a,#0xEC
      000B5F F5 46            [12] 3523 	mov	_RUDDER_PW,a
      000B61 E5 47            [12] 3524 	mov	a,(_RUDDER_PW + 1)
      000B63 34 FF            [12] 3525 	addc	a,#0xFF
      000B65 F5 47            [12] 3526 	mov	(_RUDDER_PW + 1),a
      000B67 02 09 76         [24] 3527 	ljmp	00146$
      000B6A                       3528 00137$:
                           000A7F  3529 	C$lab6.c$314$4$156 ==.
                                   3530 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:314: else if (value==2)
      000B6A 90 00 55         [24] 3531 	mov	dptr,#_Rudder_cal_value_1_143
      000B6D E0               [24] 3532 	movx	a,@dptr
      000B6E FD               [12] 3533 	mov	r5,a
      000B6F A3               [24] 3534 	inc	dptr
      000B70 E0               [24] 3535 	movx	a,@dptr
      000B71 FE               [12] 3536 	mov	r6,a
      000B72 BD 02 11         [24] 3537 	cjne	r5,#0x02,00134$
      000B75 BE 00 0E         [24] 3538 	cjne	r6,#0x00,00134$
                           000A8D  3539 	C$lab6.c$316$5$159 ==.
                                   3540 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:316: RUDDER_PW += 20;
      000B78 74 14            [12] 3541 	mov	a,#0x14
      000B7A 25 46            [12] 3542 	add	a,_RUDDER_PW
      000B7C F5 46            [12] 3543 	mov	_RUDDER_PW,a
      000B7E E4               [12] 3544 	clr	a
      000B7F 35 47            [12] 3545 	addc	a,(_RUDDER_PW + 1)
      000B81 F5 47            [12] 3546 	mov	(_RUDDER_PW + 1),a
      000B83 02 09 76         [24] 3547 	ljmp	00146$
      000B86                       3548 00134$:
                           000A9B  3549 	C$lab6.c$318$4$156 ==.
                                   3550 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:318: else if (value == 3)
      000B86 90 00 55         [24] 3551 	mov	dptr,#_Rudder_cal_value_1_143
      000B89 E0               [24] 3552 	movx	a,@dptr
      000B8A FD               [12] 3553 	mov	r5,a
      000B8B A3               [24] 3554 	inc	dptr
      000B8C E0               [24] 3555 	movx	a,@dptr
      000B8D FE               [12] 3556 	mov	r6,a
      000B8E BD 03 05         [24] 3557 	cjne	r5,#0x03,00238$
      000B91 BE 00 02         [24] 3558 	cjne	r6,#0x00,00238$
      000B94 80 03            [24] 3559 	sjmp	00239$
      000B96                       3560 00238$:
      000B96 02 09 76         [24] 3561 	ljmp	00146$
      000B99                       3562 00239$:
                           000AAE  3563 	C$lab6.c$320$5$160 ==.
                                   3564 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:320: PW_RIGHT_RUDDER = RUDDER_PW;
      000B99 85 46 3E         [24] 3565 	mov	_PW_RIGHT_RUDDER,_RUDDER_PW
      000B9C 85 47 3F         [24] 3566 	mov	(_PW_RIGHT_RUDDER + 1),(_RUDDER_PW + 1)
                           000AB4  3567 	C$lab6.c$321$5$160 ==.
                                   3568 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:321: return;
                           000AB4  3569 	C$lab6.c$330$1$143 ==.
                           000AB4  3570 	XG$Rudder_cal$0$0 ==.
      000B9F 22               [24] 3571 	ret
                                   3572 ;------------------------------------------------------------
                                   3573 ;Allocation info for local variables in function 'Angle_cal'
                                   3574 ;------------------------------------------------------------
                                   3575 ;st                        Allocated to registers r7 
                                   3576 ;value                     Allocated with name '_Angle_cal_value_1_162'
                                   3577 ;times                     Allocated with name '_Angle_cal_times_1_162'
                                   3578 ;------------------------------------------------------------
                           000AB5  3579 	G$Angle_cal$0$0 ==.
                           000AB5  3580 	C$lab6.c$332$1$143 ==.
                                   3581 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:332: void Angle_cal(void)
                                   3582 ;	-----------------------------------------
                                   3583 ;	 function Angle_cal
                                   3584 ;	-----------------------------------------
      000BA0                       3585 _Angle_cal:
                           000AB5  3586 	C$lab6.c$335$1$143 ==.
                                   3587 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:335: __xdata int value =0;
      000BA0 90 00 59         [24] 3588 	mov	dptr,#_Angle_cal_value_1_162
      000BA3 E4               [12] 3589 	clr	a
      000BA4 F0               [24] 3590 	movx	@dptr,a
      000BA5 A3               [24] 3591 	inc	dptr
      000BA6 F0               [24] 3592 	movx	@dptr,a
                           000ABC  3593 	C$lab6.c$336$1$143 ==.
                                   3594 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:336: __xdata int times =0;
      000BA7 90 00 5B         [24] 3595 	mov	dptr,#_Angle_cal_times_1_162
      000BAA F0               [24] 3596 	movx	@dptr,a
      000BAB A3               [24] 3597 	inc	dptr
      000BAC F0               [24] 3598 	movx	@dptr,a
                           000AC2  3599 	C$lab6.c$337$1$162 ==.
                                   3600 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:337: count =0;
      000BAD F5 32            [12] 3601 	mov	_count,a
      000BAF F5 33            [12] 3602 	mov	(_count + 1),a
                           000AC6  3603 	C$lab6.c$338$1$162 ==.
                                   3604 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:338: lcd_clear();
      000BB1 12 01 CC         [24] 3605 	lcall	_lcd_clear
                           000AC9  3606 	C$lab6.c$339$1$162 ==.
                                   3607 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:339: lcd_print("Angle Calibration");
      000BB4 74 0A            [12] 3608 	mov	a,#___str_16
      000BB6 C0 E0            [24] 3609 	push	acc
      000BB8 74 1D            [12] 3610 	mov	a,#(___str_16 >> 8)
      000BBA C0 E0            [24] 3611 	push	acc
      000BBC 74 80            [12] 3612 	mov	a,#0x80
      000BBE C0 E0            [24] 3613 	push	acc
      000BC0 12 01 47         [24] 3614 	lcall	_lcd_print
      000BC3 15 81            [12] 3615 	dec	sp
      000BC5 15 81            [12] 3616 	dec	sp
      000BC7 15 81            [12] 3617 	dec	sp
                           000ADE  3618 	C$lab6.c$340$1$162 ==.
                                   3619 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:340: while (count < 50);
      000BC9                       3620 00101$:
      000BC9 C3               [12] 3621 	clr	c
      000BCA E5 32            [12] 3622 	mov	a,_count
      000BCC 94 32            [12] 3623 	subb	a,#0x32
      000BCE E5 33            [12] 3624 	mov	a,(_count + 1)
      000BD0 64 80            [12] 3625 	xrl	a,#0x80
      000BD2 94 80            [12] 3626 	subb	a,#0x80
      000BD4 40 F3            [24] 3627 	jc	00101$
                           000AEB  3628 	C$lab6.c$341$1$162 ==.
                                   3629 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:341: lcd_clear();
      000BD6 12 01 CC         [24] 3630 	lcall	_lcd_clear
                           000AEE  3631 	C$lab6.c$344$2$163 ==.
                                   3632 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:344: count = 0;
      000BD9 E4               [12] 3633 	clr	a
      000BDA F5 32            [12] 3634 	mov	_count,a
      000BDC F5 33            [12] 3635 	mov	(_count + 1),a
                           000AF3  3636 	C$lab6.c$345$2$163 ==.
                                   3637 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:345: while (count < 1);
      000BDE                       3638 00104$:
      000BDE C3               [12] 3639 	clr	c
      000BDF E5 32            [12] 3640 	mov	a,_count
      000BE1 94 01            [12] 3641 	subb	a,#0x01
      000BE3 E5 33            [12] 3642 	mov	a,(_count + 1)
      000BE5 64 80            [12] 3643 	xrl	a,#0x80
      000BE7 94 80            [12] 3644 	subb	a,#0x80
      000BE9 40 F3            [24] 3645 	jc	00104$
                           000B00  3646 	C$lab6.c$346$2$163 ==.
                                   3647 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:346: lcd_clear();
      000BEB 12 01 CC         [24] 3648 	lcall	_lcd_clear
                           000B03  3649 	C$lab6.c$347$2$163 ==.
                                   3650 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:347: lcd_print("go left: press 1\n go right: press 2\nPress * for next screen");
      000BEE 74 5D            [12] 3651 	mov	a,#___str_10
      000BF0 C0 E0            [24] 3652 	push	acc
      000BF2 74 1C            [12] 3653 	mov	a,#(___str_10 >> 8)
      000BF4 C0 E0            [24] 3654 	push	acc
      000BF6 74 80            [12] 3655 	mov	a,#0x80
      000BF8 C0 E0            [24] 3656 	push	acc
      000BFA 12 01 47         [24] 3657 	lcall	_lcd_print
      000BFD 15 81            [12] 3658 	dec	sp
      000BFF 15 81            [12] 3659 	dec	sp
      000C01 15 81            [12] 3660 	dec	sp
                           000B18  3661 	C$lab6.c$348$2$163 ==.
                                   3662 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:348: start();
      000C03 12 13 08         [24] 3663 	lcall	_start
                           000B1B  3664 	C$lab6.c$349$2$163 ==.
                                   3665 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:349: lcd_clear();
      000C06 12 01 CC         [24] 3666 	lcall	_lcd_clear
                           000B1E  3667 	C$lab6.c$350$2$163 ==.
                                   3668 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:350: lcd_print("\n confirm: press 3\n press * to begin");
      000C09 74 99            [12] 3669 	mov	a,#___str_11
      000C0B C0 E0            [24] 3670 	push	acc
      000C0D 74 1C            [12] 3671 	mov	a,#(___str_11 >> 8)
      000C0F C0 E0            [24] 3672 	push	acc
      000C11 74 80            [12] 3673 	mov	a,#0x80
      000C13 C0 E0            [24] 3674 	push	acc
      000C15 12 01 47         [24] 3675 	lcall	_lcd_print
      000C18 15 81            [12] 3676 	dec	sp
      000C1A 15 81            [12] 3677 	dec	sp
      000C1C 15 81            [12] 3678 	dec	sp
                           000B33  3679 	C$lab6.c$351$2$163 ==.
                                   3680 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:351: start();
      000C1E 12 13 08         [24] 3681 	lcall	_start
                           000B36  3682 	C$lab6.c$352$2$163 ==.
                                   3683 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:352: st =0;
      000C21 7F 00            [12] 3684 	mov	r7,#0x00
                           000B38  3685 	C$lab6.c$353$5$166 ==.
                                   3686 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:353: while (1)
      000C23                       3687 00150$:
                           000B38  3688 	C$lab6.c$355$3$164 ==.
                                   3689 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:355: printf("\r\n %u",ANGLE_PW);
      000C23 C0 07            [24] 3690 	push	ar7
      000C25 C0 4A            [24] 3691 	push	_ANGLE_PW
      000C27 C0 4B            [24] 3692 	push	(_ANGLE_PW + 1)
      000C29 74 BE            [12] 3693 	mov	a,#___str_12
      000C2B C0 E0            [24] 3694 	push	acc
      000C2D 74 1C            [12] 3695 	mov	a,#(___str_12 >> 8)
      000C2F C0 E0            [24] 3696 	push	acc
      000C31 74 80            [12] 3697 	mov	a,#0x80
      000C33 C0 E0            [24] 3698 	push	acc
      000C35 12 15 46         [24] 3699 	lcall	_printf
      000C38 E5 81            [12] 3700 	mov	a,sp
      000C3A 24 FB            [12] 3701 	add	a,#0xfb
      000C3C F5 81            [12] 3702 	mov	sp,a
      000C3E D0 07            [24] 3703 	pop	ar7
                           000B55  3704 	C$lab6.c$356$3$164 ==.
                                   3705 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:356: AGL_lo_to_hi = 0xFFFF - ANGLE_PW;
      000C40 74 FF            [12] 3706 	mov	a,#0xFF
      000C42 C3               [12] 3707 	clr	c
      000C43 95 4A            [12] 3708 	subb	a,_ANGLE_PW
      000C45 F5 4C            [12] 3709 	mov	_AGL_lo_to_hi,a
      000C47 74 FF            [12] 3710 	mov	a,#0xFF
      000C49 95 4B            [12] 3711 	subb	a,(_ANGLE_PW + 1)
      000C4B F5 4D            [12] 3712 	mov	(_AGL_lo_to_hi + 1),a
                           000B62  3713 	C$lab6.c$357$3$164 ==.
                                   3714 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:357: PCA0CP1 = AGL_lo_to_hi;
      000C4D 85 4C EB         [24] 3715 	mov	((_PCA0CP1 >> 0) & 0xFF),_AGL_lo_to_hi
      000C50 85 4D FB         [24] 3716 	mov	((_PCA0CP1 >> 8) & 0xFF),(_AGL_lo_to_hi + 1)
                           000B68  3717 	C$lab6.c$359$3$164 ==.
                                   3718 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:359: if (times == 0 )
      000C53 90 00 5B         [24] 3719 	mov	dptr,#_Angle_cal_times_1_162
      000C56 E0               [24] 3720 	movx	a,@dptr
      000C57 FD               [12] 3721 	mov	r5,a
      000C58 A3               [24] 3722 	inc	dptr
      000C59 E0               [24] 3723 	movx	a,@dptr
      000C5A FE               [12] 3724 	mov	r6,a
      000C5B 4D               [12] 3725 	orl	a,r5
      000C5C 60 03            [24] 3726 	jz	00225$
      000C5E 02 0D 0B         [24] 3727 	ljmp	00147$
      000C61                       3728 00225$:
                           000B76  3729 	C$lab6.c$361$4$165 ==.
                                   3730 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:361: if (value ==0)
      000C61 90 00 59         [24] 3731 	mov	dptr,#_Angle_cal_value_1_162
      000C64 E0               [24] 3732 	movx	a,@dptr
      000C65 FD               [12] 3733 	mov	r5,a
      000C66 A3               [24] 3734 	inc	dptr
      000C67 E0               [24] 3735 	movx	a,@dptr
      000C68 FE               [12] 3736 	mov	r6,a
      000C69 4D               [12] 3737 	orl	a,r5
      000C6A 70 27            [24] 3738 	jnz	00110$
                           000B81  3739 	C$lab6.c$363$5$166 ==.
                                   3740 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:363: lcd_clear();
      000C6C C0 07            [24] 3741 	push	ar7
      000C6E 12 01 CC         [24] 3742 	lcall	_lcd_clear
                           000B86  3743 	C$lab6.c$364$5$166 ==.
                                   3744 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:364: lcd_print("Now calibrating Min_PW UP ANGLE");
      000C71 74 1C            [12] 3745 	mov	a,#___str_17
      000C73 C0 E0            [24] 3746 	push	acc
      000C75 74 1D            [12] 3747 	mov	a,#(___str_17 >> 8)
      000C77 C0 E0            [24] 3748 	push	acc
      000C79 74 80            [12] 3749 	mov	a,#0x80
      000C7B C0 E0            [24] 3750 	push	acc
      000C7D 12 01 47         [24] 3751 	lcall	_lcd_print
      000C80 15 81            [12] 3752 	dec	sp
      000C82 15 81            [12] 3753 	dec	sp
      000C84 15 81            [12] 3754 	dec	sp
      000C86 D0 07            [24] 3755 	pop	ar7
                           000B9D  3756 	C$lab6.c$365$5$166 ==.
                                   3757 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:365: if (st == 0) ANGLE_PW = PW_UP_ANGLE;
      000C88 EF               [12] 3758 	mov	a,r7
      000C89 70 06            [24] 3759 	jnz	00108$
      000C8B 85 40 4A         [24] 3760 	mov	_ANGLE_PW,_PW_UP_ANGLE
      000C8E 85 41 4B         [24] 3761 	mov	(_ANGLE_PW + 1),(_PW_UP_ANGLE + 1)
      000C91                       3762 00108$:
                           000BA6  3763 	C$lab6.c$366$5$166 ==.
                                   3764 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:366: st =1;
      000C91 7F 01            [12] 3765 	mov	r7,#0x01
      000C93                       3766 00110$:
                           000BA8  3767 	C$lab6.c$368$4$165 ==.
                                   3768 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:368: value = kpd_input(1);
      000C93 75 82 01         [24] 3769 	mov	dpl,#0x01
      000C96 C0 07            [24] 3770 	push	ar7
      000C98 12 02 84         [24] 3771 	lcall	_kpd_input
      000C9B AD 82            [24] 3772 	mov	r5,dpl
      000C9D AE 83            [24] 3773 	mov	r6,dph
      000C9F D0 07            [24] 3774 	pop	ar7
      000CA1 90 00 59         [24] 3775 	mov	dptr,#_Angle_cal_value_1_162
      000CA4 ED               [12] 3776 	mov	a,r5
      000CA5 F0               [24] 3777 	movx	@dptr,a
      000CA6 EE               [12] 3778 	mov	a,r6
      000CA7 A3               [24] 3779 	inc	dptr
      000CA8 F0               [24] 3780 	movx	@dptr,a
                           000BBE  3781 	C$lab6.c$369$4$165 ==.
                                   3782 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:369: if (value == 1)
      000CA9 BD 01 12         [24] 3783 	cjne	r5,#0x01,00117$
      000CAC BE 00 0F         [24] 3784 	cjne	r6,#0x00,00117$
                           000BC4  3785 	C$lab6.c$371$5$167 ==.
                                   3786 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:371: ANGLE_PW -= 30;
      000CAF E5 4A            [12] 3787 	mov	a,_ANGLE_PW
      000CB1 24 E2            [12] 3788 	add	a,#0xE2
      000CB3 F5 4A            [12] 3789 	mov	_ANGLE_PW,a
      000CB5 E5 4B            [12] 3790 	mov	a,(_ANGLE_PW + 1)
      000CB7 34 FF            [12] 3791 	addc	a,#0xFF
      000CB9 F5 4B            [12] 3792 	mov	(_ANGLE_PW + 1),a
      000CBB 02 0C 23         [24] 3793 	ljmp	00150$
      000CBE                       3794 00117$:
                           000BD3  3795 	C$lab6.c$373$4$165 ==.
                                   3796 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:373: else if (value==2)
      000CBE 90 00 59         [24] 3797 	mov	dptr,#_Angle_cal_value_1_162
      000CC1 E0               [24] 3798 	movx	a,@dptr
      000CC2 FD               [12] 3799 	mov	r5,a
      000CC3 A3               [24] 3800 	inc	dptr
      000CC4 E0               [24] 3801 	movx	a,@dptr
      000CC5 FE               [12] 3802 	mov	r6,a
      000CC6 BD 02 11         [24] 3803 	cjne	r5,#0x02,00114$
      000CC9 BE 00 0E         [24] 3804 	cjne	r6,#0x00,00114$
                           000BE1  3805 	C$lab6.c$375$5$168 ==.
                                   3806 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:375: ANGLE_PW += 30;
      000CCC 74 1E            [12] 3807 	mov	a,#0x1E
      000CCE 25 4A            [12] 3808 	add	a,_ANGLE_PW
      000CD0 F5 4A            [12] 3809 	mov	_ANGLE_PW,a
      000CD2 E4               [12] 3810 	clr	a
      000CD3 35 4B            [12] 3811 	addc	a,(_ANGLE_PW + 1)
      000CD5 F5 4B            [12] 3812 	mov	(_ANGLE_PW + 1),a
      000CD7 02 0C 23         [24] 3813 	ljmp	00150$
      000CDA                       3814 00114$:
                           000BEF  3815 	C$lab6.c$377$4$165 ==.
                                   3816 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:377: else if (value == 3)
      000CDA 90 00 59         [24] 3817 	mov	dptr,#_Angle_cal_value_1_162
      000CDD E0               [24] 3818 	movx	a,@dptr
      000CDE FD               [12] 3819 	mov	r5,a
      000CDF A3               [24] 3820 	inc	dptr
      000CE0 E0               [24] 3821 	movx	a,@dptr
      000CE1 FE               [12] 3822 	mov	r6,a
      000CE2 BD 03 05         [24] 3823 	cjne	r5,#0x03,00232$
      000CE5 BE 00 02         [24] 3824 	cjne	r6,#0x00,00232$
      000CE8 80 03            [24] 3825 	sjmp	00233$
      000CEA                       3826 00232$:
      000CEA 02 0C 23         [24] 3827 	ljmp	00150$
      000CED                       3828 00233$:
                           000C02  3829 	C$lab6.c$379$5$169 ==.
                                   3830 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:379: times++;
      000CED 90 00 5B         [24] 3831 	mov	dptr,#_Angle_cal_times_1_162
      000CF0 E0               [24] 3832 	movx	a,@dptr
      000CF1 24 01            [12] 3833 	add	a,#0x01
      000CF3 F0               [24] 3834 	movx	@dptr,a
      000CF4 A3               [24] 3835 	inc	dptr
      000CF5 E0               [24] 3836 	movx	a,@dptr
      000CF6 34 00            [12] 3837 	addc	a,#0x00
      000CF8 F0               [24] 3838 	movx	@dptr,a
                           000C0E  3839 	C$lab6.c$380$5$169 ==.
                                   3840 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:380: value =0;
      000CF9 90 00 59         [24] 3841 	mov	dptr,#_Angle_cal_value_1_162
      000CFC E4               [12] 3842 	clr	a
      000CFD F0               [24] 3843 	movx	@dptr,a
      000CFE A3               [24] 3844 	inc	dptr
      000CFF F0               [24] 3845 	movx	@dptr,a
                           000C15  3846 	C$lab6.c$381$5$169 ==.
                                   3847 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:381: st=0;
      000D00 7F 00            [12] 3848 	mov	r7,#0x00
                           000C17  3849 	C$lab6.c$382$5$169 ==.
                                   3850 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:382: PW_UP_ANGLE = ANGLE_PW;
      000D02 85 4A 40         [24] 3851 	mov	_PW_UP_ANGLE,_ANGLE_PW
      000D05 85 4B 41         [24] 3852 	mov	(_PW_UP_ANGLE + 1),(_ANGLE_PW + 1)
      000D08 02 0C 23         [24] 3853 	ljmp	00150$
      000D0B                       3854 00147$:
                           000C20  3855 	C$lab6.c$385$3$164 ==.
                                   3856 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:385: else if (times ==1)
      000D0B 90 00 5B         [24] 3857 	mov	dptr,#_Angle_cal_times_1_162
      000D0E E0               [24] 3858 	movx	a,@dptr
      000D0F FD               [12] 3859 	mov	r5,a
      000D10 A3               [24] 3860 	inc	dptr
      000D11 E0               [24] 3861 	movx	a,@dptr
      000D12 FE               [12] 3862 	mov	r6,a
      000D13 BD 01 05         [24] 3863 	cjne	r5,#0x01,00234$
      000D16 BE 00 02         [24] 3864 	cjne	r6,#0x00,00234$
      000D19 80 03            [24] 3865 	sjmp	00235$
      000D1B                       3866 00234$:
      000D1B 02 0D C8         [24] 3867 	ljmp	00144$
      000D1E                       3868 00235$:
                           000C33  3869 	C$lab6.c$387$4$170 ==.
                                   3870 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:387: if (value ==0)
      000D1E 90 00 59         [24] 3871 	mov	dptr,#_Angle_cal_value_1_162
      000D21 E0               [24] 3872 	movx	a,@dptr
      000D22 FD               [12] 3873 	mov	r5,a
      000D23 A3               [24] 3874 	inc	dptr
      000D24 E0               [24] 3875 	movx	a,@dptr
      000D25 FE               [12] 3876 	mov	r6,a
      000D26 4D               [12] 3877 	orl	a,r5
      000D27 70 27            [24] 3878 	jnz	00122$
                           000C3E  3879 	C$lab6.c$389$5$171 ==.
                                   3880 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:389: lcd_clear();
      000D29 C0 07            [24] 3881 	push	ar7
      000D2B 12 01 CC         [24] 3882 	lcall	_lcd_clear
                           000C43  3883 	C$lab6.c$390$5$171 ==.
                                   3884 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:390: lcd_print("Now calibrating Cen_PW");
      000D2E 74 DC            [12] 3885 	mov	a,#___str_14
      000D30 C0 E0            [24] 3886 	push	acc
      000D32 74 1C            [12] 3887 	mov	a,#(___str_14 >> 8)
      000D34 C0 E0            [24] 3888 	push	acc
      000D36 74 80            [12] 3889 	mov	a,#0x80
      000D38 C0 E0            [24] 3890 	push	acc
      000D3A 12 01 47         [24] 3891 	lcall	_lcd_print
      000D3D 15 81            [12] 3892 	dec	sp
      000D3F 15 81            [12] 3893 	dec	sp
      000D41 15 81            [12] 3894 	dec	sp
      000D43 D0 07            [24] 3895 	pop	ar7
                           000C5A  3896 	C$lab6.c$391$5$171 ==.
                                   3897 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:391: if (st == 0) ANGLE_PW = PW_CENTER_ANGLE;
      000D45 EF               [12] 3898 	mov	a,r7
      000D46 70 06            [24] 3899 	jnz	00120$
      000D48 85 42 4A         [24] 3900 	mov	_ANGLE_PW,_PW_CENTER_ANGLE
      000D4B 85 43 4B         [24] 3901 	mov	(_ANGLE_PW + 1),(_PW_CENTER_ANGLE + 1)
      000D4E                       3902 00120$:
                           000C63  3903 	C$lab6.c$392$5$171 ==.
                                   3904 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:392: st=1;
      000D4E 7F 01            [12] 3905 	mov	r7,#0x01
      000D50                       3906 00122$:
                           000C65  3907 	C$lab6.c$394$4$170 ==.
                                   3908 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:394: value = kpd_input(1);
      000D50 75 82 01         [24] 3909 	mov	dpl,#0x01
      000D53 C0 07            [24] 3910 	push	ar7
      000D55 12 02 84         [24] 3911 	lcall	_kpd_input
      000D58 AD 82            [24] 3912 	mov	r5,dpl
      000D5A AE 83            [24] 3913 	mov	r6,dph
      000D5C D0 07            [24] 3914 	pop	ar7
      000D5E 90 00 59         [24] 3915 	mov	dptr,#_Angle_cal_value_1_162
      000D61 ED               [12] 3916 	mov	a,r5
      000D62 F0               [24] 3917 	movx	@dptr,a
      000D63 EE               [12] 3918 	mov	a,r6
      000D64 A3               [24] 3919 	inc	dptr
      000D65 F0               [24] 3920 	movx	@dptr,a
                           000C7B  3921 	C$lab6.c$395$4$170 ==.
                                   3922 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:395: if (value == 1)
      000D66 BD 01 12         [24] 3923 	cjne	r5,#0x01,00129$
      000D69 BE 00 0F         [24] 3924 	cjne	r6,#0x00,00129$
                           000C81  3925 	C$lab6.c$397$5$172 ==.
                                   3926 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:397: ANGLE_PW -= 30;
      000D6C E5 4A            [12] 3927 	mov	a,_ANGLE_PW
      000D6E 24 E2            [12] 3928 	add	a,#0xE2
      000D70 F5 4A            [12] 3929 	mov	_ANGLE_PW,a
      000D72 E5 4B            [12] 3930 	mov	a,(_ANGLE_PW + 1)
      000D74 34 FF            [12] 3931 	addc	a,#0xFF
      000D76 F5 4B            [12] 3932 	mov	(_ANGLE_PW + 1),a
      000D78 02 0C 23         [24] 3933 	ljmp	00150$
      000D7B                       3934 00129$:
                           000C90  3935 	C$lab6.c$399$4$170 ==.
                                   3936 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:399: else if (value==2)
      000D7B 90 00 59         [24] 3937 	mov	dptr,#_Angle_cal_value_1_162
      000D7E E0               [24] 3938 	movx	a,@dptr
      000D7F FD               [12] 3939 	mov	r5,a
      000D80 A3               [24] 3940 	inc	dptr
      000D81 E0               [24] 3941 	movx	a,@dptr
      000D82 FE               [12] 3942 	mov	r6,a
      000D83 BD 02 11         [24] 3943 	cjne	r5,#0x02,00126$
      000D86 BE 00 0E         [24] 3944 	cjne	r6,#0x00,00126$
                           000C9E  3945 	C$lab6.c$401$5$173 ==.
                                   3946 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:401: ANGLE_PW += 30;
      000D89 74 1E            [12] 3947 	mov	a,#0x1E
      000D8B 25 4A            [12] 3948 	add	a,_ANGLE_PW
      000D8D F5 4A            [12] 3949 	mov	_ANGLE_PW,a
      000D8F E4               [12] 3950 	clr	a
      000D90 35 4B            [12] 3951 	addc	a,(_ANGLE_PW + 1)
      000D92 F5 4B            [12] 3952 	mov	(_ANGLE_PW + 1),a
      000D94 02 0C 23         [24] 3953 	ljmp	00150$
      000D97                       3954 00126$:
                           000CAC  3955 	C$lab6.c$403$4$170 ==.
                                   3956 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:403: else if (value == 3)
      000D97 90 00 59         [24] 3957 	mov	dptr,#_Angle_cal_value_1_162
      000D9A E0               [24] 3958 	movx	a,@dptr
      000D9B FD               [12] 3959 	mov	r5,a
      000D9C A3               [24] 3960 	inc	dptr
      000D9D E0               [24] 3961 	movx	a,@dptr
      000D9E FE               [12] 3962 	mov	r6,a
      000D9F BD 03 05         [24] 3963 	cjne	r5,#0x03,00242$
      000DA2 BE 00 02         [24] 3964 	cjne	r6,#0x00,00242$
      000DA5 80 03            [24] 3965 	sjmp	00243$
      000DA7                       3966 00242$:
      000DA7 02 0C 23         [24] 3967 	ljmp	00150$
      000DAA                       3968 00243$:
                           000CBF  3969 	C$lab6.c$405$5$174 ==.
                                   3970 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:405: times++;
      000DAA 90 00 5B         [24] 3971 	mov	dptr,#_Angle_cal_times_1_162
      000DAD E0               [24] 3972 	movx	a,@dptr
      000DAE 24 01            [12] 3973 	add	a,#0x01
      000DB0 F0               [24] 3974 	movx	@dptr,a
      000DB1 A3               [24] 3975 	inc	dptr
      000DB2 E0               [24] 3976 	movx	a,@dptr
      000DB3 34 00            [12] 3977 	addc	a,#0x00
      000DB5 F0               [24] 3978 	movx	@dptr,a
                           000CCB  3979 	C$lab6.c$406$5$174 ==.
                                   3980 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:406: value=0;
      000DB6 90 00 59         [24] 3981 	mov	dptr,#_Angle_cal_value_1_162
      000DB9 E4               [12] 3982 	clr	a
      000DBA F0               [24] 3983 	movx	@dptr,a
      000DBB A3               [24] 3984 	inc	dptr
      000DBC F0               [24] 3985 	movx	@dptr,a
                           000CD2  3986 	C$lab6.c$407$5$174 ==.
                                   3987 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:407: st=0;
      000DBD 7F 00            [12] 3988 	mov	r7,#0x00
                           000CD4  3989 	C$lab6.c$408$5$174 ==.
                                   3990 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:408: PW_CENTER_ANGLE = ANGLE_PW;
      000DBF 85 4A 42         [24] 3991 	mov	_PW_CENTER_ANGLE,_ANGLE_PW
      000DC2 85 4B 43         [24] 3992 	mov	(_PW_CENTER_ANGLE + 1),(_ANGLE_PW + 1)
      000DC5 02 0C 23         [24] 3993 	ljmp	00150$
      000DC8                       3994 00144$:
                           000CDD  3995 	C$lab6.c$413$4$175 ==.
                                   3996 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:413: if (value==0)
      000DC8 90 00 59         [24] 3997 	mov	dptr,#_Angle_cal_value_1_162
      000DCB E0               [24] 3998 	movx	a,@dptr
      000DCC FD               [12] 3999 	mov	r5,a
      000DCD A3               [24] 4000 	inc	dptr
      000DCE E0               [24] 4001 	movx	a,@dptr
      000DCF FE               [12] 4002 	mov	r6,a
      000DD0 4D               [12] 4003 	orl	a,r5
      000DD1 70 27            [24] 4004 	jnz	00134$
                           000CE8  4005 	C$lab6.c$415$5$176 ==.
                                   4006 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:415: lcd_clear();
      000DD3 C0 07            [24] 4007 	push	ar7
      000DD5 12 01 CC         [24] 4008 	lcall	_lcd_clear
                           000CED  4009 	C$lab6.c$416$5$176 ==.
                                   4010 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:416: lcd_print("Now calibrating Max_PW DOWN ANGLE");
      000DD8 74 3C            [12] 4011 	mov	a,#___str_18
      000DDA C0 E0            [24] 4012 	push	acc
      000DDC 74 1D            [12] 4013 	mov	a,#(___str_18 >> 8)
      000DDE C0 E0            [24] 4014 	push	acc
      000DE0 74 80            [12] 4015 	mov	a,#0x80
      000DE2 C0 E0            [24] 4016 	push	acc
      000DE4 12 01 47         [24] 4017 	lcall	_lcd_print
      000DE7 15 81            [12] 4018 	dec	sp
      000DE9 15 81            [12] 4019 	dec	sp
      000DEB 15 81            [12] 4020 	dec	sp
      000DED D0 07            [24] 4021 	pop	ar7
                           000D04  4022 	C$lab6.c$417$5$176 ==.
                                   4023 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:417: if (st == 0) ANGLE_PW = PW_DOWN_ANGLE;
      000DEF EF               [12] 4024 	mov	a,r7
      000DF0 70 06            [24] 4025 	jnz	00132$
      000DF2 85 44 4A         [24] 4026 	mov	_ANGLE_PW,_PW_DOWN_ANGLE
      000DF5 85 45 4B         [24] 4027 	mov	(_ANGLE_PW + 1),(_PW_DOWN_ANGLE + 1)
      000DF8                       4028 00132$:
                           000D0D  4029 	C$lab6.c$418$5$176 ==.
                                   4030 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:418: st=1;
      000DF8 7F 01            [12] 4031 	mov	r7,#0x01
      000DFA                       4032 00134$:
                           000D0F  4033 	C$lab6.c$420$4$175 ==.
                                   4034 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:420: value = kpd_input(1);
      000DFA 75 82 01         [24] 4035 	mov	dpl,#0x01
      000DFD C0 07            [24] 4036 	push	ar7
      000DFF 12 02 84         [24] 4037 	lcall	_kpd_input
      000E02 AD 82            [24] 4038 	mov	r5,dpl
      000E04 AE 83            [24] 4039 	mov	r6,dph
      000E06 D0 07            [24] 4040 	pop	ar7
      000E08 90 00 59         [24] 4041 	mov	dptr,#_Angle_cal_value_1_162
      000E0B ED               [12] 4042 	mov	a,r5
      000E0C F0               [24] 4043 	movx	@dptr,a
      000E0D EE               [12] 4044 	mov	a,r6
      000E0E A3               [24] 4045 	inc	dptr
      000E0F F0               [24] 4046 	movx	@dptr,a
                           000D25  4047 	C$lab6.c$421$4$175 ==.
                                   4048 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:421: if (value == 1)
      000E10 BD 01 12         [24] 4049 	cjne	r5,#0x01,00141$
      000E13 BE 00 0F         [24] 4050 	cjne	r6,#0x00,00141$
                           000D2B  4051 	C$lab6.c$423$5$177 ==.
                                   4052 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:423: ANGLE_PW -= 30;
      000E16 E5 4A            [12] 4053 	mov	a,_ANGLE_PW
      000E18 24 E2            [12] 4054 	add	a,#0xE2
      000E1A F5 4A            [12] 4055 	mov	_ANGLE_PW,a
      000E1C E5 4B            [12] 4056 	mov	a,(_ANGLE_PW + 1)
      000E1E 34 FF            [12] 4057 	addc	a,#0xFF
      000E20 F5 4B            [12] 4058 	mov	(_ANGLE_PW + 1),a
      000E22 02 0C 23         [24] 4059 	ljmp	00150$
      000E25                       4060 00141$:
                           000D3A  4061 	C$lab6.c$425$4$175 ==.
                                   4062 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:425: else if (value==2)
      000E25 90 00 59         [24] 4063 	mov	dptr,#_Angle_cal_value_1_162
      000E28 E0               [24] 4064 	movx	a,@dptr
      000E29 FD               [12] 4065 	mov	r5,a
      000E2A A3               [24] 4066 	inc	dptr
      000E2B E0               [24] 4067 	movx	a,@dptr
      000E2C FE               [12] 4068 	mov	r6,a
      000E2D BD 02 11         [24] 4069 	cjne	r5,#0x02,00138$
      000E30 BE 00 0E         [24] 4070 	cjne	r6,#0x00,00138$
                           000D48  4071 	C$lab6.c$427$5$178 ==.
                                   4072 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:427: ANGLE_PW += 30;
      000E33 74 1E            [12] 4073 	mov	a,#0x1E
      000E35 25 4A            [12] 4074 	add	a,_ANGLE_PW
      000E37 F5 4A            [12] 4075 	mov	_ANGLE_PW,a
      000E39 E4               [12] 4076 	clr	a
      000E3A 35 4B            [12] 4077 	addc	a,(_ANGLE_PW + 1)
      000E3C F5 4B            [12] 4078 	mov	(_ANGLE_PW + 1),a
      000E3E 02 0C 23         [24] 4079 	ljmp	00150$
      000E41                       4080 00138$:
                           000D56  4081 	C$lab6.c$429$4$175 ==.
                                   4082 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:429: else if (value == 3)
      000E41 90 00 59         [24] 4083 	mov	dptr,#_Angle_cal_value_1_162
      000E44 E0               [24] 4084 	movx	a,@dptr
      000E45 FD               [12] 4085 	mov	r5,a
      000E46 A3               [24] 4086 	inc	dptr
      000E47 E0               [24] 4087 	movx	a,@dptr
      000E48 FE               [12] 4088 	mov	r6,a
      000E49 BD 03 05         [24] 4089 	cjne	r5,#0x03,00250$
      000E4C BE 00 02         [24] 4090 	cjne	r6,#0x00,00250$
      000E4F 80 03            [24] 4091 	sjmp	00251$
      000E51                       4092 00250$:
      000E51 02 0C 23         [24] 4093 	ljmp	00150$
      000E54                       4094 00251$:
                           000D69  4095 	C$lab6.c$431$5$179 ==.
                                   4096 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:431: PW_DOWN_ANGLE = ANGLE_PW;
      000E54 85 4A 44         [24] 4097 	mov	_PW_DOWN_ANGLE,_ANGLE_PW
      000E57 85 4B 45         [24] 4098 	mov	(_PW_DOWN_ANGLE + 1),(_ANGLE_PW + 1)
                           000D6F  4099 	C$lab6.c$432$5$179 ==.
                                   4100 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:432: return;
                           000D6F  4101 	C$lab6.c$437$1$162 ==.
                           000D6F  4102 	XG$Angle_cal$0$0 ==.
      000E5A 22               [24] 4103 	ret
                                   4104 ;------------------------------------------------------------
                                   4105 ;Allocation info for local variables in function 'Thrust_cal'
                                   4106 ;------------------------------------------------------------
                                   4107 ;st                        Allocated to registers r7 
                                   4108 ;value                     Allocated with name '_Thrust_cal_value_1_181'
                                   4109 ;times                     Allocated with name '_Thrust_cal_times_1_181'
                                   4110 ;------------------------------------------------------------
                           000D70  4111 	G$Thrust_cal$0$0 ==.
                           000D70  4112 	C$lab6.c$439$1$162 ==.
                                   4113 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:439: void Thrust_cal(void)
                                   4114 ;	-----------------------------------------
                                   4115 ;	 function Thrust_cal
                                   4116 ;	-----------------------------------------
      000E5B                       4117 _Thrust_cal:
                           000D70  4118 	C$lab6.c$442$1$162 ==.
                                   4119 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:442: __xdata int value =0;
      000E5B 90 00 5D         [24] 4120 	mov	dptr,#_Thrust_cal_value_1_181
      000E5E E4               [12] 4121 	clr	a
      000E5F F0               [24] 4122 	movx	@dptr,a
      000E60 A3               [24] 4123 	inc	dptr
      000E61 F0               [24] 4124 	movx	@dptr,a
                           000D77  4125 	C$lab6.c$444$1$181 ==.
                                   4126 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:444: count =0;
      000E62 F5 32            [12] 4127 	mov	_count,a
      000E64 F5 33            [12] 4128 	mov	(_count + 1),a
                           000D7B  4129 	C$lab6.c$445$1$181 ==.
                                   4130 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:445: lcd_clear();
      000E66 12 01 CC         [24] 4131 	lcall	_lcd_clear
                           000D7E  4132 	C$lab6.c$446$1$181 ==.
                                   4133 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:446: lcd_print("Thrust Calibration");
      000E69 74 5E            [12] 4134 	mov	a,#___str_19
      000E6B C0 E0            [24] 4135 	push	acc
      000E6D 74 1D            [12] 4136 	mov	a,#(___str_19 >> 8)
      000E6F C0 E0            [24] 4137 	push	acc
      000E71 74 80            [12] 4138 	mov	a,#0x80
      000E73 C0 E0            [24] 4139 	push	acc
      000E75 12 01 47         [24] 4140 	lcall	_lcd_print
      000E78 15 81            [12] 4141 	dec	sp
      000E7A 15 81            [12] 4142 	dec	sp
      000E7C 15 81            [12] 4143 	dec	sp
                           000D93  4144 	C$lab6.c$447$1$181 ==.
                                   4145 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:447: while (count < 50);
      000E7E                       4146 00101$:
      000E7E C3               [12] 4147 	clr	c
      000E7F E5 32            [12] 4148 	mov	a,_count
      000E81 94 32            [12] 4149 	subb	a,#0x32
      000E83 E5 33            [12] 4150 	mov	a,(_count + 1)
      000E85 64 80            [12] 4151 	xrl	a,#0x80
      000E87 94 80            [12] 4152 	subb	a,#0x80
      000E89 40 F3            [24] 4153 	jc	00101$
                           000DA0  4154 	C$lab6.c$448$1$181 ==.
                                   4155 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:448: lcd_clear();
      000E8B 12 01 CC         [24] 4156 	lcall	_lcd_clear
                           000DA3  4157 	C$lab6.c$452$2$182 ==.
                                   4158 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:452: count = 0;
      000E8E E4               [12] 4159 	clr	a
      000E8F F5 32            [12] 4160 	mov	_count,a
      000E91 F5 33            [12] 4161 	mov	(_count + 1),a
                           000DA8  4162 	C$lab6.c$453$2$182 ==.
                                   4163 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:453: while (count < 1);
      000E93                       4164 00104$:
      000E93 C3               [12] 4165 	clr	c
      000E94 E5 32            [12] 4166 	mov	a,_count
      000E96 94 01            [12] 4167 	subb	a,#0x01
      000E98 E5 33            [12] 4168 	mov	a,(_count + 1)
      000E9A 64 80            [12] 4169 	xrl	a,#0x80
      000E9C 94 80            [12] 4170 	subb	a,#0x80
      000E9E 40 F3            [24] 4171 	jc	00104$
                           000DB5  4172 	C$lab6.c$454$2$182 ==.
                                   4173 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:454: lcd_clear();
      000EA0 12 01 CC         [24] 4174 	lcall	_lcd_clear
                           000DB8  4175 	C$lab6.c$455$2$182 ==.
                                   4176 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:455: lcd_print("go left: press 1\n go right: press 2\nPress * for next screen");
      000EA3 74 5D            [12] 4177 	mov	a,#___str_10
      000EA5 C0 E0            [24] 4178 	push	acc
      000EA7 74 1C            [12] 4179 	mov	a,#(___str_10 >> 8)
      000EA9 C0 E0            [24] 4180 	push	acc
      000EAB 74 80            [12] 4181 	mov	a,#0x80
      000EAD C0 E0            [24] 4182 	push	acc
      000EAF 12 01 47         [24] 4183 	lcall	_lcd_print
      000EB2 15 81            [12] 4184 	dec	sp
      000EB4 15 81            [12] 4185 	dec	sp
      000EB6 15 81            [12] 4186 	dec	sp
                           000DCD  4187 	C$lab6.c$456$2$182 ==.
                                   4188 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:456: start();
      000EB8 12 13 08         [24] 4189 	lcall	_start
                           000DD0  4190 	C$lab6.c$457$2$182 ==.
                                   4191 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:457: lcd_clear();
      000EBB 12 01 CC         [24] 4192 	lcall	_lcd_clear
                           000DD3  4193 	C$lab6.c$458$2$182 ==.
                                   4194 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:458: lcd_print("\n confirm: press 3\n press * to begin");
      000EBE 74 99            [12] 4195 	mov	a,#___str_11
      000EC0 C0 E0            [24] 4196 	push	acc
      000EC2 74 1C            [12] 4197 	mov	a,#(___str_11 >> 8)
      000EC4 C0 E0            [24] 4198 	push	acc
      000EC6 74 80            [12] 4199 	mov	a,#0x80
      000EC8 C0 E0            [24] 4200 	push	acc
      000ECA 12 01 47         [24] 4201 	lcall	_lcd_print
      000ECD 15 81            [12] 4202 	dec	sp
      000ECF 15 81            [12] 4203 	dec	sp
      000ED1 15 81            [12] 4204 	dec	sp
                           000DE8  4205 	C$lab6.c$459$2$182 ==.
                                   4206 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:459: start();
      000ED3 12 13 08         [24] 4207 	lcall	_start
                           000DEB  4208 	C$lab6.c$460$2$182 ==.
                                   4209 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:460: st =0;
      000ED6 7F 00            [12] 4210 	mov	r7,#0x00
                           000DED  4211 	C$lab6.c$461$2$182 ==.
                                   4212 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:461: times=0;
      000ED8 90 00 5F         [24] 4213 	mov	dptr,#_Thrust_cal_times_1_181
      000EDB E4               [12] 4214 	clr	a
      000EDC F0               [24] 4215 	movx	@dptr,a
      000EDD A3               [24] 4216 	inc	dptr
      000EDE F0               [24] 4217 	movx	@dptr,a
                           000DF4  4218 	C$lab6.c$462$5$185 ==.
                                   4219 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:462: while (1)
      000EDF                       4220 00153$:
                           000DF4  4221 	C$lab6.c$464$3$183 ==.
                                   4222 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:464: printf("\r\n %u",RTHRUST_PW);
      000EDF C0 07            [24] 4223 	push	ar7
      000EE1 C0 4E            [24] 4224 	push	_RTHRUST_PW
      000EE3 C0 4F            [24] 4225 	push	(_RTHRUST_PW + 1)
      000EE5 74 BE            [12] 4226 	mov	a,#___str_12
      000EE7 C0 E0            [24] 4227 	push	acc
      000EE9 74 1C            [12] 4228 	mov	a,#(___str_12 >> 8)
      000EEB C0 E0            [24] 4229 	push	acc
      000EED 74 80            [12] 4230 	mov	a,#0x80
      000EEF C0 E0            [24] 4231 	push	acc
      000EF1 12 15 46         [24] 4232 	lcall	_printf
      000EF4 E5 81            [12] 4233 	mov	a,sp
      000EF6 24 FB            [12] 4234 	add	a,#0xfb
      000EF8 F5 81            [12] 4235 	mov	sp,a
      000EFA D0 07            [24] 4236 	pop	ar7
                           000E11  4237 	C$lab6.c$465$3$183 ==.
                                   4238 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:465: RTRST_lo_to_hi = 0xFFFF - RTHRUST_PW;
      000EFC 74 FF            [12] 4239 	mov	a,#0xFF
      000EFE C3               [12] 4240 	clr	c
      000EFF 95 4E            [12] 4241 	subb	a,_RTHRUST_PW
      000F01 F5 52            [12] 4242 	mov	_RTRST_lo_to_hi,a
      000F03 74 FF            [12] 4243 	mov	a,#0xFF
      000F05 95 4F            [12] 4244 	subb	a,(_RTHRUST_PW + 1)
      000F07 F5 53            [12] 4245 	mov	(_RTRST_lo_to_hi + 1),a
                           000E1E  4246 	C$lab6.c$466$3$183 ==.
                                   4247 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:466: LTRST_lo_to_hi = 0xFFFF - LTHRUST_PW;
      000F09 74 FF            [12] 4248 	mov	a,#0xFF
      000F0B C3               [12] 4249 	clr	c
      000F0C 95 50            [12] 4250 	subb	a,_LTHRUST_PW
      000F0E F5 54            [12] 4251 	mov	_LTRST_lo_to_hi,a
      000F10 74 FF            [12] 4252 	mov	a,#0xFF
      000F12 95 51            [12] 4253 	subb	a,(_LTHRUST_PW + 1)
      000F14 F5 55            [12] 4254 	mov	(_LTRST_lo_to_hi + 1),a
                           000E2B  4255 	C$lab6.c$467$3$183 ==.
                                   4256 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:467: PCA0CP2 = RTRST_lo_to_hi;
      000F16 85 52 EC         [24] 4257 	mov	((_PCA0CP2 >> 0) & 0xFF),_RTRST_lo_to_hi
      000F19 85 53 FC         [24] 4258 	mov	((_PCA0CP2 >> 8) & 0xFF),(_RTRST_lo_to_hi + 1)
                           000E31  4259 	C$lab6.c$468$3$183 ==.
                                   4260 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:468: PCA0CP3 = LTRST_lo_to_hi;
      000F1C 85 54 ED         [24] 4261 	mov	((_PCA0CP3 >> 0) & 0xFF),_LTRST_lo_to_hi
      000F1F 85 55 FD         [24] 4262 	mov	((_PCA0CP3 >> 8) & 0xFF),(_LTRST_lo_to_hi + 1)
                           000E37  4263 	C$lab6.c$472$3$183 ==.
                                   4264 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:472: if (times == 0 )
      000F22 90 00 5F         [24] 4265 	mov	dptr,#_Thrust_cal_times_1_181
      000F25 E0               [24] 4266 	movx	a,@dptr
      000F26 FD               [12] 4267 	mov	r5,a
      000F27 A3               [24] 4268 	inc	dptr
      000F28 E0               [24] 4269 	movx	a,@dptr
      000F29 FE               [12] 4270 	mov	r6,a
      000F2A 4D               [12] 4271 	orl	a,r5
      000F2B 60 03            [24] 4272 	jz	00231$
      000F2D 02 0F F7         [24] 4273 	ljmp	00150$
      000F30                       4274 00231$:
                           000E45  4275 	C$lab6.c$474$4$184 ==.
                                   4276 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:474: if (value ==0)
      000F30 90 00 5D         [24] 4277 	mov	dptr,#_Thrust_cal_value_1_181
      000F33 E0               [24] 4278 	movx	a,@dptr
      000F34 FD               [12] 4279 	mov	r5,a
      000F35 A3               [24] 4280 	inc	dptr
      000F36 E0               [24] 4281 	movx	a,@dptr
      000F37 FE               [12] 4282 	mov	r6,a
      000F38 4D               [12] 4283 	orl	a,r5
      000F39 70 2D            [24] 4284 	jnz	00110$
                           000E50  4285 	C$lab6.c$476$5$185 ==.
                                   4286 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:476: lcd_clear();
      000F3B C0 07            [24] 4287 	push	ar7
      000F3D 12 01 CC         [24] 4288 	lcall	_lcd_clear
                           000E55  4289 	C$lab6.c$477$5$185 ==.
                                   4290 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:477: lcd_print("Now calibrating Min_PW");
      000F40 74 71            [12] 4291 	mov	a,#___str_20
      000F42 C0 E0            [24] 4292 	push	acc
      000F44 74 1D            [12] 4293 	mov	a,#(___str_20 >> 8)
      000F46 C0 E0            [24] 4294 	push	acc
      000F48 74 80            [12] 4295 	mov	a,#0x80
      000F4A C0 E0            [24] 4296 	push	acc
      000F4C 12 01 47         [24] 4297 	lcall	_lcd_print
      000F4F 15 81            [12] 4298 	dec	sp
      000F51 15 81            [12] 4299 	dec	sp
      000F53 15 81            [12] 4300 	dec	sp
      000F55 D0 07            [24] 4301 	pop	ar7
                           000E6C  4302 	C$lab6.c$478$5$185 ==.
                                   4303 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:478: if (st ==0)
      000F57 EF               [12] 4304 	mov	a,r7
      000F58 70 0C            [24] 4305 	jnz	00108$
                           000E6F  4306 	C$lab6.c$480$6$186 ==.
                                   4307 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:480: RTHRUST_PW = PW_MIN_THRUST;
      000F5A 85 34 4E         [24] 4308 	mov	_RTHRUST_PW,_PW_MIN_THRUST
      000F5D 85 35 4F         [24] 4309 	mov	(_RTHRUST_PW + 1),(_PW_MIN_THRUST + 1)
                           000E75  4310 	C$lab6.c$481$6$186 ==.
                                   4311 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:481: LTHRUST_PW = PW_MIN_THRUST;
      000F60 85 34 50         [24] 4312 	mov	_LTHRUST_PW,_PW_MIN_THRUST
      000F63 85 35 51         [24] 4313 	mov	(_LTHRUST_PW + 1),(_PW_MIN_THRUST + 1)
      000F66                       4314 00108$:
                           000E7B  4315 	C$lab6.c$483$5$185 ==.
                                   4316 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:483: st =1;
      000F66 7F 01            [12] 4317 	mov	r7,#0x01
      000F68                       4318 00110$:
                           000E7D  4319 	C$lab6.c$485$4$184 ==.
                                   4320 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:485: value = kpd_input(1);
      000F68 75 82 01         [24] 4321 	mov	dpl,#0x01
      000F6B C0 07            [24] 4322 	push	ar7
      000F6D 12 02 84         [24] 4323 	lcall	_kpd_input
      000F70 AD 82            [24] 4324 	mov	r5,dpl
      000F72 AE 83            [24] 4325 	mov	r6,dph
      000F74 D0 07            [24] 4326 	pop	ar7
      000F76 90 00 5D         [24] 4327 	mov	dptr,#_Thrust_cal_value_1_181
      000F79 ED               [12] 4328 	mov	a,r5
      000F7A F0               [24] 4329 	movx	@dptr,a
      000F7B EE               [12] 4330 	mov	a,r6
      000F7C A3               [24] 4331 	inc	dptr
      000F7D F0               [24] 4332 	movx	@dptr,a
                           000E93  4333 	C$lab6.c$486$4$184 ==.
                                   4334 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:486: if (value == 1)
      000F7E BD 01 1D         [24] 4335 	cjne	r5,#0x01,00117$
      000F81 BE 00 1A         [24] 4336 	cjne	r6,#0x00,00117$
                           000E99  4337 	C$lab6.c$488$5$187 ==.
                                   4338 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:488: RTHRUST_PW -= 30;
      000F84 E5 4E            [12] 4339 	mov	a,_RTHRUST_PW
      000F86 24 E2            [12] 4340 	add	a,#0xE2
      000F88 F5 4E            [12] 4341 	mov	_RTHRUST_PW,a
      000F8A E5 4F            [12] 4342 	mov	a,(_RTHRUST_PW + 1)
      000F8C 34 FF            [12] 4343 	addc	a,#0xFF
      000F8E F5 4F            [12] 4344 	mov	(_RTHRUST_PW + 1),a
                           000EA5  4345 	C$lab6.c$489$5$187 ==.
                                   4346 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:489: LTHRUST_PW += 30;
      000F90 74 1E            [12] 4347 	mov	a,#0x1E
      000F92 25 50            [12] 4348 	add	a,_LTHRUST_PW
      000F94 F5 50            [12] 4349 	mov	_LTHRUST_PW,a
      000F96 E4               [12] 4350 	clr	a
      000F97 35 51            [12] 4351 	addc	a,(_LTHRUST_PW + 1)
      000F99 F5 51            [12] 4352 	mov	(_LTHRUST_PW + 1),a
      000F9B 02 0E DF         [24] 4353 	ljmp	00153$
      000F9E                       4354 00117$:
                           000EB3  4355 	C$lab6.c$491$4$184 ==.
                                   4356 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:491: else if (value==2)
      000F9E 90 00 5D         [24] 4357 	mov	dptr,#_Thrust_cal_value_1_181
      000FA1 E0               [24] 4358 	movx	a,@dptr
      000FA2 FD               [12] 4359 	mov	r5,a
      000FA3 A3               [24] 4360 	inc	dptr
      000FA4 E0               [24] 4361 	movx	a,@dptr
      000FA5 FE               [12] 4362 	mov	r6,a
      000FA6 BD 02 1D         [24] 4363 	cjne	r5,#0x02,00114$
      000FA9 BE 00 1A         [24] 4364 	cjne	r6,#0x00,00114$
                           000EC1  4365 	C$lab6.c$493$5$188 ==.
                                   4366 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:493: RTHRUST_PW += 30;
      000FAC 74 1E            [12] 4367 	mov	a,#0x1E
      000FAE 25 4E            [12] 4368 	add	a,_RTHRUST_PW
      000FB0 F5 4E            [12] 4369 	mov	_RTHRUST_PW,a
      000FB2 E4               [12] 4370 	clr	a
      000FB3 35 4F            [12] 4371 	addc	a,(_RTHRUST_PW + 1)
      000FB5 F5 4F            [12] 4372 	mov	(_RTHRUST_PW + 1),a
                           000ECC  4373 	C$lab6.c$494$5$188 ==.
                                   4374 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:494: LTHRUST_PW -= 30;
      000FB7 E5 50            [12] 4375 	mov	a,_LTHRUST_PW
      000FB9 24 E2            [12] 4376 	add	a,#0xE2
      000FBB F5 50            [12] 4377 	mov	_LTHRUST_PW,a
      000FBD E5 51            [12] 4378 	mov	a,(_LTHRUST_PW + 1)
      000FBF 34 FF            [12] 4379 	addc	a,#0xFF
      000FC1 F5 51            [12] 4380 	mov	(_LTHRUST_PW + 1),a
      000FC3 02 0E DF         [24] 4381 	ljmp	00153$
      000FC6                       4382 00114$:
                           000EDB  4383 	C$lab6.c$496$4$184 ==.
                                   4384 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:496: else if (value == 3)
      000FC6 90 00 5D         [24] 4385 	mov	dptr,#_Thrust_cal_value_1_181
      000FC9 E0               [24] 4386 	movx	a,@dptr
      000FCA FD               [12] 4387 	mov	r5,a
      000FCB A3               [24] 4388 	inc	dptr
      000FCC E0               [24] 4389 	movx	a,@dptr
      000FCD FE               [12] 4390 	mov	r6,a
      000FCE BD 03 05         [24] 4391 	cjne	r5,#0x03,00238$
      000FD1 BE 00 02         [24] 4392 	cjne	r6,#0x00,00238$
      000FD4 80 03            [24] 4393 	sjmp	00239$
      000FD6                       4394 00238$:
      000FD6 02 0E DF         [24] 4395 	ljmp	00153$
      000FD9                       4396 00239$:
                           000EEE  4397 	C$lab6.c$498$5$189 ==.
                                   4398 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:498: times++;
      000FD9 90 00 5F         [24] 4399 	mov	dptr,#_Thrust_cal_times_1_181
      000FDC E0               [24] 4400 	movx	a,@dptr
      000FDD 24 01            [12] 4401 	add	a,#0x01
      000FDF F0               [24] 4402 	movx	@dptr,a
      000FE0 A3               [24] 4403 	inc	dptr
      000FE1 E0               [24] 4404 	movx	a,@dptr
      000FE2 34 00            [12] 4405 	addc	a,#0x00
      000FE4 F0               [24] 4406 	movx	@dptr,a
                           000EFA  4407 	C$lab6.c$499$5$189 ==.
                                   4408 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:499: value =0;
      000FE5 90 00 5D         [24] 4409 	mov	dptr,#_Thrust_cal_value_1_181
      000FE8 E4               [12] 4410 	clr	a
      000FE9 F0               [24] 4411 	movx	@dptr,a
      000FEA A3               [24] 4412 	inc	dptr
      000FEB F0               [24] 4413 	movx	@dptr,a
                           000F01  4414 	C$lab6.c$500$5$189 ==.
                                   4415 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:500: st=0;
      000FEC 7F 00            [12] 4416 	mov	r7,#0x00
                           000F03  4417 	C$lab6.c$501$5$189 ==.
                                   4418 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:501: PW_MIN_THRUST = RTHRUST_PW;
      000FEE 85 4E 34         [24] 4419 	mov	_PW_MIN_THRUST,_RTHRUST_PW
      000FF1 85 4F 35         [24] 4420 	mov	(_PW_MIN_THRUST + 1),(_RTHRUST_PW + 1)
      000FF4 02 0E DF         [24] 4421 	ljmp	00153$
      000FF7                       4422 00150$:
                           000F0C  4423 	C$lab6.c$505$3$183 ==.
                                   4424 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:505: else if (times ==1)
      000FF7 90 00 5F         [24] 4425 	mov	dptr,#_Thrust_cal_times_1_181
      000FFA E0               [24] 4426 	movx	a,@dptr
      000FFB FD               [12] 4427 	mov	r5,a
      000FFC A3               [24] 4428 	inc	dptr
      000FFD E0               [24] 4429 	movx	a,@dptr
      000FFE FE               [12] 4430 	mov	r6,a
      000FFF BD 01 05         [24] 4431 	cjne	r5,#0x01,00240$
      001002 BE 00 02         [24] 4432 	cjne	r6,#0x00,00240$
      001005 80 03            [24] 4433 	sjmp	00241$
      001007                       4434 00240$:
      001007 02 10 D1         [24] 4435 	ljmp	00147$
      00100A                       4436 00241$:
                           000F1F  4437 	C$lab6.c$507$4$190 ==.
                                   4438 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:507: if (value ==0)
      00100A 90 00 5D         [24] 4439 	mov	dptr,#_Thrust_cal_value_1_181
      00100D E0               [24] 4440 	movx	a,@dptr
      00100E FD               [12] 4441 	mov	r5,a
      00100F A3               [24] 4442 	inc	dptr
      001010 E0               [24] 4443 	movx	a,@dptr
      001011 FE               [12] 4444 	mov	r6,a
      001012 4D               [12] 4445 	orl	a,r5
      001013 70 2D            [24] 4446 	jnz	00122$
                           000F2A  4447 	C$lab6.c$509$5$191 ==.
                                   4448 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:509: lcd_clear();
      001015 C0 07            [24] 4449 	push	ar7
      001017 12 01 CC         [24] 4450 	lcall	_lcd_clear
                           000F2F  4451 	C$lab6.c$510$5$191 ==.
                                   4452 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:510: lcd_print("Now calibrating Min_PW");
      00101A 74 71            [12] 4453 	mov	a,#___str_20
      00101C C0 E0            [24] 4454 	push	acc
      00101E 74 1D            [12] 4455 	mov	a,#(___str_20 >> 8)
      001020 C0 E0            [24] 4456 	push	acc
      001022 74 80            [12] 4457 	mov	a,#0x80
      001024 C0 E0            [24] 4458 	push	acc
      001026 12 01 47         [24] 4459 	lcall	_lcd_print
      001029 15 81            [12] 4460 	dec	sp
      00102B 15 81            [12] 4461 	dec	sp
      00102D 15 81            [12] 4462 	dec	sp
      00102F D0 07            [24] 4463 	pop	ar7
                           000F46  4464 	C$lab6.c$511$5$191 ==.
                                   4465 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:511: if (st ==0)
      001031 EF               [12] 4466 	mov	a,r7
      001032 70 0C            [24] 4467 	jnz	00120$
                           000F49  4468 	C$lab6.c$513$6$192 ==.
                                   4469 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:513: RTHRUST_PW = PW_NUET_THRUST;
      001034 85 36 4E         [24] 4470 	mov	_RTHRUST_PW,_PW_NUET_THRUST
      001037 85 37 4F         [24] 4471 	mov	(_RTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
                           000F4F  4472 	C$lab6.c$514$6$192 ==.
                                   4473 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:514: LTHRUST_PW = PW_NUET_THRUST;
      00103A 85 36 50         [24] 4474 	mov	_LTHRUST_PW,_PW_NUET_THRUST
      00103D 85 37 51         [24] 4475 	mov	(_LTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
      001040                       4476 00120$:
                           000F55  4477 	C$lab6.c$516$5$191 ==.
                                   4478 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:516: st =1;
      001040 7F 01            [12] 4479 	mov	r7,#0x01
      001042                       4480 00122$:
                           000F57  4481 	C$lab6.c$518$4$190 ==.
                                   4482 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:518: value = kpd_input(1);
      001042 75 82 01         [24] 4483 	mov	dpl,#0x01
      001045 C0 07            [24] 4484 	push	ar7
      001047 12 02 84         [24] 4485 	lcall	_kpd_input
      00104A AD 82            [24] 4486 	mov	r5,dpl
      00104C AE 83            [24] 4487 	mov	r6,dph
      00104E D0 07            [24] 4488 	pop	ar7
      001050 90 00 5D         [24] 4489 	mov	dptr,#_Thrust_cal_value_1_181
      001053 ED               [12] 4490 	mov	a,r5
      001054 F0               [24] 4491 	movx	@dptr,a
      001055 EE               [12] 4492 	mov	a,r6
      001056 A3               [24] 4493 	inc	dptr
      001057 F0               [24] 4494 	movx	@dptr,a
                           000F6D  4495 	C$lab6.c$519$4$190 ==.
                                   4496 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:519: if (value == 1)
      001058 BD 01 1D         [24] 4497 	cjne	r5,#0x01,00129$
      00105B BE 00 1A         [24] 4498 	cjne	r6,#0x00,00129$
                           000F73  4499 	C$lab6.c$521$5$193 ==.
                                   4500 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:521: RTHRUST_PW -= 30;
      00105E E5 4E            [12] 4501 	mov	a,_RTHRUST_PW
      001060 24 E2            [12] 4502 	add	a,#0xE2
      001062 F5 4E            [12] 4503 	mov	_RTHRUST_PW,a
      001064 E5 4F            [12] 4504 	mov	a,(_RTHRUST_PW + 1)
      001066 34 FF            [12] 4505 	addc	a,#0xFF
      001068 F5 4F            [12] 4506 	mov	(_RTHRUST_PW + 1),a
                           000F7F  4507 	C$lab6.c$522$5$193 ==.
                                   4508 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:522: LTHRUST_PW += 30;
      00106A 74 1E            [12] 4509 	mov	a,#0x1E
      00106C 25 50            [12] 4510 	add	a,_LTHRUST_PW
      00106E F5 50            [12] 4511 	mov	_LTHRUST_PW,a
      001070 E4               [12] 4512 	clr	a
      001071 35 51            [12] 4513 	addc	a,(_LTHRUST_PW + 1)
      001073 F5 51            [12] 4514 	mov	(_LTHRUST_PW + 1),a
      001075 02 0E DF         [24] 4515 	ljmp	00153$
      001078                       4516 00129$:
                           000F8D  4517 	C$lab6.c$524$4$190 ==.
                                   4518 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:524: else if (value==2)
      001078 90 00 5D         [24] 4519 	mov	dptr,#_Thrust_cal_value_1_181
      00107B E0               [24] 4520 	movx	a,@dptr
      00107C FD               [12] 4521 	mov	r5,a
      00107D A3               [24] 4522 	inc	dptr
      00107E E0               [24] 4523 	movx	a,@dptr
      00107F FE               [12] 4524 	mov	r6,a
      001080 BD 02 1D         [24] 4525 	cjne	r5,#0x02,00126$
      001083 BE 00 1A         [24] 4526 	cjne	r6,#0x00,00126$
                           000F9B  4527 	C$lab6.c$526$5$194 ==.
                                   4528 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:526: RTHRUST_PW += 30;
      001086 74 1E            [12] 4529 	mov	a,#0x1E
      001088 25 4E            [12] 4530 	add	a,_RTHRUST_PW
      00108A F5 4E            [12] 4531 	mov	_RTHRUST_PW,a
      00108C E4               [12] 4532 	clr	a
      00108D 35 4F            [12] 4533 	addc	a,(_RTHRUST_PW + 1)
      00108F F5 4F            [12] 4534 	mov	(_RTHRUST_PW + 1),a
                           000FA6  4535 	C$lab6.c$527$5$194 ==.
                                   4536 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:527: LTHRUST_PW -= 30;
      001091 E5 50            [12] 4537 	mov	a,_LTHRUST_PW
      001093 24 E2            [12] 4538 	add	a,#0xE2
      001095 F5 50            [12] 4539 	mov	_LTHRUST_PW,a
      001097 E5 51            [12] 4540 	mov	a,(_LTHRUST_PW + 1)
      001099 34 FF            [12] 4541 	addc	a,#0xFF
      00109B F5 51            [12] 4542 	mov	(_LTHRUST_PW + 1),a
      00109D 02 0E DF         [24] 4543 	ljmp	00153$
      0010A0                       4544 00126$:
                           000FB5  4545 	C$lab6.c$529$4$190 ==.
                                   4546 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:529: else if (value == 3)
      0010A0 90 00 5D         [24] 4547 	mov	dptr,#_Thrust_cal_value_1_181
      0010A3 E0               [24] 4548 	movx	a,@dptr
      0010A4 FD               [12] 4549 	mov	r5,a
      0010A5 A3               [24] 4550 	inc	dptr
      0010A6 E0               [24] 4551 	movx	a,@dptr
      0010A7 FE               [12] 4552 	mov	r6,a
      0010A8 BD 03 05         [24] 4553 	cjne	r5,#0x03,00248$
      0010AB BE 00 02         [24] 4554 	cjne	r6,#0x00,00248$
      0010AE 80 03            [24] 4555 	sjmp	00249$
      0010B0                       4556 00248$:
      0010B0 02 0E DF         [24] 4557 	ljmp	00153$
      0010B3                       4558 00249$:
                           000FC8  4559 	C$lab6.c$531$5$195 ==.
                                   4560 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:531: times++;
      0010B3 90 00 5F         [24] 4561 	mov	dptr,#_Thrust_cal_times_1_181
      0010B6 E0               [24] 4562 	movx	a,@dptr
      0010B7 24 01            [12] 4563 	add	a,#0x01
      0010B9 F0               [24] 4564 	movx	@dptr,a
      0010BA A3               [24] 4565 	inc	dptr
      0010BB E0               [24] 4566 	movx	a,@dptr
      0010BC 34 00            [12] 4567 	addc	a,#0x00
      0010BE F0               [24] 4568 	movx	@dptr,a
                           000FD4  4569 	C$lab6.c$532$5$195 ==.
                                   4570 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:532: value =0;
      0010BF 90 00 5D         [24] 4571 	mov	dptr,#_Thrust_cal_value_1_181
      0010C2 E4               [12] 4572 	clr	a
      0010C3 F0               [24] 4573 	movx	@dptr,a
      0010C4 A3               [24] 4574 	inc	dptr
      0010C5 F0               [24] 4575 	movx	@dptr,a
                           000FDB  4576 	C$lab6.c$533$5$195 ==.
                                   4577 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:533: st=0;
      0010C6 7F 00            [12] 4578 	mov	r7,#0x00
                           000FDD  4579 	C$lab6.c$534$5$195 ==.
                                   4580 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:534: PW_NUET_THRUST = RTHRUST_PW;
      0010C8 85 4E 36         [24] 4581 	mov	_PW_NUET_THRUST,_RTHRUST_PW
      0010CB 85 4F 37         [24] 4582 	mov	(_PW_NUET_THRUST + 1),(_RTHRUST_PW + 1)
      0010CE 02 0E DF         [24] 4583 	ljmp	00153$
      0010D1                       4584 00147$:
                           000FE6  4585 	C$lab6.c$537$3$183 ==.
                                   4586 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:537: else if(times == 2)
      0010D1 90 00 5F         [24] 4587 	mov	dptr,#_Thrust_cal_times_1_181
      0010D4 E0               [24] 4588 	movx	a,@dptr
      0010D5 FD               [12] 4589 	mov	r5,a
      0010D6 A3               [24] 4590 	inc	dptr
      0010D7 E0               [24] 4591 	movx	a,@dptr
      0010D8 FE               [12] 4592 	mov	r6,a
      0010D9 BD 02 05         [24] 4593 	cjne	r5,#0x02,00250$
      0010DC BE 00 02         [24] 4594 	cjne	r6,#0x00,00250$
      0010DF 80 03            [24] 4595 	sjmp	00251$
      0010E1                       4596 00250$:
      0010E1 02 11 89         [24] 4597 	ljmp	00144$
      0010E4                       4598 00251$:
                           000FF9  4599 	C$lab6.c$539$4$196 ==.
                                   4600 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:539: if (value==0)
      0010E4 90 00 5D         [24] 4601 	mov	dptr,#_Thrust_cal_value_1_181
      0010E7 E0               [24] 4602 	movx	a,@dptr
      0010E8 FD               [12] 4603 	mov	r5,a
      0010E9 A3               [24] 4604 	inc	dptr
      0010EA E0               [24] 4605 	movx	a,@dptr
      0010EB FE               [12] 4606 	mov	r6,a
      0010EC 4D               [12] 4607 	orl	a,r5
      0010ED 70 2B            [24] 4608 	jnz	00134$
                           001004  4609 	C$lab6.c$541$5$197 ==.
                                   4610 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:541: lcd_clear();
      0010EF C0 07            [24] 4611 	push	ar7
      0010F1 12 01 CC         [24] 4612 	lcall	_lcd_clear
                           001009  4613 	C$lab6.c$542$5$197 ==.
                                   4614 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:542: lcd_print("Now calibrating Max_PW");
      0010F4 74 F3            [12] 4615 	mov	a,#___str_15
      0010F6 C0 E0            [24] 4616 	push	acc
      0010F8 74 1C            [12] 4617 	mov	a,#(___str_15 >> 8)
      0010FA C0 E0            [24] 4618 	push	acc
      0010FC 74 80            [12] 4619 	mov	a,#0x80
      0010FE C0 E0            [24] 4620 	push	acc
      001100 12 01 47         [24] 4621 	lcall	_lcd_print
      001103 15 81            [12] 4622 	dec	sp
      001105 15 81            [12] 4623 	dec	sp
      001107 15 81            [12] 4624 	dec	sp
      001109 D0 07            [24] 4625 	pop	ar7
                           001020  4626 	C$lab6.c$543$5$197 ==.
                                   4627 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:543: if (st == 0)
      00110B EF               [12] 4628 	mov	a,r7
      00110C 70 0C            [24] 4629 	jnz	00134$
                           001023  4630 	C$lab6.c$545$6$198 ==.
                                   4631 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:545: RTHRUST_PW = PW_MAX_THRUST;
      00110E 85 38 4E         [24] 4632 	mov	_RTHRUST_PW,_PW_MAX_THRUST
      001111 85 39 4F         [24] 4633 	mov	(_RTHRUST_PW + 1),(_PW_MAX_THRUST + 1)
                           001029  4634 	C$lab6.c$546$6$198 ==.
                                   4635 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:546: LTHRUST_PW = PW_MAX_THRUST;
      001114 85 38 50         [24] 4636 	mov	_LTHRUST_PW,_PW_MAX_THRUST
      001117 85 39 51         [24] 4637 	mov	(_LTHRUST_PW + 1),(_PW_MAX_THRUST + 1)
      00111A                       4638 00134$:
                           00102F  4639 	C$lab6.c$550$4$196 ==.
                                   4640 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:550: value = kpd_input(1);
      00111A 75 82 01         [24] 4641 	mov	dpl,#0x01
      00111D C0 07            [24] 4642 	push	ar7
      00111F 12 02 84         [24] 4643 	lcall	_kpd_input
      001122 AD 82            [24] 4644 	mov	r5,dpl
      001124 AE 83            [24] 4645 	mov	r6,dph
      001126 D0 07            [24] 4646 	pop	ar7
      001128 90 00 5D         [24] 4647 	mov	dptr,#_Thrust_cal_value_1_181
      00112B ED               [12] 4648 	mov	a,r5
      00112C F0               [24] 4649 	movx	@dptr,a
      00112D EE               [12] 4650 	mov	a,r6
      00112E A3               [24] 4651 	inc	dptr
      00112F F0               [24] 4652 	movx	@dptr,a
                           001045  4653 	C$lab6.c$551$4$196 ==.
                                   4654 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:551: if (value == 1)
      001130 BD 01 12         [24] 4655 	cjne	r5,#0x01,00141$
      001133 BE 00 0F         [24] 4656 	cjne	r6,#0x00,00141$
                           00104B  4657 	C$lab6.c$553$5$199 ==.
                                   4658 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:553: RTHRUST_PW -= 30;
      001136 E5 4E            [12] 4659 	mov	a,_RTHRUST_PW
      001138 24 E2            [12] 4660 	add	a,#0xE2
      00113A F5 4E            [12] 4661 	mov	_RTHRUST_PW,a
      00113C E5 4F            [12] 4662 	mov	a,(_RTHRUST_PW + 1)
      00113E 34 FF            [12] 4663 	addc	a,#0xFF
      001140 F5 4F            [12] 4664 	mov	(_RTHRUST_PW + 1),a
      001142 02 0E DF         [24] 4665 	ljmp	00153$
      001145                       4666 00141$:
                           00105A  4667 	C$lab6.c$555$4$196 ==.
                                   4668 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:555: else if (value==2)
      001145 90 00 5D         [24] 4669 	mov	dptr,#_Thrust_cal_value_1_181
      001148 E0               [24] 4670 	movx	a,@dptr
      001149 FD               [12] 4671 	mov	r5,a
      00114A A3               [24] 4672 	inc	dptr
      00114B E0               [24] 4673 	movx	a,@dptr
      00114C FE               [12] 4674 	mov	r6,a
      00114D BD 02 11         [24] 4675 	cjne	r5,#0x02,00138$
      001150 BE 00 0E         [24] 4676 	cjne	r6,#0x00,00138$
                           001068  4677 	C$lab6.c$557$5$200 ==.
                                   4678 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:557: RTHRUST_PW += 30;
      001153 74 1E            [12] 4679 	mov	a,#0x1E
      001155 25 4E            [12] 4680 	add	a,_RTHRUST_PW
      001157 F5 4E            [12] 4681 	mov	_RTHRUST_PW,a
      001159 E4               [12] 4682 	clr	a
      00115A 35 4F            [12] 4683 	addc	a,(_RTHRUST_PW + 1)
      00115C F5 4F            [12] 4684 	mov	(_RTHRUST_PW + 1),a
      00115E 02 0E DF         [24] 4685 	ljmp	00153$
      001161                       4686 00138$:
                           001076  4687 	C$lab6.c$559$4$196 ==.
                                   4688 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:559: else if (value == 3)
      001161 90 00 5D         [24] 4689 	mov	dptr,#_Thrust_cal_value_1_181
      001164 E0               [24] 4690 	movx	a,@dptr
      001165 FD               [12] 4691 	mov	r5,a
      001166 A3               [24] 4692 	inc	dptr
      001167 E0               [24] 4693 	movx	a,@dptr
      001168 FE               [12] 4694 	mov	r6,a
      001169 BD 03 05         [24] 4695 	cjne	r5,#0x03,00258$
      00116C BE 00 02         [24] 4696 	cjne	r6,#0x00,00258$
      00116F 80 03            [24] 4697 	sjmp	00259$
      001171                       4698 00258$:
      001171 02 0E DF         [24] 4699 	ljmp	00153$
      001174                       4700 00259$:
                           001089  4701 	C$lab6.c$561$5$201 ==.
                                   4702 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:561: PW_MAX_THRUST = RTHRUST_PW;
      001174 85 4E 38         [24] 4703 	mov	_PW_MAX_THRUST,_RTHRUST_PW
      001177 85 4F 39         [24] 4704 	mov	(_PW_MAX_THRUST + 1),(_RTHRUST_PW + 1)
                           00108F  4705 	C$lab6.c$562$5$201 ==.
                                   4706 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:562: LTHRUST_PW =PW_NUET_THRUST;
      00117A 85 36 50         [24] 4707 	mov	_LTHRUST_PW,_PW_NUET_THRUST
      00117D 85 37 51         [24] 4708 	mov	(_LTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
                           001095  4709 	C$lab6.c$563$5$201 ==.
                                   4710 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:563: RTHRUST_PW =PW_NUET_THRUST;
      001180 85 36 4E         [24] 4711 	mov	_RTHRUST_PW,_PW_NUET_THRUST
      001183 85 37 4F         [24] 4712 	mov	(_RTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
      001186 02 0E DF         [24] 4713 	ljmp	00153$
      001189                       4714 00144$:
                           00109E  4715 	C$lab6.c$566$3$183 ==.
                                   4716 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:566: else return;
                           00109E  4717 	C$lab6.c$569$1$181 ==.
                           00109E  4718 	XG$Thrust_cal$0$0 ==.
      001189 22               [24] 4719 	ret
                                   4720 ;------------------------------------------------------------
                                   4721 ;Allocation info for local variables in function 'Steering_Servo'
                                   4722 ;------------------------------------------------------------
                                   4723 ;direction                 Allocated to registers r6 r7 
                                   4724 ;------------------------------------------------------------
                           00109F  4725 	G$Steering_Servo$0$0 ==.
                           00109F  4726 	C$lab6.c$572$1$181 ==.
                                   4727 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:572: void Steering_Servo(unsigned int direction)
                                   4728 ;	-----------------------------------------
                                   4729 ;	 function Steering_Servo
                                   4730 ;	-----------------------------------------
      00118A                       4731 _Steering_Servo:
      00118A AE 82            [24] 4732 	mov	r6,dpl
      00118C AF 83            [24] 4733 	mov	r7,dph
                           0010A3  4734 	C$lab6.c$578$1$203 ==.
                                   4735 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:578: if (direction > 3500 || direction < 100)
      00118E C3               [12] 4736 	clr	c
      00118F 74 AC            [12] 4737 	mov	a,#0xAC
      001191 9E               [12] 4738 	subb	a,r6
      001192 74 0D            [12] 4739 	mov	a,#0x0D
      001194 9F               [12] 4740 	subb	a,r7
      001195 40 08            [24] 4741 	jc	00104$
      001197 EE               [12] 4742 	mov	a,r6
      001198 94 64            [12] 4743 	subb	a,#0x64
      00119A EF               [12] 4744 	mov	a,r7
      00119B 94 00            [12] 4745 	subb	a,#0x00
      00119D 50 09            [24] 4746 	jnc	00105$
      00119F                       4747 00104$:
                           0010B4  4748 	C$lab6.c$580$2$204 ==.
                                   4749 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:580: error =0;
      00119F 90 00 63         [24] 4750 	mov	dptr,#_error
      0011A2 E4               [12] 4751 	clr	a
      0011A3 F0               [24] 4752 	movx	@dptr,a
      0011A4 A3               [24] 4753 	inc	dptr
      0011A5 F0               [24] 4754 	movx	@dptr,a
      0011A6 80 33            [24] 4755 	sjmp	00106$
      0011A8                       4756 00105$:
                           0010BD  4757 	C$lab6.c$582$1$203 ==.
                                   4758 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:582: else if (direction > 1800)
      0011A8 C3               [12] 4759 	clr	c
      0011A9 74 08            [12] 4760 	mov	a,#0x08
      0011AB 9E               [12] 4761 	subb	a,r6
      0011AC 74 07            [12] 4762 	mov	a,#0x07
      0011AE 9F               [12] 4763 	subb	a,r7
      0011AF 50 13            [24] 4764 	jnc	00102$
                           0010C6  4765 	C$lab6.c$584$2$205 ==.
                                   4766 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:584: error = (3600 - (int) direction);
      0011B1 8E 04            [24] 4767 	mov	ar4,r6
      0011B3 8F 05            [24] 4768 	mov	ar5,r7
      0011B5 90 00 63         [24] 4769 	mov	dptr,#_error
      0011B8 74 10            [12] 4770 	mov	a,#0x10
      0011BA C3               [12] 4771 	clr	c
      0011BB 9C               [12] 4772 	subb	a,r4
      0011BC F0               [24] 4773 	movx	@dptr,a
      0011BD 74 0E            [12] 4774 	mov	a,#0x0E
      0011BF 9D               [12] 4775 	subb	a,r5
      0011C0 A3               [24] 4776 	inc	dptr
      0011C1 F0               [24] 4777 	movx	@dptr,a
      0011C2 80 17            [24] 4778 	sjmp	00106$
      0011C4                       4779 00102$:
                           0010D9  4780 	C$lab6.c$588$1$203 ==.
                                   4781 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:588: error = -1* direction;
      0011C4 8E 11            [24] 4782 	mov	__mulint_PARM_2,r6
      0011C6 8F 12            [24] 4783 	mov	(__mulint_PARM_2 + 1),r7
      0011C8 90 FF FF         [24] 4784 	mov	dptr,#0xFFFF
      0011CB 12 13 BD         [24] 4785 	lcall	__mulint
      0011CE E5 82            [12] 4786 	mov	a,dpl
      0011D0 85 83 F0         [24] 4787 	mov	b,dph
      0011D3 90 00 63         [24] 4788 	mov	dptr,#_error
      0011D6 F0               [24] 4789 	movx	@dptr,a
      0011D7 E5 F0            [12] 4790 	mov	a,b
      0011D9 A3               [24] 4791 	inc	dptr
      0011DA F0               [24] 4792 	movx	@dptr,a
      0011DB                       4793 00106$:
                           0010F0  4794 	C$lab6.c$591$1$203 ==.
                                   4795 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:591: RUDDER_PW  = PW_CENTER_RUDDER + (int) (((int) kp* (int) error) - (int) kd * ((int)old_error -(int) error));
      0011DB 90 00 63         [24] 4796 	mov	dptr,#_error
      0011DE E0               [24] 4797 	movx	a,@dptr
      0011DF FE               [12] 4798 	mov	r6,a
      0011E0 A3               [24] 4799 	inc	dptr
      0011E1 E0               [24] 4800 	movx	a,@dptr
      0011E2 FF               [12] 4801 	mov	r7,a
      0011E3 8E 11            [24] 4802 	mov	__mulint_PARM_2,r6
      0011E5 8F 12            [24] 4803 	mov	(__mulint_PARM_2 + 1),r7
      0011E7 85 5B 82         [24] 4804 	mov	dpl,_kp
      0011EA 85 5C 83         [24] 4805 	mov	dph,(_kp + 1)
      0011ED C0 07            [24] 4806 	push	ar7
      0011EF C0 06            [24] 4807 	push	ar6
      0011F1 12 13 BD         [24] 4808 	lcall	__mulint
      0011F4 AC 82            [24] 4809 	mov	r4,dpl
      0011F6 AD 83            [24] 4810 	mov	r5,dph
      0011F8 D0 06            [24] 4811 	pop	ar6
      0011FA D0 07            [24] 4812 	pop	ar7
      0011FC 90 00 65         [24] 4813 	mov	dptr,#_old_error
      0011FF E0               [24] 4814 	movx	a,@dptr
      001200 FA               [12] 4815 	mov	r2,a
      001201 A3               [24] 4816 	inc	dptr
      001202 E0               [24] 4817 	movx	a,@dptr
      001203 FB               [12] 4818 	mov	r3,a
      001204 EA               [12] 4819 	mov	a,r2
      001205 C3               [12] 4820 	clr	c
      001206 9E               [12] 4821 	subb	a,r6
      001207 F5 11            [12] 4822 	mov	__mulint_PARM_2,a
      001209 EB               [12] 4823 	mov	a,r3
      00120A 9F               [12] 4824 	subb	a,r7
      00120B F5 12            [12] 4825 	mov	(__mulint_PARM_2 + 1),a
      00120D 85 5D 82         [24] 4826 	mov	dpl,_kd
      001210 85 5E 83         [24] 4827 	mov	dph,(_kd + 1)
      001213 C0 07            [24] 4828 	push	ar7
      001215 C0 06            [24] 4829 	push	ar6
      001217 C0 05            [24] 4830 	push	ar5
      001219 C0 04            [24] 4831 	push	ar4
      00121B 12 13 BD         [24] 4832 	lcall	__mulint
      00121E AA 82            [24] 4833 	mov	r2,dpl
      001220 AB 83            [24] 4834 	mov	r3,dph
      001222 D0 04            [24] 4835 	pop	ar4
      001224 D0 05            [24] 4836 	pop	ar5
      001226 D0 06            [24] 4837 	pop	ar6
      001228 D0 07            [24] 4838 	pop	ar7
      00122A EC               [12] 4839 	mov	a,r4
      00122B C3               [12] 4840 	clr	c
      00122C 9A               [12] 4841 	subb	a,r2
      00122D FC               [12] 4842 	mov	r4,a
      00122E ED               [12] 4843 	mov	a,r5
      00122F 9B               [12] 4844 	subb	a,r3
      001230 FD               [12] 4845 	mov	r5,a
      001231 8C 02            [24] 4846 	mov	ar2,r4
      001233 8D 03            [24] 4847 	mov	ar3,r5
      001235 EA               [12] 4848 	mov	a,r2
      001236 25 3C            [12] 4849 	add	a,_PW_CENTER_RUDDER
      001238 F5 46            [12] 4850 	mov	_RUDDER_PW,a
      00123A EB               [12] 4851 	mov	a,r3
      00123B 35 3D            [12] 4852 	addc	a,(_PW_CENTER_RUDDER + 1)
      00123D F5 47            [12] 4853 	mov	(_RUDDER_PW + 1),a
                           001154  4854 	C$lab6.c$593$1$203 ==.
                                   4855 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:593: RTHRUST_PW = PW_NUET_THRUST   + (int) -1* (((int) kp* (int) error) - (int) kd * ((int)old_error -(int) error));
      00123F C3               [12] 4856 	clr	c
      001240 E4               [12] 4857 	clr	a
      001241 9C               [12] 4858 	subb	a,r4
      001242 FC               [12] 4859 	mov	r4,a
      001243 E4               [12] 4860 	clr	a
      001244 9D               [12] 4861 	subb	a,r5
      001245 FD               [12] 4862 	mov	r5,a
      001246 EC               [12] 4863 	mov	a,r4
      001247 25 36            [12] 4864 	add	a,_PW_NUET_THRUST
      001249 F5 4E            [12] 4865 	mov	_RTHRUST_PW,a
      00124B ED               [12] 4866 	mov	a,r5
      00124C 35 37            [12] 4867 	addc	a,(_PW_NUET_THRUST + 1)
      00124E F5 4F            [12] 4868 	mov	(_RTHRUST_PW + 1),a
                           001165  4869 	C$lab6.c$595$1$203 ==.
                                   4870 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:595: LTHRUST_PW = PW_NUET_THRUST   + (int) (((int) kp* (int) error) - (int) kd * ((int)old_error -(int) error));
      001250 EA               [12] 4871 	mov	a,r2
      001251 25 36            [12] 4872 	add	a,_PW_NUET_THRUST
      001253 F5 50            [12] 4873 	mov	_LTHRUST_PW,a
      001255 EB               [12] 4874 	mov	a,r3
      001256 35 37            [12] 4875 	addc	a,(_PW_NUET_THRUST + 1)
      001258 F5 51            [12] 4876 	mov	(_LTHRUST_PW + 1),a
                           00116F  4877 	C$lab6.c$597$1$203 ==.
                                   4878 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:597: old_error=error;
      00125A 90 00 65         [24] 4879 	mov	dptr,#_old_error
      00125D EE               [12] 4880 	mov	a,r6
      00125E F0               [24] 4881 	movx	@dptr,a
      00125F EF               [12] 4882 	mov	a,r7
      001260 A3               [24] 4883 	inc	dptr
      001261 F0               [24] 4884 	movx	@dptr,a
                           001177  4885 	C$lab6.c$600$1$203 ==.
                                   4886 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:600: if (RUDDER_PW >= PW_RIGHT_RUDDER)
      001262 C3               [12] 4887 	clr	c
      001263 E5 46            [12] 4888 	mov	a,_RUDDER_PW
      001265 95 3E            [12] 4889 	subb	a,_PW_RIGHT_RUDDER
      001267 E5 47            [12] 4890 	mov	a,(_RUDDER_PW + 1)
      001269 95 3F            [12] 4891 	subb	a,(_PW_RIGHT_RUDDER + 1)
      00126B 40 08            [24] 4892 	jc	00111$
                           001182  4893 	C$lab6.c$602$2$207 ==.
                                   4894 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:602: RUDDER_PW = PW_RIGHT_RUDDER;
      00126D 85 3E 46         [24] 4895 	mov	_RUDDER_PW,_PW_RIGHT_RUDDER
      001270 85 3F 47         [24] 4896 	mov	(_RUDDER_PW + 1),(_PW_RIGHT_RUDDER + 1)
      001273 80 11            [24] 4897 	sjmp	00112$
      001275                       4898 00111$:
                           00118A  4899 	C$lab6.c$604$1$203 ==.
                                   4900 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:604: else if(RUDDER_PW <= PW_LEFT_RUDDER)
      001275 C3               [12] 4901 	clr	c
      001276 E5 3A            [12] 4902 	mov	a,_PW_LEFT_RUDDER
      001278 95 46            [12] 4903 	subb	a,_RUDDER_PW
      00127A E5 3B            [12] 4904 	mov	a,(_PW_LEFT_RUDDER + 1)
      00127C 95 47            [12] 4905 	subb	a,(_RUDDER_PW + 1)
      00127E 40 06            [24] 4906 	jc	00112$
                           001195  4907 	C$lab6.c$606$2$208 ==.
                                   4908 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:606: RUDDER_PW = PW_LEFT_RUDDER;
      001280 85 3A 46         [24] 4909 	mov	_RUDDER_PW,_PW_LEFT_RUDDER
      001283 85 3B 47         [24] 4910 	mov	(_RUDDER_PW + 1),(_PW_LEFT_RUDDER + 1)
      001286                       4911 00112$:
                           00119B  4912 	C$lab6.c$609$1$203 ==.
                                   4913 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:609: if (RTHRUST_PW >= PW_MAX_THRUST)
      001286 C3               [12] 4914 	clr	c
      001287 E5 4E            [12] 4915 	mov	a,_RTHRUST_PW
      001289 95 38            [12] 4916 	subb	a,_PW_MAX_THRUST
      00128B E5 4F            [12] 4917 	mov	a,(_RTHRUST_PW + 1)
      00128D 95 39            [12] 4918 	subb	a,(_PW_MAX_THRUST + 1)
      00128F 40 08            [24] 4919 	jc	00116$
                           0011A6  4920 	C$lab6.c$611$2$209 ==.
                                   4921 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:611: RTHRUST_PW = PW_MAX_THRUST;
      001291 85 38 4E         [24] 4922 	mov	_RTHRUST_PW,_PW_MAX_THRUST
      001294 85 39 4F         [24] 4923 	mov	(_RTHRUST_PW + 1),(_PW_MAX_THRUST + 1)
      001297 80 11            [24] 4924 	sjmp	00117$
      001299                       4925 00116$:
                           0011AE  4926 	C$lab6.c$613$1$203 ==.
                                   4927 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:613: else if (RTHRUST_PW <=  PW_MIN_THRUST)
      001299 C3               [12] 4928 	clr	c
      00129A E5 34            [12] 4929 	mov	a,_PW_MIN_THRUST
      00129C 95 4E            [12] 4930 	subb	a,_RTHRUST_PW
      00129E E5 35            [12] 4931 	mov	a,(_PW_MIN_THRUST + 1)
      0012A0 95 4F            [12] 4932 	subb	a,(_RTHRUST_PW + 1)
      0012A2 40 06            [24] 4933 	jc	00117$
                           0011B9  4934 	C$lab6.c$615$2$210 ==.
                                   4935 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:615: RTHRUST_PW = PW_MIN_THRUST;
      0012A4 85 34 4E         [24] 4936 	mov	_RTHRUST_PW,_PW_MIN_THRUST
      0012A7 85 35 4F         [24] 4937 	mov	(_RTHRUST_PW + 1),(_PW_MIN_THRUST + 1)
      0012AA                       4938 00117$:
                           0011BF  4939 	C$lab6.c$617$1$203 ==.
                                   4940 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:617: if (LTHRUST_PW >= PW_MAX_THRUST)
      0012AA C3               [12] 4941 	clr	c
      0012AB E5 50            [12] 4942 	mov	a,_LTHRUST_PW
      0012AD 95 38            [12] 4943 	subb	a,_PW_MAX_THRUST
      0012AF E5 51            [12] 4944 	mov	a,(_LTHRUST_PW + 1)
      0012B1 95 39            [12] 4945 	subb	a,(_PW_MAX_THRUST + 1)
      0012B3 40 08            [24] 4946 	jc	00121$
                           0011CA  4947 	C$lab6.c$619$2$211 ==.
                                   4948 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:619: LTHRUST_PW = PW_MAX_THRUST;
      0012B5 85 38 50         [24] 4949 	mov	_LTHRUST_PW,_PW_MAX_THRUST
      0012B8 85 39 51         [24] 4950 	mov	(_LTHRUST_PW + 1),(_PW_MAX_THRUST + 1)
      0012BB 80 11            [24] 4951 	sjmp	00122$
      0012BD                       4952 00121$:
                           0011D2  4953 	C$lab6.c$621$1$203 ==.
                                   4954 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:621: else if(LTHRUST_PW <= PW_MIN_THRUST)
      0012BD C3               [12] 4955 	clr	c
      0012BE E5 34            [12] 4956 	mov	a,_PW_MIN_THRUST
      0012C0 95 50            [12] 4957 	subb	a,_LTHRUST_PW
      0012C2 E5 35            [12] 4958 	mov	a,(_PW_MIN_THRUST + 1)
      0012C4 95 51            [12] 4959 	subb	a,(_LTHRUST_PW + 1)
      0012C6 40 06            [24] 4960 	jc	00122$
                           0011DD  4961 	C$lab6.c$623$2$212 ==.
                                   4962 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:623: LTHRUST_PW = PW_MIN_THRUST;
      0012C8 85 34 50         [24] 4963 	mov	_LTHRUST_PW,_PW_MIN_THRUST
      0012CB 85 35 51         [24] 4964 	mov	(_LTHRUST_PW + 1),(_PW_MIN_THRUST + 1)
      0012CE                       4965 00122$:
                           0011E3  4966 	C$lab6.c$626$1$203 ==.
                                   4967 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:626: RDR_lo_to_hi = 0xFFFF - RUDDER_PW ;
      0012CE 74 FF            [12] 4968 	mov	a,#0xFF
      0012D0 C3               [12] 4969 	clr	c
      0012D1 95 46            [12] 4970 	subb	a,_RUDDER_PW
      0012D3 F5 48            [12] 4971 	mov	_RDR_lo_to_hi,a
      0012D5 74 FF            [12] 4972 	mov	a,#0xFF
      0012D7 95 47            [12] 4973 	subb	a,(_RUDDER_PW + 1)
      0012D9 F5 49            [12] 4974 	mov	(_RDR_lo_to_hi + 1),a
                           0011F0  4975 	C$lab6.c$627$1$203 ==.
                                   4976 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:627: RTRST_lo_to_hi = 0xFFFF - RTHRUST_PW;
      0012DB 74 FF            [12] 4977 	mov	a,#0xFF
      0012DD C3               [12] 4978 	clr	c
      0012DE 95 4E            [12] 4979 	subb	a,_RTHRUST_PW
      0012E0 F5 52            [12] 4980 	mov	_RTRST_lo_to_hi,a
      0012E2 74 FF            [12] 4981 	mov	a,#0xFF
      0012E4 95 4F            [12] 4982 	subb	a,(_RTHRUST_PW + 1)
      0012E6 F5 53            [12] 4983 	mov	(_RTRST_lo_to_hi + 1),a
                           0011FD  4984 	C$lab6.c$628$1$203 ==.
                                   4985 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:628: LTRST_lo_to_hi = 0xFFFF - LTHRUST_PW;
      0012E8 74 FF            [12] 4986 	mov	a,#0xFF
      0012EA C3               [12] 4987 	clr	c
      0012EB 95 50            [12] 4988 	subb	a,_LTHRUST_PW
      0012ED F5 54            [12] 4989 	mov	_LTRST_lo_to_hi,a
      0012EF 74 FF            [12] 4990 	mov	a,#0xFF
      0012F1 95 51            [12] 4991 	subb	a,(_LTHRUST_PW + 1)
      0012F3 F5 55            [12] 4992 	mov	(_LTRST_lo_to_hi + 1),a
                           00120A  4993 	C$lab6.c$630$1$203 ==.
                                   4994 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:630: PCA0CP0 = RDR_lo_to_hi;
      0012F5 85 48 EA         [24] 4995 	mov	((_PCA0CP0 >> 0) & 0xFF),_RDR_lo_to_hi
      0012F8 85 49 FA         [24] 4996 	mov	((_PCA0CP0 >> 8) & 0xFF),(_RDR_lo_to_hi + 1)
                           001210  4997 	C$lab6.c$631$1$203 ==.
                                   4998 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:631: PCA0CP2 = RTRST_lo_to_hi;
      0012FB 85 52 EC         [24] 4999 	mov	((_PCA0CP2 >> 0) & 0xFF),_RTRST_lo_to_hi
      0012FE 85 53 FC         [24] 5000 	mov	((_PCA0CP2 >> 8) & 0xFF),(_RTRST_lo_to_hi + 1)
                           001216  5001 	C$lab6.c$632$1$203 ==.
                                   5002 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:632: PCA0CP3 = LTRST_lo_to_hi;
      001301 85 54 ED         [24] 5003 	mov	((_PCA0CP3 >> 0) & 0xFF),_LTRST_lo_to_hi
      001304 85 55 FD         [24] 5004 	mov	((_PCA0CP3 >> 8) & 0xFF),(_LTRST_lo_to_hi + 1)
                           00121C  5005 	C$lab6.c$633$1$203 ==.
                           00121C  5006 	XG$Steering_Servo$0$0 ==.
      001307 22               [24] 5007 	ret
                                   5008 ;------------------------------------------------------------
                                   5009 ;Allocation info for local variables in function 'start'
                                   5010 ;------------------------------------------------------------
                           00121D  5011 	G$start$0$0 ==.
                           00121D  5012 	C$lab6.c$635$1$203 ==.
                                   5013 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:635: void start(void)            ///WAITS UNTIL '*' IS ENTERED
                                   5014 ;	-----------------------------------------
                                   5015 ;	 function start
                                   5016 ;	-----------------------------------------
      001308                       5017 _start:
                           00121D  5018 	C$lab6.c$637$1$214 ==.
                                   5019 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:637: while (read_keypad() != '*') wait();
      001308                       5020 00101$:
      001308 12 02 05         [24] 5021 	lcall	_read_keypad
      00130B AF 82            [24] 5022 	mov	r7,dpl
      00130D BF 2A 02         [24] 5023 	cjne	r7,#0x2A,00112$
      001310 80 05            [24] 5024 	sjmp	00104$
      001312                       5025 00112$:
      001312 12 13 18         [24] 5026 	lcall	_wait
      001315 80 F1            [24] 5027 	sjmp	00101$
      001317                       5028 00104$:
                           00122C  5029 	C$lab6.c$638$1$214 ==.
                           00122C  5030 	XG$start$0$0 ==.
      001317 22               [24] 5031 	ret
                                   5032 ;------------------------------------------------------------
                                   5033 ;Allocation info for local variables in function 'wait'
                                   5034 ;------------------------------------------------------------
                                   5035 ;old_count                 Allocated with name '_wait_old_count_1_216'
                                   5036 ;------------------------------------------------------------
                           00122D  5037 	G$wait$0$0 ==.
                           00122D  5038 	C$lab6.c$642$1$214 ==.
                                   5039 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:642: void wait(void)
                                   5040 ;	-----------------------------------------
                                   5041 ;	 function wait
                                   5042 ;	-----------------------------------------
      001318                       5043 _wait:
                           00122D  5044 	C$lab6.c$644$1$216 ==.
                                   5045 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:644: __xdata int old_count = count+1;
      001318 90 00 61         [24] 5046 	mov	dptr,#_wait_old_count_1_216
      00131B 74 01            [12] 5047 	mov	a,#0x01
      00131D 25 32            [12] 5048 	add	a,_count
      00131F F0               [24] 5049 	movx	@dptr,a
      001320 E4               [12] 5050 	clr	a
      001321 35 33            [12] 5051 	addc	a,(_count + 1)
      001323 A3               [24] 5052 	inc	dptr
      001324 F0               [24] 5053 	movx	@dptr,a
                           00123A  5054 	C$lab6.c$645$1$216 ==.
                                   5055 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:645: while (old_count> count);
      001325 90 00 61         [24] 5056 	mov	dptr,#_wait_old_count_1_216
      001328 E0               [24] 5057 	movx	a,@dptr
      001329 FE               [12] 5058 	mov	r6,a
      00132A A3               [24] 5059 	inc	dptr
      00132B E0               [24] 5060 	movx	a,@dptr
      00132C FF               [12] 5061 	mov	r7,a
      00132D                       5062 00101$:
      00132D C3               [12] 5063 	clr	c
      00132E E5 32            [12] 5064 	mov	a,_count
      001330 9E               [12] 5065 	subb	a,r6
      001331 E5 33            [12] 5066 	mov	a,(_count + 1)
      001333 64 80            [12] 5067 	xrl	a,#0x80
      001335 8F F0            [24] 5068 	mov	b,r7
      001337 63 F0 80         [24] 5069 	xrl	b,#0x80
      00133A 95 F0            [12] 5070 	subb	a,b
      00133C 40 EF            [24] 5071 	jc	00101$
                           001253  5072 	C$lab6.c$646$1$216 ==.
                           001253  5073 	XG$wait$0$0 ==.
      00133E 22               [24] 5074 	ret
                                   5075 ;------------------------------------------------------------
                                   5076 ;Allocation info for local variables in function 'Port_Init'
                                   5077 ;------------------------------------------------------------
                           001254  5078 	G$Port_Init$0$0 ==.
                           001254  5079 	C$lab6.c$648$1$216 ==.
                                   5080 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:648: void Port_Init(void)
                                   5081 ;	-----------------------------------------
                                   5082 ;	 function Port_Init
                                   5083 ;	-----------------------------------------
      00133F                       5084 _Port_Init:
                           001254  5085 	C$lab6.c$650$1$218 ==.
                                   5086 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:650: P0MDOUT &= ~0x32;
      00133F AF A4            [24] 5087 	mov	r7,_P0MDOUT
      001341 74 CD            [12] 5088 	mov	a,#0xCD
      001343 5F               [12] 5089 	anl	a,r7
      001344 F5 A4            [12] 5090 	mov	_P0MDOUT,a
                           00125B  5091 	C$lab6.c$652$1$218 ==.
                                   5092 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:652: P1MDIN  &= ~0x20;
      001346 AF BD            [24] 5093 	mov	r7,_P1MDIN
      001348 74 DF            [12] 5094 	mov	a,#0xDF
      00134A 5F               [12] 5095 	anl	a,r7
      00134B F5 BD            [12] 5096 	mov	_P1MDIN,a
                           001262  5097 	C$lab6.c$654$1$218 ==.
                                   5098 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:654: P1MDOUT |= 0x0F;
      00134D 43 A5 0F         [24] 5099 	orl	_P1MDOUT,#0x0F
                           001265  5100 	C$lab6.c$655$1$218 ==.
                                   5101 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:655: P1MDOUT &= 0x20;
      001350 53 A5 20         [24] 5102 	anl	_P1MDOUT,#0x20
                           001268  5103 	C$lab6.c$657$1$218 ==.
                                   5104 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:657: P1 		 = 0x20;
      001353 75 90 20         [24] 5105 	mov	_P1,#0x20
                           00126B  5106 	C$lab6.c$660$1$218 ==.
                           00126B  5107 	XG$Port_Init$0$0 ==.
      001356 22               [24] 5108 	ret
                                   5109 ;------------------------------------------------------------
                                   5110 ;Allocation info for local variables in function 'PCA_Init'
                                   5111 ;------------------------------------------------------------
                           00126C  5112 	G$PCA_Init$0$0 ==.
                           00126C  5113 	C$lab6.c$662$1$218 ==.
                                   5114 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:662: void PCA_Init(void)
                                   5115 ;	-----------------------------------------
                                   5116 ;	 function PCA_Init
                                   5117 ;	-----------------------------------------
      001357                       5118 _PCA_Init:
                           00126C  5119 	C$lab6.c$664$1$220 ==.
                                   5120 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:664: PCA0MD   = 0x81;
      001357 75 D9 81         [24] 5121 	mov	_PCA0MD,#0x81
                           00126F  5122 	C$lab6.c$665$1$220 ==.
                                   5123 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:665: PCA0CPM0 = 0xC2;    //CCM0 in 16-bit compare mode FOR STEERING
      00135A 75 DA C2         [24] 5124 	mov	_PCA0CPM0,#0xC2
                           001272  5125 	C$lab6.c$666$1$220 ==.
                                   5126 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:666: PCA0CPM1 = 0xC2;
      00135D 75 DB C2         [24] 5127 	mov	_PCA0CPM1,#0xC2
                           001275  5128 	C$lab6.c$667$1$220 ==.
                                   5129 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:667: PCA0CPM2 = 0xC2;    //CCM2 in 16-bit compare mode FOR MOTOR
      001360 75 DC C2         [24] 5130 	mov	_PCA0CPM2,#0xC2
                           001278  5131 	C$lab6.c$668$1$220 ==.
                                   5132 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:668: PCA0CPM3 = 0XC2;
      001363 75 DD C2         [24] 5133 	mov	_PCA0CPM3,#0xC2
                           00127B  5134 	C$lab6.c$669$1$220 ==.
                                   5135 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:669: PCA0CN 	 = 0x40;    //Enable PCA counter
      001366 75 D8 40         [24] 5136 	mov	_PCA0CN,#0x40
                           00127E  5137 	C$lab6.c$670$1$220 ==.
                                   5138 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:670: EIE1    |= 0x08;    //Enable PCA interrupt
      001369 43 E6 08         [24] 5139 	orl	_EIE1,#0x08
                           001281  5140 	C$lab6.c$671$1$220 ==.
                                   5141 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:671: EA       = 1   ;    //Enable global interrupts
      00136C D2 AF            [12] 5142 	setb	_EA
                           001283  5143 	C$lab6.c$672$1$220 ==.
                           001283  5144 	XG$PCA_Init$0$0 ==.
      00136E 22               [24] 5145 	ret
                                   5146 ;------------------------------------------------------------
                                   5147 ;Allocation info for local variables in function 'XBR0_Init'
                                   5148 ;------------------------------------------------------------
                           001284  5149 	G$XBR0_Init$0$0 ==.
                           001284  5150 	C$lab6.c$675$1$220 ==.
                                   5151 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:675: void XBR0_Init(void)
                                   5152 ;	-----------------------------------------
                                   5153 ;	 function XBR0_Init
                                   5154 ;	-----------------------------------------
      00136F                       5155 _XBR0_Init:
                           001284  5156 	C$lab6.c$677$1$222 ==.
                                   5157 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:677: XBR0 = 0x27;
      00136F 75 E1 27         [24] 5158 	mov	_XBR0,#0x27
                           001287  5159 	C$lab6.c$678$1$222 ==.
                           001287  5160 	XG$XBR0_Init$0$0 ==.
      001372 22               [24] 5161 	ret
                                   5162 ;------------------------------------------------------------
                                   5163 ;Allocation info for local variables in function 'SMB_Init'
                                   5164 ;------------------------------------------------------------
                           001288  5165 	G$SMB_Init$0$0 ==.
                           001288  5166 	C$lab6.c$680$1$222 ==.
                                   5167 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:680: void SMB_Init(void)
                                   5168 ;	-----------------------------------------
                                   5169 ;	 function SMB_Init
                                   5170 ;	-----------------------------------------
      001373                       5171 _SMB_Init:
                           001288  5172 	C$lab6.c$682$1$224 ==.
                                   5173 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:682: SMB0CR =0x93;
      001373 75 CF 93         [24] 5174 	mov	_SMB0CR,#0x93
                           00128B  5175 	C$lab6.c$683$1$224 ==.
                                   5176 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:683: ENSMB =1;
      001376 D2 C6            [12] 5177 	setb	_ENSMB
                           00128D  5178 	C$lab6.c$684$1$224 ==.
                           00128D  5179 	XG$SMB_Init$0$0 ==.
      001378 22               [24] 5180 	ret
                                   5181 ;------------------------------------------------------------
                                   5182 ;Allocation info for local variables in function 'ADC_Init'
                                   5183 ;------------------------------------------------------------
                           00128E  5184 	G$ADC_Init$0$0 ==.
                           00128E  5185 	C$lab6.c$686$1$224 ==.
                                   5186 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:686: void ADC_Init(void)								/////SETS ADC 
                                   5187 ;	-----------------------------------------
                                   5188 ;	 function ADC_Init
                                   5189 ;	-----------------------------------------
      001379                       5190 _ADC_Init:
                           00128E  5191 	C$lab6.c$688$1$226 ==.
                                   5192 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:688: REF0CN = 0x03;
      001379 75 D1 03         [24] 5193 	mov	_REF0CN,#0x03
                           001291  5194 	C$lab6.c$689$1$226 ==.
                                   5195 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:689: ADC1CN = 0x80;
      00137C 75 AA 80         [24] 5196 	mov	_ADC1CN,#0x80
                           001294  5197 	C$lab6.c$690$1$226 ==.
                                   5198 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:690: ADC1CF |= 0x01;
      00137F 43 AB 01         [24] 5199 	orl	_ADC1CF,#0x01
                           001297  5200 	C$lab6.c$691$1$226 ==.
                           001297  5201 	XG$ADC_Init$0$0 ==.
      001382 22               [24] 5202 	ret
                                   5203 ;------------------------------------------------------------
                                   5204 ;Allocation info for local variables in function 'PCA_ISR'
                                   5205 ;------------------------------------------------------------
                           001298  5206 	G$PCA_ISR$0$0 ==.
                           001298  5207 	C$lab6.c$693$1$226 ==.
                                   5208 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:693: void PCA_ISR ( void ) __interrupt 9
                                   5209 ;	-----------------------------------------
                                   5210 ;	 function PCA_ISR
                                   5211 ;	-----------------------------------------
      001383                       5212 _PCA_ISR:
      001383 C0 E0            [24] 5213 	push	acc
      001385 C0 D0            [24] 5214 	push	psw
                           00129C  5215 	C$lab6.c$696$1$228 ==.
                                   5216 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:696: if (CF)
                           00129C  5217 	C$lab6.c$698$2$229 ==.
                                   5218 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:698: CF =0;
      001387 10 DF 02         [24] 5219 	jbc	_CF,00108$
      00138A 80 0E            [24] 5220 	sjmp	00102$
      00138C                       5221 00108$:
                           0012A1  5222 	C$lab6.c$699$2$229 ==.
                                   5223 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:699: PCA0 = PCA_START;
      00138C 75 E9 00         [24] 5224 	mov	((_PCA0 >> 0) & 0xFF),#0x00
      00138F 75 F9 70         [24] 5225 	mov	((_PCA0 >> 8) & 0xFF),#0x70
                           0012A7  5226 	C$lab6.c$700$2$229 ==.
                                   5227 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:700: count++;
      001392 05 32            [12] 5228 	inc	_count
      001394 E4               [12] 5229 	clr	a
      001395 B5 32 02         [24] 5230 	cjne	a,_count,00109$
      001398 05 33            [12] 5231 	inc	(_count + 1)
      00139A                       5232 00109$:
      00139A                       5233 00102$:
                           0012AF  5234 	C$lab6.c$705$1$228 ==.
                                   5235 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:705: PCA0CN &= 0xC0;
      00139A 53 D8 C0         [24] 5236 	anl	_PCA0CN,#0xC0
      00139D D0 D0            [24] 5237 	pop	psw
      00139F D0 E0            [24] 5238 	pop	acc
                           0012B6  5239 	C$lab6.c$706$1$228 ==.
                           0012B6  5240 	XG$PCA_ISR$0$0 ==.
      0013A1 32               [24] 5241 	reti
                                   5242 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   5243 ;	eliminated unneeded push/pop dpl
                                   5244 ;	eliminated unneeded push/pop dph
                                   5245 ;	eliminated unneeded push/pop b
                                   5246 	.area CSEG    (CODE)
                                   5247 	.area CONST   (CODE)
                           000000  5248 Flab6$__str_0$0$0 == .
      001B90                       5249 ___str_0:
      001B90 0A                    5250 	.db 0x0A
      001B91 54 79 70 65 20 64 69  5251 	.ascii "Type digits; end w/#"
             67 69 74 73 3B 20 65
             6E 64 20 77 2F 23
      001BA5 00                    5252 	.db 0x00
                           000016  5253 Flab6$__str_1$0$0 == .
      001BA6                       5254 ___str_1:
      001BA6 20 20 20 20 20 25 63  5255 	.ascii "     %c%c%c%c%c"
             25 63 25 63 25 63 25
             63
      001BB5 00                    5256 	.db 0x00
                           000026  5257 Flab6$__str_2$0$0 == .
      001BB6                       5258 ___str_2:
      001BB6 25 63                 5259 	.ascii "%c"
      001BB8 00                    5260 	.db 0x00
                           000029  5261 Flab6$__str_3$0$0 == .
      001BB9                       5262 ___str_3:
      001BB9 50 6C 65 61 73 65 20  5263 	.ascii "Please enter a kp value:"
             65 6E 74 65 72 20 61
             20 6B 70 20 76 61 6C
             75 65 3A
      001BD1 0A                    5264 	.db 0x0A
      001BD2 20                    5265 	.ascii " "
      001BD3 00                    5266 	.db 0x00
                           000044  5267 Flab6$__str_4$0$0 == .
      001BD4                       5268 ___str_4:
      001BD4 50 6C 65 61 73 65 20  5269 	.ascii "Please enter a kd value:"
             65 6E 74 65 72 20 61
             20 6B 64 20 76 61 6C
             75 65 3A
      001BEC 0A                    5270 	.db 0x0A
      001BED 20                    5271 	.ascii " "
      001BEE 00                    5272 	.db 0x00
                           00005F  5273 Flab6$__str_5$0$0 == .
      001BEF                       5274 ___str_5:
      001BEF 0D                    5275 	.db 0x0D
      001BF0 0A                    5276 	.db 0x0A
      001BF1 25 75                 5277 	.ascii "%u"
      001BF3 00                    5278 	.db 0x00
                           000064  5279 Flab6$__str_6$0$0 == .
      001BF4                       5280 ___str_6:
      001BF4 25 64                 5281 	.ascii "%d"
      001BF6 00                    5282 	.db 0x00
                           000067  5283 Flab6$__str_7$0$0 == .
      001BF7                       5284 ___str_7:
      001BF7 43 61 6C 69 62 72 61  5285 	.ascii "Calibration:"
             74 69 6F 6E 3A
      001C03 0A                    5286 	.db 0x0A
      001C04 48 65 6C 6C 6F 20 77  5287 	.ascii "Hello world!"
             6F 72 6C 64 21
      001C10 0A                    5288 	.db 0x0A
      001C11 30 31 32 5F 33 34 35  5289 	.ascii "012_345_678:"
             5F 36 37 38 3A
      001C1D 0A                    5290 	.db 0x0A
      001C1E 61 62 63 20 64 65 66  5291 	.ascii "abc def ghij"
             20 67 68 69 6A
      001C2A 00                    5292 	.db 0x00
                           00009B  5293 Flab6$__str_8$0$0 == .
      001C2B                       5294 ___str_8:
      001C2B 0D                    5295 	.db 0x0D
      001C2C 0A                    5296 	.db 0x0A
      001C2D 54 68 65 20 64 65 73  5297 	.ascii "The desired direction is: %d"
             69 72 65 64 20 64 69
             72 65 63 74 69 6F 6E
             20 69 73 3A 20 25 64
      001C49 00                    5298 	.db 0x00
                           0000BA  5299 Flab6$__str_9$0$0 == .
      001C4A                       5300 ___str_9:
      001C4A 52 75 64 64 65 72 20  5301 	.ascii "Rudder Calibration"
             43 61 6C 69 62 72 61
             74 69 6F 6E
      001C5C 00                    5302 	.db 0x00
                           0000CD  5303 Flab6$__str_10$0$0 == .
      001C5D                       5304 ___str_10:
      001C5D 67 6F 20 6C 65 66 74  5305 	.ascii "go left: press 1"
             3A 20 70 72 65 73 73
             20 31
      001C6D 0A                    5306 	.db 0x0A
      001C6E 20 67 6F 20 72 69 67  5307 	.ascii " go right: press 2"
             68 74 3A 20 70 72 65
             73 73 20 32
      001C80 0A                    5308 	.db 0x0A
      001C81 50 72 65 73 73 20 2A  5309 	.ascii "Press * for next screen"
             20 66 6F 72 20 6E 65
             78 74 20 73 63 72 65
             65 6E
      001C98 00                    5310 	.db 0x00
                           000109  5311 Flab6$__str_11$0$0 == .
      001C99                       5312 ___str_11:
      001C99 0A                    5313 	.db 0x0A
      001C9A 20 63 6F 6E 66 69 72  5314 	.ascii " confirm: press 3"
             6D 3A 20 70 72 65 73
             73 20 33
      001CAB 0A                    5315 	.db 0x0A
      001CAC 20 70 72 65 73 73 20  5316 	.ascii " press * to begin"
             2A 20 74 6F 20 62 65
             67 69 6E
      001CBD 00                    5317 	.db 0x00
                           00012E  5318 Flab6$__str_12$0$0 == .
      001CBE                       5319 ___str_12:
      001CBE 0D                    5320 	.db 0x0D
      001CBF 0A                    5321 	.db 0x0A
      001CC0 20 25 75              5322 	.ascii " %u"
      001CC3 00                    5323 	.db 0x00
                           000134  5324 Flab6$__str_13$0$0 == .
      001CC4                       5325 ___str_13:
      001CC4 4E 6F 77 20 63 61 6C  5326 	.ascii "Now calibrating Min_PW"
             69 62 72 61 74 69 6E
             67 20 4D 69 6E 5F 50
             57
      001CDA 0A                    5327 	.db 0x0A
      001CDB 00                    5328 	.db 0x00
                           00014C  5329 Flab6$__str_14$0$0 == .
      001CDC                       5330 ___str_14:
      001CDC 4E 6F 77 20 63 61 6C  5331 	.ascii "Now calibrating Cen_PW"
             69 62 72 61 74 69 6E
             67 20 43 65 6E 5F 50
             57
      001CF2 00                    5332 	.db 0x00
                           000163  5333 Flab6$__str_15$0$0 == .
      001CF3                       5334 ___str_15:
      001CF3 4E 6F 77 20 63 61 6C  5335 	.ascii "Now calibrating Max_PW"
             69 62 72 61 74 69 6E
             67 20 4D 61 78 5F 50
             57
      001D09 00                    5336 	.db 0x00
                           00017A  5337 Flab6$__str_16$0$0 == .
      001D0A                       5338 ___str_16:
      001D0A 41 6E 67 6C 65 20 43  5339 	.ascii "Angle Calibration"
             61 6C 69 62 72 61 74
             69 6F 6E
      001D1B 00                    5340 	.db 0x00
                           00018C  5341 Flab6$__str_17$0$0 == .
      001D1C                       5342 ___str_17:
      001D1C 4E 6F 77 20 63 61 6C  5343 	.ascii "Now calibrating Min_PW UP ANGLE"
             69 62 72 61 74 69 6E
             67 20 4D 69 6E 5F 50
             57 20 55 50 20 41 4E
             47 4C 45
      001D3B 00                    5344 	.db 0x00
                           0001AC  5345 Flab6$__str_18$0$0 == .
      001D3C                       5346 ___str_18:
      001D3C 4E 6F 77 20 63 61 6C  5347 	.ascii "Now calibrating Max_PW DOWN ANGLE"
             69 62 72 61 74 69 6E
             67 20 4D 61 78 5F 50
             57 20 44 4F 57 4E 20
             41 4E 47 4C 45
      001D5D 00                    5348 	.db 0x00
                           0001CE  5349 Flab6$__str_19$0$0 == .
      001D5E                       5350 ___str_19:
      001D5E 54 68 72 75 73 74 20  5351 	.ascii "Thrust Calibration"
             43 61 6C 69 62 72 61
             74 69 6F 6E
      001D70 00                    5352 	.db 0x00
                           0001E1  5353 Flab6$__str_20$0$0 == .
      001D71                       5354 ___str_20:
      001D71 4E 6F 77 20 63 61 6C  5355 	.ascii "Now calibrating Min_PW"
             69 62 72 61 74 69 6E
             67 20 4D 69 6E 5F 50
             57
      001D87 00                    5356 	.db 0x00
                                   5357 	.area XINIT   (CODE)
                           000000  5358 Flab6$__xinit_error$0$0 == .
      001D93                       5359 __xinit__error:
      001D93 00 00                 5360 	.byte #0x00,#0x00	;  0
                           000002  5361 Flab6$__xinit_old_error$0$0 == .
      001D95                       5362 __xinit__old_error:
      001D95 00 00                 5363 	.byte #0x00,#0x00	;  0
                                   5364 	.area CABS    (ABS,CODE)
