                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (Apr  5 2014) (MINGW32)
                                      4 ; This file was generated Fri May 01 11:09:15 2015
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
                                    306 	.globl _distanceR
                                    307 	.globl _old_error
                                    308 	.globl _error
                                    309 	.globl _offset
                                    310 	.globl _actual_D
                                    311 	.globl _desired_D
                                    312 	.globl _kd
                                    313 	.globl _kp
                                    314 	.globl _r_addr
                                    315 	.globl _r_data
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
                                    354 	.globl _kpkd
                                    355 	.globl _Change_D
                                    356 	.globl _Read_Ranger
                                    357 	.globl _Steering_func
                                    358 	.globl _direction
                                    359 	.globl _ReadCompass
                                    360 	.globl _Steering_Servo
                                    361 	.globl _start
                                    362 	.globl _wait
                                    363 	.globl _Port_Init
                                    364 	.globl _PCA_Init
                                    365 	.globl _XBR0_Init
                                    366 	.globl _SMB_Init
                                    367 	.globl _ADC_Init
                                    368 ;--------------------------------------------------------
                                    369 ; special function registers
                                    370 ;--------------------------------------------------------
                                    371 	.area RSEG    (ABS,DATA)
      000000                        372 	.org 0x0000
                           000080   373 G$P0$0$0 == 0x0080
                           000080   374 _P0	=	0x0080
                           000081   375 G$SP$0$0 == 0x0081
                           000081   376 _SP	=	0x0081
                           000082   377 G$DPL$0$0 == 0x0082
                           000082   378 _DPL	=	0x0082
                           000083   379 G$DPH$0$0 == 0x0083
                           000083   380 _DPH	=	0x0083
                           000084   381 G$P4$0$0 == 0x0084
                           000084   382 _P4	=	0x0084
                           000085   383 G$P5$0$0 == 0x0085
                           000085   384 _P5	=	0x0085
                           000086   385 G$P6$0$0 == 0x0086
                           000086   386 _P6	=	0x0086
                           000087   387 G$PCON$0$0 == 0x0087
                           000087   388 _PCON	=	0x0087
                           000088   389 G$TCON$0$0 == 0x0088
                           000088   390 _TCON	=	0x0088
                           000089   391 G$TMOD$0$0 == 0x0089
                           000089   392 _TMOD	=	0x0089
                           00008A   393 G$TL0$0$0 == 0x008a
                           00008A   394 _TL0	=	0x008a
                           00008B   395 G$TL1$0$0 == 0x008b
                           00008B   396 _TL1	=	0x008b
                           00008C   397 G$TH0$0$0 == 0x008c
                           00008C   398 _TH0	=	0x008c
                           00008D   399 G$TH1$0$0 == 0x008d
                           00008D   400 _TH1	=	0x008d
                           00008E   401 G$CKCON$0$0 == 0x008e
                           00008E   402 _CKCON	=	0x008e
                           00008F   403 G$PSCTL$0$0 == 0x008f
                           00008F   404 _PSCTL	=	0x008f
                           000090   405 G$P1$0$0 == 0x0090
                           000090   406 _P1	=	0x0090
                           000091   407 G$TMR3CN$0$0 == 0x0091
                           000091   408 _TMR3CN	=	0x0091
                           000092   409 G$TMR3RLL$0$0 == 0x0092
                           000092   410 _TMR3RLL	=	0x0092
                           000093   411 G$TMR3RLH$0$0 == 0x0093
                           000093   412 _TMR3RLH	=	0x0093
                           000094   413 G$TMR3L$0$0 == 0x0094
                           000094   414 _TMR3L	=	0x0094
                           000095   415 G$TMR3H$0$0 == 0x0095
                           000095   416 _TMR3H	=	0x0095
                           000096   417 G$P7$0$0 == 0x0096
                           000096   418 _P7	=	0x0096
                           000098   419 G$SCON$0$0 == 0x0098
                           000098   420 _SCON	=	0x0098
                           000098   421 G$SCON0$0$0 == 0x0098
                           000098   422 _SCON0	=	0x0098
                           000099   423 G$SBUF$0$0 == 0x0099
                           000099   424 _SBUF	=	0x0099
                           000099   425 G$SBUF0$0$0 == 0x0099
                           000099   426 _SBUF0	=	0x0099
                           00009A   427 G$SPI0CFG$0$0 == 0x009a
                           00009A   428 _SPI0CFG	=	0x009a
                           00009B   429 G$SPI0DAT$0$0 == 0x009b
                           00009B   430 _SPI0DAT	=	0x009b
                           00009C   431 G$ADC1$0$0 == 0x009c
                           00009C   432 _ADC1	=	0x009c
                           00009D   433 G$SPI0CKR$0$0 == 0x009d
                           00009D   434 _SPI0CKR	=	0x009d
                           00009E   435 G$CPT0CN$0$0 == 0x009e
                           00009E   436 _CPT0CN	=	0x009e
                           00009F   437 G$CPT1CN$0$0 == 0x009f
                           00009F   438 _CPT1CN	=	0x009f
                           0000A0   439 G$P2$0$0 == 0x00a0
                           0000A0   440 _P2	=	0x00a0
                           0000A1   441 G$EMI0TC$0$0 == 0x00a1
                           0000A1   442 _EMI0TC	=	0x00a1
                           0000A3   443 G$EMI0CF$0$0 == 0x00a3
                           0000A3   444 _EMI0CF	=	0x00a3
                           0000A4   445 G$PRT0CF$0$0 == 0x00a4
                           0000A4   446 _PRT0CF	=	0x00a4
                           0000A4   447 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   448 _P0MDOUT	=	0x00a4
                           0000A5   449 G$PRT1CF$0$0 == 0x00a5
                           0000A5   450 _PRT1CF	=	0x00a5
                           0000A5   451 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   452 _P1MDOUT	=	0x00a5
                           0000A6   453 G$PRT2CF$0$0 == 0x00a6
                           0000A6   454 _PRT2CF	=	0x00a6
                           0000A6   455 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   456 _P2MDOUT	=	0x00a6
                           0000A7   457 G$PRT3CF$0$0 == 0x00a7
                           0000A7   458 _PRT3CF	=	0x00a7
                           0000A7   459 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   460 _P3MDOUT	=	0x00a7
                           0000A8   461 G$IE$0$0 == 0x00a8
                           0000A8   462 _IE	=	0x00a8
                           0000A9   463 G$SADDR0$0$0 == 0x00a9
                           0000A9   464 _SADDR0	=	0x00a9
                           0000AA   465 G$ADC1CN$0$0 == 0x00aa
                           0000AA   466 _ADC1CN	=	0x00aa
                           0000AB   467 G$ADC1CF$0$0 == 0x00ab
                           0000AB   468 _ADC1CF	=	0x00ab
                           0000AC   469 G$AMX1SL$0$0 == 0x00ac
                           0000AC   470 _AMX1SL	=	0x00ac
                           0000AD   471 G$P3IF$0$0 == 0x00ad
                           0000AD   472 _P3IF	=	0x00ad
                           0000AE   473 G$SADEN1$0$0 == 0x00ae
                           0000AE   474 _SADEN1	=	0x00ae
                           0000AF   475 G$EMI0CN$0$0 == 0x00af
                           0000AF   476 _EMI0CN	=	0x00af
                           0000AF   477 G$_XPAGE$0$0 == 0x00af
                           0000AF   478 __XPAGE	=	0x00af
                           0000B0   479 G$P3$0$0 == 0x00b0
                           0000B0   480 _P3	=	0x00b0
                           0000B1   481 G$OSCXCN$0$0 == 0x00b1
                           0000B1   482 _OSCXCN	=	0x00b1
                           0000B2   483 G$OSCICN$0$0 == 0x00b2
                           0000B2   484 _OSCICN	=	0x00b2
                           0000B5   485 G$P74OUT$0$0 == 0x00b5
                           0000B5   486 _P74OUT	=	0x00b5
                           0000B6   487 G$FLSCL$0$0 == 0x00b6
                           0000B6   488 _FLSCL	=	0x00b6
                           0000B7   489 G$FLACL$0$0 == 0x00b7
                           0000B7   490 _FLACL	=	0x00b7
                           0000B8   491 G$IP$0$0 == 0x00b8
                           0000B8   492 _IP	=	0x00b8
                           0000B9   493 G$SADEN0$0$0 == 0x00b9
                           0000B9   494 _SADEN0	=	0x00b9
                           0000BA   495 G$AMX0CF$0$0 == 0x00ba
                           0000BA   496 _AMX0CF	=	0x00ba
                           0000BB   497 G$AMX0SL$0$0 == 0x00bb
                           0000BB   498 _AMX0SL	=	0x00bb
                           0000BC   499 G$ADC0CF$0$0 == 0x00bc
                           0000BC   500 _ADC0CF	=	0x00bc
                           0000BD   501 G$P1MDIN$0$0 == 0x00bd
                           0000BD   502 _P1MDIN	=	0x00bd
                           0000BE   503 G$ADC0L$0$0 == 0x00be
                           0000BE   504 _ADC0L	=	0x00be
                           0000BF   505 G$ADC0H$0$0 == 0x00bf
                           0000BF   506 _ADC0H	=	0x00bf
                           0000C0   507 G$SMB0CN$0$0 == 0x00c0
                           0000C0   508 _SMB0CN	=	0x00c0
                           0000C1   509 G$SMB0STA$0$0 == 0x00c1
                           0000C1   510 _SMB0STA	=	0x00c1
                           0000C2   511 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   512 _SMB0DAT	=	0x00c2
                           0000C3   513 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   514 _SMB0ADR	=	0x00c3
                           0000C4   515 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   516 _ADC0GTL	=	0x00c4
                           0000C5   517 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   518 _ADC0GTH	=	0x00c5
                           0000C6   519 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   520 _ADC0LTL	=	0x00c6
                           0000C7   521 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   522 _ADC0LTH	=	0x00c7
                           0000C8   523 G$T2CON$0$0 == 0x00c8
                           0000C8   524 _T2CON	=	0x00c8
                           0000C9   525 G$T4CON$0$0 == 0x00c9
                           0000C9   526 _T4CON	=	0x00c9
                           0000CA   527 G$RCAP2L$0$0 == 0x00ca
                           0000CA   528 _RCAP2L	=	0x00ca
                           0000CB   529 G$RCAP2H$0$0 == 0x00cb
                           0000CB   530 _RCAP2H	=	0x00cb
                           0000CC   531 G$TL2$0$0 == 0x00cc
                           0000CC   532 _TL2	=	0x00cc
                           0000CD   533 G$TH2$0$0 == 0x00cd
                           0000CD   534 _TH2	=	0x00cd
                           0000CF   535 G$SMB0CR$0$0 == 0x00cf
                           0000CF   536 _SMB0CR	=	0x00cf
                           0000D0   537 G$PSW$0$0 == 0x00d0
                           0000D0   538 _PSW	=	0x00d0
                           0000D1   539 G$REF0CN$0$0 == 0x00d1
                           0000D1   540 _REF0CN	=	0x00d1
                           0000D2   541 G$DAC0L$0$0 == 0x00d2
                           0000D2   542 _DAC0L	=	0x00d2
                           0000D3   543 G$DAC0H$0$0 == 0x00d3
                           0000D3   544 _DAC0H	=	0x00d3
                           0000D4   545 G$DAC0CN$0$0 == 0x00d4
                           0000D4   546 _DAC0CN	=	0x00d4
                           0000D5   547 G$DAC1L$0$0 == 0x00d5
                           0000D5   548 _DAC1L	=	0x00d5
                           0000D6   549 G$DAC1H$0$0 == 0x00d6
                           0000D6   550 _DAC1H	=	0x00d6
                           0000D7   551 G$DAC1CN$0$0 == 0x00d7
                           0000D7   552 _DAC1CN	=	0x00d7
                           0000D8   553 G$PCA0CN$0$0 == 0x00d8
                           0000D8   554 _PCA0CN	=	0x00d8
                           0000D9   555 G$PCA0MD$0$0 == 0x00d9
                           0000D9   556 _PCA0MD	=	0x00d9
                           0000DA   557 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   558 _PCA0CPM0	=	0x00da
                           0000DB   559 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   560 _PCA0CPM1	=	0x00db
                           0000DC   561 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   562 _PCA0CPM2	=	0x00dc
                           0000DD   563 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   564 _PCA0CPM3	=	0x00dd
                           0000DE   565 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   566 _PCA0CPM4	=	0x00de
                           0000E0   567 G$ACC$0$0 == 0x00e0
                           0000E0   568 _ACC	=	0x00e0
                           0000E1   569 G$XBR0$0$0 == 0x00e1
                           0000E1   570 _XBR0	=	0x00e1
                           0000E2   571 G$XBR1$0$0 == 0x00e2
                           0000E2   572 _XBR1	=	0x00e2
                           0000E3   573 G$XBR2$0$0 == 0x00e3
                           0000E3   574 _XBR2	=	0x00e3
                           0000E4   575 G$RCAP4L$0$0 == 0x00e4
                           0000E4   576 _RCAP4L	=	0x00e4
                           0000E5   577 G$RCAP4H$0$0 == 0x00e5
                           0000E5   578 _RCAP4H	=	0x00e5
                           0000E6   579 G$EIE1$0$0 == 0x00e6
                           0000E6   580 _EIE1	=	0x00e6
                           0000E7   581 G$EIE2$0$0 == 0x00e7
                           0000E7   582 _EIE2	=	0x00e7
                           0000E8   583 G$ADC0CN$0$0 == 0x00e8
                           0000E8   584 _ADC0CN	=	0x00e8
                           0000E9   585 G$PCA0L$0$0 == 0x00e9
                           0000E9   586 _PCA0L	=	0x00e9
                           0000EA   587 G$PCA0CPL0$0$0 == 0x00ea
                           0000EA   588 _PCA0CPL0	=	0x00ea
                           0000EB   589 G$PCA0CPL1$0$0 == 0x00eb
                           0000EB   590 _PCA0CPL1	=	0x00eb
                           0000EC   591 G$PCA0CPL2$0$0 == 0x00ec
                           0000EC   592 _PCA0CPL2	=	0x00ec
                           0000ED   593 G$PCA0CPL3$0$0 == 0x00ed
                           0000ED   594 _PCA0CPL3	=	0x00ed
                           0000EE   595 G$PCA0CPL4$0$0 == 0x00ee
                           0000EE   596 _PCA0CPL4	=	0x00ee
                           0000EF   597 G$RSTSRC$0$0 == 0x00ef
                           0000EF   598 _RSTSRC	=	0x00ef
                           0000F0   599 G$B$0$0 == 0x00f0
                           0000F0   600 _B	=	0x00f0
                           0000F1   601 G$SCON1$0$0 == 0x00f1
                           0000F1   602 _SCON1	=	0x00f1
                           0000F2   603 G$SBUF1$0$0 == 0x00f2
                           0000F2   604 _SBUF1	=	0x00f2
                           0000F3   605 G$SADDR1$0$0 == 0x00f3
                           0000F3   606 _SADDR1	=	0x00f3
                           0000F4   607 G$TL4$0$0 == 0x00f4
                           0000F4   608 _TL4	=	0x00f4
                           0000F5   609 G$TH4$0$0 == 0x00f5
                           0000F5   610 _TH4	=	0x00f5
                           0000F6   611 G$EIP1$0$0 == 0x00f6
                           0000F6   612 _EIP1	=	0x00f6
                           0000F7   613 G$EIP2$0$0 == 0x00f7
                           0000F7   614 _EIP2	=	0x00f7
                           0000F8   615 G$SPI0CN$0$0 == 0x00f8
                           0000F8   616 _SPI0CN	=	0x00f8
                           0000F9   617 G$PCA0H$0$0 == 0x00f9
                           0000F9   618 _PCA0H	=	0x00f9
                           0000FA   619 G$PCA0CPH0$0$0 == 0x00fa
                           0000FA   620 _PCA0CPH0	=	0x00fa
                           0000FB   621 G$PCA0CPH1$0$0 == 0x00fb
                           0000FB   622 _PCA0CPH1	=	0x00fb
                           0000FC   623 G$PCA0CPH2$0$0 == 0x00fc
                           0000FC   624 _PCA0CPH2	=	0x00fc
                           0000FD   625 G$PCA0CPH3$0$0 == 0x00fd
                           0000FD   626 _PCA0CPH3	=	0x00fd
                           0000FE   627 G$PCA0CPH4$0$0 == 0x00fe
                           0000FE   628 _PCA0CPH4	=	0x00fe
                           0000FF   629 G$WDTCN$0$0 == 0x00ff
                           0000FF   630 _WDTCN	=	0x00ff
                           008C8A   631 G$TMR0$0$0 == 0x8c8a
                           008C8A   632 _TMR0	=	0x8c8a
                           008D8B   633 G$TMR1$0$0 == 0x8d8b
                           008D8B   634 _TMR1	=	0x8d8b
                           00CDCC   635 G$TMR2$0$0 == 0xcdcc
                           00CDCC   636 _TMR2	=	0xcdcc
                           00CBCA   637 G$RCAP2$0$0 == 0xcbca
                           00CBCA   638 _RCAP2	=	0xcbca
                           009594   639 G$TMR3$0$0 == 0x9594
                           009594   640 _TMR3	=	0x9594
                           009392   641 G$TMR3RL$0$0 == 0x9392
                           009392   642 _TMR3RL	=	0x9392
                           00F5F4   643 G$TMR4$0$0 == 0xf5f4
                           00F5F4   644 _TMR4	=	0xf5f4
                           00E5E4   645 G$RCAP4$0$0 == 0xe5e4
                           00E5E4   646 _RCAP4	=	0xe5e4
                           00BFBE   647 G$ADC0$0$0 == 0xbfbe
                           00BFBE   648 _ADC0	=	0xbfbe
                           00C5C4   649 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   650 _ADC0GT	=	0xc5c4
                           00C7C6   651 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   652 _ADC0LT	=	0xc7c6
                           00D3D2   653 G$DAC0$0$0 == 0xd3d2
                           00D3D2   654 _DAC0	=	0xd3d2
                           00D6D5   655 G$DAC1$0$0 == 0xd6d5
                           00D6D5   656 _DAC1	=	0xd6d5
                           00F9E9   657 G$PCA0$0$0 == 0xf9e9
                           00F9E9   658 _PCA0	=	0xf9e9
                           00FAEA   659 G$PCA0CP0$0$0 == 0xfaea
                           00FAEA   660 _PCA0CP0	=	0xfaea
                           00FBEB   661 G$PCA0CP1$0$0 == 0xfbeb
                           00FBEB   662 _PCA0CP1	=	0xfbeb
                           00FCEC   663 G$PCA0CP2$0$0 == 0xfcec
                           00FCEC   664 _PCA0CP2	=	0xfcec
                           00FDED   665 G$PCA0CP3$0$0 == 0xfded
                           00FDED   666 _PCA0CP3	=	0xfded
                           00FEEE   667 G$PCA0CP4$0$0 == 0xfeee
                           00FEEE   668 _PCA0CP4	=	0xfeee
                                    669 ;--------------------------------------------------------
                                    670 ; special function bits
                                    671 ;--------------------------------------------------------
                                    672 	.area RSEG    (ABS,DATA)
      000000                        673 	.org 0x0000
                           000080   674 G$P0_0$0$0 == 0x0080
                           000080   675 _P0_0	=	0x0080
                           000081   676 G$P0_1$0$0 == 0x0081
                           000081   677 _P0_1	=	0x0081
                           000082   678 G$P0_2$0$0 == 0x0082
                           000082   679 _P0_2	=	0x0082
                           000083   680 G$P0_3$0$0 == 0x0083
                           000083   681 _P0_3	=	0x0083
                           000084   682 G$P0_4$0$0 == 0x0084
                           000084   683 _P0_4	=	0x0084
                           000085   684 G$P0_5$0$0 == 0x0085
                           000085   685 _P0_5	=	0x0085
                           000086   686 G$P0_6$0$0 == 0x0086
                           000086   687 _P0_6	=	0x0086
                           000087   688 G$P0_7$0$0 == 0x0087
                           000087   689 _P0_7	=	0x0087
                           000088   690 G$IT0$0$0 == 0x0088
                           000088   691 _IT0	=	0x0088
                           000089   692 G$IE0$0$0 == 0x0089
                           000089   693 _IE0	=	0x0089
                           00008A   694 G$IT1$0$0 == 0x008a
                           00008A   695 _IT1	=	0x008a
                           00008B   696 G$IE1$0$0 == 0x008b
                           00008B   697 _IE1	=	0x008b
                           00008C   698 G$TR0$0$0 == 0x008c
                           00008C   699 _TR0	=	0x008c
                           00008D   700 G$TF0$0$0 == 0x008d
                           00008D   701 _TF0	=	0x008d
                           00008E   702 G$TR1$0$0 == 0x008e
                           00008E   703 _TR1	=	0x008e
                           00008F   704 G$TF1$0$0 == 0x008f
                           00008F   705 _TF1	=	0x008f
                           000090   706 G$P1_0$0$0 == 0x0090
                           000090   707 _P1_0	=	0x0090
                           000091   708 G$P1_1$0$0 == 0x0091
                           000091   709 _P1_1	=	0x0091
                           000092   710 G$P1_2$0$0 == 0x0092
                           000092   711 _P1_2	=	0x0092
                           000093   712 G$P1_3$0$0 == 0x0093
                           000093   713 _P1_3	=	0x0093
                           000094   714 G$P1_4$0$0 == 0x0094
                           000094   715 _P1_4	=	0x0094
                           000095   716 G$P1_5$0$0 == 0x0095
                           000095   717 _P1_5	=	0x0095
                           000096   718 G$P1_6$0$0 == 0x0096
                           000096   719 _P1_6	=	0x0096
                           000097   720 G$P1_7$0$0 == 0x0097
                           000097   721 _P1_7	=	0x0097
                           000098   722 G$RI$0$0 == 0x0098
                           000098   723 _RI	=	0x0098
                           000098   724 G$RI0$0$0 == 0x0098
                           000098   725 _RI0	=	0x0098
                           000099   726 G$TI$0$0 == 0x0099
                           000099   727 _TI	=	0x0099
                           000099   728 G$TI0$0$0 == 0x0099
                           000099   729 _TI0	=	0x0099
                           00009A   730 G$RB8$0$0 == 0x009a
                           00009A   731 _RB8	=	0x009a
                           00009A   732 G$RB80$0$0 == 0x009a
                           00009A   733 _RB80	=	0x009a
                           00009B   734 G$TB8$0$0 == 0x009b
                           00009B   735 _TB8	=	0x009b
                           00009B   736 G$TB80$0$0 == 0x009b
                           00009B   737 _TB80	=	0x009b
                           00009C   738 G$REN$0$0 == 0x009c
                           00009C   739 _REN	=	0x009c
                           00009C   740 G$REN0$0$0 == 0x009c
                           00009C   741 _REN0	=	0x009c
                           00009D   742 G$SM2$0$0 == 0x009d
                           00009D   743 _SM2	=	0x009d
                           00009D   744 G$SM20$0$0 == 0x009d
                           00009D   745 _SM20	=	0x009d
                           00009D   746 G$MCE0$0$0 == 0x009d
                           00009D   747 _MCE0	=	0x009d
                           00009E   748 G$SM1$0$0 == 0x009e
                           00009E   749 _SM1	=	0x009e
                           00009E   750 G$SM10$0$0 == 0x009e
                           00009E   751 _SM10	=	0x009e
                           00009F   752 G$SM0$0$0 == 0x009f
                           00009F   753 _SM0	=	0x009f
                           00009F   754 G$SM00$0$0 == 0x009f
                           00009F   755 _SM00	=	0x009f
                           00009F   756 G$S0MODE$0$0 == 0x009f
                           00009F   757 _S0MODE	=	0x009f
                           0000A0   758 G$P2_0$0$0 == 0x00a0
                           0000A0   759 _P2_0	=	0x00a0
                           0000A1   760 G$P2_1$0$0 == 0x00a1
                           0000A1   761 _P2_1	=	0x00a1
                           0000A2   762 G$P2_2$0$0 == 0x00a2
                           0000A2   763 _P2_2	=	0x00a2
                           0000A3   764 G$P2_3$0$0 == 0x00a3
                           0000A3   765 _P2_3	=	0x00a3
                           0000A4   766 G$P2_4$0$0 == 0x00a4
                           0000A4   767 _P2_4	=	0x00a4
                           0000A5   768 G$P2_5$0$0 == 0x00a5
                           0000A5   769 _P2_5	=	0x00a5
                           0000A6   770 G$P2_6$0$0 == 0x00a6
                           0000A6   771 _P2_6	=	0x00a6
                           0000A7   772 G$P2_7$0$0 == 0x00a7
                           0000A7   773 _P2_7	=	0x00a7
                           0000A8   774 G$EX0$0$0 == 0x00a8
                           0000A8   775 _EX0	=	0x00a8
                           0000A9   776 G$ET0$0$0 == 0x00a9
                           0000A9   777 _ET0	=	0x00a9
                           0000AA   778 G$EX1$0$0 == 0x00aa
                           0000AA   779 _EX1	=	0x00aa
                           0000AB   780 G$ET1$0$0 == 0x00ab
                           0000AB   781 _ET1	=	0x00ab
                           0000AC   782 G$ES0$0$0 == 0x00ac
                           0000AC   783 _ES0	=	0x00ac
                           0000AC   784 G$ES$0$0 == 0x00ac
                           0000AC   785 _ES	=	0x00ac
                           0000AD   786 G$ET2$0$0 == 0x00ad
                           0000AD   787 _ET2	=	0x00ad
                           0000AF   788 G$EA$0$0 == 0x00af
                           0000AF   789 _EA	=	0x00af
                           0000B0   790 G$P3_0$0$0 == 0x00b0
                           0000B0   791 _P3_0	=	0x00b0
                           0000B1   792 G$P3_1$0$0 == 0x00b1
                           0000B1   793 _P3_1	=	0x00b1
                           0000B2   794 G$P3_2$0$0 == 0x00b2
                           0000B2   795 _P3_2	=	0x00b2
                           0000B3   796 G$P3_3$0$0 == 0x00b3
                           0000B3   797 _P3_3	=	0x00b3
                           0000B4   798 G$P3_4$0$0 == 0x00b4
                           0000B4   799 _P3_4	=	0x00b4
                           0000B5   800 G$P3_5$0$0 == 0x00b5
                           0000B5   801 _P3_5	=	0x00b5
                           0000B6   802 G$P3_6$0$0 == 0x00b6
                           0000B6   803 _P3_6	=	0x00b6
                           0000B7   804 G$P3_7$0$0 == 0x00b7
                           0000B7   805 _P3_7	=	0x00b7
                           0000B8   806 G$PX0$0$0 == 0x00b8
                           0000B8   807 _PX0	=	0x00b8
                           0000B9   808 G$PT0$0$0 == 0x00b9
                           0000B9   809 _PT0	=	0x00b9
                           0000BA   810 G$PX1$0$0 == 0x00ba
                           0000BA   811 _PX1	=	0x00ba
                           0000BB   812 G$PT1$0$0 == 0x00bb
                           0000BB   813 _PT1	=	0x00bb
                           0000BC   814 G$PS0$0$0 == 0x00bc
                           0000BC   815 _PS0	=	0x00bc
                           0000BC   816 G$PS$0$0 == 0x00bc
                           0000BC   817 _PS	=	0x00bc
                           0000BD   818 G$PT2$0$0 == 0x00bd
                           0000BD   819 _PT2	=	0x00bd
                           0000C0   820 G$SMBTOE$0$0 == 0x00c0
                           0000C0   821 _SMBTOE	=	0x00c0
                           0000C1   822 G$SMBFTE$0$0 == 0x00c1
                           0000C1   823 _SMBFTE	=	0x00c1
                           0000C2   824 G$AA$0$0 == 0x00c2
                           0000C2   825 _AA	=	0x00c2
                           0000C3   826 G$SI$0$0 == 0x00c3
                           0000C3   827 _SI	=	0x00c3
                           0000C4   828 G$STO$0$0 == 0x00c4
                           0000C4   829 _STO	=	0x00c4
                           0000C5   830 G$STA$0$0 == 0x00c5
                           0000C5   831 _STA	=	0x00c5
                           0000C6   832 G$ENSMB$0$0 == 0x00c6
                           0000C6   833 _ENSMB	=	0x00c6
                           0000C7   834 G$BUSY$0$0 == 0x00c7
                           0000C7   835 _BUSY	=	0x00c7
                           0000C8   836 G$CPRL2$0$0 == 0x00c8
                           0000C8   837 _CPRL2	=	0x00c8
                           0000C9   838 G$CT2$0$0 == 0x00c9
                           0000C9   839 _CT2	=	0x00c9
                           0000CA   840 G$TR2$0$0 == 0x00ca
                           0000CA   841 _TR2	=	0x00ca
                           0000CB   842 G$EXEN2$0$0 == 0x00cb
                           0000CB   843 _EXEN2	=	0x00cb
                           0000CC   844 G$TCLK$0$0 == 0x00cc
                           0000CC   845 _TCLK	=	0x00cc
                           0000CD   846 G$RCLK$0$0 == 0x00cd
                           0000CD   847 _RCLK	=	0x00cd
                           0000CE   848 G$EXF2$0$0 == 0x00ce
                           0000CE   849 _EXF2	=	0x00ce
                           0000CF   850 G$TF2$0$0 == 0x00cf
                           0000CF   851 _TF2	=	0x00cf
                           0000D0   852 G$P$0$0 == 0x00d0
                           0000D0   853 _P	=	0x00d0
                           0000D1   854 G$F1$0$0 == 0x00d1
                           0000D1   855 _F1	=	0x00d1
                           0000D2   856 G$OV$0$0 == 0x00d2
                           0000D2   857 _OV	=	0x00d2
                           0000D3   858 G$RS0$0$0 == 0x00d3
                           0000D3   859 _RS0	=	0x00d3
                           0000D4   860 G$RS1$0$0 == 0x00d4
                           0000D4   861 _RS1	=	0x00d4
                           0000D5   862 G$F0$0$0 == 0x00d5
                           0000D5   863 _F0	=	0x00d5
                           0000D6   864 G$AC$0$0 == 0x00d6
                           0000D6   865 _AC	=	0x00d6
                           0000D7   866 G$CY$0$0 == 0x00d7
                           0000D7   867 _CY	=	0x00d7
                           0000D8   868 G$CCF0$0$0 == 0x00d8
                           0000D8   869 _CCF0	=	0x00d8
                           0000D9   870 G$CCF1$0$0 == 0x00d9
                           0000D9   871 _CCF1	=	0x00d9
                           0000DA   872 G$CCF2$0$0 == 0x00da
                           0000DA   873 _CCF2	=	0x00da
                           0000DB   874 G$CCF3$0$0 == 0x00db
                           0000DB   875 _CCF3	=	0x00db
                           0000DC   876 G$CCF4$0$0 == 0x00dc
                           0000DC   877 _CCF4	=	0x00dc
                           0000DE   878 G$CR$0$0 == 0x00de
                           0000DE   879 _CR	=	0x00de
                           0000DF   880 G$CF$0$0 == 0x00df
                           0000DF   881 _CF	=	0x00df
                           0000E8   882 G$ADLJST$0$0 == 0x00e8
                           0000E8   883 _ADLJST	=	0x00e8
                           0000E8   884 G$AD0LJST$0$0 == 0x00e8
                           0000E8   885 _AD0LJST	=	0x00e8
                           0000E9   886 G$ADWINT$0$0 == 0x00e9
                           0000E9   887 _ADWINT	=	0x00e9
                           0000E9   888 G$AD0WINT$0$0 == 0x00e9
                           0000E9   889 _AD0WINT	=	0x00e9
                           0000EA   890 G$ADSTM0$0$0 == 0x00ea
                           0000EA   891 _ADSTM0	=	0x00ea
                           0000EA   892 G$AD0CM0$0$0 == 0x00ea
                           0000EA   893 _AD0CM0	=	0x00ea
                           0000EB   894 G$ADSTM1$0$0 == 0x00eb
                           0000EB   895 _ADSTM1	=	0x00eb
                           0000EB   896 G$AD0CM1$0$0 == 0x00eb
                           0000EB   897 _AD0CM1	=	0x00eb
                           0000EC   898 G$ADBUSY$0$0 == 0x00ec
                           0000EC   899 _ADBUSY	=	0x00ec
                           0000EC   900 G$AD0BUSY$0$0 == 0x00ec
                           0000EC   901 _AD0BUSY	=	0x00ec
                           0000ED   902 G$ADCINT$0$0 == 0x00ed
                           0000ED   903 _ADCINT	=	0x00ed
                           0000ED   904 G$AD0INT$0$0 == 0x00ed
                           0000ED   905 _AD0INT	=	0x00ed
                           0000EE   906 G$ADCTM$0$0 == 0x00ee
                           0000EE   907 _ADCTM	=	0x00ee
                           0000EE   908 G$AD0TM$0$0 == 0x00ee
                           0000EE   909 _AD0TM	=	0x00ee
                           0000EF   910 G$ADCEN$0$0 == 0x00ef
                           0000EF   911 _ADCEN	=	0x00ef
                           0000EF   912 G$AD0EN$0$0 == 0x00ef
                           0000EF   913 _AD0EN	=	0x00ef
                           0000F8   914 G$SPIEN$0$0 == 0x00f8
                           0000F8   915 _SPIEN	=	0x00f8
                           0000F9   916 G$MSTEN$0$0 == 0x00f9
                           0000F9   917 _MSTEN	=	0x00f9
                           0000FA   918 G$SLVSEL$0$0 == 0x00fa
                           0000FA   919 _SLVSEL	=	0x00fa
                           0000FB   920 G$TXBSY$0$0 == 0x00fb
                           0000FB   921 _TXBSY	=	0x00fb
                           0000FC   922 G$RXOVRN$0$0 == 0x00fc
                           0000FC   923 _RXOVRN	=	0x00fc
                           0000FD   924 G$MODF$0$0 == 0x00fd
                           0000FD   925 _MODF	=	0x00fd
                           0000FE   926 G$WCOL$0$0 == 0x00fe
                           0000FE   927 _WCOL	=	0x00fe
                           0000FF   928 G$SPIF$0$0 == 0x00ff
                           0000FF   929 _SPIF	=	0x00ff
                           0000C7   930 G$BUS_BUSY$0$0 == 0x00c7
                           0000C7   931 _BUS_BUSY	=	0x00c7
                           0000C6   932 G$BUS_EN$0$0 == 0x00c6
                           0000C6   933 _BUS_EN	=	0x00c6
                           0000C5   934 G$BUS_START$0$0 == 0x00c5
                           0000C5   935 _BUS_START	=	0x00c5
                           0000C4   936 G$BUS_STOP$0$0 == 0x00c4
                           0000C4   937 _BUS_STOP	=	0x00c4
                           0000C3   938 G$BUS_INT$0$0 == 0x00c3
                           0000C3   939 _BUS_INT	=	0x00c3
                           0000C2   940 G$BUS_AA$0$0 == 0x00c2
                           0000C2   941 _BUS_AA	=	0x00c2
                           0000C1   942 G$BUS_FTE$0$0 == 0x00c1
                           0000C1   943 _BUS_FTE	=	0x00c1
                           0000C0   944 G$BUS_TOE$0$0 == 0x00c0
                           0000C0   945 _BUS_TOE	=	0x00c0
                           000083   946 G$BUS_SCL$0$0 == 0x0083
                           000083   947 _BUS_SCL	=	0x0083
                                    948 ;--------------------------------------------------------
                                    949 ; overlayable register banks
                                    950 ;--------------------------------------------------------
                                    951 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        952 	.ds 8
                                    953 ;--------------------------------------------------------
                                    954 ; internal ram data
                                    955 ;--------------------------------------------------------
                                    956 	.area DSEG    (DATA)
                           000000   957 Llab6.lcd_clear$NumBytes$1$77==.
      000022                        958 _lcd_clear_NumBytes_1_77:
      000022                        959 	.ds 1
                           000001   960 Llab6.lcd_clear$Cmd$1$77==.
      000023                        961 _lcd_clear_Cmd_1_77:
      000023                        962 	.ds 2
                           000003   963 Llab6.read_keypad$Data$1$78==.
      000025                        964 _read_keypad_Data_1_78:
      000025                        965 	.ds 2
                           000005   966 Llab6.i2c_write_data$start_reg$1$97==.
      000027                        967 _i2c_write_data_PARM_2:
      000027                        968 	.ds 1
                           000006   969 Llab6.i2c_write_data$buffer$1$97==.
      000028                        970 _i2c_write_data_PARM_3:
      000028                        971 	.ds 3
                           000009   972 Llab6.i2c_write_data$num_bytes$1$97==.
      00002B                        973 _i2c_write_data_PARM_4:
      00002B                        974 	.ds 1
                           00000A   975 Llab6.i2c_read_data$start_reg$1$99==.
      00002C                        976 _i2c_read_data_PARM_2:
      00002C                        977 	.ds 1
                           00000B   978 Llab6.i2c_read_data$buffer$1$99==.
      00002D                        979 _i2c_read_data_PARM_3:
      00002D                        980 	.ds 3
                           00000E   981 Llab6.i2c_read_data$num_bytes$1$99==.
      000030                        982 _i2c_read_data_PARM_4:
      000030                        983 	.ds 1
                           00000F   984 Llab6.Accel_Init$Data2$1$103==.
      000031                        985 _Accel_Init_Data2_1_103:
      000031                        986 	.ds 1
                           000010   987 G$count$0$0==.
      000032                        988 _count::
      000032                        989 	.ds 2
                           000012   990 G$PW_MIN_THRUST$0$0==.
      000034                        991 _PW_MIN_THRUST::
      000034                        992 	.ds 2
                           000014   993 G$PW_NUET_THRUST$0$0==.
      000036                        994 _PW_NUET_THRUST::
      000036                        995 	.ds 2
                           000016   996 G$PW_MAX_THRUST$0$0==.
      000038                        997 _PW_MAX_THRUST::
      000038                        998 	.ds 2
                           000018   999 G$PW_LEFT_RUDDER$0$0==.
      00003A                       1000 _PW_LEFT_RUDDER::
      00003A                       1001 	.ds 2
                           00001A  1002 G$PW_CENTER_RUDDER$0$0==.
      00003C                       1003 _PW_CENTER_RUDDER::
      00003C                       1004 	.ds 2
                           00001C  1005 G$PW_RIGHT_RUDDER$0$0==.
      00003E                       1006 _PW_RIGHT_RUDDER::
      00003E                       1007 	.ds 2
                           00001E  1008 G$PW_UP_ANGLE$0$0==.
      000040                       1009 _PW_UP_ANGLE::
      000040                       1010 	.ds 2
                           000020  1011 G$PW_CENTER_ANGLE$0$0==.
      000042                       1012 _PW_CENTER_ANGLE::
      000042                       1013 	.ds 2
                           000022  1014 G$PW_DOWN_ANGLE$0$0==.
      000044                       1015 _PW_DOWN_ANGLE::
      000044                       1016 	.ds 2
                           000024  1017 G$RUDDER_PW$0$0==.
      000046                       1018 _RUDDER_PW::
      000046                       1019 	.ds 2
                           000026  1020 G$RDR_lo_to_hi$0$0==.
      000048                       1021 _RDR_lo_to_hi::
      000048                       1022 	.ds 2
                           000028  1023 G$ANGLE_PW$0$0==.
      00004A                       1024 _ANGLE_PW::
      00004A                       1025 	.ds 2
                           00002A  1026 G$AGL_lo_to_hi$0$0==.
      00004C                       1027 _AGL_lo_to_hi::
      00004C                       1028 	.ds 2
                           00002C  1029 G$RTHRUST_PW$0$0==.
      00004E                       1030 _RTHRUST_PW::
      00004E                       1031 	.ds 2
                           00002E  1032 G$LTHRUST_PW$0$0==.
      000050                       1033 _LTHRUST_PW::
      000050                       1034 	.ds 2
                           000030  1035 G$RTRST_lo_to_hi$0$0==.
      000052                       1036 _RTRST_lo_to_hi::
      000052                       1037 	.ds 2
                           000032  1038 G$LTRST_lo_to_hi$0$0==.
      000054                       1039 _LTRST_lo_to_hi::
      000054                       1040 	.ds 2
                           000034  1041 G$r_data$0$0==.
      000056                       1042 _r_data::
      000056                       1043 	.ds 2
                           000036  1044 G$r_addr$0$0==.
      000058                       1045 _r_addr::
      000058                       1046 	.ds 1
                           000037  1047 G$kp$0$0==.
      000059                       1048 _kp::
      000059                       1049 	.ds 4
                           00003B  1050 G$kd$0$0==.
      00005D                       1051 _kd::
      00005D                       1052 	.ds 2
                           00003D  1053 Llab6.ReadCompass$Data$1$137==.
      00005F                       1054 _ReadCompass_Data_1_137:
      00005F                       1055 	.ds 2
                           00003F  1056 Llab6.Steering_Servo$sloc0$1$0==.
      000061                       1057 _Steering_Servo_sloc0_1_0:
      000061                       1058 	.ds 4
                                   1059 ;--------------------------------------------------------
                                   1060 ; overlayable items in internal ram 
                                   1061 ;--------------------------------------------------------
                                   1062 	.area	OSEG    (OVR,DATA)
                                   1063 	.area	OSEG    (OVR,DATA)
                                   1064 	.area	OSEG    (OVR,DATA)
                                   1065 	.area	OSEG    (OVR,DATA)
                                   1066 	.area	OSEG    (OVR,DATA)
                                   1067 	.area	OSEG    (OVR,DATA)
                                   1068 	.area	OSEG    (OVR,DATA)
                                   1069 ;--------------------------------------------------------
                                   1070 ; Stack segment in internal ram 
                                   1071 ;--------------------------------------------------------
                                   1072 	.area	SSEG
      00007F                       1073 __start__stack:
      00007F                       1074 	.ds	1
                                   1075 
                                   1076 ;--------------------------------------------------------
                                   1077 ; indirectly addressable internal ram data
                                   1078 ;--------------------------------------------------------
                                   1079 	.area ISEG    (DATA)
                                   1080 ;--------------------------------------------------------
                                   1081 ; absolute internal ram data
                                   1082 ;--------------------------------------------------------
                                   1083 	.area IABS    (ABS,DATA)
                                   1084 	.area IABS    (ABS,DATA)
                                   1085 ;--------------------------------------------------------
                                   1086 ; bit data
                                   1087 ;--------------------------------------------------------
                                   1088 	.area BSEG    (BIT)
                                   1089 ;--------------------------------------------------------
                                   1090 ; paged external ram data
                                   1091 ;--------------------------------------------------------
                                   1092 	.area PSEG    (PAG,XDATA)
                                   1093 ;--------------------------------------------------------
                                   1094 ; external ram data
                                   1095 ;--------------------------------------------------------
                                   1096 	.area XSEG    (XDATA)
                           000000  1097 Llab6.lcd_print$text$1$73==.
      000001                       1098 _lcd_print_text_1_73:
      000001                       1099 	.ds 80
                           000050  1100 G$desired_D$0$0==.
      000051                       1101 _desired_D::
      000051                       1102 	.ds 2
                           000052  1103 G$actual_D$0$0==.
      000053                       1104 _actual_D::
      000053                       1105 	.ds 2
                           000054  1106 G$offset$0$0==.
      000055                       1107 _offset::
      000055                       1108 	.ds 2
                           000056  1109 Llab6.Change_D$temp$1$127==.
      000057                       1110 _Change_D_temp_1_127:
      000057                       1111 	.ds 2
                           000058  1112 Llab6.wait$old_count$1$152==.
      000059                       1113 _wait_old_count_1_152:
      000059                       1114 	.ds 2
                                   1115 ;--------------------------------------------------------
                                   1116 ; absolute external ram data
                                   1117 ;--------------------------------------------------------
                                   1118 	.area XABS    (ABS,XDATA)
                                   1119 ;--------------------------------------------------------
                                   1120 ; external initialized ram data
                                   1121 ;--------------------------------------------------------
                                   1122 	.area XISEG   (XDATA)
                           000000  1123 G$error$0$0==.
      00005B                       1124 _error::
      00005B                       1125 	.ds 2
                           000002  1126 G$old_error$0$0==.
      00005D                       1127 _old_error::
      00005D                       1128 	.ds 2
                           000004  1129 G$distanceR$0$0==.
      00005F                       1130 _distanceR::
      00005F                       1131 	.ds 2
                                   1132 	.area HOME    (CODE)
                                   1133 	.area GSINIT0 (CODE)
                                   1134 	.area GSINIT1 (CODE)
                                   1135 	.area GSINIT2 (CODE)
                                   1136 	.area GSINIT3 (CODE)
                                   1137 	.area GSINIT4 (CODE)
                                   1138 	.area GSINIT5 (CODE)
                                   1139 	.area GSINIT  (CODE)
                                   1140 	.area GSFINAL (CODE)
                                   1141 	.area CSEG    (CODE)
                                   1142 ;--------------------------------------------------------
                                   1143 ; interrupt vector 
                                   1144 ;--------------------------------------------------------
                                   1145 	.area HOME    (CODE)
      000000                       1146 __interrupt_vect:
      000000 02 00 51         [24] 1147 	ljmp	__sdcc_gsinit_startup
      000003 32               [24] 1148 	reti
      000004                       1149 	.ds	7
      00000B 32               [24] 1150 	reti
      00000C                       1151 	.ds	7
      000013 32               [24] 1152 	reti
      000014                       1153 	.ds	7
      00001B 32               [24] 1154 	reti
      00001C                       1155 	.ds	7
      000023 32               [24] 1156 	reti
      000024                       1157 	.ds	7
      00002B 32               [24] 1158 	reti
      00002C                       1159 	.ds	7
      000033 32               [24] 1160 	reti
      000034                       1161 	.ds	7
      00003B 32               [24] 1162 	reti
      00003C                       1163 	.ds	7
      000043 32               [24] 1164 	reti
      000044                       1165 	.ds	7
      00004B 02 0B B4         [24] 1166 	ljmp	_PCA_ISR
                                   1167 ;--------------------------------------------------------
                                   1168 ; global & static initialisations
                                   1169 ;--------------------------------------------------------
                                   1170 	.area HOME    (CODE)
                                   1171 	.area GSINIT  (CODE)
                                   1172 	.area GSFINAL (CODE)
                                   1173 	.area GSINIT  (CODE)
                                   1174 	.globl __sdcc_gsinit_startup
                                   1175 	.globl __sdcc_program_startup
                                   1176 	.globl __start__stack
                                   1177 	.globl __mcs51_genXINIT
                                   1178 	.globl __mcs51_genXRAMCLEAR
                                   1179 	.globl __mcs51_genRAMCLEAR
                           000000  1180 	C$lab6.c$45$1$164 ==.
                                   1181 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:45: int count=0;
      0000AA E4               [12] 1182 	clr	a
      0000AB F5 32            [12] 1183 	mov	_count,a
      0000AD F5 33            [12] 1184 	mov	(_count + 1),a
                           000005  1185 	C$lab6.c$46$1$164 ==.
                                   1186 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:46: unsigned int PW_MIN_THRUST = 2000;
      0000AF 75 34 D0         [24] 1187 	mov	_PW_MIN_THRUST,#0xD0
      0000B2 75 35 07         [24] 1188 	mov	(_PW_MIN_THRUST + 1),#0x07
                           00000B  1189 	C$lab6.c$47$1$164 ==.
                                   1190 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:47: unsigned int PW_NUET_THRUST = 2750;
      0000B5 75 36 BE         [24] 1191 	mov	_PW_NUET_THRUST,#0xBE
      0000B8 75 37 0A         [24] 1192 	mov	(_PW_NUET_THRUST + 1),#0x0A
                           000011  1193 	C$lab6.c$48$1$164 ==.
                                   1194 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:48: unsigned int PW_MAX_THRUST = 3500;
      0000BB 75 38 AC         [24] 1195 	mov	_PW_MAX_THRUST,#0xAC
      0000BE 75 39 0D         [24] 1196 	mov	(_PW_MAX_THRUST + 1),#0x0D
                           000017  1197 	C$lab6.c$50$1$164 ==.
                                   1198 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:50: unsigned int PW_LEFT_RUDDER = 2000;
      0000C1 75 3A D0         [24] 1199 	mov	_PW_LEFT_RUDDER,#0xD0
      0000C4 75 3B 07         [24] 1200 	mov	(_PW_LEFT_RUDDER + 1),#0x07
                           00001D  1201 	C$lab6.c$51$1$164 ==.
                                   1202 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:51: unsigned int PW_CENTER_RUDDER = 2750;
      0000C7 75 3C BE         [24] 1203 	mov	_PW_CENTER_RUDDER,#0xBE
      0000CA 75 3D 0A         [24] 1204 	mov	(_PW_CENTER_RUDDER + 1),#0x0A
                           000023  1205 	C$lab6.c$52$1$164 ==.
                                   1206 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:52: unsigned int PW_RIGHT_RUDDER = 3500;
      0000CD 75 3E AC         [24] 1207 	mov	_PW_RIGHT_RUDDER,#0xAC
      0000D0 75 3F 0D         [24] 1208 	mov	(_PW_RIGHT_RUDDER + 1),#0x0D
                           000029  1209 	C$lab6.c$54$1$164 ==.
                                   1210 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:54: unsigned int PW_UP_ANGLE = 2880;
      0000D3 75 40 40         [24] 1211 	mov	_PW_UP_ANGLE,#0x40
      0000D6 75 41 0B         [24] 1212 	mov	(_PW_UP_ANGLE + 1),#0x0B
                           00002F  1213 	C$lab6.c$55$1$164 ==.
                                   1214 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:55: unsigned int PW_CENTER_ANGLE = 3530;
      0000D9 75 42 CA         [24] 1215 	mov	_PW_CENTER_ANGLE,#0xCA
      0000DC 75 43 0D         [24] 1216 	mov	(_PW_CENTER_ANGLE + 1),#0x0D
                           000035  1217 	C$lab6.c$56$1$164 ==.
                                   1218 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:56: unsigned int PW_DOWN_ANGLE = 4180;
      0000DF 75 44 54         [24] 1219 	mov	_PW_DOWN_ANGLE,#0x54
      0000E2 75 45 10         [24] 1220 	mov	(_PW_DOWN_ANGLE + 1),#0x10
                           00003B  1221 	C$lab6.c$76$1$164 ==.
                                   1222 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:76: unsigned char r_addr = 0xE0;
      0000E5 75 58 E0         [24] 1223 	mov	_r_addr,#0xE0
                                   1224 	.area GSFINAL (CODE)
      0000E8 02 00 4E         [24] 1225 	ljmp	__sdcc_program_startup
                                   1226 ;--------------------------------------------------------
                                   1227 ; Home
                                   1228 ;--------------------------------------------------------
                                   1229 	.area HOME    (CODE)
                                   1230 	.area HOME    (CODE)
      00004E                       1231 __sdcc_program_startup:
      00004E 02 05 C1         [24] 1232 	ljmp	_main
                                   1233 ;	return from main will return to caller
                                   1234 ;--------------------------------------------------------
                                   1235 ; code
                                   1236 ;--------------------------------------------------------
                                   1237 	.area CSEG    (CODE)
                                   1238 ;------------------------------------------------------------
                                   1239 ;Allocation info for local variables in function 'SYSCLK_Init'
                                   1240 ;------------------------------------------------------------
                                   1241 ;i                         Allocated to registers 
                                   1242 ;------------------------------------------------------------
                           000000  1243 	G$SYSCLK_Init$0$0 ==.
                           000000  1244 	C$c8051_SDCC.h$42$0$0 ==.
                                   1245 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:42: void SYSCLK_Init(void)
                                   1246 ;	-----------------------------------------
                                   1247 ;	 function SYSCLK_Init
                                   1248 ;	-----------------------------------------
      0000EB                       1249 _SYSCLK_Init:
                           000007  1250 	ar7 = 0x07
                           000006  1251 	ar6 = 0x06
                           000005  1252 	ar5 = 0x05
                           000004  1253 	ar4 = 0x04
                           000003  1254 	ar3 = 0x03
                           000002  1255 	ar2 = 0x02
                           000001  1256 	ar1 = 0x01
                           000000  1257 	ar0 = 0x00
                           000000  1258 	C$c8051_SDCC.h$46$1$31 ==.
                                   1259 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:46: OSCXCN = 0x67;                      // start external oscillator with
      0000EB 75 B1 67         [24] 1260 	mov	_OSCXCN,#0x67
                           000003  1261 	C$c8051_SDCC.h$49$1$31 ==.
                                   1262 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:49: for (i=0; i < 256; i++);            // wait for oscillator to start
      0000EE 7E 00            [12] 1263 	mov	r6,#0x00
      0000F0 7F 01            [12] 1264 	mov	r7,#0x01
      0000F2                       1265 00107$:
      0000F2 1E               [12] 1266 	dec	r6
      0000F3 BE FF 01         [24] 1267 	cjne	r6,#0xFF,00121$
      0000F6 1F               [12] 1268 	dec	r7
      0000F7                       1269 00121$:
      0000F7 EE               [12] 1270 	mov	a,r6
      0000F8 4F               [12] 1271 	orl	a,r7
      0000F9 70 F7            [24] 1272 	jnz	00107$
                           000010  1273 	C$c8051_SDCC.h$51$1$31 ==.
                                   1274 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:51: while (!(OSCXCN & 0x80));           // Wait for crystal osc. to settle
      0000FB                       1275 00102$:
      0000FB E5 B1            [12] 1276 	mov	a,_OSCXCN
      0000FD 30 E7 FB         [24] 1277 	jnb	acc.7,00102$
                           000015  1278 	C$c8051_SDCC.h$53$1$31 ==.
                                   1279 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:53: OSCICN = 0x88;                      // select external oscillator as SYSCLK
      000100 75 B2 88         [24] 1280 	mov	_OSCICN,#0x88
                           000018  1281 	C$c8051_SDCC.h$56$1$31 ==.
                           000018  1282 	XG$SYSCLK_Init$0$0 ==.
      000103 22               [24] 1283 	ret
                                   1284 ;------------------------------------------------------------
                                   1285 ;Allocation info for local variables in function 'UART0_Init'
                                   1286 ;------------------------------------------------------------
                           000019  1287 	G$UART0_Init$0$0 ==.
                           000019  1288 	C$c8051_SDCC.h$64$1$31 ==.
                                   1289 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:64: void UART0_Init(void)
                                   1290 ;	-----------------------------------------
                                   1291 ;	 function UART0_Init
                                   1292 ;	-----------------------------------------
      000104                       1293 _UART0_Init:
                           000019  1294 	C$c8051_SDCC.h$66$1$33 ==.
                                   1295 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:66: SCON0  = 0x50;                      // SCON0: mode 1, 8-bit UART, enable RX
      000104 75 98 50         [24] 1296 	mov	_SCON0,#0x50
                           00001C  1297 	C$c8051_SDCC.h$67$1$33 ==.
                                   1298 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:67: TMOD   = 0x20;                      // TMOD: timer 1, mode 2, 8-bit reload
      000107 75 89 20         [24] 1299 	mov	_TMOD,#0x20
                           00001F  1300 	C$c8051_SDCC.h$68$1$33 ==.
                                   1301 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:68: TH1    = -(SYSCLK/BAUDRATE/16);     // set Timer1 reload value for baudrate
      00010A 75 8D DC         [24] 1302 	mov	_TH1,#0xDC
                           000022  1303 	C$c8051_SDCC.h$69$1$33 ==.
                                   1304 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:69: TR1    = 1;                         // start Timer1
      00010D D2 8E            [12] 1305 	setb	_TR1
                           000024  1306 	C$c8051_SDCC.h$70$1$33 ==.
                                   1307 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:70: CKCON |= 0x10;                      // Timer1 uses SYSCLK as time base
      00010F 43 8E 10         [24] 1308 	orl	_CKCON,#0x10
                           000027  1309 	C$c8051_SDCC.h$71$1$33 ==.
                                   1310 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:71: PCON  |= 0x80;                      // SMOD00 = 1 (disable baud rate 
      000112 43 87 80         [24] 1311 	orl	_PCON,#0x80
                           00002A  1312 	C$c8051_SDCC.h$73$1$33 ==.
                                   1313 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:73: TI0    = 1;                         // Indicate TX0 ready
      000115 D2 99            [12] 1314 	setb	_TI0
                           00002C  1315 	C$c8051_SDCC.h$74$1$33 ==.
                                   1316 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:74: P0MDOUT |= 0x01;                    // Set TX0 to push/pull
      000117 43 A4 01         [24] 1317 	orl	_P0MDOUT,#0x01
                           00002F  1318 	C$c8051_SDCC.h$75$1$33 ==.
                           00002F  1319 	XG$UART0_Init$0$0 ==.
      00011A 22               [24] 1320 	ret
                                   1321 ;------------------------------------------------------------
                                   1322 ;Allocation info for local variables in function 'Sys_Init'
                                   1323 ;------------------------------------------------------------
                           000030  1324 	G$Sys_Init$0$0 ==.
                           000030  1325 	C$c8051_SDCC.h$83$1$33 ==.
                                   1326 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:83: void Sys_Init(void)
                                   1327 ;	-----------------------------------------
                                   1328 ;	 function Sys_Init
                                   1329 ;	-----------------------------------------
      00011B                       1330 _Sys_Init:
                           000030  1331 	C$c8051_SDCC.h$85$1$35 ==.
                                   1332 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:85: WDTCN = 0xde;			// disable watchdog timer
      00011B 75 FF DE         [24] 1333 	mov	_WDTCN,#0xDE
                           000033  1334 	C$c8051_SDCC.h$86$1$35 ==.
                                   1335 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:86: WDTCN = 0xad;
      00011E 75 FF AD         [24] 1336 	mov	_WDTCN,#0xAD
                           000036  1337 	C$c8051_SDCC.h$88$1$35 ==.
                                   1338 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:88: SYSCLK_Init();			// initialize oscillator
      000121 12 00 EB         [24] 1339 	lcall	_SYSCLK_Init
                           000039  1340 	C$c8051_SDCC.h$89$1$35 ==.
                                   1341 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:89: UART0_Init();			// initialize UART0
      000124 12 01 04         [24] 1342 	lcall	_UART0_Init
                           00003C  1343 	C$c8051_SDCC.h$91$1$35 ==.
                                   1344 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:91: XBR0 |= 0x04;
      000127 43 E1 04         [24] 1345 	orl	_XBR0,#0x04
                           00003F  1346 	C$c8051_SDCC.h$92$1$35 ==.
                                   1347 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:92: XBR2 |= 0x40;                    	// Enable crossbar and weak pull-ups
      00012A 43 E3 40         [24] 1348 	orl	_XBR2,#0x40
                           000042  1349 	C$c8051_SDCC.h$93$1$35 ==.
                           000042  1350 	XG$Sys_Init$0$0 ==.
      00012D 22               [24] 1351 	ret
                                   1352 ;------------------------------------------------------------
                                   1353 ;Allocation info for local variables in function 'putchar'
                                   1354 ;------------------------------------------------------------
                                   1355 ;c                         Allocated to registers r7 
                                   1356 ;------------------------------------------------------------
                           000043  1357 	G$putchar$0$0 ==.
                           000043  1358 	C$c8051_SDCC.h$98$1$35 ==.
                                   1359 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:98: void putchar(char c)
                                   1360 ;	-----------------------------------------
                                   1361 ;	 function putchar
                                   1362 ;	-----------------------------------------
      00012E                       1363 _putchar:
      00012E AF 82            [24] 1364 	mov	r7,dpl
                           000045  1365 	C$c8051_SDCC.h$100$1$37 ==.
                                   1366 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:100: while (!TI0); 
      000130                       1367 00101$:
                           000045  1368 	C$c8051_SDCC.h$101$1$37 ==.
                                   1369 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:101: TI0 = 0;
      000130 10 99 02         [24] 1370 	jbc	_TI0,00112$
      000133 80 FB            [24] 1371 	sjmp	00101$
      000135                       1372 00112$:
                           00004A  1373 	C$c8051_SDCC.h$102$1$37 ==.
                                   1374 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:102: SBUF0 = c;
      000135 8F 99            [24] 1375 	mov	_SBUF0,r7
                           00004C  1376 	C$c8051_SDCC.h$103$1$37 ==.
                           00004C  1377 	XG$putchar$0$0 ==.
      000137 22               [24] 1378 	ret
                                   1379 ;------------------------------------------------------------
                                   1380 ;Allocation info for local variables in function 'getchar'
                                   1381 ;------------------------------------------------------------
                                   1382 ;c                         Allocated to registers 
                                   1383 ;------------------------------------------------------------
                           00004D  1384 	G$getchar$0$0 ==.
                           00004D  1385 	C$c8051_SDCC.h$108$1$37 ==.
                                   1386 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:108: char getchar(void)
                                   1387 ;	-----------------------------------------
                                   1388 ;	 function getchar
                                   1389 ;	-----------------------------------------
      000138                       1390 _getchar:
                           00004D  1391 	C$c8051_SDCC.h$111$1$39 ==.
                                   1392 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:111: while (!RI0);
      000138                       1393 00101$:
                           00004D  1394 	C$c8051_SDCC.h$112$1$39 ==.
                                   1395 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:112: RI0 = 0;
      000138 10 98 02         [24] 1396 	jbc	_RI0,00112$
      00013B 80 FB            [24] 1397 	sjmp	00101$
      00013D                       1398 00112$:
                           000052  1399 	C$c8051_SDCC.h$113$1$39 ==.
                                   1400 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:113: c = SBUF0;
      00013D 85 99 82         [24] 1401 	mov	dpl,_SBUF0
                           000055  1402 	C$c8051_SDCC.h$114$1$39 ==.
                                   1403 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:114: putchar(c);                          // echo to terminal
      000140 12 01 2E         [24] 1404 	lcall	_putchar
                           000058  1405 	C$c8051_SDCC.h$115$1$39 ==.
                                   1406 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:115: return SBUF0;
      000143 85 99 82         [24] 1407 	mov	dpl,_SBUF0
                           00005B  1408 	C$c8051_SDCC.h$116$1$39 ==.
                           00005B  1409 	XG$getchar$0$0 ==.
      000146 22               [24] 1410 	ret
                                   1411 ;------------------------------------------------------------
                                   1412 ;Allocation info for local variables in function 'lcd_print'
                                   1413 ;------------------------------------------------------------
                                   1414 ;fmt                       Allocated to stack - _bp -5
                                   1415 ;len                       Allocated to registers r6 
                                   1416 ;i                         Allocated to registers 
                                   1417 ;ap                        Allocated to registers 
                                   1418 ;text                      Allocated with name '_lcd_print_text_1_73'
                                   1419 ;------------------------------------------------------------
                           00005C  1420 	G$lcd_print$0$0 ==.
                           00005C  1421 	C$i2c.h$81$1$39 ==.
                                   1422 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:81: void lcd_print(const char *fmt, ...)
                                   1423 ;	-----------------------------------------
                                   1424 ;	 function lcd_print
                                   1425 ;	-----------------------------------------
      000147                       1426 _lcd_print:
      000147 C0 0F            [24] 1427 	push	_bp
      000149 85 81 0F         [24] 1428 	mov	_bp,sp
                           000061  1429 	C$i2c.h$87$1$73 ==.
                                   1430 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:87: if ( strlen(fmt) <= 0 ) return;   //If there is no data to print, return
      00014C E5 0F            [12] 1431 	mov	a,_bp
      00014E 24 FB            [12] 1432 	add	a,#0xfb
      000150 F8               [12] 1433 	mov	r0,a
      000151 86 82            [24] 1434 	mov	dpl,@r0
      000153 08               [12] 1435 	inc	r0
      000154 86 83            [24] 1436 	mov	dph,@r0
      000156 08               [12] 1437 	inc	r0
      000157 86 F0            [24] 1438 	mov	b,@r0
      000159 12 15 7C         [24] 1439 	lcall	_strlen
      00015C E5 82            [12] 1440 	mov	a,dpl
      00015E 85 83 F0         [24] 1441 	mov	b,dph
      000161 45 F0            [12] 1442 	orl	a,b
      000163 70 02            [24] 1443 	jnz	00102$
      000165 80 62            [24] 1444 	sjmp	00109$
      000167                       1445 00102$:
                           00007C  1446 	C$i2c.h$89$2$74 ==.
                                   1447 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:89: va_start(ap, fmt);
      000167 E5 0F            [12] 1448 	mov	a,_bp
      000169 24 FB            [12] 1449 	add	a,#0xFB
      00016B FF               [12] 1450 	mov	r7,a
      00016C 8F 0B            [24] 1451 	mov	_vsprintf_PARM_3,r7
                           000083  1452 	C$i2c.h$90$1$73 ==.
                                   1453 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:90: vsprintf(text, fmt, ap);
      00016E E5 0F            [12] 1454 	mov	a,_bp
      000170 24 FB            [12] 1455 	add	a,#0xfb
      000172 F8               [12] 1456 	mov	r0,a
      000173 86 08            [24] 1457 	mov	_vsprintf_PARM_2,@r0
      000175 08               [12] 1458 	inc	r0
      000176 86 09            [24] 1459 	mov	(_vsprintf_PARM_2 + 1),@r0
      000178 08               [12] 1460 	inc	r0
      000179 86 0A            [24] 1461 	mov	(_vsprintf_PARM_2 + 2),@r0
      00017B 90 00 01         [24] 1462 	mov	dptr,#_lcd_print_text_1_73
      00017E 75 F0 00         [24] 1463 	mov	b,#0x00
      000181 12 0D 8A         [24] 1464 	lcall	_vsprintf
                           000099  1465 	C$i2c.h$93$1$73 ==.
                                   1466 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:93: len = strlen(text);
      000184 90 00 01         [24] 1467 	mov	dptr,#_lcd_print_text_1_73
      000187 75 F0 00         [24] 1468 	mov	b,#0x00
      00018A 12 15 7C         [24] 1469 	lcall	_strlen
      00018D AE 82            [24] 1470 	mov	r6,dpl
                           0000A4  1471 	C$i2c.h$94$1$73 ==.
                                   1472 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:94: for(i=0; i<len; i++)
      00018F 7F 00            [12] 1473 	mov	r7,#0x00
      000191                       1474 00107$:
      000191 C3               [12] 1475 	clr	c
      000192 EF               [12] 1476 	mov	a,r7
      000193 9E               [12] 1477 	subb	a,r6
      000194 50 1F            [24] 1478 	jnc	00105$
                           0000AB  1479 	C$i2c.h$96$2$76 ==.
                                   1480 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:96: if(text[i] == (unsigned char)'\n') text[i] = 13;
      000196 EF               [12] 1481 	mov	a,r7
      000197 24 01            [12] 1482 	add	a,#_lcd_print_text_1_73
      000199 F5 82            [12] 1483 	mov	dpl,a
      00019B E4               [12] 1484 	clr	a
      00019C 34 00            [12] 1485 	addc	a,#(_lcd_print_text_1_73 >> 8)
      00019E F5 83            [12] 1486 	mov	dph,a
      0001A0 E0               [24] 1487 	movx	a,@dptr
      0001A1 FD               [12] 1488 	mov	r5,a
      0001A2 BD 0A 0D         [24] 1489 	cjne	r5,#0x0A,00108$
      0001A5 EF               [12] 1490 	mov	a,r7
      0001A6 24 01            [12] 1491 	add	a,#_lcd_print_text_1_73
      0001A8 F5 82            [12] 1492 	mov	dpl,a
      0001AA E4               [12] 1493 	clr	a
      0001AB 34 00            [12] 1494 	addc	a,#(_lcd_print_text_1_73 >> 8)
      0001AD F5 83            [12] 1495 	mov	dph,a
      0001AF 74 0D            [12] 1496 	mov	a,#0x0D
      0001B1 F0               [24] 1497 	movx	@dptr,a
      0001B2                       1498 00108$:
                           0000C7  1499 	C$i2c.h$94$1$73 ==.
                                   1500 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:94: for(i=0; i<len; i++)
      0001B2 0F               [12] 1501 	inc	r7
      0001B3 80 DC            [24] 1502 	sjmp	00107$
      0001B5                       1503 00105$:
                           0000CA  1504 	C$i2c.h$99$1$73 ==.
                                   1505 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:99: i2c_write_data(0xC6, 0x00, text, len);
      0001B5 75 28 01         [24] 1506 	mov	_i2c_write_data_PARM_3,#_lcd_print_text_1_73
      0001B8 75 29 00         [24] 1507 	mov	(_i2c_write_data_PARM_3 + 1),#(_lcd_print_text_1_73 >> 8)
      0001BB 75 2A 00         [24] 1508 	mov	(_i2c_write_data_PARM_3 + 2),#0x00
      0001BE 75 27 00         [24] 1509 	mov	_i2c_write_data_PARM_2,#0x00
      0001C1 8E 2B            [24] 1510 	mov	_i2c_write_data_PARM_4,r6
      0001C3 75 82 C6         [24] 1511 	mov	dpl,#0xC6
      0001C6 12 04 5D         [24] 1512 	lcall	_i2c_write_data
      0001C9                       1513 00109$:
      0001C9 D0 0F            [24] 1514 	pop	_bp
                           0000E0  1515 	C$i2c.h$100$1$73 ==.
                           0000E0  1516 	XG$lcd_print$0$0 ==.
      0001CB 22               [24] 1517 	ret
                                   1518 ;------------------------------------------------------------
                                   1519 ;Allocation info for local variables in function 'lcd_clear'
                                   1520 ;------------------------------------------------------------
                                   1521 ;NumBytes                  Allocated with name '_lcd_clear_NumBytes_1_77'
                                   1522 ;Cmd                       Allocated with name '_lcd_clear_Cmd_1_77'
                                   1523 ;------------------------------------------------------------
                           0000E1  1524 	G$lcd_clear$0$0 ==.
                           0000E1  1525 	C$i2c.h$103$1$73 ==.
                                   1526 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:103: void lcd_clear()
                                   1527 ;	-----------------------------------------
                                   1528 ;	 function lcd_clear
                                   1529 ;	-----------------------------------------
      0001CC                       1530 _lcd_clear:
                           0000E1  1531 	C$i2c.h$105$1$73 ==.
                                   1532 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:105: unsigned char NumBytes=0, Cmd[2];
      0001CC 75 22 00         [24] 1533 	mov	_lcd_clear_NumBytes_1_77,#0x00
                           0000E4  1534 	C$i2c.h$107$1$77 ==.
                                   1535 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:107: while(NumBytes < 64) i2c_read_data(0xC6, 0x00, &NumBytes, 1);
      0001CF                       1536 00101$:
      0001CF 74 C0            [12] 1537 	mov	a,#0x100 - 0x40
      0001D1 25 22            [12] 1538 	add	a,_lcd_clear_NumBytes_1_77
      0001D3 40 17            [24] 1539 	jc	00103$
      0001D5 75 2D 22         [24] 1540 	mov	_i2c_read_data_PARM_3,#_lcd_clear_NumBytes_1_77
      0001D8 75 2E 00         [24] 1541 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0001DB 75 2F 40         [24] 1542 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0001DE 75 2C 00         [24] 1543 	mov	_i2c_read_data_PARM_2,#0x00
      0001E1 75 30 01         [24] 1544 	mov	_i2c_read_data_PARM_4,#0x01
      0001E4 75 82 C6         [24] 1545 	mov	dpl,#0xC6
      0001E7 12 04 D3         [24] 1546 	lcall	_i2c_read_data
      0001EA 80 E3            [24] 1547 	sjmp	00101$
      0001EC                       1548 00103$:
                           000101  1549 	C$i2c.h$109$1$77 ==.
                                   1550 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:109: Cmd[0] = 12;
      0001EC 75 23 0C         [24] 1551 	mov	_lcd_clear_Cmd_1_77,#0x0C
                           000104  1552 	C$i2c.h$110$1$77 ==.
                                   1553 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:110: i2c_write_data(0xC6, 0x00, Cmd, 1);
      0001EF 75 28 23         [24] 1554 	mov	_i2c_write_data_PARM_3,#_lcd_clear_Cmd_1_77
      0001F2 75 29 00         [24] 1555 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      0001F5 75 2A 40         [24] 1556 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      0001F8 75 27 00         [24] 1557 	mov	_i2c_write_data_PARM_2,#0x00
      0001FB 75 2B 01         [24] 1558 	mov	_i2c_write_data_PARM_4,#0x01
      0001FE 75 82 C6         [24] 1559 	mov	dpl,#0xC6
      000201 12 04 5D         [24] 1560 	lcall	_i2c_write_data
                           000119  1561 	C$i2c.h$111$1$77 ==.
                           000119  1562 	XG$lcd_clear$0$0 ==.
      000204 22               [24] 1563 	ret
                                   1564 ;------------------------------------------------------------
                                   1565 ;Allocation info for local variables in function 'read_keypad'
                                   1566 ;------------------------------------------------------------
                                   1567 ;i                         Allocated to registers r7 
                                   1568 ;Data                      Allocated with name '_read_keypad_Data_1_78'
                                   1569 ;------------------------------------------------------------
                           00011A  1570 	G$read_keypad$0$0 ==.
                           00011A  1571 	C$i2c.h$114$1$77 ==.
                                   1572 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:114: char read_keypad()
                                   1573 ;	-----------------------------------------
                                   1574 ;	 function read_keypad
                                   1575 ;	-----------------------------------------
      000205                       1576 _read_keypad:
                           00011A  1577 	C$i2c.h$118$1$78 ==.
                                   1578 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:118: i2c_read_data(0xC6, 0x01, Data, 2); //Read I2C data on address 192, register 1, 2 bytes of data.
      000205 75 2D 25         [24] 1579 	mov	_i2c_read_data_PARM_3,#_read_keypad_Data_1_78
      000208 75 2E 00         [24] 1580 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      00020B 75 2F 40         [24] 1581 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      00020E 75 2C 01         [24] 1582 	mov	_i2c_read_data_PARM_2,#0x01
      000211 75 30 02         [24] 1583 	mov	_i2c_read_data_PARM_4,#0x02
      000214 75 82 C6         [24] 1584 	mov	dpl,#0xC6
      000217 12 04 D3         [24] 1585 	lcall	_i2c_read_data
                           00012F  1586 	C$i2c.h$119$1$78 ==.
                                   1587 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:119: if(Data[0] == 0xFF) return 0;  //No response on bus, no display
      00021A 74 FF            [12] 1588 	mov	a,#0xFF
      00021C B5 25 05         [24] 1589 	cjne	a,_read_keypad_Data_1_78,00102$
      00021F 75 82 00         [24] 1590 	mov	dpl,#0x00
      000222 80 5F            [24] 1591 	sjmp	00116$
      000224                       1592 00102$:
                           000139  1593 	C$i2c.h$121$1$78 ==.
                                   1594 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:121: for(i=0; i<8; i++)             //loop 8 times
      000224 7F 00            [12] 1595 	mov	r7,#0x00
      000226 8F 06            [24] 1596 	mov	ar6,r7
      000228                       1597 00114$:
                           00013D  1598 	C$i2c.h$123$2$79 ==.
                                   1599 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:123: if(Data[0] & (0x01 << i))  //find the ASCII value of the keypad read, if it is the current loop value
      000228 8E F0            [24] 1600 	mov	b,r6
      00022A 05 F0            [12] 1601 	inc	b
      00022C 7C 01            [12] 1602 	mov	r4,#0x01
      00022E 7D 00            [12] 1603 	mov	r5,#0x00
      000230 80 06            [24] 1604 	sjmp	00145$
      000232                       1605 00144$:
      000232 EC               [12] 1606 	mov	a,r4
      000233 2C               [12] 1607 	add	a,r4
      000234 FC               [12] 1608 	mov	r4,a
      000235 ED               [12] 1609 	mov	a,r5
      000236 33               [12] 1610 	rlc	a
      000237 FD               [12] 1611 	mov	r5,a
      000238                       1612 00145$:
      000238 D5 F0 F7         [24] 1613 	djnz	b,00144$
      00023B AA 25            [24] 1614 	mov	r2,_read_keypad_Data_1_78
      00023D 7B 00            [12] 1615 	mov	r3,#0x00
      00023F EA               [12] 1616 	mov	a,r2
      000240 52 04            [12] 1617 	anl	ar4,a
      000242 EB               [12] 1618 	mov	a,r3
      000243 52 05            [12] 1619 	anl	ar5,a
      000245 EC               [12] 1620 	mov	a,r4
      000246 4D               [12] 1621 	orl	a,r5
      000247 60 07            [24] 1622 	jz	00115$
                           00015E  1623 	C$i2c.h$124$2$79 ==.
                                   1624 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:124: return i+49;
      000249 74 31            [12] 1625 	mov	a,#0x31
      00024B 2F               [12] 1626 	add	a,r7
      00024C F5 82            [12] 1627 	mov	dpl,a
      00024E 80 33            [24] 1628 	sjmp	00116$
      000250                       1629 00115$:
                           000165  1630 	C$i2c.h$121$1$78 ==.
                                   1631 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:121: for(i=0; i<8; i++)             //loop 8 times
      000250 0E               [12] 1632 	inc	r6
      000251 8E 07            [24] 1633 	mov	ar7,r6
      000253 BE 08 00         [24] 1634 	cjne	r6,#0x08,00147$
      000256                       1635 00147$:
      000256 40 D0            [24] 1636 	jc	00114$
                           00016D  1637 	C$i2c.h$127$1$78 ==.
                                   1638 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:127: if(Data[1] & 0x01) return '9'; //if the value is equal to 9 return 9.
      000258 E5 26            [12] 1639 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      00025A 30 E0 05         [24] 1640 	jnb	acc.0,00107$
      00025D 75 82 39         [24] 1641 	mov	dpl,#0x39
      000260 80 21            [24] 1642 	sjmp	00116$
      000262                       1643 00107$:
                           000177  1644 	C$i2c.h$129$1$78 ==.
                                   1645 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:129: if(Data[1] & 0x02) return '*'; //if the value is equal to the star.
      000262 E5 26            [12] 1646 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000264 30 E1 05         [24] 1647 	jnb	acc.1,00109$
      000267 75 82 2A         [24] 1648 	mov	dpl,#0x2A
      00026A 80 17            [24] 1649 	sjmp	00116$
      00026C                       1650 00109$:
                           000181  1651 	C$i2c.h$131$1$78 ==.
                                   1652 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:131: if(Data[1] & 0x04) return '0'; //if the value is equal to the 0 key
      00026C E5 26            [12] 1653 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      00026E 30 E2 05         [24] 1654 	jnb	acc.2,00111$
      000271 75 82 30         [24] 1655 	mov	dpl,#0x30
      000274 80 0D            [24] 1656 	sjmp	00116$
      000276                       1657 00111$:
                           00018B  1658 	C$i2c.h$133$1$78 ==.
                                   1659 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:133: if(Data[1] & 0x08) return '#'; //if the value is equal to the pound key
      000276 E5 26            [12] 1660 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000278 30 E3 05         [24] 1661 	jnb	acc.3,00113$
      00027B 75 82 23         [24] 1662 	mov	dpl,#0x23
      00027E 80 03            [24] 1663 	sjmp	00116$
      000280                       1664 00113$:
                           000195  1665 	C$i2c.h$135$1$78 ==.
                                   1666 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:135: return -1;                     //else return a numerical -1 (0xFF)
      000280 75 82 FF         [24] 1667 	mov	dpl,#0xFF
      000283                       1668 00116$:
                           000198  1669 	C$i2c.h$136$1$78 ==.
                           000198  1670 	XG$read_keypad$0$0 ==.
      000283 22               [24] 1671 	ret
                                   1672 ;------------------------------------------------------------
                                   1673 ;Allocation info for local variables in function 'kpd_input'
                                   1674 ;------------------------------------------------------------
                                   1675 ;mode                      Allocated to registers r7 
                                   1676 ;sum                       Allocated to registers r5 r6 
                                   1677 ;key                       Allocated to registers r3 
                                   1678 ;i                         Allocated to registers 
                                   1679 ;------------------------------------------------------------
                           000199  1680 	G$kpd_input$0$0 ==.
                           000199  1681 	C$i2c.h$148$1$78 ==.
                                   1682 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:148: unsigned int kpd_input(char mode)
                                   1683 ;	-----------------------------------------
                                   1684 ;	 function kpd_input
                                   1685 ;	-----------------------------------------
      000284                       1686 _kpd_input:
      000284 AF 82            [24] 1687 	mov	r7,dpl
                           00019B  1688 	C$i2c.h$153$1$81 ==.
                                   1689 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:153: sum = 0;
                           00019B  1690 	C$i2c.h$156$1$81 ==.
                                   1691 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:156: if(mode==0)lcd_print("\nType digits; end w/#");
      000286 E4               [12] 1692 	clr	a
      000287 FD               [12] 1693 	mov	r5,a
      000288 FE               [12] 1694 	mov	r6,a
      000289 EF               [12] 1695 	mov	a,r7
      00028A 70 1D            [24] 1696 	jnz	00102$
      00028C C0 06            [24] 1697 	push	ar6
      00028E C0 05            [24] 1698 	push	ar5
      000290 74 01            [12] 1699 	mov	a,#___str_0
      000292 C0 E0            [24] 1700 	push	acc
      000294 74 17            [12] 1701 	mov	a,#(___str_0 >> 8)
      000296 C0 E0            [24] 1702 	push	acc
      000298 74 80            [12] 1703 	mov	a,#0x80
      00029A C0 E0            [24] 1704 	push	acc
      00029C 12 01 47         [24] 1705 	lcall	_lcd_print
      00029F 15 81            [12] 1706 	dec	sp
      0002A1 15 81            [12] 1707 	dec	sp
      0002A3 15 81            [12] 1708 	dec	sp
      0002A5 D0 05            [24] 1709 	pop	ar5
      0002A7 D0 06            [24] 1710 	pop	ar6
      0002A9                       1711 00102$:
                           0001BE  1712 	C$i2c.h$158$1$81 ==.
                                   1713 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:158: lcd_print("     %c%c%c%c%c",0x08,0x08,0x08,0x08,0x08);
      0002A9 C0 06            [24] 1714 	push	ar6
      0002AB C0 05            [24] 1715 	push	ar5
      0002AD 74 08            [12] 1716 	mov	a,#0x08
      0002AF C0 E0            [24] 1717 	push	acc
      0002B1 E4               [12] 1718 	clr	a
      0002B2 C0 E0            [24] 1719 	push	acc
      0002B4 74 08            [12] 1720 	mov	a,#0x08
      0002B6 C0 E0            [24] 1721 	push	acc
      0002B8 E4               [12] 1722 	clr	a
      0002B9 C0 E0            [24] 1723 	push	acc
      0002BB 74 08            [12] 1724 	mov	a,#0x08
      0002BD C0 E0            [24] 1725 	push	acc
      0002BF E4               [12] 1726 	clr	a
      0002C0 C0 E0            [24] 1727 	push	acc
      0002C2 74 08            [12] 1728 	mov	a,#0x08
      0002C4 C0 E0            [24] 1729 	push	acc
      0002C6 E4               [12] 1730 	clr	a
      0002C7 C0 E0            [24] 1731 	push	acc
      0002C9 74 08            [12] 1732 	mov	a,#0x08
      0002CB C0 E0            [24] 1733 	push	acc
      0002CD E4               [12] 1734 	clr	a
      0002CE C0 E0            [24] 1735 	push	acc
      0002D0 74 17            [12] 1736 	mov	a,#___str_1
      0002D2 C0 E0            [24] 1737 	push	acc
      0002D4 74 17            [12] 1738 	mov	a,#(___str_1 >> 8)
      0002D6 C0 E0            [24] 1739 	push	acc
      0002D8 74 80            [12] 1740 	mov	a,#0x80
      0002DA C0 E0            [24] 1741 	push	acc
      0002DC 12 01 47         [24] 1742 	lcall	_lcd_print
      0002DF E5 81            [12] 1743 	mov	a,sp
      0002E1 24 F3            [12] 1744 	add	a,#0xf3
      0002E3 F5 81            [12] 1745 	mov	sp,a
                           0001FA  1746 	C$i2c.h$160$1$81 ==.
                                   1747 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:160: delay_time(500000);	//Add 20ms delay before reading i2c in loop
      0002E5 90 A1 20         [24] 1748 	mov	dptr,#0xA120
      0002E8 75 F0 07         [24] 1749 	mov	b,#0x07
      0002EB E4               [12] 1750 	clr	a
      0002EC 12 03 F8         [24] 1751 	lcall	_delay_time
      0002EF D0 05            [24] 1752 	pop	ar5
      0002F1 D0 06            [24] 1753 	pop	ar6
                           000208  1754 	C$i2c.h$164$1$81 ==.
                                   1755 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:164: for(i=0; i<5; i++)
      0002F3 7F 00            [12] 1756 	mov	r7,#0x00
                           00020A  1757 	C$i2c.h$166$3$84 ==.
                                   1758 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:166: while(((key=read_keypad()) == -1) || (key == '*'))delay_time(10000);
      0002F5                       1759 00104$:
      0002F5 C0 07            [24] 1760 	push	ar7
      0002F7 C0 06            [24] 1761 	push	ar6
      0002F9 C0 05            [24] 1762 	push	ar5
      0002FB 12 02 05         [24] 1763 	lcall	_read_keypad
      0002FE AC 82            [24] 1764 	mov	r4,dpl
      000300 D0 05            [24] 1765 	pop	ar5
      000302 D0 06            [24] 1766 	pop	ar6
      000304 D0 07            [24] 1767 	pop	ar7
      000306 8C 03            [24] 1768 	mov	ar3,r4
      000308 BC FF 02         [24] 1769 	cjne	r4,#0xFF,00146$
      00030B 80 03            [24] 1770 	sjmp	00105$
      00030D                       1771 00146$:
      00030D BB 2A 17         [24] 1772 	cjne	r3,#0x2A,00106$
      000310                       1773 00105$:
      000310 90 27 10         [24] 1774 	mov	dptr,#0x2710
      000313 E4               [12] 1775 	clr	a
      000314 F5 F0            [12] 1776 	mov	b,a
      000316 C0 07            [24] 1777 	push	ar7
      000318 C0 06            [24] 1778 	push	ar6
      00031A C0 05            [24] 1779 	push	ar5
      00031C 12 03 F8         [24] 1780 	lcall	_delay_time
      00031F D0 05            [24] 1781 	pop	ar5
      000321 D0 06            [24] 1782 	pop	ar6
      000323 D0 07            [24] 1783 	pop	ar7
      000325 80 CE            [24] 1784 	sjmp	00104$
      000327                       1785 00106$:
                           00023C  1786 	C$i2c.h$167$2$82 ==.
                                   1787 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:167: if(key == '#')
      000327 BB 23 2A         [24] 1788 	cjne	r3,#0x23,00114$
                           00023F  1789 	C$i2c.h$169$3$83 ==.
                                   1790 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:169: while(read_keypad() == '#')delay_time(10000);
      00032A                       1791 00107$:
      00032A C0 06            [24] 1792 	push	ar6
      00032C C0 05            [24] 1793 	push	ar5
      00032E 12 02 05         [24] 1794 	lcall	_read_keypad
      000331 AC 82            [24] 1795 	mov	r4,dpl
      000333 D0 05            [24] 1796 	pop	ar5
      000335 D0 06            [24] 1797 	pop	ar6
      000337 BC 23 13         [24] 1798 	cjne	r4,#0x23,00109$
      00033A 90 27 10         [24] 1799 	mov	dptr,#0x2710
      00033D E4               [12] 1800 	clr	a
      00033E F5 F0            [12] 1801 	mov	b,a
      000340 C0 06            [24] 1802 	push	ar6
      000342 C0 05            [24] 1803 	push	ar5
      000344 12 03 F8         [24] 1804 	lcall	_delay_time
      000347 D0 05            [24] 1805 	pop	ar5
      000349 D0 06            [24] 1806 	pop	ar6
      00034B 80 DD            [24] 1807 	sjmp	00107$
      00034D                       1808 00109$:
                           000262  1809 	C$i2c.h$170$3$83 ==.
                                   1810 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:170: return sum;
      00034D 8D 82            [24] 1811 	mov	dpl,r5
      00034F 8E 83            [24] 1812 	mov	dph,r6
      000351 02 03 F7         [24] 1813 	ljmp	00119$
      000354                       1814 00114$:
                           000269  1815 	C$i2c.h$174$3$84 ==.
                                   1816 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:174: lcd_print("%c", key);
      000354 EB               [12] 1817 	mov	a,r3
      000355 FA               [12] 1818 	mov	r2,a
      000356 33               [12] 1819 	rlc	a
      000357 95 E0            [12] 1820 	subb	a,acc
      000359 FC               [12] 1821 	mov	r4,a
      00035A C0 07            [24] 1822 	push	ar7
      00035C C0 06            [24] 1823 	push	ar6
      00035E C0 05            [24] 1824 	push	ar5
      000360 C0 04            [24] 1825 	push	ar4
      000362 C0 03            [24] 1826 	push	ar3
      000364 C0 02            [24] 1827 	push	ar2
      000366 C0 02            [24] 1828 	push	ar2
      000368 C0 04            [24] 1829 	push	ar4
      00036A 74 27            [12] 1830 	mov	a,#___str_2
      00036C C0 E0            [24] 1831 	push	acc
      00036E 74 17            [12] 1832 	mov	a,#(___str_2 >> 8)
      000370 C0 E0            [24] 1833 	push	acc
      000372 74 80            [12] 1834 	mov	a,#0x80
      000374 C0 E0            [24] 1835 	push	acc
      000376 12 01 47         [24] 1836 	lcall	_lcd_print
      000379 E5 81            [12] 1837 	mov	a,sp
      00037B 24 FB            [12] 1838 	add	a,#0xfb
      00037D F5 81            [12] 1839 	mov	sp,a
      00037F D0 02            [24] 1840 	pop	ar2
      000381 D0 03            [24] 1841 	pop	ar3
      000383 D0 04            [24] 1842 	pop	ar4
      000385 D0 05            [24] 1843 	pop	ar5
      000387 D0 06            [24] 1844 	pop	ar6
                           00029E  1845 	C$i2c.h$175$1$81 ==.
                                   1846 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:175: sum = sum*10 + key - '0';
      000389 8D 11            [24] 1847 	mov	__mulint_PARM_2,r5
      00038B 8E 12            [24] 1848 	mov	(__mulint_PARM_2 + 1),r6
      00038D 90 00 0A         [24] 1849 	mov	dptr,#0x000A
      000390 C0 04            [24] 1850 	push	ar4
      000392 C0 03            [24] 1851 	push	ar3
      000394 C0 02            [24] 1852 	push	ar2
      000396 12 0C FD         [24] 1853 	lcall	__mulint
      000399 A8 82            [24] 1854 	mov	r0,dpl
      00039B A9 83            [24] 1855 	mov	r1,dph
      00039D D0 02            [24] 1856 	pop	ar2
      00039F D0 03            [24] 1857 	pop	ar3
      0003A1 D0 04            [24] 1858 	pop	ar4
      0003A3 D0 07            [24] 1859 	pop	ar7
      0003A5 EA               [12] 1860 	mov	a,r2
      0003A6 28               [12] 1861 	add	a,r0
      0003A7 F8               [12] 1862 	mov	r0,a
      0003A8 EC               [12] 1863 	mov	a,r4
      0003A9 39               [12] 1864 	addc	a,r1
      0003AA F9               [12] 1865 	mov	r1,a
      0003AB E8               [12] 1866 	mov	a,r0
      0003AC 24 D0            [12] 1867 	add	a,#0xD0
      0003AE FD               [12] 1868 	mov	r5,a
      0003AF E9               [12] 1869 	mov	a,r1
      0003B0 34 FF            [12] 1870 	addc	a,#0xFF
      0003B2 FE               [12] 1871 	mov	r6,a
                           0002C8  1872 	C$i2c.h$176$3$84 ==.
                                   1873 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:176: while(read_keypad() == key)delay_time(10000); //wait for key to be released
      0003B3                       1874 00110$:
      0003B3 C0 07            [24] 1875 	push	ar7
      0003B5 C0 06            [24] 1876 	push	ar6
      0003B7 C0 05            [24] 1877 	push	ar5
      0003B9 C0 03            [24] 1878 	push	ar3
      0003BB 12 02 05         [24] 1879 	lcall	_read_keypad
      0003BE AC 82            [24] 1880 	mov	r4,dpl
      0003C0 D0 03            [24] 1881 	pop	ar3
      0003C2 D0 05            [24] 1882 	pop	ar5
      0003C4 D0 06            [24] 1883 	pop	ar6
      0003C6 D0 07            [24] 1884 	pop	ar7
      0003C8 EC               [12] 1885 	mov	a,r4
      0003C9 B5 03 1B         [24] 1886 	cjne	a,ar3,00118$
      0003CC 90 27 10         [24] 1887 	mov	dptr,#0x2710
      0003CF E4               [12] 1888 	clr	a
      0003D0 F5 F0            [12] 1889 	mov	b,a
      0003D2 C0 07            [24] 1890 	push	ar7
      0003D4 C0 06            [24] 1891 	push	ar6
      0003D6 C0 05            [24] 1892 	push	ar5
      0003D8 C0 03            [24] 1893 	push	ar3
      0003DA 12 03 F8         [24] 1894 	lcall	_delay_time
      0003DD D0 03            [24] 1895 	pop	ar3
      0003DF D0 05            [24] 1896 	pop	ar5
      0003E1 D0 06            [24] 1897 	pop	ar6
      0003E3 D0 07            [24] 1898 	pop	ar7
      0003E5 80 CC            [24] 1899 	sjmp	00110$
      0003E7                       1900 00118$:
                           0002FC  1901 	C$i2c.h$164$1$81 ==.
                                   1902 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:164: for(i=0; i<5; i++)
      0003E7 0F               [12] 1903 	inc	r7
      0003E8 C3               [12] 1904 	clr	c
      0003E9 EF               [12] 1905 	mov	a,r7
      0003EA 64 80            [12] 1906 	xrl	a,#0x80
      0003EC 94 85            [12] 1907 	subb	a,#0x85
      0003EE 50 03            [24] 1908 	jnc	00155$
      0003F0 02 02 F5         [24] 1909 	ljmp	00104$
      0003F3                       1910 00155$:
                           000308  1911 	C$i2c.h$179$1$81 ==.
                                   1912 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:179: return sum;
      0003F3 8D 82            [24] 1913 	mov	dpl,r5
      0003F5 8E 83            [24] 1914 	mov	dph,r6
      0003F7                       1915 00119$:
                           00030C  1916 	C$i2c.h$180$1$81 ==.
                           00030C  1917 	XG$kpd_input$0$0 ==.
      0003F7 22               [24] 1918 	ret
                                   1919 ;------------------------------------------------------------
                                   1920 ;Allocation info for local variables in function 'delay_time'
                                   1921 ;------------------------------------------------------------
                                   1922 ;time_end                  Allocated to registers r4 r5 r6 r7 
                                   1923 ;index                     Allocated to registers 
                                   1924 ;------------------------------------------------------------
                           00030D  1925 	G$delay_time$0$0 ==.
                           00030D  1926 	C$i2c.h$189$1$81 ==.
                                   1927 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:189: void delay_time (unsigned long time_end)
                                   1928 ;	-----------------------------------------
                                   1929 ;	 function delay_time
                                   1930 ;	-----------------------------------------
      0003F8                       1931 _delay_time:
      0003F8 AC 82            [24] 1932 	mov	r4,dpl
      0003FA AD 83            [24] 1933 	mov	r5,dph
      0003FC AE F0            [24] 1934 	mov	r6,b
      0003FE FF               [12] 1935 	mov	r7,a
                           000314  1936 	C$i2c.h$192$1$86 ==.
                                   1937 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:192: for (index = 0; index < time_end; index++); //for loop delay
      0003FF 78 00            [12] 1938 	mov	r0,#0x00
      000401 79 00            [12] 1939 	mov	r1,#0x00
      000403 7A 00            [12] 1940 	mov	r2,#0x00
      000405 7B 00            [12] 1941 	mov	r3,#0x00
      000407                       1942 00103$:
      000407 C3               [12] 1943 	clr	c
      000408 E8               [12] 1944 	mov	a,r0
      000409 9C               [12] 1945 	subb	a,r4
      00040A E9               [12] 1946 	mov	a,r1
      00040B 9D               [12] 1947 	subb	a,r5
      00040C EA               [12] 1948 	mov	a,r2
      00040D 9E               [12] 1949 	subb	a,r6
      00040E EB               [12] 1950 	mov	a,r3
      00040F 9F               [12] 1951 	subb	a,r7
      000410 50 0F            [24] 1952 	jnc	00105$
      000412 08               [12] 1953 	inc	r0
      000413 B8 00 09         [24] 1954 	cjne	r0,#0x00,00115$
      000416 09               [12] 1955 	inc	r1
      000417 B9 00 05         [24] 1956 	cjne	r1,#0x00,00115$
      00041A 0A               [12] 1957 	inc	r2
      00041B BA 00 E9         [24] 1958 	cjne	r2,#0x00,00103$
      00041E 0B               [12] 1959 	inc	r3
      00041F                       1960 00115$:
      00041F 80 E6            [24] 1961 	sjmp	00103$
      000421                       1962 00105$:
                           000336  1963 	C$i2c.h$193$1$86 ==.
                           000336  1964 	XG$delay_time$0$0 ==.
      000421 22               [24] 1965 	ret
                                   1966 ;------------------------------------------------------------
                                   1967 ;Allocation info for local variables in function 'i2c_start'
                                   1968 ;------------------------------------------------------------
                           000337  1969 	G$i2c_start$0$0 ==.
                           000337  1970 	C$i2c.h$196$1$86 ==.
                                   1971 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:196: void i2c_start(void)
                                   1972 ;	-----------------------------------------
                                   1973 ;	 function i2c_start
                                   1974 ;	-----------------------------------------
      000422                       1975 _i2c_start:
                           000337  1976 	C$i2c.h$198$1$88 ==.
                                   1977 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:198: while(BUSY);              //Wait until SMBus0 is free
      000422                       1978 00101$:
      000422 20 C7 FD         [24] 1979 	jb	_BUSY,00101$
                           00033A  1980 	C$i2c.h$199$1$88 ==.
                                   1981 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:199: STA = 1;                  //Set Start Bit
      000425 D2 C5            [12] 1982 	setb	_STA
                           00033C  1983 	C$i2c.h$200$1$88 ==.
                                   1984 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:200: while(!SI);               //Wait until start sent
      000427                       1985 00104$:
      000427 30 C3 FD         [24] 1986 	jnb	_SI,00104$
                           00033F  1987 	C$i2c.h$201$1$88 ==.
                                   1988 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:201: STA = 0;                  //Clear start bit
      00042A C2 C5            [12] 1989 	clr	_STA
                           000341  1990 	C$i2c.h$202$1$88 ==.
                                   1991 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:202: SI = 0;                   //Clear SI
      00042C C2 C3            [12] 1992 	clr	_SI
                           000343  1993 	C$i2c.h$203$1$88 ==.
                           000343  1994 	XG$i2c_start$0$0 ==.
      00042E 22               [24] 1995 	ret
                                   1996 ;------------------------------------------------------------
                                   1997 ;Allocation info for local variables in function 'i2c_write'
                                   1998 ;------------------------------------------------------------
                                   1999 ;output_data               Allocated to registers 
                                   2000 ;------------------------------------------------------------
                           000344  2001 	G$i2c_write$0$0 ==.
                           000344  2002 	C$i2c.h$206$1$88 ==.
                                   2003 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:206: void i2c_write(unsigned char output_data)
                                   2004 ;	-----------------------------------------
                                   2005 ;	 function i2c_write
                                   2006 ;	-----------------------------------------
      00042F                       2007 _i2c_write:
      00042F 85 82 C2         [24] 2008 	mov	_SMB0DAT,dpl
                           000347  2009 	C$i2c.h$209$1$90 ==.
                                   2010 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:209: while(!SI);               //Wait until send is complete
      000432                       2011 00101$:
                           000347  2012 	C$i2c.h$210$1$90 ==.
                                   2013 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:210: SI = 0;                   //Clear SI
      000432 10 C3 02         [24] 2014 	jbc	_SI,00112$
      000435 80 FB            [24] 2015 	sjmp	00101$
      000437                       2016 00112$:
                           00034C  2017 	C$i2c.h$211$1$90 ==.
                           00034C  2018 	XG$i2c_write$0$0 ==.
      000437 22               [24] 2019 	ret
                                   2020 ;------------------------------------------------------------
                                   2021 ;Allocation info for local variables in function 'i2c_write_and_stop'
                                   2022 ;------------------------------------------------------------
                                   2023 ;output_data               Allocated to registers 
                                   2024 ;------------------------------------------------------------
                           00034D  2025 	G$i2c_write_and_stop$0$0 ==.
                           00034D  2026 	C$i2c.h$214$1$90 ==.
                                   2027 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:214: void i2c_write_and_stop(unsigned char output_data)
                                   2028 ;	-----------------------------------------
                                   2029 ;	 function i2c_write_and_stop
                                   2030 ;	-----------------------------------------
      000438                       2031 _i2c_write_and_stop:
      000438 85 82 C2         [24] 2032 	mov	_SMB0DAT,dpl
                           000350  2033 	C$i2c.h$217$1$92 ==.
                                   2034 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:217: STO = 1;                  //Set stop bit
      00043B D2 C4            [12] 2035 	setb	_STO
                           000352  2036 	C$i2c.h$218$1$92 ==.
                                   2037 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:218: while(!SI);               //Wait until send is complete
      00043D                       2038 00101$:
                           000352  2039 	C$i2c.h$219$1$92 ==.
                                   2040 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:219: SI = 0;                   //clear SI
      00043D 10 C3 02         [24] 2041 	jbc	_SI,00112$
      000440 80 FB            [24] 2042 	sjmp	00101$
      000442                       2043 00112$:
                           000357  2044 	C$i2c.h$220$1$92 ==.
                           000357  2045 	XG$i2c_write_and_stop$0$0 ==.
      000442 22               [24] 2046 	ret
                                   2047 ;------------------------------------------------------------
                                   2048 ;Allocation info for local variables in function 'i2c_read'
                                   2049 ;------------------------------------------------------------
                                   2050 ;input_data                Allocated to registers 
                                   2051 ;------------------------------------------------------------
                           000358  2052 	G$i2c_read$0$0 ==.
                           000358  2053 	C$i2c.h$223$1$92 ==.
                                   2054 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:223: unsigned char i2c_read(void)
                                   2055 ;	-----------------------------------------
                                   2056 ;	 function i2c_read
                                   2057 ;	-----------------------------------------
      000443                       2058 _i2c_read:
                           000358  2059 	C$i2c.h$226$1$94 ==.
                                   2060 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:226: while(!SI);                //Wait until we have data to read
      000443                       2061 00101$:
      000443 30 C3 FD         [24] 2062 	jnb	_SI,00101$
                           00035B  2063 	C$i2c.h$227$1$94 ==.
                                   2064 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:227: input_data = SMB0DAT;      //Read the data
      000446 85 C2 82         [24] 2065 	mov	dpl,_SMB0DAT
                           00035E  2066 	C$i2c.h$228$1$94 ==.
                                   2067 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:228: SI = 0;                    //Clear SI
      000449 C2 C3            [12] 2068 	clr	_SI
                           000360  2069 	C$i2c.h$229$1$94 ==.
                                   2070 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:229: return input_data;         //Return the read data
                           000360  2071 	C$i2c.h$230$1$94 ==.
                           000360  2072 	XG$i2c_read$0$0 ==.
      00044B 22               [24] 2073 	ret
                                   2074 ;------------------------------------------------------------
                                   2075 ;Allocation info for local variables in function 'i2c_read_and_stop'
                                   2076 ;------------------------------------------------------------
                                   2077 ;input_data                Allocated to registers r7 
                                   2078 ;------------------------------------------------------------
                           000361  2079 	G$i2c_read_and_stop$0$0 ==.
                           000361  2080 	C$i2c.h$233$1$94 ==.
                                   2081 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:233: unsigned char i2c_read_and_stop(void)
                                   2082 ;	-----------------------------------------
                                   2083 ;	 function i2c_read_and_stop
                                   2084 ;	-----------------------------------------
      00044C                       2085 _i2c_read_and_stop:
                           000361  2086 	C$i2c.h$236$1$96 ==.
                                   2087 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:236: while(!SI);                //Wait until we have data to read
      00044C                       2088 00101$:
      00044C 30 C3 FD         [24] 2089 	jnb	_SI,00101$
                           000364  2090 	C$i2c.h$237$1$96 ==.
                                   2091 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:237: input_data = SMB0DAT;      //Read the data
      00044F AF C2            [24] 2092 	mov	r7,_SMB0DAT
                           000366  2093 	C$i2c.h$238$1$96 ==.
                                   2094 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:238: SI = 0;                    //Clear SI
      000451 C2 C3            [12] 2095 	clr	_SI
                           000368  2096 	C$i2c.h$239$1$96 ==.
                                   2097 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:239: STO = 1;                   //Set stop bit
      000453 D2 C4            [12] 2098 	setb	_STO
                           00036A  2099 	C$i2c.h$240$1$96 ==.
                                   2100 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:240: while(!SI);                //Wait for stop
      000455                       2101 00104$:
                           00036A  2102 	C$i2c.h$241$1$96 ==.
                                   2103 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:241: SI = 0;
      000455 10 C3 02         [24] 2104 	jbc	_SI,00122$
      000458 80 FB            [24] 2105 	sjmp	00104$
      00045A                       2106 00122$:
                           00036F  2107 	C$i2c.h$242$1$96 ==.
                                   2108 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:242: return input_data;         //Return the read data
      00045A 8F 82            [24] 2109 	mov	dpl,r7
                           000371  2110 	C$i2c.h$243$1$96 ==.
                           000371  2111 	XG$i2c_read_and_stop$0$0 ==.
      00045C 22               [24] 2112 	ret
                                   2113 ;------------------------------------------------------------
                                   2114 ;Allocation info for local variables in function 'i2c_write_data'
                                   2115 ;------------------------------------------------------------
                                   2116 ;start_reg                 Allocated with name '_i2c_write_data_PARM_2'
                                   2117 ;buffer                    Allocated with name '_i2c_write_data_PARM_3'
                                   2118 ;num_bytes                 Allocated with name '_i2c_write_data_PARM_4'
                                   2119 ;addr                      Allocated to registers r7 
                                   2120 ;i                         Allocated to registers 
                                   2121 ;------------------------------------------------------------
                           000372  2122 	G$i2c_write_data$0$0 ==.
                           000372  2123 	C$i2c.h$246$1$96 ==.
                                   2124 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:246: void i2c_write_data(unsigned char addr, unsigned char start_reg, unsigned char *buffer, unsigned char num_bytes)
                                   2125 ;	-----------------------------------------
                                   2126 ;	 function i2c_write_data
                                   2127 ;	-----------------------------------------
      00045D                       2128 _i2c_write_data:
      00045D AF 82            [24] 2129 	mov	r7,dpl
                           000374  2130 	C$i2c.h$250$1$98 ==.
                                   2131 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:250: i2c_start();               //initiate I2C transfer
      00045F C0 07            [24] 2132 	push	ar7
      000461 12 04 22         [24] 2133 	lcall	_i2c_start
      000464 D0 07            [24] 2134 	pop	ar7
                           00037B  2135 	C$i2c.h$251$1$98 ==.
                                   2136 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:251: i2c_write(addr & ~0x01);   //write the desired address to the bus
      000466 74 FE            [12] 2137 	mov	a,#0xFE
      000468 5F               [12] 2138 	anl	a,r7
      000469 F5 82            [12] 2139 	mov	dpl,a
      00046B 12 04 2F         [24] 2140 	lcall	_i2c_write
                           000383  2141 	C$i2c.h$252$1$98 ==.
                                   2142 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:252: i2c_write(start_reg);      //write the start register to the bus
      00046E 85 27 82         [24] 2143 	mov	dpl,_i2c_write_data_PARM_2
      000471 12 04 2F         [24] 2144 	lcall	_i2c_write
                           000389  2145 	C$i2c.h$253$1$98 ==.
                                   2146 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:253: for(i=0; i<num_bytes-1; i++) //write the data to the register(s)
      000474 7F 00            [12] 2147 	mov	r7,#0x00
      000476                       2148 00103$:
      000476 AD 2B            [24] 2149 	mov	r5,_i2c_write_data_PARM_4
      000478 7E 00            [12] 2150 	mov	r6,#0x00
      00047A 1D               [12] 2151 	dec	r5
      00047B BD FF 01         [24] 2152 	cjne	r5,#0xFF,00114$
      00047E 1E               [12] 2153 	dec	r6
      00047F                       2154 00114$:
      00047F 8F 03            [24] 2155 	mov	ar3,r7
      000481 7C 00            [12] 2156 	mov	r4,#0x00
      000483 C3               [12] 2157 	clr	c
      000484 EB               [12] 2158 	mov	a,r3
      000485 9D               [12] 2159 	subb	a,r5
      000486 EC               [12] 2160 	mov	a,r4
      000487 64 80            [12] 2161 	xrl	a,#0x80
      000489 8E F0            [24] 2162 	mov	b,r6
      00048B 63 F0 80         [24] 2163 	xrl	b,#0x80
      00048E 95 F0            [12] 2164 	subb	a,b
      000490 50 1F            [24] 2165 	jnc	00101$
                           0003A7  2166 	C$i2c.h$254$1$98 ==.
                                   2167 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:254: i2c_write(buffer[i]);
      000492 EF               [12] 2168 	mov	a,r7
      000493 25 28            [12] 2169 	add	a,_i2c_write_data_PARM_3
      000495 FC               [12] 2170 	mov	r4,a
      000496 E4               [12] 2171 	clr	a
      000497 35 29            [12] 2172 	addc	a,(_i2c_write_data_PARM_3 + 1)
      000499 FD               [12] 2173 	mov	r5,a
      00049A AE 2A            [24] 2174 	mov	r6,(_i2c_write_data_PARM_3 + 2)
      00049C 8C 82            [24] 2175 	mov	dpl,r4
      00049E 8D 83            [24] 2176 	mov	dph,r5
      0004A0 8E F0            [24] 2177 	mov	b,r6
      0004A2 12 15 94         [24] 2178 	lcall	__gptrget
      0004A5 F5 82            [12] 2179 	mov	dpl,a
      0004A7 C0 07            [24] 2180 	push	ar7
      0004A9 12 04 2F         [24] 2181 	lcall	_i2c_write
      0004AC D0 07            [24] 2182 	pop	ar7
                           0003C3  2183 	C$i2c.h$253$1$98 ==.
                                   2184 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:253: for(i=0; i<num_bytes-1; i++) //write the data to the register(s)
      0004AE 0F               [12] 2185 	inc	r7
      0004AF 80 C5            [24] 2186 	sjmp	00103$
      0004B1                       2187 00101$:
                           0003C6  2188 	C$i2c.h$255$1$98 ==.
                                   2189 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:255: i2c_write_and_stop(buffer[num_bytes-1]); //Stop transfer
      0004B1 AE 2B            [24] 2190 	mov	r6,_i2c_write_data_PARM_4
      0004B3 7F 00            [12] 2191 	mov	r7,#0x00
      0004B5 1E               [12] 2192 	dec	r6
      0004B6 BE FF 01         [24] 2193 	cjne	r6,#0xFF,00116$
      0004B9 1F               [12] 2194 	dec	r7
      0004BA                       2195 00116$:
      0004BA EE               [12] 2196 	mov	a,r6
      0004BB 25 28            [12] 2197 	add	a,_i2c_write_data_PARM_3
      0004BD FE               [12] 2198 	mov	r6,a
      0004BE EF               [12] 2199 	mov	a,r7
      0004BF 35 29            [12] 2200 	addc	a,(_i2c_write_data_PARM_3 + 1)
      0004C1 FF               [12] 2201 	mov	r7,a
      0004C2 AD 2A            [24] 2202 	mov	r5,(_i2c_write_data_PARM_3 + 2)
      0004C4 8E 82            [24] 2203 	mov	dpl,r6
      0004C6 8F 83            [24] 2204 	mov	dph,r7
      0004C8 8D F0            [24] 2205 	mov	b,r5
      0004CA 12 15 94         [24] 2206 	lcall	__gptrget
      0004CD F5 82            [12] 2207 	mov	dpl,a
      0004CF 12 04 38         [24] 2208 	lcall	_i2c_write_and_stop
                           0003E7  2209 	C$i2c.h$256$1$98 ==.
                           0003E7  2210 	XG$i2c_write_data$0$0 ==.
      0004D2 22               [24] 2211 	ret
                                   2212 ;------------------------------------------------------------
                                   2213 ;Allocation info for local variables in function 'i2c_read_data'
                                   2214 ;------------------------------------------------------------
                                   2215 ;start_reg                 Allocated with name '_i2c_read_data_PARM_2'
                                   2216 ;buffer                    Allocated with name '_i2c_read_data_PARM_3'
                                   2217 ;num_bytes                 Allocated with name '_i2c_read_data_PARM_4'
                                   2218 ;addr                      Allocated to registers r7 
                                   2219 ;j                         Allocated to registers 
                                   2220 ;------------------------------------------------------------
                           0003E8  2221 	G$i2c_read_data$0$0 ==.
                           0003E8  2222 	C$i2c.h$259$1$98 ==.
                                   2223 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:259: void i2c_read_data(unsigned char addr, unsigned char start_reg, unsigned char *buffer, unsigned char num_bytes)
                                   2224 ;	-----------------------------------------
                                   2225 ;	 function i2c_read_data
                                   2226 ;	-----------------------------------------
      0004D3                       2227 _i2c_read_data:
      0004D3 AF 82            [24] 2228 	mov	r7,dpl
                           0003EA  2229 	C$i2c.h$262$1$100 ==.
                                   2230 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:262: i2c_start();               //Start I2C transfer
      0004D5 C0 07            [24] 2231 	push	ar7
      0004D7 12 04 22         [24] 2232 	lcall	_i2c_start
      0004DA D0 07            [24] 2233 	pop	ar7
                           0003F1  2234 	C$i2c.h$263$1$100 ==.
                                   2235 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:263: i2c_write(addr & ~0x01);   //Write address of device that will be written to, send 0
      0004DC 8F 06            [24] 2236 	mov	ar6,r7
      0004DE 74 FE            [12] 2237 	mov	a,#0xFE
      0004E0 5E               [12] 2238 	anl	a,r6
      0004E1 F5 82            [12] 2239 	mov	dpl,a
      0004E3 C0 07            [24] 2240 	push	ar7
      0004E5 12 04 2F         [24] 2241 	lcall	_i2c_write
                           0003FD  2242 	C$i2c.h$264$1$100 ==.
                                   2243 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:264: i2c_write_and_stop(start_reg); //Write & stop the 1st register to be read
      0004E8 85 2C 82         [24] 2244 	mov	dpl,_i2c_read_data_PARM_2
      0004EB 12 04 38         [24] 2245 	lcall	_i2c_write_and_stop
                           000403  2246 	C$i2c.h$265$1$100 ==.
                                   2247 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:265: i2c_start();               //Start I2C transfer
      0004EE 12 04 22         [24] 2248 	lcall	_i2c_start
      0004F1 D0 07            [24] 2249 	pop	ar7
                           000408  2250 	C$i2c.h$266$1$100 ==.
                                   2251 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:266: i2c_write(addr | 0x01);    //Write address again, this time indicating a read operation
      0004F3 74 01            [12] 2252 	mov	a,#0x01
      0004F5 4F               [12] 2253 	orl	a,r7
      0004F6 F5 82            [12] 2254 	mov	dpl,a
      0004F8 12 04 2F         [24] 2255 	lcall	_i2c_write
                           000410  2256 	C$i2c.h$267$1$100 ==.
                                   2257 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:267: for(j = 0; j < num_bytes - 1; j++)
      0004FB 7F 00            [12] 2258 	mov	r7,#0x00
      0004FD                       2259 00103$:
      0004FD AD 30            [24] 2260 	mov	r5,_i2c_read_data_PARM_4
      0004FF 7E 00            [12] 2261 	mov	r6,#0x00
      000501 1D               [12] 2262 	dec	r5
      000502 BD FF 01         [24] 2263 	cjne	r5,#0xFF,00114$
      000505 1E               [12] 2264 	dec	r6
      000506                       2265 00114$:
      000506 8F 03            [24] 2266 	mov	ar3,r7
      000508 7C 00            [12] 2267 	mov	r4,#0x00
      00050A C3               [12] 2268 	clr	c
      00050B EB               [12] 2269 	mov	a,r3
      00050C 9D               [12] 2270 	subb	a,r5
      00050D EC               [12] 2271 	mov	a,r4
      00050E 64 80            [12] 2272 	xrl	a,#0x80
      000510 8E F0            [24] 2273 	mov	b,r6
      000512 63 F0 80         [24] 2274 	xrl	b,#0x80
      000515 95 F0            [12] 2275 	subb	a,b
      000517 50 2E            [24] 2276 	jnc	00101$
                           00042E  2277 	C$i2c.h$269$2$101 ==.
                                   2278 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:269: AA = 1;                //Set acknowledge bit
      000519 D2 C2            [12] 2279 	setb	_AA
                           000430  2280 	C$i2c.h$270$2$101 ==.
                                   2281 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:270: buffer[j] = i2c_read();//Read data, save it in buffer
      00051B EF               [12] 2282 	mov	a,r7
      00051C 25 2D            [12] 2283 	add	a,_i2c_read_data_PARM_3
      00051E FC               [12] 2284 	mov	r4,a
      00051F E4               [12] 2285 	clr	a
      000520 35 2E            [12] 2286 	addc	a,(_i2c_read_data_PARM_3 + 1)
      000522 FD               [12] 2287 	mov	r5,a
      000523 AE 2F            [24] 2288 	mov	r6,(_i2c_read_data_PARM_3 + 2)
      000525 C0 07            [24] 2289 	push	ar7
      000527 C0 06            [24] 2290 	push	ar6
      000529 C0 05            [24] 2291 	push	ar5
      00052B C0 04            [24] 2292 	push	ar4
      00052D 12 04 43         [24] 2293 	lcall	_i2c_read
      000530 AB 82            [24] 2294 	mov	r3,dpl
      000532 D0 04            [24] 2295 	pop	ar4
      000534 D0 05            [24] 2296 	pop	ar5
      000536 D0 06            [24] 2297 	pop	ar6
      000538 D0 07            [24] 2298 	pop	ar7
      00053A 8C 82            [24] 2299 	mov	dpl,r4
      00053C 8D 83            [24] 2300 	mov	dph,r5
      00053E 8E F0            [24] 2301 	mov	b,r6
      000540 EB               [12] 2302 	mov	a,r3
      000541 12 0C E2         [24] 2303 	lcall	__gptrput
                           000459  2304 	C$i2c.h$267$1$100 ==.
                                   2305 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:267: for(j = 0; j < num_bytes - 1; j++)
      000544 0F               [12] 2306 	inc	r7
      000545 80 B6            [24] 2307 	sjmp	00103$
      000547                       2308 00101$:
                           00045C  2309 	C$i2c.h$272$1$100 ==.
                                   2310 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:272: AA = 0;
      000547 C2 C2            [12] 2311 	clr	_AA
                           00045E  2312 	C$i2c.h$273$1$100 ==.
                                   2313 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:273: buffer[num_bytes - 1] = i2c_read_and_stop(); //Read the last byte and stop, save it in the buffer
      000549 AE 30            [24] 2314 	mov	r6,_i2c_read_data_PARM_4
      00054B 7F 00            [12] 2315 	mov	r7,#0x00
      00054D 1E               [12] 2316 	dec	r6
      00054E BE FF 01         [24] 2317 	cjne	r6,#0xFF,00116$
      000551 1F               [12] 2318 	dec	r7
      000552                       2319 00116$:
      000552 EE               [12] 2320 	mov	a,r6
      000553 25 2D            [12] 2321 	add	a,_i2c_read_data_PARM_3
      000555 FE               [12] 2322 	mov	r6,a
      000556 EF               [12] 2323 	mov	a,r7
      000557 35 2E            [12] 2324 	addc	a,(_i2c_read_data_PARM_3 + 1)
      000559 FF               [12] 2325 	mov	r7,a
      00055A AD 2F            [24] 2326 	mov	r5,(_i2c_read_data_PARM_3 + 2)
      00055C C0 07            [24] 2327 	push	ar7
      00055E C0 06            [24] 2328 	push	ar6
      000560 C0 05            [24] 2329 	push	ar5
      000562 12 04 4C         [24] 2330 	lcall	_i2c_read_and_stop
      000565 AC 82            [24] 2331 	mov	r4,dpl
      000567 D0 05            [24] 2332 	pop	ar5
      000569 D0 06            [24] 2333 	pop	ar6
      00056B D0 07            [24] 2334 	pop	ar7
      00056D 8E 82            [24] 2335 	mov	dpl,r6
      00056F 8F 83            [24] 2336 	mov	dph,r7
      000571 8D F0            [24] 2337 	mov	b,r5
      000573 EC               [12] 2338 	mov	a,r4
      000574 12 0C E2         [24] 2339 	lcall	__gptrput
                           00048C  2340 	C$i2c.h$274$1$100 ==.
                           00048C  2341 	XG$i2c_read_data$0$0 ==.
      000577 22               [24] 2342 	ret
                                   2343 ;------------------------------------------------------------
                                   2344 ;Allocation info for local variables in function 'Accel_Init'
                                   2345 ;------------------------------------------------------------
                                   2346 ;Data2                     Allocated with name '_Accel_Init_Data2_1_103'
                                   2347 ;------------------------------------------------------------
                           00048D  2348 	G$Accel_Init$0$0 ==.
                           00048D  2349 	C$i2c.h$283$1$100 ==.
                                   2350 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:283: void Accel_Init(void)
                                   2351 ;	-----------------------------------------
                                   2352 ;	 function Accel_Init
                                   2353 ;	-----------------------------------------
      000578                       2354 _Accel_Init:
                           00048D  2355 	C$i2c.h$287$1$103 ==.
                                   2356 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:287: Data2[0]=0x23;	//normal power mode, 50Hz ODR, y & x axes enabled
      000578 75 31 23         [24] 2357 	mov	_Accel_Init_Data2_1_103,#0x23
                           000490  2358 	C$i2c.h$289$1$103 ==.
                                   2359 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:289: i2c_write_data(addr_accel, 0x20, Data2, 1);
      00057B 75 28 31         [24] 2360 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      00057E 75 29 00         [24] 2361 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      000581 75 2A 40         [24] 2362 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000584 75 27 20         [24] 2363 	mov	_i2c_write_data_PARM_2,#0x20
      000587 75 2B 01         [24] 2364 	mov	_i2c_write_data_PARM_4,#0x01
      00058A 75 82 30         [24] 2365 	mov	dpl,#0x30
      00058D 12 04 5D         [24] 2366 	lcall	_i2c_write_data
                           0004A5  2367 	C$i2c.h$290$1$103 ==.
                                   2368 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:290: Data2[0]=0x00;	//Default - no filtering
      000590 75 31 00         [24] 2369 	mov	_Accel_Init_Data2_1_103,#0x00
                           0004A8  2370 	C$i2c.h$292$1$103 ==.
                                   2371 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:292: i2c_write_data(addr_accel, 0x21, Data2, 1);
      000593 75 28 31         [24] 2372 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      000596 75 29 00         [24] 2373 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      000599 75 2A 40         [24] 2374 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      00059C 75 27 21         [24] 2375 	mov	_i2c_write_data_PARM_2,#0x21
      00059F 75 2B 01         [24] 2376 	mov	_i2c_write_data_PARM_4,#0x01
      0005A2 75 82 30         [24] 2377 	mov	dpl,#0x30
      0005A5 12 04 5D         [24] 2378 	lcall	_i2c_write_data
                           0004BD  2379 	C$i2c.h$293$1$103 ==.
                                   2380 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:293: Data2[0]=0x00;	//default - no interrupts enabled
      0005A8 75 31 00         [24] 2381 	mov	_Accel_Init_Data2_1_103,#0x00
                           0004C0  2382 	C$i2c.h$294$1$103 ==.
                                   2383 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:294: i2c_write_data(addr_accel, 0x22, Data2, 1);
      0005AB 75 28 31         [24] 2384 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      0005AE 75 29 00         [24] 2385 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      0005B1 75 2A 40         [24] 2386 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      0005B4 75 27 22         [24] 2387 	mov	_i2c_write_data_PARM_2,#0x22
      0005B7 75 2B 01         [24] 2388 	mov	_i2c_write_data_PARM_4,#0x01
      0005BA 75 82 30         [24] 2389 	mov	dpl,#0x30
      0005BD 12 04 5D         [24] 2390 	lcall	_i2c_write_data
                           0004D5  2391 	C$i2c.h$298$1$103 ==.
                           0004D5  2392 	XG$Accel_Init$0$0 ==.
      0005C0 22               [24] 2393 	ret
                                   2394 ;------------------------------------------------------------
                                   2395 ;Allocation info for local variables in function 'main'
                                   2396 ;------------------------------------------------------------
                           0004D6  2397 	G$main$0$0 ==.
                           0004D6  2398 	C$lab6.c$82$1$103 ==.
                                   2399 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:82: void main(void)
                                   2400 ;	-----------------------------------------
                                   2401 ;	 function main
                                   2402 ;	-----------------------------------------
      0005C1                       2403 _main:
                           0004D6  2404 	C$lab6.c$84$1$119 ==.
                                   2405 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:84: Sys_Init();
      0005C1 12 01 1B         [24] 2406 	lcall	_Sys_Init
                           0004D9  2407 	C$lab6.c$85$1$119 ==.
                                   2408 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:85: putchar(' '); //the quotes in this line may not format correctly
      0005C4 75 82 20         [24] 2409 	mov	dpl,#0x20
      0005C7 12 01 2E         [24] 2410 	lcall	_putchar
                           0004DF  2411 	C$lab6.c$86$1$119 ==.
                                   2412 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:86: Port_Init();
      0005CA 12 0B 70         [24] 2413 	lcall	_Port_Init
                           0004E2  2414 	C$lab6.c$87$1$119 ==.
                                   2415 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:87: XBR0_Init();
      0005CD 12 0B A0         [24] 2416 	lcall	_XBR0_Init
                           0004E5  2417 	C$lab6.c$88$1$119 ==.
                                   2418 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:88: PCA_Init();
      0005D0 12 0B 88         [24] 2419 	lcall	_PCA_Init
                           0004E8  2420 	C$lab6.c$89$1$119 ==.
                                   2421 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:89: SMB_Init();
      0005D3 12 0B A4         [24] 2422 	lcall	_SMB_Init
                           0004EB  2423 	C$lab6.c$90$1$119 ==.
                                   2424 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:90: ADC_Init();
      0005D6 12 0B AA         [24] 2425 	lcall	_ADC_Init
                           0004EE  2426 	C$lab6.c$92$1$119 ==.
                                   2427 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:92: count =0;
      0005D9 E4               [12] 2428 	clr	a
      0005DA F5 32            [12] 2429 	mov	_count,a
      0005DC F5 33            [12] 2430 	mov	(_count + 1),a
                           0004F3  2431 	C$lab6.c$94$1$119 ==.
                                   2432 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:94: RUDDER_PW= PW_CENTER_RUDDER;
      0005DE 85 3C 46         [24] 2433 	mov	_RUDDER_PW,_PW_CENTER_RUDDER
      0005E1 85 3D 47         [24] 2434 	mov	(_RUDDER_PW + 1),(_PW_CENTER_RUDDER + 1)
                           0004F9  2435 	C$lab6.c$95$1$119 ==.
                                   2436 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:95: ANGLE_PW = PW_CENTER_ANGLE;
      0005E4 85 42 4A         [24] 2437 	mov	_ANGLE_PW,_PW_CENTER_ANGLE
      0005E7 85 43 4B         [24] 2438 	mov	(_ANGLE_PW + 1),(_PW_CENTER_ANGLE + 1)
                           0004FF  2439 	C$lab6.c$96$1$119 ==.
                                   2440 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:96: RTHRUST_PW = PW_NUET_THRUST;
      0005EA 85 36 4E         [24] 2441 	mov	_RTHRUST_PW,_PW_NUET_THRUST
      0005ED 85 37 4F         [24] 2442 	mov	(_RTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
                           000505  2443 	C$lab6.c$97$1$119 ==.
                                   2444 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:97: LTHRUST_PW = PW_NUET_THRUST;
      0005F0 85 36 50         [24] 2445 	mov	_LTHRUST_PW,_PW_NUET_THRUST
      0005F3 85 37 51         [24] 2446 	mov	(_LTHRUST_PW + 1),(_PW_NUET_THRUST + 1)
                           00050B  2447 	C$lab6.c$99$1$119 ==.
                                   2448 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:99: RDR_lo_to_hi = 0xFFFF - RUDDER_PW;
      0005F6 14               [12] 2449 	dec	a
      0005F7 C3               [12] 2450 	clr	c
      0005F8 95 46            [12] 2451 	subb	a,_RUDDER_PW
      0005FA F5 48            [12] 2452 	mov	_RDR_lo_to_hi,a
      0005FC 74 FF            [12] 2453 	mov	a,#0xFF
      0005FE 95 47            [12] 2454 	subb	a,(_RUDDER_PW + 1)
      000600 F5 49            [12] 2455 	mov	(_RDR_lo_to_hi + 1),a
                           000517  2456 	C$lab6.c$100$1$119 ==.
                                   2457 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:100: RTRST_lo_to_hi = 0xFFFF - RTHRUST_PW;
      000602 74 FF            [12] 2458 	mov	a,#0xFF
      000604 C3               [12] 2459 	clr	c
      000605 95 4E            [12] 2460 	subb	a,_RTHRUST_PW
      000607 F5 52            [12] 2461 	mov	_RTRST_lo_to_hi,a
      000609 74 FF            [12] 2462 	mov	a,#0xFF
      00060B 95 4F            [12] 2463 	subb	a,(_RTHRUST_PW + 1)
      00060D F5 53            [12] 2464 	mov	(_RTRST_lo_to_hi + 1),a
                           000524  2465 	C$lab6.c$101$1$119 ==.
                                   2466 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:101: LTRST_lo_to_hi = 0xFFFF - LTHRUST_PW;
      00060F 74 FF            [12] 2467 	mov	a,#0xFF
      000611 C3               [12] 2468 	clr	c
      000612 95 50            [12] 2469 	subb	a,_LTHRUST_PW
      000614 F5 54            [12] 2470 	mov	_LTRST_lo_to_hi,a
      000616 74 FF            [12] 2471 	mov	a,#0xFF
      000618 95 51            [12] 2472 	subb	a,(_LTHRUST_PW + 1)
      00061A F5 55            [12] 2473 	mov	(_LTRST_lo_to_hi + 1),a
                           000531  2474 	C$lab6.c$102$1$119 ==.
                                   2475 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:102: AGL_lo_to_hi = 0xFFFF - ANGLE_PW;
      00061C 74 FF            [12] 2476 	mov	a,#0xFF
      00061E C3               [12] 2477 	clr	c
      00061F 95 4A            [12] 2478 	subb	a,_ANGLE_PW
      000621 F5 4C            [12] 2479 	mov	_AGL_lo_to_hi,a
      000623 74 FF            [12] 2480 	mov	a,#0xFF
      000625 95 4B            [12] 2481 	subb	a,(_ANGLE_PW + 1)
      000627 F5 4D            [12] 2482 	mov	(_AGL_lo_to_hi + 1),a
                           00053E  2483 	C$lab6.c$104$1$119 ==.
                                   2484 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:104: PCA0CP0 = RDR_lo_to_hi;
      000629 85 48 EA         [24] 2485 	mov	((_PCA0CP0 >> 0) & 0xFF),_RDR_lo_to_hi
      00062C 85 49 FA         [24] 2486 	mov	((_PCA0CP0 >> 8) & 0xFF),(_RDR_lo_to_hi + 1)
                           000544  2487 	C$lab6.c$105$1$119 ==.
                                   2488 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:105: PCA0CP1 = AGL_lo_to_hi;	
      00062F 85 4C EB         [24] 2489 	mov	((_PCA0CP1 >> 0) & 0xFF),_AGL_lo_to_hi
      000632 85 4D FB         [24] 2490 	mov	((_PCA0CP1 >> 8) & 0xFF),(_AGL_lo_to_hi + 1)
                           00054A  2491 	C$lab6.c$106$1$119 ==.
                                   2492 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:106: PCA0CP2 = RTRST_lo_to_hi;
      000635 85 52 EC         [24] 2493 	mov	((_PCA0CP2 >> 0) & 0xFF),_RTRST_lo_to_hi
      000638 85 53 FC         [24] 2494 	mov	((_PCA0CP2 >> 8) & 0xFF),(_RTRST_lo_to_hi + 1)
                           000550  2495 	C$lab6.c$107$1$119 ==.
                                   2496 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:107: PCA0CP3 = LTRST_lo_to_hi;
      00063B 85 54 ED         [24] 2497 	mov	((_PCA0CP3 >> 0) & 0xFF),_LTRST_lo_to_hi
      00063E 85 55 FD         [24] 2498 	mov	((_PCA0CP3 >> 8) & 0xFF),(_LTRST_lo_to_hi + 1)
                           000556  2499 	C$lab6.c$109$1$119 ==.
                                   2500 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:109: kpkd();
      000641 12 06 E9         [24] 2501 	lcall	_kpkd
                           000559  2502 	C$lab6.c$113$1$119 ==.
                                   2503 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:113: direction();
      000644 12 08 70         [24] 2504 	lcall	_direction
                           00055C  2505 	C$lab6.c$114$1$119 ==.
                                   2506 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:114: count=0;
      000647 E4               [12] 2507 	clr	a
      000648 F5 32            [12] 2508 	mov	_count,a
      00064A F5 33            [12] 2509 	mov	(_count + 1),a
                           000561  2510 	C$lab6.c$115$1$119 ==.
                                   2511 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:115: while (1)
      00064C                       2512 00108$:
                           000561  2513 	C$lab6.c$118$2$120 ==.
                                   2514 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:118: wait();
      00064C 12 0B 49         [24] 2515 	lcall	_wait
                           000564  2516 	C$lab6.c$119$2$120 ==.
                                   2517 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:119: if ((count +1) % 2 ==0)
      00064F 85 32 82         [24] 2518 	mov	dpl,_count
      000652 85 33 83         [24] 2519 	mov	dph,(_count + 1)
      000655 A3               [24] 2520 	inc	dptr
      000656 75 11 02         [24] 2521 	mov	__modsint_PARM_2,#0x02
      000659 75 12 00         [24] 2522 	mov	(__modsint_PARM_2 + 1),#0x00
      00065C 12 15 B0         [24] 2523 	lcall	__modsint
      00065F E5 82            [12] 2524 	mov	a,dpl
      000661 85 83 F0         [24] 2525 	mov	b,dph
      000664 45 F0            [12] 2526 	orl	a,b
      000666 70 03            [24] 2527 	jnz	00102$
                           00057D  2528 	C$lab6.c$122$3$121 ==.
                                   2529 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:122: Steering_func();
      000668 12 08 00         [24] 2530 	lcall	_Steering_func
      00066B                       2531 00102$:
                           000580  2532 	C$lab6.c$124$2$120 ==.
                                   2533 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:124: if ((count +1) % 4 ==0)
      00066B 85 32 82         [24] 2534 	mov	dpl,_count
      00066E 85 33 83         [24] 2535 	mov	dph,(_count + 1)
      000671 A3               [24] 2536 	inc	dptr
      000672 75 11 04         [24] 2537 	mov	__modsint_PARM_2,#0x04
      000675 75 12 00         [24] 2538 	mov	(__modsint_PARM_2 + 1),#0x00
      000678 12 15 B0         [24] 2539 	lcall	__modsint
      00067B E5 82            [12] 2540 	mov	a,dpl
      00067D 85 83 F0         [24] 2541 	mov	b,dph
      000680 45 F0            [12] 2542 	orl	a,b
      000682 70 03            [24] 2543 	jnz	00104$
                           000599  2544 	C$lab6.c$126$3$122 ==.
                                   2545 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:126: Change_D();
      000684 12 07 3A         [24] 2546 	lcall	_Change_D
      000687                       2547 00104$:
                           00059C  2548 	C$lab6.c$128$2$120 ==.
                                   2549 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:128: if ((count+1) % 8 == 0)
      000687 85 32 82         [24] 2550 	mov	dpl,_count
      00068A 85 33 83         [24] 2551 	mov	dph,(_count + 1)
      00068D A3               [24] 2552 	inc	dptr
      00068E 75 11 08         [24] 2553 	mov	__modsint_PARM_2,#0x08
      000691 75 12 00         [24] 2554 	mov	(__modsint_PARM_2 + 1),#0x00
      000694 12 15 B0         [24] 2555 	lcall	__modsint
      000697 E5 82            [12] 2556 	mov	a,dpl
      000699 85 83 F0         [24] 2557 	mov	b,dph
      00069C 45 F0            [12] 2558 	orl	a,b
      00069E 70 AC            [24] 2559 	jnz	00108$
                           0005B5  2560 	C$lab6.c$130$3$123 ==.
                                   2561 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:130: printf("\r\n%u,\t%d,\t%d,\t%u,\t%d,\t%u",count,desired_D,actual_D,distanceR,error,RTHRUST_PW);
      0006A0 C0 4E            [24] 2562 	push	_RTHRUST_PW
      0006A2 C0 4F            [24] 2563 	push	(_RTHRUST_PW + 1)
      0006A4 90 00 5B         [24] 2564 	mov	dptr,#_error
      0006A7 E0               [24] 2565 	movx	a,@dptr
      0006A8 C0 E0            [24] 2566 	push	acc
      0006AA A3               [24] 2567 	inc	dptr
      0006AB E0               [24] 2568 	movx	a,@dptr
      0006AC C0 E0            [24] 2569 	push	acc
      0006AE 90 00 5F         [24] 2570 	mov	dptr,#_distanceR
      0006B1 E0               [24] 2571 	movx	a,@dptr
      0006B2 C0 E0            [24] 2572 	push	acc
      0006B4 A3               [24] 2573 	inc	dptr
      0006B5 E0               [24] 2574 	movx	a,@dptr
      0006B6 C0 E0            [24] 2575 	push	acc
      0006B8 90 00 53         [24] 2576 	mov	dptr,#_actual_D
      0006BB E0               [24] 2577 	movx	a,@dptr
      0006BC C0 E0            [24] 2578 	push	acc
      0006BE A3               [24] 2579 	inc	dptr
      0006BF E0               [24] 2580 	movx	a,@dptr
      0006C0 C0 E0            [24] 2581 	push	acc
      0006C2 90 00 51         [24] 2582 	mov	dptr,#_desired_D
      0006C5 E0               [24] 2583 	movx	a,@dptr
      0006C6 C0 E0            [24] 2584 	push	acc
      0006C8 A3               [24] 2585 	inc	dptr
      0006C9 E0               [24] 2586 	movx	a,@dptr
      0006CA C0 E0            [24] 2587 	push	acc
      0006CC C0 32            [24] 2588 	push	_count
      0006CE C0 33            [24] 2589 	push	(_count + 1)
      0006D0 74 2A            [12] 2590 	mov	a,#___str_3
      0006D2 C0 E0            [24] 2591 	push	acc
      0006D4 74 17            [12] 2592 	mov	a,#(___str_3 >> 8)
      0006D6 C0 E0            [24] 2593 	push	acc
      0006D8 74 80            [12] 2594 	mov	a,#0x80
      0006DA C0 E0            [24] 2595 	push	acc
      0006DC 12 0F 86         [24] 2596 	lcall	_printf
      0006DF E5 81            [12] 2597 	mov	a,sp
      0006E1 24 F1            [12] 2598 	add	a,#0xf1
      0006E3 F5 81            [12] 2599 	mov	sp,a
      0006E5 02 06 4C         [24] 2600 	ljmp	00108$
                           0005FD  2601 	C$lab6.c$134$1$119 ==.
                           0005FD  2602 	XG$main$0$0 ==.
      0006E8 22               [24] 2603 	ret
                                   2604 ;------------------------------------------------------------
                                   2605 ;Allocation info for local variables in function 'kpkd'
                                   2606 ;------------------------------------------------------------
                           0005FE  2607 	G$kpkd$0$0 ==.
                           0005FE  2608 	C$lab6.c$157$1$119 ==.
                                   2609 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:157: void kpkd(void)
                                   2610 ;	-----------------------------------------
                                   2611 ;	 function kpkd
                                   2612 ;	-----------------------------------------
      0006E9                       2613 _kpkd:
                           0005FE  2614 	C$lab6.c$159$1$125 ==.
                                   2615 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:159: lcd_clear();
      0006E9 12 01 CC         [24] 2616 	lcall	_lcd_clear
                           000601  2617 	C$lab6.c$160$1$125 ==.
                                   2618 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:160: lcd_print("Please enter a kp value:\n ");
      0006EC 74 43            [12] 2619 	mov	a,#___str_4
      0006EE C0 E0            [24] 2620 	push	acc
      0006F0 74 17            [12] 2621 	mov	a,#(___str_4 >> 8)
      0006F2 C0 E0            [24] 2622 	push	acc
      0006F4 74 80            [12] 2623 	mov	a,#0x80
      0006F6 C0 E0            [24] 2624 	push	acc
      0006F8 12 01 47         [24] 2625 	lcall	_lcd_print
      0006FB 15 81            [12] 2626 	dec	sp
      0006FD 15 81            [12] 2627 	dec	sp
      0006FF 15 81            [12] 2628 	dec	sp
                           000616  2629 	C$lab6.c$161$1$125 ==.
                                   2630 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:161: kp = kpd_input(0);
      000701 75 82 00         [24] 2631 	mov	dpl,#0x00
      000704 12 02 84         [24] 2632 	lcall	_kpd_input
                           00061C  2633 	C$lab6.c$162$1$125 ==.
                                   2634 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:162: kp = 12;
      000707 E4               [12] 2635 	clr	a
      000708 F5 59            [12] 2636 	mov	_kp,a
      00070A F5 5A            [12] 2637 	mov	(_kp + 1),a
      00070C 75 5B 40         [24] 2638 	mov	(_kp + 2),#0x40
      00070F 75 5C 41         [24] 2639 	mov	(_kp + 3),#0x41
                           000627  2640 	C$lab6.c$163$1$125 ==.
                                   2641 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:163: lcd_clear();
      000712 12 01 CC         [24] 2642 	lcall	_lcd_clear
                           00062A  2643 	C$lab6.c$164$1$125 ==.
                                   2644 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:164: lcd_print("Please enter a kd value:\n ");
      000715 74 5E            [12] 2645 	mov	a,#___str_5
      000717 C0 E0            [24] 2646 	push	acc
      000719 74 17            [12] 2647 	mov	a,#(___str_5 >> 8)
      00071B C0 E0            [24] 2648 	push	acc
      00071D 74 80            [12] 2649 	mov	a,#0x80
      00071F C0 E0            [24] 2650 	push	acc
      000721 12 01 47         [24] 2651 	lcall	_lcd_print
      000724 15 81            [12] 2652 	dec	sp
      000726 15 81            [12] 2653 	dec	sp
      000728 15 81            [12] 2654 	dec	sp
                           00063F  2655 	C$lab6.c$165$1$125 ==.
                                   2656 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:165: kd = kpd_input(0);
      00072A 75 82 00         [24] 2657 	mov	dpl,#0x00
      00072D 12 02 84         [24] 2658 	lcall	_kpd_input
                           000645  2659 	C$lab6.c$166$1$125 ==.
                                   2660 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:166: kd = 180;
      000730 75 5D B4         [24] 2661 	mov	_kd,#0xB4
      000733 75 5E 00         [24] 2662 	mov	(_kd + 1),#0x00
                           00064B  2663 	C$lab6.c$167$1$125 ==.
                                   2664 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:167: lcd_clear();
      000736 12 01 CC         [24] 2665 	lcall	_lcd_clear
                           00064E  2666 	C$lab6.c$168$1$125 ==.
                           00064E  2667 	XG$kpkd$0$0 ==.
      000739 22               [24] 2668 	ret
                                   2669 ;------------------------------------------------------------
                                   2670 ;Allocation info for local variables in function 'Change_D'
                                   2671 ;------------------------------------------------------------
                                   2672 ;temp                      Allocated with name '_Change_D_temp_1_127'
                                   2673 ;------------------------------------------------------------
                           00064F  2674 	G$Change_D$0$0 ==.
                           00064F  2675 	C$lab6.c$171$1$125 ==.
                                   2676 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:171: void Change_D(void)
                                   2677 ;	-----------------------------------------
                                   2678 ;	 function Change_D
                                   2679 ;	-----------------------------------------
      00073A                       2680 _Change_D:
                           00064F  2681 	C$lab6.c$174$1$125 ==.
                                   2682 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:174: __xdata int temp =1;
      00073A 90 00 57         [24] 2683 	mov	dptr,#_Change_D_temp_1_127
      00073D 74 01            [12] 2684 	mov	a,#0x01
      00073F F0               [24] 2685 	movx	@dptr,a
      000740 E4               [12] 2686 	clr	a
      000741 A3               [24] 2687 	inc	dptr
      000742 F0               [24] 2688 	movx	@dptr,a
                           000658  2689 	C$lab6.c$175$1$127 ==.
                                   2690 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:175: while (distanceR < 50)
      000743                       2691 00104$:
      000743 90 00 5F         [24] 2692 	mov	dptr,#_distanceR
      000746 E0               [24] 2693 	movx	a,@dptr
      000747 FE               [12] 2694 	mov	r6,a
      000748 A3               [24] 2695 	inc	dptr
      000749 E0               [24] 2696 	movx	a,@dptr
      00074A FF               [12] 2697 	mov	r7,a
      00074B C3               [12] 2698 	clr	c
      00074C EE               [12] 2699 	mov	a,r6
      00074D 94 32            [12] 2700 	subb	a,#0x32
      00074F EF               [12] 2701 	mov	a,r7
      000750 94 00            [12] 2702 	subb	a,#0x00
      000752 40 03            [24] 2703 	jc	00121$
      000754 02 07 D9         [24] 2704 	ljmp	00107$
      000757                       2705 00121$:
                           00066C  2706 	C$lab6.c$177$2$128 ==.
                                   2707 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:177: distanceR = 100;
      000757 90 00 5F         [24] 2708 	mov	dptr,#_distanceR
      00075A 74 64            [12] 2709 	mov	a,#0x64
      00075C F0               [24] 2710 	movx	@dptr,a
      00075D E4               [12] 2711 	clr	a
      00075E A3               [24] 2712 	inc	dptr
      00075F F0               [24] 2713 	movx	@dptr,a
                           000675  2714 	C$lab6.c$178$2$128 ==.
                                   2715 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:178: distanceR = Read_Ranger();
      000760 12 07 DA         [24] 2716 	lcall	_Read_Ranger
      000763 E5 82            [12] 2717 	mov	a,dpl
      000765 85 83 F0         [24] 2718 	mov	b,dph
      000768 90 00 5F         [24] 2719 	mov	dptr,#_distanceR
      00076B F0               [24] 2720 	movx	@dptr,a
      00076C E5 F0            [12] 2721 	mov	a,b
      00076E A3               [24] 2722 	inc	dptr
      00076F F0               [24] 2723 	movx	@dptr,a
                           000685  2724 	C$lab6.c$179$2$128 ==.
                                   2725 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:179: r_data[0] = 0x51;
      000770 75 56 51         [24] 2726 	mov	_r_data,#0x51
                           000688  2727 	C$lab6.c$180$2$128 ==.
                                   2728 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:180: i2c_write_data(r_addr, 0, r_data, 1);
      000773 75 28 56         [24] 2729 	mov	_i2c_write_data_PARM_3,#_r_data
      000776 75 29 00         [24] 2730 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      000779 75 2A 40         [24] 2731 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      00077C 75 27 00         [24] 2732 	mov	_i2c_write_data_PARM_2,#0x00
      00077F 75 2B 01         [24] 2733 	mov	_i2c_write_data_PARM_4,#0x01
      000782 85 58 82         [24] 2734 	mov	dpl,_r_addr
      000785 12 04 5D         [24] 2735 	lcall	_i2c_write_data
                           00069D  2736 	C$lab6.c$183$2$128 ==.
                                   2737 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:183: if (distanceR < 50 && temp ==1)
      000788 90 00 5F         [24] 2738 	mov	dptr,#_distanceR
      00078B E0               [24] 2739 	movx	a,@dptr
      00078C FE               [12] 2740 	mov	r6,a
      00078D A3               [24] 2741 	inc	dptr
      00078E E0               [24] 2742 	movx	a,@dptr
      00078F FF               [12] 2743 	mov	r7,a
      000790 C3               [12] 2744 	clr	c
      000791 EE               [12] 2745 	mov	a,r6
      000792 94 32            [12] 2746 	subb	a,#0x32
      000794 EF               [12] 2747 	mov	a,r7
      000795 94 00            [12] 2748 	subb	a,#0x00
      000797 50 AA            [24] 2749 	jnc	00104$
      000799 90 00 57         [24] 2750 	mov	dptr,#_Change_D_temp_1_127
      00079C E0               [24] 2751 	movx	a,@dptr
      00079D FE               [12] 2752 	mov	r6,a
      00079E A3               [24] 2753 	inc	dptr
      00079F E0               [24] 2754 	movx	a,@dptr
      0007A0 FF               [12] 2755 	mov	r7,a
      0007A1 BE 01 9F         [24] 2756 	cjne	r6,#0x01,00104$
      0007A4 BF 00 9C         [24] 2757 	cjne	r7,#0x00,00104$
                           0006BC  2758 	C$lab6.c$185$3$129 ==.
                                   2759 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:185: desired_D = (desired_D + 1800) % 3600;
      0007A7 90 00 51         [24] 2760 	mov	dptr,#_desired_D
      0007AA E0               [24] 2761 	movx	a,@dptr
      0007AB FE               [12] 2762 	mov	r6,a
      0007AC A3               [24] 2763 	inc	dptr
      0007AD E0               [24] 2764 	movx	a,@dptr
      0007AE FF               [12] 2765 	mov	r7,a
      0007AF 74 08            [12] 2766 	mov	a,#0x08
      0007B1 2E               [12] 2767 	add	a,r6
      0007B2 F5 82            [12] 2768 	mov	dpl,a
      0007B4 74 07            [12] 2769 	mov	a,#0x07
      0007B6 3F               [12] 2770 	addc	a,r7
      0007B7 F5 83            [12] 2771 	mov	dph,a
      0007B9 75 11 10         [24] 2772 	mov	__modsint_PARM_2,#0x10
      0007BC 75 12 0E         [24] 2773 	mov	(__modsint_PARM_2 + 1),#0x0E
      0007BF 12 15 B0         [24] 2774 	lcall	__modsint
      0007C2 E5 82            [12] 2775 	mov	a,dpl
      0007C4 85 83 F0         [24] 2776 	mov	b,dph
      0007C7 90 00 51         [24] 2777 	mov	dptr,#_desired_D
      0007CA F0               [24] 2778 	movx	@dptr,a
      0007CB E5 F0            [12] 2779 	mov	a,b
      0007CD A3               [24] 2780 	inc	dptr
      0007CE F0               [24] 2781 	movx	@dptr,a
                           0006E4  2782 	C$lab6.c$186$3$129 ==.
                                   2783 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:186: temp =0;
      0007CF 90 00 57         [24] 2784 	mov	dptr,#_Change_D_temp_1_127
      0007D2 E4               [12] 2785 	clr	a
      0007D3 F0               [24] 2786 	movx	@dptr,a
      0007D4 A3               [24] 2787 	inc	dptr
      0007D5 F0               [24] 2788 	movx	@dptr,a
      0007D6 02 07 43         [24] 2789 	ljmp	00104$
      0007D9                       2790 00107$:
                           0006EE  2791 	C$lab6.c$190$1$127 ==.
                           0006EE  2792 	XG$Change_D$0$0 ==.
      0007D9 22               [24] 2793 	ret
                                   2794 ;------------------------------------------------------------
                                   2795 ;Allocation info for local variables in function 'Read_Ranger'
                                   2796 ;------------------------------------------------------------
                                   2797 ;read                      Allocated with name '_Read_Ranger_read_1_131'
                                   2798 ;------------------------------------------------------------
                           0006EF  2799 	G$Read_Ranger$0$0 ==.
                           0006EF  2800 	C$lab6.c$192$1$127 ==.
                                   2801 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:192: unsigned int Read_Ranger(void)
                                   2802 ;	-----------------------------------------
                                   2803 ;	 function Read_Ranger
                                   2804 ;	-----------------------------------------
      0007DA                       2805 _Read_Ranger:
                           0006EF  2806 	C$lab6.c$195$1$131 ==.
                                   2807 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:195: i2c_read_data(r_addr, 2, r_data, 2);
      0007DA 75 2D 56         [24] 2808 	mov	_i2c_read_data_PARM_3,#_r_data
      0007DD 75 2E 00         [24] 2809 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0007E0 75 2F 40         [24] 2810 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0007E3 75 2C 02         [24] 2811 	mov	_i2c_read_data_PARM_2,#0x02
      0007E6 75 30 02         [24] 2812 	mov	_i2c_read_data_PARM_4,#0x02
      0007E9 85 58 82         [24] 2813 	mov	dpl,_r_addr
      0007EC 12 04 D3         [24] 2814 	lcall	_i2c_read_data
                           000704  2815 	C$lab6.c$196$1$131 ==.
                                   2816 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:196: read = (((unsigned int) r_data[0] <<8) | r_data[1]);
      0007EF AF 56            [24] 2817 	mov	r7,_r_data
      0007F1 7E 00            [12] 2818 	mov	r6,#0x00
      0007F3 AC 57            [24] 2819 	mov	r4,(_r_data + 0x0001)
      0007F5 7D 00            [12] 2820 	mov	r5,#0x00
      0007F7 EC               [12] 2821 	mov	a,r4
      0007F8 4E               [12] 2822 	orl	a,r6
      0007F9 F5 82            [12] 2823 	mov	dpl,a
      0007FB ED               [12] 2824 	mov	a,r5
      0007FC 4F               [12] 2825 	orl	a,r7
      0007FD F5 83            [12] 2826 	mov	dph,a
                           000714  2827 	C$lab6.c$197$1$131 ==.
                                   2828 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:197: return read;
                           000714  2829 	C$lab6.c$198$1$131 ==.
                           000714  2830 	XG$Read_Ranger$0$0 ==.
      0007FF 22               [24] 2831 	ret
                                   2832 ;------------------------------------------------------------
                                   2833 ;Allocation info for local variables in function 'Steering_func'
                                   2834 ;------------------------------------------------------------
                           000715  2835 	G$Steering_func$0$0 ==.
                           000715  2836 	C$lab6.c$200$1$131 ==.
                                   2837 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:200: void Steering_func(void)    ///FUNCTION TO HOLD ACTIONS FOR STEERING
                                   2838 ;	-----------------------------------------
                                   2839 ;	 function Steering_func
                                   2840 ;	-----------------------------------------
      000800                       2841 _Steering_func:
                           000715  2842 	C$lab6.c$202$1$133 ==.
                                   2843 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:202: actual_D = ReadCompass();
      000800 12 08 FC         [24] 2844 	lcall	_ReadCompass
      000803 E5 82            [12] 2845 	mov	a,dpl
      000805 85 83 F0         [24] 2846 	mov	b,dph
      000808 90 00 53         [24] 2847 	mov	dptr,#_actual_D
      00080B F0               [24] 2848 	movx	@dptr,a
      00080C E5 F0            [12] 2849 	mov	a,b
      00080E A3               [24] 2850 	inc	dptr
      00080F F0               [24] 2851 	movx	@dptr,a
                           000725  2852 	C$lab6.c$203$1$133 ==.
                                   2853 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:203: lcd_clear();
      000810 12 01 CC         [24] 2854 	lcall	_lcd_clear
                           000728  2855 	C$lab6.c$204$1$133 ==.
                                   2856 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:204: lcd_print("%d", actual_D);
      000813 90 00 53         [24] 2857 	mov	dptr,#_actual_D
      000816 E0               [24] 2858 	movx	a,@dptr
      000817 C0 E0            [24] 2859 	push	acc
      000819 A3               [24] 2860 	inc	dptr
      00081A E0               [24] 2861 	movx	a,@dptr
      00081B C0 E0            [24] 2862 	push	acc
      00081D 74 79            [12] 2863 	mov	a,#___str_6
      00081F C0 E0            [24] 2864 	push	acc
      000821 74 17            [12] 2865 	mov	a,#(___str_6 >> 8)
      000823 C0 E0            [24] 2866 	push	acc
      000825 74 80            [12] 2867 	mov	a,#0x80
      000827 C0 E0            [24] 2868 	push	acc
      000829 12 01 47         [24] 2869 	lcall	_lcd_print
      00082C E5 81            [12] 2870 	mov	a,sp
      00082E 24 FB            [12] 2871 	add	a,#0xfb
      000830 F5 81            [12] 2872 	mov	sp,a
                           000747  2873 	C$lab6.c$205$1$133 ==.
                                   2874 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:205: offset = (unsigned int)((actual_D +3600- desired_D ) % 3600);
      000832 90 00 53         [24] 2875 	mov	dptr,#_actual_D
      000835 E0               [24] 2876 	movx	a,@dptr
      000836 FE               [12] 2877 	mov	r6,a
      000837 A3               [24] 2878 	inc	dptr
      000838 E0               [24] 2879 	movx	a,@dptr
      000839 FF               [12] 2880 	mov	r7,a
      00083A 74 10            [12] 2881 	mov	a,#0x10
      00083C 2E               [12] 2882 	add	a,r6
      00083D FE               [12] 2883 	mov	r6,a
      00083E 74 0E            [12] 2884 	mov	a,#0x0E
      000840 3F               [12] 2885 	addc	a,r7
      000841 FF               [12] 2886 	mov	r7,a
      000842 90 00 51         [24] 2887 	mov	dptr,#_desired_D
      000845 E0               [24] 2888 	movx	a,@dptr
      000846 FC               [12] 2889 	mov	r4,a
      000847 A3               [24] 2890 	inc	dptr
      000848 E0               [24] 2891 	movx	a,@dptr
      000849 FD               [12] 2892 	mov	r5,a
      00084A EE               [12] 2893 	mov	a,r6
      00084B C3               [12] 2894 	clr	c
      00084C 9C               [12] 2895 	subb	a,r4
      00084D F5 82            [12] 2896 	mov	dpl,a
      00084F EF               [12] 2897 	mov	a,r7
      000850 9D               [12] 2898 	subb	a,r5
      000851 F5 83            [12] 2899 	mov	dph,a
      000853 75 11 10         [24] 2900 	mov	__modsint_PARM_2,#0x10
      000856 75 12 0E         [24] 2901 	mov	(__modsint_PARM_2 + 1),#0x0E
      000859 12 15 B0         [24] 2902 	lcall	__modsint
      00085C AE 82            [24] 2903 	mov	r6,dpl
      00085E AF 83            [24] 2904 	mov	r7,dph
      000860 90 00 55         [24] 2905 	mov	dptr,#_offset
      000863 EE               [12] 2906 	mov	a,r6
      000864 F0               [24] 2907 	movx	@dptr,a
      000865 EF               [12] 2908 	mov	a,r7
      000866 A3               [24] 2909 	inc	dptr
      000867 F0               [24] 2910 	movx	@dptr,a
                           00077D  2911 	C$lab6.c$206$1$133 ==.
                                   2912 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:206: Steering_Servo(offset);
      000868 8E 82            [24] 2913 	mov	dpl,r6
      00086A 8F 83            [24] 2914 	mov	dph,r7
      00086C 12 09 22         [24] 2915 	lcall	_Steering_Servo
                           000784  2916 	C$lab6.c$207$1$133 ==.
                           000784  2917 	XG$Steering_func$0$0 ==.
      00086F 22               [24] 2918 	ret
                                   2919 ;------------------------------------------------------------
                                   2920 ;Allocation info for local variables in function 'direction'
                                   2921 ;------------------------------------------------------------
                                   2922 ;value                     Allocated with name '_direction_value_1_135'
                                   2923 ;------------------------------------------------------------
                           000785  2924 	G$direction$0$0 ==.
                           000785  2925 	C$lab6.c$209$1$133 ==.
                                   2926 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:209: unsigned int direction(void)        ///ADJUSTS THE VALUES OF DIRECTION SO THE DESIRED DIRECTION IS THE CAR'S 'NORTH'
                                   2927 ;	-----------------------------------------
                                   2928 ;	 function direction
                                   2929 ;	-----------------------------------------
      000870                       2930 _direction:
                           000785  2931 	C$lab6.c$212$1$135 ==.
                                   2932 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:212: count =0;
      000870 E4               [12] 2933 	clr	a
      000871 F5 32            [12] 2934 	mov	_count,a
      000873 F5 33            [12] 2935 	mov	(_count + 1),a
                           00078A  2936 	C$lab6.c$213$1$135 ==.
                                   2937 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:213: while (count < 1);
      000875                       2938 00101$:
      000875 C3               [12] 2939 	clr	c
      000876 E5 32            [12] 2940 	mov	a,_count
      000878 94 01            [12] 2941 	subb	a,#0x01
      00087A E5 33            [12] 2942 	mov	a,(_count + 1)
      00087C 64 80            [12] 2943 	xrl	a,#0x80
      00087E 94 80            [12] 2944 	subb	a,#0x80
      000880 40 F3            [24] 2945 	jc	00101$
                           000797  2946 	C$lab6.c$214$1$135 ==.
                                   2947 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:214: lcd_clear();
      000882 12 01 CC         [24] 2948 	lcall	_lcd_clear
                           00079A  2949 	C$lab6.c$215$1$135 ==.
                                   2950 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:215: lcd_print("Calibration:\nHello world!\n012_345_678:\nabc def ghij");
      000885 74 7C            [12] 2951 	mov	a,#___str_7
      000887 C0 E0            [24] 2952 	push	acc
      000889 74 17            [12] 2953 	mov	a,#(___str_7 >> 8)
      00088B C0 E0            [24] 2954 	push	acc
      00088D 74 80            [12] 2955 	mov	a,#0x80
      00088F C0 E0            [24] 2956 	push	acc
      000891 12 01 47         [24] 2957 	lcall	_lcd_print
      000894 15 81            [12] 2958 	dec	sp
      000896 15 81            [12] 2959 	dec	sp
      000898 15 81            [12] 2960 	dec	sp
                           0007AF  2961 	C$lab6.c$216$1$135 ==.
                                   2962 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:216: start();
      00089A 12 0B 39         [24] 2963 	lcall	_start
                           0007B2  2964 	C$lab6.c$217$1$135 ==.
                                   2965 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:217: lcd_clear();
      00089D 12 01 CC         [24] 2966 	lcall	_lcd_clear
                           0007B5  2967 	C$lab6.c$218$1$135 ==.
                                   2968 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:218: value = kpd_input(0);
      0008A0 75 82 00         [24] 2969 	mov	dpl,#0x00
      0008A3 12 02 84         [24] 2970 	lcall	_kpd_input
      0008A6 AE 82            [24] 2971 	mov	r6,dpl
      0008A8 AF 83            [24] 2972 	mov	r7,dph
                           0007BF  2973 	C$lab6.c$219$1$135 ==.
                                   2974 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:219: lcd_clear();
      0008AA C0 07            [24] 2975 	push	ar7
      0008AC C0 06            [24] 2976 	push	ar6
      0008AE 12 01 CC         [24] 2977 	lcall	_lcd_clear
      0008B1 D0 06            [24] 2978 	pop	ar6
      0008B3 D0 07            [24] 2979 	pop	ar7
                           0007CA  2980 	C$lab6.c$220$1$135 ==.
                                   2981 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:220: lcd_print("\r\nThe desired direction is: %d", value);
      0008B5 C0 07            [24] 2982 	push	ar7
      0008B7 C0 06            [24] 2983 	push	ar6
      0008B9 C0 06            [24] 2984 	push	ar6
      0008BB C0 07            [24] 2985 	push	ar7
      0008BD 74 B0            [12] 2986 	mov	a,#___str_8
      0008BF C0 E0            [24] 2987 	push	acc
      0008C1 74 17            [12] 2988 	mov	a,#(___str_8 >> 8)
      0008C3 C0 E0            [24] 2989 	push	acc
      0008C5 74 80            [12] 2990 	mov	a,#0x80
      0008C7 C0 E0            [24] 2991 	push	acc
      0008C9 12 01 47         [24] 2992 	lcall	_lcd_print
      0008CC E5 81            [12] 2993 	mov	a,sp
      0008CE 24 FB            [12] 2994 	add	a,#0xfb
      0008D0 F5 81            [12] 2995 	mov	sp,a
      0008D2 D0 06            [24] 2996 	pop	ar6
      0008D4 D0 07            [24] 2997 	pop	ar7
                           0007EB  2998 	C$lab6.c$221$1$135 ==.
                                   2999 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:221: printf("\r\nThe desired direction is: %d", value);
      0008D6 C0 07            [24] 3000 	push	ar7
      0008D8 C0 06            [24] 3001 	push	ar6
      0008DA C0 06            [24] 3002 	push	ar6
      0008DC C0 07            [24] 3003 	push	ar7
      0008DE 74 B0            [12] 3004 	mov	a,#___str_8
      0008E0 C0 E0            [24] 3005 	push	acc
      0008E2 74 17            [12] 3006 	mov	a,#(___str_8 >> 8)
      0008E4 C0 E0            [24] 3007 	push	acc
      0008E6 74 80            [12] 3008 	mov	a,#0x80
      0008E8 C0 E0            [24] 3009 	push	acc
      0008EA 12 0F 86         [24] 3010 	lcall	_printf
      0008ED E5 81            [12] 3011 	mov	a,sp
      0008EF 24 FB            [12] 3012 	add	a,#0xfb
      0008F1 F5 81            [12] 3013 	mov	sp,a
      0008F3 D0 06            [24] 3014 	pop	ar6
      0008F5 D0 07            [24] 3015 	pop	ar7
                           00080C  3016 	C$lab6.c$223$1$135 ==.
                                   3017 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:223: return value;
      0008F7 8E 82            [24] 3018 	mov	dpl,r6
      0008F9 8F 83            [24] 3019 	mov	dph,r7
                           000810  3020 	C$lab6.c$224$1$135 ==.
                           000810  3021 	XG$direction$0$0 ==.
      0008FB 22               [24] 3022 	ret
                                   3023 ;------------------------------------------------------------
                                   3024 ;Allocation info for local variables in function 'ReadCompass'
                                   3025 ;------------------------------------------------------------
                                   3026 ;Data                      Allocated with name '_ReadCompass_Data_1_137'
                                   3027 ;Crange                    Allocated to registers 
                                   3028 ;addr                      Allocated to registers 
                                   3029 ;------------------------------------------------------------
                           000811  3030 	G$ReadCompass$0$0 ==.
                           000811  3031 	C$lab6.c$226$1$135 ==.
                                   3032 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:226: unsigned int ReadCompass(void)
                                   3033 ;	-----------------------------------------
                                   3034 ;	 function ReadCompass
                                   3035 ;	-----------------------------------------
      0008FC                       3036 _ReadCompass:
                           000811  3037 	C$lab6.c$232$1$137 ==.
                                   3038 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:232: i2c_read_data(addr, 2,Data,2);
      0008FC 75 2D 5F         [24] 3039 	mov	_i2c_read_data_PARM_3,#_ReadCompass_Data_1_137
      0008FF 75 2E 00         [24] 3040 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      000902 75 2F 40         [24] 3041 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      000905 75 2C 02         [24] 3042 	mov	_i2c_read_data_PARM_2,#0x02
      000908 75 30 02         [24] 3043 	mov	_i2c_read_data_PARM_4,#0x02
      00090B 75 82 C0         [24] 3044 	mov	dpl,#0xC0
      00090E 12 04 D3         [24] 3045 	lcall	_i2c_read_data
                           000826  3046 	C$lab6.c$233$1$137 ==.
                                   3047 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:233: Crange = ((unsigned int) Data[0] << 8 | Data[1]);
      000911 AF 5F            [24] 3048 	mov	r7,_ReadCompass_Data_1_137
      000913 7E 00            [12] 3049 	mov	r6,#0x00
      000915 AC 60            [24] 3050 	mov	r4,(_ReadCompass_Data_1_137 + 0x0001)
      000917 7D 00            [12] 3051 	mov	r5,#0x00
      000919 EC               [12] 3052 	mov	a,r4
      00091A 4E               [12] 3053 	orl	a,r6
      00091B F5 82            [12] 3054 	mov	dpl,a
      00091D ED               [12] 3055 	mov	a,r5
      00091E 4F               [12] 3056 	orl	a,r7
      00091F F5 83            [12] 3057 	mov	dph,a
                           000836  3058 	C$lab6.c$234$1$137 ==.
                                   3059 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:234: return Crange;
                           000836  3060 	C$lab6.c$235$1$137 ==.
                           000836  3061 	XG$ReadCompass$0$0 ==.
      000921 22               [24] 3062 	ret
                                   3063 ;------------------------------------------------------------
                                   3064 ;Allocation info for local variables in function 'Steering_Servo'
                                   3065 ;------------------------------------------------------------
                                   3066 ;direction                 Allocated to registers r6 r7 
                                   3067 ;sloc0                     Allocated with name '_Steering_Servo_sloc0_1_0'
                                   3068 ;------------------------------------------------------------
                           000837  3069 	G$Steering_Servo$0$0 ==.
                           000837  3070 	C$lab6.c$585$1$137 ==.
                                   3071 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:585: void Steering_Servo(unsigned int direction)
                                   3072 ;	-----------------------------------------
                                   3073 ;	 function Steering_Servo
                                   3074 ;	-----------------------------------------
      000922                       3075 _Steering_Servo:
      000922 AE 82            [24] 3076 	mov	r6,dpl
      000924 AF 83            [24] 3077 	mov	r7,dph
                           00083B  3078 	C$lab6.c$591$1$139 ==.
                                   3079 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:591: if (direction > 3500 || direction < 100)
      000926 C3               [12] 3080 	clr	c
      000927 74 AC            [12] 3081 	mov	a,#0xAC
      000929 9E               [12] 3082 	subb	a,r6
      00092A 74 0D            [12] 3083 	mov	a,#0x0D
      00092C 9F               [12] 3084 	subb	a,r7
      00092D 40 08            [24] 3085 	jc	00104$
      00092F EE               [12] 3086 	mov	a,r6
      000930 94 64            [12] 3087 	subb	a,#0x64
      000932 EF               [12] 3088 	mov	a,r7
      000933 94 00            [12] 3089 	subb	a,#0x00
      000935 50 09            [24] 3090 	jnc	00105$
      000937                       3091 00104$:
                           00084C  3092 	C$lab6.c$593$2$140 ==.
                                   3093 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:593: error =0;
      000937 90 00 5B         [24] 3094 	mov	dptr,#_error
      00093A E4               [12] 3095 	clr	a
      00093B F0               [24] 3096 	movx	@dptr,a
      00093C A3               [24] 3097 	inc	dptr
      00093D F0               [24] 3098 	movx	@dptr,a
      00093E 80 33            [24] 3099 	sjmp	00106$
      000940                       3100 00105$:
                           000855  3101 	C$lab6.c$595$1$139 ==.
                                   3102 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:595: else if (direction > 1800)
      000940 C3               [12] 3103 	clr	c
      000941 74 08            [12] 3104 	mov	a,#0x08
      000943 9E               [12] 3105 	subb	a,r6
      000944 74 07            [12] 3106 	mov	a,#0x07
      000946 9F               [12] 3107 	subb	a,r7
      000947 50 13            [24] 3108 	jnc	00102$
                           00085E  3109 	C$lab6.c$597$2$141 ==.
                                   3110 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:597: error = (3600 - (int) direction);
      000949 8E 04            [24] 3111 	mov	ar4,r6
      00094B 8F 05            [24] 3112 	mov	ar5,r7
      00094D 90 00 5B         [24] 3113 	mov	dptr,#_error
      000950 74 10            [12] 3114 	mov	a,#0x10
      000952 C3               [12] 3115 	clr	c
      000953 9C               [12] 3116 	subb	a,r4
      000954 F0               [24] 3117 	movx	@dptr,a
      000955 74 0E            [12] 3118 	mov	a,#0x0E
      000957 9D               [12] 3119 	subb	a,r5
      000958 A3               [24] 3120 	inc	dptr
      000959 F0               [24] 3121 	movx	@dptr,a
      00095A 80 17            [24] 3122 	sjmp	00106$
      00095C                       3123 00102$:
                           000871  3124 	C$lab6.c$601$1$139 ==.
                                   3125 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:601: error = -1* direction;
      00095C 8E 11            [24] 3126 	mov	__mulint_PARM_2,r6
      00095E 8F 12            [24] 3127 	mov	(__mulint_PARM_2 + 1),r7
      000960 90 FF FF         [24] 3128 	mov	dptr,#0xFFFF
      000963 12 0C FD         [24] 3129 	lcall	__mulint
      000966 E5 82            [12] 3130 	mov	a,dpl
      000968 85 83 F0         [24] 3131 	mov	b,dph
      00096B 90 00 5B         [24] 3132 	mov	dptr,#_error
      00096E F0               [24] 3133 	movx	@dptr,a
      00096F E5 F0            [12] 3134 	mov	a,b
      000971 A3               [24] 3135 	inc	dptr
      000972 F0               [24] 3136 	movx	@dptr,a
      000973                       3137 00106$:
                           000888  3138 	C$lab6.c$604$1$139 ==.
                                   3139 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:604: RUDDER_PW  = PW_CENTER_RUDDER + (int) (( kp* (int) error) - (int) kd * ((int)old_error -(int) error));
      000973 90 00 5B         [24] 3140 	mov	dptr,#_error
      000976 E0               [24] 3141 	movx	a,@dptr
      000977 FE               [12] 3142 	mov	r6,a
      000978 A3               [24] 3143 	inc	dptr
      000979 E0               [24] 3144 	movx	a,@dptr
      00097A FF               [12] 3145 	mov	r7,a
      00097B 8E 82            [24] 3146 	mov	dpl,r6
      00097D 8F 83            [24] 3147 	mov	dph,r7
      00097F C0 07            [24] 3148 	push	ar7
      000981 C0 06            [24] 3149 	push	ar6
      000983 12 0E BB         [24] 3150 	lcall	___sint2fs
      000986 AA 82            [24] 3151 	mov	r2,dpl
      000988 AB 83            [24] 3152 	mov	r3,dph
      00098A AC F0            [24] 3153 	mov	r4,b
      00098C FD               [12] 3154 	mov	r5,a
      00098D C0 02            [24] 3155 	push	ar2
      00098F C0 03            [24] 3156 	push	ar3
      000991 C0 04            [24] 3157 	push	ar4
      000993 C0 05            [24] 3158 	push	ar5
      000995 85 59 82         [24] 3159 	mov	dpl,_kp
      000998 85 5A 83         [24] 3160 	mov	dph,(_kp + 1)
      00099B 85 5B F0         [24] 3161 	mov	b,(_kp + 2)
      00099E E5 5C            [12] 3162 	mov	a,(_kp + 3)
      0009A0 12 0B DE         [24] 3163 	lcall	___fsmul
      0009A3 85 82 61         [24] 3164 	mov	_Steering_Servo_sloc0_1_0,dpl
      0009A6 85 83 62         [24] 3165 	mov	(_Steering_Servo_sloc0_1_0 + 1),dph
      0009A9 85 F0 63         [24] 3166 	mov	(_Steering_Servo_sloc0_1_0 + 2),b
      0009AC F5 64            [12] 3167 	mov	(_Steering_Servo_sloc0_1_0 + 3),a
      0009AE E5 81            [12] 3168 	mov	a,sp
      0009B0 24 FC            [12] 3169 	add	a,#0xfc
      0009B2 F5 81            [12] 3170 	mov	sp,a
      0009B4 D0 06            [24] 3171 	pop	ar6
      0009B6 D0 07            [24] 3172 	pop	ar7
      0009B8 90 00 5D         [24] 3173 	mov	dptr,#_old_error
      0009BB E0               [24] 3174 	movx	a,@dptr
      0009BC F8               [12] 3175 	mov	r0,a
      0009BD A3               [24] 3176 	inc	dptr
      0009BE E0               [24] 3177 	movx	a,@dptr
      0009BF F9               [12] 3178 	mov	r1,a
      0009C0 E8               [12] 3179 	mov	a,r0
      0009C1 C3               [12] 3180 	clr	c
      0009C2 9E               [12] 3181 	subb	a,r6
      0009C3 F5 11            [12] 3182 	mov	__mulint_PARM_2,a
      0009C5 E9               [12] 3183 	mov	a,r1
      0009C6 9F               [12] 3184 	subb	a,r7
      0009C7 F5 12            [12] 3185 	mov	(__mulint_PARM_2 + 1),a
      0009C9 85 5D 82         [24] 3186 	mov	dpl,_kd
      0009CC 85 5E 83         [24] 3187 	mov	dph,(_kd + 1)
      0009CF C0 07            [24] 3188 	push	ar7
      0009D1 C0 06            [24] 3189 	push	ar6
      0009D3 12 0C FD         [24] 3190 	lcall	__mulint
      0009D6 12 0E BB         [24] 3191 	lcall	___sint2fs
      0009D9 A8 82            [24] 3192 	mov	r0,dpl
      0009DB A9 83            [24] 3193 	mov	r1,dph
      0009DD AC F0            [24] 3194 	mov	r4,b
      0009DF FD               [12] 3195 	mov	r5,a
      0009E0 C0 00            [24] 3196 	push	ar0
      0009E2 C0 01            [24] 3197 	push	ar1
      0009E4 C0 04            [24] 3198 	push	ar4
      0009E6 C0 05            [24] 3199 	push	ar5
      0009E8 85 61 82         [24] 3200 	mov	dpl,_Steering_Servo_sloc0_1_0
      0009EB 85 62 83         [24] 3201 	mov	dph,(_Steering_Servo_sloc0_1_0 + 1)
      0009EE 85 63 F0         [24] 3202 	mov	b,(_Steering_Servo_sloc0_1_0 + 2)
      0009F1 E5 64            [12] 3203 	mov	a,(_Steering_Servo_sloc0_1_0 + 3)
      0009F3 12 0B D3         [24] 3204 	lcall	___fssub
      0009F6 AA 82            [24] 3205 	mov	r2,dpl
      0009F8 AB 83            [24] 3206 	mov	r3,dph
      0009FA AC F0            [24] 3207 	mov	r4,b
      0009FC FD               [12] 3208 	mov	r5,a
      0009FD E5 81            [12] 3209 	mov	a,sp
      0009FF 24 FC            [12] 3210 	add	a,#0xfc
      000A01 F5 81            [12] 3211 	mov	sp,a
      000A03 8A 82            [24] 3212 	mov	dpl,r2
      000A05 8B 83            [24] 3213 	mov	dph,r3
      000A07 8C F0            [24] 3214 	mov	b,r4
      000A09 ED               [12] 3215 	mov	a,r5
      000A0A C0 05            [24] 3216 	push	ar5
      000A0C C0 04            [24] 3217 	push	ar4
      000A0E C0 03            [24] 3218 	push	ar3
      000A10 C0 02            [24] 3219 	push	ar2
      000A12 12 0E C8         [24] 3220 	lcall	___fs2sint
      000A15 A8 82            [24] 3221 	mov	r0,dpl
      000A17 A9 83            [24] 3222 	mov	r1,dph
      000A19 D0 02            [24] 3223 	pop	ar2
      000A1B D0 03            [24] 3224 	pop	ar3
      000A1D D0 04            [24] 3225 	pop	ar4
      000A1F D0 05            [24] 3226 	pop	ar5
      000A21 E8               [12] 3227 	mov	a,r0
      000A22 25 3C            [12] 3228 	add	a,_PW_CENTER_RUDDER
      000A24 F5 46            [12] 3229 	mov	_RUDDER_PW,a
      000A26 E9               [12] 3230 	mov	a,r1
      000A27 35 3D            [12] 3231 	addc	a,(_PW_CENTER_RUDDER + 1)
      000A29 F5 47            [12] 3232 	mov	(_RUDDER_PW + 1),a
                           000940  3233 	C$lab6.c$606$1$139 ==.
                                   3234 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:606: RTHRUST_PW = PW_NUET_THRUST   + (int) -1* (( kp* (int) error) - (int) kd * ((int)old_error -(int) error));
      000A2B 8A 61            [24] 3235 	mov	_Steering_Servo_sloc0_1_0,r2
      000A2D 8B 62            [24] 3236 	mov	(_Steering_Servo_sloc0_1_0 + 1),r3
      000A2F 8C 63            [24] 3237 	mov	(_Steering_Servo_sloc0_1_0 + 2),r4
      000A31 ED               [12] 3238 	mov	a,r5
      000A32 B2 E7            [12] 3239 	cpl	acc.7
      000A34 F5 64            [12] 3240 	mov	(_Steering_Servo_sloc0_1_0 + 3),a
      000A36 85 36 82         [24] 3241 	mov	dpl,_PW_NUET_THRUST
      000A39 85 37 83         [24] 3242 	mov	dph,(_PW_NUET_THRUST + 1)
      000A3C C0 01            [24] 3243 	push	ar1
      000A3E C0 00            [24] 3244 	push	ar0
      000A40 12 0E FC         [24] 3245 	lcall	___uint2fs
      000A43 AA 82            [24] 3246 	mov	r2,dpl
      000A45 AB 83            [24] 3247 	mov	r3,dph
      000A47 AC F0            [24] 3248 	mov	r4,b
      000A49 FD               [12] 3249 	mov	r5,a
      000A4A C0 61            [24] 3250 	push	_Steering_Servo_sloc0_1_0
      000A4C C0 62            [24] 3251 	push	(_Steering_Servo_sloc0_1_0 + 1)
      000A4E C0 63            [24] 3252 	push	(_Steering_Servo_sloc0_1_0 + 2)
      000A50 C0 64            [24] 3253 	push	(_Steering_Servo_sloc0_1_0 + 3)
      000A52 8A 82            [24] 3254 	mov	dpl,r2
      000A54 8B 83            [24] 3255 	mov	dph,r3
      000A56 8C F0            [24] 3256 	mov	b,r4
      000A58 ED               [12] 3257 	mov	a,r5
      000A59 12 0E 62         [24] 3258 	lcall	___fsadd
      000A5C AA 82            [24] 3259 	mov	r2,dpl
      000A5E AB 83            [24] 3260 	mov	r3,dph
      000A60 AC F0            [24] 3261 	mov	r4,b
      000A62 FD               [12] 3262 	mov	r5,a
      000A63 E5 81            [12] 3263 	mov	a,sp
      000A65 24 FC            [12] 3264 	add	a,#0xfc
      000A67 F5 81            [12] 3265 	mov	sp,a
      000A69 8A 82            [24] 3266 	mov	dpl,r2
      000A6B 8B 83            [24] 3267 	mov	dph,r3
      000A6D 8C F0            [24] 3268 	mov	b,r4
      000A6F ED               [12] 3269 	mov	a,r5
      000A70 12 0F 08         [24] 3270 	lcall	___fs2uint
      000A73 85 82 4E         [24] 3271 	mov	_RTHRUST_PW,dpl
      000A76 85 83 4F         [24] 3272 	mov	(_RTHRUST_PW + 1),dph
      000A79 D0 00            [24] 3273 	pop	ar0
      000A7B D0 01            [24] 3274 	pop	ar1
      000A7D D0 06            [24] 3275 	pop	ar6
      000A7F D0 07            [24] 3276 	pop	ar7
                           000996  3277 	C$lab6.c$608$1$139 ==.
                                   3278 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:608: LTHRUST_PW = PW_NUET_THRUST   + (int) (( kp* (int) error) - (int) kd * ((int)old_error -(int) error));
      000A81 E8               [12] 3279 	mov	a,r0
      000A82 25 36            [12] 3280 	add	a,_PW_NUET_THRUST
      000A84 F5 50            [12] 3281 	mov	_LTHRUST_PW,a
      000A86 E9               [12] 3282 	mov	a,r1
      000A87 35 37            [12] 3283 	addc	a,(_PW_NUET_THRUST + 1)
      000A89 F5 51            [12] 3284 	mov	(_LTHRUST_PW + 1),a
                           0009A0  3285 	C$lab6.c$610$1$139 ==.
                                   3286 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:610: old_error=error;
      000A8B 90 00 5D         [24] 3287 	mov	dptr,#_old_error
      000A8E EE               [12] 3288 	mov	a,r6
      000A8F F0               [24] 3289 	movx	@dptr,a
      000A90 EF               [12] 3290 	mov	a,r7
      000A91 A3               [24] 3291 	inc	dptr
      000A92 F0               [24] 3292 	movx	@dptr,a
                           0009A8  3293 	C$lab6.c$613$1$139 ==.
                                   3294 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:613: if (RUDDER_PW >= PW_RIGHT_RUDDER)
      000A93 C3               [12] 3295 	clr	c
      000A94 E5 46            [12] 3296 	mov	a,_RUDDER_PW
      000A96 95 3E            [12] 3297 	subb	a,_PW_RIGHT_RUDDER
      000A98 E5 47            [12] 3298 	mov	a,(_RUDDER_PW + 1)
      000A9A 95 3F            [12] 3299 	subb	a,(_PW_RIGHT_RUDDER + 1)
      000A9C 40 08            [24] 3300 	jc	00111$
                           0009B3  3301 	C$lab6.c$615$2$143 ==.
                                   3302 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:615: RUDDER_PW = PW_RIGHT_RUDDER;
      000A9E 85 3E 46         [24] 3303 	mov	_RUDDER_PW,_PW_RIGHT_RUDDER
      000AA1 85 3F 47         [24] 3304 	mov	(_RUDDER_PW + 1),(_PW_RIGHT_RUDDER + 1)
      000AA4 80 11            [24] 3305 	sjmp	00112$
      000AA6                       3306 00111$:
                           0009BB  3307 	C$lab6.c$617$1$139 ==.
                                   3308 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:617: else if(RUDDER_PW <= PW_LEFT_RUDDER)
      000AA6 C3               [12] 3309 	clr	c
      000AA7 E5 3A            [12] 3310 	mov	a,_PW_LEFT_RUDDER
      000AA9 95 46            [12] 3311 	subb	a,_RUDDER_PW
      000AAB E5 3B            [12] 3312 	mov	a,(_PW_LEFT_RUDDER + 1)
      000AAD 95 47            [12] 3313 	subb	a,(_RUDDER_PW + 1)
      000AAF 40 06            [24] 3314 	jc	00112$
                           0009C6  3315 	C$lab6.c$619$2$144 ==.
                                   3316 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:619: RUDDER_PW = PW_LEFT_RUDDER;
      000AB1 85 3A 46         [24] 3317 	mov	_RUDDER_PW,_PW_LEFT_RUDDER
      000AB4 85 3B 47         [24] 3318 	mov	(_RUDDER_PW + 1),(_PW_LEFT_RUDDER + 1)
      000AB7                       3319 00112$:
                           0009CC  3320 	C$lab6.c$622$1$139 ==.
                                   3321 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:622: if (RTHRUST_PW >= PW_MAX_THRUST)
      000AB7 C3               [12] 3322 	clr	c
      000AB8 E5 4E            [12] 3323 	mov	a,_RTHRUST_PW
      000ABA 95 38            [12] 3324 	subb	a,_PW_MAX_THRUST
      000ABC E5 4F            [12] 3325 	mov	a,(_RTHRUST_PW + 1)
      000ABE 95 39            [12] 3326 	subb	a,(_PW_MAX_THRUST + 1)
      000AC0 40 08            [24] 3327 	jc	00116$
                           0009D7  3328 	C$lab6.c$624$2$145 ==.
                                   3329 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:624: RTHRUST_PW = PW_MAX_THRUST;
      000AC2 85 38 4E         [24] 3330 	mov	_RTHRUST_PW,_PW_MAX_THRUST
      000AC5 85 39 4F         [24] 3331 	mov	(_RTHRUST_PW + 1),(_PW_MAX_THRUST + 1)
      000AC8 80 11            [24] 3332 	sjmp	00117$
      000ACA                       3333 00116$:
                           0009DF  3334 	C$lab6.c$626$1$139 ==.
                                   3335 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:626: else if (RTHRUST_PW <=  PW_MIN_THRUST)
      000ACA C3               [12] 3336 	clr	c
      000ACB E5 34            [12] 3337 	mov	a,_PW_MIN_THRUST
      000ACD 95 4E            [12] 3338 	subb	a,_RTHRUST_PW
      000ACF E5 35            [12] 3339 	mov	a,(_PW_MIN_THRUST + 1)
      000AD1 95 4F            [12] 3340 	subb	a,(_RTHRUST_PW + 1)
      000AD3 40 06            [24] 3341 	jc	00117$
                           0009EA  3342 	C$lab6.c$628$2$146 ==.
                                   3343 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:628: RTHRUST_PW = PW_MIN_THRUST;
      000AD5 85 34 4E         [24] 3344 	mov	_RTHRUST_PW,_PW_MIN_THRUST
      000AD8 85 35 4F         [24] 3345 	mov	(_RTHRUST_PW + 1),(_PW_MIN_THRUST + 1)
      000ADB                       3346 00117$:
                           0009F0  3347 	C$lab6.c$630$1$139 ==.
                                   3348 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:630: if (LTHRUST_PW >= PW_MAX_THRUST)
      000ADB C3               [12] 3349 	clr	c
      000ADC E5 50            [12] 3350 	mov	a,_LTHRUST_PW
      000ADE 95 38            [12] 3351 	subb	a,_PW_MAX_THRUST
      000AE0 E5 51            [12] 3352 	mov	a,(_LTHRUST_PW + 1)
      000AE2 95 39            [12] 3353 	subb	a,(_PW_MAX_THRUST + 1)
      000AE4 40 08            [24] 3354 	jc	00121$
                           0009FB  3355 	C$lab6.c$632$2$147 ==.
                                   3356 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:632: LTHRUST_PW = PW_MAX_THRUST;
      000AE6 85 38 50         [24] 3357 	mov	_LTHRUST_PW,_PW_MAX_THRUST
      000AE9 85 39 51         [24] 3358 	mov	(_LTHRUST_PW + 1),(_PW_MAX_THRUST + 1)
      000AEC 80 11            [24] 3359 	sjmp	00122$
      000AEE                       3360 00121$:
                           000A03  3361 	C$lab6.c$634$1$139 ==.
                                   3362 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:634: else if(LTHRUST_PW <= PW_MIN_THRUST)
      000AEE C3               [12] 3363 	clr	c
      000AEF E5 34            [12] 3364 	mov	a,_PW_MIN_THRUST
      000AF1 95 50            [12] 3365 	subb	a,_LTHRUST_PW
      000AF3 E5 35            [12] 3366 	mov	a,(_PW_MIN_THRUST + 1)
      000AF5 95 51            [12] 3367 	subb	a,(_LTHRUST_PW + 1)
      000AF7 40 06            [24] 3368 	jc	00122$
                           000A0E  3369 	C$lab6.c$636$2$148 ==.
                                   3370 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:636: LTHRUST_PW = PW_MIN_THRUST;
      000AF9 85 34 50         [24] 3371 	mov	_LTHRUST_PW,_PW_MIN_THRUST
      000AFC 85 35 51         [24] 3372 	mov	(_LTHRUST_PW + 1),(_PW_MIN_THRUST + 1)
      000AFF                       3373 00122$:
                           000A14  3374 	C$lab6.c$639$1$139 ==.
                                   3375 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:639: RDR_lo_to_hi = 0xFFFF - RUDDER_PW ;
      000AFF 74 FF            [12] 3376 	mov	a,#0xFF
      000B01 C3               [12] 3377 	clr	c
      000B02 95 46            [12] 3378 	subb	a,_RUDDER_PW
      000B04 F5 48            [12] 3379 	mov	_RDR_lo_to_hi,a
      000B06 74 FF            [12] 3380 	mov	a,#0xFF
      000B08 95 47            [12] 3381 	subb	a,(_RUDDER_PW + 1)
      000B0A F5 49            [12] 3382 	mov	(_RDR_lo_to_hi + 1),a
                           000A21  3383 	C$lab6.c$640$1$139 ==.
                                   3384 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:640: RTRST_lo_to_hi = 0xFFFF - RTHRUST_PW;
      000B0C 74 FF            [12] 3385 	mov	a,#0xFF
      000B0E C3               [12] 3386 	clr	c
      000B0F 95 4E            [12] 3387 	subb	a,_RTHRUST_PW
      000B11 F5 52            [12] 3388 	mov	_RTRST_lo_to_hi,a
      000B13 74 FF            [12] 3389 	mov	a,#0xFF
      000B15 95 4F            [12] 3390 	subb	a,(_RTHRUST_PW + 1)
      000B17 F5 53            [12] 3391 	mov	(_RTRST_lo_to_hi + 1),a
                           000A2E  3392 	C$lab6.c$641$1$139 ==.
                                   3393 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:641: LTRST_lo_to_hi = 0xFFFF - LTHRUST_PW;
      000B19 74 FF            [12] 3394 	mov	a,#0xFF
      000B1B C3               [12] 3395 	clr	c
      000B1C 95 50            [12] 3396 	subb	a,_LTHRUST_PW
      000B1E F5 54            [12] 3397 	mov	_LTRST_lo_to_hi,a
      000B20 74 FF            [12] 3398 	mov	a,#0xFF
      000B22 95 51            [12] 3399 	subb	a,(_LTHRUST_PW + 1)
      000B24 F5 55            [12] 3400 	mov	(_LTRST_lo_to_hi + 1),a
                           000A3B  3401 	C$lab6.c$643$1$139 ==.
                                   3402 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:643: PCA0CP0 = RDR_lo_to_hi;
      000B26 85 48 EA         [24] 3403 	mov	((_PCA0CP0 >> 0) & 0xFF),_RDR_lo_to_hi
      000B29 85 49 FA         [24] 3404 	mov	((_PCA0CP0 >> 8) & 0xFF),(_RDR_lo_to_hi + 1)
                           000A41  3405 	C$lab6.c$644$1$139 ==.
                                   3406 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:644: PCA0CP2 = RTRST_lo_to_hi;
      000B2C 85 52 EC         [24] 3407 	mov	((_PCA0CP2 >> 0) & 0xFF),_RTRST_lo_to_hi
      000B2F 85 53 FC         [24] 3408 	mov	((_PCA0CP2 >> 8) & 0xFF),(_RTRST_lo_to_hi + 1)
                           000A47  3409 	C$lab6.c$645$1$139 ==.
                                   3410 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:645: PCA0CP3 = LTRST_lo_to_hi;
      000B32 85 54 ED         [24] 3411 	mov	((_PCA0CP3 >> 0) & 0xFF),_LTRST_lo_to_hi
      000B35 85 55 FD         [24] 3412 	mov	((_PCA0CP3 >> 8) & 0xFF),(_LTRST_lo_to_hi + 1)
                           000A4D  3413 	C$lab6.c$646$1$139 ==.
                           000A4D  3414 	XG$Steering_Servo$0$0 ==.
      000B38 22               [24] 3415 	ret
                                   3416 ;------------------------------------------------------------
                                   3417 ;Allocation info for local variables in function 'start'
                                   3418 ;------------------------------------------------------------
                           000A4E  3419 	G$start$0$0 ==.
                           000A4E  3420 	C$lab6.c$649$1$139 ==.
                                   3421 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:649: void start(void)            ///WAITS UNTIL '*' IS ENTERED
                                   3422 ;	-----------------------------------------
                                   3423 ;	 function start
                                   3424 ;	-----------------------------------------
      000B39                       3425 _start:
                           000A4E  3426 	C$lab6.c$651$1$150 ==.
                                   3427 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:651: while (read_keypad() != '*') wait();
      000B39                       3428 00101$:
      000B39 12 02 05         [24] 3429 	lcall	_read_keypad
      000B3C AF 82            [24] 3430 	mov	r7,dpl
      000B3E BF 2A 02         [24] 3431 	cjne	r7,#0x2A,00112$
      000B41 80 05            [24] 3432 	sjmp	00104$
      000B43                       3433 00112$:
      000B43 12 0B 49         [24] 3434 	lcall	_wait
      000B46 80 F1            [24] 3435 	sjmp	00101$
      000B48                       3436 00104$:
                           000A5D  3437 	C$lab6.c$652$1$150 ==.
                           000A5D  3438 	XG$start$0$0 ==.
      000B48 22               [24] 3439 	ret
                                   3440 ;------------------------------------------------------------
                                   3441 ;Allocation info for local variables in function 'wait'
                                   3442 ;------------------------------------------------------------
                                   3443 ;old_count                 Allocated with name '_wait_old_count_1_152'
                                   3444 ;------------------------------------------------------------
                           000A5E  3445 	G$wait$0$0 ==.
                           000A5E  3446 	C$lab6.c$656$1$150 ==.
                                   3447 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:656: void wait(void)
                                   3448 ;	-----------------------------------------
                                   3449 ;	 function wait
                                   3450 ;	-----------------------------------------
      000B49                       3451 _wait:
                           000A5E  3452 	C$lab6.c$658$1$152 ==.
                                   3453 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:658: __xdata int old_count = count+1;
      000B49 90 00 59         [24] 3454 	mov	dptr,#_wait_old_count_1_152
      000B4C 74 01            [12] 3455 	mov	a,#0x01
      000B4E 25 32            [12] 3456 	add	a,_count
      000B50 F0               [24] 3457 	movx	@dptr,a
      000B51 E4               [12] 3458 	clr	a
      000B52 35 33            [12] 3459 	addc	a,(_count + 1)
      000B54 A3               [24] 3460 	inc	dptr
      000B55 F0               [24] 3461 	movx	@dptr,a
                           000A6B  3462 	C$lab6.c$659$1$152 ==.
                                   3463 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:659: while (old_count> count);
      000B56 90 00 59         [24] 3464 	mov	dptr,#_wait_old_count_1_152
      000B59 E0               [24] 3465 	movx	a,@dptr
      000B5A FE               [12] 3466 	mov	r6,a
      000B5B A3               [24] 3467 	inc	dptr
      000B5C E0               [24] 3468 	movx	a,@dptr
      000B5D FF               [12] 3469 	mov	r7,a
      000B5E                       3470 00101$:
      000B5E C3               [12] 3471 	clr	c
      000B5F E5 32            [12] 3472 	mov	a,_count
      000B61 9E               [12] 3473 	subb	a,r6
      000B62 E5 33            [12] 3474 	mov	a,(_count + 1)
      000B64 64 80            [12] 3475 	xrl	a,#0x80
      000B66 8F F0            [24] 3476 	mov	b,r7
      000B68 63 F0 80         [24] 3477 	xrl	b,#0x80
      000B6B 95 F0            [12] 3478 	subb	a,b
      000B6D 40 EF            [24] 3479 	jc	00101$
                           000A84  3480 	C$lab6.c$660$1$152 ==.
                           000A84  3481 	XG$wait$0$0 ==.
      000B6F 22               [24] 3482 	ret
                                   3483 ;------------------------------------------------------------
                                   3484 ;Allocation info for local variables in function 'Port_Init'
                                   3485 ;------------------------------------------------------------
                           000A85  3486 	G$Port_Init$0$0 ==.
                           000A85  3487 	C$lab6.c$662$1$152 ==.
                                   3488 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:662: void Port_Init(void)
                                   3489 ;	-----------------------------------------
                                   3490 ;	 function Port_Init
                                   3491 ;	-----------------------------------------
      000B70                       3492 _Port_Init:
                           000A85  3493 	C$lab6.c$664$1$154 ==.
                                   3494 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:664: P0MDOUT &= ~0x32;
      000B70 AF A4            [24] 3495 	mov	r7,_P0MDOUT
      000B72 74 CD            [12] 3496 	mov	a,#0xCD
      000B74 5F               [12] 3497 	anl	a,r7
      000B75 F5 A4            [12] 3498 	mov	_P0MDOUT,a
                           000A8C  3499 	C$lab6.c$666$1$154 ==.
                                   3500 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:666: P1MDIN  &= ~0x20;
      000B77 AF BD            [24] 3501 	mov	r7,_P1MDIN
      000B79 74 DF            [12] 3502 	mov	a,#0xDF
      000B7B 5F               [12] 3503 	anl	a,r7
      000B7C F5 BD            [12] 3504 	mov	_P1MDIN,a
                           000A93  3505 	C$lab6.c$668$1$154 ==.
                                   3506 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:668: P1MDOUT |= 0x0F;
      000B7E 43 A5 0F         [24] 3507 	orl	_P1MDOUT,#0x0F
                           000A96  3508 	C$lab6.c$669$1$154 ==.
                                   3509 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:669: P1MDOUT &= 0x20;
      000B81 53 A5 20         [24] 3510 	anl	_P1MDOUT,#0x20
                           000A99  3511 	C$lab6.c$671$1$154 ==.
                                   3512 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:671: P1 		 = 0x20;
      000B84 75 90 20         [24] 3513 	mov	_P1,#0x20
                           000A9C  3514 	C$lab6.c$674$1$154 ==.
                           000A9C  3515 	XG$Port_Init$0$0 ==.
      000B87 22               [24] 3516 	ret
                                   3517 ;------------------------------------------------------------
                                   3518 ;Allocation info for local variables in function 'PCA_Init'
                                   3519 ;------------------------------------------------------------
                           000A9D  3520 	G$PCA_Init$0$0 ==.
                           000A9D  3521 	C$lab6.c$676$1$154 ==.
                                   3522 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:676: void PCA_Init(void)
                                   3523 ;	-----------------------------------------
                                   3524 ;	 function PCA_Init
                                   3525 ;	-----------------------------------------
      000B88                       3526 _PCA_Init:
                           000A9D  3527 	C$lab6.c$678$1$156 ==.
                                   3528 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:678: PCA0MD   = 0x81;
      000B88 75 D9 81         [24] 3529 	mov	_PCA0MD,#0x81
                           000AA0  3530 	C$lab6.c$679$1$156 ==.
                                   3531 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:679: PCA0CPM0 = 0xC2;    //CCM0 in 16-bit compare mode FOR STEERING
      000B8B 75 DA C2         [24] 3532 	mov	_PCA0CPM0,#0xC2
                           000AA3  3533 	C$lab6.c$680$1$156 ==.
                                   3534 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:680: PCA0CPM1 = 0xC2;
      000B8E 75 DB C2         [24] 3535 	mov	_PCA0CPM1,#0xC2
                           000AA6  3536 	C$lab6.c$681$1$156 ==.
                                   3537 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:681: PCA0CPM2 = 0xC2;    //CCM2 in 16-bit compare mode FOR MOTOR
      000B91 75 DC C2         [24] 3538 	mov	_PCA0CPM2,#0xC2
                           000AA9  3539 	C$lab6.c$682$1$156 ==.
                                   3540 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:682: PCA0CPM3 = 0XC2;
      000B94 75 DD C2         [24] 3541 	mov	_PCA0CPM3,#0xC2
                           000AAC  3542 	C$lab6.c$683$1$156 ==.
                                   3543 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:683: PCA0CN 	 = 0x40;    //Enable PCA counter
      000B97 75 D8 40         [24] 3544 	mov	_PCA0CN,#0x40
                           000AAF  3545 	C$lab6.c$684$1$156 ==.
                                   3546 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:684: EIE1    |= 0x08;    //Enable PCA interrupt
      000B9A 43 E6 08         [24] 3547 	orl	_EIE1,#0x08
                           000AB2  3548 	C$lab6.c$685$1$156 ==.
                                   3549 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:685: EA       = 1   ;    //Enable global interrupts
      000B9D D2 AF            [12] 3550 	setb	_EA
                           000AB4  3551 	C$lab6.c$686$1$156 ==.
                           000AB4  3552 	XG$PCA_Init$0$0 ==.
      000B9F 22               [24] 3553 	ret
                                   3554 ;------------------------------------------------------------
                                   3555 ;Allocation info for local variables in function 'XBR0_Init'
                                   3556 ;------------------------------------------------------------
                           000AB5  3557 	G$XBR0_Init$0$0 ==.
                           000AB5  3558 	C$lab6.c$689$1$156 ==.
                                   3559 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:689: void XBR0_Init(void)
                                   3560 ;	-----------------------------------------
                                   3561 ;	 function XBR0_Init
                                   3562 ;	-----------------------------------------
      000BA0                       3563 _XBR0_Init:
                           000AB5  3564 	C$lab6.c$691$1$158 ==.
                                   3565 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:691: XBR0 = 0x27;
      000BA0 75 E1 27         [24] 3566 	mov	_XBR0,#0x27
                           000AB8  3567 	C$lab6.c$692$1$158 ==.
                           000AB8  3568 	XG$XBR0_Init$0$0 ==.
      000BA3 22               [24] 3569 	ret
                                   3570 ;------------------------------------------------------------
                                   3571 ;Allocation info for local variables in function 'SMB_Init'
                                   3572 ;------------------------------------------------------------
                           000AB9  3573 	G$SMB_Init$0$0 ==.
                           000AB9  3574 	C$lab6.c$694$1$158 ==.
                                   3575 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:694: void SMB_Init(void)
                                   3576 ;	-----------------------------------------
                                   3577 ;	 function SMB_Init
                                   3578 ;	-----------------------------------------
      000BA4                       3579 _SMB_Init:
                           000AB9  3580 	C$lab6.c$696$1$160 ==.
                                   3581 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:696: SMB0CR =0x93;
      000BA4 75 CF 93         [24] 3582 	mov	_SMB0CR,#0x93
                           000ABC  3583 	C$lab6.c$697$1$160 ==.
                                   3584 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:697: ENSMB =1;
      000BA7 D2 C6            [12] 3585 	setb	_ENSMB
                           000ABE  3586 	C$lab6.c$698$1$160 ==.
                           000ABE  3587 	XG$SMB_Init$0$0 ==.
      000BA9 22               [24] 3588 	ret
                                   3589 ;------------------------------------------------------------
                                   3590 ;Allocation info for local variables in function 'ADC_Init'
                                   3591 ;------------------------------------------------------------
                           000ABF  3592 	G$ADC_Init$0$0 ==.
                           000ABF  3593 	C$lab6.c$700$1$160 ==.
                                   3594 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:700: void ADC_Init(void)								/////SETS ADC 
                                   3595 ;	-----------------------------------------
                                   3596 ;	 function ADC_Init
                                   3597 ;	-----------------------------------------
      000BAA                       3598 _ADC_Init:
                           000ABF  3599 	C$lab6.c$702$1$162 ==.
                                   3600 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:702: REF0CN = 0x03;
      000BAA 75 D1 03         [24] 3601 	mov	_REF0CN,#0x03
                           000AC2  3602 	C$lab6.c$703$1$162 ==.
                                   3603 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:703: ADC1CN = 0x80;
      000BAD 75 AA 80         [24] 3604 	mov	_ADC1CN,#0x80
                           000AC5  3605 	C$lab6.c$704$1$162 ==.
                                   3606 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:704: ADC1CF |= 0x01;
      000BB0 43 AB 01         [24] 3607 	orl	_ADC1CF,#0x01
                           000AC8  3608 	C$lab6.c$705$1$162 ==.
                           000AC8  3609 	XG$ADC_Init$0$0 ==.
      000BB3 22               [24] 3610 	ret
                                   3611 ;------------------------------------------------------------
                                   3612 ;Allocation info for local variables in function 'PCA_ISR'
                                   3613 ;------------------------------------------------------------
                           000AC9  3614 	G$PCA_ISR$0$0 ==.
                           000AC9  3615 	C$lab6.c$707$1$162 ==.
                                   3616 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:707: void PCA_ISR ( void ) __interrupt 9
                                   3617 ;	-----------------------------------------
                                   3618 ;	 function PCA_ISR
                                   3619 ;	-----------------------------------------
      000BB4                       3620 _PCA_ISR:
      000BB4 C0 E0            [24] 3621 	push	acc
      000BB6 C0 D0            [24] 3622 	push	psw
                           000ACD  3623 	C$lab6.c$710$1$164 ==.
                                   3624 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:710: if (CF)
                           000ACD  3625 	C$lab6.c$712$2$165 ==.
                                   3626 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:712: CF =0;
      000BB8 10 DF 02         [24] 3627 	jbc	_CF,00108$
      000BBB 80 0E            [24] 3628 	sjmp	00102$
      000BBD                       3629 00108$:
                           000AD2  3630 	C$lab6.c$713$2$165 ==.
                                   3631 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:713: PCA0 = PCA_START;
      000BBD 75 E9 00         [24] 3632 	mov	((_PCA0 >> 0) & 0xFF),#0x00
      000BC0 75 F9 70         [24] 3633 	mov	((_PCA0 >> 8) & 0xFF),#0x70
                           000AD8  3634 	C$lab6.c$714$2$165 ==.
                                   3635 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:714: count++;
      000BC3 05 32            [12] 3636 	inc	_count
      000BC5 E4               [12] 3637 	clr	a
      000BC6 B5 32 02         [24] 3638 	cjne	a,_count,00109$
      000BC9 05 33            [12] 3639 	inc	(_count + 1)
      000BCB                       3640 00109$:
      000BCB                       3641 00102$:
                           000AE0  3642 	C$lab6.c$719$1$164 ==.
                                   3643 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\lab6.c:719: PCA0CN &= 0xC0;
      000BCB 53 D8 C0         [24] 3644 	anl	_PCA0CN,#0xC0
      000BCE D0 D0            [24] 3645 	pop	psw
      000BD0 D0 E0            [24] 3646 	pop	acc
                           000AE7  3647 	C$lab6.c$720$1$164 ==.
                           000AE7  3648 	XG$PCA_ISR$0$0 ==.
      000BD2 32               [24] 3649 	reti
                                   3650 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   3651 ;	eliminated unneeded push/pop dpl
                                   3652 ;	eliminated unneeded push/pop dph
                                   3653 ;	eliminated unneeded push/pop b
                                   3654 	.area CSEG    (CODE)
                                   3655 	.area CONST   (CODE)
                           000000  3656 Flab6$__str_0$0$0 == .
      001701                       3657 ___str_0:
      001701 0A                    3658 	.db 0x0A
      001702 54 79 70 65 20 64 69  3659 	.ascii "Type digits; end w/#"
             67 69 74 73 3B 20 65
             6E 64 20 77 2F 23
      001716 00                    3660 	.db 0x00
                           000016  3661 Flab6$__str_1$0$0 == .
      001717                       3662 ___str_1:
      001717 20 20 20 20 20 25 63  3663 	.ascii "     %c%c%c%c%c"
             25 63 25 63 25 63 25
             63
      001726 00                    3664 	.db 0x00
                           000026  3665 Flab6$__str_2$0$0 == .
      001727                       3666 ___str_2:
      001727 25 63                 3667 	.ascii "%c"
      001729 00                    3668 	.db 0x00
                           000029  3669 Flab6$__str_3$0$0 == .
      00172A                       3670 ___str_3:
      00172A 0D                    3671 	.db 0x0D
      00172B 0A                    3672 	.db 0x0A
      00172C 25 75 2C              3673 	.ascii "%u,"
      00172F 09                    3674 	.db 0x09
      001730 25 64 2C              3675 	.ascii "%d,"
      001733 09                    3676 	.db 0x09
      001734 25 64 2C              3677 	.ascii "%d,"
      001737 09                    3678 	.db 0x09
      001738 25 75 2C              3679 	.ascii "%u,"
      00173B 09                    3680 	.db 0x09
      00173C 25 64 2C              3681 	.ascii "%d,"
      00173F 09                    3682 	.db 0x09
      001740 25 75                 3683 	.ascii "%u"
      001742 00                    3684 	.db 0x00
                           000042  3685 Flab6$__str_4$0$0 == .
      001743                       3686 ___str_4:
      001743 50 6C 65 61 73 65 20  3687 	.ascii "Please enter a kp value:"
             65 6E 74 65 72 20 61
             20 6B 70 20 76 61 6C
             75 65 3A
      00175B 0A                    3688 	.db 0x0A
      00175C 20                    3689 	.ascii " "
      00175D 00                    3690 	.db 0x00
                           00005D  3691 Flab6$__str_5$0$0 == .
      00175E                       3692 ___str_5:
      00175E 50 6C 65 61 73 65 20  3693 	.ascii "Please enter a kd value:"
             65 6E 74 65 72 20 61
             20 6B 64 20 76 61 6C
             75 65 3A
      001776 0A                    3694 	.db 0x0A
      001777 20                    3695 	.ascii " "
      001778 00                    3696 	.db 0x00
                           000078  3697 Flab6$__str_6$0$0 == .
      001779                       3698 ___str_6:
      001779 25 64                 3699 	.ascii "%d"
      00177B 00                    3700 	.db 0x00
                           00007B  3701 Flab6$__str_7$0$0 == .
      00177C                       3702 ___str_7:
      00177C 43 61 6C 69 62 72 61  3703 	.ascii "Calibration:"
             74 69 6F 6E 3A
      001788 0A                    3704 	.db 0x0A
      001789 48 65 6C 6C 6F 20 77  3705 	.ascii "Hello world!"
             6F 72 6C 64 21
      001795 0A                    3706 	.db 0x0A
      001796 30 31 32 5F 33 34 35  3707 	.ascii "012_345_678:"
             5F 36 37 38 3A
      0017A2 0A                    3708 	.db 0x0A
      0017A3 61 62 63 20 64 65 66  3709 	.ascii "abc def ghij"
             20 67 68 69 6A
      0017AF 00                    3710 	.db 0x00
                           0000AF  3711 Flab6$__str_8$0$0 == .
      0017B0                       3712 ___str_8:
      0017B0 0D                    3713 	.db 0x0D
      0017B1 0A                    3714 	.db 0x0A
      0017B2 54 68 65 20 64 65 73  3715 	.ascii "The desired direction is: %d"
             69 72 65 64 20 64 69
             72 65 63 74 69 6F 6E
             20 69 73 3A 20 25 64
      0017CE 00                    3716 	.db 0x00
                                   3717 	.area XINIT   (CODE)
                           000000  3718 Flab6$__xinit_error$0$0 == .
      0017DA                       3719 __xinit__error:
      0017DA 00 00                 3720 	.byte #0x00,#0x00	;  0
                           000002  3721 Flab6$__xinit_old_error$0$0 == .
      0017DC                       3722 __xinit__old_error:
      0017DC 00 00                 3723 	.byte #0x00,#0x00	;  0
                           000004  3724 Flab6$__xinit_distanceR$0$0 == .
      0017DE                       3725 __xinit__distanceR:
      0017DE 28 00                 3726 	.byte #0x28,#0x00	; 40
                                   3727 	.area CABS    (ABS,CODE)
