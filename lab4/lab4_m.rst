                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (Apr  5 2014) (MINGW32)
                                      4 ; This file was generated Tue Apr 14 20:38:31 2015
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
                                    308 	.globl _starter
                                    309 	.globl _MOTOR_PW
                                    310 	.globl _range
                                    311 	.globl _offset
                                    312 	.globl _error
                                    313 	.globl _desired_heading
                                    314 	.globl _actual_heading
                                    315 	.globl _count
                                    316 	.globl _STR_PW
                                    317 	.globl _STR_lo_to_hi
                                    318 	.globl _i2c_read_data_PARM_4
                                    319 	.globl _i2c_read_data_PARM_3
                                    320 	.globl _i2c_read_data_PARM_2
                                    321 	.globl _i2c_write_data_PARM_4
                                    322 	.globl _i2c_write_data_PARM_3
                                    323 	.globl _i2c_write_data_PARM_2
                                    324 	.globl _putchar
                                    325 	.globl _getchar
                                    326 	.globl _lcd_print
                                    327 	.globl _lcd_clear
                                    328 	.globl _kpd_input
                                    329 	.globl _delay_time
                                    330 	.globl _i2c_start
                                    331 	.globl _i2c_write
                                    332 	.globl _i2c_write_and_stop
                                    333 	.globl _i2c_read
                                    334 	.globl _i2c_read_and_stop
                                    335 	.globl _i2c_write_data
                                    336 	.globl _i2c_read_data
                                    337 	.globl _Accel_Init
                                    338 	.globl _Drive_Motor
                                    339 	.globl _Read_Ranger
                                    340 	.globl _ReadCompass
                                    341 	.globl _Steering_Servo
                                    342 	.globl _Port_Init
                                    343 	.globl _XBR0_Init
                                    344 	.globl _SMB_Init
                                    345 	.globl _PCA_Init
                                    346 	.globl _direction
                                    347 	.globl _start
                                    348 	.globl _wait
                                    349 	.globl _Steering_func
                                    350 	.globl _Drive_func
                                    351 	.globl _read_AD_input
                                    352 	.globl _ADC_Init
                                    353 	.globl _Battery_func
                                    354 	.globl _avoid_crash
                                    355 ;--------------------------------------------------------
                                    356 ; special function registers
                                    357 ;--------------------------------------------------------
                                    358 	.area RSEG    (ABS,DATA)
      000000                        359 	.org 0x0000
                           000080   360 G$P0$0$0 == 0x0080
                           000080   361 _P0	=	0x0080
                           000081   362 G$SP$0$0 == 0x0081
                           000081   363 _SP	=	0x0081
                           000082   364 G$DPL$0$0 == 0x0082
                           000082   365 _DPL	=	0x0082
                           000083   366 G$DPH$0$0 == 0x0083
                           000083   367 _DPH	=	0x0083
                           000084   368 G$P4$0$0 == 0x0084
                           000084   369 _P4	=	0x0084
                           000085   370 G$P5$0$0 == 0x0085
                           000085   371 _P5	=	0x0085
                           000086   372 G$P6$0$0 == 0x0086
                           000086   373 _P6	=	0x0086
                           000087   374 G$PCON$0$0 == 0x0087
                           000087   375 _PCON	=	0x0087
                           000088   376 G$TCON$0$0 == 0x0088
                           000088   377 _TCON	=	0x0088
                           000089   378 G$TMOD$0$0 == 0x0089
                           000089   379 _TMOD	=	0x0089
                           00008A   380 G$TL0$0$0 == 0x008a
                           00008A   381 _TL0	=	0x008a
                           00008B   382 G$TL1$0$0 == 0x008b
                           00008B   383 _TL1	=	0x008b
                           00008C   384 G$TH0$0$0 == 0x008c
                           00008C   385 _TH0	=	0x008c
                           00008D   386 G$TH1$0$0 == 0x008d
                           00008D   387 _TH1	=	0x008d
                           00008E   388 G$CKCON$0$0 == 0x008e
                           00008E   389 _CKCON	=	0x008e
                           00008F   390 G$PSCTL$0$0 == 0x008f
                           00008F   391 _PSCTL	=	0x008f
                           000090   392 G$P1$0$0 == 0x0090
                           000090   393 _P1	=	0x0090
                           000091   394 G$TMR3CN$0$0 == 0x0091
                           000091   395 _TMR3CN	=	0x0091
                           000092   396 G$TMR3RLL$0$0 == 0x0092
                           000092   397 _TMR3RLL	=	0x0092
                           000093   398 G$TMR3RLH$0$0 == 0x0093
                           000093   399 _TMR3RLH	=	0x0093
                           000094   400 G$TMR3L$0$0 == 0x0094
                           000094   401 _TMR3L	=	0x0094
                           000095   402 G$TMR3H$0$0 == 0x0095
                           000095   403 _TMR3H	=	0x0095
                           000096   404 G$P7$0$0 == 0x0096
                           000096   405 _P7	=	0x0096
                           000098   406 G$SCON$0$0 == 0x0098
                           000098   407 _SCON	=	0x0098
                           000098   408 G$SCON0$0$0 == 0x0098
                           000098   409 _SCON0	=	0x0098
                           000099   410 G$SBUF$0$0 == 0x0099
                           000099   411 _SBUF	=	0x0099
                           000099   412 G$SBUF0$0$0 == 0x0099
                           000099   413 _SBUF0	=	0x0099
                           00009A   414 G$SPI0CFG$0$0 == 0x009a
                           00009A   415 _SPI0CFG	=	0x009a
                           00009B   416 G$SPI0DAT$0$0 == 0x009b
                           00009B   417 _SPI0DAT	=	0x009b
                           00009C   418 G$ADC1$0$0 == 0x009c
                           00009C   419 _ADC1	=	0x009c
                           00009D   420 G$SPI0CKR$0$0 == 0x009d
                           00009D   421 _SPI0CKR	=	0x009d
                           00009E   422 G$CPT0CN$0$0 == 0x009e
                           00009E   423 _CPT0CN	=	0x009e
                           00009F   424 G$CPT1CN$0$0 == 0x009f
                           00009F   425 _CPT1CN	=	0x009f
                           0000A0   426 G$P2$0$0 == 0x00a0
                           0000A0   427 _P2	=	0x00a0
                           0000A1   428 G$EMI0TC$0$0 == 0x00a1
                           0000A1   429 _EMI0TC	=	0x00a1
                           0000A3   430 G$EMI0CF$0$0 == 0x00a3
                           0000A3   431 _EMI0CF	=	0x00a3
                           0000A4   432 G$PRT0CF$0$0 == 0x00a4
                           0000A4   433 _PRT0CF	=	0x00a4
                           0000A4   434 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   435 _P0MDOUT	=	0x00a4
                           0000A5   436 G$PRT1CF$0$0 == 0x00a5
                           0000A5   437 _PRT1CF	=	0x00a5
                           0000A5   438 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   439 _P1MDOUT	=	0x00a5
                           0000A6   440 G$PRT2CF$0$0 == 0x00a6
                           0000A6   441 _PRT2CF	=	0x00a6
                           0000A6   442 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   443 _P2MDOUT	=	0x00a6
                           0000A7   444 G$PRT3CF$0$0 == 0x00a7
                           0000A7   445 _PRT3CF	=	0x00a7
                           0000A7   446 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   447 _P3MDOUT	=	0x00a7
                           0000A8   448 G$IE$0$0 == 0x00a8
                           0000A8   449 _IE	=	0x00a8
                           0000A9   450 G$SADDR0$0$0 == 0x00a9
                           0000A9   451 _SADDR0	=	0x00a9
                           0000AA   452 G$ADC1CN$0$0 == 0x00aa
                           0000AA   453 _ADC1CN	=	0x00aa
                           0000AB   454 G$ADC1CF$0$0 == 0x00ab
                           0000AB   455 _ADC1CF	=	0x00ab
                           0000AC   456 G$AMX1SL$0$0 == 0x00ac
                           0000AC   457 _AMX1SL	=	0x00ac
                           0000AD   458 G$P3IF$0$0 == 0x00ad
                           0000AD   459 _P3IF	=	0x00ad
                           0000AE   460 G$SADEN1$0$0 == 0x00ae
                           0000AE   461 _SADEN1	=	0x00ae
                           0000AF   462 G$EMI0CN$0$0 == 0x00af
                           0000AF   463 _EMI0CN	=	0x00af
                           0000AF   464 G$_XPAGE$0$0 == 0x00af
                           0000AF   465 __XPAGE	=	0x00af
                           0000B0   466 G$P3$0$0 == 0x00b0
                           0000B0   467 _P3	=	0x00b0
                           0000B1   468 G$OSCXCN$0$0 == 0x00b1
                           0000B1   469 _OSCXCN	=	0x00b1
                           0000B2   470 G$OSCICN$0$0 == 0x00b2
                           0000B2   471 _OSCICN	=	0x00b2
                           0000B5   472 G$P74OUT$0$0 == 0x00b5
                           0000B5   473 _P74OUT	=	0x00b5
                           0000B6   474 G$FLSCL$0$0 == 0x00b6
                           0000B6   475 _FLSCL	=	0x00b6
                           0000B7   476 G$FLACL$0$0 == 0x00b7
                           0000B7   477 _FLACL	=	0x00b7
                           0000B8   478 G$IP$0$0 == 0x00b8
                           0000B8   479 _IP	=	0x00b8
                           0000B9   480 G$SADEN0$0$0 == 0x00b9
                           0000B9   481 _SADEN0	=	0x00b9
                           0000BA   482 G$AMX0CF$0$0 == 0x00ba
                           0000BA   483 _AMX0CF	=	0x00ba
                           0000BB   484 G$AMX0SL$0$0 == 0x00bb
                           0000BB   485 _AMX0SL	=	0x00bb
                           0000BC   486 G$ADC0CF$0$0 == 0x00bc
                           0000BC   487 _ADC0CF	=	0x00bc
                           0000BD   488 G$P1MDIN$0$0 == 0x00bd
                           0000BD   489 _P1MDIN	=	0x00bd
                           0000BE   490 G$ADC0L$0$0 == 0x00be
                           0000BE   491 _ADC0L	=	0x00be
                           0000BF   492 G$ADC0H$0$0 == 0x00bf
                           0000BF   493 _ADC0H	=	0x00bf
                           0000C0   494 G$SMB0CN$0$0 == 0x00c0
                           0000C0   495 _SMB0CN	=	0x00c0
                           0000C1   496 G$SMB0STA$0$0 == 0x00c1
                           0000C1   497 _SMB0STA	=	0x00c1
                           0000C2   498 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   499 _SMB0DAT	=	0x00c2
                           0000C3   500 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   501 _SMB0ADR	=	0x00c3
                           0000C4   502 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   503 _ADC0GTL	=	0x00c4
                           0000C5   504 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   505 _ADC0GTH	=	0x00c5
                           0000C6   506 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   507 _ADC0LTL	=	0x00c6
                           0000C7   508 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   509 _ADC0LTH	=	0x00c7
                           0000C8   510 G$T2CON$0$0 == 0x00c8
                           0000C8   511 _T2CON	=	0x00c8
                           0000C9   512 G$T4CON$0$0 == 0x00c9
                           0000C9   513 _T4CON	=	0x00c9
                           0000CA   514 G$RCAP2L$0$0 == 0x00ca
                           0000CA   515 _RCAP2L	=	0x00ca
                           0000CB   516 G$RCAP2H$0$0 == 0x00cb
                           0000CB   517 _RCAP2H	=	0x00cb
                           0000CC   518 G$TL2$0$0 == 0x00cc
                           0000CC   519 _TL2	=	0x00cc
                           0000CD   520 G$TH2$0$0 == 0x00cd
                           0000CD   521 _TH2	=	0x00cd
                           0000CF   522 G$SMB0CR$0$0 == 0x00cf
                           0000CF   523 _SMB0CR	=	0x00cf
                           0000D0   524 G$PSW$0$0 == 0x00d0
                           0000D0   525 _PSW	=	0x00d0
                           0000D1   526 G$REF0CN$0$0 == 0x00d1
                           0000D1   527 _REF0CN	=	0x00d1
                           0000D2   528 G$DAC0L$0$0 == 0x00d2
                           0000D2   529 _DAC0L	=	0x00d2
                           0000D3   530 G$DAC0H$0$0 == 0x00d3
                           0000D3   531 _DAC0H	=	0x00d3
                           0000D4   532 G$DAC0CN$0$0 == 0x00d4
                           0000D4   533 _DAC0CN	=	0x00d4
                           0000D5   534 G$DAC1L$0$0 == 0x00d5
                           0000D5   535 _DAC1L	=	0x00d5
                           0000D6   536 G$DAC1H$0$0 == 0x00d6
                           0000D6   537 _DAC1H	=	0x00d6
                           0000D7   538 G$DAC1CN$0$0 == 0x00d7
                           0000D7   539 _DAC1CN	=	0x00d7
                           0000D8   540 G$PCA0CN$0$0 == 0x00d8
                           0000D8   541 _PCA0CN	=	0x00d8
                           0000D9   542 G$PCA0MD$0$0 == 0x00d9
                           0000D9   543 _PCA0MD	=	0x00d9
                           0000DA   544 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   545 _PCA0CPM0	=	0x00da
                           0000DB   546 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   547 _PCA0CPM1	=	0x00db
                           0000DC   548 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   549 _PCA0CPM2	=	0x00dc
                           0000DD   550 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   551 _PCA0CPM3	=	0x00dd
                           0000DE   552 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   553 _PCA0CPM4	=	0x00de
                           0000E0   554 G$ACC$0$0 == 0x00e0
                           0000E0   555 _ACC	=	0x00e0
                           0000E1   556 G$XBR0$0$0 == 0x00e1
                           0000E1   557 _XBR0	=	0x00e1
                           0000E2   558 G$XBR1$0$0 == 0x00e2
                           0000E2   559 _XBR1	=	0x00e2
                           0000E3   560 G$XBR2$0$0 == 0x00e3
                           0000E3   561 _XBR2	=	0x00e3
                           0000E4   562 G$RCAP4L$0$0 == 0x00e4
                           0000E4   563 _RCAP4L	=	0x00e4
                           0000E5   564 G$RCAP4H$0$0 == 0x00e5
                           0000E5   565 _RCAP4H	=	0x00e5
                           0000E6   566 G$EIE1$0$0 == 0x00e6
                           0000E6   567 _EIE1	=	0x00e6
                           0000E7   568 G$EIE2$0$0 == 0x00e7
                           0000E7   569 _EIE2	=	0x00e7
                           0000E8   570 G$ADC0CN$0$0 == 0x00e8
                           0000E8   571 _ADC0CN	=	0x00e8
                           0000E9   572 G$PCA0L$0$0 == 0x00e9
                           0000E9   573 _PCA0L	=	0x00e9
                           0000EA   574 G$PCA0CPL0$0$0 == 0x00ea
                           0000EA   575 _PCA0CPL0	=	0x00ea
                           0000EB   576 G$PCA0CPL1$0$0 == 0x00eb
                           0000EB   577 _PCA0CPL1	=	0x00eb
                           0000EC   578 G$PCA0CPL2$0$0 == 0x00ec
                           0000EC   579 _PCA0CPL2	=	0x00ec
                           0000ED   580 G$PCA0CPL3$0$0 == 0x00ed
                           0000ED   581 _PCA0CPL3	=	0x00ed
                           0000EE   582 G$PCA0CPL4$0$0 == 0x00ee
                           0000EE   583 _PCA0CPL4	=	0x00ee
                           0000EF   584 G$RSTSRC$0$0 == 0x00ef
                           0000EF   585 _RSTSRC	=	0x00ef
                           0000F0   586 G$B$0$0 == 0x00f0
                           0000F0   587 _B	=	0x00f0
                           0000F1   588 G$SCON1$0$0 == 0x00f1
                           0000F1   589 _SCON1	=	0x00f1
                           0000F2   590 G$SBUF1$0$0 == 0x00f2
                           0000F2   591 _SBUF1	=	0x00f2
                           0000F3   592 G$SADDR1$0$0 == 0x00f3
                           0000F3   593 _SADDR1	=	0x00f3
                           0000F4   594 G$TL4$0$0 == 0x00f4
                           0000F4   595 _TL4	=	0x00f4
                           0000F5   596 G$TH4$0$0 == 0x00f5
                           0000F5   597 _TH4	=	0x00f5
                           0000F6   598 G$EIP1$0$0 == 0x00f6
                           0000F6   599 _EIP1	=	0x00f6
                           0000F7   600 G$EIP2$0$0 == 0x00f7
                           0000F7   601 _EIP2	=	0x00f7
                           0000F8   602 G$SPI0CN$0$0 == 0x00f8
                           0000F8   603 _SPI0CN	=	0x00f8
                           0000F9   604 G$PCA0H$0$0 == 0x00f9
                           0000F9   605 _PCA0H	=	0x00f9
                           0000FA   606 G$PCA0CPH0$0$0 == 0x00fa
                           0000FA   607 _PCA0CPH0	=	0x00fa
                           0000FB   608 G$PCA0CPH1$0$0 == 0x00fb
                           0000FB   609 _PCA0CPH1	=	0x00fb
                           0000FC   610 G$PCA0CPH2$0$0 == 0x00fc
                           0000FC   611 _PCA0CPH2	=	0x00fc
                           0000FD   612 G$PCA0CPH3$0$0 == 0x00fd
                           0000FD   613 _PCA0CPH3	=	0x00fd
                           0000FE   614 G$PCA0CPH4$0$0 == 0x00fe
                           0000FE   615 _PCA0CPH4	=	0x00fe
                           0000FF   616 G$WDTCN$0$0 == 0x00ff
                           0000FF   617 _WDTCN	=	0x00ff
                           008C8A   618 G$TMR0$0$0 == 0x8c8a
                           008C8A   619 _TMR0	=	0x8c8a
                           008D8B   620 G$TMR1$0$0 == 0x8d8b
                           008D8B   621 _TMR1	=	0x8d8b
                           00CDCC   622 G$TMR2$0$0 == 0xcdcc
                           00CDCC   623 _TMR2	=	0xcdcc
                           00CBCA   624 G$RCAP2$0$0 == 0xcbca
                           00CBCA   625 _RCAP2	=	0xcbca
                           009594   626 G$TMR3$0$0 == 0x9594
                           009594   627 _TMR3	=	0x9594
                           009392   628 G$TMR3RL$0$0 == 0x9392
                           009392   629 _TMR3RL	=	0x9392
                           00F5F4   630 G$TMR4$0$0 == 0xf5f4
                           00F5F4   631 _TMR4	=	0xf5f4
                           00E5E4   632 G$RCAP4$0$0 == 0xe5e4
                           00E5E4   633 _RCAP4	=	0xe5e4
                           00BFBE   634 G$ADC0$0$0 == 0xbfbe
                           00BFBE   635 _ADC0	=	0xbfbe
                           00C5C4   636 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   637 _ADC0GT	=	0xc5c4
                           00C7C6   638 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   639 _ADC0LT	=	0xc7c6
                           00D3D2   640 G$DAC0$0$0 == 0xd3d2
                           00D3D2   641 _DAC0	=	0xd3d2
                           00D6D5   642 G$DAC1$0$0 == 0xd6d5
                           00D6D5   643 _DAC1	=	0xd6d5
                           00F9E9   644 G$PCA0$0$0 == 0xf9e9
                           00F9E9   645 _PCA0	=	0xf9e9
                           00FAEA   646 G$PCA0CP0$0$0 == 0xfaea
                           00FAEA   647 _PCA0CP0	=	0xfaea
                           00FBEB   648 G$PCA0CP1$0$0 == 0xfbeb
                           00FBEB   649 _PCA0CP1	=	0xfbeb
                           00FCEC   650 G$PCA0CP2$0$0 == 0xfcec
                           00FCEC   651 _PCA0CP2	=	0xfcec
                           00FDED   652 G$PCA0CP3$0$0 == 0xfded
                           00FDED   653 _PCA0CP3	=	0xfded
                           00FEEE   654 G$PCA0CP4$0$0 == 0xfeee
                           00FEEE   655 _PCA0CP4	=	0xfeee
                                    656 ;--------------------------------------------------------
                                    657 ; special function bits
                                    658 ;--------------------------------------------------------
                                    659 	.area RSEG    (ABS,DATA)
      000000                        660 	.org 0x0000
                           000080   661 G$P0_0$0$0 == 0x0080
                           000080   662 _P0_0	=	0x0080
                           000081   663 G$P0_1$0$0 == 0x0081
                           000081   664 _P0_1	=	0x0081
                           000082   665 G$P0_2$0$0 == 0x0082
                           000082   666 _P0_2	=	0x0082
                           000083   667 G$P0_3$0$0 == 0x0083
                           000083   668 _P0_3	=	0x0083
                           000084   669 G$P0_4$0$0 == 0x0084
                           000084   670 _P0_4	=	0x0084
                           000085   671 G$P0_5$0$0 == 0x0085
                           000085   672 _P0_5	=	0x0085
                           000086   673 G$P0_6$0$0 == 0x0086
                           000086   674 _P0_6	=	0x0086
                           000087   675 G$P0_7$0$0 == 0x0087
                           000087   676 _P0_7	=	0x0087
                           000088   677 G$IT0$0$0 == 0x0088
                           000088   678 _IT0	=	0x0088
                           000089   679 G$IE0$0$0 == 0x0089
                           000089   680 _IE0	=	0x0089
                           00008A   681 G$IT1$0$0 == 0x008a
                           00008A   682 _IT1	=	0x008a
                           00008B   683 G$IE1$0$0 == 0x008b
                           00008B   684 _IE1	=	0x008b
                           00008C   685 G$TR0$0$0 == 0x008c
                           00008C   686 _TR0	=	0x008c
                           00008D   687 G$TF0$0$0 == 0x008d
                           00008D   688 _TF0	=	0x008d
                           00008E   689 G$TR1$0$0 == 0x008e
                           00008E   690 _TR1	=	0x008e
                           00008F   691 G$TF1$0$0 == 0x008f
                           00008F   692 _TF1	=	0x008f
                           000090   693 G$P1_0$0$0 == 0x0090
                           000090   694 _P1_0	=	0x0090
                           000091   695 G$P1_1$0$0 == 0x0091
                           000091   696 _P1_1	=	0x0091
                           000092   697 G$P1_2$0$0 == 0x0092
                           000092   698 _P1_2	=	0x0092
                           000093   699 G$P1_3$0$0 == 0x0093
                           000093   700 _P1_3	=	0x0093
                           000094   701 G$P1_4$0$0 == 0x0094
                           000094   702 _P1_4	=	0x0094
                           000095   703 G$P1_5$0$0 == 0x0095
                           000095   704 _P1_5	=	0x0095
                           000096   705 G$P1_6$0$0 == 0x0096
                           000096   706 _P1_6	=	0x0096
                           000097   707 G$P1_7$0$0 == 0x0097
                           000097   708 _P1_7	=	0x0097
                           000098   709 G$RI$0$0 == 0x0098
                           000098   710 _RI	=	0x0098
                           000098   711 G$RI0$0$0 == 0x0098
                           000098   712 _RI0	=	0x0098
                           000099   713 G$TI$0$0 == 0x0099
                           000099   714 _TI	=	0x0099
                           000099   715 G$TI0$0$0 == 0x0099
                           000099   716 _TI0	=	0x0099
                           00009A   717 G$RB8$0$0 == 0x009a
                           00009A   718 _RB8	=	0x009a
                           00009A   719 G$RB80$0$0 == 0x009a
                           00009A   720 _RB80	=	0x009a
                           00009B   721 G$TB8$0$0 == 0x009b
                           00009B   722 _TB8	=	0x009b
                           00009B   723 G$TB80$0$0 == 0x009b
                           00009B   724 _TB80	=	0x009b
                           00009C   725 G$REN$0$0 == 0x009c
                           00009C   726 _REN	=	0x009c
                           00009C   727 G$REN0$0$0 == 0x009c
                           00009C   728 _REN0	=	0x009c
                           00009D   729 G$SM2$0$0 == 0x009d
                           00009D   730 _SM2	=	0x009d
                           00009D   731 G$SM20$0$0 == 0x009d
                           00009D   732 _SM20	=	0x009d
                           00009D   733 G$MCE0$0$0 == 0x009d
                           00009D   734 _MCE0	=	0x009d
                           00009E   735 G$SM1$0$0 == 0x009e
                           00009E   736 _SM1	=	0x009e
                           00009E   737 G$SM10$0$0 == 0x009e
                           00009E   738 _SM10	=	0x009e
                           00009F   739 G$SM0$0$0 == 0x009f
                           00009F   740 _SM0	=	0x009f
                           00009F   741 G$SM00$0$0 == 0x009f
                           00009F   742 _SM00	=	0x009f
                           00009F   743 G$S0MODE$0$0 == 0x009f
                           00009F   744 _S0MODE	=	0x009f
                           0000A0   745 G$P2_0$0$0 == 0x00a0
                           0000A0   746 _P2_0	=	0x00a0
                           0000A1   747 G$P2_1$0$0 == 0x00a1
                           0000A1   748 _P2_1	=	0x00a1
                           0000A2   749 G$P2_2$0$0 == 0x00a2
                           0000A2   750 _P2_2	=	0x00a2
                           0000A3   751 G$P2_3$0$0 == 0x00a3
                           0000A3   752 _P2_3	=	0x00a3
                           0000A4   753 G$P2_4$0$0 == 0x00a4
                           0000A4   754 _P2_4	=	0x00a4
                           0000A5   755 G$P2_5$0$0 == 0x00a5
                           0000A5   756 _P2_5	=	0x00a5
                           0000A6   757 G$P2_6$0$0 == 0x00a6
                           0000A6   758 _P2_6	=	0x00a6
                           0000A7   759 G$P2_7$0$0 == 0x00a7
                           0000A7   760 _P2_7	=	0x00a7
                           0000A8   761 G$EX0$0$0 == 0x00a8
                           0000A8   762 _EX0	=	0x00a8
                           0000A9   763 G$ET0$0$0 == 0x00a9
                           0000A9   764 _ET0	=	0x00a9
                           0000AA   765 G$EX1$0$0 == 0x00aa
                           0000AA   766 _EX1	=	0x00aa
                           0000AB   767 G$ET1$0$0 == 0x00ab
                           0000AB   768 _ET1	=	0x00ab
                           0000AC   769 G$ES0$0$0 == 0x00ac
                           0000AC   770 _ES0	=	0x00ac
                           0000AC   771 G$ES$0$0 == 0x00ac
                           0000AC   772 _ES	=	0x00ac
                           0000AD   773 G$ET2$0$0 == 0x00ad
                           0000AD   774 _ET2	=	0x00ad
                           0000AF   775 G$EA$0$0 == 0x00af
                           0000AF   776 _EA	=	0x00af
                           0000B0   777 G$P3_0$0$0 == 0x00b0
                           0000B0   778 _P3_0	=	0x00b0
                           0000B1   779 G$P3_1$0$0 == 0x00b1
                           0000B1   780 _P3_1	=	0x00b1
                           0000B2   781 G$P3_2$0$0 == 0x00b2
                           0000B2   782 _P3_2	=	0x00b2
                           0000B3   783 G$P3_3$0$0 == 0x00b3
                           0000B3   784 _P3_3	=	0x00b3
                           0000B4   785 G$P3_4$0$0 == 0x00b4
                           0000B4   786 _P3_4	=	0x00b4
                           0000B5   787 G$P3_5$0$0 == 0x00b5
                           0000B5   788 _P3_5	=	0x00b5
                           0000B6   789 G$P3_6$0$0 == 0x00b6
                           0000B6   790 _P3_6	=	0x00b6
                           0000B7   791 G$P3_7$0$0 == 0x00b7
                           0000B7   792 _P3_7	=	0x00b7
                           0000B8   793 G$PX0$0$0 == 0x00b8
                           0000B8   794 _PX0	=	0x00b8
                           0000B9   795 G$PT0$0$0 == 0x00b9
                           0000B9   796 _PT0	=	0x00b9
                           0000BA   797 G$PX1$0$0 == 0x00ba
                           0000BA   798 _PX1	=	0x00ba
                           0000BB   799 G$PT1$0$0 == 0x00bb
                           0000BB   800 _PT1	=	0x00bb
                           0000BC   801 G$PS0$0$0 == 0x00bc
                           0000BC   802 _PS0	=	0x00bc
                           0000BC   803 G$PS$0$0 == 0x00bc
                           0000BC   804 _PS	=	0x00bc
                           0000BD   805 G$PT2$0$0 == 0x00bd
                           0000BD   806 _PT2	=	0x00bd
                           0000C0   807 G$SMBTOE$0$0 == 0x00c0
                           0000C0   808 _SMBTOE	=	0x00c0
                           0000C1   809 G$SMBFTE$0$0 == 0x00c1
                           0000C1   810 _SMBFTE	=	0x00c1
                           0000C2   811 G$AA$0$0 == 0x00c2
                           0000C2   812 _AA	=	0x00c2
                           0000C3   813 G$SI$0$0 == 0x00c3
                           0000C3   814 _SI	=	0x00c3
                           0000C4   815 G$STO$0$0 == 0x00c4
                           0000C4   816 _STO	=	0x00c4
                           0000C5   817 G$STA$0$0 == 0x00c5
                           0000C5   818 _STA	=	0x00c5
                           0000C6   819 G$ENSMB$0$0 == 0x00c6
                           0000C6   820 _ENSMB	=	0x00c6
                           0000C7   821 G$BUSY$0$0 == 0x00c7
                           0000C7   822 _BUSY	=	0x00c7
                           0000C8   823 G$CPRL2$0$0 == 0x00c8
                           0000C8   824 _CPRL2	=	0x00c8
                           0000C9   825 G$CT2$0$0 == 0x00c9
                           0000C9   826 _CT2	=	0x00c9
                           0000CA   827 G$TR2$0$0 == 0x00ca
                           0000CA   828 _TR2	=	0x00ca
                           0000CB   829 G$EXEN2$0$0 == 0x00cb
                           0000CB   830 _EXEN2	=	0x00cb
                           0000CC   831 G$TCLK$0$0 == 0x00cc
                           0000CC   832 _TCLK	=	0x00cc
                           0000CD   833 G$RCLK$0$0 == 0x00cd
                           0000CD   834 _RCLK	=	0x00cd
                           0000CE   835 G$EXF2$0$0 == 0x00ce
                           0000CE   836 _EXF2	=	0x00ce
                           0000CF   837 G$TF2$0$0 == 0x00cf
                           0000CF   838 _TF2	=	0x00cf
                           0000D0   839 G$P$0$0 == 0x00d0
                           0000D0   840 _P	=	0x00d0
                           0000D1   841 G$F1$0$0 == 0x00d1
                           0000D1   842 _F1	=	0x00d1
                           0000D2   843 G$OV$0$0 == 0x00d2
                           0000D2   844 _OV	=	0x00d2
                           0000D3   845 G$RS0$0$0 == 0x00d3
                           0000D3   846 _RS0	=	0x00d3
                           0000D4   847 G$RS1$0$0 == 0x00d4
                           0000D4   848 _RS1	=	0x00d4
                           0000D5   849 G$F0$0$0 == 0x00d5
                           0000D5   850 _F0	=	0x00d5
                           0000D6   851 G$AC$0$0 == 0x00d6
                           0000D6   852 _AC	=	0x00d6
                           0000D7   853 G$CY$0$0 == 0x00d7
                           0000D7   854 _CY	=	0x00d7
                           0000D8   855 G$CCF0$0$0 == 0x00d8
                           0000D8   856 _CCF0	=	0x00d8
                           0000D9   857 G$CCF1$0$0 == 0x00d9
                           0000D9   858 _CCF1	=	0x00d9
                           0000DA   859 G$CCF2$0$0 == 0x00da
                           0000DA   860 _CCF2	=	0x00da
                           0000DB   861 G$CCF3$0$0 == 0x00db
                           0000DB   862 _CCF3	=	0x00db
                           0000DC   863 G$CCF4$0$0 == 0x00dc
                           0000DC   864 _CCF4	=	0x00dc
                           0000DE   865 G$CR$0$0 == 0x00de
                           0000DE   866 _CR	=	0x00de
                           0000DF   867 G$CF$0$0 == 0x00df
                           0000DF   868 _CF	=	0x00df
                           0000E8   869 G$ADLJST$0$0 == 0x00e8
                           0000E8   870 _ADLJST	=	0x00e8
                           0000E8   871 G$AD0LJST$0$0 == 0x00e8
                           0000E8   872 _AD0LJST	=	0x00e8
                           0000E9   873 G$ADWINT$0$0 == 0x00e9
                           0000E9   874 _ADWINT	=	0x00e9
                           0000E9   875 G$AD0WINT$0$0 == 0x00e9
                           0000E9   876 _AD0WINT	=	0x00e9
                           0000EA   877 G$ADSTM0$0$0 == 0x00ea
                           0000EA   878 _ADSTM0	=	0x00ea
                           0000EA   879 G$AD0CM0$0$0 == 0x00ea
                           0000EA   880 _AD0CM0	=	0x00ea
                           0000EB   881 G$ADSTM1$0$0 == 0x00eb
                           0000EB   882 _ADSTM1	=	0x00eb
                           0000EB   883 G$AD0CM1$0$0 == 0x00eb
                           0000EB   884 _AD0CM1	=	0x00eb
                           0000EC   885 G$ADBUSY$0$0 == 0x00ec
                           0000EC   886 _ADBUSY	=	0x00ec
                           0000EC   887 G$AD0BUSY$0$0 == 0x00ec
                           0000EC   888 _AD0BUSY	=	0x00ec
                           0000ED   889 G$ADCINT$0$0 == 0x00ed
                           0000ED   890 _ADCINT	=	0x00ed
                           0000ED   891 G$AD0INT$0$0 == 0x00ed
                           0000ED   892 _AD0INT	=	0x00ed
                           0000EE   893 G$ADCTM$0$0 == 0x00ee
                           0000EE   894 _ADCTM	=	0x00ee
                           0000EE   895 G$AD0TM$0$0 == 0x00ee
                           0000EE   896 _AD0TM	=	0x00ee
                           0000EF   897 G$ADCEN$0$0 == 0x00ef
                           0000EF   898 _ADCEN	=	0x00ef
                           0000EF   899 G$AD0EN$0$0 == 0x00ef
                           0000EF   900 _AD0EN	=	0x00ef
                           0000F8   901 G$SPIEN$0$0 == 0x00f8
                           0000F8   902 _SPIEN	=	0x00f8
                           0000F9   903 G$MSTEN$0$0 == 0x00f9
                           0000F9   904 _MSTEN	=	0x00f9
                           0000FA   905 G$SLVSEL$0$0 == 0x00fa
                           0000FA   906 _SLVSEL	=	0x00fa
                           0000FB   907 G$TXBSY$0$0 == 0x00fb
                           0000FB   908 _TXBSY	=	0x00fb
                           0000FC   909 G$RXOVRN$0$0 == 0x00fc
                           0000FC   910 _RXOVRN	=	0x00fc
                           0000FD   911 G$MODF$0$0 == 0x00fd
                           0000FD   912 _MODF	=	0x00fd
                           0000FE   913 G$WCOL$0$0 == 0x00fe
                           0000FE   914 _WCOL	=	0x00fe
                           0000FF   915 G$SPIF$0$0 == 0x00ff
                           0000FF   916 _SPIF	=	0x00ff
                           0000C7   917 G$BUS_BUSY$0$0 == 0x00c7
                           0000C7   918 _BUS_BUSY	=	0x00c7
                           0000C6   919 G$BUS_EN$0$0 == 0x00c6
                           0000C6   920 _BUS_EN	=	0x00c6
                           0000C5   921 G$BUS_START$0$0 == 0x00c5
                           0000C5   922 _BUS_START	=	0x00c5
                           0000C4   923 G$BUS_STOP$0$0 == 0x00c4
                           0000C4   924 _BUS_STOP	=	0x00c4
                           0000C3   925 G$BUS_INT$0$0 == 0x00c3
                           0000C3   926 _BUS_INT	=	0x00c3
                           0000C2   927 G$BUS_AA$0$0 == 0x00c2
                           0000C2   928 _BUS_AA	=	0x00c2
                           0000C1   929 G$BUS_FTE$0$0 == 0x00c1
                           0000C1   930 _BUS_FTE	=	0x00c1
                           0000C0   931 G$BUS_TOE$0$0 == 0x00c0
                           0000C0   932 _BUS_TOE	=	0x00c0
                           000083   933 G$BUS_SCL$0$0 == 0x0083
                           000083   934 _BUS_SCL	=	0x0083
                           0000B7   935 G$SS0$0$0 == 0x00b7
                           0000B7   936 _SS0	=	0x00b7
                                    937 ;--------------------------------------------------------
                                    938 ; overlayable register banks
                                    939 ;--------------------------------------------------------
                                    940 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        941 	.ds 8
                                    942 ;--------------------------------------------------------
                                    943 ; internal ram data
                                    944 ;--------------------------------------------------------
                                    945 	.area DSEG    (DATA)
                           000000   946 Llab4_m.lcd_clear$NumBytes$1$77==.
      000022                        947 _lcd_clear_NumBytes_1_77:
      000022                        948 	.ds 1
                           000001   949 Llab4_m.lcd_clear$Cmd$1$77==.
      000023                        950 _lcd_clear_Cmd_1_77:
      000023                        951 	.ds 2
                           000003   952 Llab4_m.read_keypad$Data$1$78==.
      000025                        953 _read_keypad_Data_1_78:
      000025                        954 	.ds 2
                           000005   955 Llab4_m.i2c_write_data$start_reg$1$97==.
      000027                        956 _i2c_write_data_PARM_2:
      000027                        957 	.ds 1
                           000006   958 Llab4_m.i2c_write_data$buffer$1$97==.
      000028                        959 _i2c_write_data_PARM_3:
      000028                        960 	.ds 3
                           000009   961 Llab4_m.i2c_write_data$num_bytes$1$97==.
      00002B                        962 _i2c_write_data_PARM_4:
      00002B                        963 	.ds 1
                           00000A   964 Llab4_m.i2c_read_data$start_reg$1$99==.
      00002C                        965 _i2c_read_data_PARM_2:
      00002C                        966 	.ds 1
                           00000B   967 Llab4_m.i2c_read_data$buffer$1$99==.
      00002D                        968 _i2c_read_data_PARM_3:
      00002D                        969 	.ds 3
                           00000E   970 Llab4_m.i2c_read_data$num_bytes$1$99==.
      000030                        971 _i2c_read_data_PARM_4:
      000030                        972 	.ds 1
                           00000F   973 Llab4_m.Accel_Init$Data2$1$103==.
      000031                        974 _Accel_Init_Data2_1_103:
      000031                        975 	.ds 1
                           000010   976 G$STR_lo_to_hi$0$0==.
      000032                        977 _STR_lo_to_hi::
      000032                        978 	.ds 2
                           000012   979 G$STR_PW$0$0==.
      000034                        980 _STR_PW::
      000034                        981 	.ds 2
                           000014   982 G$count$0$0==.
      000036                        983 _count::
      000036                        984 	.ds 2
                           000016   985 G$actual_heading$0$0==.
      000038                        986 _actual_heading::
      000038                        987 	.ds 2
                           000018   988 G$desired_heading$0$0==.
      00003A                        989 _desired_heading::
      00003A                        990 	.ds 2
                           00001A   991 G$error$0$0==.
      00003C                        992 _error::
      00003C                        993 	.ds 2
                           00001C   994 G$offset$0$0==.
      00003E                        995 _offset::
      00003E                        996 	.ds 2
                           00001E   997 G$range$0$0==.
      000040                        998 _range::
      000040                        999 	.ds 2
                           000020  1000 G$MOTOR_PW$0$0==.
      000042                       1001 _MOTOR_PW::
      000042                       1002 	.ds 2
                           000022  1003 G$starter$0$0==.
      000044                       1004 _starter::
      000044                       1005 	.ds 1
                           000023  1006 G$DRV_lo_to_hi$0$0==.
      000045                       1007 _DRV_lo_to_hi::
      000045                       1008 	.ds 2
                           000025  1009 Llab4_m.Read_Ranger$r_data$1$138==.
      000047                       1010 _Read_Ranger_r_data_1_138:
      000047                       1011 	.ds 2
                           000027  1012 Llab4_m.ReadCompass$Data$1$140==.
      000049                       1013 _ReadCompass_Data_1_140:
      000049                       1014 	.ds 2
                           000029  1015 Llab4_m.Steering_Servo$direction$1$141==.
      00004B                       1016 _Steering_Servo_direction_1_141:
      00004B                       1017 	.ds 2
                           00002B  1018 Llab4_m.Drive_func$r_data$1$168==.
      00004D                       1019 _Drive_func_r_data_1_168:
      00004D                       1020 	.ds 2
                                   1021 ;--------------------------------------------------------
                                   1022 ; overlayable items in internal ram 
                                   1023 ;--------------------------------------------------------
                                   1024 	.area	OSEG    (OVR,DATA)
                                   1025 	.area	OSEG    (OVR,DATA)
                                   1026 	.area	OSEG    (OVR,DATA)
                                   1027 	.area	OSEG    (OVR,DATA)
                                   1028 	.area	OSEG    (OVR,DATA)
                                   1029 	.area	OSEG    (OVR,DATA)
                                   1030 	.area	OSEG    (OVR,DATA)
                                   1031 	.area	OSEG    (OVR,DATA)
                                   1032 	.area	OSEG    (OVR,DATA)
                                   1033 ;--------------------------------------------------------
                                   1034 ; Stack segment in internal ram 
                                   1035 ;--------------------------------------------------------
                                   1036 	.area	SSEG
      000069                       1037 __start__stack:
      000069                       1038 	.ds	1
                                   1039 
                                   1040 ;--------------------------------------------------------
                                   1041 ; indirectly addressable internal ram data
                                   1042 ;--------------------------------------------------------
                                   1043 	.area ISEG    (DATA)
                                   1044 ;--------------------------------------------------------
                                   1045 ; absolute internal ram data
                                   1046 ;--------------------------------------------------------
                                   1047 	.area IABS    (ABS,DATA)
                                   1048 	.area IABS    (ABS,DATA)
                                   1049 ;--------------------------------------------------------
                                   1050 ; bit data
                                   1051 ;--------------------------------------------------------
                                   1052 	.area BSEG    (BIT)
                                   1053 ;--------------------------------------------------------
                                   1054 ; paged external ram data
                                   1055 ;--------------------------------------------------------
                                   1056 	.area PSEG    (PAG,XDATA)
                                   1057 ;--------------------------------------------------------
                                   1058 ; external ram data
                                   1059 ;--------------------------------------------------------
                                   1060 	.area XSEG    (XDATA)
                           000000  1061 Llab4_m.lcd_print$text$1$73==.
      000001                       1062 _lcd_print_text_1_73:
      000001                       1063 	.ds 80
                                   1064 ;--------------------------------------------------------
                                   1065 ; absolute external ram data
                                   1066 ;--------------------------------------------------------
                                   1067 	.area XABS    (ABS,XDATA)
                                   1068 ;--------------------------------------------------------
                                   1069 ; external initialized ram data
                                   1070 ;--------------------------------------------------------
                                   1071 	.area XISEG   (XDATA)
                                   1072 	.area HOME    (CODE)
                                   1073 	.area GSINIT0 (CODE)
                                   1074 	.area GSINIT1 (CODE)
                                   1075 	.area GSINIT2 (CODE)
                                   1076 	.area GSINIT3 (CODE)
                                   1077 	.area GSINIT4 (CODE)
                                   1078 	.area GSINIT5 (CODE)
                                   1079 	.area GSINIT  (CODE)
                                   1080 	.area GSFINAL (CODE)
                                   1081 	.area CSEG    (CODE)
                                   1082 ;--------------------------------------------------------
                                   1083 ; interrupt vector 
                                   1084 ;--------------------------------------------------------
                                   1085 	.area HOME    (CODE)
      000000                       1086 __interrupt_vect:
      000000 02 00 51         [24] 1087 	ljmp	__sdcc_gsinit_startup
      000003 32               [24] 1088 	reti
      000004                       1089 	.ds	7
      00000B 32               [24] 1090 	reti
      00000C                       1091 	.ds	7
      000013 32               [24] 1092 	reti
      000014                       1093 	.ds	7
      00001B 32               [24] 1094 	reti
      00001C                       1095 	.ds	7
      000023 32               [24] 1096 	reti
      000024                       1097 	.ds	7
      00002B 32               [24] 1098 	reti
      00002C                       1099 	.ds	7
      000033 32               [24] 1100 	reti
      000034                       1101 	.ds	7
      00003B 32               [24] 1102 	reti
      00003C                       1103 	.ds	7
      000043 32               [24] 1104 	reti
      000044                       1105 	.ds	7
      00004B 02 0A AD         [24] 1106 	ljmp	_PCA_ISR
                                   1107 ;--------------------------------------------------------
                                   1108 ; global & static initialisations
                                   1109 ;--------------------------------------------------------
                                   1110 	.area HOME    (CODE)
                                   1111 	.area GSINIT  (CODE)
                                   1112 	.area GSFINAL (CODE)
                                   1113 	.area GSINIT  (CODE)
                                   1114 	.globl __sdcc_gsinit_startup
                                   1115 	.globl __sdcc_program_startup
                                   1116 	.globl __start__stack
                                   1117 	.globl __mcs51_genXINIT
                                   1118 	.globl __mcs51_genXRAMCLEAR
                                   1119 	.globl __mcs51_genRAMCLEAR
                           000000  1120 	C$lab4_m.c$57$1$176 ==.
                                   1121 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:57: unsigned int STR_PW   = 0;
      0000AA E4               [12] 1122 	clr	a
      0000AB F5 34            [12] 1123 	mov	_STR_PW,a
      0000AD F5 35            [12] 1124 	mov	(_STR_PW + 1),a
                           000005  1125 	C$lab4_m.c$58$1$176 ==.
                                   1126 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:58: unsigned int count = 0;
      0000AF F5 36            [12] 1127 	mov	_count,a
      0000B1 F5 37            [12] 1128 	mov	(_count + 1),a
                           000009  1129 	C$lab4_m.c$64$1$176 ==.
                                   1130 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:64: unsigned int range = 0;
      0000B3 F5 40            [12] 1131 	mov	_range,a
      0000B5 F5 41            [12] 1132 	mov	(_range + 1),a
                           00000D  1133 	C$lab4_m.c$65$1$176 ==.
                                   1134 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:65: unsigned int MOTOR_PW = 0;
      0000B7 F5 42            [12] 1135 	mov	_MOTOR_PW,a
      0000B9 F5 43            [12] 1136 	mov	(_MOTOR_PW + 1),a
                           000011  1137 	C$lab4_m.c$69$1$176 ==.
                                   1138 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:69: unsigned char starter =0;
                                   1139 ;	1-genFromRTrack replaced	mov	_starter,#0x00
      0000BB F5 44            [12] 1140 	mov	_starter,a
                                   1141 	.area GSFINAL (CODE)
      0000BD 02 00 4E         [24] 1142 	ljmp	__sdcc_program_startup
                                   1143 ;--------------------------------------------------------
                                   1144 ; Home
                                   1145 ;--------------------------------------------------------
                                   1146 	.area HOME    (CODE)
                                   1147 	.area HOME    (CODE)
      00004E                       1148 __sdcc_program_startup:
      00004E 02 05 96         [24] 1149 	ljmp	_main
                                   1150 ;	return from main will return to caller
                                   1151 ;--------------------------------------------------------
                                   1152 ; code
                                   1153 ;--------------------------------------------------------
                                   1154 	.area CSEG    (CODE)
                                   1155 ;------------------------------------------------------------
                                   1156 ;Allocation info for local variables in function 'SYSCLK_Init'
                                   1157 ;------------------------------------------------------------
                                   1158 ;i                         Allocated to registers 
                                   1159 ;------------------------------------------------------------
                           000000  1160 	G$SYSCLK_Init$0$0 ==.
                           000000  1161 	C$c8051_SDCC.h$42$0$0 ==.
                                   1162 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:42: void SYSCLK_Init(void)
                                   1163 ;	-----------------------------------------
                                   1164 ;	 function SYSCLK_Init
                                   1165 ;	-----------------------------------------
      0000C0                       1166 _SYSCLK_Init:
                           000007  1167 	ar7 = 0x07
                           000006  1168 	ar6 = 0x06
                           000005  1169 	ar5 = 0x05
                           000004  1170 	ar4 = 0x04
                           000003  1171 	ar3 = 0x03
                           000002  1172 	ar2 = 0x02
                           000001  1173 	ar1 = 0x01
                           000000  1174 	ar0 = 0x00
                           000000  1175 	C$c8051_SDCC.h$46$1$31 ==.
                                   1176 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:46: OSCXCN = 0x67;                      // start external oscillator with
      0000C0 75 B1 67         [24] 1177 	mov	_OSCXCN,#0x67
                           000003  1178 	C$c8051_SDCC.h$49$1$31 ==.
                                   1179 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:49: for (i=0; i < 256; i++);            // wait for oscillator to start
      0000C3 7E 00            [12] 1180 	mov	r6,#0x00
      0000C5 7F 01            [12] 1181 	mov	r7,#0x01
      0000C7                       1182 00107$:
      0000C7 1E               [12] 1183 	dec	r6
      0000C8 BE FF 01         [24] 1184 	cjne	r6,#0xFF,00121$
      0000CB 1F               [12] 1185 	dec	r7
      0000CC                       1186 00121$:
      0000CC EE               [12] 1187 	mov	a,r6
      0000CD 4F               [12] 1188 	orl	a,r7
      0000CE 70 F7            [24] 1189 	jnz	00107$
                           000010  1190 	C$c8051_SDCC.h$51$1$31 ==.
                                   1191 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:51: while (!(OSCXCN & 0x80));           // Wait for crystal osc. to settle
      0000D0                       1192 00102$:
      0000D0 E5 B1            [12] 1193 	mov	a,_OSCXCN
      0000D2 30 E7 FB         [24] 1194 	jnb	acc.7,00102$
                           000015  1195 	C$c8051_SDCC.h$53$1$31 ==.
                                   1196 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:53: OSCICN = 0x88;                      // select external oscillator as SYSCLK
      0000D5 75 B2 88         [24] 1197 	mov	_OSCICN,#0x88
                           000018  1198 	C$c8051_SDCC.h$56$1$31 ==.
                           000018  1199 	XG$SYSCLK_Init$0$0 ==.
      0000D8 22               [24] 1200 	ret
                                   1201 ;------------------------------------------------------------
                                   1202 ;Allocation info for local variables in function 'UART0_Init'
                                   1203 ;------------------------------------------------------------
                           000019  1204 	G$UART0_Init$0$0 ==.
                           000019  1205 	C$c8051_SDCC.h$64$1$31 ==.
                                   1206 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:64: void UART0_Init(void)
                                   1207 ;	-----------------------------------------
                                   1208 ;	 function UART0_Init
                                   1209 ;	-----------------------------------------
      0000D9                       1210 _UART0_Init:
                           000019  1211 	C$c8051_SDCC.h$66$1$33 ==.
                                   1212 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:66: SCON0  = 0x50;                      // SCON0: mode 1, 8-bit UART, enable RX
      0000D9 75 98 50         [24] 1213 	mov	_SCON0,#0x50
                           00001C  1214 	C$c8051_SDCC.h$67$1$33 ==.
                                   1215 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:67: TMOD   = 0x20;                      // TMOD: timer 1, mode 2, 8-bit reload
      0000DC 75 89 20         [24] 1216 	mov	_TMOD,#0x20
                           00001F  1217 	C$c8051_SDCC.h$68$1$33 ==.
                                   1218 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:68: TH1    = -(SYSCLK/BAUDRATE/16);     // set Timer1 reload value for baudrate
      0000DF 75 8D DC         [24] 1219 	mov	_TH1,#0xDC
                           000022  1220 	C$c8051_SDCC.h$69$1$33 ==.
                                   1221 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:69: TR1    = 1;                         // start Timer1
      0000E2 D2 8E            [12] 1222 	setb	_TR1
                           000024  1223 	C$c8051_SDCC.h$70$1$33 ==.
                                   1224 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:70: CKCON |= 0x10;                      // Timer1 uses SYSCLK as time base
      0000E4 43 8E 10         [24] 1225 	orl	_CKCON,#0x10
                           000027  1226 	C$c8051_SDCC.h$71$1$33 ==.
                                   1227 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:71: PCON  |= 0x80;                      // SMOD00 = 1 (disable baud rate 
      0000E7 43 87 80         [24] 1228 	orl	_PCON,#0x80
                           00002A  1229 	C$c8051_SDCC.h$73$1$33 ==.
                                   1230 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:73: TI0    = 1;                         // Indicate TX0 ready
      0000EA D2 99            [12] 1231 	setb	_TI0
                           00002C  1232 	C$c8051_SDCC.h$74$1$33 ==.
                                   1233 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:74: P0MDOUT |= 0x01;                    // Set TX0 to push/pull
      0000EC 43 A4 01         [24] 1234 	orl	_P0MDOUT,#0x01
                           00002F  1235 	C$c8051_SDCC.h$75$1$33 ==.
                           00002F  1236 	XG$UART0_Init$0$0 ==.
      0000EF 22               [24] 1237 	ret
                                   1238 ;------------------------------------------------------------
                                   1239 ;Allocation info for local variables in function 'Sys_Init'
                                   1240 ;------------------------------------------------------------
                           000030  1241 	G$Sys_Init$0$0 ==.
                           000030  1242 	C$c8051_SDCC.h$83$1$33 ==.
                                   1243 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:83: void Sys_Init(void)
                                   1244 ;	-----------------------------------------
                                   1245 ;	 function Sys_Init
                                   1246 ;	-----------------------------------------
      0000F0                       1247 _Sys_Init:
                           000030  1248 	C$c8051_SDCC.h$85$1$35 ==.
                                   1249 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:85: WDTCN = 0xde;			// disable watchdog timer
      0000F0 75 FF DE         [24] 1250 	mov	_WDTCN,#0xDE
                           000033  1251 	C$c8051_SDCC.h$86$1$35 ==.
                                   1252 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:86: WDTCN = 0xad;
      0000F3 75 FF AD         [24] 1253 	mov	_WDTCN,#0xAD
                           000036  1254 	C$c8051_SDCC.h$88$1$35 ==.
                                   1255 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:88: SYSCLK_Init();			// initialize oscillator
      0000F6 12 00 C0         [24] 1256 	lcall	_SYSCLK_Init
                           000039  1257 	C$c8051_SDCC.h$89$1$35 ==.
                                   1258 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:89: UART0_Init();			// initialize UART0
      0000F9 12 00 D9         [24] 1259 	lcall	_UART0_Init
                           00003C  1260 	C$c8051_SDCC.h$91$1$35 ==.
                                   1261 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:91: XBR0 |= 0x04;
      0000FC 43 E1 04         [24] 1262 	orl	_XBR0,#0x04
                           00003F  1263 	C$c8051_SDCC.h$92$1$35 ==.
                                   1264 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:92: XBR2 |= 0x40;                    	// Enable crossbar and weak pull-ups
      0000FF 43 E3 40         [24] 1265 	orl	_XBR2,#0x40
                           000042  1266 	C$c8051_SDCC.h$93$1$35 ==.
                           000042  1267 	XG$Sys_Init$0$0 ==.
      000102 22               [24] 1268 	ret
                                   1269 ;------------------------------------------------------------
                                   1270 ;Allocation info for local variables in function 'putchar'
                                   1271 ;------------------------------------------------------------
                                   1272 ;c                         Allocated to registers r7 
                                   1273 ;------------------------------------------------------------
                           000043  1274 	G$putchar$0$0 ==.
                           000043  1275 	C$c8051_SDCC.h$98$1$35 ==.
                                   1276 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:98: void putchar(char c)
                                   1277 ;	-----------------------------------------
                                   1278 ;	 function putchar
                                   1279 ;	-----------------------------------------
      000103                       1280 _putchar:
      000103 AF 82            [24] 1281 	mov	r7,dpl
                           000045  1282 	C$c8051_SDCC.h$100$1$37 ==.
                                   1283 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:100: while (!TI0); 
      000105                       1284 00101$:
                           000045  1285 	C$c8051_SDCC.h$101$1$37 ==.
                                   1286 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:101: TI0 = 0;
      000105 10 99 02         [24] 1287 	jbc	_TI0,00112$
      000108 80 FB            [24] 1288 	sjmp	00101$
      00010A                       1289 00112$:
                           00004A  1290 	C$c8051_SDCC.h$102$1$37 ==.
                                   1291 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:102: SBUF0 = c;
      00010A 8F 99            [24] 1292 	mov	_SBUF0,r7
                           00004C  1293 	C$c8051_SDCC.h$103$1$37 ==.
                           00004C  1294 	XG$putchar$0$0 ==.
      00010C 22               [24] 1295 	ret
                                   1296 ;------------------------------------------------------------
                                   1297 ;Allocation info for local variables in function 'getchar'
                                   1298 ;------------------------------------------------------------
                                   1299 ;c                         Allocated to registers 
                                   1300 ;------------------------------------------------------------
                           00004D  1301 	G$getchar$0$0 ==.
                           00004D  1302 	C$c8051_SDCC.h$108$1$37 ==.
                                   1303 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:108: char getchar(void)
                                   1304 ;	-----------------------------------------
                                   1305 ;	 function getchar
                                   1306 ;	-----------------------------------------
      00010D                       1307 _getchar:
                           00004D  1308 	C$c8051_SDCC.h$111$1$39 ==.
                                   1309 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:111: while (!RI0);
      00010D                       1310 00101$:
                           00004D  1311 	C$c8051_SDCC.h$112$1$39 ==.
                                   1312 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:112: RI0 = 0;
      00010D 10 98 02         [24] 1313 	jbc	_RI0,00112$
      000110 80 FB            [24] 1314 	sjmp	00101$
      000112                       1315 00112$:
                           000052  1316 	C$c8051_SDCC.h$113$1$39 ==.
                                   1317 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:113: c = SBUF0;
      000112 85 99 82         [24] 1318 	mov	dpl,_SBUF0
                           000055  1319 	C$c8051_SDCC.h$114$1$39 ==.
                                   1320 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:114: putchar(c);                          // echo to terminal
      000115 12 01 03         [24] 1321 	lcall	_putchar
                           000058  1322 	C$c8051_SDCC.h$115$1$39 ==.
                                   1323 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:115: return SBUF0;
      000118 85 99 82         [24] 1324 	mov	dpl,_SBUF0
                           00005B  1325 	C$c8051_SDCC.h$116$1$39 ==.
                           00005B  1326 	XG$getchar$0$0 ==.
      00011B 22               [24] 1327 	ret
                                   1328 ;------------------------------------------------------------
                                   1329 ;Allocation info for local variables in function 'lcd_print'
                                   1330 ;------------------------------------------------------------
                                   1331 ;fmt                       Allocated to stack - _bp -5
                                   1332 ;len                       Allocated to registers r6 
                                   1333 ;i                         Allocated to registers 
                                   1334 ;ap                        Allocated to registers 
                                   1335 ;text                      Allocated with name '_lcd_print_text_1_73'
                                   1336 ;------------------------------------------------------------
                           00005C  1337 	G$lcd_print$0$0 ==.
                           00005C  1338 	C$i2c.h$81$1$39 ==.
                                   1339 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:81: void lcd_print(const char *fmt, ...)
                                   1340 ;	-----------------------------------------
                                   1341 ;	 function lcd_print
                                   1342 ;	-----------------------------------------
      00011C                       1343 _lcd_print:
      00011C C0 0F            [24] 1344 	push	_bp
      00011E 85 81 0F         [24] 1345 	mov	_bp,sp
                           000061  1346 	C$i2c.h$87$1$73 ==.
                                   1347 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:87: if ( strlen(fmt) <= 0 ) return;   //If there is no data to print, return
      000121 E5 0F            [12] 1348 	mov	a,_bp
      000123 24 FB            [12] 1349 	add	a,#0xfb
      000125 F8               [12] 1350 	mov	r0,a
      000126 86 82            [24] 1351 	mov	dpl,@r0
      000128 08               [12] 1352 	inc	r0
      000129 86 83            [24] 1353 	mov	dph,@r0
      00012B 08               [12] 1354 	inc	r0
      00012C 86 F0            [24] 1355 	mov	b,@r0
      00012E 12 16 98         [24] 1356 	lcall	_strlen
      000131 E5 82            [12] 1357 	mov	a,dpl
      000133 85 83 F0         [24] 1358 	mov	b,dph
      000136 45 F0            [12] 1359 	orl	a,b
      000138 70 02            [24] 1360 	jnz	00102$
      00013A 80 62            [24] 1361 	sjmp	00109$
      00013C                       1362 00102$:
                           00007C  1363 	C$i2c.h$89$2$74 ==.
                                   1364 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:89: va_start(ap, fmt);
      00013C E5 0F            [12] 1365 	mov	a,_bp
      00013E 24 FB            [12] 1366 	add	a,#0xFB
      000140 FF               [12] 1367 	mov	r7,a
      000141 8F 0B            [24] 1368 	mov	_vsprintf_PARM_3,r7
                           000083  1369 	C$i2c.h$90$1$73 ==.
                                   1370 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:90: vsprintf(text, fmt, ap);
      000143 E5 0F            [12] 1371 	mov	a,_bp
      000145 24 FB            [12] 1372 	add	a,#0xfb
      000147 F8               [12] 1373 	mov	r0,a
      000148 86 08            [24] 1374 	mov	_vsprintf_PARM_2,@r0
      00014A 08               [12] 1375 	inc	r0
      00014B 86 09            [24] 1376 	mov	(_vsprintf_PARM_2 + 1),@r0
      00014D 08               [12] 1377 	inc	r0
      00014E 86 0A            [24] 1378 	mov	(_vsprintf_PARM_2 + 2),@r0
      000150 90 00 01         [24] 1379 	mov	dptr,#_lcd_print_text_1_73
      000153 75 F0 00         [24] 1380 	mov	b,#0x00
      000156 12 0E 9E         [24] 1381 	lcall	_vsprintf
                           000099  1382 	C$i2c.h$93$1$73 ==.
                                   1383 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:93: len = strlen(text);
      000159 90 00 01         [24] 1384 	mov	dptr,#_lcd_print_text_1_73
      00015C 75 F0 00         [24] 1385 	mov	b,#0x00
      00015F 12 16 98         [24] 1386 	lcall	_strlen
      000162 AE 82            [24] 1387 	mov	r6,dpl
                           0000A4  1388 	C$i2c.h$94$1$73 ==.
                                   1389 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:94: for(i=0; i<len; i++)
      000164 7F 00            [12] 1390 	mov	r7,#0x00
      000166                       1391 00107$:
      000166 C3               [12] 1392 	clr	c
      000167 EF               [12] 1393 	mov	a,r7
      000168 9E               [12] 1394 	subb	a,r6
      000169 50 1F            [24] 1395 	jnc	00105$
                           0000AB  1396 	C$i2c.h$96$2$76 ==.
                                   1397 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:96: if(text[i] == (unsigned char)'\n') text[i] = 13;
      00016B EF               [12] 1398 	mov	a,r7
      00016C 24 01            [12] 1399 	add	a,#_lcd_print_text_1_73
      00016E F5 82            [12] 1400 	mov	dpl,a
      000170 E4               [12] 1401 	clr	a
      000171 34 00            [12] 1402 	addc	a,#(_lcd_print_text_1_73 >> 8)
      000173 F5 83            [12] 1403 	mov	dph,a
      000175 E0               [24] 1404 	movx	a,@dptr
      000176 FD               [12] 1405 	mov	r5,a
      000177 BD 0A 0D         [24] 1406 	cjne	r5,#0x0A,00108$
      00017A EF               [12] 1407 	mov	a,r7
      00017B 24 01            [12] 1408 	add	a,#_lcd_print_text_1_73
      00017D F5 82            [12] 1409 	mov	dpl,a
      00017F E4               [12] 1410 	clr	a
      000180 34 00            [12] 1411 	addc	a,#(_lcd_print_text_1_73 >> 8)
      000182 F5 83            [12] 1412 	mov	dph,a
      000184 74 0D            [12] 1413 	mov	a,#0x0D
      000186 F0               [24] 1414 	movx	@dptr,a
      000187                       1415 00108$:
                           0000C7  1416 	C$i2c.h$94$1$73 ==.
                                   1417 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:94: for(i=0; i<len; i++)
      000187 0F               [12] 1418 	inc	r7
      000188 80 DC            [24] 1419 	sjmp	00107$
      00018A                       1420 00105$:
                           0000CA  1421 	C$i2c.h$99$1$73 ==.
                                   1422 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:99: i2c_write_data(0xC6, 0x00, text, len);
      00018A 75 28 01         [24] 1423 	mov	_i2c_write_data_PARM_3,#_lcd_print_text_1_73
      00018D 75 29 00         [24] 1424 	mov	(_i2c_write_data_PARM_3 + 1),#(_lcd_print_text_1_73 >> 8)
      000190 75 2A 00         [24] 1425 	mov	(_i2c_write_data_PARM_3 + 2),#0x00
      000193 75 27 00         [24] 1426 	mov	_i2c_write_data_PARM_2,#0x00
      000196 8E 2B            [24] 1427 	mov	_i2c_write_data_PARM_4,r6
      000198 75 82 C6         [24] 1428 	mov	dpl,#0xC6
      00019B 12 04 32         [24] 1429 	lcall	_i2c_write_data
      00019E                       1430 00109$:
      00019E D0 0F            [24] 1431 	pop	_bp
                           0000E0  1432 	C$i2c.h$100$1$73 ==.
                           0000E0  1433 	XG$lcd_print$0$0 ==.
      0001A0 22               [24] 1434 	ret
                                   1435 ;------------------------------------------------------------
                                   1436 ;Allocation info for local variables in function 'lcd_clear'
                                   1437 ;------------------------------------------------------------
                                   1438 ;NumBytes                  Allocated with name '_lcd_clear_NumBytes_1_77'
                                   1439 ;Cmd                       Allocated with name '_lcd_clear_Cmd_1_77'
                                   1440 ;------------------------------------------------------------
                           0000E1  1441 	G$lcd_clear$0$0 ==.
                           0000E1  1442 	C$i2c.h$103$1$73 ==.
                                   1443 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:103: void lcd_clear()
                                   1444 ;	-----------------------------------------
                                   1445 ;	 function lcd_clear
                                   1446 ;	-----------------------------------------
      0001A1                       1447 _lcd_clear:
                           0000E1  1448 	C$i2c.h$105$1$73 ==.
                                   1449 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:105: unsigned char NumBytes=0, Cmd[2];
      0001A1 75 22 00         [24] 1450 	mov	_lcd_clear_NumBytes_1_77,#0x00
                           0000E4  1451 	C$i2c.h$107$1$77 ==.
                                   1452 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:107: while(NumBytes < 64) i2c_read_data(0xC6, 0x00, &NumBytes, 1);
      0001A4                       1453 00101$:
      0001A4 74 C0            [12] 1454 	mov	a,#0x100 - 0x40
      0001A6 25 22            [12] 1455 	add	a,_lcd_clear_NumBytes_1_77
      0001A8 40 17            [24] 1456 	jc	00103$
      0001AA 75 2D 22         [24] 1457 	mov	_i2c_read_data_PARM_3,#_lcd_clear_NumBytes_1_77
      0001AD 75 2E 00         [24] 1458 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0001B0 75 2F 40         [24] 1459 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0001B3 75 2C 00         [24] 1460 	mov	_i2c_read_data_PARM_2,#0x00
      0001B6 75 30 01         [24] 1461 	mov	_i2c_read_data_PARM_4,#0x01
      0001B9 75 82 C6         [24] 1462 	mov	dpl,#0xC6
      0001BC 12 04 A8         [24] 1463 	lcall	_i2c_read_data
      0001BF 80 E3            [24] 1464 	sjmp	00101$
      0001C1                       1465 00103$:
                           000101  1466 	C$i2c.h$109$1$77 ==.
                                   1467 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:109: Cmd[0] = 12;
      0001C1 75 23 0C         [24] 1468 	mov	_lcd_clear_Cmd_1_77,#0x0C
                           000104  1469 	C$i2c.h$110$1$77 ==.
                                   1470 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:110: i2c_write_data(0xC6, 0x00, Cmd, 1);
      0001C4 75 28 23         [24] 1471 	mov	_i2c_write_data_PARM_3,#_lcd_clear_Cmd_1_77
      0001C7 75 29 00         [24] 1472 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      0001CA 75 2A 40         [24] 1473 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      0001CD 75 27 00         [24] 1474 	mov	_i2c_write_data_PARM_2,#0x00
      0001D0 75 2B 01         [24] 1475 	mov	_i2c_write_data_PARM_4,#0x01
      0001D3 75 82 C6         [24] 1476 	mov	dpl,#0xC6
      0001D6 12 04 32         [24] 1477 	lcall	_i2c_write_data
                           000119  1478 	C$i2c.h$111$1$77 ==.
                           000119  1479 	XG$lcd_clear$0$0 ==.
      0001D9 22               [24] 1480 	ret
                                   1481 ;------------------------------------------------------------
                                   1482 ;Allocation info for local variables in function 'read_keypad'
                                   1483 ;------------------------------------------------------------
                                   1484 ;i                         Allocated to registers r7 
                                   1485 ;Data                      Allocated with name '_read_keypad_Data_1_78'
                                   1486 ;------------------------------------------------------------
                           00011A  1487 	G$read_keypad$0$0 ==.
                           00011A  1488 	C$i2c.h$114$1$77 ==.
                                   1489 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:114: char read_keypad()
                                   1490 ;	-----------------------------------------
                                   1491 ;	 function read_keypad
                                   1492 ;	-----------------------------------------
      0001DA                       1493 _read_keypad:
                           00011A  1494 	C$i2c.h$118$1$78 ==.
                                   1495 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:118: i2c_read_data(0xC6, 0x01, Data, 2); //Read I2C data on address 192, register 1, 2 bytes of data.
      0001DA 75 2D 25         [24] 1496 	mov	_i2c_read_data_PARM_3,#_read_keypad_Data_1_78
      0001DD 75 2E 00         [24] 1497 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0001E0 75 2F 40         [24] 1498 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0001E3 75 2C 01         [24] 1499 	mov	_i2c_read_data_PARM_2,#0x01
      0001E6 75 30 02         [24] 1500 	mov	_i2c_read_data_PARM_4,#0x02
      0001E9 75 82 C6         [24] 1501 	mov	dpl,#0xC6
      0001EC 12 04 A8         [24] 1502 	lcall	_i2c_read_data
                           00012F  1503 	C$i2c.h$119$1$78 ==.
                                   1504 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:119: if(Data[0] == 0xFF) return 0;  //No response on bus, no display
      0001EF 74 FF            [12] 1505 	mov	a,#0xFF
      0001F1 B5 25 05         [24] 1506 	cjne	a,_read_keypad_Data_1_78,00102$
      0001F4 75 82 00         [24] 1507 	mov	dpl,#0x00
      0001F7 80 5F            [24] 1508 	sjmp	00116$
      0001F9                       1509 00102$:
                           000139  1510 	C$i2c.h$121$1$78 ==.
                                   1511 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:121: for(i=0; i<8; i++)             //loop 8 times
      0001F9 7F 00            [12] 1512 	mov	r7,#0x00
      0001FB 8F 06            [24] 1513 	mov	ar6,r7
      0001FD                       1514 00114$:
                           00013D  1515 	C$i2c.h$123$2$79 ==.
                                   1516 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:123: if(Data[0] & (0x01 << i))  //find the ASCII value of the keypad read, if it is the current loop value
      0001FD 8E F0            [24] 1517 	mov	b,r6
      0001FF 05 F0            [12] 1518 	inc	b
      000201 7C 01            [12] 1519 	mov	r4,#0x01
      000203 7D 00            [12] 1520 	mov	r5,#0x00
      000205 80 06            [24] 1521 	sjmp	00145$
      000207                       1522 00144$:
      000207 EC               [12] 1523 	mov	a,r4
      000208 2C               [12] 1524 	add	a,r4
      000209 FC               [12] 1525 	mov	r4,a
      00020A ED               [12] 1526 	mov	a,r5
      00020B 33               [12] 1527 	rlc	a
      00020C FD               [12] 1528 	mov	r5,a
      00020D                       1529 00145$:
      00020D D5 F0 F7         [24] 1530 	djnz	b,00144$
      000210 AA 25            [24] 1531 	mov	r2,_read_keypad_Data_1_78
      000212 7B 00            [12] 1532 	mov	r3,#0x00
      000214 EA               [12] 1533 	mov	a,r2
      000215 52 04            [12] 1534 	anl	ar4,a
      000217 EB               [12] 1535 	mov	a,r3
      000218 52 05            [12] 1536 	anl	ar5,a
      00021A EC               [12] 1537 	mov	a,r4
      00021B 4D               [12] 1538 	orl	a,r5
      00021C 60 07            [24] 1539 	jz	00115$
                           00015E  1540 	C$i2c.h$124$2$79 ==.
                                   1541 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:124: return i+49;
      00021E 74 31            [12] 1542 	mov	a,#0x31
      000220 2F               [12] 1543 	add	a,r7
      000221 F5 82            [12] 1544 	mov	dpl,a
      000223 80 33            [24] 1545 	sjmp	00116$
      000225                       1546 00115$:
                           000165  1547 	C$i2c.h$121$1$78 ==.
                                   1548 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:121: for(i=0; i<8; i++)             //loop 8 times
      000225 0E               [12] 1549 	inc	r6
      000226 8E 07            [24] 1550 	mov	ar7,r6
      000228 BE 08 00         [24] 1551 	cjne	r6,#0x08,00147$
      00022B                       1552 00147$:
      00022B 40 D0            [24] 1553 	jc	00114$
                           00016D  1554 	C$i2c.h$127$1$78 ==.
                                   1555 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:127: if(Data[1] & 0x01) return '9'; //if the value is equal to 9 return 9.
      00022D E5 26            [12] 1556 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      00022F 30 E0 05         [24] 1557 	jnb	acc.0,00107$
      000232 75 82 39         [24] 1558 	mov	dpl,#0x39
      000235 80 21            [24] 1559 	sjmp	00116$
      000237                       1560 00107$:
                           000177  1561 	C$i2c.h$129$1$78 ==.
                                   1562 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:129: if(Data[1] & 0x02) return '*'; //if the value is equal to the star.
      000237 E5 26            [12] 1563 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000239 30 E1 05         [24] 1564 	jnb	acc.1,00109$
      00023C 75 82 2A         [24] 1565 	mov	dpl,#0x2A
      00023F 80 17            [24] 1566 	sjmp	00116$
      000241                       1567 00109$:
                           000181  1568 	C$i2c.h$131$1$78 ==.
                                   1569 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:131: if(Data[1] & 0x04) return '0'; //if the value is equal to the 0 key
      000241 E5 26            [12] 1570 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000243 30 E2 05         [24] 1571 	jnb	acc.2,00111$
      000246 75 82 30         [24] 1572 	mov	dpl,#0x30
      000249 80 0D            [24] 1573 	sjmp	00116$
      00024B                       1574 00111$:
                           00018B  1575 	C$i2c.h$133$1$78 ==.
                                   1576 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:133: if(Data[1] & 0x08) return '#'; //if the value is equal to the pound key
      00024B E5 26            [12] 1577 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      00024D 30 E3 05         [24] 1578 	jnb	acc.3,00113$
      000250 75 82 23         [24] 1579 	mov	dpl,#0x23
      000253 80 03            [24] 1580 	sjmp	00116$
      000255                       1581 00113$:
                           000195  1582 	C$i2c.h$135$1$78 ==.
                                   1583 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:135: return -1;                     //else return a numerical -1 (0xFF)
      000255 75 82 FF         [24] 1584 	mov	dpl,#0xFF
      000258                       1585 00116$:
                           000198  1586 	C$i2c.h$136$1$78 ==.
                           000198  1587 	XG$read_keypad$0$0 ==.
      000258 22               [24] 1588 	ret
                                   1589 ;------------------------------------------------------------
                                   1590 ;Allocation info for local variables in function 'kpd_input'
                                   1591 ;------------------------------------------------------------
                                   1592 ;mode                      Allocated to registers r7 
                                   1593 ;sum                       Allocated to registers r5 r6 
                                   1594 ;key                       Allocated to registers r3 
                                   1595 ;i                         Allocated to registers 
                                   1596 ;------------------------------------------------------------
                           000199  1597 	G$kpd_input$0$0 ==.
                           000199  1598 	C$i2c.h$148$1$78 ==.
                                   1599 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:148: unsigned int kpd_input(char mode)
                                   1600 ;	-----------------------------------------
                                   1601 ;	 function kpd_input
                                   1602 ;	-----------------------------------------
      000259                       1603 _kpd_input:
      000259 AF 82            [24] 1604 	mov	r7,dpl
                           00019B  1605 	C$i2c.h$153$1$81 ==.
                                   1606 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:153: sum = 0;
                           00019B  1607 	C$i2c.h$156$1$81 ==.
                                   1608 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:156: if(mode==0)lcd_print("\nType digits; end w/#");
      00025B E4               [12] 1609 	clr	a
      00025C FD               [12] 1610 	mov	r5,a
      00025D FE               [12] 1611 	mov	r6,a
      00025E EF               [12] 1612 	mov	a,r7
      00025F 70 1D            [24] 1613 	jnz	00102$
      000261 C0 06            [24] 1614 	push	ar6
      000263 C0 05            [24] 1615 	push	ar5
      000265 74 58            [12] 1616 	mov	a,#___str_0
      000267 C0 E0            [24] 1617 	push	acc
      000269 74 18            [12] 1618 	mov	a,#(___str_0 >> 8)
      00026B C0 E0            [24] 1619 	push	acc
      00026D 74 80            [12] 1620 	mov	a,#0x80
      00026F C0 E0            [24] 1621 	push	acc
      000271 12 01 1C         [24] 1622 	lcall	_lcd_print
      000274 15 81            [12] 1623 	dec	sp
      000276 15 81            [12] 1624 	dec	sp
      000278 15 81            [12] 1625 	dec	sp
      00027A D0 05            [24] 1626 	pop	ar5
      00027C D0 06            [24] 1627 	pop	ar6
      00027E                       1628 00102$:
                           0001BE  1629 	C$i2c.h$158$1$81 ==.
                                   1630 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:158: lcd_print("     %c%c%c%c%c",0x08,0x08,0x08,0x08,0x08);
      00027E C0 06            [24] 1631 	push	ar6
      000280 C0 05            [24] 1632 	push	ar5
      000282 74 08            [12] 1633 	mov	a,#0x08
      000284 C0 E0            [24] 1634 	push	acc
      000286 E4               [12] 1635 	clr	a
      000287 C0 E0            [24] 1636 	push	acc
      000289 74 08            [12] 1637 	mov	a,#0x08
      00028B C0 E0            [24] 1638 	push	acc
      00028D E4               [12] 1639 	clr	a
      00028E C0 E0            [24] 1640 	push	acc
      000290 74 08            [12] 1641 	mov	a,#0x08
      000292 C0 E0            [24] 1642 	push	acc
      000294 E4               [12] 1643 	clr	a
      000295 C0 E0            [24] 1644 	push	acc
      000297 74 08            [12] 1645 	mov	a,#0x08
      000299 C0 E0            [24] 1646 	push	acc
      00029B E4               [12] 1647 	clr	a
      00029C C0 E0            [24] 1648 	push	acc
      00029E 74 08            [12] 1649 	mov	a,#0x08
      0002A0 C0 E0            [24] 1650 	push	acc
      0002A2 E4               [12] 1651 	clr	a
      0002A3 C0 E0            [24] 1652 	push	acc
      0002A5 74 6E            [12] 1653 	mov	a,#___str_1
      0002A7 C0 E0            [24] 1654 	push	acc
      0002A9 74 18            [12] 1655 	mov	a,#(___str_1 >> 8)
      0002AB C0 E0            [24] 1656 	push	acc
      0002AD 74 80            [12] 1657 	mov	a,#0x80
      0002AF C0 E0            [24] 1658 	push	acc
      0002B1 12 01 1C         [24] 1659 	lcall	_lcd_print
      0002B4 E5 81            [12] 1660 	mov	a,sp
      0002B6 24 F3            [12] 1661 	add	a,#0xf3
      0002B8 F5 81            [12] 1662 	mov	sp,a
                           0001FA  1663 	C$i2c.h$160$1$81 ==.
                                   1664 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:160: delay_time(500000);	//Add 20ms delay before reading i2c in loop
      0002BA 90 A1 20         [24] 1665 	mov	dptr,#0xA120
      0002BD 75 F0 07         [24] 1666 	mov	b,#0x07
      0002C0 E4               [12] 1667 	clr	a
      0002C1 12 03 CD         [24] 1668 	lcall	_delay_time
      0002C4 D0 05            [24] 1669 	pop	ar5
      0002C6 D0 06            [24] 1670 	pop	ar6
                           000208  1671 	C$i2c.h$164$1$81 ==.
                                   1672 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:164: for(i=0; i<5; i++)
      0002C8 7F 00            [12] 1673 	mov	r7,#0x00
                           00020A  1674 	C$i2c.h$166$3$84 ==.
                                   1675 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:166: while(((key=read_keypad()) == -1) || (key == '*'))delay_time(10000);
      0002CA                       1676 00104$:
      0002CA C0 07            [24] 1677 	push	ar7
      0002CC C0 06            [24] 1678 	push	ar6
      0002CE C0 05            [24] 1679 	push	ar5
      0002D0 12 01 DA         [24] 1680 	lcall	_read_keypad
      0002D3 AC 82            [24] 1681 	mov	r4,dpl
      0002D5 D0 05            [24] 1682 	pop	ar5
      0002D7 D0 06            [24] 1683 	pop	ar6
      0002D9 D0 07            [24] 1684 	pop	ar7
      0002DB 8C 03            [24] 1685 	mov	ar3,r4
      0002DD BC FF 02         [24] 1686 	cjne	r4,#0xFF,00146$
      0002E0 80 03            [24] 1687 	sjmp	00105$
      0002E2                       1688 00146$:
      0002E2 BB 2A 17         [24] 1689 	cjne	r3,#0x2A,00106$
      0002E5                       1690 00105$:
      0002E5 90 27 10         [24] 1691 	mov	dptr,#0x2710
      0002E8 E4               [12] 1692 	clr	a
      0002E9 F5 F0            [12] 1693 	mov	b,a
      0002EB C0 07            [24] 1694 	push	ar7
      0002ED C0 06            [24] 1695 	push	ar6
      0002EF C0 05            [24] 1696 	push	ar5
      0002F1 12 03 CD         [24] 1697 	lcall	_delay_time
      0002F4 D0 05            [24] 1698 	pop	ar5
      0002F6 D0 06            [24] 1699 	pop	ar6
      0002F8 D0 07            [24] 1700 	pop	ar7
      0002FA 80 CE            [24] 1701 	sjmp	00104$
      0002FC                       1702 00106$:
                           00023C  1703 	C$i2c.h$167$2$82 ==.
                                   1704 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:167: if(key == '#')
      0002FC BB 23 2A         [24] 1705 	cjne	r3,#0x23,00114$
                           00023F  1706 	C$i2c.h$169$3$83 ==.
                                   1707 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:169: while(read_keypad() == '#')delay_time(10000);
      0002FF                       1708 00107$:
      0002FF C0 06            [24] 1709 	push	ar6
      000301 C0 05            [24] 1710 	push	ar5
      000303 12 01 DA         [24] 1711 	lcall	_read_keypad
      000306 AC 82            [24] 1712 	mov	r4,dpl
      000308 D0 05            [24] 1713 	pop	ar5
      00030A D0 06            [24] 1714 	pop	ar6
      00030C BC 23 13         [24] 1715 	cjne	r4,#0x23,00109$
      00030F 90 27 10         [24] 1716 	mov	dptr,#0x2710
      000312 E4               [12] 1717 	clr	a
      000313 F5 F0            [12] 1718 	mov	b,a
      000315 C0 06            [24] 1719 	push	ar6
      000317 C0 05            [24] 1720 	push	ar5
      000319 12 03 CD         [24] 1721 	lcall	_delay_time
      00031C D0 05            [24] 1722 	pop	ar5
      00031E D0 06            [24] 1723 	pop	ar6
      000320 80 DD            [24] 1724 	sjmp	00107$
      000322                       1725 00109$:
                           000262  1726 	C$i2c.h$170$3$83 ==.
                                   1727 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:170: return sum;
      000322 8D 82            [24] 1728 	mov	dpl,r5
      000324 8E 83            [24] 1729 	mov	dph,r6
      000326 02 03 CC         [24] 1730 	ljmp	00119$
      000329                       1731 00114$:
                           000269  1732 	C$i2c.h$174$3$84 ==.
                                   1733 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:174: lcd_print("%c", key);
      000329 EB               [12] 1734 	mov	a,r3
      00032A FA               [12] 1735 	mov	r2,a
      00032B 33               [12] 1736 	rlc	a
      00032C 95 E0            [12] 1737 	subb	a,acc
      00032E FC               [12] 1738 	mov	r4,a
      00032F C0 07            [24] 1739 	push	ar7
      000331 C0 06            [24] 1740 	push	ar6
      000333 C0 05            [24] 1741 	push	ar5
      000335 C0 04            [24] 1742 	push	ar4
      000337 C0 03            [24] 1743 	push	ar3
      000339 C0 02            [24] 1744 	push	ar2
      00033B C0 02            [24] 1745 	push	ar2
      00033D C0 04            [24] 1746 	push	ar4
      00033F 74 7E            [12] 1747 	mov	a,#___str_2
      000341 C0 E0            [24] 1748 	push	acc
      000343 74 18            [12] 1749 	mov	a,#(___str_2 >> 8)
      000345 C0 E0            [24] 1750 	push	acc
      000347 74 80            [12] 1751 	mov	a,#0x80
      000349 C0 E0            [24] 1752 	push	acc
      00034B 12 01 1C         [24] 1753 	lcall	_lcd_print
      00034E E5 81            [12] 1754 	mov	a,sp
      000350 24 FB            [12] 1755 	add	a,#0xfb
      000352 F5 81            [12] 1756 	mov	sp,a
      000354 D0 02            [24] 1757 	pop	ar2
      000356 D0 03            [24] 1758 	pop	ar3
      000358 D0 04            [24] 1759 	pop	ar4
      00035A D0 05            [24] 1760 	pop	ar5
      00035C D0 06            [24] 1761 	pop	ar6
                           00029E  1762 	C$i2c.h$175$1$81 ==.
                                   1763 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:175: sum = sum*10 + key - '0';
      00035E 8D 11            [24] 1764 	mov	__mulint_PARM_2,r5
      000360 8E 12            [24] 1765 	mov	(__mulint_PARM_2 + 1),r6
      000362 90 00 0A         [24] 1766 	mov	dptr,#0x000A
      000365 C0 04            [24] 1767 	push	ar4
      000367 C0 03            [24] 1768 	push	ar3
      000369 C0 02            [24] 1769 	push	ar2
      00036B 12 0E 11         [24] 1770 	lcall	__mulint
      00036E A8 82            [24] 1771 	mov	r0,dpl
      000370 A9 83            [24] 1772 	mov	r1,dph
      000372 D0 02            [24] 1773 	pop	ar2
      000374 D0 03            [24] 1774 	pop	ar3
      000376 D0 04            [24] 1775 	pop	ar4
      000378 D0 07            [24] 1776 	pop	ar7
      00037A EA               [12] 1777 	mov	a,r2
      00037B 28               [12] 1778 	add	a,r0
      00037C F8               [12] 1779 	mov	r0,a
      00037D EC               [12] 1780 	mov	a,r4
      00037E 39               [12] 1781 	addc	a,r1
      00037F F9               [12] 1782 	mov	r1,a
      000380 E8               [12] 1783 	mov	a,r0
      000381 24 D0            [12] 1784 	add	a,#0xD0
      000383 FD               [12] 1785 	mov	r5,a
      000384 E9               [12] 1786 	mov	a,r1
      000385 34 FF            [12] 1787 	addc	a,#0xFF
      000387 FE               [12] 1788 	mov	r6,a
                           0002C8  1789 	C$i2c.h$176$3$84 ==.
                                   1790 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:176: while(read_keypad() == key)delay_time(10000); //wait for key to be released
      000388                       1791 00110$:
      000388 C0 07            [24] 1792 	push	ar7
      00038A C0 06            [24] 1793 	push	ar6
      00038C C0 05            [24] 1794 	push	ar5
      00038E C0 03            [24] 1795 	push	ar3
      000390 12 01 DA         [24] 1796 	lcall	_read_keypad
      000393 AC 82            [24] 1797 	mov	r4,dpl
      000395 D0 03            [24] 1798 	pop	ar3
      000397 D0 05            [24] 1799 	pop	ar5
      000399 D0 06            [24] 1800 	pop	ar6
      00039B D0 07            [24] 1801 	pop	ar7
      00039D EC               [12] 1802 	mov	a,r4
      00039E B5 03 1B         [24] 1803 	cjne	a,ar3,00118$
      0003A1 90 27 10         [24] 1804 	mov	dptr,#0x2710
      0003A4 E4               [12] 1805 	clr	a
      0003A5 F5 F0            [12] 1806 	mov	b,a
      0003A7 C0 07            [24] 1807 	push	ar7
      0003A9 C0 06            [24] 1808 	push	ar6
      0003AB C0 05            [24] 1809 	push	ar5
      0003AD C0 03            [24] 1810 	push	ar3
      0003AF 12 03 CD         [24] 1811 	lcall	_delay_time
      0003B2 D0 03            [24] 1812 	pop	ar3
      0003B4 D0 05            [24] 1813 	pop	ar5
      0003B6 D0 06            [24] 1814 	pop	ar6
      0003B8 D0 07            [24] 1815 	pop	ar7
      0003BA 80 CC            [24] 1816 	sjmp	00110$
      0003BC                       1817 00118$:
                           0002FC  1818 	C$i2c.h$164$1$81 ==.
                                   1819 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:164: for(i=0; i<5; i++)
      0003BC 0F               [12] 1820 	inc	r7
      0003BD C3               [12] 1821 	clr	c
      0003BE EF               [12] 1822 	mov	a,r7
      0003BF 64 80            [12] 1823 	xrl	a,#0x80
      0003C1 94 85            [12] 1824 	subb	a,#0x85
      0003C3 50 03            [24] 1825 	jnc	00155$
      0003C5 02 02 CA         [24] 1826 	ljmp	00104$
      0003C8                       1827 00155$:
                           000308  1828 	C$i2c.h$179$1$81 ==.
                                   1829 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:179: return sum;
      0003C8 8D 82            [24] 1830 	mov	dpl,r5
      0003CA 8E 83            [24] 1831 	mov	dph,r6
      0003CC                       1832 00119$:
                           00030C  1833 	C$i2c.h$180$1$81 ==.
                           00030C  1834 	XG$kpd_input$0$0 ==.
      0003CC 22               [24] 1835 	ret
                                   1836 ;------------------------------------------------------------
                                   1837 ;Allocation info for local variables in function 'delay_time'
                                   1838 ;------------------------------------------------------------
                                   1839 ;time_end                  Allocated to registers r4 r5 r6 r7 
                                   1840 ;index                     Allocated to registers 
                                   1841 ;------------------------------------------------------------
                           00030D  1842 	G$delay_time$0$0 ==.
                           00030D  1843 	C$i2c.h$189$1$81 ==.
                                   1844 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:189: void delay_time (unsigned long time_end)
                                   1845 ;	-----------------------------------------
                                   1846 ;	 function delay_time
                                   1847 ;	-----------------------------------------
      0003CD                       1848 _delay_time:
      0003CD AC 82            [24] 1849 	mov	r4,dpl
      0003CF AD 83            [24] 1850 	mov	r5,dph
      0003D1 AE F0            [24] 1851 	mov	r6,b
      0003D3 FF               [12] 1852 	mov	r7,a
                           000314  1853 	C$i2c.h$192$1$86 ==.
                                   1854 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:192: for (index = 0; index < time_end; index++); //for loop delay
      0003D4 78 00            [12] 1855 	mov	r0,#0x00
      0003D6 79 00            [12] 1856 	mov	r1,#0x00
      0003D8 7A 00            [12] 1857 	mov	r2,#0x00
      0003DA 7B 00            [12] 1858 	mov	r3,#0x00
      0003DC                       1859 00103$:
      0003DC C3               [12] 1860 	clr	c
      0003DD E8               [12] 1861 	mov	a,r0
      0003DE 9C               [12] 1862 	subb	a,r4
      0003DF E9               [12] 1863 	mov	a,r1
      0003E0 9D               [12] 1864 	subb	a,r5
      0003E1 EA               [12] 1865 	mov	a,r2
      0003E2 9E               [12] 1866 	subb	a,r6
      0003E3 EB               [12] 1867 	mov	a,r3
      0003E4 9F               [12] 1868 	subb	a,r7
      0003E5 50 0F            [24] 1869 	jnc	00105$
      0003E7 08               [12] 1870 	inc	r0
      0003E8 B8 00 09         [24] 1871 	cjne	r0,#0x00,00115$
      0003EB 09               [12] 1872 	inc	r1
      0003EC B9 00 05         [24] 1873 	cjne	r1,#0x00,00115$
      0003EF 0A               [12] 1874 	inc	r2
      0003F0 BA 00 E9         [24] 1875 	cjne	r2,#0x00,00103$
      0003F3 0B               [12] 1876 	inc	r3
      0003F4                       1877 00115$:
      0003F4 80 E6            [24] 1878 	sjmp	00103$
      0003F6                       1879 00105$:
                           000336  1880 	C$i2c.h$193$1$86 ==.
                           000336  1881 	XG$delay_time$0$0 ==.
      0003F6 22               [24] 1882 	ret
                                   1883 ;------------------------------------------------------------
                                   1884 ;Allocation info for local variables in function 'i2c_start'
                                   1885 ;------------------------------------------------------------
                           000337  1886 	G$i2c_start$0$0 ==.
                           000337  1887 	C$i2c.h$196$1$86 ==.
                                   1888 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:196: void i2c_start(void)
                                   1889 ;	-----------------------------------------
                                   1890 ;	 function i2c_start
                                   1891 ;	-----------------------------------------
      0003F7                       1892 _i2c_start:
                           000337  1893 	C$i2c.h$198$1$88 ==.
                                   1894 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:198: while(BUSY);              //Wait until SMBus0 is free
      0003F7                       1895 00101$:
      0003F7 20 C7 FD         [24] 1896 	jb	_BUSY,00101$
                           00033A  1897 	C$i2c.h$199$1$88 ==.
                                   1898 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:199: STA = 1;                  //Set Start Bit
      0003FA D2 C5            [12] 1899 	setb	_STA
                           00033C  1900 	C$i2c.h$200$1$88 ==.
                                   1901 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:200: while(!SI);               //Wait until start sent
      0003FC                       1902 00104$:
      0003FC 30 C3 FD         [24] 1903 	jnb	_SI,00104$
                           00033F  1904 	C$i2c.h$201$1$88 ==.
                                   1905 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:201: STA = 0;                  //Clear start bit
      0003FF C2 C5            [12] 1906 	clr	_STA
                           000341  1907 	C$i2c.h$202$1$88 ==.
                                   1908 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:202: SI = 0;                   //Clear SI
      000401 C2 C3            [12] 1909 	clr	_SI
                           000343  1910 	C$i2c.h$203$1$88 ==.
                           000343  1911 	XG$i2c_start$0$0 ==.
      000403 22               [24] 1912 	ret
                                   1913 ;------------------------------------------------------------
                                   1914 ;Allocation info for local variables in function 'i2c_write'
                                   1915 ;------------------------------------------------------------
                                   1916 ;output_data               Allocated to registers 
                                   1917 ;------------------------------------------------------------
                           000344  1918 	G$i2c_write$0$0 ==.
                           000344  1919 	C$i2c.h$206$1$88 ==.
                                   1920 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:206: void i2c_write(unsigned char output_data)
                                   1921 ;	-----------------------------------------
                                   1922 ;	 function i2c_write
                                   1923 ;	-----------------------------------------
      000404                       1924 _i2c_write:
      000404 85 82 C2         [24] 1925 	mov	_SMB0DAT,dpl
                           000347  1926 	C$i2c.h$209$1$90 ==.
                                   1927 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:209: while(!SI);               //Wait until send is complete
      000407                       1928 00101$:
                           000347  1929 	C$i2c.h$210$1$90 ==.
                                   1930 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:210: SI = 0;                   //Clear SI
      000407 10 C3 02         [24] 1931 	jbc	_SI,00112$
      00040A 80 FB            [24] 1932 	sjmp	00101$
      00040C                       1933 00112$:
                           00034C  1934 	C$i2c.h$211$1$90 ==.
                           00034C  1935 	XG$i2c_write$0$0 ==.
      00040C 22               [24] 1936 	ret
                                   1937 ;------------------------------------------------------------
                                   1938 ;Allocation info for local variables in function 'i2c_write_and_stop'
                                   1939 ;------------------------------------------------------------
                                   1940 ;output_data               Allocated to registers 
                                   1941 ;------------------------------------------------------------
                           00034D  1942 	G$i2c_write_and_stop$0$0 ==.
                           00034D  1943 	C$i2c.h$214$1$90 ==.
                                   1944 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:214: void i2c_write_and_stop(unsigned char output_data)
                                   1945 ;	-----------------------------------------
                                   1946 ;	 function i2c_write_and_stop
                                   1947 ;	-----------------------------------------
      00040D                       1948 _i2c_write_and_stop:
      00040D 85 82 C2         [24] 1949 	mov	_SMB0DAT,dpl
                           000350  1950 	C$i2c.h$217$1$92 ==.
                                   1951 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:217: STO = 1;                  //Set stop bit
      000410 D2 C4            [12] 1952 	setb	_STO
                           000352  1953 	C$i2c.h$218$1$92 ==.
                                   1954 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:218: while(!SI);               //Wait until send is complete
      000412                       1955 00101$:
                           000352  1956 	C$i2c.h$219$1$92 ==.
                                   1957 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:219: SI = 0;                   //clear SI
      000412 10 C3 02         [24] 1958 	jbc	_SI,00112$
      000415 80 FB            [24] 1959 	sjmp	00101$
      000417                       1960 00112$:
                           000357  1961 	C$i2c.h$220$1$92 ==.
                           000357  1962 	XG$i2c_write_and_stop$0$0 ==.
      000417 22               [24] 1963 	ret
                                   1964 ;------------------------------------------------------------
                                   1965 ;Allocation info for local variables in function 'i2c_read'
                                   1966 ;------------------------------------------------------------
                                   1967 ;input_data                Allocated to registers 
                                   1968 ;------------------------------------------------------------
                           000358  1969 	G$i2c_read$0$0 ==.
                           000358  1970 	C$i2c.h$223$1$92 ==.
                                   1971 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:223: unsigned char i2c_read(void)
                                   1972 ;	-----------------------------------------
                                   1973 ;	 function i2c_read
                                   1974 ;	-----------------------------------------
      000418                       1975 _i2c_read:
                           000358  1976 	C$i2c.h$226$1$94 ==.
                                   1977 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:226: while(!SI);                //Wait until we have data to read
      000418                       1978 00101$:
      000418 30 C3 FD         [24] 1979 	jnb	_SI,00101$
                           00035B  1980 	C$i2c.h$227$1$94 ==.
                                   1981 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:227: input_data = SMB0DAT;      //Read the data
      00041B 85 C2 82         [24] 1982 	mov	dpl,_SMB0DAT
                           00035E  1983 	C$i2c.h$228$1$94 ==.
                                   1984 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:228: SI = 0;                    //Clear SI
      00041E C2 C3            [12] 1985 	clr	_SI
                           000360  1986 	C$i2c.h$229$1$94 ==.
                                   1987 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:229: return input_data;         //Return the read data
                           000360  1988 	C$i2c.h$230$1$94 ==.
                           000360  1989 	XG$i2c_read$0$0 ==.
      000420 22               [24] 1990 	ret
                                   1991 ;------------------------------------------------------------
                                   1992 ;Allocation info for local variables in function 'i2c_read_and_stop'
                                   1993 ;------------------------------------------------------------
                                   1994 ;input_data                Allocated to registers r7 
                                   1995 ;------------------------------------------------------------
                           000361  1996 	G$i2c_read_and_stop$0$0 ==.
                           000361  1997 	C$i2c.h$233$1$94 ==.
                                   1998 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:233: unsigned char i2c_read_and_stop(void)
                                   1999 ;	-----------------------------------------
                                   2000 ;	 function i2c_read_and_stop
                                   2001 ;	-----------------------------------------
      000421                       2002 _i2c_read_and_stop:
                           000361  2003 	C$i2c.h$236$1$96 ==.
                                   2004 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:236: while(!SI);                //Wait until we have data to read
      000421                       2005 00101$:
      000421 30 C3 FD         [24] 2006 	jnb	_SI,00101$
                           000364  2007 	C$i2c.h$237$1$96 ==.
                                   2008 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:237: input_data = SMB0DAT;      //Read the data
      000424 AF C2            [24] 2009 	mov	r7,_SMB0DAT
                           000366  2010 	C$i2c.h$238$1$96 ==.
                                   2011 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:238: SI = 0;                    //Clear SI
      000426 C2 C3            [12] 2012 	clr	_SI
                           000368  2013 	C$i2c.h$239$1$96 ==.
                                   2014 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:239: STO = 1;                   //Set stop bit
      000428 D2 C4            [12] 2015 	setb	_STO
                           00036A  2016 	C$i2c.h$240$1$96 ==.
                                   2017 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:240: while(!SI);                //Wait for stop
      00042A                       2018 00104$:
                           00036A  2019 	C$i2c.h$241$1$96 ==.
                                   2020 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:241: SI = 0;
      00042A 10 C3 02         [24] 2021 	jbc	_SI,00122$
      00042D 80 FB            [24] 2022 	sjmp	00104$
      00042F                       2023 00122$:
                           00036F  2024 	C$i2c.h$242$1$96 ==.
                                   2025 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:242: return input_data;         //Return the read data
      00042F 8F 82            [24] 2026 	mov	dpl,r7
                           000371  2027 	C$i2c.h$243$1$96 ==.
                           000371  2028 	XG$i2c_read_and_stop$0$0 ==.
      000431 22               [24] 2029 	ret
                                   2030 ;------------------------------------------------------------
                                   2031 ;Allocation info for local variables in function 'i2c_write_data'
                                   2032 ;------------------------------------------------------------
                                   2033 ;start_reg                 Allocated with name '_i2c_write_data_PARM_2'
                                   2034 ;buffer                    Allocated with name '_i2c_write_data_PARM_3'
                                   2035 ;num_bytes                 Allocated with name '_i2c_write_data_PARM_4'
                                   2036 ;addr                      Allocated to registers r7 
                                   2037 ;i                         Allocated to registers 
                                   2038 ;------------------------------------------------------------
                           000372  2039 	G$i2c_write_data$0$0 ==.
                           000372  2040 	C$i2c.h$246$1$96 ==.
                                   2041 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:246: void i2c_write_data(unsigned char addr, unsigned char start_reg, unsigned char *buffer, unsigned char num_bytes)
                                   2042 ;	-----------------------------------------
                                   2043 ;	 function i2c_write_data
                                   2044 ;	-----------------------------------------
      000432                       2045 _i2c_write_data:
      000432 AF 82            [24] 2046 	mov	r7,dpl
                           000374  2047 	C$i2c.h$250$1$98 ==.
                                   2048 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:250: i2c_start();               //initiate I2C transfer
      000434 C0 07            [24] 2049 	push	ar7
      000436 12 03 F7         [24] 2050 	lcall	_i2c_start
      000439 D0 07            [24] 2051 	pop	ar7
                           00037B  2052 	C$i2c.h$251$1$98 ==.
                                   2053 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:251: i2c_write(addr & ~0x01);   //write the desired address to the bus
      00043B 74 FE            [12] 2054 	mov	a,#0xFE
      00043D 5F               [12] 2055 	anl	a,r7
      00043E F5 82            [12] 2056 	mov	dpl,a
      000440 12 04 04         [24] 2057 	lcall	_i2c_write
                           000383  2058 	C$i2c.h$252$1$98 ==.
                                   2059 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:252: i2c_write(start_reg);      //write the start register to the bus
      000443 85 27 82         [24] 2060 	mov	dpl,_i2c_write_data_PARM_2
      000446 12 04 04         [24] 2061 	lcall	_i2c_write
                           000389  2062 	C$i2c.h$253$1$98 ==.
                                   2063 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:253: for(i=0; i<num_bytes-1; i++) //write the data to the register(s)
      000449 7F 00            [12] 2064 	mov	r7,#0x00
      00044B                       2065 00103$:
      00044B AD 2B            [24] 2066 	mov	r5,_i2c_write_data_PARM_4
      00044D 7E 00            [12] 2067 	mov	r6,#0x00
      00044F 1D               [12] 2068 	dec	r5
      000450 BD FF 01         [24] 2069 	cjne	r5,#0xFF,00114$
      000453 1E               [12] 2070 	dec	r6
      000454                       2071 00114$:
      000454 8F 03            [24] 2072 	mov	ar3,r7
      000456 7C 00            [12] 2073 	mov	r4,#0x00
      000458 C3               [12] 2074 	clr	c
      000459 EB               [12] 2075 	mov	a,r3
      00045A 9D               [12] 2076 	subb	a,r5
      00045B EC               [12] 2077 	mov	a,r4
      00045C 64 80            [12] 2078 	xrl	a,#0x80
      00045E 8E F0            [24] 2079 	mov	b,r6
      000460 63 F0 80         [24] 2080 	xrl	b,#0x80
      000463 95 F0            [12] 2081 	subb	a,b
      000465 50 1F            [24] 2082 	jnc	00101$
                           0003A7  2083 	C$i2c.h$254$1$98 ==.
                                   2084 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:254: i2c_write(buffer[i]);
      000467 EF               [12] 2085 	mov	a,r7
      000468 25 28            [12] 2086 	add	a,_i2c_write_data_PARM_3
      00046A FC               [12] 2087 	mov	r4,a
      00046B E4               [12] 2088 	clr	a
      00046C 35 29            [12] 2089 	addc	a,(_i2c_write_data_PARM_3 + 1)
      00046E FD               [12] 2090 	mov	r5,a
      00046F AE 2A            [24] 2091 	mov	r6,(_i2c_write_data_PARM_3 + 2)
      000471 8C 82            [24] 2092 	mov	dpl,r4
      000473 8D 83            [24] 2093 	mov	dph,r5
      000475 8E F0            [24] 2094 	mov	b,r6
      000477 12 17 73         [24] 2095 	lcall	__gptrget
      00047A F5 82            [12] 2096 	mov	dpl,a
      00047C C0 07            [24] 2097 	push	ar7
      00047E 12 04 04         [24] 2098 	lcall	_i2c_write
      000481 D0 07            [24] 2099 	pop	ar7
                           0003C3  2100 	C$i2c.h$253$1$98 ==.
                                   2101 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:253: for(i=0; i<num_bytes-1; i++) //write the data to the register(s)
      000483 0F               [12] 2102 	inc	r7
      000484 80 C5            [24] 2103 	sjmp	00103$
      000486                       2104 00101$:
                           0003C6  2105 	C$i2c.h$255$1$98 ==.
                                   2106 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:255: i2c_write_and_stop(buffer[num_bytes-1]); //Stop transfer
      000486 AE 2B            [24] 2107 	mov	r6,_i2c_write_data_PARM_4
      000488 7F 00            [12] 2108 	mov	r7,#0x00
      00048A 1E               [12] 2109 	dec	r6
      00048B BE FF 01         [24] 2110 	cjne	r6,#0xFF,00116$
      00048E 1F               [12] 2111 	dec	r7
      00048F                       2112 00116$:
      00048F EE               [12] 2113 	mov	a,r6
      000490 25 28            [12] 2114 	add	a,_i2c_write_data_PARM_3
      000492 FE               [12] 2115 	mov	r6,a
      000493 EF               [12] 2116 	mov	a,r7
      000494 35 29            [12] 2117 	addc	a,(_i2c_write_data_PARM_3 + 1)
      000496 FF               [12] 2118 	mov	r7,a
      000497 AD 2A            [24] 2119 	mov	r5,(_i2c_write_data_PARM_3 + 2)
      000499 8E 82            [24] 2120 	mov	dpl,r6
      00049B 8F 83            [24] 2121 	mov	dph,r7
      00049D 8D F0            [24] 2122 	mov	b,r5
      00049F 12 17 73         [24] 2123 	lcall	__gptrget
      0004A2 F5 82            [12] 2124 	mov	dpl,a
      0004A4 12 04 0D         [24] 2125 	lcall	_i2c_write_and_stop
                           0003E7  2126 	C$i2c.h$256$1$98 ==.
                           0003E7  2127 	XG$i2c_write_data$0$0 ==.
      0004A7 22               [24] 2128 	ret
                                   2129 ;------------------------------------------------------------
                                   2130 ;Allocation info for local variables in function 'i2c_read_data'
                                   2131 ;------------------------------------------------------------
                                   2132 ;start_reg                 Allocated with name '_i2c_read_data_PARM_2'
                                   2133 ;buffer                    Allocated with name '_i2c_read_data_PARM_3'
                                   2134 ;num_bytes                 Allocated with name '_i2c_read_data_PARM_4'
                                   2135 ;addr                      Allocated to registers r7 
                                   2136 ;j                         Allocated to registers 
                                   2137 ;------------------------------------------------------------
                           0003E8  2138 	G$i2c_read_data$0$0 ==.
                           0003E8  2139 	C$i2c.h$259$1$98 ==.
                                   2140 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:259: void i2c_read_data(unsigned char addr, unsigned char start_reg, unsigned char *buffer, unsigned char num_bytes)
                                   2141 ;	-----------------------------------------
                                   2142 ;	 function i2c_read_data
                                   2143 ;	-----------------------------------------
      0004A8                       2144 _i2c_read_data:
      0004A8 AF 82            [24] 2145 	mov	r7,dpl
                           0003EA  2146 	C$i2c.h$262$1$100 ==.
                                   2147 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:262: i2c_start();               //Start I2C transfer
      0004AA C0 07            [24] 2148 	push	ar7
      0004AC 12 03 F7         [24] 2149 	lcall	_i2c_start
      0004AF D0 07            [24] 2150 	pop	ar7
                           0003F1  2151 	C$i2c.h$263$1$100 ==.
                                   2152 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:263: i2c_write(addr & ~0x01);   //Write address of device that will be written to, send 0
      0004B1 8F 06            [24] 2153 	mov	ar6,r7
      0004B3 74 FE            [12] 2154 	mov	a,#0xFE
      0004B5 5E               [12] 2155 	anl	a,r6
      0004B6 F5 82            [12] 2156 	mov	dpl,a
      0004B8 C0 07            [24] 2157 	push	ar7
      0004BA 12 04 04         [24] 2158 	lcall	_i2c_write
                           0003FD  2159 	C$i2c.h$264$1$100 ==.
                                   2160 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:264: i2c_write_and_stop(start_reg); //Write & stop the 1st register to be read
      0004BD 85 2C 82         [24] 2161 	mov	dpl,_i2c_read_data_PARM_2
      0004C0 12 04 0D         [24] 2162 	lcall	_i2c_write_and_stop
                           000403  2163 	C$i2c.h$265$1$100 ==.
                                   2164 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:265: i2c_start();               //Start I2C transfer
      0004C3 12 03 F7         [24] 2165 	lcall	_i2c_start
      0004C6 D0 07            [24] 2166 	pop	ar7
                           000408  2167 	C$i2c.h$266$1$100 ==.
                                   2168 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:266: i2c_write(addr | 0x01);    //Write address again, this time indicating a read operation
      0004C8 74 01            [12] 2169 	mov	a,#0x01
      0004CA 4F               [12] 2170 	orl	a,r7
      0004CB F5 82            [12] 2171 	mov	dpl,a
      0004CD 12 04 04         [24] 2172 	lcall	_i2c_write
                           000410  2173 	C$i2c.h$267$1$100 ==.
                                   2174 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:267: for(j = 0; j < num_bytes - 1; j++)
      0004D0 7F 00            [12] 2175 	mov	r7,#0x00
      0004D2                       2176 00103$:
      0004D2 AD 30            [24] 2177 	mov	r5,_i2c_read_data_PARM_4
      0004D4 7E 00            [12] 2178 	mov	r6,#0x00
      0004D6 1D               [12] 2179 	dec	r5
      0004D7 BD FF 01         [24] 2180 	cjne	r5,#0xFF,00114$
      0004DA 1E               [12] 2181 	dec	r6
      0004DB                       2182 00114$:
      0004DB 8F 03            [24] 2183 	mov	ar3,r7
      0004DD 7C 00            [12] 2184 	mov	r4,#0x00
      0004DF C3               [12] 2185 	clr	c
      0004E0 EB               [12] 2186 	mov	a,r3
      0004E1 9D               [12] 2187 	subb	a,r5
      0004E2 EC               [12] 2188 	mov	a,r4
      0004E3 64 80            [12] 2189 	xrl	a,#0x80
      0004E5 8E F0            [24] 2190 	mov	b,r6
      0004E7 63 F0 80         [24] 2191 	xrl	b,#0x80
      0004EA 95 F0            [12] 2192 	subb	a,b
      0004EC 50 2E            [24] 2193 	jnc	00101$
                           00042E  2194 	C$i2c.h$269$2$101 ==.
                                   2195 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:269: AA = 1;                //Set acknowledge bit
      0004EE D2 C2            [12] 2196 	setb	_AA
                           000430  2197 	C$i2c.h$270$2$101 ==.
                                   2198 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:270: buffer[j] = i2c_read();//Read data, save it in buffer
      0004F0 EF               [12] 2199 	mov	a,r7
      0004F1 25 2D            [12] 2200 	add	a,_i2c_read_data_PARM_3
      0004F3 FC               [12] 2201 	mov	r4,a
      0004F4 E4               [12] 2202 	clr	a
      0004F5 35 2E            [12] 2203 	addc	a,(_i2c_read_data_PARM_3 + 1)
      0004F7 FD               [12] 2204 	mov	r5,a
      0004F8 AE 2F            [24] 2205 	mov	r6,(_i2c_read_data_PARM_3 + 2)
      0004FA C0 07            [24] 2206 	push	ar7
      0004FC C0 06            [24] 2207 	push	ar6
      0004FE C0 05            [24] 2208 	push	ar5
      000500 C0 04            [24] 2209 	push	ar4
      000502 12 04 18         [24] 2210 	lcall	_i2c_read
      000505 AB 82            [24] 2211 	mov	r3,dpl
      000507 D0 04            [24] 2212 	pop	ar4
      000509 D0 05            [24] 2213 	pop	ar5
      00050B D0 06            [24] 2214 	pop	ar6
      00050D D0 07            [24] 2215 	pop	ar7
      00050F 8C 82            [24] 2216 	mov	dpl,r4
      000511 8D 83            [24] 2217 	mov	dph,r5
      000513 8E F0            [24] 2218 	mov	b,r6
      000515 EB               [12] 2219 	mov	a,r3
      000516 12 0D C6         [24] 2220 	lcall	__gptrput
                           000459  2221 	C$i2c.h$267$1$100 ==.
                                   2222 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:267: for(j = 0; j < num_bytes - 1; j++)
      000519 0F               [12] 2223 	inc	r7
      00051A 80 B6            [24] 2224 	sjmp	00103$
      00051C                       2225 00101$:
                           00045C  2226 	C$i2c.h$272$1$100 ==.
                                   2227 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:272: AA = 0;
      00051C C2 C2            [12] 2228 	clr	_AA
                           00045E  2229 	C$i2c.h$273$1$100 ==.
                                   2230 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:273: buffer[num_bytes - 1] = i2c_read_and_stop(); //Read the last byte and stop, save it in the buffer
      00051E AE 30            [24] 2231 	mov	r6,_i2c_read_data_PARM_4
      000520 7F 00            [12] 2232 	mov	r7,#0x00
      000522 1E               [12] 2233 	dec	r6
      000523 BE FF 01         [24] 2234 	cjne	r6,#0xFF,00116$
      000526 1F               [12] 2235 	dec	r7
      000527                       2236 00116$:
      000527 EE               [12] 2237 	mov	a,r6
      000528 25 2D            [12] 2238 	add	a,_i2c_read_data_PARM_3
      00052A FE               [12] 2239 	mov	r6,a
      00052B EF               [12] 2240 	mov	a,r7
      00052C 35 2E            [12] 2241 	addc	a,(_i2c_read_data_PARM_3 + 1)
      00052E FF               [12] 2242 	mov	r7,a
      00052F AD 2F            [24] 2243 	mov	r5,(_i2c_read_data_PARM_3 + 2)
      000531 C0 07            [24] 2244 	push	ar7
      000533 C0 06            [24] 2245 	push	ar6
      000535 C0 05            [24] 2246 	push	ar5
      000537 12 04 21         [24] 2247 	lcall	_i2c_read_and_stop
      00053A AC 82            [24] 2248 	mov	r4,dpl
      00053C D0 05            [24] 2249 	pop	ar5
      00053E D0 06            [24] 2250 	pop	ar6
      000540 D0 07            [24] 2251 	pop	ar7
      000542 8E 82            [24] 2252 	mov	dpl,r6
      000544 8F 83            [24] 2253 	mov	dph,r7
      000546 8D F0            [24] 2254 	mov	b,r5
      000548 EC               [12] 2255 	mov	a,r4
      000549 12 0D C6         [24] 2256 	lcall	__gptrput
                           00048C  2257 	C$i2c.h$274$1$100 ==.
                           00048C  2258 	XG$i2c_read_data$0$0 ==.
      00054C 22               [24] 2259 	ret
                                   2260 ;------------------------------------------------------------
                                   2261 ;Allocation info for local variables in function 'Accel_Init'
                                   2262 ;------------------------------------------------------------
                                   2263 ;Data2                     Allocated with name '_Accel_Init_Data2_1_103'
                                   2264 ;------------------------------------------------------------
                           00048D  2265 	G$Accel_Init$0$0 ==.
                           00048D  2266 	C$i2c.h$283$1$100 ==.
                                   2267 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:283: void Accel_Init(void)
                                   2268 ;	-----------------------------------------
                                   2269 ;	 function Accel_Init
                                   2270 ;	-----------------------------------------
      00054D                       2271 _Accel_Init:
                           00048D  2272 	C$i2c.h$287$1$103 ==.
                                   2273 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:287: Data2[0]=0x23;	//normal power mode, 50Hz ODR, y & x axes enabled
      00054D 75 31 23         [24] 2274 	mov	_Accel_Init_Data2_1_103,#0x23
                           000490  2275 	C$i2c.h$289$1$103 ==.
                                   2276 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:289: i2c_write_data(addr_accel, 0x20, Data2, 1);
      000550 75 28 31         [24] 2277 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      000553 75 29 00         [24] 2278 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      000556 75 2A 40         [24] 2279 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000559 75 27 20         [24] 2280 	mov	_i2c_write_data_PARM_2,#0x20
      00055C 75 2B 01         [24] 2281 	mov	_i2c_write_data_PARM_4,#0x01
      00055F 75 82 30         [24] 2282 	mov	dpl,#0x30
      000562 12 04 32         [24] 2283 	lcall	_i2c_write_data
                           0004A5  2284 	C$i2c.h$290$1$103 ==.
                                   2285 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:290: Data2[0]=0x00;	//Default - no filtering
      000565 75 31 00         [24] 2286 	mov	_Accel_Init_Data2_1_103,#0x00
                           0004A8  2287 	C$i2c.h$292$1$103 ==.
                                   2288 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:292: i2c_write_data(addr_accel, 0x21, Data2, 1);
      000568 75 28 31         [24] 2289 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      00056B 75 29 00         [24] 2290 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      00056E 75 2A 40         [24] 2291 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000571 75 27 21         [24] 2292 	mov	_i2c_write_data_PARM_2,#0x21
      000574 75 2B 01         [24] 2293 	mov	_i2c_write_data_PARM_4,#0x01
      000577 75 82 30         [24] 2294 	mov	dpl,#0x30
      00057A 12 04 32         [24] 2295 	lcall	_i2c_write_data
                           0004BD  2296 	C$i2c.h$293$1$103 ==.
                                   2297 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:293: Data2[0]=0x00;	//default - no interrupts enabled
      00057D 75 31 00         [24] 2298 	mov	_Accel_Init_Data2_1_103,#0x00
                           0004C0  2299 	C$i2c.h$294$1$103 ==.
                                   2300 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:294: i2c_write_data(addr_accel, 0x22, Data2, 1);
      000580 75 28 31         [24] 2301 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      000583 75 29 00         [24] 2302 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      000586 75 2A 40         [24] 2303 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000589 75 27 22         [24] 2304 	mov	_i2c_write_data_PARM_2,#0x22
      00058C 75 2B 01         [24] 2305 	mov	_i2c_write_data_PARM_4,#0x01
      00058F 75 82 30         [24] 2306 	mov	dpl,#0x30
      000592 12 04 32         [24] 2307 	lcall	_i2c_write_data
                           0004D5  2308 	C$i2c.h$298$1$103 ==.
                           0004D5  2309 	XG$Accel_Init$0$0 ==.
      000595 22               [24] 2310 	ret
                                   2311 ;------------------------------------------------------------
                                   2312 ;Allocation info for local variables in function 'main'
                                   2313 ;------------------------------------------------------------
                           0004D6  2314 	G$main$0$0 ==.
                           0004D6  2315 	C$lab4_m.c$77$1$103 ==.
                                   2316 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:77: void main(void)
                                   2317 ;	-----------------------------------------
                                   2318 ;	 function main
                                   2319 ;	-----------------------------------------
      000596                       2320 _main:
                           0004D6  2321 	C$lab4_m.c$83$1$122 ==.
                                   2322 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:83: Sys_Init();
      000596 12 00 F0         [24] 2323 	lcall	_Sys_Init
                           0004D9  2324 	C$lab4_m.c$84$1$122 ==.
                                   2325 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:84: putchar(' '); //the quotes in this line may not format correctly
      000599 75 82 20         [24] 2326 	mov	dpl,#0x20
      00059C 12 01 03         [24] 2327 	lcall	_putchar
                           0004DF  2328 	C$lab4_m.c$85$1$122 ==.
                                   2329 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:85: Port_Init();
      00059F 12 0A 72         [24] 2330 	lcall	_Port_Init
                           0004E2  2331 	C$lab4_m.c$86$1$122 ==.
                                   2332 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:86: XBR0_Init();
      0005A2 12 0A 94         [24] 2333 	lcall	_XBR0_Init
                           0004E5  2334 	C$lab4_m.c$87$1$122 ==.
                                   2335 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:87: PCA_Init();
      0005A5 12 0A 9E         [24] 2336 	lcall	_PCA_Init
                           0004E8  2337 	C$lab4_m.c$88$1$122 ==.
                                   2338 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:88: SMB_Init();
      0005A8 12 0A 98         [24] 2339 	lcall	_SMB_Init
                           0004EB  2340 	C$lab4_m.c$89$1$122 ==.
                                   2341 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:89: ADC_Init();
      0005AB 12 0C 12         [24] 2342 	lcall	_ADC_Init
                           0004EE  2343 	C$lab4_m.c$92$1$122 ==.
                                   2344 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:92: printf("\r\nEmbedded Control Car Calibration");
      0005AE 74 81            [12] 2345 	mov	a,#___str_3
      0005B0 C0 E0            [24] 2346 	push	acc
      0005B2 74 18            [12] 2347 	mov	a,#(___str_3 >> 8)
      0005B4 C0 E0            [24] 2348 	push	acc
      0005B6 74 80            [12] 2349 	mov	a,#0x80
      0005B8 C0 E0            [24] 2350 	push	acc
      0005BA 12 10 A2         [24] 2351 	lcall	_printf
      0005BD 15 81            [12] 2352 	dec	sp
      0005BF 15 81            [12] 2353 	dec	sp
      0005C1 15 81            [12] 2354 	dec	sp
                           000503  2355 	C$lab4_m.c$94$1$122 ==.
                                   2356 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:94: STR_PW = PW_CENTER_STR;
      0005C3 75 34 09         [24] 2357 	mov	_STR_PW,#0x09
      0005C6 75 35 0B         [24] 2358 	mov	(_STR_PW + 1),#0x0B
                           000509  2359 	C$lab4_m.c$97$1$122 ==.
                                   2360 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:97: STR_lo_to_hi= 0xFFFF - STR_PW;
      0005C9 75 32 F6         [24] 2361 	mov	_STR_lo_to_hi,#0xF6
      0005CC 75 33 F4         [24] 2362 	mov	(_STR_lo_to_hi + 1),#0xF4
                           00050F  2363 	C$lab4_m.c$98$1$122 ==.
                                   2364 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:98: PCA0CP0 = STR_lo_to_hi;
      0005CF 75 EA F6         [24] 2365 	mov	((_PCA0CP0 >> 0) & 0xFF),#0xF6
      0005D2 75 FA F4         [24] 2366 	mov	((_PCA0CP0 >> 8) & 0xFF),#0xF4
                           000515  2367 	C$lab4_m.c$100$1$122 ==.
                                   2368 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:100: MOTOR_PW = PW_NUET_DRIVE;
      0005D5 75 42 CD         [24] 2369 	mov	_MOTOR_PW,#0xCD
      0005D8 75 43 0A         [24] 2370 	mov	(_MOTOR_PW + 1),#0x0A
                           00051B  2371 	C$lab4_m.c$101$1$122 ==.
                                   2372 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:101: DRV_lo_to_hi = 0xFFFF - MOTOR_PW;
      0005DB 75 45 32         [24] 2373 	mov	_DRV_lo_to_hi,#0x32
      0005DE 75 46 F5         [24] 2374 	mov	(_DRV_lo_to_hi + 1),#0xF5
                           000521  2375 	C$lab4_m.c$102$1$122 ==.
                                   2376 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:102: PCA0CP2 = DRV_lo_to_hi;
      0005E1 75 EC 32         [24] 2377 	mov	((_PCA0CP2 >> 0) & 0xFF),#0x32
      0005E4 75 FC F5         [24] 2378 	mov	((_PCA0CP2 >> 8) & 0xFF),#0xF5
                           000527  2379 	C$lab4_m.c$104$1$122 ==.
                                   2380 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:104: count=0; //1 count = 20 milliseconds
      0005E7 E4               [12] 2381 	clr	a
      0005E8 F5 36            [12] 2382 	mov	_count,a
      0005EA F5 37            [12] 2383 	mov	(_count + 1),a
                           00052C  2384 	C$lab4_m.c$106$1$122 ==.
                                   2385 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:106: while (count < 50);
      0005EC                       2386 00101$:
      0005EC C3               [12] 2387 	clr	c
      0005ED E5 36            [12] 2388 	mov	a,_count
      0005EF 94 32            [12] 2389 	subb	a,#0x32
      0005F1 E5 37            [12] 2390 	mov	a,(_count + 1)
      0005F3 94 00            [12] 2391 	subb	a,#0x00
      0005F5 40 F5            [24] 2392 	jc	00101$
                           000537  2393 	C$lab4_m.c$111$1$122 ==.
                                   2394 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:111: printf("\r\nEmbedded Control Car ready!");
      0005F7 74 A4            [12] 2395 	mov	a,#___str_4
      0005F9 C0 E0            [24] 2396 	push	acc
      0005FB 74 18            [12] 2397 	mov	a,#(___str_4 >> 8)
      0005FD C0 E0            [24] 2398 	push	acc
      0005FF 74 80            [12] 2399 	mov	a,#0x80
      000601 C0 E0            [24] 2400 	push	acc
      000603 12 10 A2         [24] 2401 	lcall	_printf
      000606 15 81            [12] 2402 	dec	sp
      000608 15 81            [12] 2403 	dec	sp
      00060A 15 81            [12] 2404 	dec	sp
                           00054C  2405 	C$lab4_m.c$112$1$122 ==.
                                   2406 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:112: desired_heading = direction();
      00060C 12 0A CC         [24] 2407 	lcall	_direction
      00060F 85 82 3A         [24] 2408 	mov	_desired_heading,dpl
      000612 85 83 3B         [24] 2409 	mov	(_desired_heading + 1),dph
                           000555  2410 	C$lab4_m.c$113$1$122 ==.
                                   2411 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:113: count=0;
      000615 E4               [12] 2412 	clr	a
      000616 F5 36            [12] 2413 	mov	_count,a
      000618 F5 37            [12] 2414 	mov	(_count + 1),a
                           00055A  2415 	C$lab4_m.c$114$1$122 ==.
                                   2416 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:114: while (1)
      00061A                       2417 00116$:
                           00055A  2418 	C$lab4_m.c$118$2$123 ==.
                                   2419 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:118: if (!SS0)
      00061A 20 B7 40         [24] 2420 	jb	_SS0,00113$
                           00055D  2421 	C$lab4_m.c$120$3$124 ==.
                                   2422 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:120: wait();
      00061D 12 0B 66         [24] 2423 	lcall	_wait
                           000560  2424 	C$lab4_m.c$121$3$124 ==.
                                   2425 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:121: if (count % 4==0)
      000620 E5 36            [12] 2426 	mov	a,_count
      000622 54 03            [12] 2427 	anl	a,#0x03
      000624 60 02            [24] 2428 	jz	00147$
      000626 80 03            [24] 2429 	sjmp	00105$
      000628                       2430 00147$:
                           000568  2431 	C$lab4_m.c$123$4$125 ==.
                                   2432 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:123: Drive_func();
      000628 12 0B B2         [24] 2433 	lcall	_Drive_func
      00062B                       2434 00105$:
                           00056B  2435 	C$lab4_m.c$126$3$124 ==.
                                   2436 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:126: if (count%2==0)
      00062B E5 36            [12] 2437 	mov	a,_count
      00062D 20 E0 03         [24] 2438 	jb	acc.0,00107$
                           000570  2439 	C$lab4_m.c$128$4$126 ==.
                                   2440 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:128: Steering_func();	
      000630 12 0B 79         [24] 2441 	lcall	_Steering_func
      000633                       2442 00107$:
                           000573  2443 	C$lab4_m.c$131$1$122 ==.
                                   2444 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:131: if (count % 50 ==0)
      000633 75 11 32         [24] 2445 	mov	__moduint_PARM_2,#0x32
      000636 75 12 00         [24] 2446 	mov	(__moduint_PARM_2 + 1),#0x00
      000639 85 36 82         [24] 2447 	mov	dpl,_count
      00063C 85 37 83         [24] 2448 	mov	dph,(_count + 1)
      00063F 12 0F 29         [24] 2449 	lcall	__moduint
      000642 E5 82            [12] 2450 	mov	a,dpl
      000644 85 83 F0         [24] 2451 	mov	b,dph
      000647 45 F0            [12] 2452 	orl	a,b
      000649 70 03            [24] 2453 	jnz	00109$
                           00058B  2454 	C$lab4_m.c$133$4$127 ==.
                                   2455 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:133: Battery_func();
      00064B 12 0C 1C         [24] 2456 	lcall	_Battery_func
      00064E                       2457 00109$:
                           00058E  2458 	C$lab4_m.c$136$3$124 ==.
                                   2459 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:136: if (range <= 20)
      00064E C3               [12] 2460 	clr	c
      00064F 74 14            [12] 2461 	mov	a,#0x14
      000651 95 40            [12] 2462 	subb	a,_range
      000653 E4               [12] 2463 	clr	a
      000654 95 41            [12] 2464 	subb	a,(_range + 1)
      000656 40 C2            [24] 2465 	jc	00116$
                           000598  2466 	C$lab4_m.c$138$4$128 ==.
                                   2467 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:138: avoid_crash();
      000658 12 0C 4A         [24] 2468 	lcall	_avoid_crash
      00065B 80 BD            [24] 2469 	sjmp	00116$
      00065D                       2470 00113$:
                           00059D  2471 	C$lab4_m.c$142$3$129 ==.
                                   2472 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:142: else {printf("\r\n The control is paused");count=1;starter=0;}
      00065D 74 C2            [12] 2473 	mov	a,#___str_5
      00065F C0 E0            [24] 2474 	push	acc
      000661 74 18            [12] 2475 	mov	a,#(___str_5 >> 8)
      000663 C0 E0            [24] 2476 	push	acc
      000665 74 80            [12] 2477 	mov	a,#0x80
      000667 C0 E0            [24] 2478 	push	acc
      000669 12 10 A2         [24] 2479 	lcall	_printf
      00066C 15 81            [12] 2480 	dec	sp
      00066E 15 81            [12] 2481 	dec	sp
      000670 15 81            [12] 2482 	dec	sp
      000672 75 36 01         [24] 2483 	mov	_count,#0x01
      000675 75 37 00         [24] 2484 	mov	(_count + 1),#0x00
      000678 75 44 00         [24] 2485 	mov	_starter,#0x00
      00067B 80 9D            [24] 2486 	sjmp	00116$
                           0005BD  2487 	C$lab4_m.c$144$1$122 ==.
                           0005BD  2488 	XG$main$0$0 ==.
      00067D 22               [24] 2489 	ret
                                   2490 ;------------------------------------------------------------
                                   2491 ;Allocation info for local variables in function 'Drive_Motor'
                                   2492 ;------------------------------------------------------------
                           0005BE  2493 	G$Drive_Motor$0$0 ==.
                           0005BE  2494 	C$lab4_m.c$152$1$122 ==.
                                   2495 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:152: void Drive_Motor(void)
                                   2496 ;	-----------------------------------------
                                   2497 ;	 function Drive_Motor
                                   2498 ;	-----------------------------------------
      00067E                       2499 _Drive_Motor:
                           0005BE  2500 	C$lab4_m.c$154$1$131 ==.
                                   2501 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:154: if (range <= 10) {MOTOR_PW = PW_MAX_DRIVE;}
      00067E C3               [12] 2502 	clr	c
      00067F 74 0A            [12] 2503 	mov	a,#0x0A
      000681 95 40            [12] 2504 	subb	a,_range
      000683 E4               [12] 2505 	clr	a
      000684 95 41            [12] 2506 	subb	a,(_range + 1)
      000686 40 06            [24] 2507 	jc	00102$
      000688 75 42 AF         [24] 2508 	mov	_MOTOR_PW,#0xAF
      00068B 75 43 0D         [24] 2509 	mov	(_MOTOR_PW + 1),#0x0D
      00068E                       2510 00102$:
                           0005CE  2511 	C$lab4_m.c$155$1$131 ==.
                                   2512 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:155: if (range >= 90) {MOTOR_PW = PW_MIN_DRIVE;}
      00068E C3               [12] 2513 	clr	c
      00068F E5 40            [12] 2514 	mov	a,_range
      000691 94 5A            [12] 2515 	subb	a,#0x5A
      000693 E5 41            [12] 2516 	mov	a,(_range + 1)
      000695 94 00            [12] 2517 	subb	a,#0x00
      000697 40 06            [24] 2518 	jc	00104$
      000699 75 42 EC         [24] 2519 	mov	_MOTOR_PW,#0xEC
      00069C 75 43 07         [24] 2520 	mov	(_MOTOR_PW + 1),#0x07
      00069F                       2521 00104$:
                           0005DF  2522 	C$lab4_m.c$156$1$131 ==.
                                   2523 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:156: if (range <= 50 && range >= 40) {MOTOR_PW = PW_NUET_DRIVE;}
      00069F C3               [12] 2524 	clr	c
      0006A0 74 32            [12] 2525 	mov	a,#0x32
      0006A2 95 40            [12] 2526 	subb	a,_range
      0006A4 E4               [12] 2527 	clr	a
      0006A5 95 41            [12] 2528 	subb	a,(_range + 1)
      0006A7 40 10            [24] 2529 	jc	00106$
      0006A9 E5 40            [12] 2530 	mov	a,_range
      0006AB 94 28            [12] 2531 	subb	a,#0x28
      0006AD E5 41            [12] 2532 	mov	a,(_range + 1)
      0006AF 94 00            [12] 2533 	subb	a,#0x00
      0006B1 40 06            [24] 2534 	jc	00106$
      0006B3 75 42 CD         [24] 2535 	mov	_MOTOR_PW,#0xCD
      0006B6 75 43 0A         [24] 2536 	mov	(_MOTOR_PW + 1),#0x0A
      0006B9                       2537 00106$:
                           0005F9  2538 	C$lab4_m.c$158$1$131 ==.
                                   2539 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:158: if (range < 40 && range > 10)
      0006B9 C3               [12] 2540 	clr	c
      0006BA E5 40            [12] 2541 	mov	a,_range
      0006BC 94 28            [12] 2542 	subb	a,#0x28
      0006BE E5 41            [12] 2543 	mov	a,(_range + 1)
      0006C0 94 00            [12] 2544 	subb	a,#0x00
      0006C2 50 70            [24] 2545 	jnc	00109$
      0006C4 C3               [12] 2546 	clr	c
      0006C5 74 0A            [12] 2547 	mov	a,#0x0A
      0006C7 95 40            [12] 2548 	subb	a,_range
      0006C9 E4               [12] 2549 	clr	a
      0006CA 95 41            [12] 2550 	subb	a,(_range + 1)
      0006CC 50 66            [24] 2551 	jnc	00109$
                           00060E  2552 	C$lab4_m.c$160$1$131 ==.
                                   2553 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:160: MOTOR_PW = -24.6 * range + 3749;
      0006CE 85 40 82         [24] 2554 	mov	dpl,_range
      0006D1 85 41 83         [24] 2555 	mov	dph,(_range + 1)
      0006D4 12 10 18         [24] 2556 	lcall	___uint2fs
      0006D7 AC 82            [24] 2557 	mov	r4,dpl
      0006D9 AD 83            [24] 2558 	mov	r5,dph
      0006DB AE F0            [24] 2559 	mov	r6,b
      0006DD FF               [12] 2560 	mov	r7,a
      0006DE C0 04            [24] 2561 	push	ar4
      0006E0 C0 05            [24] 2562 	push	ar5
      0006E2 C0 06            [24] 2563 	push	ar6
      0006E4 C0 07            [24] 2564 	push	ar7
      0006E6 90 CC CD         [24] 2565 	mov	dptr,#0xCCCD
      0006E9 75 F0 C4         [24] 2566 	mov	b,#0xC4
      0006EC 74 C1            [12] 2567 	mov	a,#0xC1
      0006EE 12 0C 92         [24] 2568 	lcall	___fsmul
      0006F1 AC 82            [24] 2569 	mov	r4,dpl
      0006F3 AD 83            [24] 2570 	mov	r5,dph
      0006F5 AE F0            [24] 2571 	mov	r6,b
      0006F7 FF               [12] 2572 	mov	r7,a
      0006F8 E5 81            [12] 2573 	mov	a,sp
      0006FA 24 FC            [12] 2574 	add	a,#0xfc
      0006FC F5 81            [12] 2575 	mov	sp,a
      0006FE E4               [12] 2576 	clr	a
      0006FF C0 E0            [24] 2577 	push	acc
      000701 74 50            [12] 2578 	mov	a,#0x50
      000703 C0 E0            [24] 2579 	push	acc
      000705 74 6A            [12] 2580 	mov	a,#0x6A
      000707 C0 E0            [24] 2581 	push	acc
      000709 74 45            [12] 2582 	mov	a,#0x45
      00070B C0 E0            [24] 2583 	push	acc
      00070D 8C 82            [24] 2584 	mov	dpl,r4
      00070F 8D 83            [24] 2585 	mov	dph,r5
      000711 8E F0            [24] 2586 	mov	b,r6
      000713 EF               [12] 2587 	mov	a,r7
      000714 12 0F 76         [24] 2588 	lcall	___fsadd
      000717 AC 82            [24] 2589 	mov	r4,dpl
      000719 AD 83            [24] 2590 	mov	r5,dph
      00071B AE F0            [24] 2591 	mov	r6,b
      00071D FF               [12] 2592 	mov	r7,a
      00071E E5 81            [12] 2593 	mov	a,sp
      000720 24 FC            [12] 2594 	add	a,#0xfc
      000722 F5 81            [12] 2595 	mov	sp,a
      000724 8C 82            [24] 2596 	mov	dpl,r4
      000726 8D 83            [24] 2597 	mov	dph,r5
      000728 8E F0            [24] 2598 	mov	b,r6
      00072A EF               [12] 2599 	mov	a,r7
      00072B 12 10 24         [24] 2600 	lcall	___fs2uint
      00072E 85 82 42         [24] 2601 	mov	_MOTOR_PW,dpl
      000731 85 83 43         [24] 2602 	mov	(_MOTOR_PW + 1),dph
      000734                       2603 00109$:
                           000674  2604 	C$lab4_m.c$163$1$131 ==.
                                   2605 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:163: if (range > 50 && range < 90)
      000734 C3               [12] 2606 	clr	c
      000735 74 32            [12] 2607 	mov	a,#0x32
      000737 95 40            [12] 2608 	subb	a,_range
      000739 E4               [12] 2609 	clr	a
      00073A 95 41            [12] 2610 	subb	a,(_range + 1)
      00073C 50 6B            [24] 2611 	jnc	00112$
      00073E C3               [12] 2612 	clr	c
      00073F E5 40            [12] 2613 	mov	a,_range
      000741 94 5A            [12] 2614 	subb	a,#0x5A
      000743 E5 41            [12] 2615 	mov	a,(_range + 1)
      000745 94 00            [12] 2616 	subb	a,#0x00
      000747 50 60            [24] 2617 	jnc	00112$
                           000689  2618 	C$lab4_m.c$165$1$131 ==.
                                   2619 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:165: MOTOR_PW = 3686.25 - (18.425 * range);
      000749 85 40 82         [24] 2620 	mov	dpl,_range
      00074C 85 41 83         [24] 2621 	mov	dph,(_range + 1)
      00074F 12 10 18         [24] 2622 	lcall	___uint2fs
      000752 AC 82            [24] 2623 	mov	r4,dpl
      000754 AD 83            [24] 2624 	mov	r5,dph
      000756 AE F0            [24] 2625 	mov	r6,b
      000758 FF               [12] 2626 	mov	r7,a
      000759 C0 04            [24] 2627 	push	ar4
      00075B C0 05            [24] 2628 	push	ar5
      00075D C0 06            [24] 2629 	push	ar6
      00075F C0 07            [24] 2630 	push	ar7
      000761 90 66 66         [24] 2631 	mov	dptr,#0x6666
      000764 75 F0 93         [24] 2632 	mov	b,#0x93
      000767 74 41            [12] 2633 	mov	a,#0x41
      000769 12 0C 92         [24] 2634 	lcall	___fsmul
      00076C AC 82            [24] 2635 	mov	r4,dpl
      00076E AD 83            [24] 2636 	mov	r5,dph
      000770 AE F0            [24] 2637 	mov	r6,b
      000772 FF               [12] 2638 	mov	r7,a
      000773 E5 81            [12] 2639 	mov	a,sp
      000775 24 FC            [12] 2640 	add	a,#0xfc
      000777 F5 81            [12] 2641 	mov	sp,a
      000779 C0 04            [24] 2642 	push	ar4
      00077B C0 05            [24] 2643 	push	ar5
      00077D C0 06            [24] 2644 	push	ar6
      00077F C0 07            [24] 2645 	push	ar7
      000781 90 64 00         [24] 2646 	mov	dptr,#0x6400
      000784 75 F0 66         [24] 2647 	mov	b,#0x66
      000787 74 45            [12] 2648 	mov	a,#0x45
      000789 12 0C 87         [24] 2649 	lcall	___fssub
      00078C AC 82            [24] 2650 	mov	r4,dpl
      00078E AD 83            [24] 2651 	mov	r5,dph
      000790 AE F0            [24] 2652 	mov	r6,b
      000792 FF               [12] 2653 	mov	r7,a
      000793 E5 81            [12] 2654 	mov	a,sp
      000795 24 FC            [12] 2655 	add	a,#0xfc
      000797 F5 81            [12] 2656 	mov	sp,a
      000799 8C 82            [24] 2657 	mov	dpl,r4
      00079B 8D 83            [24] 2658 	mov	dph,r5
      00079D 8E F0            [24] 2659 	mov	b,r6
      00079F EF               [12] 2660 	mov	a,r7
      0007A0 12 10 24         [24] 2661 	lcall	___fs2uint
      0007A3 85 82 42         [24] 2662 	mov	_MOTOR_PW,dpl
      0007A6 85 83 43         [24] 2663 	mov	(_MOTOR_PW + 1),dph
      0007A9                       2664 00112$:
                           0006E9  2665 	C$lab4_m.c$168$1$131 ==.
                                   2666 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:168: DRV_lo_to_hi =0xFFFF - MOTOR_PW;
      0007A9 74 FF            [12] 2667 	mov	a,#0xFF
      0007AB C3               [12] 2668 	clr	c
      0007AC 95 42            [12] 2669 	subb	a,_MOTOR_PW
      0007AE F5 45            [12] 2670 	mov	_DRV_lo_to_hi,a
      0007B0 74 FF            [12] 2671 	mov	a,#0xFF
      0007B2 95 43            [12] 2672 	subb	a,(_MOTOR_PW + 1)
      0007B4 F5 46            [12] 2673 	mov	(_DRV_lo_to_hi + 1),a
                           0006F6  2674 	C$lab4_m.c$169$1$131 ==.
                                   2675 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:169: PCA0CP2 = DRV_lo_to_hi;
      0007B6 85 45 EC         [24] 2676 	mov	((_PCA0CP2 >> 0) & 0xFF),_DRV_lo_to_hi
      0007B9 85 46 FC         [24] 2677 	mov	((_PCA0CP2 >> 8) & 0xFF),(_DRV_lo_to_hi + 1)
                           0006FC  2678 	C$lab4_m.c$170$1$131 ==.
                           0006FC  2679 	XG$Drive_Motor$0$0 ==.
      0007BC 22               [24] 2680 	ret
                                   2681 ;------------------------------------------------------------
                                   2682 ;Allocation info for local variables in function 'Read_Ranger'
                                   2683 ;------------------------------------------------------------
                                   2684 ;r_data                    Allocated with name '_Read_Ranger_r_data_1_138'
                                   2685 ;r_addr                    Allocated to registers 
                                   2686 ;read                      Allocated to registers 
                                   2687 ;------------------------------------------------------------
                           0006FD  2688 	G$Read_Ranger$0$0 ==.
                           0006FD  2689 	C$lab4_m.c$175$1$131 ==.
                                   2690 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:175: unsigned int Read_Ranger(void)
                                   2691 ;	-----------------------------------------
                                   2692 ;	 function Read_Ranger
                                   2693 ;	-----------------------------------------
      0007BD                       2694 _Read_Ranger:
                           0006FD  2695 	C$lab4_m.c$181$1$138 ==.
                                   2696 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:181: r_data[0] = 0x51;
      0007BD 75 47 51         [24] 2697 	mov	_Read_Ranger_r_data_1_138,#0x51
                           000700  2698 	C$lab4_m.c$182$1$138 ==.
                                   2699 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:182: i2c_read_data(r_addr, 2, r_data, 2);
      0007C0 75 2D 47         [24] 2700 	mov	_i2c_read_data_PARM_3,#_Read_Ranger_r_data_1_138
      0007C3 75 2E 00         [24] 2701 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0007C6 75 2F 40         [24] 2702 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0007C9 75 2C 02         [24] 2703 	mov	_i2c_read_data_PARM_2,#0x02
      0007CC 75 30 02         [24] 2704 	mov	_i2c_read_data_PARM_4,#0x02
      0007CF 75 82 E0         [24] 2705 	mov	dpl,#0xE0
      0007D2 12 04 A8         [24] 2706 	lcall	_i2c_read_data
                           000715  2707 	C$lab4_m.c$183$1$138 ==.
                                   2708 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:183: read = (((unsigned int) r_data[0] <<8) | r_data[1]);
      0007D5 AF 47            [24] 2709 	mov	r7,_Read_Ranger_r_data_1_138
      0007D7 7E 00            [12] 2710 	mov	r6,#0x00
      0007D9 AC 48            [24] 2711 	mov	r4,(_Read_Ranger_r_data_1_138 + 0x0001)
      0007DB 7D 00            [12] 2712 	mov	r5,#0x00
      0007DD EC               [12] 2713 	mov	a,r4
      0007DE 4E               [12] 2714 	orl	a,r6
      0007DF F5 82            [12] 2715 	mov	dpl,a
      0007E1 ED               [12] 2716 	mov	a,r5
      0007E2 4F               [12] 2717 	orl	a,r7
      0007E3 F5 83            [12] 2718 	mov	dph,a
                           000725  2719 	C$lab4_m.c$184$1$138 ==.
                                   2720 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:184: return read;
                           000725  2721 	C$lab4_m.c$185$1$138 ==.
                           000725  2722 	XG$Read_Ranger$0$0 ==.
      0007E5 22               [24] 2723 	ret
                                   2724 ;------------------------------------------------------------
                                   2725 ;Allocation info for local variables in function 'ReadCompass'
                                   2726 ;------------------------------------------------------------
                                   2727 ;Data                      Allocated with name '_ReadCompass_Data_1_140'
                                   2728 ;Crange                    Allocated to registers 
                                   2729 ;addr                      Allocated to registers 
                                   2730 ;------------------------------------------------------------
                           000726  2731 	G$ReadCompass$0$0 ==.
                           000726  2732 	C$lab4_m.c$190$1$138 ==.
                                   2733 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:190: unsigned int ReadCompass(void)
                                   2734 ;	-----------------------------------------
                                   2735 ;	 function ReadCompass
                                   2736 ;	-----------------------------------------
      0007E6                       2737 _ReadCompass:
                           000726  2738 	C$lab4_m.c$196$1$140 ==.
                                   2739 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:196: i2c_read_data(addr, 2,Data,2);
      0007E6 75 2D 49         [24] 2740 	mov	_i2c_read_data_PARM_3,#_ReadCompass_Data_1_140
      0007E9 75 2E 00         [24] 2741 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0007EC 75 2F 40         [24] 2742 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0007EF 75 2C 02         [24] 2743 	mov	_i2c_read_data_PARM_2,#0x02
      0007F2 75 30 02         [24] 2744 	mov	_i2c_read_data_PARM_4,#0x02
      0007F5 75 82 C0         [24] 2745 	mov	dpl,#0xC0
      0007F8 12 04 A8         [24] 2746 	lcall	_i2c_read_data
                           00073B  2747 	C$lab4_m.c$197$1$140 ==.
                                   2748 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:197: Crange = ((unsigned int) Data[0] << 8 | Data[1]);
      0007FB AF 49            [24] 2749 	mov	r7,_ReadCompass_Data_1_140
      0007FD 7E 00            [12] 2750 	mov	r6,#0x00
      0007FF AC 4A            [24] 2751 	mov	r4,(_ReadCompass_Data_1_140 + 0x0001)
      000801 7D 00            [12] 2752 	mov	r5,#0x00
      000803 EC               [12] 2753 	mov	a,r4
      000804 4E               [12] 2754 	orl	a,r6
      000805 F5 82            [12] 2755 	mov	dpl,a
      000807 ED               [12] 2756 	mov	a,r5
      000808 4F               [12] 2757 	orl	a,r7
      000809 F5 83            [12] 2758 	mov	dph,a
                           00074B  2759 	C$lab4_m.c$198$1$140 ==.
                                   2760 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:198: return Crange;
                           00074B  2761 	C$lab4_m.c$199$1$140 ==.
                           00074B  2762 	XG$ReadCompass$0$0 ==.
      00080B 22               [24] 2763 	ret
                                   2764 ;------------------------------------------------------------
                                   2765 ;Allocation info for local variables in function 'Steering_Servo'
                                   2766 ;------------------------------------------------------------
                                   2767 ;direction                 Allocated with name '_Steering_Servo_direction_1_141'
                                   2768 ;------------------------------------------------------------
                           00074C  2769 	G$Steering_Servo$0$0 ==.
                           00074C  2770 	C$lab4_m.c$204$1$140 ==.
                                   2771 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:204: void Steering_Servo(unsigned int direction)
                                   2772 ;	-----------------------------------------
                                   2773 ;	 function Steering_Servo
                                   2774 ;	-----------------------------------------
      00080C                       2775 _Steering_Servo:
      00080C 85 82 4B         [24] 2776 	mov	_Steering_Servo_direction_1_141,dpl
      00080F 85 83 4C         [24] 2777 	mov	(_Steering_Servo_direction_1_141 + 1),dph
                           000752  2778 	C$lab4_m.c$208$1$142 ==.
                                   2779 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:208: if (direction < 1800)
      000812 C3               [12] 2780 	clr	c
      000813 E5 4B            [12] 2781 	mov	a,_Steering_Servo_direction_1_141
      000815 94 08            [12] 2782 	subb	a,#0x08
      000817 E5 4C            [12] 2783 	mov	a,(_Steering_Servo_direction_1_141 + 1)
      000819 94 07            [12] 2784 	subb	a,#0x07
      00081B 40 03            [24] 2785 	jc	00128$
      00081D 02 09 29         [24] 2786 	ljmp	00112$
      000820                       2787 00128$:
                           000760  2788 	C$lab4_m.c$210$1$142 ==.
                                   2789 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:210: if (STR_PW <= PW_CENTER_STR - (float)(direction)/4.2)
      000820 85 4B 82         [24] 2790 	mov	dpl,_Steering_Servo_direction_1_141
      000823 85 4C 83         [24] 2791 	mov	dph,(_Steering_Servo_direction_1_141 + 1)
      000826 12 10 18         [24] 2792 	lcall	___uint2fs
      000829 AA 82            [24] 2793 	mov	r2,dpl
      00082B AB 83            [24] 2794 	mov	r3,dph
      00082D AC F0            [24] 2795 	mov	r4,b
      00082F FD               [12] 2796 	mov	r5,a
      000830 74 66            [12] 2797 	mov	a,#0x66
      000832 C0 E0            [24] 2798 	push	acc
      000834 C0 E0            [24] 2799 	push	acc
      000836 74 86            [12] 2800 	mov	a,#0x86
      000838 C0 E0            [24] 2801 	push	acc
      00083A 74 40            [12] 2802 	mov	a,#0x40
      00083C C0 E0            [24] 2803 	push	acc
      00083E 8A 82            [24] 2804 	mov	dpl,r2
      000840 8B 83            [24] 2805 	mov	dph,r3
      000842 8C F0            [24] 2806 	mov	b,r4
      000844 ED               [12] 2807 	mov	a,r5
      000845 12 16 B0         [24] 2808 	lcall	___fsdiv
      000848 AA 82            [24] 2809 	mov	r2,dpl
      00084A AB 83            [24] 2810 	mov	r3,dph
      00084C AC F0            [24] 2811 	mov	r4,b
      00084E FD               [12] 2812 	mov	r5,a
      00084F E5 81            [12] 2813 	mov	a,sp
      000851 24 FC            [12] 2814 	add	a,#0xfc
      000853 F5 81            [12] 2815 	mov	sp,a
      000855 C0 02            [24] 2816 	push	ar2
      000857 C0 03            [24] 2817 	push	ar3
      000859 C0 04            [24] 2818 	push	ar4
      00085B C0 05            [24] 2819 	push	ar5
      00085D 90 90 00         [24] 2820 	mov	dptr,#0x9000
      000860 75 F0 30         [24] 2821 	mov	b,#0x30
      000863 74 45            [12] 2822 	mov	a,#0x45
      000865 12 0C 87         [24] 2823 	lcall	___fssub
      000868 AA 82            [24] 2824 	mov	r2,dpl
      00086A AB 83            [24] 2825 	mov	r3,dph
      00086C AC F0            [24] 2826 	mov	r4,b
      00086E FD               [12] 2827 	mov	r5,a
      00086F E5 81            [12] 2828 	mov	a,sp
      000871 24 FC            [12] 2829 	add	a,#0xfc
      000873 F5 81            [12] 2830 	mov	sp,a
      000875 85 34 82         [24] 2831 	mov	dpl,_STR_PW
      000878 85 35 83         [24] 2832 	mov	dph,(_STR_PW + 1)
      00087B C0 05            [24] 2833 	push	ar5
      00087D C0 04            [24] 2834 	push	ar4
      00087F C0 03            [24] 2835 	push	ar3
      000881 C0 02            [24] 2836 	push	ar2
      000883 12 10 18         [24] 2837 	lcall	___uint2fs
      000886 A8 82            [24] 2838 	mov	r0,dpl
      000888 A9 83            [24] 2839 	mov	r1,dph
      00088A AE F0            [24] 2840 	mov	r6,b
      00088C FF               [12] 2841 	mov	r7,a
      00088D D0 02            [24] 2842 	pop	ar2
      00088F D0 03            [24] 2843 	pop	ar3
      000891 D0 04            [24] 2844 	pop	ar4
      000893 D0 05            [24] 2845 	pop	ar5
      000895 C0 02            [24] 2846 	push	ar2
      000897 C0 03            [24] 2847 	push	ar3
      000899 C0 04            [24] 2848 	push	ar4
      00089B C0 05            [24] 2849 	push	ar5
      00089D 88 82            [24] 2850 	mov	dpl,r0
      00089F 89 83            [24] 2851 	mov	dph,r1
      0008A1 8E F0            [24] 2852 	mov	b,r6
      0008A3 EF               [12] 2853 	mov	a,r7
      0008A4 12 0D 96         [24] 2854 	lcall	___fsgt
      0008A7 AF 82            [24] 2855 	mov	r7,dpl
      0008A9 E5 81            [12] 2856 	mov	a,sp
      0008AB 24 FC            [12] 2857 	add	a,#0xfc
      0008AD F5 81            [12] 2858 	mov	sp,a
      0008AF EF               [12] 2859 	mov	a,r7
      0008B0 70 68            [24] 2860 	jnz	00102$
                           0007F2  2861 	C$lab4_m.c$212$1$142 ==.
                                   2862 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:212: STR_PW = PW_CENTER_STR - (float)(direction)/4.2;
      0008B2 85 4B 82         [24] 2863 	mov	dpl,_Steering_Servo_direction_1_141
      0008B5 85 4C 83         [24] 2864 	mov	dph,(_Steering_Servo_direction_1_141 + 1)
      0008B8 12 10 18         [24] 2865 	lcall	___uint2fs
      0008BB AC 82            [24] 2866 	mov	r4,dpl
      0008BD AD 83            [24] 2867 	mov	r5,dph
      0008BF AE F0            [24] 2868 	mov	r6,b
      0008C1 FF               [12] 2869 	mov	r7,a
      0008C2 74 66            [12] 2870 	mov	a,#0x66
      0008C4 C0 E0            [24] 2871 	push	acc
      0008C6 C0 E0            [24] 2872 	push	acc
      0008C8 74 86            [12] 2873 	mov	a,#0x86
      0008CA C0 E0            [24] 2874 	push	acc
      0008CC 74 40            [12] 2875 	mov	a,#0x40
      0008CE C0 E0            [24] 2876 	push	acc
      0008D0 8C 82            [24] 2877 	mov	dpl,r4
      0008D2 8D 83            [24] 2878 	mov	dph,r5
      0008D4 8E F0            [24] 2879 	mov	b,r6
      0008D6 EF               [12] 2880 	mov	a,r7
      0008D7 12 16 B0         [24] 2881 	lcall	___fsdiv
      0008DA AC 82            [24] 2882 	mov	r4,dpl
      0008DC AD 83            [24] 2883 	mov	r5,dph
      0008DE AE F0            [24] 2884 	mov	r6,b
      0008E0 FF               [12] 2885 	mov	r7,a
      0008E1 E5 81            [12] 2886 	mov	a,sp
      0008E3 24 FC            [12] 2887 	add	a,#0xfc
      0008E5 F5 81            [12] 2888 	mov	sp,a
      0008E7 C0 04            [24] 2889 	push	ar4
      0008E9 C0 05            [24] 2890 	push	ar5
      0008EB C0 06            [24] 2891 	push	ar6
      0008ED C0 07            [24] 2892 	push	ar7
      0008EF 90 90 00         [24] 2893 	mov	dptr,#0x9000
      0008F2 75 F0 30         [24] 2894 	mov	b,#0x30
      0008F5 74 45            [12] 2895 	mov	a,#0x45
      0008F7 12 0C 87         [24] 2896 	lcall	___fssub
      0008FA AC 82            [24] 2897 	mov	r4,dpl
      0008FC AD 83            [24] 2898 	mov	r5,dph
      0008FE AE F0            [24] 2899 	mov	r6,b
      000900 FF               [12] 2900 	mov	r7,a
      000901 E5 81            [12] 2901 	mov	a,sp
      000903 24 FC            [12] 2902 	add	a,#0xfc
      000905 F5 81            [12] 2903 	mov	sp,a
      000907 8C 82            [24] 2904 	mov	dpl,r4
      000909 8D 83            [24] 2905 	mov	dph,r5
      00090B 8E F0            [24] 2906 	mov	b,r6
      00090D EF               [12] 2907 	mov	a,r7
      00090E 12 10 24         [24] 2908 	lcall	___fs2uint
      000911 85 82 34         [24] 2909 	mov	_STR_PW,dpl
      000914 85 83 35         [24] 2910 	mov	(_STR_PW + 1),dph
      000917 02 0A 5E         [24] 2911 	ljmp	00113$
      00091A                       2912 00102$:
                           00085A  2913 	C$lab4_m.c$216$3$145 ==.
                                   2914 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:216: STR_PW -= 10;
      00091A E5 34            [12] 2915 	mov	a,_STR_PW
      00091C 24 F6            [12] 2916 	add	a,#0xF6
      00091E F5 34            [12] 2917 	mov	_STR_PW,a
      000920 E5 35            [12] 2918 	mov	a,(_STR_PW + 1)
      000922 34 FF            [12] 2919 	addc	a,#0xFF
      000924 F5 35            [12] 2920 	mov	(_STR_PW + 1),a
      000926 02 0A 5E         [24] 2921 	ljmp	00113$
      000929                       2922 00112$:
                           000869  2923 	C$lab4_m.c$219$1$142 ==.
                                   2924 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:219: else if ( direction == 0 || direction ==3600)
      000929 E5 4B            [12] 2925 	mov	a,_Steering_Servo_direction_1_141
      00092B 45 4C            [12] 2926 	orl	a,(_Steering_Servo_direction_1_141 + 1)
      00092D 60 0A            [24] 2927 	jz	00107$
      00092F 74 10            [12] 2928 	mov	a,#0x10
      000931 B5 4B 0E         [24] 2929 	cjne	a,_Steering_Servo_direction_1_141,00108$
      000934 74 0E            [12] 2930 	mov	a,#0x0E
      000936 B5 4C 09         [24] 2931 	cjne	a,(_Steering_Servo_direction_1_141 + 1),00108$
      000939                       2932 00107$:
                           000879  2933 	C$lab4_m.c$221$2$146 ==.
                                   2934 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:221: STR_PW=PW_CENTER_STR;
      000939 75 34 09         [24] 2935 	mov	_STR_PW,#0x09
      00093C 75 35 0B         [24] 2936 	mov	(_STR_PW + 1),#0x0B
      00093F 02 0A 5E         [24] 2937 	ljmp	00113$
      000942                       2938 00108$:
                           000882  2939 	C$lab4_m.c$225$2$147 ==.
                                   2940 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:225: if (STR_PW >= PW_CENTER_STR + (float)(3600-direction)/1.9)
      000942 74 10            [12] 2941 	mov	a,#0x10
      000944 C3               [12] 2942 	clr	c
      000945 95 4B            [12] 2943 	subb	a,_Steering_Servo_direction_1_141
      000947 F5 82            [12] 2944 	mov	dpl,a
      000949 74 0E            [12] 2945 	mov	a,#0x0E
      00094B 95 4C            [12] 2946 	subb	a,(_Steering_Servo_direction_1_141 + 1)
      00094D F5 83            [12] 2947 	mov	dph,a
      00094F 12 10 18         [24] 2948 	lcall	___uint2fs
      000952 AC 82            [24] 2949 	mov	r4,dpl
      000954 AD 83            [24] 2950 	mov	r5,dph
      000956 AE F0            [24] 2951 	mov	r6,b
      000958 FF               [12] 2952 	mov	r7,a
      000959 74 33            [12] 2953 	mov	a,#0x33
      00095B C0 E0            [24] 2954 	push	acc
      00095D C0 E0            [24] 2955 	push	acc
      00095F 74 F3            [12] 2956 	mov	a,#0xF3
      000961 C0 E0            [24] 2957 	push	acc
      000963 C4               [12] 2958 	swap	a
      000964 C0 E0            [24] 2959 	push	acc
      000966 8C 82            [24] 2960 	mov	dpl,r4
      000968 8D 83            [24] 2961 	mov	dph,r5
      00096A 8E F0            [24] 2962 	mov	b,r6
      00096C EF               [12] 2963 	mov	a,r7
      00096D 12 16 B0         [24] 2964 	lcall	___fsdiv
      000970 AC 82            [24] 2965 	mov	r4,dpl
      000972 AD 83            [24] 2966 	mov	r5,dph
      000974 AE F0            [24] 2967 	mov	r6,b
      000976 FF               [12] 2968 	mov	r7,a
      000977 E5 81            [12] 2969 	mov	a,sp
      000979 24 FC            [12] 2970 	add	a,#0xfc
      00097B F5 81            [12] 2971 	mov	sp,a
      00097D E4               [12] 2972 	clr	a
      00097E C0 E0            [24] 2973 	push	acc
      000980 74 90            [12] 2974 	mov	a,#0x90
      000982 C0 E0            [24] 2975 	push	acc
      000984 74 30            [12] 2976 	mov	a,#0x30
      000986 C0 E0            [24] 2977 	push	acc
      000988 74 45            [12] 2978 	mov	a,#0x45
      00098A C0 E0            [24] 2979 	push	acc
      00098C 8C 82            [24] 2980 	mov	dpl,r4
      00098E 8D 83            [24] 2981 	mov	dph,r5
      000990 8E F0            [24] 2982 	mov	b,r6
      000992 EF               [12] 2983 	mov	a,r7
      000993 12 0F 76         [24] 2984 	lcall	___fsadd
      000996 AC 82            [24] 2985 	mov	r4,dpl
      000998 AD 83            [24] 2986 	mov	r5,dph
      00099A AE F0            [24] 2987 	mov	r6,b
      00099C FF               [12] 2988 	mov	r7,a
      00099D E5 81            [12] 2989 	mov	a,sp
      00099F 24 FC            [12] 2990 	add	a,#0xfc
      0009A1 F5 81            [12] 2991 	mov	sp,a
      0009A3 85 34 82         [24] 2992 	mov	dpl,_STR_PW
      0009A6 85 35 83         [24] 2993 	mov	dph,(_STR_PW + 1)
      0009A9 C0 07            [24] 2994 	push	ar7
      0009AB C0 06            [24] 2995 	push	ar6
      0009AD C0 05            [24] 2996 	push	ar5
      0009AF C0 04            [24] 2997 	push	ar4
      0009B1 12 10 18         [24] 2998 	lcall	___uint2fs
      0009B4 A8 82            [24] 2999 	mov	r0,dpl
      0009B6 A9 83            [24] 3000 	mov	r1,dph
      0009B8 AA F0            [24] 3001 	mov	r2,b
      0009BA FB               [12] 3002 	mov	r3,a
      0009BB D0 04            [24] 3003 	pop	ar4
      0009BD D0 05            [24] 3004 	pop	ar5
      0009BF D0 06            [24] 3005 	pop	ar6
      0009C1 D0 07            [24] 3006 	pop	ar7
      0009C3 C0 04            [24] 3007 	push	ar4
      0009C5 C0 05            [24] 3008 	push	ar5
      0009C7 C0 06            [24] 3009 	push	ar6
      0009C9 C0 07            [24] 3010 	push	ar7
      0009CB 88 82            [24] 3011 	mov	dpl,r0
      0009CD 89 83            [24] 3012 	mov	dph,r1
      0009CF 8A F0            [24] 3013 	mov	b,r2
      0009D1 EB               [12] 3014 	mov	a,r3
      0009D2 12 0D E1         [24] 3015 	lcall	___fslt
      0009D5 AF 82            [24] 3016 	mov	r7,dpl
      0009D7 E5 81            [12] 3017 	mov	a,sp
      0009D9 24 FC            [12] 3018 	add	a,#0xfc
      0009DB F5 81            [12] 3019 	mov	sp,a
      0009DD EF               [12] 3020 	mov	a,r7
      0009DE 70 73            [24] 3021 	jnz	00105$
                           000920  3022 	C$lab4_m.c$227$3$148 ==.
                                   3023 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:227: STR_PW = PW_CENTER_STR + (float)(3600-direction)/1.9;
      0009E0 74 10            [12] 3024 	mov	a,#0x10
      0009E2 C3               [12] 3025 	clr	c
      0009E3 95 4B            [12] 3026 	subb	a,_Steering_Servo_direction_1_141
      0009E5 F5 82            [12] 3027 	mov	dpl,a
      0009E7 74 0E            [12] 3028 	mov	a,#0x0E
      0009E9 95 4C            [12] 3029 	subb	a,(_Steering_Servo_direction_1_141 + 1)
      0009EB F5 83            [12] 3030 	mov	dph,a
      0009ED 12 10 18         [24] 3031 	lcall	___uint2fs
      0009F0 AC 82            [24] 3032 	mov	r4,dpl
      0009F2 AD 83            [24] 3033 	mov	r5,dph
      0009F4 AE F0            [24] 3034 	mov	r6,b
      0009F6 FF               [12] 3035 	mov	r7,a
      0009F7 74 33            [12] 3036 	mov	a,#0x33
      0009F9 C0 E0            [24] 3037 	push	acc
      0009FB C0 E0            [24] 3038 	push	acc
      0009FD 74 F3            [12] 3039 	mov	a,#0xF3
      0009FF C0 E0            [24] 3040 	push	acc
      000A01 C4               [12] 3041 	swap	a
      000A02 C0 E0            [24] 3042 	push	acc
      000A04 8C 82            [24] 3043 	mov	dpl,r4
      000A06 8D 83            [24] 3044 	mov	dph,r5
      000A08 8E F0            [24] 3045 	mov	b,r6
      000A0A EF               [12] 3046 	mov	a,r7
      000A0B 12 16 B0         [24] 3047 	lcall	___fsdiv
      000A0E AC 82            [24] 3048 	mov	r4,dpl
      000A10 AD 83            [24] 3049 	mov	r5,dph
      000A12 AE F0            [24] 3050 	mov	r6,b
      000A14 FF               [12] 3051 	mov	r7,a
      000A15 E5 81            [12] 3052 	mov	a,sp
      000A17 24 FC            [12] 3053 	add	a,#0xfc
      000A19 F5 81            [12] 3054 	mov	sp,a
      000A1B E4               [12] 3055 	clr	a
      000A1C C0 E0            [24] 3056 	push	acc
      000A1E 74 90            [12] 3057 	mov	a,#0x90
      000A20 C0 E0            [24] 3058 	push	acc
      000A22 74 30            [12] 3059 	mov	a,#0x30
      000A24 C0 E0            [24] 3060 	push	acc
      000A26 74 45            [12] 3061 	mov	a,#0x45
      000A28 C0 E0            [24] 3062 	push	acc
      000A2A 8C 82            [24] 3063 	mov	dpl,r4
      000A2C 8D 83            [24] 3064 	mov	dph,r5
      000A2E 8E F0            [24] 3065 	mov	b,r6
      000A30 EF               [12] 3066 	mov	a,r7
      000A31 12 0F 76         [24] 3067 	lcall	___fsadd
      000A34 AC 82            [24] 3068 	mov	r4,dpl
      000A36 AD 83            [24] 3069 	mov	r5,dph
      000A38 AE F0            [24] 3070 	mov	r6,b
      000A3A FF               [12] 3071 	mov	r7,a
      000A3B E5 81            [12] 3072 	mov	a,sp
      000A3D 24 FC            [12] 3073 	add	a,#0xfc
      000A3F F5 81            [12] 3074 	mov	sp,a
      000A41 8C 82            [24] 3075 	mov	dpl,r4
      000A43 8D 83            [24] 3076 	mov	dph,r5
      000A45 8E F0            [24] 3077 	mov	b,r6
      000A47 EF               [12] 3078 	mov	a,r7
      000A48 12 10 24         [24] 3079 	lcall	___fs2uint
      000A4B 85 82 34         [24] 3080 	mov	_STR_PW,dpl
      000A4E 85 83 35         [24] 3081 	mov	(_STR_PW + 1),dph
      000A51 80 0B            [24] 3082 	sjmp	00113$
      000A53                       3083 00105$:
                           000993  3084 	C$lab4_m.c$231$3$149 ==.
                                   3085 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:231: STR_PW += 10;
      000A53 74 0A            [12] 3086 	mov	a,#0x0A
      000A55 25 34            [12] 3087 	add	a,_STR_PW
      000A57 F5 34            [12] 3088 	mov	_STR_PW,a
      000A59 E4               [12] 3089 	clr	a
      000A5A 35 35            [12] 3090 	addc	a,(_STR_PW + 1)
      000A5C F5 35            [12] 3091 	mov	(_STR_PW + 1),a
      000A5E                       3092 00113$:
                           00099E  3093 	C$lab4_m.c$237$1$142 ==.
                                   3094 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:237: STR_lo_to_hi= 0xFFFF - STR_PW;
      000A5E 74 FF            [12] 3095 	mov	a,#0xFF
      000A60 C3               [12] 3096 	clr	c
      000A61 95 34            [12] 3097 	subb	a,_STR_PW
      000A63 F5 32            [12] 3098 	mov	_STR_lo_to_hi,a
      000A65 74 FF            [12] 3099 	mov	a,#0xFF
      000A67 95 35            [12] 3100 	subb	a,(_STR_PW + 1)
      000A69 F5 33            [12] 3101 	mov	(_STR_lo_to_hi + 1),a
                           0009AB  3102 	C$lab4_m.c$238$1$142 ==.
                                   3103 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:238: PCA0CP0 = STR_lo_to_hi;
      000A6B 85 32 EA         [24] 3104 	mov	((_PCA0CP0 >> 0) & 0xFF),_STR_lo_to_hi
      000A6E 85 33 FA         [24] 3105 	mov	((_PCA0CP0 >> 8) & 0xFF),(_STR_lo_to_hi + 1)
                           0009B1  3106 	C$lab4_m.c$239$1$142 ==.
                           0009B1  3107 	XG$Steering_Servo$0$0 ==.
      000A71 22               [24] 3108 	ret
                                   3109 ;------------------------------------------------------------
                                   3110 ;Allocation info for local variables in function 'Port_Init'
                                   3111 ;------------------------------------------------------------
                           0009B2  3112 	G$Port_Init$0$0 ==.
                           0009B2  3113 	C$lab4_m.c$247$1$142 ==.
                                   3114 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:247: void Port_Init()
                                   3115 ;	-----------------------------------------
                                   3116 ;	 function Port_Init
                                   3117 ;	-----------------------------------------
      000A72                       3118 _Port_Init:
                           0009B2  3119 	C$lab4_m.c$249$1$150 ==.
                                   3120 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:249: P0MDOUT &= ~0x32;
      000A72 AF A4            [24] 3121 	mov	r7,_P0MDOUT
      000A74 74 CD            [12] 3122 	mov	a,#0xCD
      000A76 5F               [12] 3123 	anl	a,r7
      000A77 F5 A4            [12] 3124 	mov	_P0MDOUT,a
                           0009B9  3125 	C$lab4_m.c$250$1$150 ==.
                                   3126 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:250: P1MDOUT = 0x0F;  //set output pin for CEX0 and CEX2 in push-pull mode
      000A79 75 A5 0F         [24] 3127 	mov	_P1MDOUT,#0x0F
                           0009BC  3128 	C$lab4_m.c$251$1$150 ==.
                                   3129 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:251: P1MDIN &= ~0x10;
      000A7C AF BD            [24] 3130 	mov	r7,_P1MDIN
      000A7E 74 EF            [12] 3131 	mov	a,#0xEF
      000A80 5F               [12] 3132 	anl	a,r7
      000A81 F5 BD            [12] 3133 	mov	_P1MDIN,a
                           0009C3  3134 	C$lab4_m.c$252$1$150 ==.
                                   3135 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:252: P1MDOUT |= 0x10;
      000A83 43 A5 10         [24] 3136 	orl	_P1MDOUT,#0x10
                           0009C6  3137 	C$lab4_m.c$253$1$150 ==.
                                   3138 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:253: P1 		 = 0x10;
      000A86 75 90 10         [24] 3139 	mov	_P1,#0x10
                           0009C9  3140 	C$lab4_m.c$255$1$150 ==.
                                   3141 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:255: P3MDOUT &= ~0x80;
      000A89 AF A7            [24] 3142 	mov	r7,_P3MDOUT
      000A8B 74 7F            [12] 3143 	mov	a,#0x7F
      000A8D 5F               [12] 3144 	anl	a,r7
      000A8E F5 A7            [12] 3145 	mov	_P3MDOUT,a
                           0009D0  3146 	C$lab4_m.c$256$1$150 ==.
                                   3147 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:256: P3 = 0x80;
      000A90 75 B0 80         [24] 3148 	mov	_P3,#0x80
                           0009D3  3149 	C$lab4_m.c$257$1$150 ==.
                           0009D3  3150 	XG$Port_Init$0$0 ==.
      000A93 22               [24] 3151 	ret
                                   3152 ;------------------------------------------------------------
                                   3153 ;Allocation info for local variables in function 'XBR0_Init'
                                   3154 ;------------------------------------------------------------
                           0009D4  3155 	G$XBR0_Init$0$0 ==.
                           0009D4  3156 	C$lab4_m.c$262$1$150 ==.
                                   3157 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:262: void XBR0_Init()
                                   3158 ;	-----------------------------------------
                                   3159 ;	 function XBR0_Init
                                   3160 ;	-----------------------------------------
      000A94                       3161 _XBR0_Init:
                           0009D4  3162 	C$lab4_m.c$264$1$151 ==.
                                   3163 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:264: XBR0  = 0x27;  //configure crossbar as directed in the laboratory
      000A94 75 E1 27         [24] 3164 	mov	_XBR0,#0x27
                           0009D7  3165 	C$lab4_m.c$265$1$151 ==.
                           0009D7  3166 	XG$XBR0_Init$0$0 ==.
      000A97 22               [24] 3167 	ret
                                   3168 ;------------------------------------------------------------
                                   3169 ;Allocation info for local variables in function 'SMB_Init'
                                   3170 ;------------------------------------------------------------
                           0009D8  3171 	G$SMB_Init$0$0 ==.
                           0009D8  3172 	C$lab4_m.c$270$1$151 ==.
                                   3173 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:270: void SMB_Init(void)
                                   3174 ;	-----------------------------------------
                                   3175 ;	 function SMB_Init
                                   3176 ;	-----------------------------------------
      000A98                       3177 _SMB_Init:
                           0009D8  3178 	C$lab4_m.c$272$1$153 ==.
                                   3179 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:272: SMB0CR =0x93;
      000A98 75 CF 93         [24] 3180 	mov	_SMB0CR,#0x93
                           0009DB  3181 	C$lab4_m.c$273$1$153 ==.
                                   3182 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:273: ENSMB =1;
      000A9B D2 C6            [12] 3183 	setb	_ENSMB
                           0009DD  3184 	C$lab4_m.c$274$1$153 ==.
                           0009DD  3185 	XG$SMB_Init$0$0 ==.
      000A9D 22               [24] 3186 	ret
                                   3187 ;------------------------------------------------------------
                                   3188 ;Allocation info for local variables in function 'PCA_Init'
                                   3189 ;------------------------------------------------------------
                           0009DE  3190 	G$PCA_Init$0$0 ==.
                           0009DE  3191 	C$lab4_m.c$279$1$153 ==.
                                   3192 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:279: void PCA_Init(void)
                                   3193 ;	-----------------------------------------
                                   3194 ;	 function PCA_Init
                                   3195 ;	-----------------------------------------
      000A9E                       3196 _PCA_Init:
                           0009DE  3197 	C$lab4_m.c$281$1$155 ==.
                                   3198 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:281: PCA0MD = 0x81;
      000A9E 75 D9 81         [24] 3199 	mov	_PCA0MD,#0x81
                           0009E1  3200 	C$lab4_m.c$282$1$155 ==.
                                   3201 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:282: PCA0CPM0 = 0xC2;    //CCM0 in 16-bit compare mode
      000AA1 75 DA C2         [24] 3202 	mov	_PCA0CPM0,#0xC2
                           0009E4  3203 	C$lab4_m.c$283$1$155 ==.
                                   3204 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:283: PCA0CN = 0x40;      //Enable PCA counter
      000AA4 75 D8 40         [24] 3205 	mov	_PCA0CN,#0x40
                           0009E7  3206 	C$lab4_m.c$284$1$155 ==.
                                   3207 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:284: EIE1 |= 0x08;       //Enable PCA interrupt
      000AA7 43 E6 08         [24] 3208 	orl	_EIE1,#0x08
                           0009EA  3209 	C$lab4_m.c$285$1$155 ==.
                                   3210 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:285: EA = 1;             //Enable global interrupts
      000AAA D2 AF            [12] 3211 	setb	_EA
                           0009EC  3212 	C$lab4_m.c$286$1$155 ==.
                           0009EC  3213 	XG$PCA_Init$0$0 ==.
      000AAC 22               [24] 3214 	ret
                                   3215 ;------------------------------------------------------------
                                   3216 ;Allocation info for local variables in function 'PCA_ISR'
                                   3217 ;------------------------------------------------------------
                           0009ED  3218 	G$PCA_ISR$0$0 ==.
                           0009ED  3219 	C$lab4_m.c$291$1$155 ==.
                                   3220 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:291: void PCA_ISR ( void ) __interrupt 9
                                   3221 ;	-----------------------------------------
                                   3222 ;	 function PCA_ISR
                                   3223 ;	-----------------------------------------
      000AAD                       3224 _PCA_ISR:
      000AAD C0 E0            [24] 3225 	push	acc
      000AAF C0 D0            [24] 3226 	push	psw
                           0009F1  3227 	C$lab4_m.c$294$1$157 ==.
                                   3228 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:294: if (CF)
                           0009F1  3229 	C$lab4_m.c$296$2$158 ==.
                                   3230 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:296: CF =0;
      000AB1 10 DF 02         [24] 3231 	jbc	_CF,00108$
      000AB4 80 0E            [24] 3232 	sjmp	00102$
      000AB6                       3233 00108$:
                           0009F6  3234 	C$lab4_m.c$297$2$158 ==.
                                   3235 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:297: PCA0 = PCA_START;
      000AB6 75 E9 00         [24] 3236 	mov	((_PCA0 >> 0) & 0xFF),#0x00
      000AB9 75 F9 70         [24] 3237 	mov	((_PCA0 >> 8) & 0xFF),#0x70
                           0009FC  3238 	C$lab4_m.c$298$2$158 ==.
                                   3239 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:298: count++;
      000ABC 05 36            [12] 3240 	inc	_count
      000ABE E4               [12] 3241 	clr	a
      000ABF B5 36 02         [24] 3242 	cjne	a,_count,00109$
      000AC2 05 37            [12] 3243 	inc	(_count + 1)
      000AC4                       3244 00109$:
      000AC4                       3245 00102$:
                           000A04  3246 	C$lab4_m.c$303$1$157 ==.
                                   3247 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:303: PCA0CN &= 0xC0;
      000AC4 53 D8 C0         [24] 3248 	anl	_PCA0CN,#0xC0
      000AC7 D0 D0            [24] 3249 	pop	psw
      000AC9 D0 E0            [24] 3250 	pop	acc
                           000A0B  3251 	C$lab4_m.c$304$1$157 ==.
                           000A0B  3252 	XG$PCA_ISR$0$0 ==.
      000ACB 32               [24] 3253 	reti
                                   3254 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   3255 ;	eliminated unneeded push/pop dpl
                                   3256 ;	eliminated unneeded push/pop dph
                                   3257 ;	eliminated unneeded push/pop b
                                   3258 ;------------------------------------------------------------
                                   3259 ;Allocation info for local variables in function 'direction'
                                   3260 ;------------------------------------------------------------
                                   3261 ;value                     Allocated to registers r6 r7 
                                   3262 ;------------------------------------------------------------
                           000A0C  3263 	G$direction$0$0 ==.
                           000A0C  3264 	C$lab4_m.c$311$1$157 ==.
                                   3265 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:311: unsigned int direction(void)
                                   3266 ;	-----------------------------------------
                                   3267 ;	 function direction
                                   3268 ;	-----------------------------------------
      000ACC                       3269 _direction:
                           000A0C  3270 	C$lab4_m.c$314$1$160 ==.
                                   3271 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:314: count =0;
      000ACC E4               [12] 3272 	clr	a
      000ACD F5 36            [12] 3273 	mov	_count,a
      000ACF F5 37            [12] 3274 	mov	(_count + 1),a
                           000A11  3275 	C$lab4_m.c$315$1$160 ==.
                                   3276 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:315: while (count < 1);
      000AD1                       3277 00101$:
      000AD1 C3               [12] 3278 	clr	c
      000AD2 E5 36            [12] 3279 	mov	a,_count
      000AD4 94 01            [12] 3280 	subb	a,#0x01
      000AD6 E5 37            [12] 3281 	mov	a,(_count + 1)
      000AD8 94 00            [12] 3282 	subb	a,#0x00
      000ADA 40 F5            [24] 3283 	jc	00101$
                           000A1C  3284 	C$lab4_m.c$316$1$160 ==.
                                   3285 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:316: lcd_clear();
      000ADC 12 01 A1         [24] 3286 	lcall	_lcd_clear
                           000A1F  3287 	C$lab4_m.c$317$1$160 ==.
                                   3288 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:317: lcd_print("Calibration:\nHello world!\n012_345_678:\nabc def ghij");
      000ADF 74 DB            [12] 3289 	mov	a,#___str_6
      000AE1 C0 E0            [24] 3290 	push	acc
      000AE3 74 18            [12] 3291 	mov	a,#(___str_6 >> 8)
      000AE5 C0 E0            [24] 3292 	push	acc
      000AE7 74 80            [12] 3293 	mov	a,#0x80
      000AE9 C0 E0            [24] 3294 	push	acc
      000AEB 12 01 1C         [24] 3295 	lcall	_lcd_print
      000AEE 15 81            [12] 3296 	dec	sp
      000AF0 15 81            [12] 3297 	dec	sp
      000AF2 15 81            [12] 3298 	dec	sp
                           000A34  3299 	C$lab4_m.c$318$1$160 ==.
                                   3300 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:318: start();
      000AF4 12 0B 56         [24] 3301 	lcall	_start
                           000A37  3302 	C$lab4_m.c$319$1$160 ==.
                                   3303 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:319: lcd_clear();
      000AF7 12 01 A1         [24] 3304 	lcall	_lcd_clear
                           000A3A  3305 	C$lab4_m.c$320$1$160 ==.
                                   3306 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:320: value = kpd_input(0);
      000AFA 75 82 00         [24] 3307 	mov	dpl,#0x00
      000AFD 12 02 59         [24] 3308 	lcall	_kpd_input
      000B00 AE 82            [24] 3309 	mov	r6,dpl
      000B02 AF 83            [24] 3310 	mov	r7,dph
                           000A44  3311 	C$lab4_m.c$321$1$160 ==.
                                   3312 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:321: lcd_clear();
      000B04 C0 07            [24] 3313 	push	ar7
      000B06 C0 06            [24] 3314 	push	ar6
      000B08 12 01 A1         [24] 3315 	lcall	_lcd_clear
      000B0B D0 06            [24] 3316 	pop	ar6
      000B0D D0 07            [24] 3317 	pop	ar7
                           000A4F  3318 	C$lab4_m.c$322$1$160 ==.
                                   3319 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:322: lcd_print("\r\nThe desired direction is: %d", value);
      000B0F C0 07            [24] 3320 	push	ar7
      000B11 C0 06            [24] 3321 	push	ar6
      000B13 C0 06            [24] 3322 	push	ar6
      000B15 C0 07            [24] 3323 	push	ar7
      000B17 74 0F            [12] 3324 	mov	a,#___str_7
      000B19 C0 E0            [24] 3325 	push	acc
      000B1B 74 19            [12] 3326 	mov	a,#(___str_7 >> 8)
      000B1D C0 E0            [24] 3327 	push	acc
      000B1F 74 80            [12] 3328 	mov	a,#0x80
      000B21 C0 E0            [24] 3329 	push	acc
      000B23 12 01 1C         [24] 3330 	lcall	_lcd_print
      000B26 E5 81            [12] 3331 	mov	a,sp
      000B28 24 FB            [12] 3332 	add	a,#0xfb
      000B2A F5 81            [12] 3333 	mov	sp,a
      000B2C D0 06            [24] 3334 	pop	ar6
      000B2E D0 07            [24] 3335 	pop	ar7
                           000A70  3336 	C$lab4_m.c$323$1$160 ==.
                                   3337 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:323: printf("\r\nThe desired direction is: %d", value);
      000B30 C0 07            [24] 3338 	push	ar7
      000B32 C0 06            [24] 3339 	push	ar6
      000B34 C0 06            [24] 3340 	push	ar6
      000B36 C0 07            [24] 3341 	push	ar7
      000B38 74 0F            [12] 3342 	mov	a,#___str_7
      000B3A C0 E0            [24] 3343 	push	acc
      000B3C 74 19            [12] 3344 	mov	a,#(___str_7 >> 8)
      000B3E C0 E0            [24] 3345 	push	acc
      000B40 74 80            [12] 3346 	mov	a,#0x80
      000B42 C0 E0            [24] 3347 	push	acc
      000B44 12 10 A2         [24] 3348 	lcall	_printf
      000B47 E5 81            [12] 3349 	mov	a,sp
      000B49 24 FB            [12] 3350 	add	a,#0xfb
      000B4B F5 81            [12] 3351 	mov	sp,a
      000B4D D0 06            [24] 3352 	pop	ar6
      000B4F D0 07            [24] 3353 	pop	ar7
                           000A91  3354 	C$lab4_m.c$325$1$160 ==.
                                   3355 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:325: return value;
      000B51 8E 82            [24] 3356 	mov	dpl,r6
      000B53 8F 83            [24] 3357 	mov	dph,r7
                           000A95  3358 	C$lab4_m.c$327$1$160 ==.
                           000A95  3359 	XG$direction$0$0 ==.
      000B55 22               [24] 3360 	ret
                                   3361 ;------------------------------------------------------------
                                   3362 ;Allocation info for local variables in function 'start'
                                   3363 ;------------------------------------------------------------
                           000A96  3364 	G$start$0$0 ==.
                           000A96  3365 	C$lab4_m.c$329$1$160 ==.
                                   3366 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:329: void start(void)
                                   3367 ;	-----------------------------------------
                                   3368 ;	 function start
                                   3369 ;	-----------------------------------------
      000B56                       3370 _start:
                           000A96  3371 	C$lab4_m.c$331$1$162 ==.
                                   3372 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:331: while (read_keypad() != '*') wait();
      000B56                       3373 00101$:
      000B56 12 01 DA         [24] 3374 	lcall	_read_keypad
      000B59 AF 82            [24] 3375 	mov	r7,dpl
      000B5B BF 2A 02         [24] 3376 	cjne	r7,#0x2A,00112$
      000B5E 80 05            [24] 3377 	sjmp	00104$
      000B60                       3378 00112$:
      000B60 12 0B 66         [24] 3379 	lcall	_wait
      000B63 80 F1            [24] 3380 	sjmp	00101$
      000B65                       3381 00104$:
                           000AA5  3382 	C$lab4_m.c$332$1$162 ==.
                           000AA5  3383 	XG$start$0$0 ==.
      000B65 22               [24] 3384 	ret
                                   3385 ;------------------------------------------------------------
                                   3386 ;Allocation info for local variables in function 'wait'
                                   3387 ;------------------------------------------------------------
                                   3388 ;old_c                     Allocated to registers r6 r7 
                                   3389 ;------------------------------------------------------------
                           000AA6  3390 	G$wait$0$0 ==.
                           000AA6  3391 	C$lab4_m.c$334$1$162 ==.
                                   3392 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:334: void wait(void)
                                   3393 ;	-----------------------------------------
                                   3394 ;	 function wait
                                   3395 ;	-----------------------------------------
      000B66                       3396 _wait:
                           000AA6  3397 	C$lab4_m.c$336$1$164 ==.
                                   3398 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:336: unsigned int old_c = count+1;
      000B66 74 01            [12] 3399 	mov	a,#0x01
      000B68 25 36            [12] 3400 	add	a,_count
      000B6A FE               [12] 3401 	mov	r6,a
      000B6B E4               [12] 3402 	clr	a
      000B6C 35 37            [12] 3403 	addc	a,(_count + 1)
      000B6E FF               [12] 3404 	mov	r7,a
                           000AAF  3405 	C$lab4_m.c$337$1$164 ==.
                                   3406 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:337: while (count < old_c);
      000B6F                       3407 00101$:
      000B6F C3               [12] 3408 	clr	c
      000B70 E5 36            [12] 3409 	mov	a,_count
      000B72 9E               [12] 3410 	subb	a,r6
      000B73 E5 37            [12] 3411 	mov	a,(_count + 1)
      000B75 9F               [12] 3412 	subb	a,r7
      000B76 40 F7            [24] 3413 	jc	00101$
                           000AB8  3414 	C$lab4_m.c$338$1$164 ==.
                           000AB8  3415 	XG$wait$0$0 ==.
      000B78 22               [24] 3416 	ret
                                   3417 ;------------------------------------------------------------
                                   3418 ;Allocation info for local variables in function 'Steering_func'
                                   3419 ;------------------------------------------------------------
                           000AB9  3420 	G$Steering_func$0$0 ==.
                           000AB9  3421 	C$lab4_m.c$340$1$164 ==.
                                   3422 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:340: void Steering_func(void)
                                   3423 ;	-----------------------------------------
                                   3424 ;	 function Steering_func
                                   3425 ;	-----------------------------------------
      000B79                       3426 _Steering_func:
                           000AB9  3427 	C$lab4_m.c$342$1$166 ==.
                                   3428 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:342: actual_heading = ReadCompass();
      000B79 12 07 E6         [24] 3429 	lcall	_ReadCompass
      000B7C 85 82 38         [24] 3430 	mov	_actual_heading,dpl
      000B7F 85 83 39         [24] 3431 	mov	(_actual_heading + 1),dph
                           000AC2  3432 	C$lab4_m.c$343$1$166 ==.
                                   3433 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:343: offset = (unsigned int)((actual_heading +3600- desired_heading ) % 3600);
      000B82 74 10            [12] 3434 	mov	a,#0x10
      000B84 25 38            [12] 3435 	add	a,_actual_heading
      000B86 FE               [12] 3436 	mov	r6,a
      000B87 74 0E            [12] 3437 	mov	a,#0x0E
      000B89 35 39            [12] 3438 	addc	a,(_actual_heading + 1)
      000B8B FF               [12] 3439 	mov	r7,a
      000B8C EE               [12] 3440 	mov	a,r6
      000B8D C3               [12] 3441 	clr	c
      000B8E 95 3A            [12] 3442 	subb	a,_desired_heading
      000B90 F5 82            [12] 3443 	mov	dpl,a
      000B92 EF               [12] 3444 	mov	a,r7
      000B93 95 3B            [12] 3445 	subb	a,(_desired_heading + 1)
      000B95 F5 83            [12] 3446 	mov	dph,a
      000B97 75 11 10         [24] 3447 	mov	__modsint_PARM_2,#0x10
      000B9A 75 12 0E         [24] 3448 	mov	(__modsint_PARM_2 + 1),#0x0E
      000B9D 12 17 8F         [24] 3449 	lcall	__modsint
      000BA0 AE 82            [24] 3450 	mov	r6,dpl
      000BA2 AF 83            [24] 3451 	mov	r7,dph
      000BA4 8E 3E            [24] 3452 	mov	_offset,r6
      000BA6 8F 3F            [24] 3453 	mov	(_offset + 1),r7
                           000AE8  3454 	C$lab4_m.c$345$1$166 ==.
                                   3455 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:345: Steering_Servo(offset);
      000BA8 85 3E 82         [24] 3456 	mov	dpl,_offset
      000BAB 85 3F 83         [24] 3457 	mov	dph,(_offset + 1)
      000BAE 12 08 0C         [24] 3458 	lcall	_Steering_Servo
                           000AF1  3459 	C$lab4_m.c$347$1$166 ==.
                           000AF1  3460 	XG$Steering_func$0$0 ==.
      000BB1 22               [24] 3461 	ret
                                   3462 ;------------------------------------------------------------
                                   3463 ;Allocation info for local variables in function 'Drive_func'
                                   3464 ;------------------------------------------------------------
                                   3465 ;r_data                    Allocated with name '_Drive_func_r_data_1_168'
                                   3466 ;r_addr                    Allocated to registers 
                                   3467 ;read                      Allocated to registers 
                                   3468 ;------------------------------------------------------------
                           000AF2  3469 	G$Drive_func$0$0 ==.
                           000AF2  3470 	C$lab4_m.c$349$1$166 ==.
                                   3471 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:349: void Drive_func(void)
                                   3472 ;	-----------------------------------------
                                   3473 ;	 function Drive_func
                                   3474 ;	-----------------------------------------
      000BB2                       3475 _Drive_func:
                           000AF2  3476 	C$lab4_m.c$355$1$168 ==.
                                   3477 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:355: r_data[0] = 0x51;
      000BB2 75 4D 51         [24] 3478 	mov	_Drive_func_r_data_1_168,#0x51
                           000AF5  3479 	C$lab4_m.c$356$1$168 ==.
                                   3480 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:356: range = Read_Ranger();
      000BB5 12 07 BD         [24] 3481 	lcall	_Read_Ranger
      000BB8 85 82 40         [24] 3482 	mov	_range,dpl
      000BBB 85 83 41         [24] 3483 	mov	(_range + 1),dph
                           000AFE  3484 	C$lab4_m.c$358$1$168 ==.
                                   3485 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:358: i2c_write_data(r_addr, 0, r_data, 1);
      000BBE 75 28 4D         [24] 3486 	mov	_i2c_write_data_PARM_3,#_Drive_func_r_data_1_168
      000BC1 75 29 00         [24] 3487 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      000BC4 75 2A 40         [24] 3488 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000BC7 75 27 00         [24] 3489 	mov	_i2c_write_data_PARM_2,#0x00
      000BCA 75 2B 01         [24] 3490 	mov	_i2c_write_data_PARM_4,#0x01
      000BCD 75 82 E0         [24] 3491 	mov	dpl,#0xE0
      000BD0 12 04 32         [24] 3492 	lcall	_i2c_write_data
                           000B13  3493 	C$lab4_m.c$359$1$168 ==.
                                   3494 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:359: printf("\r\n The range is: %u", range);
      000BD3 C0 40            [24] 3495 	push	_range
      000BD5 C0 41            [24] 3496 	push	(_range + 1)
      000BD7 74 2E            [12] 3497 	mov	a,#___str_8
      000BD9 C0 E0            [24] 3498 	push	acc
      000BDB 74 19            [12] 3499 	mov	a,#(___str_8 >> 8)
      000BDD C0 E0            [24] 3500 	push	acc
      000BDF 74 80            [12] 3501 	mov	a,#0x80
      000BE1 C0 E0            [24] 3502 	push	acc
      000BE3 12 10 A2         [24] 3503 	lcall	_printf
      000BE6 E5 81            [12] 3504 	mov	a,sp
      000BE8 24 FB            [12] 3505 	add	a,#0xfb
      000BEA F5 81            [12] 3506 	mov	sp,a
                           000B2C  3507 	C$lab4_m.c$360$1$168 ==.
                                   3508 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:360: Drive_Motor();
      000BEC 12 06 7E         [24] 3509 	lcall	_Drive_Motor
                           000B2F  3510 	C$lab4_m.c$362$1$168 ==.
                           000B2F  3511 	XG$Drive_func$0$0 ==.
      000BEF 22               [24] 3512 	ret
                                   3513 ;------------------------------------------------------------
                                   3514 ;Allocation info for local variables in function 'read_AD_input'
                                   3515 ;------------------------------------------------------------
                                   3516 ;n                         Allocated to registers 
                                   3517 ;------------------------------------------------------------
                           000B30  3518 	G$read_AD_input$0$0 ==.
                           000B30  3519 	C$lab4_m.c$364$1$168 ==.
                                   3520 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:364: unsigned long read_AD_input(unsigned char n)
                                   3521 ;	-----------------------------------------
                                   3522 ;	 function read_AD_input
                                   3523 ;	-----------------------------------------
      000BF0                       3524 _read_AD_input:
      000BF0 85 82 AC         [24] 3525 	mov	_AMX1SL,dpl
                           000B33  3526 	C$lab4_m.c$367$1$170 ==.
                                   3527 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:367: ADC1CN = ADC1CN & ~0x20;
      000BF3 AF AA            [24] 3528 	mov	r7,_ADC1CN
      000BF5 74 DF            [12] 3529 	mov	a,#0xDF
      000BF7 5F               [12] 3530 	anl	a,r7
      000BF8 F5 AA            [12] 3531 	mov	_ADC1CN,a
                           000B3A  3532 	C$lab4_m.c$368$1$170 ==.
                                   3533 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:368: ADC1CN = ADC1CN | 0x10;
      000BFA 43 AA 10         [24] 3534 	orl	_ADC1CN,#0x10
                           000B3D  3535 	C$lab4_m.c$369$1$170 ==.
                                   3536 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:369: while ((ADC1CN & 0x20)== 0x00);
      000BFD                       3537 00101$:
      000BFD E5 AA            [12] 3538 	mov	a,_ADC1CN
      000BFF 30 E5 FB         [24] 3539 	jnb	acc.5,00101$
                           000B42  3540 	C$lab4_m.c$371$1$170 ==.
                                   3541 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:371: return ADC1;
      000C02 AC 9C            [24] 3542 	mov	r4,_ADC1
      000C04 7D 00            [12] 3543 	mov	r5,#0x00
      000C06 7E 00            [12] 3544 	mov	r6,#0x00
      000C08 7F 00            [12] 3545 	mov	r7,#0x00
      000C0A 8C 82            [24] 3546 	mov	dpl,r4
      000C0C 8D 83            [24] 3547 	mov	dph,r5
      000C0E 8E F0            [24] 3548 	mov	b,r6
      000C10 EF               [12] 3549 	mov	a,r7
                           000B51  3550 	C$lab4_m.c$373$1$170 ==.
                           000B51  3551 	XG$read_AD_input$0$0 ==.
      000C11 22               [24] 3552 	ret
                                   3553 ;------------------------------------------------------------
                                   3554 ;Allocation info for local variables in function 'ADC_Init'
                                   3555 ;------------------------------------------------------------
                           000B52  3556 	G$ADC_Init$0$0 ==.
                           000B52  3557 	C$lab4_m.c$375$1$170 ==.
                                   3558 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:375: void ADC_Init(void)								/////SETS ADC 
                                   3559 ;	-----------------------------------------
                                   3560 ;	 function ADC_Init
                                   3561 ;	-----------------------------------------
      000C12                       3562 _ADC_Init:
                           000B52  3563 	C$lab4_m.c$377$1$172 ==.
                                   3564 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:377: REF0CN = 0x03;
      000C12 75 D1 03         [24] 3565 	mov	_REF0CN,#0x03
                           000B55  3566 	C$lab4_m.c$378$1$172 ==.
                                   3567 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:378: ADC1CN = 0x80;
      000C15 75 AA 80         [24] 3568 	mov	_ADC1CN,#0x80
                           000B58  3569 	C$lab4_m.c$379$1$172 ==.
                                   3570 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:379: ADC1CF |= 0x01;
      000C18 43 AB 01         [24] 3571 	orl	_ADC1CF,#0x01
                           000B5B  3572 	C$lab4_m.c$380$1$172 ==.
                           000B5B  3573 	XG$ADC_Init$0$0 ==.
      000C1B 22               [24] 3574 	ret
                                   3575 ;------------------------------------------------------------
                                   3576 ;Allocation info for local variables in function 'Battery_func'
                                   3577 ;------------------------------------------------------------
                           000B5C  3578 	G$Battery_func$0$0 ==.
                           000B5C  3579 	C$lab4_m.c$383$1$172 ==.
                                   3580 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:383: void Battery_func(void)
                                   3581 ;	-----------------------------------------
                                   3582 ;	 function Battery_func
                                   3583 ;	-----------------------------------------
      000C1C                       3584 _Battery_func:
                           000B5C  3585 	C$lab4_m.c$385$1$174 ==.
                                   3586 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:385: lcd_clear();
      000C1C 12 01 A1         [24] 3587 	lcall	_lcd_clear
                           000B5F  3588 	C$lab4_m.c$386$1$174 ==.
                                   3589 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:386: lcd_print( "\r\nBattery is: %ld",read_AD_input(4));
      000C1F 75 82 04         [24] 3590 	mov	dpl,#0x04
      000C22 12 0B F0         [24] 3591 	lcall	_read_AD_input
      000C25 AC 82            [24] 3592 	mov	r4,dpl
      000C27 AD 83            [24] 3593 	mov	r5,dph
      000C29 AE F0            [24] 3594 	mov	r6,b
      000C2B FF               [12] 3595 	mov	r7,a
      000C2C C0 04            [24] 3596 	push	ar4
      000C2E C0 05            [24] 3597 	push	ar5
      000C30 C0 06            [24] 3598 	push	ar6
      000C32 C0 07            [24] 3599 	push	ar7
      000C34 74 42            [12] 3600 	mov	a,#___str_9
      000C36 C0 E0            [24] 3601 	push	acc
      000C38 74 19            [12] 3602 	mov	a,#(___str_9 >> 8)
      000C3A C0 E0            [24] 3603 	push	acc
      000C3C 74 80            [12] 3604 	mov	a,#0x80
      000C3E C0 E0            [24] 3605 	push	acc
      000C40 12 01 1C         [24] 3606 	lcall	_lcd_print
      000C43 E5 81            [12] 3607 	mov	a,sp
      000C45 24 F9            [12] 3608 	add	a,#0xf9
      000C47 F5 81            [12] 3609 	mov	sp,a
                           000B89  3610 	C$lab4_m.c$387$1$174 ==.
                           000B89  3611 	XG$Battery_func$0$0 ==.
      000C49 22               [24] 3612 	ret
                                   3613 ;------------------------------------------------------------
                                   3614 ;Allocation info for local variables in function 'avoid_crash'
                                   3615 ;------------------------------------------------------------
                           000B8A  3616 	G$avoid_crash$0$0 ==.
                           000B8A  3617 	C$lab4_m.c$389$1$174 ==.
                                   3618 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:389: void avoid_crash(void)
                                   3619 ;	-----------------------------------------
                                   3620 ;	 function avoid_crash
                                   3621 ;	-----------------------------------------
      000C4A                       3622 _avoid_crash:
                           000B8A  3623 	C$lab4_m.c$391$1$176 ==.
                                   3624 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:391: STR_PW = PW_MIN_STR;
      000C4A 75 34 29         [24] 3625 	mov	_STR_PW,#0x29
      000C4D 75 35 09         [24] 3626 	mov	(_STR_PW + 1),#0x09
                           000B90  3627 	C$lab4_m.c$394$1$176 ==.
                                   3628 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:394: STR_lo_to_hi= 0xFFFF - STR_PW;
      000C50 75 32 D6         [24] 3629 	mov	_STR_lo_to_hi,#0xD6
      000C53 75 33 F6         [24] 3630 	mov	(_STR_lo_to_hi + 1),#0xF6
                           000B96  3631 	C$lab4_m.c$395$1$176 ==.
                                   3632 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:395: PCA0CP0 = STR_lo_to_hi;
      000C56 75 EA D6         [24] 3633 	mov	((_PCA0CP0 >> 0) & 0xFF),#0xD6
      000C59 75 FA F6         [24] 3634 	mov	((_PCA0CP0 >> 8) & 0xFF),#0xF6
                           000B9C  3635 	C$lab4_m.c$396$1$176 ==.
                                   3636 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:396: while(range < 45)
      000C5C                       3637 00106$:
      000C5C C3               [12] 3638 	clr	c
      000C5D E5 40            [12] 3639 	mov	a,_range
      000C5F 94 2D            [12] 3640 	subb	a,#0x2D
      000C61 E5 41            [12] 3641 	mov	a,(_range + 1)
      000C63 94 00            [12] 3642 	subb	a,#0x00
      000C65 50 1F            [24] 3643 	jnc	00109$
                           000BA7  3644 	C$lab4_m.c$399$2$177 ==.
                                   3645 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:399: if (count % 4==0)
      000C67 E5 36            [12] 3646 	mov	a,_count
      000C69 54 03            [12] 3647 	anl	a,#0x03
      000C6B 60 02            [24] 3648 	jz	00125$
      000C6D 80 0F            [24] 3649 	sjmp	00104$
      000C6F                       3650 00125$:
                           000BAF  3651 	C$lab4_m.c$401$3$178 ==.
                                   3652 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:401: if (range == -1) Drive_func();
      000C6F 74 FF            [12] 3653 	mov	a,#0xFF
      000C71 B5 40 E8         [24] 3654 	cjne	a,_range,00106$
      000C74 74 FF            [12] 3655 	mov	a,#0xFF
      000C76 B5 41 E3         [24] 3656 	cjne	a,(_range + 1),00106$
      000C79 12 0B B2         [24] 3657 	lcall	_Drive_func
      000C7C 80 DE            [24] 3658 	sjmp	00106$
      000C7E                       3659 00104$:
                           000BBE  3660 	C$lab4_m.c$404$3$179 ==.
                                   3661 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:404: range = -1;
      000C7E 75 40 FF         [24] 3662 	mov	_range,#0xFF
      000C81 75 41 FF         [24] 3663 	mov	(_range + 1),#0xFF
      000C84 80 D6            [24] 3664 	sjmp	00106$
      000C86                       3665 00109$:
                           000BC6  3666 	C$lab4_m.c$409$1$176 ==.
                           000BC6  3667 	XG$avoid_crash$0$0 ==.
      000C86 22               [24] 3668 	ret
                                   3669 	.area CSEG    (CODE)
                                   3670 	.area CONST   (CODE)
                           000000  3671 Flab4_m$__str_0$0$0 == .
      001858                       3672 ___str_0:
      001858 0A                    3673 	.db 0x0A
      001859 54 79 70 65 20 64 69  3674 	.ascii "Type digits; end w/#"
             67 69 74 73 3B 20 65
             6E 64 20 77 2F 23
      00186D 00                    3675 	.db 0x00
                           000016  3676 Flab4_m$__str_1$0$0 == .
      00186E                       3677 ___str_1:
      00186E 20 20 20 20 20 25 63  3678 	.ascii "     %c%c%c%c%c"
             25 63 25 63 25 63 25
             63
      00187D 00                    3679 	.db 0x00
                           000026  3680 Flab4_m$__str_2$0$0 == .
      00187E                       3681 ___str_2:
      00187E 25 63                 3682 	.ascii "%c"
      001880 00                    3683 	.db 0x00
                           000029  3684 Flab4_m$__str_3$0$0 == .
      001881                       3685 ___str_3:
      001881 0D                    3686 	.db 0x0D
      001882 0A                    3687 	.db 0x0A
      001883 45 6D 62 65 64 64 65  3688 	.ascii "Embedded Control Car Calibration"
             64 20 43 6F 6E 74 72
             6F 6C 20 43 61 72 20
             43 61 6C 69 62 72 61
             74 69 6F 6E
      0018A3 00                    3689 	.db 0x00
                           00004C  3690 Flab4_m$__str_4$0$0 == .
      0018A4                       3691 ___str_4:
      0018A4 0D                    3692 	.db 0x0D
      0018A5 0A                    3693 	.db 0x0A
      0018A6 45 6D 62 65 64 64 65  3694 	.ascii "Embedded Control Car ready!"
             64 20 43 6F 6E 74 72
             6F 6C 20 43 61 72 20
             72 65 61 64 79 21
      0018C1 00                    3695 	.db 0x00
                           00006A  3696 Flab4_m$__str_5$0$0 == .
      0018C2                       3697 ___str_5:
      0018C2 0D                    3698 	.db 0x0D
      0018C3 0A                    3699 	.db 0x0A
      0018C4 20 54 68 65 20 63 6F  3700 	.ascii " The control is paused"
             6E 74 72 6F 6C 20 69
             73 20 70 61 75 73 65
             64
      0018DA 00                    3701 	.db 0x00
                           000083  3702 Flab4_m$__str_6$0$0 == .
      0018DB                       3703 ___str_6:
      0018DB 43 61 6C 69 62 72 61  3704 	.ascii "Calibration:"
             74 69 6F 6E 3A
      0018E7 0A                    3705 	.db 0x0A
      0018E8 48 65 6C 6C 6F 20 77  3706 	.ascii "Hello world!"
             6F 72 6C 64 21
      0018F4 0A                    3707 	.db 0x0A
      0018F5 30 31 32 5F 33 34 35  3708 	.ascii "012_345_678:"
             5F 36 37 38 3A
      001901 0A                    3709 	.db 0x0A
      001902 61 62 63 20 64 65 66  3710 	.ascii "abc def ghij"
             20 67 68 69 6A
      00190E 00                    3711 	.db 0x00
                           0000B7  3712 Flab4_m$__str_7$0$0 == .
      00190F                       3713 ___str_7:
      00190F 0D                    3714 	.db 0x0D
      001910 0A                    3715 	.db 0x0A
      001911 54 68 65 20 64 65 73  3716 	.ascii "The desired direction is: %d"
             69 72 65 64 20 64 69
             72 65 63 74 69 6F 6E
             20 69 73 3A 20 25 64
      00192D 00                    3717 	.db 0x00
                           0000D6  3718 Flab4_m$__str_8$0$0 == .
      00192E                       3719 ___str_8:
      00192E 0D                    3720 	.db 0x0D
      00192F 0A                    3721 	.db 0x0A
      001930 20 54 68 65 20 72 61  3722 	.ascii " The range is: %u"
             6E 67 65 20 69 73 3A
             20 25 75
      001941 00                    3723 	.db 0x00
                           0000EA  3724 Flab4_m$__str_9$0$0 == .
      001942                       3725 ___str_9:
      001942 0D                    3726 	.db 0x0D
      001943 0A                    3727 	.db 0x0A
      001944 42 61 74 74 65 72 79  3728 	.ascii "Battery is: %ld"
             20 69 73 3A 20 25 6C
             64
      001953 00                    3729 	.db 0x00
                                   3730 	.area XINIT   (CODE)
                                   3731 	.area CABS    (ABS,CODE)
