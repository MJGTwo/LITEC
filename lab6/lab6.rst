                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (Apr  5 2014) (MINGW32)
                                      4 ; This file was generated Fri Apr 24 09:35:53 2015
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
                                    310 	.globl _TRST_lo_to_hi
                                    311 	.globl _THRUST_PW
                                    312 	.globl _AGL_lo_to_hi
                                    313 	.globl _ANGLE_PW
                                    314 	.globl _RDR_lo_to_hi
                                    315 	.globl _RUDDER_PW
                                    316 	.globl _PW_DOWN_ANGLE
                                    317 	.globl _PW_CENTER_ANGLE
                                    318 	.globl _PW_UP_ANGLE
                                    319 	.globl _PW_RIGHT_RUDDER
                                    320 	.globl _PW_CENTER_RUDDER
                                    321 	.globl _PW_LEFT_RUDDER
                                    322 	.globl _PW_MAX_THRUST
                                    323 	.globl _PW_NUET_THRUST
                                    324 	.globl _PW_MIN_THRUST
                                    325 	.globl _count
                                    326 	.globl _i2c_read_data_PARM_4
                                    327 	.globl _i2c_read_data_PARM_3
                                    328 	.globl _i2c_read_data_PARM_2
                                    329 	.globl _i2c_write_data_PARM_4
                                    330 	.globl _i2c_write_data_PARM_3
                                    331 	.globl _i2c_write_data_PARM_2
                                    332 	.globl _putchar
                                    333 	.globl _getchar
                                    334 	.globl _lcd_print
                                    335 	.globl _lcd_clear
                                    336 	.globl _kpd_input
                                    337 	.globl _delay_time
                                    338 	.globl _i2c_start
                                    339 	.globl _i2c_write
                                    340 	.globl _i2c_write_and_stop
                                    341 	.globl _i2c_read
                                    342 	.globl _i2c_read_and_stop
                                    343 	.globl _i2c_write_data
                                    344 	.globl _i2c_read_data
                                    345 	.globl _Accel_Init
                                    346 	.globl _Change_D
                                    347 	.globl _Read_Ranger
                                    348 	.globl _Steering_func
                                    349 	.globl _direction
                                    350 	.globl _ReadCompass
                                    351 	.globl _Rudder_cal
                                    352 	.globl _Angle_cal
                                    353 	.globl _Thrust_cal
                                    354 	.globl _Steering_Servo
                                    355 	.globl _start
                                    356 	.globl _wait
                                    357 	.globl _Port_Init
                                    358 	.globl _PCA_Init
                                    359 	.globl _XBR0_Init
                                    360 	.globl _SMB_Init
                                    361 	.globl _ADC_Init
                                    362 ;--------------------------------------------------------
                                    363 ; special function registers
                                    364 ;--------------------------------------------------------
                                    365 	.area RSEG    (ABS,DATA)
      000000                        366 	.org 0x0000
                           000080   367 G$P0$0$0 == 0x0080
                           000080   368 _P0	=	0x0080
                           000081   369 G$SP$0$0 == 0x0081
                           000081   370 _SP	=	0x0081
                           000082   371 G$DPL$0$0 == 0x0082
                           000082   372 _DPL	=	0x0082
                           000083   373 G$DPH$0$0 == 0x0083
                           000083   374 _DPH	=	0x0083
                           000084   375 G$P4$0$0 == 0x0084
                           000084   376 _P4	=	0x0084
                           000085   377 G$P5$0$0 == 0x0085
                           000085   378 _P5	=	0x0085
                           000086   379 G$P6$0$0 == 0x0086
                           000086   380 _P6	=	0x0086
                           000087   381 G$PCON$0$0 == 0x0087
                           000087   382 _PCON	=	0x0087
                           000088   383 G$TCON$0$0 == 0x0088
                           000088   384 _TCON	=	0x0088
                           000089   385 G$TMOD$0$0 == 0x0089
                           000089   386 _TMOD	=	0x0089
                           00008A   387 G$TL0$0$0 == 0x008a
                           00008A   388 _TL0	=	0x008a
                           00008B   389 G$TL1$0$0 == 0x008b
                           00008B   390 _TL1	=	0x008b
                           00008C   391 G$TH0$0$0 == 0x008c
                           00008C   392 _TH0	=	0x008c
                           00008D   393 G$TH1$0$0 == 0x008d
                           00008D   394 _TH1	=	0x008d
                           00008E   395 G$CKCON$0$0 == 0x008e
                           00008E   396 _CKCON	=	0x008e
                           00008F   397 G$PSCTL$0$0 == 0x008f
                           00008F   398 _PSCTL	=	0x008f
                           000090   399 G$P1$0$0 == 0x0090
                           000090   400 _P1	=	0x0090
                           000091   401 G$TMR3CN$0$0 == 0x0091
                           000091   402 _TMR3CN	=	0x0091
                           000092   403 G$TMR3RLL$0$0 == 0x0092
                           000092   404 _TMR3RLL	=	0x0092
                           000093   405 G$TMR3RLH$0$0 == 0x0093
                           000093   406 _TMR3RLH	=	0x0093
                           000094   407 G$TMR3L$0$0 == 0x0094
                           000094   408 _TMR3L	=	0x0094
                           000095   409 G$TMR3H$0$0 == 0x0095
                           000095   410 _TMR3H	=	0x0095
                           000096   411 G$P7$0$0 == 0x0096
                           000096   412 _P7	=	0x0096
                           000098   413 G$SCON$0$0 == 0x0098
                           000098   414 _SCON	=	0x0098
                           000098   415 G$SCON0$0$0 == 0x0098
                           000098   416 _SCON0	=	0x0098
                           000099   417 G$SBUF$0$0 == 0x0099
                           000099   418 _SBUF	=	0x0099
                           000099   419 G$SBUF0$0$0 == 0x0099
                           000099   420 _SBUF0	=	0x0099
                           00009A   421 G$SPI0CFG$0$0 == 0x009a
                           00009A   422 _SPI0CFG	=	0x009a
                           00009B   423 G$SPI0DAT$0$0 == 0x009b
                           00009B   424 _SPI0DAT	=	0x009b
                           00009C   425 G$ADC1$0$0 == 0x009c
                           00009C   426 _ADC1	=	0x009c
                           00009D   427 G$SPI0CKR$0$0 == 0x009d
                           00009D   428 _SPI0CKR	=	0x009d
                           00009E   429 G$CPT0CN$0$0 == 0x009e
                           00009E   430 _CPT0CN	=	0x009e
                           00009F   431 G$CPT1CN$0$0 == 0x009f
                           00009F   432 _CPT1CN	=	0x009f
                           0000A0   433 G$P2$0$0 == 0x00a0
                           0000A0   434 _P2	=	0x00a0
                           0000A1   435 G$EMI0TC$0$0 == 0x00a1
                           0000A1   436 _EMI0TC	=	0x00a1
                           0000A3   437 G$EMI0CF$0$0 == 0x00a3
                           0000A3   438 _EMI0CF	=	0x00a3
                           0000A4   439 G$PRT0CF$0$0 == 0x00a4
                           0000A4   440 _PRT0CF	=	0x00a4
                           0000A4   441 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   442 _P0MDOUT	=	0x00a4
                           0000A5   443 G$PRT1CF$0$0 == 0x00a5
                           0000A5   444 _PRT1CF	=	0x00a5
                           0000A5   445 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   446 _P1MDOUT	=	0x00a5
                           0000A6   447 G$PRT2CF$0$0 == 0x00a6
                           0000A6   448 _PRT2CF	=	0x00a6
                           0000A6   449 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   450 _P2MDOUT	=	0x00a6
                           0000A7   451 G$PRT3CF$0$0 == 0x00a7
                           0000A7   452 _PRT3CF	=	0x00a7
                           0000A7   453 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   454 _P3MDOUT	=	0x00a7
                           0000A8   455 G$IE$0$0 == 0x00a8
                           0000A8   456 _IE	=	0x00a8
                           0000A9   457 G$SADDR0$0$0 == 0x00a9
                           0000A9   458 _SADDR0	=	0x00a9
                           0000AA   459 G$ADC1CN$0$0 == 0x00aa
                           0000AA   460 _ADC1CN	=	0x00aa
                           0000AB   461 G$ADC1CF$0$0 == 0x00ab
                           0000AB   462 _ADC1CF	=	0x00ab
                           0000AC   463 G$AMX1SL$0$0 == 0x00ac
                           0000AC   464 _AMX1SL	=	0x00ac
                           0000AD   465 G$P3IF$0$0 == 0x00ad
                           0000AD   466 _P3IF	=	0x00ad
                           0000AE   467 G$SADEN1$0$0 == 0x00ae
                           0000AE   468 _SADEN1	=	0x00ae
                           0000AF   469 G$EMI0CN$0$0 == 0x00af
                           0000AF   470 _EMI0CN	=	0x00af
                           0000AF   471 G$_XPAGE$0$0 == 0x00af
                           0000AF   472 __XPAGE	=	0x00af
                           0000B0   473 G$P3$0$0 == 0x00b0
                           0000B0   474 _P3	=	0x00b0
                           0000B1   475 G$OSCXCN$0$0 == 0x00b1
                           0000B1   476 _OSCXCN	=	0x00b1
                           0000B2   477 G$OSCICN$0$0 == 0x00b2
                           0000B2   478 _OSCICN	=	0x00b2
                           0000B5   479 G$P74OUT$0$0 == 0x00b5
                           0000B5   480 _P74OUT	=	0x00b5
                           0000B6   481 G$FLSCL$0$0 == 0x00b6
                           0000B6   482 _FLSCL	=	0x00b6
                           0000B7   483 G$FLACL$0$0 == 0x00b7
                           0000B7   484 _FLACL	=	0x00b7
                           0000B8   485 G$IP$0$0 == 0x00b8
                           0000B8   486 _IP	=	0x00b8
                           0000B9   487 G$SADEN0$0$0 == 0x00b9
                           0000B9   488 _SADEN0	=	0x00b9
                           0000BA   489 G$AMX0CF$0$0 == 0x00ba
                           0000BA   490 _AMX0CF	=	0x00ba
                           0000BB   491 G$AMX0SL$0$0 == 0x00bb
                           0000BB   492 _AMX0SL	=	0x00bb
                           0000BC   493 G$ADC0CF$0$0 == 0x00bc
                           0000BC   494 _ADC0CF	=	0x00bc
                           0000BD   495 G$P1MDIN$0$0 == 0x00bd
                           0000BD   496 _P1MDIN	=	0x00bd
                           0000BE   497 G$ADC0L$0$0 == 0x00be
                           0000BE   498 _ADC0L	=	0x00be
                           0000BF   499 G$ADC0H$0$0 == 0x00bf
                           0000BF   500 _ADC0H	=	0x00bf
                           0000C0   501 G$SMB0CN$0$0 == 0x00c0
                           0000C0   502 _SMB0CN	=	0x00c0
                           0000C1   503 G$SMB0STA$0$0 == 0x00c1
                           0000C1   504 _SMB0STA	=	0x00c1
                           0000C2   505 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   506 _SMB0DAT	=	0x00c2
                           0000C3   507 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   508 _SMB0ADR	=	0x00c3
                           0000C4   509 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   510 _ADC0GTL	=	0x00c4
                           0000C5   511 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   512 _ADC0GTH	=	0x00c5
                           0000C6   513 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   514 _ADC0LTL	=	0x00c6
                           0000C7   515 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   516 _ADC0LTH	=	0x00c7
                           0000C8   517 G$T2CON$0$0 == 0x00c8
                           0000C8   518 _T2CON	=	0x00c8
                           0000C9   519 G$T4CON$0$0 == 0x00c9
                           0000C9   520 _T4CON	=	0x00c9
                           0000CA   521 G$RCAP2L$0$0 == 0x00ca
                           0000CA   522 _RCAP2L	=	0x00ca
                           0000CB   523 G$RCAP2H$0$0 == 0x00cb
                           0000CB   524 _RCAP2H	=	0x00cb
                           0000CC   525 G$TL2$0$0 == 0x00cc
                           0000CC   526 _TL2	=	0x00cc
                           0000CD   527 G$TH2$0$0 == 0x00cd
                           0000CD   528 _TH2	=	0x00cd
                           0000CF   529 G$SMB0CR$0$0 == 0x00cf
                           0000CF   530 _SMB0CR	=	0x00cf
                           0000D0   531 G$PSW$0$0 == 0x00d0
                           0000D0   532 _PSW	=	0x00d0
                           0000D1   533 G$REF0CN$0$0 == 0x00d1
                           0000D1   534 _REF0CN	=	0x00d1
                           0000D2   535 G$DAC0L$0$0 == 0x00d2
                           0000D2   536 _DAC0L	=	0x00d2
                           0000D3   537 G$DAC0H$0$0 == 0x00d3
                           0000D3   538 _DAC0H	=	0x00d3
                           0000D4   539 G$DAC0CN$0$0 == 0x00d4
                           0000D4   540 _DAC0CN	=	0x00d4
                           0000D5   541 G$DAC1L$0$0 == 0x00d5
                           0000D5   542 _DAC1L	=	0x00d5
                           0000D6   543 G$DAC1H$0$0 == 0x00d6
                           0000D6   544 _DAC1H	=	0x00d6
                           0000D7   545 G$DAC1CN$0$0 == 0x00d7
                           0000D7   546 _DAC1CN	=	0x00d7
                           0000D8   547 G$PCA0CN$0$0 == 0x00d8
                           0000D8   548 _PCA0CN	=	0x00d8
                           0000D9   549 G$PCA0MD$0$0 == 0x00d9
                           0000D9   550 _PCA0MD	=	0x00d9
                           0000DA   551 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   552 _PCA0CPM0	=	0x00da
                           0000DB   553 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   554 _PCA0CPM1	=	0x00db
                           0000DC   555 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   556 _PCA0CPM2	=	0x00dc
                           0000DD   557 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   558 _PCA0CPM3	=	0x00dd
                           0000DE   559 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   560 _PCA0CPM4	=	0x00de
                           0000E0   561 G$ACC$0$0 == 0x00e0
                           0000E0   562 _ACC	=	0x00e0
                           0000E1   563 G$XBR0$0$0 == 0x00e1
                           0000E1   564 _XBR0	=	0x00e1
                           0000E2   565 G$XBR1$0$0 == 0x00e2
                           0000E2   566 _XBR1	=	0x00e2
                           0000E3   567 G$XBR2$0$0 == 0x00e3
                           0000E3   568 _XBR2	=	0x00e3
                           0000E4   569 G$RCAP4L$0$0 == 0x00e4
                           0000E4   570 _RCAP4L	=	0x00e4
                           0000E5   571 G$RCAP4H$0$0 == 0x00e5
                           0000E5   572 _RCAP4H	=	0x00e5
                           0000E6   573 G$EIE1$0$0 == 0x00e6
                           0000E6   574 _EIE1	=	0x00e6
                           0000E7   575 G$EIE2$0$0 == 0x00e7
                           0000E7   576 _EIE2	=	0x00e7
                           0000E8   577 G$ADC0CN$0$0 == 0x00e8
                           0000E8   578 _ADC0CN	=	0x00e8
                           0000E9   579 G$PCA0L$0$0 == 0x00e9
                           0000E9   580 _PCA0L	=	0x00e9
                           0000EA   581 G$PCA0CPL0$0$0 == 0x00ea
                           0000EA   582 _PCA0CPL0	=	0x00ea
                           0000EB   583 G$PCA0CPL1$0$0 == 0x00eb
                           0000EB   584 _PCA0CPL1	=	0x00eb
                           0000EC   585 G$PCA0CPL2$0$0 == 0x00ec
                           0000EC   586 _PCA0CPL2	=	0x00ec
                           0000ED   587 G$PCA0CPL3$0$0 == 0x00ed
                           0000ED   588 _PCA0CPL3	=	0x00ed
                           0000EE   589 G$PCA0CPL4$0$0 == 0x00ee
                           0000EE   590 _PCA0CPL4	=	0x00ee
                           0000EF   591 G$RSTSRC$0$0 == 0x00ef
                           0000EF   592 _RSTSRC	=	0x00ef
                           0000F0   593 G$B$0$0 == 0x00f0
                           0000F0   594 _B	=	0x00f0
                           0000F1   595 G$SCON1$0$0 == 0x00f1
                           0000F1   596 _SCON1	=	0x00f1
                           0000F2   597 G$SBUF1$0$0 == 0x00f2
                           0000F2   598 _SBUF1	=	0x00f2
                           0000F3   599 G$SADDR1$0$0 == 0x00f3
                           0000F3   600 _SADDR1	=	0x00f3
                           0000F4   601 G$TL4$0$0 == 0x00f4
                           0000F4   602 _TL4	=	0x00f4
                           0000F5   603 G$TH4$0$0 == 0x00f5
                           0000F5   604 _TH4	=	0x00f5
                           0000F6   605 G$EIP1$0$0 == 0x00f6
                           0000F6   606 _EIP1	=	0x00f6
                           0000F7   607 G$EIP2$0$0 == 0x00f7
                           0000F7   608 _EIP2	=	0x00f7
                           0000F8   609 G$SPI0CN$0$0 == 0x00f8
                           0000F8   610 _SPI0CN	=	0x00f8
                           0000F9   611 G$PCA0H$0$0 == 0x00f9
                           0000F9   612 _PCA0H	=	0x00f9
                           0000FA   613 G$PCA0CPH0$0$0 == 0x00fa
                           0000FA   614 _PCA0CPH0	=	0x00fa
                           0000FB   615 G$PCA0CPH1$0$0 == 0x00fb
                           0000FB   616 _PCA0CPH1	=	0x00fb
                           0000FC   617 G$PCA0CPH2$0$0 == 0x00fc
                           0000FC   618 _PCA0CPH2	=	0x00fc
                           0000FD   619 G$PCA0CPH3$0$0 == 0x00fd
                           0000FD   620 _PCA0CPH3	=	0x00fd
                           0000FE   621 G$PCA0CPH4$0$0 == 0x00fe
                           0000FE   622 _PCA0CPH4	=	0x00fe
                           0000FF   623 G$WDTCN$0$0 == 0x00ff
                           0000FF   624 _WDTCN	=	0x00ff
                           008C8A   625 G$TMR0$0$0 == 0x8c8a
                           008C8A   626 _TMR0	=	0x8c8a
                           008D8B   627 G$TMR1$0$0 == 0x8d8b
                           008D8B   628 _TMR1	=	0x8d8b
                           00CDCC   629 G$TMR2$0$0 == 0xcdcc
                           00CDCC   630 _TMR2	=	0xcdcc
                           00CBCA   631 G$RCAP2$0$0 == 0xcbca
                           00CBCA   632 _RCAP2	=	0xcbca
                           009594   633 G$TMR3$0$0 == 0x9594
                           009594   634 _TMR3	=	0x9594
                           009392   635 G$TMR3RL$0$0 == 0x9392
                           009392   636 _TMR3RL	=	0x9392
                           00F5F4   637 G$TMR4$0$0 == 0xf5f4
                           00F5F4   638 _TMR4	=	0xf5f4
                           00E5E4   639 G$RCAP4$0$0 == 0xe5e4
                           00E5E4   640 _RCAP4	=	0xe5e4
                           00BFBE   641 G$ADC0$0$0 == 0xbfbe
                           00BFBE   642 _ADC0	=	0xbfbe
                           00C5C4   643 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   644 _ADC0GT	=	0xc5c4
                           00C7C6   645 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   646 _ADC0LT	=	0xc7c6
                           00D3D2   647 G$DAC0$0$0 == 0xd3d2
                           00D3D2   648 _DAC0	=	0xd3d2
                           00D6D5   649 G$DAC1$0$0 == 0xd6d5
                           00D6D5   650 _DAC1	=	0xd6d5
                           00F9E9   651 G$PCA0$0$0 == 0xf9e9
                           00F9E9   652 _PCA0	=	0xf9e9
                           00FAEA   653 G$PCA0CP0$0$0 == 0xfaea
                           00FAEA   654 _PCA0CP0	=	0xfaea
                           00FBEB   655 G$PCA0CP1$0$0 == 0xfbeb
                           00FBEB   656 _PCA0CP1	=	0xfbeb
                           00FCEC   657 G$PCA0CP2$0$0 == 0xfcec
                           00FCEC   658 _PCA0CP2	=	0xfcec
                           00FDED   659 G$PCA0CP3$0$0 == 0xfded
                           00FDED   660 _PCA0CP3	=	0xfded
                           00FEEE   661 G$PCA0CP4$0$0 == 0xfeee
                           00FEEE   662 _PCA0CP4	=	0xfeee
                                    663 ;--------------------------------------------------------
                                    664 ; special function bits
                                    665 ;--------------------------------------------------------
                                    666 	.area RSEG    (ABS,DATA)
      000000                        667 	.org 0x0000
                           000080   668 G$P0_0$0$0 == 0x0080
                           000080   669 _P0_0	=	0x0080
                           000081   670 G$P0_1$0$0 == 0x0081
                           000081   671 _P0_1	=	0x0081
                           000082   672 G$P0_2$0$0 == 0x0082
                           000082   673 _P0_2	=	0x0082
                           000083   674 G$P0_3$0$0 == 0x0083
                           000083   675 _P0_3	=	0x0083
                           000084   676 G$P0_4$0$0 == 0x0084
                           000084   677 _P0_4	=	0x0084
                           000085   678 G$P0_5$0$0 == 0x0085
                           000085   679 _P0_5	=	0x0085
                           000086   680 G$P0_6$0$0 == 0x0086
                           000086   681 _P0_6	=	0x0086
                           000087   682 G$P0_7$0$0 == 0x0087
                           000087   683 _P0_7	=	0x0087
                           000088   684 G$IT0$0$0 == 0x0088
                           000088   685 _IT0	=	0x0088
                           000089   686 G$IE0$0$0 == 0x0089
                           000089   687 _IE0	=	0x0089
                           00008A   688 G$IT1$0$0 == 0x008a
                           00008A   689 _IT1	=	0x008a
                           00008B   690 G$IE1$0$0 == 0x008b
                           00008B   691 _IE1	=	0x008b
                           00008C   692 G$TR0$0$0 == 0x008c
                           00008C   693 _TR0	=	0x008c
                           00008D   694 G$TF0$0$0 == 0x008d
                           00008D   695 _TF0	=	0x008d
                           00008E   696 G$TR1$0$0 == 0x008e
                           00008E   697 _TR1	=	0x008e
                           00008F   698 G$TF1$0$0 == 0x008f
                           00008F   699 _TF1	=	0x008f
                           000090   700 G$P1_0$0$0 == 0x0090
                           000090   701 _P1_0	=	0x0090
                           000091   702 G$P1_1$0$0 == 0x0091
                           000091   703 _P1_1	=	0x0091
                           000092   704 G$P1_2$0$0 == 0x0092
                           000092   705 _P1_2	=	0x0092
                           000093   706 G$P1_3$0$0 == 0x0093
                           000093   707 _P1_3	=	0x0093
                           000094   708 G$P1_4$0$0 == 0x0094
                           000094   709 _P1_4	=	0x0094
                           000095   710 G$P1_5$0$0 == 0x0095
                           000095   711 _P1_5	=	0x0095
                           000096   712 G$P1_6$0$0 == 0x0096
                           000096   713 _P1_6	=	0x0096
                           000097   714 G$P1_7$0$0 == 0x0097
                           000097   715 _P1_7	=	0x0097
                           000098   716 G$RI$0$0 == 0x0098
                           000098   717 _RI	=	0x0098
                           000098   718 G$RI0$0$0 == 0x0098
                           000098   719 _RI0	=	0x0098
                           000099   720 G$TI$0$0 == 0x0099
                           000099   721 _TI	=	0x0099
                           000099   722 G$TI0$0$0 == 0x0099
                           000099   723 _TI0	=	0x0099
                           00009A   724 G$RB8$0$0 == 0x009a
                           00009A   725 _RB8	=	0x009a
                           00009A   726 G$RB80$0$0 == 0x009a
                           00009A   727 _RB80	=	0x009a
                           00009B   728 G$TB8$0$0 == 0x009b
                           00009B   729 _TB8	=	0x009b
                           00009B   730 G$TB80$0$0 == 0x009b
                           00009B   731 _TB80	=	0x009b
                           00009C   732 G$REN$0$0 == 0x009c
                           00009C   733 _REN	=	0x009c
                           00009C   734 G$REN0$0$0 == 0x009c
                           00009C   735 _REN0	=	0x009c
                           00009D   736 G$SM2$0$0 == 0x009d
                           00009D   737 _SM2	=	0x009d
                           00009D   738 G$SM20$0$0 == 0x009d
                           00009D   739 _SM20	=	0x009d
                           00009D   740 G$MCE0$0$0 == 0x009d
                           00009D   741 _MCE0	=	0x009d
                           00009E   742 G$SM1$0$0 == 0x009e
                           00009E   743 _SM1	=	0x009e
                           00009E   744 G$SM10$0$0 == 0x009e
                           00009E   745 _SM10	=	0x009e
                           00009F   746 G$SM0$0$0 == 0x009f
                           00009F   747 _SM0	=	0x009f
                           00009F   748 G$SM00$0$0 == 0x009f
                           00009F   749 _SM00	=	0x009f
                           00009F   750 G$S0MODE$0$0 == 0x009f
                           00009F   751 _S0MODE	=	0x009f
                           0000A0   752 G$P2_0$0$0 == 0x00a0
                           0000A0   753 _P2_0	=	0x00a0
                           0000A1   754 G$P2_1$0$0 == 0x00a1
                           0000A1   755 _P2_1	=	0x00a1
                           0000A2   756 G$P2_2$0$0 == 0x00a2
                           0000A2   757 _P2_2	=	0x00a2
                           0000A3   758 G$P2_3$0$0 == 0x00a3
                           0000A3   759 _P2_3	=	0x00a3
                           0000A4   760 G$P2_4$0$0 == 0x00a4
                           0000A4   761 _P2_4	=	0x00a4
                           0000A5   762 G$P2_5$0$0 == 0x00a5
                           0000A5   763 _P2_5	=	0x00a5
                           0000A6   764 G$P2_6$0$0 == 0x00a6
                           0000A6   765 _P2_6	=	0x00a6
                           0000A7   766 G$P2_7$0$0 == 0x00a7
                           0000A7   767 _P2_7	=	0x00a7
                           0000A8   768 G$EX0$0$0 == 0x00a8
                           0000A8   769 _EX0	=	0x00a8
                           0000A9   770 G$ET0$0$0 == 0x00a9
                           0000A9   771 _ET0	=	0x00a9
                           0000AA   772 G$EX1$0$0 == 0x00aa
                           0000AA   773 _EX1	=	0x00aa
                           0000AB   774 G$ET1$0$0 == 0x00ab
                           0000AB   775 _ET1	=	0x00ab
                           0000AC   776 G$ES0$0$0 == 0x00ac
                           0000AC   777 _ES0	=	0x00ac
                           0000AC   778 G$ES$0$0 == 0x00ac
                           0000AC   779 _ES	=	0x00ac
                           0000AD   780 G$ET2$0$0 == 0x00ad
                           0000AD   781 _ET2	=	0x00ad
                           0000AF   782 G$EA$0$0 == 0x00af
                           0000AF   783 _EA	=	0x00af
                           0000B0   784 G$P3_0$0$0 == 0x00b0
                           0000B0   785 _P3_0	=	0x00b0
                           0000B1   786 G$P3_1$0$0 == 0x00b1
                           0000B1   787 _P3_1	=	0x00b1
                           0000B2   788 G$P3_2$0$0 == 0x00b2
                           0000B2   789 _P3_2	=	0x00b2
                           0000B3   790 G$P3_3$0$0 == 0x00b3
                           0000B3   791 _P3_3	=	0x00b3
                           0000B4   792 G$P3_4$0$0 == 0x00b4
                           0000B4   793 _P3_4	=	0x00b4
                           0000B5   794 G$P3_5$0$0 == 0x00b5
                           0000B5   795 _P3_5	=	0x00b5
                           0000B6   796 G$P3_6$0$0 == 0x00b6
                           0000B6   797 _P3_6	=	0x00b6
                           0000B7   798 G$P3_7$0$0 == 0x00b7
                           0000B7   799 _P3_7	=	0x00b7
                           0000B8   800 G$PX0$0$0 == 0x00b8
                           0000B8   801 _PX0	=	0x00b8
                           0000B9   802 G$PT0$0$0 == 0x00b9
                           0000B9   803 _PT0	=	0x00b9
                           0000BA   804 G$PX1$0$0 == 0x00ba
                           0000BA   805 _PX1	=	0x00ba
                           0000BB   806 G$PT1$0$0 == 0x00bb
                           0000BB   807 _PT1	=	0x00bb
                           0000BC   808 G$PS0$0$0 == 0x00bc
                           0000BC   809 _PS0	=	0x00bc
                           0000BC   810 G$PS$0$0 == 0x00bc
                           0000BC   811 _PS	=	0x00bc
                           0000BD   812 G$PT2$0$0 == 0x00bd
                           0000BD   813 _PT2	=	0x00bd
                           0000C0   814 G$SMBTOE$0$0 == 0x00c0
                           0000C0   815 _SMBTOE	=	0x00c0
                           0000C1   816 G$SMBFTE$0$0 == 0x00c1
                           0000C1   817 _SMBFTE	=	0x00c1
                           0000C2   818 G$AA$0$0 == 0x00c2
                           0000C2   819 _AA	=	0x00c2
                           0000C3   820 G$SI$0$0 == 0x00c3
                           0000C3   821 _SI	=	0x00c3
                           0000C4   822 G$STO$0$0 == 0x00c4
                           0000C4   823 _STO	=	0x00c4
                           0000C5   824 G$STA$0$0 == 0x00c5
                           0000C5   825 _STA	=	0x00c5
                           0000C6   826 G$ENSMB$0$0 == 0x00c6
                           0000C6   827 _ENSMB	=	0x00c6
                           0000C7   828 G$BUSY$0$0 == 0x00c7
                           0000C7   829 _BUSY	=	0x00c7
                           0000C8   830 G$CPRL2$0$0 == 0x00c8
                           0000C8   831 _CPRL2	=	0x00c8
                           0000C9   832 G$CT2$0$0 == 0x00c9
                           0000C9   833 _CT2	=	0x00c9
                           0000CA   834 G$TR2$0$0 == 0x00ca
                           0000CA   835 _TR2	=	0x00ca
                           0000CB   836 G$EXEN2$0$0 == 0x00cb
                           0000CB   837 _EXEN2	=	0x00cb
                           0000CC   838 G$TCLK$0$0 == 0x00cc
                           0000CC   839 _TCLK	=	0x00cc
                           0000CD   840 G$RCLK$0$0 == 0x00cd
                           0000CD   841 _RCLK	=	0x00cd
                           0000CE   842 G$EXF2$0$0 == 0x00ce
                           0000CE   843 _EXF2	=	0x00ce
                           0000CF   844 G$TF2$0$0 == 0x00cf
                           0000CF   845 _TF2	=	0x00cf
                           0000D0   846 G$P$0$0 == 0x00d0
                           0000D0   847 _P	=	0x00d0
                           0000D1   848 G$F1$0$0 == 0x00d1
                           0000D1   849 _F1	=	0x00d1
                           0000D2   850 G$OV$0$0 == 0x00d2
                           0000D2   851 _OV	=	0x00d2
                           0000D3   852 G$RS0$0$0 == 0x00d3
                           0000D3   853 _RS0	=	0x00d3
                           0000D4   854 G$RS1$0$0 == 0x00d4
                           0000D4   855 _RS1	=	0x00d4
                           0000D5   856 G$F0$0$0 == 0x00d5
                           0000D5   857 _F0	=	0x00d5
                           0000D6   858 G$AC$0$0 == 0x00d6
                           0000D6   859 _AC	=	0x00d6
                           0000D7   860 G$CY$0$0 == 0x00d7
                           0000D7   861 _CY	=	0x00d7
                           0000D8   862 G$CCF0$0$0 == 0x00d8
                           0000D8   863 _CCF0	=	0x00d8
                           0000D9   864 G$CCF1$0$0 == 0x00d9
                           0000D9   865 _CCF1	=	0x00d9
                           0000DA   866 G$CCF2$0$0 == 0x00da
                           0000DA   867 _CCF2	=	0x00da
                           0000DB   868 G$CCF3$0$0 == 0x00db
                           0000DB   869 _CCF3	=	0x00db
                           0000DC   870 G$CCF4$0$0 == 0x00dc
                           0000DC   871 _CCF4	=	0x00dc
                           0000DE   872 G$CR$0$0 == 0x00de
                           0000DE   873 _CR	=	0x00de
                           0000DF   874 G$CF$0$0 == 0x00df
                           0000DF   875 _CF	=	0x00df
                           0000E8   876 G$ADLJST$0$0 == 0x00e8
                           0000E8   877 _ADLJST	=	0x00e8
                           0000E8   878 G$AD0LJST$0$0 == 0x00e8
                           0000E8   879 _AD0LJST	=	0x00e8
                           0000E9   880 G$ADWINT$0$0 == 0x00e9
                           0000E9   881 _ADWINT	=	0x00e9
                           0000E9   882 G$AD0WINT$0$0 == 0x00e9
                           0000E9   883 _AD0WINT	=	0x00e9
                           0000EA   884 G$ADSTM0$0$0 == 0x00ea
                           0000EA   885 _ADSTM0	=	0x00ea
                           0000EA   886 G$AD0CM0$0$0 == 0x00ea
                           0000EA   887 _AD0CM0	=	0x00ea
                           0000EB   888 G$ADSTM1$0$0 == 0x00eb
                           0000EB   889 _ADSTM1	=	0x00eb
                           0000EB   890 G$AD0CM1$0$0 == 0x00eb
                           0000EB   891 _AD0CM1	=	0x00eb
                           0000EC   892 G$ADBUSY$0$0 == 0x00ec
                           0000EC   893 _ADBUSY	=	0x00ec
                           0000EC   894 G$AD0BUSY$0$0 == 0x00ec
                           0000EC   895 _AD0BUSY	=	0x00ec
                           0000ED   896 G$ADCINT$0$0 == 0x00ed
                           0000ED   897 _ADCINT	=	0x00ed
                           0000ED   898 G$AD0INT$0$0 == 0x00ed
                           0000ED   899 _AD0INT	=	0x00ed
                           0000EE   900 G$ADCTM$0$0 == 0x00ee
                           0000EE   901 _ADCTM	=	0x00ee
                           0000EE   902 G$AD0TM$0$0 == 0x00ee
                           0000EE   903 _AD0TM	=	0x00ee
                           0000EF   904 G$ADCEN$0$0 == 0x00ef
                           0000EF   905 _ADCEN	=	0x00ef
                           0000EF   906 G$AD0EN$0$0 == 0x00ef
                           0000EF   907 _AD0EN	=	0x00ef
                           0000F8   908 G$SPIEN$0$0 == 0x00f8
                           0000F8   909 _SPIEN	=	0x00f8
                           0000F9   910 G$MSTEN$0$0 == 0x00f9
                           0000F9   911 _MSTEN	=	0x00f9
                           0000FA   912 G$SLVSEL$0$0 == 0x00fa
                           0000FA   913 _SLVSEL	=	0x00fa
                           0000FB   914 G$TXBSY$0$0 == 0x00fb
                           0000FB   915 _TXBSY	=	0x00fb
                           0000FC   916 G$RXOVRN$0$0 == 0x00fc
                           0000FC   917 _RXOVRN	=	0x00fc
                           0000FD   918 G$MODF$0$0 == 0x00fd
                           0000FD   919 _MODF	=	0x00fd
                           0000FE   920 G$WCOL$0$0 == 0x00fe
                           0000FE   921 _WCOL	=	0x00fe
                           0000FF   922 G$SPIF$0$0 == 0x00ff
                           0000FF   923 _SPIF	=	0x00ff
                           0000C7   924 G$BUS_BUSY$0$0 == 0x00c7
                           0000C7   925 _BUS_BUSY	=	0x00c7
                           0000C6   926 G$BUS_EN$0$0 == 0x00c6
                           0000C6   927 _BUS_EN	=	0x00c6
                           0000C5   928 G$BUS_START$0$0 == 0x00c5
                           0000C5   929 _BUS_START	=	0x00c5
                           0000C4   930 G$BUS_STOP$0$0 == 0x00c4
                           0000C4   931 _BUS_STOP	=	0x00c4
                           0000C3   932 G$BUS_INT$0$0 == 0x00c3
                           0000C3   933 _BUS_INT	=	0x00c3
                           0000C2   934 G$BUS_AA$0$0 == 0x00c2
                           0000C2   935 _BUS_AA	=	0x00c2
                           0000C1   936 G$BUS_FTE$0$0 == 0x00c1
                           0000C1   937 _BUS_FTE	=	0x00c1
                           0000C0   938 G$BUS_TOE$0$0 == 0x00c0
                           0000C0   939 _BUS_TOE	=	0x00c0
                           000083   940 G$BUS_SCL$0$0 == 0x0083
                           000083   941 _BUS_SCL	=	0x0083
                                    942 ;--------------------------------------------------------
                                    943 ; overlayable register banks
                                    944 ;--------------------------------------------------------
                                    945 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        946 	.ds 8
                                    947 ;--------------------------------------------------------
                                    948 ; internal ram data
                                    949 ;--------------------------------------------------------
                                    950 	.area DSEG    (DATA)
                           000000   951 Llab6.lcd_clear$NumBytes$1$77==.
      000022                        952 _lcd_clear_NumBytes_1_77:
      000022                        953 	.ds 1
                           000001   954 Llab6.lcd_clear$Cmd$1$77==.
      000023                        955 _lcd_clear_Cmd_1_77:
      000023                        956 	.ds 2
                           000003   957 Llab6.read_keypad$Data$1$78==.
      000025                        958 _read_keypad_Data_1_78:
      000025                        959 	.ds 2
                           000005   960 Llab6.i2c_write_data$start_reg$1$97==.
      000027                        961 _i2c_write_data_PARM_2:
      000027                        962 	.ds 1
                           000006   963 Llab6.i2c_write_data$buffer$1$97==.
      000028                        964 _i2c_write_data_PARM_3:
      000028                        965 	.ds 3
                           000009   966 Llab6.i2c_write_data$num_bytes$1$97==.
      00002B                        967 _i2c_write_data_PARM_4:
      00002B                        968 	.ds 1
                           00000A   969 Llab6.i2c_read_data$start_reg$1$99==.
      00002C                        970 _i2c_read_data_PARM_2:
      00002C                        971 	.ds 1
                           00000B   972 Llab6.i2c_read_data$buffer$1$99==.
      00002D                        973 _i2c_read_data_PARM_3:
      00002D                        974 	.ds 3
                           00000E   975 Llab6.i2c_read_data$num_bytes$1$99==.
      000030                        976 _i2c_read_data_PARM_4:
      000030                        977 	.ds 1
                           00000F   978 Llab6.Accel_Init$Data2$1$103==.
      000031                        979 _Accel_Init_Data2_1_103:
      000031                        980 	.ds 1
                           000010   981 G$count$0$0==.
      000032                        982 _count::
      000032                        983 	.ds 2
                           000012   984 G$PW_MIN_THRUST$0$0==.
      000034                        985 _PW_MIN_THRUST::
      000034                        986 	.ds 2
                           000014   987 G$PW_NUET_THRUST$0$0==.
      000036                        988 _PW_NUET_THRUST::
      000036                        989 	.ds 2
                           000016   990 G$PW_MAX_THRUST$0$0==.
      000038                        991 _PW_MAX_THRUST::
      000038                        992 	.ds 2
                           000018   993 G$PW_LEFT_RUDDER$0$0==.
      00003A                        994 _PW_LEFT_RUDDER::
      00003A                        995 	.ds 2
                           00001A   996 G$PW_CENTER_RUDDER$0$0==.
      00003C                        997 _PW_CENTER_RUDDER::
      00003C                        998 	.ds 2
                           00001C   999 G$PW_RIGHT_RUDDER$0$0==.
      00003E                       1000 _PW_RIGHT_RUDDER::
      00003E                       1001 	.ds 2
                           00001E  1002 G$PW_UP_ANGLE$0$0==.
      000040                       1003 _PW_UP_ANGLE::
      000040                       1004 	.ds 2
                           000020  1005 G$PW_CENTER_ANGLE$0$0==.
      000042                       1006 _PW_CENTER_ANGLE::
      000042                       1007 	.ds 2
                           000022  1008 G$PW_DOWN_ANGLE$0$0==.
      000044                       1009 _PW_DOWN_ANGLE::
      000044                       1010 	.ds 2
                           000024  1011 G$RUDDER_PW$0$0==.
      000046                       1012 _RUDDER_PW::
      000046                       1013 	.ds 2
                           000026  1014 G$RDR_lo_to_hi$0$0==.
      000048                       1015 _RDR_lo_to_hi::
      000048                       1016 	.ds 2
                           000028  1017 G$ANGLE_PW$0$0==.
      00004A                       1018 _ANGLE_PW::
      00004A                       1019 	.ds 2
                           00002A  1020 G$AGL_lo_to_hi$0$0==.
      00004C                       1021 _AGL_lo_to_hi::
      00004C                       1022 	.ds 2
                           00002C  1023 G$THRUST_PW$0$0==.
      00004E                       1024 _THRUST_PW::
      00004E                       1025 	.ds 2
                           00002E  1026 G$TRST_lo_to_hi$0$0==.
      000050                       1027 _TRST_lo_to_hi::
      000050                       1028 	.ds 2
                           000030  1029 G$desired_D$0$0==.
      000052                       1030 _desired_D::
      000052                       1031 	.ds 2
                           000032  1032 G$actual_D$0$0==.
      000054                       1033 _actual_D::
      000054                       1034 	.ds 2
                           000034  1035 G$offset$0$0==.
      000056                       1036 _offset::
      000056                       1037 	.ds 2
                           000036  1038 G$r_data$0$0==.
      000058                       1039 _r_data::
      000058                       1040 	.ds 2
                           000038  1041 Llab6.ReadCompass$Data$1$134==.
      00005A                       1042 _ReadCompass_Data_1_134:
      00005A                       1043 	.ds 2
                           00003A  1044 Llab6.Steering_Servo$direction$1$192==.
      00005C                       1045 _Steering_Servo_direction_1_192:
      00005C                       1046 	.ds 2
                                   1047 ;--------------------------------------------------------
                                   1048 ; overlayable items in internal ram 
                                   1049 ;--------------------------------------------------------
                                   1050 	.area	OSEG    (OVR,DATA)
                                   1051 	.area	OSEG    (OVR,DATA)
                                   1052 	.area	OSEG    (OVR,DATA)
                                   1053 	.area	OSEG    (OVR,DATA)
                                   1054 	.area	OSEG    (OVR,DATA)
                                   1055 	.area	OSEG    (OVR,DATA)
                                   1056 	.area	OSEG    (OVR,DATA)
                                   1057 	.area	OSEG    (OVR,DATA)
                                   1058 ;--------------------------------------------------------
                                   1059 ; Stack segment in internal ram 
                                   1060 ;--------------------------------------------------------
                                   1061 	.area	SSEG
      000078                       1062 __start__stack:
      000078                       1063 	.ds	1
                                   1064 
                                   1065 ;--------------------------------------------------------
                                   1066 ; indirectly addressable internal ram data
                                   1067 ;--------------------------------------------------------
                                   1068 	.area ISEG    (DATA)
                                   1069 ;--------------------------------------------------------
                                   1070 ; absolute internal ram data
                                   1071 ;--------------------------------------------------------
                                   1072 	.area IABS    (ABS,DATA)
                                   1073 	.area IABS    (ABS,DATA)
                                   1074 ;--------------------------------------------------------
                                   1075 ; bit data
                                   1076 ;--------------------------------------------------------
                                   1077 	.area BSEG    (BIT)
                                   1078 ;--------------------------------------------------------
                                   1079 ; paged external ram data
                                   1080 ;--------------------------------------------------------
                                   1081 	.area PSEG    (PAG,XDATA)
                                   1082 ;--------------------------------------------------------
                                   1083 ; external ram data
                                   1084 ;--------------------------------------------------------
                                   1085 	.area XSEG    (XDATA)
                           000000  1086 Llab6.lcd_print$text$1$73==.
      000001                       1087 _lcd_print_text_1_73:
      000001                       1088 	.ds 80
                                   1089 ;--------------------------------------------------------
                                   1090 ; absolute external ram data
                                   1091 ;--------------------------------------------------------
                                   1092 	.area XABS    (ABS,XDATA)
                                   1093 ;--------------------------------------------------------
                                   1094 ; external initialized ram data
                                   1095 ;--------------------------------------------------------
                                   1096 	.area XISEG   (XDATA)
                                   1097 	.area HOME    (CODE)
                                   1098 	.area GSINIT0 (CODE)
                                   1099 	.area GSINIT1 (CODE)
                                   1100 	.area GSINIT2 (CODE)
                                   1101 	.area GSINIT3 (CODE)
                                   1102 	.area GSINIT4 (CODE)
                                   1103 	.area GSINIT5 (CODE)
                                   1104 	.area GSINIT  (CODE)
                                   1105 	.area GSFINAL (CODE)
                                   1106 	.area CSEG    (CODE)
                                   1107 ;--------------------------------------------------------
                                   1108 ; interrupt vector 
                                   1109 ;--------------------------------------------------------
                                   1110 	.area HOME    (CODE)
      000000                       1111 __interrupt_vect:
      000000 02 00 51         [24] 1112 	ljmp	__sdcc_gsinit_startup
      000003 32               [24] 1113 	reti
      000004                       1114 	.ds	7
      00000B 32               [24] 1115 	reti
      00000C                       1116 	.ds	7
      000013 32               [24] 1117 	reti
      000014                       1118 	.ds	7
      00001B 32               [24] 1119 	reti
      00001C                       1120 	.ds	7
      000023 32               [24] 1121 	reti
      000024                       1122 	.ds	7
      00002B 32               [24] 1123 	reti
      00002C                       1124 	.ds	7
      000033 32               [24] 1125 	reti
      000034                       1126 	.ds	7
      00003B 32               [24] 1127 	reti
      00003C                       1128 	.ds	7
      000043 32               [24] 1129 	reti
      000044                       1130 	.ds	7
      00004B 02 12 4F         [24] 1131 	ljmp	_PCA_ISR
                                   1132 ;--------------------------------------------------------
                                   1133 ; global & static initialisations
                                   1134 ;--------------------------------------------------------
                                   1135 	.area HOME    (CODE)
                                   1136 	.area GSINIT  (CODE)
                                   1137 	.area GSFINAL (CODE)
                                   1138 	.area GSINIT  (CODE)
                                   1139 	.globl __sdcc_gsinit_startup
                                   1140 	.globl __sdcc_program_startup
                                   1141 	.globl __start__stack
                                   1142 	.globl __mcs51_genXINIT
                                   1143 	.globl __mcs51_genXRAMCLEAR
                                   1144 	.globl __mcs51_genRAMCLEAR
                           000000  1145 	C$lab6.c$43$1$216 ==.
                                   1146 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:43: int count=0;
      0000AA E4               [12] 1147 	clr	a
      0000AB F5 32            [12] 1148 	mov	_count,a
      0000AD F5 33            [12] 1149 	mov	(_count + 1),a
                           000005  1150 	C$lab6.c$44$1$216 ==.
                                   1151 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:44: unsigned int PW_MIN_THRUST = 2000;
      0000AF 75 34 D0         [24] 1152 	mov	_PW_MIN_THRUST,#0xD0
      0000B2 75 35 07         [24] 1153 	mov	(_PW_MIN_THRUST + 1),#0x07
                           00000B  1154 	C$lab6.c$45$1$216 ==.
                                   1155 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:45: unsigned int PW_NUET_THRUST = 2750;
      0000B5 75 36 BE         [24] 1156 	mov	_PW_NUET_THRUST,#0xBE
      0000B8 75 37 0A         [24] 1157 	mov	(_PW_NUET_THRUST + 1),#0x0A
                           000011  1158 	C$lab6.c$46$1$216 ==.
                                   1159 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:46: unsigned int PW_MAX_THRUST = 3500;
      0000BB 75 38 AC         [24] 1160 	mov	_PW_MAX_THRUST,#0xAC
      0000BE 75 39 0D         [24] 1161 	mov	(_PW_MAX_THRUST + 1),#0x0D
                           000017  1162 	C$lab6.c$48$1$216 ==.
                                   1163 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:48: unsigned int PW_LEFT_RUDDER = 2000;
      0000C1 75 3A D0         [24] 1164 	mov	_PW_LEFT_RUDDER,#0xD0
      0000C4 75 3B 07         [24] 1165 	mov	(_PW_LEFT_RUDDER + 1),#0x07
                           00001D  1166 	C$lab6.c$49$1$216 ==.
                                   1167 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:49: unsigned int PW_CENTER_RUDDER = 2750;
      0000C7 75 3C BE         [24] 1168 	mov	_PW_CENTER_RUDDER,#0xBE
      0000CA 75 3D 0A         [24] 1169 	mov	(_PW_CENTER_RUDDER + 1),#0x0A
                           000023  1170 	C$lab6.c$50$1$216 ==.
                                   1171 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:50: unsigned int PW_RIGHT_RUDDER = 3500;
      0000CD 75 3E AC         [24] 1172 	mov	_PW_RIGHT_RUDDER,#0xAC
      0000D0 75 3F 0D         [24] 1173 	mov	(_PW_RIGHT_RUDDER + 1),#0x0D
                           000029  1174 	C$lab6.c$52$1$216 ==.
                                   1175 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:52: unsigned int PW_UP_ANGLE = 2000;
      0000D3 75 40 D0         [24] 1176 	mov	_PW_UP_ANGLE,#0xD0
      0000D6 75 41 07         [24] 1177 	mov	(_PW_UP_ANGLE + 1),#0x07
                           00002F  1178 	C$lab6.c$53$1$216 ==.
                                   1179 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:53: unsigned int PW_CENTER_ANGLE = 2750;
      0000D9 75 42 BE         [24] 1180 	mov	_PW_CENTER_ANGLE,#0xBE
      0000DC 75 43 0A         [24] 1181 	mov	(_PW_CENTER_ANGLE + 1),#0x0A
                           000035  1182 	C$lab6.c$54$1$216 ==.
                                   1183 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:54: unsigned int PW_DOWN_ANGLE = 3500;
      0000DF 75 44 AC         [24] 1184 	mov	_PW_DOWN_ANGLE,#0xAC
      0000E2 75 45 0D         [24] 1185 	mov	(_PW_DOWN_ANGLE + 1),#0x0D
                                   1186 	.area GSFINAL (CODE)
      0000E5 02 00 4E         [24] 1187 	ljmp	__sdcc_program_startup
                                   1188 ;--------------------------------------------------------
                                   1189 ; Home
                                   1190 ;--------------------------------------------------------
                                   1191 	.area HOME    (CODE)
                                   1192 	.area HOME    (CODE)
      00004E                       1193 __sdcc_program_startup:
      00004E 02 05 BE         [24] 1194 	ljmp	_main
                                   1195 ;	return from main will return to caller
                                   1196 ;--------------------------------------------------------
                                   1197 ; code
                                   1198 ;--------------------------------------------------------
                                   1199 	.area CSEG    (CODE)
                                   1200 ;------------------------------------------------------------
                                   1201 ;Allocation info for local variables in function 'SYSCLK_Init'
                                   1202 ;------------------------------------------------------------
                                   1203 ;i                         Allocated to registers 
                                   1204 ;------------------------------------------------------------
                           000000  1205 	G$SYSCLK_Init$0$0 ==.
                           000000  1206 	C$c8051_SDCC.h$42$0$0 ==.
                                   1207 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:42: void SYSCLK_Init(void)
                                   1208 ;	-----------------------------------------
                                   1209 ;	 function SYSCLK_Init
                                   1210 ;	-----------------------------------------
      0000E8                       1211 _SYSCLK_Init:
                           000007  1212 	ar7 = 0x07
                           000006  1213 	ar6 = 0x06
                           000005  1214 	ar5 = 0x05
                           000004  1215 	ar4 = 0x04
                           000003  1216 	ar3 = 0x03
                           000002  1217 	ar2 = 0x02
                           000001  1218 	ar1 = 0x01
                           000000  1219 	ar0 = 0x00
                           000000  1220 	C$c8051_SDCC.h$46$1$31 ==.
                                   1221 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:46: OSCXCN = 0x67;                      // start external oscillator with
      0000E8 75 B1 67         [24] 1222 	mov	_OSCXCN,#0x67
                           000003  1223 	C$c8051_SDCC.h$49$1$31 ==.
                                   1224 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:49: for (i=0; i < 256; i++);            // wait for oscillator to start
      0000EB 7E 00            [12] 1225 	mov	r6,#0x00
      0000ED 7F 01            [12] 1226 	mov	r7,#0x01
      0000EF                       1227 00107$:
      0000EF 1E               [12] 1228 	dec	r6
      0000F0 BE FF 01         [24] 1229 	cjne	r6,#0xFF,00121$
      0000F3 1F               [12] 1230 	dec	r7
      0000F4                       1231 00121$:
      0000F4 EE               [12] 1232 	mov	a,r6
      0000F5 4F               [12] 1233 	orl	a,r7
      0000F6 70 F7            [24] 1234 	jnz	00107$
                           000010  1235 	C$c8051_SDCC.h$51$1$31 ==.
                                   1236 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:51: while (!(OSCXCN & 0x80));           // Wait for crystal osc. to settle
      0000F8                       1237 00102$:
      0000F8 E5 B1            [12] 1238 	mov	a,_OSCXCN
      0000FA 30 E7 FB         [24] 1239 	jnb	acc.7,00102$
                           000015  1240 	C$c8051_SDCC.h$53$1$31 ==.
                                   1241 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:53: OSCICN = 0x88;                      // select external oscillator as SYSCLK
      0000FD 75 B2 88         [24] 1242 	mov	_OSCICN,#0x88
                           000018  1243 	C$c8051_SDCC.h$56$1$31 ==.
                           000018  1244 	XG$SYSCLK_Init$0$0 ==.
      000100 22               [24] 1245 	ret
                                   1246 ;------------------------------------------------------------
                                   1247 ;Allocation info for local variables in function 'UART0_Init'
                                   1248 ;------------------------------------------------------------
                           000019  1249 	G$UART0_Init$0$0 ==.
                           000019  1250 	C$c8051_SDCC.h$64$1$31 ==.
                                   1251 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:64: void UART0_Init(void)
                                   1252 ;	-----------------------------------------
                                   1253 ;	 function UART0_Init
                                   1254 ;	-----------------------------------------
      000101                       1255 _UART0_Init:
                           000019  1256 	C$c8051_SDCC.h$66$1$33 ==.
                                   1257 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:66: SCON0  = 0x50;                      // SCON0: mode 1, 8-bit UART, enable RX
      000101 75 98 50         [24] 1258 	mov	_SCON0,#0x50
                           00001C  1259 	C$c8051_SDCC.h$67$1$33 ==.
                                   1260 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:67: TMOD   = 0x20;                      // TMOD: timer 1, mode 2, 8-bit reload
      000104 75 89 20         [24] 1261 	mov	_TMOD,#0x20
                           00001F  1262 	C$c8051_SDCC.h$68$1$33 ==.
                                   1263 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:68: TH1    = -(SYSCLK/BAUDRATE/16);     // set Timer1 reload value for baudrate
      000107 75 8D DC         [24] 1264 	mov	_TH1,#0xDC
                           000022  1265 	C$c8051_SDCC.h$69$1$33 ==.
                                   1266 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:69: TR1    = 1;                         // start Timer1
      00010A D2 8E            [12] 1267 	setb	_TR1
                           000024  1268 	C$c8051_SDCC.h$70$1$33 ==.
                                   1269 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:70: CKCON |= 0x10;                      // Timer1 uses SYSCLK as time base
      00010C 43 8E 10         [24] 1270 	orl	_CKCON,#0x10
                           000027  1271 	C$c8051_SDCC.h$71$1$33 ==.
                                   1272 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:71: PCON  |= 0x80;                      // SMOD00 = 1 (disable baud rate 
      00010F 43 87 80         [24] 1273 	orl	_PCON,#0x80
                           00002A  1274 	C$c8051_SDCC.h$73$1$33 ==.
                                   1275 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:73: TI0    = 1;                         // Indicate TX0 ready
      000112 D2 99            [12] 1276 	setb	_TI0
                           00002C  1277 	C$c8051_SDCC.h$74$1$33 ==.
                                   1278 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:74: P0MDOUT |= 0x01;                    // Set TX0 to push/pull
      000114 43 A4 01         [24] 1279 	orl	_P0MDOUT,#0x01
                           00002F  1280 	C$c8051_SDCC.h$75$1$33 ==.
                           00002F  1281 	XG$UART0_Init$0$0 ==.
      000117 22               [24] 1282 	ret
                                   1283 ;------------------------------------------------------------
                                   1284 ;Allocation info for local variables in function 'Sys_Init'
                                   1285 ;------------------------------------------------------------
                           000030  1286 	G$Sys_Init$0$0 ==.
                           000030  1287 	C$c8051_SDCC.h$83$1$33 ==.
                                   1288 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:83: void Sys_Init(void)
                                   1289 ;	-----------------------------------------
                                   1290 ;	 function Sys_Init
                                   1291 ;	-----------------------------------------
      000118                       1292 _Sys_Init:
                           000030  1293 	C$c8051_SDCC.h$85$1$35 ==.
                                   1294 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:85: WDTCN = 0xde;			// disable watchdog timer
      000118 75 FF DE         [24] 1295 	mov	_WDTCN,#0xDE
                           000033  1296 	C$c8051_SDCC.h$86$1$35 ==.
                                   1297 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:86: WDTCN = 0xad;
      00011B 75 FF AD         [24] 1298 	mov	_WDTCN,#0xAD
                           000036  1299 	C$c8051_SDCC.h$88$1$35 ==.
                                   1300 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:88: SYSCLK_Init();			// initialize oscillator
      00011E 12 00 E8         [24] 1301 	lcall	_SYSCLK_Init
                           000039  1302 	C$c8051_SDCC.h$89$1$35 ==.
                                   1303 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:89: UART0_Init();			// initialize UART0
      000121 12 01 01         [24] 1304 	lcall	_UART0_Init
                           00003C  1305 	C$c8051_SDCC.h$91$1$35 ==.
                                   1306 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:91: XBR0 |= 0x04;
      000124 43 E1 04         [24] 1307 	orl	_XBR0,#0x04
                           00003F  1308 	C$c8051_SDCC.h$92$1$35 ==.
                                   1309 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:92: XBR2 |= 0x40;                    	// Enable crossbar and weak pull-ups
      000127 43 E3 40         [24] 1310 	orl	_XBR2,#0x40
                           000042  1311 	C$c8051_SDCC.h$93$1$35 ==.
                           000042  1312 	XG$Sys_Init$0$0 ==.
      00012A 22               [24] 1313 	ret
                                   1314 ;------------------------------------------------------------
                                   1315 ;Allocation info for local variables in function 'putchar'
                                   1316 ;------------------------------------------------------------
                                   1317 ;c                         Allocated to registers r7 
                                   1318 ;------------------------------------------------------------
                           000043  1319 	G$putchar$0$0 ==.
                           000043  1320 	C$c8051_SDCC.h$98$1$35 ==.
                                   1321 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:98: void putchar(char c)
                                   1322 ;	-----------------------------------------
                                   1323 ;	 function putchar
                                   1324 ;	-----------------------------------------
      00012B                       1325 _putchar:
      00012B AF 82            [24] 1326 	mov	r7,dpl
                           000045  1327 	C$c8051_SDCC.h$100$1$37 ==.
                                   1328 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:100: while (!TI0); 
      00012D                       1329 00101$:
                           000045  1330 	C$c8051_SDCC.h$101$1$37 ==.
                                   1331 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:101: TI0 = 0;
      00012D 10 99 02         [24] 1332 	jbc	_TI0,00112$
      000130 80 FB            [24] 1333 	sjmp	00101$
      000132                       1334 00112$:
                           00004A  1335 	C$c8051_SDCC.h$102$1$37 ==.
                                   1336 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:102: SBUF0 = c;
      000132 8F 99            [24] 1337 	mov	_SBUF0,r7
                           00004C  1338 	C$c8051_SDCC.h$103$1$37 ==.
                           00004C  1339 	XG$putchar$0$0 ==.
      000134 22               [24] 1340 	ret
                                   1341 ;------------------------------------------------------------
                                   1342 ;Allocation info for local variables in function 'getchar'
                                   1343 ;------------------------------------------------------------
                                   1344 ;c                         Allocated to registers 
                                   1345 ;------------------------------------------------------------
                           00004D  1346 	G$getchar$0$0 ==.
                           00004D  1347 	C$c8051_SDCC.h$108$1$37 ==.
                                   1348 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:108: char getchar(void)
                                   1349 ;	-----------------------------------------
                                   1350 ;	 function getchar
                                   1351 ;	-----------------------------------------
      000135                       1352 _getchar:
                           00004D  1353 	C$c8051_SDCC.h$111$1$39 ==.
                                   1354 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:111: while (!RI0);
      000135                       1355 00101$:
                           00004D  1356 	C$c8051_SDCC.h$112$1$39 ==.
                                   1357 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:112: RI0 = 0;
      000135 10 98 02         [24] 1358 	jbc	_RI0,00112$
      000138 80 FB            [24] 1359 	sjmp	00101$
      00013A                       1360 00112$:
                           000052  1361 	C$c8051_SDCC.h$113$1$39 ==.
                                   1362 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:113: c = SBUF0;
      00013A 85 99 82         [24] 1363 	mov	dpl,_SBUF0
                           000055  1364 	C$c8051_SDCC.h$114$1$39 ==.
                                   1365 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:114: putchar(c);                          // echo to terminal
      00013D 12 01 2B         [24] 1366 	lcall	_putchar
                           000058  1367 	C$c8051_SDCC.h$115$1$39 ==.
                                   1368 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:115: return SBUF0;
      000140 85 99 82         [24] 1369 	mov	dpl,_SBUF0
                           00005B  1370 	C$c8051_SDCC.h$116$1$39 ==.
                           00005B  1371 	XG$getchar$0$0 ==.
      000143 22               [24] 1372 	ret
                                   1373 ;------------------------------------------------------------
                                   1374 ;Allocation info for local variables in function 'lcd_print'
                                   1375 ;------------------------------------------------------------
                                   1376 ;fmt                       Allocated to stack - _bp -5
                                   1377 ;len                       Allocated to registers r6 
                                   1378 ;i                         Allocated to registers 
                                   1379 ;ap                        Allocated to registers 
                                   1380 ;text                      Allocated with name '_lcd_print_text_1_73'
                                   1381 ;------------------------------------------------------------
                           00005C  1382 	G$lcd_print$0$0 ==.
                           00005C  1383 	C$i2c.h$81$1$39 ==.
                                   1384 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:81: void lcd_print(const char *fmt, ...)
                                   1385 ;	-----------------------------------------
                                   1386 ;	 function lcd_print
                                   1387 ;	-----------------------------------------
      000144                       1388 _lcd_print:
      000144 C0 0F            [24] 1389 	push	_bp
      000146 85 81 0F         [24] 1390 	mov	_bp,sp
                           000061  1391 	C$i2c.h$87$1$73 ==.
                                   1392 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:87: if ( strlen(fmt) <= 0 ) return;   //If there is no data to print, return
      000149 E5 0F            [12] 1393 	mov	a,_bp
      00014B 24 FB            [12] 1394 	add	a,#0xfb
      00014D F8               [12] 1395 	mov	r0,a
      00014E 86 82            [24] 1396 	mov	dpl,@r0
      000150 08               [12] 1397 	inc	r0
      000151 86 83            [24] 1398 	mov	dph,@r0
      000153 08               [12] 1399 	inc	r0
      000154 86 F0            [24] 1400 	mov	b,@r0
      000156 12 1B 7B         [24] 1401 	lcall	_strlen
      000159 E5 82            [12] 1402 	mov	a,dpl
      00015B 85 83 F0         [24] 1403 	mov	b,dph
      00015E 45 F0            [12] 1404 	orl	a,b
      000160 70 02            [24] 1405 	jnz	00102$
      000162 80 62            [24] 1406 	sjmp	00109$
      000164                       1407 00102$:
                           00007C  1408 	C$i2c.h$89$2$74 ==.
                                   1409 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:89: va_start(ap, fmt);
      000164 E5 0F            [12] 1410 	mov	a,_bp
      000166 24 FB            [12] 1411 	add	a,#0xFB
      000168 FF               [12] 1412 	mov	r7,a
      000169 8F 0B            [24] 1413 	mov	_vsprintf_PARM_3,r7
                           000083  1414 	C$i2c.h$90$1$73 ==.
                                   1415 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:90: vsprintf(text, fmt, ap);
      00016B E5 0F            [12] 1416 	mov	a,_bp
      00016D 24 FB            [12] 1417 	add	a,#0xfb
      00016F F8               [12] 1418 	mov	r0,a
      000170 86 08            [24] 1419 	mov	_vsprintf_PARM_2,@r0
      000172 08               [12] 1420 	inc	r0
      000173 86 09            [24] 1421 	mov	(_vsprintf_PARM_2 + 1),@r0
      000175 08               [12] 1422 	inc	r0
      000176 86 0A            [24] 1423 	mov	(_vsprintf_PARM_2 + 2),@r0
      000178 90 00 01         [24] 1424 	mov	dptr,#_lcd_print_text_1_73
      00017B 75 F0 00         [24] 1425 	mov	b,#0x00
      00017E 12 13 81         [24] 1426 	lcall	_vsprintf
                           000099  1427 	C$i2c.h$93$1$73 ==.
                                   1428 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:93: len = strlen(text);
      000181 90 00 01         [24] 1429 	mov	dptr,#_lcd_print_text_1_73
      000184 75 F0 00         [24] 1430 	mov	b,#0x00
      000187 12 1B 7B         [24] 1431 	lcall	_strlen
      00018A AE 82            [24] 1432 	mov	r6,dpl
                           0000A4  1433 	C$i2c.h$94$1$73 ==.
                                   1434 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:94: for(i=0; i<len; i++)
      00018C 7F 00            [12] 1435 	mov	r7,#0x00
      00018E                       1436 00107$:
      00018E C3               [12] 1437 	clr	c
      00018F EF               [12] 1438 	mov	a,r7
      000190 9E               [12] 1439 	subb	a,r6
      000191 50 1F            [24] 1440 	jnc	00105$
                           0000AB  1441 	C$i2c.h$96$2$76 ==.
                                   1442 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:96: if(text[i] == (unsigned char)'\n') text[i] = 13;
      000193 EF               [12] 1443 	mov	a,r7
      000194 24 01            [12] 1444 	add	a,#_lcd_print_text_1_73
      000196 F5 82            [12] 1445 	mov	dpl,a
      000198 E4               [12] 1446 	clr	a
      000199 34 00            [12] 1447 	addc	a,#(_lcd_print_text_1_73 >> 8)
      00019B F5 83            [12] 1448 	mov	dph,a
      00019D E0               [24] 1449 	movx	a,@dptr
      00019E FD               [12] 1450 	mov	r5,a
      00019F BD 0A 0D         [24] 1451 	cjne	r5,#0x0A,00108$
      0001A2 EF               [12] 1452 	mov	a,r7
      0001A3 24 01            [12] 1453 	add	a,#_lcd_print_text_1_73
      0001A5 F5 82            [12] 1454 	mov	dpl,a
      0001A7 E4               [12] 1455 	clr	a
      0001A8 34 00            [12] 1456 	addc	a,#(_lcd_print_text_1_73 >> 8)
      0001AA F5 83            [12] 1457 	mov	dph,a
      0001AC 74 0D            [12] 1458 	mov	a,#0x0D
      0001AE F0               [24] 1459 	movx	@dptr,a
      0001AF                       1460 00108$:
                           0000C7  1461 	C$i2c.h$94$1$73 ==.
                                   1462 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:94: for(i=0; i<len; i++)
      0001AF 0F               [12] 1463 	inc	r7
      0001B0 80 DC            [24] 1464 	sjmp	00107$
      0001B2                       1465 00105$:
                           0000CA  1466 	C$i2c.h$99$1$73 ==.
                                   1467 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:99: i2c_write_data(0xC6, 0x00, text, len);
      0001B2 75 28 01         [24] 1468 	mov	_i2c_write_data_PARM_3,#_lcd_print_text_1_73
      0001B5 75 29 00         [24] 1469 	mov	(_i2c_write_data_PARM_3 + 1),#(_lcd_print_text_1_73 >> 8)
      0001B8 75 2A 00         [24] 1470 	mov	(_i2c_write_data_PARM_3 + 2),#0x00
      0001BB 75 27 00         [24] 1471 	mov	_i2c_write_data_PARM_2,#0x00
      0001BE 8E 2B            [24] 1472 	mov	_i2c_write_data_PARM_4,r6
      0001C0 75 82 C6         [24] 1473 	mov	dpl,#0xC6
      0001C3 12 04 5A         [24] 1474 	lcall	_i2c_write_data
      0001C6                       1475 00109$:
      0001C6 D0 0F            [24] 1476 	pop	_bp
                           0000E0  1477 	C$i2c.h$100$1$73 ==.
                           0000E0  1478 	XG$lcd_print$0$0 ==.
      0001C8 22               [24] 1479 	ret
                                   1480 ;------------------------------------------------------------
                                   1481 ;Allocation info for local variables in function 'lcd_clear'
                                   1482 ;------------------------------------------------------------
                                   1483 ;NumBytes                  Allocated with name '_lcd_clear_NumBytes_1_77'
                                   1484 ;Cmd                       Allocated with name '_lcd_clear_Cmd_1_77'
                                   1485 ;------------------------------------------------------------
                           0000E1  1486 	G$lcd_clear$0$0 ==.
                           0000E1  1487 	C$i2c.h$103$1$73 ==.
                                   1488 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:103: void lcd_clear()
                                   1489 ;	-----------------------------------------
                                   1490 ;	 function lcd_clear
                                   1491 ;	-----------------------------------------
      0001C9                       1492 _lcd_clear:
                           0000E1  1493 	C$i2c.h$105$1$73 ==.
                                   1494 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:105: unsigned char NumBytes=0, Cmd[2];
      0001C9 75 22 00         [24] 1495 	mov	_lcd_clear_NumBytes_1_77,#0x00
                           0000E4  1496 	C$i2c.h$107$1$77 ==.
                                   1497 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:107: while(NumBytes < 64) i2c_read_data(0xC6, 0x00, &NumBytes, 1);
      0001CC                       1498 00101$:
      0001CC 74 C0            [12] 1499 	mov	a,#0x100 - 0x40
      0001CE 25 22            [12] 1500 	add	a,_lcd_clear_NumBytes_1_77
      0001D0 40 17            [24] 1501 	jc	00103$
      0001D2 75 2D 22         [24] 1502 	mov	_i2c_read_data_PARM_3,#_lcd_clear_NumBytes_1_77
      0001D5 75 2E 00         [24] 1503 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0001D8 75 2F 40         [24] 1504 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0001DB 75 2C 00         [24] 1505 	mov	_i2c_read_data_PARM_2,#0x00
      0001DE 75 30 01         [24] 1506 	mov	_i2c_read_data_PARM_4,#0x01
      0001E1 75 82 C6         [24] 1507 	mov	dpl,#0xC6
      0001E4 12 04 D0         [24] 1508 	lcall	_i2c_read_data
      0001E7 80 E3            [24] 1509 	sjmp	00101$
      0001E9                       1510 00103$:
                           000101  1511 	C$i2c.h$109$1$77 ==.
                                   1512 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:109: Cmd[0] = 12;
      0001E9 75 23 0C         [24] 1513 	mov	_lcd_clear_Cmd_1_77,#0x0C
                           000104  1514 	C$i2c.h$110$1$77 ==.
                                   1515 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:110: i2c_write_data(0xC6, 0x00, Cmd, 1);
      0001EC 75 28 23         [24] 1516 	mov	_i2c_write_data_PARM_3,#_lcd_clear_Cmd_1_77
      0001EF 75 29 00         [24] 1517 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      0001F2 75 2A 40         [24] 1518 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      0001F5 75 27 00         [24] 1519 	mov	_i2c_write_data_PARM_2,#0x00
      0001F8 75 2B 01         [24] 1520 	mov	_i2c_write_data_PARM_4,#0x01
      0001FB 75 82 C6         [24] 1521 	mov	dpl,#0xC6
      0001FE 12 04 5A         [24] 1522 	lcall	_i2c_write_data
                           000119  1523 	C$i2c.h$111$1$77 ==.
                           000119  1524 	XG$lcd_clear$0$0 ==.
      000201 22               [24] 1525 	ret
                                   1526 ;------------------------------------------------------------
                                   1527 ;Allocation info for local variables in function 'read_keypad'
                                   1528 ;------------------------------------------------------------
                                   1529 ;i                         Allocated to registers r7 
                                   1530 ;Data                      Allocated with name '_read_keypad_Data_1_78'
                                   1531 ;------------------------------------------------------------
                           00011A  1532 	G$read_keypad$0$0 ==.
                           00011A  1533 	C$i2c.h$114$1$77 ==.
                                   1534 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:114: char read_keypad()
                                   1535 ;	-----------------------------------------
                                   1536 ;	 function read_keypad
                                   1537 ;	-----------------------------------------
      000202                       1538 _read_keypad:
                           00011A  1539 	C$i2c.h$118$1$78 ==.
                                   1540 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:118: i2c_read_data(0xC6, 0x01, Data, 2); //Read I2C data on address 192, register 1, 2 bytes of data.
      000202 75 2D 25         [24] 1541 	mov	_i2c_read_data_PARM_3,#_read_keypad_Data_1_78
      000205 75 2E 00         [24] 1542 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      000208 75 2F 40         [24] 1543 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      00020B 75 2C 01         [24] 1544 	mov	_i2c_read_data_PARM_2,#0x01
      00020E 75 30 02         [24] 1545 	mov	_i2c_read_data_PARM_4,#0x02
      000211 75 82 C6         [24] 1546 	mov	dpl,#0xC6
      000214 12 04 D0         [24] 1547 	lcall	_i2c_read_data
                           00012F  1548 	C$i2c.h$119$1$78 ==.
                                   1549 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:119: if(Data[0] == 0xFF) return 0;  //No response on bus, no display
      000217 74 FF            [12] 1550 	mov	a,#0xFF
      000219 B5 25 05         [24] 1551 	cjne	a,_read_keypad_Data_1_78,00102$
      00021C 75 82 00         [24] 1552 	mov	dpl,#0x00
      00021F 80 5F            [24] 1553 	sjmp	00116$
      000221                       1554 00102$:
                           000139  1555 	C$i2c.h$121$1$78 ==.
                                   1556 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:121: for(i=0; i<8; i++)             //loop 8 times
      000221 7F 00            [12] 1557 	mov	r7,#0x00
      000223 8F 06            [24] 1558 	mov	ar6,r7
      000225                       1559 00114$:
                           00013D  1560 	C$i2c.h$123$2$79 ==.
                                   1561 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:123: if(Data[0] & (0x01 << i))  //find the ASCII value of the keypad read, if it is the current loop value
      000225 8E F0            [24] 1562 	mov	b,r6
      000227 05 F0            [12] 1563 	inc	b
      000229 7C 01            [12] 1564 	mov	r4,#0x01
      00022B 7D 00            [12] 1565 	mov	r5,#0x00
      00022D 80 06            [24] 1566 	sjmp	00145$
      00022F                       1567 00144$:
      00022F EC               [12] 1568 	mov	a,r4
      000230 2C               [12] 1569 	add	a,r4
      000231 FC               [12] 1570 	mov	r4,a
      000232 ED               [12] 1571 	mov	a,r5
      000233 33               [12] 1572 	rlc	a
      000234 FD               [12] 1573 	mov	r5,a
      000235                       1574 00145$:
      000235 D5 F0 F7         [24] 1575 	djnz	b,00144$
      000238 AA 25            [24] 1576 	mov	r2,_read_keypad_Data_1_78
      00023A 7B 00            [12] 1577 	mov	r3,#0x00
      00023C EA               [12] 1578 	mov	a,r2
      00023D 52 04            [12] 1579 	anl	ar4,a
      00023F EB               [12] 1580 	mov	a,r3
      000240 52 05            [12] 1581 	anl	ar5,a
      000242 EC               [12] 1582 	mov	a,r4
      000243 4D               [12] 1583 	orl	a,r5
      000244 60 07            [24] 1584 	jz	00115$
                           00015E  1585 	C$i2c.h$124$2$79 ==.
                                   1586 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:124: return i+49;
      000246 74 31            [12] 1587 	mov	a,#0x31
      000248 2F               [12] 1588 	add	a,r7
      000249 F5 82            [12] 1589 	mov	dpl,a
      00024B 80 33            [24] 1590 	sjmp	00116$
      00024D                       1591 00115$:
                           000165  1592 	C$i2c.h$121$1$78 ==.
                                   1593 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:121: for(i=0; i<8; i++)             //loop 8 times
      00024D 0E               [12] 1594 	inc	r6
      00024E 8E 07            [24] 1595 	mov	ar7,r6
      000250 BE 08 00         [24] 1596 	cjne	r6,#0x08,00147$
      000253                       1597 00147$:
      000253 40 D0            [24] 1598 	jc	00114$
                           00016D  1599 	C$i2c.h$127$1$78 ==.
                                   1600 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:127: if(Data[1] & 0x01) return '9'; //if the value is equal to 9 return 9.
      000255 E5 26            [12] 1601 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000257 30 E0 05         [24] 1602 	jnb	acc.0,00107$
      00025A 75 82 39         [24] 1603 	mov	dpl,#0x39
      00025D 80 21            [24] 1604 	sjmp	00116$
      00025F                       1605 00107$:
                           000177  1606 	C$i2c.h$129$1$78 ==.
                                   1607 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:129: if(Data[1] & 0x02) return '*'; //if the value is equal to the star.
      00025F E5 26            [12] 1608 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000261 30 E1 05         [24] 1609 	jnb	acc.1,00109$
      000264 75 82 2A         [24] 1610 	mov	dpl,#0x2A
      000267 80 17            [24] 1611 	sjmp	00116$
      000269                       1612 00109$:
                           000181  1613 	C$i2c.h$131$1$78 ==.
                                   1614 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:131: if(Data[1] & 0x04) return '0'; //if the value is equal to the 0 key
      000269 E5 26            [12] 1615 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      00026B 30 E2 05         [24] 1616 	jnb	acc.2,00111$
      00026E 75 82 30         [24] 1617 	mov	dpl,#0x30
      000271 80 0D            [24] 1618 	sjmp	00116$
      000273                       1619 00111$:
                           00018B  1620 	C$i2c.h$133$1$78 ==.
                                   1621 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:133: if(Data[1] & 0x08) return '#'; //if the value is equal to the pound key
      000273 E5 26            [12] 1622 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000275 30 E3 05         [24] 1623 	jnb	acc.3,00113$
      000278 75 82 23         [24] 1624 	mov	dpl,#0x23
      00027B 80 03            [24] 1625 	sjmp	00116$
      00027D                       1626 00113$:
                           000195  1627 	C$i2c.h$135$1$78 ==.
                                   1628 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:135: return -1;                     //else return a numerical -1 (0xFF)
      00027D 75 82 FF         [24] 1629 	mov	dpl,#0xFF
      000280                       1630 00116$:
                           000198  1631 	C$i2c.h$136$1$78 ==.
                           000198  1632 	XG$read_keypad$0$0 ==.
      000280 22               [24] 1633 	ret
                                   1634 ;------------------------------------------------------------
                                   1635 ;Allocation info for local variables in function 'kpd_input'
                                   1636 ;------------------------------------------------------------
                                   1637 ;mode                      Allocated to registers r7 
                                   1638 ;sum                       Allocated to registers r5 r6 
                                   1639 ;key                       Allocated to registers r3 
                                   1640 ;i                         Allocated to registers 
                                   1641 ;------------------------------------------------------------
                           000199  1642 	G$kpd_input$0$0 ==.
                           000199  1643 	C$i2c.h$148$1$78 ==.
                                   1644 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:148: unsigned int kpd_input(char mode)
                                   1645 ;	-----------------------------------------
                                   1646 ;	 function kpd_input
                                   1647 ;	-----------------------------------------
      000281                       1648 _kpd_input:
      000281 AF 82            [24] 1649 	mov	r7,dpl
                           00019B  1650 	C$i2c.h$153$1$81 ==.
                                   1651 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:153: sum = 0;
                           00019B  1652 	C$i2c.h$156$1$81 ==.
                                   1653 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:156: if(mode==0)lcd_print("\nType digits; end w/#");
      000283 E4               [12] 1654 	clr	a
      000284 FD               [12] 1655 	mov	r5,a
      000285 FE               [12] 1656 	mov	r6,a
      000286 EF               [12] 1657 	mov	a,r7
      000287 70 1D            [24] 1658 	jnz	00102$
      000289 C0 06            [24] 1659 	push	ar6
      00028B C0 05            [24] 1660 	push	ar5
      00028D 74 9C            [12] 1661 	mov	a,#___str_0
      00028F C0 E0            [24] 1662 	push	acc
      000291 74 1D            [12] 1663 	mov	a,#(___str_0 >> 8)
      000293 C0 E0            [24] 1664 	push	acc
      000295 74 80            [12] 1665 	mov	a,#0x80
      000297 C0 E0            [24] 1666 	push	acc
      000299 12 01 44         [24] 1667 	lcall	_lcd_print
      00029C 15 81            [12] 1668 	dec	sp
      00029E 15 81            [12] 1669 	dec	sp
      0002A0 15 81            [12] 1670 	dec	sp
      0002A2 D0 05            [24] 1671 	pop	ar5
      0002A4 D0 06            [24] 1672 	pop	ar6
      0002A6                       1673 00102$:
                           0001BE  1674 	C$i2c.h$158$1$81 ==.
                                   1675 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:158: lcd_print("     %c%c%c%c%c",0x08,0x08,0x08,0x08,0x08);
      0002A6 C0 06            [24] 1676 	push	ar6
      0002A8 C0 05            [24] 1677 	push	ar5
      0002AA 74 08            [12] 1678 	mov	a,#0x08
      0002AC C0 E0            [24] 1679 	push	acc
      0002AE E4               [12] 1680 	clr	a
      0002AF C0 E0            [24] 1681 	push	acc
      0002B1 74 08            [12] 1682 	mov	a,#0x08
      0002B3 C0 E0            [24] 1683 	push	acc
      0002B5 E4               [12] 1684 	clr	a
      0002B6 C0 E0            [24] 1685 	push	acc
      0002B8 74 08            [12] 1686 	mov	a,#0x08
      0002BA C0 E0            [24] 1687 	push	acc
      0002BC E4               [12] 1688 	clr	a
      0002BD C0 E0            [24] 1689 	push	acc
      0002BF 74 08            [12] 1690 	mov	a,#0x08
      0002C1 C0 E0            [24] 1691 	push	acc
      0002C3 E4               [12] 1692 	clr	a
      0002C4 C0 E0            [24] 1693 	push	acc
      0002C6 74 08            [12] 1694 	mov	a,#0x08
      0002C8 C0 E0            [24] 1695 	push	acc
      0002CA E4               [12] 1696 	clr	a
      0002CB C0 E0            [24] 1697 	push	acc
      0002CD 74 B2            [12] 1698 	mov	a,#___str_1
      0002CF C0 E0            [24] 1699 	push	acc
      0002D1 74 1D            [12] 1700 	mov	a,#(___str_1 >> 8)
      0002D3 C0 E0            [24] 1701 	push	acc
      0002D5 74 80            [12] 1702 	mov	a,#0x80
      0002D7 C0 E0            [24] 1703 	push	acc
      0002D9 12 01 44         [24] 1704 	lcall	_lcd_print
      0002DC E5 81            [12] 1705 	mov	a,sp
      0002DE 24 F3            [12] 1706 	add	a,#0xf3
      0002E0 F5 81            [12] 1707 	mov	sp,a
                           0001FA  1708 	C$i2c.h$160$1$81 ==.
                                   1709 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:160: delay_time(500000);	//Add 20ms delay before reading i2c in loop
      0002E2 90 A1 20         [24] 1710 	mov	dptr,#0xA120
      0002E5 75 F0 07         [24] 1711 	mov	b,#0x07
      0002E8 E4               [12] 1712 	clr	a
      0002E9 12 03 F5         [24] 1713 	lcall	_delay_time
      0002EC D0 05            [24] 1714 	pop	ar5
      0002EE D0 06            [24] 1715 	pop	ar6
                           000208  1716 	C$i2c.h$164$1$81 ==.
                                   1717 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:164: for(i=0; i<5; i++)
      0002F0 7F 00            [12] 1718 	mov	r7,#0x00
                           00020A  1719 	C$i2c.h$166$3$84 ==.
                                   1720 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:166: while(((key=read_keypad()) == -1) || (key == '*'))delay_time(10000);
      0002F2                       1721 00104$:
      0002F2 C0 07            [24] 1722 	push	ar7
      0002F4 C0 06            [24] 1723 	push	ar6
      0002F6 C0 05            [24] 1724 	push	ar5
      0002F8 12 02 02         [24] 1725 	lcall	_read_keypad
      0002FB AC 82            [24] 1726 	mov	r4,dpl
      0002FD D0 05            [24] 1727 	pop	ar5
      0002FF D0 06            [24] 1728 	pop	ar6
      000301 D0 07            [24] 1729 	pop	ar7
      000303 8C 03            [24] 1730 	mov	ar3,r4
      000305 BC FF 02         [24] 1731 	cjne	r4,#0xFF,00146$
      000308 80 03            [24] 1732 	sjmp	00105$
      00030A                       1733 00146$:
      00030A BB 2A 17         [24] 1734 	cjne	r3,#0x2A,00106$
      00030D                       1735 00105$:
      00030D 90 27 10         [24] 1736 	mov	dptr,#0x2710
      000310 E4               [12] 1737 	clr	a
      000311 F5 F0            [12] 1738 	mov	b,a
      000313 C0 07            [24] 1739 	push	ar7
      000315 C0 06            [24] 1740 	push	ar6
      000317 C0 05            [24] 1741 	push	ar5
      000319 12 03 F5         [24] 1742 	lcall	_delay_time
      00031C D0 05            [24] 1743 	pop	ar5
      00031E D0 06            [24] 1744 	pop	ar6
      000320 D0 07            [24] 1745 	pop	ar7
      000322 80 CE            [24] 1746 	sjmp	00104$
      000324                       1747 00106$:
                           00023C  1748 	C$i2c.h$167$2$82 ==.
                                   1749 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:167: if(key == '#')
      000324 BB 23 2A         [24] 1750 	cjne	r3,#0x23,00114$
                           00023F  1751 	C$i2c.h$169$3$83 ==.
                                   1752 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:169: while(read_keypad() == '#')delay_time(10000);
      000327                       1753 00107$:
      000327 C0 06            [24] 1754 	push	ar6
      000329 C0 05            [24] 1755 	push	ar5
      00032B 12 02 02         [24] 1756 	lcall	_read_keypad
      00032E AC 82            [24] 1757 	mov	r4,dpl
      000330 D0 05            [24] 1758 	pop	ar5
      000332 D0 06            [24] 1759 	pop	ar6
      000334 BC 23 13         [24] 1760 	cjne	r4,#0x23,00109$
      000337 90 27 10         [24] 1761 	mov	dptr,#0x2710
      00033A E4               [12] 1762 	clr	a
      00033B F5 F0            [12] 1763 	mov	b,a
      00033D C0 06            [24] 1764 	push	ar6
      00033F C0 05            [24] 1765 	push	ar5
      000341 12 03 F5         [24] 1766 	lcall	_delay_time
      000344 D0 05            [24] 1767 	pop	ar5
      000346 D0 06            [24] 1768 	pop	ar6
      000348 80 DD            [24] 1769 	sjmp	00107$
      00034A                       1770 00109$:
                           000262  1771 	C$i2c.h$170$3$83 ==.
                                   1772 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:170: return sum;
      00034A 8D 82            [24] 1773 	mov	dpl,r5
      00034C 8E 83            [24] 1774 	mov	dph,r6
      00034E 02 03 F4         [24] 1775 	ljmp	00119$
      000351                       1776 00114$:
                           000269  1777 	C$i2c.h$174$3$84 ==.
                                   1778 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:174: lcd_print("%c", key);
      000351 EB               [12] 1779 	mov	a,r3
      000352 FA               [12] 1780 	mov	r2,a
      000353 33               [12] 1781 	rlc	a
      000354 95 E0            [12] 1782 	subb	a,acc
      000356 FC               [12] 1783 	mov	r4,a
      000357 C0 07            [24] 1784 	push	ar7
      000359 C0 06            [24] 1785 	push	ar6
      00035B C0 05            [24] 1786 	push	ar5
      00035D C0 04            [24] 1787 	push	ar4
      00035F C0 03            [24] 1788 	push	ar3
      000361 C0 02            [24] 1789 	push	ar2
      000363 C0 02            [24] 1790 	push	ar2
      000365 C0 04            [24] 1791 	push	ar4
      000367 74 C2            [12] 1792 	mov	a,#___str_2
      000369 C0 E0            [24] 1793 	push	acc
      00036B 74 1D            [12] 1794 	mov	a,#(___str_2 >> 8)
      00036D C0 E0            [24] 1795 	push	acc
      00036F 74 80            [12] 1796 	mov	a,#0x80
      000371 C0 E0            [24] 1797 	push	acc
      000373 12 01 44         [24] 1798 	lcall	_lcd_print
      000376 E5 81            [12] 1799 	mov	a,sp
      000378 24 FB            [12] 1800 	add	a,#0xfb
      00037A F5 81            [12] 1801 	mov	sp,a
      00037C D0 02            [24] 1802 	pop	ar2
      00037E D0 03            [24] 1803 	pop	ar3
      000380 D0 04            [24] 1804 	pop	ar4
      000382 D0 05            [24] 1805 	pop	ar5
      000384 D0 06            [24] 1806 	pop	ar6
                           00029E  1807 	C$i2c.h$175$1$81 ==.
                                   1808 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:175: sum = sum*10 + key - '0';
      000386 8D 11            [24] 1809 	mov	__mulint_PARM_2,r5
      000388 8E 12            [24] 1810 	mov	(__mulint_PARM_2 + 1),r6
      00038A 90 00 0A         [24] 1811 	mov	dptr,#0x000A
      00038D C0 04            [24] 1812 	push	ar4
      00038F C0 03            [24] 1813 	push	ar3
      000391 C0 02            [24] 1814 	push	ar2
      000393 12 12 F4         [24] 1815 	lcall	__mulint
      000396 A8 82            [24] 1816 	mov	r0,dpl
      000398 A9 83            [24] 1817 	mov	r1,dph
      00039A D0 02            [24] 1818 	pop	ar2
      00039C D0 03            [24] 1819 	pop	ar3
      00039E D0 04            [24] 1820 	pop	ar4
      0003A0 D0 07            [24] 1821 	pop	ar7
      0003A2 EA               [12] 1822 	mov	a,r2
      0003A3 28               [12] 1823 	add	a,r0
      0003A4 F8               [12] 1824 	mov	r0,a
      0003A5 EC               [12] 1825 	mov	a,r4
      0003A6 39               [12] 1826 	addc	a,r1
      0003A7 F9               [12] 1827 	mov	r1,a
      0003A8 E8               [12] 1828 	mov	a,r0
      0003A9 24 D0            [12] 1829 	add	a,#0xD0
      0003AB FD               [12] 1830 	mov	r5,a
      0003AC E9               [12] 1831 	mov	a,r1
      0003AD 34 FF            [12] 1832 	addc	a,#0xFF
      0003AF FE               [12] 1833 	mov	r6,a
                           0002C8  1834 	C$i2c.h$176$3$84 ==.
                                   1835 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:176: while(read_keypad() == key)delay_time(10000); //wait for key to be released
      0003B0                       1836 00110$:
      0003B0 C0 07            [24] 1837 	push	ar7
      0003B2 C0 06            [24] 1838 	push	ar6
      0003B4 C0 05            [24] 1839 	push	ar5
      0003B6 C0 03            [24] 1840 	push	ar3
      0003B8 12 02 02         [24] 1841 	lcall	_read_keypad
      0003BB AC 82            [24] 1842 	mov	r4,dpl
      0003BD D0 03            [24] 1843 	pop	ar3
      0003BF D0 05            [24] 1844 	pop	ar5
      0003C1 D0 06            [24] 1845 	pop	ar6
      0003C3 D0 07            [24] 1846 	pop	ar7
      0003C5 EC               [12] 1847 	mov	a,r4
      0003C6 B5 03 1B         [24] 1848 	cjne	a,ar3,00118$
      0003C9 90 27 10         [24] 1849 	mov	dptr,#0x2710
      0003CC E4               [12] 1850 	clr	a
      0003CD F5 F0            [12] 1851 	mov	b,a
      0003CF C0 07            [24] 1852 	push	ar7
      0003D1 C0 06            [24] 1853 	push	ar6
      0003D3 C0 05            [24] 1854 	push	ar5
      0003D5 C0 03            [24] 1855 	push	ar3
      0003D7 12 03 F5         [24] 1856 	lcall	_delay_time
      0003DA D0 03            [24] 1857 	pop	ar3
      0003DC D0 05            [24] 1858 	pop	ar5
      0003DE D0 06            [24] 1859 	pop	ar6
      0003E0 D0 07            [24] 1860 	pop	ar7
      0003E2 80 CC            [24] 1861 	sjmp	00110$
      0003E4                       1862 00118$:
                           0002FC  1863 	C$i2c.h$164$1$81 ==.
                                   1864 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:164: for(i=0; i<5; i++)
      0003E4 0F               [12] 1865 	inc	r7
      0003E5 C3               [12] 1866 	clr	c
      0003E6 EF               [12] 1867 	mov	a,r7
      0003E7 64 80            [12] 1868 	xrl	a,#0x80
      0003E9 94 85            [12] 1869 	subb	a,#0x85
      0003EB 50 03            [24] 1870 	jnc	00155$
      0003ED 02 02 F2         [24] 1871 	ljmp	00104$
      0003F0                       1872 00155$:
                           000308  1873 	C$i2c.h$179$1$81 ==.
                                   1874 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:179: return sum;
      0003F0 8D 82            [24] 1875 	mov	dpl,r5
      0003F2 8E 83            [24] 1876 	mov	dph,r6
      0003F4                       1877 00119$:
                           00030C  1878 	C$i2c.h$180$1$81 ==.
                           00030C  1879 	XG$kpd_input$0$0 ==.
      0003F4 22               [24] 1880 	ret
                                   1881 ;------------------------------------------------------------
                                   1882 ;Allocation info for local variables in function 'delay_time'
                                   1883 ;------------------------------------------------------------
                                   1884 ;time_end                  Allocated to registers r4 r5 r6 r7 
                                   1885 ;index                     Allocated to registers 
                                   1886 ;------------------------------------------------------------
                           00030D  1887 	G$delay_time$0$0 ==.
                           00030D  1888 	C$i2c.h$189$1$81 ==.
                                   1889 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:189: void delay_time (unsigned long time_end)
                                   1890 ;	-----------------------------------------
                                   1891 ;	 function delay_time
                                   1892 ;	-----------------------------------------
      0003F5                       1893 _delay_time:
      0003F5 AC 82            [24] 1894 	mov	r4,dpl
      0003F7 AD 83            [24] 1895 	mov	r5,dph
      0003F9 AE F0            [24] 1896 	mov	r6,b
      0003FB FF               [12] 1897 	mov	r7,a
                           000314  1898 	C$i2c.h$192$1$86 ==.
                                   1899 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:192: for (index = 0; index < time_end; index++); //for loop delay
      0003FC 78 00            [12] 1900 	mov	r0,#0x00
      0003FE 79 00            [12] 1901 	mov	r1,#0x00
      000400 7A 00            [12] 1902 	mov	r2,#0x00
      000402 7B 00            [12] 1903 	mov	r3,#0x00
      000404                       1904 00103$:
      000404 C3               [12] 1905 	clr	c
      000405 E8               [12] 1906 	mov	a,r0
      000406 9C               [12] 1907 	subb	a,r4
      000407 E9               [12] 1908 	mov	a,r1
      000408 9D               [12] 1909 	subb	a,r5
      000409 EA               [12] 1910 	mov	a,r2
      00040A 9E               [12] 1911 	subb	a,r6
      00040B EB               [12] 1912 	mov	a,r3
      00040C 9F               [12] 1913 	subb	a,r7
      00040D 50 0F            [24] 1914 	jnc	00105$
      00040F 08               [12] 1915 	inc	r0
      000410 B8 00 09         [24] 1916 	cjne	r0,#0x00,00115$
      000413 09               [12] 1917 	inc	r1
      000414 B9 00 05         [24] 1918 	cjne	r1,#0x00,00115$
      000417 0A               [12] 1919 	inc	r2
      000418 BA 00 E9         [24] 1920 	cjne	r2,#0x00,00103$
      00041B 0B               [12] 1921 	inc	r3
      00041C                       1922 00115$:
      00041C 80 E6            [24] 1923 	sjmp	00103$
      00041E                       1924 00105$:
                           000336  1925 	C$i2c.h$193$1$86 ==.
                           000336  1926 	XG$delay_time$0$0 ==.
      00041E 22               [24] 1927 	ret
                                   1928 ;------------------------------------------------------------
                                   1929 ;Allocation info for local variables in function 'i2c_start'
                                   1930 ;------------------------------------------------------------
                           000337  1931 	G$i2c_start$0$0 ==.
                           000337  1932 	C$i2c.h$196$1$86 ==.
                                   1933 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:196: void i2c_start(void)
                                   1934 ;	-----------------------------------------
                                   1935 ;	 function i2c_start
                                   1936 ;	-----------------------------------------
      00041F                       1937 _i2c_start:
                           000337  1938 	C$i2c.h$198$1$88 ==.
                                   1939 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:198: while(BUSY);              //Wait until SMBus0 is free
      00041F                       1940 00101$:
      00041F 20 C7 FD         [24] 1941 	jb	_BUSY,00101$
                           00033A  1942 	C$i2c.h$199$1$88 ==.
                                   1943 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:199: STA = 1;                  //Set Start Bit
      000422 D2 C5            [12] 1944 	setb	_STA
                           00033C  1945 	C$i2c.h$200$1$88 ==.
                                   1946 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:200: while(!SI);               //Wait until start sent
      000424                       1947 00104$:
      000424 30 C3 FD         [24] 1948 	jnb	_SI,00104$
                           00033F  1949 	C$i2c.h$201$1$88 ==.
                                   1950 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:201: STA = 0;                  //Clear start bit
      000427 C2 C5            [12] 1951 	clr	_STA
                           000341  1952 	C$i2c.h$202$1$88 ==.
                                   1953 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:202: SI = 0;                   //Clear SI
      000429 C2 C3            [12] 1954 	clr	_SI
                           000343  1955 	C$i2c.h$203$1$88 ==.
                           000343  1956 	XG$i2c_start$0$0 ==.
      00042B 22               [24] 1957 	ret
                                   1958 ;------------------------------------------------------------
                                   1959 ;Allocation info for local variables in function 'i2c_write'
                                   1960 ;------------------------------------------------------------
                                   1961 ;output_data               Allocated to registers 
                                   1962 ;------------------------------------------------------------
                           000344  1963 	G$i2c_write$0$0 ==.
                           000344  1964 	C$i2c.h$206$1$88 ==.
                                   1965 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:206: void i2c_write(unsigned char output_data)
                                   1966 ;	-----------------------------------------
                                   1967 ;	 function i2c_write
                                   1968 ;	-----------------------------------------
      00042C                       1969 _i2c_write:
      00042C 85 82 C2         [24] 1970 	mov	_SMB0DAT,dpl
                           000347  1971 	C$i2c.h$209$1$90 ==.
                                   1972 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:209: while(!SI);               //Wait until send is complete
      00042F                       1973 00101$:
                           000347  1974 	C$i2c.h$210$1$90 ==.
                                   1975 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:210: SI = 0;                   //Clear SI
      00042F 10 C3 02         [24] 1976 	jbc	_SI,00112$
      000432 80 FB            [24] 1977 	sjmp	00101$
      000434                       1978 00112$:
                           00034C  1979 	C$i2c.h$211$1$90 ==.
                           00034C  1980 	XG$i2c_write$0$0 ==.
      000434 22               [24] 1981 	ret
                                   1982 ;------------------------------------------------------------
                                   1983 ;Allocation info for local variables in function 'i2c_write_and_stop'
                                   1984 ;------------------------------------------------------------
                                   1985 ;output_data               Allocated to registers 
                                   1986 ;------------------------------------------------------------
                           00034D  1987 	G$i2c_write_and_stop$0$0 ==.
                           00034D  1988 	C$i2c.h$214$1$90 ==.
                                   1989 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:214: void i2c_write_and_stop(unsigned char output_data)
                                   1990 ;	-----------------------------------------
                                   1991 ;	 function i2c_write_and_stop
                                   1992 ;	-----------------------------------------
      000435                       1993 _i2c_write_and_stop:
      000435 85 82 C2         [24] 1994 	mov	_SMB0DAT,dpl
                           000350  1995 	C$i2c.h$217$1$92 ==.
                                   1996 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:217: STO = 1;                  //Set stop bit
      000438 D2 C4            [12] 1997 	setb	_STO
                           000352  1998 	C$i2c.h$218$1$92 ==.
                                   1999 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:218: while(!SI);               //Wait until send is complete
      00043A                       2000 00101$:
                           000352  2001 	C$i2c.h$219$1$92 ==.
                                   2002 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:219: SI = 0;                   //clear SI
      00043A 10 C3 02         [24] 2003 	jbc	_SI,00112$
      00043D 80 FB            [24] 2004 	sjmp	00101$
      00043F                       2005 00112$:
                           000357  2006 	C$i2c.h$220$1$92 ==.
                           000357  2007 	XG$i2c_write_and_stop$0$0 ==.
      00043F 22               [24] 2008 	ret
                                   2009 ;------------------------------------------------------------
                                   2010 ;Allocation info for local variables in function 'i2c_read'
                                   2011 ;------------------------------------------------------------
                                   2012 ;input_data                Allocated to registers 
                                   2013 ;------------------------------------------------------------
                           000358  2014 	G$i2c_read$0$0 ==.
                           000358  2015 	C$i2c.h$223$1$92 ==.
                                   2016 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:223: unsigned char i2c_read(void)
                                   2017 ;	-----------------------------------------
                                   2018 ;	 function i2c_read
                                   2019 ;	-----------------------------------------
      000440                       2020 _i2c_read:
                           000358  2021 	C$i2c.h$226$1$94 ==.
                                   2022 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:226: while(!SI);                //Wait until we have data to read
      000440                       2023 00101$:
      000440 30 C3 FD         [24] 2024 	jnb	_SI,00101$
                           00035B  2025 	C$i2c.h$227$1$94 ==.
                                   2026 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:227: input_data = SMB0DAT;      //Read the data
      000443 85 C2 82         [24] 2027 	mov	dpl,_SMB0DAT
                           00035E  2028 	C$i2c.h$228$1$94 ==.
                                   2029 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:228: SI = 0;                    //Clear SI
      000446 C2 C3            [12] 2030 	clr	_SI
                           000360  2031 	C$i2c.h$229$1$94 ==.
                                   2032 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:229: return input_data;         //Return the read data
                           000360  2033 	C$i2c.h$230$1$94 ==.
                           000360  2034 	XG$i2c_read$0$0 ==.
      000448 22               [24] 2035 	ret
                                   2036 ;------------------------------------------------------------
                                   2037 ;Allocation info for local variables in function 'i2c_read_and_stop'
                                   2038 ;------------------------------------------------------------
                                   2039 ;input_data                Allocated to registers r7 
                                   2040 ;------------------------------------------------------------
                           000361  2041 	G$i2c_read_and_stop$0$0 ==.
                           000361  2042 	C$i2c.h$233$1$94 ==.
                                   2043 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:233: unsigned char i2c_read_and_stop(void)
                                   2044 ;	-----------------------------------------
                                   2045 ;	 function i2c_read_and_stop
                                   2046 ;	-----------------------------------------
      000449                       2047 _i2c_read_and_stop:
                           000361  2048 	C$i2c.h$236$1$96 ==.
                                   2049 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:236: while(!SI);                //Wait until we have data to read
      000449                       2050 00101$:
      000449 30 C3 FD         [24] 2051 	jnb	_SI,00101$
                           000364  2052 	C$i2c.h$237$1$96 ==.
                                   2053 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:237: input_data = SMB0DAT;      //Read the data
      00044C AF C2            [24] 2054 	mov	r7,_SMB0DAT
                           000366  2055 	C$i2c.h$238$1$96 ==.
                                   2056 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:238: SI = 0;                    //Clear SI
      00044E C2 C3            [12] 2057 	clr	_SI
                           000368  2058 	C$i2c.h$239$1$96 ==.
                                   2059 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:239: STO = 1;                   //Set stop bit
      000450 D2 C4            [12] 2060 	setb	_STO
                           00036A  2061 	C$i2c.h$240$1$96 ==.
                                   2062 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:240: while(!SI);                //Wait for stop
      000452                       2063 00104$:
                           00036A  2064 	C$i2c.h$241$1$96 ==.
                                   2065 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:241: SI = 0;
      000452 10 C3 02         [24] 2066 	jbc	_SI,00122$
      000455 80 FB            [24] 2067 	sjmp	00104$
      000457                       2068 00122$:
                           00036F  2069 	C$i2c.h$242$1$96 ==.
                                   2070 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:242: return input_data;         //Return the read data
      000457 8F 82            [24] 2071 	mov	dpl,r7
                           000371  2072 	C$i2c.h$243$1$96 ==.
                           000371  2073 	XG$i2c_read_and_stop$0$0 ==.
      000459 22               [24] 2074 	ret
                                   2075 ;------------------------------------------------------------
                                   2076 ;Allocation info for local variables in function 'i2c_write_data'
                                   2077 ;------------------------------------------------------------
                                   2078 ;start_reg                 Allocated with name '_i2c_write_data_PARM_2'
                                   2079 ;buffer                    Allocated with name '_i2c_write_data_PARM_3'
                                   2080 ;num_bytes                 Allocated with name '_i2c_write_data_PARM_4'
                                   2081 ;addr                      Allocated to registers r7 
                                   2082 ;i                         Allocated to registers 
                                   2083 ;------------------------------------------------------------
                           000372  2084 	G$i2c_write_data$0$0 ==.
                           000372  2085 	C$i2c.h$246$1$96 ==.
                                   2086 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:246: void i2c_write_data(unsigned char addr, unsigned char start_reg, unsigned char *buffer, unsigned char num_bytes)
                                   2087 ;	-----------------------------------------
                                   2088 ;	 function i2c_write_data
                                   2089 ;	-----------------------------------------
      00045A                       2090 _i2c_write_data:
      00045A AF 82            [24] 2091 	mov	r7,dpl
                           000374  2092 	C$i2c.h$250$1$98 ==.
                                   2093 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:250: i2c_start();               //initiate I2C transfer
      00045C C0 07            [24] 2094 	push	ar7
      00045E 12 04 1F         [24] 2095 	lcall	_i2c_start
      000461 D0 07            [24] 2096 	pop	ar7
                           00037B  2097 	C$i2c.h$251$1$98 ==.
                                   2098 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:251: i2c_write(addr & ~0x01);   //write the desired address to the bus
      000463 74 FE            [12] 2099 	mov	a,#0xFE
      000465 5F               [12] 2100 	anl	a,r7
      000466 F5 82            [12] 2101 	mov	dpl,a
      000468 12 04 2C         [24] 2102 	lcall	_i2c_write
                           000383  2103 	C$i2c.h$252$1$98 ==.
                                   2104 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:252: i2c_write(start_reg);      //write the start register to the bus
      00046B 85 27 82         [24] 2105 	mov	dpl,_i2c_write_data_PARM_2
      00046E 12 04 2C         [24] 2106 	lcall	_i2c_write
                           000389  2107 	C$i2c.h$253$1$98 ==.
                                   2108 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:253: for(i=0; i<num_bytes-1; i++) //write the data to the register(s)
      000471 7F 00            [12] 2109 	mov	r7,#0x00
      000473                       2110 00103$:
      000473 AD 2B            [24] 2111 	mov	r5,_i2c_write_data_PARM_4
      000475 7E 00            [12] 2112 	mov	r6,#0x00
      000477 1D               [12] 2113 	dec	r5
      000478 BD FF 01         [24] 2114 	cjne	r5,#0xFF,00114$
      00047B 1E               [12] 2115 	dec	r6
      00047C                       2116 00114$:
      00047C 8F 03            [24] 2117 	mov	ar3,r7
      00047E 7C 00            [12] 2118 	mov	r4,#0x00
      000480 C3               [12] 2119 	clr	c
      000481 EB               [12] 2120 	mov	a,r3
      000482 9D               [12] 2121 	subb	a,r5
      000483 EC               [12] 2122 	mov	a,r4
      000484 64 80            [12] 2123 	xrl	a,#0x80
      000486 8E F0            [24] 2124 	mov	b,r6
      000488 63 F0 80         [24] 2125 	xrl	b,#0x80
      00048B 95 F0            [12] 2126 	subb	a,b
      00048D 50 1F            [24] 2127 	jnc	00101$
                           0003A7  2128 	C$i2c.h$254$1$98 ==.
                                   2129 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:254: i2c_write(buffer[i]);
      00048F EF               [12] 2130 	mov	a,r7
      000490 25 28            [12] 2131 	add	a,_i2c_write_data_PARM_3
      000492 FC               [12] 2132 	mov	r4,a
      000493 E4               [12] 2133 	clr	a
      000494 35 29            [12] 2134 	addc	a,(_i2c_write_data_PARM_3 + 1)
      000496 FD               [12] 2135 	mov	r5,a
      000497 AE 2A            [24] 2136 	mov	r6,(_i2c_write_data_PARM_3 + 2)
      000499 8C 82            [24] 2137 	mov	dpl,r4
      00049B 8D 83            [24] 2138 	mov	dph,r5
      00049D 8E F0            [24] 2139 	mov	b,r6
      00049F 12 1C 56         [24] 2140 	lcall	__gptrget
      0004A2 F5 82            [12] 2141 	mov	dpl,a
      0004A4 C0 07            [24] 2142 	push	ar7
      0004A6 12 04 2C         [24] 2143 	lcall	_i2c_write
      0004A9 D0 07            [24] 2144 	pop	ar7
                           0003C3  2145 	C$i2c.h$253$1$98 ==.
                                   2146 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:253: for(i=0; i<num_bytes-1; i++) //write the data to the register(s)
      0004AB 0F               [12] 2147 	inc	r7
      0004AC 80 C5            [24] 2148 	sjmp	00103$
      0004AE                       2149 00101$:
                           0003C6  2150 	C$i2c.h$255$1$98 ==.
                                   2151 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:255: i2c_write_and_stop(buffer[num_bytes-1]); //Stop transfer
      0004AE AE 2B            [24] 2152 	mov	r6,_i2c_write_data_PARM_4
      0004B0 7F 00            [12] 2153 	mov	r7,#0x00
      0004B2 1E               [12] 2154 	dec	r6
      0004B3 BE FF 01         [24] 2155 	cjne	r6,#0xFF,00116$
      0004B6 1F               [12] 2156 	dec	r7
      0004B7                       2157 00116$:
      0004B7 EE               [12] 2158 	mov	a,r6
      0004B8 25 28            [12] 2159 	add	a,_i2c_write_data_PARM_3
      0004BA FE               [12] 2160 	mov	r6,a
      0004BB EF               [12] 2161 	mov	a,r7
      0004BC 35 29            [12] 2162 	addc	a,(_i2c_write_data_PARM_3 + 1)
      0004BE FF               [12] 2163 	mov	r7,a
      0004BF AD 2A            [24] 2164 	mov	r5,(_i2c_write_data_PARM_3 + 2)
      0004C1 8E 82            [24] 2165 	mov	dpl,r6
      0004C3 8F 83            [24] 2166 	mov	dph,r7
      0004C5 8D F0            [24] 2167 	mov	b,r5
      0004C7 12 1C 56         [24] 2168 	lcall	__gptrget
      0004CA F5 82            [12] 2169 	mov	dpl,a
      0004CC 12 04 35         [24] 2170 	lcall	_i2c_write_and_stop
                           0003E7  2171 	C$i2c.h$256$1$98 ==.
                           0003E7  2172 	XG$i2c_write_data$0$0 ==.
      0004CF 22               [24] 2173 	ret
                                   2174 ;------------------------------------------------------------
                                   2175 ;Allocation info for local variables in function 'i2c_read_data'
                                   2176 ;------------------------------------------------------------
                                   2177 ;start_reg                 Allocated with name '_i2c_read_data_PARM_2'
                                   2178 ;buffer                    Allocated with name '_i2c_read_data_PARM_3'
                                   2179 ;num_bytes                 Allocated with name '_i2c_read_data_PARM_4'
                                   2180 ;addr                      Allocated to registers r7 
                                   2181 ;j                         Allocated to registers 
                                   2182 ;------------------------------------------------------------
                           0003E8  2183 	G$i2c_read_data$0$0 ==.
                           0003E8  2184 	C$i2c.h$259$1$98 ==.
                                   2185 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:259: void i2c_read_data(unsigned char addr, unsigned char start_reg, unsigned char *buffer, unsigned char num_bytes)
                                   2186 ;	-----------------------------------------
                                   2187 ;	 function i2c_read_data
                                   2188 ;	-----------------------------------------
      0004D0                       2189 _i2c_read_data:
      0004D0 AF 82            [24] 2190 	mov	r7,dpl
                           0003EA  2191 	C$i2c.h$262$1$100 ==.
                                   2192 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:262: i2c_start();               //Start I2C transfer
      0004D2 C0 07            [24] 2193 	push	ar7
      0004D4 12 04 1F         [24] 2194 	lcall	_i2c_start
      0004D7 D0 07            [24] 2195 	pop	ar7
                           0003F1  2196 	C$i2c.h$263$1$100 ==.
                                   2197 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:263: i2c_write(addr & ~0x01);   //Write address of device that will be written to, send 0
      0004D9 8F 06            [24] 2198 	mov	ar6,r7
      0004DB 74 FE            [12] 2199 	mov	a,#0xFE
      0004DD 5E               [12] 2200 	anl	a,r6
      0004DE F5 82            [12] 2201 	mov	dpl,a
      0004E0 C0 07            [24] 2202 	push	ar7
      0004E2 12 04 2C         [24] 2203 	lcall	_i2c_write
                           0003FD  2204 	C$i2c.h$264$1$100 ==.
                                   2205 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:264: i2c_write_and_stop(start_reg); //Write & stop the 1st register to be read
      0004E5 85 2C 82         [24] 2206 	mov	dpl,_i2c_read_data_PARM_2
      0004E8 12 04 35         [24] 2207 	lcall	_i2c_write_and_stop
                           000403  2208 	C$i2c.h$265$1$100 ==.
                                   2209 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:265: i2c_start();               //Start I2C transfer
      0004EB 12 04 1F         [24] 2210 	lcall	_i2c_start
      0004EE D0 07            [24] 2211 	pop	ar7
                           000408  2212 	C$i2c.h$266$1$100 ==.
                                   2213 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:266: i2c_write(addr | 0x01);    //Write address again, this time indicating a read operation
      0004F0 74 01            [12] 2214 	mov	a,#0x01
      0004F2 4F               [12] 2215 	orl	a,r7
      0004F3 F5 82            [12] 2216 	mov	dpl,a
      0004F5 12 04 2C         [24] 2217 	lcall	_i2c_write
                           000410  2218 	C$i2c.h$267$1$100 ==.
                                   2219 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:267: for(j = 0; j < num_bytes - 1; j++)
      0004F8 7F 00            [12] 2220 	mov	r7,#0x00
      0004FA                       2221 00103$:
      0004FA AD 30            [24] 2222 	mov	r5,_i2c_read_data_PARM_4
      0004FC 7E 00            [12] 2223 	mov	r6,#0x00
      0004FE 1D               [12] 2224 	dec	r5
      0004FF BD FF 01         [24] 2225 	cjne	r5,#0xFF,00114$
      000502 1E               [12] 2226 	dec	r6
      000503                       2227 00114$:
      000503 8F 03            [24] 2228 	mov	ar3,r7
      000505 7C 00            [12] 2229 	mov	r4,#0x00
      000507 C3               [12] 2230 	clr	c
      000508 EB               [12] 2231 	mov	a,r3
      000509 9D               [12] 2232 	subb	a,r5
      00050A EC               [12] 2233 	mov	a,r4
      00050B 64 80            [12] 2234 	xrl	a,#0x80
      00050D 8E F0            [24] 2235 	mov	b,r6
      00050F 63 F0 80         [24] 2236 	xrl	b,#0x80
      000512 95 F0            [12] 2237 	subb	a,b
      000514 50 2E            [24] 2238 	jnc	00101$
                           00042E  2239 	C$i2c.h$269$2$101 ==.
                                   2240 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:269: AA = 1;                //Set acknowledge bit
      000516 D2 C2            [12] 2241 	setb	_AA
                           000430  2242 	C$i2c.h$270$2$101 ==.
                                   2243 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:270: buffer[j] = i2c_read();//Read data, save it in buffer
      000518 EF               [12] 2244 	mov	a,r7
      000519 25 2D            [12] 2245 	add	a,_i2c_read_data_PARM_3
      00051B FC               [12] 2246 	mov	r4,a
      00051C E4               [12] 2247 	clr	a
      00051D 35 2E            [12] 2248 	addc	a,(_i2c_read_data_PARM_3 + 1)
      00051F FD               [12] 2249 	mov	r5,a
      000520 AE 2F            [24] 2250 	mov	r6,(_i2c_read_data_PARM_3 + 2)
      000522 C0 07            [24] 2251 	push	ar7
      000524 C0 06            [24] 2252 	push	ar6
      000526 C0 05            [24] 2253 	push	ar5
      000528 C0 04            [24] 2254 	push	ar4
      00052A 12 04 40         [24] 2255 	lcall	_i2c_read
      00052D AB 82            [24] 2256 	mov	r3,dpl
      00052F D0 04            [24] 2257 	pop	ar4
      000531 D0 05            [24] 2258 	pop	ar5
      000533 D0 06            [24] 2259 	pop	ar6
      000535 D0 07            [24] 2260 	pop	ar7
      000537 8C 82            [24] 2261 	mov	dpl,r4
      000539 8D 83            [24] 2262 	mov	dph,r5
      00053B 8E F0            [24] 2263 	mov	b,r6
      00053D EB               [12] 2264 	mov	a,r3
      00053E 12 12 A9         [24] 2265 	lcall	__gptrput
                           000459  2266 	C$i2c.h$267$1$100 ==.
                                   2267 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:267: for(j = 0; j < num_bytes - 1; j++)
      000541 0F               [12] 2268 	inc	r7
      000542 80 B6            [24] 2269 	sjmp	00103$
      000544                       2270 00101$:
                           00045C  2271 	C$i2c.h$272$1$100 ==.
                                   2272 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:272: AA = 0;
      000544 C2 C2            [12] 2273 	clr	_AA
                           00045E  2274 	C$i2c.h$273$1$100 ==.
                                   2275 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:273: buffer[num_bytes - 1] = i2c_read_and_stop(); //Read the last byte and stop, save it in the buffer
      000546 AE 30            [24] 2276 	mov	r6,_i2c_read_data_PARM_4
      000548 7F 00            [12] 2277 	mov	r7,#0x00
      00054A 1E               [12] 2278 	dec	r6
      00054B BE FF 01         [24] 2279 	cjne	r6,#0xFF,00116$
      00054E 1F               [12] 2280 	dec	r7
      00054F                       2281 00116$:
      00054F EE               [12] 2282 	mov	a,r6
      000550 25 2D            [12] 2283 	add	a,_i2c_read_data_PARM_3
      000552 FE               [12] 2284 	mov	r6,a
      000553 EF               [12] 2285 	mov	a,r7
      000554 35 2E            [12] 2286 	addc	a,(_i2c_read_data_PARM_3 + 1)
      000556 FF               [12] 2287 	mov	r7,a
      000557 AD 2F            [24] 2288 	mov	r5,(_i2c_read_data_PARM_3 + 2)
      000559 C0 07            [24] 2289 	push	ar7
      00055B C0 06            [24] 2290 	push	ar6
      00055D C0 05            [24] 2291 	push	ar5
      00055F 12 04 49         [24] 2292 	lcall	_i2c_read_and_stop
      000562 AC 82            [24] 2293 	mov	r4,dpl
      000564 D0 05            [24] 2294 	pop	ar5
      000566 D0 06            [24] 2295 	pop	ar6
      000568 D0 07            [24] 2296 	pop	ar7
      00056A 8E 82            [24] 2297 	mov	dpl,r6
      00056C 8F 83            [24] 2298 	mov	dph,r7
      00056E 8D F0            [24] 2299 	mov	b,r5
      000570 EC               [12] 2300 	mov	a,r4
      000571 12 12 A9         [24] 2301 	lcall	__gptrput
                           00048C  2302 	C$i2c.h$274$1$100 ==.
                           00048C  2303 	XG$i2c_read_data$0$0 ==.
      000574 22               [24] 2304 	ret
                                   2305 ;------------------------------------------------------------
                                   2306 ;Allocation info for local variables in function 'Accel_Init'
                                   2307 ;------------------------------------------------------------
                                   2308 ;Data2                     Allocated with name '_Accel_Init_Data2_1_103'
                                   2309 ;------------------------------------------------------------
                           00048D  2310 	G$Accel_Init$0$0 ==.
                           00048D  2311 	C$i2c.h$283$1$100 ==.
                                   2312 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:283: void Accel_Init(void)
                                   2313 ;	-----------------------------------------
                                   2314 ;	 function Accel_Init
                                   2315 ;	-----------------------------------------
      000575                       2316 _Accel_Init:
                           00048D  2317 	C$i2c.h$287$1$103 ==.
                                   2318 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:287: Data2[0]=0x23;	//normal power mode, 50Hz ODR, y & x axes enabled
      000575 75 31 23         [24] 2319 	mov	_Accel_Init_Data2_1_103,#0x23
                           000490  2320 	C$i2c.h$289$1$103 ==.
                                   2321 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:289: i2c_write_data(addr_accel, 0x20, Data2, 1);
      000578 75 28 31         [24] 2322 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      00057B 75 29 00         [24] 2323 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      00057E 75 2A 40         [24] 2324 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000581 75 27 20         [24] 2325 	mov	_i2c_write_data_PARM_2,#0x20
      000584 75 2B 01         [24] 2326 	mov	_i2c_write_data_PARM_4,#0x01
      000587 75 82 30         [24] 2327 	mov	dpl,#0x30
      00058A 12 04 5A         [24] 2328 	lcall	_i2c_write_data
                           0004A5  2329 	C$i2c.h$290$1$103 ==.
                                   2330 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:290: Data2[0]=0x00;	//Default - no filtering
      00058D 75 31 00         [24] 2331 	mov	_Accel_Init_Data2_1_103,#0x00
                           0004A8  2332 	C$i2c.h$292$1$103 ==.
                                   2333 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:292: i2c_write_data(addr_accel, 0x21, Data2, 1);
      000590 75 28 31         [24] 2334 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      000593 75 29 00         [24] 2335 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      000596 75 2A 40         [24] 2336 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000599 75 27 21         [24] 2337 	mov	_i2c_write_data_PARM_2,#0x21
      00059C 75 2B 01         [24] 2338 	mov	_i2c_write_data_PARM_4,#0x01
      00059F 75 82 30         [24] 2339 	mov	dpl,#0x30
      0005A2 12 04 5A         [24] 2340 	lcall	_i2c_write_data
                           0004BD  2341 	C$i2c.h$293$1$103 ==.
                                   2342 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:293: Data2[0]=0x00;	//default - no interrupts enabled
      0005A5 75 31 00         [24] 2343 	mov	_Accel_Init_Data2_1_103,#0x00
                           0004C0  2344 	C$i2c.h$294$1$103 ==.
                                   2345 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:294: i2c_write_data(addr_accel, 0x22, Data2, 1);
      0005A8 75 28 31         [24] 2346 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      0005AB 75 29 00         [24] 2347 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      0005AE 75 2A 40         [24] 2348 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      0005B1 75 27 22         [24] 2349 	mov	_i2c_write_data_PARM_2,#0x22
      0005B4 75 2B 01         [24] 2350 	mov	_i2c_write_data_PARM_4,#0x01
      0005B7 75 82 30         [24] 2351 	mov	dpl,#0x30
      0005BA 12 04 5A         [24] 2352 	lcall	_i2c_write_data
                           0004D5  2353 	C$i2c.h$298$1$103 ==.
                           0004D5  2354 	XG$Accel_Init$0$0 ==.
      0005BD 22               [24] 2355 	ret
                                   2356 ;------------------------------------------------------------
                                   2357 ;Allocation info for local variables in function 'main'
                                   2358 ;------------------------------------------------------------
                           0004D6  2359 	G$main$0$0 ==.
                           0004D6  2360 	C$lab6.c$70$1$103 ==.
                                   2361 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:70: void main(void)
                                   2362 ;	-----------------------------------------
                                   2363 ;	 function main
                                   2364 ;	-----------------------------------------
      0005BE                       2365 _main:
                           0004D6  2366 	C$lab6.c$72$1$121 ==.
                                   2367 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:72: Sys_Init();
      0005BE 12 01 18         [24] 2368 	lcall	_Sys_Init
                           0004D9  2369 	C$lab6.c$73$1$121 ==.
                                   2370 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:73: putchar(' '); //the quotes in this line may not format correctly
      0005C1 75 82 20         [24] 2371 	mov	dpl,#0x20
      0005C4 12 01 2B         [24] 2372 	lcall	_putchar
                           0004DF  2373 	C$lab6.c$74$1$121 ==.
                                   2374 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:74: Port_Init();
      0005C7 12 12 0E         [24] 2375 	lcall	_Port_Init
                           0004E2  2376 	C$lab6.c$75$1$121 ==.
                                   2377 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:75: XBR0_Init();
      0005CA 12 12 3B         [24] 2378 	lcall	_XBR0_Init
                           0004E5  2379 	C$lab6.c$76$1$121 ==.
                                   2380 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:76: PCA_Init();
      0005CD 12 12 26         [24] 2381 	lcall	_PCA_Init
                           0004E8  2382 	C$lab6.c$77$1$121 ==.
                                   2383 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:77: SMB_Init();
      0005D0 12 12 3F         [24] 2384 	lcall	_SMB_Init
                           0004EB  2385 	C$lab6.c$78$1$121 ==.
                                   2386 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:78: ADC_Init();
      0005D3 12 12 45         [24] 2387 	lcall	_ADC_Init
                           0004EE  2388 	C$lab6.c$80$1$121 ==.
                                   2389 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:80: count =0;
      0005D6 E4               [12] 2390 	clr	a
      0005D7 F5 32            [12] 2391 	mov	_count,a
      0005D9 F5 33            [12] 2392 	mov	(_count + 1),a
                           0004F3  2393 	C$lab6.c$82$1$121 ==.
                                   2394 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:82: RUDDER_PW= PW_CENTER_RUDDER;
      0005DB 85 3C 46         [24] 2395 	mov	_RUDDER_PW,_PW_CENTER_RUDDER
      0005DE 85 3D 47         [24] 2396 	mov	(_RUDDER_PW + 1),(_PW_CENTER_RUDDER + 1)
                           0004F9  2397 	C$lab6.c$83$1$121 ==.
                                   2398 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:83: ANGLE_PW = PW_CENTER_ANGLE;
      0005E1 85 42 4A         [24] 2399 	mov	_ANGLE_PW,_PW_CENTER_ANGLE
      0005E4 85 43 4B         [24] 2400 	mov	(_ANGLE_PW + 1),(_PW_CENTER_ANGLE + 1)
                           0004FF  2401 	C$lab6.c$84$1$121 ==.
                                   2402 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:84: THRUST_PW = PW_NUET_THRUST;
      0005E7 85 36 4E         [24] 2403 	mov	_THRUST_PW,_PW_NUET_THRUST
      0005EA 85 37 4F         [24] 2404 	mov	(_THRUST_PW + 1),(_PW_NUET_THRUST + 1)
                           000505  2405 	C$lab6.c$86$1$121 ==.
                                   2406 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:86: RDR_lo_to_hi = 0xFFFF - RUDDER_PW;
      0005ED 14               [12] 2407 	dec	a
      0005EE C3               [12] 2408 	clr	c
      0005EF 95 46            [12] 2409 	subb	a,_RUDDER_PW
      0005F1 F5 48            [12] 2410 	mov	_RDR_lo_to_hi,a
      0005F3 74 FF            [12] 2411 	mov	a,#0xFF
      0005F5 95 47            [12] 2412 	subb	a,(_RUDDER_PW + 1)
      0005F7 F5 49            [12] 2413 	mov	(_RDR_lo_to_hi + 1),a
                           000511  2414 	C$lab6.c$87$1$121 ==.
                                   2415 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:87: TRST_lo_to_hi = 0xFFFF - THRUST_PW;
      0005F9 74 FF            [12] 2416 	mov	a,#0xFF
      0005FB C3               [12] 2417 	clr	c
      0005FC 95 4E            [12] 2418 	subb	a,_THRUST_PW
      0005FE F5 50            [12] 2419 	mov	_TRST_lo_to_hi,a
      000600 74 FF            [12] 2420 	mov	a,#0xFF
      000602 95 4F            [12] 2421 	subb	a,(_THRUST_PW + 1)
      000604 F5 51            [12] 2422 	mov	(_TRST_lo_to_hi + 1),a
                           00051E  2423 	C$lab6.c$88$1$121 ==.
                                   2424 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:88: AGL_lo_to_hi = 0xFFFF - ANGLE_PW;
      000606 74 FF            [12] 2425 	mov	a,#0xFF
      000608 C3               [12] 2426 	clr	c
      000609 95 4A            [12] 2427 	subb	a,_ANGLE_PW
      00060B F5 4C            [12] 2428 	mov	_AGL_lo_to_hi,a
      00060D 74 FF            [12] 2429 	mov	a,#0xFF
      00060F 95 4B            [12] 2430 	subb	a,(_ANGLE_PW + 1)
      000611 F5 4D            [12] 2431 	mov	(_AGL_lo_to_hi + 1),a
                           00052B  2432 	C$lab6.c$90$1$121 ==.
                                   2433 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:90: PCA0CP0 = RDR_lo_to_hi;
      000613 85 48 EA         [24] 2434 	mov	((_PCA0CP0 >> 0) & 0xFF),_RDR_lo_to_hi
      000616 85 49 FA         [24] 2435 	mov	((_PCA0CP0 >> 8) & 0xFF),(_RDR_lo_to_hi + 1)
                           000531  2436 	C$lab6.c$91$1$121 ==.
                                   2437 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:91: PCA0CP1 = AGL_lo_to_hi;
      000619 85 4C EB         [24] 2438 	mov	((_PCA0CP1 >> 0) & 0xFF),_AGL_lo_to_hi
      00061C 85 4D FB         [24] 2439 	mov	((_PCA0CP1 >> 8) & 0xFF),(_AGL_lo_to_hi + 1)
                           000537  2440 	C$lab6.c$92$1$121 ==.
                                   2441 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:92: PCA0CP2 = TRST_lo_to_hi;
      00061F 85 50 EC         [24] 2442 	mov	((_PCA0CP2 >> 0) & 0xFF),_TRST_lo_to_hi
      000622 85 51 FC         [24] 2443 	mov	((_PCA0CP2 >> 8) & 0xFF),(_TRST_lo_to_hi + 1)
                           00053D  2444 	C$lab6.c$97$1$121 ==.
                                   2445 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:97: Rudder_cal();
      000625 12 07 C3         [24] 2446 	lcall	_Rudder_cal
                           000540  2447 	C$lab6.c$98$1$121 ==.
                                   2448 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:98: RUDDER_PW= PW_CENTER_RUDDER;
      000628 85 3C 46         [24] 2449 	mov	_RUDDER_PW,_PW_CENTER_RUDDER
      00062B 85 3D 47         [24] 2450 	mov	(_RUDDER_PW + 1),(_PW_CENTER_RUDDER + 1)
                           000546  2451 	C$lab6.c$99$1$121 ==.
                                   2452 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:99: RDR_lo_to_hi = 0xFFFF - RUDDER_PW;
      00062E 74 FF            [12] 2453 	mov	a,#0xFF
      000630 C3               [12] 2454 	clr	c
      000631 95 46            [12] 2455 	subb	a,_RUDDER_PW
      000633 F5 48            [12] 2456 	mov	_RDR_lo_to_hi,a
      000635 74 FF            [12] 2457 	mov	a,#0xFF
      000637 95 47            [12] 2458 	subb	a,(_RUDDER_PW + 1)
      000639 F5 49            [12] 2459 	mov	(_RDR_lo_to_hi + 1),a
                           000553  2460 	C$lab6.c$100$1$121 ==.
                                   2461 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:100: PCA0CP0 = RDR_lo_to_hi;
      00063B 85 48 EA         [24] 2462 	mov	((_PCA0CP0 >> 0) & 0xFF),_RDR_lo_to_hi
      00063E 85 49 FA         [24] 2463 	mov	((_PCA0CP0 >> 8) & 0xFF),(_RDR_lo_to_hi + 1)
                           000559  2464 	C$lab6.c$102$1$121 ==.
                                   2465 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:102: Angle_cal();
      000641 12 0A 35         [24] 2466 	lcall	_Angle_cal
                           00055C  2467 	C$lab6.c$103$1$121 ==.
                                   2468 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:103: Thrust_cal();
      000644 12 0C 9E         [24] 2469 	lcall	_Thrust_cal
                           00055F  2470 	C$lab6.c$105$1$121 ==.
                                   2471 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:105: while (1)
      000647                       2472 00102$:
                           00055F  2473 	C$lab6.c$107$1$121 ==.
                                   2474 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:107: printf("\r\n%u ms",count*20);
      000647 85 32 11         [24] 2475 	mov	__mulint_PARM_2,_count
      00064A 85 33 12         [24] 2476 	mov	(__mulint_PARM_2 + 1),(_count + 1)
      00064D 90 00 14         [24] 2477 	mov	dptr,#0x0014
      000650 12 12 F4         [24] 2478 	lcall	__mulint
      000653 AE 82            [24] 2479 	mov	r6,dpl
      000655 AF 83            [24] 2480 	mov	r7,dph
      000657 C0 06            [24] 2481 	push	ar6
      000659 C0 07            [24] 2482 	push	ar7
      00065B 74 C5            [12] 2483 	mov	a,#___str_3
      00065D C0 E0            [24] 2484 	push	acc
      00065F 74 1D            [12] 2485 	mov	a,#(___str_3 >> 8)
      000661 C0 E0            [24] 2486 	push	acc
      000663 74 80            [12] 2487 	mov	a,#0x80
      000665 C0 E0            [24] 2488 	push	acc
      000667 12 15 85         [24] 2489 	lcall	_printf
      00066A E5 81            [12] 2490 	mov	a,sp
      00066C 24 FB            [12] 2491 	add	a,#0xfb
      00066E F5 81            [12] 2492 	mov	sp,a
                           000588  2493 	C$lab6.c$108$2$122 ==.
                                   2494 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:108: wait();
      000670 12 11 F3         [24] 2495 	lcall	_wait
      000673 80 D2            [24] 2496 	sjmp	00102$
                           00058D  2497 	C$lab6.c$111$1$121 ==.
                           00058D  2498 	XG$main$0$0 ==.
      000675 22               [24] 2499 	ret
                                   2500 ;------------------------------------------------------------
                                   2501 ;Allocation info for local variables in function 'Change_D'
                                   2502 ;------------------------------------------------------------
                                   2503 ;distance                  Allocated to registers r6 r7 
                                   2504 ;------------------------------------------------------------
                           00058E  2505 	G$Change_D$0$0 ==.
                           00058E  2506 	C$lab6.c$113$1$121 ==.
                                   2507 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:113: void Change_D(void)
                                   2508 ;	-----------------------------------------
                                   2509 ;	 function Change_D
                                   2510 ;	-----------------------------------------
      000676                       2511 _Change_D:
                           00058E  2512 	C$lab6.c$115$1$121 ==.
                                   2513 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:115: unsigned int distance=100;
      000676 7E 64            [12] 2514 	mov	r6,#0x64
      000678 7F 00            [12] 2515 	mov	r7,#0x00
                           000592  2516 	C$lab6.c$116$1$124 ==.
                                   2517 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:116: if (count +1 % 4 == 0)
      00067A 74 01            [12] 2518 	mov	a,#0x01
      00067C 25 32            [12] 2519 	add	a,_count
      00067E FC               [12] 2520 	mov	r4,a
      00067F E4               [12] 2521 	clr	a
      000680 35 33            [12] 2522 	addc	a,(_count + 1)
      000682 FD               [12] 2523 	mov	r5,a
      000683 4C               [12] 2524 	orl	a,r4
      000684 70 07            [24] 2525 	jnz	00102$
                           00059E  2526 	C$lab6.c$118$2$125 ==.
                                   2527 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:118: distance = Read_Ranger();
      000686 12 06 B2         [24] 2528 	lcall	_Read_Ranger
      000689 AE 82            [24] 2529 	mov	r6,dpl
      00068B AF 83            [24] 2530 	mov	r7,dph
      00068D                       2531 00102$:
                           0005A5  2532 	C$lab6.c$120$1$124 ==.
                                   2533 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:120: if (distance < 50)
      00068D C3               [12] 2534 	clr	c
      00068E EE               [12] 2535 	mov	a,r6
      00068F 94 32            [12] 2536 	subb	a,#0x32
      000691 EF               [12] 2537 	mov	a,r7
      000692 94 00            [12] 2538 	subb	a,#0x00
      000694 50 1B            [24] 2539 	jnc	00105$
                           0005AE  2540 	C$lab6.c$122$2$126 ==.
                                   2541 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:122: desired_D = (desired_D + 1800) % 3600;
      000696 74 08            [12] 2542 	mov	a,#0x08
      000698 25 52            [12] 2543 	add	a,_desired_D
      00069A F5 82            [12] 2544 	mov	dpl,a
      00069C 74 07            [12] 2545 	mov	a,#0x07
      00069E 35 53            [12] 2546 	addc	a,(_desired_D + 1)
      0006A0 F5 83            [12] 2547 	mov	dph,a
      0006A2 75 11 10         [24] 2548 	mov	__modsint_PARM_2,#0x10
      0006A5 75 12 0E         [24] 2549 	mov	(__modsint_PARM_2 + 1),#0x0E
      0006A8 12 1C 72         [24] 2550 	lcall	__modsint
      0006AB 85 82 52         [24] 2551 	mov	_desired_D,dpl
      0006AE 85 83 53         [24] 2552 	mov	(_desired_D + 1),dph
      0006B1                       2553 00105$:
                           0005C9  2554 	C$lab6.c$124$1$124 ==.
                           0005C9  2555 	XG$Change_D$0$0 ==.
      0006B1 22               [24] 2556 	ret
                                   2557 ;------------------------------------------------------------
                                   2558 ;Allocation info for local variables in function 'Read_Ranger'
                                   2559 ;------------------------------------------------------------
                                   2560 ;r_addr                    Allocated to registers 
                                   2561 ;read                      Allocated to registers 
                                   2562 ;------------------------------------------------------------
                           0005CA  2563 	G$Read_Ranger$0$0 ==.
                           0005CA  2564 	C$lab6.c$126$1$124 ==.
                                   2565 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:126: unsigned int Read_Ranger(void)
                                   2566 ;	-----------------------------------------
                                   2567 ;	 function Read_Ranger
                                   2568 ;	-----------------------------------------
      0006B2                       2569 _Read_Ranger:
                           0005CA  2570 	C$lab6.c$132$1$128 ==.
                                   2571 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:132: i2c_read_data(r_addr, 2, r_data, 2);
      0006B2 75 2D 58         [24] 2572 	mov	_i2c_read_data_PARM_3,#_r_data
      0006B5 75 2E 00         [24] 2573 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0006B8 75 2F 40         [24] 2574 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0006BB 75 2C 02         [24] 2575 	mov	_i2c_read_data_PARM_2,#0x02
      0006BE 75 30 02         [24] 2576 	mov	_i2c_read_data_PARM_4,#0x02
      0006C1 75 82 E0         [24] 2577 	mov	dpl,#0xE0
      0006C4 12 04 D0         [24] 2578 	lcall	_i2c_read_data
                           0005DF  2579 	C$lab6.c$133$1$128 ==.
                                   2580 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:133: read = (((unsigned int) r_data[0] <<8) | r_data[1]);
      0006C7 AF 58            [24] 2581 	mov	r7,_r_data
      0006C9 7E 00            [12] 2582 	mov	r6,#0x00
      0006CB AC 59            [24] 2583 	mov	r4,(_r_data + 0x0001)
      0006CD 7D 00            [12] 2584 	mov	r5,#0x00
      0006CF EC               [12] 2585 	mov	a,r4
      0006D0 4E               [12] 2586 	orl	a,r6
      0006D1 F5 82            [12] 2587 	mov	dpl,a
      0006D3 ED               [12] 2588 	mov	a,r5
      0006D4 4F               [12] 2589 	orl	a,r7
      0006D5 F5 83            [12] 2590 	mov	dph,a
                           0005EF  2591 	C$lab6.c$134$1$128 ==.
                                   2592 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:134: return read;
                           0005EF  2593 	C$lab6.c$135$1$128 ==.
                           0005EF  2594 	XG$Read_Ranger$0$0 ==.
      0006D7 22               [24] 2595 	ret
                                   2596 ;------------------------------------------------------------
                                   2597 ;Allocation info for local variables in function 'Steering_func'
                                   2598 ;------------------------------------------------------------
                           0005F0  2599 	G$Steering_func$0$0 ==.
                           0005F0  2600 	C$lab6.c$137$1$128 ==.
                                   2601 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:137: void Steering_func(void)    ///FUNCTION TO HOLD ACTIONS FOR STEERING
                                   2602 ;	-----------------------------------------
                                   2603 ;	 function Steering_func
                                   2604 ;	-----------------------------------------
      0006D8                       2605 _Steering_func:
                           0005F0  2606 	C$lab6.c$139$1$130 ==.
                                   2607 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:139: actual_D = ReadCompass();
      0006D8 12 07 9D         [24] 2608 	lcall	_ReadCompass
      0006DB 85 82 54         [24] 2609 	mov	_actual_D,dpl
      0006DE 85 83 55         [24] 2610 	mov	(_actual_D + 1),dph
                           0005F9  2611 	C$lab6.c$140$1$130 ==.
                                   2612 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:140: offset = (unsigned int)((actual_D +3600- desired_D ) % 3600);
      0006E1 74 10            [12] 2613 	mov	a,#0x10
      0006E3 25 54            [12] 2614 	add	a,_actual_D
      0006E5 FE               [12] 2615 	mov	r6,a
      0006E6 74 0E            [12] 2616 	mov	a,#0x0E
      0006E8 35 55            [12] 2617 	addc	a,(_actual_D + 1)
      0006EA FF               [12] 2618 	mov	r7,a
      0006EB EE               [12] 2619 	mov	a,r6
      0006EC C3               [12] 2620 	clr	c
      0006ED 95 52            [12] 2621 	subb	a,_desired_D
      0006EF F5 82            [12] 2622 	mov	dpl,a
      0006F1 EF               [12] 2623 	mov	a,r7
      0006F2 95 53            [12] 2624 	subb	a,(_desired_D + 1)
      0006F4 F5 83            [12] 2625 	mov	dph,a
      0006F6 75 11 10         [24] 2626 	mov	__modsint_PARM_2,#0x10
      0006F9 75 12 0E         [24] 2627 	mov	(__modsint_PARM_2 + 1),#0x0E
      0006FC 12 1C 72         [24] 2628 	lcall	__modsint
      0006FF AE 82            [24] 2629 	mov	r6,dpl
      000701 AF 83            [24] 2630 	mov	r7,dph
      000703 8E 56            [24] 2631 	mov	_offset,r6
      000705 8F 57            [24] 2632 	mov	(_offset + 1),r7
                           00061F  2633 	C$lab6.c$141$1$130 ==.
                                   2634 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:141: Steering_Servo(offset);
      000707 85 56 82         [24] 2635 	mov	dpl,_offset
      00070A 85 57 83         [24] 2636 	mov	dph,(_offset + 1)
      00070D 12 0F 07         [24] 2637 	lcall	_Steering_Servo
                           000628  2638 	C$lab6.c$143$1$130 ==.
                           000628  2639 	XG$Steering_func$0$0 ==.
      000710 22               [24] 2640 	ret
                                   2641 ;------------------------------------------------------------
                                   2642 ;Allocation info for local variables in function 'direction'
                                   2643 ;------------------------------------------------------------
                                   2644 ;value                     Allocated to registers r6 r7 
                                   2645 ;------------------------------------------------------------
                           000629  2646 	G$direction$0$0 ==.
                           000629  2647 	C$lab6.c$145$1$130 ==.
                                   2648 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:145: unsigned int direction(void)        ///ADJUSTS THE VALUES OF DIRECTION SO THE DESIRED DIRECTION IS THE CAR'S 'NORTH'
                                   2649 ;	-----------------------------------------
                                   2650 ;	 function direction
                                   2651 ;	-----------------------------------------
      000711                       2652 _direction:
                           000629  2653 	C$lab6.c$148$1$132 ==.
                                   2654 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:148: count =0;
      000711 E4               [12] 2655 	clr	a
      000712 F5 32            [12] 2656 	mov	_count,a
      000714 F5 33            [12] 2657 	mov	(_count + 1),a
                           00062E  2658 	C$lab6.c$149$1$132 ==.
                                   2659 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:149: while (count < 1);
      000716                       2660 00101$:
      000716 C3               [12] 2661 	clr	c
      000717 E5 32            [12] 2662 	mov	a,_count
      000719 94 01            [12] 2663 	subb	a,#0x01
      00071B E5 33            [12] 2664 	mov	a,(_count + 1)
      00071D 64 80            [12] 2665 	xrl	a,#0x80
      00071F 94 80            [12] 2666 	subb	a,#0x80
      000721 40 F3            [24] 2667 	jc	00101$
                           00063B  2668 	C$lab6.c$150$1$132 ==.
                                   2669 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:150: lcd_clear();
      000723 12 01 C9         [24] 2670 	lcall	_lcd_clear
                           00063E  2671 	C$lab6.c$151$1$132 ==.
                                   2672 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:151: lcd_print("Calibration:\nHello world!\n012_345_678:\nabc def ghij");
      000726 74 CD            [12] 2673 	mov	a,#___str_4
      000728 C0 E0            [24] 2674 	push	acc
      00072A 74 1D            [12] 2675 	mov	a,#(___str_4 >> 8)
      00072C C0 E0            [24] 2676 	push	acc
      00072E 74 80            [12] 2677 	mov	a,#0x80
      000730 C0 E0            [24] 2678 	push	acc
      000732 12 01 44         [24] 2679 	lcall	_lcd_print
      000735 15 81            [12] 2680 	dec	sp
      000737 15 81            [12] 2681 	dec	sp
      000739 15 81            [12] 2682 	dec	sp
                           000653  2683 	C$lab6.c$152$1$132 ==.
                                   2684 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:152: start();
      00073B 12 11 E3         [24] 2685 	lcall	_start
                           000656  2686 	C$lab6.c$153$1$132 ==.
                                   2687 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:153: lcd_clear();
      00073E 12 01 C9         [24] 2688 	lcall	_lcd_clear
                           000659  2689 	C$lab6.c$154$1$132 ==.
                                   2690 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:154: value = kpd_input(0);
      000741 75 82 00         [24] 2691 	mov	dpl,#0x00
      000744 12 02 81         [24] 2692 	lcall	_kpd_input
      000747 AE 82            [24] 2693 	mov	r6,dpl
      000749 AF 83            [24] 2694 	mov	r7,dph
                           000663  2695 	C$lab6.c$155$1$132 ==.
                                   2696 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:155: lcd_clear();
      00074B C0 07            [24] 2697 	push	ar7
      00074D C0 06            [24] 2698 	push	ar6
      00074F 12 01 C9         [24] 2699 	lcall	_lcd_clear
      000752 D0 06            [24] 2700 	pop	ar6
      000754 D0 07            [24] 2701 	pop	ar7
                           00066E  2702 	C$lab6.c$156$1$132 ==.
                                   2703 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:156: lcd_print("\r\nThe desired direction is: %d", value);
      000756 C0 07            [24] 2704 	push	ar7
      000758 C0 06            [24] 2705 	push	ar6
      00075A C0 06            [24] 2706 	push	ar6
      00075C C0 07            [24] 2707 	push	ar7
      00075E 74 01            [12] 2708 	mov	a,#___str_5
      000760 C0 E0            [24] 2709 	push	acc
      000762 74 1E            [12] 2710 	mov	a,#(___str_5 >> 8)
      000764 C0 E0            [24] 2711 	push	acc
      000766 74 80            [12] 2712 	mov	a,#0x80
      000768 C0 E0            [24] 2713 	push	acc
      00076A 12 01 44         [24] 2714 	lcall	_lcd_print
      00076D E5 81            [12] 2715 	mov	a,sp
      00076F 24 FB            [12] 2716 	add	a,#0xfb
      000771 F5 81            [12] 2717 	mov	sp,a
      000773 D0 06            [24] 2718 	pop	ar6
      000775 D0 07            [24] 2719 	pop	ar7
                           00068F  2720 	C$lab6.c$157$1$132 ==.
                                   2721 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:157: printf("\r\nThe desired direction is: %d", value);
      000777 C0 07            [24] 2722 	push	ar7
      000779 C0 06            [24] 2723 	push	ar6
      00077B C0 06            [24] 2724 	push	ar6
      00077D C0 07            [24] 2725 	push	ar7
      00077F 74 01            [12] 2726 	mov	a,#___str_5
      000781 C0 E0            [24] 2727 	push	acc
      000783 74 1E            [12] 2728 	mov	a,#(___str_5 >> 8)
      000785 C0 E0            [24] 2729 	push	acc
      000787 74 80            [12] 2730 	mov	a,#0x80
      000789 C0 E0            [24] 2731 	push	acc
      00078B 12 15 85         [24] 2732 	lcall	_printf
      00078E E5 81            [12] 2733 	mov	a,sp
      000790 24 FB            [12] 2734 	add	a,#0xfb
      000792 F5 81            [12] 2735 	mov	sp,a
      000794 D0 06            [24] 2736 	pop	ar6
      000796 D0 07            [24] 2737 	pop	ar7
                           0006B0  2738 	C$lab6.c$159$1$132 ==.
                                   2739 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:159: return value;
      000798 8E 82            [24] 2740 	mov	dpl,r6
      00079A 8F 83            [24] 2741 	mov	dph,r7
                           0006B4  2742 	C$lab6.c$161$1$132 ==.
                           0006B4  2743 	XG$direction$0$0 ==.
      00079C 22               [24] 2744 	ret
                                   2745 ;------------------------------------------------------------
                                   2746 ;Allocation info for local variables in function 'ReadCompass'
                                   2747 ;------------------------------------------------------------
                                   2748 ;Data                      Allocated with name '_ReadCompass_Data_1_134'
                                   2749 ;Crange                    Allocated to registers 
                                   2750 ;addr                      Allocated to registers 
                                   2751 ;------------------------------------------------------------
                           0006B5  2752 	G$ReadCompass$0$0 ==.
                           0006B5  2753 	C$lab6.c$163$1$132 ==.
                                   2754 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:163: unsigned int ReadCompass(void)
                                   2755 ;	-----------------------------------------
                                   2756 ;	 function ReadCompass
                                   2757 ;	-----------------------------------------
      00079D                       2758 _ReadCompass:
                           0006B5  2759 	C$lab6.c$169$1$134 ==.
                                   2760 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:169: i2c_read_data(addr, 2,Data,2);
      00079D 75 2D 5A         [24] 2761 	mov	_i2c_read_data_PARM_3,#_ReadCompass_Data_1_134
      0007A0 75 2E 00         [24] 2762 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0007A3 75 2F 40         [24] 2763 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0007A6 75 2C 02         [24] 2764 	mov	_i2c_read_data_PARM_2,#0x02
      0007A9 75 30 02         [24] 2765 	mov	_i2c_read_data_PARM_4,#0x02
      0007AC 75 82 C0         [24] 2766 	mov	dpl,#0xC0
      0007AF 12 04 D0         [24] 2767 	lcall	_i2c_read_data
                           0006CA  2768 	C$lab6.c$170$1$134 ==.
                                   2769 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:170: Crange = ((unsigned int) Data[0] << 8 | Data[1]);
      0007B2 AF 5A            [24] 2770 	mov	r7,_ReadCompass_Data_1_134
      0007B4 7E 00            [12] 2771 	mov	r6,#0x00
      0007B6 AC 5B            [24] 2772 	mov	r4,(_ReadCompass_Data_1_134 + 0x0001)
      0007B8 7D 00            [12] 2773 	mov	r5,#0x00
      0007BA EC               [12] 2774 	mov	a,r4
      0007BB 4E               [12] 2775 	orl	a,r6
      0007BC F5 82            [12] 2776 	mov	dpl,a
      0007BE ED               [12] 2777 	mov	a,r5
      0007BF 4F               [12] 2778 	orl	a,r7
      0007C0 F5 83            [12] 2779 	mov	dph,a
                           0006DA  2780 	C$lab6.c$171$1$134 ==.
                                   2781 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:171: return Crange;
                           0006DA  2782 	C$lab6.c$172$1$134 ==.
                           0006DA  2783 	XG$ReadCompass$0$0 ==.
      0007C2 22               [24] 2784 	ret
                                   2785 ;------------------------------------------------------------
                                   2786 ;Allocation info for local variables in function 'Rudder_cal'
                                   2787 ;------------------------------------------------------------
                                   2788 ;value                     Allocated to registers r6 r7 
                                   2789 ;times                     Allocated to registers r4 r5 
                                   2790 ;------------------------------------------------------------
                           0006DB  2791 	G$Rudder_cal$0$0 ==.
                           0006DB  2792 	C$lab6.c$174$1$134 ==.
                                   2793 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:174: void Rudder_cal(void)
                                   2794 ;	-----------------------------------------
                                   2795 ;	 function Rudder_cal
                                   2796 ;	-----------------------------------------
      0007C3                       2797 _Rudder_cal:
                           0006DB  2798 	C$lab6.c$176$1$134 ==.
                                   2799 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:176: int value =0;
                           0006DB  2800 	C$lab6.c$177$1$134 ==.
                                   2801 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:177: int times =0;
                           0006DB  2802 	C$lab6.c$178$1$136 ==.
                                   2803 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:178: count =0;
      0007C3 E4               [12] 2804 	clr	a
      0007C4 FE               [12] 2805 	mov	r6,a
      0007C5 FF               [12] 2806 	mov	r7,a
      0007C6 FC               [12] 2807 	mov	r4,a
      0007C7 FD               [12] 2808 	mov	r5,a
      0007C8 F5 32            [12] 2809 	mov	_count,a
      0007CA F5 33            [12] 2810 	mov	(_count + 1),a
                           0006E4  2811 	C$lab6.c$179$1$136 ==.
                                   2812 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:179: lcd_clear();
      0007CC C0 07            [24] 2813 	push	ar7
      0007CE C0 06            [24] 2814 	push	ar6
      0007D0 C0 05            [24] 2815 	push	ar5
      0007D2 C0 04            [24] 2816 	push	ar4
      0007D4 12 01 C9         [24] 2817 	lcall	_lcd_clear
                           0006EF  2818 	C$lab6.c$180$1$136 ==.
                                   2819 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:180: lcd_print("Rudder Calibration");
      0007D7 74 20            [12] 2820 	mov	a,#___str_6
      0007D9 C0 E0            [24] 2821 	push	acc
      0007DB 74 1E            [12] 2822 	mov	a,#(___str_6 >> 8)
      0007DD C0 E0            [24] 2823 	push	acc
      0007DF 74 80            [12] 2824 	mov	a,#0x80
      0007E1 C0 E0            [24] 2825 	push	acc
      0007E3 12 01 44         [24] 2826 	lcall	_lcd_print
      0007E6 15 81            [12] 2827 	dec	sp
      0007E8 15 81            [12] 2828 	dec	sp
      0007EA 15 81            [12] 2829 	dec	sp
      0007EC D0 04            [24] 2830 	pop	ar4
      0007EE D0 05            [24] 2831 	pop	ar5
      0007F0 D0 06            [24] 2832 	pop	ar6
      0007F2 D0 07            [24] 2833 	pop	ar7
                           00070C  2834 	C$lab6.c$181$1$136 ==.
                                   2835 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:181: while (count < 50);
      0007F4                       2836 00101$:
      0007F4 C3               [12] 2837 	clr	c
      0007F5 E5 32            [12] 2838 	mov	a,_count
      0007F7 94 32            [12] 2839 	subb	a,#0x32
      0007F9 E5 33            [12] 2840 	mov	a,(_count + 1)
      0007FB 64 80            [12] 2841 	xrl	a,#0x80
      0007FD 94 80            [12] 2842 	subb	a,#0x80
      0007FF 40 F3            [24] 2843 	jc	00101$
                           000719  2844 	C$lab6.c$182$1$136 ==.
                                   2845 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:182: lcd_clear();
      000801 C0 07            [24] 2846 	push	ar7
      000803 C0 06            [24] 2847 	push	ar6
      000805 C0 05            [24] 2848 	push	ar5
      000807 C0 04            [24] 2849 	push	ar4
      000809 12 01 C9         [24] 2850 	lcall	_lcd_clear
      00080C D0 04            [24] 2851 	pop	ar4
      00080E D0 05            [24] 2852 	pop	ar5
      000810 D0 06            [24] 2853 	pop	ar6
      000812 D0 07            [24] 2854 	pop	ar7
                           00072C  2855 	C$lab6.c$186$2$137 ==.
                                   2856 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:186: count =0;
      000814 E4               [12] 2857 	clr	a
      000815 F5 32            [12] 2858 	mov	_count,a
      000817 F5 33            [12] 2859 	mov	(_count + 1),a
                           000731  2860 	C$lab6.c$187$2$137 ==.
                                   2861 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:187: while (count < 1);
      000819                       2862 00104$:
      000819 C3               [12] 2863 	clr	c
      00081A E5 32            [12] 2864 	mov	a,_count
      00081C 94 01            [12] 2865 	subb	a,#0x01
      00081E E5 33            [12] 2866 	mov	a,(_count + 1)
      000820 64 80            [12] 2867 	xrl	a,#0x80
      000822 94 80            [12] 2868 	subb	a,#0x80
      000824 40 F3            [24] 2869 	jc	00104$
                           00073E  2870 	C$lab6.c$188$2$137 ==.
                                   2871 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:188: lcd_clear();
      000826 C0 07            [24] 2872 	push	ar7
      000828 C0 06            [24] 2873 	push	ar6
      00082A C0 05            [24] 2874 	push	ar5
      00082C C0 04            [24] 2875 	push	ar4
      00082E 12 01 C9         [24] 2876 	lcall	_lcd_clear
                           000749  2877 	C$lab6.c$189$2$137 ==.
                                   2878 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:189: lcd_print("go left: press 1\n go right: press 2\nPress * for next screen");
      000831 74 33            [12] 2879 	mov	a,#___str_7
      000833 C0 E0            [24] 2880 	push	acc
      000835 74 1E            [12] 2881 	mov	a,#(___str_7 >> 8)
      000837 C0 E0            [24] 2882 	push	acc
      000839 74 80            [12] 2883 	mov	a,#0x80
      00083B C0 E0            [24] 2884 	push	acc
      00083D 12 01 44         [24] 2885 	lcall	_lcd_print
      000840 15 81            [12] 2886 	dec	sp
      000842 15 81            [12] 2887 	dec	sp
      000844 15 81            [12] 2888 	dec	sp
                           00075E  2889 	C$lab6.c$190$2$137 ==.
                                   2890 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:190: start();
      000846 12 11 E3         [24] 2891 	lcall	_start
                           000761  2892 	C$lab6.c$191$2$137 ==.
                                   2893 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:191: lcd_clear();
      000849 12 01 C9         [24] 2894 	lcall	_lcd_clear
                           000764  2895 	C$lab6.c$192$2$137 ==.
                                   2896 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:192: lcd_print("\n confirm: press 3\n press * to begin");
      00084C 74 6F            [12] 2897 	mov	a,#___str_8
      00084E C0 E0            [24] 2898 	push	acc
      000850 74 1E            [12] 2899 	mov	a,#(___str_8 >> 8)
      000852 C0 E0            [24] 2900 	push	acc
      000854 74 80            [12] 2901 	mov	a,#0x80
      000856 C0 E0            [24] 2902 	push	acc
      000858 12 01 44         [24] 2903 	lcall	_lcd_print
      00085B 15 81            [12] 2904 	dec	sp
      00085D 15 81            [12] 2905 	dec	sp
      00085F 15 81            [12] 2906 	dec	sp
                           000779  2907 	C$lab6.c$193$2$137 ==.
                                   2908 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:193: start();
      000861 12 11 E3         [24] 2909 	lcall	_start
      000864 D0 04            [24] 2910 	pop	ar4
      000866 D0 05            [24] 2911 	pop	ar5
      000868 D0 06            [24] 2912 	pop	ar6
      00086A D0 07            [24] 2913 	pop	ar7
                           000784  2914 	C$lab6.c$195$5$140 ==.
                                   2915 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:195: while (1)
      00086C                       2916 00144$:
                           000784  2917 	C$lab6.c$197$3$138 ==.
                                   2918 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:197: printf("\r\n %u",RUDDER_PW);
      00086C C0 07            [24] 2919 	push	ar7
      00086E C0 06            [24] 2920 	push	ar6
      000870 C0 05            [24] 2921 	push	ar5
      000872 C0 04            [24] 2922 	push	ar4
      000874 C0 46            [24] 2923 	push	_RUDDER_PW
      000876 C0 47            [24] 2924 	push	(_RUDDER_PW + 1)
      000878 74 94            [12] 2925 	mov	a,#___str_9
      00087A C0 E0            [24] 2926 	push	acc
      00087C 74 1E            [12] 2927 	mov	a,#(___str_9 >> 8)
      00087E C0 E0            [24] 2928 	push	acc
      000880 74 80            [12] 2929 	mov	a,#0x80
      000882 C0 E0            [24] 2930 	push	acc
      000884 12 15 85         [24] 2931 	lcall	_printf
      000887 E5 81            [12] 2932 	mov	a,sp
      000889 24 FB            [12] 2933 	add	a,#0xfb
      00088B F5 81            [12] 2934 	mov	sp,a
      00088D D0 04            [24] 2935 	pop	ar4
      00088F D0 05            [24] 2936 	pop	ar5
      000891 D0 06            [24] 2937 	pop	ar6
      000893 D0 07            [24] 2938 	pop	ar7
                           0007AD  2939 	C$lab6.c$198$3$138 ==.
                                   2940 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:198: RDR_lo_to_hi = 0xFFFF - RUDDER_PW;
      000895 74 FF            [12] 2941 	mov	a,#0xFF
      000897 C3               [12] 2942 	clr	c
      000898 95 46            [12] 2943 	subb	a,_RUDDER_PW
      00089A F5 48            [12] 2944 	mov	_RDR_lo_to_hi,a
      00089C 74 FF            [12] 2945 	mov	a,#0xFF
      00089E 95 47            [12] 2946 	subb	a,(_RUDDER_PW + 1)
      0008A0 F5 49            [12] 2947 	mov	(_RDR_lo_to_hi + 1),a
                           0007BA  2948 	C$lab6.c$199$3$138 ==.
                                   2949 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:199: PCA0CP0 = RDR_lo_to_hi;
      0008A2 85 48 EA         [24] 2950 	mov	((_PCA0CP0 >> 0) & 0xFF),_RDR_lo_to_hi
      0008A5 85 49 FA         [24] 2951 	mov	((_PCA0CP0 >> 8) & 0xFF),(_RDR_lo_to_hi + 1)
                           0007C0  2952 	C$lab6.c$200$3$138 ==.
                                   2953 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:200: if (times == 0 )
      0008A8 EC               [12] 2954 	mov	a,r4
      0008A9 4D               [12] 2955 	orl	a,r5
      0008AA 60 03            [24] 2956 	jz	00210$
      0008AC 02 09 31         [24] 2957 	ljmp	00141$
      0008AF                       2958 00210$:
                           0007C7  2959 	C$lab6.c$202$4$139 ==.
                                   2960 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:202: if (value ==0)
      0008AF EE               [12] 2961 	mov	a,r6
      0008B0 4F               [12] 2962 	orl	a,r7
      0008B1 70 26            [24] 2963 	jnz	00108$
                           0007CB  2964 	C$lab6.c$204$5$140 ==.
                                   2965 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:204: lcd_clear();
      0008B3 C0 05            [24] 2966 	push	ar5
      0008B5 C0 04            [24] 2967 	push	ar4
      0008B7 12 01 C9         [24] 2968 	lcall	_lcd_clear
                           0007D2  2969 	C$lab6.c$205$5$140 ==.
                                   2970 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:205: lcd_print("Now calibrating Min_PW\n");
      0008BA 74 9A            [12] 2971 	mov	a,#___str_10
      0008BC C0 E0            [24] 2972 	push	acc
      0008BE 74 1E            [12] 2973 	mov	a,#(___str_10 >> 8)
      0008C0 C0 E0            [24] 2974 	push	acc
      0008C2 74 80            [12] 2975 	mov	a,#0x80
      0008C4 C0 E0            [24] 2976 	push	acc
      0008C6 12 01 44         [24] 2977 	lcall	_lcd_print
      0008C9 15 81            [12] 2978 	dec	sp
      0008CB 15 81            [12] 2979 	dec	sp
      0008CD 15 81            [12] 2980 	dec	sp
      0008CF D0 04            [24] 2981 	pop	ar4
      0008D1 D0 05            [24] 2982 	pop	ar5
                           0007EB  2983 	C$lab6.c$206$5$140 ==.
                                   2984 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:206: RUDDER_PW = PW_LEFT_RUDDER;
      0008D3 85 3A 46         [24] 2985 	mov	_RUDDER_PW,_PW_LEFT_RUDDER
      0008D6 85 3B 47         [24] 2986 	mov	(_RUDDER_PW + 1),(_PW_LEFT_RUDDER + 1)
      0008D9                       2987 00108$:
                           0007F1  2988 	C$lab6.c$208$4$139 ==.
                                   2989 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:208: value = kpd_input(1);
      0008D9 75 82 01         [24] 2990 	mov	dpl,#0x01
      0008DC C0 05            [24] 2991 	push	ar5
      0008DE C0 04            [24] 2992 	push	ar4
      0008E0 12 02 81         [24] 2993 	lcall	_kpd_input
      0008E3 AE 82            [24] 2994 	mov	r6,dpl
      0008E5 AF 83            [24] 2995 	mov	r7,dph
      0008E7 D0 04            [24] 2996 	pop	ar4
      0008E9 D0 05            [24] 2997 	pop	ar5
                           000803  2998 	C$lab6.c$209$4$139 ==.
                                   2999 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:209: if (value == 1)
      0008EB BE 01 12         [24] 3000 	cjne	r6,#0x01,00115$
      0008EE BF 00 0F         [24] 3001 	cjne	r7,#0x00,00115$
                           000809  3002 	C$lab6.c$211$5$141 ==.
                                   3003 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:211: RUDDER_PW -= 20;
      0008F1 E5 46            [12] 3004 	mov	a,_RUDDER_PW
      0008F3 24 EC            [12] 3005 	add	a,#0xEC
      0008F5 F5 46            [12] 3006 	mov	_RUDDER_PW,a
      0008F7 E5 47            [12] 3007 	mov	a,(_RUDDER_PW + 1)
      0008F9 34 FF            [12] 3008 	addc	a,#0xFF
      0008FB F5 47            [12] 3009 	mov	(_RUDDER_PW + 1),a
      0008FD 02 08 6C         [24] 3010 	ljmp	00144$
      000900                       3011 00115$:
                           000818  3012 	C$lab6.c$213$4$139 ==.
                                   3013 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:213: else if (value==2)
      000900 BE 02 11         [24] 3014 	cjne	r6,#0x02,00112$
      000903 BF 00 0E         [24] 3015 	cjne	r7,#0x00,00112$
                           00081E  3016 	C$lab6.c$215$5$142 ==.
                                   3017 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:215: RUDDER_PW += 20;
      000906 74 14            [12] 3018 	mov	a,#0x14
      000908 25 46            [12] 3019 	add	a,_RUDDER_PW
      00090A F5 46            [12] 3020 	mov	_RUDDER_PW,a
      00090C E4               [12] 3021 	clr	a
      00090D 35 47            [12] 3022 	addc	a,(_RUDDER_PW + 1)
      00090F F5 47            [12] 3023 	mov	(_RUDDER_PW + 1),a
      000911 02 08 6C         [24] 3024 	ljmp	00144$
      000914                       3025 00112$:
                           00082C  3026 	C$lab6.c$217$4$139 ==.
                                   3027 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:217: else if (value == 3)
      000914 BE 03 05         [24] 3028 	cjne	r6,#0x03,00216$
      000917 BF 00 02         [24] 3029 	cjne	r7,#0x00,00216$
      00091A 80 03            [24] 3030 	sjmp	00217$
      00091C                       3031 00216$:
      00091C 02 08 6C         [24] 3032 	ljmp	00144$
      00091F                       3033 00217$:
                           000837  3034 	C$lab6.c$219$5$143 ==.
                                   3035 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:219: times++;
      00091F 0C               [12] 3036 	inc	r4
      000920 BC 00 01         [24] 3037 	cjne	r4,#0x00,00218$
      000923 0D               [12] 3038 	inc	r5
      000924                       3039 00218$:
                           00083C  3040 	C$lab6.c$220$5$143 ==.
                                   3041 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:220: value =0;
      000924 7E 00            [12] 3042 	mov	r6,#0x00
      000926 7F 00            [12] 3043 	mov	r7,#0x00
                           000840  3044 	C$lab6.c$221$5$143 ==.
                                   3045 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:221: PW_LEFT_RUDDER = RUDDER_PW;
      000928 85 46 3A         [24] 3046 	mov	_PW_LEFT_RUDDER,_RUDDER_PW
      00092B 85 47 3B         [24] 3047 	mov	(_PW_LEFT_RUDDER + 1),(_RUDDER_PW + 1)
      00092E 02 08 6C         [24] 3048 	ljmp	00144$
      000931                       3049 00141$:
                           000849  3050 	C$lab6.c$224$3$138 ==.
                                   3051 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:224: else if (times ==1)
      000931 BC 01 05         [24] 3052 	cjne	r4,#0x01,00219$
      000934 BD 00 02         [24] 3053 	cjne	r5,#0x00,00219$
      000937 80 03            [24] 3054 	sjmp	00220$
      000939                       3055 00219$:
      000939 02 09 BE         [24] 3056 	ljmp	00138$
      00093C                       3057 00220$:
                           000854  3058 	C$lab6.c$226$4$144 ==.
                                   3059 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:226: if (value ==0)
      00093C EE               [12] 3060 	mov	a,r6
      00093D 4F               [12] 3061 	orl	a,r7
      00093E 70 26            [24] 3062 	jnz	00118$
                           000858  3063 	C$lab6.c$228$5$145 ==.
                                   3064 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:228: lcd_clear();
      000940 C0 05            [24] 3065 	push	ar5
      000942 C0 04            [24] 3066 	push	ar4
      000944 12 01 C9         [24] 3067 	lcall	_lcd_clear
                           00085F  3068 	C$lab6.c$229$5$145 ==.
                                   3069 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:229: lcd_print("Now calibrating Cen_PW");
      000947 74 B2            [12] 3070 	mov	a,#___str_11
      000949 C0 E0            [24] 3071 	push	acc
      00094B 74 1E            [12] 3072 	mov	a,#(___str_11 >> 8)
      00094D C0 E0            [24] 3073 	push	acc
      00094F 74 80            [12] 3074 	mov	a,#0x80
      000951 C0 E0            [24] 3075 	push	acc
      000953 12 01 44         [24] 3076 	lcall	_lcd_print
      000956 15 81            [12] 3077 	dec	sp
      000958 15 81            [12] 3078 	dec	sp
      00095A 15 81            [12] 3079 	dec	sp
      00095C D0 04            [24] 3080 	pop	ar4
      00095E D0 05            [24] 3081 	pop	ar5
                           000878  3082 	C$lab6.c$230$5$145 ==.
                                   3083 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:230: RUDDER_PW = PW_CENTER_RUDDER;
      000960 85 3C 46         [24] 3084 	mov	_RUDDER_PW,_PW_CENTER_RUDDER
      000963 85 3D 47         [24] 3085 	mov	(_RUDDER_PW + 1),(_PW_CENTER_RUDDER + 1)
      000966                       3086 00118$:
                           00087E  3087 	C$lab6.c$232$4$144 ==.
                                   3088 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:232: value = kpd_input(1);
      000966 75 82 01         [24] 3089 	mov	dpl,#0x01
      000969 C0 05            [24] 3090 	push	ar5
      00096B C0 04            [24] 3091 	push	ar4
      00096D 12 02 81         [24] 3092 	lcall	_kpd_input
      000970 AE 82            [24] 3093 	mov	r6,dpl
      000972 AF 83            [24] 3094 	mov	r7,dph
      000974 D0 04            [24] 3095 	pop	ar4
      000976 D0 05            [24] 3096 	pop	ar5
                           000890  3097 	C$lab6.c$233$4$144 ==.
                                   3098 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:233: if (value == 1)
      000978 BE 01 12         [24] 3099 	cjne	r6,#0x01,00125$
      00097B BF 00 0F         [24] 3100 	cjne	r7,#0x00,00125$
                           000896  3101 	C$lab6.c$235$5$146 ==.
                                   3102 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:235: RUDDER_PW -= 20;
      00097E E5 46            [12] 3103 	mov	a,_RUDDER_PW
      000980 24 EC            [12] 3104 	add	a,#0xEC
      000982 F5 46            [12] 3105 	mov	_RUDDER_PW,a
      000984 E5 47            [12] 3106 	mov	a,(_RUDDER_PW + 1)
      000986 34 FF            [12] 3107 	addc	a,#0xFF
      000988 F5 47            [12] 3108 	mov	(_RUDDER_PW + 1),a
      00098A 02 08 6C         [24] 3109 	ljmp	00144$
      00098D                       3110 00125$:
                           0008A5  3111 	C$lab6.c$237$4$144 ==.
                                   3112 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:237: else if (value==2)
      00098D BE 02 11         [24] 3113 	cjne	r6,#0x02,00122$
      000990 BF 00 0E         [24] 3114 	cjne	r7,#0x00,00122$
                           0008AB  3115 	C$lab6.c$239$5$147 ==.
                                   3116 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:239: RUDDER_PW += 20;
      000993 74 14            [12] 3117 	mov	a,#0x14
      000995 25 46            [12] 3118 	add	a,_RUDDER_PW
      000997 F5 46            [12] 3119 	mov	_RUDDER_PW,a
      000999 E4               [12] 3120 	clr	a
      00099A 35 47            [12] 3121 	addc	a,(_RUDDER_PW + 1)
      00099C F5 47            [12] 3122 	mov	(_RUDDER_PW + 1),a
      00099E 02 08 6C         [24] 3123 	ljmp	00144$
      0009A1                       3124 00122$:
                           0008B9  3125 	C$lab6.c$241$4$144 ==.
                                   3126 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:241: else if (value == 3)
      0009A1 BE 03 05         [24] 3127 	cjne	r6,#0x03,00226$
      0009A4 BF 00 02         [24] 3128 	cjne	r7,#0x00,00226$
      0009A7 80 03            [24] 3129 	sjmp	00227$
      0009A9                       3130 00226$:
      0009A9 02 08 6C         [24] 3131 	ljmp	00144$
      0009AC                       3132 00227$:
                           0008C4  3133 	C$lab6.c$243$5$148 ==.
                                   3134 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:243: times++;
      0009AC 0C               [12] 3135 	inc	r4
      0009AD BC 00 01         [24] 3136 	cjne	r4,#0x00,00228$
      0009B0 0D               [12] 3137 	inc	r5
      0009B1                       3138 00228$:
                           0008C9  3139 	C$lab6.c$244$5$148 ==.
                                   3140 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:244: value=0;
      0009B1 7E 00            [12] 3141 	mov	r6,#0x00
      0009B3 7F 00            [12] 3142 	mov	r7,#0x00
                           0008CD  3143 	C$lab6.c$245$5$148 ==.
                                   3144 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:245: PW_CENTER_RUDDER = RUDDER_PW;
      0009B5 85 46 3C         [24] 3145 	mov	_PW_CENTER_RUDDER,_RUDDER_PW
      0009B8 85 47 3D         [24] 3146 	mov	(_PW_CENTER_RUDDER + 1),(_RUDDER_PW + 1)
      0009BB 02 08 6C         [24] 3147 	ljmp	00144$
      0009BE                       3148 00138$:
                           0008D6  3149 	C$lab6.c$250$4$149 ==.
                                   3150 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:250: if (value==0)
      0009BE EE               [12] 3151 	mov	a,r6
      0009BF 4F               [12] 3152 	orl	a,r7
      0009C0 70 26            [24] 3153 	jnz	00128$
                           0008DA  3154 	C$lab6.c$252$5$150 ==.
                                   3155 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:252: lcd_clear();
      0009C2 C0 05            [24] 3156 	push	ar5
      0009C4 C0 04            [24] 3157 	push	ar4
      0009C6 12 01 C9         [24] 3158 	lcall	_lcd_clear
                           0008E1  3159 	C$lab6.c$253$5$150 ==.
                                   3160 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:253: lcd_print("Now calibrating Max_PW");
      0009C9 74 C9            [12] 3161 	mov	a,#___str_12
      0009CB C0 E0            [24] 3162 	push	acc
      0009CD 74 1E            [12] 3163 	mov	a,#(___str_12 >> 8)
      0009CF C0 E0            [24] 3164 	push	acc
      0009D1 74 80            [12] 3165 	mov	a,#0x80
      0009D3 C0 E0            [24] 3166 	push	acc
      0009D5 12 01 44         [24] 3167 	lcall	_lcd_print
      0009D8 15 81            [12] 3168 	dec	sp
      0009DA 15 81            [12] 3169 	dec	sp
      0009DC 15 81            [12] 3170 	dec	sp
      0009DE D0 04            [24] 3171 	pop	ar4
      0009E0 D0 05            [24] 3172 	pop	ar5
                           0008FA  3173 	C$lab6.c$254$5$150 ==.
                                   3174 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:254: RUDDER_PW = PW_RIGHT_RUDDER;
      0009E2 85 3E 46         [24] 3175 	mov	_RUDDER_PW,_PW_RIGHT_RUDDER
      0009E5 85 3F 47         [24] 3176 	mov	(_RUDDER_PW + 1),(_PW_RIGHT_RUDDER + 1)
      0009E8                       3177 00128$:
                           000900  3178 	C$lab6.c$256$4$149 ==.
                                   3179 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:256: value = kpd_input(1);
      0009E8 75 82 01         [24] 3180 	mov	dpl,#0x01
      0009EB C0 05            [24] 3181 	push	ar5
      0009ED C0 04            [24] 3182 	push	ar4
      0009EF 12 02 81         [24] 3183 	lcall	_kpd_input
      0009F2 AE 82            [24] 3184 	mov	r6,dpl
      0009F4 AF 83            [24] 3185 	mov	r7,dph
      0009F6 D0 04            [24] 3186 	pop	ar4
      0009F8 D0 05            [24] 3187 	pop	ar5
                           000912  3188 	C$lab6.c$257$4$149 ==.
                                   3189 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:257: if (value == 1)
      0009FA BE 01 12         [24] 3190 	cjne	r6,#0x01,00135$
      0009FD BF 00 0F         [24] 3191 	cjne	r7,#0x00,00135$
                           000918  3192 	C$lab6.c$259$5$151 ==.
                                   3193 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:259: RUDDER_PW -= 20;
      000A00 E5 46            [12] 3194 	mov	a,_RUDDER_PW
      000A02 24 EC            [12] 3195 	add	a,#0xEC
      000A04 F5 46            [12] 3196 	mov	_RUDDER_PW,a
      000A06 E5 47            [12] 3197 	mov	a,(_RUDDER_PW + 1)
      000A08 34 FF            [12] 3198 	addc	a,#0xFF
      000A0A F5 47            [12] 3199 	mov	(_RUDDER_PW + 1),a
      000A0C 02 08 6C         [24] 3200 	ljmp	00144$
      000A0F                       3201 00135$:
                           000927  3202 	C$lab6.c$261$4$149 ==.
                                   3203 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:261: else if (value==2)
      000A0F BE 02 11         [24] 3204 	cjne	r6,#0x02,00132$
      000A12 BF 00 0E         [24] 3205 	cjne	r7,#0x00,00132$
                           00092D  3206 	C$lab6.c$263$5$152 ==.
                                   3207 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:263: RUDDER_PW += 20;
      000A15 74 14            [12] 3208 	mov	a,#0x14
      000A17 25 46            [12] 3209 	add	a,_RUDDER_PW
      000A19 F5 46            [12] 3210 	mov	_RUDDER_PW,a
      000A1B E4               [12] 3211 	clr	a
      000A1C 35 47            [12] 3212 	addc	a,(_RUDDER_PW + 1)
      000A1E F5 47            [12] 3213 	mov	(_RUDDER_PW + 1),a
      000A20 02 08 6C         [24] 3214 	ljmp	00144$
      000A23                       3215 00132$:
                           00093B  3216 	C$lab6.c$265$4$149 ==.
                                   3217 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:265: else if (value == 3)
      000A23 BE 03 05         [24] 3218 	cjne	r6,#0x03,00234$
      000A26 BF 00 02         [24] 3219 	cjne	r7,#0x00,00234$
      000A29 80 03            [24] 3220 	sjmp	00235$
      000A2B                       3221 00234$:
      000A2B 02 08 6C         [24] 3222 	ljmp	00144$
      000A2E                       3223 00235$:
                           000946  3224 	C$lab6.c$267$5$153 ==.
                                   3225 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:267: PW_RIGHT_RUDDER = RUDDER_PW;
      000A2E 85 46 3E         [24] 3226 	mov	_PW_RIGHT_RUDDER,_RUDDER_PW
      000A31 85 47 3F         [24] 3227 	mov	(_PW_RIGHT_RUDDER + 1),(_RUDDER_PW + 1)
                           00094C  3228 	C$lab6.c$268$5$153 ==.
                                   3229 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:268: return;
                           00094C  3230 	C$lab6.c$277$1$136 ==.
                           00094C  3231 	XG$Rudder_cal$0$0 ==.
      000A34 22               [24] 3232 	ret
                                   3233 ;------------------------------------------------------------
                                   3234 ;Allocation info for local variables in function 'Angle_cal'
                                   3235 ;------------------------------------------------------------
                                   3236 ;value                     Allocated to registers r6 r7 
                                   3237 ;times                     Allocated to registers r4 r5 
                                   3238 ;------------------------------------------------------------
                           00094D  3239 	G$Angle_cal$0$0 ==.
                           00094D  3240 	C$lab6.c$279$1$136 ==.
                                   3241 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:279: void Angle_cal(void)
                                   3242 ;	-----------------------------------------
                                   3243 ;	 function Angle_cal
                                   3244 ;	-----------------------------------------
      000A35                       3245 _Angle_cal:
                           00094D  3246 	C$lab6.c$281$1$136 ==.
                                   3247 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:281: int value =0;
                           00094D  3248 	C$lab6.c$282$1$136 ==.
                                   3249 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:282: int times =0;
                           00094D  3250 	C$lab6.c$283$1$155 ==.
                                   3251 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:283: count =0;
      000A35 E4               [12] 3252 	clr	a
      000A36 FE               [12] 3253 	mov	r6,a
      000A37 FF               [12] 3254 	mov	r7,a
      000A38 FC               [12] 3255 	mov	r4,a
      000A39 FD               [12] 3256 	mov	r5,a
      000A3A F5 32            [12] 3257 	mov	_count,a
      000A3C F5 33            [12] 3258 	mov	(_count + 1),a
                           000956  3259 	C$lab6.c$284$1$155 ==.
                                   3260 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:284: lcd_clear();
      000A3E C0 07            [24] 3261 	push	ar7
      000A40 C0 06            [24] 3262 	push	ar6
      000A42 C0 05            [24] 3263 	push	ar5
      000A44 C0 04            [24] 3264 	push	ar4
      000A46 12 01 C9         [24] 3265 	lcall	_lcd_clear
                           000961  3266 	C$lab6.c$285$1$155 ==.
                                   3267 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:285: lcd_print("Angle Calibration");
      000A49 74 E0            [12] 3268 	mov	a,#___str_13
      000A4B C0 E0            [24] 3269 	push	acc
      000A4D 74 1E            [12] 3270 	mov	a,#(___str_13 >> 8)
      000A4F C0 E0            [24] 3271 	push	acc
      000A51 74 80            [12] 3272 	mov	a,#0x80
      000A53 C0 E0            [24] 3273 	push	acc
      000A55 12 01 44         [24] 3274 	lcall	_lcd_print
      000A58 15 81            [12] 3275 	dec	sp
      000A5A 15 81            [12] 3276 	dec	sp
      000A5C 15 81            [12] 3277 	dec	sp
      000A5E D0 04            [24] 3278 	pop	ar4
      000A60 D0 05            [24] 3279 	pop	ar5
      000A62 D0 06            [24] 3280 	pop	ar6
      000A64 D0 07            [24] 3281 	pop	ar7
                           00097E  3282 	C$lab6.c$286$1$155 ==.
                                   3283 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:286: while (count < 50);
      000A66                       3284 00101$:
      000A66 C3               [12] 3285 	clr	c
      000A67 E5 32            [12] 3286 	mov	a,_count
      000A69 94 32            [12] 3287 	subb	a,#0x32
      000A6B E5 33            [12] 3288 	mov	a,(_count + 1)
      000A6D 64 80            [12] 3289 	xrl	a,#0x80
      000A6F 94 80            [12] 3290 	subb	a,#0x80
      000A71 40 F3            [24] 3291 	jc	00101$
                           00098B  3292 	C$lab6.c$287$1$155 ==.
                                   3293 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:287: lcd_clear();
      000A73 C0 07            [24] 3294 	push	ar7
      000A75 C0 06            [24] 3295 	push	ar6
      000A77 C0 05            [24] 3296 	push	ar5
      000A79 C0 04            [24] 3297 	push	ar4
      000A7B 12 01 C9         [24] 3298 	lcall	_lcd_clear
      000A7E D0 04            [24] 3299 	pop	ar4
      000A80 D0 05            [24] 3300 	pop	ar5
      000A82 D0 06            [24] 3301 	pop	ar6
      000A84 D0 07            [24] 3302 	pop	ar7
                           00099E  3303 	C$lab6.c$290$2$156 ==.
                                   3304 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:290: count = 0;
      000A86 E4               [12] 3305 	clr	a
      000A87 F5 32            [12] 3306 	mov	_count,a
      000A89 F5 33            [12] 3307 	mov	(_count + 1),a
                           0009A3  3308 	C$lab6.c$291$2$156 ==.
                                   3309 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:291: while (count < 1);
      000A8B                       3310 00104$:
      000A8B C3               [12] 3311 	clr	c
      000A8C E5 32            [12] 3312 	mov	a,_count
      000A8E 94 01            [12] 3313 	subb	a,#0x01
      000A90 E5 33            [12] 3314 	mov	a,(_count + 1)
      000A92 64 80            [12] 3315 	xrl	a,#0x80
      000A94 94 80            [12] 3316 	subb	a,#0x80
      000A96 40 F3            [24] 3317 	jc	00104$
                           0009B0  3318 	C$lab6.c$292$2$156 ==.
                                   3319 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:292: lcd_clear();
      000A98 C0 07            [24] 3320 	push	ar7
      000A9A C0 06            [24] 3321 	push	ar6
      000A9C C0 05            [24] 3322 	push	ar5
      000A9E C0 04            [24] 3323 	push	ar4
      000AA0 12 01 C9         [24] 3324 	lcall	_lcd_clear
                           0009BB  3325 	C$lab6.c$293$2$156 ==.
                                   3326 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:293: lcd_print("go left: press 1\n go right: press 2\nPress * for next screen");
      000AA3 74 33            [12] 3327 	mov	a,#___str_7
      000AA5 C0 E0            [24] 3328 	push	acc
      000AA7 74 1E            [12] 3329 	mov	a,#(___str_7 >> 8)
      000AA9 C0 E0            [24] 3330 	push	acc
      000AAB 74 80            [12] 3331 	mov	a,#0x80
      000AAD C0 E0            [24] 3332 	push	acc
      000AAF 12 01 44         [24] 3333 	lcall	_lcd_print
      000AB2 15 81            [12] 3334 	dec	sp
      000AB4 15 81            [12] 3335 	dec	sp
      000AB6 15 81            [12] 3336 	dec	sp
                           0009D0  3337 	C$lab6.c$294$2$156 ==.
                                   3338 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:294: start();
      000AB8 12 11 E3         [24] 3339 	lcall	_start
                           0009D3  3340 	C$lab6.c$295$2$156 ==.
                                   3341 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:295: lcd_clear();
      000ABB 12 01 C9         [24] 3342 	lcall	_lcd_clear
                           0009D6  3343 	C$lab6.c$296$2$156 ==.
                                   3344 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:296: lcd_print("\n confirm: press 3\n press * to begin");
      000ABE 74 6F            [12] 3345 	mov	a,#___str_8
      000AC0 C0 E0            [24] 3346 	push	acc
      000AC2 74 1E            [12] 3347 	mov	a,#(___str_8 >> 8)
      000AC4 C0 E0            [24] 3348 	push	acc
      000AC6 74 80            [12] 3349 	mov	a,#0x80
      000AC8 C0 E0            [24] 3350 	push	acc
      000ACA 12 01 44         [24] 3351 	lcall	_lcd_print
      000ACD 15 81            [12] 3352 	dec	sp
      000ACF 15 81            [12] 3353 	dec	sp
      000AD1 15 81            [12] 3354 	dec	sp
                           0009EB  3355 	C$lab6.c$297$2$156 ==.
                                   3356 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:297: start();
      000AD3 12 11 E3         [24] 3357 	lcall	_start
      000AD6 D0 04            [24] 3358 	pop	ar4
      000AD8 D0 05            [24] 3359 	pop	ar5
      000ADA D0 06            [24] 3360 	pop	ar6
      000ADC D0 07            [24] 3361 	pop	ar7
                           0009F6  3362 	C$lab6.c$299$5$159 ==.
                                   3363 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:299: while (1)
      000ADE                       3364 00144$:
                           0009F6  3365 	C$lab6.c$301$3$157 ==.
                                   3366 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:301: printf("\r\n %u",ANGLE_PW);
      000ADE C0 07            [24] 3367 	push	ar7
      000AE0 C0 06            [24] 3368 	push	ar6
      000AE2 C0 05            [24] 3369 	push	ar5
      000AE4 C0 04            [24] 3370 	push	ar4
      000AE6 C0 4A            [24] 3371 	push	_ANGLE_PW
      000AE8 C0 4B            [24] 3372 	push	(_ANGLE_PW + 1)
      000AEA 74 94            [12] 3373 	mov	a,#___str_9
      000AEC C0 E0            [24] 3374 	push	acc
      000AEE 74 1E            [12] 3375 	mov	a,#(___str_9 >> 8)
      000AF0 C0 E0            [24] 3376 	push	acc
      000AF2 74 80            [12] 3377 	mov	a,#0x80
      000AF4 C0 E0            [24] 3378 	push	acc
      000AF6 12 15 85         [24] 3379 	lcall	_printf
      000AF9 E5 81            [12] 3380 	mov	a,sp
      000AFB 24 FB            [12] 3381 	add	a,#0xfb
      000AFD F5 81            [12] 3382 	mov	sp,a
      000AFF D0 04            [24] 3383 	pop	ar4
      000B01 D0 05            [24] 3384 	pop	ar5
      000B03 D0 06            [24] 3385 	pop	ar6
      000B05 D0 07            [24] 3386 	pop	ar7
                           000A1F  3387 	C$lab6.c$302$3$157 ==.
                                   3388 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:302: AGL_lo_to_hi = 0xFFFF - ANGLE_PW;
      000B07 74 FF            [12] 3389 	mov	a,#0xFF
      000B09 C3               [12] 3390 	clr	c
      000B0A 95 4A            [12] 3391 	subb	a,_ANGLE_PW
      000B0C F5 4C            [12] 3392 	mov	_AGL_lo_to_hi,a
      000B0E 74 FF            [12] 3393 	mov	a,#0xFF
      000B10 95 4B            [12] 3394 	subb	a,(_ANGLE_PW + 1)
      000B12 F5 4D            [12] 3395 	mov	(_AGL_lo_to_hi + 1),a
                           000A2C  3396 	C$lab6.c$303$3$157 ==.
                                   3397 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:303: PCA0CP1 = AGL_lo_to_hi;
      000B14 85 4C EB         [24] 3398 	mov	((_PCA0CP1 >> 0) & 0xFF),_AGL_lo_to_hi
      000B17 85 4D FB         [24] 3399 	mov	((_PCA0CP1 >> 8) & 0xFF),(_AGL_lo_to_hi + 1)
                           000A32  3400 	C$lab6.c$304$3$157 ==.
                                   3401 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:304: if (times == 0 )
      000B1A EC               [12] 3402 	mov	a,r4
      000B1B 4D               [12] 3403 	orl	a,r5
      000B1C 60 03            [24] 3404 	jz	00210$
      000B1E 02 0B A0         [24] 3405 	ljmp	00141$
      000B21                       3406 00210$:
                           000A39  3407 	C$lab6.c$306$4$158 ==.
                                   3408 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:306: if (value ==0)
      000B21 EE               [12] 3409 	mov	a,r6
      000B22 4F               [12] 3410 	orl	a,r7
      000B23 70 23            [24] 3411 	jnz	00108$
                           000A3D  3412 	C$lab6.c$308$5$159 ==.
                                   3413 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:308: lcd_print("Now calibrating Min_PW UP ANGLE");
      000B25 C0 05            [24] 3414 	push	ar5
      000B27 C0 04            [24] 3415 	push	ar4
      000B29 74 F2            [12] 3416 	mov	a,#___str_14
      000B2B C0 E0            [24] 3417 	push	acc
      000B2D 74 1E            [12] 3418 	mov	a,#(___str_14 >> 8)
      000B2F C0 E0            [24] 3419 	push	acc
      000B31 74 80            [12] 3420 	mov	a,#0x80
      000B33 C0 E0            [24] 3421 	push	acc
      000B35 12 01 44         [24] 3422 	lcall	_lcd_print
      000B38 15 81            [12] 3423 	dec	sp
      000B3A 15 81            [12] 3424 	dec	sp
      000B3C 15 81            [12] 3425 	dec	sp
      000B3E D0 04            [24] 3426 	pop	ar4
      000B40 D0 05            [24] 3427 	pop	ar5
                           000A5A  3428 	C$lab6.c$309$5$159 ==.
                                   3429 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:309: ANGLE_PW = PW_UP_ANGLE;
      000B42 85 40 4A         [24] 3430 	mov	_ANGLE_PW,_PW_UP_ANGLE
      000B45 85 41 4B         [24] 3431 	mov	(_ANGLE_PW + 1),(_PW_UP_ANGLE + 1)
      000B48                       3432 00108$:
                           000A60  3433 	C$lab6.c$311$4$158 ==.
                                   3434 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:311: value = kpd_input(1);
      000B48 75 82 01         [24] 3435 	mov	dpl,#0x01
      000B4B C0 05            [24] 3436 	push	ar5
      000B4D C0 04            [24] 3437 	push	ar4
      000B4F 12 02 81         [24] 3438 	lcall	_kpd_input
      000B52 AE 82            [24] 3439 	mov	r6,dpl
      000B54 AF 83            [24] 3440 	mov	r7,dph
      000B56 D0 04            [24] 3441 	pop	ar4
      000B58 D0 05            [24] 3442 	pop	ar5
                           000A72  3443 	C$lab6.c$312$4$158 ==.
                                   3444 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:312: if (value == 1)
      000B5A BE 01 12         [24] 3445 	cjne	r6,#0x01,00115$
      000B5D BF 00 0F         [24] 3446 	cjne	r7,#0x00,00115$
                           000A78  3447 	C$lab6.c$314$5$160 ==.
                                   3448 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:314: ANGLE_PW -= 10;
      000B60 E5 4A            [12] 3449 	mov	a,_ANGLE_PW
      000B62 24 F6            [12] 3450 	add	a,#0xF6
      000B64 F5 4A            [12] 3451 	mov	_ANGLE_PW,a
      000B66 E5 4B            [12] 3452 	mov	a,(_ANGLE_PW + 1)
      000B68 34 FF            [12] 3453 	addc	a,#0xFF
      000B6A F5 4B            [12] 3454 	mov	(_ANGLE_PW + 1),a
      000B6C 02 0A DE         [24] 3455 	ljmp	00144$
      000B6F                       3456 00115$:
                           000A87  3457 	C$lab6.c$316$4$158 ==.
                                   3458 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:316: else if (value==2)
      000B6F BE 02 11         [24] 3459 	cjne	r6,#0x02,00112$
      000B72 BF 00 0E         [24] 3460 	cjne	r7,#0x00,00112$
                           000A8D  3461 	C$lab6.c$318$5$161 ==.
                                   3462 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:318: ANGLE_PW += 10;
      000B75 74 0A            [12] 3463 	mov	a,#0x0A
      000B77 25 4A            [12] 3464 	add	a,_ANGLE_PW
      000B79 F5 4A            [12] 3465 	mov	_ANGLE_PW,a
      000B7B E4               [12] 3466 	clr	a
      000B7C 35 4B            [12] 3467 	addc	a,(_ANGLE_PW + 1)
      000B7E F5 4B            [12] 3468 	mov	(_ANGLE_PW + 1),a
      000B80 02 0A DE         [24] 3469 	ljmp	00144$
      000B83                       3470 00112$:
                           000A9B  3471 	C$lab6.c$320$4$158 ==.
                                   3472 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:320: else if (value == 3)
      000B83 BE 03 05         [24] 3473 	cjne	r6,#0x03,00216$
      000B86 BF 00 02         [24] 3474 	cjne	r7,#0x00,00216$
      000B89 80 03            [24] 3475 	sjmp	00217$
      000B8B                       3476 00216$:
      000B8B 02 0A DE         [24] 3477 	ljmp	00144$
      000B8E                       3478 00217$:
                           000AA6  3479 	C$lab6.c$322$5$162 ==.
                                   3480 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:322: times++;
      000B8E 0C               [12] 3481 	inc	r4
      000B8F BC 00 01         [24] 3482 	cjne	r4,#0x00,00218$
      000B92 0D               [12] 3483 	inc	r5
      000B93                       3484 00218$:
                           000AAB  3485 	C$lab6.c$323$5$162 ==.
                                   3486 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:323: value =0;
      000B93 7E 00            [12] 3487 	mov	r6,#0x00
      000B95 7F 00            [12] 3488 	mov	r7,#0x00
                           000AAF  3489 	C$lab6.c$324$5$162 ==.
                                   3490 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:324: PW_UP_ANGLE = ANGLE_PW;
      000B97 85 4A 40         [24] 3491 	mov	_PW_UP_ANGLE,_ANGLE_PW
      000B9A 85 4B 41         [24] 3492 	mov	(_PW_UP_ANGLE + 1),(_ANGLE_PW + 1)
      000B9D 02 0A DE         [24] 3493 	ljmp	00144$
      000BA0                       3494 00141$:
                           000AB8  3495 	C$lab6.c$327$3$157 ==.
                                   3496 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:327: else if (times ==1)
      000BA0 BC 01 05         [24] 3497 	cjne	r4,#0x01,00219$
      000BA3 BD 00 02         [24] 3498 	cjne	r5,#0x00,00219$
      000BA6 80 03            [24] 3499 	sjmp	00220$
      000BA8                       3500 00219$:
      000BA8 02 0C 2A         [24] 3501 	ljmp	00138$
      000BAB                       3502 00220$:
                           000AC3  3503 	C$lab6.c$329$4$163 ==.
                                   3504 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:329: if (value ==0)
      000BAB EE               [12] 3505 	mov	a,r6
      000BAC 4F               [12] 3506 	orl	a,r7
      000BAD 70 23            [24] 3507 	jnz	00118$
                           000AC7  3508 	C$lab6.c$331$5$164 ==.
                                   3509 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:331: lcd_print("Now calibrating Cen_PW");
      000BAF C0 05            [24] 3510 	push	ar5
      000BB1 C0 04            [24] 3511 	push	ar4
      000BB3 74 B2            [12] 3512 	mov	a,#___str_11
      000BB5 C0 E0            [24] 3513 	push	acc
      000BB7 74 1E            [12] 3514 	mov	a,#(___str_11 >> 8)
      000BB9 C0 E0            [24] 3515 	push	acc
      000BBB 74 80            [12] 3516 	mov	a,#0x80
      000BBD C0 E0            [24] 3517 	push	acc
      000BBF 12 01 44         [24] 3518 	lcall	_lcd_print
      000BC2 15 81            [12] 3519 	dec	sp
      000BC4 15 81            [12] 3520 	dec	sp
      000BC6 15 81            [12] 3521 	dec	sp
      000BC8 D0 04            [24] 3522 	pop	ar4
      000BCA D0 05            [24] 3523 	pop	ar5
                           000AE4  3524 	C$lab6.c$332$5$164 ==.
                                   3525 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:332: ANGLE_PW = PW_CENTER_ANGLE;
      000BCC 85 42 4A         [24] 3526 	mov	_ANGLE_PW,_PW_CENTER_ANGLE
      000BCF 85 43 4B         [24] 3527 	mov	(_ANGLE_PW + 1),(_PW_CENTER_ANGLE + 1)
      000BD2                       3528 00118$:
                           000AEA  3529 	C$lab6.c$334$4$163 ==.
                                   3530 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:334: value = kpd_input(1);
      000BD2 75 82 01         [24] 3531 	mov	dpl,#0x01
      000BD5 C0 05            [24] 3532 	push	ar5
      000BD7 C0 04            [24] 3533 	push	ar4
      000BD9 12 02 81         [24] 3534 	lcall	_kpd_input
      000BDC AE 82            [24] 3535 	mov	r6,dpl
      000BDE AF 83            [24] 3536 	mov	r7,dph
      000BE0 D0 04            [24] 3537 	pop	ar4
      000BE2 D0 05            [24] 3538 	pop	ar5
                           000AFC  3539 	C$lab6.c$335$4$163 ==.
                                   3540 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:335: if (value == 1)
      000BE4 BE 01 12         [24] 3541 	cjne	r6,#0x01,00125$
      000BE7 BF 00 0F         [24] 3542 	cjne	r7,#0x00,00125$
                           000B02  3543 	C$lab6.c$337$5$165 ==.
                                   3544 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:337: ANGLE_PW -= 10;
      000BEA E5 4A            [12] 3545 	mov	a,_ANGLE_PW
      000BEC 24 F6            [12] 3546 	add	a,#0xF6
      000BEE F5 4A            [12] 3547 	mov	_ANGLE_PW,a
      000BF0 E5 4B            [12] 3548 	mov	a,(_ANGLE_PW + 1)
      000BF2 34 FF            [12] 3549 	addc	a,#0xFF
      000BF4 F5 4B            [12] 3550 	mov	(_ANGLE_PW + 1),a
      000BF6 02 0A DE         [24] 3551 	ljmp	00144$
      000BF9                       3552 00125$:
                           000B11  3553 	C$lab6.c$339$4$163 ==.
                                   3554 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:339: else if (value==2)
      000BF9 BE 02 11         [24] 3555 	cjne	r6,#0x02,00122$
      000BFC BF 00 0E         [24] 3556 	cjne	r7,#0x00,00122$
                           000B17  3557 	C$lab6.c$341$5$166 ==.
                                   3558 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:341: ANGLE_PW += 10;
      000BFF 74 0A            [12] 3559 	mov	a,#0x0A
      000C01 25 4A            [12] 3560 	add	a,_ANGLE_PW
      000C03 F5 4A            [12] 3561 	mov	_ANGLE_PW,a
      000C05 E4               [12] 3562 	clr	a
      000C06 35 4B            [12] 3563 	addc	a,(_ANGLE_PW + 1)
      000C08 F5 4B            [12] 3564 	mov	(_ANGLE_PW + 1),a
      000C0A 02 0A DE         [24] 3565 	ljmp	00144$
      000C0D                       3566 00122$:
                           000B25  3567 	C$lab6.c$343$4$163 ==.
                                   3568 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:343: else if (value == 3)
      000C0D BE 03 05         [24] 3569 	cjne	r6,#0x03,00226$
      000C10 BF 00 02         [24] 3570 	cjne	r7,#0x00,00226$
      000C13 80 03            [24] 3571 	sjmp	00227$
      000C15                       3572 00226$:
      000C15 02 0A DE         [24] 3573 	ljmp	00144$
      000C18                       3574 00227$:
                           000B30  3575 	C$lab6.c$345$5$167 ==.
                                   3576 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:345: times++;
      000C18 0C               [12] 3577 	inc	r4
      000C19 BC 00 01         [24] 3578 	cjne	r4,#0x00,00228$
      000C1C 0D               [12] 3579 	inc	r5
      000C1D                       3580 00228$:
                           000B35  3581 	C$lab6.c$346$5$167 ==.
                                   3582 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:346: value=0;
      000C1D 7E 00            [12] 3583 	mov	r6,#0x00
      000C1F 7F 00            [12] 3584 	mov	r7,#0x00
                           000B39  3585 	C$lab6.c$347$5$167 ==.
                                   3586 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:347: PW_CENTER_ANGLE = ANGLE_PW;
      000C21 85 4A 42         [24] 3587 	mov	_PW_CENTER_ANGLE,_ANGLE_PW
      000C24 85 4B 43         [24] 3588 	mov	(_PW_CENTER_ANGLE + 1),(_ANGLE_PW + 1)
      000C27 02 0A DE         [24] 3589 	ljmp	00144$
      000C2A                       3590 00138$:
                           000B42  3591 	C$lab6.c$352$4$168 ==.
                                   3592 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:352: if (value==0)
      000C2A EE               [12] 3593 	mov	a,r6
      000C2B 4F               [12] 3594 	orl	a,r7
      000C2C 70 23            [24] 3595 	jnz	00128$
                           000B46  3596 	C$lab6.c$354$5$169 ==.
                                   3597 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:354: lcd_print("Now calibrating Max_PW DOWN ANGLE");
      000C2E C0 05            [24] 3598 	push	ar5
      000C30 C0 04            [24] 3599 	push	ar4
      000C32 74 12            [12] 3600 	mov	a,#___str_15
      000C34 C0 E0            [24] 3601 	push	acc
      000C36 74 1F            [12] 3602 	mov	a,#(___str_15 >> 8)
      000C38 C0 E0            [24] 3603 	push	acc
      000C3A 74 80            [12] 3604 	mov	a,#0x80
      000C3C C0 E0            [24] 3605 	push	acc
      000C3E 12 01 44         [24] 3606 	lcall	_lcd_print
      000C41 15 81            [12] 3607 	dec	sp
      000C43 15 81            [12] 3608 	dec	sp
      000C45 15 81            [12] 3609 	dec	sp
      000C47 D0 04            [24] 3610 	pop	ar4
      000C49 D0 05            [24] 3611 	pop	ar5
                           000B63  3612 	C$lab6.c$355$5$169 ==.
                                   3613 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:355: ANGLE_PW = PW_DOWN_ANGLE;
      000C4B 85 44 4A         [24] 3614 	mov	_ANGLE_PW,_PW_DOWN_ANGLE
      000C4E 85 45 4B         [24] 3615 	mov	(_ANGLE_PW + 1),(_PW_DOWN_ANGLE + 1)
      000C51                       3616 00128$:
                           000B69  3617 	C$lab6.c$357$4$168 ==.
                                   3618 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:357: value = kpd_input(1);
      000C51 75 82 01         [24] 3619 	mov	dpl,#0x01
      000C54 C0 05            [24] 3620 	push	ar5
      000C56 C0 04            [24] 3621 	push	ar4
      000C58 12 02 81         [24] 3622 	lcall	_kpd_input
      000C5B AE 82            [24] 3623 	mov	r6,dpl
      000C5D AF 83            [24] 3624 	mov	r7,dph
      000C5F D0 04            [24] 3625 	pop	ar4
      000C61 D0 05            [24] 3626 	pop	ar5
                           000B7B  3627 	C$lab6.c$358$4$168 ==.
                                   3628 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:358: if (value == 1)
      000C63 BE 01 12         [24] 3629 	cjne	r6,#0x01,00135$
      000C66 BF 00 0F         [24] 3630 	cjne	r7,#0x00,00135$
                           000B81  3631 	C$lab6.c$360$5$170 ==.
                                   3632 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:360: ANGLE_PW -= 10;
      000C69 E5 4A            [12] 3633 	mov	a,_ANGLE_PW
      000C6B 24 F6            [12] 3634 	add	a,#0xF6
      000C6D F5 4A            [12] 3635 	mov	_ANGLE_PW,a
      000C6F E5 4B            [12] 3636 	mov	a,(_ANGLE_PW + 1)
      000C71 34 FF            [12] 3637 	addc	a,#0xFF
      000C73 F5 4B            [12] 3638 	mov	(_ANGLE_PW + 1),a
      000C75 02 0A DE         [24] 3639 	ljmp	00144$
      000C78                       3640 00135$:
                           000B90  3641 	C$lab6.c$362$4$168 ==.
                                   3642 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:362: else if (value==2)
      000C78 BE 02 11         [24] 3643 	cjne	r6,#0x02,00132$
      000C7B BF 00 0E         [24] 3644 	cjne	r7,#0x00,00132$
                           000B96  3645 	C$lab6.c$364$5$171 ==.
                                   3646 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:364: ANGLE_PW += 10;
      000C7E 74 0A            [12] 3647 	mov	a,#0x0A
      000C80 25 4A            [12] 3648 	add	a,_ANGLE_PW
      000C82 F5 4A            [12] 3649 	mov	_ANGLE_PW,a
      000C84 E4               [12] 3650 	clr	a
      000C85 35 4B            [12] 3651 	addc	a,(_ANGLE_PW + 1)
      000C87 F5 4B            [12] 3652 	mov	(_ANGLE_PW + 1),a
      000C89 02 0A DE         [24] 3653 	ljmp	00144$
      000C8C                       3654 00132$:
                           000BA4  3655 	C$lab6.c$366$4$168 ==.
                                   3656 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:366: else if (value == 3)
      000C8C BE 03 05         [24] 3657 	cjne	r6,#0x03,00234$
      000C8F BF 00 02         [24] 3658 	cjne	r7,#0x00,00234$
      000C92 80 03            [24] 3659 	sjmp	00235$
      000C94                       3660 00234$:
      000C94 02 0A DE         [24] 3661 	ljmp	00144$
      000C97                       3662 00235$:
                           000BAF  3663 	C$lab6.c$368$5$172 ==.
                                   3664 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:368: PW_DOWN_ANGLE = ANGLE_PW;
      000C97 85 4A 44         [24] 3665 	mov	_PW_DOWN_ANGLE,_ANGLE_PW
      000C9A 85 4B 45         [24] 3666 	mov	(_PW_DOWN_ANGLE + 1),(_ANGLE_PW + 1)
                           000BB5  3667 	C$lab6.c$369$5$172 ==.
                                   3668 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:369: return;
                           000BB5  3669 	C$lab6.c$374$1$155 ==.
                           000BB5  3670 	XG$Angle_cal$0$0 ==.
      000C9D 22               [24] 3671 	ret
                                   3672 ;------------------------------------------------------------
                                   3673 ;Allocation info for local variables in function 'Thrust_cal'
                                   3674 ;------------------------------------------------------------
                                   3675 ;value                     Allocated to registers r6 r7 
                                   3676 ;times                     Allocated to registers r4 r5 
                                   3677 ;------------------------------------------------------------
                           000BB6  3678 	G$Thrust_cal$0$0 ==.
                           000BB6  3679 	C$lab6.c$376$1$155 ==.
                                   3680 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:376: void Thrust_cal(void)
                                   3681 ;	-----------------------------------------
                                   3682 ;	 function Thrust_cal
                                   3683 ;	-----------------------------------------
      000C9E                       3684 _Thrust_cal:
                           000BB6  3685 	C$lab6.c$378$1$155 ==.
                                   3686 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:378: int value =0;
                           000BB6  3687 	C$lab6.c$379$1$155 ==.
                                   3688 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:379: int times =0;
                           000BB6  3689 	C$lab6.c$380$1$174 ==.
                                   3690 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:380: count =0;
      000C9E E4               [12] 3691 	clr	a
      000C9F FE               [12] 3692 	mov	r6,a
      000CA0 FF               [12] 3693 	mov	r7,a
      000CA1 FC               [12] 3694 	mov	r4,a
      000CA2 FD               [12] 3695 	mov	r5,a
      000CA3 F5 32            [12] 3696 	mov	_count,a
      000CA5 F5 33            [12] 3697 	mov	(_count + 1),a
                           000BBF  3698 	C$lab6.c$381$1$174 ==.
                                   3699 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:381: lcd_clear();
      000CA7 C0 07            [24] 3700 	push	ar7
      000CA9 C0 06            [24] 3701 	push	ar6
      000CAB C0 05            [24] 3702 	push	ar5
      000CAD C0 04            [24] 3703 	push	ar4
      000CAF 12 01 C9         [24] 3704 	lcall	_lcd_clear
                           000BCA  3705 	C$lab6.c$382$1$174 ==.
                                   3706 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:382: lcd_print("Thrust Calibration");
      000CB2 74 34            [12] 3707 	mov	a,#___str_16
      000CB4 C0 E0            [24] 3708 	push	acc
      000CB6 74 1F            [12] 3709 	mov	a,#(___str_16 >> 8)
      000CB8 C0 E0            [24] 3710 	push	acc
      000CBA 74 80            [12] 3711 	mov	a,#0x80
      000CBC C0 E0            [24] 3712 	push	acc
      000CBE 12 01 44         [24] 3713 	lcall	_lcd_print
      000CC1 15 81            [12] 3714 	dec	sp
      000CC3 15 81            [12] 3715 	dec	sp
      000CC5 15 81            [12] 3716 	dec	sp
      000CC7 D0 04            [24] 3717 	pop	ar4
      000CC9 D0 05            [24] 3718 	pop	ar5
      000CCB D0 06            [24] 3719 	pop	ar6
      000CCD D0 07            [24] 3720 	pop	ar7
                           000BE7  3721 	C$lab6.c$383$1$174 ==.
                                   3722 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:383: while (count < 50);
      000CCF                       3723 00101$:
      000CCF C3               [12] 3724 	clr	c
      000CD0 E5 32            [12] 3725 	mov	a,_count
      000CD2 94 32            [12] 3726 	subb	a,#0x32
      000CD4 E5 33            [12] 3727 	mov	a,(_count + 1)
      000CD6 64 80            [12] 3728 	xrl	a,#0x80
      000CD8 94 80            [12] 3729 	subb	a,#0x80
      000CDA 40 F3            [24] 3730 	jc	00101$
                           000BF4  3731 	C$lab6.c$384$1$174 ==.
                                   3732 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:384: lcd_clear();
      000CDC C0 07            [24] 3733 	push	ar7
      000CDE C0 06            [24] 3734 	push	ar6
      000CE0 C0 05            [24] 3735 	push	ar5
      000CE2 C0 04            [24] 3736 	push	ar4
      000CE4 12 01 C9         [24] 3737 	lcall	_lcd_clear
      000CE7 D0 04            [24] 3738 	pop	ar4
      000CE9 D0 05            [24] 3739 	pop	ar5
      000CEB D0 06            [24] 3740 	pop	ar6
      000CED D0 07            [24] 3741 	pop	ar7
                           000C07  3742 	C$lab6.c$388$2$175 ==.
                                   3743 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:388: count = 0;
      000CEF E4               [12] 3744 	clr	a
      000CF0 F5 32            [12] 3745 	mov	_count,a
      000CF2 F5 33            [12] 3746 	mov	(_count + 1),a
                           000C0C  3747 	C$lab6.c$389$2$175 ==.
                                   3748 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:389: while (count < 1);
      000CF4                       3749 00104$:
      000CF4 C3               [12] 3750 	clr	c
      000CF5 E5 32            [12] 3751 	mov	a,_count
      000CF7 94 01            [12] 3752 	subb	a,#0x01
      000CF9 E5 33            [12] 3753 	mov	a,(_count + 1)
      000CFB 64 80            [12] 3754 	xrl	a,#0x80
      000CFD 94 80            [12] 3755 	subb	a,#0x80
      000CFF 40 F3            [24] 3756 	jc	00104$
                           000C19  3757 	C$lab6.c$390$2$175 ==.
                                   3758 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:390: lcd_clear();
      000D01 C0 07            [24] 3759 	push	ar7
      000D03 C0 06            [24] 3760 	push	ar6
      000D05 C0 05            [24] 3761 	push	ar5
      000D07 C0 04            [24] 3762 	push	ar4
      000D09 12 01 C9         [24] 3763 	lcall	_lcd_clear
                           000C24  3764 	C$lab6.c$391$2$175 ==.
                                   3765 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:391: lcd_print("go left: press 1\n go right: press 2\nPress * for next screen");
      000D0C 74 33            [12] 3766 	mov	a,#___str_7
      000D0E C0 E0            [24] 3767 	push	acc
      000D10 74 1E            [12] 3768 	mov	a,#(___str_7 >> 8)
      000D12 C0 E0            [24] 3769 	push	acc
      000D14 74 80            [12] 3770 	mov	a,#0x80
      000D16 C0 E0            [24] 3771 	push	acc
      000D18 12 01 44         [24] 3772 	lcall	_lcd_print
      000D1B 15 81            [12] 3773 	dec	sp
      000D1D 15 81            [12] 3774 	dec	sp
      000D1F 15 81            [12] 3775 	dec	sp
                           000C39  3776 	C$lab6.c$392$2$175 ==.
                                   3777 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:392: start();
      000D21 12 11 E3         [24] 3778 	lcall	_start
                           000C3C  3779 	C$lab6.c$393$2$175 ==.
                                   3780 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:393: lcd_clear();
      000D24 12 01 C9         [24] 3781 	lcall	_lcd_clear
                           000C3F  3782 	C$lab6.c$394$2$175 ==.
                                   3783 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:394: lcd_print("\n confirm: press 3\n press * to begin");
      000D27 74 6F            [12] 3784 	mov	a,#___str_8
      000D29 C0 E0            [24] 3785 	push	acc
      000D2B 74 1E            [12] 3786 	mov	a,#(___str_8 >> 8)
      000D2D C0 E0            [24] 3787 	push	acc
      000D2F 74 80            [12] 3788 	mov	a,#0x80
      000D31 C0 E0            [24] 3789 	push	acc
      000D33 12 01 44         [24] 3790 	lcall	_lcd_print
      000D36 15 81            [12] 3791 	dec	sp
      000D38 15 81            [12] 3792 	dec	sp
      000D3A 15 81            [12] 3793 	dec	sp
                           000C54  3794 	C$lab6.c$395$2$175 ==.
                                   3795 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:395: start();
      000D3C 12 11 E3         [24] 3796 	lcall	_start
      000D3F D0 04            [24] 3797 	pop	ar4
      000D41 D0 05            [24] 3798 	pop	ar5
      000D43 D0 06            [24] 3799 	pop	ar6
      000D45 D0 07            [24] 3800 	pop	ar7
                           000C5F  3801 	C$lab6.c$397$5$178 ==.
                                   3802 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:397: while (1)
      000D47                       3803 00144$:
                           000C5F  3804 	C$lab6.c$399$3$176 ==.
                                   3805 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:399: printf("\r\n %u",THRUST_PW);
      000D47 C0 07            [24] 3806 	push	ar7
      000D49 C0 06            [24] 3807 	push	ar6
      000D4B C0 05            [24] 3808 	push	ar5
      000D4D C0 04            [24] 3809 	push	ar4
      000D4F C0 4E            [24] 3810 	push	_THRUST_PW
      000D51 C0 4F            [24] 3811 	push	(_THRUST_PW + 1)
      000D53 74 94            [12] 3812 	mov	a,#___str_9
      000D55 C0 E0            [24] 3813 	push	acc
      000D57 74 1E            [12] 3814 	mov	a,#(___str_9 >> 8)
      000D59 C0 E0            [24] 3815 	push	acc
      000D5B 74 80            [12] 3816 	mov	a,#0x80
      000D5D C0 E0            [24] 3817 	push	acc
      000D5F 12 15 85         [24] 3818 	lcall	_printf
      000D62 E5 81            [12] 3819 	mov	a,sp
      000D64 24 FB            [12] 3820 	add	a,#0xfb
      000D66 F5 81            [12] 3821 	mov	sp,a
      000D68 D0 04            [24] 3822 	pop	ar4
      000D6A D0 05            [24] 3823 	pop	ar5
      000D6C D0 06            [24] 3824 	pop	ar6
      000D6E D0 07            [24] 3825 	pop	ar7
                           000C88  3826 	C$lab6.c$400$3$176 ==.
                                   3827 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:400: TRST_lo_to_hi = 0xFFFF - THRUST_PW;
      000D70 74 FF            [12] 3828 	mov	a,#0xFF
      000D72 C3               [12] 3829 	clr	c
      000D73 95 4E            [12] 3830 	subb	a,_THRUST_PW
      000D75 F5 50            [12] 3831 	mov	_TRST_lo_to_hi,a
      000D77 74 FF            [12] 3832 	mov	a,#0xFF
      000D79 95 4F            [12] 3833 	subb	a,(_THRUST_PW + 1)
      000D7B F5 51            [12] 3834 	mov	(_TRST_lo_to_hi + 1),a
                           000C95  3835 	C$lab6.c$401$3$176 ==.
                                   3836 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:401: PCA0CP2 = TRST_lo_to_hi;
      000D7D 85 50 EC         [24] 3837 	mov	((_PCA0CP2 >> 0) & 0xFF),_TRST_lo_to_hi
      000D80 85 51 FC         [24] 3838 	mov	((_PCA0CP2 >> 8) & 0xFF),(_TRST_lo_to_hi + 1)
                           000C9B  3839 	C$lab6.c$402$3$176 ==.
                                   3840 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:402: if (times == 0 )
      000D83 EC               [12] 3841 	mov	a,r4
      000D84 4D               [12] 3842 	orl	a,r5
      000D85 60 03            [24] 3843 	jz	00210$
      000D87 02 0E 09         [24] 3844 	ljmp	00141$
      000D8A                       3845 00210$:
                           000CA2  3846 	C$lab6.c$404$4$177 ==.
                                   3847 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:404: if (value ==0)
      000D8A EE               [12] 3848 	mov	a,r6
      000D8B 4F               [12] 3849 	orl	a,r7
      000D8C 70 23            [24] 3850 	jnz	00108$
                           000CA6  3851 	C$lab6.c$406$5$178 ==.
                                   3852 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:406: lcd_print("Now calibrating Min_PW");
      000D8E C0 05            [24] 3853 	push	ar5
      000D90 C0 04            [24] 3854 	push	ar4
      000D92 74 47            [12] 3855 	mov	a,#___str_17
      000D94 C0 E0            [24] 3856 	push	acc
      000D96 74 1F            [12] 3857 	mov	a,#(___str_17 >> 8)
      000D98 C0 E0            [24] 3858 	push	acc
      000D9A 74 80            [12] 3859 	mov	a,#0x80
      000D9C C0 E0            [24] 3860 	push	acc
      000D9E 12 01 44         [24] 3861 	lcall	_lcd_print
      000DA1 15 81            [12] 3862 	dec	sp
      000DA3 15 81            [12] 3863 	dec	sp
      000DA5 15 81            [12] 3864 	dec	sp
      000DA7 D0 04            [24] 3865 	pop	ar4
      000DA9 D0 05            [24] 3866 	pop	ar5
                           000CC3  3867 	C$lab6.c$407$5$178 ==.
                                   3868 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:407: RUDDER_PW = PW_MIN_THRUST;
      000DAB 85 34 46         [24] 3869 	mov	_RUDDER_PW,_PW_MIN_THRUST
      000DAE 85 35 47         [24] 3870 	mov	(_RUDDER_PW + 1),(_PW_MIN_THRUST + 1)
      000DB1                       3871 00108$:
                           000CC9  3872 	C$lab6.c$409$4$177 ==.
                                   3873 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:409: value = kpd_input(1);
      000DB1 75 82 01         [24] 3874 	mov	dpl,#0x01
      000DB4 C0 05            [24] 3875 	push	ar5
      000DB6 C0 04            [24] 3876 	push	ar4
      000DB8 12 02 81         [24] 3877 	lcall	_kpd_input
      000DBB AE 82            [24] 3878 	mov	r6,dpl
      000DBD AF 83            [24] 3879 	mov	r7,dph
      000DBF D0 04            [24] 3880 	pop	ar4
      000DC1 D0 05            [24] 3881 	pop	ar5
                           000CDB  3882 	C$lab6.c$410$4$177 ==.
                                   3883 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:410: if (value == 1)
      000DC3 BE 01 12         [24] 3884 	cjne	r6,#0x01,00115$
      000DC6 BF 00 0F         [24] 3885 	cjne	r7,#0x00,00115$
                           000CE1  3886 	C$lab6.c$412$5$179 ==.
                                   3887 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:412: THRUST_PW -= 10;
      000DC9 E5 4E            [12] 3888 	mov	a,_THRUST_PW
      000DCB 24 F6            [12] 3889 	add	a,#0xF6
      000DCD F5 4E            [12] 3890 	mov	_THRUST_PW,a
      000DCF E5 4F            [12] 3891 	mov	a,(_THRUST_PW + 1)
      000DD1 34 FF            [12] 3892 	addc	a,#0xFF
      000DD3 F5 4F            [12] 3893 	mov	(_THRUST_PW + 1),a
      000DD5 02 0D 47         [24] 3894 	ljmp	00144$
      000DD8                       3895 00115$:
                           000CF0  3896 	C$lab6.c$414$4$177 ==.
                                   3897 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:414: else if (value==2)
      000DD8 BE 02 11         [24] 3898 	cjne	r6,#0x02,00112$
      000DDB BF 00 0E         [24] 3899 	cjne	r7,#0x00,00112$
                           000CF6  3900 	C$lab6.c$416$5$180 ==.
                                   3901 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:416: THRUST_PW += 10;
      000DDE 74 0A            [12] 3902 	mov	a,#0x0A
      000DE0 25 4E            [12] 3903 	add	a,_THRUST_PW
      000DE2 F5 4E            [12] 3904 	mov	_THRUST_PW,a
      000DE4 E4               [12] 3905 	clr	a
      000DE5 35 4F            [12] 3906 	addc	a,(_THRUST_PW + 1)
      000DE7 F5 4F            [12] 3907 	mov	(_THRUST_PW + 1),a
      000DE9 02 0D 47         [24] 3908 	ljmp	00144$
      000DEC                       3909 00112$:
                           000D04  3910 	C$lab6.c$418$4$177 ==.
                                   3911 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:418: else if (value == 3)
      000DEC BE 03 05         [24] 3912 	cjne	r6,#0x03,00216$
      000DEF BF 00 02         [24] 3913 	cjne	r7,#0x00,00216$
      000DF2 80 03            [24] 3914 	sjmp	00217$
      000DF4                       3915 00216$:
      000DF4 02 0D 47         [24] 3916 	ljmp	00144$
      000DF7                       3917 00217$:
                           000D0F  3918 	C$lab6.c$420$5$181 ==.
                                   3919 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:420: times++;
      000DF7 0C               [12] 3920 	inc	r4
      000DF8 BC 00 01         [24] 3921 	cjne	r4,#0x00,00218$
      000DFB 0D               [12] 3922 	inc	r5
      000DFC                       3923 00218$:
                           000D14  3924 	C$lab6.c$421$5$181 ==.
                                   3925 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:421: value =0;
      000DFC 7E 00            [12] 3926 	mov	r6,#0x00
      000DFE 7F 00            [12] 3927 	mov	r7,#0x00
                           000D18  3928 	C$lab6.c$422$5$181 ==.
                                   3929 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:422: PW_MIN_THRUST = THRUST_PW;
      000E00 85 4E 34         [24] 3930 	mov	_PW_MIN_THRUST,_THRUST_PW
      000E03 85 4F 35         [24] 3931 	mov	(_PW_MIN_THRUST + 1),(_THRUST_PW + 1)
      000E06 02 0D 47         [24] 3932 	ljmp	00144$
      000E09                       3933 00141$:
                           000D21  3934 	C$lab6.c$425$3$176 ==.
                                   3935 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:425: else if (times ==1)
      000E09 BC 01 05         [24] 3936 	cjne	r4,#0x01,00219$
      000E0C BD 00 02         [24] 3937 	cjne	r5,#0x00,00219$
      000E0F 80 03            [24] 3938 	sjmp	00220$
      000E11                       3939 00219$:
      000E11 02 0E 93         [24] 3940 	ljmp	00138$
      000E14                       3941 00220$:
                           000D2C  3942 	C$lab6.c$427$4$182 ==.
                                   3943 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:427: if (value ==0)
      000E14 EE               [12] 3944 	mov	a,r6
      000E15 4F               [12] 3945 	orl	a,r7
      000E16 70 23            [24] 3946 	jnz	00118$
                           000D30  3947 	C$lab6.c$429$5$183 ==.
                                   3948 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:429: lcd_print("Now calibrating Cen_PW");
      000E18 C0 05            [24] 3949 	push	ar5
      000E1A C0 04            [24] 3950 	push	ar4
      000E1C 74 B2            [12] 3951 	mov	a,#___str_11
      000E1E C0 E0            [24] 3952 	push	acc
      000E20 74 1E            [12] 3953 	mov	a,#(___str_11 >> 8)
      000E22 C0 E0            [24] 3954 	push	acc
      000E24 74 80            [12] 3955 	mov	a,#0x80
      000E26 C0 E0            [24] 3956 	push	acc
      000E28 12 01 44         [24] 3957 	lcall	_lcd_print
      000E2B 15 81            [12] 3958 	dec	sp
      000E2D 15 81            [12] 3959 	dec	sp
      000E2F 15 81            [12] 3960 	dec	sp
      000E31 D0 04            [24] 3961 	pop	ar4
      000E33 D0 05            [24] 3962 	pop	ar5
                           000D4D  3963 	C$lab6.c$430$5$183 ==.
                                   3964 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:430: RUDDER_PW = PW_NUET_THRUST;
      000E35 85 36 46         [24] 3965 	mov	_RUDDER_PW,_PW_NUET_THRUST
      000E38 85 37 47         [24] 3966 	mov	(_RUDDER_PW + 1),(_PW_NUET_THRUST + 1)
      000E3B                       3967 00118$:
                           000D53  3968 	C$lab6.c$432$4$182 ==.
                                   3969 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:432: value = kpd_input(1);
      000E3B 75 82 01         [24] 3970 	mov	dpl,#0x01
      000E3E C0 05            [24] 3971 	push	ar5
      000E40 C0 04            [24] 3972 	push	ar4
      000E42 12 02 81         [24] 3973 	lcall	_kpd_input
      000E45 AE 82            [24] 3974 	mov	r6,dpl
      000E47 AF 83            [24] 3975 	mov	r7,dph
      000E49 D0 04            [24] 3976 	pop	ar4
      000E4B D0 05            [24] 3977 	pop	ar5
                           000D65  3978 	C$lab6.c$433$4$182 ==.
                                   3979 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:433: if (value == 1)
      000E4D BE 01 12         [24] 3980 	cjne	r6,#0x01,00125$
      000E50 BF 00 0F         [24] 3981 	cjne	r7,#0x00,00125$
                           000D6B  3982 	C$lab6.c$435$5$184 ==.
                                   3983 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:435: THRUST_PW -= 10;
      000E53 E5 4E            [12] 3984 	mov	a,_THRUST_PW
      000E55 24 F6            [12] 3985 	add	a,#0xF6
      000E57 F5 4E            [12] 3986 	mov	_THRUST_PW,a
      000E59 E5 4F            [12] 3987 	mov	a,(_THRUST_PW + 1)
      000E5B 34 FF            [12] 3988 	addc	a,#0xFF
      000E5D F5 4F            [12] 3989 	mov	(_THRUST_PW + 1),a
      000E5F 02 0D 47         [24] 3990 	ljmp	00144$
      000E62                       3991 00125$:
                           000D7A  3992 	C$lab6.c$437$4$182 ==.
                                   3993 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:437: else if (value==2)
      000E62 BE 02 11         [24] 3994 	cjne	r6,#0x02,00122$
      000E65 BF 00 0E         [24] 3995 	cjne	r7,#0x00,00122$
                           000D80  3996 	C$lab6.c$439$5$185 ==.
                                   3997 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:439: THRUST_PW += 10;
      000E68 74 0A            [12] 3998 	mov	a,#0x0A
      000E6A 25 4E            [12] 3999 	add	a,_THRUST_PW
      000E6C F5 4E            [12] 4000 	mov	_THRUST_PW,a
      000E6E E4               [12] 4001 	clr	a
      000E6F 35 4F            [12] 4002 	addc	a,(_THRUST_PW + 1)
      000E71 F5 4F            [12] 4003 	mov	(_THRUST_PW + 1),a
      000E73 02 0D 47         [24] 4004 	ljmp	00144$
      000E76                       4005 00122$:
                           000D8E  4006 	C$lab6.c$441$4$182 ==.
                                   4007 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:441: else if (value == 3)
      000E76 BE 03 05         [24] 4008 	cjne	r6,#0x03,00226$
      000E79 BF 00 02         [24] 4009 	cjne	r7,#0x00,00226$
      000E7C 80 03            [24] 4010 	sjmp	00227$
      000E7E                       4011 00226$:
      000E7E 02 0D 47         [24] 4012 	ljmp	00144$
      000E81                       4013 00227$:
                           000D99  4014 	C$lab6.c$443$5$186 ==.
                                   4015 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:443: times++;
      000E81 0C               [12] 4016 	inc	r4
      000E82 BC 00 01         [24] 4017 	cjne	r4,#0x00,00228$
      000E85 0D               [12] 4018 	inc	r5
      000E86                       4019 00228$:
                           000D9E  4020 	C$lab6.c$444$5$186 ==.
                                   4021 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:444: value=0;
      000E86 7E 00            [12] 4022 	mov	r6,#0x00
      000E88 7F 00            [12] 4023 	mov	r7,#0x00
                           000DA2  4024 	C$lab6.c$445$5$186 ==.
                                   4025 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:445: PW_NUET_THRUST = RUDDER_PW;
      000E8A 85 46 36         [24] 4026 	mov	_PW_NUET_THRUST,_RUDDER_PW
      000E8D 85 47 37         [24] 4027 	mov	(_PW_NUET_THRUST + 1),(_RUDDER_PW + 1)
      000E90 02 0D 47         [24] 4028 	ljmp	00144$
      000E93                       4029 00138$:
                           000DAB  4030 	C$lab6.c$450$4$187 ==.
                                   4031 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:450: if (value==0)
      000E93 EE               [12] 4032 	mov	a,r6
      000E94 4F               [12] 4033 	orl	a,r7
      000E95 70 23            [24] 4034 	jnz	00128$
                           000DAF  4035 	C$lab6.c$452$5$188 ==.
                                   4036 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:452: lcd_print("Now calibrating Max_PW");
      000E97 C0 05            [24] 4037 	push	ar5
      000E99 C0 04            [24] 4038 	push	ar4
      000E9B 74 C9            [12] 4039 	mov	a,#___str_12
      000E9D C0 E0            [24] 4040 	push	acc
      000E9F 74 1E            [12] 4041 	mov	a,#(___str_12 >> 8)
      000EA1 C0 E0            [24] 4042 	push	acc
      000EA3 74 80            [12] 4043 	mov	a,#0x80
      000EA5 C0 E0            [24] 4044 	push	acc
      000EA7 12 01 44         [24] 4045 	lcall	_lcd_print
      000EAA 15 81            [12] 4046 	dec	sp
      000EAC 15 81            [12] 4047 	dec	sp
      000EAE 15 81            [12] 4048 	dec	sp
      000EB0 D0 04            [24] 4049 	pop	ar4
      000EB2 D0 05            [24] 4050 	pop	ar5
                           000DCC  4051 	C$lab6.c$453$5$188 ==.
                                   4052 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:453: THRUST_PW = PW_MAX_THRUST;
      000EB4 85 38 4E         [24] 4053 	mov	_THRUST_PW,_PW_MAX_THRUST
      000EB7 85 39 4F         [24] 4054 	mov	(_THRUST_PW + 1),(_PW_MAX_THRUST + 1)
      000EBA                       4055 00128$:
                           000DD2  4056 	C$lab6.c$455$4$187 ==.
                                   4057 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:455: value = kpd_input(1);
      000EBA 75 82 01         [24] 4058 	mov	dpl,#0x01
      000EBD C0 05            [24] 4059 	push	ar5
      000EBF C0 04            [24] 4060 	push	ar4
      000EC1 12 02 81         [24] 4061 	lcall	_kpd_input
      000EC4 AE 82            [24] 4062 	mov	r6,dpl
      000EC6 AF 83            [24] 4063 	mov	r7,dph
      000EC8 D0 04            [24] 4064 	pop	ar4
      000ECA D0 05            [24] 4065 	pop	ar5
                           000DE4  4066 	C$lab6.c$456$4$187 ==.
                                   4067 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:456: if (value == 1)
      000ECC BE 01 12         [24] 4068 	cjne	r6,#0x01,00135$
      000ECF BF 00 0F         [24] 4069 	cjne	r7,#0x00,00135$
                           000DEA  4070 	C$lab6.c$458$5$189 ==.
                                   4071 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:458: THRUST_PW -= 10;
      000ED2 E5 4E            [12] 4072 	mov	a,_THRUST_PW
      000ED4 24 F6            [12] 4073 	add	a,#0xF6
      000ED6 F5 4E            [12] 4074 	mov	_THRUST_PW,a
      000ED8 E5 4F            [12] 4075 	mov	a,(_THRUST_PW + 1)
      000EDA 34 FF            [12] 4076 	addc	a,#0xFF
      000EDC F5 4F            [12] 4077 	mov	(_THRUST_PW + 1),a
      000EDE 02 0D 47         [24] 4078 	ljmp	00144$
      000EE1                       4079 00135$:
                           000DF9  4080 	C$lab6.c$460$4$187 ==.
                                   4081 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:460: else if (value==2)
      000EE1 BE 02 11         [24] 4082 	cjne	r6,#0x02,00132$
      000EE4 BF 00 0E         [24] 4083 	cjne	r7,#0x00,00132$
                           000DFF  4084 	C$lab6.c$462$5$190 ==.
                                   4085 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:462: THRUST_PW += 10;
      000EE7 74 0A            [12] 4086 	mov	a,#0x0A
      000EE9 25 4E            [12] 4087 	add	a,_THRUST_PW
      000EEB F5 4E            [12] 4088 	mov	_THRUST_PW,a
      000EED E4               [12] 4089 	clr	a
      000EEE 35 4F            [12] 4090 	addc	a,(_THRUST_PW + 1)
      000EF0 F5 4F            [12] 4091 	mov	(_THRUST_PW + 1),a
      000EF2 02 0D 47         [24] 4092 	ljmp	00144$
      000EF5                       4093 00132$:
                           000E0D  4094 	C$lab6.c$464$4$187 ==.
                                   4095 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:464: else if (value == 3)
      000EF5 BE 03 05         [24] 4096 	cjne	r6,#0x03,00234$
      000EF8 BF 00 02         [24] 4097 	cjne	r7,#0x00,00234$
      000EFB 80 03            [24] 4098 	sjmp	00235$
      000EFD                       4099 00234$:
      000EFD 02 0D 47         [24] 4100 	ljmp	00144$
      000F00                       4101 00235$:
                           000E18  4102 	C$lab6.c$466$5$191 ==.
                                   4103 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:466: PW_MAX_THRUST = THRUST_PW;
      000F00 85 4E 38         [24] 4104 	mov	_PW_MAX_THRUST,_THRUST_PW
      000F03 85 4F 39         [24] 4105 	mov	(_PW_MAX_THRUST + 1),(_THRUST_PW + 1)
                           000E1E  4106 	C$lab6.c$467$5$191 ==.
                                   4107 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:467: return;
                           000E1E  4108 	C$lab6.c$472$1$174 ==.
                           000E1E  4109 	XG$Thrust_cal$0$0 ==.
      000F06 22               [24] 4110 	ret
                                   4111 ;------------------------------------------------------------
                                   4112 ;Allocation info for local variables in function 'Steering_Servo'
                                   4113 ;------------------------------------------------------------
                                   4114 ;direction                 Allocated with name '_Steering_Servo_direction_1_192'
                                   4115 ;------------------------------------------------------------
                           000E1F  4116 	G$Steering_Servo$0$0 ==.
                           000E1F  4117 	C$lab6.c$475$1$174 ==.
                                   4118 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:475: void Steering_Servo(unsigned int direction)
                                   4119 ;	-----------------------------------------
                                   4120 ;	 function Steering_Servo
                                   4121 ;	-----------------------------------------
      000F07                       4122 _Steering_Servo:
      000F07 85 82 5C         [24] 4123 	mov	_Steering_Servo_direction_1_192,dpl
      000F0A 85 83 5D         [24] 4124 	mov	(_Steering_Servo_direction_1_192 + 1),dph
                           000E25  4125 	C$lab6.c$479$1$193 ==.
                                   4126 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:479: if (direction < 1800)               /////IF FACING OPPOSITE DIRECTION, TURN LEFT
      000F0D C3               [12] 4127 	clr	c
      000F0E E5 5C            [12] 4128 	mov	a,_Steering_Servo_direction_1_192
      000F10 94 08            [12] 4129 	subb	a,#0x08
      000F12 E5 5D            [12] 4130 	mov	a,(_Steering_Servo_direction_1_192 + 1)
      000F14 94 07            [12] 4131 	subb	a,#0x07
      000F16 40 03            [24] 4132 	jc	00128$
      000F18 02 10 65         [24] 4133 	ljmp	00112$
      000F1B                       4134 00128$:
                           000E33  4135 	C$lab6.c$481$1$193 ==.
                                   4136 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:481: if (RUDDER_PW <= PW_CENTER_RUDDER - (float)(direction)/4.2)   ///MAKES RATIO TO SMOOTHLY TURN
      000F1B 85 5C 82         [24] 4137 	mov	dpl,_Steering_Servo_direction_1_192
      000F1E 85 5D 83         [24] 4138 	mov	dph,(_Steering_Servo_direction_1_192 + 1)
      000F21 12 14 FB         [24] 4139 	lcall	___uint2fs
      000F24 AA 82            [24] 4140 	mov	r2,dpl
      000F26 AB 83            [24] 4141 	mov	r3,dph
      000F28 AC F0            [24] 4142 	mov	r4,b
      000F2A FD               [12] 4143 	mov	r5,a
      000F2B 74 66            [12] 4144 	mov	a,#0x66
      000F2D C0 E0            [24] 4145 	push	acc
      000F2F C0 E0            [24] 4146 	push	acc
      000F31 74 86            [12] 4147 	mov	a,#0x86
      000F33 C0 E0            [24] 4148 	push	acc
      000F35 74 40            [12] 4149 	mov	a,#0x40
      000F37 C0 E0            [24] 4150 	push	acc
      000F39 8A 82            [24] 4151 	mov	dpl,r2
      000F3B 8B 83            [24] 4152 	mov	dph,r3
      000F3D 8C F0            [24] 4153 	mov	b,r4
      000F3F ED               [12] 4154 	mov	a,r5
      000F40 12 1B 93         [24] 4155 	lcall	___fsdiv
      000F43 AA 82            [24] 4156 	mov	r2,dpl
      000F45 AB 83            [24] 4157 	mov	r3,dph
      000F47 AC F0            [24] 4158 	mov	r4,b
      000F49 FD               [12] 4159 	mov	r5,a
      000F4A E5 81            [12] 4160 	mov	a,sp
      000F4C 24 FC            [12] 4161 	add	a,#0xfc
      000F4E F5 81            [12] 4162 	mov	sp,a
      000F50 85 3C 82         [24] 4163 	mov	dpl,_PW_CENTER_RUDDER
      000F53 85 3D 83         [24] 4164 	mov	dph,(_PW_CENTER_RUDDER + 1)
      000F56 C0 05            [24] 4165 	push	ar5
      000F58 C0 04            [24] 4166 	push	ar4
      000F5A C0 03            [24] 4167 	push	ar3
      000F5C C0 02            [24] 4168 	push	ar2
      000F5E 12 14 FB         [24] 4169 	lcall	___uint2fs
      000F61 A8 82            [24] 4170 	mov	r0,dpl
      000F63 A9 83            [24] 4171 	mov	r1,dph
      000F65 AE F0            [24] 4172 	mov	r6,b
      000F67 FF               [12] 4173 	mov	r7,a
      000F68 D0 02            [24] 4174 	pop	ar2
      000F6A D0 03            [24] 4175 	pop	ar3
      000F6C D0 04            [24] 4176 	pop	ar4
      000F6E D0 05            [24] 4177 	pop	ar5
      000F70 C0 02            [24] 4178 	push	ar2
      000F72 C0 03            [24] 4179 	push	ar3
      000F74 C0 04            [24] 4180 	push	ar4
      000F76 C0 05            [24] 4181 	push	ar5
      000F78 88 82            [24] 4182 	mov	dpl,r0
      000F7A 89 83            [24] 4183 	mov	dph,r1
      000F7C 8E F0            [24] 4184 	mov	b,r6
      000F7E EF               [12] 4185 	mov	a,r7
      000F7F 12 12 6E         [24] 4186 	lcall	___fssub
      000F82 AC 82            [24] 4187 	mov	r4,dpl
      000F84 AD 83            [24] 4188 	mov	r5,dph
      000F86 AE F0            [24] 4189 	mov	r6,b
      000F88 FF               [12] 4190 	mov	r7,a
      000F89 E5 81            [12] 4191 	mov	a,sp
      000F8B 24 FC            [12] 4192 	add	a,#0xfc
      000F8D F5 81            [12] 4193 	mov	sp,a
      000F8F 85 46 82         [24] 4194 	mov	dpl,_RUDDER_PW
      000F92 85 47 83         [24] 4195 	mov	dph,(_RUDDER_PW + 1)
      000F95 C0 07            [24] 4196 	push	ar7
      000F97 C0 06            [24] 4197 	push	ar6
      000F99 C0 05            [24] 4198 	push	ar5
      000F9B C0 04            [24] 4199 	push	ar4
      000F9D 12 14 FB         [24] 4200 	lcall	___uint2fs
      000FA0 A8 82            [24] 4201 	mov	r0,dpl
      000FA2 A9 83            [24] 4202 	mov	r1,dph
      000FA4 AA F0            [24] 4203 	mov	r2,b
      000FA6 FB               [12] 4204 	mov	r3,a
      000FA7 D0 04            [24] 4205 	pop	ar4
      000FA9 D0 05            [24] 4206 	pop	ar5
      000FAB D0 06            [24] 4207 	pop	ar6
      000FAD D0 07            [24] 4208 	pop	ar7
      000FAF C0 04            [24] 4209 	push	ar4
      000FB1 C0 05            [24] 4210 	push	ar5
      000FB3 C0 06            [24] 4211 	push	ar6
      000FB5 C0 07            [24] 4212 	push	ar7
      000FB7 88 82            [24] 4213 	mov	dpl,r0
      000FB9 89 83            [24] 4214 	mov	dph,r1
      000FBB 8A F0            [24] 4215 	mov	b,r2
      000FBD EB               [12] 4216 	mov	a,r3
      000FBE 12 12 79         [24] 4217 	lcall	___fsgt
      000FC1 AF 82            [24] 4218 	mov	r7,dpl
      000FC3 E5 81            [12] 4219 	mov	a,sp
      000FC5 24 FC            [12] 4220 	add	a,#0xfc
      000FC7 F5 81            [12] 4221 	mov	sp,a
      000FC9 EF               [12] 4222 	mov	a,r7
      000FCA 60 03            [24] 4223 	jz	00129$
      000FCC 02 10 56         [24] 4224 	ljmp	00102$
      000FCF                       4225 00129$:
                           000EE7  4226 	C$lab6.c$483$1$193 ==.
                                   4227 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:483: RUDDER_PW = PW_CENTER_RUDDER - (float)(direction)/4.2;
      000FCF 85 5C 82         [24] 4228 	mov	dpl,_Steering_Servo_direction_1_192
      000FD2 85 5D 83         [24] 4229 	mov	dph,(_Steering_Servo_direction_1_192 + 1)
      000FD5 12 14 FB         [24] 4230 	lcall	___uint2fs
      000FD8 AC 82            [24] 4231 	mov	r4,dpl
      000FDA AD 83            [24] 4232 	mov	r5,dph
      000FDC AE F0            [24] 4233 	mov	r6,b
      000FDE FF               [12] 4234 	mov	r7,a
      000FDF 74 66            [12] 4235 	mov	a,#0x66
      000FE1 C0 E0            [24] 4236 	push	acc
      000FE3 C0 E0            [24] 4237 	push	acc
      000FE5 74 86            [12] 4238 	mov	a,#0x86
      000FE7 C0 E0            [24] 4239 	push	acc
      000FE9 74 40            [12] 4240 	mov	a,#0x40
      000FEB C0 E0            [24] 4241 	push	acc
      000FED 8C 82            [24] 4242 	mov	dpl,r4
      000FEF 8D 83            [24] 4243 	mov	dph,r5
      000FF1 8E F0            [24] 4244 	mov	b,r6
      000FF3 EF               [12] 4245 	mov	a,r7
      000FF4 12 1B 93         [24] 4246 	lcall	___fsdiv
      000FF7 AC 82            [24] 4247 	mov	r4,dpl
      000FF9 AD 83            [24] 4248 	mov	r5,dph
      000FFB AE F0            [24] 4249 	mov	r6,b
      000FFD FF               [12] 4250 	mov	r7,a
      000FFE E5 81            [12] 4251 	mov	a,sp
      001000 24 FC            [12] 4252 	add	a,#0xfc
      001002 F5 81            [12] 4253 	mov	sp,a
      001004 85 3C 82         [24] 4254 	mov	dpl,_PW_CENTER_RUDDER
      001007 85 3D 83         [24] 4255 	mov	dph,(_PW_CENTER_RUDDER + 1)
      00100A C0 07            [24] 4256 	push	ar7
      00100C C0 06            [24] 4257 	push	ar6
      00100E C0 05            [24] 4258 	push	ar5
      001010 C0 04            [24] 4259 	push	ar4
      001012 12 14 FB         [24] 4260 	lcall	___uint2fs
      001015 A8 82            [24] 4261 	mov	r0,dpl
      001017 A9 83            [24] 4262 	mov	r1,dph
      001019 AA F0            [24] 4263 	mov	r2,b
      00101B FB               [12] 4264 	mov	r3,a
      00101C D0 04            [24] 4265 	pop	ar4
      00101E D0 05            [24] 4266 	pop	ar5
      001020 D0 06            [24] 4267 	pop	ar6
      001022 D0 07            [24] 4268 	pop	ar7
      001024 C0 04            [24] 4269 	push	ar4
      001026 C0 05            [24] 4270 	push	ar5
      001028 C0 06            [24] 4271 	push	ar6
      00102A C0 07            [24] 4272 	push	ar7
      00102C 88 82            [24] 4273 	mov	dpl,r0
      00102E 89 83            [24] 4274 	mov	dph,r1
      001030 8A F0            [24] 4275 	mov	b,r2
      001032 EB               [12] 4276 	mov	a,r3
      001033 12 12 6E         [24] 4277 	lcall	___fssub
      001036 AC 82            [24] 4278 	mov	r4,dpl
      001038 AD 83            [24] 4279 	mov	r5,dph
      00103A AE F0            [24] 4280 	mov	r6,b
      00103C FF               [12] 4281 	mov	r7,a
      00103D E5 81            [12] 4282 	mov	a,sp
      00103F 24 FC            [12] 4283 	add	a,#0xfc
      001041 F5 81            [12] 4284 	mov	sp,a
      001043 8C 82            [24] 4285 	mov	dpl,r4
      001045 8D 83            [24] 4286 	mov	dph,r5
      001047 8E F0            [24] 4287 	mov	b,r6
      001049 EF               [12] 4288 	mov	a,r7
      00104A 12 15 07         [24] 4289 	lcall	___fs2uint
      00104D 85 82 46         [24] 4290 	mov	_RUDDER_PW,dpl
      001050 85 83 47         [24] 4291 	mov	(_RUDDER_PW + 1),dph
      001053 02 11 CF         [24] 4292 	ljmp	00113$
      001056                       4293 00102$:
                           000F6E  4294 	C$lab6.c$487$3$196 ==.
                                   4295 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:487: RUDDER_PW -= 10;
      001056 E5 46            [12] 4296 	mov	a,_RUDDER_PW
      001058 24 F6            [12] 4297 	add	a,#0xF6
      00105A F5 46            [12] 4298 	mov	_RUDDER_PW,a
      00105C E5 47            [12] 4299 	mov	a,(_RUDDER_PW + 1)
      00105E 34 FF            [12] 4300 	addc	a,#0xFF
      001060 F5 47            [12] 4301 	mov	(_RUDDER_PW + 1),a
      001062 02 11 CF         [24] 4302 	ljmp	00113$
      001065                       4303 00112$:
                           000F7D  4304 	C$lab6.c$490$1$193 ==.
                                   4305 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:490: else if ( direction == 0 || direction ==3600)       ///GO STRAIGHT
      001065 E5 5C            [12] 4306 	mov	a,_Steering_Servo_direction_1_192
      001067 45 5D            [12] 4307 	orl	a,(_Steering_Servo_direction_1_192 + 1)
      001069 60 0A            [24] 4308 	jz	00107$
      00106B 74 10            [12] 4309 	mov	a,#0x10
      00106D B5 5C 0E         [24] 4310 	cjne	a,_Steering_Servo_direction_1_192,00108$
      001070 74 0E            [12] 4311 	mov	a,#0x0E
      001072 B5 5D 09         [24] 4312 	cjne	a,(_Steering_Servo_direction_1_192 + 1),00108$
      001075                       4313 00107$:
                           000F8D  4314 	C$lab6.c$492$2$197 ==.
                                   4315 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:492: RUDDER_PW=PW_CENTER_RUDDER;
      001075 85 3C 46         [24] 4316 	mov	_RUDDER_PW,_PW_CENTER_RUDDER
      001078 85 3D 47         [24] 4317 	mov	(_RUDDER_PW + 1),(_PW_CENTER_RUDDER + 1)
      00107B 02 11 CF         [24] 4318 	ljmp	00113$
      00107E                       4319 00108$:
                           000F96  4320 	C$lab6.c$496$2$198 ==.
                                   4321 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:496: if (RUDDER_PW >= PW_CENTER_RUDDER + (float)(3600-direction)/1.9)
      00107E 74 10            [12] 4322 	mov	a,#0x10
      001080 C3               [12] 4323 	clr	c
      001081 95 5C            [12] 4324 	subb	a,_Steering_Servo_direction_1_192
      001083 F5 82            [12] 4325 	mov	dpl,a
      001085 74 0E            [12] 4326 	mov	a,#0x0E
      001087 95 5D            [12] 4327 	subb	a,(_Steering_Servo_direction_1_192 + 1)
      001089 F5 83            [12] 4328 	mov	dph,a
      00108B 12 14 FB         [24] 4329 	lcall	___uint2fs
      00108E AC 82            [24] 4330 	mov	r4,dpl
      001090 AD 83            [24] 4331 	mov	r5,dph
      001092 AE F0            [24] 4332 	mov	r6,b
      001094 FF               [12] 4333 	mov	r7,a
      001095 74 33            [12] 4334 	mov	a,#0x33
      001097 C0 E0            [24] 4335 	push	acc
      001099 C0 E0            [24] 4336 	push	acc
      00109B 74 F3            [12] 4337 	mov	a,#0xF3
      00109D C0 E0            [24] 4338 	push	acc
      00109F C4               [12] 4339 	swap	a
      0010A0 C0 E0            [24] 4340 	push	acc
      0010A2 8C 82            [24] 4341 	mov	dpl,r4
      0010A4 8D 83            [24] 4342 	mov	dph,r5
      0010A6 8E F0            [24] 4343 	mov	b,r6
      0010A8 EF               [12] 4344 	mov	a,r7
      0010A9 12 1B 93         [24] 4345 	lcall	___fsdiv
      0010AC AC 82            [24] 4346 	mov	r4,dpl
      0010AE AD 83            [24] 4347 	mov	r5,dph
      0010B0 AE F0            [24] 4348 	mov	r6,b
      0010B2 FF               [12] 4349 	mov	r7,a
      0010B3 E5 81            [12] 4350 	mov	a,sp
      0010B5 24 FC            [12] 4351 	add	a,#0xfc
      0010B7 F5 81            [12] 4352 	mov	sp,a
      0010B9 85 3C 82         [24] 4353 	mov	dpl,_PW_CENTER_RUDDER
      0010BC 85 3D 83         [24] 4354 	mov	dph,(_PW_CENTER_RUDDER + 1)
      0010BF C0 07            [24] 4355 	push	ar7
      0010C1 C0 06            [24] 4356 	push	ar6
      0010C3 C0 05            [24] 4357 	push	ar5
      0010C5 C0 04            [24] 4358 	push	ar4
      0010C7 12 14 FB         [24] 4359 	lcall	___uint2fs
      0010CA A8 82            [24] 4360 	mov	r0,dpl
      0010CC A9 83            [24] 4361 	mov	r1,dph
      0010CE AA F0            [24] 4362 	mov	r2,b
      0010D0 FB               [12] 4363 	mov	r3,a
      0010D1 D0 04            [24] 4364 	pop	ar4
      0010D3 D0 05            [24] 4365 	pop	ar5
      0010D5 D0 06            [24] 4366 	pop	ar6
      0010D7 D0 07            [24] 4367 	pop	ar7
      0010D9 C0 04            [24] 4368 	push	ar4
      0010DB C0 05            [24] 4369 	push	ar5
      0010DD C0 06            [24] 4370 	push	ar6
      0010DF C0 07            [24] 4371 	push	ar7
      0010E1 88 82            [24] 4372 	mov	dpl,r0
      0010E3 89 83            [24] 4373 	mov	dph,r1
      0010E5 8A F0            [24] 4374 	mov	b,r2
      0010E7 EB               [12] 4375 	mov	a,r3
      0010E8 12 14 59         [24] 4376 	lcall	___fsadd
      0010EB AC 82            [24] 4377 	mov	r4,dpl
      0010ED AD 83            [24] 4378 	mov	r5,dph
      0010EF AE F0            [24] 4379 	mov	r6,b
      0010F1 FF               [12] 4380 	mov	r7,a
      0010F2 E5 81            [12] 4381 	mov	a,sp
      0010F4 24 FC            [12] 4382 	add	a,#0xfc
      0010F6 F5 81            [12] 4383 	mov	sp,a
      0010F8 85 46 82         [24] 4384 	mov	dpl,_RUDDER_PW
      0010FB 85 47 83         [24] 4385 	mov	dph,(_RUDDER_PW + 1)
      0010FE C0 07            [24] 4386 	push	ar7
      001100 C0 06            [24] 4387 	push	ar6
      001102 C0 05            [24] 4388 	push	ar5
      001104 C0 04            [24] 4389 	push	ar4
      001106 12 14 FB         [24] 4390 	lcall	___uint2fs
      001109 A8 82            [24] 4391 	mov	r0,dpl
      00110B A9 83            [24] 4392 	mov	r1,dph
      00110D AA F0            [24] 4393 	mov	r2,b
      00110F FB               [12] 4394 	mov	r3,a
      001110 D0 04            [24] 4395 	pop	ar4
      001112 D0 05            [24] 4396 	pop	ar5
      001114 D0 06            [24] 4397 	pop	ar6
      001116 D0 07            [24] 4398 	pop	ar7
      001118 C0 04            [24] 4399 	push	ar4
      00111A C0 05            [24] 4400 	push	ar5
      00111C C0 06            [24] 4401 	push	ar6
      00111E C0 07            [24] 4402 	push	ar7
      001120 88 82            [24] 4403 	mov	dpl,r0
      001122 89 83            [24] 4404 	mov	dph,r1
      001124 8A F0            [24] 4405 	mov	b,r2
      001126 EB               [12] 4406 	mov	a,r3
      001127 12 12 C4         [24] 4407 	lcall	___fslt
      00112A AF 82            [24] 4408 	mov	r7,dpl
      00112C E5 81            [12] 4409 	mov	a,sp
      00112E 24 FC            [12] 4410 	add	a,#0xfc
      001130 F5 81            [12] 4411 	mov	sp,a
      001132 EF               [12] 4412 	mov	a,r7
      001133 60 03            [24] 4413 	jz	00133$
      001135 02 11 C4         [24] 4414 	ljmp	00105$
      001138                       4415 00133$:
                           001050  4416 	C$lab6.c$498$3$199 ==.
                                   4417 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:498: RUDDER_PW = PW_CENTER_RUDDER + (float)(3600-direction)/1.9;
      001138 74 10            [12] 4418 	mov	a,#0x10
      00113A C3               [12] 4419 	clr	c
      00113B 95 5C            [12] 4420 	subb	a,_Steering_Servo_direction_1_192
      00113D F5 82            [12] 4421 	mov	dpl,a
      00113F 74 0E            [12] 4422 	mov	a,#0x0E
      001141 95 5D            [12] 4423 	subb	a,(_Steering_Servo_direction_1_192 + 1)
      001143 F5 83            [12] 4424 	mov	dph,a
      001145 12 14 FB         [24] 4425 	lcall	___uint2fs
      001148 AC 82            [24] 4426 	mov	r4,dpl
      00114A AD 83            [24] 4427 	mov	r5,dph
      00114C AE F0            [24] 4428 	mov	r6,b
      00114E FF               [12] 4429 	mov	r7,a
      00114F 74 33            [12] 4430 	mov	a,#0x33
      001151 C0 E0            [24] 4431 	push	acc
      001153 C0 E0            [24] 4432 	push	acc
      001155 74 F3            [12] 4433 	mov	a,#0xF3
      001157 C0 E0            [24] 4434 	push	acc
      001159 C4               [12] 4435 	swap	a
      00115A C0 E0            [24] 4436 	push	acc
      00115C 8C 82            [24] 4437 	mov	dpl,r4
      00115E 8D 83            [24] 4438 	mov	dph,r5
      001160 8E F0            [24] 4439 	mov	b,r6
      001162 EF               [12] 4440 	mov	a,r7
      001163 12 1B 93         [24] 4441 	lcall	___fsdiv
      001166 AC 82            [24] 4442 	mov	r4,dpl
      001168 AD 83            [24] 4443 	mov	r5,dph
      00116A AE F0            [24] 4444 	mov	r6,b
      00116C FF               [12] 4445 	mov	r7,a
      00116D E5 81            [12] 4446 	mov	a,sp
      00116F 24 FC            [12] 4447 	add	a,#0xfc
      001171 F5 81            [12] 4448 	mov	sp,a
      001173 85 3C 82         [24] 4449 	mov	dpl,_PW_CENTER_RUDDER
      001176 85 3D 83         [24] 4450 	mov	dph,(_PW_CENTER_RUDDER + 1)
      001179 C0 07            [24] 4451 	push	ar7
      00117B C0 06            [24] 4452 	push	ar6
      00117D C0 05            [24] 4453 	push	ar5
      00117F C0 04            [24] 4454 	push	ar4
      001181 12 14 FB         [24] 4455 	lcall	___uint2fs
      001184 A8 82            [24] 4456 	mov	r0,dpl
      001186 A9 83            [24] 4457 	mov	r1,dph
      001188 AA F0            [24] 4458 	mov	r2,b
      00118A FB               [12] 4459 	mov	r3,a
      00118B D0 04            [24] 4460 	pop	ar4
      00118D D0 05            [24] 4461 	pop	ar5
      00118F D0 06            [24] 4462 	pop	ar6
      001191 D0 07            [24] 4463 	pop	ar7
      001193 C0 04            [24] 4464 	push	ar4
      001195 C0 05            [24] 4465 	push	ar5
      001197 C0 06            [24] 4466 	push	ar6
      001199 C0 07            [24] 4467 	push	ar7
      00119B 88 82            [24] 4468 	mov	dpl,r0
      00119D 89 83            [24] 4469 	mov	dph,r1
      00119F 8A F0            [24] 4470 	mov	b,r2
      0011A1 EB               [12] 4471 	mov	a,r3
      0011A2 12 14 59         [24] 4472 	lcall	___fsadd
      0011A5 AC 82            [24] 4473 	mov	r4,dpl
      0011A7 AD 83            [24] 4474 	mov	r5,dph
      0011A9 AE F0            [24] 4475 	mov	r6,b
      0011AB FF               [12] 4476 	mov	r7,a
      0011AC E5 81            [12] 4477 	mov	a,sp
      0011AE 24 FC            [12] 4478 	add	a,#0xfc
      0011B0 F5 81            [12] 4479 	mov	sp,a
      0011B2 8C 82            [24] 4480 	mov	dpl,r4
      0011B4 8D 83            [24] 4481 	mov	dph,r5
      0011B6 8E F0            [24] 4482 	mov	b,r6
      0011B8 EF               [12] 4483 	mov	a,r7
      0011B9 12 15 07         [24] 4484 	lcall	___fs2uint
      0011BC 85 82 46         [24] 4485 	mov	_RUDDER_PW,dpl
      0011BF 85 83 47         [24] 4486 	mov	(_RUDDER_PW + 1),dph
      0011C2 80 0B            [24] 4487 	sjmp	00113$
      0011C4                       4488 00105$:
                           0010DC  4489 	C$lab6.c$502$3$200 ==.
                                   4490 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:502: RUDDER_PW += 10;
      0011C4 74 0A            [12] 4491 	mov	a,#0x0A
      0011C6 25 46            [12] 4492 	add	a,_RUDDER_PW
      0011C8 F5 46            [12] 4493 	mov	_RUDDER_PW,a
      0011CA E4               [12] 4494 	clr	a
      0011CB 35 47            [12] 4495 	addc	a,(_RUDDER_PW + 1)
      0011CD F5 47            [12] 4496 	mov	(_RUDDER_PW + 1),a
      0011CF                       4497 00113$:
                           0010E7  4498 	C$lab6.c$508$1$193 ==.
                                   4499 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:508: RDR_lo_to_hi= 0xFFFF - RUDDER_PW;
      0011CF 74 FF            [12] 4500 	mov	a,#0xFF
      0011D1 C3               [12] 4501 	clr	c
      0011D2 95 46            [12] 4502 	subb	a,_RUDDER_PW
      0011D4 F5 48            [12] 4503 	mov	_RDR_lo_to_hi,a
      0011D6 74 FF            [12] 4504 	mov	a,#0xFF
      0011D8 95 47            [12] 4505 	subb	a,(_RUDDER_PW + 1)
      0011DA F5 49            [12] 4506 	mov	(_RDR_lo_to_hi + 1),a
                           0010F4  4507 	C$lab6.c$509$1$193 ==.
                                   4508 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:509: PCA0CP0 = RDR_lo_to_hi;
      0011DC 85 48 EA         [24] 4509 	mov	((_PCA0CP0 >> 0) & 0xFF),_RDR_lo_to_hi
      0011DF 85 49 FA         [24] 4510 	mov	((_PCA0CP0 >> 8) & 0xFF),(_RDR_lo_to_hi + 1)
                           0010FA  4511 	C$lab6.c$510$1$193 ==.
                           0010FA  4512 	XG$Steering_Servo$0$0 ==.
      0011E2 22               [24] 4513 	ret
                                   4514 ;------------------------------------------------------------
                                   4515 ;Allocation info for local variables in function 'start'
                                   4516 ;------------------------------------------------------------
                           0010FB  4517 	G$start$0$0 ==.
                           0010FB  4518 	C$lab6.c$512$1$193 ==.
                                   4519 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:512: void start(void)            ///WAITS UNTIL '*' IS ENTERED
                                   4520 ;	-----------------------------------------
                                   4521 ;	 function start
                                   4522 ;	-----------------------------------------
      0011E3                       4523 _start:
                           0010FB  4524 	C$lab6.c$514$1$202 ==.
                                   4525 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:514: while (read_keypad() != '*') wait();
      0011E3                       4526 00101$:
      0011E3 12 02 02         [24] 4527 	lcall	_read_keypad
      0011E6 AF 82            [24] 4528 	mov	r7,dpl
      0011E8 BF 2A 02         [24] 4529 	cjne	r7,#0x2A,00112$
      0011EB 80 05            [24] 4530 	sjmp	00104$
      0011ED                       4531 00112$:
      0011ED 12 11 F3         [24] 4532 	lcall	_wait
      0011F0 80 F1            [24] 4533 	sjmp	00101$
      0011F2                       4534 00104$:
                           00110A  4535 	C$lab6.c$515$1$202 ==.
                           00110A  4536 	XG$start$0$0 ==.
      0011F2 22               [24] 4537 	ret
                                   4538 ;------------------------------------------------------------
                                   4539 ;Allocation info for local variables in function 'wait'
                                   4540 ;------------------------------------------------------------
                                   4541 ;old_count                 Allocated to registers r6 r7 
                                   4542 ;------------------------------------------------------------
                           00110B  4543 	G$wait$0$0 ==.
                           00110B  4544 	C$lab6.c$519$1$202 ==.
                                   4545 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:519: void wait(void)
                                   4546 ;	-----------------------------------------
                                   4547 ;	 function wait
                                   4548 ;	-----------------------------------------
      0011F3                       4549 _wait:
                           00110B  4550 	C$lab6.c$521$1$204 ==.
                                   4551 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:521: int old_count = count+1;
      0011F3 74 01            [12] 4552 	mov	a,#0x01
      0011F5 25 32            [12] 4553 	add	a,_count
      0011F7 FE               [12] 4554 	mov	r6,a
      0011F8 E4               [12] 4555 	clr	a
      0011F9 35 33            [12] 4556 	addc	a,(_count + 1)
      0011FB FF               [12] 4557 	mov	r7,a
                           001114  4558 	C$lab6.c$522$1$204 ==.
                                   4559 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:522: while (old_count> count);
      0011FC                       4560 00101$:
      0011FC C3               [12] 4561 	clr	c
      0011FD E5 32            [12] 4562 	mov	a,_count
      0011FF 9E               [12] 4563 	subb	a,r6
      001200 E5 33            [12] 4564 	mov	a,(_count + 1)
      001202 64 80            [12] 4565 	xrl	a,#0x80
      001204 8F F0            [24] 4566 	mov	b,r7
      001206 63 F0 80         [24] 4567 	xrl	b,#0x80
      001209 95 F0            [12] 4568 	subb	a,b
      00120B 40 EF            [24] 4569 	jc	00101$
                           001125  4570 	C$lab6.c$523$1$204 ==.
                           001125  4571 	XG$wait$0$0 ==.
      00120D 22               [24] 4572 	ret
                                   4573 ;------------------------------------------------------------
                                   4574 ;Allocation info for local variables in function 'Port_Init'
                                   4575 ;------------------------------------------------------------
                           001126  4576 	G$Port_Init$0$0 ==.
                           001126  4577 	C$lab6.c$525$1$204 ==.
                                   4578 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:525: void Port_Init(void)
                                   4579 ;	-----------------------------------------
                                   4580 ;	 function Port_Init
                                   4581 ;	-----------------------------------------
      00120E                       4582 _Port_Init:
                           001126  4583 	C$lab6.c$527$1$206 ==.
                                   4584 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:527: P0MDOUT &= ~0x32;
      00120E AF A4            [24] 4585 	mov	r7,_P0MDOUT
      001210 74 CD            [12] 4586 	mov	a,#0xCD
      001212 5F               [12] 4587 	anl	a,r7
      001213 F5 A4            [12] 4588 	mov	_P0MDOUT,a
                           00112D  4589 	C$lab6.c$529$1$206 ==.
                                   4590 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:529: P1MDIN  &= ~0x20;
      001215 AF BD            [24] 4591 	mov	r7,_P1MDIN
      001217 74 DF            [12] 4592 	mov	a,#0xDF
      001219 5F               [12] 4593 	anl	a,r7
      00121A F5 BD            [12] 4594 	mov	_P1MDIN,a
                           001134  4595 	C$lab6.c$531$1$206 ==.
                                   4596 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:531: P1MDOUT |= 0x0F;
      00121C 43 A5 0F         [24] 4597 	orl	_P1MDOUT,#0x0F
                           001137  4598 	C$lab6.c$532$1$206 ==.
                                   4599 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:532: P1MDOUT &= 0x20;
      00121F 53 A5 20         [24] 4600 	anl	_P1MDOUT,#0x20
                           00113A  4601 	C$lab6.c$534$1$206 ==.
                                   4602 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:534: P1 		 = 0x20;
      001222 75 90 20         [24] 4603 	mov	_P1,#0x20
                           00113D  4604 	C$lab6.c$537$1$206 ==.
                           00113D  4605 	XG$Port_Init$0$0 ==.
      001225 22               [24] 4606 	ret
                                   4607 ;------------------------------------------------------------
                                   4608 ;Allocation info for local variables in function 'PCA_Init'
                                   4609 ;------------------------------------------------------------
                           00113E  4610 	G$PCA_Init$0$0 ==.
                           00113E  4611 	C$lab6.c$539$1$206 ==.
                                   4612 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:539: void PCA_Init(void)
                                   4613 ;	-----------------------------------------
                                   4614 ;	 function PCA_Init
                                   4615 ;	-----------------------------------------
      001226                       4616 _PCA_Init:
                           00113E  4617 	C$lab6.c$541$1$208 ==.
                                   4618 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:541: PCA0MD   = 0x81;
      001226 75 D9 81         [24] 4619 	mov	_PCA0MD,#0x81
                           001141  4620 	C$lab6.c$542$1$208 ==.
                                   4621 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:542: PCA0CPM0 = 0xC2;    //CCM0 in 16-bit compare mode FOR STEERING
      001229 75 DA C2         [24] 4622 	mov	_PCA0CPM0,#0xC2
                           001144  4623 	C$lab6.c$543$1$208 ==.
                                   4624 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:543: PCA0CPM1 = 0xC2;
      00122C 75 DB C2         [24] 4625 	mov	_PCA0CPM1,#0xC2
                           001147  4626 	C$lab6.c$544$1$208 ==.
                                   4627 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:544: PCA0CPM2 = 0xC2;    //CCM2 in 16-bit compare mode FOR MOTOR
      00122F 75 DC C2         [24] 4628 	mov	_PCA0CPM2,#0xC2
                           00114A  4629 	C$lab6.c$545$1$208 ==.
                                   4630 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:545: PCA0CN 	 = 0x40;    //Enable PCA counter
      001232 75 D8 40         [24] 4631 	mov	_PCA0CN,#0x40
                           00114D  4632 	C$lab6.c$546$1$208 ==.
                                   4633 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:546: EIE1    |= 0x08;    //Enable PCA interrupt
      001235 43 E6 08         [24] 4634 	orl	_EIE1,#0x08
                           001150  4635 	C$lab6.c$547$1$208 ==.
                                   4636 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:547: EA       = 1   ;    //Enable global interrupts
      001238 D2 AF            [12] 4637 	setb	_EA
                           001152  4638 	C$lab6.c$548$1$208 ==.
                           001152  4639 	XG$PCA_Init$0$0 ==.
      00123A 22               [24] 4640 	ret
                                   4641 ;------------------------------------------------------------
                                   4642 ;Allocation info for local variables in function 'XBR0_Init'
                                   4643 ;------------------------------------------------------------
                           001153  4644 	G$XBR0_Init$0$0 ==.
                           001153  4645 	C$lab6.c$551$1$208 ==.
                                   4646 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:551: void XBR0_Init(void)
                                   4647 ;	-----------------------------------------
                                   4648 ;	 function XBR0_Init
                                   4649 ;	-----------------------------------------
      00123B                       4650 _XBR0_Init:
                           001153  4651 	C$lab6.c$553$1$210 ==.
                                   4652 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:553: XBR0 = 0x27;
      00123B 75 E1 27         [24] 4653 	mov	_XBR0,#0x27
                           001156  4654 	C$lab6.c$554$1$210 ==.
                           001156  4655 	XG$XBR0_Init$0$0 ==.
      00123E 22               [24] 4656 	ret
                                   4657 ;------------------------------------------------------------
                                   4658 ;Allocation info for local variables in function 'SMB_Init'
                                   4659 ;------------------------------------------------------------
                           001157  4660 	G$SMB_Init$0$0 ==.
                           001157  4661 	C$lab6.c$556$1$210 ==.
                                   4662 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:556: void SMB_Init(void)
                                   4663 ;	-----------------------------------------
                                   4664 ;	 function SMB_Init
                                   4665 ;	-----------------------------------------
      00123F                       4666 _SMB_Init:
                           001157  4667 	C$lab6.c$558$1$212 ==.
                                   4668 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:558: SMB0CR =0x93;
      00123F 75 CF 93         [24] 4669 	mov	_SMB0CR,#0x93
                           00115A  4670 	C$lab6.c$559$1$212 ==.
                                   4671 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:559: ENSMB =1;
      001242 D2 C6            [12] 4672 	setb	_ENSMB
                           00115C  4673 	C$lab6.c$560$1$212 ==.
                           00115C  4674 	XG$SMB_Init$0$0 ==.
      001244 22               [24] 4675 	ret
                                   4676 ;------------------------------------------------------------
                                   4677 ;Allocation info for local variables in function 'ADC_Init'
                                   4678 ;------------------------------------------------------------
                           00115D  4679 	G$ADC_Init$0$0 ==.
                           00115D  4680 	C$lab6.c$562$1$212 ==.
                                   4681 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:562: void ADC_Init(void)								/////SETS ADC 
                                   4682 ;	-----------------------------------------
                                   4683 ;	 function ADC_Init
                                   4684 ;	-----------------------------------------
      001245                       4685 _ADC_Init:
                           00115D  4686 	C$lab6.c$564$1$214 ==.
                                   4687 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:564: REF0CN = 0x03;
      001245 75 D1 03         [24] 4688 	mov	_REF0CN,#0x03
                           001160  4689 	C$lab6.c$565$1$214 ==.
                                   4690 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:565: ADC1CN = 0x80;
      001248 75 AA 80         [24] 4691 	mov	_ADC1CN,#0x80
                           001163  4692 	C$lab6.c$566$1$214 ==.
                                   4693 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:566: ADC1CF |= 0x01;
      00124B 43 AB 01         [24] 4694 	orl	_ADC1CF,#0x01
                           001166  4695 	C$lab6.c$567$1$214 ==.
                           001166  4696 	XG$ADC_Init$0$0 ==.
      00124E 22               [24] 4697 	ret
                                   4698 ;------------------------------------------------------------
                                   4699 ;Allocation info for local variables in function 'PCA_ISR'
                                   4700 ;------------------------------------------------------------
                           001167  4701 	G$PCA_ISR$0$0 ==.
                           001167  4702 	C$lab6.c$569$1$214 ==.
                                   4703 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:569: void PCA_ISR ( void ) __interrupt 9
                                   4704 ;	-----------------------------------------
                                   4705 ;	 function PCA_ISR
                                   4706 ;	-----------------------------------------
      00124F                       4707 _PCA_ISR:
      00124F C0 E0            [24] 4708 	push	acc
      001251 C0 D0            [24] 4709 	push	psw
                           00116B  4710 	C$lab6.c$572$1$216 ==.
                                   4711 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:572: if (CF)
                           00116B  4712 	C$lab6.c$574$2$217 ==.
                                   4713 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:574: CF =0;
      001253 10 DF 02         [24] 4714 	jbc	_CF,00108$
      001256 80 0E            [24] 4715 	sjmp	00102$
      001258                       4716 00108$:
                           001170  4717 	C$lab6.c$575$2$217 ==.
                                   4718 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:575: PCA0 = PCA_START;
      001258 75 E9 00         [24] 4719 	mov	((_PCA0 >> 0) & 0xFF),#0x00
      00125B 75 F9 70         [24] 4720 	mov	((_PCA0 >> 8) & 0xFF),#0x70
                           001176  4721 	C$lab6.c$576$2$217 ==.
                                   4722 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:576: count++;
      00125E 05 32            [12] 4723 	inc	_count
      001260 E4               [12] 4724 	clr	a
      001261 B5 32 02         [24] 4725 	cjne	a,_count,00109$
      001264 05 33            [12] 4726 	inc	(_count + 1)
      001266                       4727 00109$:
      001266                       4728 00102$:
                           00117E  4729 	C$lab6.c$581$1$216 ==.
                                   4730 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:581: PCA0CN &= 0xC0;
      001266 53 D8 C0         [24] 4731 	anl	_PCA0CN,#0xC0
      001269 D0 D0            [24] 4732 	pop	psw
      00126B D0 E0            [24] 4733 	pop	acc
                           001185  4734 	C$lab6.c$582$1$216 ==.
                           001185  4735 	XG$PCA_ISR$0$0 ==.
      00126D 32               [24] 4736 	reti
                                   4737 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   4738 ;	eliminated unneeded push/pop dpl
                                   4739 ;	eliminated unneeded push/pop dph
                                   4740 ;	eliminated unneeded push/pop b
                                   4741 	.area CSEG    (CODE)
                                   4742 	.area CONST   (CODE)
                           000000  4743 Flab6$__str_0$0$0 == .
      001D9C                       4744 ___str_0:
      001D9C 0A                    4745 	.db 0x0A
      001D9D 54 79 70 65 20 64 69  4746 	.ascii "Type digits; end w/#"
             67 69 74 73 3B 20 65
             6E 64 20 77 2F 23
      001DB1 00                    4747 	.db 0x00
                           000016  4748 Flab6$__str_1$0$0 == .
      001DB2                       4749 ___str_1:
      001DB2 20 20 20 20 20 25 63  4750 	.ascii "     %c%c%c%c%c"
             25 63 25 63 25 63 25
             63
      001DC1 00                    4751 	.db 0x00
                           000026  4752 Flab6$__str_2$0$0 == .
      001DC2                       4753 ___str_2:
      001DC2 25 63                 4754 	.ascii "%c"
      001DC4 00                    4755 	.db 0x00
                           000029  4756 Flab6$__str_3$0$0 == .
      001DC5                       4757 ___str_3:
      001DC5 0D                    4758 	.db 0x0D
      001DC6 0A                    4759 	.db 0x0A
      001DC7 25 75 20 6D 73        4760 	.ascii "%u ms"
      001DCC 00                    4761 	.db 0x00
                           000031  4762 Flab6$__str_4$0$0 == .
      001DCD                       4763 ___str_4:
      001DCD 43 61 6C 69 62 72 61  4764 	.ascii "Calibration:"
             74 69 6F 6E 3A
      001DD9 0A                    4765 	.db 0x0A
      001DDA 48 65 6C 6C 6F 20 77  4766 	.ascii "Hello world!"
             6F 72 6C 64 21
      001DE6 0A                    4767 	.db 0x0A
      001DE7 30 31 32 5F 33 34 35  4768 	.ascii "012_345_678:"
             5F 36 37 38 3A
      001DF3 0A                    4769 	.db 0x0A
      001DF4 61 62 63 20 64 65 66  4770 	.ascii "abc def ghij"
             20 67 68 69 6A
      001E00 00                    4771 	.db 0x00
                           000065  4772 Flab6$__str_5$0$0 == .
      001E01                       4773 ___str_5:
      001E01 0D                    4774 	.db 0x0D
      001E02 0A                    4775 	.db 0x0A
      001E03 54 68 65 20 64 65 73  4776 	.ascii "The desired direction is: %d"
             69 72 65 64 20 64 69
             72 65 63 74 69 6F 6E
             20 69 73 3A 20 25 64
      001E1F 00                    4777 	.db 0x00
                           000084  4778 Flab6$__str_6$0$0 == .
      001E20                       4779 ___str_6:
      001E20 52 75 64 64 65 72 20  4780 	.ascii "Rudder Calibration"
             43 61 6C 69 62 72 61
             74 69 6F 6E
      001E32 00                    4781 	.db 0x00
                           000097  4782 Flab6$__str_7$0$0 == .
      001E33                       4783 ___str_7:
      001E33 67 6F 20 6C 65 66 74  4784 	.ascii "go left: press 1"
             3A 20 70 72 65 73 73
             20 31
      001E43 0A                    4785 	.db 0x0A
      001E44 20 67 6F 20 72 69 67  4786 	.ascii " go right: press 2"
             68 74 3A 20 70 72 65
             73 73 20 32
      001E56 0A                    4787 	.db 0x0A
      001E57 50 72 65 73 73 20 2A  4788 	.ascii "Press * for next screen"
             20 66 6F 72 20 6E 65
             78 74 20 73 63 72 65
             65 6E
      001E6E 00                    4789 	.db 0x00
                           0000D3  4790 Flab6$__str_8$0$0 == .
      001E6F                       4791 ___str_8:
      001E6F 0A                    4792 	.db 0x0A
      001E70 20 63 6F 6E 66 69 72  4793 	.ascii " confirm: press 3"
             6D 3A 20 70 72 65 73
             73 20 33
      001E81 0A                    4794 	.db 0x0A
      001E82 20 70 72 65 73 73 20  4795 	.ascii " press * to begin"
             2A 20 74 6F 20 62 65
             67 69 6E
      001E93 00                    4796 	.db 0x00
                           0000F8  4797 Flab6$__str_9$0$0 == .
      001E94                       4798 ___str_9:
      001E94 0D                    4799 	.db 0x0D
      001E95 0A                    4800 	.db 0x0A
      001E96 20 25 75              4801 	.ascii " %u"
      001E99 00                    4802 	.db 0x00
                           0000FE  4803 Flab6$__str_10$0$0 == .
      001E9A                       4804 ___str_10:
      001E9A 4E 6F 77 20 63 61 6C  4805 	.ascii "Now calibrating Min_PW"
             69 62 72 61 74 69 6E
             67 20 4D 69 6E 5F 50
             57
      001EB0 0A                    4806 	.db 0x0A
      001EB1 00                    4807 	.db 0x00
                           000116  4808 Flab6$__str_11$0$0 == .
      001EB2                       4809 ___str_11:
      001EB2 4E 6F 77 20 63 61 6C  4810 	.ascii "Now calibrating Cen_PW"
             69 62 72 61 74 69 6E
             67 20 43 65 6E 5F 50
             57
      001EC8 00                    4811 	.db 0x00
                           00012D  4812 Flab6$__str_12$0$0 == .
      001EC9                       4813 ___str_12:
      001EC9 4E 6F 77 20 63 61 6C  4814 	.ascii "Now calibrating Max_PW"
             69 62 72 61 74 69 6E
             67 20 4D 61 78 5F 50
             57
      001EDF 00                    4815 	.db 0x00
                           000144  4816 Flab6$__str_13$0$0 == .
      001EE0                       4817 ___str_13:
      001EE0 41 6E 67 6C 65 20 43  4818 	.ascii "Angle Calibration"
             61 6C 69 62 72 61 74
             69 6F 6E
      001EF1 00                    4819 	.db 0x00
                           000156  4820 Flab6$__str_14$0$0 == .
      001EF2                       4821 ___str_14:
      001EF2 4E 6F 77 20 63 61 6C  4822 	.ascii "Now calibrating Min_PW UP ANGLE"
             69 62 72 61 74 69 6E
             67 20 4D 69 6E 5F 50
             57 20 55 50 20 41 4E
             47 4C 45
      001F11 00                    4823 	.db 0x00
                           000176  4824 Flab6$__str_15$0$0 == .
      001F12                       4825 ___str_15:
      001F12 4E 6F 77 20 63 61 6C  4826 	.ascii "Now calibrating Max_PW DOWN ANGLE"
             69 62 72 61 74 69 6E
             67 20 4D 61 78 5F 50
             57 20 44 4F 57 4E 20
             41 4E 47 4C 45
      001F33 00                    4827 	.db 0x00
                           000198  4828 Flab6$__str_16$0$0 == .
      001F34                       4829 ___str_16:
      001F34 54 68 72 75 73 74 20  4830 	.ascii "Thrust Calibration"
             43 61 6C 69 62 72 61
             74 69 6F 6E
      001F46 00                    4831 	.db 0x00
                           0001AB  4832 Flab6$__str_17$0$0 == .
      001F47                       4833 ___str_17:
      001F47 4E 6F 77 20 63 61 6C  4834 	.ascii "Now calibrating Min_PW"
             69 62 72 61 74 69 6E
             67 20 4D 69 6E 5F 50
             57
      001F5D 00                    4835 	.db 0x00
                                   4836 	.area XINIT   (CODE)
                                   4837 	.area CABS    (ABS,CODE)
