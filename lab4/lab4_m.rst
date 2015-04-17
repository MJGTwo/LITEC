                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (Apr  5 2014) (MINGW32)
                                      4 ; This file was generated Thu Apr 16 20:45:58 2015
                                      5 ;--------------------------------------------------------
                                      6 	.module lab4_m
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
                                     21 	.globl _SS0
                                     22 	.globl _BUS_SCL
                                     23 	.globl _BUS_TOE
                                     24 	.globl _BUS_FTE
                                     25 	.globl _BUS_AA
                                     26 	.globl _BUS_INT
                                     27 	.globl _BUS_STOP
                                     28 	.globl _BUS_START
                                     29 	.globl _BUS_EN
                                     30 	.globl _BUS_BUSY
                                     31 	.globl _SPIF
                                     32 	.globl _WCOL
                                     33 	.globl _MODF
                                     34 	.globl _RXOVRN
                                     35 	.globl _TXBSY
                                     36 	.globl _SLVSEL
                                     37 	.globl _MSTEN
                                     38 	.globl _SPIEN
                                     39 	.globl _AD0EN
                                     40 	.globl _ADCEN
                                     41 	.globl _AD0TM
                                     42 	.globl _ADCTM
                                     43 	.globl _AD0INT
                                     44 	.globl _ADCINT
                                     45 	.globl _AD0BUSY
                                     46 	.globl _ADBUSY
                                     47 	.globl _AD0CM1
                                     48 	.globl _ADSTM1
                                     49 	.globl _AD0CM0
                                     50 	.globl _ADSTM0
                                     51 	.globl _AD0WINT
                                     52 	.globl _ADWINT
                                     53 	.globl _AD0LJST
                                     54 	.globl _ADLJST
                                     55 	.globl _CF
                                     56 	.globl _CR
                                     57 	.globl _CCF4
                                     58 	.globl _CCF3
                                     59 	.globl _CCF2
                                     60 	.globl _CCF1
                                     61 	.globl _CCF0
                                     62 	.globl _CY
                                     63 	.globl _AC
                                     64 	.globl _F0
                                     65 	.globl _RS1
                                     66 	.globl _RS0
                                     67 	.globl _OV
                                     68 	.globl _F1
                                     69 	.globl _P
                                     70 	.globl _TF2
                                     71 	.globl _EXF2
                                     72 	.globl _RCLK
                                     73 	.globl _TCLK
                                     74 	.globl _EXEN2
                                     75 	.globl _TR2
                                     76 	.globl _CT2
                                     77 	.globl _CPRL2
                                     78 	.globl _BUSY
                                     79 	.globl _ENSMB
                                     80 	.globl _STA
                                     81 	.globl _STO
                                     82 	.globl _SI
                                     83 	.globl _AA
                                     84 	.globl _SMBFTE
                                     85 	.globl _SMBTOE
                                     86 	.globl _PT2
                                     87 	.globl _PS
                                     88 	.globl _PS0
                                     89 	.globl _PT1
                                     90 	.globl _PX1
                                     91 	.globl _PT0
                                     92 	.globl _PX0
                                     93 	.globl _P3_7
                                     94 	.globl _P3_6
                                     95 	.globl _P3_5
                                     96 	.globl _P3_4
                                     97 	.globl _P3_3
                                     98 	.globl _P3_2
                                     99 	.globl _P3_1
                                    100 	.globl _P3_0
                                    101 	.globl _EA
                                    102 	.globl _ET2
                                    103 	.globl _ES
                                    104 	.globl _ES0
                                    105 	.globl _ET1
                                    106 	.globl _EX1
                                    107 	.globl _ET0
                                    108 	.globl _EX0
                                    109 	.globl _P2_7
                                    110 	.globl _P2_6
                                    111 	.globl _P2_5
                                    112 	.globl _P2_4
                                    113 	.globl _P2_3
                                    114 	.globl _P2_2
                                    115 	.globl _P2_1
                                    116 	.globl _P2_0
                                    117 	.globl _S0MODE
                                    118 	.globl _SM00
                                    119 	.globl _SM0
                                    120 	.globl _SM10
                                    121 	.globl _SM1
                                    122 	.globl _MCE0
                                    123 	.globl _SM20
                                    124 	.globl _SM2
                                    125 	.globl _REN0
                                    126 	.globl _REN
                                    127 	.globl _TB80
                                    128 	.globl _TB8
                                    129 	.globl _RB80
                                    130 	.globl _RB8
                                    131 	.globl _TI0
                                    132 	.globl _TI
                                    133 	.globl _RI0
                                    134 	.globl _RI
                                    135 	.globl _P1_7
                                    136 	.globl _P1_6
                                    137 	.globl _P1_5
                                    138 	.globl _P1_4
                                    139 	.globl _P1_3
                                    140 	.globl _P1_2
                                    141 	.globl _P1_1
                                    142 	.globl _P1_0
                                    143 	.globl _TF1
                                    144 	.globl _TR1
                                    145 	.globl _TF0
                                    146 	.globl _TR0
                                    147 	.globl _IE1
                                    148 	.globl _IT1
                                    149 	.globl _IE0
                                    150 	.globl _IT0
                                    151 	.globl _P0_7
                                    152 	.globl _P0_6
                                    153 	.globl _P0_5
                                    154 	.globl _P0_4
                                    155 	.globl _P0_3
                                    156 	.globl _P0_2
                                    157 	.globl _P0_1
                                    158 	.globl _P0_0
                                    159 	.globl _PCA0CP4
                                    160 	.globl _PCA0CP3
                                    161 	.globl _PCA0CP2
                                    162 	.globl _PCA0CP1
                                    163 	.globl _PCA0CP0
                                    164 	.globl _PCA0
                                    165 	.globl _DAC1
                                    166 	.globl _DAC0
                                    167 	.globl _ADC0LT
                                    168 	.globl _ADC0GT
                                    169 	.globl _ADC0
                                    170 	.globl _RCAP4
                                    171 	.globl _TMR4
                                    172 	.globl _TMR3RL
                                    173 	.globl _TMR3
                                    174 	.globl _RCAP2
                                    175 	.globl _TMR2
                                    176 	.globl _TMR1
                                    177 	.globl _TMR0
                                    178 	.globl _WDTCN
                                    179 	.globl _PCA0CPH4
                                    180 	.globl _PCA0CPH3
                                    181 	.globl _PCA0CPH2
                                    182 	.globl _PCA0CPH1
                                    183 	.globl _PCA0CPH0
                                    184 	.globl _PCA0H
                                    185 	.globl _SPI0CN
                                    186 	.globl _EIP2
                                    187 	.globl _EIP1
                                    188 	.globl _TH4
                                    189 	.globl _TL4
                                    190 	.globl _SADDR1
                                    191 	.globl _SBUF1
                                    192 	.globl _SCON1
                                    193 	.globl _B
                                    194 	.globl _RSTSRC
                                    195 	.globl _PCA0CPL4
                                    196 	.globl _PCA0CPL3
                                    197 	.globl _PCA0CPL2
                                    198 	.globl _PCA0CPL1
                                    199 	.globl _PCA0CPL0
                                    200 	.globl _PCA0L
                                    201 	.globl _ADC0CN
                                    202 	.globl _EIE2
                                    203 	.globl _EIE1
                                    204 	.globl _RCAP4H
                                    205 	.globl _RCAP4L
                                    206 	.globl _XBR2
                                    207 	.globl _XBR1
                                    208 	.globl _XBR0
                                    209 	.globl _ACC
                                    210 	.globl _PCA0CPM4
                                    211 	.globl _PCA0CPM3
                                    212 	.globl _PCA0CPM2
                                    213 	.globl _PCA0CPM1
                                    214 	.globl _PCA0CPM0
                                    215 	.globl _PCA0MD
                                    216 	.globl _PCA0CN
                                    217 	.globl _DAC1CN
                                    218 	.globl _DAC1H
                                    219 	.globl _DAC1L
                                    220 	.globl _DAC0CN
                                    221 	.globl _DAC0H
                                    222 	.globl _DAC0L
                                    223 	.globl _REF0CN
                                    224 	.globl _PSW
                                    225 	.globl _SMB0CR
                                    226 	.globl _TH2
                                    227 	.globl _TL2
                                    228 	.globl _RCAP2H
                                    229 	.globl _RCAP2L
                                    230 	.globl _T4CON
                                    231 	.globl _T2CON
                                    232 	.globl _ADC0LTH
                                    233 	.globl _ADC0LTL
                                    234 	.globl _ADC0GTH
                                    235 	.globl _ADC0GTL
                                    236 	.globl _SMB0ADR
                                    237 	.globl _SMB0DAT
                                    238 	.globl _SMB0STA
                                    239 	.globl _SMB0CN
                                    240 	.globl _ADC0H
                                    241 	.globl _ADC0L
                                    242 	.globl _P1MDIN
                                    243 	.globl _ADC0CF
                                    244 	.globl _AMX0SL
                                    245 	.globl _AMX0CF
                                    246 	.globl _SADEN0
                                    247 	.globl _IP
                                    248 	.globl _FLACL
                                    249 	.globl _FLSCL
                                    250 	.globl _P74OUT
                                    251 	.globl _OSCICN
                                    252 	.globl _OSCXCN
                                    253 	.globl _P3
                                    254 	.globl __XPAGE
                                    255 	.globl _EMI0CN
                                    256 	.globl _SADEN1
                                    257 	.globl _P3IF
                                    258 	.globl _AMX1SL
                                    259 	.globl _ADC1CF
                                    260 	.globl _ADC1CN
                                    261 	.globl _SADDR0
                                    262 	.globl _IE
                                    263 	.globl _P3MDOUT
                                    264 	.globl _PRT3CF
                                    265 	.globl _P2MDOUT
                                    266 	.globl _PRT2CF
                                    267 	.globl _P1MDOUT
                                    268 	.globl _PRT1CF
                                    269 	.globl _P0MDOUT
                                    270 	.globl _PRT0CF
                                    271 	.globl _EMI0CF
                                    272 	.globl _EMI0TC
                                    273 	.globl _P2
                                    274 	.globl _CPT1CN
                                    275 	.globl _CPT0CN
                                    276 	.globl _SPI0CKR
                                    277 	.globl _ADC1
                                    278 	.globl _SPI0DAT
                                    279 	.globl _SPI0CFG
                                    280 	.globl _SBUF0
                                    281 	.globl _SBUF
                                    282 	.globl _SCON0
                                    283 	.globl _SCON
                                    284 	.globl _P7
                                    285 	.globl _TMR3H
                                    286 	.globl _TMR3L
                                    287 	.globl _TMR3RLH
                                    288 	.globl _TMR3RLL
                                    289 	.globl _TMR3CN
                                    290 	.globl _P1
                                    291 	.globl _PSCTL
                                    292 	.globl _CKCON
                                    293 	.globl _TH1
                                    294 	.globl _TH0
                                    295 	.globl _TL1
                                    296 	.globl _TL0
                                    297 	.globl _TMOD
                                    298 	.globl _TCON
                                    299 	.globl _PCON
                                    300 	.globl _P6
                                    301 	.globl _P5
                                    302 	.globl _P4
                                    303 	.globl _DPH
                                    304 	.globl _DPL
                                    305 	.globl _SP
                                    306 	.globl _P0
                                    307 	.globl _pwpercent
                                    308 	.globl _r_data
                                    309 	.globl _DRV_lo_to_hi
                                    310 	.globl _starter
                                    311 	.globl _MOTOR_PW
                                    312 	.globl _range
                                    313 	.globl _offset
                                    314 	.globl _error
                                    315 	.globl _desired_heading
                                    316 	.globl _actual_heading
                                    317 	.globl _count
                                    318 	.globl _STR_PW
                                    319 	.globl _STR_lo_to_hi
                                    320 	.globl _i2c_read_data_PARM_4
                                    321 	.globl _i2c_read_data_PARM_3
                                    322 	.globl _i2c_read_data_PARM_2
                                    323 	.globl _i2c_write_data_PARM_4
                                    324 	.globl _i2c_write_data_PARM_3
                                    325 	.globl _i2c_write_data_PARM_2
                                    326 	.globl _putchar
                                    327 	.globl _getchar
                                    328 	.globl _lcd_print
                                    329 	.globl _lcd_clear
                                    330 	.globl _kpd_input
                                    331 	.globl _delay_time
                                    332 	.globl _i2c_start
                                    333 	.globl _i2c_write
                                    334 	.globl _i2c_write_and_stop
                                    335 	.globl _i2c_read
                                    336 	.globl _i2c_read_and_stop
                                    337 	.globl _i2c_write_data
                                    338 	.globl _i2c_read_data
                                    339 	.globl _Accel_Init
                                    340 	.globl _Drive_Motor
                                    341 	.globl _Read_Ranger
                                    342 	.globl _ReadCompass
                                    343 	.globl _Steering_Servo
                                    344 	.globl _Port_Init
                                    345 	.globl _XBR0_Init
                                    346 	.globl _SMB_Init
                                    347 	.globl _PCA_Init
                                    348 	.globl _direction
                                    349 	.globl _start
                                    350 	.globl _wait
                                    351 	.globl _Steering_func
                                    352 	.globl _Drive_func
                                    353 	.globl _read_AD_input
                                    354 	.globl _ADC_Init
                                    355 	.globl _Battery_func
                                    356 	.globl _avoid_crash
                                    357 ;--------------------------------------------------------
                                    358 ; special function registers
                                    359 ;--------------------------------------------------------
                                    360 	.area RSEG    (ABS,DATA)
      000000                        361 	.org 0x0000
                           000080   362 G$P0$0$0 == 0x0080
                           000080   363 _P0	=	0x0080
                           000081   364 G$SP$0$0 == 0x0081
                           000081   365 _SP	=	0x0081
                           000082   366 G$DPL$0$0 == 0x0082
                           000082   367 _DPL	=	0x0082
                           000083   368 G$DPH$0$0 == 0x0083
                           000083   369 _DPH	=	0x0083
                           000084   370 G$P4$0$0 == 0x0084
                           000084   371 _P4	=	0x0084
                           000085   372 G$P5$0$0 == 0x0085
                           000085   373 _P5	=	0x0085
                           000086   374 G$P6$0$0 == 0x0086
                           000086   375 _P6	=	0x0086
                           000087   376 G$PCON$0$0 == 0x0087
                           000087   377 _PCON	=	0x0087
                           000088   378 G$TCON$0$0 == 0x0088
                           000088   379 _TCON	=	0x0088
                           000089   380 G$TMOD$0$0 == 0x0089
                           000089   381 _TMOD	=	0x0089
                           00008A   382 G$TL0$0$0 == 0x008a
                           00008A   383 _TL0	=	0x008a
                           00008B   384 G$TL1$0$0 == 0x008b
                           00008B   385 _TL1	=	0x008b
                           00008C   386 G$TH0$0$0 == 0x008c
                           00008C   387 _TH0	=	0x008c
                           00008D   388 G$TH1$0$0 == 0x008d
                           00008D   389 _TH1	=	0x008d
                           00008E   390 G$CKCON$0$0 == 0x008e
                           00008E   391 _CKCON	=	0x008e
                           00008F   392 G$PSCTL$0$0 == 0x008f
                           00008F   393 _PSCTL	=	0x008f
                           000090   394 G$P1$0$0 == 0x0090
                           000090   395 _P1	=	0x0090
                           000091   396 G$TMR3CN$0$0 == 0x0091
                           000091   397 _TMR3CN	=	0x0091
                           000092   398 G$TMR3RLL$0$0 == 0x0092
                           000092   399 _TMR3RLL	=	0x0092
                           000093   400 G$TMR3RLH$0$0 == 0x0093
                           000093   401 _TMR3RLH	=	0x0093
                           000094   402 G$TMR3L$0$0 == 0x0094
                           000094   403 _TMR3L	=	0x0094
                           000095   404 G$TMR3H$0$0 == 0x0095
                           000095   405 _TMR3H	=	0x0095
                           000096   406 G$P7$0$0 == 0x0096
                           000096   407 _P7	=	0x0096
                           000098   408 G$SCON$0$0 == 0x0098
                           000098   409 _SCON	=	0x0098
                           000098   410 G$SCON0$0$0 == 0x0098
                           000098   411 _SCON0	=	0x0098
                           000099   412 G$SBUF$0$0 == 0x0099
                           000099   413 _SBUF	=	0x0099
                           000099   414 G$SBUF0$0$0 == 0x0099
                           000099   415 _SBUF0	=	0x0099
                           00009A   416 G$SPI0CFG$0$0 == 0x009a
                           00009A   417 _SPI0CFG	=	0x009a
                           00009B   418 G$SPI0DAT$0$0 == 0x009b
                           00009B   419 _SPI0DAT	=	0x009b
                           00009C   420 G$ADC1$0$0 == 0x009c
                           00009C   421 _ADC1	=	0x009c
                           00009D   422 G$SPI0CKR$0$0 == 0x009d
                           00009D   423 _SPI0CKR	=	0x009d
                           00009E   424 G$CPT0CN$0$0 == 0x009e
                           00009E   425 _CPT0CN	=	0x009e
                           00009F   426 G$CPT1CN$0$0 == 0x009f
                           00009F   427 _CPT1CN	=	0x009f
                           0000A0   428 G$P2$0$0 == 0x00a0
                           0000A0   429 _P2	=	0x00a0
                           0000A1   430 G$EMI0TC$0$0 == 0x00a1
                           0000A1   431 _EMI0TC	=	0x00a1
                           0000A3   432 G$EMI0CF$0$0 == 0x00a3
                           0000A3   433 _EMI0CF	=	0x00a3
                           0000A4   434 G$PRT0CF$0$0 == 0x00a4
                           0000A4   435 _PRT0CF	=	0x00a4
                           0000A4   436 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   437 _P0MDOUT	=	0x00a4
                           0000A5   438 G$PRT1CF$0$0 == 0x00a5
                           0000A5   439 _PRT1CF	=	0x00a5
                           0000A5   440 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   441 _P1MDOUT	=	0x00a5
                           0000A6   442 G$PRT2CF$0$0 == 0x00a6
                           0000A6   443 _PRT2CF	=	0x00a6
                           0000A6   444 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   445 _P2MDOUT	=	0x00a6
                           0000A7   446 G$PRT3CF$0$0 == 0x00a7
                           0000A7   447 _PRT3CF	=	0x00a7
                           0000A7   448 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   449 _P3MDOUT	=	0x00a7
                           0000A8   450 G$IE$0$0 == 0x00a8
                           0000A8   451 _IE	=	0x00a8
                           0000A9   452 G$SADDR0$0$0 == 0x00a9
                           0000A9   453 _SADDR0	=	0x00a9
                           0000AA   454 G$ADC1CN$0$0 == 0x00aa
                           0000AA   455 _ADC1CN	=	0x00aa
                           0000AB   456 G$ADC1CF$0$0 == 0x00ab
                           0000AB   457 _ADC1CF	=	0x00ab
                           0000AC   458 G$AMX1SL$0$0 == 0x00ac
                           0000AC   459 _AMX1SL	=	0x00ac
                           0000AD   460 G$P3IF$0$0 == 0x00ad
                           0000AD   461 _P3IF	=	0x00ad
                           0000AE   462 G$SADEN1$0$0 == 0x00ae
                           0000AE   463 _SADEN1	=	0x00ae
                           0000AF   464 G$EMI0CN$0$0 == 0x00af
                           0000AF   465 _EMI0CN	=	0x00af
                           0000AF   466 G$_XPAGE$0$0 == 0x00af
                           0000AF   467 __XPAGE	=	0x00af
                           0000B0   468 G$P3$0$0 == 0x00b0
                           0000B0   469 _P3	=	0x00b0
                           0000B1   470 G$OSCXCN$0$0 == 0x00b1
                           0000B1   471 _OSCXCN	=	0x00b1
                           0000B2   472 G$OSCICN$0$0 == 0x00b2
                           0000B2   473 _OSCICN	=	0x00b2
                           0000B5   474 G$P74OUT$0$0 == 0x00b5
                           0000B5   475 _P74OUT	=	0x00b5
                           0000B6   476 G$FLSCL$0$0 == 0x00b6
                           0000B6   477 _FLSCL	=	0x00b6
                           0000B7   478 G$FLACL$0$0 == 0x00b7
                           0000B7   479 _FLACL	=	0x00b7
                           0000B8   480 G$IP$0$0 == 0x00b8
                           0000B8   481 _IP	=	0x00b8
                           0000B9   482 G$SADEN0$0$0 == 0x00b9
                           0000B9   483 _SADEN0	=	0x00b9
                           0000BA   484 G$AMX0CF$0$0 == 0x00ba
                           0000BA   485 _AMX0CF	=	0x00ba
                           0000BB   486 G$AMX0SL$0$0 == 0x00bb
                           0000BB   487 _AMX0SL	=	0x00bb
                           0000BC   488 G$ADC0CF$0$0 == 0x00bc
                           0000BC   489 _ADC0CF	=	0x00bc
                           0000BD   490 G$P1MDIN$0$0 == 0x00bd
                           0000BD   491 _P1MDIN	=	0x00bd
                           0000BE   492 G$ADC0L$0$0 == 0x00be
                           0000BE   493 _ADC0L	=	0x00be
                           0000BF   494 G$ADC0H$0$0 == 0x00bf
                           0000BF   495 _ADC0H	=	0x00bf
                           0000C0   496 G$SMB0CN$0$0 == 0x00c0
                           0000C0   497 _SMB0CN	=	0x00c0
                           0000C1   498 G$SMB0STA$0$0 == 0x00c1
                           0000C1   499 _SMB0STA	=	0x00c1
                           0000C2   500 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   501 _SMB0DAT	=	0x00c2
                           0000C3   502 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   503 _SMB0ADR	=	0x00c3
                           0000C4   504 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   505 _ADC0GTL	=	0x00c4
                           0000C5   506 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   507 _ADC0GTH	=	0x00c5
                           0000C6   508 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   509 _ADC0LTL	=	0x00c6
                           0000C7   510 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   511 _ADC0LTH	=	0x00c7
                           0000C8   512 G$T2CON$0$0 == 0x00c8
                           0000C8   513 _T2CON	=	0x00c8
                           0000C9   514 G$T4CON$0$0 == 0x00c9
                           0000C9   515 _T4CON	=	0x00c9
                           0000CA   516 G$RCAP2L$0$0 == 0x00ca
                           0000CA   517 _RCAP2L	=	0x00ca
                           0000CB   518 G$RCAP2H$0$0 == 0x00cb
                           0000CB   519 _RCAP2H	=	0x00cb
                           0000CC   520 G$TL2$0$0 == 0x00cc
                           0000CC   521 _TL2	=	0x00cc
                           0000CD   522 G$TH2$0$0 == 0x00cd
                           0000CD   523 _TH2	=	0x00cd
                           0000CF   524 G$SMB0CR$0$0 == 0x00cf
                           0000CF   525 _SMB0CR	=	0x00cf
                           0000D0   526 G$PSW$0$0 == 0x00d0
                           0000D0   527 _PSW	=	0x00d0
                           0000D1   528 G$REF0CN$0$0 == 0x00d1
                           0000D1   529 _REF0CN	=	0x00d1
                           0000D2   530 G$DAC0L$0$0 == 0x00d2
                           0000D2   531 _DAC0L	=	0x00d2
                           0000D3   532 G$DAC0H$0$0 == 0x00d3
                           0000D3   533 _DAC0H	=	0x00d3
                           0000D4   534 G$DAC0CN$0$0 == 0x00d4
                           0000D4   535 _DAC0CN	=	0x00d4
                           0000D5   536 G$DAC1L$0$0 == 0x00d5
                           0000D5   537 _DAC1L	=	0x00d5
                           0000D6   538 G$DAC1H$0$0 == 0x00d6
                           0000D6   539 _DAC1H	=	0x00d6
                           0000D7   540 G$DAC1CN$0$0 == 0x00d7
                           0000D7   541 _DAC1CN	=	0x00d7
                           0000D8   542 G$PCA0CN$0$0 == 0x00d8
                           0000D8   543 _PCA0CN	=	0x00d8
                           0000D9   544 G$PCA0MD$0$0 == 0x00d9
                           0000D9   545 _PCA0MD	=	0x00d9
                           0000DA   546 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   547 _PCA0CPM0	=	0x00da
                           0000DB   548 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   549 _PCA0CPM1	=	0x00db
                           0000DC   550 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   551 _PCA0CPM2	=	0x00dc
                           0000DD   552 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   553 _PCA0CPM3	=	0x00dd
                           0000DE   554 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   555 _PCA0CPM4	=	0x00de
                           0000E0   556 G$ACC$0$0 == 0x00e0
                           0000E0   557 _ACC	=	0x00e0
                           0000E1   558 G$XBR0$0$0 == 0x00e1
                           0000E1   559 _XBR0	=	0x00e1
                           0000E2   560 G$XBR1$0$0 == 0x00e2
                           0000E2   561 _XBR1	=	0x00e2
                           0000E3   562 G$XBR2$0$0 == 0x00e3
                           0000E3   563 _XBR2	=	0x00e3
                           0000E4   564 G$RCAP4L$0$0 == 0x00e4
                           0000E4   565 _RCAP4L	=	0x00e4
                           0000E5   566 G$RCAP4H$0$0 == 0x00e5
                           0000E5   567 _RCAP4H	=	0x00e5
                           0000E6   568 G$EIE1$0$0 == 0x00e6
                           0000E6   569 _EIE1	=	0x00e6
                           0000E7   570 G$EIE2$0$0 == 0x00e7
                           0000E7   571 _EIE2	=	0x00e7
                           0000E8   572 G$ADC0CN$0$0 == 0x00e8
                           0000E8   573 _ADC0CN	=	0x00e8
                           0000E9   574 G$PCA0L$0$0 == 0x00e9
                           0000E9   575 _PCA0L	=	0x00e9
                           0000EA   576 G$PCA0CPL0$0$0 == 0x00ea
                           0000EA   577 _PCA0CPL0	=	0x00ea
                           0000EB   578 G$PCA0CPL1$0$0 == 0x00eb
                           0000EB   579 _PCA0CPL1	=	0x00eb
                           0000EC   580 G$PCA0CPL2$0$0 == 0x00ec
                           0000EC   581 _PCA0CPL2	=	0x00ec
                           0000ED   582 G$PCA0CPL3$0$0 == 0x00ed
                           0000ED   583 _PCA0CPL3	=	0x00ed
                           0000EE   584 G$PCA0CPL4$0$0 == 0x00ee
                           0000EE   585 _PCA0CPL4	=	0x00ee
                           0000EF   586 G$RSTSRC$0$0 == 0x00ef
                           0000EF   587 _RSTSRC	=	0x00ef
                           0000F0   588 G$B$0$0 == 0x00f0
                           0000F0   589 _B	=	0x00f0
                           0000F1   590 G$SCON1$0$0 == 0x00f1
                           0000F1   591 _SCON1	=	0x00f1
                           0000F2   592 G$SBUF1$0$0 == 0x00f2
                           0000F2   593 _SBUF1	=	0x00f2
                           0000F3   594 G$SADDR1$0$0 == 0x00f3
                           0000F3   595 _SADDR1	=	0x00f3
                           0000F4   596 G$TL4$0$0 == 0x00f4
                           0000F4   597 _TL4	=	0x00f4
                           0000F5   598 G$TH4$0$0 == 0x00f5
                           0000F5   599 _TH4	=	0x00f5
                           0000F6   600 G$EIP1$0$0 == 0x00f6
                           0000F6   601 _EIP1	=	0x00f6
                           0000F7   602 G$EIP2$0$0 == 0x00f7
                           0000F7   603 _EIP2	=	0x00f7
                           0000F8   604 G$SPI0CN$0$0 == 0x00f8
                           0000F8   605 _SPI0CN	=	0x00f8
                           0000F9   606 G$PCA0H$0$0 == 0x00f9
                           0000F9   607 _PCA0H	=	0x00f9
                           0000FA   608 G$PCA0CPH0$0$0 == 0x00fa
                           0000FA   609 _PCA0CPH0	=	0x00fa
                           0000FB   610 G$PCA0CPH1$0$0 == 0x00fb
                           0000FB   611 _PCA0CPH1	=	0x00fb
                           0000FC   612 G$PCA0CPH2$0$0 == 0x00fc
                           0000FC   613 _PCA0CPH2	=	0x00fc
                           0000FD   614 G$PCA0CPH3$0$0 == 0x00fd
                           0000FD   615 _PCA0CPH3	=	0x00fd
                           0000FE   616 G$PCA0CPH4$0$0 == 0x00fe
                           0000FE   617 _PCA0CPH4	=	0x00fe
                           0000FF   618 G$WDTCN$0$0 == 0x00ff
                           0000FF   619 _WDTCN	=	0x00ff
                           008C8A   620 G$TMR0$0$0 == 0x8c8a
                           008C8A   621 _TMR0	=	0x8c8a
                           008D8B   622 G$TMR1$0$0 == 0x8d8b
                           008D8B   623 _TMR1	=	0x8d8b
                           00CDCC   624 G$TMR2$0$0 == 0xcdcc
                           00CDCC   625 _TMR2	=	0xcdcc
                           00CBCA   626 G$RCAP2$0$0 == 0xcbca
                           00CBCA   627 _RCAP2	=	0xcbca
                           009594   628 G$TMR3$0$0 == 0x9594
                           009594   629 _TMR3	=	0x9594
                           009392   630 G$TMR3RL$0$0 == 0x9392
                           009392   631 _TMR3RL	=	0x9392
                           00F5F4   632 G$TMR4$0$0 == 0xf5f4
                           00F5F4   633 _TMR4	=	0xf5f4
                           00E5E4   634 G$RCAP4$0$0 == 0xe5e4
                           00E5E4   635 _RCAP4	=	0xe5e4
                           00BFBE   636 G$ADC0$0$0 == 0xbfbe
                           00BFBE   637 _ADC0	=	0xbfbe
                           00C5C4   638 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   639 _ADC0GT	=	0xc5c4
                           00C7C6   640 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   641 _ADC0LT	=	0xc7c6
                           00D3D2   642 G$DAC0$0$0 == 0xd3d2
                           00D3D2   643 _DAC0	=	0xd3d2
                           00D6D5   644 G$DAC1$0$0 == 0xd6d5
                           00D6D5   645 _DAC1	=	0xd6d5
                           00F9E9   646 G$PCA0$0$0 == 0xf9e9
                           00F9E9   647 _PCA0	=	0xf9e9
                           00FAEA   648 G$PCA0CP0$0$0 == 0xfaea
                           00FAEA   649 _PCA0CP0	=	0xfaea
                           00FBEB   650 G$PCA0CP1$0$0 == 0xfbeb
                           00FBEB   651 _PCA0CP1	=	0xfbeb
                           00FCEC   652 G$PCA0CP2$0$0 == 0xfcec
                           00FCEC   653 _PCA0CP2	=	0xfcec
                           00FDED   654 G$PCA0CP3$0$0 == 0xfded
                           00FDED   655 _PCA0CP3	=	0xfded
                           00FEEE   656 G$PCA0CP4$0$0 == 0xfeee
                           00FEEE   657 _PCA0CP4	=	0xfeee
                                    658 ;--------------------------------------------------------
                                    659 ; special function bits
                                    660 ;--------------------------------------------------------
                                    661 	.area RSEG    (ABS,DATA)
      000000                        662 	.org 0x0000
                           000080   663 G$P0_0$0$0 == 0x0080
                           000080   664 _P0_0	=	0x0080
                           000081   665 G$P0_1$0$0 == 0x0081
                           000081   666 _P0_1	=	0x0081
                           000082   667 G$P0_2$0$0 == 0x0082
                           000082   668 _P0_2	=	0x0082
                           000083   669 G$P0_3$0$0 == 0x0083
                           000083   670 _P0_3	=	0x0083
                           000084   671 G$P0_4$0$0 == 0x0084
                           000084   672 _P0_4	=	0x0084
                           000085   673 G$P0_5$0$0 == 0x0085
                           000085   674 _P0_5	=	0x0085
                           000086   675 G$P0_6$0$0 == 0x0086
                           000086   676 _P0_6	=	0x0086
                           000087   677 G$P0_7$0$0 == 0x0087
                           000087   678 _P0_7	=	0x0087
                           000088   679 G$IT0$0$0 == 0x0088
                           000088   680 _IT0	=	0x0088
                           000089   681 G$IE0$0$0 == 0x0089
                           000089   682 _IE0	=	0x0089
                           00008A   683 G$IT1$0$0 == 0x008a
                           00008A   684 _IT1	=	0x008a
                           00008B   685 G$IE1$0$0 == 0x008b
                           00008B   686 _IE1	=	0x008b
                           00008C   687 G$TR0$0$0 == 0x008c
                           00008C   688 _TR0	=	0x008c
                           00008D   689 G$TF0$0$0 == 0x008d
                           00008D   690 _TF0	=	0x008d
                           00008E   691 G$TR1$0$0 == 0x008e
                           00008E   692 _TR1	=	0x008e
                           00008F   693 G$TF1$0$0 == 0x008f
                           00008F   694 _TF1	=	0x008f
                           000090   695 G$P1_0$0$0 == 0x0090
                           000090   696 _P1_0	=	0x0090
                           000091   697 G$P1_1$0$0 == 0x0091
                           000091   698 _P1_1	=	0x0091
                           000092   699 G$P1_2$0$0 == 0x0092
                           000092   700 _P1_2	=	0x0092
                           000093   701 G$P1_3$0$0 == 0x0093
                           000093   702 _P1_3	=	0x0093
                           000094   703 G$P1_4$0$0 == 0x0094
                           000094   704 _P1_4	=	0x0094
                           000095   705 G$P1_5$0$0 == 0x0095
                           000095   706 _P1_5	=	0x0095
                           000096   707 G$P1_6$0$0 == 0x0096
                           000096   708 _P1_6	=	0x0096
                           000097   709 G$P1_7$0$0 == 0x0097
                           000097   710 _P1_7	=	0x0097
                           000098   711 G$RI$0$0 == 0x0098
                           000098   712 _RI	=	0x0098
                           000098   713 G$RI0$0$0 == 0x0098
                           000098   714 _RI0	=	0x0098
                           000099   715 G$TI$0$0 == 0x0099
                           000099   716 _TI	=	0x0099
                           000099   717 G$TI0$0$0 == 0x0099
                           000099   718 _TI0	=	0x0099
                           00009A   719 G$RB8$0$0 == 0x009a
                           00009A   720 _RB8	=	0x009a
                           00009A   721 G$RB80$0$0 == 0x009a
                           00009A   722 _RB80	=	0x009a
                           00009B   723 G$TB8$0$0 == 0x009b
                           00009B   724 _TB8	=	0x009b
                           00009B   725 G$TB80$0$0 == 0x009b
                           00009B   726 _TB80	=	0x009b
                           00009C   727 G$REN$0$0 == 0x009c
                           00009C   728 _REN	=	0x009c
                           00009C   729 G$REN0$0$0 == 0x009c
                           00009C   730 _REN0	=	0x009c
                           00009D   731 G$SM2$0$0 == 0x009d
                           00009D   732 _SM2	=	0x009d
                           00009D   733 G$SM20$0$0 == 0x009d
                           00009D   734 _SM20	=	0x009d
                           00009D   735 G$MCE0$0$0 == 0x009d
                           00009D   736 _MCE0	=	0x009d
                           00009E   737 G$SM1$0$0 == 0x009e
                           00009E   738 _SM1	=	0x009e
                           00009E   739 G$SM10$0$0 == 0x009e
                           00009E   740 _SM10	=	0x009e
                           00009F   741 G$SM0$0$0 == 0x009f
                           00009F   742 _SM0	=	0x009f
                           00009F   743 G$SM00$0$0 == 0x009f
                           00009F   744 _SM00	=	0x009f
                           00009F   745 G$S0MODE$0$0 == 0x009f
                           00009F   746 _S0MODE	=	0x009f
                           0000A0   747 G$P2_0$0$0 == 0x00a0
                           0000A0   748 _P2_0	=	0x00a0
                           0000A1   749 G$P2_1$0$0 == 0x00a1
                           0000A1   750 _P2_1	=	0x00a1
                           0000A2   751 G$P2_2$0$0 == 0x00a2
                           0000A2   752 _P2_2	=	0x00a2
                           0000A3   753 G$P2_3$0$0 == 0x00a3
                           0000A3   754 _P2_3	=	0x00a3
                           0000A4   755 G$P2_4$0$0 == 0x00a4
                           0000A4   756 _P2_4	=	0x00a4
                           0000A5   757 G$P2_5$0$0 == 0x00a5
                           0000A5   758 _P2_5	=	0x00a5
                           0000A6   759 G$P2_6$0$0 == 0x00a6
                           0000A6   760 _P2_6	=	0x00a6
                           0000A7   761 G$P2_7$0$0 == 0x00a7
                           0000A7   762 _P2_7	=	0x00a7
                           0000A8   763 G$EX0$0$0 == 0x00a8
                           0000A8   764 _EX0	=	0x00a8
                           0000A9   765 G$ET0$0$0 == 0x00a9
                           0000A9   766 _ET0	=	0x00a9
                           0000AA   767 G$EX1$0$0 == 0x00aa
                           0000AA   768 _EX1	=	0x00aa
                           0000AB   769 G$ET1$0$0 == 0x00ab
                           0000AB   770 _ET1	=	0x00ab
                           0000AC   771 G$ES0$0$0 == 0x00ac
                           0000AC   772 _ES0	=	0x00ac
                           0000AC   773 G$ES$0$0 == 0x00ac
                           0000AC   774 _ES	=	0x00ac
                           0000AD   775 G$ET2$0$0 == 0x00ad
                           0000AD   776 _ET2	=	0x00ad
                           0000AF   777 G$EA$0$0 == 0x00af
                           0000AF   778 _EA	=	0x00af
                           0000B0   779 G$P3_0$0$0 == 0x00b0
                           0000B0   780 _P3_0	=	0x00b0
                           0000B1   781 G$P3_1$0$0 == 0x00b1
                           0000B1   782 _P3_1	=	0x00b1
                           0000B2   783 G$P3_2$0$0 == 0x00b2
                           0000B2   784 _P3_2	=	0x00b2
                           0000B3   785 G$P3_3$0$0 == 0x00b3
                           0000B3   786 _P3_3	=	0x00b3
                           0000B4   787 G$P3_4$0$0 == 0x00b4
                           0000B4   788 _P3_4	=	0x00b4
                           0000B5   789 G$P3_5$0$0 == 0x00b5
                           0000B5   790 _P3_5	=	0x00b5
                           0000B6   791 G$P3_6$0$0 == 0x00b6
                           0000B6   792 _P3_6	=	0x00b6
                           0000B7   793 G$P3_7$0$0 == 0x00b7
                           0000B7   794 _P3_7	=	0x00b7
                           0000B8   795 G$PX0$0$0 == 0x00b8
                           0000B8   796 _PX0	=	0x00b8
                           0000B9   797 G$PT0$0$0 == 0x00b9
                           0000B9   798 _PT0	=	0x00b9
                           0000BA   799 G$PX1$0$0 == 0x00ba
                           0000BA   800 _PX1	=	0x00ba
                           0000BB   801 G$PT1$0$0 == 0x00bb
                           0000BB   802 _PT1	=	0x00bb
                           0000BC   803 G$PS0$0$0 == 0x00bc
                           0000BC   804 _PS0	=	0x00bc
                           0000BC   805 G$PS$0$0 == 0x00bc
                           0000BC   806 _PS	=	0x00bc
                           0000BD   807 G$PT2$0$0 == 0x00bd
                           0000BD   808 _PT2	=	0x00bd
                           0000C0   809 G$SMBTOE$0$0 == 0x00c0
                           0000C0   810 _SMBTOE	=	0x00c0
                           0000C1   811 G$SMBFTE$0$0 == 0x00c1
                           0000C1   812 _SMBFTE	=	0x00c1
                           0000C2   813 G$AA$0$0 == 0x00c2
                           0000C2   814 _AA	=	0x00c2
                           0000C3   815 G$SI$0$0 == 0x00c3
                           0000C3   816 _SI	=	0x00c3
                           0000C4   817 G$STO$0$0 == 0x00c4
                           0000C4   818 _STO	=	0x00c4
                           0000C5   819 G$STA$0$0 == 0x00c5
                           0000C5   820 _STA	=	0x00c5
                           0000C6   821 G$ENSMB$0$0 == 0x00c6
                           0000C6   822 _ENSMB	=	0x00c6
                           0000C7   823 G$BUSY$0$0 == 0x00c7
                           0000C7   824 _BUSY	=	0x00c7
                           0000C8   825 G$CPRL2$0$0 == 0x00c8
                           0000C8   826 _CPRL2	=	0x00c8
                           0000C9   827 G$CT2$0$0 == 0x00c9
                           0000C9   828 _CT2	=	0x00c9
                           0000CA   829 G$TR2$0$0 == 0x00ca
                           0000CA   830 _TR2	=	0x00ca
                           0000CB   831 G$EXEN2$0$0 == 0x00cb
                           0000CB   832 _EXEN2	=	0x00cb
                           0000CC   833 G$TCLK$0$0 == 0x00cc
                           0000CC   834 _TCLK	=	0x00cc
                           0000CD   835 G$RCLK$0$0 == 0x00cd
                           0000CD   836 _RCLK	=	0x00cd
                           0000CE   837 G$EXF2$0$0 == 0x00ce
                           0000CE   838 _EXF2	=	0x00ce
                           0000CF   839 G$TF2$0$0 == 0x00cf
                           0000CF   840 _TF2	=	0x00cf
                           0000D0   841 G$P$0$0 == 0x00d0
                           0000D0   842 _P	=	0x00d0
                           0000D1   843 G$F1$0$0 == 0x00d1
                           0000D1   844 _F1	=	0x00d1
                           0000D2   845 G$OV$0$0 == 0x00d2
                           0000D2   846 _OV	=	0x00d2
                           0000D3   847 G$RS0$0$0 == 0x00d3
                           0000D3   848 _RS0	=	0x00d3
                           0000D4   849 G$RS1$0$0 == 0x00d4
                           0000D4   850 _RS1	=	0x00d4
                           0000D5   851 G$F0$0$0 == 0x00d5
                           0000D5   852 _F0	=	0x00d5
                           0000D6   853 G$AC$0$0 == 0x00d6
                           0000D6   854 _AC	=	0x00d6
                           0000D7   855 G$CY$0$0 == 0x00d7
                           0000D7   856 _CY	=	0x00d7
                           0000D8   857 G$CCF0$0$0 == 0x00d8
                           0000D8   858 _CCF0	=	0x00d8
                           0000D9   859 G$CCF1$0$0 == 0x00d9
                           0000D9   860 _CCF1	=	0x00d9
                           0000DA   861 G$CCF2$0$0 == 0x00da
                           0000DA   862 _CCF2	=	0x00da
                           0000DB   863 G$CCF3$0$0 == 0x00db
                           0000DB   864 _CCF3	=	0x00db
                           0000DC   865 G$CCF4$0$0 == 0x00dc
                           0000DC   866 _CCF4	=	0x00dc
                           0000DE   867 G$CR$0$0 == 0x00de
                           0000DE   868 _CR	=	0x00de
                           0000DF   869 G$CF$0$0 == 0x00df
                           0000DF   870 _CF	=	0x00df
                           0000E8   871 G$ADLJST$0$0 == 0x00e8
                           0000E8   872 _ADLJST	=	0x00e8
                           0000E8   873 G$AD0LJST$0$0 == 0x00e8
                           0000E8   874 _AD0LJST	=	0x00e8
                           0000E9   875 G$ADWINT$0$0 == 0x00e9
                           0000E9   876 _ADWINT	=	0x00e9
                           0000E9   877 G$AD0WINT$0$0 == 0x00e9
                           0000E9   878 _AD0WINT	=	0x00e9
                           0000EA   879 G$ADSTM0$0$0 == 0x00ea
                           0000EA   880 _ADSTM0	=	0x00ea
                           0000EA   881 G$AD0CM0$0$0 == 0x00ea
                           0000EA   882 _AD0CM0	=	0x00ea
                           0000EB   883 G$ADSTM1$0$0 == 0x00eb
                           0000EB   884 _ADSTM1	=	0x00eb
                           0000EB   885 G$AD0CM1$0$0 == 0x00eb
                           0000EB   886 _AD0CM1	=	0x00eb
                           0000EC   887 G$ADBUSY$0$0 == 0x00ec
                           0000EC   888 _ADBUSY	=	0x00ec
                           0000EC   889 G$AD0BUSY$0$0 == 0x00ec
                           0000EC   890 _AD0BUSY	=	0x00ec
                           0000ED   891 G$ADCINT$0$0 == 0x00ed
                           0000ED   892 _ADCINT	=	0x00ed
                           0000ED   893 G$AD0INT$0$0 == 0x00ed
                           0000ED   894 _AD0INT	=	0x00ed
                           0000EE   895 G$ADCTM$0$0 == 0x00ee
                           0000EE   896 _ADCTM	=	0x00ee
                           0000EE   897 G$AD0TM$0$0 == 0x00ee
                           0000EE   898 _AD0TM	=	0x00ee
                           0000EF   899 G$ADCEN$0$0 == 0x00ef
                           0000EF   900 _ADCEN	=	0x00ef
                           0000EF   901 G$AD0EN$0$0 == 0x00ef
                           0000EF   902 _AD0EN	=	0x00ef
                           0000F8   903 G$SPIEN$0$0 == 0x00f8
                           0000F8   904 _SPIEN	=	0x00f8
                           0000F9   905 G$MSTEN$0$0 == 0x00f9
                           0000F9   906 _MSTEN	=	0x00f9
                           0000FA   907 G$SLVSEL$0$0 == 0x00fa
                           0000FA   908 _SLVSEL	=	0x00fa
                           0000FB   909 G$TXBSY$0$0 == 0x00fb
                           0000FB   910 _TXBSY	=	0x00fb
                           0000FC   911 G$RXOVRN$0$0 == 0x00fc
                           0000FC   912 _RXOVRN	=	0x00fc
                           0000FD   913 G$MODF$0$0 == 0x00fd
                           0000FD   914 _MODF	=	0x00fd
                           0000FE   915 G$WCOL$0$0 == 0x00fe
                           0000FE   916 _WCOL	=	0x00fe
                           0000FF   917 G$SPIF$0$0 == 0x00ff
                           0000FF   918 _SPIF	=	0x00ff
                           0000C7   919 G$BUS_BUSY$0$0 == 0x00c7
                           0000C7   920 _BUS_BUSY	=	0x00c7
                           0000C6   921 G$BUS_EN$0$0 == 0x00c6
                           0000C6   922 _BUS_EN	=	0x00c6
                           0000C5   923 G$BUS_START$0$0 == 0x00c5
                           0000C5   924 _BUS_START	=	0x00c5
                           0000C4   925 G$BUS_STOP$0$0 == 0x00c4
                           0000C4   926 _BUS_STOP	=	0x00c4
                           0000C3   927 G$BUS_INT$0$0 == 0x00c3
                           0000C3   928 _BUS_INT	=	0x00c3
                           0000C2   929 G$BUS_AA$0$0 == 0x00c2
                           0000C2   930 _BUS_AA	=	0x00c2
                           0000C1   931 G$BUS_FTE$0$0 == 0x00c1
                           0000C1   932 _BUS_FTE	=	0x00c1
                           0000C0   933 G$BUS_TOE$0$0 == 0x00c0
                           0000C0   934 _BUS_TOE	=	0x00c0
                           000083   935 G$BUS_SCL$0$0 == 0x0083
                           000083   936 _BUS_SCL	=	0x0083
                           0000B7   937 G$SS0$0$0 == 0x00b7
                           0000B7   938 _SS0	=	0x00b7
                                    939 ;--------------------------------------------------------
                                    940 ; overlayable register banks
                                    941 ;--------------------------------------------------------
                                    942 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        943 	.ds 8
                                    944 ;--------------------------------------------------------
                                    945 ; internal ram data
                                    946 ;--------------------------------------------------------
                                    947 	.area DSEG    (DATA)
                           000000   948 Llab4_m.lcd_clear$NumBytes$1$77==.
      000022                        949 _lcd_clear_NumBytes_1_77:
      000022                        950 	.ds 1
                           000001   951 Llab4_m.lcd_clear$Cmd$1$77==.
      000023                        952 _lcd_clear_Cmd_1_77:
      000023                        953 	.ds 2
                           000003   954 Llab4_m.read_keypad$Data$1$78==.
      000025                        955 _read_keypad_Data_1_78:
      000025                        956 	.ds 2
                           000005   957 Llab4_m.i2c_write_data$start_reg$1$97==.
      000027                        958 _i2c_write_data_PARM_2:
      000027                        959 	.ds 1
                           000006   960 Llab4_m.i2c_write_data$buffer$1$97==.
      000028                        961 _i2c_write_data_PARM_3:
      000028                        962 	.ds 3
                           000009   963 Llab4_m.i2c_write_data$num_bytes$1$97==.
      00002B                        964 _i2c_write_data_PARM_4:
      00002B                        965 	.ds 1
                           00000A   966 Llab4_m.i2c_read_data$start_reg$1$99==.
      00002C                        967 _i2c_read_data_PARM_2:
      00002C                        968 	.ds 1
                           00000B   969 Llab4_m.i2c_read_data$buffer$1$99==.
      00002D                        970 _i2c_read_data_PARM_3:
      00002D                        971 	.ds 3
                           00000E   972 Llab4_m.i2c_read_data$num_bytes$1$99==.
      000030                        973 _i2c_read_data_PARM_4:
      000030                        974 	.ds 1
                           00000F   975 Llab4_m.Accel_Init$Data2$1$103==.
      000031                        976 _Accel_Init_Data2_1_103:
      000031                        977 	.ds 1
                           000010   978 G$STR_lo_to_hi$0$0==.
      000032                        979 _STR_lo_to_hi::
      000032                        980 	.ds 2
                           000012   981 G$STR_PW$0$0==.
      000034                        982 _STR_PW::
      000034                        983 	.ds 2
                           000014   984 G$count$0$0==.
      000036                        985 _count::
      000036                        986 	.ds 2
                           000016   987 G$actual_heading$0$0==.
      000038                        988 _actual_heading::
      000038                        989 	.ds 2
                           000018   990 G$desired_heading$0$0==.
      00003A                        991 _desired_heading::
      00003A                        992 	.ds 2
                           00001A   993 G$error$0$0==.
      00003C                        994 _error::
      00003C                        995 	.ds 2
                           00001C   996 G$offset$0$0==.
      00003E                        997 _offset::
      00003E                        998 	.ds 2
                           00001E   999 G$range$0$0==.
      000040                       1000 _range::
      000040                       1001 	.ds 2
                           000020  1002 G$MOTOR_PW$0$0==.
      000042                       1003 _MOTOR_PW::
      000042                       1004 	.ds 2
                           000022  1005 G$starter$0$0==.
      000044                       1006 _starter::
      000044                       1007 	.ds 1
                           000023  1008 G$DRV_lo_to_hi$0$0==.
      000045                       1009 _DRV_lo_to_hi::
      000045                       1010 	.ds 2
                           000025  1011 G$r_data$0$0==.
      000047                       1012 _r_data::
      000047                       1013 	.ds 2
                           000027  1014 G$pwpercent$0$0==.
      000049                       1015 _pwpercent::
      000049                       1016 	.ds 1
                           000028  1017 Llab4_m.ReadCompass$Data$1$140==.
      00004A                       1018 _ReadCompass_Data_1_140:
      00004A                       1019 	.ds 2
                           00002A  1020 Llab4_m.Steering_Servo$direction$1$141==.
      00004C                       1021 _Steering_Servo_direction_1_141:
      00004C                       1022 	.ds 2
                                   1023 ;--------------------------------------------------------
                                   1024 ; overlayable items in internal ram 
                                   1025 ;--------------------------------------------------------
                                   1026 	.area	OSEG    (OVR,DATA)
                                   1027 	.area	OSEG    (OVR,DATA)
                                   1028 	.area	OSEG    (OVR,DATA)
                                   1029 	.area	OSEG    (OVR,DATA)
                                   1030 	.area	OSEG    (OVR,DATA)
                                   1031 	.area	OSEG    (OVR,DATA)
                                   1032 	.area	OSEG    (OVR,DATA)
                                   1033 	.area	OSEG    (OVR,DATA)
                                   1034 	.area	OSEG    (OVR,DATA)
                                   1035 ;--------------------------------------------------------
                                   1036 ; Stack segment in internal ram 
                                   1037 ;--------------------------------------------------------
                                   1038 	.area	SSEG
      000068                       1039 __start__stack:
      000068                       1040 	.ds	1
                                   1041 
                                   1042 ;--------------------------------------------------------
                                   1043 ; indirectly addressable internal ram data
                                   1044 ;--------------------------------------------------------
                                   1045 	.area ISEG    (DATA)
                                   1046 ;--------------------------------------------------------
                                   1047 ; absolute internal ram data
                                   1048 ;--------------------------------------------------------
                                   1049 	.area IABS    (ABS,DATA)
                                   1050 	.area IABS    (ABS,DATA)
                                   1051 ;--------------------------------------------------------
                                   1052 ; bit data
                                   1053 ;--------------------------------------------------------
                                   1054 	.area BSEG    (BIT)
                                   1055 ;--------------------------------------------------------
                                   1056 ; paged external ram data
                                   1057 ;--------------------------------------------------------
                                   1058 	.area PSEG    (PAG,XDATA)
                                   1059 ;--------------------------------------------------------
                                   1060 ; external ram data
                                   1061 ;--------------------------------------------------------
                                   1062 	.area XSEG    (XDATA)
                           000000  1063 Llab4_m.lcd_print$text$1$73==.
      000001                       1064 _lcd_print_text_1_73:
      000001                       1065 	.ds 80
                                   1066 ;--------------------------------------------------------
                                   1067 ; absolute external ram data
                                   1068 ;--------------------------------------------------------
                                   1069 	.area XABS    (ABS,XDATA)
                                   1070 ;--------------------------------------------------------
                                   1071 ; external initialized ram data
                                   1072 ;--------------------------------------------------------
                                   1073 	.area XISEG   (XDATA)
                                   1074 	.area HOME    (CODE)
                                   1075 	.area GSINIT0 (CODE)
                                   1076 	.area GSINIT1 (CODE)
                                   1077 	.area GSINIT2 (CODE)
                                   1078 	.area GSINIT3 (CODE)
                                   1079 	.area GSINIT4 (CODE)
                                   1080 	.area GSINIT5 (CODE)
                                   1081 	.area GSINIT  (CODE)
                                   1082 	.area GSFINAL (CODE)
                                   1083 	.area CSEG    (CODE)
                                   1084 ;--------------------------------------------------------
                                   1085 ; interrupt vector 
                                   1086 ;--------------------------------------------------------
                                   1087 	.area HOME    (CODE)
      000000                       1088 __interrupt_vect:
      000000 02 00 51         [24] 1089 	ljmp	__sdcc_gsinit_startup
      000003 32               [24] 1090 	reti
      000004                       1091 	.ds	7
      00000B 32               [24] 1092 	reti
      00000C                       1093 	.ds	7
      000013 32               [24] 1094 	reti
      000014                       1095 	.ds	7
      00001B 32               [24] 1096 	reti
      00001C                       1097 	.ds	7
      000023 32               [24] 1098 	reti
      000024                       1099 	.ds	7
      00002B 32               [24] 1100 	reti
      00002C                       1101 	.ds	7
      000033 32               [24] 1102 	reti
      000034                       1103 	.ds	7
      00003B 32               [24] 1104 	reti
      00003C                       1105 	.ds	7
      000043 32               [24] 1106 	reti
      000044                       1107 	.ds	7
      00004B 02 0A 69         [24] 1108 	ljmp	_PCA_ISR
                                   1109 ;--------------------------------------------------------
                                   1110 ; global & static initialisations
                                   1111 ;--------------------------------------------------------
                                   1112 	.area HOME    (CODE)
                                   1113 	.area GSINIT  (CODE)
                                   1114 	.area GSFINAL (CODE)
                                   1115 	.area GSINIT  (CODE)
                                   1116 	.globl __sdcc_gsinit_startup
                                   1117 	.globl __sdcc_program_startup
                                   1118 	.globl __start__stack
                                   1119 	.globl __mcs51_genXINIT
                                   1120 	.globl __mcs51_genXRAMCLEAR
                                   1121 	.globl __mcs51_genRAMCLEAR
                           000000  1122 	C$lab4_m.c$59$1$176 ==.
                                   1123 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:59: unsigned int STR_PW   = 0;
      0000AA E4               [12] 1124 	clr	a
      0000AB F5 34            [12] 1125 	mov	_STR_PW,a
      0000AD F5 35            [12] 1126 	mov	(_STR_PW + 1),a
                           000005  1127 	C$lab4_m.c$60$1$176 ==.
                                   1128 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:60: unsigned int count = 0;
      0000AF F5 36            [12] 1129 	mov	_count,a
      0000B1 F5 37            [12] 1130 	mov	(_count + 1),a
                           000009  1131 	C$lab4_m.c$66$1$176 ==.
                                   1132 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:66: unsigned int range = 35;
      0000B3 75 40 23         [24] 1133 	mov	_range,#0x23
                                   1134 ;	1-genFromRTrack replaced	mov	(_range + 1),#0x00
      0000B6 F5 41            [12] 1135 	mov	(_range + 1),a
                           00000E  1136 	C$lab4_m.c$67$1$176 ==.
                                   1137 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:67: unsigned int MOTOR_PW = 0;
      0000B8 F5 42            [12] 1138 	mov	_MOTOR_PW,a
      0000BA F5 43            [12] 1139 	mov	(_MOTOR_PW + 1),a
                           000012  1140 	C$lab4_m.c$71$1$176 ==.
                                   1141 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:71: unsigned char starter =0;
                                   1142 ;	1-genFromRTrack replaced	mov	_starter,#0x00
      0000BC F5 44            [12] 1143 	mov	_starter,a
                                   1144 	.area GSFINAL (CODE)
      0000BE 02 00 4E         [24] 1145 	ljmp	__sdcc_program_startup
                                   1146 ;--------------------------------------------------------
                                   1147 ; Home
                                   1148 ;--------------------------------------------------------
                                   1149 	.area HOME    (CODE)
                                   1150 	.area HOME    (CODE)
      00004E                       1151 __sdcc_program_startup:
      00004E 02 05 97         [24] 1152 	ljmp	_main
                                   1153 ;	return from main will return to caller
                                   1154 ;--------------------------------------------------------
                                   1155 ; code
                                   1156 ;--------------------------------------------------------
                                   1157 	.area CSEG    (CODE)
                                   1158 ;------------------------------------------------------------
                                   1159 ;Allocation info for local variables in function 'SYSCLK_Init'
                                   1160 ;------------------------------------------------------------
                                   1161 ;i                         Allocated to registers 
                                   1162 ;------------------------------------------------------------
                           000000  1163 	G$SYSCLK_Init$0$0 ==.
                           000000  1164 	C$c8051_SDCC.h$42$0$0 ==.
                                   1165 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:42: void SYSCLK_Init(void)
                                   1166 ;	-----------------------------------------
                                   1167 ;	 function SYSCLK_Init
                                   1168 ;	-----------------------------------------
      0000C1                       1169 _SYSCLK_Init:
                           000007  1170 	ar7 = 0x07
                           000006  1171 	ar6 = 0x06
                           000005  1172 	ar5 = 0x05
                           000004  1173 	ar4 = 0x04
                           000003  1174 	ar3 = 0x03
                           000002  1175 	ar2 = 0x02
                           000001  1176 	ar1 = 0x01
                           000000  1177 	ar0 = 0x00
                           000000  1178 	C$c8051_SDCC.h$46$1$31 ==.
                                   1179 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:46: OSCXCN = 0x67;                      // start external oscillator with
      0000C1 75 B1 67         [24] 1180 	mov	_OSCXCN,#0x67
                           000003  1181 	C$c8051_SDCC.h$49$1$31 ==.
                                   1182 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:49: for (i=0; i < 256; i++);            // wait for oscillator to start
      0000C4 7E 00            [12] 1183 	mov	r6,#0x00
      0000C6 7F 01            [12] 1184 	mov	r7,#0x01
      0000C8                       1185 00107$:
      0000C8 1E               [12] 1186 	dec	r6
      0000C9 BE FF 01         [24] 1187 	cjne	r6,#0xFF,00121$
      0000CC 1F               [12] 1188 	dec	r7
      0000CD                       1189 00121$:
      0000CD EE               [12] 1190 	mov	a,r6
      0000CE 4F               [12] 1191 	orl	a,r7
      0000CF 70 F7            [24] 1192 	jnz	00107$
                           000010  1193 	C$c8051_SDCC.h$51$1$31 ==.
                                   1194 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:51: while (!(OSCXCN & 0x80));           // Wait for crystal osc. to settle
      0000D1                       1195 00102$:
      0000D1 E5 B1            [12] 1196 	mov	a,_OSCXCN
      0000D3 30 E7 FB         [24] 1197 	jnb	acc.7,00102$
                           000015  1198 	C$c8051_SDCC.h$53$1$31 ==.
                                   1199 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:53: OSCICN = 0x88;                      // select external oscillator as SYSCLK
      0000D6 75 B2 88         [24] 1200 	mov	_OSCICN,#0x88
                           000018  1201 	C$c8051_SDCC.h$56$1$31 ==.
                           000018  1202 	XG$SYSCLK_Init$0$0 ==.
      0000D9 22               [24] 1203 	ret
                                   1204 ;------------------------------------------------------------
                                   1205 ;Allocation info for local variables in function 'UART0_Init'
                                   1206 ;------------------------------------------------------------
                           000019  1207 	G$UART0_Init$0$0 ==.
                           000019  1208 	C$c8051_SDCC.h$64$1$31 ==.
                                   1209 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:64: void UART0_Init(void)
                                   1210 ;	-----------------------------------------
                                   1211 ;	 function UART0_Init
                                   1212 ;	-----------------------------------------
      0000DA                       1213 _UART0_Init:
                           000019  1214 	C$c8051_SDCC.h$66$1$33 ==.
                                   1215 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:66: SCON0  = 0x50;                      // SCON0: mode 1, 8-bit UART, enable RX
      0000DA 75 98 50         [24] 1216 	mov	_SCON0,#0x50
                           00001C  1217 	C$c8051_SDCC.h$67$1$33 ==.
                                   1218 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:67: TMOD   = 0x20;                      // TMOD: timer 1, mode 2, 8-bit reload
      0000DD 75 89 20         [24] 1219 	mov	_TMOD,#0x20
                           00001F  1220 	C$c8051_SDCC.h$68$1$33 ==.
                                   1221 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:68: TH1    = -(SYSCLK/BAUDRATE/16);     // set Timer1 reload value for baudrate
      0000E0 75 8D DC         [24] 1222 	mov	_TH1,#0xDC
                           000022  1223 	C$c8051_SDCC.h$69$1$33 ==.
                                   1224 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:69: TR1    = 1;                         // start Timer1
      0000E3 D2 8E            [12] 1225 	setb	_TR1
                           000024  1226 	C$c8051_SDCC.h$70$1$33 ==.
                                   1227 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:70: CKCON |= 0x10;                      // Timer1 uses SYSCLK as time base
      0000E5 43 8E 10         [24] 1228 	orl	_CKCON,#0x10
                           000027  1229 	C$c8051_SDCC.h$71$1$33 ==.
                                   1230 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:71: PCON  |= 0x80;                      // SMOD00 = 1 (disable baud rate 
      0000E8 43 87 80         [24] 1231 	orl	_PCON,#0x80
                           00002A  1232 	C$c8051_SDCC.h$73$1$33 ==.
                                   1233 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:73: TI0    = 1;                         // Indicate TX0 ready
      0000EB D2 99            [12] 1234 	setb	_TI0
                           00002C  1235 	C$c8051_SDCC.h$74$1$33 ==.
                                   1236 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:74: P0MDOUT |= 0x01;                    // Set TX0 to push/pull
      0000ED 43 A4 01         [24] 1237 	orl	_P0MDOUT,#0x01
                           00002F  1238 	C$c8051_SDCC.h$75$1$33 ==.
                           00002F  1239 	XG$UART0_Init$0$0 ==.
      0000F0 22               [24] 1240 	ret
                                   1241 ;------------------------------------------------------------
                                   1242 ;Allocation info for local variables in function 'Sys_Init'
                                   1243 ;------------------------------------------------------------
                           000030  1244 	G$Sys_Init$0$0 ==.
                           000030  1245 	C$c8051_SDCC.h$83$1$33 ==.
                                   1246 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:83: void Sys_Init(void)
                                   1247 ;	-----------------------------------------
                                   1248 ;	 function Sys_Init
                                   1249 ;	-----------------------------------------
      0000F1                       1250 _Sys_Init:
                           000030  1251 	C$c8051_SDCC.h$85$1$35 ==.
                                   1252 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:85: WDTCN = 0xde;			// disable watchdog timer
      0000F1 75 FF DE         [24] 1253 	mov	_WDTCN,#0xDE
                           000033  1254 	C$c8051_SDCC.h$86$1$35 ==.
                                   1255 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:86: WDTCN = 0xad;
      0000F4 75 FF AD         [24] 1256 	mov	_WDTCN,#0xAD
                           000036  1257 	C$c8051_SDCC.h$88$1$35 ==.
                                   1258 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:88: SYSCLK_Init();			// initialize oscillator
      0000F7 12 00 C1         [24] 1259 	lcall	_SYSCLK_Init
                           000039  1260 	C$c8051_SDCC.h$89$1$35 ==.
                                   1261 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:89: UART0_Init();			// initialize UART0
      0000FA 12 00 DA         [24] 1262 	lcall	_UART0_Init
                           00003C  1263 	C$c8051_SDCC.h$91$1$35 ==.
                                   1264 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:91: XBR0 |= 0x04;
      0000FD 43 E1 04         [24] 1265 	orl	_XBR0,#0x04
                           00003F  1266 	C$c8051_SDCC.h$92$1$35 ==.
                                   1267 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:92: XBR2 |= 0x40;                    	// Enable crossbar and weak pull-ups
      000100 43 E3 40         [24] 1268 	orl	_XBR2,#0x40
                           000042  1269 	C$c8051_SDCC.h$93$1$35 ==.
                           000042  1270 	XG$Sys_Init$0$0 ==.
      000103 22               [24] 1271 	ret
                                   1272 ;------------------------------------------------------------
                                   1273 ;Allocation info for local variables in function 'putchar'
                                   1274 ;------------------------------------------------------------
                                   1275 ;c                         Allocated to registers r7 
                                   1276 ;------------------------------------------------------------
                           000043  1277 	G$putchar$0$0 ==.
                           000043  1278 	C$c8051_SDCC.h$98$1$35 ==.
                                   1279 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:98: void putchar(char c)
                                   1280 ;	-----------------------------------------
                                   1281 ;	 function putchar
                                   1282 ;	-----------------------------------------
      000104                       1283 _putchar:
      000104 AF 82            [24] 1284 	mov	r7,dpl
                           000045  1285 	C$c8051_SDCC.h$100$1$37 ==.
                                   1286 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:100: while (!TI0); 
      000106                       1287 00101$:
                           000045  1288 	C$c8051_SDCC.h$101$1$37 ==.
                                   1289 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:101: TI0 = 0;
      000106 10 99 02         [24] 1290 	jbc	_TI0,00112$
      000109 80 FB            [24] 1291 	sjmp	00101$
      00010B                       1292 00112$:
                           00004A  1293 	C$c8051_SDCC.h$102$1$37 ==.
                                   1294 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:102: SBUF0 = c;
      00010B 8F 99            [24] 1295 	mov	_SBUF0,r7
                           00004C  1296 	C$c8051_SDCC.h$103$1$37 ==.
                           00004C  1297 	XG$putchar$0$0 ==.
      00010D 22               [24] 1298 	ret
                                   1299 ;------------------------------------------------------------
                                   1300 ;Allocation info for local variables in function 'getchar'
                                   1301 ;------------------------------------------------------------
                                   1302 ;c                         Allocated to registers 
                                   1303 ;------------------------------------------------------------
                           00004D  1304 	G$getchar$0$0 ==.
                           00004D  1305 	C$c8051_SDCC.h$108$1$37 ==.
                                   1306 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:108: char getchar(void)
                                   1307 ;	-----------------------------------------
                                   1308 ;	 function getchar
                                   1309 ;	-----------------------------------------
      00010E                       1310 _getchar:
                           00004D  1311 	C$c8051_SDCC.h$111$1$39 ==.
                                   1312 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:111: while (!RI0);
      00010E                       1313 00101$:
                           00004D  1314 	C$c8051_SDCC.h$112$1$39 ==.
                                   1315 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:112: RI0 = 0;
      00010E 10 98 02         [24] 1316 	jbc	_RI0,00112$
      000111 80 FB            [24] 1317 	sjmp	00101$
      000113                       1318 00112$:
                           000052  1319 	C$c8051_SDCC.h$113$1$39 ==.
                                   1320 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:113: c = SBUF0;
      000113 85 99 82         [24] 1321 	mov	dpl,_SBUF0
                           000055  1322 	C$c8051_SDCC.h$114$1$39 ==.
                                   1323 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:114: putchar(c);                          // echo to terminal
      000116 12 01 04         [24] 1324 	lcall	_putchar
                           000058  1325 	C$c8051_SDCC.h$115$1$39 ==.
                                   1326 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:115: return SBUF0;
      000119 85 99 82         [24] 1327 	mov	dpl,_SBUF0
                           00005B  1328 	C$c8051_SDCC.h$116$1$39 ==.
                           00005B  1329 	XG$getchar$0$0 ==.
      00011C 22               [24] 1330 	ret
                                   1331 ;------------------------------------------------------------
                                   1332 ;Allocation info for local variables in function 'lcd_print'
                                   1333 ;------------------------------------------------------------
                                   1334 ;fmt                       Allocated to stack - _bp -5
                                   1335 ;len                       Allocated to registers r6 
                                   1336 ;i                         Allocated to registers 
                                   1337 ;ap                        Allocated to registers 
                                   1338 ;text                      Allocated with name '_lcd_print_text_1_73'
                                   1339 ;------------------------------------------------------------
                           00005C  1340 	G$lcd_print$0$0 ==.
                           00005C  1341 	C$i2c.h$81$1$39 ==.
                                   1342 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:81: void lcd_print(const char *fmt, ...)
                                   1343 ;	-----------------------------------------
                                   1344 ;	 function lcd_print
                                   1345 ;	-----------------------------------------
      00011D                       1346 _lcd_print:
      00011D C0 0F            [24] 1347 	push	_bp
      00011F 85 81 0F         [24] 1348 	mov	_bp,sp
                           000061  1349 	C$i2c.h$87$1$73 ==.
                                   1350 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:87: if ( strlen(fmt) <= 0 ) return;   //If there is no data to print, return
      000122 E5 0F            [12] 1351 	mov	a,_bp
      000124 24 FB            [12] 1352 	add	a,#0xfb
      000126 F8               [12] 1353 	mov	r0,a
      000127 86 82            [24] 1354 	mov	dpl,@r0
      000129 08               [12] 1355 	inc	r0
      00012A 86 83            [24] 1356 	mov	dph,@r0
      00012C 08               [12] 1357 	inc	r0
      00012D 86 F0            [24] 1358 	mov	b,@r0
      00012F 12 15 BB         [24] 1359 	lcall	_strlen
      000132 E5 82            [12] 1360 	mov	a,dpl
      000134 85 83 F0         [24] 1361 	mov	b,dph
      000137 45 F0            [12] 1362 	orl	a,b
      000139 70 02            [24] 1363 	jnz	00102$
      00013B 80 62            [24] 1364 	sjmp	00109$
      00013D                       1365 00102$:
                           00007C  1366 	C$i2c.h$89$2$74 ==.
                                   1367 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:89: va_start(ap, fmt);
      00013D E5 0F            [12] 1368 	mov	a,_bp
      00013F 24 FB            [12] 1369 	add	a,#0xFB
      000141 FF               [12] 1370 	mov	r7,a
      000142 8F 0B            [24] 1371 	mov	_vsprintf_PARM_3,r7
                           000083  1372 	C$i2c.h$90$1$73 ==.
                                   1373 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:90: vsprintf(text, fmt, ap);
      000144 E5 0F            [12] 1374 	mov	a,_bp
      000146 24 FB            [12] 1375 	add	a,#0xfb
      000148 F8               [12] 1376 	mov	r0,a
      000149 86 08            [24] 1377 	mov	_vsprintf_PARM_2,@r0
      00014B 08               [12] 1378 	inc	r0
      00014C 86 09            [24] 1379 	mov	(_vsprintf_PARM_2 + 1),@r0
      00014E 08               [12] 1380 	inc	r0
      00014F 86 0A            [24] 1381 	mov	(_vsprintf_PARM_2 + 2),@r0
      000151 90 00 01         [24] 1382 	mov	dptr,#_lcd_print_text_1_73
      000154 75 F0 00         [24] 1383 	mov	b,#0x00
      000157 12 0D C1         [24] 1384 	lcall	_vsprintf
                           000099  1385 	C$i2c.h$93$1$73 ==.
                                   1386 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:93: len = strlen(text);
      00015A 90 00 01         [24] 1387 	mov	dptr,#_lcd_print_text_1_73
      00015D 75 F0 00         [24] 1388 	mov	b,#0x00
      000160 12 15 BB         [24] 1389 	lcall	_strlen
      000163 AE 82            [24] 1390 	mov	r6,dpl
                           0000A4  1391 	C$i2c.h$94$1$73 ==.
                                   1392 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:94: for(i=0; i<len; i++)
      000165 7F 00            [12] 1393 	mov	r7,#0x00
      000167                       1394 00107$:
      000167 C3               [12] 1395 	clr	c
      000168 EF               [12] 1396 	mov	a,r7
      000169 9E               [12] 1397 	subb	a,r6
      00016A 50 1F            [24] 1398 	jnc	00105$
                           0000AB  1399 	C$i2c.h$96$2$76 ==.
                                   1400 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:96: if(text[i] == (unsigned char)'\n') text[i] = 13;
      00016C EF               [12] 1401 	mov	a,r7
      00016D 24 01            [12] 1402 	add	a,#_lcd_print_text_1_73
      00016F F5 82            [12] 1403 	mov	dpl,a
      000171 E4               [12] 1404 	clr	a
      000172 34 00            [12] 1405 	addc	a,#(_lcd_print_text_1_73 >> 8)
      000174 F5 83            [12] 1406 	mov	dph,a
      000176 E0               [24] 1407 	movx	a,@dptr
      000177 FD               [12] 1408 	mov	r5,a
      000178 BD 0A 0D         [24] 1409 	cjne	r5,#0x0A,00108$
      00017B EF               [12] 1410 	mov	a,r7
      00017C 24 01            [12] 1411 	add	a,#_lcd_print_text_1_73
      00017E F5 82            [12] 1412 	mov	dpl,a
      000180 E4               [12] 1413 	clr	a
      000181 34 00            [12] 1414 	addc	a,#(_lcd_print_text_1_73 >> 8)
      000183 F5 83            [12] 1415 	mov	dph,a
      000185 74 0D            [12] 1416 	mov	a,#0x0D
      000187 F0               [24] 1417 	movx	@dptr,a
      000188                       1418 00108$:
                           0000C7  1419 	C$i2c.h$94$1$73 ==.
                                   1420 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:94: for(i=0; i<len; i++)
      000188 0F               [12] 1421 	inc	r7
      000189 80 DC            [24] 1422 	sjmp	00107$
      00018B                       1423 00105$:
                           0000CA  1424 	C$i2c.h$99$1$73 ==.
                                   1425 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:99: i2c_write_data(0xC6, 0x00, text, len);
      00018B 75 28 01         [24] 1426 	mov	_i2c_write_data_PARM_3,#_lcd_print_text_1_73
      00018E 75 29 00         [24] 1427 	mov	(_i2c_write_data_PARM_3 + 1),#(_lcd_print_text_1_73 >> 8)
      000191 75 2A 00         [24] 1428 	mov	(_i2c_write_data_PARM_3 + 2),#0x00
      000194 75 27 00         [24] 1429 	mov	_i2c_write_data_PARM_2,#0x00
      000197 8E 2B            [24] 1430 	mov	_i2c_write_data_PARM_4,r6
      000199 75 82 C6         [24] 1431 	mov	dpl,#0xC6
      00019C 12 04 33         [24] 1432 	lcall	_i2c_write_data
      00019F                       1433 00109$:
      00019F D0 0F            [24] 1434 	pop	_bp
                           0000E0  1435 	C$i2c.h$100$1$73 ==.
                           0000E0  1436 	XG$lcd_print$0$0 ==.
      0001A1 22               [24] 1437 	ret
                                   1438 ;------------------------------------------------------------
                                   1439 ;Allocation info for local variables in function 'lcd_clear'
                                   1440 ;------------------------------------------------------------
                                   1441 ;NumBytes                  Allocated with name '_lcd_clear_NumBytes_1_77'
                                   1442 ;Cmd                       Allocated with name '_lcd_clear_Cmd_1_77'
                                   1443 ;------------------------------------------------------------
                           0000E1  1444 	G$lcd_clear$0$0 ==.
                           0000E1  1445 	C$i2c.h$103$1$73 ==.
                                   1446 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:103: void lcd_clear()
                                   1447 ;	-----------------------------------------
                                   1448 ;	 function lcd_clear
                                   1449 ;	-----------------------------------------
      0001A2                       1450 _lcd_clear:
                           0000E1  1451 	C$i2c.h$105$1$73 ==.
                                   1452 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:105: unsigned char NumBytes=0, Cmd[2];
      0001A2 75 22 00         [24] 1453 	mov	_lcd_clear_NumBytes_1_77,#0x00
                           0000E4  1454 	C$i2c.h$107$1$77 ==.
                                   1455 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:107: while(NumBytes < 64) i2c_read_data(0xC6, 0x00, &NumBytes, 1);
      0001A5                       1456 00101$:
      0001A5 74 C0            [12] 1457 	mov	a,#0x100 - 0x40
      0001A7 25 22            [12] 1458 	add	a,_lcd_clear_NumBytes_1_77
      0001A9 40 17            [24] 1459 	jc	00103$
      0001AB 75 2D 22         [24] 1460 	mov	_i2c_read_data_PARM_3,#_lcd_clear_NumBytes_1_77
      0001AE 75 2E 00         [24] 1461 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0001B1 75 2F 40         [24] 1462 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0001B4 75 2C 00         [24] 1463 	mov	_i2c_read_data_PARM_2,#0x00
      0001B7 75 30 01         [24] 1464 	mov	_i2c_read_data_PARM_4,#0x01
      0001BA 75 82 C6         [24] 1465 	mov	dpl,#0xC6
      0001BD 12 04 A9         [24] 1466 	lcall	_i2c_read_data
      0001C0 80 E3            [24] 1467 	sjmp	00101$
      0001C2                       1468 00103$:
                           000101  1469 	C$i2c.h$109$1$77 ==.
                                   1470 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:109: Cmd[0] = 12;
      0001C2 75 23 0C         [24] 1471 	mov	_lcd_clear_Cmd_1_77,#0x0C
                           000104  1472 	C$i2c.h$110$1$77 ==.
                                   1473 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:110: i2c_write_data(0xC6, 0x00, Cmd, 1);
      0001C5 75 28 23         [24] 1474 	mov	_i2c_write_data_PARM_3,#_lcd_clear_Cmd_1_77
      0001C8 75 29 00         [24] 1475 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      0001CB 75 2A 40         [24] 1476 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      0001CE 75 27 00         [24] 1477 	mov	_i2c_write_data_PARM_2,#0x00
      0001D1 75 2B 01         [24] 1478 	mov	_i2c_write_data_PARM_4,#0x01
      0001D4 75 82 C6         [24] 1479 	mov	dpl,#0xC6
      0001D7 12 04 33         [24] 1480 	lcall	_i2c_write_data
                           000119  1481 	C$i2c.h$111$1$77 ==.
                           000119  1482 	XG$lcd_clear$0$0 ==.
      0001DA 22               [24] 1483 	ret
                                   1484 ;------------------------------------------------------------
                                   1485 ;Allocation info for local variables in function 'read_keypad'
                                   1486 ;------------------------------------------------------------
                                   1487 ;i                         Allocated to registers r7 
                                   1488 ;Data                      Allocated with name '_read_keypad_Data_1_78'
                                   1489 ;------------------------------------------------------------
                           00011A  1490 	G$read_keypad$0$0 ==.
                           00011A  1491 	C$i2c.h$114$1$77 ==.
                                   1492 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:114: char read_keypad()
                                   1493 ;	-----------------------------------------
                                   1494 ;	 function read_keypad
                                   1495 ;	-----------------------------------------
      0001DB                       1496 _read_keypad:
                           00011A  1497 	C$i2c.h$118$1$78 ==.
                                   1498 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:118: i2c_read_data(0xC6, 0x01, Data, 2); //Read I2C data on address 192, register 1, 2 bytes of data.
      0001DB 75 2D 25         [24] 1499 	mov	_i2c_read_data_PARM_3,#_read_keypad_Data_1_78
      0001DE 75 2E 00         [24] 1500 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0001E1 75 2F 40         [24] 1501 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0001E4 75 2C 01         [24] 1502 	mov	_i2c_read_data_PARM_2,#0x01
      0001E7 75 30 02         [24] 1503 	mov	_i2c_read_data_PARM_4,#0x02
      0001EA 75 82 C6         [24] 1504 	mov	dpl,#0xC6
      0001ED 12 04 A9         [24] 1505 	lcall	_i2c_read_data
                           00012F  1506 	C$i2c.h$119$1$78 ==.
                                   1507 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:119: if(Data[0] == 0xFF) return 0;  //No response on bus, no display
      0001F0 74 FF            [12] 1508 	mov	a,#0xFF
      0001F2 B5 25 05         [24] 1509 	cjne	a,_read_keypad_Data_1_78,00102$
      0001F5 75 82 00         [24] 1510 	mov	dpl,#0x00
      0001F8 80 5F            [24] 1511 	sjmp	00116$
      0001FA                       1512 00102$:
                           000139  1513 	C$i2c.h$121$1$78 ==.
                                   1514 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:121: for(i=0; i<8; i++)             //loop 8 times
      0001FA 7F 00            [12] 1515 	mov	r7,#0x00
      0001FC 8F 06            [24] 1516 	mov	ar6,r7
      0001FE                       1517 00114$:
                           00013D  1518 	C$i2c.h$123$2$79 ==.
                                   1519 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:123: if(Data[0] & (0x01 << i))  //find the ASCII value of the keypad read, if it is the current loop value
      0001FE 8E F0            [24] 1520 	mov	b,r6
      000200 05 F0            [12] 1521 	inc	b
      000202 7C 01            [12] 1522 	mov	r4,#0x01
      000204 7D 00            [12] 1523 	mov	r5,#0x00
      000206 80 06            [24] 1524 	sjmp	00145$
      000208                       1525 00144$:
      000208 EC               [12] 1526 	mov	a,r4
      000209 2C               [12] 1527 	add	a,r4
      00020A FC               [12] 1528 	mov	r4,a
      00020B ED               [12] 1529 	mov	a,r5
      00020C 33               [12] 1530 	rlc	a
      00020D FD               [12] 1531 	mov	r5,a
      00020E                       1532 00145$:
      00020E D5 F0 F7         [24] 1533 	djnz	b,00144$
      000211 AA 25            [24] 1534 	mov	r2,_read_keypad_Data_1_78
      000213 7B 00            [12] 1535 	mov	r3,#0x00
      000215 EA               [12] 1536 	mov	a,r2
      000216 52 04            [12] 1537 	anl	ar4,a
      000218 EB               [12] 1538 	mov	a,r3
      000219 52 05            [12] 1539 	anl	ar5,a
      00021B EC               [12] 1540 	mov	a,r4
      00021C 4D               [12] 1541 	orl	a,r5
      00021D 60 07            [24] 1542 	jz	00115$
                           00015E  1543 	C$i2c.h$124$2$79 ==.
                                   1544 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:124: return i+49;
      00021F 74 31            [12] 1545 	mov	a,#0x31
      000221 2F               [12] 1546 	add	a,r7
      000222 F5 82            [12] 1547 	mov	dpl,a
      000224 80 33            [24] 1548 	sjmp	00116$
      000226                       1549 00115$:
                           000165  1550 	C$i2c.h$121$1$78 ==.
                                   1551 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:121: for(i=0; i<8; i++)             //loop 8 times
      000226 0E               [12] 1552 	inc	r6
      000227 8E 07            [24] 1553 	mov	ar7,r6
      000229 BE 08 00         [24] 1554 	cjne	r6,#0x08,00147$
      00022C                       1555 00147$:
      00022C 40 D0            [24] 1556 	jc	00114$
                           00016D  1557 	C$i2c.h$127$1$78 ==.
                                   1558 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:127: if(Data[1] & 0x01) return '9'; //if the value is equal to 9 return 9.
      00022E E5 26            [12] 1559 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000230 30 E0 05         [24] 1560 	jnb	acc.0,00107$
      000233 75 82 39         [24] 1561 	mov	dpl,#0x39
      000236 80 21            [24] 1562 	sjmp	00116$
      000238                       1563 00107$:
                           000177  1564 	C$i2c.h$129$1$78 ==.
                                   1565 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:129: if(Data[1] & 0x02) return '*'; //if the value is equal to the star.
      000238 E5 26            [12] 1566 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      00023A 30 E1 05         [24] 1567 	jnb	acc.1,00109$
      00023D 75 82 2A         [24] 1568 	mov	dpl,#0x2A
      000240 80 17            [24] 1569 	sjmp	00116$
      000242                       1570 00109$:
                           000181  1571 	C$i2c.h$131$1$78 ==.
                                   1572 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:131: if(Data[1] & 0x04) return '0'; //if the value is equal to the 0 key
      000242 E5 26            [12] 1573 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000244 30 E2 05         [24] 1574 	jnb	acc.2,00111$
      000247 75 82 30         [24] 1575 	mov	dpl,#0x30
      00024A 80 0D            [24] 1576 	sjmp	00116$
      00024C                       1577 00111$:
                           00018B  1578 	C$i2c.h$133$1$78 ==.
                                   1579 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:133: if(Data[1] & 0x08) return '#'; //if the value is equal to the pound key
      00024C E5 26            [12] 1580 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      00024E 30 E3 05         [24] 1581 	jnb	acc.3,00113$
      000251 75 82 23         [24] 1582 	mov	dpl,#0x23
      000254 80 03            [24] 1583 	sjmp	00116$
      000256                       1584 00113$:
                           000195  1585 	C$i2c.h$135$1$78 ==.
                                   1586 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:135: return -1;                     //else return a numerical -1 (0xFF)
      000256 75 82 FF         [24] 1587 	mov	dpl,#0xFF
      000259                       1588 00116$:
                           000198  1589 	C$i2c.h$136$1$78 ==.
                           000198  1590 	XG$read_keypad$0$0 ==.
      000259 22               [24] 1591 	ret
                                   1592 ;------------------------------------------------------------
                                   1593 ;Allocation info for local variables in function 'kpd_input'
                                   1594 ;------------------------------------------------------------
                                   1595 ;mode                      Allocated to registers r7 
                                   1596 ;sum                       Allocated to registers r5 r6 
                                   1597 ;key                       Allocated to registers r3 
                                   1598 ;i                         Allocated to registers 
                                   1599 ;------------------------------------------------------------
                           000199  1600 	G$kpd_input$0$0 ==.
                           000199  1601 	C$i2c.h$148$1$78 ==.
                                   1602 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:148: unsigned int kpd_input(char mode)
                                   1603 ;	-----------------------------------------
                                   1604 ;	 function kpd_input
                                   1605 ;	-----------------------------------------
      00025A                       1606 _kpd_input:
      00025A AF 82            [24] 1607 	mov	r7,dpl
                           00019B  1608 	C$i2c.h$153$1$81 ==.
                                   1609 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:153: sum = 0;
                           00019B  1610 	C$i2c.h$156$1$81 ==.
                                   1611 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:156: if(mode==0)lcd_print("\nType digits; end w/#");
      00025C E4               [12] 1612 	clr	a
      00025D FD               [12] 1613 	mov	r5,a
      00025E FE               [12] 1614 	mov	r6,a
      00025F EF               [12] 1615 	mov	a,r7
      000260 70 1D            [24] 1616 	jnz	00102$
      000262 C0 06            [24] 1617 	push	ar6
      000264 C0 05            [24] 1618 	push	ar5
      000266 74 DC            [12] 1619 	mov	a,#___str_0
      000268 C0 E0            [24] 1620 	push	acc
      00026A 74 17            [12] 1621 	mov	a,#(___str_0 >> 8)
      00026C C0 E0            [24] 1622 	push	acc
      00026E 74 80            [12] 1623 	mov	a,#0x80
      000270 C0 E0            [24] 1624 	push	acc
      000272 12 01 1D         [24] 1625 	lcall	_lcd_print
      000275 15 81            [12] 1626 	dec	sp
      000277 15 81            [12] 1627 	dec	sp
      000279 15 81            [12] 1628 	dec	sp
      00027B D0 05            [24] 1629 	pop	ar5
      00027D D0 06            [24] 1630 	pop	ar6
      00027F                       1631 00102$:
                           0001BE  1632 	C$i2c.h$158$1$81 ==.
                                   1633 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:158: lcd_print("     %c%c%c%c%c",0x08,0x08,0x08,0x08,0x08);
      00027F C0 06            [24] 1634 	push	ar6
      000281 C0 05            [24] 1635 	push	ar5
      000283 74 08            [12] 1636 	mov	a,#0x08
      000285 C0 E0            [24] 1637 	push	acc
      000287 E4               [12] 1638 	clr	a
      000288 C0 E0            [24] 1639 	push	acc
      00028A 74 08            [12] 1640 	mov	a,#0x08
      00028C C0 E0            [24] 1641 	push	acc
      00028E E4               [12] 1642 	clr	a
      00028F C0 E0            [24] 1643 	push	acc
      000291 74 08            [12] 1644 	mov	a,#0x08
      000293 C0 E0            [24] 1645 	push	acc
      000295 E4               [12] 1646 	clr	a
      000296 C0 E0            [24] 1647 	push	acc
      000298 74 08            [12] 1648 	mov	a,#0x08
      00029A C0 E0            [24] 1649 	push	acc
      00029C E4               [12] 1650 	clr	a
      00029D C0 E0            [24] 1651 	push	acc
      00029F 74 08            [12] 1652 	mov	a,#0x08
      0002A1 C0 E0            [24] 1653 	push	acc
      0002A3 E4               [12] 1654 	clr	a
      0002A4 C0 E0            [24] 1655 	push	acc
      0002A6 74 F2            [12] 1656 	mov	a,#___str_1
      0002A8 C0 E0            [24] 1657 	push	acc
      0002AA 74 17            [12] 1658 	mov	a,#(___str_1 >> 8)
      0002AC C0 E0            [24] 1659 	push	acc
      0002AE 74 80            [12] 1660 	mov	a,#0x80
      0002B0 C0 E0            [24] 1661 	push	acc
      0002B2 12 01 1D         [24] 1662 	lcall	_lcd_print
      0002B5 E5 81            [12] 1663 	mov	a,sp
      0002B7 24 F3            [12] 1664 	add	a,#0xf3
      0002B9 F5 81            [12] 1665 	mov	sp,a
                           0001FA  1666 	C$i2c.h$160$1$81 ==.
                                   1667 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:160: delay_time(500000);	//Add 20ms delay before reading i2c in loop
      0002BB 90 A1 20         [24] 1668 	mov	dptr,#0xA120
      0002BE 75 F0 07         [24] 1669 	mov	b,#0x07
      0002C1 E4               [12] 1670 	clr	a
      0002C2 12 03 CE         [24] 1671 	lcall	_delay_time
      0002C5 D0 05            [24] 1672 	pop	ar5
      0002C7 D0 06            [24] 1673 	pop	ar6
                           000208  1674 	C$i2c.h$164$1$81 ==.
                                   1675 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:164: for(i=0; i<5; i++)
      0002C9 7F 00            [12] 1676 	mov	r7,#0x00
                           00020A  1677 	C$i2c.h$166$3$84 ==.
                                   1678 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:166: while(((key=read_keypad()) == -1) || (key == '*'))delay_time(10000);
      0002CB                       1679 00104$:
      0002CB C0 07            [24] 1680 	push	ar7
      0002CD C0 06            [24] 1681 	push	ar6
      0002CF C0 05            [24] 1682 	push	ar5
      0002D1 12 01 DB         [24] 1683 	lcall	_read_keypad
      0002D4 AC 82            [24] 1684 	mov	r4,dpl
      0002D6 D0 05            [24] 1685 	pop	ar5
      0002D8 D0 06            [24] 1686 	pop	ar6
      0002DA D0 07            [24] 1687 	pop	ar7
      0002DC 8C 03            [24] 1688 	mov	ar3,r4
      0002DE BC FF 02         [24] 1689 	cjne	r4,#0xFF,00146$
      0002E1 80 03            [24] 1690 	sjmp	00105$
      0002E3                       1691 00146$:
      0002E3 BB 2A 17         [24] 1692 	cjne	r3,#0x2A,00106$
      0002E6                       1693 00105$:
      0002E6 90 27 10         [24] 1694 	mov	dptr,#0x2710
      0002E9 E4               [12] 1695 	clr	a
      0002EA F5 F0            [12] 1696 	mov	b,a
      0002EC C0 07            [24] 1697 	push	ar7
      0002EE C0 06            [24] 1698 	push	ar6
      0002F0 C0 05            [24] 1699 	push	ar5
      0002F2 12 03 CE         [24] 1700 	lcall	_delay_time
      0002F5 D0 05            [24] 1701 	pop	ar5
      0002F7 D0 06            [24] 1702 	pop	ar6
      0002F9 D0 07            [24] 1703 	pop	ar7
      0002FB 80 CE            [24] 1704 	sjmp	00104$
      0002FD                       1705 00106$:
                           00023C  1706 	C$i2c.h$167$2$82 ==.
                                   1707 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:167: if(key == '#')
      0002FD BB 23 2A         [24] 1708 	cjne	r3,#0x23,00114$
                           00023F  1709 	C$i2c.h$169$3$83 ==.
                                   1710 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:169: while(read_keypad() == '#')delay_time(10000);
      000300                       1711 00107$:
      000300 C0 06            [24] 1712 	push	ar6
      000302 C0 05            [24] 1713 	push	ar5
      000304 12 01 DB         [24] 1714 	lcall	_read_keypad
      000307 AC 82            [24] 1715 	mov	r4,dpl
      000309 D0 05            [24] 1716 	pop	ar5
      00030B D0 06            [24] 1717 	pop	ar6
      00030D BC 23 13         [24] 1718 	cjne	r4,#0x23,00109$
      000310 90 27 10         [24] 1719 	mov	dptr,#0x2710
      000313 E4               [12] 1720 	clr	a
      000314 F5 F0            [12] 1721 	mov	b,a
      000316 C0 06            [24] 1722 	push	ar6
      000318 C0 05            [24] 1723 	push	ar5
      00031A 12 03 CE         [24] 1724 	lcall	_delay_time
      00031D D0 05            [24] 1725 	pop	ar5
      00031F D0 06            [24] 1726 	pop	ar6
      000321 80 DD            [24] 1727 	sjmp	00107$
      000323                       1728 00109$:
                           000262  1729 	C$i2c.h$170$3$83 ==.
                                   1730 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:170: return sum;
      000323 8D 82            [24] 1731 	mov	dpl,r5
      000325 8E 83            [24] 1732 	mov	dph,r6
      000327 02 03 CD         [24] 1733 	ljmp	00119$
      00032A                       1734 00114$:
                           000269  1735 	C$i2c.h$174$3$84 ==.
                                   1736 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:174: lcd_print("%c", key);
      00032A EB               [12] 1737 	mov	a,r3
      00032B FA               [12] 1738 	mov	r2,a
      00032C 33               [12] 1739 	rlc	a
      00032D 95 E0            [12] 1740 	subb	a,acc
      00032F FC               [12] 1741 	mov	r4,a
      000330 C0 07            [24] 1742 	push	ar7
      000332 C0 06            [24] 1743 	push	ar6
      000334 C0 05            [24] 1744 	push	ar5
      000336 C0 04            [24] 1745 	push	ar4
      000338 C0 03            [24] 1746 	push	ar3
      00033A C0 02            [24] 1747 	push	ar2
      00033C C0 02            [24] 1748 	push	ar2
      00033E C0 04            [24] 1749 	push	ar4
      000340 74 02            [12] 1750 	mov	a,#___str_2
      000342 C0 E0            [24] 1751 	push	acc
      000344 74 18            [12] 1752 	mov	a,#(___str_2 >> 8)
      000346 C0 E0            [24] 1753 	push	acc
      000348 74 80            [12] 1754 	mov	a,#0x80
      00034A C0 E0            [24] 1755 	push	acc
      00034C 12 01 1D         [24] 1756 	lcall	_lcd_print
      00034F E5 81            [12] 1757 	mov	a,sp
      000351 24 FB            [12] 1758 	add	a,#0xfb
      000353 F5 81            [12] 1759 	mov	sp,a
      000355 D0 02            [24] 1760 	pop	ar2
      000357 D0 03            [24] 1761 	pop	ar3
      000359 D0 04            [24] 1762 	pop	ar4
      00035B D0 05            [24] 1763 	pop	ar5
      00035D D0 06            [24] 1764 	pop	ar6
                           00029E  1765 	C$i2c.h$175$1$81 ==.
                                   1766 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:175: sum = sum*10 + key - '0';
      00035F 8D 11            [24] 1767 	mov	__mulint_PARM_2,r5
      000361 8E 12            [24] 1768 	mov	(__mulint_PARM_2 + 1),r6
      000363 90 00 0A         [24] 1769 	mov	dptr,#0x000A
      000366 C0 04            [24] 1770 	push	ar4
      000368 C0 03            [24] 1771 	push	ar3
      00036A C0 02            [24] 1772 	push	ar2
      00036C 12 0D 34         [24] 1773 	lcall	__mulint
      00036F A8 82            [24] 1774 	mov	r0,dpl
      000371 A9 83            [24] 1775 	mov	r1,dph
      000373 D0 02            [24] 1776 	pop	ar2
      000375 D0 03            [24] 1777 	pop	ar3
      000377 D0 04            [24] 1778 	pop	ar4
      000379 D0 07            [24] 1779 	pop	ar7
      00037B EA               [12] 1780 	mov	a,r2
      00037C 28               [12] 1781 	add	a,r0
      00037D F8               [12] 1782 	mov	r0,a
      00037E EC               [12] 1783 	mov	a,r4
      00037F 39               [12] 1784 	addc	a,r1
      000380 F9               [12] 1785 	mov	r1,a
      000381 E8               [12] 1786 	mov	a,r0
      000382 24 D0            [12] 1787 	add	a,#0xD0
      000384 FD               [12] 1788 	mov	r5,a
      000385 E9               [12] 1789 	mov	a,r1
      000386 34 FF            [12] 1790 	addc	a,#0xFF
      000388 FE               [12] 1791 	mov	r6,a
                           0002C8  1792 	C$i2c.h$176$3$84 ==.
                                   1793 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:176: while(read_keypad() == key)delay_time(10000); //wait for key to be released
      000389                       1794 00110$:
      000389 C0 07            [24] 1795 	push	ar7
      00038B C0 06            [24] 1796 	push	ar6
      00038D C0 05            [24] 1797 	push	ar5
      00038F C0 03            [24] 1798 	push	ar3
      000391 12 01 DB         [24] 1799 	lcall	_read_keypad
      000394 AC 82            [24] 1800 	mov	r4,dpl
      000396 D0 03            [24] 1801 	pop	ar3
      000398 D0 05            [24] 1802 	pop	ar5
      00039A D0 06            [24] 1803 	pop	ar6
      00039C D0 07            [24] 1804 	pop	ar7
      00039E EC               [12] 1805 	mov	a,r4
      00039F B5 03 1B         [24] 1806 	cjne	a,ar3,00118$
      0003A2 90 27 10         [24] 1807 	mov	dptr,#0x2710
      0003A5 E4               [12] 1808 	clr	a
      0003A6 F5 F0            [12] 1809 	mov	b,a
      0003A8 C0 07            [24] 1810 	push	ar7
      0003AA C0 06            [24] 1811 	push	ar6
      0003AC C0 05            [24] 1812 	push	ar5
      0003AE C0 03            [24] 1813 	push	ar3
      0003B0 12 03 CE         [24] 1814 	lcall	_delay_time
      0003B3 D0 03            [24] 1815 	pop	ar3
      0003B5 D0 05            [24] 1816 	pop	ar5
      0003B7 D0 06            [24] 1817 	pop	ar6
      0003B9 D0 07            [24] 1818 	pop	ar7
      0003BB 80 CC            [24] 1819 	sjmp	00110$
      0003BD                       1820 00118$:
                           0002FC  1821 	C$i2c.h$164$1$81 ==.
                                   1822 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:164: for(i=0; i<5; i++)
      0003BD 0F               [12] 1823 	inc	r7
      0003BE C3               [12] 1824 	clr	c
      0003BF EF               [12] 1825 	mov	a,r7
      0003C0 64 80            [12] 1826 	xrl	a,#0x80
      0003C2 94 85            [12] 1827 	subb	a,#0x85
      0003C4 50 03            [24] 1828 	jnc	00155$
      0003C6 02 02 CB         [24] 1829 	ljmp	00104$
      0003C9                       1830 00155$:
                           000308  1831 	C$i2c.h$179$1$81 ==.
                                   1832 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:179: return sum;
      0003C9 8D 82            [24] 1833 	mov	dpl,r5
      0003CB 8E 83            [24] 1834 	mov	dph,r6
      0003CD                       1835 00119$:
                           00030C  1836 	C$i2c.h$180$1$81 ==.
                           00030C  1837 	XG$kpd_input$0$0 ==.
      0003CD 22               [24] 1838 	ret
                                   1839 ;------------------------------------------------------------
                                   1840 ;Allocation info for local variables in function 'delay_time'
                                   1841 ;------------------------------------------------------------
                                   1842 ;time_end                  Allocated to registers r4 r5 r6 r7 
                                   1843 ;index                     Allocated to registers 
                                   1844 ;------------------------------------------------------------
                           00030D  1845 	G$delay_time$0$0 ==.
                           00030D  1846 	C$i2c.h$189$1$81 ==.
                                   1847 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:189: void delay_time (unsigned long time_end)
                                   1848 ;	-----------------------------------------
                                   1849 ;	 function delay_time
                                   1850 ;	-----------------------------------------
      0003CE                       1851 _delay_time:
      0003CE AC 82            [24] 1852 	mov	r4,dpl
      0003D0 AD 83            [24] 1853 	mov	r5,dph
      0003D2 AE F0            [24] 1854 	mov	r6,b
      0003D4 FF               [12] 1855 	mov	r7,a
                           000314  1856 	C$i2c.h$192$1$86 ==.
                                   1857 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:192: for (index = 0; index < time_end; index++); //for loop delay
      0003D5 78 00            [12] 1858 	mov	r0,#0x00
      0003D7 79 00            [12] 1859 	mov	r1,#0x00
      0003D9 7A 00            [12] 1860 	mov	r2,#0x00
      0003DB 7B 00            [12] 1861 	mov	r3,#0x00
      0003DD                       1862 00103$:
      0003DD C3               [12] 1863 	clr	c
      0003DE E8               [12] 1864 	mov	a,r0
      0003DF 9C               [12] 1865 	subb	a,r4
      0003E0 E9               [12] 1866 	mov	a,r1
      0003E1 9D               [12] 1867 	subb	a,r5
      0003E2 EA               [12] 1868 	mov	a,r2
      0003E3 9E               [12] 1869 	subb	a,r6
      0003E4 EB               [12] 1870 	mov	a,r3
      0003E5 9F               [12] 1871 	subb	a,r7
      0003E6 50 0F            [24] 1872 	jnc	00105$
      0003E8 08               [12] 1873 	inc	r0
      0003E9 B8 00 09         [24] 1874 	cjne	r0,#0x00,00115$
      0003EC 09               [12] 1875 	inc	r1
      0003ED B9 00 05         [24] 1876 	cjne	r1,#0x00,00115$
      0003F0 0A               [12] 1877 	inc	r2
      0003F1 BA 00 E9         [24] 1878 	cjne	r2,#0x00,00103$
      0003F4 0B               [12] 1879 	inc	r3
      0003F5                       1880 00115$:
      0003F5 80 E6            [24] 1881 	sjmp	00103$
      0003F7                       1882 00105$:
                           000336  1883 	C$i2c.h$193$1$86 ==.
                           000336  1884 	XG$delay_time$0$0 ==.
      0003F7 22               [24] 1885 	ret
                                   1886 ;------------------------------------------------------------
                                   1887 ;Allocation info for local variables in function 'i2c_start'
                                   1888 ;------------------------------------------------------------
                           000337  1889 	G$i2c_start$0$0 ==.
                           000337  1890 	C$i2c.h$196$1$86 ==.
                                   1891 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:196: void i2c_start(void)
                                   1892 ;	-----------------------------------------
                                   1893 ;	 function i2c_start
                                   1894 ;	-----------------------------------------
      0003F8                       1895 _i2c_start:
                           000337  1896 	C$i2c.h$198$1$88 ==.
                                   1897 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:198: while(BUSY);              //Wait until SMBus0 is free
      0003F8                       1898 00101$:
      0003F8 20 C7 FD         [24] 1899 	jb	_BUSY,00101$
                           00033A  1900 	C$i2c.h$199$1$88 ==.
                                   1901 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:199: STA = 1;                  //Set Start Bit
      0003FB D2 C5            [12] 1902 	setb	_STA
                           00033C  1903 	C$i2c.h$200$1$88 ==.
                                   1904 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:200: while(!SI);               //Wait until start sent
      0003FD                       1905 00104$:
      0003FD 30 C3 FD         [24] 1906 	jnb	_SI,00104$
                           00033F  1907 	C$i2c.h$201$1$88 ==.
                                   1908 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:201: STA = 0;                  //Clear start bit
      000400 C2 C5            [12] 1909 	clr	_STA
                           000341  1910 	C$i2c.h$202$1$88 ==.
                                   1911 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:202: SI = 0;                   //Clear SI
      000402 C2 C3            [12] 1912 	clr	_SI
                           000343  1913 	C$i2c.h$203$1$88 ==.
                           000343  1914 	XG$i2c_start$0$0 ==.
      000404 22               [24] 1915 	ret
                                   1916 ;------------------------------------------------------------
                                   1917 ;Allocation info for local variables in function 'i2c_write'
                                   1918 ;------------------------------------------------------------
                                   1919 ;output_data               Allocated to registers 
                                   1920 ;------------------------------------------------------------
                           000344  1921 	G$i2c_write$0$0 ==.
                           000344  1922 	C$i2c.h$206$1$88 ==.
                                   1923 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:206: void i2c_write(unsigned char output_data)
                                   1924 ;	-----------------------------------------
                                   1925 ;	 function i2c_write
                                   1926 ;	-----------------------------------------
      000405                       1927 _i2c_write:
      000405 85 82 C2         [24] 1928 	mov	_SMB0DAT,dpl
                           000347  1929 	C$i2c.h$209$1$90 ==.
                                   1930 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:209: while(!SI);               //Wait until send is complete
      000408                       1931 00101$:
                           000347  1932 	C$i2c.h$210$1$90 ==.
                                   1933 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:210: SI = 0;                   //Clear SI
      000408 10 C3 02         [24] 1934 	jbc	_SI,00112$
      00040B 80 FB            [24] 1935 	sjmp	00101$
      00040D                       1936 00112$:
                           00034C  1937 	C$i2c.h$211$1$90 ==.
                           00034C  1938 	XG$i2c_write$0$0 ==.
      00040D 22               [24] 1939 	ret
                                   1940 ;------------------------------------------------------------
                                   1941 ;Allocation info for local variables in function 'i2c_write_and_stop'
                                   1942 ;------------------------------------------------------------
                                   1943 ;output_data               Allocated to registers 
                                   1944 ;------------------------------------------------------------
                           00034D  1945 	G$i2c_write_and_stop$0$0 ==.
                           00034D  1946 	C$i2c.h$214$1$90 ==.
                                   1947 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:214: void i2c_write_and_stop(unsigned char output_data)
                                   1948 ;	-----------------------------------------
                                   1949 ;	 function i2c_write_and_stop
                                   1950 ;	-----------------------------------------
      00040E                       1951 _i2c_write_and_stop:
      00040E 85 82 C2         [24] 1952 	mov	_SMB0DAT,dpl
                           000350  1953 	C$i2c.h$217$1$92 ==.
                                   1954 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:217: STO = 1;                  //Set stop bit
      000411 D2 C4            [12] 1955 	setb	_STO
                           000352  1956 	C$i2c.h$218$1$92 ==.
                                   1957 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:218: while(!SI);               //Wait until send is complete
      000413                       1958 00101$:
                           000352  1959 	C$i2c.h$219$1$92 ==.
                                   1960 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:219: SI = 0;                   //clear SI
      000413 10 C3 02         [24] 1961 	jbc	_SI,00112$
      000416 80 FB            [24] 1962 	sjmp	00101$
      000418                       1963 00112$:
                           000357  1964 	C$i2c.h$220$1$92 ==.
                           000357  1965 	XG$i2c_write_and_stop$0$0 ==.
      000418 22               [24] 1966 	ret
                                   1967 ;------------------------------------------------------------
                                   1968 ;Allocation info for local variables in function 'i2c_read'
                                   1969 ;------------------------------------------------------------
                                   1970 ;input_data                Allocated to registers 
                                   1971 ;------------------------------------------------------------
                           000358  1972 	G$i2c_read$0$0 ==.
                           000358  1973 	C$i2c.h$223$1$92 ==.
                                   1974 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:223: unsigned char i2c_read(void)
                                   1975 ;	-----------------------------------------
                                   1976 ;	 function i2c_read
                                   1977 ;	-----------------------------------------
      000419                       1978 _i2c_read:
                           000358  1979 	C$i2c.h$226$1$94 ==.
                                   1980 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:226: while(!SI);                //Wait until we have data to read
      000419                       1981 00101$:
      000419 30 C3 FD         [24] 1982 	jnb	_SI,00101$
                           00035B  1983 	C$i2c.h$227$1$94 ==.
                                   1984 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:227: input_data = SMB0DAT;      //Read the data
      00041C 85 C2 82         [24] 1985 	mov	dpl,_SMB0DAT
                           00035E  1986 	C$i2c.h$228$1$94 ==.
                                   1987 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:228: SI = 0;                    //Clear SI
      00041F C2 C3            [12] 1988 	clr	_SI
                           000360  1989 	C$i2c.h$229$1$94 ==.
                                   1990 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:229: return input_data;         //Return the read data
                           000360  1991 	C$i2c.h$230$1$94 ==.
                           000360  1992 	XG$i2c_read$0$0 ==.
      000421 22               [24] 1993 	ret
                                   1994 ;------------------------------------------------------------
                                   1995 ;Allocation info for local variables in function 'i2c_read_and_stop'
                                   1996 ;------------------------------------------------------------
                                   1997 ;input_data                Allocated to registers r7 
                                   1998 ;------------------------------------------------------------
                           000361  1999 	G$i2c_read_and_stop$0$0 ==.
                           000361  2000 	C$i2c.h$233$1$94 ==.
                                   2001 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:233: unsigned char i2c_read_and_stop(void)
                                   2002 ;	-----------------------------------------
                                   2003 ;	 function i2c_read_and_stop
                                   2004 ;	-----------------------------------------
      000422                       2005 _i2c_read_and_stop:
                           000361  2006 	C$i2c.h$236$1$96 ==.
                                   2007 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:236: while(!SI);                //Wait until we have data to read
      000422                       2008 00101$:
      000422 30 C3 FD         [24] 2009 	jnb	_SI,00101$
                           000364  2010 	C$i2c.h$237$1$96 ==.
                                   2011 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:237: input_data = SMB0DAT;      //Read the data
      000425 AF C2            [24] 2012 	mov	r7,_SMB0DAT
                           000366  2013 	C$i2c.h$238$1$96 ==.
                                   2014 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:238: SI = 0;                    //Clear SI
      000427 C2 C3            [12] 2015 	clr	_SI
                           000368  2016 	C$i2c.h$239$1$96 ==.
                                   2017 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:239: STO = 1;                   //Set stop bit
      000429 D2 C4            [12] 2018 	setb	_STO
                           00036A  2019 	C$i2c.h$240$1$96 ==.
                                   2020 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:240: while(!SI);                //Wait for stop
      00042B                       2021 00104$:
                           00036A  2022 	C$i2c.h$241$1$96 ==.
                                   2023 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:241: SI = 0;
      00042B 10 C3 02         [24] 2024 	jbc	_SI,00122$
      00042E 80 FB            [24] 2025 	sjmp	00104$
      000430                       2026 00122$:
                           00036F  2027 	C$i2c.h$242$1$96 ==.
                                   2028 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:242: return input_data;         //Return the read data
      000430 8F 82            [24] 2029 	mov	dpl,r7
                           000371  2030 	C$i2c.h$243$1$96 ==.
                           000371  2031 	XG$i2c_read_and_stop$0$0 ==.
      000432 22               [24] 2032 	ret
                                   2033 ;------------------------------------------------------------
                                   2034 ;Allocation info for local variables in function 'i2c_write_data'
                                   2035 ;------------------------------------------------------------
                                   2036 ;start_reg                 Allocated with name '_i2c_write_data_PARM_2'
                                   2037 ;buffer                    Allocated with name '_i2c_write_data_PARM_3'
                                   2038 ;num_bytes                 Allocated with name '_i2c_write_data_PARM_4'
                                   2039 ;addr                      Allocated to registers r7 
                                   2040 ;i                         Allocated to registers 
                                   2041 ;------------------------------------------------------------
                           000372  2042 	G$i2c_write_data$0$0 ==.
                           000372  2043 	C$i2c.h$246$1$96 ==.
                                   2044 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:246: void i2c_write_data(unsigned char addr, unsigned char start_reg, unsigned char *buffer, unsigned char num_bytes)
                                   2045 ;	-----------------------------------------
                                   2046 ;	 function i2c_write_data
                                   2047 ;	-----------------------------------------
      000433                       2048 _i2c_write_data:
      000433 AF 82            [24] 2049 	mov	r7,dpl
                           000374  2050 	C$i2c.h$250$1$98 ==.
                                   2051 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:250: i2c_start();               //initiate I2C transfer
      000435 C0 07            [24] 2052 	push	ar7
      000437 12 03 F8         [24] 2053 	lcall	_i2c_start
      00043A D0 07            [24] 2054 	pop	ar7
                           00037B  2055 	C$i2c.h$251$1$98 ==.
                                   2056 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:251: i2c_write(addr & ~0x01);   //write the desired address to the bus
      00043C 74 FE            [12] 2057 	mov	a,#0xFE
      00043E 5F               [12] 2058 	anl	a,r7
      00043F F5 82            [12] 2059 	mov	dpl,a
      000441 12 04 05         [24] 2060 	lcall	_i2c_write
                           000383  2061 	C$i2c.h$252$1$98 ==.
                                   2062 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:252: i2c_write(start_reg);      //write the start register to the bus
      000444 85 27 82         [24] 2063 	mov	dpl,_i2c_write_data_PARM_2
      000447 12 04 05         [24] 2064 	lcall	_i2c_write
                           000389  2065 	C$i2c.h$253$1$98 ==.
                                   2066 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:253: for(i=0; i<num_bytes-1; i++) //write the data to the register(s)
      00044A 7F 00            [12] 2067 	mov	r7,#0x00
      00044C                       2068 00103$:
      00044C AD 2B            [24] 2069 	mov	r5,_i2c_write_data_PARM_4
      00044E 7E 00            [12] 2070 	mov	r6,#0x00
      000450 1D               [12] 2071 	dec	r5
      000451 BD FF 01         [24] 2072 	cjne	r5,#0xFF,00114$
      000454 1E               [12] 2073 	dec	r6
      000455                       2074 00114$:
      000455 8F 03            [24] 2075 	mov	ar3,r7
      000457 7C 00            [12] 2076 	mov	r4,#0x00
      000459 C3               [12] 2077 	clr	c
      00045A EB               [12] 2078 	mov	a,r3
      00045B 9D               [12] 2079 	subb	a,r5
      00045C EC               [12] 2080 	mov	a,r4
      00045D 64 80            [12] 2081 	xrl	a,#0x80
      00045F 8E F0            [24] 2082 	mov	b,r6
      000461 63 F0 80         [24] 2083 	xrl	b,#0x80
      000464 95 F0            [12] 2084 	subb	a,b
      000466 50 1F            [24] 2085 	jnc	00101$
                           0003A7  2086 	C$i2c.h$254$1$98 ==.
                                   2087 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:254: i2c_write(buffer[i]);
      000468 EF               [12] 2088 	mov	a,r7
      000469 25 28            [12] 2089 	add	a,_i2c_write_data_PARM_3
      00046B FC               [12] 2090 	mov	r4,a
      00046C E4               [12] 2091 	clr	a
      00046D 35 29            [12] 2092 	addc	a,(_i2c_write_data_PARM_3 + 1)
      00046F FD               [12] 2093 	mov	r5,a
      000470 AE 2A            [24] 2094 	mov	r6,(_i2c_write_data_PARM_3 + 2)
      000472 8C 82            [24] 2095 	mov	dpl,r4
      000474 8D 83            [24] 2096 	mov	dph,r5
      000476 8E F0            [24] 2097 	mov	b,r6
      000478 12 16 96         [24] 2098 	lcall	__gptrget
      00047B F5 82            [12] 2099 	mov	dpl,a
      00047D C0 07            [24] 2100 	push	ar7
      00047F 12 04 05         [24] 2101 	lcall	_i2c_write
      000482 D0 07            [24] 2102 	pop	ar7
                           0003C3  2103 	C$i2c.h$253$1$98 ==.
                                   2104 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:253: for(i=0; i<num_bytes-1; i++) //write the data to the register(s)
      000484 0F               [12] 2105 	inc	r7
      000485 80 C5            [24] 2106 	sjmp	00103$
      000487                       2107 00101$:
                           0003C6  2108 	C$i2c.h$255$1$98 ==.
                                   2109 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:255: i2c_write_and_stop(buffer[num_bytes-1]); //Stop transfer
      000487 AE 2B            [24] 2110 	mov	r6,_i2c_write_data_PARM_4
      000489 7F 00            [12] 2111 	mov	r7,#0x00
      00048B 1E               [12] 2112 	dec	r6
      00048C BE FF 01         [24] 2113 	cjne	r6,#0xFF,00116$
      00048F 1F               [12] 2114 	dec	r7
      000490                       2115 00116$:
      000490 EE               [12] 2116 	mov	a,r6
      000491 25 28            [12] 2117 	add	a,_i2c_write_data_PARM_3
      000493 FE               [12] 2118 	mov	r6,a
      000494 EF               [12] 2119 	mov	a,r7
      000495 35 29            [12] 2120 	addc	a,(_i2c_write_data_PARM_3 + 1)
      000497 FF               [12] 2121 	mov	r7,a
      000498 AD 2A            [24] 2122 	mov	r5,(_i2c_write_data_PARM_3 + 2)
      00049A 8E 82            [24] 2123 	mov	dpl,r6
      00049C 8F 83            [24] 2124 	mov	dph,r7
      00049E 8D F0            [24] 2125 	mov	b,r5
      0004A0 12 16 96         [24] 2126 	lcall	__gptrget
      0004A3 F5 82            [12] 2127 	mov	dpl,a
      0004A5 12 04 0E         [24] 2128 	lcall	_i2c_write_and_stop
                           0003E7  2129 	C$i2c.h$256$1$98 ==.
                           0003E7  2130 	XG$i2c_write_data$0$0 ==.
      0004A8 22               [24] 2131 	ret
                                   2132 ;------------------------------------------------------------
                                   2133 ;Allocation info for local variables in function 'i2c_read_data'
                                   2134 ;------------------------------------------------------------
                                   2135 ;start_reg                 Allocated with name '_i2c_read_data_PARM_2'
                                   2136 ;buffer                    Allocated with name '_i2c_read_data_PARM_3'
                                   2137 ;num_bytes                 Allocated with name '_i2c_read_data_PARM_4'
                                   2138 ;addr                      Allocated to registers r7 
                                   2139 ;j                         Allocated to registers 
                                   2140 ;------------------------------------------------------------
                           0003E8  2141 	G$i2c_read_data$0$0 ==.
                           0003E8  2142 	C$i2c.h$259$1$98 ==.
                                   2143 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:259: void i2c_read_data(unsigned char addr, unsigned char start_reg, unsigned char *buffer, unsigned char num_bytes)
                                   2144 ;	-----------------------------------------
                                   2145 ;	 function i2c_read_data
                                   2146 ;	-----------------------------------------
      0004A9                       2147 _i2c_read_data:
      0004A9 AF 82            [24] 2148 	mov	r7,dpl
                           0003EA  2149 	C$i2c.h$262$1$100 ==.
                                   2150 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:262: i2c_start();               //Start I2C transfer
      0004AB C0 07            [24] 2151 	push	ar7
      0004AD 12 03 F8         [24] 2152 	lcall	_i2c_start
      0004B0 D0 07            [24] 2153 	pop	ar7
                           0003F1  2154 	C$i2c.h$263$1$100 ==.
                                   2155 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:263: i2c_write(addr & ~0x01);   //Write address of device that will be written to, send 0
      0004B2 8F 06            [24] 2156 	mov	ar6,r7
      0004B4 74 FE            [12] 2157 	mov	a,#0xFE
      0004B6 5E               [12] 2158 	anl	a,r6
      0004B7 F5 82            [12] 2159 	mov	dpl,a
      0004B9 C0 07            [24] 2160 	push	ar7
      0004BB 12 04 05         [24] 2161 	lcall	_i2c_write
                           0003FD  2162 	C$i2c.h$264$1$100 ==.
                                   2163 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:264: i2c_write_and_stop(start_reg); //Write & stop the 1st register to be read
      0004BE 85 2C 82         [24] 2164 	mov	dpl,_i2c_read_data_PARM_2
      0004C1 12 04 0E         [24] 2165 	lcall	_i2c_write_and_stop
                           000403  2166 	C$i2c.h$265$1$100 ==.
                                   2167 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:265: i2c_start();               //Start I2C transfer
      0004C4 12 03 F8         [24] 2168 	lcall	_i2c_start
      0004C7 D0 07            [24] 2169 	pop	ar7
                           000408  2170 	C$i2c.h$266$1$100 ==.
                                   2171 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:266: i2c_write(addr | 0x01);    //Write address again, this time indicating a read operation
      0004C9 74 01            [12] 2172 	mov	a,#0x01
      0004CB 4F               [12] 2173 	orl	a,r7
      0004CC F5 82            [12] 2174 	mov	dpl,a
      0004CE 12 04 05         [24] 2175 	lcall	_i2c_write
                           000410  2176 	C$i2c.h$267$1$100 ==.
                                   2177 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:267: for(j = 0; j < num_bytes - 1; j++)
      0004D1 7F 00            [12] 2178 	mov	r7,#0x00
      0004D3                       2179 00103$:
      0004D3 AD 30            [24] 2180 	mov	r5,_i2c_read_data_PARM_4
      0004D5 7E 00            [12] 2181 	mov	r6,#0x00
      0004D7 1D               [12] 2182 	dec	r5
      0004D8 BD FF 01         [24] 2183 	cjne	r5,#0xFF,00114$
      0004DB 1E               [12] 2184 	dec	r6
      0004DC                       2185 00114$:
      0004DC 8F 03            [24] 2186 	mov	ar3,r7
      0004DE 7C 00            [12] 2187 	mov	r4,#0x00
      0004E0 C3               [12] 2188 	clr	c
      0004E1 EB               [12] 2189 	mov	a,r3
      0004E2 9D               [12] 2190 	subb	a,r5
      0004E3 EC               [12] 2191 	mov	a,r4
      0004E4 64 80            [12] 2192 	xrl	a,#0x80
      0004E6 8E F0            [24] 2193 	mov	b,r6
      0004E8 63 F0 80         [24] 2194 	xrl	b,#0x80
      0004EB 95 F0            [12] 2195 	subb	a,b
      0004ED 50 2E            [24] 2196 	jnc	00101$
                           00042E  2197 	C$i2c.h$269$2$101 ==.
                                   2198 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:269: AA = 1;                //Set acknowledge bit
      0004EF D2 C2            [12] 2199 	setb	_AA
                           000430  2200 	C$i2c.h$270$2$101 ==.
                                   2201 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:270: buffer[j] = i2c_read();//Read data, save it in buffer
      0004F1 EF               [12] 2202 	mov	a,r7
      0004F2 25 2D            [12] 2203 	add	a,_i2c_read_data_PARM_3
      0004F4 FC               [12] 2204 	mov	r4,a
      0004F5 E4               [12] 2205 	clr	a
      0004F6 35 2E            [12] 2206 	addc	a,(_i2c_read_data_PARM_3 + 1)
      0004F8 FD               [12] 2207 	mov	r5,a
      0004F9 AE 2F            [24] 2208 	mov	r6,(_i2c_read_data_PARM_3 + 2)
      0004FB C0 07            [24] 2209 	push	ar7
      0004FD C0 06            [24] 2210 	push	ar6
      0004FF C0 05            [24] 2211 	push	ar5
      000501 C0 04            [24] 2212 	push	ar4
      000503 12 04 19         [24] 2213 	lcall	_i2c_read
      000506 AB 82            [24] 2214 	mov	r3,dpl
      000508 D0 04            [24] 2215 	pop	ar4
      00050A D0 05            [24] 2216 	pop	ar5
      00050C D0 06            [24] 2217 	pop	ar6
      00050E D0 07            [24] 2218 	pop	ar7
      000510 8C 82            [24] 2219 	mov	dpl,r4
      000512 8D 83            [24] 2220 	mov	dph,r5
      000514 8E F0            [24] 2221 	mov	b,r6
      000516 EB               [12] 2222 	mov	a,r3
      000517 12 0C E9         [24] 2223 	lcall	__gptrput
                           000459  2224 	C$i2c.h$267$1$100 ==.
                                   2225 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:267: for(j = 0; j < num_bytes - 1; j++)
      00051A 0F               [12] 2226 	inc	r7
      00051B 80 B6            [24] 2227 	sjmp	00103$
      00051D                       2228 00101$:
                           00045C  2229 	C$i2c.h$272$1$100 ==.
                                   2230 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:272: AA = 0;
      00051D C2 C2            [12] 2231 	clr	_AA
                           00045E  2232 	C$i2c.h$273$1$100 ==.
                                   2233 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:273: buffer[num_bytes - 1] = i2c_read_and_stop(); //Read the last byte and stop, save it in the buffer
      00051F AE 30            [24] 2234 	mov	r6,_i2c_read_data_PARM_4
      000521 7F 00            [12] 2235 	mov	r7,#0x00
      000523 1E               [12] 2236 	dec	r6
      000524 BE FF 01         [24] 2237 	cjne	r6,#0xFF,00116$
      000527 1F               [12] 2238 	dec	r7
      000528                       2239 00116$:
      000528 EE               [12] 2240 	mov	a,r6
      000529 25 2D            [12] 2241 	add	a,_i2c_read_data_PARM_3
      00052B FE               [12] 2242 	mov	r6,a
      00052C EF               [12] 2243 	mov	a,r7
      00052D 35 2E            [12] 2244 	addc	a,(_i2c_read_data_PARM_3 + 1)
      00052F FF               [12] 2245 	mov	r7,a
      000530 AD 2F            [24] 2246 	mov	r5,(_i2c_read_data_PARM_3 + 2)
      000532 C0 07            [24] 2247 	push	ar7
      000534 C0 06            [24] 2248 	push	ar6
      000536 C0 05            [24] 2249 	push	ar5
      000538 12 04 22         [24] 2250 	lcall	_i2c_read_and_stop
      00053B AC 82            [24] 2251 	mov	r4,dpl
      00053D D0 05            [24] 2252 	pop	ar5
      00053F D0 06            [24] 2253 	pop	ar6
      000541 D0 07            [24] 2254 	pop	ar7
      000543 8E 82            [24] 2255 	mov	dpl,r6
      000545 8F 83            [24] 2256 	mov	dph,r7
      000547 8D F0            [24] 2257 	mov	b,r5
      000549 EC               [12] 2258 	mov	a,r4
      00054A 12 0C E9         [24] 2259 	lcall	__gptrput
                           00048C  2260 	C$i2c.h$274$1$100 ==.
                           00048C  2261 	XG$i2c_read_data$0$0 ==.
      00054D 22               [24] 2262 	ret
                                   2263 ;------------------------------------------------------------
                                   2264 ;Allocation info for local variables in function 'Accel_Init'
                                   2265 ;------------------------------------------------------------
                                   2266 ;Data2                     Allocated with name '_Accel_Init_Data2_1_103'
                                   2267 ;------------------------------------------------------------
                           00048D  2268 	G$Accel_Init$0$0 ==.
                           00048D  2269 	C$i2c.h$283$1$100 ==.
                                   2270 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:283: void Accel_Init(void)
                                   2271 ;	-----------------------------------------
                                   2272 ;	 function Accel_Init
                                   2273 ;	-----------------------------------------
      00054E                       2274 _Accel_Init:
                           00048D  2275 	C$i2c.h$287$1$103 ==.
                                   2276 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:287: Data2[0]=0x23;	//normal power mode, 50Hz ODR, y & x axes enabled
      00054E 75 31 23         [24] 2277 	mov	_Accel_Init_Data2_1_103,#0x23
                           000490  2278 	C$i2c.h$289$1$103 ==.
                                   2279 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:289: i2c_write_data(addr_accel, 0x20, Data2, 1);
      000551 75 28 31         [24] 2280 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      000554 75 29 00         [24] 2281 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      000557 75 2A 40         [24] 2282 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      00055A 75 27 20         [24] 2283 	mov	_i2c_write_data_PARM_2,#0x20
      00055D 75 2B 01         [24] 2284 	mov	_i2c_write_data_PARM_4,#0x01
      000560 75 82 30         [24] 2285 	mov	dpl,#0x30
      000563 12 04 33         [24] 2286 	lcall	_i2c_write_data
                           0004A5  2287 	C$i2c.h$290$1$103 ==.
                                   2288 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:290: Data2[0]=0x00;	//Default - no filtering
      000566 75 31 00         [24] 2289 	mov	_Accel_Init_Data2_1_103,#0x00
                           0004A8  2290 	C$i2c.h$292$1$103 ==.
                                   2291 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:292: i2c_write_data(addr_accel, 0x21, Data2, 1);
      000569 75 28 31         [24] 2292 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      00056C 75 29 00         [24] 2293 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      00056F 75 2A 40         [24] 2294 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000572 75 27 21         [24] 2295 	mov	_i2c_write_data_PARM_2,#0x21
      000575 75 2B 01         [24] 2296 	mov	_i2c_write_data_PARM_4,#0x01
      000578 75 82 30         [24] 2297 	mov	dpl,#0x30
      00057B 12 04 33         [24] 2298 	lcall	_i2c_write_data
                           0004BD  2299 	C$i2c.h$293$1$103 ==.
                                   2300 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:293: Data2[0]=0x00;	//default - no interrupts enabled
      00057E 75 31 00         [24] 2301 	mov	_Accel_Init_Data2_1_103,#0x00
                           0004C0  2302 	C$i2c.h$294$1$103 ==.
                                   2303 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:294: i2c_write_data(addr_accel, 0x22, Data2, 1);
      000581 75 28 31         [24] 2304 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      000584 75 29 00         [24] 2305 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      000587 75 2A 40         [24] 2306 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      00058A 75 27 22         [24] 2307 	mov	_i2c_write_data_PARM_2,#0x22
      00058D 75 2B 01         [24] 2308 	mov	_i2c_write_data_PARM_4,#0x01
      000590 75 82 30         [24] 2309 	mov	dpl,#0x30
      000593 12 04 33         [24] 2310 	lcall	_i2c_write_data
                           0004D5  2311 	C$i2c.h$298$1$103 ==.
                           0004D5  2312 	XG$Accel_Init$0$0 ==.
      000596 22               [24] 2313 	ret
                                   2314 ;------------------------------------------------------------
                                   2315 ;Allocation info for local variables in function 'main'
                                   2316 ;------------------------------------------------------------
                           0004D6  2317 	G$main$0$0 ==.
                           0004D6  2318 	C$lab4_m.c$82$1$103 ==.
                                   2319 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:82: void main(void)
                                   2320 ;	-----------------------------------------
                                   2321 ;	 function main
                                   2322 ;	-----------------------------------------
      000597                       2323 _main:
                           0004D6  2324 	C$lab4_m.c$89$1$122 ==.
                                   2325 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:89: Sys_Init();
      000597 12 00 F1         [24] 2326 	lcall	_Sys_Init
                           0004D9  2327 	C$lab4_m.c$90$1$122 ==.
                                   2328 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:90: putchar(' '); //the quotes in this line may not format correctly
      00059A 75 82 20         [24] 2329 	mov	dpl,#0x20
      00059D 12 01 04         [24] 2330 	lcall	_putchar
                           0004DF  2331 	C$lab4_m.c$91$1$122 ==.
                                   2332 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:91: Port_Init();
      0005A0 12 0A 2B         [24] 2333 	lcall	_Port_Init
                           0004E2  2334 	C$lab4_m.c$92$1$122 ==.
                                   2335 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:92: XBR0_Init();
      0005A3 12 0A 4D         [24] 2336 	lcall	_XBR0_Init
                           0004E5  2337 	C$lab4_m.c$93$1$122 ==.
                                   2338 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:93: PCA_Init();
      0005A6 12 0A 57         [24] 2339 	lcall	_PCA_Init
                           0004E8  2340 	C$lab4_m.c$94$1$122 ==.
                                   2341 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:94: SMB_Init();
      0005A9 12 0A 51         [24] 2342 	lcall	_SMB_Init
                           0004EB  2343 	C$lab4_m.c$95$1$122 ==.
                                   2344 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:95: ADC_Init();
      0005AC 12 0B CE         [24] 2345 	lcall	_ADC_Init
                           0004EE  2346 	C$lab4_m.c$98$1$122 ==.
                                   2347 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:98: printf("\r\nEmbedded Control Car Calibration");
      0005AF 74 05            [12] 2348 	mov	a,#___str_3
      0005B1 C0 E0            [24] 2349 	push	acc
      0005B3 74 18            [12] 2350 	mov	a,#(___str_3 >> 8)
      0005B5 C0 E0            [24] 2351 	push	acc
      0005B7 74 80            [12] 2352 	mov	a,#0x80
      0005B9 C0 E0            [24] 2353 	push	acc
      0005BB 12 0F C5         [24] 2354 	lcall	_printf
      0005BE 15 81            [12] 2355 	dec	sp
      0005C0 15 81            [12] 2356 	dec	sp
      0005C2 15 81            [12] 2357 	dec	sp
                           000503  2358 	C$lab4_m.c$100$1$122 ==.
                                   2359 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:100: STR_PW = PW_CENTER_STR;
      0005C4 75 34 09         [24] 2360 	mov	_STR_PW,#0x09
      0005C7 75 35 0B         [24] 2361 	mov	(_STR_PW + 1),#0x0B
                           000509  2362 	C$lab4_m.c$101$1$122 ==.
                                   2363 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:101: MOTOR_PW = PW_NUET_DRIVE;
      0005CA 75 42 CD         [24] 2364 	mov	_MOTOR_PW,#0xCD
      0005CD 75 43 0A         [24] 2365 	mov	(_MOTOR_PW + 1),#0x0A
                           00050F  2366 	C$lab4_m.c$103$1$122 ==.
                                   2367 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:103: STR_lo_to_hi= 0xFFFF - STR_PW;
      0005D0 75 32 F6         [24] 2368 	mov	_STR_lo_to_hi,#0xF6
      0005D3 75 33 F4         [24] 2369 	mov	(_STR_lo_to_hi + 1),#0xF4
                           000515  2370 	C$lab4_m.c$104$1$122 ==.
                                   2371 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:104: PCA0CP0 = STR_lo_to_hi;
      0005D6 75 EA F6         [24] 2372 	mov	((_PCA0CP0 >> 0) & 0xFF),#0xF6
      0005D9 75 FA F4         [24] 2373 	mov	((_PCA0CP0 >> 8) & 0xFF),#0xF4
                           00051B  2374 	C$lab4_m.c$106$1$122 ==.
                                   2375 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:106: DRV_lo_to_hi = 0xFFFF - MOTOR_PW;
      0005DC 75 45 32         [24] 2376 	mov	_DRV_lo_to_hi,#0x32
      0005DF 75 46 F5         [24] 2377 	mov	(_DRV_lo_to_hi + 1),#0xF5
                           000521  2378 	C$lab4_m.c$107$1$122 ==.
                                   2379 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:107: PCA0CP2 = DRV_lo_to_hi;
      0005E2 75 EC 32         [24] 2380 	mov	((_PCA0CP2 >> 0) & 0xFF),#0x32
      0005E5 75 FC F5         [24] 2381 	mov	((_PCA0CP2 >> 8) & 0xFF),#0xF5
                           000527  2382 	C$lab4_m.c$109$1$122 ==.
                                   2383 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:109: count=0; //1 count = 20 milliseconds
      0005E8 E4               [12] 2384 	clr	a
      0005E9 F5 36            [12] 2385 	mov	_count,a
      0005EB F5 37            [12] 2386 	mov	(_count + 1),a
                           00052C  2387 	C$lab4_m.c$111$1$122 ==.
                                   2388 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:111: while (count < 50);
      0005ED                       2389 00101$:
      0005ED C3               [12] 2390 	clr	c
      0005EE E5 36            [12] 2391 	mov	a,_count
      0005F0 94 32            [12] 2392 	subb	a,#0x32
      0005F2 E5 37            [12] 2393 	mov	a,(_count + 1)
      0005F4 94 00            [12] 2394 	subb	a,#0x00
      0005F6 40 F5            [24] 2395 	jc	00101$
                           000537  2396 	C$lab4_m.c$117$1$122 ==.
                                   2397 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:117: printf("\r\nEmbedded Control Car ready!");
      0005F8 74 28            [12] 2398 	mov	a,#___str_4
      0005FA C0 E0            [24] 2399 	push	acc
      0005FC 74 18            [12] 2400 	mov	a,#(___str_4 >> 8)
      0005FE C0 E0            [24] 2401 	push	acc
      000600 74 80            [12] 2402 	mov	a,#0x80
      000602 C0 E0            [24] 2403 	push	acc
      000604 12 0F C5         [24] 2404 	lcall	_printf
      000607 15 81            [12] 2405 	dec	sp
      000609 15 81            [12] 2406 	dec	sp
      00060B 15 81            [12] 2407 	dec	sp
                           00054C  2408 	C$lab4_m.c$118$1$122 ==.
                                   2409 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:118: desired_heading = direction();
      00060D 12 0A 88         [24] 2410 	lcall	_direction
      000610 85 82 3A         [24] 2411 	mov	_desired_heading,dpl
      000613 85 83 3B         [24] 2412 	mov	(_desired_heading + 1),dph
                           000555  2413 	C$lab4_m.c$119$1$122 ==.
                                   2414 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:119: count=0;
      000616 E4               [12] 2415 	clr	a
      000617 F5 36            [12] 2416 	mov	_count,a
      000619 F5 37            [12] 2417 	mov	(_count + 1),a
                           00055A  2418 	C$lab4_m.c$120$1$122 ==.
                                   2419 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:120: while (1)
      00061B                       2420 00116$:
                           00055A  2421 	C$lab4_m.c$124$2$123 ==.
                                   2422 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:124: if (!SS0)
      00061B 20 B7 40         [24] 2423 	jb	_SS0,00113$
                           00055D  2424 	C$lab4_m.c$126$3$124 ==.
                                   2425 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:126: wait();
      00061E 12 0B 22         [24] 2426 	lcall	_wait
                           000560  2427 	C$lab4_m.c$127$3$124 ==.
                                   2428 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:127: if (count % 4==0)
      000621 E5 36            [12] 2429 	mov	a,_count
      000623 54 03            [12] 2430 	anl	a,#0x03
      000625 60 02            [24] 2431 	jz	00147$
      000627 80 03            [24] 2432 	sjmp	00105$
      000629                       2433 00147$:
                           000568  2434 	C$lab4_m.c$129$4$125 ==.
                                   2435 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:129: Drive_func();
      000629 12 0B 6E         [24] 2436 	lcall	_Drive_func
      00062C                       2437 00105$:
                           00056B  2438 	C$lab4_m.c$132$3$124 ==.
                                   2439 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:132: if (count%2==0)
      00062C E5 36            [12] 2440 	mov	a,_count
      00062E 20 E0 03         [24] 2441 	jb	acc.0,00107$
                           000570  2442 	C$lab4_m.c$134$4$126 ==.
                                   2443 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:134: Steering_func();	
      000631 12 0B 35         [24] 2444 	lcall	_Steering_func
      000634                       2445 00107$:
                           000573  2446 	C$lab4_m.c$137$1$122 ==.
                                   2447 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:137: if (count % 50 ==0)
      000634 75 11 32         [24] 2448 	mov	__moduint_PARM_2,#0x32
      000637 75 12 00         [24] 2449 	mov	(__moduint_PARM_2 + 1),#0x00
      00063A 85 36 82         [24] 2450 	mov	dpl,_count
      00063D 85 37 83         [24] 2451 	mov	dph,(_count + 1)
      000640 12 0E 4C         [24] 2452 	lcall	__moduint
      000643 E5 82            [12] 2453 	mov	a,dpl
      000645 85 83 F0         [24] 2454 	mov	b,dph
      000648 45 F0            [12] 2455 	orl	a,b
      00064A 70 03            [24] 2456 	jnz	00109$
                           00058B  2457 	C$lab4_m.c$139$4$127 ==.
                                   2458 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:139: Battery_func();
      00064C 12 0B D8         [24] 2459 	lcall	_Battery_func
      00064F                       2460 00109$:
                           00058E  2461 	C$lab4_m.c$142$3$124 ==.
                                   2462 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:142: if (range <= 22)
      00064F C3               [12] 2463 	clr	c
      000650 74 16            [12] 2464 	mov	a,#0x16
      000652 95 40            [12] 2465 	subb	a,_range
      000654 E4               [12] 2466 	clr	a
      000655 95 41            [12] 2467 	subb	a,(_range + 1)
      000657 40 C2            [24] 2468 	jc	00116$
                           000598  2469 	C$lab4_m.c$144$4$128 ==.
                                   2470 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:144: avoid_crash();
      000659 12 0C 3C         [24] 2471 	lcall	_avoid_crash
      00065C 80 BD            [24] 2472 	sjmp	00116$
      00065E                       2473 00113$:
                           00059D  2474 	C$lab4_m.c$150$3$129 ==.
                                   2475 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:150: else {printf("\r\n The control is paused");count=1;starter=0;}
      00065E 74 46            [12] 2476 	mov	a,#___str_5
      000660 C0 E0            [24] 2477 	push	acc
      000662 74 18            [12] 2478 	mov	a,#(___str_5 >> 8)
      000664 C0 E0            [24] 2479 	push	acc
      000666 74 80            [12] 2480 	mov	a,#0x80
      000668 C0 E0            [24] 2481 	push	acc
      00066A 12 0F C5         [24] 2482 	lcall	_printf
      00066D 15 81            [12] 2483 	dec	sp
      00066F 15 81            [12] 2484 	dec	sp
      000671 15 81            [12] 2485 	dec	sp
      000673 75 36 01         [24] 2486 	mov	_count,#0x01
      000676 75 37 00         [24] 2487 	mov	(_count + 1),#0x00
      000679 75 44 00         [24] 2488 	mov	_starter,#0x00
      00067C 80 9D            [24] 2489 	sjmp	00116$
                           0005BD  2490 	C$lab4_m.c$152$1$122 ==.
                           0005BD  2491 	XG$main$0$0 ==.
      00067E 22               [24] 2492 	ret
                                   2493 ;------------------------------------------------------------
                                   2494 ;Allocation info for local variables in function 'Drive_Motor'
                                   2495 ;------------------------------------------------------------
                           0005BE  2496 	G$Drive_Motor$0$0 ==.
                           0005BE  2497 	C$lab4_m.c$161$1$122 ==.
                                   2498 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:161: void Drive_Motor(void)
                                   2499 ;	-----------------------------------------
                                   2500 ;	 function Drive_Motor
                                   2501 ;	-----------------------------------------
      00067F                       2502 _Drive_Motor:
                           0005BE  2503 	C$lab4_m.c$164$1$131 ==.
                                   2504 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:164: if(range <= 12 ||(range <= 20 && STR_PW == PW_MIN_STR)){MOTOR_PW = PW_NUET_DRIVE;}
      00067F C3               [12] 2505 	clr	c
      000680 74 0C            [12] 2506 	mov	a,#0x0C
      000682 95 40            [12] 2507 	subb	a,_range
      000684 E4               [12] 2508 	clr	a
      000685 95 41            [12] 2509 	subb	a,(_range + 1)
      000687 50 14            [24] 2510 	jnc	00108$
      000689 C3               [12] 2511 	clr	c
      00068A 74 14            [12] 2512 	mov	a,#0x14
      00068C 95 40            [12] 2513 	subb	a,_range
      00068E E4               [12] 2514 	clr	a
      00068F 95 41            [12] 2515 	subb	a,(_range + 1)
      000691 40 13            [24] 2516 	jc	00109$
      000693 74 29            [12] 2517 	mov	a,#0x29
      000695 B5 34 0E         [24] 2518 	cjne	a,_STR_PW,00109$
      000698 74 09            [12] 2519 	mov	a,#0x09
      00069A B5 35 09         [24] 2520 	cjne	a,(_STR_PW + 1),00109$
      00069D                       2521 00108$:
      00069D 75 42 CD         [24] 2522 	mov	_MOTOR_PW,#0xCD
      0006A0 75 43 0A         [24] 2523 	mov	(_MOTOR_PW + 1),#0x0A
      0006A3 02 07 65         [24] 2524 	ljmp	00110$
      0006A6                       2525 00109$:
                           0005E5  2526 	C$lab4_m.c$165$1$131 ==.
                                   2527 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:165: else if (range > 20 && range < 55) 
      0006A6 C3               [12] 2528 	clr	c
      0006A7 74 14            [12] 2529 	mov	a,#0x14
      0006A9 95 40            [12] 2530 	subb	a,_range
      0006AB E4               [12] 2531 	clr	a
      0006AC 95 41            [12] 2532 	subb	a,(_range + 1)
      0006AE 40 03            [24] 2533 	jc	00134$
      0006B0 02 07 5F         [24] 2534 	ljmp	00105$
      0006B3                       2535 00134$:
      0006B3 C3               [12] 2536 	clr	c
      0006B4 E5 40            [12] 2537 	mov	a,_range
      0006B6 94 37            [12] 2538 	subb	a,#0x37
      0006B8 E5 41            [12] 2539 	mov	a,(_range + 1)
      0006BA 94 00            [12] 2540 	subb	a,#0x00
      0006BC 40 03            [24] 2541 	jc	00135$
      0006BE 02 07 5F         [24] 2542 	ljmp	00105$
      0006C1                       2543 00135$:
                           000600  2544 	C$lab4_m.c$167$2$133 ==.
                                   2545 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:167: if (MOTOR_PW <= PW_MAX_DRIVE)
      0006C1 C3               [12] 2546 	clr	c
      0006C2 74 AF            [12] 2547 	mov	a,#0xAF
      0006C4 95 42            [12] 2548 	subb	a,_MOTOR_PW
      0006C6 74 0D            [12] 2549 	mov	a,#0x0D
      0006C8 95 43            [12] 2550 	subb	a,(_MOTOR_PW + 1)
      0006CA 50 03            [24] 2551 	jnc	00136$
      0006CC 02 07 57         [24] 2552 	ljmp	00102$
      0006CF                       2553 00136$:
                           00060E  2554 	C$lab4_m.c$169$1$131 ==.
                                   2555 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:169: MOTOR_PW = PW_NUET_DRIVE + 100 + 2* (float)(PW_MAX_DRIVE- PW_NUET_DRIVE)/(55.0 - range);
      0006CF 85 40 82         [24] 2556 	mov	dpl,_range
      0006D2 85 41 83         [24] 2557 	mov	dph,(_range + 1)
      0006D5 12 0F 3B         [24] 2558 	lcall	___uint2fs
      0006D8 AC 82            [24] 2559 	mov	r4,dpl
      0006DA AD 83            [24] 2560 	mov	r5,dph
      0006DC AE F0            [24] 2561 	mov	r6,b
      0006DE FF               [12] 2562 	mov	r7,a
      0006DF C0 04            [24] 2563 	push	ar4
      0006E1 C0 05            [24] 2564 	push	ar5
      0006E3 C0 06            [24] 2565 	push	ar6
      0006E5 C0 07            [24] 2566 	push	ar7
      0006E7 90 00 00         [24] 2567 	mov	dptr,#0x0000
      0006EA 75 F0 5C         [24] 2568 	mov	b,#0x5C
      0006ED 74 42            [12] 2569 	mov	a,#0x42
      0006EF 12 0C 85         [24] 2570 	lcall	___fssub
      0006F2 AC 82            [24] 2571 	mov	r4,dpl
      0006F4 AD 83            [24] 2572 	mov	r5,dph
      0006F6 AE F0            [24] 2573 	mov	r6,b
      0006F8 FF               [12] 2574 	mov	r7,a
      0006F9 E5 81            [12] 2575 	mov	a,sp
      0006FB 24 FC            [12] 2576 	add	a,#0xfc
      0006FD F5 81            [12] 2577 	mov	sp,a
      0006FF C0 04            [24] 2578 	push	ar4
      000701 C0 05            [24] 2579 	push	ar5
      000703 C0 06            [24] 2580 	push	ar6
      000705 C0 07            [24] 2581 	push	ar7
      000707 90 80 00         [24] 2582 	mov	dptr,#0x8000
      00070A 75 F0 B8         [24] 2583 	mov	b,#0xB8
      00070D 74 44            [12] 2584 	mov	a,#0x44
      00070F 12 15 D3         [24] 2585 	lcall	___fsdiv
      000712 AC 82            [24] 2586 	mov	r4,dpl
      000714 AD 83            [24] 2587 	mov	r5,dph
      000716 AE F0            [24] 2588 	mov	r6,b
      000718 FF               [12] 2589 	mov	r7,a
      000719 E5 81            [12] 2590 	mov	a,sp
      00071B 24 FC            [12] 2591 	add	a,#0xfc
      00071D F5 81            [12] 2592 	mov	sp,a
      00071F E4               [12] 2593 	clr	a
      000720 C0 E0            [24] 2594 	push	acc
      000722 74 10            [12] 2595 	mov	a,#0x10
      000724 C0 E0            [24] 2596 	push	acc
      000726 74 33            [12] 2597 	mov	a,#0x33
      000728 C0 E0            [24] 2598 	push	acc
      00072A 74 45            [12] 2599 	mov	a,#0x45
      00072C C0 E0            [24] 2600 	push	acc
      00072E 8C 82            [24] 2601 	mov	dpl,r4
      000730 8D 83            [24] 2602 	mov	dph,r5
      000732 8E F0            [24] 2603 	mov	b,r6
      000734 EF               [12] 2604 	mov	a,r7
      000735 12 0E 99         [24] 2605 	lcall	___fsadd
      000738 AC 82            [24] 2606 	mov	r4,dpl
      00073A AD 83            [24] 2607 	mov	r5,dph
      00073C AE F0            [24] 2608 	mov	r6,b
      00073E FF               [12] 2609 	mov	r7,a
      00073F E5 81            [12] 2610 	mov	a,sp
      000741 24 FC            [12] 2611 	add	a,#0xfc
      000743 F5 81            [12] 2612 	mov	sp,a
      000745 8C 82            [24] 2613 	mov	dpl,r4
      000747 8D 83            [24] 2614 	mov	dph,r5
      000749 8E F0            [24] 2615 	mov	b,r6
      00074B EF               [12] 2616 	mov	a,r7
      00074C 12 0F 47         [24] 2617 	lcall	___fs2uint
      00074F 85 82 42         [24] 2618 	mov	_MOTOR_PW,dpl
      000752 85 83 43         [24] 2619 	mov	(_MOTOR_PW + 1),dph
      000755 80 0E            [24] 2620 	sjmp	00110$
      000757                       2621 00102$:
                           000696  2622 	C$lab4_m.c$173$3$135 ==.
                                   2623 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:173: MOTOR_PW = PW_MAX_DRIVE;
      000757 75 42 AF         [24] 2624 	mov	_MOTOR_PW,#0xAF
      00075A 75 43 0D         [24] 2625 	mov	(_MOTOR_PW + 1),#0x0D
      00075D 80 06            [24] 2626 	sjmp	00110$
      00075F                       2627 00105$:
                           00069E  2628 	C$lab4_m.c$176$2$136 ==.
                                   2629 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:176: else { MOTOR_PW = PW_MAX_DRIVE;}
      00075F 75 42 AF         [24] 2630 	mov	_MOTOR_PW,#0xAF
      000762 75 43 0D         [24] 2631 	mov	(_MOTOR_PW + 1),#0x0D
      000765                       2632 00110$:
                           0006A4  2633 	C$lab4_m.c$180$1$131 ==.
                                   2634 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:180: DRV_lo_to_hi = 0xFFFF - MOTOR_PW;
      000765 74 FF            [12] 2635 	mov	a,#0xFF
      000767 C3               [12] 2636 	clr	c
      000768 95 42            [12] 2637 	subb	a,_MOTOR_PW
      00076A F5 45            [12] 2638 	mov	_DRV_lo_to_hi,a
      00076C 74 FF            [12] 2639 	mov	a,#0xFF
      00076E 95 43            [12] 2640 	subb	a,(_MOTOR_PW + 1)
      000770 F5 46            [12] 2641 	mov	(_DRV_lo_to_hi + 1),a
                           0006B1  2642 	C$lab4_m.c$181$1$131 ==.
                                   2643 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:181: PCA0CP2 = DRV_lo_to_hi;
      000772 85 45 EC         [24] 2644 	mov	((_PCA0CP2 >> 0) & 0xFF),_DRV_lo_to_hi
      000775 85 46 FC         [24] 2645 	mov	((_PCA0CP2 >> 8) & 0xFF),(_DRV_lo_to_hi + 1)
                           0006B7  2646 	C$lab4_m.c$182$1$131 ==.
                           0006B7  2647 	XG$Drive_Motor$0$0 ==.
      000778 22               [24] 2648 	ret
                                   2649 ;------------------------------------------------------------
                                   2650 ;Allocation info for local variables in function 'Read_Ranger'
                                   2651 ;------------------------------------------------------------
                                   2652 ;r_addr                    Allocated to registers 
                                   2653 ;read                      Allocated to registers 
                                   2654 ;------------------------------------------------------------
                           0006B8  2655 	G$Read_Ranger$0$0 ==.
                           0006B8  2656 	C$lab4_m.c$188$1$131 ==.
                                   2657 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:188: unsigned int Read_Ranger(void)
                                   2658 ;	-----------------------------------------
                                   2659 ;	 function Read_Ranger
                                   2660 ;	-----------------------------------------
      000779                       2661 _Read_Ranger:
                           0006B8  2662 	C$lab4_m.c$194$1$138 ==.
                                   2663 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:194: i2c_read_data(r_addr, 2, r_data, 2);
      000779 75 2D 47         [24] 2664 	mov	_i2c_read_data_PARM_3,#_r_data
      00077C 75 2E 00         [24] 2665 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      00077F 75 2F 40         [24] 2666 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      000782 75 2C 02         [24] 2667 	mov	_i2c_read_data_PARM_2,#0x02
      000785 75 30 02         [24] 2668 	mov	_i2c_read_data_PARM_4,#0x02
      000788 75 82 E0         [24] 2669 	mov	dpl,#0xE0
      00078B 12 04 A9         [24] 2670 	lcall	_i2c_read_data
                           0006CD  2671 	C$lab4_m.c$195$1$138 ==.
                                   2672 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:195: read = (((unsigned int) r_data[0] <<8) | r_data[1]);
      00078E AF 47            [24] 2673 	mov	r7,_r_data
      000790 7E 00            [12] 2674 	mov	r6,#0x00
      000792 AC 48            [24] 2675 	mov	r4,(_r_data + 0x0001)
      000794 7D 00            [12] 2676 	mov	r5,#0x00
      000796 EC               [12] 2677 	mov	a,r4
      000797 4E               [12] 2678 	orl	a,r6
      000798 F5 82            [12] 2679 	mov	dpl,a
      00079A ED               [12] 2680 	mov	a,r5
      00079B 4F               [12] 2681 	orl	a,r7
      00079C F5 83            [12] 2682 	mov	dph,a
                           0006DD  2683 	C$lab4_m.c$196$1$138 ==.
                                   2684 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:196: return read;
                           0006DD  2685 	C$lab4_m.c$197$1$138 ==.
                           0006DD  2686 	XG$Read_Ranger$0$0 ==.
      00079E 22               [24] 2687 	ret
                                   2688 ;------------------------------------------------------------
                                   2689 ;Allocation info for local variables in function 'ReadCompass'
                                   2690 ;------------------------------------------------------------
                                   2691 ;Data                      Allocated with name '_ReadCompass_Data_1_140'
                                   2692 ;Crange                    Allocated to registers 
                                   2693 ;addr                      Allocated to registers 
                                   2694 ;------------------------------------------------------------
                           0006DE  2695 	G$ReadCompass$0$0 ==.
                           0006DE  2696 	C$lab4_m.c$203$1$138 ==.
                                   2697 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:203: unsigned int ReadCompass(void)
                                   2698 ;	-----------------------------------------
                                   2699 ;	 function ReadCompass
                                   2700 ;	-----------------------------------------
      00079F                       2701 _ReadCompass:
                           0006DE  2702 	C$lab4_m.c$209$1$140 ==.
                                   2703 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:209: i2c_read_data(addr, 2,Data,2);
      00079F 75 2D 4A         [24] 2704 	mov	_i2c_read_data_PARM_3,#_ReadCompass_Data_1_140
      0007A2 75 2E 00         [24] 2705 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0007A5 75 2F 40         [24] 2706 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0007A8 75 2C 02         [24] 2707 	mov	_i2c_read_data_PARM_2,#0x02
      0007AB 75 30 02         [24] 2708 	mov	_i2c_read_data_PARM_4,#0x02
      0007AE 75 82 C0         [24] 2709 	mov	dpl,#0xC0
      0007B1 12 04 A9         [24] 2710 	lcall	_i2c_read_data
                           0006F3  2711 	C$lab4_m.c$210$1$140 ==.
                                   2712 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:210: Crange = ((unsigned int) Data[0] << 8 | Data[1]);
      0007B4 AF 4A            [24] 2713 	mov	r7,_ReadCompass_Data_1_140
      0007B6 7E 00            [12] 2714 	mov	r6,#0x00
      0007B8 AC 4B            [24] 2715 	mov	r4,(_ReadCompass_Data_1_140 + 0x0001)
      0007BA 7D 00            [12] 2716 	mov	r5,#0x00
      0007BC EC               [12] 2717 	mov	a,r4
      0007BD 4E               [12] 2718 	orl	a,r6
      0007BE F5 82            [12] 2719 	mov	dpl,a
      0007C0 ED               [12] 2720 	mov	a,r5
      0007C1 4F               [12] 2721 	orl	a,r7
      0007C2 F5 83            [12] 2722 	mov	dph,a
                           000703  2723 	C$lab4_m.c$211$1$140 ==.
                                   2724 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:211: return Crange;
                           000703  2725 	C$lab4_m.c$212$1$140 ==.
                           000703  2726 	XG$ReadCompass$0$0 ==.
      0007C4 22               [24] 2727 	ret
                                   2728 ;------------------------------------------------------------
                                   2729 ;Allocation info for local variables in function 'Steering_Servo'
                                   2730 ;------------------------------------------------------------
                                   2731 ;direction                 Allocated with name '_Steering_Servo_direction_1_141'
                                   2732 ;------------------------------------------------------------
                           000704  2733 	G$Steering_Servo$0$0 ==.
                           000704  2734 	C$lab4_m.c$217$1$140 ==.
                                   2735 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:217: void Steering_Servo(unsigned int direction)
                                   2736 ;	-----------------------------------------
                                   2737 ;	 function Steering_Servo
                                   2738 ;	-----------------------------------------
      0007C5                       2739 _Steering_Servo:
      0007C5 85 82 4C         [24] 2740 	mov	_Steering_Servo_direction_1_141,dpl
      0007C8 85 83 4D         [24] 2741 	mov	(_Steering_Servo_direction_1_141 + 1),dph
                           00070A  2742 	C$lab4_m.c$221$1$142 ==.
                                   2743 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:221: if (direction < 1800)
      0007CB C3               [12] 2744 	clr	c
      0007CC E5 4C            [12] 2745 	mov	a,_Steering_Servo_direction_1_141
      0007CE 94 08            [12] 2746 	subb	a,#0x08
      0007D0 E5 4D            [12] 2747 	mov	a,(_Steering_Servo_direction_1_141 + 1)
      0007D2 94 07            [12] 2748 	subb	a,#0x07
      0007D4 40 03            [24] 2749 	jc	00128$
      0007D6 02 08 E2         [24] 2750 	ljmp	00112$
      0007D9                       2751 00128$:
                           000718  2752 	C$lab4_m.c$223$1$142 ==.
                                   2753 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:223: if (STR_PW <= PW_CENTER_STR - (float)(direction)/4.2)
      0007D9 85 4C 82         [24] 2754 	mov	dpl,_Steering_Servo_direction_1_141
      0007DC 85 4D 83         [24] 2755 	mov	dph,(_Steering_Servo_direction_1_141 + 1)
      0007DF 12 0F 3B         [24] 2756 	lcall	___uint2fs
      0007E2 AA 82            [24] 2757 	mov	r2,dpl
      0007E4 AB 83            [24] 2758 	mov	r3,dph
      0007E6 AC F0            [24] 2759 	mov	r4,b
      0007E8 FD               [12] 2760 	mov	r5,a
      0007E9 74 66            [12] 2761 	mov	a,#0x66
      0007EB C0 E0            [24] 2762 	push	acc
      0007ED C0 E0            [24] 2763 	push	acc
      0007EF 74 86            [12] 2764 	mov	a,#0x86
      0007F1 C0 E0            [24] 2765 	push	acc
      0007F3 74 40            [12] 2766 	mov	a,#0x40
      0007F5 C0 E0            [24] 2767 	push	acc
      0007F7 8A 82            [24] 2768 	mov	dpl,r2
      0007F9 8B 83            [24] 2769 	mov	dph,r3
      0007FB 8C F0            [24] 2770 	mov	b,r4
      0007FD ED               [12] 2771 	mov	a,r5
      0007FE 12 15 D3         [24] 2772 	lcall	___fsdiv
      000801 AA 82            [24] 2773 	mov	r2,dpl
      000803 AB 83            [24] 2774 	mov	r3,dph
      000805 AC F0            [24] 2775 	mov	r4,b
      000807 FD               [12] 2776 	mov	r5,a
      000808 E5 81            [12] 2777 	mov	a,sp
      00080A 24 FC            [12] 2778 	add	a,#0xfc
      00080C F5 81            [12] 2779 	mov	sp,a
      00080E C0 02            [24] 2780 	push	ar2
      000810 C0 03            [24] 2781 	push	ar3
      000812 C0 04            [24] 2782 	push	ar4
      000814 C0 05            [24] 2783 	push	ar5
      000816 90 90 00         [24] 2784 	mov	dptr,#0x9000
      000819 75 F0 30         [24] 2785 	mov	b,#0x30
      00081C 74 45            [12] 2786 	mov	a,#0x45
      00081E 12 0C 85         [24] 2787 	lcall	___fssub
      000821 AA 82            [24] 2788 	mov	r2,dpl
      000823 AB 83            [24] 2789 	mov	r3,dph
      000825 AC F0            [24] 2790 	mov	r4,b
      000827 FD               [12] 2791 	mov	r5,a
      000828 E5 81            [12] 2792 	mov	a,sp
      00082A 24 FC            [12] 2793 	add	a,#0xfc
      00082C F5 81            [12] 2794 	mov	sp,a
      00082E 85 34 82         [24] 2795 	mov	dpl,_STR_PW
      000831 85 35 83         [24] 2796 	mov	dph,(_STR_PW + 1)
      000834 C0 05            [24] 2797 	push	ar5
      000836 C0 04            [24] 2798 	push	ar4
      000838 C0 03            [24] 2799 	push	ar3
      00083A C0 02            [24] 2800 	push	ar2
      00083C 12 0F 3B         [24] 2801 	lcall	___uint2fs
      00083F A8 82            [24] 2802 	mov	r0,dpl
      000841 A9 83            [24] 2803 	mov	r1,dph
      000843 AE F0            [24] 2804 	mov	r6,b
      000845 FF               [12] 2805 	mov	r7,a
      000846 D0 02            [24] 2806 	pop	ar2
      000848 D0 03            [24] 2807 	pop	ar3
      00084A D0 04            [24] 2808 	pop	ar4
      00084C D0 05            [24] 2809 	pop	ar5
      00084E C0 02            [24] 2810 	push	ar2
      000850 C0 03            [24] 2811 	push	ar3
      000852 C0 04            [24] 2812 	push	ar4
      000854 C0 05            [24] 2813 	push	ar5
      000856 88 82            [24] 2814 	mov	dpl,r0
      000858 89 83            [24] 2815 	mov	dph,r1
      00085A 8E F0            [24] 2816 	mov	b,r6
      00085C EF               [12] 2817 	mov	a,r7
      00085D 12 0C B9         [24] 2818 	lcall	___fsgt
      000860 AF 82            [24] 2819 	mov	r7,dpl
      000862 E5 81            [12] 2820 	mov	a,sp
      000864 24 FC            [12] 2821 	add	a,#0xfc
      000866 F5 81            [12] 2822 	mov	sp,a
      000868 EF               [12] 2823 	mov	a,r7
      000869 70 68            [24] 2824 	jnz	00102$
                           0007AA  2825 	C$lab4_m.c$225$1$142 ==.
                                   2826 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:225: STR_PW = PW_CENTER_STR - (float)(direction)/4.2;
      00086B 85 4C 82         [24] 2827 	mov	dpl,_Steering_Servo_direction_1_141
      00086E 85 4D 83         [24] 2828 	mov	dph,(_Steering_Servo_direction_1_141 + 1)
      000871 12 0F 3B         [24] 2829 	lcall	___uint2fs
      000874 AC 82            [24] 2830 	mov	r4,dpl
      000876 AD 83            [24] 2831 	mov	r5,dph
      000878 AE F0            [24] 2832 	mov	r6,b
      00087A FF               [12] 2833 	mov	r7,a
      00087B 74 66            [12] 2834 	mov	a,#0x66
      00087D C0 E0            [24] 2835 	push	acc
      00087F C0 E0            [24] 2836 	push	acc
      000881 74 86            [12] 2837 	mov	a,#0x86
      000883 C0 E0            [24] 2838 	push	acc
      000885 74 40            [12] 2839 	mov	a,#0x40
      000887 C0 E0            [24] 2840 	push	acc
      000889 8C 82            [24] 2841 	mov	dpl,r4
      00088B 8D 83            [24] 2842 	mov	dph,r5
      00088D 8E F0            [24] 2843 	mov	b,r6
      00088F EF               [12] 2844 	mov	a,r7
      000890 12 15 D3         [24] 2845 	lcall	___fsdiv
      000893 AC 82            [24] 2846 	mov	r4,dpl
      000895 AD 83            [24] 2847 	mov	r5,dph
      000897 AE F0            [24] 2848 	mov	r6,b
      000899 FF               [12] 2849 	mov	r7,a
      00089A E5 81            [12] 2850 	mov	a,sp
      00089C 24 FC            [12] 2851 	add	a,#0xfc
      00089E F5 81            [12] 2852 	mov	sp,a
      0008A0 C0 04            [24] 2853 	push	ar4
      0008A2 C0 05            [24] 2854 	push	ar5
      0008A4 C0 06            [24] 2855 	push	ar6
      0008A6 C0 07            [24] 2856 	push	ar7
      0008A8 90 90 00         [24] 2857 	mov	dptr,#0x9000
      0008AB 75 F0 30         [24] 2858 	mov	b,#0x30
      0008AE 74 45            [12] 2859 	mov	a,#0x45
      0008B0 12 0C 85         [24] 2860 	lcall	___fssub
      0008B3 AC 82            [24] 2861 	mov	r4,dpl
      0008B5 AD 83            [24] 2862 	mov	r5,dph
      0008B7 AE F0            [24] 2863 	mov	r6,b
      0008B9 FF               [12] 2864 	mov	r7,a
      0008BA E5 81            [12] 2865 	mov	a,sp
      0008BC 24 FC            [12] 2866 	add	a,#0xfc
      0008BE F5 81            [12] 2867 	mov	sp,a
      0008C0 8C 82            [24] 2868 	mov	dpl,r4
      0008C2 8D 83            [24] 2869 	mov	dph,r5
      0008C4 8E F0            [24] 2870 	mov	b,r6
      0008C6 EF               [12] 2871 	mov	a,r7
      0008C7 12 0F 47         [24] 2872 	lcall	___fs2uint
      0008CA 85 82 34         [24] 2873 	mov	_STR_PW,dpl
      0008CD 85 83 35         [24] 2874 	mov	(_STR_PW + 1),dph
      0008D0 02 0A 17         [24] 2875 	ljmp	00113$
      0008D3                       2876 00102$:
                           000812  2877 	C$lab4_m.c$229$3$145 ==.
                                   2878 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:229: STR_PW -= 10;
      0008D3 E5 34            [12] 2879 	mov	a,_STR_PW
      0008D5 24 F6            [12] 2880 	add	a,#0xF6
      0008D7 F5 34            [12] 2881 	mov	_STR_PW,a
      0008D9 E5 35            [12] 2882 	mov	a,(_STR_PW + 1)
      0008DB 34 FF            [12] 2883 	addc	a,#0xFF
      0008DD F5 35            [12] 2884 	mov	(_STR_PW + 1),a
      0008DF 02 0A 17         [24] 2885 	ljmp	00113$
      0008E2                       2886 00112$:
                           000821  2887 	C$lab4_m.c$232$1$142 ==.
                                   2888 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:232: else if ( direction == 0 || direction ==3600)
      0008E2 E5 4C            [12] 2889 	mov	a,_Steering_Servo_direction_1_141
      0008E4 45 4D            [12] 2890 	orl	a,(_Steering_Servo_direction_1_141 + 1)
      0008E6 60 0A            [24] 2891 	jz	00107$
      0008E8 74 10            [12] 2892 	mov	a,#0x10
      0008EA B5 4C 0E         [24] 2893 	cjne	a,_Steering_Servo_direction_1_141,00108$
      0008ED 74 0E            [12] 2894 	mov	a,#0x0E
      0008EF B5 4D 09         [24] 2895 	cjne	a,(_Steering_Servo_direction_1_141 + 1),00108$
      0008F2                       2896 00107$:
                           000831  2897 	C$lab4_m.c$234$2$146 ==.
                                   2898 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:234: STR_PW=PW_CENTER_STR;
      0008F2 75 34 09         [24] 2899 	mov	_STR_PW,#0x09
      0008F5 75 35 0B         [24] 2900 	mov	(_STR_PW + 1),#0x0B
      0008F8 02 0A 17         [24] 2901 	ljmp	00113$
      0008FB                       2902 00108$:
                           00083A  2903 	C$lab4_m.c$238$2$147 ==.
                                   2904 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:238: if (STR_PW >= PW_CENTER_STR + (float)(3600-direction)/1.9)
      0008FB 74 10            [12] 2905 	mov	a,#0x10
      0008FD C3               [12] 2906 	clr	c
      0008FE 95 4C            [12] 2907 	subb	a,_Steering_Servo_direction_1_141
      000900 F5 82            [12] 2908 	mov	dpl,a
      000902 74 0E            [12] 2909 	mov	a,#0x0E
      000904 95 4D            [12] 2910 	subb	a,(_Steering_Servo_direction_1_141 + 1)
      000906 F5 83            [12] 2911 	mov	dph,a
      000908 12 0F 3B         [24] 2912 	lcall	___uint2fs
      00090B AC 82            [24] 2913 	mov	r4,dpl
      00090D AD 83            [24] 2914 	mov	r5,dph
      00090F AE F0            [24] 2915 	mov	r6,b
      000911 FF               [12] 2916 	mov	r7,a
      000912 74 33            [12] 2917 	mov	a,#0x33
      000914 C0 E0            [24] 2918 	push	acc
      000916 C0 E0            [24] 2919 	push	acc
      000918 74 F3            [12] 2920 	mov	a,#0xF3
      00091A C0 E0            [24] 2921 	push	acc
      00091C C4               [12] 2922 	swap	a
      00091D C0 E0            [24] 2923 	push	acc
      00091F 8C 82            [24] 2924 	mov	dpl,r4
      000921 8D 83            [24] 2925 	mov	dph,r5
      000923 8E F0            [24] 2926 	mov	b,r6
      000925 EF               [12] 2927 	mov	a,r7
      000926 12 15 D3         [24] 2928 	lcall	___fsdiv
      000929 AC 82            [24] 2929 	mov	r4,dpl
      00092B AD 83            [24] 2930 	mov	r5,dph
      00092D AE F0            [24] 2931 	mov	r6,b
      00092F FF               [12] 2932 	mov	r7,a
      000930 E5 81            [12] 2933 	mov	a,sp
      000932 24 FC            [12] 2934 	add	a,#0xfc
      000934 F5 81            [12] 2935 	mov	sp,a
      000936 E4               [12] 2936 	clr	a
      000937 C0 E0            [24] 2937 	push	acc
      000939 74 90            [12] 2938 	mov	a,#0x90
      00093B C0 E0            [24] 2939 	push	acc
      00093D 74 30            [12] 2940 	mov	a,#0x30
      00093F C0 E0            [24] 2941 	push	acc
      000941 74 45            [12] 2942 	mov	a,#0x45
      000943 C0 E0            [24] 2943 	push	acc
      000945 8C 82            [24] 2944 	mov	dpl,r4
      000947 8D 83            [24] 2945 	mov	dph,r5
      000949 8E F0            [24] 2946 	mov	b,r6
      00094B EF               [12] 2947 	mov	a,r7
      00094C 12 0E 99         [24] 2948 	lcall	___fsadd
      00094F AC 82            [24] 2949 	mov	r4,dpl
      000951 AD 83            [24] 2950 	mov	r5,dph
      000953 AE F0            [24] 2951 	mov	r6,b
      000955 FF               [12] 2952 	mov	r7,a
      000956 E5 81            [12] 2953 	mov	a,sp
      000958 24 FC            [12] 2954 	add	a,#0xfc
      00095A F5 81            [12] 2955 	mov	sp,a
      00095C 85 34 82         [24] 2956 	mov	dpl,_STR_PW
      00095F 85 35 83         [24] 2957 	mov	dph,(_STR_PW + 1)
      000962 C0 07            [24] 2958 	push	ar7
      000964 C0 06            [24] 2959 	push	ar6
      000966 C0 05            [24] 2960 	push	ar5
      000968 C0 04            [24] 2961 	push	ar4
      00096A 12 0F 3B         [24] 2962 	lcall	___uint2fs
      00096D A8 82            [24] 2963 	mov	r0,dpl
      00096F A9 83            [24] 2964 	mov	r1,dph
      000971 AA F0            [24] 2965 	mov	r2,b
      000973 FB               [12] 2966 	mov	r3,a
      000974 D0 04            [24] 2967 	pop	ar4
      000976 D0 05            [24] 2968 	pop	ar5
      000978 D0 06            [24] 2969 	pop	ar6
      00097A D0 07            [24] 2970 	pop	ar7
      00097C C0 04            [24] 2971 	push	ar4
      00097E C0 05            [24] 2972 	push	ar5
      000980 C0 06            [24] 2973 	push	ar6
      000982 C0 07            [24] 2974 	push	ar7
      000984 88 82            [24] 2975 	mov	dpl,r0
      000986 89 83            [24] 2976 	mov	dph,r1
      000988 8A F0            [24] 2977 	mov	b,r2
      00098A EB               [12] 2978 	mov	a,r3
      00098B 12 0D 04         [24] 2979 	lcall	___fslt
      00098E AF 82            [24] 2980 	mov	r7,dpl
      000990 E5 81            [12] 2981 	mov	a,sp
      000992 24 FC            [12] 2982 	add	a,#0xfc
      000994 F5 81            [12] 2983 	mov	sp,a
      000996 EF               [12] 2984 	mov	a,r7
      000997 70 73            [24] 2985 	jnz	00105$
                           0008D8  2986 	C$lab4_m.c$240$3$148 ==.
                                   2987 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:240: STR_PW = PW_CENTER_STR + (float)(3600-direction)/1.9;
      000999 74 10            [12] 2988 	mov	a,#0x10
      00099B C3               [12] 2989 	clr	c
      00099C 95 4C            [12] 2990 	subb	a,_Steering_Servo_direction_1_141
      00099E F5 82            [12] 2991 	mov	dpl,a
      0009A0 74 0E            [12] 2992 	mov	a,#0x0E
      0009A2 95 4D            [12] 2993 	subb	a,(_Steering_Servo_direction_1_141 + 1)
      0009A4 F5 83            [12] 2994 	mov	dph,a
      0009A6 12 0F 3B         [24] 2995 	lcall	___uint2fs
      0009A9 AC 82            [24] 2996 	mov	r4,dpl
      0009AB AD 83            [24] 2997 	mov	r5,dph
      0009AD AE F0            [24] 2998 	mov	r6,b
      0009AF FF               [12] 2999 	mov	r7,a
      0009B0 74 33            [12] 3000 	mov	a,#0x33
      0009B2 C0 E0            [24] 3001 	push	acc
      0009B4 C0 E0            [24] 3002 	push	acc
      0009B6 74 F3            [12] 3003 	mov	a,#0xF3
      0009B8 C0 E0            [24] 3004 	push	acc
      0009BA C4               [12] 3005 	swap	a
      0009BB C0 E0            [24] 3006 	push	acc
      0009BD 8C 82            [24] 3007 	mov	dpl,r4
      0009BF 8D 83            [24] 3008 	mov	dph,r5
      0009C1 8E F0            [24] 3009 	mov	b,r6
      0009C3 EF               [12] 3010 	mov	a,r7
      0009C4 12 15 D3         [24] 3011 	lcall	___fsdiv
      0009C7 AC 82            [24] 3012 	mov	r4,dpl
      0009C9 AD 83            [24] 3013 	mov	r5,dph
      0009CB AE F0            [24] 3014 	mov	r6,b
      0009CD FF               [12] 3015 	mov	r7,a
      0009CE E5 81            [12] 3016 	mov	a,sp
      0009D0 24 FC            [12] 3017 	add	a,#0xfc
      0009D2 F5 81            [12] 3018 	mov	sp,a
      0009D4 E4               [12] 3019 	clr	a
      0009D5 C0 E0            [24] 3020 	push	acc
      0009D7 74 90            [12] 3021 	mov	a,#0x90
      0009D9 C0 E0            [24] 3022 	push	acc
      0009DB 74 30            [12] 3023 	mov	a,#0x30
      0009DD C0 E0            [24] 3024 	push	acc
      0009DF 74 45            [12] 3025 	mov	a,#0x45
      0009E1 C0 E0            [24] 3026 	push	acc
      0009E3 8C 82            [24] 3027 	mov	dpl,r4
      0009E5 8D 83            [24] 3028 	mov	dph,r5
      0009E7 8E F0            [24] 3029 	mov	b,r6
      0009E9 EF               [12] 3030 	mov	a,r7
      0009EA 12 0E 99         [24] 3031 	lcall	___fsadd
      0009ED AC 82            [24] 3032 	mov	r4,dpl
      0009EF AD 83            [24] 3033 	mov	r5,dph
      0009F1 AE F0            [24] 3034 	mov	r6,b
      0009F3 FF               [12] 3035 	mov	r7,a
      0009F4 E5 81            [12] 3036 	mov	a,sp
      0009F6 24 FC            [12] 3037 	add	a,#0xfc
      0009F8 F5 81            [12] 3038 	mov	sp,a
      0009FA 8C 82            [24] 3039 	mov	dpl,r4
      0009FC 8D 83            [24] 3040 	mov	dph,r5
      0009FE 8E F0            [24] 3041 	mov	b,r6
      000A00 EF               [12] 3042 	mov	a,r7
      000A01 12 0F 47         [24] 3043 	lcall	___fs2uint
      000A04 85 82 34         [24] 3044 	mov	_STR_PW,dpl
      000A07 85 83 35         [24] 3045 	mov	(_STR_PW + 1),dph
      000A0A 80 0B            [24] 3046 	sjmp	00113$
      000A0C                       3047 00105$:
                           00094B  3048 	C$lab4_m.c$244$3$149 ==.
                                   3049 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:244: STR_PW += 10;
      000A0C 74 0A            [12] 3050 	mov	a,#0x0A
      000A0E 25 34            [12] 3051 	add	a,_STR_PW
      000A10 F5 34            [12] 3052 	mov	_STR_PW,a
      000A12 E4               [12] 3053 	clr	a
      000A13 35 35            [12] 3054 	addc	a,(_STR_PW + 1)
      000A15 F5 35            [12] 3055 	mov	(_STR_PW + 1),a
      000A17                       3056 00113$:
                           000956  3057 	C$lab4_m.c$250$1$142 ==.
                                   3058 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:250: STR_lo_to_hi= 0xFFFF - STR_PW;
      000A17 74 FF            [12] 3059 	mov	a,#0xFF
      000A19 C3               [12] 3060 	clr	c
      000A1A 95 34            [12] 3061 	subb	a,_STR_PW
      000A1C F5 32            [12] 3062 	mov	_STR_lo_to_hi,a
      000A1E 74 FF            [12] 3063 	mov	a,#0xFF
      000A20 95 35            [12] 3064 	subb	a,(_STR_PW + 1)
      000A22 F5 33            [12] 3065 	mov	(_STR_lo_to_hi + 1),a
                           000963  3066 	C$lab4_m.c$251$1$142 ==.
                                   3067 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:251: PCA0CP0 = STR_lo_to_hi;
      000A24 85 32 EA         [24] 3068 	mov	((_PCA0CP0 >> 0) & 0xFF),_STR_lo_to_hi
      000A27 85 33 FA         [24] 3069 	mov	((_PCA0CP0 >> 8) & 0xFF),(_STR_lo_to_hi + 1)
                           000969  3070 	C$lab4_m.c$252$1$142 ==.
                           000969  3071 	XG$Steering_Servo$0$0 ==.
      000A2A 22               [24] 3072 	ret
                                   3073 ;------------------------------------------------------------
                                   3074 ;Allocation info for local variables in function 'Port_Init'
                                   3075 ;------------------------------------------------------------
                           00096A  3076 	G$Port_Init$0$0 ==.
                           00096A  3077 	C$lab4_m.c$260$1$142 ==.
                                   3078 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:260: void Port_Init()
                                   3079 ;	-----------------------------------------
                                   3080 ;	 function Port_Init
                                   3081 ;	-----------------------------------------
      000A2B                       3082 _Port_Init:
                           00096A  3083 	C$lab4_m.c$264$1$150 ==.
                                   3084 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:264: P0MDOUT &= ~0x32;
      000A2B AF A4            [24] 3085 	mov	r7,_P0MDOUT
      000A2D 74 CD            [12] 3086 	mov	a,#0xCD
      000A2F 5F               [12] 3087 	anl	a,r7
      000A30 F5 A4            [12] 3088 	mov	_P0MDOUT,a
                           000971  3089 	C$lab4_m.c$266$1$150 ==.
                                   3090 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:266: P1MDIN &= ~0x10;
      000A32 AF BD            [24] 3091 	mov	r7,_P1MDIN
      000A34 74 EF            [12] 3092 	mov	a,#0xEF
      000A36 5F               [12] 3093 	anl	a,r7
      000A37 F5 BD            [12] 3094 	mov	_P1MDIN,a
                           000978  3095 	C$lab4_m.c$268$1$150 ==.
                                   3096 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:268: P1MDOUT |= 0x0F;  //set output pin for CEX0 and CEX2 in push-pull mode
      000A39 43 A5 0F         [24] 3097 	orl	_P1MDOUT,#0x0F
                           00097B  3098 	C$lab4_m.c$269$1$150 ==.
                                   3099 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:269: P1MDOUT &= 0x10;
      000A3C 53 A5 10         [24] 3100 	anl	_P1MDOUT,#0x10
                           00097E  3101 	C$lab4_m.c$271$1$150 ==.
                                   3102 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:271: P1 		 = 0x10;
      000A3F 75 90 10         [24] 3103 	mov	_P1,#0x10
                           000981  3104 	C$lab4_m.c$273$1$150 ==.
                                   3105 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:273: P3MDOUT &= ~0x80;
      000A42 AF A7            [24] 3106 	mov	r7,_P3MDOUT
      000A44 74 7F            [12] 3107 	mov	a,#0x7F
      000A46 5F               [12] 3108 	anl	a,r7
      000A47 F5 A7            [12] 3109 	mov	_P3MDOUT,a
                           000988  3110 	C$lab4_m.c$274$1$150 ==.
                                   3111 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:274: P3 = 0x80;
      000A49 75 B0 80         [24] 3112 	mov	_P3,#0x80
                           00098B  3113 	C$lab4_m.c$275$1$150 ==.
                           00098B  3114 	XG$Port_Init$0$0 ==.
      000A4C 22               [24] 3115 	ret
                                   3116 ;------------------------------------------------------------
                                   3117 ;Allocation info for local variables in function 'XBR0_Init'
                                   3118 ;------------------------------------------------------------
                           00098C  3119 	G$XBR0_Init$0$0 ==.
                           00098C  3120 	C$lab4_m.c$280$1$150 ==.
                                   3121 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:280: void XBR0_Init()
                                   3122 ;	-----------------------------------------
                                   3123 ;	 function XBR0_Init
                                   3124 ;	-----------------------------------------
      000A4D                       3125 _XBR0_Init:
                           00098C  3126 	C$lab4_m.c$282$1$151 ==.
                                   3127 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:282: XBR0  = 0x27;  //configure crossbar as directed in the laboratory
      000A4D 75 E1 27         [24] 3128 	mov	_XBR0,#0x27
                           00098F  3129 	C$lab4_m.c$283$1$151 ==.
                           00098F  3130 	XG$XBR0_Init$0$0 ==.
      000A50 22               [24] 3131 	ret
                                   3132 ;------------------------------------------------------------
                                   3133 ;Allocation info for local variables in function 'SMB_Init'
                                   3134 ;------------------------------------------------------------
                           000990  3135 	G$SMB_Init$0$0 ==.
                           000990  3136 	C$lab4_m.c$288$1$151 ==.
                                   3137 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:288: void SMB_Init(void)
                                   3138 ;	-----------------------------------------
                                   3139 ;	 function SMB_Init
                                   3140 ;	-----------------------------------------
      000A51                       3141 _SMB_Init:
                           000990  3142 	C$lab4_m.c$290$1$153 ==.
                                   3143 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:290: SMB0CR =0x93;
      000A51 75 CF 93         [24] 3144 	mov	_SMB0CR,#0x93
                           000993  3145 	C$lab4_m.c$291$1$153 ==.
                                   3146 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:291: ENSMB =1;
      000A54 D2 C6            [12] 3147 	setb	_ENSMB
                           000995  3148 	C$lab4_m.c$292$1$153 ==.
                           000995  3149 	XG$SMB_Init$0$0 ==.
      000A56 22               [24] 3150 	ret
                                   3151 ;------------------------------------------------------------
                                   3152 ;Allocation info for local variables in function 'PCA_Init'
                                   3153 ;------------------------------------------------------------
                           000996  3154 	G$PCA_Init$0$0 ==.
                           000996  3155 	C$lab4_m.c$297$1$153 ==.
                                   3156 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:297: void PCA_Init(void)
                                   3157 ;	-----------------------------------------
                                   3158 ;	 function PCA_Init
                                   3159 ;	-----------------------------------------
      000A57                       3160 _PCA_Init:
                           000996  3161 	C$lab4_m.c$299$1$155 ==.
                                   3162 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:299: PCA0MD = 0x81;
      000A57 75 D9 81         [24] 3163 	mov	_PCA0MD,#0x81
                           000999  3164 	C$lab4_m.c$300$1$155 ==.
                                   3165 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:300: PCA0CPM0 = 0xC2;    //CCM0 in 16-bit compare mode
      000A5A 75 DA C2         [24] 3166 	mov	_PCA0CPM0,#0xC2
                           00099C  3167 	C$lab4_m.c$301$1$155 ==.
                                   3168 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:301: PCA0CPM2 = 0xC2;
      000A5D 75 DC C2         [24] 3169 	mov	_PCA0CPM2,#0xC2
                           00099F  3170 	C$lab4_m.c$302$1$155 ==.
                                   3171 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:302: PCA0CN 	= 0x40;      //Enable PCA counter
      000A60 75 D8 40         [24] 3172 	mov	_PCA0CN,#0x40
                           0009A2  3173 	C$lab4_m.c$303$1$155 ==.
                                   3174 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:303: EIE1 |= 0x08;       //Enable PCA interrupt
      000A63 43 E6 08         [24] 3175 	orl	_EIE1,#0x08
                           0009A5  3176 	C$lab4_m.c$304$1$155 ==.
                                   3177 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:304: EA = 1;             //Enable global interrupts
      000A66 D2 AF            [12] 3178 	setb	_EA
                           0009A7  3179 	C$lab4_m.c$305$1$155 ==.
                           0009A7  3180 	XG$PCA_Init$0$0 ==.
      000A68 22               [24] 3181 	ret
                                   3182 ;------------------------------------------------------------
                                   3183 ;Allocation info for local variables in function 'PCA_ISR'
                                   3184 ;------------------------------------------------------------
                           0009A8  3185 	G$PCA_ISR$0$0 ==.
                           0009A8  3186 	C$lab4_m.c$311$1$155 ==.
                                   3187 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:311: void PCA_ISR ( void ) __interrupt 9
                                   3188 ;	-----------------------------------------
                                   3189 ;	 function PCA_ISR
                                   3190 ;	-----------------------------------------
      000A69                       3191 _PCA_ISR:
      000A69 C0 E0            [24] 3192 	push	acc
      000A6B C0 D0            [24] 3193 	push	psw
                           0009AC  3194 	C$lab4_m.c$314$1$157 ==.
                                   3195 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:314: if (CF)
                           0009AC  3196 	C$lab4_m.c$316$2$158 ==.
                                   3197 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:316: CF =0;
      000A6D 10 DF 02         [24] 3198 	jbc	_CF,00108$
      000A70 80 0E            [24] 3199 	sjmp	00102$
      000A72                       3200 00108$:
                           0009B1  3201 	C$lab4_m.c$317$2$158 ==.
                                   3202 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:317: PCA0 = PCA_START;
      000A72 75 E9 00         [24] 3203 	mov	((_PCA0 >> 0) & 0xFF),#0x00
      000A75 75 F9 70         [24] 3204 	mov	((_PCA0 >> 8) & 0xFF),#0x70
                           0009B7  3205 	C$lab4_m.c$318$2$158 ==.
                                   3206 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:318: count++;
      000A78 05 36            [12] 3207 	inc	_count
      000A7A E4               [12] 3208 	clr	a
      000A7B B5 36 02         [24] 3209 	cjne	a,_count,00109$
      000A7E 05 37            [12] 3210 	inc	(_count + 1)
      000A80                       3211 00109$:
      000A80                       3212 00102$:
                           0009BF  3213 	C$lab4_m.c$323$1$157 ==.
                                   3214 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:323: PCA0CN &= 0xC0;
      000A80 53 D8 C0         [24] 3215 	anl	_PCA0CN,#0xC0
      000A83 D0 D0            [24] 3216 	pop	psw
      000A85 D0 E0            [24] 3217 	pop	acc
                           0009C6  3218 	C$lab4_m.c$324$1$157 ==.
                           0009C6  3219 	XG$PCA_ISR$0$0 ==.
      000A87 32               [24] 3220 	reti
                                   3221 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   3222 ;	eliminated unneeded push/pop dpl
                                   3223 ;	eliminated unneeded push/pop dph
                                   3224 ;	eliminated unneeded push/pop b
                                   3225 ;------------------------------------------------------------
                                   3226 ;Allocation info for local variables in function 'direction'
                                   3227 ;------------------------------------------------------------
                                   3228 ;value                     Allocated to registers r6 r7 
                                   3229 ;------------------------------------------------------------
                           0009C7  3230 	G$direction$0$0 ==.
                           0009C7  3231 	C$lab4_m.c$332$1$157 ==.
                                   3232 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:332: unsigned int direction(void)
                                   3233 ;	-----------------------------------------
                                   3234 ;	 function direction
                                   3235 ;	-----------------------------------------
      000A88                       3236 _direction:
                           0009C7  3237 	C$lab4_m.c$335$1$160 ==.
                                   3238 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:335: count =0;
      000A88 E4               [12] 3239 	clr	a
      000A89 F5 36            [12] 3240 	mov	_count,a
      000A8B F5 37            [12] 3241 	mov	(_count + 1),a
                           0009CC  3242 	C$lab4_m.c$336$1$160 ==.
                                   3243 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:336: while (count < 1);
      000A8D                       3244 00101$:
      000A8D C3               [12] 3245 	clr	c
      000A8E E5 36            [12] 3246 	mov	a,_count
      000A90 94 01            [12] 3247 	subb	a,#0x01
      000A92 E5 37            [12] 3248 	mov	a,(_count + 1)
      000A94 94 00            [12] 3249 	subb	a,#0x00
      000A96 40 F5            [24] 3250 	jc	00101$
                           0009D7  3251 	C$lab4_m.c$337$1$160 ==.
                                   3252 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:337: lcd_clear();
      000A98 12 01 A2         [24] 3253 	lcall	_lcd_clear
                           0009DA  3254 	C$lab4_m.c$338$1$160 ==.
                                   3255 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:338: lcd_print("Calibration:\nHello world!\n012_345_678:\nabc def ghij");
      000A9B 74 5F            [12] 3256 	mov	a,#___str_6
      000A9D C0 E0            [24] 3257 	push	acc
      000A9F 74 18            [12] 3258 	mov	a,#(___str_6 >> 8)
      000AA1 C0 E0            [24] 3259 	push	acc
      000AA3 74 80            [12] 3260 	mov	a,#0x80
      000AA5 C0 E0            [24] 3261 	push	acc
      000AA7 12 01 1D         [24] 3262 	lcall	_lcd_print
      000AAA 15 81            [12] 3263 	dec	sp
      000AAC 15 81            [12] 3264 	dec	sp
      000AAE 15 81            [12] 3265 	dec	sp
                           0009EF  3266 	C$lab4_m.c$339$1$160 ==.
                                   3267 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:339: start();
      000AB0 12 0B 12         [24] 3268 	lcall	_start
                           0009F2  3269 	C$lab4_m.c$340$1$160 ==.
                                   3270 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:340: lcd_clear();
      000AB3 12 01 A2         [24] 3271 	lcall	_lcd_clear
                           0009F5  3272 	C$lab4_m.c$341$1$160 ==.
                                   3273 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:341: value = kpd_input(0);
      000AB6 75 82 00         [24] 3274 	mov	dpl,#0x00
      000AB9 12 02 5A         [24] 3275 	lcall	_kpd_input
      000ABC AE 82            [24] 3276 	mov	r6,dpl
      000ABE AF 83            [24] 3277 	mov	r7,dph
                           0009FF  3278 	C$lab4_m.c$342$1$160 ==.
                                   3279 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:342: lcd_clear();
      000AC0 C0 07            [24] 3280 	push	ar7
      000AC2 C0 06            [24] 3281 	push	ar6
      000AC4 12 01 A2         [24] 3282 	lcall	_lcd_clear
      000AC7 D0 06            [24] 3283 	pop	ar6
      000AC9 D0 07            [24] 3284 	pop	ar7
                           000A0A  3285 	C$lab4_m.c$343$1$160 ==.
                                   3286 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:343: lcd_print("\r\nThe desired direction is: %d", value);
      000ACB C0 07            [24] 3287 	push	ar7
      000ACD C0 06            [24] 3288 	push	ar6
      000ACF C0 06            [24] 3289 	push	ar6
      000AD1 C0 07            [24] 3290 	push	ar7
      000AD3 74 93            [12] 3291 	mov	a,#___str_7
      000AD5 C0 E0            [24] 3292 	push	acc
      000AD7 74 18            [12] 3293 	mov	a,#(___str_7 >> 8)
      000AD9 C0 E0            [24] 3294 	push	acc
      000ADB 74 80            [12] 3295 	mov	a,#0x80
      000ADD C0 E0            [24] 3296 	push	acc
      000ADF 12 01 1D         [24] 3297 	lcall	_lcd_print
      000AE2 E5 81            [12] 3298 	mov	a,sp
      000AE4 24 FB            [12] 3299 	add	a,#0xfb
      000AE6 F5 81            [12] 3300 	mov	sp,a
      000AE8 D0 06            [24] 3301 	pop	ar6
      000AEA D0 07            [24] 3302 	pop	ar7
                           000A2B  3303 	C$lab4_m.c$344$1$160 ==.
                                   3304 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:344: printf("\r\nThe desired direction is: %d", value);
      000AEC C0 07            [24] 3305 	push	ar7
      000AEE C0 06            [24] 3306 	push	ar6
      000AF0 C0 06            [24] 3307 	push	ar6
      000AF2 C0 07            [24] 3308 	push	ar7
      000AF4 74 93            [12] 3309 	mov	a,#___str_7
      000AF6 C0 E0            [24] 3310 	push	acc
      000AF8 74 18            [12] 3311 	mov	a,#(___str_7 >> 8)
      000AFA C0 E0            [24] 3312 	push	acc
      000AFC 74 80            [12] 3313 	mov	a,#0x80
      000AFE C0 E0            [24] 3314 	push	acc
      000B00 12 0F C5         [24] 3315 	lcall	_printf
      000B03 E5 81            [12] 3316 	mov	a,sp
      000B05 24 FB            [12] 3317 	add	a,#0xfb
      000B07 F5 81            [12] 3318 	mov	sp,a
      000B09 D0 06            [24] 3319 	pop	ar6
      000B0B D0 07            [24] 3320 	pop	ar7
                           000A4C  3321 	C$lab4_m.c$346$1$160 ==.
                                   3322 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:346: return value;
      000B0D 8E 82            [24] 3323 	mov	dpl,r6
      000B0F 8F 83            [24] 3324 	mov	dph,r7
                           000A50  3325 	C$lab4_m.c$348$1$160 ==.
                           000A50  3326 	XG$direction$0$0 ==.
      000B11 22               [24] 3327 	ret
                                   3328 ;------------------------------------------------------------
                                   3329 ;Allocation info for local variables in function 'start'
                                   3330 ;------------------------------------------------------------
                           000A51  3331 	G$start$0$0 ==.
                           000A51  3332 	C$lab4_m.c$350$1$160 ==.
                                   3333 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:350: void start(void)
                                   3334 ;	-----------------------------------------
                                   3335 ;	 function start
                                   3336 ;	-----------------------------------------
      000B12                       3337 _start:
                           000A51  3338 	C$lab4_m.c$352$1$162 ==.
                                   3339 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:352: while (read_keypad() != '*') wait();
      000B12                       3340 00101$:
      000B12 12 01 DB         [24] 3341 	lcall	_read_keypad
      000B15 AF 82            [24] 3342 	mov	r7,dpl
      000B17 BF 2A 02         [24] 3343 	cjne	r7,#0x2A,00112$
      000B1A 80 05            [24] 3344 	sjmp	00104$
      000B1C                       3345 00112$:
      000B1C 12 0B 22         [24] 3346 	lcall	_wait
      000B1F 80 F1            [24] 3347 	sjmp	00101$
      000B21                       3348 00104$:
                           000A60  3349 	C$lab4_m.c$353$1$162 ==.
                           000A60  3350 	XG$start$0$0 ==.
      000B21 22               [24] 3351 	ret
                                   3352 ;------------------------------------------------------------
                                   3353 ;Allocation info for local variables in function 'wait'
                                   3354 ;------------------------------------------------------------
                                   3355 ;old_c                     Allocated to registers r6 r7 
                                   3356 ;------------------------------------------------------------
                           000A61  3357 	G$wait$0$0 ==.
                           000A61  3358 	C$lab4_m.c$355$1$162 ==.
                                   3359 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:355: void wait(void)
                                   3360 ;	-----------------------------------------
                                   3361 ;	 function wait
                                   3362 ;	-----------------------------------------
      000B22                       3363 _wait:
                           000A61  3364 	C$lab4_m.c$357$1$164 ==.
                                   3365 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:357: unsigned int old_c = count+1;
      000B22 74 01            [12] 3366 	mov	a,#0x01
      000B24 25 36            [12] 3367 	add	a,_count
      000B26 FE               [12] 3368 	mov	r6,a
      000B27 E4               [12] 3369 	clr	a
      000B28 35 37            [12] 3370 	addc	a,(_count + 1)
      000B2A FF               [12] 3371 	mov	r7,a
                           000A6A  3372 	C$lab4_m.c$358$1$164 ==.
                                   3373 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:358: while (count < old_c);
      000B2B                       3374 00101$:
      000B2B C3               [12] 3375 	clr	c
      000B2C E5 36            [12] 3376 	mov	a,_count
      000B2E 9E               [12] 3377 	subb	a,r6
      000B2F E5 37            [12] 3378 	mov	a,(_count + 1)
      000B31 9F               [12] 3379 	subb	a,r7
      000B32 40 F7            [24] 3380 	jc	00101$
                           000A73  3381 	C$lab4_m.c$359$1$164 ==.
                           000A73  3382 	XG$wait$0$0 ==.
      000B34 22               [24] 3383 	ret
                                   3384 ;------------------------------------------------------------
                                   3385 ;Allocation info for local variables in function 'Steering_func'
                                   3386 ;------------------------------------------------------------
                           000A74  3387 	G$Steering_func$0$0 ==.
                           000A74  3388 	C$lab4_m.c$361$1$164 ==.
                                   3389 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:361: void Steering_func(void)
                                   3390 ;	-----------------------------------------
                                   3391 ;	 function Steering_func
                                   3392 ;	-----------------------------------------
      000B35                       3393 _Steering_func:
                           000A74  3394 	C$lab4_m.c$363$1$166 ==.
                                   3395 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:363: actual_heading = ReadCompass();
      000B35 12 07 9F         [24] 3396 	lcall	_ReadCompass
      000B38 85 82 38         [24] 3397 	mov	_actual_heading,dpl
      000B3B 85 83 39         [24] 3398 	mov	(_actual_heading + 1),dph
                           000A7D  3399 	C$lab4_m.c$364$1$166 ==.
                                   3400 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:364: offset = (unsigned int)((actual_heading +3600- desired_heading ) % 3600);
      000B3E 74 10            [12] 3401 	mov	a,#0x10
      000B40 25 38            [12] 3402 	add	a,_actual_heading
      000B42 FE               [12] 3403 	mov	r6,a
      000B43 74 0E            [12] 3404 	mov	a,#0x0E
      000B45 35 39            [12] 3405 	addc	a,(_actual_heading + 1)
      000B47 FF               [12] 3406 	mov	r7,a
      000B48 EE               [12] 3407 	mov	a,r6
      000B49 C3               [12] 3408 	clr	c
      000B4A 95 3A            [12] 3409 	subb	a,_desired_heading
      000B4C F5 82            [12] 3410 	mov	dpl,a
      000B4E EF               [12] 3411 	mov	a,r7
      000B4F 95 3B            [12] 3412 	subb	a,(_desired_heading + 1)
      000B51 F5 83            [12] 3413 	mov	dph,a
      000B53 75 11 10         [24] 3414 	mov	__modsint_PARM_2,#0x10
      000B56 75 12 0E         [24] 3415 	mov	(__modsint_PARM_2 + 1),#0x0E
      000B59 12 16 B2         [24] 3416 	lcall	__modsint
      000B5C AE 82            [24] 3417 	mov	r6,dpl
      000B5E AF 83            [24] 3418 	mov	r7,dph
      000B60 8E 3E            [24] 3419 	mov	_offset,r6
      000B62 8F 3F            [24] 3420 	mov	(_offset + 1),r7
                           000AA3  3421 	C$lab4_m.c$365$1$166 ==.
                                   3422 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:365: Steering_Servo(offset);
      000B64 85 3E 82         [24] 3423 	mov	dpl,_offset
      000B67 85 3F 83         [24] 3424 	mov	dph,(_offset + 1)
      000B6A 12 07 C5         [24] 3425 	lcall	_Steering_Servo
                           000AAC  3426 	C$lab4_m.c$367$1$166 ==.
                           000AAC  3427 	XG$Steering_func$0$0 ==.
      000B6D 22               [24] 3428 	ret
                                   3429 ;------------------------------------------------------------
                                   3430 ;Allocation info for local variables in function 'Drive_func'
                                   3431 ;------------------------------------------------------------
                                   3432 ;r_addr                    Allocated to registers 
                                   3433 ;read                      Allocated to registers 
                                   3434 ;------------------------------------------------------------
                           000AAD  3435 	G$Drive_func$0$0 ==.
                           000AAD  3436 	C$lab4_m.c$369$1$166 ==.
                                   3437 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:369: void Drive_func(void)
                                   3438 ;	-----------------------------------------
                                   3439 ;	 function Drive_func
                                   3440 ;	-----------------------------------------
      000B6E                       3441 _Drive_func:
                           000AAD  3442 	C$lab4_m.c$375$1$168 ==.
                                   3443 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:375: range = Read_Ranger();
      000B6E 12 07 79         [24] 3444 	lcall	_Read_Ranger
      000B71 85 82 40         [24] 3445 	mov	_range,dpl
      000B74 85 83 41         [24] 3446 	mov	(_range + 1),dph
                           000AB6  3447 	C$lab4_m.c$376$1$168 ==.
                                   3448 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:376: r_data[0] = 0x51;
      000B77 75 47 51         [24] 3449 	mov	_r_data,#0x51
                           000AB9  3450 	C$lab4_m.c$377$1$168 ==.
                                   3451 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:377: i2c_write_data(r_addr, 0, r_data, 1);
      000B7A 75 28 47         [24] 3452 	mov	_i2c_write_data_PARM_3,#_r_data
      000B7D 75 29 00         [24] 3453 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      000B80 75 2A 40         [24] 3454 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000B83 75 27 00         [24] 3455 	mov	_i2c_write_data_PARM_2,#0x00
      000B86 75 2B 01         [24] 3456 	mov	_i2c_write_data_PARM_4,#0x01
      000B89 75 82 E0         [24] 3457 	mov	dpl,#0xE0
      000B8C 12 04 33         [24] 3458 	lcall	_i2c_write_data
                           000ACE  3459 	C$lab4_m.c$378$1$168 ==.
                                   3460 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:378: printf("\r\n The range is: %u", range);
      000B8F C0 40            [24] 3461 	push	_range
      000B91 C0 41            [24] 3462 	push	(_range + 1)
      000B93 74 B2            [12] 3463 	mov	a,#___str_8
      000B95 C0 E0            [24] 3464 	push	acc
      000B97 74 18            [12] 3465 	mov	a,#(___str_8 >> 8)
      000B99 C0 E0            [24] 3466 	push	acc
      000B9B 74 80            [12] 3467 	mov	a,#0x80
      000B9D C0 E0            [24] 3468 	push	acc
      000B9F 12 0F C5         [24] 3469 	lcall	_printf
      000BA2 E5 81            [12] 3470 	mov	a,sp
      000BA4 24 FB            [12] 3471 	add	a,#0xfb
      000BA6 F5 81            [12] 3472 	mov	sp,a
                           000AE7  3473 	C$lab4_m.c$379$1$168 ==.
                                   3474 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:379: Drive_Motor();
      000BA8 12 06 7F         [24] 3475 	lcall	_Drive_Motor
                           000AEA  3476 	C$lab4_m.c$381$1$168 ==.
                           000AEA  3477 	XG$Drive_func$0$0 ==.
      000BAB 22               [24] 3478 	ret
                                   3479 ;------------------------------------------------------------
                                   3480 ;Allocation info for local variables in function 'read_AD_input'
                                   3481 ;------------------------------------------------------------
                                   3482 ;n                         Allocated to registers 
                                   3483 ;------------------------------------------------------------
                           000AEB  3484 	G$read_AD_input$0$0 ==.
                           000AEB  3485 	C$lab4_m.c$383$1$168 ==.
                                   3486 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:383: unsigned long read_AD_input(unsigned char n)
                                   3487 ;	-----------------------------------------
                                   3488 ;	 function read_AD_input
                                   3489 ;	-----------------------------------------
      000BAC                       3490 _read_AD_input:
      000BAC 85 82 AC         [24] 3491 	mov	_AMX1SL,dpl
                           000AEE  3492 	C$lab4_m.c$386$1$170 ==.
                                   3493 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:386: ADC1CN = ADC1CN & ~0x20;
      000BAF AF AA            [24] 3494 	mov	r7,_ADC1CN
      000BB1 74 DF            [12] 3495 	mov	a,#0xDF
      000BB3 5F               [12] 3496 	anl	a,r7
      000BB4 F5 AA            [12] 3497 	mov	_ADC1CN,a
                           000AF5  3498 	C$lab4_m.c$387$1$170 ==.
                                   3499 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:387: ADC1CN = ADC1CN | 0x10;
      000BB6 43 AA 10         [24] 3500 	orl	_ADC1CN,#0x10
                           000AF8  3501 	C$lab4_m.c$388$1$170 ==.
                                   3502 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:388: while ((ADC1CN & 0x20)== 0x00);
      000BB9                       3503 00101$:
      000BB9 E5 AA            [12] 3504 	mov	a,_ADC1CN
      000BBB 30 E5 FB         [24] 3505 	jnb	acc.5,00101$
                           000AFD  3506 	C$lab4_m.c$390$1$170 ==.
                                   3507 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:390: return ADC1;
      000BBE AC 9C            [24] 3508 	mov	r4,_ADC1
      000BC0 7D 00            [12] 3509 	mov	r5,#0x00
      000BC2 7E 00            [12] 3510 	mov	r6,#0x00
      000BC4 7F 00            [12] 3511 	mov	r7,#0x00
      000BC6 8C 82            [24] 3512 	mov	dpl,r4
      000BC8 8D 83            [24] 3513 	mov	dph,r5
      000BCA 8E F0            [24] 3514 	mov	b,r6
      000BCC EF               [12] 3515 	mov	a,r7
                           000B0C  3516 	C$lab4_m.c$392$1$170 ==.
                           000B0C  3517 	XG$read_AD_input$0$0 ==.
      000BCD 22               [24] 3518 	ret
                                   3519 ;------------------------------------------------------------
                                   3520 ;Allocation info for local variables in function 'ADC_Init'
                                   3521 ;------------------------------------------------------------
                           000B0D  3522 	G$ADC_Init$0$0 ==.
                           000B0D  3523 	C$lab4_m.c$394$1$170 ==.
                                   3524 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:394: void ADC_Init(void)								/////SETS ADC 
                                   3525 ;	-----------------------------------------
                                   3526 ;	 function ADC_Init
                                   3527 ;	-----------------------------------------
      000BCE                       3528 _ADC_Init:
                           000B0D  3529 	C$lab4_m.c$396$1$172 ==.
                                   3530 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:396: REF0CN = 0x03;
      000BCE 75 D1 03         [24] 3531 	mov	_REF0CN,#0x03
                           000B10  3532 	C$lab4_m.c$397$1$172 ==.
                                   3533 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:397: ADC1CN = 0x80;
      000BD1 75 AA 80         [24] 3534 	mov	_ADC1CN,#0x80
                           000B13  3535 	C$lab4_m.c$398$1$172 ==.
                                   3536 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:398: ADC1CF |= 0x01;
      000BD4 43 AB 01         [24] 3537 	orl	_ADC1CF,#0x01
                           000B16  3538 	C$lab4_m.c$399$1$172 ==.
                           000B16  3539 	XG$ADC_Init$0$0 ==.
      000BD7 22               [24] 3540 	ret
                                   3541 ;------------------------------------------------------------
                                   3542 ;Allocation info for local variables in function 'Battery_func'
                                   3543 ;------------------------------------------------------------
                           000B17  3544 	G$Battery_func$0$0 ==.
                           000B17  3545 	C$lab4_m.c$402$1$172 ==.
                                   3546 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:402: void Battery_func(void)
                                   3547 ;	-----------------------------------------
                                   3548 ;	 function Battery_func
                                   3549 ;	-----------------------------------------
      000BD8                       3550 _Battery_func:
                           000B17  3551 	C$lab4_m.c$404$1$174 ==.
                                   3552 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:404: lcd_clear();
      000BD8 12 01 A2         [24] 3553 	lcall	_lcd_clear
                           000B1A  3554 	C$lab4_m.c$405$1$174 ==.
                                   3555 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:405: pwpercent = ((MOTOR_PW- PW_NUET_DRIVE)*200)/(PW_MAX_DRIVE- PW_MIN_DRIVE);
      000BDB E5 42            [12] 3556 	mov	a,_MOTOR_PW
      000BDD 24 33            [12] 3557 	add	a,#0x33
      000BDF F5 11            [12] 3558 	mov	__mulint_PARM_2,a
      000BE1 E5 43            [12] 3559 	mov	a,(_MOTOR_PW + 1)
      000BE3 34 F5            [12] 3560 	addc	a,#0xF5
      000BE5 F5 12            [12] 3561 	mov	(__mulint_PARM_2 + 1),a
      000BE7 90 00 C8         [24] 3562 	mov	dptr,#0x00C8
      000BEA 12 0D 34         [24] 3563 	lcall	__mulint
      000BED 75 11 C3         [24] 3564 	mov	__divuint_PARM_2,#0xC3
      000BF0 75 12 05         [24] 3565 	mov	(__divuint_PARM_2 + 1),#0x05
      000BF3 12 0C 90         [24] 3566 	lcall	__divuint
      000BF6 AE 82            [24] 3567 	mov	r6,dpl
      000BF8 8E 49            [24] 3568 	mov	_pwpercent,r6
                           000B39  3569 	C$lab4_m.c$406$1$174 ==.
                                   3570 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:406: lcd_print("direction: %u\nrange: %u\n pw%c: %u\nbattery: %ld\n",actual_heading,range,0x25,pwpercent,read_AD_input(4));
      000BFA 75 82 04         [24] 3571 	mov	dpl,#0x04
      000BFD 12 0B AC         [24] 3572 	lcall	_read_AD_input
      000C00 AC 82            [24] 3573 	mov	r4,dpl
      000C02 AD 83            [24] 3574 	mov	r5,dph
      000C04 AE F0            [24] 3575 	mov	r6,b
      000C06 FF               [12] 3576 	mov	r7,a
      000C07 AA 49            [24] 3577 	mov	r2,_pwpercent
      000C09 7B 00            [12] 3578 	mov	r3,#0x00
      000C0B C0 04            [24] 3579 	push	ar4
      000C0D C0 05            [24] 3580 	push	ar5
      000C0F C0 06            [24] 3581 	push	ar6
      000C11 C0 07            [24] 3582 	push	ar7
      000C13 C0 02            [24] 3583 	push	ar2
      000C15 C0 03            [24] 3584 	push	ar3
      000C17 74 25            [12] 3585 	mov	a,#0x25
      000C19 C0 E0            [24] 3586 	push	acc
      000C1B E4               [12] 3587 	clr	a
      000C1C C0 E0            [24] 3588 	push	acc
      000C1E C0 40            [24] 3589 	push	_range
      000C20 C0 41            [24] 3590 	push	(_range + 1)
      000C22 C0 38            [24] 3591 	push	_actual_heading
      000C24 C0 39            [24] 3592 	push	(_actual_heading + 1)
      000C26 74 C6            [12] 3593 	mov	a,#___str_9
      000C28 C0 E0            [24] 3594 	push	acc
      000C2A 74 18            [12] 3595 	mov	a,#(___str_9 >> 8)
      000C2C C0 E0            [24] 3596 	push	acc
      000C2E 74 80            [12] 3597 	mov	a,#0x80
      000C30 C0 E0            [24] 3598 	push	acc
      000C32 12 01 1D         [24] 3599 	lcall	_lcd_print
      000C35 E5 81            [12] 3600 	mov	a,sp
      000C37 24 F1            [12] 3601 	add	a,#0xf1
      000C39 F5 81            [12] 3602 	mov	sp,a
                           000B7A  3603 	C$lab4_m.c$407$1$174 ==.
                           000B7A  3604 	XG$Battery_func$0$0 ==.
      000C3B 22               [24] 3605 	ret
                                   3606 ;------------------------------------------------------------
                                   3607 ;Allocation info for local variables in function 'avoid_crash'
                                   3608 ;------------------------------------------------------------
                           000B7B  3609 	G$avoid_crash$0$0 ==.
                           000B7B  3610 	C$lab4_m.c$409$1$174 ==.
                                   3611 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:409: void avoid_crash(void)
                                   3612 ;	-----------------------------------------
                                   3613 ;	 function avoid_crash
                                   3614 ;	-----------------------------------------
      000C3C                       3615 _avoid_crash:
                           000B7B  3616 	C$lab4_m.c$411$1$176 ==.
                                   3617 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:411: STR_PW = PW_MIN_STR;
      000C3C 75 34 29         [24] 3618 	mov	_STR_PW,#0x29
      000C3F 75 35 09         [24] 3619 	mov	(_STR_PW + 1),#0x09
                           000B81  3620 	C$lab4_m.c$414$1$176 ==.
                                   3621 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:414: STR_lo_to_hi= 0xFFFF - STR_PW;
      000C42 75 32 D6         [24] 3622 	mov	_STR_lo_to_hi,#0xD6
      000C45 75 33 F6         [24] 3623 	mov	(_STR_lo_to_hi + 1),#0xF6
                           000B87  3624 	C$lab4_m.c$415$1$176 ==.
                                   3625 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:415: PCA0CP0 = STR_lo_to_hi;
      000C48 75 EA D6         [24] 3626 	mov	((_PCA0CP0 >> 0) & 0xFF),#0xD6
      000C4B 75 FA F6         [24] 3627 	mov	((_PCA0CP0 >> 8) & 0xFF),#0xF6
                           000B8D  3628 	C$lab4_m.c$416$1$176 ==.
                                   3629 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:416: while(range < 35)
      000C4E                       3630 00105$:
      000C4E C3               [12] 3631 	clr	c
      000C4F E5 40            [12] 3632 	mov	a,_range
      000C51 94 23            [12] 3633 	subb	a,#0x23
      000C53 E5 41            [12] 3634 	mov	a,(_range + 1)
      000C55 94 00            [12] 3635 	subb	a,#0x00
      000C57 50 2B            [24] 3636 	jnc	00108$
                           000B98  3637 	C$lab4_m.c$418$2$177 ==.
                                   3638 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:418: wait();
      000C59 12 0B 22         [24] 3639 	lcall	_wait
                           000B9B  3640 	C$lab4_m.c$419$2$177 ==.
                                   3641 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:419: if (count % 4 == 0) Drive_func();
      000C5C E5 36            [12] 3642 	mov	a,_count
      000C5E 54 03            [12] 3643 	anl	a,#0x03
      000C60 60 02            [24] 3644 	jz	00124$
      000C62 80 03            [24] 3645 	sjmp	00102$
      000C64                       3646 00124$:
      000C64 12 0B 6E         [24] 3647 	lcall	_Drive_func
      000C67                       3648 00102$:
                           000BA6  3649 	C$lab4_m.c$420$1$176 ==.
                                   3650 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:420: if (count % 50 ==0) Battery_func();
      000C67 75 11 32         [24] 3651 	mov	__moduint_PARM_2,#0x32
      000C6A 75 12 00         [24] 3652 	mov	(__moduint_PARM_2 + 1),#0x00
      000C6D 85 36 82         [24] 3653 	mov	dpl,_count
      000C70 85 37 83         [24] 3654 	mov	dph,(_count + 1)
      000C73 12 0E 4C         [24] 3655 	lcall	__moduint
      000C76 E5 82            [12] 3656 	mov	a,dpl
      000C78 85 83 F0         [24] 3657 	mov	b,dph
      000C7B 45 F0            [12] 3658 	orl	a,b
      000C7D 70 CF            [24] 3659 	jnz	00105$
      000C7F 12 0B D8         [24] 3660 	lcall	_Battery_func
      000C82 80 CA            [24] 3661 	sjmp	00105$
      000C84                       3662 00108$:
                           000BC3  3663 	C$lab4_m.c$423$1$176 ==.
                           000BC3  3664 	XG$avoid_crash$0$0 ==.
      000C84 22               [24] 3665 	ret
                                   3666 	.area CSEG    (CODE)
                                   3667 	.area CONST   (CODE)
                           000000  3668 Flab4_m$__str_0$0$0 == .
      0017DC                       3669 ___str_0:
      0017DC 0A                    3670 	.db 0x0A
      0017DD 54 79 70 65 20 64 69  3671 	.ascii "Type digits; end w/#"
             67 69 74 73 3B 20 65
             6E 64 20 77 2F 23
      0017F1 00                    3672 	.db 0x00
                           000016  3673 Flab4_m$__str_1$0$0 == .
      0017F2                       3674 ___str_1:
      0017F2 20 20 20 20 20 25 63  3675 	.ascii "     %c%c%c%c%c"
             25 63 25 63 25 63 25
             63
      001801 00                    3676 	.db 0x00
                           000026  3677 Flab4_m$__str_2$0$0 == .
      001802                       3678 ___str_2:
      001802 25 63                 3679 	.ascii "%c"
      001804 00                    3680 	.db 0x00
                           000029  3681 Flab4_m$__str_3$0$0 == .
      001805                       3682 ___str_3:
      001805 0D                    3683 	.db 0x0D
      001806 0A                    3684 	.db 0x0A
      001807 45 6D 62 65 64 64 65  3685 	.ascii "Embedded Control Car Calibration"
             64 20 43 6F 6E 74 72
             6F 6C 20 43 61 72 20
             43 61 6C 69 62 72 61
             74 69 6F 6E
      001827 00                    3686 	.db 0x00
                           00004C  3687 Flab4_m$__str_4$0$0 == .
      001828                       3688 ___str_4:
      001828 0D                    3689 	.db 0x0D
      001829 0A                    3690 	.db 0x0A
      00182A 45 6D 62 65 64 64 65  3691 	.ascii "Embedded Control Car ready!"
             64 20 43 6F 6E 74 72
             6F 6C 20 43 61 72 20
             72 65 61 64 79 21
      001845 00                    3692 	.db 0x00
                           00006A  3693 Flab4_m$__str_5$0$0 == .
      001846                       3694 ___str_5:
      001846 0D                    3695 	.db 0x0D
      001847 0A                    3696 	.db 0x0A
      001848 20 54 68 65 20 63 6F  3697 	.ascii " The control is paused"
             6E 74 72 6F 6C 20 69
             73 20 70 61 75 73 65
             64
      00185E 00                    3698 	.db 0x00
                           000083  3699 Flab4_m$__str_6$0$0 == .
      00185F                       3700 ___str_6:
      00185F 43 61 6C 69 62 72 61  3701 	.ascii "Calibration:"
             74 69 6F 6E 3A
      00186B 0A                    3702 	.db 0x0A
      00186C 48 65 6C 6C 6F 20 77  3703 	.ascii "Hello world!"
             6F 72 6C 64 21
      001878 0A                    3704 	.db 0x0A
      001879 30 31 32 5F 33 34 35  3705 	.ascii "012_345_678:"
             5F 36 37 38 3A
      001885 0A                    3706 	.db 0x0A
      001886 61 62 63 20 64 65 66  3707 	.ascii "abc def ghij"
             20 67 68 69 6A
      001892 00                    3708 	.db 0x00
                           0000B7  3709 Flab4_m$__str_7$0$0 == .
      001893                       3710 ___str_7:
      001893 0D                    3711 	.db 0x0D
      001894 0A                    3712 	.db 0x0A
      001895 54 68 65 20 64 65 73  3713 	.ascii "The desired direction is: %d"
             69 72 65 64 20 64 69
             72 65 63 74 69 6F 6E
             20 69 73 3A 20 25 64
      0018B1 00                    3714 	.db 0x00
                           0000D6  3715 Flab4_m$__str_8$0$0 == .
      0018B2                       3716 ___str_8:
      0018B2 0D                    3717 	.db 0x0D
      0018B3 0A                    3718 	.db 0x0A
      0018B4 20 54 68 65 20 72 61  3719 	.ascii " The range is: %u"
             6E 67 65 20 69 73 3A
             20 25 75
      0018C5 00                    3720 	.db 0x00
                           0000EA  3721 Flab4_m$__str_9$0$0 == .
      0018C6                       3722 ___str_9:
      0018C6 64 69 72 65 63 74 69  3723 	.ascii "direction: %u"
             6F 6E 3A 20 25 75
      0018D3 0A                    3724 	.db 0x0A
      0018D4 72 61 6E 67 65 3A 20  3725 	.ascii "range: %u"
             25 75
      0018DD 0A                    3726 	.db 0x0A
      0018DE 20 70 77 25 63 3A 20  3727 	.ascii " pw%c: %u"
             25 75
      0018E7 0A                    3728 	.db 0x0A
      0018E8 62 61 74 74 65 72 79  3729 	.ascii "battery: %ld"
             3A 20 25 6C 64
      0018F4 0A                    3730 	.db 0x0A
      0018F5 00                    3731 	.db 0x00
                                   3732 	.area XINIT   (CODE)
                                   3733 	.area CABS    (ABS,CODE)
