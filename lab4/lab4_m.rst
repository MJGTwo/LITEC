                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (Apr  5 2014) (MINGW32)
                                      4 ; This file was generated Tue Apr 14 10:47:00 2015
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
                                    307 	.globl _DRV_lo_to_hi
                                    308 	.globl _r_input
                                    309 	.globl _MOTOR_PW
                                    310 	.globl _r_data
                                    311 	.globl _r_addr
                                    312 	.globl _range
                                    313 	.globl _offset
                                    314 	.globl _error
                                    315 	.globl _desired_heading
                                    316 	.globl _actual_heading
                                    317 	.globl _input
                                    318 	.globl _count
                                    319 	.globl _STR_PW
                                    320 	.globl _STR_lo_to_hi
                                    321 	.globl _i2c_read_data_PARM_4
                                    322 	.globl _i2c_read_data_PARM_3
                                    323 	.globl _i2c_read_data_PARM_2
                                    324 	.globl _i2c_write_data_PARM_4
                                    325 	.globl _i2c_write_data_PARM_3
                                    326 	.globl _i2c_write_data_PARM_2
                                    327 	.globl _putchar
                                    328 	.globl _getchar
                                    329 	.globl _lcd_print
                                    330 	.globl _lcd_clear
                                    331 	.globl _kpd_input
                                    332 	.globl _delay_time
                                    333 	.globl _i2c_start
                                    334 	.globl _i2c_write
                                    335 	.globl _i2c_write_and_stop
                                    336 	.globl _i2c_read
                                    337 	.globl _i2c_read_and_stop
                                    338 	.globl _i2c_write_data
                                    339 	.globl _i2c_read_data
                                    340 	.globl _Accel_Init
                                    341 	.globl _Drive_Motor
                                    342 	.globl _Read_Ranger
                                    343 	.globl _ReadCompass
                                    344 	.globl _Steering_Servo
                                    345 	.globl _Port_Init
                                    346 	.globl _XBR0_Init
                                    347 	.globl _SMB_Init
                                    348 	.globl _PCA_Init
                                    349 	.globl _direction
                                    350 	.globl _start
                                    351 	.globl _wait
                                    352 	.globl _Steering_func
                                    353 	.globl _Drive_func
                                    354 	.globl _read_AD_input
                                    355 	.globl _ADC_Init
                                    356 	.globl _Battery_func
                                    357 	.globl _avoid_crash
                                    358 ;--------------------------------------------------------
                                    359 ; special function registers
                                    360 ;--------------------------------------------------------
                                    361 	.area RSEG    (ABS,DATA)
      000000                        362 	.org 0x0000
                           000080   363 G$P0$0$0 == 0x0080
                           000080   364 _P0	=	0x0080
                           000081   365 G$SP$0$0 == 0x0081
                           000081   366 _SP	=	0x0081
                           000082   367 G$DPL$0$0 == 0x0082
                           000082   368 _DPL	=	0x0082
                           000083   369 G$DPH$0$0 == 0x0083
                           000083   370 _DPH	=	0x0083
                           000084   371 G$P4$0$0 == 0x0084
                           000084   372 _P4	=	0x0084
                           000085   373 G$P5$0$0 == 0x0085
                           000085   374 _P5	=	0x0085
                           000086   375 G$P6$0$0 == 0x0086
                           000086   376 _P6	=	0x0086
                           000087   377 G$PCON$0$0 == 0x0087
                           000087   378 _PCON	=	0x0087
                           000088   379 G$TCON$0$0 == 0x0088
                           000088   380 _TCON	=	0x0088
                           000089   381 G$TMOD$0$0 == 0x0089
                           000089   382 _TMOD	=	0x0089
                           00008A   383 G$TL0$0$0 == 0x008a
                           00008A   384 _TL0	=	0x008a
                           00008B   385 G$TL1$0$0 == 0x008b
                           00008B   386 _TL1	=	0x008b
                           00008C   387 G$TH0$0$0 == 0x008c
                           00008C   388 _TH0	=	0x008c
                           00008D   389 G$TH1$0$0 == 0x008d
                           00008D   390 _TH1	=	0x008d
                           00008E   391 G$CKCON$0$0 == 0x008e
                           00008E   392 _CKCON	=	0x008e
                           00008F   393 G$PSCTL$0$0 == 0x008f
                           00008F   394 _PSCTL	=	0x008f
                           000090   395 G$P1$0$0 == 0x0090
                           000090   396 _P1	=	0x0090
                           000091   397 G$TMR3CN$0$0 == 0x0091
                           000091   398 _TMR3CN	=	0x0091
                           000092   399 G$TMR3RLL$0$0 == 0x0092
                           000092   400 _TMR3RLL	=	0x0092
                           000093   401 G$TMR3RLH$0$0 == 0x0093
                           000093   402 _TMR3RLH	=	0x0093
                           000094   403 G$TMR3L$0$0 == 0x0094
                           000094   404 _TMR3L	=	0x0094
                           000095   405 G$TMR3H$0$0 == 0x0095
                           000095   406 _TMR3H	=	0x0095
                           000096   407 G$P7$0$0 == 0x0096
                           000096   408 _P7	=	0x0096
                           000098   409 G$SCON$0$0 == 0x0098
                           000098   410 _SCON	=	0x0098
                           000098   411 G$SCON0$0$0 == 0x0098
                           000098   412 _SCON0	=	0x0098
                           000099   413 G$SBUF$0$0 == 0x0099
                           000099   414 _SBUF	=	0x0099
                           000099   415 G$SBUF0$0$0 == 0x0099
                           000099   416 _SBUF0	=	0x0099
                           00009A   417 G$SPI0CFG$0$0 == 0x009a
                           00009A   418 _SPI0CFG	=	0x009a
                           00009B   419 G$SPI0DAT$0$0 == 0x009b
                           00009B   420 _SPI0DAT	=	0x009b
                           00009C   421 G$ADC1$0$0 == 0x009c
                           00009C   422 _ADC1	=	0x009c
                           00009D   423 G$SPI0CKR$0$0 == 0x009d
                           00009D   424 _SPI0CKR	=	0x009d
                           00009E   425 G$CPT0CN$0$0 == 0x009e
                           00009E   426 _CPT0CN	=	0x009e
                           00009F   427 G$CPT1CN$0$0 == 0x009f
                           00009F   428 _CPT1CN	=	0x009f
                           0000A0   429 G$P2$0$0 == 0x00a0
                           0000A0   430 _P2	=	0x00a0
                           0000A1   431 G$EMI0TC$0$0 == 0x00a1
                           0000A1   432 _EMI0TC	=	0x00a1
                           0000A3   433 G$EMI0CF$0$0 == 0x00a3
                           0000A3   434 _EMI0CF	=	0x00a3
                           0000A4   435 G$PRT0CF$0$0 == 0x00a4
                           0000A4   436 _PRT0CF	=	0x00a4
                           0000A4   437 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   438 _P0MDOUT	=	0x00a4
                           0000A5   439 G$PRT1CF$0$0 == 0x00a5
                           0000A5   440 _PRT1CF	=	0x00a5
                           0000A5   441 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   442 _P1MDOUT	=	0x00a5
                           0000A6   443 G$PRT2CF$0$0 == 0x00a6
                           0000A6   444 _PRT2CF	=	0x00a6
                           0000A6   445 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   446 _P2MDOUT	=	0x00a6
                           0000A7   447 G$PRT3CF$0$0 == 0x00a7
                           0000A7   448 _PRT3CF	=	0x00a7
                           0000A7   449 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   450 _P3MDOUT	=	0x00a7
                           0000A8   451 G$IE$0$0 == 0x00a8
                           0000A8   452 _IE	=	0x00a8
                           0000A9   453 G$SADDR0$0$0 == 0x00a9
                           0000A9   454 _SADDR0	=	0x00a9
                           0000AA   455 G$ADC1CN$0$0 == 0x00aa
                           0000AA   456 _ADC1CN	=	0x00aa
                           0000AB   457 G$ADC1CF$0$0 == 0x00ab
                           0000AB   458 _ADC1CF	=	0x00ab
                           0000AC   459 G$AMX1SL$0$0 == 0x00ac
                           0000AC   460 _AMX1SL	=	0x00ac
                           0000AD   461 G$P3IF$0$0 == 0x00ad
                           0000AD   462 _P3IF	=	0x00ad
                           0000AE   463 G$SADEN1$0$0 == 0x00ae
                           0000AE   464 _SADEN1	=	0x00ae
                           0000AF   465 G$EMI0CN$0$0 == 0x00af
                           0000AF   466 _EMI0CN	=	0x00af
                           0000AF   467 G$_XPAGE$0$0 == 0x00af
                           0000AF   468 __XPAGE	=	0x00af
                           0000B0   469 G$P3$0$0 == 0x00b0
                           0000B0   470 _P3	=	0x00b0
                           0000B1   471 G$OSCXCN$0$0 == 0x00b1
                           0000B1   472 _OSCXCN	=	0x00b1
                           0000B2   473 G$OSCICN$0$0 == 0x00b2
                           0000B2   474 _OSCICN	=	0x00b2
                           0000B5   475 G$P74OUT$0$0 == 0x00b5
                           0000B5   476 _P74OUT	=	0x00b5
                           0000B6   477 G$FLSCL$0$0 == 0x00b6
                           0000B6   478 _FLSCL	=	0x00b6
                           0000B7   479 G$FLACL$0$0 == 0x00b7
                           0000B7   480 _FLACL	=	0x00b7
                           0000B8   481 G$IP$0$0 == 0x00b8
                           0000B8   482 _IP	=	0x00b8
                           0000B9   483 G$SADEN0$0$0 == 0x00b9
                           0000B9   484 _SADEN0	=	0x00b9
                           0000BA   485 G$AMX0CF$0$0 == 0x00ba
                           0000BA   486 _AMX0CF	=	0x00ba
                           0000BB   487 G$AMX0SL$0$0 == 0x00bb
                           0000BB   488 _AMX0SL	=	0x00bb
                           0000BC   489 G$ADC0CF$0$0 == 0x00bc
                           0000BC   490 _ADC0CF	=	0x00bc
                           0000BD   491 G$P1MDIN$0$0 == 0x00bd
                           0000BD   492 _P1MDIN	=	0x00bd
                           0000BE   493 G$ADC0L$0$0 == 0x00be
                           0000BE   494 _ADC0L	=	0x00be
                           0000BF   495 G$ADC0H$0$0 == 0x00bf
                           0000BF   496 _ADC0H	=	0x00bf
                           0000C0   497 G$SMB0CN$0$0 == 0x00c0
                           0000C0   498 _SMB0CN	=	0x00c0
                           0000C1   499 G$SMB0STA$0$0 == 0x00c1
                           0000C1   500 _SMB0STA	=	0x00c1
                           0000C2   501 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   502 _SMB0DAT	=	0x00c2
                           0000C3   503 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   504 _SMB0ADR	=	0x00c3
                           0000C4   505 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   506 _ADC0GTL	=	0x00c4
                           0000C5   507 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   508 _ADC0GTH	=	0x00c5
                           0000C6   509 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   510 _ADC0LTL	=	0x00c6
                           0000C7   511 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   512 _ADC0LTH	=	0x00c7
                           0000C8   513 G$T2CON$0$0 == 0x00c8
                           0000C8   514 _T2CON	=	0x00c8
                           0000C9   515 G$T4CON$0$0 == 0x00c9
                           0000C9   516 _T4CON	=	0x00c9
                           0000CA   517 G$RCAP2L$0$0 == 0x00ca
                           0000CA   518 _RCAP2L	=	0x00ca
                           0000CB   519 G$RCAP2H$0$0 == 0x00cb
                           0000CB   520 _RCAP2H	=	0x00cb
                           0000CC   521 G$TL2$0$0 == 0x00cc
                           0000CC   522 _TL2	=	0x00cc
                           0000CD   523 G$TH2$0$0 == 0x00cd
                           0000CD   524 _TH2	=	0x00cd
                           0000CF   525 G$SMB0CR$0$0 == 0x00cf
                           0000CF   526 _SMB0CR	=	0x00cf
                           0000D0   527 G$PSW$0$0 == 0x00d0
                           0000D0   528 _PSW	=	0x00d0
                           0000D1   529 G$REF0CN$0$0 == 0x00d1
                           0000D1   530 _REF0CN	=	0x00d1
                           0000D2   531 G$DAC0L$0$0 == 0x00d2
                           0000D2   532 _DAC0L	=	0x00d2
                           0000D3   533 G$DAC0H$0$0 == 0x00d3
                           0000D3   534 _DAC0H	=	0x00d3
                           0000D4   535 G$DAC0CN$0$0 == 0x00d4
                           0000D4   536 _DAC0CN	=	0x00d4
                           0000D5   537 G$DAC1L$0$0 == 0x00d5
                           0000D5   538 _DAC1L	=	0x00d5
                           0000D6   539 G$DAC1H$0$0 == 0x00d6
                           0000D6   540 _DAC1H	=	0x00d6
                           0000D7   541 G$DAC1CN$0$0 == 0x00d7
                           0000D7   542 _DAC1CN	=	0x00d7
                           0000D8   543 G$PCA0CN$0$0 == 0x00d8
                           0000D8   544 _PCA0CN	=	0x00d8
                           0000D9   545 G$PCA0MD$0$0 == 0x00d9
                           0000D9   546 _PCA0MD	=	0x00d9
                           0000DA   547 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   548 _PCA0CPM0	=	0x00da
                           0000DB   549 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   550 _PCA0CPM1	=	0x00db
                           0000DC   551 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   552 _PCA0CPM2	=	0x00dc
                           0000DD   553 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   554 _PCA0CPM3	=	0x00dd
                           0000DE   555 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   556 _PCA0CPM4	=	0x00de
                           0000E0   557 G$ACC$0$0 == 0x00e0
                           0000E0   558 _ACC	=	0x00e0
                           0000E1   559 G$XBR0$0$0 == 0x00e1
                           0000E1   560 _XBR0	=	0x00e1
                           0000E2   561 G$XBR1$0$0 == 0x00e2
                           0000E2   562 _XBR1	=	0x00e2
                           0000E3   563 G$XBR2$0$0 == 0x00e3
                           0000E3   564 _XBR2	=	0x00e3
                           0000E4   565 G$RCAP4L$0$0 == 0x00e4
                           0000E4   566 _RCAP4L	=	0x00e4
                           0000E5   567 G$RCAP4H$0$0 == 0x00e5
                           0000E5   568 _RCAP4H	=	0x00e5
                           0000E6   569 G$EIE1$0$0 == 0x00e6
                           0000E6   570 _EIE1	=	0x00e6
                           0000E7   571 G$EIE2$0$0 == 0x00e7
                           0000E7   572 _EIE2	=	0x00e7
                           0000E8   573 G$ADC0CN$0$0 == 0x00e8
                           0000E8   574 _ADC0CN	=	0x00e8
                           0000E9   575 G$PCA0L$0$0 == 0x00e9
                           0000E9   576 _PCA0L	=	0x00e9
                           0000EA   577 G$PCA0CPL0$0$0 == 0x00ea
                           0000EA   578 _PCA0CPL0	=	0x00ea
                           0000EB   579 G$PCA0CPL1$0$0 == 0x00eb
                           0000EB   580 _PCA0CPL1	=	0x00eb
                           0000EC   581 G$PCA0CPL2$0$0 == 0x00ec
                           0000EC   582 _PCA0CPL2	=	0x00ec
                           0000ED   583 G$PCA0CPL3$0$0 == 0x00ed
                           0000ED   584 _PCA0CPL3	=	0x00ed
                           0000EE   585 G$PCA0CPL4$0$0 == 0x00ee
                           0000EE   586 _PCA0CPL4	=	0x00ee
                           0000EF   587 G$RSTSRC$0$0 == 0x00ef
                           0000EF   588 _RSTSRC	=	0x00ef
                           0000F0   589 G$B$0$0 == 0x00f0
                           0000F0   590 _B	=	0x00f0
                           0000F1   591 G$SCON1$0$0 == 0x00f1
                           0000F1   592 _SCON1	=	0x00f1
                           0000F2   593 G$SBUF1$0$0 == 0x00f2
                           0000F2   594 _SBUF1	=	0x00f2
                           0000F3   595 G$SADDR1$0$0 == 0x00f3
                           0000F3   596 _SADDR1	=	0x00f3
                           0000F4   597 G$TL4$0$0 == 0x00f4
                           0000F4   598 _TL4	=	0x00f4
                           0000F5   599 G$TH4$0$0 == 0x00f5
                           0000F5   600 _TH4	=	0x00f5
                           0000F6   601 G$EIP1$0$0 == 0x00f6
                           0000F6   602 _EIP1	=	0x00f6
                           0000F7   603 G$EIP2$0$0 == 0x00f7
                           0000F7   604 _EIP2	=	0x00f7
                           0000F8   605 G$SPI0CN$0$0 == 0x00f8
                           0000F8   606 _SPI0CN	=	0x00f8
                           0000F9   607 G$PCA0H$0$0 == 0x00f9
                           0000F9   608 _PCA0H	=	0x00f9
                           0000FA   609 G$PCA0CPH0$0$0 == 0x00fa
                           0000FA   610 _PCA0CPH0	=	0x00fa
                           0000FB   611 G$PCA0CPH1$0$0 == 0x00fb
                           0000FB   612 _PCA0CPH1	=	0x00fb
                           0000FC   613 G$PCA0CPH2$0$0 == 0x00fc
                           0000FC   614 _PCA0CPH2	=	0x00fc
                           0000FD   615 G$PCA0CPH3$0$0 == 0x00fd
                           0000FD   616 _PCA0CPH3	=	0x00fd
                           0000FE   617 G$PCA0CPH4$0$0 == 0x00fe
                           0000FE   618 _PCA0CPH4	=	0x00fe
                           0000FF   619 G$WDTCN$0$0 == 0x00ff
                           0000FF   620 _WDTCN	=	0x00ff
                           008C8A   621 G$TMR0$0$0 == 0x8c8a
                           008C8A   622 _TMR0	=	0x8c8a
                           008D8B   623 G$TMR1$0$0 == 0x8d8b
                           008D8B   624 _TMR1	=	0x8d8b
                           00CDCC   625 G$TMR2$0$0 == 0xcdcc
                           00CDCC   626 _TMR2	=	0xcdcc
                           00CBCA   627 G$RCAP2$0$0 == 0xcbca
                           00CBCA   628 _RCAP2	=	0xcbca
                           009594   629 G$TMR3$0$0 == 0x9594
                           009594   630 _TMR3	=	0x9594
                           009392   631 G$TMR3RL$0$0 == 0x9392
                           009392   632 _TMR3RL	=	0x9392
                           00F5F4   633 G$TMR4$0$0 == 0xf5f4
                           00F5F4   634 _TMR4	=	0xf5f4
                           00E5E4   635 G$RCAP4$0$0 == 0xe5e4
                           00E5E4   636 _RCAP4	=	0xe5e4
                           00BFBE   637 G$ADC0$0$0 == 0xbfbe
                           00BFBE   638 _ADC0	=	0xbfbe
                           00C5C4   639 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   640 _ADC0GT	=	0xc5c4
                           00C7C6   641 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   642 _ADC0LT	=	0xc7c6
                           00D3D2   643 G$DAC0$0$0 == 0xd3d2
                           00D3D2   644 _DAC0	=	0xd3d2
                           00D6D5   645 G$DAC1$0$0 == 0xd6d5
                           00D6D5   646 _DAC1	=	0xd6d5
                           00F9E9   647 G$PCA0$0$0 == 0xf9e9
                           00F9E9   648 _PCA0	=	0xf9e9
                           00FAEA   649 G$PCA0CP0$0$0 == 0xfaea
                           00FAEA   650 _PCA0CP0	=	0xfaea
                           00FBEB   651 G$PCA0CP1$0$0 == 0xfbeb
                           00FBEB   652 _PCA0CP1	=	0xfbeb
                           00FCEC   653 G$PCA0CP2$0$0 == 0xfcec
                           00FCEC   654 _PCA0CP2	=	0xfcec
                           00FDED   655 G$PCA0CP3$0$0 == 0xfded
                           00FDED   656 _PCA0CP3	=	0xfded
                           00FEEE   657 G$PCA0CP4$0$0 == 0xfeee
                           00FEEE   658 _PCA0CP4	=	0xfeee
                                    659 ;--------------------------------------------------------
                                    660 ; special function bits
                                    661 ;--------------------------------------------------------
                                    662 	.area RSEG    (ABS,DATA)
      000000                        663 	.org 0x0000
                           000080   664 G$P0_0$0$0 == 0x0080
                           000080   665 _P0_0	=	0x0080
                           000081   666 G$P0_1$0$0 == 0x0081
                           000081   667 _P0_1	=	0x0081
                           000082   668 G$P0_2$0$0 == 0x0082
                           000082   669 _P0_2	=	0x0082
                           000083   670 G$P0_3$0$0 == 0x0083
                           000083   671 _P0_3	=	0x0083
                           000084   672 G$P0_4$0$0 == 0x0084
                           000084   673 _P0_4	=	0x0084
                           000085   674 G$P0_5$0$0 == 0x0085
                           000085   675 _P0_5	=	0x0085
                           000086   676 G$P0_6$0$0 == 0x0086
                           000086   677 _P0_6	=	0x0086
                           000087   678 G$P0_7$0$0 == 0x0087
                           000087   679 _P0_7	=	0x0087
                           000088   680 G$IT0$0$0 == 0x0088
                           000088   681 _IT0	=	0x0088
                           000089   682 G$IE0$0$0 == 0x0089
                           000089   683 _IE0	=	0x0089
                           00008A   684 G$IT1$0$0 == 0x008a
                           00008A   685 _IT1	=	0x008a
                           00008B   686 G$IE1$0$0 == 0x008b
                           00008B   687 _IE1	=	0x008b
                           00008C   688 G$TR0$0$0 == 0x008c
                           00008C   689 _TR0	=	0x008c
                           00008D   690 G$TF0$0$0 == 0x008d
                           00008D   691 _TF0	=	0x008d
                           00008E   692 G$TR1$0$0 == 0x008e
                           00008E   693 _TR1	=	0x008e
                           00008F   694 G$TF1$0$0 == 0x008f
                           00008F   695 _TF1	=	0x008f
                           000090   696 G$P1_0$0$0 == 0x0090
                           000090   697 _P1_0	=	0x0090
                           000091   698 G$P1_1$0$0 == 0x0091
                           000091   699 _P1_1	=	0x0091
                           000092   700 G$P1_2$0$0 == 0x0092
                           000092   701 _P1_2	=	0x0092
                           000093   702 G$P1_3$0$0 == 0x0093
                           000093   703 _P1_3	=	0x0093
                           000094   704 G$P1_4$0$0 == 0x0094
                           000094   705 _P1_4	=	0x0094
                           000095   706 G$P1_5$0$0 == 0x0095
                           000095   707 _P1_5	=	0x0095
                           000096   708 G$P1_6$0$0 == 0x0096
                           000096   709 _P1_6	=	0x0096
                           000097   710 G$P1_7$0$0 == 0x0097
                           000097   711 _P1_7	=	0x0097
                           000098   712 G$RI$0$0 == 0x0098
                           000098   713 _RI	=	0x0098
                           000098   714 G$RI0$0$0 == 0x0098
                           000098   715 _RI0	=	0x0098
                           000099   716 G$TI$0$0 == 0x0099
                           000099   717 _TI	=	0x0099
                           000099   718 G$TI0$0$0 == 0x0099
                           000099   719 _TI0	=	0x0099
                           00009A   720 G$RB8$0$0 == 0x009a
                           00009A   721 _RB8	=	0x009a
                           00009A   722 G$RB80$0$0 == 0x009a
                           00009A   723 _RB80	=	0x009a
                           00009B   724 G$TB8$0$0 == 0x009b
                           00009B   725 _TB8	=	0x009b
                           00009B   726 G$TB80$0$0 == 0x009b
                           00009B   727 _TB80	=	0x009b
                           00009C   728 G$REN$0$0 == 0x009c
                           00009C   729 _REN	=	0x009c
                           00009C   730 G$REN0$0$0 == 0x009c
                           00009C   731 _REN0	=	0x009c
                           00009D   732 G$SM2$0$0 == 0x009d
                           00009D   733 _SM2	=	0x009d
                           00009D   734 G$SM20$0$0 == 0x009d
                           00009D   735 _SM20	=	0x009d
                           00009D   736 G$MCE0$0$0 == 0x009d
                           00009D   737 _MCE0	=	0x009d
                           00009E   738 G$SM1$0$0 == 0x009e
                           00009E   739 _SM1	=	0x009e
                           00009E   740 G$SM10$0$0 == 0x009e
                           00009E   741 _SM10	=	0x009e
                           00009F   742 G$SM0$0$0 == 0x009f
                           00009F   743 _SM0	=	0x009f
                           00009F   744 G$SM00$0$0 == 0x009f
                           00009F   745 _SM00	=	0x009f
                           00009F   746 G$S0MODE$0$0 == 0x009f
                           00009F   747 _S0MODE	=	0x009f
                           0000A0   748 G$P2_0$0$0 == 0x00a0
                           0000A0   749 _P2_0	=	0x00a0
                           0000A1   750 G$P2_1$0$0 == 0x00a1
                           0000A1   751 _P2_1	=	0x00a1
                           0000A2   752 G$P2_2$0$0 == 0x00a2
                           0000A2   753 _P2_2	=	0x00a2
                           0000A3   754 G$P2_3$0$0 == 0x00a3
                           0000A3   755 _P2_3	=	0x00a3
                           0000A4   756 G$P2_4$0$0 == 0x00a4
                           0000A4   757 _P2_4	=	0x00a4
                           0000A5   758 G$P2_5$0$0 == 0x00a5
                           0000A5   759 _P2_5	=	0x00a5
                           0000A6   760 G$P2_6$0$0 == 0x00a6
                           0000A6   761 _P2_6	=	0x00a6
                           0000A7   762 G$P2_7$0$0 == 0x00a7
                           0000A7   763 _P2_7	=	0x00a7
                           0000A8   764 G$EX0$0$0 == 0x00a8
                           0000A8   765 _EX0	=	0x00a8
                           0000A9   766 G$ET0$0$0 == 0x00a9
                           0000A9   767 _ET0	=	0x00a9
                           0000AA   768 G$EX1$0$0 == 0x00aa
                           0000AA   769 _EX1	=	0x00aa
                           0000AB   770 G$ET1$0$0 == 0x00ab
                           0000AB   771 _ET1	=	0x00ab
                           0000AC   772 G$ES0$0$0 == 0x00ac
                           0000AC   773 _ES0	=	0x00ac
                           0000AC   774 G$ES$0$0 == 0x00ac
                           0000AC   775 _ES	=	0x00ac
                           0000AD   776 G$ET2$0$0 == 0x00ad
                           0000AD   777 _ET2	=	0x00ad
                           0000AF   778 G$EA$0$0 == 0x00af
                           0000AF   779 _EA	=	0x00af
                           0000B0   780 G$P3_0$0$0 == 0x00b0
                           0000B0   781 _P3_0	=	0x00b0
                           0000B1   782 G$P3_1$0$0 == 0x00b1
                           0000B1   783 _P3_1	=	0x00b1
                           0000B2   784 G$P3_2$0$0 == 0x00b2
                           0000B2   785 _P3_2	=	0x00b2
                           0000B3   786 G$P3_3$0$0 == 0x00b3
                           0000B3   787 _P3_3	=	0x00b3
                           0000B4   788 G$P3_4$0$0 == 0x00b4
                           0000B4   789 _P3_4	=	0x00b4
                           0000B5   790 G$P3_5$0$0 == 0x00b5
                           0000B5   791 _P3_5	=	0x00b5
                           0000B6   792 G$P3_6$0$0 == 0x00b6
                           0000B6   793 _P3_6	=	0x00b6
                           0000B7   794 G$P3_7$0$0 == 0x00b7
                           0000B7   795 _P3_7	=	0x00b7
                           0000B8   796 G$PX0$0$0 == 0x00b8
                           0000B8   797 _PX0	=	0x00b8
                           0000B9   798 G$PT0$0$0 == 0x00b9
                           0000B9   799 _PT0	=	0x00b9
                           0000BA   800 G$PX1$0$0 == 0x00ba
                           0000BA   801 _PX1	=	0x00ba
                           0000BB   802 G$PT1$0$0 == 0x00bb
                           0000BB   803 _PT1	=	0x00bb
                           0000BC   804 G$PS0$0$0 == 0x00bc
                           0000BC   805 _PS0	=	0x00bc
                           0000BC   806 G$PS$0$0 == 0x00bc
                           0000BC   807 _PS	=	0x00bc
                           0000BD   808 G$PT2$0$0 == 0x00bd
                           0000BD   809 _PT2	=	0x00bd
                           0000C0   810 G$SMBTOE$0$0 == 0x00c0
                           0000C0   811 _SMBTOE	=	0x00c0
                           0000C1   812 G$SMBFTE$0$0 == 0x00c1
                           0000C1   813 _SMBFTE	=	0x00c1
                           0000C2   814 G$AA$0$0 == 0x00c2
                           0000C2   815 _AA	=	0x00c2
                           0000C3   816 G$SI$0$0 == 0x00c3
                           0000C3   817 _SI	=	0x00c3
                           0000C4   818 G$STO$0$0 == 0x00c4
                           0000C4   819 _STO	=	0x00c4
                           0000C5   820 G$STA$0$0 == 0x00c5
                           0000C5   821 _STA	=	0x00c5
                           0000C6   822 G$ENSMB$0$0 == 0x00c6
                           0000C6   823 _ENSMB	=	0x00c6
                           0000C7   824 G$BUSY$0$0 == 0x00c7
                           0000C7   825 _BUSY	=	0x00c7
                           0000C8   826 G$CPRL2$0$0 == 0x00c8
                           0000C8   827 _CPRL2	=	0x00c8
                           0000C9   828 G$CT2$0$0 == 0x00c9
                           0000C9   829 _CT2	=	0x00c9
                           0000CA   830 G$TR2$0$0 == 0x00ca
                           0000CA   831 _TR2	=	0x00ca
                           0000CB   832 G$EXEN2$0$0 == 0x00cb
                           0000CB   833 _EXEN2	=	0x00cb
                           0000CC   834 G$TCLK$0$0 == 0x00cc
                           0000CC   835 _TCLK	=	0x00cc
                           0000CD   836 G$RCLK$0$0 == 0x00cd
                           0000CD   837 _RCLK	=	0x00cd
                           0000CE   838 G$EXF2$0$0 == 0x00ce
                           0000CE   839 _EXF2	=	0x00ce
                           0000CF   840 G$TF2$0$0 == 0x00cf
                           0000CF   841 _TF2	=	0x00cf
                           0000D0   842 G$P$0$0 == 0x00d0
                           0000D0   843 _P	=	0x00d0
                           0000D1   844 G$F1$0$0 == 0x00d1
                           0000D1   845 _F1	=	0x00d1
                           0000D2   846 G$OV$0$0 == 0x00d2
                           0000D2   847 _OV	=	0x00d2
                           0000D3   848 G$RS0$0$0 == 0x00d3
                           0000D3   849 _RS0	=	0x00d3
                           0000D4   850 G$RS1$0$0 == 0x00d4
                           0000D4   851 _RS1	=	0x00d4
                           0000D5   852 G$F0$0$0 == 0x00d5
                           0000D5   853 _F0	=	0x00d5
                           0000D6   854 G$AC$0$0 == 0x00d6
                           0000D6   855 _AC	=	0x00d6
                           0000D7   856 G$CY$0$0 == 0x00d7
                           0000D7   857 _CY	=	0x00d7
                           0000D8   858 G$CCF0$0$0 == 0x00d8
                           0000D8   859 _CCF0	=	0x00d8
                           0000D9   860 G$CCF1$0$0 == 0x00d9
                           0000D9   861 _CCF1	=	0x00d9
                           0000DA   862 G$CCF2$0$0 == 0x00da
                           0000DA   863 _CCF2	=	0x00da
                           0000DB   864 G$CCF3$0$0 == 0x00db
                           0000DB   865 _CCF3	=	0x00db
                           0000DC   866 G$CCF4$0$0 == 0x00dc
                           0000DC   867 _CCF4	=	0x00dc
                           0000DE   868 G$CR$0$0 == 0x00de
                           0000DE   869 _CR	=	0x00de
                           0000DF   870 G$CF$0$0 == 0x00df
                           0000DF   871 _CF	=	0x00df
                           0000E8   872 G$ADLJST$0$0 == 0x00e8
                           0000E8   873 _ADLJST	=	0x00e8
                           0000E8   874 G$AD0LJST$0$0 == 0x00e8
                           0000E8   875 _AD0LJST	=	0x00e8
                           0000E9   876 G$ADWINT$0$0 == 0x00e9
                           0000E9   877 _ADWINT	=	0x00e9
                           0000E9   878 G$AD0WINT$0$0 == 0x00e9
                           0000E9   879 _AD0WINT	=	0x00e9
                           0000EA   880 G$ADSTM0$0$0 == 0x00ea
                           0000EA   881 _ADSTM0	=	0x00ea
                           0000EA   882 G$AD0CM0$0$0 == 0x00ea
                           0000EA   883 _AD0CM0	=	0x00ea
                           0000EB   884 G$ADSTM1$0$0 == 0x00eb
                           0000EB   885 _ADSTM1	=	0x00eb
                           0000EB   886 G$AD0CM1$0$0 == 0x00eb
                           0000EB   887 _AD0CM1	=	0x00eb
                           0000EC   888 G$ADBUSY$0$0 == 0x00ec
                           0000EC   889 _ADBUSY	=	0x00ec
                           0000EC   890 G$AD0BUSY$0$0 == 0x00ec
                           0000EC   891 _AD0BUSY	=	0x00ec
                           0000ED   892 G$ADCINT$0$0 == 0x00ed
                           0000ED   893 _ADCINT	=	0x00ed
                           0000ED   894 G$AD0INT$0$0 == 0x00ed
                           0000ED   895 _AD0INT	=	0x00ed
                           0000EE   896 G$ADCTM$0$0 == 0x00ee
                           0000EE   897 _ADCTM	=	0x00ee
                           0000EE   898 G$AD0TM$0$0 == 0x00ee
                           0000EE   899 _AD0TM	=	0x00ee
                           0000EF   900 G$ADCEN$0$0 == 0x00ef
                           0000EF   901 _ADCEN	=	0x00ef
                           0000EF   902 G$AD0EN$0$0 == 0x00ef
                           0000EF   903 _AD0EN	=	0x00ef
                           0000F8   904 G$SPIEN$0$0 == 0x00f8
                           0000F8   905 _SPIEN	=	0x00f8
                           0000F9   906 G$MSTEN$0$0 == 0x00f9
                           0000F9   907 _MSTEN	=	0x00f9
                           0000FA   908 G$SLVSEL$0$0 == 0x00fa
                           0000FA   909 _SLVSEL	=	0x00fa
                           0000FB   910 G$TXBSY$0$0 == 0x00fb
                           0000FB   911 _TXBSY	=	0x00fb
                           0000FC   912 G$RXOVRN$0$0 == 0x00fc
                           0000FC   913 _RXOVRN	=	0x00fc
                           0000FD   914 G$MODF$0$0 == 0x00fd
                           0000FD   915 _MODF	=	0x00fd
                           0000FE   916 G$WCOL$0$0 == 0x00fe
                           0000FE   917 _WCOL	=	0x00fe
                           0000FF   918 G$SPIF$0$0 == 0x00ff
                           0000FF   919 _SPIF	=	0x00ff
                           0000C7   920 G$BUS_BUSY$0$0 == 0x00c7
                           0000C7   921 _BUS_BUSY	=	0x00c7
                           0000C6   922 G$BUS_EN$0$0 == 0x00c6
                           0000C6   923 _BUS_EN	=	0x00c6
                           0000C5   924 G$BUS_START$0$0 == 0x00c5
                           0000C5   925 _BUS_START	=	0x00c5
                           0000C4   926 G$BUS_STOP$0$0 == 0x00c4
                           0000C4   927 _BUS_STOP	=	0x00c4
                           0000C3   928 G$BUS_INT$0$0 == 0x00c3
                           0000C3   929 _BUS_INT	=	0x00c3
                           0000C2   930 G$BUS_AA$0$0 == 0x00c2
                           0000C2   931 _BUS_AA	=	0x00c2
                           0000C1   932 G$BUS_FTE$0$0 == 0x00c1
                           0000C1   933 _BUS_FTE	=	0x00c1
                           0000C0   934 G$BUS_TOE$0$0 == 0x00c0
                           0000C0   935 _BUS_TOE	=	0x00c0
                           000083   936 G$BUS_SCL$0$0 == 0x0083
                           000083   937 _BUS_SCL	=	0x0083
                           0000B7   938 G$SS0$0$0 == 0x00b7
                           0000B7   939 _SS0	=	0x00b7
                                    940 ;--------------------------------------------------------
                                    941 ; overlayable register banks
                                    942 ;--------------------------------------------------------
                                    943 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        944 	.ds 8
                                    945 ;--------------------------------------------------------
                                    946 ; internal ram data
                                    947 ;--------------------------------------------------------
                                    948 	.area DSEG    (DATA)
                           000000   949 Llab4_m.lcd_clear$NumBytes$1$77==.
      000022                        950 _lcd_clear_NumBytes_1_77:
      000022                        951 	.ds 1
                           000001   952 Llab4_m.lcd_clear$Cmd$1$77==.
      000023                        953 _lcd_clear_Cmd_1_77:
      000023                        954 	.ds 2
                           000003   955 Llab4_m.read_keypad$Data$1$78==.
      000025                        956 _read_keypad_Data_1_78:
      000025                        957 	.ds 2
                           000005   958 Llab4_m.i2c_write_data$start_reg$1$97==.
      000027                        959 _i2c_write_data_PARM_2:
      000027                        960 	.ds 1
                           000006   961 Llab4_m.i2c_write_data$buffer$1$97==.
      000028                        962 _i2c_write_data_PARM_3:
      000028                        963 	.ds 3
                           000009   964 Llab4_m.i2c_write_data$num_bytes$1$97==.
      00002B                        965 _i2c_write_data_PARM_4:
      00002B                        966 	.ds 1
                           00000A   967 Llab4_m.i2c_read_data$start_reg$1$99==.
      00002C                        968 _i2c_read_data_PARM_2:
      00002C                        969 	.ds 1
                           00000B   970 Llab4_m.i2c_read_data$buffer$1$99==.
      00002D                        971 _i2c_read_data_PARM_3:
      00002D                        972 	.ds 3
                           00000E   973 Llab4_m.i2c_read_data$num_bytes$1$99==.
      000030                        974 _i2c_read_data_PARM_4:
      000030                        975 	.ds 1
                           00000F   976 Llab4_m.Accel_Init$Data2$1$103==.
      000031                        977 _Accel_Init_Data2_1_103:
      000031                        978 	.ds 1
                           000010   979 G$STR_lo_to_hi$0$0==.
      000032                        980 _STR_lo_to_hi::
      000032                        981 	.ds 2
                           000012   982 G$STR_PW$0$0==.
      000034                        983 _STR_PW::
      000034                        984 	.ds 2
                           000014   985 G$count$0$0==.
      000036                        986 _count::
      000036                        987 	.ds 2
                           000016   988 G$input$0$0==.
      000038                        989 _input::
      000038                        990 	.ds 1
                           000017   991 G$actual_heading$0$0==.
      000039                        992 _actual_heading::
      000039                        993 	.ds 2
                           000019   994 G$desired_heading$0$0==.
      00003B                        995 _desired_heading::
      00003B                        996 	.ds 2
                           00001B   997 G$error$0$0==.
      00003D                        998 _error::
      00003D                        999 	.ds 2
                           00001D  1000 G$offset$0$0==.
      00003F                       1001 _offset::
      00003F                       1002 	.ds 2
                           00001F  1003 G$range$0$0==.
      000041                       1004 _range::
      000041                       1005 	.ds 2
                           000021  1006 G$r_addr$0$0==.
      000043                       1007 _r_addr::
      000043                       1008 	.ds 1
                           000022  1009 G$r_data$0$0==.
      000044                       1010 _r_data::
      000044                       1011 	.ds 2
                           000024  1012 G$MOTOR_PW$0$0==.
      000046                       1013 _MOTOR_PW::
      000046                       1014 	.ds 2
                           000026  1015 G$r_input$0$0==.
      000048                       1016 _r_input::
      000048                       1017 	.ds 1
                           000027  1018 G$DRV_lo_to_hi$0$0==.
      000049                       1019 _DRV_lo_to_hi::
      000049                       1020 	.ds 2
                           000029  1021 Llab4_m.ReadCompass$Data$1$140==.
      00004B                       1022 _ReadCompass_Data_1_140:
      00004B                       1023 	.ds 2
                           00002B  1024 Llab4_m.Steering_Servo$direction$1$141==.
      00004D                       1025 _Steering_Servo_direction_1_141:
      00004D                       1026 	.ds 2
                                   1027 ;--------------------------------------------------------
                                   1028 ; overlayable items in internal ram 
                                   1029 ;--------------------------------------------------------
                                   1030 	.area	OSEG    (OVR,DATA)
                                   1031 	.area	OSEG    (OVR,DATA)
                                   1032 	.area	OSEG    (OVR,DATA)
                                   1033 	.area	OSEG    (OVR,DATA)
                                   1034 	.area	OSEG    (OVR,DATA)
                                   1035 	.area	OSEG    (OVR,DATA)
                                   1036 	.area	OSEG    (OVR,DATA)
                                   1037 	.area	OSEG    (OVR,DATA)
                                   1038 ;--------------------------------------------------------
                                   1039 ; Stack segment in internal ram 
                                   1040 ;--------------------------------------------------------
                                   1041 	.area	SSEG
      000069                       1042 __start__stack:
      000069                       1043 	.ds	1
                                   1044 
                                   1045 ;--------------------------------------------------------
                                   1046 ; indirectly addressable internal ram data
                                   1047 ;--------------------------------------------------------
                                   1048 	.area ISEG    (DATA)
                                   1049 ;--------------------------------------------------------
                                   1050 ; absolute internal ram data
                                   1051 ;--------------------------------------------------------
                                   1052 	.area IABS    (ABS,DATA)
                                   1053 	.area IABS    (ABS,DATA)
                                   1054 ;--------------------------------------------------------
                                   1055 ; bit data
                                   1056 ;--------------------------------------------------------
                                   1057 	.area BSEG    (BIT)
                                   1058 ;--------------------------------------------------------
                                   1059 ; paged external ram data
                                   1060 ;--------------------------------------------------------
                                   1061 	.area PSEG    (PAG,XDATA)
                                   1062 ;--------------------------------------------------------
                                   1063 ; external ram data
                                   1064 ;--------------------------------------------------------
                                   1065 	.area XSEG    (XDATA)
                           000000  1066 Llab4_m.lcd_print$text$1$73==.
      000001                       1067 _lcd_print_text_1_73:
      000001                       1068 	.ds 80
                                   1069 ;--------------------------------------------------------
                                   1070 ; absolute external ram data
                                   1071 ;--------------------------------------------------------
                                   1072 	.area XABS    (ABS,XDATA)
                                   1073 ;--------------------------------------------------------
                                   1074 ; external initialized ram data
                                   1075 ;--------------------------------------------------------
                                   1076 	.area XISEG   (XDATA)
                                   1077 	.area HOME    (CODE)
                                   1078 	.area GSINIT0 (CODE)
                                   1079 	.area GSINIT1 (CODE)
                                   1080 	.area GSINIT2 (CODE)
                                   1081 	.area GSINIT3 (CODE)
                                   1082 	.area GSINIT4 (CODE)
                                   1083 	.area GSINIT5 (CODE)
                                   1084 	.area GSINIT  (CODE)
                                   1085 	.area GSFINAL (CODE)
                                   1086 	.area CSEG    (CODE)
                                   1087 ;--------------------------------------------------------
                                   1088 ; interrupt vector 
                                   1089 ;--------------------------------------------------------
                                   1090 	.area HOME    (CODE)
      000000                       1091 __interrupt_vect:
      000000 02 00 51         [24] 1092 	ljmp	__sdcc_gsinit_startup
      000003 32               [24] 1093 	reti
      000004                       1094 	.ds	7
      00000B 32               [24] 1095 	reti
      00000C                       1096 	.ds	7
      000013 32               [24] 1097 	reti
      000014                       1098 	.ds	7
      00001B 32               [24] 1099 	reti
      00001C                       1100 	.ds	7
      000023 32               [24] 1101 	reti
      000024                       1102 	.ds	7
      00002B 32               [24] 1103 	reti
      00002C                       1104 	.ds	7
      000033 32               [24] 1105 	reti
      000034                       1106 	.ds	7
      00003B 32               [24] 1107 	reti
      00003C                       1108 	.ds	7
      000043 32               [24] 1109 	reti
      000044                       1110 	.ds	7
      00004B 02 0A CC         [24] 1111 	ljmp	_PCA_ISR
                                   1112 ;--------------------------------------------------------
                                   1113 ; global & static initialisations
                                   1114 ;--------------------------------------------------------
                                   1115 	.area HOME    (CODE)
                                   1116 	.area GSINIT  (CODE)
                                   1117 	.area GSFINAL (CODE)
                                   1118 	.area GSINIT  (CODE)
                                   1119 	.globl __sdcc_gsinit_startup
                                   1120 	.globl __sdcc_program_startup
                                   1121 	.globl __start__stack
                                   1122 	.globl __mcs51_genXINIT
                                   1123 	.globl __mcs51_genXRAMCLEAR
                                   1124 	.globl __mcs51_genRAMCLEAR
                           000000  1125 	C$lab4_m.c$54$1$176 ==.
                                   1126 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:54: unsigned int STR_PW   = 0;
      0000AA E4               [12] 1127 	clr	a
      0000AB F5 34            [12] 1128 	mov	_STR_PW,a
      0000AD F5 35            [12] 1129 	mov	(_STR_PW + 1),a
                           000005  1130 	C$lab4_m.c$55$1$176 ==.
                                   1131 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:55: unsigned int count = 0;
      0000AF F5 36            [12] 1132 	mov	_count,a
      0000B1 F5 37            [12] 1133 	mov	(_count + 1),a
                           000009  1134 	C$lab4_m.c$62$1$176 ==.
                                   1135 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:62: unsigned int range = 0;
      0000B3 F5 41            [12] 1136 	mov	_range,a
      0000B5 F5 42            [12] 1137 	mov	(_range + 1),a
                           00000D  1138 	C$lab4_m.c$65$1$176 ==.
                                   1139 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:65: unsigned int MOTOR_PW = 0;
      0000B7 F5 46            [12] 1140 	mov	_MOTOR_PW,a
      0000B9 F5 47            [12] 1141 	mov	(_MOTOR_PW + 1),a
                                   1142 	.area GSFINAL (CODE)
      0000BB 02 00 4E         [24] 1143 	ljmp	__sdcc_program_startup
                                   1144 ;--------------------------------------------------------
                                   1145 ; Home
                                   1146 ;--------------------------------------------------------
                                   1147 	.area HOME    (CODE)
                                   1148 	.area HOME    (CODE)
      00004E                       1149 __sdcc_program_startup:
      00004E 02 05 94         [24] 1150 	ljmp	_main
                                   1151 ;	return from main will return to caller
                                   1152 ;--------------------------------------------------------
                                   1153 ; code
                                   1154 ;--------------------------------------------------------
                                   1155 	.area CSEG    (CODE)
                                   1156 ;------------------------------------------------------------
                                   1157 ;Allocation info for local variables in function 'SYSCLK_Init'
                                   1158 ;------------------------------------------------------------
                                   1159 ;i                         Allocated to registers 
                                   1160 ;------------------------------------------------------------
                           000000  1161 	G$SYSCLK_Init$0$0 ==.
                           000000  1162 	C$c8051_SDCC.h$42$0$0 ==.
                                   1163 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:42: void SYSCLK_Init(void)
                                   1164 ;	-----------------------------------------
                                   1165 ;	 function SYSCLK_Init
                                   1166 ;	-----------------------------------------
      0000BE                       1167 _SYSCLK_Init:
                           000007  1168 	ar7 = 0x07
                           000006  1169 	ar6 = 0x06
                           000005  1170 	ar5 = 0x05
                           000004  1171 	ar4 = 0x04
                           000003  1172 	ar3 = 0x03
                           000002  1173 	ar2 = 0x02
                           000001  1174 	ar1 = 0x01
                           000000  1175 	ar0 = 0x00
                           000000  1176 	C$c8051_SDCC.h$46$1$31 ==.
                                   1177 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:46: OSCXCN = 0x67;                      // start external oscillator with
      0000BE 75 B1 67         [24] 1178 	mov	_OSCXCN,#0x67
                           000003  1179 	C$c8051_SDCC.h$49$1$31 ==.
                                   1180 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:49: for (i=0; i < 256; i++);            // wait for oscillator to start
      0000C1 7E 00            [12] 1181 	mov	r6,#0x00
      0000C3 7F 01            [12] 1182 	mov	r7,#0x01
      0000C5                       1183 00107$:
      0000C5 1E               [12] 1184 	dec	r6
      0000C6 BE FF 01         [24] 1185 	cjne	r6,#0xFF,00121$
      0000C9 1F               [12] 1186 	dec	r7
      0000CA                       1187 00121$:
      0000CA EE               [12] 1188 	mov	a,r6
      0000CB 4F               [12] 1189 	orl	a,r7
      0000CC 70 F7            [24] 1190 	jnz	00107$
                           000010  1191 	C$c8051_SDCC.h$51$1$31 ==.
                                   1192 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:51: while (!(OSCXCN & 0x80));           // Wait for crystal osc. to settle
      0000CE                       1193 00102$:
      0000CE E5 B1            [12] 1194 	mov	a,_OSCXCN
      0000D0 30 E7 FB         [24] 1195 	jnb	acc.7,00102$
                           000015  1196 	C$c8051_SDCC.h$53$1$31 ==.
                                   1197 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:53: OSCICN = 0x88;                      // select external oscillator as SYSCLK
      0000D3 75 B2 88         [24] 1198 	mov	_OSCICN,#0x88
                           000018  1199 	C$c8051_SDCC.h$56$1$31 ==.
                           000018  1200 	XG$SYSCLK_Init$0$0 ==.
      0000D6 22               [24] 1201 	ret
                                   1202 ;------------------------------------------------------------
                                   1203 ;Allocation info for local variables in function 'UART0_Init'
                                   1204 ;------------------------------------------------------------
                           000019  1205 	G$UART0_Init$0$0 ==.
                           000019  1206 	C$c8051_SDCC.h$64$1$31 ==.
                                   1207 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:64: void UART0_Init(void)
                                   1208 ;	-----------------------------------------
                                   1209 ;	 function UART0_Init
                                   1210 ;	-----------------------------------------
      0000D7                       1211 _UART0_Init:
                           000019  1212 	C$c8051_SDCC.h$66$1$33 ==.
                                   1213 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:66: SCON0  = 0x50;                      // SCON0: mode 1, 8-bit UART, enable RX
      0000D7 75 98 50         [24] 1214 	mov	_SCON0,#0x50
                           00001C  1215 	C$c8051_SDCC.h$67$1$33 ==.
                                   1216 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:67: TMOD   = 0x20;                      // TMOD: timer 1, mode 2, 8-bit reload
      0000DA 75 89 20         [24] 1217 	mov	_TMOD,#0x20
                           00001F  1218 	C$c8051_SDCC.h$68$1$33 ==.
                                   1219 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:68: TH1    = -(SYSCLK/BAUDRATE/16);     // set Timer1 reload value for baudrate
      0000DD 75 8D DC         [24] 1220 	mov	_TH1,#0xDC
                           000022  1221 	C$c8051_SDCC.h$69$1$33 ==.
                                   1222 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:69: TR1    = 1;                         // start Timer1
      0000E0 D2 8E            [12] 1223 	setb	_TR1
                           000024  1224 	C$c8051_SDCC.h$70$1$33 ==.
                                   1225 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:70: CKCON |= 0x10;                      // Timer1 uses SYSCLK as time base
      0000E2 43 8E 10         [24] 1226 	orl	_CKCON,#0x10
                           000027  1227 	C$c8051_SDCC.h$71$1$33 ==.
                                   1228 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:71: PCON  |= 0x80;                      // SMOD00 = 1 (disable baud rate 
      0000E5 43 87 80         [24] 1229 	orl	_PCON,#0x80
                           00002A  1230 	C$c8051_SDCC.h$73$1$33 ==.
                                   1231 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:73: TI0    = 1;                         // Indicate TX0 ready
      0000E8 D2 99            [12] 1232 	setb	_TI0
                           00002C  1233 	C$c8051_SDCC.h$74$1$33 ==.
                                   1234 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:74: P0MDOUT |= 0x01;                    // Set TX0 to push/pull
      0000EA 43 A4 01         [24] 1235 	orl	_P0MDOUT,#0x01
                           00002F  1236 	C$c8051_SDCC.h$75$1$33 ==.
                           00002F  1237 	XG$UART0_Init$0$0 ==.
      0000ED 22               [24] 1238 	ret
                                   1239 ;------------------------------------------------------------
                                   1240 ;Allocation info for local variables in function 'Sys_Init'
                                   1241 ;------------------------------------------------------------
                           000030  1242 	G$Sys_Init$0$0 ==.
                           000030  1243 	C$c8051_SDCC.h$83$1$33 ==.
                                   1244 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:83: void Sys_Init(void)
                                   1245 ;	-----------------------------------------
                                   1246 ;	 function Sys_Init
                                   1247 ;	-----------------------------------------
      0000EE                       1248 _Sys_Init:
                           000030  1249 	C$c8051_SDCC.h$85$1$35 ==.
                                   1250 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:85: WDTCN = 0xde;			// disable watchdog timer
      0000EE 75 FF DE         [24] 1251 	mov	_WDTCN,#0xDE
                           000033  1252 	C$c8051_SDCC.h$86$1$35 ==.
                                   1253 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:86: WDTCN = 0xad;
      0000F1 75 FF AD         [24] 1254 	mov	_WDTCN,#0xAD
                           000036  1255 	C$c8051_SDCC.h$88$1$35 ==.
                                   1256 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:88: SYSCLK_Init();			// initialize oscillator
      0000F4 12 00 BE         [24] 1257 	lcall	_SYSCLK_Init
                           000039  1258 	C$c8051_SDCC.h$89$1$35 ==.
                                   1259 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:89: UART0_Init();			// initialize UART0
      0000F7 12 00 D7         [24] 1260 	lcall	_UART0_Init
                           00003C  1261 	C$c8051_SDCC.h$91$1$35 ==.
                                   1262 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:91: XBR0 |= 0x04;
      0000FA 43 E1 04         [24] 1263 	orl	_XBR0,#0x04
                           00003F  1264 	C$c8051_SDCC.h$92$1$35 ==.
                                   1265 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:92: XBR2 |= 0x40;                    	// Enable crossbar and weak pull-ups
      0000FD 43 E3 40         [24] 1266 	orl	_XBR2,#0x40
                           000042  1267 	C$c8051_SDCC.h$93$1$35 ==.
                           000042  1268 	XG$Sys_Init$0$0 ==.
      000100 22               [24] 1269 	ret
                                   1270 ;------------------------------------------------------------
                                   1271 ;Allocation info for local variables in function 'putchar'
                                   1272 ;------------------------------------------------------------
                                   1273 ;c                         Allocated to registers r7 
                                   1274 ;------------------------------------------------------------
                           000043  1275 	G$putchar$0$0 ==.
                           000043  1276 	C$c8051_SDCC.h$98$1$35 ==.
                                   1277 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:98: void putchar(char c)
                                   1278 ;	-----------------------------------------
                                   1279 ;	 function putchar
                                   1280 ;	-----------------------------------------
      000101                       1281 _putchar:
      000101 AF 82            [24] 1282 	mov	r7,dpl
                           000045  1283 	C$c8051_SDCC.h$100$1$37 ==.
                                   1284 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:100: while (!TI0); 
      000103                       1285 00101$:
                           000045  1286 	C$c8051_SDCC.h$101$1$37 ==.
                                   1287 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:101: TI0 = 0;
      000103 10 99 02         [24] 1288 	jbc	_TI0,00112$
      000106 80 FB            [24] 1289 	sjmp	00101$
      000108                       1290 00112$:
                           00004A  1291 	C$c8051_SDCC.h$102$1$37 ==.
                                   1292 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:102: SBUF0 = c;
      000108 8F 99            [24] 1293 	mov	_SBUF0,r7
                           00004C  1294 	C$c8051_SDCC.h$103$1$37 ==.
                           00004C  1295 	XG$putchar$0$0 ==.
      00010A 22               [24] 1296 	ret
                                   1297 ;------------------------------------------------------------
                                   1298 ;Allocation info for local variables in function 'getchar'
                                   1299 ;------------------------------------------------------------
                                   1300 ;c                         Allocated to registers 
                                   1301 ;------------------------------------------------------------
                           00004D  1302 	G$getchar$0$0 ==.
                           00004D  1303 	C$c8051_SDCC.h$108$1$37 ==.
                                   1304 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:108: char getchar(void)
                                   1305 ;	-----------------------------------------
                                   1306 ;	 function getchar
                                   1307 ;	-----------------------------------------
      00010B                       1308 _getchar:
                           00004D  1309 	C$c8051_SDCC.h$111$1$39 ==.
                                   1310 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:111: while (!RI0);
      00010B                       1311 00101$:
                           00004D  1312 	C$c8051_SDCC.h$112$1$39 ==.
                                   1313 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:112: RI0 = 0;
      00010B 10 98 02         [24] 1314 	jbc	_RI0,00112$
      00010E 80 FB            [24] 1315 	sjmp	00101$
      000110                       1316 00112$:
                           000052  1317 	C$c8051_SDCC.h$113$1$39 ==.
                                   1318 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:113: c = SBUF0;
      000110 85 99 82         [24] 1319 	mov	dpl,_SBUF0
                           000055  1320 	C$c8051_SDCC.h$114$1$39 ==.
                                   1321 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:114: putchar(c);                          // echo to terminal
      000113 12 01 01         [24] 1322 	lcall	_putchar
                           000058  1323 	C$c8051_SDCC.h$115$1$39 ==.
                                   1324 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:115: return SBUF0;
      000116 85 99 82         [24] 1325 	mov	dpl,_SBUF0
                           00005B  1326 	C$c8051_SDCC.h$116$1$39 ==.
                           00005B  1327 	XG$getchar$0$0 ==.
      000119 22               [24] 1328 	ret
                                   1329 ;------------------------------------------------------------
                                   1330 ;Allocation info for local variables in function 'lcd_print'
                                   1331 ;------------------------------------------------------------
                                   1332 ;fmt                       Allocated to stack - _bp -5
                                   1333 ;len                       Allocated to registers r6 
                                   1334 ;i                         Allocated to registers 
                                   1335 ;ap                        Allocated to registers 
                                   1336 ;text                      Allocated with name '_lcd_print_text_1_73'
                                   1337 ;------------------------------------------------------------
                           00005C  1338 	G$lcd_print$0$0 ==.
                           00005C  1339 	C$i2c.h$81$1$39 ==.
                                   1340 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:81: void lcd_print(const char *fmt, ...)
                                   1341 ;	-----------------------------------------
                                   1342 ;	 function lcd_print
                                   1343 ;	-----------------------------------------
      00011A                       1344 _lcd_print:
      00011A C0 0F            [24] 1345 	push	_bp
      00011C 85 81 0F         [24] 1346 	mov	_bp,sp
                           000061  1347 	C$i2c.h$87$1$73 ==.
                                   1348 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:87: if ( strlen(fmt) <= 0 ) return;   //If there is no data to print, return
      00011F E5 0F            [12] 1349 	mov	a,_bp
      000121 24 FB            [12] 1350 	add	a,#0xfb
      000123 F8               [12] 1351 	mov	r0,a
      000124 86 82            [24] 1352 	mov	dpl,@r0
      000126 08               [12] 1353 	inc	r0
      000127 86 83            [24] 1354 	mov	dph,@r0
      000129 08               [12] 1355 	inc	r0
      00012A 86 F0            [24] 1356 	mov	b,@r0
      00012C 12 16 E1         [24] 1357 	lcall	_strlen
      00012F E5 82            [12] 1358 	mov	a,dpl
      000131 85 83 F0         [24] 1359 	mov	b,dph
      000134 45 F0            [12] 1360 	orl	a,b
      000136 70 02            [24] 1361 	jnz	00102$
      000138 80 62            [24] 1362 	sjmp	00109$
      00013A                       1363 00102$:
                           00007C  1364 	C$i2c.h$89$2$74 ==.
                                   1365 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:89: va_start(ap, fmt);
      00013A E5 0F            [12] 1366 	mov	a,_bp
      00013C 24 FB            [12] 1367 	add	a,#0xFB
      00013E FF               [12] 1368 	mov	r7,a
      00013F 8F 0B            [24] 1369 	mov	_vsprintf_PARM_3,r7
                           000083  1370 	C$i2c.h$90$1$73 ==.
                                   1371 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:90: vsprintf(text, fmt, ap);
      000141 E5 0F            [12] 1372 	mov	a,_bp
      000143 24 FB            [12] 1373 	add	a,#0xfb
      000145 F8               [12] 1374 	mov	r0,a
      000146 86 08            [24] 1375 	mov	_vsprintf_PARM_2,@r0
      000148 08               [12] 1376 	inc	r0
      000149 86 09            [24] 1377 	mov	(_vsprintf_PARM_2 + 1),@r0
      00014B 08               [12] 1378 	inc	r0
      00014C 86 0A            [24] 1379 	mov	(_vsprintf_PARM_2 + 2),@r0
      00014E 90 00 01         [24] 1380 	mov	dptr,#_lcd_print_text_1_73
      000151 75 F0 00         [24] 1381 	mov	b,#0x00
      000154 12 0E E7         [24] 1382 	lcall	_vsprintf
                           000099  1383 	C$i2c.h$93$1$73 ==.
                                   1384 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:93: len = strlen(text);
      000157 90 00 01         [24] 1385 	mov	dptr,#_lcd_print_text_1_73
      00015A 75 F0 00         [24] 1386 	mov	b,#0x00
      00015D 12 16 E1         [24] 1387 	lcall	_strlen
      000160 AE 82            [24] 1388 	mov	r6,dpl
                           0000A4  1389 	C$i2c.h$94$1$73 ==.
                                   1390 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:94: for(i=0; i<len; i++)
      000162 7F 00            [12] 1391 	mov	r7,#0x00
      000164                       1392 00107$:
      000164 C3               [12] 1393 	clr	c
      000165 EF               [12] 1394 	mov	a,r7
      000166 9E               [12] 1395 	subb	a,r6
      000167 50 1F            [24] 1396 	jnc	00105$
                           0000AB  1397 	C$i2c.h$96$2$76 ==.
                                   1398 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:96: if(text[i] == (unsigned char)'\n') text[i] = 13;
      000169 EF               [12] 1399 	mov	a,r7
      00016A 24 01            [12] 1400 	add	a,#_lcd_print_text_1_73
      00016C F5 82            [12] 1401 	mov	dpl,a
      00016E E4               [12] 1402 	clr	a
      00016F 34 00            [12] 1403 	addc	a,#(_lcd_print_text_1_73 >> 8)
      000171 F5 83            [12] 1404 	mov	dph,a
      000173 E0               [24] 1405 	movx	a,@dptr
      000174 FD               [12] 1406 	mov	r5,a
      000175 BD 0A 0D         [24] 1407 	cjne	r5,#0x0A,00108$
      000178 EF               [12] 1408 	mov	a,r7
      000179 24 01            [12] 1409 	add	a,#_lcd_print_text_1_73
      00017B F5 82            [12] 1410 	mov	dpl,a
      00017D E4               [12] 1411 	clr	a
      00017E 34 00            [12] 1412 	addc	a,#(_lcd_print_text_1_73 >> 8)
      000180 F5 83            [12] 1413 	mov	dph,a
      000182 74 0D            [12] 1414 	mov	a,#0x0D
      000184 F0               [24] 1415 	movx	@dptr,a
      000185                       1416 00108$:
                           0000C7  1417 	C$i2c.h$94$1$73 ==.
                                   1418 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:94: for(i=0; i<len; i++)
      000185 0F               [12] 1419 	inc	r7
      000186 80 DC            [24] 1420 	sjmp	00107$
      000188                       1421 00105$:
                           0000CA  1422 	C$i2c.h$99$1$73 ==.
                                   1423 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:99: i2c_write_data(0xC6, 0x00, text, len);
      000188 75 28 01         [24] 1424 	mov	_i2c_write_data_PARM_3,#_lcd_print_text_1_73
      00018B 75 29 00         [24] 1425 	mov	(_i2c_write_data_PARM_3 + 1),#(_lcd_print_text_1_73 >> 8)
      00018E 75 2A 00         [24] 1426 	mov	(_i2c_write_data_PARM_3 + 2),#0x00
      000191 75 27 00         [24] 1427 	mov	_i2c_write_data_PARM_2,#0x00
      000194 8E 2B            [24] 1428 	mov	_i2c_write_data_PARM_4,r6
      000196 75 82 C6         [24] 1429 	mov	dpl,#0xC6
      000199 12 04 30         [24] 1430 	lcall	_i2c_write_data
      00019C                       1431 00109$:
      00019C D0 0F            [24] 1432 	pop	_bp
                           0000E0  1433 	C$i2c.h$100$1$73 ==.
                           0000E0  1434 	XG$lcd_print$0$0 ==.
      00019E 22               [24] 1435 	ret
                                   1436 ;------------------------------------------------------------
                                   1437 ;Allocation info for local variables in function 'lcd_clear'
                                   1438 ;------------------------------------------------------------
                                   1439 ;NumBytes                  Allocated with name '_lcd_clear_NumBytes_1_77'
                                   1440 ;Cmd                       Allocated with name '_lcd_clear_Cmd_1_77'
                                   1441 ;------------------------------------------------------------
                           0000E1  1442 	G$lcd_clear$0$0 ==.
                           0000E1  1443 	C$i2c.h$103$1$73 ==.
                                   1444 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:103: void lcd_clear()
                                   1445 ;	-----------------------------------------
                                   1446 ;	 function lcd_clear
                                   1447 ;	-----------------------------------------
      00019F                       1448 _lcd_clear:
                           0000E1  1449 	C$i2c.h$105$1$73 ==.
                                   1450 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:105: unsigned char NumBytes=0, Cmd[2];
      00019F 75 22 00         [24] 1451 	mov	_lcd_clear_NumBytes_1_77,#0x00
                           0000E4  1452 	C$i2c.h$107$1$77 ==.
                                   1453 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:107: while(NumBytes < 64) i2c_read_data(0xC6, 0x00, &NumBytes, 1);
      0001A2                       1454 00101$:
      0001A2 74 C0            [12] 1455 	mov	a,#0x100 - 0x40
      0001A4 25 22            [12] 1456 	add	a,_lcd_clear_NumBytes_1_77
      0001A6 40 17            [24] 1457 	jc	00103$
      0001A8 75 2D 22         [24] 1458 	mov	_i2c_read_data_PARM_3,#_lcd_clear_NumBytes_1_77
      0001AB 75 2E 00         [24] 1459 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0001AE 75 2F 40         [24] 1460 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0001B1 75 2C 00         [24] 1461 	mov	_i2c_read_data_PARM_2,#0x00
      0001B4 75 30 01         [24] 1462 	mov	_i2c_read_data_PARM_4,#0x01
      0001B7 75 82 C6         [24] 1463 	mov	dpl,#0xC6
      0001BA 12 04 A6         [24] 1464 	lcall	_i2c_read_data
      0001BD 80 E3            [24] 1465 	sjmp	00101$
      0001BF                       1466 00103$:
                           000101  1467 	C$i2c.h$109$1$77 ==.
                                   1468 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:109: Cmd[0] = 12;
      0001BF 75 23 0C         [24] 1469 	mov	_lcd_clear_Cmd_1_77,#0x0C
                           000104  1470 	C$i2c.h$110$1$77 ==.
                                   1471 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:110: i2c_write_data(0xC6, 0x00, Cmd, 1);
      0001C2 75 28 23         [24] 1472 	mov	_i2c_write_data_PARM_3,#_lcd_clear_Cmd_1_77
      0001C5 75 29 00         [24] 1473 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      0001C8 75 2A 40         [24] 1474 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      0001CB 75 27 00         [24] 1475 	mov	_i2c_write_data_PARM_2,#0x00
      0001CE 75 2B 01         [24] 1476 	mov	_i2c_write_data_PARM_4,#0x01
      0001D1 75 82 C6         [24] 1477 	mov	dpl,#0xC6
      0001D4 12 04 30         [24] 1478 	lcall	_i2c_write_data
                           000119  1479 	C$i2c.h$111$1$77 ==.
                           000119  1480 	XG$lcd_clear$0$0 ==.
      0001D7 22               [24] 1481 	ret
                                   1482 ;------------------------------------------------------------
                                   1483 ;Allocation info for local variables in function 'read_keypad'
                                   1484 ;------------------------------------------------------------
                                   1485 ;i                         Allocated to registers r7 
                                   1486 ;Data                      Allocated with name '_read_keypad_Data_1_78'
                                   1487 ;------------------------------------------------------------
                           00011A  1488 	G$read_keypad$0$0 ==.
                           00011A  1489 	C$i2c.h$114$1$77 ==.
                                   1490 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:114: char read_keypad()
                                   1491 ;	-----------------------------------------
                                   1492 ;	 function read_keypad
                                   1493 ;	-----------------------------------------
      0001D8                       1494 _read_keypad:
                           00011A  1495 	C$i2c.h$118$1$78 ==.
                                   1496 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:118: i2c_read_data(0xC6, 0x01, Data, 2); //Read I2C data on address 192, register 1, 2 bytes of data.
      0001D8 75 2D 25         [24] 1497 	mov	_i2c_read_data_PARM_3,#_read_keypad_Data_1_78
      0001DB 75 2E 00         [24] 1498 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0001DE 75 2F 40         [24] 1499 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0001E1 75 2C 01         [24] 1500 	mov	_i2c_read_data_PARM_2,#0x01
      0001E4 75 30 02         [24] 1501 	mov	_i2c_read_data_PARM_4,#0x02
      0001E7 75 82 C6         [24] 1502 	mov	dpl,#0xC6
      0001EA 12 04 A6         [24] 1503 	lcall	_i2c_read_data
                           00012F  1504 	C$i2c.h$119$1$78 ==.
                                   1505 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:119: if(Data[0] == 0xFF) return 0;  //No response on bus, no display
      0001ED 74 FF            [12] 1506 	mov	a,#0xFF
      0001EF B5 25 05         [24] 1507 	cjne	a,_read_keypad_Data_1_78,00102$
      0001F2 75 82 00         [24] 1508 	mov	dpl,#0x00
      0001F5 80 5F            [24] 1509 	sjmp	00116$
      0001F7                       1510 00102$:
                           000139  1511 	C$i2c.h$121$1$78 ==.
                                   1512 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:121: for(i=0; i<8; i++)             //loop 8 times
      0001F7 7F 00            [12] 1513 	mov	r7,#0x00
      0001F9 8F 06            [24] 1514 	mov	ar6,r7
      0001FB                       1515 00114$:
                           00013D  1516 	C$i2c.h$123$2$79 ==.
                                   1517 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:123: if(Data[0] & (0x01 << i))  //find the ASCII value of the keypad read, if it is the current loop value
      0001FB 8E F0            [24] 1518 	mov	b,r6
      0001FD 05 F0            [12] 1519 	inc	b
      0001FF 7C 01            [12] 1520 	mov	r4,#0x01
      000201 7D 00            [12] 1521 	mov	r5,#0x00
      000203 80 06            [24] 1522 	sjmp	00145$
      000205                       1523 00144$:
      000205 EC               [12] 1524 	mov	a,r4
      000206 2C               [12] 1525 	add	a,r4
      000207 FC               [12] 1526 	mov	r4,a
      000208 ED               [12] 1527 	mov	a,r5
      000209 33               [12] 1528 	rlc	a
      00020A FD               [12] 1529 	mov	r5,a
      00020B                       1530 00145$:
      00020B D5 F0 F7         [24] 1531 	djnz	b,00144$
      00020E AA 25            [24] 1532 	mov	r2,_read_keypad_Data_1_78
      000210 7B 00            [12] 1533 	mov	r3,#0x00
      000212 EA               [12] 1534 	mov	a,r2
      000213 52 04            [12] 1535 	anl	ar4,a
      000215 EB               [12] 1536 	mov	a,r3
      000216 52 05            [12] 1537 	anl	ar5,a
      000218 EC               [12] 1538 	mov	a,r4
      000219 4D               [12] 1539 	orl	a,r5
      00021A 60 07            [24] 1540 	jz	00115$
                           00015E  1541 	C$i2c.h$124$2$79 ==.
                                   1542 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:124: return i+49;
      00021C 74 31            [12] 1543 	mov	a,#0x31
      00021E 2F               [12] 1544 	add	a,r7
      00021F F5 82            [12] 1545 	mov	dpl,a
      000221 80 33            [24] 1546 	sjmp	00116$
      000223                       1547 00115$:
                           000165  1548 	C$i2c.h$121$1$78 ==.
                                   1549 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:121: for(i=0; i<8; i++)             //loop 8 times
      000223 0E               [12] 1550 	inc	r6
      000224 8E 07            [24] 1551 	mov	ar7,r6
      000226 BE 08 00         [24] 1552 	cjne	r6,#0x08,00147$
      000229                       1553 00147$:
      000229 40 D0            [24] 1554 	jc	00114$
                           00016D  1555 	C$i2c.h$127$1$78 ==.
                                   1556 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:127: if(Data[1] & 0x01) return '9'; //if the value is equal to 9 return 9.
      00022B E5 26            [12] 1557 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      00022D 30 E0 05         [24] 1558 	jnb	acc.0,00107$
      000230 75 82 39         [24] 1559 	mov	dpl,#0x39
      000233 80 21            [24] 1560 	sjmp	00116$
      000235                       1561 00107$:
                           000177  1562 	C$i2c.h$129$1$78 ==.
                                   1563 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:129: if(Data[1] & 0x02) return '*'; //if the value is equal to the star.
      000235 E5 26            [12] 1564 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000237 30 E1 05         [24] 1565 	jnb	acc.1,00109$
      00023A 75 82 2A         [24] 1566 	mov	dpl,#0x2A
      00023D 80 17            [24] 1567 	sjmp	00116$
      00023F                       1568 00109$:
                           000181  1569 	C$i2c.h$131$1$78 ==.
                                   1570 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:131: if(Data[1] & 0x04) return '0'; //if the value is equal to the 0 key
      00023F E5 26            [12] 1571 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000241 30 E2 05         [24] 1572 	jnb	acc.2,00111$
      000244 75 82 30         [24] 1573 	mov	dpl,#0x30
      000247 80 0D            [24] 1574 	sjmp	00116$
      000249                       1575 00111$:
                           00018B  1576 	C$i2c.h$133$1$78 ==.
                                   1577 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:133: if(Data[1] & 0x08) return '#'; //if the value is equal to the pound key
      000249 E5 26            [12] 1578 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      00024B 30 E3 05         [24] 1579 	jnb	acc.3,00113$
      00024E 75 82 23         [24] 1580 	mov	dpl,#0x23
      000251 80 03            [24] 1581 	sjmp	00116$
      000253                       1582 00113$:
                           000195  1583 	C$i2c.h$135$1$78 ==.
                                   1584 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:135: return -1;                     //else return a numerical -1 (0xFF)
      000253 75 82 FF         [24] 1585 	mov	dpl,#0xFF
      000256                       1586 00116$:
                           000198  1587 	C$i2c.h$136$1$78 ==.
                           000198  1588 	XG$read_keypad$0$0 ==.
      000256 22               [24] 1589 	ret
                                   1590 ;------------------------------------------------------------
                                   1591 ;Allocation info for local variables in function 'kpd_input'
                                   1592 ;------------------------------------------------------------
                                   1593 ;mode                      Allocated to registers r7 
                                   1594 ;sum                       Allocated to registers r5 r6 
                                   1595 ;key                       Allocated to registers r3 
                                   1596 ;i                         Allocated to registers 
                                   1597 ;------------------------------------------------------------
                           000199  1598 	G$kpd_input$0$0 ==.
                           000199  1599 	C$i2c.h$148$1$78 ==.
                                   1600 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:148: unsigned int kpd_input(char mode)
                                   1601 ;	-----------------------------------------
                                   1602 ;	 function kpd_input
                                   1603 ;	-----------------------------------------
      000257                       1604 _kpd_input:
      000257 AF 82            [24] 1605 	mov	r7,dpl
                           00019B  1606 	C$i2c.h$153$1$81 ==.
                                   1607 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:153: sum = 0;
                           00019B  1608 	C$i2c.h$156$1$81 ==.
                                   1609 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:156: if(mode==0)lcd_print("\nType digits; end w/#");
      000259 E4               [12] 1610 	clr	a
      00025A FD               [12] 1611 	mov	r5,a
      00025B FE               [12] 1612 	mov	r6,a
      00025C EF               [12] 1613 	mov	a,r7
      00025D 70 1D            [24] 1614 	jnz	00102$
      00025F C0 06            [24] 1615 	push	ar6
      000261 C0 05            [24] 1616 	push	ar5
      000263 74 A1            [12] 1617 	mov	a,#___str_0
      000265 C0 E0            [24] 1618 	push	acc
      000267 74 18            [12] 1619 	mov	a,#(___str_0 >> 8)
      000269 C0 E0            [24] 1620 	push	acc
      00026B 74 80            [12] 1621 	mov	a,#0x80
      00026D C0 E0            [24] 1622 	push	acc
      00026F 12 01 1A         [24] 1623 	lcall	_lcd_print
      000272 15 81            [12] 1624 	dec	sp
      000274 15 81            [12] 1625 	dec	sp
      000276 15 81            [12] 1626 	dec	sp
      000278 D0 05            [24] 1627 	pop	ar5
      00027A D0 06            [24] 1628 	pop	ar6
      00027C                       1629 00102$:
                           0001BE  1630 	C$i2c.h$158$1$81 ==.
                                   1631 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:158: lcd_print("     %c%c%c%c%c",0x08,0x08,0x08,0x08,0x08);
      00027C C0 06            [24] 1632 	push	ar6
      00027E C0 05            [24] 1633 	push	ar5
      000280 74 08            [12] 1634 	mov	a,#0x08
      000282 C0 E0            [24] 1635 	push	acc
      000284 E4               [12] 1636 	clr	a
      000285 C0 E0            [24] 1637 	push	acc
      000287 74 08            [12] 1638 	mov	a,#0x08
      000289 C0 E0            [24] 1639 	push	acc
      00028B E4               [12] 1640 	clr	a
      00028C C0 E0            [24] 1641 	push	acc
      00028E 74 08            [12] 1642 	mov	a,#0x08
      000290 C0 E0            [24] 1643 	push	acc
      000292 E4               [12] 1644 	clr	a
      000293 C0 E0            [24] 1645 	push	acc
      000295 74 08            [12] 1646 	mov	a,#0x08
      000297 C0 E0            [24] 1647 	push	acc
      000299 E4               [12] 1648 	clr	a
      00029A C0 E0            [24] 1649 	push	acc
      00029C 74 08            [12] 1650 	mov	a,#0x08
      00029E C0 E0            [24] 1651 	push	acc
      0002A0 E4               [12] 1652 	clr	a
      0002A1 C0 E0            [24] 1653 	push	acc
      0002A3 74 B7            [12] 1654 	mov	a,#___str_1
      0002A5 C0 E0            [24] 1655 	push	acc
      0002A7 74 18            [12] 1656 	mov	a,#(___str_1 >> 8)
      0002A9 C0 E0            [24] 1657 	push	acc
      0002AB 74 80            [12] 1658 	mov	a,#0x80
      0002AD C0 E0            [24] 1659 	push	acc
      0002AF 12 01 1A         [24] 1660 	lcall	_lcd_print
      0002B2 E5 81            [12] 1661 	mov	a,sp
      0002B4 24 F3            [12] 1662 	add	a,#0xf3
      0002B6 F5 81            [12] 1663 	mov	sp,a
                           0001FA  1664 	C$i2c.h$160$1$81 ==.
                                   1665 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:160: delay_time(500000);	//Add 20ms delay before reading i2c in loop
      0002B8 90 A1 20         [24] 1666 	mov	dptr,#0xA120
      0002BB 75 F0 07         [24] 1667 	mov	b,#0x07
      0002BE E4               [12] 1668 	clr	a
      0002BF 12 03 CB         [24] 1669 	lcall	_delay_time
      0002C2 D0 05            [24] 1670 	pop	ar5
      0002C4 D0 06            [24] 1671 	pop	ar6
                           000208  1672 	C$i2c.h$164$1$81 ==.
                                   1673 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:164: for(i=0; i<5; i++)
      0002C6 7F 00            [12] 1674 	mov	r7,#0x00
                           00020A  1675 	C$i2c.h$166$3$84 ==.
                                   1676 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:166: while(((key=read_keypad()) == -1) || (key == '*'))delay_time(10000);
      0002C8                       1677 00104$:
      0002C8 C0 07            [24] 1678 	push	ar7
      0002CA C0 06            [24] 1679 	push	ar6
      0002CC C0 05            [24] 1680 	push	ar5
      0002CE 12 01 D8         [24] 1681 	lcall	_read_keypad
      0002D1 AC 82            [24] 1682 	mov	r4,dpl
      0002D3 D0 05            [24] 1683 	pop	ar5
      0002D5 D0 06            [24] 1684 	pop	ar6
      0002D7 D0 07            [24] 1685 	pop	ar7
      0002D9 8C 03            [24] 1686 	mov	ar3,r4
      0002DB BC FF 02         [24] 1687 	cjne	r4,#0xFF,00146$
      0002DE 80 03            [24] 1688 	sjmp	00105$
      0002E0                       1689 00146$:
      0002E0 BB 2A 17         [24] 1690 	cjne	r3,#0x2A,00106$
      0002E3                       1691 00105$:
      0002E3 90 27 10         [24] 1692 	mov	dptr,#0x2710
      0002E6 E4               [12] 1693 	clr	a
      0002E7 F5 F0            [12] 1694 	mov	b,a
      0002E9 C0 07            [24] 1695 	push	ar7
      0002EB C0 06            [24] 1696 	push	ar6
      0002ED C0 05            [24] 1697 	push	ar5
      0002EF 12 03 CB         [24] 1698 	lcall	_delay_time
      0002F2 D0 05            [24] 1699 	pop	ar5
      0002F4 D0 06            [24] 1700 	pop	ar6
      0002F6 D0 07            [24] 1701 	pop	ar7
      0002F8 80 CE            [24] 1702 	sjmp	00104$
      0002FA                       1703 00106$:
                           00023C  1704 	C$i2c.h$167$2$82 ==.
                                   1705 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:167: if(key == '#')
      0002FA BB 23 2A         [24] 1706 	cjne	r3,#0x23,00114$
                           00023F  1707 	C$i2c.h$169$3$83 ==.
                                   1708 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:169: while(read_keypad() == '#')delay_time(10000);
      0002FD                       1709 00107$:
      0002FD C0 06            [24] 1710 	push	ar6
      0002FF C0 05            [24] 1711 	push	ar5
      000301 12 01 D8         [24] 1712 	lcall	_read_keypad
      000304 AC 82            [24] 1713 	mov	r4,dpl
      000306 D0 05            [24] 1714 	pop	ar5
      000308 D0 06            [24] 1715 	pop	ar6
      00030A BC 23 13         [24] 1716 	cjne	r4,#0x23,00109$
      00030D 90 27 10         [24] 1717 	mov	dptr,#0x2710
      000310 E4               [12] 1718 	clr	a
      000311 F5 F0            [12] 1719 	mov	b,a
      000313 C0 06            [24] 1720 	push	ar6
      000315 C0 05            [24] 1721 	push	ar5
      000317 12 03 CB         [24] 1722 	lcall	_delay_time
      00031A D0 05            [24] 1723 	pop	ar5
      00031C D0 06            [24] 1724 	pop	ar6
      00031E 80 DD            [24] 1725 	sjmp	00107$
      000320                       1726 00109$:
                           000262  1727 	C$i2c.h$170$3$83 ==.
                                   1728 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:170: return sum;
      000320 8D 82            [24] 1729 	mov	dpl,r5
      000322 8E 83            [24] 1730 	mov	dph,r6
      000324 02 03 CA         [24] 1731 	ljmp	00119$
      000327                       1732 00114$:
                           000269  1733 	C$i2c.h$174$3$84 ==.
                                   1734 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:174: lcd_print("%c", key);
      000327 EB               [12] 1735 	mov	a,r3
      000328 FA               [12] 1736 	mov	r2,a
      000329 33               [12] 1737 	rlc	a
      00032A 95 E0            [12] 1738 	subb	a,acc
      00032C FC               [12] 1739 	mov	r4,a
      00032D C0 07            [24] 1740 	push	ar7
      00032F C0 06            [24] 1741 	push	ar6
      000331 C0 05            [24] 1742 	push	ar5
      000333 C0 04            [24] 1743 	push	ar4
      000335 C0 03            [24] 1744 	push	ar3
      000337 C0 02            [24] 1745 	push	ar2
      000339 C0 02            [24] 1746 	push	ar2
      00033B C0 04            [24] 1747 	push	ar4
      00033D 74 C7            [12] 1748 	mov	a,#___str_2
      00033F C0 E0            [24] 1749 	push	acc
      000341 74 18            [12] 1750 	mov	a,#(___str_2 >> 8)
      000343 C0 E0            [24] 1751 	push	acc
      000345 74 80            [12] 1752 	mov	a,#0x80
      000347 C0 E0            [24] 1753 	push	acc
      000349 12 01 1A         [24] 1754 	lcall	_lcd_print
      00034C E5 81            [12] 1755 	mov	a,sp
      00034E 24 FB            [12] 1756 	add	a,#0xfb
      000350 F5 81            [12] 1757 	mov	sp,a
      000352 D0 02            [24] 1758 	pop	ar2
      000354 D0 03            [24] 1759 	pop	ar3
      000356 D0 04            [24] 1760 	pop	ar4
      000358 D0 05            [24] 1761 	pop	ar5
      00035A D0 06            [24] 1762 	pop	ar6
                           00029E  1763 	C$i2c.h$175$1$81 ==.
                                   1764 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:175: sum = sum*10 + key - '0';
      00035C 8D 11            [24] 1765 	mov	__mulint_PARM_2,r5
      00035E 8E 12            [24] 1766 	mov	(__mulint_PARM_2 + 1),r6
      000360 90 00 0A         [24] 1767 	mov	dptr,#0x000A
      000363 C0 04            [24] 1768 	push	ar4
      000365 C0 03            [24] 1769 	push	ar3
      000367 C0 02            [24] 1770 	push	ar2
      000369 12 0E 5A         [24] 1771 	lcall	__mulint
      00036C A8 82            [24] 1772 	mov	r0,dpl
      00036E A9 83            [24] 1773 	mov	r1,dph
      000370 D0 02            [24] 1774 	pop	ar2
      000372 D0 03            [24] 1775 	pop	ar3
      000374 D0 04            [24] 1776 	pop	ar4
      000376 D0 07            [24] 1777 	pop	ar7
      000378 EA               [12] 1778 	mov	a,r2
      000379 28               [12] 1779 	add	a,r0
      00037A F8               [12] 1780 	mov	r0,a
      00037B EC               [12] 1781 	mov	a,r4
      00037C 39               [12] 1782 	addc	a,r1
      00037D F9               [12] 1783 	mov	r1,a
      00037E E8               [12] 1784 	mov	a,r0
      00037F 24 D0            [12] 1785 	add	a,#0xD0
      000381 FD               [12] 1786 	mov	r5,a
      000382 E9               [12] 1787 	mov	a,r1
      000383 34 FF            [12] 1788 	addc	a,#0xFF
      000385 FE               [12] 1789 	mov	r6,a
                           0002C8  1790 	C$i2c.h$176$3$84 ==.
                                   1791 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:176: while(read_keypad() == key)delay_time(10000); //wait for key to be released
      000386                       1792 00110$:
      000386 C0 07            [24] 1793 	push	ar7
      000388 C0 06            [24] 1794 	push	ar6
      00038A C0 05            [24] 1795 	push	ar5
      00038C C0 03            [24] 1796 	push	ar3
      00038E 12 01 D8         [24] 1797 	lcall	_read_keypad
      000391 AC 82            [24] 1798 	mov	r4,dpl
      000393 D0 03            [24] 1799 	pop	ar3
      000395 D0 05            [24] 1800 	pop	ar5
      000397 D0 06            [24] 1801 	pop	ar6
      000399 D0 07            [24] 1802 	pop	ar7
      00039B EC               [12] 1803 	mov	a,r4
      00039C B5 03 1B         [24] 1804 	cjne	a,ar3,00118$
      00039F 90 27 10         [24] 1805 	mov	dptr,#0x2710
      0003A2 E4               [12] 1806 	clr	a
      0003A3 F5 F0            [12] 1807 	mov	b,a
      0003A5 C0 07            [24] 1808 	push	ar7
      0003A7 C0 06            [24] 1809 	push	ar6
      0003A9 C0 05            [24] 1810 	push	ar5
      0003AB C0 03            [24] 1811 	push	ar3
      0003AD 12 03 CB         [24] 1812 	lcall	_delay_time
      0003B0 D0 03            [24] 1813 	pop	ar3
      0003B2 D0 05            [24] 1814 	pop	ar5
      0003B4 D0 06            [24] 1815 	pop	ar6
      0003B6 D0 07            [24] 1816 	pop	ar7
      0003B8 80 CC            [24] 1817 	sjmp	00110$
      0003BA                       1818 00118$:
                           0002FC  1819 	C$i2c.h$164$1$81 ==.
                                   1820 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:164: for(i=0; i<5; i++)
      0003BA 0F               [12] 1821 	inc	r7
      0003BB C3               [12] 1822 	clr	c
      0003BC EF               [12] 1823 	mov	a,r7
      0003BD 64 80            [12] 1824 	xrl	a,#0x80
      0003BF 94 85            [12] 1825 	subb	a,#0x85
      0003C1 50 03            [24] 1826 	jnc	00155$
      0003C3 02 02 C8         [24] 1827 	ljmp	00104$
      0003C6                       1828 00155$:
                           000308  1829 	C$i2c.h$179$1$81 ==.
                                   1830 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:179: return sum;
      0003C6 8D 82            [24] 1831 	mov	dpl,r5
      0003C8 8E 83            [24] 1832 	mov	dph,r6
      0003CA                       1833 00119$:
                           00030C  1834 	C$i2c.h$180$1$81 ==.
                           00030C  1835 	XG$kpd_input$0$0 ==.
      0003CA 22               [24] 1836 	ret
                                   1837 ;------------------------------------------------------------
                                   1838 ;Allocation info for local variables in function 'delay_time'
                                   1839 ;------------------------------------------------------------
                                   1840 ;time_end                  Allocated to registers r4 r5 r6 r7 
                                   1841 ;index                     Allocated to registers 
                                   1842 ;------------------------------------------------------------
                           00030D  1843 	G$delay_time$0$0 ==.
                           00030D  1844 	C$i2c.h$189$1$81 ==.
                                   1845 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:189: void delay_time (unsigned long time_end)
                                   1846 ;	-----------------------------------------
                                   1847 ;	 function delay_time
                                   1848 ;	-----------------------------------------
      0003CB                       1849 _delay_time:
      0003CB AC 82            [24] 1850 	mov	r4,dpl
      0003CD AD 83            [24] 1851 	mov	r5,dph
      0003CF AE F0            [24] 1852 	mov	r6,b
      0003D1 FF               [12] 1853 	mov	r7,a
                           000314  1854 	C$i2c.h$192$1$86 ==.
                                   1855 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:192: for (index = 0; index < time_end; index++); //for loop delay
      0003D2 78 00            [12] 1856 	mov	r0,#0x00
      0003D4 79 00            [12] 1857 	mov	r1,#0x00
      0003D6 7A 00            [12] 1858 	mov	r2,#0x00
      0003D8 7B 00            [12] 1859 	mov	r3,#0x00
      0003DA                       1860 00103$:
      0003DA C3               [12] 1861 	clr	c
      0003DB E8               [12] 1862 	mov	a,r0
      0003DC 9C               [12] 1863 	subb	a,r4
      0003DD E9               [12] 1864 	mov	a,r1
      0003DE 9D               [12] 1865 	subb	a,r5
      0003DF EA               [12] 1866 	mov	a,r2
      0003E0 9E               [12] 1867 	subb	a,r6
      0003E1 EB               [12] 1868 	mov	a,r3
      0003E2 9F               [12] 1869 	subb	a,r7
      0003E3 50 0F            [24] 1870 	jnc	00105$
      0003E5 08               [12] 1871 	inc	r0
      0003E6 B8 00 09         [24] 1872 	cjne	r0,#0x00,00115$
      0003E9 09               [12] 1873 	inc	r1
      0003EA B9 00 05         [24] 1874 	cjne	r1,#0x00,00115$
      0003ED 0A               [12] 1875 	inc	r2
      0003EE BA 00 E9         [24] 1876 	cjne	r2,#0x00,00103$
      0003F1 0B               [12] 1877 	inc	r3
      0003F2                       1878 00115$:
      0003F2 80 E6            [24] 1879 	sjmp	00103$
      0003F4                       1880 00105$:
                           000336  1881 	C$i2c.h$193$1$86 ==.
                           000336  1882 	XG$delay_time$0$0 ==.
      0003F4 22               [24] 1883 	ret
                                   1884 ;------------------------------------------------------------
                                   1885 ;Allocation info for local variables in function 'i2c_start'
                                   1886 ;------------------------------------------------------------
                           000337  1887 	G$i2c_start$0$0 ==.
                           000337  1888 	C$i2c.h$196$1$86 ==.
                                   1889 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:196: void i2c_start(void)
                                   1890 ;	-----------------------------------------
                                   1891 ;	 function i2c_start
                                   1892 ;	-----------------------------------------
      0003F5                       1893 _i2c_start:
                           000337  1894 	C$i2c.h$198$1$88 ==.
                                   1895 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:198: while(BUSY);              //Wait until SMBus0 is free
      0003F5                       1896 00101$:
      0003F5 20 C7 FD         [24] 1897 	jb	_BUSY,00101$
                           00033A  1898 	C$i2c.h$199$1$88 ==.
                                   1899 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:199: STA = 1;                  //Set Start Bit
      0003F8 D2 C5            [12] 1900 	setb	_STA
                           00033C  1901 	C$i2c.h$200$1$88 ==.
                                   1902 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:200: while(!SI);               //Wait until start sent
      0003FA                       1903 00104$:
      0003FA 30 C3 FD         [24] 1904 	jnb	_SI,00104$
                           00033F  1905 	C$i2c.h$201$1$88 ==.
                                   1906 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:201: STA = 0;                  //Clear start bit
      0003FD C2 C5            [12] 1907 	clr	_STA
                           000341  1908 	C$i2c.h$202$1$88 ==.
                                   1909 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:202: SI = 0;                   //Clear SI
      0003FF C2 C3            [12] 1910 	clr	_SI
                           000343  1911 	C$i2c.h$203$1$88 ==.
                           000343  1912 	XG$i2c_start$0$0 ==.
      000401 22               [24] 1913 	ret
                                   1914 ;------------------------------------------------------------
                                   1915 ;Allocation info for local variables in function 'i2c_write'
                                   1916 ;------------------------------------------------------------
                                   1917 ;output_data               Allocated to registers 
                                   1918 ;------------------------------------------------------------
                           000344  1919 	G$i2c_write$0$0 ==.
                           000344  1920 	C$i2c.h$206$1$88 ==.
                                   1921 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:206: void i2c_write(unsigned char output_data)
                                   1922 ;	-----------------------------------------
                                   1923 ;	 function i2c_write
                                   1924 ;	-----------------------------------------
      000402                       1925 _i2c_write:
      000402 85 82 C2         [24] 1926 	mov	_SMB0DAT,dpl
                           000347  1927 	C$i2c.h$209$1$90 ==.
                                   1928 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:209: while(!SI);               //Wait until send is complete
      000405                       1929 00101$:
                           000347  1930 	C$i2c.h$210$1$90 ==.
                                   1931 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:210: SI = 0;                   //Clear SI
      000405 10 C3 02         [24] 1932 	jbc	_SI,00112$
      000408 80 FB            [24] 1933 	sjmp	00101$
      00040A                       1934 00112$:
                           00034C  1935 	C$i2c.h$211$1$90 ==.
                           00034C  1936 	XG$i2c_write$0$0 ==.
      00040A 22               [24] 1937 	ret
                                   1938 ;------------------------------------------------------------
                                   1939 ;Allocation info for local variables in function 'i2c_write_and_stop'
                                   1940 ;------------------------------------------------------------
                                   1941 ;output_data               Allocated to registers 
                                   1942 ;------------------------------------------------------------
                           00034D  1943 	G$i2c_write_and_stop$0$0 ==.
                           00034D  1944 	C$i2c.h$214$1$90 ==.
                                   1945 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:214: void i2c_write_and_stop(unsigned char output_data)
                                   1946 ;	-----------------------------------------
                                   1947 ;	 function i2c_write_and_stop
                                   1948 ;	-----------------------------------------
      00040B                       1949 _i2c_write_and_stop:
      00040B 85 82 C2         [24] 1950 	mov	_SMB0DAT,dpl
                           000350  1951 	C$i2c.h$217$1$92 ==.
                                   1952 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:217: STO = 1;                  //Set stop bit
      00040E D2 C4            [12] 1953 	setb	_STO
                           000352  1954 	C$i2c.h$218$1$92 ==.
                                   1955 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:218: while(!SI);               //Wait until send is complete
      000410                       1956 00101$:
                           000352  1957 	C$i2c.h$219$1$92 ==.
                                   1958 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:219: SI = 0;                   //clear SI
      000410 10 C3 02         [24] 1959 	jbc	_SI,00112$
      000413 80 FB            [24] 1960 	sjmp	00101$
      000415                       1961 00112$:
                           000357  1962 	C$i2c.h$220$1$92 ==.
                           000357  1963 	XG$i2c_write_and_stop$0$0 ==.
      000415 22               [24] 1964 	ret
                                   1965 ;------------------------------------------------------------
                                   1966 ;Allocation info for local variables in function 'i2c_read'
                                   1967 ;------------------------------------------------------------
                                   1968 ;input_data                Allocated to registers 
                                   1969 ;------------------------------------------------------------
                           000358  1970 	G$i2c_read$0$0 ==.
                           000358  1971 	C$i2c.h$223$1$92 ==.
                                   1972 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:223: unsigned char i2c_read(void)
                                   1973 ;	-----------------------------------------
                                   1974 ;	 function i2c_read
                                   1975 ;	-----------------------------------------
      000416                       1976 _i2c_read:
                           000358  1977 	C$i2c.h$226$1$94 ==.
                                   1978 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:226: while(!SI);                //Wait until we have data to read
      000416                       1979 00101$:
      000416 30 C3 FD         [24] 1980 	jnb	_SI,00101$
                           00035B  1981 	C$i2c.h$227$1$94 ==.
                                   1982 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:227: input_data = SMB0DAT;      //Read the data
      000419 85 C2 82         [24] 1983 	mov	dpl,_SMB0DAT
                           00035E  1984 	C$i2c.h$228$1$94 ==.
                                   1985 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:228: SI = 0;                    //Clear SI
      00041C C2 C3            [12] 1986 	clr	_SI
                           000360  1987 	C$i2c.h$229$1$94 ==.
                                   1988 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:229: return input_data;         //Return the read data
                           000360  1989 	C$i2c.h$230$1$94 ==.
                           000360  1990 	XG$i2c_read$0$0 ==.
      00041E 22               [24] 1991 	ret
                                   1992 ;------------------------------------------------------------
                                   1993 ;Allocation info for local variables in function 'i2c_read_and_stop'
                                   1994 ;------------------------------------------------------------
                                   1995 ;input_data                Allocated to registers r7 
                                   1996 ;------------------------------------------------------------
                           000361  1997 	G$i2c_read_and_stop$0$0 ==.
                           000361  1998 	C$i2c.h$233$1$94 ==.
                                   1999 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:233: unsigned char i2c_read_and_stop(void)
                                   2000 ;	-----------------------------------------
                                   2001 ;	 function i2c_read_and_stop
                                   2002 ;	-----------------------------------------
      00041F                       2003 _i2c_read_and_stop:
                           000361  2004 	C$i2c.h$236$1$96 ==.
                                   2005 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:236: while(!SI);                //Wait until we have data to read
      00041F                       2006 00101$:
      00041F 30 C3 FD         [24] 2007 	jnb	_SI,00101$
                           000364  2008 	C$i2c.h$237$1$96 ==.
                                   2009 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:237: input_data = SMB0DAT;      //Read the data
      000422 AF C2            [24] 2010 	mov	r7,_SMB0DAT
                           000366  2011 	C$i2c.h$238$1$96 ==.
                                   2012 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:238: SI = 0;                    //Clear SI
      000424 C2 C3            [12] 2013 	clr	_SI
                           000368  2014 	C$i2c.h$239$1$96 ==.
                                   2015 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:239: STO = 1;                   //Set stop bit
      000426 D2 C4            [12] 2016 	setb	_STO
                           00036A  2017 	C$i2c.h$240$1$96 ==.
                                   2018 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:240: while(!SI);                //Wait for stop
      000428                       2019 00104$:
                           00036A  2020 	C$i2c.h$241$1$96 ==.
                                   2021 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:241: SI = 0;
      000428 10 C3 02         [24] 2022 	jbc	_SI,00122$
      00042B 80 FB            [24] 2023 	sjmp	00104$
      00042D                       2024 00122$:
                           00036F  2025 	C$i2c.h$242$1$96 ==.
                                   2026 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:242: return input_data;         //Return the read data
      00042D 8F 82            [24] 2027 	mov	dpl,r7
                           000371  2028 	C$i2c.h$243$1$96 ==.
                           000371  2029 	XG$i2c_read_and_stop$0$0 ==.
      00042F 22               [24] 2030 	ret
                                   2031 ;------------------------------------------------------------
                                   2032 ;Allocation info for local variables in function 'i2c_write_data'
                                   2033 ;------------------------------------------------------------
                                   2034 ;start_reg                 Allocated with name '_i2c_write_data_PARM_2'
                                   2035 ;buffer                    Allocated with name '_i2c_write_data_PARM_3'
                                   2036 ;num_bytes                 Allocated with name '_i2c_write_data_PARM_4'
                                   2037 ;addr                      Allocated to registers r7 
                                   2038 ;i                         Allocated to registers 
                                   2039 ;------------------------------------------------------------
                           000372  2040 	G$i2c_write_data$0$0 ==.
                           000372  2041 	C$i2c.h$246$1$96 ==.
                                   2042 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:246: void i2c_write_data(unsigned char addr, unsigned char start_reg, unsigned char *buffer, unsigned char num_bytes)
                                   2043 ;	-----------------------------------------
                                   2044 ;	 function i2c_write_data
                                   2045 ;	-----------------------------------------
      000430                       2046 _i2c_write_data:
      000430 AF 82            [24] 2047 	mov	r7,dpl
                           000374  2048 	C$i2c.h$250$1$98 ==.
                                   2049 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:250: i2c_start();               //initiate I2C transfer
      000432 C0 07            [24] 2050 	push	ar7
      000434 12 03 F5         [24] 2051 	lcall	_i2c_start
      000437 D0 07            [24] 2052 	pop	ar7
                           00037B  2053 	C$i2c.h$251$1$98 ==.
                                   2054 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:251: i2c_write(addr & ~0x01);   //write the desired address to the bus
      000439 74 FE            [12] 2055 	mov	a,#0xFE
      00043B 5F               [12] 2056 	anl	a,r7
      00043C F5 82            [12] 2057 	mov	dpl,a
      00043E 12 04 02         [24] 2058 	lcall	_i2c_write
                           000383  2059 	C$i2c.h$252$1$98 ==.
                                   2060 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:252: i2c_write(start_reg);      //write the start register to the bus
      000441 85 27 82         [24] 2061 	mov	dpl,_i2c_write_data_PARM_2
      000444 12 04 02         [24] 2062 	lcall	_i2c_write
                           000389  2063 	C$i2c.h$253$1$98 ==.
                                   2064 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:253: for(i=0; i<num_bytes-1; i++) //write the data to the register(s)
      000447 7F 00            [12] 2065 	mov	r7,#0x00
      000449                       2066 00103$:
      000449 AD 2B            [24] 2067 	mov	r5,_i2c_write_data_PARM_4
      00044B 7E 00            [12] 2068 	mov	r6,#0x00
      00044D 1D               [12] 2069 	dec	r5
      00044E BD FF 01         [24] 2070 	cjne	r5,#0xFF,00114$
      000451 1E               [12] 2071 	dec	r6
      000452                       2072 00114$:
      000452 8F 03            [24] 2073 	mov	ar3,r7
      000454 7C 00            [12] 2074 	mov	r4,#0x00
      000456 C3               [12] 2075 	clr	c
      000457 EB               [12] 2076 	mov	a,r3
      000458 9D               [12] 2077 	subb	a,r5
      000459 EC               [12] 2078 	mov	a,r4
      00045A 64 80            [12] 2079 	xrl	a,#0x80
      00045C 8E F0            [24] 2080 	mov	b,r6
      00045E 63 F0 80         [24] 2081 	xrl	b,#0x80
      000461 95 F0            [12] 2082 	subb	a,b
      000463 50 1F            [24] 2083 	jnc	00101$
                           0003A7  2084 	C$i2c.h$254$1$98 ==.
                                   2085 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:254: i2c_write(buffer[i]);
      000465 EF               [12] 2086 	mov	a,r7
      000466 25 28            [12] 2087 	add	a,_i2c_write_data_PARM_3
      000468 FC               [12] 2088 	mov	r4,a
      000469 E4               [12] 2089 	clr	a
      00046A 35 29            [12] 2090 	addc	a,(_i2c_write_data_PARM_3 + 1)
      00046C FD               [12] 2091 	mov	r5,a
      00046D AE 2A            [24] 2092 	mov	r6,(_i2c_write_data_PARM_3 + 2)
      00046F 8C 82            [24] 2093 	mov	dpl,r4
      000471 8D 83            [24] 2094 	mov	dph,r5
      000473 8E F0            [24] 2095 	mov	b,r6
      000475 12 17 BC         [24] 2096 	lcall	__gptrget
      000478 F5 82            [12] 2097 	mov	dpl,a
      00047A C0 07            [24] 2098 	push	ar7
      00047C 12 04 02         [24] 2099 	lcall	_i2c_write
      00047F D0 07            [24] 2100 	pop	ar7
                           0003C3  2101 	C$i2c.h$253$1$98 ==.
                                   2102 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:253: for(i=0; i<num_bytes-1; i++) //write the data to the register(s)
      000481 0F               [12] 2103 	inc	r7
      000482 80 C5            [24] 2104 	sjmp	00103$
      000484                       2105 00101$:
                           0003C6  2106 	C$i2c.h$255$1$98 ==.
                                   2107 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:255: i2c_write_and_stop(buffer[num_bytes-1]); //Stop transfer
      000484 AE 2B            [24] 2108 	mov	r6,_i2c_write_data_PARM_4
      000486 7F 00            [12] 2109 	mov	r7,#0x00
      000488 1E               [12] 2110 	dec	r6
      000489 BE FF 01         [24] 2111 	cjne	r6,#0xFF,00116$
      00048C 1F               [12] 2112 	dec	r7
      00048D                       2113 00116$:
      00048D EE               [12] 2114 	mov	a,r6
      00048E 25 28            [12] 2115 	add	a,_i2c_write_data_PARM_3
      000490 FE               [12] 2116 	mov	r6,a
      000491 EF               [12] 2117 	mov	a,r7
      000492 35 29            [12] 2118 	addc	a,(_i2c_write_data_PARM_3 + 1)
      000494 FF               [12] 2119 	mov	r7,a
      000495 AD 2A            [24] 2120 	mov	r5,(_i2c_write_data_PARM_3 + 2)
      000497 8E 82            [24] 2121 	mov	dpl,r6
      000499 8F 83            [24] 2122 	mov	dph,r7
      00049B 8D F0            [24] 2123 	mov	b,r5
      00049D 12 17 BC         [24] 2124 	lcall	__gptrget
      0004A0 F5 82            [12] 2125 	mov	dpl,a
      0004A2 12 04 0B         [24] 2126 	lcall	_i2c_write_and_stop
                           0003E7  2127 	C$i2c.h$256$1$98 ==.
                           0003E7  2128 	XG$i2c_write_data$0$0 ==.
      0004A5 22               [24] 2129 	ret
                                   2130 ;------------------------------------------------------------
                                   2131 ;Allocation info for local variables in function 'i2c_read_data'
                                   2132 ;------------------------------------------------------------
                                   2133 ;start_reg                 Allocated with name '_i2c_read_data_PARM_2'
                                   2134 ;buffer                    Allocated with name '_i2c_read_data_PARM_3'
                                   2135 ;num_bytes                 Allocated with name '_i2c_read_data_PARM_4'
                                   2136 ;addr                      Allocated to registers r7 
                                   2137 ;j                         Allocated to registers 
                                   2138 ;------------------------------------------------------------
                           0003E8  2139 	G$i2c_read_data$0$0 ==.
                           0003E8  2140 	C$i2c.h$259$1$98 ==.
                                   2141 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:259: void i2c_read_data(unsigned char addr, unsigned char start_reg, unsigned char *buffer, unsigned char num_bytes)
                                   2142 ;	-----------------------------------------
                                   2143 ;	 function i2c_read_data
                                   2144 ;	-----------------------------------------
      0004A6                       2145 _i2c_read_data:
      0004A6 AF 82            [24] 2146 	mov	r7,dpl
                           0003EA  2147 	C$i2c.h$262$1$100 ==.
                                   2148 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:262: i2c_start();               //Start I2C transfer
      0004A8 C0 07            [24] 2149 	push	ar7
      0004AA 12 03 F5         [24] 2150 	lcall	_i2c_start
      0004AD D0 07            [24] 2151 	pop	ar7
                           0003F1  2152 	C$i2c.h$263$1$100 ==.
                                   2153 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:263: i2c_write(addr & ~0x01);   //Write address of device that will be written to, send 0
      0004AF 8F 06            [24] 2154 	mov	ar6,r7
      0004B1 74 FE            [12] 2155 	mov	a,#0xFE
      0004B3 5E               [12] 2156 	anl	a,r6
      0004B4 F5 82            [12] 2157 	mov	dpl,a
      0004B6 C0 07            [24] 2158 	push	ar7
      0004B8 12 04 02         [24] 2159 	lcall	_i2c_write
                           0003FD  2160 	C$i2c.h$264$1$100 ==.
                                   2161 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:264: i2c_write_and_stop(start_reg); //Write & stop the 1st register to be read
      0004BB 85 2C 82         [24] 2162 	mov	dpl,_i2c_read_data_PARM_2
      0004BE 12 04 0B         [24] 2163 	lcall	_i2c_write_and_stop
                           000403  2164 	C$i2c.h$265$1$100 ==.
                                   2165 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:265: i2c_start();               //Start I2C transfer
      0004C1 12 03 F5         [24] 2166 	lcall	_i2c_start
      0004C4 D0 07            [24] 2167 	pop	ar7
                           000408  2168 	C$i2c.h$266$1$100 ==.
                                   2169 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:266: i2c_write(addr | 0x01);    //Write address again, this time indicating a read operation
      0004C6 74 01            [12] 2170 	mov	a,#0x01
      0004C8 4F               [12] 2171 	orl	a,r7
      0004C9 F5 82            [12] 2172 	mov	dpl,a
      0004CB 12 04 02         [24] 2173 	lcall	_i2c_write
                           000410  2174 	C$i2c.h$267$1$100 ==.
                                   2175 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:267: for(j = 0; j < num_bytes - 1; j++)
      0004CE 7F 00            [12] 2176 	mov	r7,#0x00
      0004D0                       2177 00103$:
      0004D0 AD 30            [24] 2178 	mov	r5,_i2c_read_data_PARM_4
      0004D2 7E 00            [12] 2179 	mov	r6,#0x00
      0004D4 1D               [12] 2180 	dec	r5
      0004D5 BD FF 01         [24] 2181 	cjne	r5,#0xFF,00114$
      0004D8 1E               [12] 2182 	dec	r6
      0004D9                       2183 00114$:
      0004D9 8F 03            [24] 2184 	mov	ar3,r7
      0004DB 7C 00            [12] 2185 	mov	r4,#0x00
      0004DD C3               [12] 2186 	clr	c
      0004DE EB               [12] 2187 	mov	a,r3
      0004DF 9D               [12] 2188 	subb	a,r5
      0004E0 EC               [12] 2189 	mov	a,r4
      0004E1 64 80            [12] 2190 	xrl	a,#0x80
      0004E3 8E F0            [24] 2191 	mov	b,r6
      0004E5 63 F0 80         [24] 2192 	xrl	b,#0x80
      0004E8 95 F0            [12] 2193 	subb	a,b
      0004EA 50 2E            [24] 2194 	jnc	00101$
                           00042E  2195 	C$i2c.h$269$2$101 ==.
                                   2196 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:269: AA = 1;                //Set acknowledge bit
      0004EC D2 C2            [12] 2197 	setb	_AA
                           000430  2198 	C$i2c.h$270$2$101 ==.
                                   2199 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:270: buffer[j] = i2c_read();//Read data, save it in buffer
      0004EE EF               [12] 2200 	mov	a,r7
      0004EF 25 2D            [12] 2201 	add	a,_i2c_read_data_PARM_3
      0004F1 FC               [12] 2202 	mov	r4,a
      0004F2 E4               [12] 2203 	clr	a
      0004F3 35 2E            [12] 2204 	addc	a,(_i2c_read_data_PARM_3 + 1)
      0004F5 FD               [12] 2205 	mov	r5,a
      0004F6 AE 2F            [24] 2206 	mov	r6,(_i2c_read_data_PARM_3 + 2)
      0004F8 C0 07            [24] 2207 	push	ar7
      0004FA C0 06            [24] 2208 	push	ar6
      0004FC C0 05            [24] 2209 	push	ar5
      0004FE C0 04            [24] 2210 	push	ar4
      000500 12 04 16         [24] 2211 	lcall	_i2c_read
      000503 AB 82            [24] 2212 	mov	r3,dpl
      000505 D0 04            [24] 2213 	pop	ar4
      000507 D0 05            [24] 2214 	pop	ar5
      000509 D0 06            [24] 2215 	pop	ar6
      00050B D0 07            [24] 2216 	pop	ar7
      00050D 8C 82            [24] 2217 	mov	dpl,r4
      00050F 8D 83            [24] 2218 	mov	dph,r5
      000511 8E F0            [24] 2219 	mov	b,r6
      000513 EB               [12] 2220 	mov	a,r3
      000514 12 0E 0F         [24] 2221 	lcall	__gptrput
                           000459  2222 	C$i2c.h$267$1$100 ==.
                                   2223 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:267: for(j = 0; j < num_bytes - 1; j++)
      000517 0F               [12] 2224 	inc	r7
      000518 80 B6            [24] 2225 	sjmp	00103$
      00051A                       2226 00101$:
                           00045C  2227 	C$i2c.h$272$1$100 ==.
                                   2228 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:272: AA = 0;
      00051A C2 C2            [12] 2229 	clr	_AA
                           00045E  2230 	C$i2c.h$273$1$100 ==.
                                   2231 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:273: buffer[num_bytes - 1] = i2c_read_and_stop(); //Read the last byte and stop, save it in the buffer
      00051C AE 30            [24] 2232 	mov	r6,_i2c_read_data_PARM_4
      00051E 7F 00            [12] 2233 	mov	r7,#0x00
      000520 1E               [12] 2234 	dec	r6
      000521 BE FF 01         [24] 2235 	cjne	r6,#0xFF,00116$
      000524 1F               [12] 2236 	dec	r7
      000525                       2237 00116$:
      000525 EE               [12] 2238 	mov	a,r6
      000526 25 2D            [12] 2239 	add	a,_i2c_read_data_PARM_3
      000528 FE               [12] 2240 	mov	r6,a
      000529 EF               [12] 2241 	mov	a,r7
      00052A 35 2E            [12] 2242 	addc	a,(_i2c_read_data_PARM_3 + 1)
      00052C FF               [12] 2243 	mov	r7,a
      00052D AD 2F            [24] 2244 	mov	r5,(_i2c_read_data_PARM_3 + 2)
      00052F C0 07            [24] 2245 	push	ar7
      000531 C0 06            [24] 2246 	push	ar6
      000533 C0 05            [24] 2247 	push	ar5
      000535 12 04 1F         [24] 2248 	lcall	_i2c_read_and_stop
      000538 AC 82            [24] 2249 	mov	r4,dpl
      00053A D0 05            [24] 2250 	pop	ar5
      00053C D0 06            [24] 2251 	pop	ar6
      00053E D0 07            [24] 2252 	pop	ar7
      000540 8E 82            [24] 2253 	mov	dpl,r6
      000542 8F 83            [24] 2254 	mov	dph,r7
      000544 8D F0            [24] 2255 	mov	b,r5
      000546 EC               [12] 2256 	mov	a,r4
      000547 12 0E 0F         [24] 2257 	lcall	__gptrput
                           00048C  2258 	C$i2c.h$274$1$100 ==.
                           00048C  2259 	XG$i2c_read_data$0$0 ==.
      00054A 22               [24] 2260 	ret
                                   2261 ;------------------------------------------------------------
                                   2262 ;Allocation info for local variables in function 'Accel_Init'
                                   2263 ;------------------------------------------------------------
                                   2264 ;Data2                     Allocated with name '_Accel_Init_Data2_1_103'
                                   2265 ;------------------------------------------------------------
                           00048D  2266 	G$Accel_Init$0$0 ==.
                           00048D  2267 	C$i2c.h$283$1$100 ==.
                                   2268 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:283: void Accel_Init(void)
                                   2269 ;	-----------------------------------------
                                   2270 ;	 function Accel_Init
                                   2271 ;	-----------------------------------------
      00054B                       2272 _Accel_Init:
                           00048D  2273 	C$i2c.h$287$1$103 ==.
                                   2274 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:287: Data2[0]=0x23;	//normal power mode, 50Hz ODR, y & x axes enabled
      00054B 75 31 23         [24] 2275 	mov	_Accel_Init_Data2_1_103,#0x23
                           000490  2276 	C$i2c.h$289$1$103 ==.
                                   2277 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:289: i2c_write_data(addr_accel, 0x20, Data2, 1);
      00054E 75 28 31         [24] 2278 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      000551 75 29 00         [24] 2279 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      000554 75 2A 40         [24] 2280 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000557 75 27 20         [24] 2281 	mov	_i2c_write_data_PARM_2,#0x20
      00055A 75 2B 01         [24] 2282 	mov	_i2c_write_data_PARM_4,#0x01
      00055D 75 82 30         [24] 2283 	mov	dpl,#0x30
      000560 12 04 30         [24] 2284 	lcall	_i2c_write_data
                           0004A5  2285 	C$i2c.h$290$1$103 ==.
                                   2286 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:290: Data2[0]=0x00;	//Default - no filtering
      000563 75 31 00         [24] 2287 	mov	_Accel_Init_Data2_1_103,#0x00
                           0004A8  2288 	C$i2c.h$292$1$103 ==.
                                   2289 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:292: i2c_write_data(addr_accel, 0x21, Data2, 1);
      000566 75 28 31         [24] 2290 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      000569 75 29 00         [24] 2291 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      00056C 75 2A 40         [24] 2292 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      00056F 75 27 21         [24] 2293 	mov	_i2c_write_data_PARM_2,#0x21
      000572 75 2B 01         [24] 2294 	mov	_i2c_write_data_PARM_4,#0x01
      000575 75 82 30         [24] 2295 	mov	dpl,#0x30
      000578 12 04 30         [24] 2296 	lcall	_i2c_write_data
                           0004BD  2297 	C$i2c.h$293$1$103 ==.
                                   2298 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:293: Data2[0]=0x00;	//default - no interrupts enabled
      00057B 75 31 00         [24] 2299 	mov	_Accel_Init_Data2_1_103,#0x00
                           0004C0  2300 	C$i2c.h$294$1$103 ==.
                                   2301 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:294: i2c_write_data(addr_accel, 0x22, Data2, 1);
      00057E 75 28 31         [24] 2302 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      000581 75 29 00         [24] 2303 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      000584 75 2A 40         [24] 2304 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000587 75 27 22         [24] 2305 	mov	_i2c_write_data_PARM_2,#0x22
      00058A 75 2B 01         [24] 2306 	mov	_i2c_write_data_PARM_4,#0x01
      00058D 75 82 30         [24] 2307 	mov	dpl,#0x30
      000590 12 04 30         [24] 2308 	lcall	_i2c_write_data
                           0004D5  2309 	C$i2c.h$298$1$103 ==.
                           0004D5  2310 	XG$Accel_Init$0$0 ==.
      000593 22               [24] 2311 	ret
                                   2312 ;------------------------------------------------------------
                                   2313 ;Allocation info for local variables in function 'main'
                                   2314 ;------------------------------------------------------------
                           0004D6  2315 	G$main$0$0 ==.
                           0004D6  2316 	C$lab4_m.c$78$1$103 ==.
                                   2317 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:78: void main(void)
                                   2318 ;	-----------------------------------------
                                   2319 ;	 function main
                                   2320 ;	-----------------------------------------
      000594                       2321 _main:
                           0004D6  2322 	C$lab4_m.c$83$1$122 ==.
                                   2323 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:83: Sys_Init();
      000594 12 00 EE         [24] 2324 	lcall	_Sys_Init
                           0004D9  2325 	C$lab4_m.c$84$1$122 ==.
                                   2326 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:84: putchar(' '); //the quotes in this line may not format correctly
      000597 75 82 20         [24] 2327 	mov	dpl,#0x20
      00059A 12 01 01         [24] 2328 	lcall	_putchar
                           0004DF  2329 	C$lab4_m.c$85$1$122 ==.
                                   2330 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:85: Port_Init();
      00059D 12 0A 91         [24] 2331 	lcall	_Port_Init
                           0004E2  2332 	C$lab4_m.c$86$1$122 ==.
                                   2333 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:86: XBR0_Init();
      0005A0 12 0A B3         [24] 2334 	lcall	_XBR0_Init
                           0004E5  2335 	C$lab4_m.c$87$1$122 ==.
                                   2336 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:87: PCA_Init();
      0005A3 12 0A BD         [24] 2337 	lcall	_PCA_Init
                           0004E8  2338 	C$lab4_m.c$88$1$122 ==.
                                   2339 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:88: SMB_Init();
      0005A6 12 0A B7         [24] 2340 	lcall	_SMB_Init
                           0004EB  2341 	C$lab4_m.c$89$1$122 ==.
                                   2342 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:89: ADC_Init();
      0005A9 12 0C 4C         [24] 2343 	lcall	_ADC_Init
                           0004EE  2344 	C$lab4_m.c$92$1$122 ==.
                                   2345 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:92: printf("\r\nEmbedded Control Car Calibration");
      0005AC 74 CA            [12] 2346 	mov	a,#___str_3
      0005AE C0 E0            [24] 2347 	push	acc
      0005B0 74 18            [12] 2348 	mov	a,#(___str_3 >> 8)
      0005B2 C0 E0            [24] 2349 	push	acc
      0005B4 74 80            [12] 2350 	mov	a,#0x80
      0005B6 C0 E0            [24] 2351 	push	acc
      0005B8 12 10 EB         [24] 2352 	lcall	_printf
      0005BB 15 81            [12] 2353 	dec	sp
      0005BD 15 81            [12] 2354 	dec	sp
      0005BF 15 81            [12] 2355 	dec	sp
                           000503  2356 	C$lab4_m.c$94$1$122 ==.
                                   2357 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:94: STR_PW = PW_CENTER_STR;
      0005C1 75 34 7D         [24] 2358 	mov	_STR_PW,#0x7D
      0005C4 75 35 0A         [24] 2359 	mov	(_STR_PW + 1),#0x0A
                           000509  2360 	C$lab4_m.c$97$1$122 ==.
                                   2361 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:97: STR_lo_to_hi= 0xFFFF - STR_PW;
      0005C7 75 32 82         [24] 2362 	mov	_STR_lo_to_hi,#0x82
      0005CA 75 33 F5         [24] 2363 	mov	(_STR_lo_to_hi + 1),#0xF5
                           00050F  2364 	C$lab4_m.c$98$1$122 ==.
                                   2365 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:98: PCA0CP0 = STR_lo_to_hi;
      0005CD 75 EA 82         [24] 2366 	mov	((_PCA0CP0 >> 0) & 0xFF),#0x82
      0005D0 75 FA F5         [24] 2367 	mov	((_PCA0CP0 >> 8) & 0xFF),#0xF5
                           000515  2368 	C$lab4_m.c$100$1$122 ==.
                                   2369 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:100: MOTOR_PW = PW_NUET_DRIVE;
      0005D3 75 46 CD         [24] 2370 	mov	_MOTOR_PW,#0xCD
      0005D6 75 47 0A         [24] 2371 	mov	(_MOTOR_PW + 1),#0x0A
                           00051B  2372 	C$lab4_m.c$101$1$122 ==.
                                   2373 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:101: DRV_lo_to_hi = 0xFFFF - MOTOR_PW;
      0005D9 75 49 32         [24] 2374 	mov	_DRV_lo_to_hi,#0x32
      0005DC 75 4A F5         [24] 2375 	mov	(_DRV_lo_to_hi + 1),#0xF5
                           000521  2376 	C$lab4_m.c$102$1$122 ==.
                                   2377 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:102: PCA0CP2 = DRV_lo_to_hi;
      0005DF 75 EC 32         [24] 2378 	mov	((_PCA0CP2 >> 0) & 0xFF),#0x32
      0005E2 75 FC F5         [24] 2379 	mov	((_PCA0CP2 >> 8) & 0xFF),#0xF5
                           000527  2380 	C$lab4_m.c$104$1$122 ==.
                                   2381 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:104: count=0; //1 count = 20 milliseconds
      0005E5 E4               [12] 2382 	clr	a
      0005E6 F5 36            [12] 2383 	mov	_count,a
      0005E8 F5 37            [12] 2384 	mov	(_count + 1),a
                           00052C  2385 	C$lab4_m.c$106$1$122 ==.
                                   2386 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:106: while (count < 50);
      0005EA                       2387 00101$:
      0005EA C3               [12] 2388 	clr	c
      0005EB E5 36            [12] 2389 	mov	a,_count
      0005ED 94 32            [12] 2390 	subb	a,#0x32
      0005EF E5 37            [12] 2391 	mov	a,(_count + 1)
      0005F1 94 00            [12] 2392 	subb	a,#0x00
      0005F3 40 F5            [24] 2393 	jc	00101$
                           000537  2394 	C$lab4_m.c$111$1$122 ==.
                                   2395 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:111: printf("\r\nEmbedded Control Car ready!");
      0005F5 74 ED            [12] 2396 	mov	a,#___str_4
      0005F7 C0 E0            [24] 2397 	push	acc
      0005F9 74 18            [12] 2398 	mov	a,#(___str_4 >> 8)
      0005FB C0 E0            [24] 2399 	push	acc
      0005FD 74 80            [12] 2400 	mov	a,#0x80
      0005FF C0 E0            [24] 2401 	push	acc
      000601 12 10 EB         [24] 2402 	lcall	_printf
      000604 15 81            [12] 2403 	dec	sp
      000606 15 81            [12] 2404 	dec	sp
      000608 15 81            [12] 2405 	dec	sp
                           00054C  2406 	C$lab4_m.c$112$1$122 ==.
                                   2407 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:112: desired_heading = direction();
      00060A 12 0A EB         [24] 2408 	lcall	_direction
      00060D 85 82 3B         [24] 2409 	mov	_desired_heading,dpl
      000610 85 83 3C         [24] 2410 	mov	(_desired_heading + 1),dph
                           000555  2411 	C$lab4_m.c$113$1$122 ==.
                                   2412 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:113: while (1)
      000613                       2413 00117$:
                           000555  2414 	C$lab4_m.c$115$2$123 ==.
                                   2415 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:115: count=0;
      000613 E4               [12] 2416 	clr	a
      000614 F5 36            [12] 2417 	mov	_count,a
      000616 F5 37            [12] 2418 	mov	(_count + 1),a
                           00055A  2419 	C$lab4_m.c$116$2$123 ==.
                                   2420 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:116: if (!SS0)
      000618 20 B7 3B         [24] 2421 	jb	_SS0,00113$
                           00055D  2422 	C$lab4_m.c$120$3$124 ==.
                                   2423 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:120: if (count % 4==0)
      00061B E5 36            [12] 2424 	mov	a,_count
      00061D 54 03            [12] 2425 	anl	a,#0x03
      00061F 60 02            [24] 2426 	jz	00151$
      000621 80 03            [24] 2427 	sjmp	00105$
      000623                       2428 00151$:
                           000565  2429 	C$lab4_m.c$122$4$125 ==.
                                   2430 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:122: Drive_func();
      000623 12 0B EC         [24] 2431 	lcall	_Drive_func
      000626                       2432 00105$:
                           000568  2433 	C$lab4_m.c$124$3$124 ==.
                                   2434 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:124: if (count%2==0)
      000626 E5 36            [12] 2435 	mov	a,_count
      000628 20 E0 03         [24] 2436 	jb	acc.0,00107$
                           00056D  2437 	C$lab4_m.c$126$4$126 ==.
                                   2438 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:126: Steering_func();			
      00062B 12 0B 96         [24] 2439 	lcall	_Steering_func
      00062E                       2440 00107$:
                           000570  2441 	C$lab4_m.c$128$1$122 ==.
                                   2442 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:128: if (count % 50 ==0)
      00062E 75 11 32         [24] 2443 	mov	__moduint_PARM_2,#0x32
      000631 75 12 00         [24] 2444 	mov	(__moduint_PARM_2 + 1),#0x00
      000634 85 36 82         [24] 2445 	mov	dpl,_count
      000637 85 37 83         [24] 2446 	mov	dph,(_count + 1)
      00063A 12 0F 72         [24] 2447 	lcall	__moduint
      00063D E5 82            [12] 2448 	mov	a,dpl
      00063F 85 83 F0         [24] 2449 	mov	b,dph
      000642 45 F0            [12] 2450 	orl	a,b
      000644 70 03            [24] 2451 	jnz	00109$
                           000588  2452 	C$lab4_m.c$130$4$127 ==.
                                   2453 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:130: Battery_func();
      000646 12 0C 56         [24] 2454 	lcall	_Battery_func
      000649                       2455 00109$:
                           00058B  2456 	C$lab4_m.c$132$3$124 ==.
                                   2457 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:132: if (range <= 20)
      000649 C3               [12] 2458 	clr	c
      00064A 74 14            [12] 2459 	mov	a,#0x14
      00064C 95 41            [12] 2460 	subb	a,_range
      00064E E4               [12] 2461 	clr	a
      00064F 95 42            [12] 2462 	subb	a,(_range + 1)
      000651 40 03            [24] 2463 	jc	00113$
                           000595  2464 	C$lab4_m.c$134$4$128 ==.
                                   2465 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:134: avoid_crash();
      000653 12 0C 81         [24] 2466 	lcall	_avoid_crash
      000656                       2467 00113$:
                           000598  2468 	C$lab4_m.c$138$2$123 ==.
                                   2469 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:138: if (SS0) {printf("\r\n The control is paused");}
      000656 30 B7 BA         [24] 2470 	jnb	_SS0,00117$
      000659 74 0B            [12] 2471 	mov	a,#___str_5
      00065B C0 E0            [24] 2472 	push	acc
      00065D 74 19            [12] 2473 	mov	a,#(___str_5 >> 8)
      00065F C0 E0            [24] 2474 	push	acc
      000661 74 80            [12] 2475 	mov	a,#0x80
      000663 C0 E0            [24] 2476 	push	acc
      000665 12 10 EB         [24] 2477 	lcall	_printf
      000668 15 81            [12] 2478 	dec	sp
      00066A 15 81            [12] 2479 	dec	sp
      00066C 15 81            [12] 2480 	dec	sp
      00066E 80 A3            [24] 2481 	sjmp	00117$
                           0005B2  2482 	C$lab4_m.c$140$1$122 ==.
                           0005B2  2483 	XG$main$0$0 ==.
      000670 22               [24] 2484 	ret
                                   2485 ;------------------------------------------------------------
                                   2486 ;Allocation info for local variables in function 'Drive_Motor'
                                   2487 ;------------------------------------------------------------
                           0005B3  2488 	G$Drive_Motor$0$0 ==.
                           0005B3  2489 	C$lab4_m.c$148$1$122 ==.
                                   2490 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:148: void Drive_Motor(void)
                                   2491 ;	-----------------------------------------
                                   2492 ;	 function Drive_Motor
                                   2493 ;	-----------------------------------------
      000671                       2494 _Drive_Motor:
                           0005B3  2495 	C$lab4_m.c$150$1$131 ==.
                                   2496 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:150: if (range <= 10) {MOTOR_PW = PW_MAX_DRIVE;}
      000671 C3               [12] 2497 	clr	c
      000672 74 0A            [12] 2498 	mov	a,#0x0A
      000674 95 41            [12] 2499 	subb	a,_range
      000676 E4               [12] 2500 	clr	a
      000677 95 42            [12] 2501 	subb	a,(_range + 1)
      000679 40 06            [24] 2502 	jc	00102$
      00067B 75 46 AF         [24] 2503 	mov	_MOTOR_PW,#0xAF
      00067E 75 47 0D         [24] 2504 	mov	(_MOTOR_PW + 1),#0x0D
      000681                       2505 00102$:
                           0005C3  2506 	C$lab4_m.c$151$1$131 ==.
                                   2507 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:151: if (range >= 90) {MOTOR_PW = PW_MIN_DRIVE;}
      000681 C3               [12] 2508 	clr	c
      000682 E5 41            [12] 2509 	mov	a,_range
      000684 94 5A            [12] 2510 	subb	a,#0x5A
      000686 E5 42            [12] 2511 	mov	a,(_range + 1)
      000688 94 00            [12] 2512 	subb	a,#0x00
      00068A 40 06            [24] 2513 	jc	00104$
      00068C 75 46 EC         [24] 2514 	mov	_MOTOR_PW,#0xEC
      00068F 75 47 07         [24] 2515 	mov	(_MOTOR_PW + 1),#0x07
      000692                       2516 00104$:
                           0005D4  2517 	C$lab4_m.c$152$1$131 ==.
                                   2518 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:152: if (range <= 50 && range >= 40) {MOTOR_PW = PW_NUET_DRIVE;}
      000692 C3               [12] 2519 	clr	c
      000693 74 32            [12] 2520 	mov	a,#0x32
      000695 95 41            [12] 2521 	subb	a,_range
      000697 E4               [12] 2522 	clr	a
      000698 95 42            [12] 2523 	subb	a,(_range + 1)
      00069A 40 10            [24] 2524 	jc	00106$
      00069C E5 41            [12] 2525 	mov	a,_range
      00069E 94 28            [12] 2526 	subb	a,#0x28
      0006A0 E5 42            [12] 2527 	mov	a,(_range + 1)
      0006A2 94 00            [12] 2528 	subb	a,#0x00
      0006A4 40 06            [24] 2529 	jc	00106$
      0006A6 75 46 CD         [24] 2530 	mov	_MOTOR_PW,#0xCD
      0006A9 75 47 0A         [24] 2531 	mov	(_MOTOR_PW + 1),#0x0A
      0006AC                       2532 00106$:
                           0005EE  2533 	C$lab4_m.c$154$1$131 ==.
                                   2534 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:154: if (range < 40 && range > 10)
      0006AC C3               [12] 2535 	clr	c
      0006AD E5 41            [12] 2536 	mov	a,_range
      0006AF 94 28            [12] 2537 	subb	a,#0x28
      0006B1 E5 42            [12] 2538 	mov	a,(_range + 1)
      0006B3 94 00            [12] 2539 	subb	a,#0x00
      0006B5 50 70            [24] 2540 	jnc	00109$
      0006B7 C3               [12] 2541 	clr	c
      0006B8 74 0A            [12] 2542 	mov	a,#0x0A
      0006BA 95 41            [12] 2543 	subb	a,_range
      0006BC E4               [12] 2544 	clr	a
      0006BD 95 42            [12] 2545 	subb	a,(_range + 1)
      0006BF 50 66            [24] 2546 	jnc	00109$
                           000603  2547 	C$lab4_m.c$156$1$131 ==.
                                   2548 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:156: MOTOR_PW = -24.6 * range + 3749;
      0006C1 85 41 82         [24] 2549 	mov	dpl,_range
      0006C4 85 42 83         [24] 2550 	mov	dph,(_range + 1)
      0006C7 12 10 61         [24] 2551 	lcall	___uint2fs
      0006CA AC 82            [24] 2552 	mov	r4,dpl
      0006CC AD 83            [24] 2553 	mov	r5,dph
      0006CE AE F0            [24] 2554 	mov	r6,b
      0006D0 FF               [12] 2555 	mov	r7,a
      0006D1 C0 04            [24] 2556 	push	ar4
      0006D3 C0 05            [24] 2557 	push	ar5
      0006D5 C0 06            [24] 2558 	push	ar6
      0006D7 C0 07            [24] 2559 	push	ar7
      0006D9 90 CC CD         [24] 2560 	mov	dptr,#0xCCCD
      0006DC 75 F0 C4         [24] 2561 	mov	b,#0xC4
      0006DF 74 C1            [12] 2562 	mov	a,#0xC1
      0006E1 12 0C DB         [24] 2563 	lcall	___fsmul
      0006E4 AC 82            [24] 2564 	mov	r4,dpl
      0006E6 AD 83            [24] 2565 	mov	r5,dph
      0006E8 AE F0            [24] 2566 	mov	r6,b
      0006EA FF               [12] 2567 	mov	r7,a
      0006EB E5 81            [12] 2568 	mov	a,sp
      0006ED 24 FC            [12] 2569 	add	a,#0xfc
      0006EF F5 81            [12] 2570 	mov	sp,a
      0006F1 E4               [12] 2571 	clr	a
      0006F2 C0 E0            [24] 2572 	push	acc
      0006F4 74 50            [12] 2573 	mov	a,#0x50
      0006F6 C0 E0            [24] 2574 	push	acc
      0006F8 74 6A            [12] 2575 	mov	a,#0x6A
      0006FA C0 E0            [24] 2576 	push	acc
      0006FC 74 45            [12] 2577 	mov	a,#0x45
      0006FE C0 E0            [24] 2578 	push	acc
      000700 8C 82            [24] 2579 	mov	dpl,r4
      000702 8D 83            [24] 2580 	mov	dph,r5
      000704 8E F0            [24] 2581 	mov	b,r6
      000706 EF               [12] 2582 	mov	a,r7
      000707 12 0F BF         [24] 2583 	lcall	___fsadd
      00070A AC 82            [24] 2584 	mov	r4,dpl
      00070C AD 83            [24] 2585 	mov	r5,dph
      00070E AE F0            [24] 2586 	mov	r6,b
      000710 FF               [12] 2587 	mov	r7,a
      000711 E5 81            [12] 2588 	mov	a,sp
      000713 24 FC            [12] 2589 	add	a,#0xfc
      000715 F5 81            [12] 2590 	mov	sp,a
      000717 8C 82            [24] 2591 	mov	dpl,r4
      000719 8D 83            [24] 2592 	mov	dph,r5
      00071B 8E F0            [24] 2593 	mov	b,r6
      00071D EF               [12] 2594 	mov	a,r7
      00071E 12 10 6D         [24] 2595 	lcall	___fs2uint
      000721 85 82 46         [24] 2596 	mov	_MOTOR_PW,dpl
      000724 85 83 47         [24] 2597 	mov	(_MOTOR_PW + 1),dph
      000727                       2598 00109$:
                           000669  2599 	C$lab4_m.c$159$1$131 ==.
                                   2600 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:159: if (range > 50 && range < 90)
      000727 C3               [12] 2601 	clr	c
      000728 74 32            [12] 2602 	mov	a,#0x32
      00072A 95 41            [12] 2603 	subb	a,_range
      00072C E4               [12] 2604 	clr	a
      00072D 95 42            [12] 2605 	subb	a,(_range + 1)
      00072F 50 6B            [24] 2606 	jnc	00112$
      000731 C3               [12] 2607 	clr	c
      000732 E5 41            [12] 2608 	mov	a,_range
      000734 94 5A            [12] 2609 	subb	a,#0x5A
      000736 E5 42            [12] 2610 	mov	a,(_range + 1)
      000738 94 00            [12] 2611 	subb	a,#0x00
      00073A 50 60            [24] 2612 	jnc	00112$
                           00067E  2613 	C$lab4_m.c$161$1$131 ==.
                                   2614 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:161: MOTOR_PW = 3686.25 - (18.425 * range);
      00073C 85 41 82         [24] 2615 	mov	dpl,_range
      00073F 85 42 83         [24] 2616 	mov	dph,(_range + 1)
      000742 12 10 61         [24] 2617 	lcall	___uint2fs
      000745 AC 82            [24] 2618 	mov	r4,dpl
      000747 AD 83            [24] 2619 	mov	r5,dph
      000749 AE F0            [24] 2620 	mov	r6,b
      00074B FF               [12] 2621 	mov	r7,a
      00074C C0 04            [24] 2622 	push	ar4
      00074E C0 05            [24] 2623 	push	ar5
      000750 C0 06            [24] 2624 	push	ar6
      000752 C0 07            [24] 2625 	push	ar7
      000754 90 66 66         [24] 2626 	mov	dptr,#0x6666
      000757 75 F0 93         [24] 2627 	mov	b,#0x93
      00075A 74 41            [12] 2628 	mov	a,#0x41
      00075C 12 0C DB         [24] 2629 	lcall	___fsmul
      00075F AC 82            [24] 2630 	mov	r4,dpl
      000761 AD 83            [24] 2631 	mov	r5,dph
      000763 AE F0            [24] 2632 	mov	r6,b
      000765 FF               [12] 2633 	mov	r7,a
      000766 E5 81            [12] 2634 	mov	a,sp
      000768 24 FC            [12] 2635 	add	a,#0xfc
      00076A F5 81            [12] 2636 	mov	sp,a
      00076C C0 04            [24] 2637 	push	ar4
      00076E C0 05            [24] 2638 	push	ar5
      000770 C0 06            [24] 2639 	push	ar6
      000772 C0 07            [24] 2640 	push	ar7
      000774 90 64 00         [24] 2641 	mov	dptr,#0x6400
      000777 75 F0 66         [24] 2642 	mov	b,#0x66
      00077A 74 45            [12] 2643 	mov	a,#0x45
      00077C 12 0C D0         [24] 2644 	lcall	___fssub
      00077F AC 82            [24] 2645 	mov	r4,dpl
      000781 AD 83            [24] 2646 	mov	r5,dph
      000783 AE F0            [24] 2647 	mov	r6,b
      000785 FF               [12] 2648 	mov	r7,a
      000786 E5 81            [12] 2649 	mov	a,sp
      000788 24 FC            [12] 2650 	add	a,#0xfc
      00078A F5 81            [12] 2651 	mov	sp,a
      00078C 8C 82            [24] 2652 	mov	dpl,r4
      00078E 8D 83            [24] 2653 	mov	dph,r5
      000790 8E F0            [24] 2654 	mov	b,r6
      000792 EF               [12] 2655 	mov	a,r7
      000793 12 10 6D         [24] 2656 	lcall	___fs2uint
      000796 85 82 46         [24] 2657 	mov	_MOTOR_PW,dpl
      000799 85 83 47         [24] 2658 	mov	(_MOTOR_PW + 1),dph
      00079C                       2659 00112$:
                           0006DE  2660 	C$lab4_m.c$163$1$131 ==.
                                   2661 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:163: printf("\r\n Motor Power is %u", MOTOR_PW);
      00079C C0 46            [24] 2662 	push	_MOTOR_PW
      00079E C0 47            [24] 2663 	push	(_MOTOR_PW + 1)
      0007A0 74 24            [12] 2664 	mov	a,#___str_6
      0007A2 C0 E0            [24] 2665 	push	acc
      0007A4 74 19            [12] 2666 	mov	a,#(___str_6 >> 8)
      0007A6 C0 E0            [24] 2667 	push	acc
      0007A8 74 80            [12] 2668 	mov	a,#0x80
      0007AA C0 E0            [24] 2669 	push	acc
      0007AC 12 10 EB         [24] 2670 	lcall	_printf
      0007AF E5 81            [12] 2671 	mov	a,sp
      0007B1 24 FB            [12] 2672 	add	a,#0xfb
      0007B3 F5 81            [12] 2673 	mov	sp,a
                           0006F7  2674 	C$lab4_m.c$164$1$131 ==.
                                   2675 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:164: PCA0CP2 = 0xFFFF - MOTOR_PW;
      0007B5 74 FF            [12] 2676 	mov	a,#0xFF
      0007B7 C3               [12] 2677 	clr	c
      0007B8 95 46            [12] 2678 	subb	a,_MOTOR_PW
      0007BA F5 EC            [12] 2679 	mov	((_PCA0CP2 >> 0) & 0xFF),a
      0007BC 74 FF            [12] 2680 	mov	a,#0xFF
      0007BE 95 47            [12] 2681 	subb	a,(_MOTOR_PW + 1)
      0007C0 F5 FC            [12] 2682 	mov	((_PCA0CP2 >> 8) & 0xFF),a
                           000704  2683 	C$lab4_m.c$165$1$131 ==.
                           000704  2684 	XG$Drive_Motor$0$0 ==.
      0007C2 22               [24] 2685 	ret
                                   2686 ;------------------------------------------------------------
                                   2687 ;Allocation info for local variables in function 'Read_Ranger'
                                   2688 ;------------------------------------------------------------
                                   2689 ;read                      Allocated to registers 
                                   2690 ;------------------------------------------------------------
                           000705  2691 	G$Read_Ranger$0$0 ==.
                           000705  2692 	C$lab4_m.c$170$1$131 ==.
                                   2693 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:170: unsigned int Read_Ranger(void)
                                   2694 ;	-----------------------------------------
                                   2695 ;	 function Read_Ranger
                                   2696 ;	-----------------------------------------
      0007C3                       2697 _Read_Ranger:
                           000705  2698 	C$lab4_m.c$173$1$138 ==.
                                   2699 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:173: r_addr = 0xE0;
      0007C3 75 43 E0         [24] 2700 	mov	_r_addr,#0xE0
                           000708  2701 	C$lab4_m.c$174$1$138 ==.
                                   2702 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:174: i2c_read_data(r_addr, 2, r_data, 2);
      0007C6 75 2D 44         [24] 2703 	mov	_i2c_read_data_PARM_3,#_r_data
      0007C9 75 2E 00         [24] 2704 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0007CC 75 2F 40         [24] 2705 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0007CF 75 2C 02         [24] 2706 	mov	_i2c_read_data_PARM_2,#0x02
      0007D2 75 30 02         [24] 2707 	mov	_i2c_read_data_PARM_4,#0x02
      0007D5 75 82 E0         [24] 2708 	mov	dpl,#0xE0
      0007D8 12 04 A6         [24] 2709 	lcall	_i2c_read_data
                           00071D  2710 	C$lab4_m.c$175$1$138 ==.
                                   2711 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:175: read = (((unsigned int) r_data[0] <<8) | r_data[1]);
      0007DB AF 44            [24] 2712 	mov	r7,_r_data
      0007DD 7E 00            [12] 2713 	mov	r6,#0x00
      0007DF AC 45            [24] 2714 	mov	r4,(_r_data + 0x0001)
      0007E1 7D 00            [12] 2715 	mov	r5,#0x00
      0007E3 EC               [12] 2716 	mov	a,r4
      0007E4 4E               [12] 2717 	orl	a,r6
      0007E5 F5 82            [12] 2718 	mov	dpl,a
      0007E7 ED               [12] 2719 	mov	a,r5
      0007E8 4F               [12] 2720 	orl	a,r7
      0007E9 F5 83            [12] 2721 	mov	dph,a
                           00072D  2722 	C$lab4_m.c$176$1$138 ==.
                                   2723 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:176: return read;
                           00072D  2724 	C$lab4_m.c$177$1$138 ==.
                           00072D  2725 	XG$Read_Ranger$0$0 ==.
      0007EB 22               [24] 2726 	ret
                                   2727 ;------------------------------------------------------------
                                   2728 ;Allocation info for local variables in function 'ReadCompass'
                                   2729 ;------------------------------------------------------------
                                   2730 ;Data                      Allocated with name '_ReadCompass_Data_1_140'
                                   2731 ;Crange                    Allocated to registers 
                                   2732 ;addr                      Allocated to registers 
                                   2733 ;------------------------------------------------------------
                           00072E  2734 	G$ReadCompass$0$0 ==.
                           00072E  2735 	C$lab4_m.c$182$1$138 ==.
                                   2736 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:182: unsigned int ReadCompass(void)
                                   2737 ;	-----------------------------------------
                                   2738 ;	 function ReadCompass
                                   2739 ;	-----------------------------------------
      0007EC                       2740 _ReadCompass:
                           00072E  2741 	C$lab4_m.c$187$1$140 ==.
                                   2742 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:187: i2c_read_data(addr, 2,Data,2);
      0007EC 75 2D 4B         [24] 2743 	mov	_i2c_read_data_PARM_3,#_ReadCompass_Data_1_140
      0007EF 75 2E 00         [24] 2744 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0007F2 75 2F 40         [24] 2745 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0007F5 75 2C 02         [24] 2746 	mov	_i2c_read_data_PARM_2,#0x02
      0007F8 75 30 02         [24] 2747 	mov	_i2c_read_data_PARM_4,#0x02
      0007FB 75 82 C0         [24] 2748 	mov	dpl,#0xC0
      0007FE 12 04 A6         [24] 2749 	lcall	_i2c_read_data
                           000743  2750 	C$lab4_m.c$188$1$140 ==.
                                   2751 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:188: Crange = ((unsigned int) Data[0] << 8 | Data[1]);
      000801 AF 4B            [24] 2752 	mov	r7,_ReadCompass_Data_1_140
      000803 7E 00            [12] 2753 	mov	r6,#0x00
      000805 AC 4C            [24] 2754 	mov	r4,(_ReadCompass_Data_1_140 + 0x0001)
      000807 7D 00            [12] 2755 	mov	r5,#0x00
      000809 EC               [12] 2756 	mov	a,r4
      00080A 4E               [12] 2757 	orl	a,r6
      00080B F5 82            [12] 2758 	mov	dpl,a
      00080D ED               [12] 2759 	mov	a,r5
      00080E 4F               [12] 2760 	orl	a,r7
      00080F F5 83            [12] 2761 	mov	dph,a
                           000753  2762 	C$lab4_m.c$189$1$140 ==.
                                   2763 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:189: return Crange;
                           000753  2764 	C$lab4_m.c$190$1$140 ==.
                           000753  2765 	XG$ReadCompass$0$0 ==.
      000811 22               [24] 2766 	ret
                                   2767 ;------------------------------------------------------------
                                   2768 ;Allocation info for local variables in function 'Steering_Servo'
                                   2769 ;------------------------------------------------------------
                                   2770 ;direction                 Allocated with name '_Steering_Servo_direction_1_141'
                                   2771 ;------------------------------------------------------------
                           000754  2772 	G$Steering_Servo$0$0 ==.
                           000754  2773 	C$lab4_m.c$195$1$140 ==.
                                   2774 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:195: void Steering_Servo(unsigned int direction)
                                   2775 ;	-----------------------------------------
                                   2776 ;	 function Steering_Servo
                                   2777 ;	-----------------------------------------
      000812                       2778 _Steering_Servo:
      000812 85 82 4D         [24] 2779 	mov	_Steering_Servo_direction_1_141,dpl
      000815 85 83 4E         [24] 2780 	mov	(_Steering_Servo_direction_1_141 + 1),dph
                           00075A  2781 	C$lab4_m.c$199$1$142 ==.
                                   2782 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:199: if (direction < 1800)
      000818 C3               [12] 2783 	clr	c
      000819 E5 4D            [12] 2784 	mov	a,_Steering_Servo_direction_1_141
      00081B 94 08            [12] 2785 	subb	a,#0x08
      00081D E5 4E            [12] 2786 	mov	a,(_Steering_Servo_direction_1_141 + 1)
      00081F 94 07            [12] 2787 	subb	a,#0x07
      000821 40 03            [24] 2788 	jc	00128$
      000823 02 09 2F         [24] 2789 	ljmp	00112$
      000826                       2790 00128$:
                           000768  2791 	C$lab4_m.c$201$1$142 ==.
                                   2792 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:201: if (STR_PW <= PW_CENTER_STR - (float)(direction)/4.2)
      000826 85 4D 82         [24] 2793 	mov	dpl,_Steering_Servo_direction_1_141
      000829 85 4E 83         [24] 2794 	mov	dph,(_Steering_Servo_direction_1_141 + 1)
      00082C 12 10 61         [24] 2795 	lcall	___uint2fs
      00082F AA 82            [24] 2796 	mov	r2,dpl
      000831 AB 83            [24] 2797 	mov	r3,dph
      000833 AC F0            [24] 2798 	mov	r4,b
      000835 FD               [12] 2799 	mov	r5,a
      000836 74 66            [12] 2800 	mov	a,#0x66
      000838 C0 E0            [24] 2801 	push	acc
      00083A C0 E0            [24] 2802 	push	acc
      00083C 74 86            [12] 2803 	mov	a,#0x86
      00083E C0 E0            [24] 2804 	push	acc
      000840 74 40            [12] 2805 	mov	a,#0x40
      000842 C0 E0            [24] 2806 	push	acc
      000844 8A 82            [24] 2807 	mov	dpl,r2
      000846 8B 83            [24] 2808 	mov	dph,r3
      000848 8C F0            [24] 2809 	mov	b,r4
      00084A ED               [12] 2810 	mov	a,r5
      00084B 12 16 F9         [24] 2811 	lcall	___fsdiv
      00084E AA 82            [24] 2812 	mov	r2,dpl
      000850 AB 83            [24] 2813 	mov	r3,dph
      000852 AC F0            [24] 2814 	mov	r4,b
      000854 FD               [12] 2815 	mov	r5,a
      000855 E5 81            [12] 2816 	mov	a,sp
      000857 24 FC            [12] 2817 	add	a,#0xfc
      000859 F5 81            [12] 2818 	mov	sp,a
      00085B C0 02            [24] 2819 	push	ar2
      00085D C0 03            [24] 2820 	push	ar3
      00085F C0 04            [24] 2821 	push	ar4
      000861 C0 05            [24] 2822 	push	ar5
      000863 90 D0 00         [24] 2823 	mov	dptr,#0xD000
      000866 75 F0 27         [24] 2824 	mov	b,#0x27
      000869 74 45            [12] 2825 	mov	a,#0x45
      00086B 12 0C D0         [24] 2826 	lcall	___fssub
      00086E AA 82            [24] 2827 	mov	r2,dpl
      000870 AB 83            [24] 2828 	mov	r3,dph
      000872 AC F0            [24] 2829 	mov	r4,b
      000874 FD               [12] 2830 	mov	r5,a
      000875 E5 81            [12] 2831 	mov	a,sp
      000877 24 FC            [12] 2832 	add	a,#0xfc
      000879 F5 81            [12] 2833 	mov	sp,a
      00087B 85 34 82         [24] 2834 	mov	dpl,_STR_PW
      00087E 85 35 83         [24] 2835 	mov	dph,(_STR_PW + 1)
      000881 C0 05            [24] 2836 	push	ar5
      000883 C0 04            [24] 2837 	push	ar4
      000885 C0 03            [24] 2838 	push	ar3
      000887 C0 02            [24] 2839 	push	ar2
      000889 12 10 61         [24] 2840 	lcall	___uint2fs
      00088C A8 82            [24] 2841 	mov	r0,dpl
      00088E A9 83            [24] 2842 	mov	r1,dph
      000890 AE F0            [24] 2843 	mov	r6,b
      000892 FF               [12] 2844 	mov	r7,a
      000893 D0 02            [24] 2845 	pop	ar2
      000895 D0 03            [24] 2846 	pop	ar3
      000897 D0 04            [24] 2847 	pop	ar4
      000899 D0 05            [24] 2848 	pop	ar5
      00089B C0 02            [24] 2849 	push	ar2
      00089D C0 03            [24] 2850 	push	ar3
      00089F C0 04            [24] 2851 	push	ar4
      0008A1 C0 05            [24] 2852 	push	ar5
      0008A3 88 82            [24] 2853 	mov	dpl,r0
      0008A5 89 83            [24] 2854 	mov	dph,r1
      0008A7 8E F0            [24] 2855 	mov	b,r6
      0008A9 EF               [12] 2856 	mov	a,r7
      0008AA 12 0D DF         [24] 2857 	lcall	___fsgt
      0008AD AF 82            [24] 2858 	mov	r7,dpl
      0008AF E5 81            [12] 2859 	mov	a,sp
      0008B1 24 FC            [12] 2860 	add	a,#0xfc
      0008B3 F5 81            [12] 2861 	mov	sp,a
      0008B5 EF               [12] 2862 	mov	a,r7
      0008B6 70 68            [24] 2863 	jnz	00102$
                           0007FA  2864 	C$lab4_m.c$203$1$142 ==.
                                   2865 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:203: STR_PW = PW_CENTER_STR - (float)(direction)/4.2;
      0008B8 85 4D 82         [24] 2866 	mov	dpl,_Steering_Servo_direction_1_141
      0008BB 85 4E 83         [24] 2867 	mov	dph,(_Steering_Servo_direction_1_141 + 1)
      0008BE 12 10 61         [24] 2868 	lcall	___uint2fs
      0008C1 AC 82            [24] 2869 	mov	r4,dpl
      0008C3 AD 83            [24] 2870 	mov	r5,dph
      0008C5 AE F0            [24] 2871 	mov	r6,b
      0008C7 FF               [12] 2872 	mov	r7,a
      0008C8 74 66            [12] 2873 	mov	a,#0x66
      0008CA C0 E0            [24] 2874 	push	acc
      0008CC C0 E0            [24] 2875 	push	acc
      0008CE 74 86            [12] 2876 	mov	a,#0x86
      0008D0 C0 E0            [24] 2877 	push	acc
      0008D2 74 40            [12] 2878 	mov	a,#0x40
      0008D4 C0 E0            [24] 2879 	push	acc
      0008D6 8C 82            [24] 2880 	mov	dpl,r4
      0008D8 8D 83            [24] 2881 	mov	dph,r5
      0008DA 8E F0            [24] 2882 	mov	b,r6
      0008DC EF               [12] 2883 	mov	a,r7
      0008DD 12 16 F9         [24] 2884 	lcall	___fsdiv
      0008E0 AC 82            [24] 2885 	mov	r4,dpl
      0008E2 AD 83            [24] 2886 	mov	r5,dph
      0008E4 AE F0            [24] 2887 	mov	r6,b
      0008E6 FF               [12] 2888 	mov	r7,a
      0008E7 E5 81            [12] 2889 	mov	a,sp
      0008E9 24 FC            [12] 2890 	add	a,#0xfc
      0008EB F5 81            [12] 2891 	mov	sp,a
      0008ED C0 04            [24] 2892 	push	ar4
      0008EF C0 05            [24] 2893 	push	ar5
      0008F1 C0 06            [24] 2894 	push	ar6
      0008F3 C0 07            [24] 2895 	push	ar7
      0008F5 90 D0 00         [24] 2896 	mov	dptr,#0xD000
      0008F8 75 F0 27         [24] 2897 	mov	b,#0x27
      0008FB 74 45            [12] 2898 	mov	a,#0x45
      0008FD 12 0C D0         [24] 2899 	lcall	___fssub
      000900 AC 82            [24] 2900 	mov	r4,dpl
      000902 AD 83            [24] 2901 	mov	r5,dph
      000904 AE F0            [24] 2902 	mov	r6,b
      000906 FF               [12] 2903 	mov	r7,a
      000907 E5 81            [12] 2904 	mov	a,sp
      000909 24 FC            [12] 2905 	add	a,#0xfc
      00090B F5 81            [12] 2906 	mov	sp,a
      00090D 8C 82            [24] 2907 	mov	dpl,r4
      00090F 8D 83            [24] 2908 	mov	dph,r5
      000911 8E F0            [24] 2909 	mov	b,r6
      000913 EF               [12] 2910 	mov	a,r7
      000914 12 10 6D         [24] 2911 	lcall	___fs2uint
      000917 85 82 34         [24] 2912 	mov	_STR_PW,dpl
      00091A 85 83 35         [24] 2913 	mov	(_STR_PW + 1),dph
      00091D 02 0A 64         [24] 2914 	ljmp	00113$
      000920                       2915 00102$:
                           000862  2916 	C$lab4_m.c$207$3$145 ==.
                                   2917 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:207: STR_PW -= 10;
      000920 E5 34            [12] 2918 	mov	a,_STR_PW
      000922 24 F6            [12] 2919 	add	a,#0xF6
      000924 F5 34            [12] 2920 	mov	_STR_PW,a
      000926 E5 35            [12] 2921 	mov	a,(_STR_PW + 1)
      000928 34 FF            [12] 2922 	addc	a,#0xFF
      00092A F5 35            [12] 2923 	mov	(_STR_PW + 1),a
      00092C 02 0A 64         [24] 2924 	ljmp	00113$
      00092F                       2925 00112$:
                           000871  2926 	C$lab4_m.c$210$1$142 ==.
                                   2927 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:210: else if ( direction == 0 || direction ==3600)
      00092F E5 4D            [12] 2928 	mov	a,_Steering_Servo_direction_1_141
      000931 45 4E            [12] 2929 	orl	a,(_Steering_Servo_direction_1_141 + 1)
      000933 60 0A            [24] 2930 	jz	00107$
      000935 74 10            [12] 2931 	mov	a,#0x10
      000937 B5 4D 0E         [24] 2932 	cjne	a,_Steering_Servo_direction_1_141,00108$
      00093A 74 0E            [12] 2933 	mov	a,#0x0E
      00093C B5 4E 09         [24] 2934 	cjne	a,(_Steering_Servo_direction_1_141 + 1),00108$
      00093F                       2935 00107$:
                           000881  2936 	C$lab4_m.c$212$2$146 ==.
                                   2937 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:212: STR_PW=PW_CENTER_STR;
      00093F 75 34 7D         [24] 2938 	mov	_STR_PW,#0x7D
      000942 75 35 0A         [24] 2939 	mov	(_STR_PW + 1),#0x0A
      000945 02 0A 64         [24] 2940 	ljmp	00113$
      000948                       2941 00108$:
                           00088A  2942 	C$lab4_m.c$216$2$147 ==.
                                   2943 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:216: if (STR_PW >= PW_CENTER_STR + (float)(3600-direction)/1.9)
      000948 74 10            [12] 2944 	mov	a,#0x10
      00094A C3               [12] 2945 	clr	c
      00094B 95 4D            [12] 2946 	subb	a,_Steering_Servo_direction_1_141
      00094D F5 82            [12] 2947 	mov	dpl,a
      00094F 74 0E            [12] 2948 	mov	a,#0x0E
      000951 95 4E            [12] 2949 	subb	a,(_Steering_Servo_direction_1_141 + 1)
      000953 F5 83            [12] 2950 	mov	dph,a
      000955 12 10 61         [24] 2951 	lcall	___uint2fs
      000958 AC 82            [24] 2952 	mov	r4,dpl
      00095A AD 83            [24] 2953 	mov	r5,dph
      00095C AE F0            [24] 2954 	mov	r6,b
      00095E FF               [12] 2955 	mov	r7,a
      00095F 74 33            [12] 2956 	mov	a,#0x33
      000961 C0 E0            [24] 2957 	push	acc
      000963 C0 E0            [24] 2958 	push	acc
      000965 74 F3            [12] 2959 	mov	a,#0xF3
      000967 C0 E0            [24] 2960 	push	acc
      000969 C4               [12] 2961 	swap	a
      00096A C0 E0            [24] 2962 	push	acc
      00096C 8C 82            [24] 2963 	mov	dpl,r4
      00096E 8D 83            [24] 2964 	mov	dph,r5
      000970 8E F0            [24] 2965 	mov	b,r6
      000972 EF               [12] 2966 	mov	a,r7
      000973 12 16 F9         [24] 2967 	lcall	___fsdiv
      000976 AC 82            [24] 2968 	mov	r4,dpl
      000978 AD 83            [24] 2969 	mov	r5,dph
      00097A AE F0            [24] 2970 	mov	r6,b
      00097C FF               [12] 2971 	mov	r7,a
      00097D E5 81            [12] 2972 	mov	a,sp
      00097F 24 FC            [12] 2973 	add	a,#0xfc
      000981 F5 81            [12] 2974 	mov	sp,a
      000983 E4               [12] 2975 	clr	a
      000984 C0 E0            [24] 2976 	push	acc
      000986 74 D0            [12] 2977 	mov	a,#0xD0
      000988 C0 E0            [24] 2978 	push	acc
      00098A 74 27            [12] 2979 	mov	a,#0x27
      00098C C0 E0            [24] 2980 	push	acc
      00098E 74 45            [12] 2981 	mov	a,#0x45
      000990 C0 E0            [24] 2982 	push	acc
      000992 8C 82            [24] 2983 	mov	dpl,r4
      000994 8D 83            [24] 2984 	mov	dph,r5
      000996 8E F0            [24] 2985 	mov	b,r6
      000998 EF               [12] 2986 	mov	a,r7
      000999 12 0F BF         [24] 2987 	lcall	___fsadd
      00099C AC 82            [24] 2988 	mov	r4,dpl
      00099E AD 83            [24] 2989 	mov	r5,dph
      0009A0 AE F0            [24] 2990 	mov	r6,b
      0009A2 FF               [12] 2991 	mov	r7,a
      0009A3 E5 81            [12] 2992 	mov	a,sp
      0009A5 24 FC            [12] 2993 	add	a,#0xfc
      0009A7 F5 81            [12] 2994 	mov	sp,a
      0009A9 85 34 82         [24] 2995 	mov	dpl,_STR_PW
      0009AC 85 35 83         [24] 2996 	mov	dph,(_STR_PW + 1)
      0009AF C0 07            [24] 2997 	push	ar7
      0009B1 C0 06            [24] 2998 	push	ar6
      0009B3 C0 05            [24] 2999 	push	ar5
      0009B5 C0 04            [24] 3000 	push	ar4
      0009B7 12 10 61         [24] 3001 	lcall	___uint2fs
      0009BA A8 82            [24] 3002 	mov	r0,dpl
      0009BC A9 83            [24] 3003 	mov	r1,dph
      0009BE AA F0            [24] 3004 	mov	r2,b
      0009C0 FB               [12] 3005 	mov	r3,a
      0009C1 D0 04            [24] 3006 	pop	ar4
      0009C3 D0 05            [24] 3007 	pop	ar5
      0009C5 D0 06            [24] 3008 	pop	ar6
      0009C7 D0 07            [24] 3009 	pop	ar7
      0009C9 C0 04            [24] 3010 	push	ar4
      0009CB C0 05            [24] 3011 	push	ar5
      0009CD C0 06            [24] 3012 	push	ar6
      0009CF C0 07            [24] 3013 	push	ar7
      0009D1 88 82            [24] 3014 	mov	dpl,r0
      0009D3 89 83            [24] 3015 	mov	dph,r1
      0009D5 8A F0            [24] 3016 	mov	b,r2
      0009D7 EB               [12] 3017 	mov	a,r3
      0009D8 12 0E 2A         [24] 3018 	lcall	___fslt
      0009DB AF 82            [24] 3019 	mov	r7,dpl
      0009DD E5 81            [12] 3020 	mov	a,sp
      0009DF 24 FC            [12] 3021 	add	a,#0xfc
      0009E1 F5 81            [12] 3022 	mov	sp,a
      0009E3 EF               [12] 3023 	mov	a,r7
      0009E4 70 73            [24] 3024 	jnz	00105$
                           000928  3025 	C$lab4_m.c$218$3$148 ==.
                                   3026 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:218: STR_PW = PW_CENTER_STR + (float)(3600-direction)/1.9;
      0009E6 74 10            [12] 3027 	mov	a,#0x10
      0009E8 C3               [12] 3028 	clr	c
      0009E9 95 4D            [12] 3029 	subb	a,_Steering_Servo_direction_1_141
      0009EB F5 82            [12] 3030 	mov	dpl,a
      0009ED 74 0E            [12] 3031 	mov	a,#0x0E
      0009EF 95 4E            [12] 3032 	subb	a,(_Steering_Servo_direction_1_141 + 1)
      0009F1 F5 83            [12] 3033 	mov	dph,a
      0009F3 12 10 61         [24] 3034 	lcall	___uint2fs
      0009F6 AC 82            [24] 3035 	mov	r4,dpl
      0009F8 AD 83            [24] 3036 	mov	r5,dph
      0009FA AE F0            [24] 3037 	mov	r6,b
      0009FC FF               [12] 3038 	mov	r7,a
      0009FD 74 33            [12] 3039 	mov	a,#0x33
      0009FF C0 E0            [24] 3040 	push	acc
      000A01 C0 E0            [24] 3041 	push	acc
      000A03 74 F3            [12] 3042 	mov	a,#0xF3
      000A05 C0 E0            [24] 3043 	push	acc
      000A07 C4               [12] 3044 	swap	a
      000A08 C0 E0            [24] 3045 	push	acc
      000A0A 8C 82            [24] 3046 	mov	dpl,r4
      000A0C 8D 83            [24] 3047 	mov	dph,r5
      000A0E 8E F0            [24] 3048 	mov	b,r6
      000A10 EF               [12] 3049 	mov	a,r7
      000A11 12 16 F9         [24] 3050 	lcall	___fsdiv
      000A14 AC 82            [24] 3051 	mov	r4,dpl
      000A16 AD 83            [24] 3052 	mov	r5,dph
      000A18 AE F0            [24] 3053 	mov	r6,b
      000A1A FF               [12] 3054 	mov	r7,a
      000A1B E5 81            [12] 3055 	mov	a,sp
      000A1D 24 FC            [12] 3056 	add	a,#0xfc
      000A1F F5 81            [12] 3057 	mov	sp,a
      000A21 E4               [12] 3058 	clr	a
      000A22 C0 E0            [24] 3059 	push	acc
      000A24 74 D0            [12] 3060 	mov	a,#0xD0
      000A26 C0 E0            [24] 3061 	push	acc
      000A28 74 27            [12] 3062 	mov	a,#0x27
      000A2A C0 E0            [24] 3063 	push	acc
      000A2C 74 45            [12] 3064 	mov	a,#0x45
      000A2E C0 E0            [24] 3065 	push	acc
      000A30 8C 82            [24] 3066 	mov	dpl,r4
      000A32 8D 83            [24] 3067 	mov	dph,r5
      000A34 8E F0            [24] 3068 	mov	b,r6
      000A36 EF               [12] 3069 	mov	a,r7
      000A37 12 0F BF         [24] 3070 	lcall	___fsadd
      000A3A AC 82            [24] 3071 	mov	r4,dpl
      000A3C AD 83            [24] 3072 	mov	r5,dph
      000A3E AE F0            [24] 3073 	mov	r6,b
      000A40 FF               [12] 3074 	mov	r7,a
      000A41 E5 81            [12] 3075 	mov	a,sp
      000A43 24 FC            [12] 3076 	add	a,#0xfc
      000A45 F5 81            [12] 3077 	mov	sp,a
      000A47 8C 82            [24] 3078 	mov	dpl,r4
      000A49 8D 83            [24] 3079 	mov	dph,r5
      000A4B 8E F0            [24] 3080 	mov	b,r6
      000A4D EF               [12] 3081 	mov	a,r7
      000A4E 12 10 6D         [24] 3082 	lcall	___fs2uint
      000A51 85 82 34         [24] 3083 	mov	_STR_PW,dpl
      000A54 85 83 35         [24] 3084 	mov	(_STR_PW + 1),dph
      000A57 80 0B            [24] 3085 	sjmp	00113$
      000A59                       3086 00105$:
                           00099B  3087 	C$lab4_m.c$222$3$149 ==.
                                   3088 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:222: STR_PW += 10;
      000A59 74 0A            [12] 3089 	mov	a,#0x0A
      000A5B 25 34            [12] 3090 	add	a,_STR_PW
      000A5D F5 34            [12] 3091 	mov	_STR_PW,a
      000A5F E4               [12] 3092 	clr	a
      000A60 35 35            [12] 3093 	addc	a,(_STR_PW + 1)
      000A62 F5 35            [12] 3094 	mov	(_STR_PW + 1),a
      000A64                       3095 00113$:
                           0009A6  3096 	C$lab4_m.c$227$1$142 ==.
                                   3097 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:227: printf("\r\nSTR_PW: %u", STR_PW);
      000A64 C0 34            [24] 3098 	push	_STR_PW
      000A66 C0 35            [24] 3099 	push	(_STR_PW + 1)
      000A68 74 39            [12] 3100 	mov	a,#___str_7
      000A6A C0 E0            [24] 3101 	push	acc
      000A6C 74 19            [12] 3102 	mov	a,#(___str_7 >> 8)
      000A6E C0 E0            [24] 3103 	push	acc
      000A70 74 80            [12] 3104 	mov	a,#0x80
      000A72 C0 E0            [24] 3105 	push	acc
      000A74 12 10 EB         [24] 3106 	lcall	_printf
      000A77 E5 81            [12] 3107 	mov	a,sp
      000A79 24 FB            [12] 3108 	add	a,#0xfb
      000A7B F5 81            [12] 3109 	mov	sp,a
                           0009BF  3110 	C$lab4_m.c$228$1$142 ==.
                                   3111 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:228: STR_lo_to_hi= 0xFFFF - STR_PW;
      000A7D 74 FF            [12] 3112 	mov	a,#0xFF
      000A7F C3               [12] 3113 	clr	c
      000A80 95 34            [12] 3114 	subb	a,_STR_PW
      000A82 F5 32            [12] 3115 	mov	_STR_lo_to_hi,a
      000A84 74 FF            [12] 3116 	mov	a,#0xFF
      000A86 95 35            [12] 3117 	subb	a,(_STR_PW + 1)
      000A88 F5 33            [12] 3118 	mov	(_STR_lo_to_hi + 1),a
                           0009CC  3119 	C$lab4_m.c$229$1$142 ==.
                                   3120 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:229: PCA0CP0 = STR_lo_to_hi;
      000A8A 85 32 EA         [24] 3121 	mov	((_PCA0CP0 >> 0) & 0xFF),_STR_lo_to_hi
      000A8D 85 33 FA         [24] 3122 	mov	((_PCA0CP0 >> 8) & 0xFF),(_STR_lo_to_hi + 1)
                           0009D2  3123 	C$lab4_m.c$230$1$142 ==.
                           0009D2  3124 	XG$Steering_Servo$0$0 ==.
      000A90 22               [24] 3125 	ret
                                   3126 ;------------------------------------------------------------
                                   3127 ;Allocation info for local variables in function 'Port_Init'
                                   3128 ;------------------------------------------------------------
                           0009D3  3129 	G$Port_Init$0$0 ==.
                           0009D3  3130 	C$lab4_m.c$238$1$142 ==.
                                   3131 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:238: void Port_Init()
                                   3132 ;	-----------------------------------------
                                   3133 ;	 function Port_Init
                                   3134 ;	-----------------------------------------
      000A91                       3135 _Port_Init:
                           0009D3  3136 	C$lab4_m.c$240$1$150 ==.
                                   3137 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:240: P0MDOUT &= ~0x32;
      000A91 AF A4            [24] 3138 	mov	r7,_P0MDOUT
      000A93 74 CD            [12] 3139 	mov	a,#0xCD
      000A95 5F               [12] 3140 	anl	a,r7
      000A96 F5 A4            [12] 3141 	mov	_P0MDOUT,a
                           0009DA  3142 	C$lab4_m.c$241$1$150 ==.
                                   3143 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:241: P1MDOUT = 0x0F;  //set output pin for CEX0 and CEX2 in push-pull mode
      000A98 75 A5 0F         [24] 3144 	mov	_P1MDOUT,#0x0F
                           0009DD  3145 	C$lab4_m.c$242$1$150 ==.
                                   3146 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:242: P1MDIN &= ~0x10;
      000A9B AF BD            [24] 3147 	mov	r7,_P1MDIN
      000A9D 74 EF            [12] 3148 	mov	a,#0xEF
      000A9F 5F               [12] 3149 	anl	a,r7
      000AA0 F5 BD            [12] 3150 	mov	_P1MDIN,a
                           0009E4  3151 	C$lab4_m.c$243$1$150 ==.
                                   3152 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:243: P1MDOUT |= 0x10;
      000AA2 43 A5 10         [24] 3153 	orl	_P1MDOUT,#0x10
                           0009E7  3154 	C$lab4_m.c$244$1$150 ==.
                                   3155 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:244: P1 		 = 0x10;
      000AA5 75 90 10         [24] 3156 	mov	_P1,#0x10
                           0009EA  3157 	C$lab4_m.c$246$1$150 ==.
                                   3158 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:246: P3MDOUT &= ~0x80;
      000AA8 AF A7            [24] 3159 	mov	r7,_P3MDOUT
      000AAA 74 7F            [12] 3160 	mov	a,#0x7F
      000AAC 5F               [12] 3161 	anl	a,r7
      000AAD F5 A7            [12] 3162 	mov	_P3MDOUT,a
                           0009F1  3163 	C$lab4_m.c$247$1$150 ==.
                                   3164 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:247: P3 = 0x80;
      000AAF 75 B0 80         [24] 3165 	mov	_P3,#0x80
                           0009F4  3166 	C$lab4_m.c$248$1$150 ==.
                           0009F4  3167 	XG$Port_Init$0$0 ==.
      000AB2 22               [24] 3168 	ret
                                   3169 ;------------------------------------------------------------
                                   3170 ;Allocation info for local variables in function 'XBR0_Init'
                                   3171 ;------------------------------------------------------------
                           0009F5  3172 	G$XBR0_Init$0$0 ==.
                           0009F5  3173 	C$lab4_m.c$253$1$150 ==.
                                   3174 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:253: void XBR0_Init()
                                   3175 ;	-----------------------------------------
                                   3176 ;	 function XBR0_Init
                                   3177 ;	-----------------------------------------
      000AB3                       3178 _XBR0_Init:
                           0009F5  3179 	C$lab4_m.c$255$1$151 ==.
                                   3180 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:255: XBR0  = 0x27;  //configure crossbar as directed in the laboratory
      000AB3 75 E1 27         [24] 3181 	mov	_XBR0,#0x27
                           0009F8  3182 	C$lab4_m.c$256$1$151 ==.
                           0009F8  3183 	XG$XBR0_Init$0$0 ==.
      000AB6 22               [24] 3184 	ret
                                   3185 ;------------------------------------------------------------
                                   3186 ;Allocation info for local variables in function 'SMB_Init'
                                   3187 ;------------------------------------------------------------
                           0009F9  3188 	G$SMB_Init$0$0 ==.
                           0009F9  3189 	C$lab4_m.c$261$1$151 ==.
                                   3190 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:261: void SMB_Init(void)
                                   3191 ;	-----------------------------------------
                                   3192 ;	 function SMB_Init
                                   3193 ;	-----------------------------------------
      000AB7                       3194 _SMB_Init:
                           0009F9  3195 	C$lab4_m.c$263$1$153 ==.
                                   3196 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:263: SMB0CR =0x93;
      000AB7 75 CF 93         [24] 3197 	mov	_SMB0CR,#0x93
                           0009FC  3198 	C$lab4_m.c$264$1$153 ==.
                                   3199 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:264: ENSMB =1;
      000ABA D2 C6            [12] 3200 	setb	_ENSMB
                           0009FE  3201 	C$lab4_m.c$265$1$153 ==.
                           0009FE  3202 	XG$SMB_Init$0$0 ==.
      000ABC 22               [24] 3203 	ret
                                   3204 ;------------------------------------------------------------
                                   3205 ;Allocation info for local variables in function 'PCA_Init'
                                   3206 ;------------------------------------------------------------
                           0009FF  3207 	G$PCA_Init$0$0 ==.
                           0009FF  3208 	C$lab4_m.c$270$1$153 ==.
                                   3209 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:270: void PCA_Init(void)
                                   3210 ;	-----------------------------------------
                                   3211 ;	 function PCA_Init
                                   3212 ;	-----------------------------------------
      000ABD                       3213 _PCA_Init:
                           0009FF  3214 	C$lab4_m.c$272$1$155 ==.
                                   3215 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:272: PCA0MD = 0x81;
      000ABD 75 D9 81         [24] 3216 	mov	_PCA0MD,#0x81
                           000A02  3217 	C$lab4_m.c$273$1$155 ==.
                                   3218 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:273: PCA0CPM0 = 0xC2;    //CCM0 in 16-bit compare mode
      000AC0 75 DA C2         [24] 3219 	mov	_PCA0CPM0,#0xC2
                           000A05  3220 	C$lab4_m.c$274$1$155 ==.
                                   3221 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:274: PCA0CN = 0x40;      //Enable PCA counter
      000AC3 75 D8 40         [24] 3222 	mov	_PCA0CN,#0x40
                           000A08  3223 	C$lab4_m.c$275$1$155 ==.
                                   3224 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:275: EIE1 |= 0x08;       //Enable PCA interrupt
      000AC6 43 E6 08         [24] 3225 	orl	_EIE1,#0x08
                           000A0B  3226 	C$lab4_m.c$276$1$155 ==.
                                   3227 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:276: EA = 1;             //Enable global interrupts
      000AC9 D2 AF            [12] 3228 	setb	_EA
                           000A0D  3229 	C$lab4_m.c$277$1$155 ==.
                           000A0D  3230 	XG$PCA_Init$0$0 ==.
      000ACB 22               [24] 3231 	ret
                                   3232 ;------------------------------------------------------------
                                   3233 ;Allocation info for local variables in function 'PCA_ISR'
                                   3234 ;------------------------------------------------------------
                           000A0E  3235 	G$PCA_ISR$0$0 ==.
                           000A0E  3236 	C$lab4_m.c$282$1$155 ==.
                                   3237 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:282: void PCA_ISR ( void ) __interrupt 9
                                   3238 ;	-----------------------------------------
                                   3239 ;	 function PCA_ISR
                                   3240 ;	-----------------------------------------
      000ACC                       3241 _PCA_ISR:
      000ACC C0 E0            [24] 3242 	push	acc
      000ACE C0 D0            [24] 3243 	push	psw
                           000A12  3244 	C$lab4_m.c$285$1$157 ==.
                                   3245 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:285: if (CF)
                           000A12  3246 	C$lab4_m.c$287$2$158 ==.
                                   3247 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:287: CF =0;
      000AD0 10 DF 02         [24] 3248 	jbc	_CF,00108$
      000AD3 80 0E            [24] 3249 	sjmp	00102$
      000AD5                       3250 00108$:
                           000A17  3251 	C$lab4_m.c$288$2$158 ==.
                                   3252 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:288: PCA0 = PCA_START;
      000AD5 75 E9 00         [24] 3253 	mov	((_PCA0 >> 0) & 0xFF),#0x00
      000AD8 75 F9 70         [24] 3254 	mov	((_PCA0 >> 8) & 0xFF),#0x70
                           000A1D  3255 	C$lab4_m.c$289$2$158 ==.
                                   3256 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:289: count++;
      000ADB 05 36            [12] 3257 	inc	_count
      000ADD E4               [12] 3258 	clr	a
      000ADE B5 36 02         [24] 3259 	cjne	a,_count,00109$
      000AE1 05 37            [12] 3260 	inc	(_count + 1)
      000AE3                       3261 00109$:
      000AE3                       3262 00102$:
                           000A25  3263 	C$lab4_m.c$292$1$157 ==.
                                   3264 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:292: PCA0CN &= 0xC0;
      000AE3 53 D8 C0         [24] 3265 	anl	_PCA0CN,#0xC0
      000AE6 D0 D0            [24] 3266 	pop	psw
      000AE8 D0 E0            [24] 3267 	pop	acc
                           000A2C  3268 	C$lab4_m.c$293$1$157 ==.
                           000A2C  3269 	XG$PCA_ISR$0$0 ==.
      000AEA 32               [24] 3270 	reti
                                   3271 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   3272 ;	eliminated unneeded push/pop dpl
                                   3273 ;	eliminated unneeded push/pop dph
                                   3274 ;	eliminated unneeded push/pop b
                                   3275 ;------------------------------------------------------------
                                   3276 ;Allocation info for local variables in function 'direction'
                                   3277 ;------------------------------------------------------------
                                   3278 ;value                     Allocated to registers r6 r7 
                                   3279 ;------------------------------------------------------------
                           000A2D  3280 	G$direction$0$0 ==.
                           000A2D  3281 	C$lab4_m.c$300$1$157 ==.
                                   3282 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:300: unsigned int direction(void)
                                   3283 ;	-----------------------------------------
                                   3284 ;	 function direction
                                   3285 ;	-----------------------------------------
      000AEB                       3286 _direction:
                           000A2D  3287 	C$lab4_m.c$303$1$160 ==.
                                   3288 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:303: count =0;
      000AEB E4               [12] 3289 	clr	a
      000AEC F5 36            [12] 3290 	mov	_count,a
      000AEE F5 37            [12] 3291 	mov	(_count + 1),a
                           000A32  3292 	C$lab4_m.c$304$1$160 ==.
                                   3293 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:304: while (count < 1);
      000AF0                       3294 00101$:
      000AF0 C3               [12] 3295 	clr	c
      000AF1 E5 36            [12] 3296 	mov	a,_count
      000AF3 94 01            [12] 3297 	subb	a,#0x01
      000AF5 E5 37            [12] 3298 	mov	a,(_count + 1)
      000AF7 94 00            [12] 3299 	subb	a,#0x00
      000AF9 40 F5            [24] 3300 	jc	00101$
                           000A3D  3301 	C$lab4_m.c$305$1$160 ==.
                                   3302 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:305: lcd_clear();
      000AFB 12 01 9F         [24] 3303 	lcall	_lcd_clear
                           000A40  3304 	C$lab4_m.c$306$1$160 ==.
                                   3305 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:306: lcd_print("Calibration:\nHello world!\n012_345_678:\nabc def ghij");
      000AFE 74 46            [12] 3306 	mov	a,#___str_8
      000B00 C0 E0            [24] 3307 	push	acc
      000B02 74 19            [12] 3308 	mov	a,#(___str_8 >> 8)
      000B04 C0 E0            [24] 3309 	push	acc
      000B06 74 80            [12] 3310 	mov	a,#0x80
      000B08 C0 E0            [24] 3311 	push	acc
      000B0A 12 01 1A         [24] 3312 	lcall	_lcd_print
      000B0D 15 81            [12] 3313 	dec	sp
      000B0F 15 81            [12] 3314 	dec	sp
      000B11 15 81            [12] 3315 	dec	sp
                           000A55  3316 	C$lab4_m.c$307$1$160 ==.
                                   3317 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:307: start();
      000B13 12 0B 75         [24] 3318 	lcall	_start
                           000A58  3319 	C$lab4_m.c$308$1$160 ==.
                                   3320 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:308: lcd_clear();
      000B16 12 01 9F         [24] 3321 	lcall	_lcd_clear
                           000A5B  3322 	C$lab4_m.c$309$1$160 ==.
                                   3323 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:309: value = kpd_input(0);
      000B19 75 82 00         [24] 3324 	mov	dpl,#0x00
      000B1C 12 02 57         [24] 3325 	lcall	_kpd_input
      000B1F AE 82            [24] 3326 	mov	r6,dpl
      000B21 AF 83            [24] 3327 	mov	r7,dph
                           000A65  3328 	C$lab4_m.c$310$1$160 ==.
                                   3329 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:310: lcd_clear();
      000B23 C0 07            [24] 3330 	push	ar7
      000B25 C0 06            [24] 3331 	push	ar6
      000B27 12 01 9F         [24] 3332 	lcall	_lcd_clear
      000B2A D0 06            [24] 3333 	pop	ar6
      000B2C D0 07            [24] 3334 	pop	ar7
                           000A70  3335 	C$lab4_m.c$311$1$160 ==.
                                   3336 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:311: lcd_print("\r\nThe desired direction is: %d", value);
      000B2E C0 07            [24] 3337 	push	ar7
      000B30 C0 06            [24] 3338 	push	ar6
      000B32 C0 06            [24] 3339 	push	ar6
      000B34 C0 07            [24] 3340 	push	ar7
      000B36 74 7A            [12] 3341 	mov	a,#___str_9
      000B38 C0 E0            [24] 3342 	push	acc
      000B3A 74 19            [12] 3343 	mov	a,#(___str_9 >> 8)
      000B3C C0 E0            [24] 3344 	push	acc
      000B3E 74 80            [12] 3345 	mov	a,#0x80
      000B40 C0 E0            [24] 3346 	push	acc
      000B42 12 01 1A         [24] 3347 	lcall	_lcd_print
      000B45 E5 81            [12] 3348 	mov	a,sp
      000B47 24 FB            [12] 3349 	add	a,#0xfb
      000B49 F5 81            [12] 3350 	mov	sp,a
      000B4B D0 06            [24] 3351 	pop	ar6
      000B4D D0 07            [24] 3352 	pop	ar7
                           000A91  3353 	C$lab4_m.c$312$1$160 ==.
                                   3354 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:312: printf("\r\nThe desired direction is: %d", value);
      000B4F C0 07            [24] 3355 	push	ar7
      000B51 C0 06            [24] 3356 	push	ar6
      000B53 C0 06            [24] 3357 	push	ar6
      000B55 C0 07            [24] 3358 	push	ar7
      000B57 74 7A            [12] 3359 	mov	a,#___str_9
      000B59 C0 E0            [24] 3360 	push	acc
      000B5B 74 19            [12] 3361 	mov	a,#(___str_9 >> 8)
      000B5D C0 E0            [24] 3362 	push	acc
      000B5F 74 80            [12] 3363 	mov	a,#0x80
      000B61 C0 E0            [24] 3364 	push	acc
      000B63 12 10 EB         [24] 3365 	lcall	_printf
      000B66 E5 81            [12] 3366 	mov	a,sp
      000B68 24 FB            [12] 3367 	add	a,#0xfb
      000B6A F5 81            [12] 3368 	mov	sp,a
      000B6C D0 06            [24] 3369 	pop	ar6
      000B6E D0 07            [24] 3370 	pop	ar7
                           000AB2  3371 	C$lab4_m.c$314$1$160 ==.
                                   3372 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:314: return value;
      000B70 8E 82            [24] 3373 	mov	dpl,r6
      000B72 8F 83            [24] 3374 	mov	dph,r7
                           000AB6  3375 	C$lab4_m.c$316$1$160 ==.
                           000AB6  3376 	XG$direction$0$0 ==.
      000B74 22               [24] 3377 	ret
                                   3378 ;------------------------------------------------------------
                                   3379 ;Allocation info for local variables in function 'start'
                                   3380 ;------------------------------------------------------------
                           000AB7  3381 	G$start$0$0 ==.
                           000AB7  3382 	C$lab4_m.c$318$1$160 ==.
                                   3383 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:318: void start(void)
                                   3384 ;	-----------------------------------------
                                   3385 ;	 function start
                                   3386 ;	-----------------------------------------
      000B75                       3387 _start:
                           000AB7  3388 	C$lab4_m.c$320$1$162 ==.
                                   3389 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:320: while (read_keypad() != '*') wait();
      000B75                       3390 00101$:
      000B75 12 01 D8         [24] 3391 	lcall	_read_keypad
      000B78 AF 82            [24] 3392 	mov	r7,dpl
      000B7A BF 2A 02         [24] 3393 	cjne	r7,#0x2A,00112$
      000B7D 80 05            [24] 3394 	sjmp	00104$
      000B7F                       3395 00112$:
      000B7F 12 0B 85         [24] 3396 	lcall	_wait
      000B82 80 F1            [24] 3397 	sjmp	00101$
      000B84                       3398 00104$:
                           000AC6  3399 	C$lab4_m.c$321$1$162 ==.
                           000AC6  3400 	XG$start$0$0 ==.
      000B84 22               [24] 3401 	ret
                                   3402 ;------------------------------------------------------------
                                   3403 ;Allocation info for local variables in function 'wait'
                                   3404 ;------------------------------------------------------------
                           000AC7  3405 	G$wait$0$0 ==.
                           000AC7  3406 	C$lab4_m.c$323$1$162 ==.
                                   3407 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:323: void wait(void)
                                   3408 ;	-----------------------------------------
                                   3409 ;	 function wait
                                   3410 ;	-----------------------------------------
      000B85                       3411 _wait:
                           000AC7  3412 	C$lab4_m.c$325$1$164 ==.
                                   3413 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:325: count=0;
      000B85 E4               [12] 3414 	clr	a
      000B86 F5 36            [12] 3415 	mov	_count,a
      000B88 F5 37            [12] 3416 	mov	(_count + 1),a
                           000ACC  3417 	C$lab4_m.c$326$1$164 ==.
                                   3418 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:326: while (count < 1);
      000B8A                       3419 00101$:
      000B8A C3               [12] 3420 	clr	c
      000B8B E5 36            [12] 3421 	mov	a,_count
      000B8D 94 01            [12] 3422 	subb	a,#0x01
      000B8F E5 37            [12] 3423 	mov	a,(_count + 1)
      000B91 94 00            [12] 3424 	subb	a,#0x00
      000B93 40 F5            [24] 3425 	jc	00101$
                           000AD7  3426 	C$lab4_m.c$327$1$164 ==.
                           000AD7  3427 	XG$wait$0$0 ==.
      000B95 22               [24] 3428 	ret
                                   3429 ;------------------------------------------------------------
                                   3430 ;Allocation info for local variables in function 'Steering_func'
                                   3431 ;------------------------------------------------------------
                           000AD8  3432 	G$Steering_func$0$0 ==.
                           000AD8  3433 	C$lab4_m.c$329$1$164 ==.
                                   3434 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:329: void Steering_func(void)
                                   3435 ;	-----------------------------------------
                                   3436 ;	 function Steering_func
                                   3437 ;	-----------------------------------------
      000B96                       3438 _Steering_func:
                           000AD8  3439 	C$lab4_m.c$331$1$166 ==.
                                   3440 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:331: actual_heading = ReadCompass();
      000B96 12 07 EC         [24] 3441 	lcall	_ReadCompass
      000B99 85 82 39         [24] 3442 	mov	_actual_heading,dpl
      000B9C 85 83 3A         [24] 3443 	mov	(_actual_heading + 1),dph
                           000AE1  3444 	C$lab4_m.c$332$1$166 ==.
                                   3445 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:332: offset = (unsigned int)((actual_heading +3600- desired_heading ) % 3600);
      000B9F 74 10            [12] 3446 	mov	a,#0x10
      000BA1 25 39            [12] 3447 	add	a,_actual_heading
      000BA3 FE               [12] 3448 	mov	r6,a
      000BA4 74 0E            [12] 3449 	mov	a,#0x0E
      000BA6 35 3A            [12] 3450 	addc	a,(_actual_heading + 1)
      000BA8 FF               [12] 3451 	mov	r7,a
      000BA9 EE               [12] 3452 	mov	a,r6
      000BAA C3               [12] 3453 	clr	c
      000BAB 95 3B            [12] 3454 	subb	a,_desired_heading
      000BAD F5 82            [12] 3455 	mov	dpl,a
      000BAF EF               [12] 3456 	mov	a,r7
      000BB0 95 3C            [12] 3457 	subb	a,(_desired_heading + 1)
      000BB2 F5 83            [12] 3458 	mov	dph,a
      000BB4 75 11 10         [24] 3459 	mov	__modsint_PARM_2,#0x10
      000BB7 75 12 0E         [24] 3460 	mov	(__modsint_PARM_2 + 1),#0x0E
      000BBA 12 17 D8         [24] 3461 	lcall	__modsint
      000BBD AE 82            [24] 3462 	mov	r6,dpl
      000BBF AF 83            [24] 3463 	mov	r7,dph
      000BC1 8E 3F            [24] 3464 	mov	_offset,r6
      000BC3 8F 40            [24] 3465 	mov	(_offset + 1),r7
                           000B07  3466 	C$lab4_m.c$333$1$166 ==.
                                   3467 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:333: printf("\r\n%d||%d",actual_heading,offset);
      000BC5 C0 3F            [24] 3468 	push	_offset
      000BC7 C0 40            [24] 3469 	push	(_offset + 1)
      000BC9 C0 39            [24] 3470 	push	_actual_heading
      000BCB C0 3A            [24] 3471 	push	(_actual_heading + 1)
      000BCD 74 99            [12] 3472 	mov	a,#___str_10
      000BCF C0 E0            [24] 3473 	push	acc
      000BD1 74 19            [12] 3474 	mov	a,#(___str_10 >> 8)
      000BD3 C0 E0            [24] 3475 	push	acc
      000BD5 74 80            [12] 3476 	mov	a,#0x80
      000BD7 C0 E0            [24] 3477 	push	acc
      000BD9 12 10 EB         [24] 3478 	lcall	_printf
      000BDC E5 81            [12] 3479 	mov	a,sp
      000BDE 24 F9            [12] 3480 	add	a,#0xf9
      000BE0 F5 81            [12] 3481 	mov	sp,a
                           000B24  3482 	C$lab4_m.c$334$1$166 ==.
                                   3483 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:334: Steering_Servo(offset);
      000BE2 85 3F 82         [24] 3484 	mov	dpl,_offset
      000BE5 85 40 83         [24] 3485 	mov	dph,(_offset + 1)
      000BE8 12 08 12         [24] 3486 	lcall	_Steering_Servo
                           000B2D  3487 	C$lab4_m.c$336$1$166 ==.
                           000B2D  3488 	XG$Steering_func$0$0 ==.
      000BEB 22               [24] 3489 	ret
                                   3490 ;------------------------------------------------------------
                                   3491 ;Allocation info for local variables in function 'Drive_func'
                                   3492 ;------------------------------------------------------------
                           000B2E  3493 	G$Drive_func$0$0 ==.
                           000B2E  3494 	C$lab4_m.c$338$1$166 ==.
                                   3495 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:338: void Drive_func(void)
                                   3496 ;	-----------------------------------------
                                   3497 ;	 function Drive_func
                                   3498 ;	-----------------------------------------
      000BEC                       3499 _Drive_func:
                           000B2E  3500 	C$lab4_m.c$340$1$168 ==.
                                   3501 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:340: range = Read_Ranger();
      000BEC 12 07 C3         [24] 3502 	lcall	_Read_Ranger
      000BEF 85 82 41         [24] 3503 	mov	_range,dpl
      000BF2 85 83 42         [24] 3504 	mov	(_range + 1),dph
                           000B37  3505 	C$lab4_m.c$341$1$168 ==.
                                   3506 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:341: r_data[0] = 0x51;
      000BF5 75 44 51         [24] 3507 	mov	_r_data,#0x51
                           000B3A  3508 	C$lab4_m.c$342$1$168 ==.
                                   3509 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:342: i2c_write_data(r_addr, 0, r_data, 1);
      000BF8 75 28 44         [24] 3510 	mov	_i2c_write_data_PARM_3,#_r_data
      000BFB 75 29 00         [24] 3511 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      000BFE 75 2A 40         [24] 3512 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000C01 75 27 00         [24] 3513 	mov	_i2c_write_data_PARM_2,#0x00
      000C04 75 2B 01         [24] 3514 	mov	_i2c_write_data_PARM_4,#0x01
      000C07 85 43 82         [24] 3515 	mov	dpl,_r_addr
      000C0A 12 04 30         [24] 3516 	lcall	_i2c_write_data
                           000B4F  3517 	C$lab4_m.c$343$1$168 ==.
                                   3518 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:343: printf("\r\n The range is: %u", range);
      000C0D C0 41            [24] 3519 	push	_range
      000C0F C0 42            [24] 3520 	push	(_range + 1)
      000C11 74 A2            [12] 3521 	mov	a,#___str_11
      000C13 C0 E0            [24] 3522 	push	acc
      000C15 74 19            [12] 3523 	mov	a,#(___str_11 >> 8)
      000C17 C0 E0            [24] 3524 	push	acc
      000C19 74 80            [12] 3525 	mov	a,#0x80
      000C1B C0 E0            [24] 3526 	push	acc
      000C1D 12 10 EB         [24] 3527 	lcall	_printf
      000C20 E5 81            [12] 3528 	mov	a,sp
      000C22 24 FB            [12] 3529 	add	a,#0xfb
      000C24 F5 81            [12] 3530 	mov	sp,a
                           000B68  3531 	C$lab4_m.c$344$1$168 ==.
                                   3532 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:344: Drive_Motor();
      000C26 12 06 71         [24] 3533 	lcall	_Drive_Motor
                           000B6B  3534 	C$lab4_m.c$346$1$168 ==.
                           000B6B  3535 	XG$Drive_func$0$0 ==.
      000C29 22               [24] 3536 	ret
                                   3537 ;------------------------------------------------------------
                                   3538 ;Allocation info for local variables in function 'read_AD_input'
                                   3539 ;------------------------------------------------------------
                                   3540 ;n                         Allocated to registers 
                                   3541 ;------------------------------------------------------------
                           000B6C  3542 	G$read_AD_input$0$0 ==.
                           000B6C  3543 	C$lab4_m.c$348$1$168 ==.
                                   3544 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:348: unsigned long read_AD_input(unsigned char n)
                                   3545 ;	-----------------------------------------
                                   3546 ;	 function read_AD_input
                                   3547 ;	-----------------------------------------
      000C2A                       3548 _read_AD_input:
      000C2A 85 82 AC         [24] 3549 	mov	_AMX1SL,dpl
                           000B6F  3550 	C$lab4_m.c$351$1$170 ==.
                                   3551 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:351: ADC1CN = ADC1CN & ~0x20;
      000C2D AF AA            [24] 3552 	mov	r7,_ADC1CN
      000C2F 74 DF            [12] 3553 	mov	a,#0xDF
      000C31 5F               [12] 3554 	anl	a,r7
      000C32 F5 AA            [12] 3555 	mov	_ADC1CN,a
                           000B76  3556 	C$lab4_m.c$352$1$170 ==.
                                   3557 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:352: ADC1CN = ADC1CN | 0x10;
      000C34 43 AA 10         [24] 3558 	orl	_ADC1CN,#0x10
                           000B79  3559 	C$lab4_m.c$353$1$170 ==.
                                   3560 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:353: while ((ADC1CN & 0x20)== 0x00);
      000C37                       3561 00101$:
      000C37 E5 AA            [12] 3562 	mov	a,_ADC1CN
      000C39 30 E5 FB         [24] 3563 	jnb	acc.5,00101$
                           000B7E  3564 	C$lab4_m.c$355$1$170 ==.
                                   3565 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:355: return ADC1;
      000C3C AC 9C            [24] 3566 	mov	r4,_ADC1
      000C3E 7D 00            [12] 3567 	mov	r5,#0x00
      000C40 7E 00            [12] 3568 	mov	r6,#0x00
      000C42 7F 00            [12] 3569 	mov	r7,#0x00
      000C44 8C 82            [24] 3570 	mov	dpl,r4
      000C46 8D 83            [24] 3571 	mov	dph,r5
      000C48 8E F0            [24] 3572 	mov	b,r6
      000C4A EF               [12] 3573 	mov	a,r7
                           000B8D  3574 	C$lab4_m.c$357$1$170 ==.
                           000B8D  3575 	XG$read_AD_input$0$0 ==.
      000C4B 22               [24] 3576 	ret
                                   3577 ;------------------------------------------------------------
                                   3578 ;Allocation info for local variables in function 'ADC_Init'
                                   3579 ;------------------------------------------------------------
                           000B8E  3580 	G$ADC_Init$0$0 ==.
                           000B8E  3581 	C$lab4_m.c$359$1$170 ==.
                                   3582 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:359: void ADC_Init(void)								/////SETS ADC 
                                   3583 ;	-----------------------------------------
                                   3584 ;	 function ADC_Init
                                   3585 ;	-----------------------------------------
      000C4C                       3586 _ADC_Init:
                           000B8E  3587 	C$lab4_m.c$361$1$172 ==.
                                   3588 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:361: REF0CN = 0x03;
      000C4C 75 D1 03         [24] 3589 	mov	_REF0CN,#0x03
                           000B91  3590 	C$lab4_m.c$362$1$172 ==.
                                   3591 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:362: ADC1CN = 0x80;
      000C4F 75 AA 80         [24] 3592 	mov	_ADC1CN,#0x80
                           000B94  3593 	C$lab4_m.c$363$1$172 ==.
                                   3594 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:363: ADC1CF |= 0x01;
      000C52 43 AB 01         [24] 3595 	orl	_ADC1CF,#0x01
                           000B97  3596 	C$lab4_m.c$364$1$172 ==.
                           000B97  3597 	XG$ADC_Init$0$0 ==.
      000C55 22               [24] 3598 	ret
                                   3599 ;------------------------------------------------------------
                                   3600 ;Allocation info for local variables in function 'Battery_func'
                                   3601 ;------------------------------------------------------------
                           000B98  3602 	G$Battery_func$0$0 ==.
                           000B98  3603 	C$lab4_m.c$367$1$172 ==.
                                   3604 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:367: void Battery_func(void)
                                   3605 ;	-----------------------------------------
                                   3606 ;	 function Battery_func
                                   3607 ;	-----------------------------------------
      000C56                       3608 _Battery_func:
                           000B98  3609 	C$lab4_m.c$369$1$174 ==.
                                   3610 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:369: lcd_print( "\r\nBattery is: %ld",read_AD_input(4));
      000C56 75 82 04         [24] 3611 	mov	dpl,#0x04
      000C59 12 0C 2A         [24] 3612 	lcall	_read_AD_input
      000C5C AC 82            [24] 3613 	mov	r4,dpl
      000C5E AD 83            [24] 3614 	mov	r5,dph
      000C60 AE F0            [24] 3615 	mov	r6,b
      000C62 FF               [12] 3616 	mov	r7,a
      000C63 C0 04            [24] 3617 	push	ar4
      000C65 C0 05            [24] 3618 	push	ar5
      000C67 C0 06            [24] 3619 	push	ar6
      000C69 C0 07            [24] 3620 	push	ar7
      000C6B 74 B6            [12] 3621 	mov	a,#___str_12
      000C6D C0 E0            [24] 3622 	push	acc
      000C6F 74 19            [12] 3623 	mov	a,#(___str_12 >> 8)
      000C71 C0 E0            [24] 3624 	push	acc
      000C73 74 80            [12] 3625 	mov	a,#0x80
      000C75 C0 E0            [24] 3626 	push	acc
      000C77 12 01 1A         [24] 3627 	lcall	_lcd_print
      000C7A E5 81            [12] 3628 	mov	a,sp
      000C7C 24 F9            [12] 3629 	add	a,#0xf9
      000C7E F5 81            [12] 3630 	mov	sp,a
                           000BC2  3631 	C$lab4_m.c$370$1$174 ==.
                           000BC2  3632 	XG$Battery_func$0$0 ==.
      000C80 22               [24] 3633 	ret
                                   3634 ;------------------------------------------------------------
                                   3635 ;Allocation info for local variables in function 'avoid_crash'
                                   3636 ;------------------------------------------------------------
                           000BC3  3637 	G$avoid_crash$0$0 ==.
                           000BC3  3638 	C$lab4_m.c$372$1$174 ==.
                                   3639 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:372: void avoid_crash(void)
                                   3640 ;	-----------------------------------------
                                   3641 ;	 function avoid_crash
                                   3642 ;	-----------------------------------------
      000C81                       3643 _avoid_crash:
                           000BC3  3644 	C$lab4_m.c$374$2$177 ==.
                                   3645 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:374: while(range < 45)
      000C81                       3646 00103$:
      000C81 C3               [12] 3647 	clr	c
      000C82 E5 41            [12] 3648 	mov	a,_range
      000C84 94 2D            [12] 3649 	subb	a,#0x2D
      000C86 E5 42            [12] 3650 	mov	a,(_range + 1)
      000C88 94 00            [12] 3651 	subb	a,#0x00
      000C8A 50 43            [24] 3652 	jnc	00106$
                           000BCE  3653 	C$lab4_m.c$376$2$177 ==.
                                   3654 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:376: STR_PW = PW_MIN_STR;
      000C8C 75 34 D9         [24] 3655 	mov	_STR_PW,#0xD9
      000C8F 75 35 08         [24] 3656 	mov	(_STR_PW + 1),#0x08
                           000BD4  3657 	C$lab4_m.c$378$2$177 ==.
                                   3658 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:378: printf("\r\nSTR_PW: %u", STR_PW);
      000C92 74 D9            [12] 3659 	mov	a,#0xD9
      000C94 C0 E0            [24] 3660 	push	acc
      000C96 74 08            [12] 3661 	mov	a,#0x08
      000C98 C0 E0            [24] 3662 	push	acc
      000C9A 74 39            [12] 3663 	mov	a,#___str_7
      000C9C C0 E0            [24] 3664 	push	acc
      000C9E 74 19            [12] 3665 	mov	a,#(___str_7 >> 8)
      000CA0 C0 E0            [24] 3666 	push	acc
      000CA2 74 80            [12] 3667 	mov	a,#0x80
      000CA4 C0 E0            [24] 3668 	push	acc
      000CA6 12 10 EB         [24] 3669 	lcall	_printf
      000CA9 E5 81            [12] 3670 	mov	a,sp
      000CAB 24 FB            [12] 3671 	add	a,#0xfb
      000CAD F5 81            [12] 3672 	mov	sp,a
                           000BF1  3673 	C$lab4_m.c$379$2$177 ==.
                                   3674 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:379: STR_lo_to_hi= 0xFFFF - STR_PW;
      000CAF 74 FF            [12] 3675 	mov	a,#0xFF
      000CB1 C3               [12] 3676 	clr	c
      000CB2 95 34            [12] 3677 	subb	a,_STR_PW
      000CB4 F5 32            [12] 3678 	mov	_STR_lo_to_hi,a
      000CB6 74 FF            [12] 3679 	mov	a,#0xFF
      000CB8 95 35            [12] 3680 	subb	a,(_STR_PW + 1)
      000CBA F5 33            [12] 3681 	mov	(_STR_lo_to_hi + 1),a
                           000BFE  3682 	C$lab4_m.c$380$2$177 ==.
                                   3683 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:380: PCA0CP0 = STR_lo_to_hi;
      000CBC 85 32 EA         [24] 3684 	mov	((_PCA0CP0 >> 0) & 0xFF),_STR_lo_to_hi
      000CBF 85 33 FA         [24] 3685 	mov	((_PCA0CP0 >> 8) & 0xFF),(_STR_lo_to_hi + 1)
                           000C04  3686 	C$lab4_m.c$381$2$177 ==.
                                   3687 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:381: if (count % 4==0)
      000CC2 E5 36            [12] 3688 	mov	a,_count
      000CC4 54 03            [12] 3689 	anl	a,#0x03
      000CC6 60 02            [24] 3690 	jz	00119$
      000CC8 80 B7            [24] 3691 	sjmp	00103$
      000CCA                       3692 00119$:
                           000C0C  3693 	C$lab4_m.c$383$3$178 ==.
                                   3694 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:383: Drive_func();    		
      000CCA 12 0B EC         [24] 3695 	lcall	_Drive_func
      000CCD 80 B2            [24] 3696 	sjmp	00103$
      000CCF                       3697 00106$:
                           000C11  3698 	C$lab4_m.c$388$1$176 ==.
                           000C11  3699 	XG$avoid_crash$0$0 ==.
      000CCF 22               [24] 3700 	ret
                                   3701 	.area CSEG    (CODE)
                                   3702 	.area CONST   (CODE)
                           000000  3703 Flab4_m$__str_0$0$0 == .
      0018A1                       3704 ___str_0:
      0018A1 0A                    3705 	.db 0x0A
      0018A2 54 79 70 65 20 64 69  3706 	.ascii "Type digits; end w/#"
             67 69 74 73 3B 20 65
             6E 64 20 77 2F 23
      0018B6 00                    3707 	.db 0x00
                           000016  3708 Flab4_m$__str_1$0$0 == .
      0018B7                       3709 ___str_1:
      0018B7 20 20 20 20 20 25 63  3710 	.ascii "     %c%c%c%c%c"
             25 63 25 63 25 63 25
             63
      0018C6 00                    3711 	.db 0x00
                           000026  3712 Flab4_m$__str_2$0$0 == .
      0018C7                       3713 ___str_2:
      0018C7 25 63                 3714 	.ascii "%c"
      0018C9 00                    3715 	.db 0x00
                           000029  3716 Flab4_m$__str_3$0$0 == .
      0018CA                       3717 ___str_3:
      0018CA 0D                    3718 	.db 0x0D
      0018CB 0A                    3719 	.db 0x0A
      0018CC 45 6D 62 65 64 64 65  3720 	.ascii "Embedded Control Car Calibration"
             64 20 43 6F 6E 74 72
             6F 6C 20 43 61 72 20
             43 61 6C 69 62 72 61
             74 69 6F 6E
      0018EC 00                    3721 	.db 0x00
                           00004C  3722 Flab4_m$__str_4$0$0 == .
      0018ED                       3723 ___str_4:
      0018ED 0D                    3724 	.db 0x0D
      0018EE 0A                    3725 	.db 0x0A
      0018EF 45 6D 62 65 64 64 65  3726 	.ascii "Embedded Control Car ready!"
             64 20 43 6F 6E 74 72
             6F 6C 20 43 61 72 20
             72 65 61 64 79 21
      00190A 00                    3727 	.db 0x00
                           00006A  3728 Flab4_m$__str_5$0$0 == .
      00190B                       3729 ___str_5:
      00190B 0D                    3730 	.db 0x0D
      00190C 0A                    3731 	.db 0x0A
      00190D 20 54 68 65 20 63 6F  3732 	.ascii " The control is paused"
             6E 74 72 6F 6C 20 69
             73 20 70 61 75 73 65
             64
      001923 00                    3733 	.db 0x00
                           000083  3734 Flab4_m$__str_6$0$0 == .
      001924                       3735 ___str_6:
      001924 0D                    3736 	.db 0x0D
      001925 0A                    3737 	.db 0x0A
      001926 20 4D 6F 74 6F 72 20  3738 	.ascii " Motor Power is %u"
             50 6F 77 65 72 20 69
             73 20 25 75
      001938 00                    3739 	.db 0x00
                           000098  3740 Flab4_m$__str_7$0$0 == .
      001939                       3741 ___str_7:
      001939 0D                    3742 	.db 0x0D
      00193A 0A                    3743 	.db 0x0A
      00193B 53 54 52 5F 50 57 3A  3744 	.ascii "STR_PW: %u"
             20 25 75
      001945 00                    3745 	.db 0x00
                           0000A5  3746 Flab4_m$__str_8$0$0 == .
      001946                       3747 ___str_8:
      001946 43 61 6C 69 62 72 61  3748 	.ascii "Calibration:"
             74 69 6F 6E 3A
      001952 0A                    3749 	.db 0x0A
      001953 48 65 6C 6C 6F 20 77  3750 	.ascii "Hello world!"
             6F 72 6C 64 21
      00195F 0A                    3751 	.db 0x0A
      001960 30 31 32 5F 33 34 35  3752 	.ascii "012_345_678:"
             5F 36 37 38 3A
      00196C 0A                    3753 	.db 0x0A
      00196D 61 62 63 20 64 65 66  3754 	.ascii "abc def ghij"
             20 67 68 69 6A
      001979 00                    3755 	.db 0x00
                           0000D9  3756 Flab4_m$__str_9$0$0 == .
      00197A                       3757 ___str_9:
      00197A 0D                    3758 	.db 0x0D
      00197B 0A                    3759 	.db 0x0A
      00197C 54 68 65 20 64 65 73  3760 	.ascii "The desired direction is: %d"
             69 72 65 64 20 64 69
             72 65 63 74 69 6F 6E
             20 69 73 3A 20 25 64
      001998 00                    3761 	.db 0x00
                           0000F8  3762 Flab4_m$__str_10$0$0 == .
      001999                       3763 ___str_10:
      001999 0D                    3764 	.db 0x0D
      00199A 0A                    3765 	.db 0x0A
      00199B 25 64 7C 7C 25 64     3766 	.ascii "%d||%d"
      0019A1 00                    3767 	.db 0x00
                           000101  3768 Flab4_m$__str_11$0$0 == .
      0019A2                       3769 ___str_11:
      0019A2 0D                    3770 	.db 0x0D
      0019A3 0A                    3771 	.db 0x0A
      0019A4 20 54 68 65 20 72 61  3772 	.ascii " The range is: %u"
             6E 67 65 20 69 73 3A
             20 25 75
      0019B5 00                    3773 	.db 0x00
                           000115  3774 Flab4_m$__str_12$0$0 == .
      0019B6                       3775 ___str_12:
      0019B6 0D                    3776 	.db 0x0D
      0019B7 0A                    3777 	.db 0x0A
      0019B8 42 61 74 74 65 72 79  3778 	.ascii "Battery is: %ld"
             20 69 73 3A 20 25 6C
             64
      0019C7 00                    3779 	.db 0x00
                                   3780 	.area XINIT   (CODE)
                                   3781 	.area CABS    (ABS,CODE)
