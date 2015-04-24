                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (Apr  5 2014) (MINGW32)
                                      4 ; This file was generated Fri Apr 24 10:40:23 2015
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
                                    306 	.globl _r_data
                                    307 	.globl _offset
                                    308 	.globl _actual_D
                                    309 	.globl _desired_D
                                    310 	.globl _LTRST_lo_to_hi
                                    311 	.globl _RTRST_lo_to_hi
                                    312 	.globl _LTHRUST_PW
                                    313 	.globl _RTHRUST_PW
                                    314 	.globl _AGL_lo_to_hi
                                    315 	.globl _ANGLE_PW
                                    316 	.globl _RDR_lo_to_hi
                                    317 	.globl _RUDDER_PW
                                    318 	.globl _PW_DOWN_ANGLE
                                    319 	.globl _PW_CENTER_ANGLE
                                    320 	.globl _PW_UP_ANGLE
                                    321 	.globl _PW_RIGHT_RUDDER
                                    322 	.globl _PW_CENTER_RUDDER
                                    323 	.globl _PW_LEFT_RUDDER
                                    324 	.globl _PW_MAX_THRUST
                                    325 	.globl _PW_NUET_THRUST
                                    326 	.globl _PW_MIN_THRUST
                                    327 	.globl _count
                                    328 	.globl _i2c_read_data_PARM_4
                                    329 	.globl _i2c_read_data_PARM_3
                                    330 	.globl _i2c_read_data_PARM_2
                                    331 	.globl _i2c_write_data_PARM_4
                                    332 	.globl _i2c_write_data_PARM_3
                                    333 	.globl _i2c_write_data_PARM_2
                                    334 	.globl _putchar
                                    335 	.globl _getchar
                                    336 	.globl _lcd_print
                                    337 	.globl _lcd_clear
                                    338 	.globl _kpd_input
                                    339 	.globl _delay_time
                                    340 	.globl _i2c_start
                                    341 	.globl _i2c_write
                                    342 	.globl _i2c_write_and_stop
                                    343 	.globl _i2c_read
                                    344 	.globl _i2c_read_and_stop
                                    345 	.globl _i2c_write_data
                                    346 	.globl _i2c_read_data
                                    347 	.globl _Accel_Init
                                    348 	.globl _Change_D
                                    349 	.globl _Read_Ranger
                                    350 	.globl _Steering_func
                                    351 	.globl _direction
                                    352 	.globl _ReadCompass
                                    353 	.globl _Rudder_cal
                                    354 	.globl _Angle_cal
                                    355 	.globl _Thrust_cal
                                    356 	.globl _Steering_Servo
                                    357 	.globl _start
                                    358 	.globl _wait
                                    359 	.globl _Port_Init
                                    360 	.globl _PCA_Init
                                    361 	.globl _XBR0_Init
                                    362 	.globl _SMB_Init
                                    363 	.globl _ADC_Init
                                    364 ;--------------------------------------------------------
                                    365 ; special function registers
                                    366 ;--------------------------------------------------------
                                    367 	.area RSEG    (ABS,DATA)
      000000                        368 	.org 0x0000
                           000080   369 G$P0$0$0 == 0x0080
                           000080   370 _P0	=	0x0080
                           000081   371 G$SP$0$0 == 0x0081
                           000081   372 _SP	=	0x0081
                           000082   373 G$DPL$0$0 == 0x0082
                           000082   374 _DPL	=	0x0082
                           000083   375 G$DPH$0$0 == 0x0083
                           000083   376 _DPH	=	0x0083
                           000084   377 G$P4$0$0 == 0x0084
                           000084   378 _P4	=	0x0084
                           000085   379 G$P5$0$0 == 0x0085
                           000085   380 _P5	=	0x0085
                           000086   381 G$P6$0$0 == 0x0086
                           000086   382 _P6	=	0x0086
                           000087   383 G$PCON$0$0 == 0x0087
                           000087   384 _PCON	=	0x0087
                           000088   385 G$TCON$0$0 == 0x0088
                           000088   386 _TCON	=	0x0088
                           000089   387 G$TMOD$0$0 == 0x0089
                           000089   388 _TMOD	=	0x0089
                           00008A   389 G$TL0$0$0 == 0x008a
                           00008A   390 _TL0	=	0x008a
                           00008B   391 G$TL1$0$0 == 0x008b
                           00008B   392 _TL1	=	0x008b
                           00008C   393 G$TH0$0$0 == 0x008c
                           00008C   394 _TH0	=	0x008c
                           00008D   395 G$TH1$0$0 == 0x008d
                           00008D   396 _TH1	=	0x008d
                           00008E   397 G$CKCON$0$0 == 0x008e
                           00008E   398 _CKCON	=	0x008e
                           00008F   399 G$PSCTL$0$0 == 0x008f
                           00008F   400 _PSCTL	=	0x008f
                           000090   401 G$P1$0$0 == 0x0090
                           000090   402 _P1	=	0x0090
                           000091   403 G$TMR3CN$0$0 == 0x0091
                           000091   404 _TMR3CN	=	0x0091
                           000092   405 G$TMR3RLL$0$0 == 0x0092
                           000092   406 _TMR3RLL	=	0x0092
                           000093   407 G$TMR3RLH$0$0 == 0x0093
                           000093   408 _TMR3RLH	=	0x0093
                           000094   409 G$TMR3L$0$0 == 0x0094
                           000094   410 _TMR3L	=	0x0094
                           000095   411 G$TMR3H$0$0 == 0x0095
                           000095   412 _TMR3H	=	0x0095
                           000096   413 G$P7$0$0 == 0x0096
                           000096   414 _P7	=	0x0096
                           000098   415 G$SCON$0$0 == 0x0098
                           000098   416 _SCON	=	0x0098
                           000098   417 G$SCON0$0$0 == 0x0098
                           000098   418 _SCON0	=	0x0098
                           000099   419 G$SBUF$0$0 == 0x0099
                           000099   420 _SBUF	=	0x0099
                           000099   421 G$SBUF0$0$0 == 0x0099
                           000099   422 _SBUF0	=	0x0099
                           00009A   423 G$SPI0CFG$0$0 == 0x009a
                           00009A   424 _SPI0CFG	=	0x009a
                           00009B   425 G$SPI0DAT$0$0 == 0x009b
                           00009B   426 _SPI0DAT	=	0x009b
                           00009C   427 G$ADC1$0$0 == 0x009c
                           00009C   428 _ADC1	=	0x009c
                           00009D   429 G$SPI0CKR$0$0 == 0x009d
                           00009D   430 _SPI0CKR	=	0x009d
                           00009E   431 G$CPT0CN$0$0 == 0x009e
                           00009E   432 _CPT0CN	=	0x009e
                           00009F   433 G$CPT1CN$0$0 == 0x009f
                           00009F   434 _CPT1CN	=	0x009f
                           0000A0   435 G$P2$0$0 == 0x00a0
                           0000A0   436 _P2	=	0x00a0
                           0000A1   437 G$EMI0TC$0$0 == 0x00a1
                           0000A1   438 _EMI0TC	=	0x00a1
                           0000A3   439 G$EMI0CF$0$0 == 0x00a3
                           0000A3   440 _EMI0CF	=	0x00a3
                           0000A4   441 G$PRT0CF$0$0 == 0x00a4
                           0000A4   442 _PRT0CF	=	0x00a4
                           0000A4   443 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   444 _P0MDOUT	=	0x00a4
                           0000A5   445 G$PRT1CF$0$0 == 0x00a5
                           0000A5   446 _PRT1CF	=	0x00a5
                           0000A5   447 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   448 _P1MDOUT	=	0x00a5
                           0000A6   449 G$PRT2CF$0$0 == 0x00a6
                           0000A6   450 _PRT2CF	=	0x00a6
                           0000A6   451 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   452 _P2MDOUT	=	0x00a6
                           0000A7   453 G$PRT3CF$0$0 == 0x00a7
                           0000A7   454 _PRT3CF	=	0x00a7
                           0000A7   455 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   456 _P3MDOUT	=	0x00a7
                           0000A8   457 G$IE$0$0 == 0x00a8
                           0000A8   458 _IE	=	0x00a8
                           0000A9   459 G$SADDR0$0$0 == 0x00a9
                           0000A9   460 _SADDR0	=	0x00a9
                           0000AA   461 G$ADC1CN$0$0 == 0x00aa
                           0000AA   462 _ADC1CN	=	0x00aa
                           0000AB   463 G$ADC1CF$0$0 == 0x00ab
                           0000AB   464 _ADC1CF	=	0x00ab
                           0000AC   465 G$AMX1SL$0$0 == 0x00ac
                           0000AC   466 _AMX1SL	=	0x00ac
                           0000AD   467 G$P3IF$0$0 == 0x00ad
                           0000AD   468 _P3IF	=	0x00ad
                           0000AE   469 G$SADEN1$0$0 == 0x00ae
                           0000AE   470 _SADEN1	=	0x00ae
                           0000AF   471 G$EMI0CN$0$0 == 0x00af
                           0000AF   472 _EMI0CN	=	0x00af
                           0000AF   473 G$_XPAGE$0$0 == 0x00af
                           0000AF   474 __XPAGE	=	0x00af
                           0000B0   475 G$P3$0$0 == 0x00b0
                           0000B0   476 _P3	=	0x00b0
                           0000B1   477 G$OSCXCN$0$0 == 0x00b1
                           0000B1   478 _OSCXCN	=	0x00b1
                           0000B2   479 G$OSCICN$0$0 == 0x00b2
                           0000B2   480 _OSCICN	=	0x00b2
                           0000B5   481 G$P74OUT$0$0 == 0x00b5
                           0000B5   482 _P74OUT	=	0x00b5
                           0000B6   483 G$FLSCL$0$0 == 0x00b6
                           0000B6   484 _FLSCL	=	0x00b6
                           0000B7   485 G$FLACL$0$0 == 0x00b7
                           0000B7   486 _FLACL	=	0x00b7
                           0000B8   487 G$IP$0$0 == 0x00b8
                           0000B8   488 _IP	=	0x00b8
                           0000B9   489 G$SADEN0$0$0 == 0x00b9
                           0000B9   490 _SADEN0	=	0x00b9
                           0000BA   491 G$AMX0CF$0$0 == 0x00ba
                           0000BA   492 _AMX0CF	=	0x00ba
                           0000BB   493 G$AMX0SL$0$0 == 0x00bb
                           0000BB   494 _AMX0SL	=	0x00bb
                           0000BC   495 G$ADC0CF$0$0 == 0x00bc
                           0000BC   496 _ADC0CF	=	0x00bc
                           0000BD   497 G$P1MDIN$0$0 == 0x00bd
                           0000BD   498 _P1MDIN	=	0x00bd
                           0000BE   499 G$ADC0L$0$0 == 0x00be
                           0000BE   500 _ADC0L	=	0x00be
                           0000BF   501 G$ADC0H$0$0 == 0x00bf
                           0000BF   502 _ADC0H	=	0x00bf
                           0000C0   503 G$SMB0CN$0$0 == 0x00c0
                           0000C0   504 _SMB0CN	=	0x00c0
                           0000C1   505 G$SMB0STA$0$0 == 0x00c1
                           0000C1   506 _SMB0STA	=	0x00c1
                           0000C2   507 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   508 _SMB0DAT	=	0x00c2
                           0000C3   509 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   510 _SMB0ADR	=	0x00c3
                           0000C4   511 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   512 _ADC0GTL	=	0x00c4
                           0000C5   513 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   514 _ADC0GTH	=	0x00c5
                           0000C6   515 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   516 _ADC0LTL	=	0x00c6
                           0000C7   517 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   518 _ADC0LTH	=	0x00c7
                           0000C8   519 G$T2CON$0$0 == 0x00c8
                           0000C8   520 _T2CON	=	0x00c8
                           0000C9   521 G$T4CON$0$0 == 0x00c9
                           0000C9   522 _T4CON	=	0x00c9
                           0000CA   523 G$RCAP2L$0$0 == 0x00ca
                           0000CA   524 _RCAP2L	=	0x00ca
                           0000CB   525 G$RCAP2H$0$0 == 0x00cb
                           0000CB   526 _RCAP2H	=	0x00cb
                           0000CC   527 G$TL2$0$0 == 0x00cc
                           0000CC   528 _TL2	=	0x00cc
                           0000CD   529 G$TH2$0$0 == 0x00cd
                           0000CD   530 _TH2	=	0x00cd
                           0000CF   531 G$SMB0CR$0$0 == 0x00cf
                           0000CF   532 _SMB0CR	=	0x00cf
                           0000D0   533 G$PSW$0$0 == 0x00d0
                           0000D0   534 _PSW	=	0x00d0
                           0000D1   535 G$REF0CN$0$0 == 0x00d1
                           0000D1   536 _REF0CN	=	0x00d1
                           0000D2   537 G$DAC0L$0$0 == 0x00d2
                           0000D2   538 _DAC0L	=	0x00d2
                           0000D3   539 G$DAC0H$0$0 == 0x00d3
                           0000D3   540 _DAC0H	=	0x00d3
                           0000D4   541 G$DAC0CN$0$0 == 0x00d4
                           0000D4   542 _DAC0CN	=	0x00d4
                           0000D5   543 G$DAC1L$0$0 == 0x00d5
                           0000D5   544 _DAC1L	=	0x00d5
                           0000D6   545 G$DAC1H$0$0 == 0x00d6
                           0000D6   546 _DAC1H	=	0x00d6
                           0000D7   547 G$DAC1CN$0$0 == 0x00d7
                           0000D7   548 _DAC1CN	=	0x00d7
                           0000D8   549 G$PCA0CN$0$0 == 0x00d8
                           0000D8   550 _PCA0CN	=	0x00d8
                           0000D9   551 G$PCA0MD$0$0 == 0x00d9
                           0000D9   552 _PCA0MD	=	0x00d9
                           0000DA   553 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   554 _PCA0CPM0	=	0x00da
                           0000DB   555 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   556 _PCA0CPM1	=	0x00db
                           0000DC   557 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   558 _PCA0CPM2	=	0x00dc
                           0000DD   559 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   560 _PCA0CPM3	=	0x00dd
                           0000DE   561 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   562 _PCA0CPM4	=	0x00de
                           0000E0   563 G$ACC$0$0 == 0x00e0
                           0000E0   564 _ACC	=	0x00e0
                           0000E1   565 G$XBR0$0$0 == 0x00e1
                           0000E1   566 _XBR0	=	0x00e1
                           0000E2   567 G$XBR1$0$0 == 0x00e2
                           0000E2   568 _XBR1	=	0x00e2
                           0000E3   569 G$XBR2$0$0 == 0x00e3
                           0000E3   570 _XBR2	=	0x00e3
                           0000E4   571 G$RCAP4L$0$0 == 0x00e4
                           0000E4   572 _RCAP4L	=	0x00e4
                           0000E5   573 G$RCAP4H$0$0 == 0x00e5
                           0000E5   574 _RCAP4H	=	0x00e5
                           0000E6   575 G$EIE1$0$0 == 0x00e6
                           0000E6   576 _EIE1	=	0x00e6
                           0000E7   577 G$EIE2$0$0 == 0x00e7
                           0000E7   578 _EIE2	=	0x00e7
                           0000E8   579 G$ADC0CN$0$0 == 0x00e8
                           0000E8   580 _ADC0CN	=	0x00e8
                           0000E9   581 G$PCA0L$0$0 == 0x00e9
                           0000E9   582 _PCA0L	=	0x00e9
                           0000EA   583 G$PCA0CPL0$0$0 == 0x00ea
                           0000EA   584 _PCA0CPL0	=	0x00ea
                           0000EB   585 G$PCA0CPL1$0$0 == 0x00eb
                           0000EB   586 _PCA0CPL1	=	0x00eb
                           0000EC   587 G$PCA0CPL2$0$0 == 0x00ec
                           0000EC   588 _PCA0CPL2	=	0x00ec
                           0000ED   589 G$PCA0CPL3$0$0 == 0x00ed
                           0000ED   590 _PCA0CPL3	=	0x00ed
                           0000EE   591 G$PCA0CPL4$0$0 == 0x00ee
                           0000EE   592 _PCA0CPL4	=	0x00ee
                           0000EF   593 G$RSTSRC$0$0 == 0x00ef
                           0000EF   594 _RSTSRC	=	0x00ef
                           0000F0   595 G$B$0$0 == 0x00f0
                           0000F0   596 _B	=	0x00f0
                           0000F1   597 G$SCON1$0$0 == 0x00f1
                           0000F1   598 _SCON1	=	0x00f1
                           0000F2   599 G$SBUF1$0$0 == 0x00f2
                           0000F2   600 _SBUF1	=	0x00f2
                           0000F3   601 G$SADDR1$0$0 == 0x00f3
                           0000F3   602 _SADDR1	=	0x00f3
                           0000F4   603 G$TL4$0$0 == 0x00f4
                           0000F4   604 _TL4	=	0x00f4
                           0000F5   605 G$TH4$0$0 == 0x00f5
                           0000F5   606 _TH4	=	0x00f5
                           0000F6   607 G$EIP1$0$0 == 0x00f6
                           0000F6   608 _EIP1	=	0x00f6
                           0000F7   609 G$EIP2$0$0 == 0x00f7
                           0000F7   610 _EIP2	=	0x00f7
                           0000F8   611 G$SPI0CN$0$0 == 0x00f8
                           0000F8   612 _SPI0CN	=	0x00f8
                           0000F9   613 G$PCA0H$0$0 == 0x00f9
                           0000F9   614 _PCA0H	=	0x00f9
                           0000FA   615 G$PCA0CPH0$0$0 == 0x00fa
                           0000FA   616 _PCA0CPH0	=	0x00fa
                           0000FB   617 G$PCA0CPH1$0$0 == 0x00fb
                           0000FB   618 _PCA0CPH1	=	0x00fb
                           0000FC   619 G$PCA0CPH2$0$0 == 0x00fc
                           0000FC   620 _PCA0CPH2	=	0x00fc
                           0000FD   621 G$PCA0CPH3$0$0 == 0x00fd
                           0000FD   622 _PCA0CPH3	=	0x00fd
                           0000FE   623 G$PCA0CPH4$0$0 == 0x00fe
                           0000FE   624 _PCA0CPH4	=	0x00fe
                           0000FF   625 G$WDTCN$0$0 == 0x00ff
                           0000FF   626 _WDTCN	=	0x00ff
                           008C8A   627 G$TMR0$0$0 == 0x8c8a
                           008C8A   628 _TMR0	=	0x8c8a
                           008D8B   629 G$TMR1$0$0 == 0x8d8b
                           008D8B   630 _TMR1	=	0x8d8b
                           00CDCC   631 G$TMR2$0$0 == 0xcdcc
                           00CDCC   632 _TMR2	=	0xcdcc
                           00CBCA   633 G$RCAP2$0$0 == 0xcbca
                           00CBCA   634 _RCAP2	=	0xcbca
                           009594   635 G$TMR3$0$0 == 0x9594
                           009594   636 _TMR3	=	0x9594
                           009392   637 G$TMR3RL$0$0 == 0x9392
                           009392   638 _TMR3RL	=	0x9392
                           00F5F4   639 G$TMR4$0$0 == 0xf5f4
                           00F5F4   640 _TMR4	=	0xf5f4
                           00E5E4   641 G$RCAP4$0$0 == 0xe5e4
                           00E5E4   642 _RCAP4	=	0xe5e4
                           00BFBE   643 G$ADC0$0$0 == 0xbfbe
                           00BFBE   644 _ADC0	=	0xbfbe
                           00C5C4   645 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   646 _ADC0GT	=	0xc5c4
                           00C7C6   647 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   648 _ADC0LT	=	0xc7c6
                           00D3D2   649 G$DAC0$0$0 == 0xd3d2
                           00D3D2   650 _DAC0	=	0xd3d2
                           00D6D5   651 G$DAC1$0$0 == 0xd6d5
                           00D6D5   652 _DAC1	=	0xd6d5
                           00F9E9   653 G$PCA0$0$0 == 0xf9e9
                           00F9E9   654 _PCA0	=	0xf9e9
                           00FAEA   655 G$PCA0CP0$0$0 == 0xfaea
                           00FAEA   656 _PCA0CP0	=	0xfaea
                           00FBEB   657 G$PCA0CP1$0$0 == 0xfbeb
                           00FBEB   658 _PCA0CP1	=	0xfbeb
                           00FCEC   659 G$PCA0CP2$0$0 == 0xfcec
                           00FCEC   660 _PCA0CP2	=	0xfcec
                           00FDED   661 G$PCA0CP3$0$0 == 0xfded
                           00FDED   662 _PCA0CP3	=	0xfded
                           00FEEE   663 G$PCA0CP4$0$0 == 0xfeee
                           00FEEE   664 _PCA0CP4	=	0xfeee
                                    665 ;--------------------------------------------------------
                                    666 ; special function bits
                                    667 ;--------------------------------------------------------
                                    668 	.area RSEG    (ABS,DATA)
      000000                        669 	.org 0x0000
                           000080   670 G$P0_0$0$0 == 0x0080
                           000080   671 _P0_0	=	0x0080
                           000081   672 G$P0_1$0$0 == 0x0081
                           000081   673 _P0_1	=	0x0081
                           000082   674 G$P0_2$0$0 == 0x0082
                           000082   675 _P0_2	=	0x0082
                           000083   676 G$P0_3$0$0 == 0x0083
                           000083   677 _P0_3	=	0x0083
                           000084   678 G$P0_4$0$0 == 0x0084
                           000084   679 _P0_4	=	0x0084
                           000085   680 G$P0_5$0$0 == 0x0085
                           000085   681 _P0_5	=	0x0085
                           000086   682 G$P0_6$0$0 == 0x0086
                           000086   683 _P0_6	=	0x0086
                           000087   684 G$P0_7$0$0 == 0x0087
                           000087   685 _P0_7	=	0x0087
                           000088   686 G$IT0$0$0 == 0x0088
                           000088   687 _IT0	=	0x0088
                           000089   688 G$IE0$0$0 == 0x0089
                           000089   689 _IE0	=	0x0089
                           00008A   690 G$IT1$0$0 == 0x008a
                           00008A   691 _IT1	=	0x008a
                           00008B   692 G$IE1$0$0 == 0x008b
                           00008B   693 _IE1	=	0x008b
                           00008C   694 G$TR0$0$0 == 0x008c
                           00008C   695 _TR0	=	0x008c
                           00008D   696 G$TF0$0$0 == 0x008d
                           00008D   697 _TF0	=	0x008d
                           00008E   698 G$TR1$0$0 == 0x008e
                           00008E   699 _TR1	=	0x008e
                           00008F   700 G$TF1$0$0 == 0x008f
                           00008F   701 _TF1	=	0x008f
                           000090   702 G$P1_0$0$0 == 0x0090
                           000090   703 _P1_0	=	0x0090
                           000091   704 G$P1_1$0$0 == 0x0091
                           000091   705 _P1_1	=	0x0091
                           000092   706 G$P1_2$0$0 == 0x0092
                           000092   707 _P1_2	=	0x0092
                           000093   708 G$P1_3$0$0 == 0x0093
                           000093   709 _P1_3	=	0x0093
                           000094   710 G$P1_4$0$0 == 0x0094
                           000094   711 _P1_4	=	0x0094
                           000095   712 G$P1_5$0$0 == 0x0095
                           000095   713 _P1_5	=	0x0095
                           000096   714 G$P1_6$0$0 == 0x0096
                           000096   715 _P1_6	=	0x0096
                           000097   716 G$P1_7$0$0 == 0x0097
                           000097   717 _P1_7	=	0x0097
                           000098   718 G$RI$0$0 == 0x0098
                           000098   719 _RI	=	0x0098
                           000098   720 G$RI0$0$0 == 0x0098
                           000098   721 _RI0	=	0x0098
                           000099   722 G$TI$0$0 == 0x0099
                           000099   723 _TI	=	0x0099
                           000099   724 G$TI0$0$0 == 0x0099
                           000099   725 _TI0	=	0x0099
                           00009A   726 G$RB8$0$0 == 0x009a
                           00009A   727 _RB8	=	0x009a
                           00009A   728 G$RB80$0$0 == 0x009a
                           00009A   729 _RB80	=	0x009a
                           00009B   730 G$TB8$0$0 == 0x009b
                           00009B   731 _TB8	=	0x009b
                           00009B   732 G$TB80$0$0 == 0x009b
                           00009B   733 _TB80	=	0x009b
                           00009C   734 G$REN$0$0 == 0x009c
                           00009C   735 _REN	=	0x009c
                           00009C   736 G$REN0$0$0 == 0x009c
                           00009C   737 _REN0	=	0x009c
                           00009D   738 G$SM2$0$0 == 0x009d
                           00009D   739 _SM2	=	0x009d
                           00009D   740 G$SM20$0$0 == 0x009d
                           00009D   741 _SM20	=	0x009d
                           00009D   742 G$MCE0$0$0 == 0x009d
                           00009D   743 _MCE0	=	0x009d
                           00009E   744 G$SM1$0$0 == 0x009e
                           00009E   745 _SM1	=	0x009e
                           00009E   746 G$SM10$0$0 == 0x009e
                           00009E   747 _SM10	=	0x009e
                           00009F   748 G$SM0$0$0 == 0x009f
                           00009F   749 _SM0	=	0x009f
                           00009F   750 G$SM00$0$0 == 0x009f
                           00009F   751 _SM00	=	0x009f
                           00009F   752 G$S0MODE$0$0 == 0x009f
                           00009F   753 _S0MODE	=	0x009f
                           0000A0   754 G$P2_0$0$0 == 0x00a0
                           0000A0   755 _P2_0	=	0x00a0
                           0000A1   756 G$P2_1$0$0 == 0x00a1
                           0000A1   757 _P2_1	=	0x00a1
                           0000A2   758 G$P2_2$0$0 == 0x00a2
                           0000A2   759 _P2_2	=	0x00a2
                           0000A3   760 G$P2_3$0$0 == 0x00a3
                           0000A3   761 _P2_3	=	0x00a3
                           0000A4   762 G$P2_4$0$0 == 0x00a4
                           0000A4   763 _P2_4	=	0x00a4
                           0000A5   764 G$P2_5$0$0 == 0x00a5
                           0000A5   765 _P2_5	=	0x00a5
                           0000A6   766 G$P2_6$0$0 == 0x00a6
                           0000A6   767 _P2_6	=	0x00a6
                           0000A7   768 G$P2_7$0$0 == 0x00a7
                           0000A7   769 _P2_7	=	0x00a7
                           0000A8   770 G$EX0$0$0 == 0x00a8
                           0000A8   771 _EX0	=	0x00a8
                           0000A9   772 G$ET0$0$0 == 0x00a9
                           0000A9   773 _ET0	=	0x00a9
                           0000AA   774 G$EX1$0$0 == 0x00aa
                           0000AA   775 _EX1	=	0x00aa
                           0000AB   776 G$ET1$0$0 == 0x00ab
                           0000AB   777 _ET1	=	0x00ab
                           0000AC   778 G$ES0$0$0 == 0x00ac
                           0000AC   779 _ES0	=	0x00ac
                           0000AC   780 G$ES$0$0 == 0x00ac
                           0000AC   781 _ES	=	0x00ac
                           0000AD   782 G$ET2$0$0 == 0x00ad
                           0000AD   783 _ET2	=	0x00ad
                           0000AF   784 G$EA$0$0 == 0x00af
                           0000AF   785 _EA	=	0x00af
                           0000B0   786 G$P3_0$0$0 == 0x00b0
                           0000B0   787 _P3_0	=	0x00b0
                           0000B1   788 G$P3_1$0$0 == 0x00b1
                           0000B1   789 _P3_1	=	0x00b1
                           0000B2   790 G$P3_2$0$0 == 0x00b2
                           0000B2   791 _P3_2	=	0x00b2
                           0000B3   792 G$P3_3$0$0 == 0x00b3
                           0000B3   793 _P3_3	=	0x00b3
                           0000B4   794 G$P3_4$0$0 == 0x00b4
                           0000B4   795 _P3_4	=	0x00b4
                           0000B5   796 G$P3_5$0$0 == 0x00b5
                           0000B5   797 _P3_5	=	0x00b5
                           0000B6   798 G$P3_6$0$0 == 0x00b6
                           0000B6   799 _P3_6	=	0x00b6
                           0000B7   800 G$P3_7$0$0 == 0x00b7
                           0000B7   801 _P3_7	=	0x00b7
                           0000B8   802 G$PX0$0$0 == 0x00b8
                           0000B8   803 _PX0	=	0x00b8
                           0000B9   804 G$PT0$0$0 == 0x00b9
                           0000B9   805 _PT0	=	0x00b9
                           0000BA   806 G$PX1$0$0 == 0x00ba
                           0000BA   807 _PX1	=	0x00ba
                           0000BB   808 G$PT1$0$0 == 0x00bb
                           0000BB   809 _PT1	=	0x00bb
                           0000BC   810 G$PS0$0$0 == 0x00bc
                           0000BC   811 _PS0	=	0x00bc
                           0000BC   812 G$PS$0$0 == 0x00bc
                           0000BC   813 _PS	=	0x00bc
                           0000BD   814 G$PT2$0$0 == 0x00bd
                           0000BD   815 _PT2	=	0x00bd
                           0000C0   816 G$SMBTOE$0$0 == 0x00c0
                           0000C0   817 _SMBTOE	=	0x00c0
                           0000C1   818 G$SMBFTE$0$0 == 0x00c1
                           0000C1   819 _SMBFTE	=	0x00c1
                           0000C2   820 G$AA$0$0 == 0x00c2
                           0000C2   821 _AA	=	0x00c2
                           0000C3   822 G$SI$0$0 == 0x00c3
                           0000C3   823 _SI	=	0x00c3
                           0000C4   824 G$STO$0$0 == 0x00c4
                           0000C4   825 _STO	=	0x00c4
                           0000C5   826 G$STA$0$0 == 0x00c5
                           0000C5   827 _STA	=	0x00c5
                           0000C6   828 G$ENSMB$0$0 == 0x00c6
                           0000C6   829 _ENSMB	=	0x00c6
                           0000C7   830 G$BUSY$0$0 == 0x00c7
                           0000C7   831 _BUSY	=	0x00c7
                           0000C8   832 G$CPRL2$0$0 == 0x00c8
                           0000C8   833 _CPRL2	=	0x00c8
                           0000C9   834 G$CT2$0$0 == 0x00c9
                           0000C9   835 _CT2	=	0x00c9
                           0000CA   836 G$TR2$0$0 == 0x00ca
                           0000CA   837 _TR2	=	0x00ca
                           0000CB   838 G$EXEN2$0$0 == 0x00cb
                           0000CB   839 _EXEN2	=	0x00cb
                           0000CC   840 G$TCLK$0$0 == 0x00cc
                           0000CC   841 _TCLK	=	0x00cc
                           0000CD   842 G$RCLK$0$0 == 0x00cd
                           0000CD   843 _RCLK	=	0x00cd
                           0000CE   844 G$EXF2$0$0 == 0x00ce
                           0000CE   845 _EXF2	=	0x00ce
                           0000CF   846 G$TF2$0$0 == 0x00cf
                           0000CF   847 _TF2	=	0x00cf
                           0000D0   848 G$P$0$0 == 0x00d0
                           0000D0   849 _P	=	0x00d0
                           0000D1   850 G$F1$0$0 == 0x00d1
                           0000D1   851 _F1	=	0x00d1
                           0000D2   852 G$OV$0$0 == 0x00d2
                           0000D2   853 _OV	=	0x00d2
                           0000D3   854 G$RS0$0$0 == 0x00d3
                           0000D3   855 _RS0	=	0x00d3
                           0000D4   856 G$RS1$0$0 == 0x00d4
                           0000D4   857 _RS1	=	0x00d4
                           0000D5   858 G$F0$0$0 == 0x00d5
                           0000D5   859 _F0	=	0x00d5
                           0000D6   860 G$AC$0$0 == 0x00d6
                           0000D6   861 _AC	=	0x00d6
                           0000D7   862 G$CY$0$0 == 0x00d7
                           0000D7   863 _CY	=	0x00d7
                           0000D8   864 G$CCF0$0$0 == 0x00d8
                           0000D8   865 _CCF0	=	0x00d8
                           0000D9   866 G$CCF1$0$0 == 0x00d9
                           0000D9   867 _CCF1	=	0x00d9
                           0000DA   868 G$CCF2$0$0 == 0x00da
                           0000DA   869 _CCF2	=	0x00da
                           0000DB   870 G$CCF3$0$0 == 0x00db
                           0000DB   871 _CCF3	=	0x00db
                           0000DC   872 G$CCF4$0$0 == 0x00dc
                           0000DC   873 _CCF4	=	0x00dc
                           0000DE   874 G$CR$0$0 == 0x00de
                           0000DE   875 _CR	=	0x00de
                           0000DF   876 G$CF$0$0 == 0x00df
                           0000DF   877 _CF	=	0x00df
                           0000E8   878 G$ADLJST$0$0 == 0x00e8
                           0000E8   879 _ADLJST	=	0x00e8
                           0000E8   880 G$AD0LJST$0$0 == 0x00e8
                           0000E8   881 _AD0LJST	=	0x00e8
                           0000E9   882 G$ADWINT$0$0 == 0x00e9
                           0000E9   883 _ADWINT	=	0x00e9
                           0000E9   884 G$AD0WINT$0$0 == 0x00e9
                           0000E9   885 _AD0WINT	=	0x00e9
                           0000EA   886 G$ADSTM0$0$0 == 0x00ea
                           0000EA   887 _ADSTM0	=	0x00ea
                           0000EA   888 G$AD0CM0$0$0 == 0x00ea
                           0000EA   889 _AD0CM0	=	0x00ea
                           0000EB   890 G$ADSTM1$0$0 == 0x00eb
                           0000EB   891 _ADSTM1	=	0x00eb
                           0000EB   892 G$AD0CM1$0$0 == 0x00eb
                           0000EB   893 _AD0CM1	=	0x00eb
                           0000EC   894 G$ADBUSY$0$0 == 0x00ec
                           0000EC   895 _ADBUSY	=	0x00ec
                           0000EC   896 G$AD0BUSY$0$0 == 0x00ec
                           0000EC   897 _AD0BUSY	=	0x00ec
                           0000ED   898 G$ADCINT$0$0 == 0x00ed
                           0000ED   899 _ADCINT	=	0x00ed
                           0000ED   900 G$AD0INT$0$0 == 0x00ed
                           0000ED   901 _AD0INT	=	0x00ed
                           0000EE   902 G$ADCTM$0$0 == 0x00ee
                           0000EE   903 _ADCTM	=	0x00ee
                           0000EE   904 G$AD0TM$0$0 == 0x00ee
                           0000EE   905 _AD0TM	=	0x00ee
                           0000EF   906 G$ADCEN$0$0 == 0x00ef
                           0000EF   907 _ADCEN	=	0x00ef
                           0000EF   908 G$AD0EN$0$0 == 0x00ef
                           0000EF   909 _AD0EN	=	0x00ef
                           0000F8   910 G$SPIEN$0$0 == 0x00f8
                           0000F8   911 _SPIEN	=	0x00f8
                           0000F9   912 G$MSTEN$0$0 == 0x00f9
                           0000F9   913 _MSTEN	=	0x00f9
                           0000FA   914 G$SLVSEL$0$0 == 0x00fa
                           0000FA   915 _SLVSEL	=	0x00fa
                           0000FB   916 G$TXBSY$0$0 == 0x00fb
                           0000FB   917 _TXBSY	=	0x00fb
                           0000FC   918 G$RXOVRN$0$0 == 0x00fc
                           0000FC   919 _RXOVRN	=	0x00fc
                           0000FD   920 G$MODF$0$0 == 0x00fd
                           0000FD   921 _MODF	=	0x00fd
                           0000FE   922 G$WCOL$0$0 == 0x00fe
                           0000FE   923 _WCOL	=	0x00fe
                           0000FF   924 G$SPIF$0$0 == 0x00ff
                           0000FF   925 _SPIF	=	0x00ff
                           0000C7   926 G$BUS_BUSY$0$0 == 0x00c7
                           0000C7   927 _BUS_BUSY	=	0x00c7
                           0000C6   928 G$BUS_EN$0$0 == 0x00c6
                           0000C6   929 _BUS_EN	=	0x00c6
                           0000C5   930 G$BUS_START$0$0 == 0x00c5
                           0000C5   931 _BUS_START	=	0x00c5
                           0000C4   932 G$BUS_STOP$0$0 == 0x00c4
                           0000C4   933 _BUS_STOP	=	0x00c4
                           0000C3   934 G$BUS_INT$0$0 == 0x00c3
                           0000C3   935 _BUS_INT	=	0x00c3
                           0000C2   936 G$BUS_AA$0$0 == 0x00c2
                           0000C2   937 _BUS_AA	=	0x00c2
                           0000C1   938 G$BUS_FTE$0$0 == 0x00c1
                           0000C1   939 _BUS_FTE	=	0x00c1
                           0000C0   940 G$BUS_TOE$0$0 == 0x00c0
                           0000C0   941 _BUS_TOE	=	0x00c0
                           000083   942 G$BUS_SCL$0$0 == 0x0083
                           000083   943 _BUS_SCL	=	0x0083
                                    944 ;--------------------------------------------------------
                                    945 ; overlayable register banks
                                    946 ;--------------------------------------------------------
                                    947 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        948 	.ds 8
                                    949 ;--------------------------------------------------------
                                    950 ; internal ram data
                                    951 ;--------------------------------------------------------
                                    952 	.area DSEG    (DATA)
                           000000   953 Llab6.lcd_clear$NumBytes$1$77==.
      000022                        954 _lcd_clear_NumBytes_1_77:
      000022                        955 	.ds 1
                           000001   956 Llab6.lcd_clear$Cmd$1$77==.
      000023                        957 _lcd_clear_Cmd_1_77:
      000023                        958 	.ds 2
                           000003   959 Llab6.read_keypad$Data$1$78==.
      000025                        960 _read_keypad_Data_1_78:
      000025                        961 	.ds 2
                           000005   962 Llab6.i2c_write_data$start_reg$1$97==.
      000027                        963 _i2c_write_data_PARM_2:
      000027                        964 	.ds 1
                           000006   965 Llab6.i2c_write_data$buffer$1$97==.
      000028                        966 _i2c_write_data_PARM_3:
      000028                        967 	.ds 3
                           000009   968 Llab6.i2c_write_data$num_bytes$1$97==.
      00002B                        969 _i2c_write_data_PARM_4:
      00002B                        970 	.ds 1
                           00000A   971 Llab6.i2c_read_data$start_reg$1$99==.
      00002C                        972 _i2c_read_data_PARM_2:
      00002C                        973 	.ds 1
                           00000B   974 Llab6.i2c_read_data$buffer$1$99==.
      00002D                        975 _i2c_read_data_PARM_3:
      00002D                        976 	.ds 3
                           00000E   977 Llab6.i2c_read_data$num_bytes$1$99==.
      000030                        978 _i2c_read_data_PARM_4:
      000030                        979 	.ds 1
                           00000F   980 Llab6.Accel_Init$Data2$1$103==.
      000031                        981 _Accel_Init_Data2_1_103:
      000031                        982 	.ds 1
                           000010   983 G$count$0$0==.
      000032                        984 _count::
      000032                        985 	.ds 2
                           000012   986 G$PW_MIN_THRUST$0$0==.
      000034                        987 _PW_MIN_THRUST::
      000034                        988 	.ds 2
                           000014   989 G$PW_NUET_THRUST$0$0==.
      000036                        990 _PW_NUET_THRUST::
      000036                        991 	.ds 2
                           000016   992 G$PW_MAX_THRUST$0$0==.
      000038                        993 _PW_MAX_THRUST::
      000038                        994 	.ds 2
                           000018   995 G$PW_LEFT_RUDDER$0$0==.
      00003A                        996 _PW_LEFT_RUDDER::
      00003A                        997 	.ds 2
                           00001A   998 G$PW_CENTER_RUDDER$0$0==.
      00003C                        999 _PW_CENTER_RUDDER::
      00003C                       1000 	.ds 2
                           00001C  1001 G$PW_RIGHT_RUDDER$0$0==.
      00003E                       1002 _PW_RIGHT_RUDDER::
      00003E                       1003 	.ds 2
                           00001E  1004 G$PW_UP_ANGLE$0$0==.
      000040                       1005 _PW_UP_ANGLE::
      000040                       1006 	.ds 2
                           000020  1007 G$PW_CENTER_ANGLE$0$0==.
      000042                       1008 _PW_CENTER_ANGLE::
      000042                       1009 	.ds 2
                           000022  1010 G$PW_DOWN_ANGLE$0$0==.
      000044                       1011 _PW_DOWN_ANGLE::
      000044                       1012 	.ds 2
                           000024  1013 G$RUDDER_PW$0$0==.
      000046                       1014 _RUDDER_PW::
      000046                       1015 	.ds 2
                           000026  1016 G$RDR_lo_to_hi$0$0==.
      000048                       1017 _RDR_lo_to_hi::
      000048                       1018 	.ds 2
                           000028  1019 G$ANGLE_PW$0$0==.
      00004A                       1020 _ANGLE_PW::
      00004A                       1021 	.ds 2
                           00002A  1022 G$AGL_lo_to_hi$0$0==.
      00004C                       1023 _AGL_lo_to_hi::
      00004C                       1024 	.ds 2
                           00002C  1025 G$RTHRUST_PW$0$0==.
      00004E                       1026 _RTHRUST_PW::
      00004E                       1027 	.ds 2
                           00002E  1028 G$LTHRUST_PW$0$0==.
      000050                       1029 _LTHRUST_PW::
      000050                       1030 	.ds 2
                           000030  1031 G$RTRST_lo_to_hi$0$0==.
      000052                       1032 _RTRST_lo_to_hi::
      000052                       1033 	.ds 2
                           000032  1034 G$LTRST_lo_to_hi$0$0==.
      000054                       1035 _LTRST_lo_to_hi::
      000054                       1036 	.ds 2
                           000034  1037 G$desired_D$0$0==.
      000056                       1038 _desired_D::
      000056                       1039 	.ds 2
                           000036  1040 G$actual_D$0$0==.
      000058                       1041 _actual_D::
      000058                       1042 	.ds 2
                           000038  1043 G$offset$0$0==.
      00005A                       1044 _offset::
      00005A                       1045 	.ds 2
                           00003A  1046 G$r_data$0$0==.
      00005C                       1047 _r_data::
      00005C                       1048 	.ds 2
                           00003C  1049 Llab6.ReadCompass$Data$1$134==.
      00005E                       1050 _ReadCompass_Data_1_134:
      00005E                       1051 	.ds 2
                           00003E  1052 Llab6.Steering_Servo$direction$1$194==.
      000060                       1053 _Steering_Servo_direction_1_194:
      000060                       1054 	.ds 2
                                   1055 ;--------------------------------------------------------
                                   1056 ; overlayable items in internal ram 
                                   1057 ;--------------------------------------------------------
                                   1058 	.area	OSEG    (OVR,DATA)
                                   1059 	.area	OSEG    (OVR,DATA)
                                   1060 	.area	OSEG    (OVR,DATA)
                                   1061 	.area	OSEG    (OVR,DATA)
                                   1062 	.area	OSEG    (OVR,DATA)
                                   1063 	.area	OSEG    (OVR,DATA)
                                   1064 	.area	OSEG    (OVR,DATA)
                                   1065 	.area	OSEG    (OVR,DATA)
                                   1066 ;--------------------------------------------------------
                                   1067 ; Stack segment in internal ram 
                                   1068 ;--------------------------------------------------------
                                   1069 	.area	SSEG
      00007C                       1070 __start__stack:
      00007C                       1071 	.ds	1
                                   1072 
                                   1073 ;--------------------------------------------------------
                                   1074 ; indirectly addressable internal ram data
                                   1075 ;--------------------------------------------------------
                                   1076 	.area ISEG    (DATA)
                                   1077 ;--------------------------------------------------------
                                   1078 ; absolute internal ram data
                                   1079 ;--------------------------------------------------------
                                   1080 	.area IABS    (ABS,DATA)
                                   1081 	.area IABS    (ABS,DATA)
                                   1082 ;--------------------------------------------------------
                                   1083 ; bit data
                                   1084 ;--------------------------------------------------------
                                   1085 	.area BSEG    (BIT)
                                   1086 ;--------------------------------------------------------
                                   1087 ; paged external ram data
                                   1088 ;--------------------------------------------------------
                                   1089 	.area PSEG    (PAG,XDATA)
                                   1090 ;--------------------------------------------------------
                                   1091 ; external ram data
                                   1092 ;--------------------------------------------------------
                                   1093 	.area XSEG    (XDATA)
                           000000  1094 Llab6.lcd_print$text$1$73==.
      000001                       1095 _lcd_print_text_1_73:
      000001                       1096 	.ds 80
                                   1097 ;--------------------------------------------------------
                                   1098 ; absolute external ram data
                                   1099 ;--------------------------------------------------------
                                   1100 	.area XABS    (ABS,XDATA)
                                   1101 ;--------------------------------------------------------
                                   1102 ; external initialized ram data
                                   1103 ;--------------------------------------------------------
                                   1104 	.area XISEG   (XDATA)
                                   1105 	.area HOME    (CODE)
                                   1106 	.area GSINIT0 (CODE)
                                   1107 	.area GSINIT1 (CODE)
                                   1108 	.area GSINIT2 (CODE)
                                   1109 	.area GSINIT3 (CODE)
                                   1110 	.area GSINIT4 (CODE)
                                   1111 	.area GSINIT5 (CODE)
                                   1112 	.area GSINIT  (CODE)
                                   1113 	.area GSFINAL (CODE)
                                   1114 	.area CSEG    (CODE)
                                   1115 ;--------------------------------------------------------
                                   1116 ; interrupt vector 
                                   1117 ;--------------------------------------------------------
                                   1118 	.area HOME    (CODE)
      000000                       1119 __interrupt_vect:
      000000 02 00 51         [24] 1120 	ljmp	__sdcc_gsinit_startup
      000003 32               [24] 1121 	reti
      000004                       1122 	.ds	7
      00000B 32               [24] 1123 	reti
      00000C                       1124 	.ds	7
      000013 32               [24] 1125 	reti
      000014                       1126 	.ds	7
      00001B 32               [24] 1127 	reti
      00001C                       1128 	.ds	7
      000023 32               [24] 1129 	reti
      000024                       1130 	.ds	7
      00002B 32               [24] 1131 	reti
      00002C                       1132 	.ds	7
      000033 32               [24] 1133 	reti
      000034                       1134 	.ds	7
      00003B 32               [24] 1135 	reti
      00003C                       1136 	.ds	7
      000043 32               [24] 1137 	reti
      000044                       1138 	.ds	7
      00004B 02 13 6B         [24] 1139 	ljmp	_PCA_ISR
                                   1140 ;--------------------------------------------------------
                                   1141 ; global & static initialisations
                                   1142 ;--------------------------------------------------------
                                   1143 	.area HOME    (CODE)
                                   1144 	.area GSINIT  (CODE)
                                   1145 	.area GSFINAL (CODE)
                                   1146 	.area GSINIT  (CODE)
                                   1147 	.globl __sdcc_gsinit_startup
                                   1148 	.globl __sdcc_program_startup
                                   1149 	.globl __start__stack
                                   1150 	.globl __mcs51_genXINIT
                                   1151 	.globl __mcs51_genXRAMCLEAR
                                   1152 	.globl __mcs51_genRAMCLEAR
                           000000  1153 	C$lab6.c$43$1$218 ==.
                                   1154 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:43: int count=0;
      0000AA E4               [12] 1155 	clr	a
      0000AB F5 32            [12] 1156 	mov	_count,a
      0000AD F5 33            [12] 1157 	mov	(_count + 1),a
                           000005  1158 	C$lab6.c$44$1$218 ==.
                                   1159 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:44: unsigned int PW_MIN_THRUST = 2000;
      0000AF 75 34 D0         [24] 1160 	mov	_PW_MIN_THRUST,#0xD0
      0000B2 75 35 07         [24] 1161 	mov	(_PW_MIN_THRUST + 1),#0x07
                           00000B  1162 	C$lab6.c$45$1$218 ==.
                                   1163 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:45: unsigned int PW_NUET_THRUST = 2750;
      0000B5 75 36 BE         [24] 1164 	mov	_PW_NUET_THRUST,#0xBE
      0000B8 75 37 0A         [24] 1165 	mov	(_PW_NUET_THRUST + 1),#0x0A
                           000011  1166 	C$lab6.c$46$1$218 ==.
                                   1167 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:46: unsigned int PW_MAX_THRUST = 3500;
      0000BB 75 38 AC         [24] 1168 	mov	_PW_MAX_THRUST,#0xAC
      0000BE 75 39 0D         [24] 1169 	mov	(_PW_MAX_THRUST + 1),#0x0D
                           000017  1170 	C$lab6.c$48$1$218 ==.
                                   1171 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:48: unsigned int PW_LEFT_RUDDER = 2000;
      0000C1 75 3A D0         [24] 1172 	mov	_PW_LEFT_RUDDER,#0xD0
      0000C4 75 3B 07         [24] 1173 	mov	(_PW_LEFT_RUDDER + 1),#0x07
                           00001D  1174 	C$lab6.c$49$1$218 ==.
                                   1175 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:49: unsigned int PW_CENTER_RUDDER = 2750;
      0000C7 75 3C BE         [24] 1176 	mov	_PW_CENTER_RUDDER,#0xBE
      0000CA 75 3D 0A         [24] 1177 	mov	(_PW_CENTER_RUDDER + 1),#0x0A
                           000023  1178 	C$lab6.c$50$1$218 ==.
                                   1179 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:50: unsigned int PW_RIGHT_RUDDER = 3500;
      0000CD 75 3E AC         [24] 1180 	mov	_PW_RIGHT_RUDDER,#0xAC
      0000D0 75 3F 0D         [24] 1181 	mov	(_PW_RIGHT_RUDDER + 1),#0x0D
                           000029  1182 	C$lab6.c$52$1$218 ==.
                                   1183 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:52: unsigned int PW_UP_ANGLE = 2880;
      0000D3 75 40 40         [24] 1184 	mov	_PW_UP_ANGLE,#0x40
      0000D6 75 41 0B         [24] 1185 	mov	(_PW_UP_ANGLE + 1),#0x0B
                           00002F  1186 	C$lab6.c$53$1$218 ==.
                                   1187 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:53: unsigned int PW_CENTER_ANGLE = 3530;
      0000D9 75 42 CA         [24] 1188 	mov	_PW_CENTER_ANGLE,#0xCA
      0000DC 75 43 0D         [24] 1189 	mov	(_PW_CENTER_ANGLE + 1),#0x0D
                           000035  1190 	C$lab6.c$54$1$218 ==.
                                   1191 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:54: unsigned int PW_DOWN_ANGLE = 4180;
      0000DF 75 44 54         [24] 1192 	mov	_PW_DOWN_ANGLE,#0x54
      0000E2 75 45 10         [24] 1193 	mov	(_PW_DOWN_ANGLE + 1),#0x10
                                   1194 	.area GSFINAL (CODE)
      0000E5 02 00 4E         [24] 1195 	ljmp	__sdcc_program_startup
                                   1196 ;--------------------------------------------------------
                                   1197 ; Home
                                   1198 ;--------------------------------------------------------
                                   1199 	.area HOME    (CODE)
                                   1200 	.area HOME    (CODE)
      00004E                       1201 __sdcc_program_startup:
      00004E 02 05 BE         [24] 1202 	ljmp	_main
                                   1203 ;	return from main will return to caller
                                   1204 ;--------------------------------------------------------
                                   1205 ; code
                                   1206 ;--------------------------------------------------------
                                   1207 	.area CSEG    (CODE)
                                   1208 ;------------------------------------------------------------
                                   1209 ;Allocation info for local variables in function 'SYSCLK_Init'
                                   1210 ;------------------------------------------------------------
                                   1211 ;i                         Allocated to registers 
                                   1212 ;------------------------------------------------------------
                           000000  1213 	G$SYSCLK_Init$0$0 ==.
                           000000  1214 	C$c8051_SDCC.h$42$0$0 ==.
                                   1215 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:42: void SYSCLK_Init(void)
                                   1216 ;	-----------------------------------------
                                   1217 ;	 function SYSCLK_Init
                                   1218 ;	-----------------------------------------
      0000E8                       1219 _SYSCLK_Init:
                           000007  1220 	ar7 = 0x07
                           000006  1221 	ar6 = 0x06
                           000005  1222 	ar5 = 0x05
                           000004  1223 	ar4 = 0x04
                           000003  1224 	ar3 = 0x03
                           000002  1225 	ar2 = 0x02
                           000001  1226 	ar1 = 0x01
                           000000  1227 	ar0 = 0x00
                           000000  1228 	C$c8051_SDCC.h$46$1$31 ==.
                                   1229 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:46: OSCXCN = 0x67;                      // start external oscillator with
      0000E8 75 B1 67         [24] 1230 	mov	_OSCXCN,#0x67
                           000003  1231 	C$c8051_SDCC.h$49$1$31 ==.
                                   1232 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:49: for (i=0; i < 256; i++);            // wait for oscillator to start
      0000EB 7E 00            [12] 1233 	mov	r6,#0x00
      0000ED 7F 01            [12] 1234 	mov	r7,#0x01
      0000EF                       1235 00107$:
      0000EF 1E               [12] 1236 	dec	r6
      0000F0 BE FF 01         [24] 1237 	cjne	r6,#0xFF,00121$
      0000F3 1F               [12] 1238 	dec	r7
      0000F4                       1239 00121$:
      0000F4 EE               [12] 1240 	mov	a,r6
      0000F5 4F               [12] 1241 	orl	a,r7
      0000F6 70 F7            [24] 1242 	jnz	00107$
                           000010  1243 	C$c8051_SDCC.h$51$1$31 ==.
                                   1244 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:51: while (!(OSCXCN & 0x80));           // Wait for crystal osc. to settle
      0000F8                       1245 00102$:
      0000F8 E5 B1            [12] 1246 	mov	a,_OSCXCN
      0000FA 30 E7 FB         [24] 1247 	jnb	acc.7,00102$
                           000015  1248 	C$c8051_SDCC.h$53$1$31 ==.
                                   1249 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:53: OSCICN = 0x88;                      // select external oscillator as SYSCLK
      0000FD 75 B2 88         [24] 1250 	mov	_OSCICN,#0x88
                           000018  1251 	C$c8051_SDCC.h$56$1$31 ==.
                           000018  1252 	XG$SYSCLK_Init$0$0 ==.
      000100 22               [24] 1253 	ret
                                   1254 ;------------------------------------------------------------
                                   1255 ;Allocation info for local variables in function 'UART0_Init'
                                   1256 ;------------------------------------------------------------
                           000019  1257 	G$UART0_Init$0$0 ==.
                           000019  1258 	C$c8051_SDCC.h$64$1$31 ==.
                                   1259 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:64: void UART0_Init(void)
                                   1260 ;	-----------------------------------------
                                   1261 ;	 function UART0_Init
                                   1262 ;	-----------------------------------------
      000101                       1263 _UART0_Init:
                           000019  1264 	C$c8051_SDCC.h$66$1$33 ==.
                                   1265 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:66: SCON0  = 0x50;                      // SCON0: mode 1, 8-bit UART, enable RX
      000101 75 98 50         [24] 1266 	mov	_SCON0,#0x50
                           00001C  1267 	C$c8051_SDCC.h$67$1$33 ==.
                                   1268 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:67: TMOD   = 0x20;                      // TMOD: timer 1, mode 2, 8-bit reload
      000104 75 89 20         [24] 1269 	mov	_TMOD,#0x20
                           00001F  1270 	C$c8051_SDCC.h$68$1$33 ==.
                                   1271 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:68: TH1    = -(SYSCLK/BAUDRATE/16);     // set Timer1 reload value for baudrate
      000107 75 8D DC         [24] 1272 	mov	_TH1,#0xDC
                           000022  1273 	C$c8051_SDCC.h$69$1$33 ==.
                                   1274 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:69: TR1    = 1;                         // start Timer1
      00010A D2 8E            [12] 1275 	setb	_TR1
                           000024  1276 	C$c8051_SDCC.h$70$1$33 ==.
                                   1277 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:70: CKCON |= 0x10;                      // Timer1 uses SYSCLK as time base
      00010C 43 8E 10         [24] 1278 	orl	_CKCON,#0x10
                           000027  1279 	C$c8051_SDCC.h$71$1$33 ==.
                                   1280 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:71: PCON  |= 0x80;                      // SMOD00 = 1 (disable baud rate 
      00010F 43 87 80         [24] 1281 	orl	_PCON,#0x80
                           00002A  1282 	C$c8051_SDCC.h$73$1$33 ==.
                                   1283 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:73: TI0    = 1;                         // Indicate TX0 ready
      000112 D2 99            [12] 1284 	setb	_TI0
                           00002C  1285 	C$c8051_SDCC.h$74$1$33 ==.
                                   1286 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:74: P0MDOUT |= 0x01;                    // Set TX0 to push/pull
      000114 43 A4 01         [24] 1287 	orl	_P0MDOUT,#0x01
                           00002F  1288 	C$c8051_SDCC.h$75$1$33 ==.
                           00002F  1289 	XG$UART0_Init$0$0 ==.
      000117 22               [24] 1290 	ret
                                   1291 ;------------------------------------------------------------
                                   1292 ;Allocation info for local variables in function 'Sys_Init'
                                   1293 ;------------------------------------------------------------
                           000030  1294 	G$Sys_Init$0$0 ==.
                           000030  1295 	C$c8051_SDCC.h$83$1$33 ==.
                                   1296 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:83: void Sys_Init(void)
                                   1297 ;	-----------------------------------------
                                   1298 ;	 function Sys_Init
                                   1299 ;	-----------------------------------------
      000118                       1300 _Sys_Init:
                           000030  1301 	C$c8051_SDCC.h$85$1$35 ==.
                                   1302 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:85: WDTCN = 0xde;			// disable watchdog timer
      000118 75 FF DE         [24] 1303 	mov	_WDTCN,#0xDE
                           000033  1304 	C$c8051_SDCC.h$86$1$35 ==.
                                   1305 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:86: WDTCN = 0xad;
      00011B 75 FF AD         [24] 1306 	mov	_WDTCN,#0xAD
                           000036  1307 	C$c8051_SDCC.h$88$1$35 ==.
                                   1308 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:88: SYSCLK_Init();			// initialize oscillator
      00011E 12 00 E8         [24] 1309 	lcall	_SYSCLK_Init
                           000039  1310 	C$c8051_SDCC.h$89$1$35 ==.
                                   1311 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:89: UART0_Init();			// initialize UART0
      000121 12 01 01         [24] 1312 	lcall	_UART0_Init
                           00003C  1313 	C$c8051_SDCC.h$91$1$35 ==.
                                   1314 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:91: XBR0 |= 0x04;
      000124 43 E1 04         [24] 1315 	orl	_XBR0,#0x04
                           00003F  1316 	C$c8051_SDCC.h$92$1$35 ==.
                                   1317 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:92: XBR2 |= 0x40;                    	// Enable crossbar and weak pull-ups
      000127 43 E3 40         [24] 1318 	orl	_XBR2,#0x40
                           000042  1319 	C$c8051_SDCC.h$93$1$35 ==.
                           000042  1320 	XG$Sys_Init$0$0 ==.
      00012A 22               [24] 1321 	ret
                                   1322 ;------------------------------------------------------------
                                   1323 ;Allocation info for local variables in function 'putchar'
                                   1324 ;------------------------------------------------------------
                                   1325 ;c                         Allocated to registers r7 
                                   1326 ;------------------------------------------------------------
                           000043  1327 	G$putchar$0$0 ==.
                           000043  1328 	C$c8051_SDCC.h$98$1$35 ==.
                                   1329 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:98: void putchar(char c)
                                   1330 ;	-----------------------------------------
                                   1331 ;	 function putchar
                                   1332 ;	-----------------------------------------
      00012B                       1333 _putchar:
      00012B AF 82            [24] 1334 	mov	r7,dpl
                           000045  1335 	C$c8051_SDCC.h$100$1$37 ==.
                                   1336 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:100: while (!TI0); 
      00012D                       1337 00101$:
                           000045  1338 	C$c8051_SDCC.h$101$1$37 ==.
                                   1339 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:101: TI0 = 0;
      00012D 10 99 02         [24] 1340 	jbc	_TI0,00112$
      000130 80 FB            [24] 1341 	sjmp	00101$
      000132                       1342 00112$:
                           00004A  1343 	C$c8051_SDCC.h$102$1$37 ==.
                                   1344 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:102: SBUF0 = c;
      000132 8F 99            [24] 1345 	mov	_SBUF0,r7
                           00004C  1346 	C$c8051_SDCC.h$103$1$37 ==.
                           00004C  1347 	XG$putchar$0$0 ==.
      000134 22               [24] 1348 	ret
                                   1349 ;------------------------------------------------------------
                                   1350 ;Allocation info for local variables in function 'getchar'
                                   1351 ;------------------------------------------------------------
                                   1352 ;c                         Allocated to registers 
                                   1353 ;------------------------------------------------------------
                           00004D  1354 	G$getchar$0$0 ==.
                           00004D  1355 	C$c8051_SDCC.h$108$1$37 ==.
                                   1356 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:108: char getchar(void)
                                   1357 ;	-----------------------------------------
                                   1358 ;	 function getchar
                                   1359 ;	-----------------------------------------
      000135                       1360 _getchar:
                           00004D  1361 	C$c8051_SDCC.h$111$1$39 ==.
                                   1362 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:111: while (!RI0);
      000135                       1363 00101$:
                           00004D  1364 	C$c8051_SDCC.h$112$1$39 ==.
                                   1365 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:112: RI0 = 0;
      000135 10 98 02         [24] 1366 	jbc	_RI0,00112$
      000138 80 FB            [24] 1367 	sjmp	00101$
      00013A                       1368 00112$:
                           000052  1369 	C$c8051_SDCC.h$113$1$39 ==.
                                   1370 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:113: c = SBUF0;
      00013A 85 99 82         [24] 1371 	mov	dpl,_SBUF0
                           000055  1372 	C$c8051_SDCC.h$114$1$39 ==.
                                   1373 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:114: putchar(c);                          // echo to terminal
      00013D 12 01 2B         [24] 1374 	lcall	_putchar
                           000058  1375 	C$c8051_SDCC.h$115$1$39 ==.
                                   1376 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:115: return SBUF0;
      000140 85 99 82         [24] 1377 	mov	dpl,_SBUF0
                           00005B  1378 	C$c8051_SDCC.h$116$1$39 ==.
                           00005B  1379 	XG$getchar$0$0 ==.
      000143 22               [24] 1380 	ret
                                   1381 ;------------------------------------------------------------
                                   1382 ;Allocation info for local variables in function 'lcd_print'
                                   1383 ;------------------------------------------------------------
                                   1384 ;fmt                       Allocated to stack - _bp -5
                                   1385 ;len                       Allocated to registers r6 
                                   1386 ;i                         Allocated to registers 
                                   1387 ;ap                        Allocated to registers 
                                   1388 ;text                      Allocated with name '_lcd_print_text_1_73'
                                   1389 ;------------------------------------------------------------
                           00005C  1390 	G$lcd_print$0$0 ==.
                           00005C  1391 	C$i2c.h$81$1$39 ==.
                                   1392 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:81: void lcd_print(const char *fmt, ...)
                                   1393 ;	-----------------------------------------
                                   1394 ;	 function lcd_print
                                   1395 ;	-----------------------------------------
      000144                       1396 _lcd_print:
      000144 C0 0F            [24] 1397 	push	_bp
      000146 85 81 0F         [24] 1398 	mov	_bp,sp
                           000061  1399 	C$i2c.h$87$1$73 ==.
                                   1400 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:87: if ( strlen(fmt) <= 0 ) return;   //If there is no data to print, return
      000149 E5 0F            [12] 1401 	mov	a,_bp
      00014B 24 FB            [12] 1402 	add	a,#0xfb
      00014D F8               [12] 1403 	mov	r0,a
      00014E 86 82            [24] 1404 	mov	dpl,@r0
      000150 08               [12] 1405 	inc	r0
      000151 86 83            [24] 1406 	mov	dph,@r0
      000153 08               [12] 1407 	inc	r0
      000154 86 F0            [24] 1408 	mov	b,@r0
      000156 12 1C 97         [24] 1409 	lcall	_strlen
      000159 E5 82            [12] 1410 	mov	a,dpl
      00015B 85 83 F0         [24] 1411 	mov	b,dph
      00015E 45 F0            [12] 1412 	orl	a,b
      000160 70 02            [24] 1413 	jnz	00102$
      000162 80 62            [24] 1414 	sjmp	00109$
      000164                       1415 00102$:
                           00007C  1416 	C$i2c.h$89$2$74 ==.
                                   1417 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:89: va_start(ap, fmt);
      000164 E5 0F            [12] 1418 	mov	a,_bp
      000166 24 FB            [12] 1419 	add	a,#0xFB
      000168 FF               [12] 1420 	mov	r7,a
      000169 8F 0B            [24] 1421 	mov	_vsprintf_PARM_3,r7
                           000083  1422 	C$i2c.h$90$1$73 ==.
                                   1423 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:90: vsprintf(text, fmt, ap);
      00016B E5 0F            [12] 1424 	mov	a,_bp
      00016D 24 FB            [12] 1425 	add	a,#0xfb
      00016F F8               [12] 1426 	mov	r0,a
      000170 86 08            [24] 1427 	mov	_vsprintf_PARM_2,@r0
      000172 08               [12] 1428 	inc	r0
      000173 86 09            [24] 1429 	mov	(_vsprintf_PARM_2 + 1),@r0
      000175 08               [12] 1430 	inc	r0
      000176 86 0A            [24] 1431 	mov	(_vsprintf_PARM_2 + 2),@r0
      000178 90 00 01         [24] 1432 	mov	dptr,#_lcd_print_text_1_73
      00017B 75 F0 00         [24] 1433 	mov	b,#0x00
      00017E 12 14 9D         [24] 1434 	lcall	_vsprintf
                           000099  1435 	C$i2c.h$93$1$73 ==.
                                   1436 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:93: len = strlen(text);
      000181 90 00 01         [24] 1437 	mov	dptr,#_lcd_print_text_1_73
      000184 75 F0 00         [24] 1438 	mov	b,#0x00
      000187 12 1C 97         [24] 1439 	lcall	_strlen
      00018A AE 82            [24] 1440 	mov	r6,dpl
                           0000A4  1441 	C$i2c.h$94$1$73 ==.
                                   1442 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:94: for(i=0; i<len; i++)
      00018C 7F 00            [12] 1443 	mov	r7,#0x00
      00018E                       1444 00107$:
      00018E C3               [12] 1445 	clr	c
      00018F EF               [12] 1446 	mov	a,r7
      000190 9E               [12] 1447 	subb	a,r6
      000191 50 1F            [24] 1448 	jnc	00105$
                           0000AB  1449 	C$i2c.h$96$2$76 ==.
                                   1450 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:96: if(text[i] == (unsigned char)'\n') text[i] = 13;
      000193 EF               [12] 1451 	mov	a,r7
      000194 24 01            [12] 1452 	add	a,#_lcd_print_text_1_73
      000196 F5 82            [12] 1453 	mov	dpl,a
      000198 E4               [12] 1454 	clr	a
      000199 34 00            [12] 1455 	addc	a,#(_lcd_print_text_1_73 >> 8)
      00019B F5 83            [12] 1456 	mov	dph,a
      00019D E0               [24] 1457 	movx	a,@dptr
      00019E FD               [12] 1458 	mov	r5,a
      00019F BD 0A 0D         [24] 1459 	cjne	r5,#0x0A,00108$
      0001A2 EF               [12] 1460 	mov	a,r7
      0001A3 24 01            [12] 1461 	add	a,#_lcd_print_text_1_73
      0001A5 F5 82            [12] 1462 	mov	dpl,a
      0001A7 E4               [12] 1463 	clr	a
      0001A8 34 00            [12] 1464 	addc	a,#(_lcd_print_text_1_73 >> 8)
      0001AA F5 83            [12] 1465 	mov	dph,a
      0001AC 74 0D            [12] 1466 	mov	a,#0x0D
      0001AE F0               [24] 1467 	movx	@dptr,a
      0001AF                       1468 00108$:
                           0000C7  1469 	C$i2c.h$94$1$73 ==.
                                   1470 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:94: for(i=0; i<len; i++)
      0001AF 0F               [12] 1471 	inc	r7
      0001B0 80 DC            [24] 1472 	sjmp	00107$
      0001B2                       1473 00105$:
                           0000CA  1474 	C$i2c.h$99$1$73 ==.
                                   1475 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:99: i2c_write_data(0xC6, 0x00, text, len);
      0001B2 75 28 01         [24] 1476 	mov	_i2c_write_data_PARM_3,#_lcd_print_text_1_73
      0001B5 75 29 00         [24] 1477 	mov	(_i2c_write_data_PARM_3 + 1),#(_lcd_print_text_1_73 >> 8)
      0001B8 75 2A 00         [24] 1478 	mov	(_i2c_write_data_PARM_3 + 2),#0x00
      0001BB 75 27 00         [24] 1479 	mov	_i2c_write_data_PARM_2,#0x00
      0001BE 8E 2B            [24] 1480 	mov	_i2c_write_data_PARM_4,r6
      0001C0 75 82 C6         [24] 1481 	mov	dpl,#0xC6
      0001C3 12 04 5A         [24] 1482 	lcall	_i2c_write_data
      0001C6                       1483 00109$:
      0001C6 D0 0F            [24] 1484 	pop	_bp
                           0000E0  1485 	C$i2c.h$100$1$73 ==.
                           0000E0  1486 	XG$lcd_print$0$0 ==.
      0001C8 22               [24] 1487 	ret
                                   1488 ;------------------------------------------------------------
                                   1489 ;Allocation info for local variables in function 'lcd_clear'
                                   1490 ;------------------------------------------------------------
                                   1491 ;NumBytes                  Allocated with name '_lcd_clear_NumBytes_1_77'
                                   1492 ;Cmd                       Allocated with name '_lcd_clear_Cmd_1_77'
                                   1493 ;------------------------------------------------------------
                           0000E1  1494 	G$lcd_clear$0$0 ==.
                           0000E1  1495 	C$i2c.h$103$1$73 ==.
                                   1496 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:103: void lcd_clear()
                                   1497 ;	-----------------------------------------
                                   1498 ;	 function lcd_clear
                                   1499 ;	-----------------------------------------
      0001C9                       1500 _lcd_clear:
                           0000E1  1501 	C$i2c.h$105$1$73 ==.
                                   1502 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:105: unsigned char NumBytes=0, Cmd[2];
      0001C9 75 22 00         [24] 1503 	mov	_lcd_clear_NumBytes_1_77,#0x00
                           0000E4  1504 	C$i2c.h$107$1$77 ==.
                                   1505 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:107: while(NumBytes < 64) i2c_read_data(0xC6, 0x00, &NumBytes, 1);
      0001CC                       1506 00101$:
      0001CC 74 C0            [12] 1507 	mov	a,#0x100 - 0x40
      0001CE 25 22            [12] 1508 	add	a,_lcd_clear_NumBytes_1_77
      0001D0 40 17            [24] 1509 	jc	00103$
      0001D2 75 2D 22         [24] 1510 	mov	_i2c_read_data_PARM_3,#_lcd_clear_NumBytes_1_77
      0001D5 75 2E 00         [24] 1511 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0001D8 75 2F 40         [24] 1512 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0001DB 75 2C 00         [24] 1513 	mov	_i2c_read_data_PARM_2,#0x00
      0001DE 75 30 01         [24] 1514 	mov	_i2c_read_data_PARM_4,#0x01
      0001E1 75 82 C6         [24] 1515 	mov	dpl,#0xC6
      0001E4 12 04 D0         [24] 1516 	lcall	_i2c_read_data
      0001E7 80 E3            [24] 1517 	sjmp	00101$
      0001E9                       1518 00103$:
                           000101  1519 	C$i2c.h$109$1$77 ==.
                                   1520 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:109: Cmd[0] = 12;
      0001E9 75 23 0C         [24] 1521 	mov	_lcd_clear_Cmd_1_77,#0x0C
                           000104  1522 	C$i2c.h$110$1$77 ==.
                                   1523 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:110: i2c_write_data(0xC6, 0x00, Cmd, 1);
      0001EC 75 28 23         [24] 1524 	mov	_i2c_write_data_PARM_3,#_lcd_clear_Cmd_1_77
      0001EF 75 29 00         [24] 1525 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      0001F2 75 2A 40         [24] 1526 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      0001F5 75 27 00         [24] 1527 	mov	_i2c_write_data_PARM_2,#0x00
      0001F8 75 2B 01         [24] 1528 	mov	_i2c_write_data_PARM_4,#0x01
      0001FB 75 82 C6         [24] 1529 	mov	dpl,#0xC6
      0001FE 12 04 5A         [24] 1530 	lcall	_i2c_write_data
                           000119  1531 	C$i2c.h$111$1$77 ==.
                           000119  1532 	XG$lcd_clear$0$0 ==.
      000201 22               [24] 1533 	ret
                                   1534 ;------------------------------------------------------------
                                   1535 ;Allocation info for local variables in function 'read_keypad'
                                   1536 ;------------------------------------------------------------
                                   1537 ;i                         Allocated to registers r7 
                                   1538 ;Data                      Allocated with name '_read_keypad_Data_1_78'
                                   1539 ;------------------------------------------------------------
                           00011A  1540 	G$read_keypad$0$0 ==.
                           00011A  1541 	C$i2c.h$114$1$77 ==.
                                   1542 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:114: char read_keypad()
                                   1543 ;	-----------------------------------------
                                   1544 ;	 function read_keypad
                                   1545 ;	-----------------------------------------
      000202                       1546 _read_keypad:
                           00011A  1547 	C$i2c.h$118$1$78 ==.
                                   1548 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:118: i2c_read_data(0xC6, 0x01, Data, 2); //Read I2C data on address 192, register 1, 2 bytes of data.
      000202 75 2D 25         [24] 1549 	mov	_i2c_read_data_PARM_3,#_read_keypad_Data_1_78
      000205 75 2E 00         [24] 1550 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      000208 75 2F 40         [24] 1551 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      00020B 75 2C 01         [24] 1552 	mov	_i2c_read_data_PARM_2,#0x01
      00020E 75 30 02         [24] 1553 	mov	_i2c_read_data_PARM_4,#0x02
      000211 75 82 C6         [24] 1554 	mov	dpl,#0xC6
      000214 12 04 D0         [24] 1555 	lcall	_i2c_read_data
                           00012F  1556 	C$i2c.h$119$1$78 ==.
                                   1557 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:119: if(Data[0] == 0xFF) return 0;  //No response on bus, no display
      000217 74 FF            [12] 1558 	mov	a,#0xFF
      000219 B5 25 05         [24] 1559 	cjne	a,_read_keypad_Data_1_78,00102$
      00021C 75 82 00         [24] 1560 	mov	dpl,#0x00
      00021F 80 5F            [24] 1561 	sjmp	00116$
      000221                       1562 00102$:
                           000139  1563 	C$i2c.h$121$1$78 ==.
                                   1564 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:121: for(i=0; i<8; i++)             //loop 8 times
      000221 7F 00            [12] 1565 	mov	r7,#0x00
      000223 8F 06            [24] 1566 	mov	ar6,r7
      000225                       1567 00114$:
                           00013D  1568 	C$i2c.h$123$2$79 ==.
                                   1569 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:123: if(Data[0] & (0x01 << i))  //find the ASCII value of the keypad read, if it is the current loop value
      000225 8E F0            [24] 1570 	mov	b,r6
      000227 05 F0            [12] 1571 	inc	b
      000229 7C 01            [12] 1572 	mov	r4,#0x01
      00022B 7D 00            [12] 1573 	mov	r5,#0x00
      00022D 80 06            [24] 1574 	sjmp	00145$
      00022F                       1575 00144$:
      00022F EC               [12] 1576 	mov	a,r4
      000230 2C               [12] 1577 	add	a,r4
      000231 FC               [12] 1578 	mov	r4,a
      000232 ED               [12] 1579 	mov	a,r5
      000233 33               [12] 1580 	rlc	a
      000234 FD               [12] 1581 	mov	r5,a
      000235                       1582 00145$:
      000235 D5 F0 F7         [24] 1583 	djnz	b,00144$
      000238 AA 25            [24] 1584 	mov	r2,_read_keypad_Data_1_78
      00023A 7B 00            [12] 1585 	mov	r3,#0x00
      00023C EA               [12] 1586 	mov	a,r2
      00023D 52 04            [12] 1587 	anl	ar4,a
      00023F EB               [12] 1588 	mov	a,r3
      000240 52 05            [12] 1589 	anl	ar5,a
      000242 EC               [12] 1590 	mov	a,r4
      000243 4D               [12] 1591 	orl	a,r5
      000244 60 07            [24] 1592 	jz	00115$
                           00015E  1593 	C$i2c.h$124$2$79 ==.
                                   1594 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:124: return i+49;
      000246 74 31            [12] 1595 	mov	a,#0x31
      000248 2F               [12] 1596 	add	a,r7
      000249 F5 82            [12] 1597 	mov	dpl,a
      00024B 80 33            [24] 1598 	sjmp	00116$
      00024D                       1599 00115$:
                           000165  1600 	C$i2c.h$121$1$78 ==.
                                   1601 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:121: for(i=0; i<8; i++)             //loop 8 times
      00024D 0E               [12] 1602 	inc	r6
      00024E 8E 07            [24] 1603 	mov	ar7,r6
      000250 BE 08 00         [24] 1604 	cjne	r6,#0x08,00147$
      000253                       1605 00147$:
      000253 40 D0            [24] 1606 	jc	00114$
                           00016D  1607 	C$i2c.h$127$1$78 ==.
                                   1608 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:127: if(Data[1] & 0x01) return '9'; //if the value is equal to 9 return 9.
      000255 E5 26            [12] 1609 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000257 30 E0 05         [24] 1610 	jnb	acc.0,00107$
      00025A 75 82 39         [24] 1611 	mov	dpl,#0x39
      00025D 80 21            [24] 1612 	sjmp	00116$
      00025F                       1613 00107$:
                           000177  1614 	C$i2c.h$129$1$78 ==.
                                   1615 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:129: if(Data[1] & 0x02) return '*'; //if the value is equal to the star.
      00025F E5 26            [12] 1616 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000261 30 E1 05         [24] 1617 	jnb	acc.1,00109$
      000264 75 82 2A         [24] 1618 	mov	dpl,#0x2A
      000267 80 17            [24] 1619 	sjmp	00116$
      000269                       1620 00109$:
                           000181  1621 	C$i2c.h$131$1$78 ==.
                                   1622 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:131: if(Data[1] & 0x04) return '0'; //if the value is equal to the 0 key
      000269 E5 26            [12] 1623 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      00026B 30 E2 05         [24] 1624 	jnb	acc.2,00111$
      00026E 75 82 30         [24] 1625 	mov	dpl,#0x30
      000271 80 0D            [24] 1626 	sjmp	00116$
      000273                       1627 00111$:
                           00018B  1628 	C$i2c.h$133$1$78 ==.
                                   1629 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:133: if(Data[1] & 0x08) return '#'; //if the value is equal to the pound key
      000273 E5 26            [12] 1630 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000275 30 E3 05         [24] 1631 	jnb	acc.3,00113$
      000278 75 82 23         [24] 1632 	mov	dpl,#0x23
      00027B 80 03            [24] 1633 	sjmp	00116$
      00027D                       1634 00113$:
                           000195  1635 	C$i2c.h$135$1$78 ==.
                                   1636 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:135: return -1;                     //else return a numerical -1 (0xFF)
      00027D 75 82 FF         [24] 1637 	mov	dpl,#0xFF
      000280                       1638 00116$:
                           000198  1639 	C$i2c.h$136$1$78 ==.
                           000198  1640 	XG$read_keypad$0$0 ==.
      000280 22               [24] 1641 	ret
                                   1642 ;------------------------------------------------------------
                                   1643 ;Allocation info for local variables in function 'kpd_input'
                                   1644 ;------------------------------------------------------------
                                   1645 ;mode                      Allocated to registers r7 
                                   1646 ;sum                       Allocated to registers r5 r6 
                                   1647 ;key                       Allocated to registers r3 
                                   1648 ;i                         Allocated to registers 
                                   1649 ;------------------------------------------------------------
                           000199  1650 	G$kpd_input$0$0 ==.
                           000199  1651 	C$i2c.h$148$1$78 ==.
                                   1652 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:148: unsigned int kpd_input(char mode)
                                   1653 ;	-----------------------------------------
                                   1654 ;	 function kpd_input
                                   1655 ;	-----------------------------------------
      000281                       1656 _kpd_input:
      000281 AF 82            [24] 1657 	mov	r7,dpl
                           00019B  1658 	C$i2c.h$153$1$81 ==.
                                   1659 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:153: sum = 0;
                           00019B  1660 	C$i2c.h$156$1$81 ==.
                                   1661 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:156: if(mode==0)lcd_print("\nType digits; end w/#");
      000283 E4               [12] 1662 	clr	a
      000284 FD               [12] 1663 	mov	r5,a
      000285 FE               [12] 1664 	mov	r6,a
      000286 EF               [12] 1665 	mov	a,r7
      000287 70 1D            [24] 1666 	jnz	00102$
      000289 C0 06            [24] 1667 	push	ar6
      00028B C0 05            [24] 1668 	push	ar5
      00028D 74 B8            [12] 1669 	mov	a,#___str_0
      00028F C0 E0            [24] 1670 	push	acc
      000291 74 1E            [12] 1671 	mov	a,#(___str_0 >> 8)
      000293 C0 E0            [24] 1672 	push	acc
      000295 74 80            [12] 1673 	mov	a,#0x80
      000297 C0 E0            [24] 1674 	push	acc
      000299 12 01 44         [24] 1675 	lcall	_lcd_print
      00029C 15 81            [12] 1676 	dec	sp
      00029E 15 81            [12] 1677 	dec	sp
      0002A0 15 81            [12] 1678 	dec	sp
      0002A2 D0 05            [24] 1679 	pop	ar5
      0002A4 D0 06            [24] 1680 	pop	ar6
      0002A6                       1681 00102$:
                           0001BE  1682 	C$i2c.h$158$1$81 ==.
                                   1683 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:158: lcd_print("     %c%c%c%c%c",0x08,0x08,0x08,0x08,0x08);
      0002A6 C0 06            [24] 1684 	push	ar6
      0002A8 C0 05            [24] 1685 	push	ar5
      0002AA 74 08            [12] 1686 	mov	a,#0x08
      0002AC C0 E0            [24] 1687 	push	acc
      0002AE E4               [12] 1688 	clr	a
      0002AF C0 E0            [24] 1689 	push	acc
      0002B1 74 08            [12] 1690 	mov	a,#0x08
      0002B3 C0 E0            [24] 1691 	push	acc
      0002B5 E4               [12] 1692 	clr	a
      0002B6 C0 E0            [24] 1693 	push	acc
      0002B8 74 08            [12] 1694 	mov	a,#0x08
      0002BA C0 E0            [24] 1695 	push	acc
      0002BC E4               [12] 1696 	clr	a
      0002BD C0 E0            [24] 1697 	push	acc
      0002BF 74 08            [12] 1698 	mov	a,#0x08
      0002C1 C0 E0            [24] 1699 	push	acc
      0002C3 E4               [12] 1700 	clr	a
      0002C4 C0 E0            [24] 1701 	push	acc
      0002C6 74 08            [12] 1702 	mov	a,#0x08
      0002C8 C0 E0            [24] 1703 	push	acc
      0002CA E4               [12] 1704 	clr	a
      0002CB C0 E0            [24] 1705 	push	acc
      0002CD 74 CE            [12] 1706 	mov	a,#___str_1
      0002CF C0 E0            [24] 1707 	push	acc
      0002D1 74 1E            [12] 1708 	mov	a,#(___str_1 >> 8)
      0002D3 C0 E0            [24] 1709 	push	acc
      0002D5 74 80            [12] 1710 	mov	a,#0x80
      0002D7 C0 E0            [24] 1711 	push	acc
      0002D9 12 01 44         [24] 1712 	lcall	_lcd_print
      0002DC E5 81            [12] 1713 	mov	a,sp
      0002DE 24 F3            [12] 1714 	add	a,#0xf3
      0002E0 F5 81            [12] 1715 	mov	sp,a
                           0001FA  1716 	C$i2c.h$160$1$81 ==.
                                   1717 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:160: delay_time(500000);	//Add 20ms delay before reading i2c in loop
      0002E2 90 A1 20         [24] 1718 	mov	dptr,#0xA120
      0002E5 75 F0 07         [24] 1719 	mov	b,#0x07
      0002E8 E4               [12] 1720 	clr	a
      0002E9 12 03 F5         [24] 1721 	lcall	_delay_time
      0002EC D0 05            [24] 1722 	pop	ar5
      0002EE D0 06            [24] 1723 	pop	ar6
                           000208  1724 	C$i2c.h$164$1$81 ==.
                                   1725 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:164: for(i=0; i<5; i++)
      0002F0 7F 00            [12] 1726 	mov	r7,#0x00
                           00020A  1727 	C$i2c.h$166$3$84 ==.
                                   1728 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:166: while(((key=read_keypad()) == -1) || (key == '*'))delay_time(10000);
      0002F2                       1729 00104$:
      0002F2 C0 07            [24] 1730 	push	ar7
      0002F4 C0 06            [24] 1731 	push	ar6
      0002F6 C0 05            [24] 1732 	push	ar5
      0002F8 12 02 02         [24] 1733 	lcall	_read_keypad
      0002FB AC 82            [24] 1734 	mov	r4,dpl
      0002FD D0 05            [24] 1735 	pop	ar5
      0002FF D0 06            [24] 1736 	pop	ar6
      000301 D0 07            [24] 1737 	pop	ar7
      000303 8C 03            [24] 1738 	mov	ar3,r4
      000305 BC FF 02         [24] 1739 	cjne	r4,#0xFF,00146$
      000308 80 03            [24] 1740 	sjmp	00105$
      00030A                       1741 00146$:
      00030A BB 2A 17         [24] 1742 	cjne	r3,#0x2A,00106$
      00030D                       1743 00105$:
      00030D 90 27 10         [24] 1744 	mov	dptr,#0x2710
      000310 E4               [12] 1745 	clr	a
      000311 F5 F0            [12] 1746 	mov	b,a
      000313 C0 07            [24] 1747 	push	ar7
      000315 C0 06            [24] 1748 	push	ar6
      000317 C0 05            [24] 1749 	push	ar5
      000319 12 03 F5         [24] 1750 	lcall	_delay_time
      00031C D0 05            [24] 1751 	pop	ar5
      00031E D0 06            [24] 1752 	pop	ar6
      000320 D0 07            [24] 1753 	pop	ar7
      000322 80 CE            [24] 1754 	sjmp	00104$
      000324                       1755 00106$:
                           00023C  1756 	C$i2c.h$167$2$82 ==.
                                   1757 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:167: if(key == '#')
      000324 BB 23 2A         [24] 1758 	cjne	r3,#0x23,00114$
                           00023F  1759 	C$i2c.h$169$3$83 ==.
                                   1760 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:169: while(read_keypad() == '#')delay_time(10000);
      000327                       1761 00107$:
      000327 C0 06            [24] 1762 	push	ar6
      000329 C0 05            [24] 1763 	push	ar5
      00032B 12 02 02         [24] 1764 	lcall	_read_keypad
      00032E AC 82            [24] 1765 	mov	r4,dpl
      000330 D0 05            [24] 1766 	pop	ar5
      000332 D0 06            [24] 1767 	pop	ar6
      000334 BC 23 13         [24] 1768 	cjne	r4,#0x23,00109$
      000337 90 27 10         [24] 1769 	mov	dptr,#0x2710
      00033A E4               [12] 1770 	clr	a
      00033B F5 F0            [12] 1771 	mov	b,a
      00033D C0 06            [24] 1772 	push	ar6
      00033F C0 05            [24] 1773 	push	ar5
      000341 12 03 F5         [24] 1774 	lcall	_delay_time
      000344 D0 05            [24] 1775 	pop	ar5
      000346 D0 06            [24] 1776 	pop	ar6
      000348 80 DD            [24] 1777 	sjmp	00107$
      00034A                       1778 00109$:
                           000262  1779 	C$i2c.h$170$3$83 ==.
                                   1780 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:170: return sum;
      00034A 8D 82            [24] 1781 	mov	dpl,r5
      00034C 8E 83            [24] 1782 	mov	dph,r6
      00034E 02 03 F4         [24] 1783 	ljmp	00119$
      000351                       1784 00114$:
                           000269  1785 	C$i2c.h$174$3$84 ==.
                                   1786 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:174: lcd_print("%c", key);
      000351 EB               [12] 1787 	mov	a,r3
      000352 FA               [12] 1788 	mov	r2,a
      000353 33               [12] 1789 	rlc	a
      000354 95 E0            [12] 1790 	subb	a,acc
      000356 FC               [12] 1791 	mov	r4,a
      000357 C0 07            [24] 1792 	push	ar7
      000359 C0 06            [24] 1793 	push	ar6
      00035B C0 05            [24] 1794 	push	ar5
      00035D C0 04            [24] 1795 	push	ar4
      00035F C0 03            [24] 1796 	push	ar3
      000361 C0 02            [24] 1797 	push	ar2
      000363 C0 02            [24] 1798 	push	ar2
      000365 C0 04            [24] 1799 	push	ar4
      000367 74 DE            [12] 1800 	mov	a,#___str_2
      000369 C0 E0            [24] 1801 	push	acc
      00036B 74 1E            [12] 1802 	mov	a,#(___str_2 >> 8)
      00036D C0 E0            [24] 1803 	push	acc
      00036F 74 80            [12] 1804 	mov	a,#0x80
      000371 C0 E0            [24] 1805 	push	acc
      000373 12 01 44         [24] 1806 	lcall	_lcd_print
      000376 E5 81            [12] 1807 	mov	a,sp
      000378 24 FB            [12] 1808 	add	a,#0xfb
      00037A F5 81            [12] 1809 	mov	sp,a
      00037C D0 02            [24] 1810 	pop	ar2
      00037E D0 03            [24] 1811 	pop	ar3
      000380 D0 04            [24] 1812 	pop	ar4
      000382 D0 05            [24] 1813 	pop	ar5
      000384 D0 06            [24] 1814 	pop	ar6
                           00029E  1815 	C$i2c.h$175$1$81 ==.
                                   1816 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:175: sum = sum*10 + key - '0';
      000386 8D 11            [24] 1817 	mov	__mulint_PARM_2,r5
      000388 8E 12            [24] 1818 	mov	(__mulint_PARM_2 + 1),r6
      00038A 90 00 0A         [24] 1819 	mov	dptr,#0x000A
      00038D C0 04            [24] 1820 	push	ar4
      00038F C0 03            [24] 1821 	push	ar3
      000391 C0 02            [24] 1822 	push	ar2
      000393 12 14 10         [24] 1823 	lcall	__mulint
      000396 A8 82            [24] 1824 	mov	r0,dpl
      000398 A9 83            [24] 1825 	mov	r1,dph
      00039A D0 02            [24] 1826 	pop	ar2
      00039C D0 03            [24] 1827 	pop	ar3
      00039E D0 04            [24] 1828 	pop	ar4
      0003A0 D0 07            [24] 1829 	pop	ar7
      0003A2 EA               [12] 1830 	mov	a,r2
      0003A3 28               [12] 1831 	add	a,r0
      0003A4 F8               [12] 1832 	mov	r0,a
      0003A5 EC               [12] 1833 	mov	a,r4
      0003A6 39               [12] 1834 	addc	a,r1
      0003A7 F9               [12] 1835 	mov	r1,a
      0003A8 E8               [12] 1836 	mov	a,r0
      0003A9 24 D0            [12] 1837 	add	a,#0xD0
      0003AB FD               [12] 1838 	mov	r5,a
      0003AC E9               [12] 1839 	mov	a,r1
      0003AD 34 FF            [12] 1840 	addc	a,#0xFF
      0003AF FE               [12] 1841 	mov	r6,a
                           0002C8  1842 	C$i2c.h$176$3$84 ==.
                                   1843 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:176: while(read_keypad() == key)delay_time(10000); //wait for key to be released
      0003B0                       1844 00110$:
      0003B0 C0 07            [24] 1845 	push	ar7
      0003B2 C0 06            [24] 1846 	push	ar6
      0003B4 C0 05            [24] 1847 	push	ar5
      0003B6 C0 03            [24] 1848 	push	ar3
      0003B8 12 02 02         [24] 1849 	lcall	_read_keypad
      0003BB AC 82            [24] 1850 	mov	r4,dpl
      0003BD D0 03            [24] 1851 	pop	ar3
      0003BF D0 05            [24] 1852 	pop	ar5
      0003C1 D0 06            [24] 1853 	pop	ar6
      0003C3 D0 07            [24] 1854 	pop	ar7
      0003C5 EC               [12] 1855 	mov	a,r4
      0003C6 B5 03 1B         [24] 1856 	cjne	a,ar3,00118$
      0003C9 90 27 10         [24] 1857 	mov	dptr,#0x2710
      0003CC E4               [12] 1858 	clr	a
      0003CD F5 F0            [12] 1859 	mov	b,a
      0003CF C0 07            [24] 1860 	push	ar7
      0003D1 C0 06            [24] 1861 	push	ar6
      0003D3 C0 05            [24] 1862 	push	ar5
      0003D5 C0 03            [24] 1863 	push	ar3
      0003D7 12 03 F5         [24] 1864 	lcall	_delay_time
      0003DA D0 03            [24] 1865 	pop	ar3
      0003DC D0 05            [24] 1866 	pop	ar5
      0003DE D0 06            [24] 1867 	pop	ar6
      0003E0 D0 07            [24] 1868 	pop	ar7
      0003E2 80 CC            [24] 1869 	sjmp	00110$
      0003E4                       1870 00118$:
                           0002FC  1871 	C$i2c.h$164$1$81 ==.
                                   1872 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:164: for(i=0; i<5; i++)
      0003E4 0F               [12] 1873 	inc	r7
      0003E5 C3               [12] 1874 	clr	c
      0003E6 EF               [12] 1875 	mov	a,r7
      0003E7 64 80            [12] 1876 	xrl	a,#0x80
      0003E9 94 85            [12] 1877 	subb	a,#0x85
      0003EB 50 03            [24] 1878 	jnc	00155$
      0003ED 02 02 F2         [24] 1879 	ljmp	00104$
      0003F0                       1880 00155$:
                           000308  1881 	C$i2c.h$179$1$81 ==.
                                   1882 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:179: return sum;
      0003F0 8D 82            [24] 1883 	mov	dpl,r5
      0003F2 8E 83            [24] 1884 	mov	dph,r6
      0003F4                       1885 00119$:
                           00030C  1886 	C$i2c.h$180$1$81 ==.
                           00030C  1887 	XG$kpd_input$0$0 ==.
      0003F4 22               [24] 1888 	ret
                                   1889 ;------------------------------------------------------------
                                   1890 ;Allocation info for local variables in function 'delay_time'
                                   1891 ;------------------------------------------------------------
                                   1892 ;time_end                  Allocated to registers r4 r5 r6 r7 
                                   1893 ;index                     Allocated to registers 
                                   1894 ;------------------------------------------------------------
                           00030D  1895 	G$delay_time$0$0 ==.
                           00030D  1896 	C$i2c.h$189$1$81 ==.
                                   1897 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:189: void delay_time (unsigned long time_end)
                                   1898 ;	-----------------------------------------
                                   1899 ;	 function delay_time
                                   1900 ;	-----------------------------------------
      0003F5                       1901 _delay_time:
      0003F5 AC 82            [24] 1902 	mov	r4,dpl
      0003F7 AD 83            [24] 1903 	mov	r5,dph
      0003F9 AE F0            [24] 1904 	mov	r6,b
      0003FB FF               [12] 1905 	mov	r7,a
                           000314  1906 	C$i2c.h$192$1$86 ==.
                                   1907 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:192: for (index = 0; index < time_end; index++); //for loop delay
      0003FC 78 00            [12] 1908 	mov	r0,#0x00
      0003FE 79 00            [12] 1909 	mov	r1,#0x00
      000400 7A 00            [12] 1910 	mov	r2,#0x00
      000402 7B 00            [12] 1911 	mov	r3,#0x00
      000404                       1912 00103$:
      000404 C3               [12] 1913 	clr	c
      000405 E8               [12] 1914 	mov	a,r0
      000406 9C               [12] 1915 	subb	a,r4
      000407 E9               [12] 1916 	mov	a,r1
      000408 9D               [12] 1917 	subb	a,r5
      000409 EA               [12] 1918 	mov	a,r2
      00040A 9E               [12] 1919 	subb	a,r6
      00040B EB               [12] 1920 	mov	a,r3
      00040C 9F               [12] 1921 	subb	a,r7
      00040D 50 0F            [24] 1922 	jnc	00105$
      00040F 08               [12] 1923 	inc	r0
      000410 B8 00 09         [24] 1924 	cjne	r0,#0x00,00115$
      000413 09               [12] 1925 	inc	r1
      000414 B9 00 05         [24] 1926 	cjne	r1,#0x00,00115$
      000417 0A               [12] 1927 	inc	r2
      000418 BA 00 E9         [24] 1928 	cjne	r2,#0x00,00103$
      00041B 0B               [12] 1929 	inc	r3
      00041C                       1930 00115$:
      00041C 80 E6            [24] 1931 	sjmp	00103$
      00041E                       1932 00105$:
                           000336  1933 	C$i2c.h$193$1$86 ==.
                           000336  1934 	XG$delay_time$0$0 ==.
      00041E 22               [24] 1935 	ret
                                   1936 ;------------------------------------------------------------
                                   1937 ;Allocation info for local variables in function 'i2c_start'
                                   1938 ;------------------------------------------------------------
                           000337  1939 	G$i2c_start$0$0 ==.
                           000337  1940 	C$i2c.h$196$1$86 ==.
                                   1941 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:196: void i2c_start(void)
                                   1942 ;	-----------------------------------------
                                   1943 ;	 function i2c_start
                                   1944 ;	-----------------------------------------
      00041F                       1945 _i2c_start:
                           000337  1946 	C$i2c.h$198$1$88 ==.
                                   1947 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:198: while(BUSY);              //Wait until SMBus0 is free
      00041F                       1948 00101$:
      00041F 20 C7 FD         [24] 1949 	jb	_BUSY,00101$
                           00033A  1950 	C$i2c.h$199$1$88 ==.
                                   1951 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:199: STA = 1;                  //Set Start Bit
      000422 D2 C5            [12] 1952 	setb	_STA
                           00033C  1953 	C$i2c.h$200$1$88 ==.
                                   1954 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:200: while(!SI);               //Wait until start sent
      000424                       1955 00104$:
      000424 30 C3 FD         [24] 1956 	jnb	_SI,00104$
                           00033F  1957 	C$i2c.h$201$1$88 ==.
                                   1958 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:201: STA = 0;                  //Clear start bit
      000427 C2 C5            [12] 1959 	clr	_STA
                           000341  1960 	C$i2c.h$202$1$88 ==.
                                   1961 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:202: SI = 0;                   //Clear SI
      000429 C2 C3            [12] 1962 	clr	_SI
                           000343  1963 	C$i2c.h$203$1$88 ==.
                           000343  1964 	XG$i2c_start$0$0 ==.
      00042B 22               [24] 1965 	ret
                                   1966 ;------------------------------------------------------------
                                   1967 ;Allocation info for local variables in function 'i2c_write'
                                   1968 ;------------------------------------------------------------
                                   1969 ;output_data               Allocated to registers 
                                   1970 ;------------------------------------------------------------
                           000344  1971 	G$i2c_write$0$0 ==.
                           000344  1972 	C$i2c.h$206$1$88 ==.
                                   1973 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:206: void i2c_write(unsigned char output_data)
                                   1974 ;	-----------------------------------------
                                   1975 ;	 function i2c_write
                                   1976 ;	-----------------------------------------
      00042C                       1977 _i2c_write:
      00042C 85 82 C2         [24] 1978 	mov	_SMB0DAT,dpl
                           000347  1979 	C$i2c.h$209$1$90 ==.
                                   1980 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:209: while(!SI);               //Wait until send is complete
      00042F                       1981 00101$:
                           000347  1982 	C$i2c.h$210$1$90 ==.
                                   1983 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:210: SI = 0;                   //Clear SI
      00042F 10 C3 02         [24] 1984 	jbc	_SI,00112$
      000432 80 FB            [24] 1985 	sjmp	00101$
      000434                       1986 00112$:
                           00034C  1987 	C$i2c.h$211$1$90 ==.
                           00034C  1988 	XG$i2c_write$0$0 ==.
      000434 22               [24] 1989 	ret
                                   1990 ;------------------------------------------------------------
                                   1991 ;Allocation info for local variables in function 'i2c_write_and_stop'
                                   1992 ;------------------------------------------------------------
                                   1993 ;output_data               Allocated to registers 
                                   1994 ;------------------------------------------------------------
                           00034D  1995 	G$i2c_write_and_stop$0$0 ==.
                           00034D  1996 	C$i2c.h$214$1$90 ==.
                                   1997 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:214: void i2c_write_and_stop(unsigned char output_data)
                                   1998 ;	-----------------------------------------
                                   1999 ;	 function i2c_write_and_stop
                                   2000 ;	-----------------------------------------
      000435                       2001 _i2c_write_and_stop:
      000435 85 82 C2         [24] 2002 	mov	_SMB0DAT,dpl
                           000350  2003 	C$i2c.h$217$1$92 ==.
                                   2004 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:217: STO = 1;                  //Set stop bit
      000438 D2 C4            [12] 2005 	setb	_STO
                           000352  2006 	C$i2c.h$218$1$92 ==.
                                   2007 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:218: while(!SI);               //Wait until send is complete
      00043A                       2008 00101$:
                           000352  2009 	C$i2c.h$219$1$92 ==.
                                   2010 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:219: SI = 0;                   //clear SI
      00043A 10 C3 02         [24] 2011 	jbc	_SI,00112$
      00043D 80 FB            [24] 2012 	sjmp	00101$
      00043F                       2013 00112$:
                           000357  2014 	C$i2c.h$220$1$92 ==.
                           000357  2015 	XG$i2c_write_and_stop$0$0 ==.
      00043F 22               [24] 2016 	ret
                                   2017 ;------------------------------------------------------------
                                   2018 ;Allocation info for local variables in function 'i2c_read'
                                   2019 ;------------------------------------------------------------
                                   2020 ;input_data                Allocated to registers 
                                   2021 ;------------------------------------------------------------
                           000358  2022 	G$i2c_read$0$0 ==.
                           000358  2023 	C$i2c.h$223$1$92 ==.
                                   2024 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:223: unsigned char i2c_read(void)
                                   2025 ;	-----------------------------------------
                                   2026 ;	 function i2c_read
                                   2027 ;	-----------------------------------------
      000440                       2028 _i2c_read:
                           000358  2029 	C$i2c.h$226$1$94 ==.
                                   2030 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:226: while(!SI);                //Wait until we have data to read
      000440                       2031 00101$:
      000440 30 C3 FD         [24] 2032 	jnb	_SI,00101$
                           00035B  2033 	C$i2c.h$227$1$94 ==.
                                   2034 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:227: input_data = SMB0DAT;      //Read the data
      000443 85 C2 82         [24] 2035 	mov	dpl,_SMB0DAT
                           00035E  2036 	C$i2c.h$228$1$94 ==.
                                   2037 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:228: SI = 0;                    //Clear SI
      000446 C2 C3            [12] 2038 	clr	_SI
                           000360  2039 	C$i2c.h$229$1$94 ==.
                                   2040 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:229: return input_data;         //Return the read data
                           000360  2041 	C$i2c.h$230$1$94 ==.
                           000360  2042 	XG$i2c_read$0$0 ==.
      000448 22               [24] 2043 	ret
                                   2044 ;------------------------------------------------------------
                                   2045 ;Allocation info for local variables in function 'i2c_read_and_stop'
                                   2046 ;------------------------------------------------------------
                                   2047 ;input_data                Allocated to registers r7 
                                   2048 ;------------------------------------------------------------
                           000361  2049 	G$i2c_read_and_stop$0$0 ==.
                           000361  2050 	C$i2c.h$233$1$94 ==.
                                   2051 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:233: unsigned char i2c_read_and_stop(void)
                                   2052 ;	-----------------------------------------
                                   2053 ;	 function i2c_read_and_stop
                                   2054 ;	-----------------------------------------
      000449                       2055 _i2c_read_and_stop:
                           000361  2056 	C$i2c.h$236$1$96 ==.
                                   2057 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:236: while(!SI);                //Wait until we have data to read
      000449                       2058 00101$:
      000449 30 C3 FD         [24] 2059 	jnb	_SI,00101$
                           000364  2060 	C$i2c.h$237$1$96 ==.
                                   2061 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:237: input_data = SMB0DAT;      //Read the data
      00044C AF C2            [24] 2062 	mov	r7,_SMB0DAT
                           000366  2063 	C$i2c.h$238$1$96 ==.
                                   2064 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:238: SI = 0;                    //Clear SI
      00044E C2 C3            [12] 2065 	clr	_SI
                           000368  2066 	C$i2c.h$239$1$96 ==.
                                   2067 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:239: STO = 1;                   //Set stop bit
      000450 D2 C4            [12] 2068 	setb	_STO
                           00036A  2069 	C$i2c.h$240$1$96 ==.
                                   2070 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:240: while(!SI);                //Wait for stop
      000452                       2071 00104$:
                           00036A  2072 	C$i2c.h$241$1$96 ==.
                                   2073 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:241: SI = 0;
      000452 10 C3 02         [24] 2074 	jbc	_SI,00122$
      000455 80 FB            [24] 2075 	sjmp	00104$
      000457                       2076 00122$:
                           00036F  2077 	C$i2c.h$242$1$96 ==.
                                   2078 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:242: return input_data;         //Return the read data
      000457 8F 82            [24] 2079 	mov	dpl,r7
                           000371  2080 	C$i2c.h$243$1$96 ==.
                           000371  2081 	XG$i2c_read_and_stop$0$0 ==.
      000459 22               [24] 2082 	ret
                                   2083 ;------------------------------------------------------------
                                   2084 ;Allocation info for local variables in function 'i2c_write_data'
                                   2085 ;------------------------------------------------------------
                                   2086 ;start_reg                 Allocated with name '_i2c_write_data_PARM_2'
                                   2087 ;buffer                    Allocated with name '_i2c_write_data_PARM_3'
                                   2088 ;num_bytes                 Allocated with name '_i2c_write_data_PARM_4'
                                   2089 ;addr                      Allocated to registers r7 
                                   2090 ;i                         Allocated to registers 
                                   2091 ;------------------------------------------------------------
                           000372  2092 	G$i2c_write_data$0$0 ==.
                           000372  2093 	C$i2c.h$246$1$96 ==.
                                   2094 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:246: void i2c_write_data(unsigned char addr, unsigned char start_reg, unsigned char *buffer, unsigned char num_bytes)
                                   2095 ;	-----------------------------------------
                                   2096 ;	 function i2c_write_data
                                   2097 ;	-----------------------------------------
      00045A                       2098 _i2c_write_data:
      00045A AF 82            [24] 2099 	mov	r7,dpl
                           000374  2100 	C$i2c.h$250$1$98 ==.
                                   2101 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:250: i2c_start();               //initiate I2C transfer
      00045C C0 07            [24] 2102 	push	ar7
      00045E 12 04 1F         [24] 2103 	lcall	_i2c_start
      000461 D0 07            [24] 2104 	pop	ar7
                           00037B  2105 	C$i2c.h$251$1$98 ==.
                                   2106 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:251: i2c_write(addr & ~0x01);   //write the desired address to the bus
      000463 74 FE            [12] 2107 	mov	a,#0xFE
      000465 5F               [12] 2108 	anl	a,r7
      000466 F5 82            [12] 2109 	mov	dpl,a
      000468 12 04 2C         [24] 2110 	lcall	_i2c_write
                           000383  2111 	C$i2c.h$252$1$98 ==.
                                   2112 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:252: i2c_write(start_reg);      //write the start register to the bus
      00046B 85 27 82         [24] 2113 	mov	dpl,_i2c_write_data_PARM_2
      00046E 12 04 2C         [24] 2114 	lcall	_i2c_write
                           000389  2115 	C$i2c.h$253$1$98 ==.
                                   2116 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:253: for(i=0; i<num_bytes-1; i++) //write the data to the register(s)
      000471 7F 00            [12] 2117 	mov	r7,#0x00
      000473                       2118 00103$:
      000473 AD 2B            [24] 2119 	mov	r5,_i2c_write_data_PARM_4
      000475 7E 00            [12] 2120 	mov	r6,#0x00
      000477 1D               [12] 2121 	dec	r5
      000478 BD FF 01         [24] 2122 	cjne	r5,#0xFF,00114$
      00047B 1E               [12] 2123 	dec	r6
      00047C                       2124 00114$:
      00047C 8F 03            [24] 2125 	mov	ar3,r7
      00047E 7C 00            [12] 2126 	mov	r4,#0x00
      000480 C3               [12] 2127 	clr	c
      000481 EB               [12] 2128 	mov	a,r3
      000482 9D               [12] 2129 	subb	a,r5
      000483 EC               [12] 2130 	mov	a,r4
      000484 64 80            [12] 2131 	xrl	a,#0x80
      000486 8E F0            [24] 2132 	mov	b,r6
      000488 63 F0 80         [24] 2133 	xrl	b,#0x80
      00048B 95 F0            [12] 2134 	subb	a,b
      00048D 50 1F            [24] 2135 	jnc	00101$
                           0003A7  2136 	C$i2c.h$254$1$98 ==.
                                   2137 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:254: i2c_write(buffer[i]);
      00048F EF               [12] 2138 	mov	a,r7
      000490 25 28            [12] 2139 	add	a,_i2c_write_data_PARM_3
      000492 FC               [12] 2140 	mov	r4,a
      000493 E4               [12] 2141 	clr	a
      000494 35 29            [12] 2142 	addc	a,(_i2c_write_data_PARM_3 + 1)
      000496 FD               [12] 2143 	mov	r5,a
      000497 AE 2A            [24] 2144 	mov	r6,(_i2c_write_data_PARM_3 + 2)
      000499 8C 82            [24] 2145 	mov	dpl,r4
      00049B 8D 83            [24] 2146 	mov	dph,r5
      00049D 8E F0            [24] 2147 	mov	b,r6
      00049F 12 1D 72         [24] 2148 	lcall	__gptrget
      0004A2 F5 82            [12] 2149 	mov	dpl,a
      0004A4 C0 07            [24] 2150 	push	ar7
      0004A6 12 04 2C         [24] 2151 	lcall	_i2c_write
      0004A9 D0 07            [24] 2152 	pop	ar7
                           0003C3  2153 	C$i2c.h$253$1$98 ==.
                                   2154 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:253: for(i=0; i<num_bytes-1; i++) //write the data to the register(s)
      0004AB 0F               [12] 2155 	inc	r7
      0004AC 80 C5            [24] 2156 	sjmp	00103$
      0004AE                       2157 00101$:
                           0003C6  2158 	C$i2c.h$255$1$98 ==.
                                   2159 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:255: i2c_write_and_stop(buffer[num_bytes-1]); //Stop transfer
      0004AE AE 2B            [24] 2160 	mov	r6,_i2c_write_data_PARM_4
      0004B0 7F 00            [12] 2161 	mov	r7,#0x00
      0004B2 1E               [12] 2162 	dec	r6
      0004B3 BE FF 01         [24] 2163 	cjne	r6,#0xFF,00116$
      0004B6 1F               [12] 2164 	dec	r7
      0004B7                       2165 00116$:
      0004B7 EE               [12] 2166 	mov	a,r6
      0004B8 25 28            [12] 2167 	add	a,_i2c_write_data_PARM_3
      0004BA FE               [12] 2168 	mov	r6,a
      0004BB EF               [12] 2169 	mov	a,r7
      0004BC 35 29            [12] 2170 	addc	a,(_i2c_write_data_PARM_3 + 1)
      0004BE FF               [12] 2171 	mov	r7,a
      0004BF AD 2A            [24] 2172 	mov	r5,(_i2c_write_data_PARM_3 + 2)
      0004C1 8E 82            [24] 2173 	mov	dpl,r6
      0004C3 8F 83            [24] 2174 	mov	dph,r7
      0004C5 8D F0            [24] 2175 	mov	b,r5
      0004C7 12 1D 72         [24] 2176 	lcall	__gptrget
      0004CA F5 82            [12] 2177 	mov	dpl,a
      0004CC 12 04 35         [24] 2178 	lcall	_i2c_write_and_stop
                           0003E7  2179 	C$i2c.h$256$1$98 ==.
                           0003E7  2180 	XG$i2c_write_data$0$0 ==.
      0004CF 22               [24] 2181 	ret
                                   2182 ;------------------------------------------------------------
                                   2183 ;Allocation info for local variables in function 'i2c_read_data'
                                   2184 ;------------------------------------------------------------
                                   2185 ;start_reg                 Allocated with name '_i2c_read_data_PARM_2'
                                   2186 ;buffer                    Allocated with name '_i2c_read_data_PARM_3'
                                   2187 ;num_bytes                 Allocated with name '_i2c_read_data_PARM_4'
                                   2188 ;addr                      Allocated to registers r7 
                                   2189 ;j                         Allocated to registers 
                                   2190 ;------------------------------------------------------------
                           0003E8  2191 	G$i2c_read_data$0$0 ==.
                           0003E8  2192 	C$i2c.h$259$1$98 ==.
                                   2193 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:259: void i2c_read_data(unsigned char addr, unsigned char start_reg, unsigned char *buffer, unsigned char num_bytes)
                                   2194 ;	-----------------------------------------
                                   2195 ;	 function i2c_read_data
                                   2196 ;	-----------------------------------------
      0004D0                       2197 _i2c_read_data:
      0004D0 AF 82            [24] 2198 	mov	r7,dpl
                           0003EA  2199 	C$i2c.h$262$1$100 ==.
                                   2200 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:262: i2c_start();               //Start I2C transfer
      0004D2 C0 07            [24] 2201 	push	ar7
      0004D4 12 04 1F         [24] 2202 	lcall	_i2c_start
      0004D7 D0 07            [24] 2203 	pop	ar7
                           0003F1  2204 	C$i2c.h$263$1$100 ==.
                                   2205 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:263: i2c_write(addr & ~0x01);   //Write address of device that will be written to, send 0
      0004D9 8F 06            [24] 2206 	mov	ar6,r7
      0004DB 74 FE            [12] 2207 	mov	a,#0xFE
      0004DD 5E               [12] 2208 	anl	a,r6
      0004DE F5 82            [12] 2209 	mov	dpl,a
      0004E0 C0 07            [24] 2210 	push	ar7
      0004E2 12 04 2C         [24] 2211 	lcall	_i2c_write
                           0003FD  2212 	C$i2c.h$264$1$100 ==.
                                   2213 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:264: i2c_write_and_stop(start_reg); //Write & stop the 1st register to be read
      0004E5 85 2C 82         [24] 2214 	mov	dpl,_i2c_read_data_PARM_2
      0004E8 12 04 35         [24] 2215 	lcall	_i2c_write_and_stop
                           000403  2216 	C$i2c.h$265$1$100 ==.
                                   2217 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:265: i2c_start();               //Start I2C transfer
      0004EB 12 04 1F         [24] 2218 	lcall	_i2c_start
      0004EE D0 07            [24] 2219 	pop	ar7
                           000408  2220 	C$i2c.h$266$1$100 ==.
                                   2221 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:266: i2c_write(addr | 0x01);    //Write address again, this time indicating a read operation
      0004F0 74 01            [12] 2222 	mov	a,#0x01
      0004F2 4F               [12] 2223 	orl	a,r7
      0004F3 F5 82            [12] 2224 	mov	dpl,a
      0004F5 12 04 2C         [24] 2225 	lcall	_i2c_write
                           000410  2226 	C$i2c.h$267$1$100 ==.
                                   2227 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:267: for(j = 0; j < num_bytes - 1; j++)
      0004F8 7F 00            [12] 2228 	mov	r7,#0x00
      0004FA                       2229 00103$:
      0004FA AD 30            [24] 2230 	mov	r5,_i2c_read_data_PARM_4
      0004FC 7E 00            [12] 2231 	mov	r6,#0x00
      0004FE 1D               [12] 2232 	dec	r5
      0004FF BD FF 01         [24] 2233 	cjne	r5,#0xFF,00114$
      000502 1E               [12] 2234 	dec	r6
      000503                       2235 00114$:
      000503 8F 03            [24] 2236 	mov	ar3,r7
      000505 7C 00            [12] 2237 	mov	r4,#0x00
      000507 C3               [12] 2238 	clr	c
      000508 EB               [12] 2239 	mov	a,r3
      000509 9D               [12] 2240 	subb	a,r5
      00050A EC               [12] 2241 	mov	a,r4
      00050B 64 80            [12] 2242 	xrl	a,#0x80
      00050D 8E F0            [24] 2243 	mov	b,r6
      00050F 63 F0 80         [24] 2244 	xrl	b,#0x80
      000512 95 F0            [12] 2245 	subb	a,b
      000514 50 2E            [24] 2246 	jnc	00101$
                           00042E  2247 	C$i2c.h$269$2$101 ==.
                                   2248 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:269: AA = 1;                //Set acknowledge bit
      000516 D2 C2            [12] 2249 	setb	_AA
                           000430  2250 	C$i2c.h$270$2$101 ==.
                                   2251 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:270: buffer[j] = i2c_read();//Read data, save it in buffer
      000518 EF               [12] 2252 	mov	a,r7
      000519 25 2D            [12] 2253 	add	a,_i2c_read_data_PARM_3
      00051B FC               [12] 2254 	mov	r4,a
      00051C E4               [12] 2255 	clr	a
      00051D 35 2E            [12] 2256 	addc	a,(_i2c_read_data_PARM_3 + 1)
      00051F FD               [12] 2257 	mov	r5,a
      000520 AE 2F            [24] 2258 	mov	r6,(_i2c_read_data_PARM_3 + 2)
      000522 C0 07            [24] 2259 	push	ar7
      000524 C0 06            [24] 2260 	push	ar6
      000526 C0 05            [24] 2261 	push	ar5
      000528 C0 04            [24] 2262 	push	ar4
      00052A 12 04 40         [24] 2263 	lcall	_i2c_read
      00052D AB 82            [24] 2264 	mov	r3,dpl
      00052F D0 04            [24] 2265 	pop	ar4
      000531 D0 05            [24] 2266 	pop	ar5
      000533 D0 06            [24] 2267 	pop	ar6
      000535 D0 07            [24] 2268 	pop	ar7
      000537 8C 82            [24] 2269 	mov	dpl,r4
      000539 8D 83            [24] 2270 	mov	dph,r5
      00053B 8E F0            [24] 2271 	mov	b,r6
      00053D EB               [12] 2272 	mov	a,r3
      00053E 12 13 C5         [24] 2273 	lcall	__gptrput
                           000459  2274 	C$i2c.h$267$1$100 ==.
                                   2275 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:267: for(j = 0; j < num_bytes - 1; j++)
      000541 0F               [12] 2276 	inc	r7
      000542 80 B6            [24] 2277 	sjmp	00103$
      000544                       2278 00101$:
                           00045C  2279 	C$i2c.h$272$1$100 ==.
                                   2280 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:272: AA = 0;
      000544 C2 C2            [12] 2281 	clr	_AA
                           00045E  2282 	C$i2c.h$273$1$100 ==.
                                   2283 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:273: buffer[num_bytes - 1] = i2c_read_and_stop(); //Read the last byte and stop, save it in the buffer
      000546 AE 30            [24] 2284 	mov	r6,_i2c_read_data_PARM_4
      000548 7F 00            [12] 2285 	mov	r7,#0x00
      00054A 1E               [12] 2286 	dec	r6
      00054B BE FF 01         [24] 2287 	cjne	r6,#0xFF,00116$
      00054E 1F               [12] 2288 	dec	r7
      00054F                       2289 00116$:
      00054F EE               [12] 2290 	mov	a,r6
      000550 25 2D            [12] 2291 	add	a,_i2c_read_data_PARM_3
      000552 FE               [12] 2292 	mov	r6,a
      000553 EF               [12] 2293 	mov	a,r7
      000554 35 2E            [12] 2294 	addc	a,(_i2c_read_data_PARM_3 + 1)
      000556 FF               [12] 2295 	mov	r7,a
      000557 AD 2F            [24] 2296 	mov	r5,(_i2c_read_data_PARM_3 + 2)
      000559 C0 07            [24] 2297 	push	ar7
      00055B C0 06            [24] 2298 	push	ar6
      00055D C0 05            [24] 2299 	push	ar5
      00055F 12 04 49         [24] 2300 	lcall	_i2c_read_and_stop
      000562 AC 82            [24] 2301 	mov	r4,dpl
      000564 D0 05            [24] 2302 	pop	ar5
      000566 D0 06            [24] 2303 	pop	ar6
      000568 D0 07            [24] 2304 	pop	ar7
      00056A 8E 82            [24] 2305 	mov	dpl,r6
      00056C 8F 83            [24] 2306 	mov	dph,r7
      00056E 8D F0            [24] 2307 	mov	b,r5
      000570 EC               [12] 2308 	mov	a,r4
      000571 12 13 C5         [24] 2309 	lcall	__gptrput
                           00048C  2310 	C$i2c.h$274$1$100 ==.
                           00048C  2311 	XG$i2c_read_data$0$0 ==.
      000574 22               [24] 2312 	ret
                                   2313 ;------------------------------------------------------------
                                   2314 ;Allocation info for local variables in function 'Accel_Init'
                                   2315 ;------------------------------------------------------------
                                   2316 ;Data2                     Allocated with name '_Accel_Init_Data2_1_103'
                                   2317 ;------------------------------------------------------------
                           00048D  2318 	G$Accel_Init$0$0 ==.
                           00048D  2319 	C$i2c.h$283$1$100 ==.
                                   2320 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:283: void Accel_Init(void)
                                   2321 ;	-----------------------------------------
                                   2322 ;	 function Accel_Init
                                   2323 ;	-----------------------------------------
      000575                       2324 _Accel_Init:
                           00048D  2325 	C$i2c.h$287$1$103 ==.
                                   2326 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:287: Data2[0]=0x23;	//normal power mode, 50Hz ODR, y & x axes enabled
      000575 75 31 23         [24] 2327 	mov	_Accel_Init_Data2_1_103,#0x23
                           000490  2328 	C$i2c.h$289$1$103 ==.
                                   2329 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:289: i2c_write_data(addr_accel, 0x20, Data2, 1);
      000578 75 28 31         [24] 2330 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      00057B 75 29 00         [24] 2331 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      00057E 75 2A 40         [24] 2332 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000581 75 27 20         [24] 2333 	mov	_i2c_write_data_PARM_2,#0x20
      000584 75 2B 01         [24] 2334 	mov	_i2c_write_data_PARM_4,#0x01
      000587 75 82 30         [24] 2335 	mov	dpl,#0x30
      00058A 12 04 5A         [24] 2336 	lcall	_i2c_write_data
                           0004A5  2337 	C$i2c.h$290$1$103 ==.
                                   2338 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:290: Data2[0]=0x00;	//Default - no filtering
      00058D 75 31 00         [24] 2339 	mov	_Accel_Init_Data2_1_103,#0x00
                           0004A8  2340 	C$i2c.h$292$1$103 ==.
                                   2341 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:292: i2c_write_data(addr_accel, 0x21, Data2, 1);
      000590 75 28 31         [24] 2342 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      000593 75 29 00         [24] 2343 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      000596 75 2A 40         [24] 2344 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000599 75 27 21         [24] 2345 	mov	_i2c_write_data_PARM_2,#0x21
      00059C 75 2B 01         [24] 2346 	mov	_i2c_write_data_PARM_4,#0x01
      00059F 75 82 30         [24] 2347 	mov	dpl,#0x30
      0005A2 12 04 5A         [24] 2348 	lcall	_i2c_write_data
                           0004BD  2349 	C$i2c.h$293$1$103 ==.
                                   2350 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:293: Data2[0]=0x00;	//default - no interrupts enabled
      0005A5 75 31 00         [24] 2351 	mov	_Accel_Init_Data2_1_103,#0x00
                           0004C0  2352 	C$i2c.h$294$1$103 ==.
                                   2353 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:294: i2c_write_data(addr_accel, 0x22, Data2, 1);
      0005A8 75 28 31         [24] 2354 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      0005AB 75 29 00         [24] 2355 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      0005AE 75 2A 40         [24] 2356 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      0005B1 75 27 22         [24] 2357 	mov	_i2c_write_data_PARM_2,#0x22
      0005B4 75 2B 01         [24] 2358 	mov	_i2c_write_data_PARM_4,#0x01
      0005B7 75 82 30         [24] 2359 	mov	dpl,#0x30
      0005BA 12 04 5A         [24] 2360 	lcall	_i2c_write_data
                           0004D5  2361 	C$i2c.h$298$1$103 ==.
                           0004D5  2362 	XG$Accel_Init$0$0 ==.
      0005BD 22               [24] 2363 	ret
                                   2364 ;------------------------------------------------------------
                                   2365 ;Allocation info for local variables in function 'main'
                                   2366 ;------------------------------------------------------------
                           0004D6  2367 	G$main$0$0 ==.
                           0004D6  2368 	C$lab6.c$72$1$103 ==.
                                   2369 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:72: void main(void)
                                   2370 ;	-----------------------------------------
                                   2371 ;	 function main
                                   2372 ;	-----------------------------------------
      0005BE                       2373 _main:
                           0004D6  2374 	C$lab6.c$74$1$121 ==.
                                   2375 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:74: Sys_Init();
      0005BE 12 01 18         [24] 2376 	lcall	_Sys_Init
                           0004D9  2377 	C$lab6.c$75$1$121 ==.
                                   2378 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:75: putchar(' '); //the quotes in this line may not format correctly
      0005C1 75 82 20         [24] 2379 	mov	dpl,#0x20
      0005C4 12 01 2B         [24] 2380 	lcall	_putchar
                           0004DF  2381 	C$lab6.c$76$1$121 ==.
                                   2382 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:76: Port_Init();
      0005C7 12 13 27         [24] 2383 	lcall	_Port_Init
                           0004E2  2384 	C$lab6.c$77$1$121 ==.
                                   2385 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:77: XBR0_Init();
      0005CA 12 13 57         [24] 2386 	lcall	_XBR0_Init
                           0004E5  2387 	C$lab6.c$78$1$121 ==.
                                   2388 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:78: PCA_Init();
      0005CD 12 13 3F         [24] 2389 	lcall	_PCA_Init
                           0004E8  2390 	C$lab6.c$79$1$121 ==.
                                   2391 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:79: SMB_Init();
      0005D0 12 13 5B         [24] 2392 	lcall	_SMB_Init
                           0004EB  2393 	C$lab6.c$80$1$121 ==.
                                   2394 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:80: ADC_Init();
      0005D3 12 13 61         [24] 2395 	lcall	_ADC_Init
                           0004EE  2396 	C$lab6.c$82$1$121 ==.
                                   2397 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:82: count =0;
      0005D6 E4               [12] 2398 	clr	a
      0005D7 F5 32            [12] 2399 	mov	_count,a
      0005D9 F5 33            [12] 2400 	mov	(_count + 1),a
                           0004F3  2401 	C$lab6.c$84$1$121 ==.
                                   2402 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:84: RUDDER_PW= PW_CENTER_RUDDER;
      0005DB 85 3C 46         [24] 2403 	mov	_RUDDER_PW,_PW_CENTER_RUDDER
      0005DE 85 3D 47         [24] 2404 	mov	(_RUDDER_PW + 1),(_PW_CENTER_RUDDER + 1)
                           0004F9  2405 	C$lab6.c$85$1$121 ==.
                                   2406 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:85: ANGLE_PW = PW_CENTER_ANGLE;
      0005E1 85 42 4A         [24] 2407 	mov	_ANGLE_PW,_PW_CENTER_ANGLE
      0005E4 85 43 4B         [24] 2408 	mov	(_ANGLE_PW + 1),(_PW_CENTER_ANGLE + 1)
                           0004FF  2409 	C$lab6.c$86$1$121 ==.
                                   2410 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:86: RTHRUST_PW = PW_NUET_THRUST;
      0005E7 85 36 4E         [24] 2411 	mov	_RTHRUST_PW,_PW_NUET_THRUST
      0005EA 85 37 4F         [24] 2412 	mov	(_RTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
                           000505  2413 	C$lab6.c$87$1$121 ==.
                                   2414 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:87: LTHRUST_PW = PW_NUET_THRUST;
      0005ED 85 36 50         [24] 2415 	mov	_LTHRUST_PW,_PW_NUET_THRUST
      0005F0 85 37 51         [24] 2416 	mov	(_LTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
                           00050B  2417 	C$lab6.c$89$1$121 ==.
                                   2418 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:89: RDR_lo_to_hi = 0xFFFF - RUDDER_PW;
      0005F3 14               [12] 2419 	dec	a
      0005F4 C3               [12] 2420 	clr	c
      0005F5 95 46            [12] 2421 	subb	a,_RUDDER_PW
      0005F7 F5 48            [12] 2422 	mov	_RDR_lo_to_hi,a
      0005F9 74 FF            [12] 2423 	mov	a,#0xFF
      0005FB 95 47            [12] 2424 	subb	a,(_RUDDER_PW + 1)
      0005FD F5 49            [12] 2425 	mov	(_RDR_lo_to_hi + 1),a
                           000517  2426 	C$lab6.c$90$1$121 ==.
                                   2427 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:90: RTRST_lo_to_hi = 0xFFFF - RTHRUST_PW;
      0005FF 74 FF            [12] 2428 	mov	a,#0xFF
      000601 C3               [12] 2429 	clr	c
      000602 95 4E            [12] 2430 	subb	a,_RTHRUST_PW
      000604 F5 52            [12] 2431 	mov	_RTRST_lo_to_hi,a
      000606 74 FF            [12] 2432 	mov	a,#0xFF
      000608 95 4F            [12] 2433 	subb	a,(_RTHRUST_PW + 1)
      00060A F5 53            [12] 2434 	mov	(_RTRST_lo_to_hi + 1),a
                           000524  2435 	C$lab6.c$91$1$121 ==.
                                   2436 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:91: LTRST_lo_to_hi = 0xFFFF - LTHRUST_PW;
      00060C 74 FF            [12] 2437 	mov	a,#0xFF
      00060E C3               [12] 2438 	clr	c
      00060F 95 50            [12] 2439 	subb	a,_LTHRUST_PW
      000611 F5 54            [12] 2440 	mov	_LTRST_lo_to_hi,a
      000613 74 FF            [12] 2441 	mov	a,#0xFF
      000615 95 51            [12] 2442 	subb	a,(_LTHRUST_PW + 1)
      000617 F5 55            [12] 2443 	mov	(_LTRST_lo_to_hi + 1),a
                           000531  2444 	C$lab6.c$92$1$121 ==.
                                   2445 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:92: AGL_lo_to_hi = 0xFFFF - ANGLE_PW;
      000619 74 FF            [12] 2446 	mov	a,#0xFF
      00061B C3               [12] 2447 	clr	c
      00061C 95 4A            [12] 2448 	subb	a,_ANGLE_PW
      00061E F5 4C            [12] 2449 	mov	_AGL_lo_to_hi,a
      000620 74 FF            [12] 2450 	mov	a,#0xFF
      000622 95 4B            [12] 2451 	subb	a,(_ANGLE_PW + 1)
      000624 F5 4D            [12] 2452 	mov	(_AGL_lo_to_hi + 1),a
                           00053E  2453 	C$lab6.c$94$1$121 ==.
                                   2454 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:94: PCA0CP0 = RDR_lo_to_hi;
      000626 85 48 EA         [24] 2455 	mov	((_PCA0CP0 >> 0) & 0xFF),_RDR_lo_to_hi
      000629 85 49 FA         [24] 2456 	mov	((_PCA0CP0 >> 8) & 0xFF),(_RDR_lo_to_hi + 1)
                           000544  2457 	C$lab6.c$95$1$121 ==.
                                   2458 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:95: PCA0CP1 = AGL_lo_to_hi;	
      00062C 85 4C EB         [24] 2459 	mov	((_PCA0CP1 >> 0) & 0xFF),_AGL_lo_to_hi
      00062F 85 4D FB         [24] 2460 	mov	((_PCA0CP1 >> 8) & 0xFF),(_AGL_lo_to_hi + 1)
                           00054A  2461 	C$lab6.c$96$1$121 ==.
                                   2462 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:96: PCA0CP2 = RTRST_lo_to_hi;
      000632 85 52 EC         [24] 2463 	mov	((_PCA0CP2 >> 0) & 0xFF),_RTRST_lo_to_hi
      000635 85 53 FC         [24] 2464 	mov	((_PCA0CP2 >> 8) & 0xFF),(_RTRST_lo_to_hi + 1)
                           000550  2465 	C$lab6.c$97$1$121 ==.
                                   2466 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:97: PCA0CP3 = LTRST_lo_to_hi;
      000638 85 54 ED         [24] 2467 	mov	((_PCA0CP3 >> 0) & 0xFF),_LTRST_lo_to_hi
      00063B 85 55 FD         [24] 2468 	mov	((_PCA0CP3 >> 8) & 0xFF),(_LTRST_lo_to_hi + 1)
                           000556  2469 	C$lab6.c$102$1$121 ==.
                                   2470 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:102: Rudder_cal();
      00063E 12 08 1B         [24] 2471 	lcall	_Rudder_cal
                           000559  2472 	C$lab6.c$103$1$121 ==.
                                   2473 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:103: RUDDER_PW= PW_CENTER_RUDDER;
      000641 85 3C 46         [24] 2474 	mov	_RUDDER_PW,_PW_CENTER_RUDDER
      000644 85 3D 47         [24] 2475 	mov	(_RUDDER_PW + 1),(_PW_CENTER_RUDDER + 1)
                           00055F  2476 	C$lab6.c$104$1$121 ==.
                                   2477 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:104: RDR_lo_to_hi = 0xFFFF - RUDDER_PW;
      000647 74 FF            [12] 2478 	mov	a,#0xFF
      000649 C3               [12] 2479 	clr	c
      00064A 95 46            [12] 2480 	subb	a,_RUDDER_PW
      00064C F5 48            [12] 2481 	mov	_RDR_lo_to_hi,a
      00064E 74 FF            [12] 2482 	mov	a,#0xFF
      000650 95 47            [12] 2483 	subb	a,(_RUDDER_PW + 1)
      000652 F5 49            [12] 2484 	mov	(_RDR_lo_to_hi + 1),a
                           00056C  2485 	C$lab6.c$105$1$121 ==.
                                   2486 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:105: PCA0CP0 = RDR_lo_to_hi;
      000654 85 48 EA         [24] 2487 	mov	((_PCA0CP0 >> 0) & 0xFF),_RDR_lo_to_hi
      000657 85 49 FA         [24] 2488 	mov	((_PCA0CP0 >> 8) & 0xFF),(_RDR_lo_to_hi + 1)
                           000572  2489 	C$lab6.c$107$1$121 ==.
                                   2490 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:107: Angle_cal();
      00065A 12 0A B0         [24] 2491 	lcall	_Angle_cal
                           000575  2492 	C$lab6.c$108$1$121 ==.
                                   2493 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:108: ANGLE_PW = PW_CENTER_ANGLE;
      00065D 85 42 4A         [24] 2494 	mov	_ANGLE_PW,_PW_CENTER_ANGLE
      000660 85 43 4B         [24] 2495 	mov	(_ANGLE_PW + 1),(_PW_CENTER_ANGLE + 1)
                           00057B  2496 	C$lab6.c$109$1$121 ==.
                                   2497 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:109: AGL_lo_to_hi = 0xFFFF - ANGLE_PW;
      000663 74 FF            [12] 2498 	mov	a,#0xFF
      000665 C3               [12] 2499 	clr	c
      000666 95 4A            [12] 2500 	subb	a,_ANGLE_PW
      000668 F5 4C            [12] 2501 	mov	_AGL_lo_to_hi,a
      00066A 74 FF            [12] 2502 	mov	a,#0xFF
      00066C 95 4B            [12] 2503 	subb	a,(_ANGLE_PW + 1)
      00066E F5 4D            [12] 2504 	mov	(_AGL_lo_to_hi + 1),a
                           000588  2505 	C$lab6.c$110$1$121 ==.
                                   2506 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:110: PCA0CP1 = AGL_lo_to_hi;
      000670 85 4C EB         [24] 2507 	mov	((_PCA0CP1 >> 0) & 0xFF),_AGL_lo_to_hi
      000673 85 4D FB         [24] 2508 	mov	((_PCA0CP1 >> 8) & 0xFF),(_AGL_lo_to_hi + 1)
                           00058E  2509 	C$lab6.c$112$1$121 ==.
                                   2510 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:112: Thrust_cal();
      000676 12 0D 45         [24] 2511 	lcall	_Thrust_cal
                           000591  2512 	C$lab6.c$113$1$121 ==.
                                   2513 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:113: RTHRUST_PW = PW_NUET_THRUST;
      000679 85 36 4E         [24] 2514 	mov	_RTHRUST_PW,_PW_NUET_THRUST
      00067C 85 37 4F         [24] 2515 	mov	(_RTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
                           000597  2516 	C$lab6.c$114$1$121 ==.
                                   2517 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:114: LTHRUST_PW = PW_NUET_THRUST;
      00067F 85 36 50         [24] 2518 	mov	_LTHRUST_PW,_PW_NUET_THRUST
      000682 85 37 51         [24] 2519 	mov	(_LTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
                           00059D  2520 	C$lab6.c$115$1$121 ==.
                                   2521 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:115: RTRST_lo_to_hi = 0xFFFF - RTHRUST_PW;
      000685 74 FF            [12] 2522 	mov	a,#0xFF
      000687 C3               [12] 2523 	clr	c
      000688 95 4E            [12] 2524 	subb	a,_RTHRUST_PW
      00068A F5 52            [12] 2525 	mov	_RTRST_lo_to_hi,a
      00068C 74 FF            [12] 2526 	mov	a,#0xFF
      00068E 95 4F            [12] 2527 	subb	a,(_RTHRUST_PW + 1)
      000690 F5 53            [12] 2528 	mov	(_RTRST_lo_to_hi + 1),a
                           0005AA  2529 	C$lab6.c$116$1$121 ==.
                                   2530 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:116: LTRST_lo_to_hi = 0xFFFF - LTHRUST_PW;
      000692 74 FF            [12] 2531 	mov	a,#0xFF
      000694 C3               [12] 2532 	clr	c
      000695 95 50            [12] 2533 	subb	a,_LTHRUST_PW
      000697 F5 54            [12] 2534 	mov	_LTRST_lo_to_hi,a
      000699 74 FF            [12] 2535 	mov	a,#0xFF
      00069B 95 51            [12] 2536 	subb	a,(_LTHRUST_PW + 1)
      00069D F5 55            [12] 2537 	mov	(_LTRST_lo_to_hi + 1),a
                           0005B7  2538 	C$lab6.c$119$1$121 ==.
                                   2539 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:119: while (1)
      00069F                       2540 00102$:
                           0005B7  2541 	C$lab6.c$121$1$121 ==.
                                   2542 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:121: printf("\r\n%u ms",count*20);
      00069F 85 32 11         [24] 2543 	mov	__mulint_PARM_2,_count
      0006A2 85 33 12         [24] 2544 	mov	(__mulint_PARM_2 + 1),(_count + 1)
      0006A5 90 00 14         [24] 2545 	mov	dptr,#0x0014
      0006A8 12 14 10         [24] 2546 	lcall	__mulint
      0006AB AE 82            [24] 2547 	mov	r6,dpl
      0006AD AF 83            [24] 2548 	mov	r7,dph
      0006AF C0 06            [24] 2549 	push	ar6
      0006B1 C0 07            [24] 2550 	push	ar7
      0006B3 74 E1            [12] 2551 	mov	a,#___str_3
      0006B5 C0 E0            [24] 2552 	push	acc
      0006B7 74 1E            [12] 2553 	mov	a,#(___str_3 >> 8)
      0006B9 C0 E0            [24] 2554 	push	acc
      0006BB 74 80            [12] 2555 	mov	a,#0x80
      0006BD C0 E0            [24] 2556 	push	acc
      0006BF 12 16 A1         [24] 2557 	lcall	_printf
      0006C2 E5 81            [12] 2558 	mov	a,sp
      0006C4 24 FB            [12] 2559 	add	a,#0xfb
      0006C6 F5 81            [12] 2560 	mov	sp,a
                           0005E0  2561 	C$lab6.c$122$2$122 ==.
                                   2562 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:122: wait();
      0006C8 12 13 0C         [24] 2563 	lcall	_wait
      0006CB 80 D2            [24] 2564 	sjmp	00102$
                           0005E5  2565 	C$lab6.c$125$1$121 ==.
                           0005E5  2566 	XG$main$0$0 ==.
      0006CD 22               [24] 2567 	ret
                                   2568 ;------------------------------------------------------------
                                   2569 ;Allocation info for local variables in function 'Change_D'
                                   2570 ;------------------------------------------------------------
                                   2571 ;distance                  Allocated to registers r6 r7 
                                   2572 ;------------------------------------------------------------
                           0005E6  2573 	G$Change_D$0$0 ==.
                           0005E6  2574 	C$lab6.c$127$1$121 ==.
                                   2575 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:127: void Change_D(void)
                                   2576 ;	-----------------------------------------
                                   2577 ;	 function Change_D
                                   2578 ;	-----------------------------------------
      0006CE                       2579 _Change_D:
                           0005E6  2580 	C$lab6.c$129$1$121 ==.
                                   2581 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:129: unsigned int distance=100;
      0006CE 7E 64            [12] 2582 	mov	r6,#0x64
      0006D0 7F 00            [12] 2583 	mov	r7,#0x00
                           0005EA  2584 	C$lab6.c$130$1$124 ==.
                                   2585 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:130: if (count +1 % 4 == 0)
      0006D2 74 01            [12] 2586 	mov	a,#0x01
      0006D4 25 32            [12] 2587 	add	a,_count
      0006D6 FC               [12] 2588 	mov	r4,a
      0006D7 E4               [12] 2589 	clr	a
      0006D8 35 33            [12] 2590 	addc	a,(_count + 1)
      0006DA FD               [12] 2591 	mov	r5,a
      0006DB 4C               [12] 2592 	orl	a,r4
      0006DC 70 07            [24] 2593 	jnz	00102$
                           0005F6  2594 	C$lab6.c$132$2$125 ==.
                                   2595 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:132: distance = Read_Ranger();
      0006DE 12 07 0A         [24] 2596 	lcall	_Read_Ranger
      0006E1 AE 82            [24] 2597 	mov	r6,dpl
      0006E3 AF 83            [24] 2598 	mov	r7,dph
      0006E5                       2599 00102$:
                           0005FD  2600 	C$lab6.c$134$1$124 ==.
                                   2601 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:134: if (distance < 50)
      0006E5 C3               [12] 2602 	clr	c
      0006E6 EE               [12] 2603 	mov	a,r6
      0006E7 94 32            [12] 2604 	subb	a,#0x32
      0006E9 EF               [12] 2605 	mov	a,r7
      0006EA 94 00            [12] 2606 	subb	a,#0x00
      0006EC 50 1B            [24] 2607 	jnc	00105$
                           000606  2608 	C$lab6.c$136$2$126 ==.
                                   2609 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:136: desired_D = (desired_D + 1800) % 3600;
      0006EE 74 08            [12] 2610 	mov	a,#0x08
      0006F0 25 56            [12] 2611 	add	a,_desired_D
      0006F2 F5 82            [12] 2612 	mov	dpl,a
      0006F4 74 07            [12] 2613 	mov	a,#0x07
      0006F6 35 57            [12] 2614 	addc	a,(_desired_D + 1)
      0006F8 F5 83            [12] 2615 	mov	dph,a
      0006FA 75 11 10         [24] 2616 	mov	__modsint_PARM_2,#0x10
      0006FD 75 12 0E         [24] 2617 	mov	(__modsint_PARM_2 + 1),#0x0E
      000700 12 1D 8E         [24] 2618 	lcall	__modsint
      000703 85 82 56         [24] 2619 	mov	_desired_D,dpl
      000706 85 83 57         [24] 2620 	mov	(_desired_D + 1),dph
      000709                       2621 00105$:
                           000621  2622 	C$lab6.c$138$1$124 ==.
                           000621  2623 	XG$Change_D$0$0 ==.
      000709 22               [24] 2624 	ret
                                   2625 ;------------------------------------------------------------
                                   2626 ;Allocation info for local variables in function 'Read_Ranger'
                                   2627 ;------------------------------------------------------------
                                   2628 ;r_addr                    Allocated to registers 
                                   2629 ;read                      Allocated to registers 
                                   2630 ;------------------------------------------------------------
                           000622  2631 	G$Read_Ranger$0$0 ==.
                           000622  2632 	C$lab6.c$140$1$124 ==.
                                   2633 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:140: unsigned int Read_Ranger(void)
                                   2634 ;	-----------------------------------------
                                   2635 ;	 function Read_Ranger
                                   2636 ;	-----------------------------------------
      00070A                       2637 _Read_Ranger:
                           000622  2638 	C$lab6.c$146$1$128 ==.
                                   2639 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:146: i2c_read_data(r_addr, 2, r_data, 2);
      00070A 75 2D 5C         [24] 2640 	mov	_i2c_read_data_PARM_3,#_r_data
      00070D 75 2E 00         [24] 2641 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      000710 75 2F 40         [24] 2642 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      000713 75 2C 02         [24] 2643 	mov	_i2c_read_data_PARM_2,#0x02
      000716 75 30 02         [24] 2644 	mov	_i2c_read_data_PARM_4,#0x02
      000719 75 82 E0         [24] 2645 	mov	dpl,#0xE0
      00071C 12 04 D0         [24] 2646 	lcall	_i2c_read_data
                           000637  2647 	C$lab6.c$147$1$128 ==.
                                   2648 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:147: read = (((unsigned int) r_data[0] <<8) | r_data[1]);
      00071F AF 5C            [24] 2649 	mov	r7,_r_data
      000721 7E 00            [12] 2650 	mov	r6,#0x00
      000723 AC 5D            [24] 2651 	mov	r4,(_r_data + 0x0001)
      000725 7D 00            [12] 2652 	mov	r5,#0x00
      000727 EC               [12] 2653 	mov	a,r4
      000728 4E               [12] 2654 	orl	a,r6
      000729 F5 82            [12] 2655 	mov	dpl,a
      00072B ED               [12] 2656 	mov	a,r5
      00072C 4F               [12] 2657 	orl	a,r7
      00072D F5 83            [12] 2658 	mov	dph,a
                           000647  2659 	C$lab6.c$148$1$128 ==.
                                   2660 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:148: return read;
                           000647  2661 	C$lab6.c$149$1$128 ==.
                           000647  2662 	XG$Read_Ranger$0$0 ==.
      00072F 22               [24] 2663 	ret
                                   2664 ;------------------------------------------------------------
                                   2665 ;Allocation info for local variables in function 'Steering_func'
                                   2666 ;------------------------------------------------------------
                           000648  2667 	G$Steering_func$0$0 ==.
                           000648  2668 	C$lab6.c$151$1$128 ==.
                                   2669 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:151: void Steering_func(void)    ///FUNCTION TO HOLD ACTIONS FOR STEERING
                                   2670 ;	-----------------------------------------
                                   2671 ;	 function Steering_func
                                   2672 ;	-----------------------------------------
      000730                       2673 _Steering_func:
                           000648  2674 	C$lab6.c$153$1$130 ==.
                                   2675 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:153: actual_D = ReadCompass();
      000730 12 07 F5         [24] 2676 	lcall	_ReadCompass
      000733 85 82 58         [24] 2677 	mov	_actual_D,dpl
      000736 85 83 59         [24] 2678 	mov	(_actual_D + 1),dph
                           000651  2679 	C$lab6.c$154$1$130 ==.
                                   2680 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:154: offset = (unsigned int)((actual_D +3600- desired_D ) % 3600);
      000739 74 10            [12] 2681 	mov	a,#0x10
      00073B 25 58            [12] 2682 	add	a,_actual_D
      00073D FE               [12] 2683 	mov	r6,a
      00073E 74 0E            [12] 2684 	mov	a,#0x0E
      000740 35 59            [12] 2685 	addc	a,(_actual_D + 1)
      000742 FF               [12] 2686 	mov	r7,a
      000743 EE               [12] 2687 	mov	a,r6
      000744 C3               [12] 2688 	clr	c
      000745 95 56            [12] 2689 	subb	a,_desired_D
      000747 F5 82            [12] 2690 	mov	dpl,a
      000749 EF               [12] 2691 	mov	a,r7
      00074A 95 57            [12] 2692 	subb	a,(_desired_D + 1)
      00074C F5 83            [12] 2693 	mov	dph,a
      00074E 75 11 10         [24] 2694 	mov	__modsint_PARM_2,#0x10
      000751 75 12 0E         [24] 2695 	mov	(__modsint_PARM_2 + 1),#0x0E
      000754 12 1D 8E         [24] 2696 	lcall	__modsint
      000757 AE 82            [24] 2697 	mov	r6,dpl
      000759 AF 83            [24] 2698 	mov	r7,dph
      00075B 8E 5A            [24] 2699 	mov	_offset,r6
      00075D 8F 5B            [24] 2700 	mov	(_offset + 1),r7
                           000677  2701 	C$lab6.c$155$1$130 ==.
                                   2702 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:155: Steering_Servo(offset);
      00075F 85 5A 82         [24] 2703 	mov	dpl,_offset
      000762 85 5B 83         [24] 2704 	mov	dph,(_offset + 1)
      000765 12 10 20         [24] 2705 	lcall	_Steering_Servo
                           000680  2706 	C$lab6.c$157$1$130 ==.
                           000680  2707 	XG$Steering_func$0$0 ==.
      000768 22               [24] 2708 	ret
                                   2709 ;------------------------------------------------------------
                                   2710 ;Allocation info for local variables in function 'direction'
                                   2711 ;------------------------------------------------------------
                                   2712 ;value                     Allocated to registers r6 r7 
                                   2713 ;------------------------------------------------------------
                           000681  2714 	G$direction$0$0 ==.
                           000681  2715 	C$lab6.c$159$1$130 ==.
                                   2716 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:159: unsigned int direction(void)        ///ADJUSTS THE VALUES OF DIRECTION SO THE DESIRED DIRECTION IS THE CAR'S 'NORTH'
                                   2717 ;	-----------------------------------------
                                   2718 ;	 function direction
                                   2719 ;	-----------------------------------------
      000769                       2720 _direction:
                           000681  2721 	C$lab6.c$162$1$132 ==.
                                   2722 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:162: count =0;
      000769 E4               [12] 2723 	clr	a
      00076A F5 32            [12] 2724 	mov	_count,a
      00076C F5 33            [12] 2725 	mov	(_count + 1),a
                           000686  2726 	C$lab6.c$163$1$132 ==.
                                   2727 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:163: while (count < 1);
      00076E                       2728 00101$:
      00076E C3               [12] 2729 	clr	c
      00076F E5 32            [12] 2730 	mov	a,_count
      000771 94 01            [12] 2731 	subb	a,#0x01
      000773 E5 33            [12] 2732 	mov	a,(_count + 1)
      000775 64 80            [12] 2733 	xrl	a,#0x80
      000777 94 80            [12] 2734 	subb	a,#0x80
      000779 40 F3            [24] 2735 	jc	00101$
                           000693  2736 	C$lab6.c$164$1$132 ==.
                                   2737 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:164: lcd_clear();
      00077B 12 01 C9         [24] 2738 	lcall	_lcd_clear
                           000696  2739 	C$lab6.c$165$1$132 ==.
                                   2740 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:165: lcd_print("Calibration:\nHello world!\n012_345_678:\nabc def ghij");
      00077E 74 E9            [12] 2741 	mov	a,#___str_4
      000780 C0 E0            [24] 2742 	push	acc
      000782 74 1E            [12] 2743 	mov	a,#(___str_4 >> 8)
      000784 C0 E0            [24] 2744 	push	acc
      000786 74 80            [12] 2745 	mov	a,#0x80
      000788 C0 E0            [24] 2746 	push	acc
      00078A 12 01 44         [24] 2747 	lcall	_lcd_print
      00078D 15 81            [12] 2748 	dec	sp
      00078F 15 81            [12] 2749 	dec	sp
      000791 15 81            [12] 2750 	dec	sp
                           0006AB  2751 	C$lab6.c$166$1$132 ==.
                                   2752 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:166: start();
      000793 12 12 FC         [24] 2753 	lcall	_start
                           0006AE  2754 	C$lab6.c$167$1$132 ==.
                                   2755 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:167: lcd_clear();
      000796 12 01 C9         [24] 2756 	lcall	_lcd_clear
                           0006B1  2757 	C$lab6.c$168$1$132 ==.
                                   2758 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:168: value = kpd_input(0);
      000799 75 82 00         [24] 2759 	mov	dpl,#0x00
      00079C 12 02 81         [24] 2760 	lcall	_kpd_input
      00079F AE 82            [24] 2761 	mov	r6,dpl
      0007A1 AF 83            [24] 2762 	mov	r7,dph
                           0006BB  2763 	C$lab6.c$169$1$132 ==.
                                   2764 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:169: lcd_clear();
      0007A3 C0 07            [24] 2765 	push	ar7
      0007A5 C0 06            [24] 2766 	push	ar6
      0007A7 12 01 C9         [24] 2767 	lcall	_lcd_clear
      0007AA D0 06            [24] 2768 	pop	ar6
      0007AC D0 07            [24] 2769 	pop	ar7
                           0006C6  2770 	C$lab6.c$170$1$132 ==.
                                   2771 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:170: lcd_print("\r\nThe desired direction is: %d", value);
      0007AE C0 07            [24] 2772 	push	ar7
      0007B0 C0 06            [24] 2773 	push	ar6
      0007B2 C0 06            [24] 2774 	push	ar6
      0007B4 C0 07            [24] 2775 	push	ar7
      0007B6 74 1D            [12] 2776 	mov	a,#___str_5
      0007B8 C0 E0            [24] 2777 	push	acc
      0007BA 74 1F            [12] 2778 	mov	a,#(___str_5 >> 8)
      0007BC C0 E0            [24] 2779 	push	acc
      0007BE 74 80            [12] 2780 	mov	a,#0x80
      0007C0 C0 E0            [24] 2781 	push	acc
      0007C2 12 01 44         [24] 2782 	lcall	_lcd_print
      0007C5 E5 81            [12] 2783 	mov	a,sp
      0007C7 24 FB            [12] 2784 	add	a,#0xfb
      0007C9 F5 81            [12] 2785 	mov	sp,a
      0007CB D0 06            [24] 2786 	pop	ar6
      0007CD D0 07            [24] 2787 	pop	ar7
                           0006E7  2788 	C$lab6.c$171$1$132 ==.
                                   2789 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:171: printf("\r\nThe desired direction is: %d", value);
      0007CF C0 07            [24] 2790 	push	ar7
      0007D1 C0 06            [24] 2791 	push	ar6
      0007D3 C0 06            [24] 2792 	push	ar6
      0007D5 C0 07            [24] 2793 	push	ar7
      0007D7 74 1D            [12] 2794 	mov	a,#___str_5
      0007D9 C0 E0            [24] 2795 	push	acc
      0007DB 74 1F            [12] 2796 	mov	a,#(___str_5 >> 8)
      0007DD C0 E0            [24] 2797 	push	acc
      0007DF 74 80            [12] 2798 	mov	a,#0x80
      0007E1 C0 E0            [24] 2799 	push	acc
      0007E3 12 16 A1         [24] 2800 	lcall	_printf
      0007E6 E5 81            [12] 2801 	mov	a,sp
      0007E8 24 FB            [12] 2802 	add	a,#0xfb
      0007EA F5 81            [12] 2803 	mov	sp,a
      0007EC D0 06            [24] 2804 	pop	ar6
      0007EE D0 07            [24] 2805 	pop	ar7
                           000708  2806 	C$lab6.c$173$1$132 ==.
                                   2807 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:173: return value;
      0007F0 8E 82            [24] 2808 	mov	dpl,r6
      0007F2 8F 83            [24] 2809 	mov	dph,r7
                           00070C  2810 	C$lab6.c$175$1$132 ==.
                           00070C  2811 	XG$direction$0$0 ==.
      0007F4 22               [24] 2812 	ret
                                   2813 ;------------------------------------------------------------
                                   2814 ;Allocation info for local variables in function 'ReadCompass'
                                   2815 ;------------------------------------------------------------
                                   2816 ;Data                      Allocated with name '_ReadCompass_Data_1_134'
                                   2817 ;Crange                    Allocated to registers 
                                   2818 ;addr                      Allocated to registers 
                                   2819 ;------------------------------------------------------------
                           00070D  2820 	G$ReadCompass$0$0 ==.
                           00070D  2821 	C$lab6.c$177$1$132 ==.
                                   2822 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:177: unsigned int ReadCompass(void)
                                   2823 ;	-----------------------------------------
                                   2824 ;	 function ReadCompass
                                   2825 ;	-----------------------------------------
      0007F5                       2826 _ReadCompass:
                           00070D  2827 	C$lab6.c$183$1$134 ==.
                                   2828 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:183: i2c_read_data(addr, 2,Data,2);
      0007F5 75 2D 5E         [24] 2829 	mov	_i2c_read_data_PARM_3,#_ReadCompass_Data_1_134
      0007F8 75 2E 00         [24] 2830 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0007FB 75 2F 40         [24] 2831 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0007FE 75 2C 02         [24] 2832 	mov	_i2c_read_data_PARM_2,#0x02
      000801 75 30 02         [24] 2833 	mov	_i2c_read_data_PARM_4,#0x02
      000804 75 82 C0         [24] 2834 	mov	dpl,#0xC0
      000807 12 04 D0         [24] 2835 	lcall	_i2c_read_data
                           000722  2836 	C$lab6.c$184$1$134 ==.
                                   2837 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:184: Crange = ((unsigned int) Data[0] << 8 | Data[1]);
      00080A AF 5E            [24] 2838 	mov	r7,_ReadCompass_Data_1_134
      00080C 7E 00            [12] 2839 	mov	r6,#0x00
      00080E AC 5F            [24] 2840 	mov	r4,(_ReadCompass_Data_1_134 + 0x0001)
      000810 7D 00            [12] 2841 	mov	r5,#0x00
      000812 EC               [12] 2842 	mov	a,r4
      000813 4E               [12] 2843 	orl	a,r6
      000814 F5 82            [12] 2844 	mov	dpl,a
      000816 ED               [12] 2845 	mov	a,r5
      000817 4F               [12] 2846 	orl	a,r7
      000818 F5 83            [12] 2847 	mov	dph,a
                           000732  2848 	C$lab6.c$185$1$134 ==.
                                   2849 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:185: return Crange;
                           000732  2850 	C$lab6.c$186$1$134 ==.
                           000732  2851 	XG$ReadCompass$0$0 ==.
      00081A 22               [24] 2852 	ret
                                   2853 ;------------------------------------------------------------
                                   2854 ;Allocation info for local variables in function 'Rudder_cal'
                                   2855 ;------------------------------------------------------------
                                   2856 ;st                        Allocated to registers r3 
                                   2857 ;value                     Allocated to registers r6 r7 
                                   2858 ;times                     Allocated to registers r4 r5 
                                   2859 ;------------------------------------------------------------
                           000733  2860 	G$Rudder_cal$0$0 ==.
                           000733  2861 	C$lab6.c$188$1$134 ==.
                                   2862 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:188: void Rudder_cal(void)
                                   2863 ;	-----------------------------------------
                                   2864 ;	 function Rudder_cal
                                   2865 ;	-----------------------------------------
      00081B                       2866 _Rudder_cal:
                           000733  2867 	C$lab6.c$191$1$134 ==.
                                   2868 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:191: int value =0;
                           000733  2869 	C$lab6.c$192$1$134 ==.
                                   2870 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:192: int times =0;
                           000733  2871 	C$lab6.c$193$1$136 ==.
                                   2872 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:193: count =0;
      00081B E4               [12] 2873 	clr	a
      00081C FE               [12] 2874 	mov	r6,a
      00081D FF               [12] 2875 	mov	r7,a
      00081E FC               [12] 2876 	mov	r4,a
      00081F FD               [12] 2877 	mov	r5,a
      000820 F5 32            [12] 2878 	mov	_count,a
      000822 F5 33            [12] 2879 	mov	(_count + 1),a
                           00073C  2880 	C$lab6.c$194$1$136 ==.
                                   2881 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:194: lcd_clear();
      000824 C0 07            [24] 2882 	push	ar7
      000826 C0 06            [24] 2883 	push	ar6
      000828 C0 05            [24] 2884 	push	ar5
      00082A C0 04            [24] 2885 	push	ar4
      00082C 12 01 C9         [24] 2886 	lcall	_lcd_clear
                           000747  2887 	C$lab6.c$195$1$136 ==.
                                   2888 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:195: lcd_print("Rudder Calibration");
      00082F 74 3C            [12] 2889 	mov	a,#___str_6
      000831 C0 E0            [24] 2890 	push	acc
      000833 74 1F            [12] 2891 	mov	a,#(___str_6 >> 8)
      000835 C0 E0            [24] 2892 	push	acc
      000837 74 80            [12] 2893 	mov	a,#0x80
      000839 C0 E0            [24] 2894 	push	acc
      00083B 12 01 44         [24] 2895 	lcall	_lcd_print
      00083E 15 81            [12] 2896 	dec	sp
      000840 15 81            [12] 2897 	dec	sp
      000842 15 81            [12] 2898 	dec	sp
      000844 D0 04            [24] 2899 	pop	ar4
      000846 D0 05            [24] 2900 	pop	ar5
      000848 D0 06            [24] 2901 	pop	ar6
      00084A D0 07            [24] 2902 	pop	ar7
                           000764  2903 	C$lab6.c$196$1$136 ==.
                                   2904 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:196: while (count < 50);
      00084C                       2905 00101$:
      00084C C3               [12] 2906 	clr	c
      00084D E5 32            [12] 2907 	mov	a,_count
      00084F 94 32            [12] 2908 	subb	a,#0x32
      000851 E5 33            [12] 2909 	mov	a,(_count + 1)
      000853 64 80            [12] 2910 	xrl	a,#0x80
      000855 94 80            [12] 2911 	subb	a,#0x80
      000857 40 F3            [24] 2912 	jc	00101$
                           000771  2913 	C$lab6.c$197$1$136 ==.
                                   2914 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:197: lcd_clear();
      000859 C0 07            [24] 2915 	push	ar7
      00085B C0 06            [24] 2916 	push	ar6
      00085D C0 05            [24] 2917 	push	ar5
      00085F C0 04            [24] 2918 	push	ar4
      000861 12 01 C9         [24] 2919 	lcall	_lcd_clear
      000864 D0 04            [24] 2920 	pop	ar4
      000866 D0 05            [24] 2921 	pop	ar5
      000868 D0 06            [24] 2922 	pop	ar6
      00086A D0 07            [24] 2923 	pop	ar7
                           000784  2924 	C$lab6.c$201$2$137 ==.
                                   2925 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:201: count =0;
      00086C E4               [12] 2926 	clr	a
      00086D F5 32            [12] 2927 	mov	_count,a
      00086F F5 33            [12] 2928 	mov	(_count + 1),a
                           000789  2929 	C$lab6.c$202$2$137 ==.
                                   2930 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:202: while (count < 1);
      000871                       2931 00104$:
      000871 C3               [12] 2932 	clr	c
      000872 E5 32            [12] 2933 	mov	a,_count
      000874 94 01            [12] 2934 	subb	a,#0x01
      000876 E5 33            [12] 2935 	mov	a,(_count + 1)
      000878 64 80            [12] 2936 	xrl	a,#0x80
      00087A 94 80            [12] 2937 	subb	a,#0x80
      00087C 40 F3            [24] 2938 	jc	00104$
                           000796  2939 	C$lab6.c$203$2$137 ==.
                                   2940 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:203: lcd_clear();
      00087E C0 07            [24] 2941 	push	ar7
      000880 C0 06            [24] 2942 	push	ar6
      000882 C0 05            [24] 2943 	push	ar5
      000884 C0 04            [24] 2944 	push	ar4
      000886 12 01 C9         [24] 2945 	lcall	_lcd_clear
                           0007A1  2946 	C$lab6.c$204$2$137 ==.
                                   2947 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:204: lcd_print("go left: press 1\n go right: press 2\nPress * for next screen");
      000889 74 4F            [12] 2948 	mov	a,#___str_7
      00088B C0 E0            [24] 2949 	push	acc
      00088D 74 1F            [12] 2950 	mov	a,#(___str_7 >> 8)
      00088F C0 E0            [24] 2951 	push	acc
      000891 74 80            [12] 2952 	mov	a,#0x80
      000893 C0 E0            [24] 2953 	push	acc
      000895 12 01 44         [24] 2954 	lcall	_lcd_print
      000898 15 81            [12] 2955 	dec	sp
      00089A 15 81            [12] 2956 	dec	sp
      00089C 15 81            [12] 2957 	dec	sp
                           0007B6  2958 	C$lab6.c$205$2$137 ==.
                                   2959 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:205: start();
      00089E 12 12 FC         [24] 2960 	lcall	_start
                           0007B9  2961 	C$lab6.c$206$2$137 ==.
                                   2962 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:206: lcd_clear();
      0008A1 12 01 C9         [24] 2963 	lcall	_lcd_clear
                           0007BC  2964 	C$lab6.c$207$2$137 ==.
                                   2965 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:207: lcd_print("\n confirm: press 3\n press * to begin");
      0008A4 74 8B            [12] 2966 	mov	a,#___str_8
      0008A6 C0 E0            [24] 2967 	push	acc
      0008A8 74 1F            [12] 2968 	mov	a,#(___str_8 >> 8)
      0008AA C0 E0            [24] 2969 	push	acc
      0008AC 74 80            [12] 2970 	mov	a,#0x80
      0008AE C0 E0            [24] 2971 	push	acc
      0008B0 12 01 44         [24] 2972 	lcall	_lcd_print
      0008B3 15 81            [12] 2973 	dec	sp
      0008B5 15 81            [12] 2974 	dec	sp
      0008B7 15 81            [12] 2975 	dec	sp
                           0007D1  2976 	C$lab6.c$208$2$137 ==.
                                   2977 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:208: start();
      0008B9 12 12 FC         [24] 2978 	lcall	_start
      0008BC D0 04            [24] 2979 	pop	ar4
      0008BE D0 05            [24] 2980 	pop	ar5
      0008C0 D0 06            [24] 2981 	pop	ar6
      0008C2 D0 07            [24] 2982 	pop	ar7
                           0007DC  2983 	C$lab6.c$209$2$137 ==.
                                   2984 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:209: st =0;
      0008C4 7B 00            [12] 2985 	mov	r3,#0x00
                           0007DE  2986 	C$lab6.c$210$5$140 ==.
                                   2987 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:210: while (1)
      0008C6                       2988 00146$:
                           0007DE  2989 	C$lab6.c$212$3$138 ==.
                                   2990 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:212: printf("\r\n %u",RUDDER_PW);
      0008C6 C0 07            [24] 2991 	push	ar7
      0008C8 C0 06            [24] 2992 	push	ar6
      0008CA C0 05            [24] 2993 	push	ar5
      0008CC C0 04            [24] 2994 	push	ar4
      0008CE C0 03            [24] 2995 	push	ar3
      0008D0 C0 46            [24] 2996 	push	_RUDDER_PW
      0008D2 C0 47            [24] 2997 	push	(_RUDDER_PW + 1)
      0008D4 74 B0            [12] 2998 	mov	a,#___str_9
      0008D6 C0 E0            [24] 2999 	push	acc
      0008D8 74 1F            [12] 3000 	mov	a,#(___str_9 >> 8)
      0008DA C0 E0            [24] 3001 	push	acc
      0008DC 74 80            [12] 3002 	mov	a,#0x80
      0008DE C0 E0            [24] 3003 	push	acc
      0008E0 12 16 A1         [24] 3004 	lcall	_printf
      0008E3 E5 81            [12] 3005 	mov	a,sp
      0008E5 24 FB            [12] 3006 	add	a,#0xfb
      0008E7 F5 81            [12] 3007 	mov	sp,a
      0008E9 D0 03            [24] 3008 	pop	ar3
      0008EB D0 04            [24] 3009 	pop	ar4
      0008ED D0 05            [24] 3010 	pop	ar5
      0008EF D0 06            [24] 3011 	pop	ar6
      0008F1 D0 07            [24] 3012 	pop	ar7
                           00080B  3013 	C$lab6.c$213$3$138 ==.
                                   3014 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:213: RDR_lo_to_hi = 0xFFFF - RUDDER_PW;
      0008F3 74 FF            [12] 3015 	mov	a,#0xFF
      0008F5 C3               [12] 3016 	clr	c
      0008F6 95 46            [12] 3017 	subb	a,_RUDDER_PW
      0008F8 F5 48            [12] 3018 	mov	_RDR_lo_to_hi,a
      0008FA 74 FF            [12] 3019 	mov	a,#0xFF
      0008FC 95 47            [12] 3020 	subb	a,(_RUDDER_PW + 1)
      0008FE F5 49            [12] 3021 	mov	(_RDR_lo_to_hi + 1),a
                           000818  3022 	C$lab6.c$214$3$138 ==.
                                   3023 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:214: PCA0CP0 = RDR_lo_to_hi;
      000900 85 48 EA         [24] 3024 	mov	((_PCA0CP0 >> 0) & 0xFF),_RDR_lo_to_hi
      000903 85 49 FA         [24] 3025 	mov	((_PCA0CP0 >> 8) & 0xFF),(_RDR_lo_to_hi + 1)
                           00081E  3026 	C$lab6.c$216$3$138 ==.
                                   3027 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:216: if (times == 0 )
      000906 EC               [12] 3028 	mov	a,r4
      000907 4D               [12] 3029 	orl	a,r5
      000908 60 03            [24] 3030 	jz	00215$
      00090A 02 09 9C         [24] 3031 	ljmp	00143$
      00090D                       3032 00215$:
                           000825  3033 	C$lab6.c$218$4$139 ==.
                                   3034 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:218: if (value ==0)
      00090D EE               [12] 3035 	mov	a,r6
      00090E 4F               [12] 3036 	orl	a,r7
      00090F 70 2F            [24] 3037 	jnz	00110$
                           000829  3038 	C$lab6.c$220$5$140 ==.
                                   3039 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:220: lcd_clear();
      000911 C0 05            [24] 3040 	push	ar5
      000913 C0 04            [24] 3041 	push	ar4
      000915 C0 03            [24] 3042 	push	ar3
      000917 12 01 C9         [24] 3043 	lcall	_lcd_clear
                           000832  3044 	C$lab6.c$221$5$140 ==.
                                   3045 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:221: lcd_print("Now calibrating Min_PW\n");
      00091A 74 B6            [12] 3046 	mov	a,#___str_10
      00091C C0 E0            [24] 3047 	push	acc
      00091E 74 1F            [12] 3048 	mov	a,#(___str_10 >> 8)
      000920 C0 E0            [24] 3049 	push	acc
      000922 74 80            [12] 3050 	mov	a,#0x80
      000924 C0 E0            [24] 3051 	push	acc
      000926 12 01 44         [24] 3052 	lcall	_lcd_print
      000929 15 81            [12] 3053 	dec	sp
      00092B 15 81            [12] 3054 	dec	sp
      00092D 15 81            [12] 3055 	dec	sp
      00092F D0 03            [24] 3056 	pop	ar3
      000931 D0 04            [24] 3057 	pop	ar4
      000933 D0 05            [24] 3058 	pop	ar5
                           00084D  3059 	C$lab6.c$222$5$140 ==.
                                   3060 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:222: if (st ==0 ) RUDDER_PW = PW_LEFT_RUDDER;
      000935 EB               [12] 3061 	mov	a,r3
      000936 70 06            [24] 3062 	jnz	00108$
      000938 85 3A 46         [24] 3063 	mov	_RUDDER_PW,_PW_LEFT_RUDDER
      00093B 85 3B 47         [24] 3064 	mov	(_RUDDER_PW + 1),(_PW_LEFT_RUDDER + 1)
      00093E                       3065 00108$:
                           000856  3066 	C$lab6.c$223$5$140 ==.
                                   3067 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:223: st =1;
      00093E 7B 01            [12] 3068 	mov	r3,#0x01
      000940                       3069 00110$:
                           000858  3070 	C$lab6.c$225$4$139 ==.
                                   3071 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:225: value = kpd_input(1);
      000940 75 82 01         [24] 3072 	mov	dpl,#0x01
      000943 C0 05            [24] 3073 	push	ar5
      000945 C0 04            [24] 3074 	push	ar4
      000947 C0 03            [24] 3075 	push	ar3
      000949 12 02 81         [24] 3076 	lcall	_kpd_input
      00094C AE 82            [24] 3077 	mov	r6,dpl
      00094E AF 83            [24] 3078 	mov	r7,dph
      000950 D0 03            [24] 3079 	pop	ar3
      000952 D0 04            [24] 3080 	pop	ar4
      000954 D0 05            [24] 3081 	pop	ar5
                           00086E  3082 	C$lab6.c$226$4$139 ==.
                                   3083 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:226: if (value == 1)
      000956 BE 01 12         [24] 3084 	cjne	r6,#0x01,00117$
      000959 BF 00 0F         [24] 3085 	cjne	r7,#0x00,00117$
                           000874  3086 	C$lab6.c$228$5$141 ==.
                                   3087 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:228: RUDDER_PW -= 20;
      00095C E5 46            [12] 3088 	mov	a,_RUDDER_PW
      00095E 24 EC            [12] 3089 	add	a,#0xEC
      000960 F5 46            [12] 3090 	mov	_RUDDER_PW,a
      000962 E5 47            [12] 3091 	mov	a,(_RUDDER_PW + 1)
      000964 34 FF            [12] 3092 	addc	a,#0xFF
      000966 F5 47            [12] 3093 	mov	(_RUDDER_PW + 1),a
      000968 02 08 C6         [24] 3094 	ljmp	00146$
      00096B                       3095 00117$:
                           000883  3096 	C$lab6.c$230$4$139 ==.
                                   3097 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:230: else if (value==2)
      00096B BE 02 11         [24] 3098 	cjne	r6,#0x02,00114$
      00096E BF 00 0E         [24] 3099 	cjne	r7,#0x00,00114$
                           000889  3100 	C$lab6.c$232$5$142 ==.
                                   3101 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:232: RUDDER_PW += 20;
      000971 74 14            [12] 3102 	mov	a,#0x14
      000973 25 46            [12] 3103 	add	a,_RUDDER_PW
      000975 F5 46            [12] 3104 	mov	_RUDDER_PW,a
      000977 E4               [12] 3105 	clr	a
      000978 35 47            [12] 3106 	addc	a,(_RUDDER_PW + 1)
      00097A F5 47            [12] 3107 	mov	(_RUDDER_PW + 1),a
      00097C 02 08 C6         [24] 3108 	ljmp	00146$
      00097F                       3109 00114$:
                           000897  3110 	C$lab6.c$234$4$139 ==.
                                   3111 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:234: else if (value == 3)
      00097F BE 03 05         [24] 3112 	cjne	r6,#0x03,00222$
      000982 BF 00 02         [24] 3113 	cjne	r7,#0x00,00222$
      000985 80 03            [24] 3114 	sjmp	00223$
      000987                       3115 00222$:
      000987 02 08 C6         [24] 3116 	ljmp	00146$
      00098A                       3117 00223$:
                           0008A2  3118 	C$lab6.c$236$5$143 ==.
                                   3119 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:236: times++;
      00098A 0C               [12] 3120 	inc	r4
      00098B BC 00 01         [24] 3121 	cjne	r4,#0x00,00224$
      00098E 0D               [12] 3122 	inc	r5
      00098F                       3123 00224$:
                           0008A7  3124 	C$lab6.c$237$5$143 ==.
                                   3125 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:237: value =0;
      00098F 7E 00            [12] 3126 	mov	r6,#0x00
      000991 7F 00            [12] 3127 	mov	r7,#0x00
                           0008AB  3128 	C$lab6.c$238$5$143 ==.
                                   3129 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:238: PW_LEFT_RUDDER = RUDDER_PW;
      000993 85 46 3A         [24] 3130 	mov	_PW_LEFT_RUDDER,_RUDDER_PW
      000996 85 47 3B         [24] 3131 	mov	(_PW_LEFT_RUDDER + 1),(_RUDDER_PW + 1)
      000999 02 08 C6         [24] 3132 	ljmp	00146$
      00099C                       3133 00143$:
                           0008B4  3134 	C$lab6.c$241$3$138 ==.
                                   3135 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:241: else if (times ==1)
      00099C BC 01 05         [24] 3136 	cjne	r4,#0x01,00225$
      00099F BD 00 02         [24] 3137 	cjne	r5,#0x00,00225$
      0009A2 80 03            [24] 3138 	sjmp	00226$
      0009A4                       3139 00225$:
      0009A4 02 0A 31         [24] 3140 	ljmp	00140$
      0009A7                       3141 00226$:
                           0008BF  3142 	C$lab6.c$243$4$144 ==.
                                   3143 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:243: if (value ==0)
      0009A7 EE               [12] 3144 	mov	a,r6
      0009A8 4F               [12] 3145 	orl	a,r7
      0009A9 70 2A            [24] 3146 	jnz	00120$
                           0008C3  3147 	C$lab6.c$245$5$145 ==.
                                   3148 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:245: lcd_clear();
      0009AB C0 05            [24] 3149 	push	ar5
      0009AD C0 04            [24] 3150 	push	ar4
      0009AF C0 03            [24] 3151 	push	ar3
      0009B1 12 01 C9         [24] 3152 	lcall	_lcd_clear
                           0008CC  3153 	C$lab6.c$246$5$145 ==.
                                   3154 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:246: lcd_print("Now calibrating Cen_PW");
      0009B4 74 CE            [12] 3155 	mov	a,#___str_11
      0009B6 C0 E0            [24] 3156 	push	acc
      0009B8 74 1F            [12] 3157 	mov	a,#(___str_11 >> 8)
      0009BA C0 E0            [24] 3158 	push	acc
      0009BC 74 80            [12] 3159 	mov	a,#0x80
      0009BE C0 E0            [24] 3160 	push	acc
      0009C0 12 01 44         [24] 3161 	lcall	_lcd_print
      0009C3 15 81            [12] 3162 	dec	sp
      0009C5 15 81            [12] 3163 	dec	sp
      0009C7 15 81            [12] 3164 	dec	sp
      0009C9 D0 03            [24] 3165 	pop	ar3
      0009CB D0 04            [24] 3166 	pop	ar4
      0009CD D0 05            [24] 3167 	pop	ar5
                           0008E7  3168 	C$lab6.c$247$5$145 ==.
                                   3169 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:247: RUDDER_PW = PW_CENTER_RUDDER;
      0009CF 85 3C 46         [24] 3170 	mov	_RUDDER_PW,_PW_CENTER_RUDDER
      0009D2 85 3D 47         [24] 3171 	mov	(_RUDDER_PW + 1),(_PW_CENTER_RUDDER + 1)
      0009D5                       3172 00120$:
                           0008ED  3173 	C$lab6.c$249$4$144 ==.
                                   3174 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:249: value = kpd_input(1);
      0009D5 75 82 01         [24] 3175 	mov	dpl,#0x01
      0009D8 C0 05            [24] 3176 	push	ar5
      0009DA C0 04            [24] 3177 	push	ar4
      0009DC C0 03            [24] 3178 	push	ar3
      0009DE 12 02 81         [24] 3179 	lcall	_kpd_input
      0009E1 AE 82            [24] 3180 	mov	r6,dpl
      0009E3 AF 83            [24] 3181 	mov	r7,dph
      0009E5 D0 03            [24] 3182 	pop	ar3
      0009E7 D0 04            [24] 3183 	pop	ar4
      0009E9 D0 05            [24] 3184 	pop	ar5
                           000903  3185 	C$lab6.c$250$4$144 ==.
                                   3186 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:250: if (value == 1)
      0009EB BE 01 12         [24] 3187 	cjne	r6,#0x01,00127$
      0009EE BF 00 0F         [24] 3188 	cjne	r7,#0x00,00127$
                           000909  3189 	C$lab6.c$252$5$146 ==.
                                   3190 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:252: RUDDER_PW -= 20;
      0009F1 E5 46            [12] 3191 	mov	a,_RUDDER_PW
      0009F3 24 EC            [12] 3192 	add	a,#0xEC
      0009F5 F5 46            [12] 3193 	mov	_RUDDER_PW,a
      0009F7 E5 47            [12] 3194 	mov	a,(_RUDDER_PW + 1)
      0009F9 34 FF            [12] 3195 	addc	a,#0xFF
      0009FB F5 47            [12] 3196 	mov	(_RUDDER_PW + 1),a
      0009FD 02 08 C6         [24] 3197 	ljmp	00146$
      000A00                       3198 00127$:
                           000918  3199 	C$lab6.c$254$4$144 ==.
                                   3200 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:254: else if (value==2)
      000A00 BE 02 11         [24] 3201 	cjne	r6,#0x02,00124$
      000A03 BF 00 0E         [24] 3202 	cjne	r7,#0x00,00124$
                           00091E  3203 	C$lab6.c$256$5$147 ==.
                                   3204 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:256: RUDDER_PW += 20;
      000A06 74 14            [12] 3205 	mov	a,#0x14
      000A08 25 46            [12] 3206 	add	a,_RUDDER_PW
      000A0A F5 46            [12] 3207 	mov	_RUDDER_PW,a
      000A0C E4               [12] 3208 	clr	a
      000A0D 35 47            [12] 3209 	addc	a,(_RUDDER_PW + 1)
      000A0F F5 47            [12] 3210 	mov	(_RUDDER_PW + 1),a
      000A11 02 08 C6         [24] 3211 	ljmp	00146$
      000A14                       3212 00124$:
                           00092C  3213 	C$lab6.c$258$4$144 ==.
                                   3214 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:258: else if (value == 3)
      000A14 BE 03 05         [24] 3215 	cjne	r6,#0x03,00232$
      000A17 BF 00 02         [24] 3216 	cjne	r7,#0x00,00232$
      000A1A 80 03            [24] 3217 	sjmp	00233$
      000A1C                       3218 00232$:
      000A1C 02 08 C6         [24] 3219 	ljmp	00146$
      000A1F                       3220 00233$:
                           000937  3221 	C$lab6.c$260$5$148 ==.
                                   3222 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:260: times++;
      000A1F 0C               [12] 3223 	inc	r4
      000A20 BC 00 01         [24] 3224 	cjne	r4,#0x00,00234$
      000A23 0D               [12] 3225 	inc	r5
      000A24                       3226 00234$:
                           00093C  3227 	C$lab6.c$261$5$148 ==.
                                   3228 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:261: value=0;
      000A24 7E 00            [12] 3229 	mov	r6,#0x00
      000A26 7F 00            [12] 3230 	mov	r7,#0x00
                           000940  3231 	C$lab6.c$262$5$148 ==.
                                   3232 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:262: PW_CENTER_RUDDER = RUDDER_PW;
      000A28 85 46 3C         [24] 3233 	mov	_PW_CENTER_RUDDER,_RUDDER_PW
      000A2B 85 47 3D         [24] 3234 	mov	(_PW_CENTER_RUDDER + 1),(_RUDDER_PW + 1)
      000A2E 02 08 C6         [24] 3235 	ljmp	00146$
      000A31                       3236 00140$:
                           000949  3237 	C$lab6.c$267$4$149 ==.
                                   3238 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:267: if (value==0)
      000A31 EE               [12] 3239 	mov	a,r6
      000A32 4F               [12] 3240 	orl	a,r7
      000A33 70 2A            [24] 3241 	jnz	00130$
                           00094D  3242 	C$lab6.c$269$5$150 ==.
                                   3243 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:269: lcd_clear();
      000A35 C0 05            [24] 3244 	push	ar5
      000A37 C0 04            [24] 3245 	push	ar4
      000A39 C0 03            [24] 3246 	push	ar3
      000A3B 12 01 C9         [24] 3247 	lcall	_lcd_clear
                           000956  3248 	C$lab6.c$270$5$150 ==.
                                   3249 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:270: lcd_print("Now calibrating Max_PW");
      000A3E 74 E5            [12] 3250 	mov	a,#___str_12
      000A40 C0 E0            [24] 3251 	push	acc
      000A42 74 1F            [12] 3252 	mov	a,#(___str_12 >> 8)
      000A44 C0 E0            [24] 3253 	push	acc
      000A46 74 80            [12] 3254 	mov	a,#0x80
      000A48 C0 E0            [24] 3255 	push	acc
      000A4A 12 01 44         [24] 3256 	lcall	_lcd_print
      000A4D 15 81            [12] 3257 	dec	sp
      000A4F 15 81            [12] 3258 	dec	sp
      000A51 15 81            [12] 3259 	dec	sp
      000A53 D0 03            [24] 3260 	pop	ar3
      000A55 D0 04            [24] 3261 	pop	ar4
      000A57 D0 05            [24] 3262 	pop	ar5
                           000971  3263 	C$lab6.c$271$5$150 ==.
                                   3264 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:271: RUDDER_PW = PW_RIGHT_RUDDER;
      000A59 85 3E 46         [24] 3265 	mov	_RUDDER_PW,_PW_RIGHT_RUDDER
      000A5C 85 3F 47         [24] 3266 	mov	(_RUDDER_PW + 1),(_PW_RIGHT_RUDDER + 1)
      000A5F                       3267 00130$:
                           000977  3268 	C$lab6.c$273$4$149 ==.
                                   3269 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:273: value = kpd_input(1);
      000A5F 75 82 01         [24] 3270 	mov	dpl,#0x01
      000A62 C0 05            [24] 3271 	push	ar5
      000A64 C0 04            [24] 3272 	push	ar4
      000A66 C0 03            [24] 3273 	push	ar3
      000A68 12 02 81         [24] 3274 	lcall	_kpd_input
      000A6B AE 82            [24] 3275 	mov	r6,dpl
      000A6D AF 83            [24] 3276 	mov	r7,dph
      000A6F D0 03            [24] 3277 	pop	ar3
      000A71 D0 04            [24] 3278 	pop	ar4
      000A73 D0 05            [24] 3279 	pop	ar5
                           00098D  3280 	C$lab6.c$274$4$149 ==.
                                   3281 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:274: if (value == 1)
      000A75 BE 01 12         [24] 3282 	cjne	r6,#0x01,00137$
      000A78 BF 00 0F         [24] 3283 	cjne	r7,#0x00,00137$
                           000993  3284 	C$lab6.c$276$5$151 ==.
                                   3285 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:276: RUDDER_PW -= 20;
      000A7B E5 46            [12] 3286 	mov	a,_RUDDER_PW
      000A7D 24 EC            [12] 3287 	add	a,#0xEC
      000A7F F5 46            [12] 3288 	mov	_RUDDER_PW,a
      000A81 E5 47            [12] 3289 	mov	a,(_RUDDER_PW + 1)
      000A83 34 FF            [12] 3290 	addc	a,#0xFF
      000A85 F5 47            [12] 3291 	mov	(_RUDDER_PW + 1),a
      000A87 02 08 C6         [24] 3292 	ljmp	00146$
      000A8A                       3293 00137$:
                           0009A2  3294 	C$lab6.c$278$4$149 ==.
                                   3295 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:278: else if (value==2)
      000A8A BE 02 11         [24] 3296 	cjne	r6,#0x02,00134$
      000A8D BF 00 0E         [24] 3297 	cjne	r7,#0x00,00134$
                           0009A8  3298 	C$lab6.c$280$5$152 ==.
                                   3299 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:280: RUDDER_PW += 20;
      000A90 74 14            [12] 3300 	mov	a,#0x14
      000A92 25 46            [12] 3301 	add	a,_RUDDER_PW
      000A94 F5 46            [12] 3302 	mov	_RUDDER_PW,a
      000A96 E4               [12] 3303 	clr	a
      000A97 35 47            [12] 3304 	addc	a,(_RUDDER_PW + 1)
      000A99 F5 47            [12] 3305 	mov	(_RUDDER_PW + 1),a
      000A9B 02 08 C6         [24] 3306 	ljmp	00146$
      000A9E                       3307 00134$:
                           0009B6  3308 	C$lab6.c$282$4$149 ==.
                                   3309 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:282: else if (value == 3)
      000A9E BE 03 05         [24] 3310 	cjne	r6,#0x03,00240$
      000AA1 BF 00 02         [24] 3311 	cjne	r7,#0x00,00240$
      000AA4 80 03            [24] 3312 	sjmp	00241$
      000AA6                       3313 00240$:
      000AA6 02 08 C6         [24] 3314 	ljmp	00146$
      000AA9                       3315 00241$:
                           0009C1  3316 	C$lab6.c$284$5$153 ==.
                                   3317 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:284: PW_RIGHT_RUDDER = RUDDER_PW;
      000AA9 85 46 3E         [24] 3318 	mov	_PW_RIGHT_RUDDER,_RUDDER_PW
      000AAC 85 47 3F         [24] 3319 	mov	(_PW_RIGHT_RUDDER + 1),(_RUDDER_PW + 1)
                           0009C7  3320 	C$lab6.c$285$5$153 ==.
                                   3321 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:285: return;
                           0009C7  3322 	C$lab6.c$294$1$136 ==.
                           0009C7  3323 	XG$Rudder_cal$0$0 ==.
      000AAF 22               [24] 3324 	ret
                                   3325 ;------------------------------------------------------------
                                   3326 ;Allocation info for local variables in function 'Angle_cal'
                                   3327 ;------------------------------------------------------------
                                   3328 ;st                        Allocated to registers r3 
                                   3329 ;value                     Allocated to registers r6 r7 
                                   3330 ;times                     Allocated to registers r4 r5 
                                   3331 ;------------------------------------------------------------
                           0009C8  3332 	G$Angle_cal$0$0 ==.
                           0009C8  3333 	C$lab6.c$296$1$136 ==.
                                   3334 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:296: void Angle_cal(void)
                                   3335 ;	-----------------------------------------
                                   3336 ;	 function Angle_cal
                                   3337 ;	-----------------------------------------
      000AB0                       3338 _Angle_cal:
                           0009C8  3339 	C$lab6.c$299$1$136 ==.
                                   3340 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:299: int value =0;
                           0009C8  3341 	C$lab6.c$300$1$136 ==.
                                   3342 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:300: int times =0;
                           0009C8  3343 	C$lab6.c$301$1$155 ==.
                                   3344 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:301: count =0;
      000AB0 E4               [12] 3345 	clr	a
      000AB1 FE               [12] 3346 	mov	r6,a
      000AB2 FF               [12] 3347 	mov	r7,a
      000AB3 FC               [12] 3348 	mov	r4,a
      000AB4 FD               [12] 3349 	mov	r5,a
      000AB5 F5 32            [12] 3350 	mov	_count,a
      000AB7 F5 33            [12] 3351 	mov	(_count + 1),a
                           0009D1  3352 	C$lab6.c$302$1$155 ==.
                                   3353 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:302: lcd_clear();
      000AB9 C0 07            [24] 3354 	push	ar7
      000ABB C0 06            [24] 3355 	push	ar6
      000ABD C0 05            [24] 3356 	push	ar5
      000ABF C0 04            [24] 3357 	push	ar4
      000AC1 12 01 C9         [24] 3358 	lcall	_lcd_clear
                           0009DC  3359 	C$lab6.c$303$1$155 ==.
                                   3360 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:303: lcd_print("Angle Calibration");
      000AC4 74 FC            [12] 3361 	mov	a,#___str_13
      000AC6 C0 E0            [24] 3362 	push	acc
      000AC8 74 1F            [12] 3363 	mov	a,#(___str_13 >> 8)
      000ACA C0 E0            [24] 3364 	push	acc
      000ACC 74 80            [12] 3365 	mov	a,#0x80
      000ACE C0 E0            [24] 3366 	push	acc
      000AD0 12 01 44         [24] 3367 	lcall	_lcd_print
      000AD3 15 81            [12] 3368 	dec	sp
      000AD5 15 81            [12] 3369 	dec	sp
      000AD7 15 81            [12] 3370 	dec	sp
      000AD9 D0 04            [24] 3371 	pop	ar4
      000ADB D0 05            [24] 3372 	pop	ar5
      000ADD D0 06            [24] 3373 	pop	ar6
      000ADF D0 07            [24] 3374 	pop	ar7
                           0009F9  3375 	C$lab6.c$304$1$155 ==.
                                   3376 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:304: while (count < 50);
      000AE1                       3377 00101$:
      000AE1 C3               [12] 3378 	clr	c
      000AE2 E5 32            [12] 3379 	mov	a,_count
      000AE4 94 32            [12] 3380 	subb	a,#0x32
      000AE6 E5 33            [12] 3381 	mov	a,(_count + 1)
      000AE8 64 80            [12] 3382 	xrl	a,#0x80
      000AEA 94 80            [12] 3383 	subb	a,#0x80
      000AEC 40 F3            [24] 3384 	jc	00101$
                           000A06  3385 	C$lab6.c$305$1$155 ==.
                                   3386 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:305: lcd_clear();
      000AEE C0 07            [24] 3387 	push	ar7
      000AF0 C0 06            [24] 3388 	push	ar6
      000AF2 C0 05            [24] 3389 	push	ar5
      000AF4 C0 04            [24] 3390 	push	ar4
      000AF6 12 01 C9         [24] 3391 	lcall	_lcd_clear
      000AF9 D0 04            [24] 3392 	pop	ar4
      000AFB D0 05            [24] 3393 	pop	ar5
      000AFD D0 06            [24] 3394 	pop	ar6
      000AFF D0 07            [24] 3395 	pop	ar7
                           000A19  3396 	C$lab6.c$308$2$156 ==.
                                   3397 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:308: count = 0;
      000B01 E4               [12] 3398 	clr	a
      000B02 F5 32            [12] 3399 	mov	_count,a
      000B04 F5 33            [12] 3400 	mov	(_count + 1),a
                           000A1E  3401 	C$lab6.c$309$2$156 ==.
                                   3402 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:309: while (count < 1);
      000B06                       3403 00104$:
      000B06 C3               [12] 3404 	clr	c
      000B07 E5 32            [12] 3405 	mov	a,_count
      000B09 94 01            [12] 3406 	subb	a,#0x01
      000B0B E5 33            [12] 3407 	mov	a,(_count + 1)
      000B0D 64 80            [12] 3408 	xrl	a,#0x80
      000B0F 94 80            [12] 3409 	subb	a,#0x80
      000B11 40 F3            [24] 3410 	jc	00104$
                           000A2B  3411 	C$lab6.c$310$2$156 ==.
                                   3412 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:310: lcd_clear();
      000B13 C0 07            [24] 3413 	push	ar7
      000B15 C0 06            [24] 3414 	push	ar6
      000B17 C0 05            [24] 3415 	push	ar5
      000B19 C0 04            [24] 3416 	push	ar4
      000B1B 12 01 C9         [24] 3417 	lcall	_lcd_clear
                           000A36  3418 	C$lab6.c$311$2$156 ==.
                                   3419 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:311: lcd_print("go left: press 1\n go right: press 2\nPress * for next screen");
      000B1E 74 4F            [12] 3420 	mov	a,#___str_7
      000B20 C0 E0            [24] 3421 	push	acc
      000B22 74 1F            [12] 3422 	mov	a,#(___str_7 >> 8)
      000B24 C0 E0            [24] 3423 	push	acc
      000B26 74 80            [12] 3424 	mov	a,#0x80
      000B28 C0 E0            [24] 3425 	push	acc
      000B2A 12 01 44         [24] 3426 	lcall	_lcd_print
      000B2D 15 81            [12] 3427 	dec	sp
      000B2F 15 81            [12] 3428 	dec	sp
      000B31 15 81            [12] 3429 	dec	sp
                           000A4B  3430 	C$lab6.c$312$2$156 ==.
                                   3431 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:312: start();
      000B33 12 12 FC         [24] 3432 	lcall	_start
                           000A4E  3433 	C$lab6.c$313$2$156 ==.
                                   3434 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:313: lcd_clear();
      000B36 12 01 C9         [24] 3435 	lcall	_lcd_clear
                           000A51  3436 	C$lab6.c$314$2$156 ==.
                                   3437 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:314: lcd_print("\n confirm: press 3\n press * to begin");
      000B39 74 8B            [12] 3438 	mov	a,#___str_8
      000B3B C0 E0            [24] 3439 	push	acc
      000B3D 74 1F            [12] 3440 	mov	a,#(___str_8 >> 8)
      000B3F C0 E0            [24] 3441 	push	acc
      000B41 74 80            [12] 3442 	mov	a,#0x80
      000B43 C0 E0            [24] 3443 	push	acc
      000B45 12 01 44         [24] 3444 	lcall	_lcd_print
      000B48 15 81            [12] 3445 	dec	sp
      000B4A 15 81            [12] 3446 	dec	sp
      000B4C 15 81            [12] 3447 	dec	sp
                           000A66  3448 	C$lab6.c$315$2$156 ==.
                                   3449 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:315: start();
      000B4E 12 12 FC         [24] 3450 	lcall	_start
      000B51 D0 04            [24] 3451 	pop	ar4
      000B53 D0 05            [24] 3452 	pop	ar5
      000B55 D0 06            [24] 3453 	pop	ar6
      000B57 D0 07            [24] 3454 	pop	ar7
                           000A71  3455 	C$lab6.c$316$2$156 ==.
                                   3456 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:316: st =0;
      000B59 7B 00            [12] 3457 	mov	r3,#0x00
                           000A73  3458 	C$lab6.c$317$5$159 ==.
                                   3459 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:317: while (1)
      000B5B                       3460 00146$:
                           000A73  3461 	C$lab6.c$319$3$157 ==.
                                   3462 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:319: printf("\r\n %u",ANGLE_PW);
      000B5B C0 07            [24] 3463 	push	ar7
      000B5D C0 06            [24] 3464 	push	ar6
      000B5F C0 05            [24] 3465 	push	ar5
      000B61 C0 04            [24] 3466 	push	ar4
      000B63 C0 03            [24] 3467 	push	ar3
      000B65 C0 4A            [24] 3468 	push	_ANGLE_PW
      000B67 C0 4B            [24] 3469 	push	(_ANGLE_PW + 1)
      000B69 74 B0            [12] 3470 	mov	a,#___str_9
      000B6B C0 E0            [24] 3471 	push	acc
      000B6D 74 1F            [12] 3472 	mov	a,#(___str_9 >> 8)
      000B6F C0 E0            [24] 3473 	push	acc
      000B71 74 80            [12] 3474 	mov	a,#0x80
      000B73 C0 E0            [24] 3475 	push	acc
      000B75 12 16 A1         [24] 3476 	lcall	_printf
      000B78 E5 81            [12] 3477 	mov	a,sp
      000B7A 24 FB            [12] 3478 	add	a,#0xfb
      000B7C F5 81            [12] 3479 	mov	sp,a
      000B7E D0 03            [24] 3480 	pop	ar3
      000B80 D0 04            [24] 3481 	pop	ar4
      000B82 D0 05            [24] 3482 	pop	ar5
      000B84 D0 06            [24] 3483 	pop	ar6
      000B86 D0 07            [24] 3484 	pop	ar7
                           000AA0  3485 	C$lab6.c$320$3$157 ==.
                                   3486 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:320: AGL_lo_to_hi = 0xFFFF - ANGLE_PW;
      000B88 74 FF            [12] 3487 	mov	a,#0xFF
      000B8A C3               [12] 3488 	clr	c
      000B8B 95 4A            [12] 3489 	subb	a,_ANGLE_PW
      000B8D F5 4C            [12] 3490 	mov	_AGL_lo_to_hi,a
      000B8F 74 FF            [12] 3491 	mov	a,#0xFF
      000B91 95 4B            [12] 3492 	subb	a,(_ANGLE_PW + 1)
      000B93 F5 4D            [12] 3493 	mov	(_AGL_lo_to_hi + 1),a
                           000AAD  3494 	C$lab6.c$321$3$157 ==.
                                   3495 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:321: PCA0CP1 = AGL_lo_to_hi;
      000B95 85 4C EB         [24] 3496 	mov	((_PCA0CP1 >> 0) & 0xFF),_AGL_lo_to_hi
      000B98 85 4D FB         [24] 3497 	mov	((_PCA0CP1 >> 8) & 0xFF),(_AGL_lo_to_hi + 1)
                           000AB3  3498 	C$lab6.c$323$3$157 ==.
                                   3499 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:323: if (times == 0 )
      000B9B EC               [12] 3500 	mov	a,r4
      000B9C 4D               [12] 3501 	orl	a,r5
      000B9D 60 03            [24] 3502 	jz	00215$
      000B9F 02 0C 31         [24] 3503 	ljmp	00143$
      000BA2                       3504 00215$:
                           000ABA  3505 	C$lab6.c$325$4$158 ==.
                                   3506 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:325: if (value ==0)
      000BA2 EE               [12] 3507 	mov	a,r6
      000BA3 4F               [12] 3508 	orl	a,r7
      000BA4 70 2F            [24] 3509 	jnz	00110$
                           000ABE  3510 	C$lab6.c$327$5$159 ==.
                                   3511 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:327: lcd_clear();
      000BA6 C0 05            [24] 3512 	push	ar5
      000BA8 C0 04            [24] 3513 	push	ar4
      000BAA C0 03            [24] 3514 	push	ar3
      000BAC 12 01 C9         [24] 3515 	lcall	_lcd_clear
                           000AC7  3516 	C$lab6.c$328$5$159 ==.
                                   3517 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:328: lcd_print("Now calibrating Min_PW UP ANGLE");
      000BAF 74 0E            [12] 3518 	mov	a,#___str_14
      000BB1 C0 E0            [24] 3519 	push	acc
      000BB3 74 20            [12] 3520 	mov	a,#(___str_14 >> 8)
      000BB5 C0 E0            [24] 3521 	push	acc
      000BB7 74 80            [12] 3522 	mov	a,#0x80
      000BB9 C0 E0            [24] 3523 	push	acc
      000BBB 12 01 44         [24] 3524 	lcall	_lcd_print
      000BBE 15 81            [12] 3525 	dec	sp
      000BC0 15 81            [12] 3526 	dec	sp
      000BC2 15 81            [12] 3527 	dec	sp
      000BC4 D0 03            [24] 3528 	pop	ar3
      000BC6 D0 04            [24] 3529 	pop	ar4
      000BC8 D0 05            [24] 3530 	pop	ar5
                           000AE2  3531 	C$lab6.c$329$5$159 ==.
                                   3532 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:329: if (st == 0) ANGLE_PW = PW_UP_ANGLE;
      000BCA EB               [12] 3533 	mov	a,r3
      000BCB 70 06            [24] 3534 	jnz	00108$
      000BCD 85 40 4A         [24] 3535 	mov	_ANGLE_PW,_PW_UP_ANGLE
      000BD0 85 41 4B         [24] 3536 	mov	(_ANGLE_PW + 1),(_PW_UP_ANGLE + 1)
      000BD3                       3537 00108$:
                           000AEB  3538 	C$lab6.c$330$5$159 ==.
                                   3539 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:330: st =1;
      000BD3 7B 01            [12] 3540 	mov	r3,#0x01
      000BD5                       3541 00110$:
                           000AED  3542 	C$lab6.c$332$4$158 ==.
                                   3543 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:332: value = kpd_input(1);
      000BD5 75 82 01         [24] 3544 	mov	dpl,#0x01
      000BD8 C0 05            [24] 3545 	push	ar5
      000BDA C0 04            [24] 3546 	push	ar4
      000BDC C0 03            [24] 3547 	push	ar3
      000BDE 12 02 81         [24] 3548 	lcall	_kpd_input
      000BE1 AE 82            [24] 3549 	mov	r6,dpl
      000BE3 AF 83            [24] 3550 	mov	r7,dph
      000BE5 D0 03            [24] 3551 	pop	ar3
      000BE7 D0 04            [24] 3552 	pop	ar4
      000BE9 D0 05            [24] 3553 	pop	ar5
                           000B03  3554 	C$lab6.c$333$4$158 ==.
                                   3555 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:333: if (value == 1)
      000BEB BE 01 12         [24] 3556 	cjne	r6,#0x01,00117$
      000BEE BF 00 0F         [24] 3557 	cjne	r7,#0x00,00117$
                           000B09  3558 	C$lab6.c$335$5$160 ==.
                                   3559 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:335: ANGLE_PW -= 30;
      000BF1 E5 4A            [12] 3560 	mov	a,_ANGLE_PW
      000BF3 24 E2            [12] 3561 	add	a,#0xE2
      000BF5 F5 4A            [12] 3562 	mov	_ANGLE_PW,a
      000BF7 E5 4B            [12] 3563 	mov	a,(_ANGLE_PW + 1)
      000BF9 34 FF            [12] 3564 	addc	a,#0xFF
      000BFB F5 4B            [12] 3565 	mov	(_ANGLE_PW + 1),a
      000BFD 02 0B 5B         [24] 3566 	ljmp	00146$
      000C00                       3567 00117$:
                           000B18  3568 	C$lab6.c$337$4$158 ==.
                                   3569 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:337: else if (value==2)
      000C00 BE 02 11         [24] 3570 	cjne	r6,#0x02,00114$
      000C03 BF 00 0E         [24] 3571 	cjne	r7,#0x00,00114$
                           000B1E  3572 	C$lab6.c$339$5$161 ==.
                                   3573 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:339: ANGLE_PW += 30;
      000C06 74 1E            [12] 3574 	mov	a,#0x1E
      000C08 25 4A            [12] 3575 	add	a,_ANGLE_PW
      000C0A F5 4A            [12] 3576 	mov	_ANGLE_PW,a
      000C0C E4               [12] 3577 	clr	a
      000C0D 35 4B            [12] 3578 	addc	a,(_ANGLE_PW + 1)
      000C0F F5 4B            [12] 3579 	mov	(_ANGLE_PW + 1),a
      000C11 02 0B 5B         [24] 3580 	ljmp	00146$
      000C14                       3581 00114$:
                           000B2C  3582 	C$lab6.c$341$4$158 ==.
                                   3583 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:341: else if (value == 3)
      000C14 BE 03 05         [24] 3584 	cjne	r6,#0x03,00222$
      000C17 BF 00 02         [24] 3585 	cjne	r7,#0x00,00222$
      000C1A 80 03            [24] 3586 	sjmp	00223$
      000C1C                       3587 00222$:
      000C1C 02 0B 5B         [24] 3588 	ljmp	00146$
      000C1F                       3589 00223$:
                           000B37  3590 	C$lab6.c$343$5$162 ==.
                                   3591 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:343: times++;
      000C1F 0C               [12] 3592 	inc	r4
      000C20 BC 00 01         [24] 3593 	cjne	r4,#0x00,00224$
      000C23 0D               [12] 3594 	inc	r5
      000C24                       3595 00224$:
                           000B3C  3596 	C$lab6.c$344$5$162 ==.
                                   3597 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:344: value =0;
      000C24 7E 00            [12] 3598 	mov	r6,#0x00
      000C26 7F 00            [12] 3599 	mov	r7,#0x00
                           000B40  3600 	C$lab6.c$345$5$162 ==.
                                   3601 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:345: PW_UP_ANGLE = ANGLE_PW;
      000C28 85 4A 40         [24] 3602 	mov	_PW_UP_ANGLE,_ANGLE_PW
      000C2B 85 4B 41         [24] 3603 	mov	(_PW_UP_ANGLE + 1),(_ANGLE_PW + 1)
      000C2E 02 0B 5B         [24] 3604 	ljmp	00146$
      000C31                       3605 00143$:
                           000B49  3606 	C$lab6.c$348$3$157 ==.
                                   3607 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:348: else if (times ==1)
      000C31 BC 01 05         [24] 3608 	cjne	r4,#0x01,00225$
      000C34 BD 00 02         [24] 3609 	cjne	r5,#0x00,00225$
      000C37 80 03            [24] 3610 	sjmp	00226$
      000C39                       3611 00225$:
      000C39 02 0C C6         [24] 3612 	ljmp	00140$
      000C3C                       3613 00226$:
                           000B54  3614 	C$lab6.c$350$4$163 ==.
                                   3615 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:350: if (value ==0)
      000C3C EE               [12] 3616 	mov	a,r6
      000C3D 4F               [12] 3617 	orl	a,r7
      000C3E 70 2A            [24] 3618 	jnz	00120$
                           000B58  3619 	C$lab6.c$352$5$164 ==.
                                   3620 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:352: lcd_clear();
      000C40 C0 05            [24] 3621 	push	ar5
      000C42 C0 04            [24] 3622 	push	ar4
      000C44 C0 03            [24] 3623 	push	ar3
      000C46 12 01 C9         [24] 3624 	lcall	_lcd_clear
                           000B61  3625 	C$lab6.c$353$5$164 ==.
                                   3626 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:353: lcd_print("Now calibrating Cen_PW");
      000C49 74 CE            [12] 3627 	mov	a,#___str_11
      000C4B C0 E0            [24] 3628 	push	acc
      000C4D 74 1F            [12] 3629 	mov	a,#(___str_11 >> 8)
      000C4F C0 E0            [24] 3630 	push	acc
      000C51 74 80            [12] 3631 	mov	a,#0x80
      000C53 C0 E0            [24] 3632 	push	acc
      000C55 12 01 44         [24] 3633 	lcall	_lcd_print
      000C58 15 81            [12] 3634 	dec	sp
      000C5A 15 81            [12] 3635 	dec	sp
      000C5C 15 81            [12] 3636 	dec	sp
      000C5E D0 03            [24] 3637 	pop	ar3
      000C60 D0 04            [24] 3638 	pop	ar4
      000C62 D0 05            [24] 3639 	pop	ar5
                           000B7C  3640 	C$lab6.c$354$5$164 ==.
                                   3641 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:354: ANGLE_PW = PW_CENTER_ANGLE;
      000C64 85 42 4A         [24] 3642 	mov	_ANGLE_PW,_PW_CENTER_ANGLE
      000C67 85 43 4B         [24] 3643 	mov	(_ANGLE_PW + 1),(_PW_CENTER_ANGLE + 1)
      000C6A                       3644 00120$:
                           000B82  3645 	C$lab6.c$356$4$163 ==.
                                   3646 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:356: value = kpd_input(1);
      000C6A 75 82 01         [24] 3647 	mov	dpl,#0x01
      000C6D C0 05            [24] 3648 	push	ar5
      000C6F C0 04            [24] 3649 	push	ar4
      000C71 C0 03            [24] 3650 	push	ar3
      000C73 12 02 81         [24] 3651 	lcall	_kpd_input
      000C76 AE 82            [24] 3652 	mov	r6,dpl
      000C78 AF 83            [24] 3653 	mov	r7,dph
      000C7A D0 03            [24] 3654 	pop	ar3
      000C7C D0 04            [24] 3655 	pop	ar4
      000C7E D0 05            [24] 3656 	pop	ar5
                           000B98  3657 	C$lab6.c$357$4$163 ==.
                                   3658 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:357: if (value == 1)
      000C80 BE 01 12         [24] 3659 	cjne	r6,#0x01,00127$
      000C83 BF 00 0F         [24] 3660 	cjne	r7,#0x00,00127$
                           000B9E  3661 	C$lab6.c$359$5$165 ==.
                                   3662 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:359: ANGLE_PW -= 30;
      000C86 E5 4A            [12] 3663 	mov	a,_ANGLE_PW
      000C88 24 E2            [12] 3664 	add	a,#0xE2
      000C8A F5 4A            [12] 3665 	mov	_ANGLE_PW,a
      000C8C E5 4B            [12] 3666 	mov	a,(_ANGLE_PW + 1)
      000C8E 34 FF            [12] 3667 	addc	a,#0xFF
      000C90 F5 4B            [12] 3668 	mov	(_ANGLE_PW + 1),a
      000C92 02 0B 5B         [24] 3669 	ljmp	00146$
      000C95                       3670 00127$:
                           000BAD  3671 	C$lab6.c$361$4$163 ==.
                                   3672 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:361: else if (value==2)
      000C95 BE 02 11         [24] 3673 	cjne	r6,#0x02,00124$
      000C98 BF 00 0E         [24] 3674 	cjne	r7,#0x00,00124$
                           000BB3  3675 	C$lab6.c$363$5$166 ==.
                                   3676 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:363: ANGLE_PW += 30;
      000C9B 74 1E            [12] 3677 	mov	a,#0x1E
      000C9D 25 4A            [12] 3678 	add	a,_ANGLE_PW
      000C9F F5 4A            [12] 3679 	mov	_ANGLE_PW,a
      000CA1 E4               [12] 3680 	clr	a
      000CA2 35 4B            [12] 3681 	addc	a,(_ANGLE_PW + 1)
      000CA4 F5 4B            [12] 3682 	mov	(_ANGLE_PW + 1),a
      000CA6 02 0B 5B         [24] 3683 	ljmp	00146$
      000CA9                       3684 00124$:
                           000BC1  3685 	C$lab6.c$365$4$163 ==.
                                   3686 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:365: else if (value == 3)
      000CA9 BE 03 05         [24] 3687 	cjne	r6,#0x03,00232$
      000CAC BF 00 02         [24] 3688 	cjne	r7,#0x00,00232$
      000CAF 80 03            [24] 3689 	sjmp	00233$
      000CB1                       3690 00232$:
      000CB1 02 0B 5B         [24] 3691 	ljmp	00146$
      000CB4                       3692 00233$:
                           000BCC  3693 	C$lab6.c$367$5$167 ==.
                                   3694 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:367: times++;
      000CB4 0C               [12] 3695 	inc	r4
      000CB5 BC 00 01         [24] 3696 	cjne	r4,#0x00,00234$
      000CB8 0D               [12] 3697 	inc	r5
      000CB9                       3698 00234$:
                           000BD1  3699 	C$lab6.c$368$5$167 ==.
                                   3700 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:368: value=0;
      000CB9 7E 00            [12] 3701 	mov	r6,#0x00
      000CBB 7F 00            [12] 3702 	mov	r7,#0x00
                           000BD5  3703 	C$lab6.c$369$5$167 ==.
                                   3704 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:369: PW_CENTER_ANGLE = ANGLE_PW;
      000CBD 85 4A 42         [24] 3705 	mov	_PW_CENTER_ANGLE,_ANGLE_PW
      000CC0 85 4B 43         [24] 3706 	mov	(_PW_CENTER_ANGLE + 1),(_ANGLE_PW + 1)
      000CC3 02 0B 5B         [24] 3707 	ljmp	00146$
      000CC6                       3708 00140$:
                           000BDE  3709 	C$lab6.c$374$4$168 ==.
                                   3710 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:374: if (value==0)
      000CC6 EE               [12] 3711 	mov	a,r6
      000CC7 4F               [12] 3712 	orl	a,r7
      000CC8 70 2A            [24] 3713 	jnz	00130$
                           000BE2  3714 	C$lab6.c$376$5$169 ==.
                                   3715 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:376: lcd_clear();
      000CCA C0 05            [24] 3716 	push	ar5
      000CCC C0 04            [24] 3717 	push	ar4
      000CCE C0 03            [24] 3718 	push	ar3
      000CD0 12 01 C9         [24] 3719 	lcall	_lcd_clear
                           000BEB  3720 	C$lab6.c$377$5$169 ==.
                                   3721 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:377: lcd_print("Now calibrating Max_PW DOWN ANGLE");
      000CD3 74 2E            [12] 3722 	mov	a,#___str_15
      000CD5 C0 E0            [24] 3723 	push	acc
      000CD7 74 20            [12] 3724 	mov	a,#(___str_15 >> 8)
      000CD9 C0 E0            [24] 3725 	push	acc
      000CDB 74 80            [12] 3726 	mov	a,#0x80
      000CDD C0 E0            [24] 3727 	push	acc
      000CDF 12 01 44         [24] 3728 	lcall	_lcd_print
      000CE2 15 81            [12] 3729 	dec	sp
      000CE4 15 81            [12] 3730 	dec	sp
      000CE6 15 81            [12] 3731 	dec	sp
      000CE8 D0 03            [24] 3732 	pop	ar3
      000CEA D0 04            [24] 3733 	pop	ar4
      000CEC D0 05            [24] 3734 	pop	ar5
                           000C06  3735 	C$lab6.c$378$5$169 ==.
                                   3736 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:378: ANGLE_PW = PW_DOWN_ANGLE;
      000CEE 85 44 4A         [24] 3737 	mov	_ANGLE_PW,_PW_DOWN_ANGLE
      000CF1 85 45 4B         [24] 3738 	mov	(_ANGLE_PW + 1),(_PW_DOWN_ANGLE + 1)
      000CF4                       3739 00130$:
                           000C0C  3740 	C$lab6.c$380$4$168 ==.
                                   3741 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:380: value = kpd_input(1);
      000CF4 75 82 01         [24] 3742 	mov	dpl,#0x01
      000CF7 C0 05            [24] 3743 	push	ar5
      000CF9 C0 04            [24] 3744 	push	ar4
      000CFB C0 03            [24] 3745 	push	ar3
      000CFD 12 02 81         [24] 3746 	lcall	_kpd_input
      000D00 AE 82            [24] 3747 	mov	r6,dpl
      000D02 AF 83            [24] 3748 	mov	r7,dph
      000D04 D0 03            [24] 3749 	pop	ar3
      000D06 D0 04            [24] 3750 	pop	ar4
      000D08 D0 05            [24] 3751 	pop	ar5
                           000C22  3752 	C$lab6.c$381$4$168 ==.
                                   3753 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:381: if (value == 1)
      000D0A BE 01 12         [24] 3754 	cjne	r6,#0x01,00137$
      000D0D BF 00 0F         [24] 3755 	cjne	r7,#0x00,00137$
                           000C28  3756 	C$lab6.c$383$5$170 ==.
                                   3757 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:383: ANGLE_PW -= 30;
      000D10 E5 4A            [12] 3758 	mov	a,_ANGLE_PW
      000D12 24 E2            [12] 3759 	add	a,#0xE2
      000D14 F5 4A            [12] 3760 	mov	_ANGLE_PW,a
      000D16 E5 4B            [12] 3761 	mov	a,(_ANGLE_PW + 1)
      000D18 34 FF            [12] 3762 	addc	a,#0xFF
      000D1A F5 4B            [12] 3763 	mov	(_ANGLE_PW + 1),a
      000D1C 02 0B 5B         [24] 3764 	ljmp	00146$
      000D1F                       3765 00137$:
                           000C37  3766 	C$lab6.c$385$4$168 ==.
                                   3767 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:385: else if (value==2)
      000D1F BE 02 11         [24] 3768 	cjne	r6,#0x02,00134$
      000D22 BF 00 0E         [24] 3769 	cjne	r7,#0x00,00134$
                           000C3D  3770 	C$lab6.c$387$5$171 ==.
                                   3771 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:387: ANGLE_PW += 30;
      000D25 74 1E            [12] 3772 	mov	a,#0x1E
      000D27 25 4A            [12] 3773 	add	a,_ANGLE_PW
      000D29 F5 4A            [12] 3774 	mov	_ANGLE_PW,a
      000D2B E4               [12] 3775 	clr	a
      000D2C 35 4B            [12] 3776 	addc	a,(_ANGLE_PW + 1)
      000D2E F5 4B            [12] 3777 	mov	(_ANGLE_PW + 1),a
      000D30 02 0B 5B         [24] 3778 	ljmp	00146$
      000D33                       3779 00134$:
                           000C4B  3780 	C$lab6.c$389$4$168 ==.
                                   3781 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:389: else if (value == 3)
      000D33 BE 03 05         [24] 3782 	cjne	r6,#0x03,00240$
      000D36 BF 00 02         [24] 3783 	cjne	r7,#0x00,00240$
      000D39 80 03            [24] 3784 	sjmp	00241$
      000D3B                       3785 00240$:
      000D3B 02 0B 5B         [24] 3786 	ljmp	00146$
      000D3E                       3787 00241$:
                           000C56  3788 	C$lab6.c$391$5$172 ==.
                                   3789 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:391: PW_DOWN_ANGLE = ANGLE_PW;
      000D3E 85 4A 44         [24] 3790 	mov	_PW_DOWN_ANGLE,_ANGLE_PW
      000D41 85 4B 45         [24] 3791 	mov	(_PW_DOWN_ANGLE + 1),(_ANGLE_PW + 1)
                           000C5C  3792 	C$lab6.c$392$5$172 ==.
                                   3793 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:392: return;
                           000C5C  3794 	C$lab6.c$397$1$155 ==.
                           000C5C  3795 	XG$Angle_cal$0$0 ==.
      000D44 22               [24] 3796 	ret
                                   3797 ;------------------------------------------------------------
                                   3798 ;Allocation info for local variables in function 'Thrust_cal'
                                   3799 ;------------------------------------------------------------
                                   3800 ;st                        Allocated to registers r3 
                                   3801 ;value                     Allocated to registers r6 r7 
                                   3802 ;times                     Allocated to registers r4 r5 
                                   3803 ;------------------------------------------------------------
                           000C5D  3804 	G$Thrust_cal$0$0 ==.
                           000C5D  3805 	C$lab6.c$399$1$155 ==.
                                   3806 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:399: void Thrust_cal(void)
                                   3807 ;	-----------------------------------------
                                   3808 ;	 function Thrust_cal
                                   3809 ;	-----------------------------------------
      000D45                       3810 _Thrust_cal:
                           000C5D  3811 	C$lab6.c$402$1$155 ==.
                                   3812 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:402: int value =0;
                           000C5D  3813 	C$lab6.c$403$1$155 ==.
                                   3814 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:403: int times =0;
                           000C5D  3815 	C$lab6.c$404$1$174 ==.
                                   3816 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:404: count =0;
      000D45 E4               [12] 3817 	clr	a
      000D46 FE               [12] 3818 	mov	r6,a
      000D47 FF               [12] 3819 	mov	r7,a
      000D48 FC               [12] 3820 	mov	r4,a
      000D49 FD               [12] 3821 	mov	r5,a
      000D4A F5 32            [12] 3822 	mov	_count,a
      000D4C F5 33            [12] 3823 	mov	(_count + 1),a
                           000C66  3824 	C$lab6.c$405$1$174 ==.
                                   3825 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:405: lcd_clear();
      000D4E C0 07            [24] 3826 	push	ar7
      000D50 C0 06            [24] 3827 	push	ar6
      000D52 C0 05            [24] 3828 	push	ar5
      000D54 C0 04            [24] 3829 	push	ar4
      000D56 12 01 C9         [24] 3830 	lcall	_lcd_clear
                           000C71  3831 	C$lab6.c$406$1$174 ==.
                                   3832 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:406: lcd_print("Thrust Calibration");
      000D59 74 50            [12] 3833 	mov	a,#___str_16
      000D5B C0 E0            [24] 3834 	push	acc
      000D5D 74 20            [12] 3835 	mov	a,#(___str_16 >> 8)
      000D5F C0 E0            [24] 3836 	push	acc
      000D61 74 80            [12] 3837 	mov	a,#0x80
      000D63 C0 E0            [24] 3838 	push	acc
      000D65 12 01 44         [24] 3839 	lcall	_lcd_print
      000D68 15 81            [12] 3840 	dec	sp
      000D6A 15 81            [12] 3841 	dec	sp
      000D6C 15 81            [12] 3842 	dec	sp
      000D6E D0 04            [24] 3843 	pop	ar4
      000D70 D0 05            [24] 3844 	pop	ar5
      000D72 D0 06            [24] 3845 	pop	ar6
      000D74 D0 07            [24] 3846 	pop	ar7
                           000C8E  3847 	C$lab6.c$407$1$174 ==.
                                   3848 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:407: while (count < 50);
      000D76                       3849 00101$:
      000D76 C3               [12] 3850 	clr	c
      000D77 E5 32            [12] 3851 	mov	a,_count
      000D79 94 32            [12] 3852 	subb	a,#0x32
      000D7B E5 33            [12] 3853 	mov	a,(_count + 1)
      000D7D 64 80            [12] 3854 	xrl	a,#0x80
      000D7F 94 80            [12] 3855 	subb	a,#0x80
      000D81 40 F3            [24] 3856 	jc	00101$
                           000C9B  3857 	C$lab6.c$408$1$174 ==.
                                   3858 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:408: lcd_clear();
      000D83 C0 07            [24] 3859 	push	ar7
      000D85 C0 06            [24] 3860 	push	ar6
      000D87 C0 05            [24] 3861 	push	ar5
      000D89 C0 04            [24] 3862 	push	ar4
      000D8B 12 01 C9         [24] 3863 	lcall	_lcd_clear
      000D8E D0 04            [24] 3864 	pop	ar4
      000D90 D0 05            [24] 3865 	pop	ar5
      000D92 D0 06            [24] 3866 	pop	ar6
      000D94 D0 07            [24] 3867 	pop	ar7
                           000CAE  3868 	C$lab6.c$412$2$175 ==.
                                   3869 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:412: count = 0;
      000D96 E4               [12] 3870 	clr	a
      000D97 F5 32            [12] 3871 	mov	_count,a
      000D99 F5 33            [12] 3872 	mov	(_count + 1),a
                           000CB3  3873 	C$lab6.c$413$2$175 ==.
                                   3874 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:413: while (count < 1);
      000D9B                       3875 00104$:
      000D9B C3               [12] 3876 	clr	c
      000D9C E5 32            [12] 3877 	mov	a,_count
      000D9E 94 01            [12] 3878 	subb	a,#0x01
      000DA0 E5 33            [12] 3879 	mov	a,(_count + 1)
      000DA2 64 80            [12] 3880 	xrl	a,#0x80
      000DA4 94 80            [12] 3881 	subb	a,#0x80
      000DA6 40 F3            [24] 3882 	jc	00104$
                           000CC0  3883 	C$lab6.c$414$2$175 ==.
                                   3884 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:414: lcd_clear();
      000DA8 C0 07            [24] 3885 	push	ar7
      000DAA C0 06            [24] 3886 	push	ar6
      000DAC C0 05            [24] 3887 	push	ar5
      000DAE C0 04            [24] 3888 	push	ar4
      000DB0 12 01 C9         [24] 3889 	lcall	_lcd_clear
                           000CCB  3890 	C$lab6.c$415$2$175 ==.
                                   3891 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:415: lcd_print("go left: press 1\n go right: press 2\nPress * for next screen");
      000DB3 74 4F            [12] 3892 	mov	a,#___str_7
      000DB5 C0 E0            [24] 3893 	push	acc
      000DB7 74 1F            [12] 3894 	mov	a,#(___str_7 >> 8)
      000DB9 C0 E0            [24] 3895 	push	acc
      000DBB 74 80            [12] 3896 	mov	a,#0x80
      000DBD C0 E0            [24] 3897 	push	acc
      000DBF 12 01 44         [24] 3898 	lcall	_lcd_print
      000DC2 15 81            [12] 3899 	dec	sp
      000DC4 15 81            [12] 3900 	dec	sp
      000DC6 15 81            [12] 3901 	dec	sp
                           000CE0  3902 	C$lab6.c$416$2$175 ==.
                                   3903 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:416: start();
      000DC8 12 12 FC         [24] 3904 	lcall	_start
                           000CE3  3905 	C$lab6.c$417$2$175 ==.
                                   3906 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:417: lcd_clear();
      000DCB 12 01 C9         [24] 3907 	lcall	_lcd_clear
                           000CE6  3908 	C$lab6.c$418$2$175 ==.
                                   3909 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:418: lcd_print("\n confirm: press 3\n press * to begin");
      000DCE 74 8B            [12] 3910 	mov	a,#___str_8
      000DD0 C0 E0            [24] 3911 	push	acc
      000DD2 74 1F            [12] 3912 	mov	a,#(___str_8 >> 8)
      000DD4 C0 E0            [24] 3913 	push	acc
      000DD6 74 80            [12] 3914 	mov	a,#0x80
      000DD8 C0 E0            [24] 3915 	push	acc
      000DDA 12 01 44         [24] 3916 	lcall	_lcd_print
      000DDD 15 81            [12] 3917 	dec	sp
      000DDF 15 81            [12] 3918 	dec	sp
      000DE1 15 81            [12] 3919 	dec	sp
                           000CFB  3920 	C$lab6.c$419$2$175 ==.
                                   3921 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:419: start();
      000DE3 12 12 FC         [24] 3922 	lcall	_start
      000DE6 D0 04            [24] 3923 	pop	ar4
      000DE8 D0 05            [24] 3924 	pop	ar5
      000DEA D0 06            [24] 3925 	pop	ar6
      000DEC D0 07            [24] 3926 	pop	ar7
                           000D06  3927 	C$lab6.c$420$2$175 ==.
                                   3928 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:420: st =0;
      000DEE 7B 00            [12] 3929 	mov	r3,#0x00
                           000D08  3930 	C$lab6.c$421$5$178 ==.
                                   3931 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:421: while (1)
      000DF0                       3932 00148$:
                           000D08  3933 	C$lab6.c$423$3$176 ==.
                                   3934 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:423: printf("\r\n %u",RTHRUST_PW);
      000DF0 C0 07            [24] 3935 	push	ar7
      000DF2 C0 06            [24] 3936 	push	ar6
      000DF4 C0 05            [24] 3937 	push	ar5
      000DF6 C0 04            [24] 3938 	push	ar4
      000DF8 C0 03            [24] 3939 	push	ar3
      000DFA C0 4E            [24] 3940 	push	_RTHRUST_PW
      000DFC C0 4F            [24] 3941 	push	(_RTHRUST_PW + 1)
      000DFE 74 B0            [12] 3942 	mov	a,#___str_9
      000E00 C0 E0            [24] 3943 	push	acc
      000E02 74 1F            [12] 3944 	mov	a,#(___str_9 >> 8)
      000E04 C0 E0            [24] 3945 	push	acc
      000E06 74 80            [12] 3946 	mov	a,#0x80
      000E08 C0 E0            [24] 3947 	push	acc
      000E0A 12 16 A1         [24] 3948 	lcall	_printf
      000E0D E5 81            [12] 3949 	mov	a,sp
      000E0F 24 FB            [12] 3950 	add	a,#0xfb
      000E11 F5 81            [12] 3951 	mov	sp,a
      000E13 D0 03            [24] 3952 	pop	ar3
      000E15 D0 04            [24] 3953 	pop	ar4
      000E17 D0 05            [24] 3954 	pop	ar5
      000E19 D0 06            [24] 3955 	pop	ar6
      000E1B D0 07            [24] 3956 	pop	ar7
                           000D35  3957 	C$lab6.c$424$3$176 ==.
                                   3958 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:424: RTRST_lo_to_hi = 0xFFFF - RTHRUST_PW;
      000E1D 74 FF            [12] 3959 	mov	a,#0xFF
      000E1F C3               [12] 3960 	clr	c
      000E20 95 4E            [12] 3961 	subb	a,_RTHRUST_PW
      000E22 F5 52            [12] 3962 	mov	_RTRST_lo_to_hi,a
      000E24 74 FF            [12] 3963 	mov	a,#0xFF
      000E26 95 4F            [12] 3964 	subb	a,(_RTHRUST_PW + 1)
      000E28 F5 53            [12] 3965 	mov	(_RTRST_lo_to_hi + 1),a
                           000D42  3966 	C$lab6.c$425$3$176 ==.
                                   3967 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:425: LTRST_lo_to_hi = 0xFFFF - LTHRUST_PW;
      000E2A 74 FF            [12] 3968 	mov	a,#0xFF
      000E2C C3               [12] 3969 	clr	c
      000E2D 95 50            [12] 3970 	subb	a,_LTHRUST_PW
      000E2F F5 54            [12] 3971 	mov	_LTRST_lo_to_hi,a
      000E31 74 FF            [12] 3972 	mov	a,#0xFF
      000E33 95 51            [12] 3973 	subb	a,(_LTHRUST_PW + 1)
      000E35 F5 55            [12] 3974 	mov	(_LTRST_lo_to_hi + 1),a
                           000D4F  3975 	C$lab6.c$426$3$176 ==.
                                   3976 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:426: if (times == 0 )
      000E37 EC               [12] 3977 	mov	a,r4
      000E38 4D               [12] 3978 	orl	a,r5
      000E39 60 03            [24] 3979 	jz	00220$
      000E3B 02 0E EA         [24] 3980 	ljmp	00145$
      000E3E                       3981 00220$:
                           000D56  3982 	C$lab6.c$428$4$177 ==.
                                   3983 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:428: if (value ==0)
      000E3E EE               [12] 3984 	mov	a,r6
      000E3F 4F               [12] 3985 	orl	a,r7
      000E40 70 35            [24] 3986 	jnz	00110$
                           000D5A  3987 	C$lab6.c$430$5$178 ==.
                                   3988 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:430: lcd_clear();
      000E42 C0 05            [24] 3989 	push	ar5
      000E44 C0 04            [24] 3990 	push	ar4
      000E46 C0 03            [24] 3991 	push	ar3
      000E48 12 01 C9         [24] 3992 	lcall	_lcd_clear
                           000D63  3993 	C$lab6.c$431$5$178 ==.
                                   3994 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:431: lcd_print("Now calibrating Min_PW");
      000E4B 74 63            [12] 3995 	mov	a,#___str_17
      000E4D C0 E0            [24] 3996 	push	acc
      000E4F 74 20            [12] 3997 	mov	a,#(___str_17 >> 8)
      000E51 C0 E0            [24] 3998 	push	acc
      000E53 74 80            [12] 3999 	mov	a,#0x80
      000E55 C0 E0            [24] 4000 	push	acc
      000E57 12 01 44         [24] 4001 	lcall	_lcd_print
      000E5A 15 81            [12] 4002 	dec	sp
      000E5C 15 81            [12] 4003 	dec	sp
      000E5E 15 81            [12] 4004 	dec	sp
      000E60 D0 03            [24] 4005 	pop	ar3
      000E62 D0 04            [24] 4006 	pop	ar4
      000E64 D0 05            [24] 4007 	pop	ar5
                           000D7E  4008 	C$lab6.c$432$5$178 ==.
                                   4009 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:432: if (st ==0)
      000E66 EB               [12] 4010 	mov	a,r3
      000E67 70 0C            [24] 4011 	jnz	00108$
                           000D81  4012 	C$lab6.c$434$6$179 ==.
                                   4013 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:434: RTHRUST_PW = PW_MIN_THRUST;
      000E69 85 34 4E         [24] 4014 	mov	_RTHRUST_PW,_PW_MIN_THRUST
      000E6C 85 35 4F         [24] 4015 	mov	(_RTHRUST_PW + 1),(_PW_MIN_THRUST + 1)
                           000D87  4016 	C$lab6.c$435$6$179 ==.
                                   4017 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:435: LTHRUST_PW = PW_MIN_THRUST;
      000E6F 85 34 50         [24] 4018 	mov	_LTHRUST_PW,_PW_MIN_THRUST
      000E72 85 35 51         [24] 4019 	mov	(_LTHRUST_PW + 1),(_PW_MIN_THRUST + 1)
      000E75                       4020 00108$:
                           000D8D  4021 	C$lab6.c$437$5$178 ==.
                                   4022 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:437: st =1;
      000E75 7B 01            [12] 4023 	mov	r3,#0x01
      000E77                       4024 00110$:
                           000D8F  4025 	C$lab6.c$439$4$177 ==.
                                   4026 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:439: value = kpd_input(1);
      000E77 75 82 01         [24] 4027 	mov	dpl,#0x01
      000E7A C0 05            [24] 4028 	push	ar5
      000E7C C0 04            [24] 4029 	push	ar4
      000E7E C0 03            [24] 4030 	push	ar3
      000E80 12 02 81         [24] 4031 	lcall	_kpd_input
      000E83 AE 82            [24] 4032 	mov	r6,dpl
      000E85 AF 83            [24] 4033 	mov	r7,dph
      000E87 D0 03            [24] 4034 	pop	ar3
      000E89 D0 04            [24] 4035 	pop	ar4
      000E8B D0 05            [24] 4036 	pop	ar5
                           000DA5  4037 	C$lab6.c$440$4$177 ==.
                                   4038 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:440: if (value == 1)
      000E8D BE 01 1D         [24] 4039 	cjne	r6,#0x01,00117$
      000E90 BF 00 1A         [24] 4040 	cjne	r7,#0x00,00117$
                           000DAB  4041 	C$lab6.c$442$5$180 ==.
                                   4042 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:442: RTHRUST_PW -= 30;
      000E93 E5 4E            [12] 4043 	mov	a,_RTHRUST_PW
      000E95 24 E2            [12] 4044 	add	a,#0xE2
      000E97 F5 4E            [12] 4045 	mov	_RTHRUST_PW,a
      000E99 E5 4F            [12] 4046 	mov	a,(_RTHRUST_PW + 1)
      000E9B 34 FF            [12] 4047 	addc	a,#0xFF
      000E9D F5 4F            [12] 4048 	mov	(_RTHRUST_PW + 1),a
                           000DB7  4049 	C$lab6.c$443$5$180 ==.
                                   4050 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:443: LTHRUST_PW += 30;
      000E9F 74 1E            [12] 4051 	mov	a,#0x1E
      000EA1 25 50            [12] 4052 	add	a,_LTHRUST_PW
      000EA3 F5 50            [12] 4053 	mov	_LTHRUST_PW,a
      000EA5 E4               [12] 4054 	clr	a
      000EA6 35 51            [12] 4055 	addc	a,(_LTHRUST_PW + 1)
      000EA8 F5 51            [12] 4056 	mov	(_LTHRUST_PW + 1),a
      000EAA 02 0D F0         [24] 4057 	ljmp	00148$
      000EAD                       4058 00117$:
                           000DC5  4059 	C$lab6.c$445$4$177 ==.
                                   4060 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:445: else if (value==2)
      000EAD BE 02 1D         [24] 4061 	cjne	r6,#0x02,00114$
      000EB0 BF 00 1A         [24] 4062 	cjne	r7,#0x00,00114$
                           000DCB  4063 	C$lab6.c$447$5$181 ==.
                                   4064 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:447: RTHRUST_PW += 30;
      000EB3 74 1E            [12] 4065 	mov	a,#0x1E
      000EB5 25 4E            [12] 4066 	add	a,_RTHRUST_PW
      000EB7 F5 4E            [12] 4067 	mov	_RTHRUST_PW,a
      000EB9 E4               [12] 4068 	clr	a
      000EBA 35 4F            [12] 4069 	addc	a,(_RTHRUST_PW + 1)
      000EBC F5 4F            [12] 4070 	mov	(_RTHRUST_PW + 1),a
                           000DD6  4071 	C$lab6.c$448$5$181 ==.
                                   4072 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:448: LTHRUST_PW -= 30;
      000EBE E5 50            [12] 4073 	mov	a,_LTHRUST_PW
      000EC0 24 E2            [12] 4074 	add	a,#0xE2
      000EC2 F5 50            [12] 4075 	mov	_LTHRUST_PW,a
      000EC4 E5 51            [12] 4076 	mov	a,(_LTHRUST_PW + 1)
      000EC6 34 FF            [12] 4077 	addc	a,#0xFF
      000EC8 F5 51            [12] 4078 	mov	(_LTHRUST_PW + 1),a
      000ECA 02 0D F0         [24] 4079 	ljmp	00148$
      000ECD                       4080 00114$:
                           000DE5  4081 	C$lab6.c$450$4$177 ==.
                                   4082 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:450: else if (value == 3)
      000ECD BE 03 05         [24] 4083 	cjne	r6,#0x03,00227$
      000ED0 BF 00 02         [24] 4084 	cjne	r7,#0x00,00227$
      000ED3 80 03            [24] 4085 	sjmp	00228$
      000ED5                       4086 00227$:
      000ED5 02 0D F0         [24] 4087 	ljmp	00148$
      000ED8                       4088 00228$:
                           000DF0  4089 	C$lab6.c$452$5$182 ==.
                                   4090 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:452: times++;
      000ED8 0C               [12] 4091 	inc	r4
      000ED9 BC 00 01         [24] 4092 	cjne	r4,#0x00,00229$
      000EDC 0D               [12] 4093 	inc	r5
      000EDD                       4094 00229$:
                           000DF5  4095 	C$lab6.c$453$5$182 ==.
                                   4096 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:453: value =0;
      000EDD 7E 00            [12] 4097 	mov	r6,#0x00
      000EDF 7F 00            [12] 4098 	mov	r7,#0x00
                           000DF9  4099 	C$lab6.c$454$5$182 ==.
                                   4100 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:454: PW_MIN_THRUST = LTHRUST_PW;
      000EE1 85 50 34         [24] 4101 	mov	_PW_MIN_THRUST,_LTHRUST_PW
      000EE4 85 51 35         [24] 4102 	mov	(_PW_MIN_THRUST + 1),(_LTHRUST_PW + 1)
      000EE7 02 0D F0         [24] 4103 	ljmp	00148$
      000EEA                       4104 00145$:
                           000E02  4105 	C$lab6.c$457$3$176 ==.
                                   4106 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:457: else if (times ==1)
      000EEA BC 01 05         [24] 4107 	cjne	r4,#0x01,00230$
      000EED BD 00 02         [24] 4108 	cjne	r5,#0x00,00230$
      000EF0 80 03            [24] 4109 	sjmp	00231$
      000EF2                       4110 00230$:
      000EF2 02 0F A1         [24] 4111 	ljmp	00142$
      000EF5                       4112 00231$:
                           000E0D  4113 	C$lab6.c$459$4$183 ==.
                                   4114 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:459: if (value ==0)
      000EF5 EE               [12] 4115 	mov	a,r6
      000EF6 4F               [12] 4116 	orl	a,r7
      000EF7 70 35            [24] 4117 	jnz	00122$
                           000E11  4118 	C$lab6.c$461$5$184 ==.
                                   4119 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:461: lcd_clear();
      000EF9 C0 05            [24] 4120 	push	ar5
      000EFB C0 04            [24] 4121 	push	ar4
      000EFD C0 03            [24] 4122 	push	ar3
      000EFF 12 01 C9         [24] 4123 	lcall	_lcd_clear
                           000E1A  4124 	C$lab6.c$462$5$184 ==.
                                   4125 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:462: lcd_print("Now calibrating Min_PW");
      000F02 74 63            [12] 4126 	mov	a,#___str_17
      000F04 C0 E0            [24] 4127 	push	acc
      000F06 74 20            [12] 4128 	mov	a,#(___str_17 >> 8)
      000F08 C0 E0            [24] 4129 	push	acc
      000F0A 74 80            [12] 4130 	mov	a,#0x80
      000F0C C0 E0            [24] 4131 	push	acc
      000F0E 12 01 44         [24] 4132 	lcall	_lcd_print
      000F11 15 81            [12] 4133 	dec	sp
      000F13 15 81            [12] 4134 	dec	sp
      000F15 15 81            [12] 4135 	dec	sp
      000F17 D0 03            [24] 4136 	pop	ar3
      000F19 D0 04            [24] 4137 	pop	ar4
      000F1B D0 05            [24] 4138 	pop	ar5
                           000E35  4139 	C$lab6.c$463$5$184 ==.
                                   4140 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:463: if (st ==0)
      000F1D EB               [12] 4141 	mov	a,r3
      000F1E 70 0C            [24] 4142 	jnz	00120$
                           000E38  4143 	C$lab6.c$465$6$185 ==.
                                   4144 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:465: RTHRUST_PW = PW_NUET_THRUST;
      000F20 85 36 4E         [24] 4145 	mov	_RTHRUST_PW,_PW_NUET_THRUST
      000F23 85 37 4F         [24] 4146 	mov	(_RTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
                           000E3E  4147 	C$lab6.c$466$6$185 ==.
                                   4148 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:466: LTHRUST_PW = PW_NUET_THRUST;
      000F26 85 36 50         [24] 4149 	mov	_LTHRUST_PW,_PW_NUET_THRUST
      000F29 85 37 51         [24] 4150 	mov	(_LTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
      000F2C                       4151 00120$:
                           000E44  4152 	C$lab6.c$468$5$184 ==.
                                   4153 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:468: st =1;
      000F2C 7B 01            [12] 4154 	mov	r3,#0x01
      000F2E                       4155 00122$:
                           000E46  4156 	C$lab6.c$470$4$183 ==.
                                   4157 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:470: value = kpd_input(1);
      000F2E 75 82 01         [24] 4158 	mov	dpl,#0x01
      000F31 C0 05            [24] 4159 	push	ar5
      000F33 C0 04            [24] 4160 	push	ar4
      000F35 C0 03            [24] 4161 	push	ar3
      000F37 12 02 81         [24] 4162 	lcall	_kpd_input
      000F3A AE 82            [24] 4163 	mov	r6,dpl
      000F3C AF 83            [24] 4164 	mov	r7,dph
      000F3E D0 03            [24] 4165 	pop	ar3
      000F40 D0 04            [24] 4166 	pop	ar4
      000F42 D0 05            [24] 4167 	pop	ar5
                           000E5C  4168 	C$lab6.c$471$4$183 ==.
                                   4169 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:471: if (value == 1)
      000F44 BE 01 1D         [24] 4170 	cjne	r6,#0x01,00129$
      000F47 BF 00 1A         [24] 4171 	cjne	r7,#0x00,00129$
                           000E62  4172 	C$lab6.c$473$5$186 ==.
                                   4173 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:473: RTHRUST_PW -= 30;
      000F4A E5 4E            [12] 4174 	mov	a,_RTHRUST_PW
      000F4C 24 E2            [12] 4175 	add	a,#0xE2
      000F4E F5 4E            [12] 4176 	mov	_RTHRUST_PW,a
      000F50 E5 4F            [12] 4177 	mov	a,(_RTHRUST_PW + 1)
      000F52 34 FF            [12] 4178 	addc	a,#0xFF
      000F54 F5 4F            [12] 4179 	mov	(_RTHRUST_PW + 1),a
                           000E6E  4180 	C$lab6.c$474$5$186 ==.
                                   4181 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:474: LTHRUST_PW += 30;
      000F56 74 1E            [12] 4182 	mov	a,#0x1E
      000F58 25 50            [12] 4183 	add	a,_LTHRUST_PW
      000F5A F5 50            [12] 4184 	mov	_LTHRUST_PW,a
      000F5C E4               [12] 4185 	clr	a
      000F5D 35 51            [12] 4186 	addc	a,(_LTHRUST_PW + 1)
      000F5F F5 51            [12] 4187 	mov	(_LTHRUST_PW + 1),a
      000F61 02 0D F0         [24] 4188 	ljmp	00148$
      000F64                       4189 00129$:
                           000E7C  4190 	C$lab6.c$476$4$183 ==.
                                   4191 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:476: else if (value==2)
      000F64 BE 02 1D         [24] 4192 	cjne	r6,#0x02,00126$
      000F67 BF 00 1A         [24] 4193 	cjne	r7,#0x00,00126$
                           000E82  4194 	C$lab6.c$478$5$187 ==.
                                   4195 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:478: RTHRUST_PW += 30;
      000F6A 74 1E            [12] 4196 	mov	a,#0x1E
      000F6C 25 4E            [12] 4197 	add	a,_RTHRUST_PW
      000F6E F5 4E            [12] 4198 	mov	_RTHRUST_PW,a
      000F70 E4               [12] 4199 	clr	a
      000F71 35 4F            [12] 4200 	addc	a,(_RTHRUST_PW + 1)
      000F73 F5 4F            [12] 4201 	mov	(_RTHRUST_PW + 1),a
                           000E8D  4202 	C$lab6.c$479$5$187 ==.
                                   4203 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:479: LTHRUST_PW -= 30;
      000F75 E5 50            [12] 4204 	mov	a,_LTHRUST_PW
      000F77 24 E2            [12] 4205 	add	a,#0xE2
      000F79 F5 50            [12] 4206 	mov	_LTHRUST_PW,a
      000F7B E5 51            [12] 4207 	mov	a,(_LTHRUST_PW + 1)
      000F7D 34 FF            [12] 4208 	addc	a,#0xFF
      000F7F F5 51            [12] 4209 	mov	(_LTHRUST_PW + 1),a
      000F81 02 0D F0         [24] 4210 	ljmp	00148$
      000F84                       4211 00126$:
                           000E9C  4212 	C$lab6.c$481$4$183 ==.
                                   4213 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:481: else if (value == 3)
      000F84 BE 03 05         [24] 4214 	cjne	r6,#0x03,00238$
      000F87 BF 00 02         [24] 4215 	cjne	r7,#0x00,00238$
      000F8A 80 03            [24] 4216 	sjmp	00239$
      000F8C                       4217 00238$:
      000F8C 02 0D F0         [24] 4218 	ljmp	00148$
      000F8F                       4219 00239$:
                           000EA7  4220 	C$lab6.c$483$5$188 ==.
                                   4221 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:483: times++;
      000F8F 0C               [12] 4222 	inc	r4
      000F90 BC 00 01         [24] 4223 	cjne	r4,#0x00,00240$
      000F93 0D               [12] 4224 	inc	r5
      000F94                       4225 00240$:
                           000EAC  4226 	C$lab6.c$484$5$188 ==.
                                   4227 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:484: value =0;
      000F94 7E 00            [12] 4228 	mov	r6,#0x00
      000F96 7F 00            [12] 4229 	mov	r7,#0x00
                           000EB0  4230 	C$lab6.c$485$5$188 ==.
                                   4231 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:485: PW_NUET_THRUST = RTHRUST_PW;
      000F98 85 4E 36         [24] 4232 	mov	_PW_NUET_THRUST,_RTHRUST_PW
      000F9B 85 4F 37         [24] 4233 	mov	(_PW_NUET_THRUST + 1),(_RTHRUST_PW + 1)
      000F9E 02 0D F0         [24] 4234 	ljmp	00148$
      000FA1                       4235 00142$:
                           000EB9  4236 	C$lab6.c$490$4$189 ==.
                                   4237 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:490: if (value==0)
      000FA1 EE               [12] 4238 	mov	a,r6
      000FA2 4F               [12] 4239 	orl	a,r7
      000FA3 70 2A            [24] 4240 	jnz	00132$
                           000EBD  4241 	C$lab6.c$492$5$190 ==.
                                   4242 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:492: lcd_clear();
      000FA5 C0 05            [24] 4243 	push	ar5
      000FA7 C0 04            [24] 4244 	push	ar4
      000FA9 C0 03            [24] 4245 	push	ar3
      000FAB 12 01 C9         [24] 4246 	lcall	_lcd_clear
                           000EC6  4247 	C$lab6.c$493$5$190 ==.
                                   4248 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:493: lcd_print("Now calibrating Max_PW");
      000FAE 74 E5            [12] 4249 	mov	a,#___str_12
      000FB0 C0 E0            [24] 4250 	push	acc
      000FB2 74 1F            [12] 4251 	mov	a,#(___str_12 >> 8)
      000FB4 C0 E0            [24] 4252 	push	acc
      000FB6 74 80            [12] 4253 	mov	a,#0x80
      000FB8 C0 E0            [24] 4254 	push	acc
      000FBA 12 01 44         [24] 4255 	lcall	_lcd_print
      000FBD 15 81            [12] 4256 	dec	sp
      000FBF 15 81            [12] 4257 	dec	sp
      000FC1 15 81            [12] 4258 	dec	sp
      000FC3 D0 03            [24] 4259 	pop	ar3
      000FC5 D0 04            [24] 4260 	pop	ar4
      000FC7 D0 05            [24] 4261 	pop	ar5
                           000EE1  4262 	C$lab6.c$494$5$190 ==.
                                   4263 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:494: RTHRUST_PW = PW_MAX_THRUST;
      000FC9 85 38 4E         [24] 4264 	mov	_RTHRUST_PW,_PW_MAX_THRUST
      000FCC 85 39 4F         [24] 4265 	mov	(_RTHRUST_PW + 1),(_PW_MAX_THRUST + 1)
      000FCF                       4266 00132$:
                           000EE7  4267 	C$lab6.c$496$4$189 ==.
                                   4268 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:496: value = kpd_input(1);
      000FCF 75 82 01         [24] 4269 	mov	dpl,#0x01
      000FD2 C0 05            [24] 4270 	push	ar5
      000FD4 C0 04            [24] 4271 	push	ar4
      000FD6 C0 03            [24] 4272 	push	ar3
      000FD8 12 02 81         [24] 4273 	lcall	_kpd_input
      000FDB AE 82            [24] 4274 	mov	r6,dpl
      000FDD AF 83            [24] 4275 	mov	r7,dph
      000FDF D0 03            [24] 4276 	pop	ar3
      000FE1 D0 04            [24] 4277 	pop	ar4
      000FE3 D0 05            [24] 4278 	pop	ar5
                           000EFD  4279 	C$lab6.c$497$4$189 ==.
                                   4280 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:497: if (value == 1)
      000FE5 BE 01 12         [24] 4281 	cjne	r6,#0x01,00139$
      000FE8 BF 00 0F         [24] 4282 	cjne	r7,#0x00,00139$
                           000F03  4283 	C$lab6.c$499$5$191 ==.
                                   4284 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:499: RTHRUST_PW -= 30;
      000FEB E5 4E            [12] 4285 	mov	a,_RTHRUST_PW
      000FED 24 E2            [12] 4286 	add	a,#0xE2
      000FEF F5 4E            [12] 4287 	mov	_RTHRUST_PW,a
      000FF1 E5 4F            [12] 4288 	mov	a,(_RTHRUST_PW + 1)
      000FF3 34 FF            [12] 4289 	addc	a,#0xFF
      000FF5 F5 4F            [12] 4290 	mov	(_RTHRUST_PW + 1),a
      000FF7 02 0D F0         [24] 4291 	ljmp	00148$
      000FFA                       4292 00139$:
                           000F12  4293 	C$lab6.c$501$4$189 ==.
                                   4294 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:501: else if (value==2)
      000FFA BE 02 11         [24] 4295 	cjne	r6,#0x02,00136$
      000FFD BF 00 0E         [24] 4296 	cjne	r7,#0x00,00136$
                           000F18  4297 	C$lab6.c$503$5$192 ==.
                                   4298 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:503: RTHRUST_PW += 30;
      001000 74 1E            [12] 4299 	mov	a,#0x1E
      001002 25 4E            [12] 4300 	add	a,_RTHRUST_PW
      001004 F5 4E            [12] 4301 	mov	_RTHRUST_PW,a
      001006 E4               [12] 4302 	clr	a
      001007 35 4F            [12] 4303 	addc	a,(_RTHRUST_PW + 1)
      001009 F5 4F            [12] 4304 	mov	(_RTHRUST_PW + 1),a
      00100B 02 0D F0         [24] 4305 	ljmp	00148$
      00100E                       4306 00136$:
                           000F26  4307 	C$lab6.c$505$4$189 ==.
                                   4308 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:505: else if (value == 3)
      00100E BE 03 05         [24] 4309 	cjne	r6,#0x03,00246$
      001011 BF 00 02         [24] 4310 	cjne	r7,#0x00,00246$
      001014 80 03            [24] 4311 	sjmp	00247$
      001016                       4312 00246$:
      001016 02 0D F0         [24] 4313 	ljmp	00148$
      001019                       4314 00247$:
                           000F31  4315 	C$lab6.c$507$5$193 ==.
                                   4316 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:507: PW_MAX_THRUST = RTHRUST_PW;
      001019 85 4E 38         [24] 4317 	mov	_PW_MAX_THRUST,_RTHRUST_PW
      00101C 85 4F 39         [24] 4318 	mov	(_PW_MAX_THRUST + 1),(_RTHRUST_PW + 1)
                           000F37  4319 	C$lab6.c$508$5$193 ==.
                                   4320 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:508: return;
                           000F37  4321 	C$lab6.c$513$1$174 ==.
                           000F37  4322 	XG$Thrust_cal$0$0 ==.
      00101F 22               [24] 4323 	ret
                                   4324 ;------------------------------------------------------------
                                   4325 ;Allocation info for local variables in function 'Steering_Servo'
                                   4326 ;------------------------------------------------------------
                                   4327 ;direction                 Allocated with name '_Steering_Servo_direction_1_194'
                                   4328 ;------------------------------------------------------------
                           000F38  4329 	G$Steering_Servo$0$0 ==.
                           000F38  4330 	C$lab6.c$516$1$174 ==.
                                   4331 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:516: void Steering_Servo(unsigned int direction)
                                   4332 ;	-----------------------------------------
                                   4333 ;	 function Steering_Servo
                                   4334 ;	-----------------------------------------
      001020                       4335 _Steering_Servo:
      001020 85 82 60         [24] 4336 	mov	_Steering_Servo_direction_1_194,dpl
      001023 85 83 61         [24] 4337 	mov	(_Steering_Servo_direction_1_194 + 1),dph
                           000F3E  4338 	C$lab6.c$520$1$195 ==.
                                   4339 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:520: if (direction < 1800)               /////IF FACING OPPOSITE DIRECTION, TURN LEFT
      001026 C3               [12] 4340 	clr	c
      001027 E5 60            [12] 4341 	mov	a,_Steering_Servo_direction_1_194
      001029 94 08            [12] 4342 	subb	a,#0x08
      00102B E5 61            [12] 4343 	mov	a,(_Steering_Servo_direction_1_194 + 1)
      00102D 94 07            [12] 4344 	subb	a,#0x07
      00102F 40 03            [24] 4345 	jc	00128$
      001031 02 11 7E         [24] 4346 	ljmp	00112$
      001034                       4347 00128$:
                           000F4C  4348 	C$lab6.c$522$1$195 ==.
                                   4349 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:522: if (RUDDER_PW <= PW_CENTER_RUDDER - (float)(direction)/4.2)   ///MAKES RATIO TO SMOOTHLY TURN
      001034 85 60 82         [24] 4350 	mov	dpl,_Steering_Servo_direction_1_194
      001037 85 61 83         [24] 4351 	mov	dph,(_Steering_Servo_direction_1_194 + 1)
      00103A 12 16 17         [24] 4352 	lcall	___uint2fs
      00103D AA 82            [24] 4353 	mov	r2,dpl
      00103F AB 83            [24] 4354 	mov	r3,dph
      001041 AC F0            [24] 4355 	mov	r4,b
      001043 FD               [12] 4356 	mov	r5,a
      001044 74 66            [12] 4357 	mov	a,#0x66
      001046 C0 E0            [24] 4358 	push	acc
      001048 C0 E0            [24] 4359 	push	acc
      00104A 74 86            [12] 4360 	mov	a,#0x86
      00104C C0 E0            [24] 4361 	push	acc
      00104E 74 40            [12] 4362 	mov	a,#0x40
      001050 C0 E0            [24] 4363 	push	acc
      001052 8A 82            [24] 4364 	mov	dpl,r2
      001054 8B 83            [24] 4365 	mov	dph,r3
      001056 8C F0            [24] 4366 	mov	b,r4
      001058 ED               [12] 4367 	mov	a,r5
      001059 12 1C AF         [24] 4368 	lcall	___fsdiv
      00105C AA 82            [24] 4369 	mov	r2,dpl
      00105E AB 83            [24] 4370 	mov	r3,dph
      001060 AC F0            [24] 4371 	mov	r4,b
      001062 FD               [12] 4372 	mov	r5,a
      001063 E5 81            [12] 4373 	mov	a,sp
      001065 24 FC            [12] 4374 	add	a,#0xfc
      001067 F5 81            [12] 4375 	mov	sp,a
      001069 85 3C 82         [24] 4376 	mov	dpl,_PW_CENTER_RUDDER
      00106C 85 3D 83         [24] 4377 	mov	dph,(_PW_CENTER_RUDDER + 1)
      00106F C0 05            [24] 4378 	push	ar5
      001071 C0 04            [24] 4379 	push	ar4
      001073 C0 03            [24] 4380 	push	ar3
      001075 C0 02            [24] 4381 	push	ar2
      001077 12 16 17         [24] 4382 	lcall	___uint2fs
      00107A A8 82            [24] 4383 	mov	r0,dpl
      00107C A9 83            [24] 4384 	mov	r1,dph
      00107E AE F0            [24] 4385 	mov	r6,b
      001080 FF               [12] 4386 	mov	r7,a
      001081 D0 02            [24] 4387 	pop	ar2
      001083 D0 03            [24] 4388 	pop	ar3
      001085 D0 04            [24] 4389 	pop	ar4
      001087 D0 05            [24] 4390 	pop	ar5
      001089 C0 02            [24] 4391 	push	ar2
      00108B C0 03            [24] 4392 	push	ar3
      00108D C0 04            [24] 4393 	push	ar4
      00108F C0 05            [24] 4394 	push	ar5
      001091 88 82            [24] 4395 	mov	dpl,r0
      001093 89 83            [24] 4396 	mov	dph,r1
      001095 8E F0            [24] 4397 	mov	b,r6
      001097 EF               [12] 4398 	mov	a,r7
      001098 12 13 8A         [24] 4399 	lcall	___fssub
      00109B AC 82            [24] 4400 	mov	r4,dpl
      00109D AD 83            [24] 4401 	mov	r5,dph
      00109F AE F0            [24] 4402 	mov	r6,b
      0010A1 FF               [12] 4403 	mov	r7,a
      0010A2 E5 81            [12] 4404 	mov	a,sp
      0010A4 24 FC            [12] 4405 	add	a,#0xfc
      0010A6 F5 81            [12] 4406 	mov	sp,a
      0010A8 85 46 82         [24] 4407 	mov	dpl,_RUDDER_PW
      0010AB 85 47 83         [24] 4408 	mov	dph,(_RUDDER_PW + 1)
      0010AE C0 07            [24] 4409 	push	ar7
      0010B0 C0 06            [24] 4410 	push	ar6
      0010B2 C0 05            [24] 4411 	push	ar5
      0010B4 C0 04            [24] 4412 	push	ar4
      0010B6 12 16 17         [24] 4413 	lcall	___uint2fs
      0010B9 A8 82            [24] 4414 	mov	r0,dpl
      0010BB A9 83            [24] 4415 	mov	r1,dph
      0010BD AA F0            [24] 4416 	mov	r2,b
      0010BF FB               [12] 4417 	mov	r3,a
      0010C0 D0 04            [24] 4418 	pop	ar4
      0010C2 D0 05            [24] 4419 	pop	ar5
      0010C4 D0 06            [24] 4420 	pop	ar6
      0010C6 D0 07            [24] 4421 	pop	ar7
      0010C8 C0 04            [24] 4422 	push	ar4
      0010CA C0 05            [24] 4423 	push	ar5
      0010CC C0 06            [24] 4424 	push	ar6
      0010CE C0 07            [24] 4425 	push	ar7
      0010D0 88 82            [24] 4426 	mov	dpl,r0
      0010D2 89 83            [24] 4427 	mov	dph,r1
      0010D4 8A F0            [24] 4428 	mov	b,r2
      0010D6 EB               [12] 4429 	mov	a,r3
      0010D7 12 13 95         [24] 4430 	lcall	___fsgt
      0010DA AF 82            [24] 4431 	mov	r7,dpl
      0010DC E5 81            [12] 4432 	mov	a,sp
      0010DE 24 FC            [12] 4433 	add	a,#0xfc
      0010E0 F5 81            [12] 4434 	mov	sp,a
      0010E2 EF               [12] 4435 	mov	a,r7
      0010E3 60 03            [24] 4436 	jz	00129$
      0010E5 02 11 6F         [24] 4437 	ljmp	00102$
      0010E8                       4438 00129$:
                           001000  4439 	C$lab6.c$524$1$195 ==.
                                   4440 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:524: RUDDER_PW = PW_CENTER_RUDDER - (float)(direction)/4.2;
      0010E8 85 60 82         [24] 4441 	mov	dpl,_Steering_Servo_direction_1_194
      0010EB 85 61 83         [24] 4442 	mov	dph,(_Steering_Servo_direction_1_194 + 1)
      0010EE 12 16 17         [24] 4443 	lcall	___uint2fs
      0010F1 AC 82            [24] 4444 	mov	r4,dpl
      0010F3 AD 83            [24] 4445 	mov	r5,dph
      0010F5 AE F0            [24] 4446 	mov	r6,b
      0010F7 FF               [12] 4447 	mov	r7,a
      0010F8 74 66            [12] 4448 	mov	a,#0x66
      0010FA C0 E0            [24] 4449 	push	acc
      0010FC C0 E0            [24] 4450 	push	acc
      0010FE 74 86            [12] 4451 	mov	a,#0x86
      001100 C0 E0            [24] 4452 	push	acc
      001102 74 40            [12] 4453 	mov	a,#0x40
      001104 C0 E0            [24] 4454 	push	acc
      001106 8C 82            [24] 4455 	mov	dpl,r4
      001108 8D 83            [24] 4456 	mov	dph,r5
      00110A 8E F0            [24] 4457 	mov	b,r6
      00110C EF               [12] 4458 	mov	a,r7
      00110D 12 1C AF         [24] 4459 	lcall	___fsdiv
      001110 AC 82            [24] 4460 	mov	r4,dpl
      001112 AD 83            [24] 4461 	mov	r5,dph
      001114 AE F0            [24] 4462 	mov	r6,b
      001116 FF               [12] 4463 	mov	r7,a
      001117 E5 81            [12] 4464 	mov	a,sp
      001119 24 FC            [12] 4465 	add	a,#0xfc
      00111B F5 81            [12] 4466 	mov	sp,a
      00111D 85 3C 82         [24] 4467 	mov	dpl,_PW_CENTER_RUDDER
      001120 85 3D 83         [24] 4468 	mov	dph,(_PW_CENTER_RUDDER + 1)
      001123 C0 07            [24] 4469 	push	ar7
      001125 C0 06            [24] 4470 	push	ar6
      001127 C0 05            [24] 4471 	push	ar5
      001129 C0 04            [24] 4472 	push	ar4
      00112B 12 16 17         [24] 4473 	lcall	___uint2fs
      00112E A8 82            [24] 4474 	mov	r0,dpl
      001130 A9 83            [24] 4475 	mov	r1,dph
      001132 AA F0            [24] 4476 	mov	r2,b
      001134 FB               [12] 4477 	mov	r3,a
      001135 D0 04            [24] 4478 	pop	ar4
      001137 D0 05            [24] 4479 	pop	ar5
      001139 D0 06            [24] 4480 	pop	ar6
      00113B D0 07            [24] 4481 	pop	ar7
      00113D C0 04            [24] 4482 	push	ar4
      00113F C0 05            [24] 4483 	push	ar5
      001141 C0 06            [24] 4484 	push	ar6
      001143 C0 07            [24] 4485 	push	ar7
      001145 88 82            [24] 4486 	mov	dpl,r0
      001147 89 83            [24] 4487 	mov	dph,r1
      001149 8A F0            [24] 4488 	mov	b,r2
      00114B EB               [12] 4489 	mov	a,r3
      00114C 12 13 8A         [24] 4490 	lcall	___fssub
      00114F AC 82            [24] 4491 	mov	r4,dpl
      001151 AD 83            [24] 4492 	mov	r5,dph
      001153 AE F0            [24] 4493 	mov	r6,b
      001155 FF               [12] 4494 	mov	r7,a
      001156 E5 81            [12] 4495 	mov	a,sp
      001158 24 FC            [12] 4496 	add	a,#0xfc
      00115A F5 81            [12] 4497 	mov	sp,a
      00115C 8C 82            [24] 4498 	mov	dpl,r4
      00115E 8D 83            [24] 4499 	mov	dph,r5
      001160 8E F0            [24] 4500 	mov	b,r6
      001162 EF               [12] 4501 	mov	a,r7
      001163 12 16 23         [24] 4502 	lcall	___fs2uint
      001166 85 82 46         [24] 4503 	mov	_RUDDER_PW,dpl
      001169 85 83 47         [24] 4504 	mov	(_RUDDER_PW + 1),dph
      00116C 02 12 E8         [24] 4505 	ljmp	00113$
      00116F                       4506 00102$:
                           001087  4507 	C$lab6.c$528$3$198 ==.
                                   4508 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:528: RUDDER_PW -= 10;
      00116F E5 46            [12] 4509 	mov	a,_RUDDER_PW
      001171 24 F6            [12] 4510 	add	a,#0xF6
      001173 F5 46            [12] 4511 	mov	_RUDDER_PW,a
      001175 E5 47            [12] 4512 	mov	a,(_RUDDER_PW + 1)
      001177 34 FF            [12] 4513 	addc	a,#0xFF
      001179 F5 47            [12] 4514 	mov	(_RUDDER_PW + 1),a
      00117B 02 12 E8         [24] 4515 	ljmp	00113$
      00117E                       4516 00112$:
                           001096  4517 	C$lab6.c$531$1$195 ==.
                                   4518 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:531: else if ( direction == 0 || direction ==3600)       ///GO STRAIGHT
      00117E E5 60            [12] 4519 	mov	a,_Steering_Servo_direction_1_194
      001180 45 61            [12] 4520 	orl	a,(_Steering_Servo_direction_1_194 + 1)
      001182 60 0A            [24] 4521 	jz	00107$
      001184 74 10            [12] 4522 	mov	a,#0x10
      001186 B5 60 0E         [24] 4523 	cjne	a,_Steering_Servo_direction_1_194,00108$
      001189 74 0E            [12] 4524 	mov	a,#0x0E
      00118B B5 61 09         [24] 4525 	cjne	a,(_Steering_Servo_direction_1_194 + 1),00108$
      00118E                       4526 00107$:
                           0010A6  4527 	C$lab6.c$533$2$199 ==.
                                   4528 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:533: RUDDER_PW=PW_CENTER_RUDDER;
      00118E 85 3C 46         [24] 4529 	mov	_RUDDER_PW,_PW_CENTER_RUDDER
      001191 85 3D 47         [24] 4530 	mov	(_RUDDER_PW + 1),(_PW_CENTER_RUDDER + 1)
      001194 02 12 E8         [24] 4531 	ljmp	00113$
      001197                       4532 00108$:
                           0010AF  4533 	C$lab6.c$537$2$200 ==.
                                   4534 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:537: if (RUDDER_PW >= PW_CENTER_RUDDER + (float)(3600-direction)/1.9)
      001197 74 10            [12] 4535 	mov	a,#0x10
      001199 C3               [12] 4536 	clr	c
      00119A 95 60            [12] 4537 	subb	a,_Steering_Servo_direction_1_194
      00119C F5 82            [12] 4538 	mov	dpl,a
      00119E 74 0E            [12] 4539 	mov	a,#0x0E
      0011A0 95 61            [12] 4540 	subb	a,(_Steering_Servo_direction_1_194 + 1)
      0011A2 F5 83            [12] 4541 	mov	dph,a
      0011A4 12 16 17         [24] 4542 	lcall	___uint2fs
      0011A7 AC 82            [24] 4543 	mov	r4,dpl
      0011A9 AD 83            [24] 4544 	mov	r5,dph
      0011AB AE F0            [24] 4545 	mov	r6,b
      0011AD FF               [12] 4546 	mov	r7,a
      0011AE 74 33            [12] 4547 	mov	a,#0x33
      0011B0 C0 E0            [24] 4548 	push	acc
      0011B2 C0 E0            [24] 4549 	push	acc
      0011B4 74 F3            [12] 4550 	mov	a,#0xF3
      0011B6 C0 E0            [24] 4551 	push	acc
      0011B8 C4               [12] 4552 	swap	a
      0011B9 C0 E0            [24] 4553 	push	acc
      0011BB 8C 82            [24] 4554 	mov	dpl,r4
      0011BD 8D 83            [24] 4555 	mov	dph,r5
      0011BF 8E F0            [24] 4556 	mov	b,r6
      0011C1 EF               [12] 4557 	mov	a,r7
      0011C2 12 1C AF         [24] 4558 	lcall	___fsdiv
      0011C5 AC 82            [24] 4559 	mov	r4,dpl
      0011C7 AD 83            [24] 4560 	mov	r5,dph
      0011C9 AE F0            [24] 4561 	mov	r6,b
      0011CB FF               [12] 4562 	mov	r7,a
      0011CC E5 81            [12] 4563 	mov	a,sp
      0011CE 24 FC            [12] 4564 	add	a,#0xfc
      0011D0 F5 81            [12] 4565 	mov	sp,a
      0011D2 85 3C 82         [24] 4566 	mov	dpl,_PW_CENTER_RUDDER
      0011D5 85 3D 83         [24] 4567 	mov	dph,(_PW_CENTER_RUDDER + 1)
      0011D8 C0 07            [24] 4568 	push	ar7
      0011DA C0 06            [24] 4569 	push	ar6
      0011DC C0 05            [24] 4570 	push	ar5
      0011DE C0 04            [24] 4571 	push	ar4
      0011E0 12 16 17         [24] 4572 	lcall	___uint2fs
      0011E3 A8 82            [24] 4573 	mov	r0,dpl
      0011E5 A9 83            [24] 4574 	mov	r1,dph
      0011E7 AA F0            [24] 4575 	mov	r2,b
      0011E9 FB               [12] 4576 	mov	r3,a
      0011EA D0 04            [24] 4577 	pop	ar4
      0011EC D0 05            [24] 4578 	pop	ar5
      0011EE D0 06            [24] 4579 	pop	ar6
      0011F0 D0 07            [24] 4580 	pop	ar7
      0011F2 C0 04            [24] 4581 	push	ar4
      0011F4 C0 05            [24] 4582 	push	ar5
      0011F6 C0 06            [24] 4583 	push	ar6
      0011F8 C0 07            [24] 4584 	push	ar7
      0011FA 88 82            [24] 4585 	mov	dpl,r0
      0011FC 89 83            [24] 4586 	mov	dph,r1
      0011FE 8A F0            [24] 4587 	mov	b,r2
      001200 EB               [12] 4588 	mov	a,r3
      001201 12 15 75         [24] 4589 	lcall	___fsadd
      001204 AC 82            [24] 4590 	mov	r4,dpl
      001206 AD 83            [24] 4591 	mov	r5,dph
      001208 AE F0            [24] 4592 	mov	r6,b
      00120A FF               [12] 4593 	mov	r7,a
      00120B E5 81            [12] 4594 	mov	a,sp
      00120D 24 FC            [12] 4595 	add	a,#0xfc
      00120F F5 81            [12] 4596 	mov	sp,a
      001211 85 46 82         [24] 4597 	mov	dpl,_RUDDER_PW
      001214 85 47 83         [24] 4598 	mov	dph,(_RUDDER_PW + 1)
      001217 C0 07            [24] 4599 	push	ar7
      001219 C0 06            [24] 4600 	push	ar6
      00121B C0 05            [24] 4601 	push	ar5
      00121D C0 04            [24] 4602 	push	ar4
      00121F 12 16 17         [24] 4603 	lcall	___uint2fs
      001222 A8 82            [24] 4604 	mov	r0,dpl
      001224 A9 83            [24] 4605 	mov	r1,dph
      001226 AA F0            [24] 4606 	mov	r2,b
      001228 FB               [12] 4607 	mov	r3,a
      001229 D0 04            [24] 4608 	pop	ar4
      00122B D0 05            [24] 4609 	pop	ar5
      00122D D0 06            [24] 4610 	pop	ar6
      00122F D0 07            [24] 4611 	pop	ar7
      001231 C0 04            [24] 4612 	push	ar4
      001233 C0 05            [24] 4613 	push	ar5
      001235 C0 06            [24] 4614 	push	ar6
      001237 C0 07            [24] 4615 	push	ar7
      001239 88 82            [24] 4616 	mov	dpl,r0
      00123B 89 83            [24] 4617 	mov	dph,r1
      00123D 8A F0            [24] 4618 	mov	b,r2
      00123F EB               [12] 4619 	mov	a,r3
      001240 12 13 E0         [24] 4620 	lcall	___fslt
      001243 AF 82            [24] 4621 	mov	r7,dpl
      001245 E5 81            [12] 4622 	mov	a,sp
      001247 24 FC            [12] 4623 	add	a,#0xfc
      001249 F5 81            [12] 4624 	mov	sp,a
      00124B EF               [12] 4625 	mov	a,r7
      00124C 60 03            [24] 4626 	jz	00133$
      00124E 02 12 DD         [24] 4627 	ljmp	00105$
      001251                       4628 00133$:
                           001169  4629 	C$lab6.c$539$3$201 ==.
                                   4630 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:539: RUDDER_PW = PW_CENTER_RUDDER + (float)(3600-direction)/1.9;
      001251 74 10            [12] 4631 	mov	a,#0x10
      001253 C3               [12] 4632 	clr	c
      001254 95 60            [12] 4633 	subb	a,_Steering_Servo_direction_1_194
      001256 F5 82            [12] 4634 	mov	dpl,a
      001258 74 0E            [12] 4635 	mov	a,#0x0E
      00125A 95 61            [12] 4636 	subb	a,(_Steering_Servo_direction_1_194 + 1)
      00125C F5 83            [12] 4637 	mov	dph,a
      00125E 12 16 17         [24] 4638 	lcall	___uint2fs
      001261 AC 82            [24] 4639 	mov	r4,dpl
      001263 AD 83            [24] 4640 	mov	r5,dph
      001265 AE F0            [24] 4641 	mov	r6,b
      001267 FF               [12] 4642 	mov	r7,a
      001268 74 33            [12] 4643 	mov	a,#0x33
      00126A C0 E0            [24] 4644 	push	acc
      00126C C0 E0            [24] 4645 	push	acc
      00126E 74 F3            [12] 4646 	mov	a,#0xF3
      001270 C0 E0            [24] 4647 	push	acc
      001272 C4               [12] 4648 	swap	a
      001273 C0 E0            [24] 4649 	push	acc
      001275 8C 82            [24] 4650 	mov	dpl,r4
      001277 8D 83            [24] 4651 	mov	dph,r5
      001279 8E F0            [24] 4652 	mov	b,r6
      00127B EF               [12] 4653 	mov	a,r7
      00127C 12 1C AF         [24] 4654 	lcall	___fsdiv
      00127F AC 82            [24] 4655 	mov	r4,dpl
      001281 AD 83            [24] 4656 	mov	r5,dph
      001283 AE F0            [24] 4657 	mov	r6,b
      001285 FF               [12] 4658 	mov	r7,a
      001286 E5 81            [12] 4659 	mov	a,sp
      001288 24 FC            [12] 4660 	add	a,#0xfc
      00128A F5 81            [12] 4661 	mov	sp,a
      00128C 85 3C 82         [24] 4662 	mov	dpl,_PW_CENTER_RUDDER
      00128F 85 3D 83         [24] 4663 	mov	dph,(_PW_CENTER_RUDDER + 1)
      001292 C0 07            [24] 4664 	push	ar7
      001294 C0 06            [24] 4665 	push	ar6
      001296 C0 05            [24] 4666 	push	ar5
      001298 C0 04            [24] 4667 	push	ar4
      00129A 12 16 17         [24] 4668 	lcall	___uint2fs
      00129D A8 82            [24] 4669 	mov	r0,dpl
      00129F A9 83            [24] 4670 	mov	r1,dph
      0012A1 AA F0            [24] 4671 	mov	r2,b
      0012A3 FB               [12] 4672 	mov	r3,a
      0012A4 D0 04            [24] 4673 	pop	ar4
      0012A6 D0 05            [24] 4674 	pop	ar5
      0012A8 D0 06            [24] 4675 	pop	ar6
      0012AA D0 07            [24] 4676 	pop	ar7
      0012AC C0 04            [24] 4677 	push	ar4
      0012AE C0 05            [24] 4678 	push	ar5
      0012B0 C0 06            [24] 4679 	push	ar6
      0012B2 C0 07            [24] 4680 	push	ar7
      0012B4 88 82            [24] 4681 	mov	dpl,r0
      0012B6 89 83            [24] 4682 	mov	dph,r1
      0012B8 8A F0            [24] 4683 	mov	b,r2
      0012BA EB               [12] 4684 	mov	a,r3
      0012BB 12 15 75         [24] 4685 	lcall	___fsadd
      0012BE AC 82            [24] 4686 	mov	r4,dpl
      0012C0 AD 83            [24] 4687 	mov	r5,dph
      0012C2 AE F0            [24] 4688 	mov	r6,b
      0012C4 FF               [12] 4689 	mov	r7,a
      0012C5 E5 81            [12] 4690 	mov	a,sp
      0012C7 24 FC            [12] 4691 	add	a,#0xfc
      0012C9 F5 81            [12] 4692 	mov	sp,a
      0012CB 8C 82            [24] 4693 	mov	dpl,r4
      0012CD 8D 83            [24] 4694 	mov	dph,r5
      0012CF 8E F0            [24] 4695 	mov	b,r6
      0012D1 EF               [12] 4696 	mov	a,r7
      0012D2 12 16 23         [24] 4697 	lcall	___fs2uint
      0012D5 85 82 46         [24] 4698 	mov	_RUDDER_PW,dpl
      0012D8 85 83 47         [24] 4699 	mov	(_RUDDER_PW + 1),dph
      0012DB 80 0B            [24] 4700 	sjmp	00113$
      0012DD                       4701 00105$:
                           0011F5  4702 	C$lab6.c$543$3$202 ==.
                                   4703 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:543: RUDDER_PW += 10;
      0012DD 74 0A            [12] 4704 	mov	a,#0x0A
      0012DF 25 46            [12] 4705 	add	a,_RUDDER_PW
      0012E1 F5 46            [12] 4706 	mov	_RUDDER_PW,a
      0012E3 E4               [12] 4707 	clr	a
      0012E4 35 47            [12] 4708 	addc	a,(_RUDDER_PW + 1)
      0012E6 F5 47            [12] 4709 	mov	(_RUDDER_PW + 1),a
      0012E8                       4710 00113$:
                           001200  4711 	C$lab6.c$549$1$195 ==.
                                   4712 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:549: RDR_lo_to_hi= 0xFFFF - RUDDER_PW;
      0012E8 74 FF            [12] 4713 	mov	a,#0xFF
      0012EA C3               [12] 4714 	clr	c
      0012EB 95 46            [12] 4715 	subb	a,_RUDDER_PW
      0012ED F5 48            [12] 4716 	mov	_RDR_lo_to_hi,a
      0012EF 74 FF            [12] 4717 	mov	a,#0xFF
      0012F1 95 47            [12] 4718 	subb	a,(_RUDDER_PW + 1)
      0012F3 F5 49            [12] 4719 	mov	(_RDR_lo_to_hi + 1),a
                           00120D  4720 	C$lab6.c$550$1$195 ==.
                                   4721 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:550: PCA0CP0 = RDR_lo_to_hi;
      0012F5 85 48 EA         [24] 4722 	mov	((_PCA0CP0 >> 0) & 0xFF),_RDR_lo_to_hi
      0012F8 85 49 FA         [24] 4723 	mov	((_PCA0CP0 >> 8) & 0xFF),(_RDR_lo_to_hi + 1)
                           001213  4724 	C$lab6.c$551$1$195 ==.
                           001213  4725 	XG$Steering_Servo$0$0 ==.
      0012FB 22               [24] 4726 	ret
                                   4727 ;------------------------------------------------------------
                                   4728 ;Allocation info for local variables in function 'start'
                                   4729 ;------------------------------------------------------------
                           001214  4730 	G$start$0$0 ==.
                           001214  4731 	C$lab6.c$553$1$195 ==.
                                   4732 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:553: void start(void)            ///WAITS UNTIL '*' IS ENTERED
                                   4733 ;	-----------------------------------------
                                   4734 ;	 function start
                                   4735 ;	-----------------------------------------
      0012FC                       4736 _start:
                           001214  4737 	C$lab6.c$555$1$204 ==.
                                   4738 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:555: while (read_keypad() != '*') wait();
      0012FC                       4739 00101$:
      0012FC 12 02 02         [24] 4740 	lcall	_read_keypad
      0012FF AF 82            [24] 4741 	mov	r7,dpl
      001301 BF 2A 02         [24] 4742 	cjne	r7,#0x2A,00112$
      001304 80 05            [24] 4743 	sjmp	00104$
      001306                       4744 00112$:
      001306 12 13 0C         [24] 4745 	lcall	_wait
      001309 80 F1            [24] 4746 	sjmp	00101$
      00130B                       4747 00104$:
                           001223  4748 	C$lab6.c$556$1$204 ==.
                           001223  4749 	XG$start$0$0 ==.
      00130B 22               [24] 4750 	ret
                                   4751 ;------------------------------------------------------------
                                   4752 ;Allocation info for local variables in function 'wait'
                                   4753 ;------------------------------------------------------------
                                   4754 ;old_count                 Allocated to registers r6 r7 
                                   4755 ;------------------------------------------------------------
                           001224  4756 	G$wait$0$0 ==.
                           001224  4757 	C$lab6.c$560$1$204 ==.
                                   4758 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:560: void wait(void)
                                   4759 ;	-----------------------------------------
                                   4760 ;	 function wait
                                   4761 ;	-----------------------------------------
      00130C                       4762 _wait:
                           001224  4763 	C$lab6.c$562$1$206 ==.
                                   4764 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:562: int old_count = count+1;
      00130C 74 01            [12] 4765 	mov	a,#0x01
      00130E 25 32            [12] 4766 	add	a,_count
      001310 FE               [12] 4767 	mov	r6,a
      001311 E4               [12] 4768 	clr	a
      001312 35 33            [12] 4769 	addc	a,(_count + 1)
      001314 FF               [12] 4770 	mov	r7,a
                           00122D  4771 	C$lab6.c$563$1$206 ==.
                                   4772 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:563: while (old_count> count);
      001315                       4773 00101$:
      001315 C3               [12] 4774 	clr	c
      001316 E5 32            [12] 4775 	mov	a,_count
      001318 9E               [12] 4776 	subb	a,r6
      001319 E5 33            [12] 4777 	mov	a,(_count + 1)
      00131B 64 80            [12] 4778 	xrl	a,#0x80
      00131D 8F F0            [24] 4779 	mov	b,r7
      00131F 63 F0 80         [24] 4780 	xrl	b,#0x80
      001322 95 F0            [12] 4781 	subb	a,b
      001324 40 EF            [24] 4782 	jc	00101$
                           00123E  4783 	C$lab6.c$564$1$206 ==.
                           00123E  4784 	XG$wait$0$0 ==.
      001326 22               [24] 4785 	ret
                                   4786 ;------------------------------------------------------------
                                   4787 ;Allocation info for local variables in function 'Port_Init'
                                   4788 ;------------------------------------------------------------
                           00123F  4789 	G$Port_Init$0$0 ==.
                           00123F  4790 	C$lab6.c$566$1$206 ==.
                                   4791 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:566: void Port_Init(void)
                                   4792 ;	-----------------------------------------
                                   4793 ;	 function Port_Init
                                   4794 ;	-----------------------------------------
      001327                       4795 _Port_Init:
                           00123F  4796 	C$lab6.c$568$1$208 ==.
                                   4797 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:568: P0MDOUT &= ~0x32;
      001327 AF A4            [24] 4798 	mov	r7,_P0MDOUT
      001329 74 CD            [12] 4799 	mov	a,#0xCD
      00132B 5F               [12] 4800 	anl	a,r7
      00132C F5 A4            [12] 4801 	mov	_P0MDOUT,a
                           001246  4802 	C$lab6.c$570$1$208 ==.
                                   4803 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:570: P1MDIN  &= ~0x20;
      00132E AF BD            [24] 4804 	mov	r7,_P1MDIN
      001330 74 DF            [12] 4805 	mov	a,#0xDF
      001332 5F               [12] 4806 	anl	a,r7
      001333 F5 BD            [12] 4807 	mov	_P1MDIN,a
                           00124D  4808 	C$lab6.c$572$1$208 ==.
                                   4809 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:572: P1MDOUT |= 0x0F;
      001335 43 A5 0F         [24] 4810 	orl	_P1MDOUT,#0x0F
                           001250  4811 	C$lab6.c$573$1$208 ==.
                                   4812 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:573: P1MDOUT &= 0x20;
      001338 53 A5 20         [24] 4813 	anl	_P1MDOUT,#0x20
                           001253  4814 	C$lab6.c$575$1$208 ==.
                                   4815 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:575: P1 		 = 0x20;
      00133B 75 90 20         [24] 4816 	mov	_P1,#0x20
                           001256  4817 	C$lab6.c$578$1$208 ==.
                           001256  4818 	XG$Port_Init$0$0 ==.
      00133E 22               [24] 4819 	ret
                                   4820 ;------------------------------------------------------------
                                   4821 ;Allocation info for local variables in function 'PCA_Init'
                                   4822 ;------------------------------------------------------------
                           001257  4823 	G$PCA_Init$0$0 ==.
                           001257  4824 	C$lab6.c$580$1$208 ==.
                                   4825 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:580: void PCA_Init(void)
                                   4826 ;	-----------------------------------------
                                   4827 ;	 function PCA_Init
                                   4828 ;	-----------------------------------------
      00133F                       4829 _PCA_Init:
                           001257  4830 	C$lab6.c$582$1$210 ==.
                                   4831 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:582: PCA0MD   = 0x81;
      00133F 75 D9 81         [24] 4832 	mov	_PCA0MD,#0x81
                           00125A  4833 	C$lab6.c$583$1$210 ==.
                                   4834 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:583: PCA0CPM0 = 0xC2;    //CCM0 in 16-bit compare mode FOR STEERING
      001342 75 DA C2         [24] 4835 	mov	_PCA0CPM0,#0xC2
                           00125D  4836 	C$lab6.c$584$1$210 ==.
                                   4837 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:584: PCA0CPM1 = 0xC2;
      001345 75 DB C2         [24] 4838 	mov	_PCA0CPM1,#0xC2
                           001260  4839 	C$lab6.c$585$1$210 ==.
                                   4840 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:585: PCA0CPM2 = 0xC2;    //CCM2 in 16-bit compare mode FOR MOTOR
      001348 75 DC C2         [24] 4841 	mov	_PCA0CPM2,#0xC2
                           001263  4842 	C$lab6.c$586$1$210 ==.
                                   4843 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:586: PCA0CPM3 = 0XC2;
      00134B 75 DD C2         [24] 4844 	mov	_PCA0CPM3,#0xC2
                           001266  4845 	C$lab6.c$587$1$210 ==.
                                   4846 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:587: PCA0CN 	 = 0x40;    //Enable PCA counter
      00134E 75 D8 40         [24] 4847 	mov	_PCA0CN,#0x40
                           001269  4848 	C$lab6.c$588$1$210 ==.
                                   4849 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:588: EIE1    |= 0x08;    //Enable PCA interrupt
      001351 43 E6 08         [24] 4850 	orl	_EIE1,#0x08
                           00126C  4851 	C$lab6.c$589$1$210 ==.
                                   4852 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:589: EA       = 1   ;    //Enable global interrupts
      001354 D2 AF            [12] 4853 	setb	_EA
                           00126E  4854 	C$lab6.c$590$1$210 ==.
                           00126E  4855 	XG$PCA_Init$0$0 ==.
      001356 22               [24] 4856 	ret
                                   4857 ;------------------------------------------------------------
                                   4858 ;Allocation info for local variables in function 'XBR0_Init'
                                   4859 ;------------------------------------------------------------
                           00126F  4860 	G$XBR0_Init$0$0 ==.
                           00126F  4861 	C$lab6.c$593$1$210 ==.
                                   4862 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:593: void XBR0_Init(void)
                                   4863 ;	-----------------------------------------
                                   4864 ;	 function XBR0_Init
                                   4865 ;	-----------------------------------------
      001357                       4866 _XBR0_Init:
                           00126F  4867 	C$lab6.c$595$1$212 ==.
                                   4868 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:595: XBR0 = 0x27;
      001357 75 E1 27         [24] 4869 	mov	_XBR0,#0x27
                           001272  4870 	C$lab6.c$596$1$212 ==.
                           001272  4871 	XG$XBR0_Init$0$0 ==.
      00135A 22               [24] 4872 	ret
                                   4873 ;------------------------------------------------------------
                                   4874 ;Allocation info for local variables in function 'SMB_Init'
                                   4875 ;------------------------------------------------------------
                           001273  4876 	G$SMB_Init$0$0 ==.
                           001273  4877 	C$lab6.c$598$1$212 ==.
                                   4878 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:598: void SMB_Init(void)
                                   4879 ;	-----------------------------------------
                                   4880 ;	 function SMB_Init
                                   4881 ;	-----------------------------------------
      00135B                       4882 _SMB_Init:
                           001273  4883 	C$lab6.c$600$1$214 ==.
                                   4884 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:600: SMB0CR =0x93;
      00135B 75 CF 93         [24] 4885 	mov	_SMB0CR,#0x93
                           001276  4886 	C$lab6.c$601$1$214 ==.
                                   4887 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:601: ENSMB =1;
      00135E D2 C6            [12] 4888 	setb	_ENSMB
                           001278  4889 	C$lab6.c$602$1$214 ==.
                           001278  4890 	XG$SMB_Init$0$0 ==.
      001360 22               [24] 4891 	ret
                                   4892 ;------------------------------------------------------------
                                   4893 ;Allocation info for local variables in function 'ADC_Init'
                                   4894 ;------------------------------------------------------------
                           001279  4895 	G$ADC_Init$0$0 ==.
                           001279  4896 	C$lab6.c$604$1$214 ==.
                                   4897 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:604: void ADC_Init(void)								/////SETS ADC 
                                   4898 ;	-----------------------------------------
                                   4899 ;	 function ADC_Init
                                   4900 ;	-----------------------------------------
      001361                       4901 _ADC_Init:
                           001279  4902 	C$lab6.c$606$1$216 ==.
                                   4903 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:606: REF0CN = 0x03;
      001361 75 D1 03         [24] 4904 	mov	_REF0CN,#0x03
                           00127C  4905 	C$lab6.c$607$1$216 ==.
                                   4906 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:607: ADC1CN = 0x80;
      001364 75 AA 80         [24] 4907 	mov	_ADC1CN,#0x80
                           00127F  4908 	C$lab6.c$608$1$216 ==.
                                   4909 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:608: ADC1CF |= 0x01;
      001367 43 AB 01         [24] 4910 	orl	_ADC1CF,#0x01
                           001282  4911 	C$lab6.c$609$1$216 ==.
                           001282  4912 	XG$ADC_Init$0$0 ==.
      00136A 22               [24] 4913 	ret
                                   4914 ;------------------------------------------------------------
                                   4915 ;Allocation info for local variables in function 'PCA_ISR'
                                   4916 ;------------------------------------------------------------
                           001283  4917 	G$PCA_ISR$0$0 ==.
                           001283  4918 	C$lab6.c$611$1$216 ==.
                                   4919 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:611: void PCA_ISR ( void ) __interrupt 9
                                   4920 ;	-----------------------------------------
                                   4921 ;	 function PCA_ISR
                                   4922 ;	-----------------------------------------
      00136B                       4923 _PCA_ISR:
      00136B C0 E0            [24] 4924 	push	acc
      00136D C0 D0            [24] 4925 	push	psw
                           001287  4926 	C$lab6.c$614$1$218 ==.
                                   4927 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:614: if (CF)
                           001287  4928 	C$lab6.c$616$2$219 ==.
                                   4929 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:616: CF =0;
      00136F 10 DF 02         [24] 4930 	jbc	_CF,00108$
      001372 80 0E            [24] 4931 	sjmp	00102$
      001374                       4932 00108$:
                           00128C  4933 	C$lab6.c$617$2$219 ==.
                                   4934 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:617: PCA0 = PCA_START;
      001374 75 E9 00         [24] 4935 	mov	((_PCA0 >> 0) & 0xFF),#0x00
      001377 75 F9 70         [24] 4936 	mov	((_PCA0 >> 8) & 0xFF),#0x70
                           001292  4937 	C$lab6.c$618$2$219 ==.
                                   4938 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:618: count++;
      00137A 05 32            [12] 4939 	inc	_count
      00137C E4               [12] 4940 	clr	a
      00137D B5 32 02         [24] 4941 	cjne	a,_count,00109$
      001380 05 33            [12] 4942 	inc	(_count + 1)
      001382                       4943 00109$:
      001382                       4944 00102$:
                           00129A  4945 	C$lab6.c$623$1$218 ==.
                                   4946 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:623: PCA0CN &= 0xC0;
      001382 53 D8 C0         [24] 4947 	anl	_PCA0CN,#0xC0
      001385 D0 D0            [24] 4948 	pop	psw
      001387 D0 E0            [24] 4949 	pop	acc
                           0012A1  4950 	C$lab6.c$624$1$218 ==.
                           0012A1  4951 	XG$PCA_ISR$0$0 ==.
      001389 32               [24] 4952 	reti
                                   4953 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   4954 ;	eliminated unneeded push/pop dpl
                                   4955 ;	eliminated unneeded push/pop dph
                                   4956 ;	eliminated unneeded push/pop b
                                   4957 	.area CSEG    (CODE)
                                   4958 	.area CONST   (CODE)
                           000000  4959 Flab6$__str_0$0$0 == .
      001EB8                       4960 ___str_0:
      001EB8 0A                    4961 	.db 0x0A
      001EB9 54 79 70 65 20 64 69  4962 	.ascii "Type digits; end w/#"
             67 69 74 73 3B 20 65
             6E 64 20 77 2F 23
      001ECD 00                    4963 	.db 0x00
                           000016  4964 Flab6$__str_1$0$0 == .
      001ECE                       4965 ___str_1:
      001ECE 20 20 20 20 20 25 63  4966 	.ascii "     %c%c%c%c%c"
             25 63 25 63 25 63 25
             63
      001EDD 00                    4967 	.db 0x00
                           000026  4968 Flab6$__str_2$0$0 == .
      001EDE                       4969 ___str_2:
      001EDE 25 63                 4970 	.ascii "%c"
      001EE0 00                    4971 	.db 0x00
                           000029  4972 Flab6$__str_3$0$0 == .
      001EE1                       4973 ___str_3:
      001EE1 0D                    4974 	.db 0x0D
      001EE2 0A                    4975 	.db 0x0A
      001EE3 25 75 20 6D 73        4976 	.ascii "%u ms"
      001EE8 00                    4977 	.db 0x00
                           000031  4978 Flab6$__str_4$0$0 == .
      001EE9                       4979 ___str_4:
      001EE9 43 61 6C 69 62 72 61  4980 	.ascii "Calibration:"
             74 69 6F 6E 3A
      001EF5 0A                    4981 	.db 0x0A
      001EF6 48 65 6C 6C 6F 20 77  4982 	.ascii "Hello world!"
             6F 72 6C 64 21
      001F02 0A                    4983 	.db 0x0A
      001F03 30 31 32 5F 33 34 35  4984 	.ascii "012_345_678:"
             5F 36 37 38 3A
      001F0F 0A                    4985 	.db 0x0A
      001F10 61 62 63 20 64 65 66  4986 	.ascii "abc def ghij"
             20 67 68 69 6A
      001F1C 00                    4987 	.db 0x00
                           000065  4988 Flab6$__str_5$0$0 == .
      001F1D                       4989 ___str_5:
      001F1D 0D                    4990 	.db 0x0D
      001F1E 0A                    4991 	.db 0x0A
      001F1F 54 68 65 20 64 65 73  4992 	.ascii "The desired direction is: %d"
             69 72 65 64 20 64 69
             72 65 63 74 69 6F 6E
             20 69 73 3A 20 25 64
      001F3B 00                    4993 	.db 0x00
                           000084  4994 Flab6$__str_6$0$0 == .
      001F3C                       4995 ___str_6:
      001F3C 52 75 64 64 65 72 20  4996 	.ascii "Rudder Calibration"
             43 61 6C 69 62 72 61
             74 69 6F 6E
      001F4E 00                    4997 	.db 0x00
                           000097  4998 Flab6$__str_7$0$0 == .
      001F4F                       4999 ___str_7:
      001F4F 67 6F 20 6C 65 66 74  5000 	.ascii "go left: press 1"
             3A 20 70 72 65 73 73
             20 31
      001F5F 0A                    5001 	.db 0x0A
      001F60 20 67 6F 20 72 69 67  5002 	.ascii " go right: press 2"
             68 74 3A 20 70 72 65
             73 73 20 32
      001F72 0A                    5003 	.db 0x0A
      001F73 50 72 65 73 73 20 2A  5004 	.ascii "Press * for next screen"
             20 66 6F 72 20 6E 65
             78 74 20 73 63 72 65
             65 6E
      001F8A 00                    5005 	.db 0x00
                           0000D3  5006 Flab6$__str_8$0$0 == .
      001F8B                       5007 ___str_8:
      001F8B 0A                    5008 	.db 0x0A
      001F8C 20 63 6F 6E 66 69 72  5009 	.ascii " confirm: press 3"
             6D 3A 20 70 72 65 73
             73 20 33
      001F9D 0A                    5010 	.db 0x0A
      001F9E 20 70 72 65 73 73 20  5011 	.ascii " press * to begin"
             2A 20 74 6F 20 62 65
             67 69 6E
      001FAF 00                    5012 	.db 0x00
                           0000F8  5013 Flab6$__str_9$0$0 == .
      001FB0                       5014 ___str_9:
      001FB0 0D                    5015 	.db 0x0D
      001FB1 0A                    5016 	.db 0x0A
      001FB2 20 25 75              5017 	.ascii " %u"
      001FB5 00                    5018 	.db 0x00
                           0000FE  5019 Flab6$__str_10$0$0 == .
      001FB6                       5020 ___str_10:
      001FB6 4E 6F 77 20 63 61 6C  5021 	.ascii "Now calibrating Min_PW"
             69 62 72 61 74 69 6E
             67 20 4D 69 6E 5F 50
             57
      001FCC 0A                    5022 	.db 0x0A
      001FCD 00                    5023 	.db 0x00
                           000116  5024 Flab6$__str_11$0$0 == .
      001FCE                       5025 ___str_11:
      001FCE 4E 6F 77 20 63 61 6C  5026 	.ascii "Now calibrating Cen_PW"
             69 62 72 61 74 69 6E
             67 20 43 65 6E 5F 50
             57
      001FE4 00                    5027 	.db 0x00
                           00012D  5028 Flab6$__str_12$0$0 == .
      001FE5                       5029 ___str_12:
      001FE5 4E 6F 77 20 63 61 6C  5030 	.ascii "Now calibrating Max_PW"
             69 62 72 61 74 69 6E
             67 20 4D 61 78 5F 50
             57
      001FFB 00                    5031 	.db 0x00
                           000144  5032 Flab6$__str_13$0$0 == .
      001FFC                       5033 ___str_13:
      001FFC 41 6E 67 6C 65 20 43  5034 	.ascii "Angle Calibration"
             61 6C 69 62 72 61 74
             69 6F 6E
      00200D 00                    5035 	.db 0x00
                           000156  5036 Flab6$__str_14$0$0 == .
      00200E                       5037 ___str_14:
      00200E 4E 6F 77 20 63 61 6C  5038 	.ascii "Now calibrating Min_PW UP ANGLE"
             69 62 72 61 74 69 6E
             67 20 4D 69 6E 5F 50
             57 20 55 50 20 41 4E
             47 4C 45
      00202D 00                    5039 	.db 0x00
                           000176  5040 Flab6$__str_15$0$0 == .
      00202E                       5041 ___str_15:
      00202E 4E 6F 77 20 63 61 6C  5042 	.ascii "Now calibrating Max_PW DOWN ANGLE"
             69 62 72 61 74 69 6E
             67 20 4D 61 78 5F 50
             57 20 44 4F 57 4E 20
             41 4E 47 4C 45
      00204F 00                    5043 	.db 0x00
                           000198  5044 Flab6$__str_16$0$0 == .
      002050                       5045 ___str_16:
      002050 54 68 72 75 73 74 20  5046 	.ascii "Thrust Calibration"
             43 61 6C 69 62 72 61
             74 69 6F 6E
      002062 00                    5047 	.db 0x00
                           0001AB  5048 Flab6$__str_17$0$0 == .
      002063                       5049 ___str_17:
      002063 4E 6F 77 20 63 61 6C  5050 	.ascii "Now calibrating Min_PW"
             69 62 72 61 74 69 6E
             67 20 4D 69 6E 5F 50
             57
      002079 00                    5051 	.db 0x00
                                   5052 	.area XINIT   (CODE)
                                   5053 	.area CABS    (ABS,CODE)
