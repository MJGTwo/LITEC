                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (Apr  5 2014) (MINGW32)
                                      4 ; This file was generated Mon Apr 13 23:25:21 2015
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
                                    307 	.globl _r_input
                                    308 	.globl _new_heading
                                    309 	.globl _MOTOR_PW
                                    310 	.globl _r_data
                                    311 	.globl _new_range
                                    312 	.globl _r_addr
                                    313 	.globl _c_counts
                                    314 	.globl _r_counts
                                    315 	.globl _range
                                    316 	.globl _offset
                                    317 	.globl _error
                                    318 	.globl _desired_heading
                                    319 	.globl _actual_heading
                                    320 	.globl _input
                                    321 	.globl _count
                                    322 	.globl _STR_PW
                                    323 	.globl _tmp0_lo_to_hi
                                    324 	.globl _i2c_read_data_PARM_4
                                    325 	.globl _i2c_read_data_PARM_3
                                    326 	.globl _i2c_read_data_PARM_2
                                    327 	.globl _i2c_write_data_PARM_4
                                    328 	.globl _i2c_write_data_PARM_3
                                    329 	.globl _i2c_write_data_PARM_2
                                    330 	.globl _putchar
                                    331 	.globl _getchar
                                    332 	.globl _lcd_print
                                    333 	.globl _lcd_clear
                                    334 	.globl _kpd_input
                                    335 	.globl _delay_time
                                    336 	.globl _i2c_start
                                    337 	.globl _i2c_write
                                    338 	.globl _i2c_write_and_stop
                                    339 	.globl _i2c_read
                                    340 	.globl _i2c_read_and_stop
                                    341 	.globl _i2c_write_data
                                    342 	.globl _i2c_read_data
                                    343 	.globl _Accel_Init
                                    344 	.globl _Drive_Motor
                                    345 	.globl _Read_Ranger
                                    346 	.globl _ReadCompass
                                    347 	.globl _Steering_Servo
                                    348 	.globl _Port_Init
                                    349 	.globl _XBR0_Init
                                    350 	.globl _SMB_Init
                                    351 	.globl _PCA_Init
                                    352 ;--------------------------------------------------------
                                    353 ; special function registers
                                    354 ;--------------------------------------------------------
                                    355 	.area RSEG    (ABS,DATA)
      000000                        356 	.org 0x0000
                           000080   357 G$P0$0$0 == 0x0080
                           000080   358 _P0	=	0x0080
                           000081   359 G$SP$0$0 == 0x0081
                           000081   360 _SP	=	0x0081
                           000082   361 G$DPL$0$0 == 0x0082
                           000082   362 _DPL	=	0x0082
                           000083   363 G$DPH$0$0 == 0x0083
                           000083   364 _DPH	=	0x0083
                           000084   365 G$P4$0$0 == 0x0084
                           000084   366 _P4	=	0x0084
                           000085   367 G$P5$0$0 == 0x0085
                           000085   368 _P5	=	0x0085
                           000086   369 G$P6$0$0 == 0x0086
                           000086   370 _P6	=	0x0086
                           000087   371 G$PCON$0$0 == 0x0087
                           000087   372 _PCON	=	0x0087
                           000088   373 G$TCON$0$0 == 0x0088
                           000088   374 _TCON	=	0x0088
                           000089   375 G$TMOD$0$0 == 0x0089
                           000089   376 _TMOD	=	0x0089
                           00008A   377 G$TL0$0$0 == 0x008a
                           00008A   378 _TL0	=	0x008a
                           00008B   379 G$TL1$0$0 == 0x008b
                           00008B   380 _TL1	=	0x008b
                           00008C   381 G$TH0$0$0 == 0x008c
                           00008C   382 _TH0	=	0x008c
                           00008D   383 G$TH1$0$0 == 0x008d
                           00008D   384 _TH1	=	0x008d
                           00008E   385 G$CKCON$0$0 == 0x008e
                           00008E   386 _CKCON	=	0x008e
                           00008F   387 G$PSCTL$0$0 == 0x008f
                           00008F   388 _PSCTL	=	0x008f
                           000090   389 G$P1$0$0 == 0x0090
                           000090   390 _P1	=	0x0090
                           000091   391 G$TMR3CN$0$0 == 0x0091
                           000091   392 _TMR3CN	=	0x0091
                           000092   393 G$TMR3RLL$0$0 == 0x0092
                           000092   394 _TMR3RLL	=	0x0092
                           000093   395 G$TMR3RLH$0$0 == 0x0093
                           000093   396 _TMR3RLH	=	0x0093
                           000094   397 G$TMR3L$0$0 == 0x0094
                           000094   398 _TMR3L	=	0x0094
                           000095   399 G$TMR3H$0$0 == 0x0095
                           000095   400 _TMR3H	=	0x0095
                           000096   401 G$P7$0$0 == 0x0096
                           000096   402 _P7	=	0x0096
                           000098   403 G$SCON$0$0 == 0x0098
                           000098   404 _SCON	=	0x0098
                           000098   405 G$SCON0$0$0 == 0x0098
                           000098   406 _SCON0	=	0x0098
                           000099   407 G$SBUF$0$0 == 0x0099
                           000099   408 _SBUF	=	0x0099
                           000099   409 G$SBUF0$0$0 == 0x0099
                           000099   410 _SBUF0	=	0x0099
                           00009A   411 G$SPI0CFG$0$0 == 0x009a
                           00009A   412 _SPI0CFG	=	0x009a
                           00009B   413 G$SPI0DAT$0$0 == 0x009b
                           00009B   414 _SPI0DAT	=	0x009b
                           00009C   415 G$ADC1$0$0 == 0x009c
                           00009C   416 _ADC1	=	0x009c
                           00009D   417 G$SPI0CKR$0$0 == 0x009d
                           00009D   418 _SPI0CKR	=	0x009d
                           00009E   419 G$CPT0CN$0$0 == 0x009e
                           00009E   420 _CPT0CN	=	0x009e
                           00009F   421 G$CPT1CN$0$0 == 0x009f
                           00009F   422 _CPT1CN	=	0x009f
                           0000A0   423 G$P2$0$0 == 0x00a0
                           0000A0   424 _P2	=	0x00a0
                           0000A1   425 G$EMI0TC$0$0 == 0x00a1
                           0000A1   426 _EMI0TC	=	0x00a1
                           0000A3   427 G$EMI0CF$0$0 == 0x00a3
                           0000A3   428 _EMI0CF	=	0x00a3
                           0000A4   429 G$PRT0CF$0$0 == 0x00a4
                           0000A4   430 _PRT0CF	=	0x00a4
                           0000A4   431 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   432 _P0MDOUT	=	0x00a4
                           0000A5   433 G$PRT1CF$0$0 == 0x00a5
                           0000A5   434 _PRT1CF	=	0x00a5
                           0000A5   435 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   436 _P1MDOUT	=	0x00a5
                           0000A6   437 G$PRT2CF$0$0 == 0x00a6
                           0000A6   438 _PRT2CF	=	0x00a6
                           0000A6   439 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   440 _P2MDOUT	=	0x00a6
                           0000A7   441 G$PRT3CF$0$0 == 0x00a7
                           0000A7   442 _PRT3CF	=	0x00a7
                           0000A7   443 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   444 _P3MDOUT	=	0x00a7
                           0000A8   445 G$IE$0$0 == 0x00a8
                           0000A8   446 _IE	=	0x00a8
                           0000A9   447 G$SADDR0$0$0 == 0x00a9
                           0000A9   448 _SADDR0	=	0x00a9
                           0000AA   449 G$ADC1CN$0$0 == 0x00aa
                           0000AA   450 _ADC1CN	=	0x00aa
                           0000AB   451 G$ADC1CF$0$0 == 0x00ab
                           0000AB   452 _ADC1CF	=	0x00ab
                           0000AC   453 G$AMX1SL$0$0 == 0x00ac
                           0000AC   454 _AMX1SL	=	0x00ac
                           0000AD   455 G$P3IF$0$0 == 0x00ad
                           0000AD   456 _P3IF	=	0x00ad
                           0000AE   457 G$SADEN1$0$0 == 0x00ae
                           0000AE   458 _SADEN1	=	0x00ae
                           0000AF   459 G$EMI0CN$0$0 == 0x00af
                           0000AF   460 _EMI0CN	=	0x00af
                           0000AF   461 G$_XPAGE$0$0 == 0x00af
                           0000AF   462 __XPAGE	=	0x00af
                           0000B0   463 G$P3$0$0 == 0x00b0
                           0000B0   464 _P3	=	0x00b0
                           0000B1   465 G$OSCXCN$0$0 == 0x00b1
                           0000B1   466 _OSCXCN	=	0x00b1
                           0000B2   467 G$OSCICN$0$0 == 0x00b2
                           0000B2   468 _OSCICN	=	0x00b2
                           0000B5   469 G$P74OUT$0$0 == 0x00b5
                           0000B5   470 _P74OUT	=	0x00b5
                           0000B6   471 G$FLSCL$0$0 == 0x00b6
                           0000B6   472 _FLSCL	=	0x00b6
                           0000B7   473 G$FLACL$0$0 == 0x00b7
                           0000B7   474 _FLACL	=	0x00b7
                           0000B8   475 G$IP$0$0 == 0x00b8
                           0000B8   476 _IP	=	0x00b8
                           0000B9   477 G$SADEN0$0$0 == 0x00b9
                           0000B9   478 _SADEN0	=	0x00b9
                           0000BA   479 G$AMX0CF$0$0 == 0x00ba
                           0000BA   480 _AMX0CF	=	0x00ba
                           0000BB   481 G$AMX0SL$0$0 == 0x00bb
                           0000BB   482 _AMX0SL	=	0x00bb
                           0000BC   483 G$ADC0CF$0$0 == 0x00bc
                           0000BC   484 _ADC0CF	=	0x00bc
                           0000BD   485 G$P1MDIN$0$0 == 0x00bd
                           0000BD   486 _P1MDIN	=	0x00bd
                           0000BE   487 G$ADC0L$0$0 == 0x00be
                           0000BE   488 _ADC0L	=	0x00be
                           0000BF   489 G$ADC0H$0$0 == 0x00bf
                           0000BF   490 _ADC0H	=	0x00bf
                           0000C0   491 G$SMB0CN$0$0 == 0x00c0
                           0000C0   492 _SMB0CN	=	0x00c0
                           0000C1   493 G$SMB0STA$0$0 == 0x00c1
                           0000C1   494 _SMB0STA	=	0x00c1
                           0000C2   495 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   496 _SMB0DAT	=	0x00c2
                           0000C3   497 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   498 _SMB0ADR	=	0x00c3
                           0000C4   499 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   500 _ADC0GTL	=	0x00c4
                           0000C5   501 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   502 _ADC0GTH	=	0x00c5
                           0000C6   503 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   504 _ADC0LTL	=	0x00c6
                           0000C7   505 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   506 _ADC0LTH	=	0x00c7
                           0000C8   507 G$T2CON$0$0 == 0x00c8
                           0000C8   508 _T2CON	=	0x00c8
                           0000C9   509 G$T4CON$0$0 == 0x00c9
                           0000C9   510 _T4CON	=	0x00c9
                           0000CA   511 G$RCAP2L$0$0 == 0x00ca
                           0000CA   512 _RCAP2L	=	0x00ca
                           0000CB   513 G$RCAP2H$0$0 == 0x00cb
                           0000CB   514 _RCAP2H	=	0x00cb
                           0000CC   515 G$TL2$0$0 == 0x00cc
                           0000CC   516 _TL2	=	0x00cc
                           0000CD   517 G$TH2$0$0 == 0x00cd
                           0000CD   518 _TH2	=	0x00cd
                           0000CF   519 G$SMB0CR$0$0 == 0x00cf
                           0000CF   520 _SMB0CR	=	0x00cf
                           0000D0   521 G$PSW$0$0 == 0x00d0
                           0000D0   522 _PSW	=	0x00d0
                           0000D1   523 G$REF0CN$0$0 == 0x00d1
                           0000D1   524 _REF0CN	=	0x00d1
                           0000D2   525 G$DAC0L$0$0 == 0x00d2
                           0000D2   526 _DAC0L	=	0x00d2
                           0000D3   527 G$DAC0H$0$0 == 0x00d3
                           0000D3   528 _DAC0H	=	0x00d3
                           0000D4   529 G$DAC0CN$0$0 == 0x00d4
                           0000D4   530 _DAC0CN	=	0x00d4
                           0000D5   531 G$DAC1L$0$0 == 0x00d5
                           0000D5   532 _DAC1L	=	0x00d5
                           0000D6   533 G$DAC1H$0$0 == 0x00d6
                           0000D6   534 _DAC1H	=	0x00d6
                           0000D7   535 G$DAC1CN$0$0 == 0x00d7
                           0000D7   536 _DAC1CN	=	0x00d7
                           0000D8   537 G$PCA0CN$0$0 == 0x00d8
                           0000D8   538 _PCA0CN	=	0x00d8
                           0000D9   539 G$PCA0MD$0$0 == 0x00d9
                           0000D9   540 _PCA0MD	=	0x00d9
                           0000DA   541 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   542 _PCA0CPM0	=	0x00da
                           0000DB   543 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   544 _PCA0CPM1	=	0x00db
                           0000DC   545 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   546 _PCA0CPM2	=	0x00dc
                           0000DD   547 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   548 _PCA0CPM3	=	0x00dd
                           0000DE   549 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   550 _PCA0CPM4	=	0x00de
                           0000E0   551 G$ACC$0$0 == 0x00e0
                           0000E0   552 _ACC	=	0x00e0
                           0000E1   553 G$XBR0$0$0 == 0x00e1
                           0000E1   554 _XBR0	=	0x00e1
                           0000E2   555 G$XBR1$0$0 == 0x00e2
                           0000E2   556 _XBR1	=	0x00e2
                           0000E3   557 G$XBR2$0$0 == 0x00e3
                           0000E3   558 _XBR2	=	0x00e3
                           0000E4   559 G$RCAP4L$0$0 == 0x00e4
                           0000E4   560 _RCAP4L	=	0x00e4
                           0000E5   561 G$RCAP4H$0$0 == 0x00e5
                           0000E5   562 _RCAP4H	=	0x00e5
                           0000E6   563 G$EIE1$0$0 == 0x00e6
                           0000E6   564 _EIE1	=	0x00e6
                           0000E7   565 G$EIE2$0$0 == 0x00e7
                           0000E7   566 _EIE2	=	0x00e7
                           0000E8   567 G$ADC0CN$0$0 == 0x00e8
                           0000E8   568 _ADC0CN	=	0x00e8
                           0000E9   569 G$PCA0L$0$0 == 0x00e9
                           0000E9   570 _PCA0L	=	0x00e9
                           0000EA   571 G$PCA0CPL0$0$0 == 0x00ea
                           0000EA   572 _PCA0CPL0	=	0x00ea
                           0000EB   573 G$PCA0CPL1$0$0 == 0x00eb
                           0000EB   574 _PCA0CPL1	=	0x00eb
                           0000EC   575 G$PCA0CPL2$0$0 == 0x00ec
                           0000EC   576 _PCA0CPL2	=	0x00ec
                           0000ED   577 G$PCA0CPL3$0$0 == 0x00ed
                           0000ED   578 _PCA0CPL3	=	0x00ed
                           0000EE   579 G$PCA0CPL4$0$0 == 0x00ee
                           0000EE   580 _PCA0CPL4	=	0x00ee
                           0000EF   581 G$RSTSRC$0$0 == 0x00ef
                           0000EF   582 _RSTSRC	=	0x00ef
                           0000F0   583 G$B$0$0 == 0x00f0
                           0000F0   584 _B	=	0x00f0
                           0000F1   585 G$SCON1$0$0 == 0x00f1
                           0000F1   586 _SCON1	=	0x00f1
                           0000F2   587 G$SBUF1$0$0 == 0x00f2
                           0000F2   588 _SBUF1	=	0x00f2
                           0000F3   589 G$SADDR1$0$0 == 0x00f3
                           0000F3   590 _SADDR1	=	0x00f3
                           0000F4   591 G$TL4$0$0 == 0x00f4
                           0000F4   592 _TL4	=	0x00f4
                           0000F5   593 G$TH4$0$0 == 0x00f5
                           0000F5   594 _TH4	=	0x00f5
                           0000F6   595 G$EIP1$0$0 == 0x00f6
                           0000F6   596 _EIP1	=	0x00f6
                           0000F7   597 G$EIP2$0$0 == 0x00f7
                           0000F7   598 _EIP2	=	0x00f7
                           0000F8   599 G$SPI0CN$0$0 == 0x00f8
                           0000F8   600 _SPI0CN	=	0x00f8
                           0000F9   601 G$PCA0H$0$0 == 0x00f9
                           0000F9   602 _PCA0H	=	0x00f9
                           0000FA   603 G$PCA0CPH0$0$0 == 0x00fa
                           0000FA   604 _PCA0CPH0	=	0x00fa
                           0000FB   605 G$PCA0CPH1$0$0 == 0x00fb
                           0000FB   606 _PCA0CPH1	=	0x00fb
                           0000FC   607 G$PCA0CPH2$0$0 == 0x00fc
                           0000FC   608 _PCA0CPH2	=	0x00fc
                           0000FD   609 G$PCA0CPH3$0$0 == 0x00fd
                           0000FD   610 _PCA0CPH3	=	0x00fd
                           0000FE   611 G$PCA0CPH4$0$0 == 0x00fe
                           0000FE   612 _PCA0CPH4	=	0x00fe
                           0000FF   613 G$WDTCN$0$0 == 0x00ff
                           0000FF   614 _WDTCN	=	0x00ff
                           008C8A   615 G$TMR0$0$0 == 0x8c8a
                           008C8A   616 _TMR0	=	0x8c8a
                           008D8B   617 G$TMR1$0$0 == 0x8d8b
                           008D8B   618 _TMR1	=	0x8d8b
                           00CDCC   619 G$TMR2$0$0 == 0xcdcc
                           00CDCC   620 _TMR2	=	0xcdcc
                           00CBCA   621 G$RCAP2$0$0 == 0xcbca
                           00CBCA   622 _RCAP2	=	0xcbca
                           009594   623 G$TMR3$0$0 == 0x9594
                           009594   624 _TMR3	=	0x9594
                           009392   625 G$TMR3RL$0$0 == 0x9392
                           009392   626 _TMR3RL	=	0x9392
                           00F5F4   627 G$TMR4$0$0 == 0xf5f4
                           00F5F4   628 _TMR4	=	0xf5f4
                           00E5E4   629 G$RCAP4$0$0 == 0xe5e4
                           00E5E4   630 _RCAP4	=	0xe5e4
                           00BFBE   631 G$ADC0$0$0 == 0xbfbe
                           00BFBE   632 _ADC0	=	0xbfbe
                           00C5C4   633 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   634 _ADC0GT	=	0xc5c4
                           00C7C6   635 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   636 _ADC0LT	=	0xc7c6
                           00D3D2   637 G$DAC0$0$0 == 0xd3d2
                           00D3D2   638 _DAC0	=	0xd3d2
                           00D6D5   639 G$DAC1$0$0 == 0xd6d5
                           00D6D5   640 _DAC1	=	0xd6d5
                           00F9E9   641 G$PCA0$0$0 == 0xf9e9
                           00F9E9   642 _PCA0	=	0xf9e9
                           00FAEA   643 G$PCA0CP0$0$0 == 0xfaea
                           00FAEA   644 _PCA0CP0	=	0xfaea
                           00FBEB   645 G$PCA0CP1$0$0 == 0xfbeb
                           00FBEB   646 _PCA0CP1	=	0xfbeb
                           00FCEC   647 G$PCA0CP2$0$0 == 0xfcec
                           00FCEC   648 _PCA0CP2	=	0xfcec
                           00FDED   649 G$PCA0CP3$0$0 == 0xfded
                           00FDED   650 _PCA0CP3	=	0xfded
                           00FEEE   651 G$PCA0CP4$0$0 == 0xfeee
                           00FEEE   652 _PCA0CP4	=	0xfeee
                                    653 ;--------------------------------------------------------
                                    654 ; special function bits
                                    655 ;--------------------------------------------------------
                                    656 	.area RSEG    (ABS,DATA)
      000000                        657 	.org 0x0000
                           000080   658 G$P0_0$0$0 == 0x0080
                           000080   659 _P0_0	=	0x0080
                           000081   660 G$P0_1$0$0 == 0x0081
                           000081   661 _P0_1	=	0x0081
                           000082   662 G$P0_2$0$0 == 0x0082
                           000082   663 _P0_2	=	0x0082
                           000083   664 G$P0_3$0$0 == 0x0083
                           000083   665 _P0_3	=	0x0083
                           000084   666 G$P0_4$0$0 == 0x0084
                           000084   667 _P0_4	=	0x0084
                           000085   668 G$P0_5$0$0 == 0x0085
                           000085   669 _P0_5	=	0x0085
                           000086   670 G$P0_6$0$0 == 0x0086
                           000086   671 _P0_6	=	0x0086
                           000087   672 G$P0_7$0$0 == 0x0087
                           000087   673 _P0_7	=	0x0087
                           000088   674 G$IT0$0$0 == 0x0088
                           000088   675 _IT0	=	0x0088
                           000089   676 G$IE0$0$0 == 0x0089
                           000089   677 _IE0	=	0x0089
                           00008A   678 G$IT1$0$0 == 0x008a
                           00008A   679 _IT1	=	0x008a
                           00008B   680 G$IE1$0$0 == 0x008b
                           00008B   681 _IE1	=	0x008b
                           00008C   682 G$TR0$0$0 == 0x008c
                           00008C   683 _TR0	=	0x008c
                           00008D   684 G$TF0$0$0 == 0x008d
                           00008D   685 _TF0	=	0x008d
                           00008E   686 G$TR1$0$0 == 0x008e
                           00008E   687 _TR1	=	0x008e
                           00008F   688 G$TF1$0$0 == 0x008f
                           00008F   689 _TF1	=	0x008f
                           000090   690 G$P1_0$0$0 == 0x0090
                           000090   691 _P1_0	=	0x0090
                           000091   692 G$P1_1$0$0 == 0x0091
                           000091   693 _P1_1	=	0x0091
                           000092   694 G$P1_2$0$0 == 0x0092
                           000092   695 _P1_2	=	0x0092
                           000093   696 G$P1_3$0$0 == 0x0093
                           000093   697 _P1_3	=	0x0093
                           000094   698 G$P1_4$0$0 == 0x0094
                           000094   699 _P1_4	=	0x0094
                           000095   700 G$P1_5$0$0 == 0x0095
                           000095   701 _P1_5	=	0x0095
                           000096   702 G$P1_6$0$0 == 0x0096
                           000096   703 _P1_6	=	0x0096
                           000097   704 G$P1_7$0$0 == 0x0097
                           000097   705 _P1_7	=	0x0097
                           000098   706 G$RI$0$0 == 0x0098
                           000098   707 _RI	=	0x0098
                           000098   708 G$RI0$0$0 == 0x0098
                           000098   709 _RI0	=	0x0098
                           000099   710 G$TI$0$0 == 0x0099
                           000099   711 _TI	=	0x0099
                           000099   712 G$TI0$0$0 == 0x0099
                           000099   713 _TI0	=	0x0099
                           00009A   714 G$RB8$0$0 == 0x009a
                           00009A   715 _RB8	=	0x009a
                           00009A   716 G$RB80$0$0 == 0x009a
                           00009A   717 _RB80	=	0x009a
                           00009B   718 G$TB8$0$0 == 0x009b
                           00009B   719 _TB8	=	0x009b
                           00009B   720 G$TB80$0$0 == 0x009b
                           00009B   721 _TB80	=	0x009b
                           00009C   722 G$REN$0$0 == 0x009c
                           00009C   723 _REN	=	0x009c
                           00009C   724 G$REN0$0$0 == 0x009c
                           00009C   725 _REN0	=	0x009c
                           00009D   726 G$SM2$0$0 == 0x009d
                           00009D   727 _SM2	=	0x009d
                           00009D   728 G$SM20$0$0 == 0x009d
                           00009D   729 _SM20	=	0x009d
                           00009D   730 G$MCE0$0$0 == 0x009d
                           00009D   731 _MCE0	=	0x009d
                           00009E   732 G$SM1$0$0 == 0x009e
                           00009E   733 _SM1	=	0x009e
                           00009E   734 G$SM10$0$0 == 0x009e
                           00009E   735 _SM10	=	0x009e
                           00009F   736 G$SM0$0$0 == 0x009f
                           00009F   737 _SM0	=	0x009f
                           00009F   738 G$SM00$0$0 == 0x009f
                           00009F   739 _SM00	=	0x009f
                           00009F   740 G$S0MODE$0$0 == 0x009f
                           00009F   741 _S0MODE	=	0x009f
                           0000A0   742 G$P2_0$0$0 == 0x00a0
                           0000A0   743 _P2_0	=	0x00a0
                           0000A1   744 G$P2_1$0$0 == 0x00a1
                           0000A1   745 _P2_1	=	0x00a1
                           0000A2   746 G$P2_2$0$0 == 0x00a2
                           0000A2   747 _P2_2	=	0x00a2
                           0000A3   748 G$P2_3$0$0 == 0x00a3
                           0000A3   749 _P2_3	=	0x00a3
                           0000A4   750 G$P2_4$0$0 == 0x00a4
                           0000A4   751 _P2_4	=	0x00a4
                           0000A5   752 G$P2_5$0$0 == 0x00a5
                           0000A5   753 _P2_5	=	0x00a5
                           0000A6   754 G$P2_6$0$0 == 0x00a6
                           0000A6   755 _P2_6	=	0x00a6
                           0000A7   756 G$P2_7$0$0 == 0x00a7
                           0000A7   757 _P2_7	=	0x00a7
                           0000A8   758 G$EX0$0$0 == 0x00a8
                           0000A8   759 _EX0	=	0x00a8
                           0000A9   760 G$ET0$0$0 == 0x00a9
                           0000A9   761 _ET0	=	0x00a9
                           0000AA   762 G$EX1$0$0 == 0x00aa
                           0000AA   763 _EX1	=	0x00aa
                           0000AB   764 G$ET1$0$0 == 0x00ab
                           0000AB   765 _ET1	=	0x00ab
                           0000AC   766 G$ES0$0$0 == 0x00ac
                           0000AC   767 _ES0	=	0x00ac
                           0000AC   768 G$ES$0$0 == 0x00ac
                           0000AC   769 _ES	=	0x00ac
                           0000AD   770 G$ET2$0$0 == 0x00ad
                           0000AD   771 _ET2	=	0x00ad
                           0000AF   772 G$EA$0$0 == 0x00af
                           0000AF   773 _EA	=	0x00af
                           0000B0   774 G$P3_0$0$0 == 0x00b0
                           0000B0   775 _P3_0	=	0x00b0
                           0000B1   776 G$P3_1$0$0 == 0x00b1
                           0000B1   777 _P3_1	=	0x00b1
                           0000B2   778 G$P3_2$0$0 == 0x00b2
                           0000B2   779 _P3_2	=	0x00b2
                           0000B3   780 G$P3_3$0$0 == 0x00b3
                           0000B3   781 _P3_3	=	0x00b3
                           0000B4   782 G$P3_4$0$0 == 0x00b4
                           0000B4   783 _P3_4	=	0x00b4
                           0000B5   784 G$P3_5$0$0 == 0x00b5
                           0000B5   785 _P3_5	=	0x00b5
                           0000B6   786 G$P3_6$0$0 == 0x00b6
                           0000B6   787 _P3_6	=	0x00b6
                           0000B7   788 G$P3_7$0$0 == 0x00b7
                           0000B7   789 _P3_7	=	0x00b7
                           0000B8   790 G$PX0$0$0 == 0x00b8
                           0000B8   791 _PX0	=	0x00b8
                           0000B9   792 G$PT0$0$0 == 0x00b9
                           0000B9   793 _PT0	=	0x00b9
                           0000BA   794 G$PX1$0$0 == 0x00ba
                           0000BA   795 _PX1	=	0x00ba
                           0000BB   796 G$PT1$0$0 == 0x00bb
                           0000BB   797 _PT1	=	0x00bb
                           0000BC   798 G$PS0$0$0 == 0x00bc
                           0000BC   799 _PS0	=	0x00bc
                           0000BC   800 G$PS$0$0 == 0x00bc
                           0000BC   801 _PS	=	0x00bc
                           0000BD   802 G$PT2$0$0 == 0x00bd
                           0000BD   803 _PT2	=	0x00bd
                           0000C0   804 G$SMBTOE$0$0 == 0x00c0
                           0000C0   805 _SMBTOE	=	0x00c0
                           0000C1   806 G$SMBFTE$0$0 == 0x00c1
                           0000C1   807 _SMBFTE	=	0x00c1
                           0000C2   808 G$AA$0$0 == 0x00c2
                           0000C2   809 _AA	=	0x00c2
                           0000C3   810 G$SI$0$0 == 0x00c3
                           0000C3   811 _SI	=	0x00c3
                           0000C4   812 G$STO$0$0 == 0x00c4
                           0000C4   813 _STO	=	0x00c4
                           0000C5   814 G$STA$0$0 == 0x00c5
                           0000C5   815 _STA	=	0x00c5
                           0000C6   816 G$ENSMB$0$0 == 0x00c6
                           0000C6   817 _ENSMB	=	0x00c6
                           0000C7   818 G$BUSY$0$0 == 0x00c7
                           0000C7   819 _BUSY	=	0x00c7
                           0000C8   820 G$CPRL2$0$0 == 0x00c8
                           0000C8   821 _CPRL2	=	0x00c8
                           0000C9   822 G$CT2$0$0 == 0x00c9
                           0000C9   823 _CT2	=	0x00c9
                           0000CA   824 G$TR2$0$0 == 0x00ca
                           0000CA   825 _TR2	=	0x00ca
                           0000CB   826 G$EXEN2$0$0 == 0x00cb
                           0000CB   827 _EXEN2	=	0x00cb
                           0000CC   828 G$TCLK$0$0 == 0x00cc
                           0000CC   829 _TCLK	=	0x00cc
                           0000CD   830 G$RCLK$0$0 == 0x00cd
                           0000CD   831 _RCLK	=	0x00cd
                           0000CE   832 G$EXF2$0$0 == 0x00ce
                           0000CE   833 _EXF2	=	0x00ce
                           0000CF   834 G$TF2$0$0 == 0x00cf
                           0000CF   835 _TF2	=	0x00cf
                           0000D0   836 G$P$0$0 == 0x00d0
                           0000D0   837 _P	=	0x00d0
                           0000D1   838 G$F1$0$0 == 0x00d1
                           0000D1   839 _F1	=	0x00d1
                           0000D2   840 G$OV$0$0 == 0x00d2
                           0000D2   841 _OV	=	0x00d2
                           0000D3   842 G$RS0$0$0 == 0x00d3
                           0000D3   843 _RS0	=	0x00d3
                           0000D4   844 G$RS1$0$0 == 0x00d4
                           0000D4   845 _RS1	=	0x00d4
                           0000D5   846 G$F0$0$0 == 0x00d5
                           0000D5   847 _F0	=	0x00d5
                           0000D6   848 G$AC$0$0 == 0x00d6
                           0000D6   849 _AC	=	0x00d6
                           0000D7   850 G$CY$0$0 == 0x00d7
                           0000D7   851 _CY	=	0x00d7
                           0000D8   852 G$CCF0$0$0 == 0x00d8
                           0000D8   853 _CCF0	=	0x00d8
                           0000D9   854 G$CCF1$0$0 == 0x00d9
                           0000D9   855 _CCF1	=	0x00d9
                           0000DA   856 G$CCF2$0$0 == 0x00da
                           0000DA   857 _CCF2	=	0x00da
                           0000DB   858 G$CCF3$0$0 == 0x00db
                           0000DB   859 _CCF3	=	0x00db
                           0000DC   860 G$CCF4$0$0 == 0x00dc
                           0000DC   861 _CCF4	=	0x00dc
                           0000DE   862 G$CR$0$0 == 0x00de
                           0000DE   863 _CR	=	0x00de
                           0000DF   864 G$CF$0$0 == 0x00df
                           0000DF   865 _CF	=	0x00df
                           0000E8   866 G$ADLJST$0$0 == 0x00e8
                           0000E8   867 _ADLJST	=	0x00e8
                           0000E8   868 G$AD0LJST$0$0 == 0x00e8
                           0000E8   869 _AD0LJST	=	0x00e8
                           0000E9   870 G$ADWINT$0$0 == 0x00e9
                           0000E9   871 _ADWINT	=	0x00e9
                           0000E9   872 G$AD0WINT$0$0 == 0x00e9
                           0000E9   873 _AD0WINT	=	0x00e9
                           0000EA   874 G$ADSTM0$0$0 == 0x00ea
                           0000EA   875 _ADSTM0	=	0x00ea
                           0000EA   876 G$AD0CM0$0$0 == 0x00ea
                           0000EA   877 _AD0CM0	=	0x00ea
                           0000EB   878 G$ADSTM1$0$0 == 0x00eb
                           0000EB   879 _ADSTM1	=	0x00eb
                           0000EB   880 G$AD0CM1$0$0 == 0x00eb
                           0000EB   881 _AD0CM1	=	0x00eb
                           0000EC   882 G$ADBUSY$0$0 == 0x00ec
                           0000EC   883 _ADBUSY	=	0x00ec
                           0000EC   884 G$AD0BUSY$0$0 == 0x00ec
                           0000EC   885 _AD0BUSY	=	0x00ec
                           0000ED   886 G$ADCINT$0$0 == 0x00ed
                           0000ED   887 _ADCINT	=	0x00ed
                           0000ED   888 G$AD0INT$0$0 == 0x00ed
                           0000ED   889 _AD0INT	=	0x00ed
                           0000EE   890 G$ADCTM$0$0 == 0x00ee
                           0000EE   891 _ADCTM	=	0x00ee
                           0000EE   892 G$AD0TM$0$0 == 0x00ee
                           0000EE   893 _AD0TM	=	0x00ee
                           0000EF   894 G$ADCEN$0$0 == 0x00ef
                           0000EF   895 _ADCEN	=	0x00ef
                           0000EF   896 G$AD0EN$0$0 == 0x00ef
                           0000EF   897 _AD0EN	=	0x00ef
                           0000F8   898 G$SPIEN$0$0 == 0x00f8
                           0000F8   899 _SPIEN	=	0x00f8
                           0000F9   900 G$MSTEN$0$0 == 0x00f9
                           0000F9   901 _MSTEN	=	0x00f9
                           0000FA   902 G$SLVSEL$0$0 == 0x00fa
                           0000FA   903 _SLVSEL	=	0x00fa
                           0000FB   904 G$TXBSY$0$0 == 0x00fb
                           0000FB   905 _TXBSY	=	0x00fb
                           0000FC   906 G$RXOVRN$0$0 == 0x00fc
                           0000FC   907 _RXOVRN	=	0x00fc
                           0000FD   908 G$MODF$0$0 == 0x00fd
                           0000FD   909 _MODF	=	0x00fd
                           0000FE   910 G$WCOL$0$0 == 0x00fe
                           0000FE   911 _WCOL	=	0x00fe
                           0000FF   912 G$SPIF$0$0 == 0x00ff
                           0000FF   913 _SPIF	=	0x00ff
                           0000C7   914 G$BUS_BUSY$0$0 == 0x00c7
                           0000C7   915 _BUS_BUSY	=	0x00c7
                           0000C6   916 G$BUS_EN$0$0 == 0x00c6
                           0000C6   917 _BUS_EN	=	0x00c6
                           0000C5   918 G$BUS_START$0$0 == 0x00c5
                           0000C5   919 _BUS_START	=	0x00c5
                           0000C4   920 G$BUS_STOP$0$0 == 0x00c4
                           0000C4   921 _BUS_STOP	=	0x00c4
                           0000C3   922 G$BUS_INT$0$0 == 0x00c3
                           0000C3   923 _BUS_INT	=	0x00c3
                           0000C2   924 G$BUS_AA$0$0 == 0x00c2
                           0000C2   925 _BUS_AA	=	0x00c2
                           0000C1   926 G$BUS_FTE$0$0 == 0x00c1
                           0000C1   927 _BUS_FTE	=	0x00c1
                           0000C0   928 G$BUS_TOE$0$0 == 0x00c0
                           0000C0   929 _BUS_TOE	=	0x00c0
                           000083   930 G$BUS_SCL$0$0 == 0x0083
                           000083   931 _BUS_SCL	=	0x0083
                           0000B6   932 G$SS0$0$0 == 0x00b6
                           0000B6   933 _SS0	=	0x00b6
                                    934 ;--------------------------------------------------------
                                    935 ; overlayable register banks
                                    936 ;--------------------------------------------------------
                                    937 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        938 	.ds 8
                                    939 ;--------------------------------------------------------
                                    940 ; internal ram data
                                    941 ;--------------------------------------------------------
                                    942 	.area DSEG    (DATA)
                           000000   943 Llab4_m.lcd_clear$NumBytes$1$77==.
      000022                        944 _lcd_clear_NumBytes_1_77:
      000022                        945 	.ds 1
                           000001   946 Llab4_m.lcd_clear$Cmd$1$77==.
      000023                        947 _lcd_clear_Cmd_1_77:
      000023                        948 	.ds 2
                           000003   949 Llab4_m.read_keypad$Data$1$78==.
      000025                        950 _read_keypad_Data_1_78:
      000025                        951 	.ds 2
                           000005   952 Llab4_m.i2c_write_data$start_reg$1$97==.
      000027                        953 _i2c_write_data_PARM_2:
      000027                        954 	.ds 1
                           000006   955 Llab4_m.i2c_write_data$buffer$1$97==.
      000028                        956 _i2c_write_data_PARM_3:
      000028                        957 	.ds 3
                           000009   958 Llab4_m.i2c_write_data$num_bytes$1$97==.
      00002B                        959 _i2c_write_data_PARM_4:
      00002B                        960 	.ds 1
                           00000A   961 Llab4_m.i2c_read_data$start_reg$1$99==.
      00002C                        962 _i2c_read_data_PARM_2:
      00002C                        963 	.ds 1
                           00000B   964 Llab4_m.i2c_read_data$buffer$1$99==.
      00002D                        965 _i2c_read_data_PARM_3:
      00002D                        966 	.ds 3
                           00000E   967 Llab4_m.i2c_read_data$num_bytes$1$99==.
      000030                        968 _i2c_read_data_PARM_4:
      000030                        969 	.ds 1
                           00000F   970 Llab4_m.Accel_Init$Data2$1$103==.
      000031                        971 _Accel_Init_Data2_1_103:
      000031                        972 	.ds 1
                           000010   973 G$tmp0_lo_to_hi$0$0==.
      000032                        974 _tmp0_lo_to_hi::
      000032                        975 	.ds 2
                           000012   976 G$STR_PW$0$0==.
      000034                        977 _STR_PW::
      000034                        978 	.ds 2
                           000014   979 G$count$0$0==.
      000036                        980 _count::
      000036                        981 	.ds 2
                           000016   982 G$input$0$0==.
      000038                        983 _input::
      000038                        984 	.ds 1
                           000017   985 G$actual_heading$0$0==.
      000039                        986 _actual_heading::
      000039                        987 	.ds 2
                           000019   988 G$desired_heading$0$0==.
      00003B                        989 _desired_heading::
      00003B                        990 	.ds 2
                           00001B   991 G$error$0$0==.
      00003D                        992 _error::
      00003D                        993 	.ds 2
                           00001D   994 G$offset$0$0==.
      00003F                        995 _offset::
      00003F                        996 	.ds 2
                           00001F   997 G$range$0$0==.
      000041                        998 _range::
      000041                        999 	.ds 2
                           000021  1000 G$r_counts$0$0==.
      000043                       1001 _r_counts::
      000043                       1002 	.ds 1
                           000022  1003 G$c_counts$0$0==.
      000044                       1004 _c_counts::
      000044                       1005 	.ds 1
                           000023  1006 G$r_addr$0$0==.
      000045                       1007 _r_addr::
      000045                       1008 	.ds 1
                           000024  1009 G$new_range$0$0==.
      000046                       1010 _new_range::
      000046                       1011 	.ds 1
                           000025  1012 G$r_data$0$0==.
      000047                       1013 _r_data::
      000047                       1014 	.ds 2
                           000027  1015 G$MOTOR_PW$0$0==.
      000049                       1016 _MOTOR_PW::
      000049                       1017 	.ds 2
                           000029  1018 G$new_heading$0$0==.
      00004B                       1019 _new_heading::
      00004B                       1020 	.ds 1
                           00002A  1021 G$r_input$0$0==.
      00004C                       1022 _r_input::
      00004C                       1023 	.ds 1
                           00002B  1024 Llab4_m.ReadCompass$Data$1$129==.
      00004D                       1025 _ReadCompass_Data_1_129:
      00004D                       1026 	.ds 2
                           00002D  1027 Llab4_m.Steering_Servo$direction$1$130==.
      00004F                       1028 _Steering_Servo_direction_1_130:
      00004F                       1029 	.ds 2
                                   1030 ;--------------------------------------------------------
                                   1031 ; overlayable items in internal ram 
                                   1032 ;--------------------------------------------------------
                                   1033 	.area	OSEG    (OVR,DATA)
                                   1034 	.area	OSEG    (OVR,DATA)
                                   1035 	.area	OSEG    (OVR,DATA)
                                   1036 	.area	OSEG    (OVR,DATA)
                                   1037 	.area	OSEG    (OVR,DATA)
                                   1038 	.area	OSEG    (OVR,DATA)
                                   1039 	.area	OSEG    (OVR,DATA)
                                   1040 ;--------------------------------------------------------
                                   1041 ; Stack segment in internal ram 
                                   1042 ;--------------------------------------------------------
                                   1043 	.area	SSEG
      00006B                       1044 __start__stack:
      00006B                       1045 	.ds	1
                                   1046 
                                   1047 ;--------------------------------------------------------
                                   1048 ; indirectly addressable internal ram data
                                   1049 ;--------------------------------------------------------
                                   1050 	.area ISEG    (DATA)
                                   1051 ;--------------------------------------------------------
                                   1052 ; absolute internal ram data
                                   1053 ;--------------------------------------------------------
                                   1054 	.area IABS    (ABS,DATA)
                                   1055 	.area IABS    (ABS,DATA)
                                   1056 ;--------------------------------------------------------
                                   1057 ; bit data
                                   1058 ;--------------------------------------------------------
                                   1059 	.area BSEG    (BIT)
                                   1060 ;--------------------------------------------------------
                                   1061 ; paged external ram data
                                   1062 ;--------------------------------------------------------
                                   1063 	.area PSEG    (PAG,XDATA)
                                   1064 ;--------------------------------------------------------
                                   1065 ; external ram data
                                   1066 ;--------------------------------------------------------
                                   1067 	.area XSEG    (XDATA)
                           000000  1068 Llab4_m.lcd_print$text$1$73==.
      000001                       1069 _lcd_print_text_1_73:
      000001                       1070 	.ds 80
                                   1071 ;--------------------------------------------------------
                                   1072 ; absolute external ram data
                                   1073 ;--------------------------------------------------------
                                   1074 	.area XABS    (ABS,XDATA)
                                   1075 ;--------------------------------------------------------
                                   1076 ; external initialized ram data
                                   1077 ;--------------------------------------------------------
                                   1078 	.area XISEG   (XDATA)
                                   1079 	.area HOME    (CODE)
                                   1080 	.area GSINIT0 (CODE)
                                   1081 	.area GSINIT1 (CODE)
                                   1082 	.area GSINIT2 (CODE)
                                   1083 	.area GSINIT3 (CODE)
                                   1084 	.area GSINIT4 (CODE)
                                   1085 	.area GSINIT5 (CODE)
                                   1086 	.area GSINIT  (CODE)
                                   1087 	.area GSFINAL (CODE)
                                   1088 	.area CSEG    (CODE)
                                   1089 ;--------------------------------------------------------
                                   1090 ; interrupt vector 
                                   1091 ;--------------------------------------------------------
                                   1092 	.area HOME    (CODE)
      000000                       1093 __interrupt_vect:
      000000 02 00 51         [24] 1094 	ljmp	__sdcc_gsinit_startup
      000003 32               [24] 1095 	reti
      000004                       1096 	.ds	7
      00000B 32               [24] 1097 	reti
      00000C                       1098 	.ds	7
      000013 32               [24] 1099 	reti
      000014                       1100 	.ds	7
      00001B 32               [24] 1101 	reti
      00001C                       1102 	.ds	7
      000023 32               [24] 1103 	reti
      000024                       1104 	.ds	7
      00002B 32               [24] 1105 	reti
      00002C                       1106 	.ds	7
      000033 32               [24] 1107 	reti
      000034                       1108 	.ds	7
      00003B 32               [24] 1109 	reti
      00003C                       1110 	.ds	7
      000043 32               [24] 1111 	reti
      000044                       1112 	.ds	7
      00004B 02 0B 23         [24] 1113 	ljmp	_PCA_ISR
                                   1114 ;--------------------------------------------------------
                                   1115 ; global & static initialisations
                                   1116 ;--------------------------------------------------------
                                   1117 	.area HOME    (CODE)
                                   1118 	.area GSINIT  (CODE)
                                   1119 	.area GSFINAL (CODE)
                                   1120 	.area GSINIT  (CODE)
                                   1121 	.globl __sdcc_gsinit_startup
                                   1122 	.globl __sdcc_program_startup
                                   1123 	.globl __start__stack
                                   1124 	.globl __mcs51_genXINIT
                                   1125 	.globl __mcs51_genXRAMCLEAR
                                   1126 	.globl __mcs51_genRAMCLEAR
                           000000  1127 	C$lab4_m.c$37$1$146 ==.
                                   1128 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:37: unsigned int STR_PW   = 0;
      0000AA E4               [12] 1129 	clr	a
      0000AB F5 34            [12] 1130 	mov	_STR_PW,a
      0000AD F5 35            [12] 1131 	mov	(_STR_PW + 1),a
                           000005  1132 	C$lab4_m.c$38$1$146 ==.
                                   1133 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:38: unsigned int count = 0;
      0000AF F5 36            [12] 1134 	mov	_count,a
      0000B1 F5 37            [12] 1135 	mov	(_count + 1),a
                           000009  1136 	C$lab4_m.c$41$1$146 ==.
                                   1137 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:41: int desired_heading = 900; //East
      0000B3 75 3B 84         [24] 1138 	mov	_desired_heading,#0x84
      0000B6 75 3C 03         [24] 1139 	mov	(_desired_heading + 1),#0x03
                           00000F  1140 	C$lab4_m.c$45$1$146 ==.
                                   1141 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:45: unsigned int range = 0;
      0000B9 F5 41            [12] 1142 	mov	_range,a
      0000BB F5 42            [12] 1143 	mov	(_range + 1),a
                           000013  1144 	C$lab4_m.c$46$1$146 ==.
                                   1145 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:46: unsigned char r_counts = 0;
                                   1146 ;	1-genFromRTrack replaced	mov	_r_counts,#0x00
      0000BD F5 43            [12] 1147 	mov	_r_counts,a
                           000015  1148 	C$lab4_m.c$47$1$146 ==.
                                   1149 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:47: unsigned char c_counts = 0;
                                   1150 ;	1-genFromRTrack replaced	mov	_c_counts,#0x00
      0000BF F5 44            [12] 1151 	mov	_c_counts,a
                           000017  1152 	C$lab4_m.c$51$1$146 ==.
                                   1153 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:51: unsigned int MOTOR_PW = 0;
      0000C1 F5 49            [12] 1154 	mov	_MOTOR_PW,a
      0000C3 F5 4A            [12] 1155 	mov	(_MOTOR_PW + 1),a
                                   1156 	.area GSFINAL (CODE)
      0000C5 02 00 4E         [24] 1157 	ljmp	__sdcc_program_startup
                                   1158 ;--------------------------------------------------------
                                   1159 ; Home
                                   1160 ;--------------------------------------------------------
                                   1161 	.area HOME    (CODE)
                                   1162 	.area HOME    (CODE)
      00004E                       1163 __sdcc_program_startup:
      00004E 02 05 9E         [24] 1164 	ljmp	_main
                                   1165 ;	return from main will return to caller
                                   1166 ;--------------------------------------------------------
                                   1167 ; code
                                   1168 ;--------------------------------------------------------
                                   1169 	.area CSEG    (CODE)
                                   1170 ;------------------------------------------------------------
                                   1171 ;Allocation info for local variables in function 'SYSCLK_Init'
                                   1172 ;------------------------------------------------------------
                                   1173 ;i                         Allocated to registers 
                                   1174 ;------------------------------------------------------------
                           000000  1175 	G$SYSCLK_Init$0$0 ==.
                           000000  1176 	C$c8051_SDCC.h$42$0$0 ==.
                                   1177 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:42: void SYSCLK_Init(void)
                                   1178 ;	-----------------------------------------
                                   1179 ;	 function SYSCLK_Init
                                   1180 ;	-----------------------------------------
      0000C8                       1181 _SYSCLK_Init:
                           000007  1182 	ar7 = 0x07
                           000006  1183 	ar6 = 0x06
                           000005  1184 	ar5 = 0x05
                           000004  1185 	ar4 = 0x04
                           000003  1186 	ar3 = 0x03
                           000002  1187 	ar2 = 0x02
                           000001  1188 	ar1 = 0x01
                           000000  1189 	ar0 = 0x00
                           000000  1190 	C$c8051_SDCC.h$46$1$16 ==.
                                   1191 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:46: OSCXCN = 0x67;                      // start external oscillator with
      0000C8 75 B1 67         [24] 1192 	mov	_OSCXCN,#0x67
                           000003  1193 	C$c8051_SDCC.h$49$1$16 ==.
                                   1194 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:49: for (i=0; i < 256; i++);            // wait for oscillator to start
      0000CB 7E 00            [12] 1195 	mov	r6,#0x00
      0000CD 7F 01            [12] 1196 	mov	r7,#0x01
      0000CF                       1197 00107$:
      0000CF 1E               [12] 1198 	dec	r6
      0000D0 BE FF 01         [24] 1199 	cjne	r6,#0xFF,00121$
      0000D3 1F               [12] 1200 	dec	r7
      0000D4                       1201 00121$:
      0000D4 EE               [12] 1202 	mov	a,r6
      0000D5 4F               [12] 1203 	orl	a,r7
      0000D6 70 F7            [24] 1204 	jnz	00107$
                           000010  1205 	C$c8051_SDCC.h$51$1$16 ==.
                                   1206 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:51: while (!(OSCXCN & 0x80));           // Wait for crystal osc. to settle
      0000D8                       1207 00102$:
      0000D8 E5 B1            [12] 1208 	mov	a,_OSCXCN
      0000DA 30 E7 FB         [24] 1209 	jnb	acc.7,00102$
                           000015  1210 	C$c8051_SDCC.h$53$1$16 ==.
                                   1211 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:53: OSCICN = 0x88;                      // select external oscillator as SYSCLK
      0000DD 75 B2 88         [24] 1212 	mov	_OSCICN,#0x88
                           000018  1213 	C$c8051_SDCC.h$56$1$16 ==.
                           000018  1214 	XG$SYSCLK_Init$0$0 ==.
      0000E0 22               [24] 1215 	ret
                                   1216 ;------------------------------------------------------------
                                   1217 ;Allocation info for local variables in function 'UART0_Init'
                                   1218 ;------------------------------------------------------------
                           000019  1219 	G$UART0_Init$0$0 ==.
                           000019  1220 	C$c8051_SDCC.h$64$1$16 ==.
                                   1221 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:64: void UART0_Init(void)
                                   1222 ;	-----------------------------------------
                                   1223 ;	 function UART0_Init
                                   1224 ;	-----------------------------------------
      0000E1                       1225 _UART0_Init:
                           000019  1226 	C$c8051_SDCC.h$66$1$18 ==.
                                   1227 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:66: SCON0  = 0x50;                      // SCON0: mode 1, 8-bit UART, enable RX
      0000E1 75 98 50         [24] 1228 	mov	_SCON0,#0x50
                           00001C  1229 	C$c8051_SDCC.h$67$1$18 ==.
                                   1230 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:67: TMOD   = 0x20;                      // TMOD: timer 1, mode 2, 8-bit reload
      0000E4 75 89 20         [24] 1231 	mov	_TMOD,#0x20
                           00001F  1232 	C$c8051_SDCC.h$68$1$18 ==.
                                   1233 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:68: TH1    = -(SYSCLK/BAUDRATE/16);     // set Timer1 reload value for baudrate
      0000E7 75 8D DC         [24] 1234 	mov	_TH1,#0xDC
                           000022  1235 	C$c8051_SDCC.h$69$1$18 ==.
                                   1236 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:69: TR1    = 1;                         // start Timer1
      0000EA D2 8E            [12] 1237 	setb	_TR1
                           000024  1238 	C$c8051_SDCC.h$70$1$18 ==.
                                   1239 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:70: CKCON |= 0x10;                      // Timer1 uses SYSCLK as time base
      0000EC 43 8E 10         [24] 1240 	orl	_CKCON,#0x10
                           000027  1241 	C$c8051_SDCC.h$71$1$18 ==.
                                   1242 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:71: PCON  |= 0x80;                      // SMOD00 = 1 (disable baud rate 
      0000EF 43 87 80         [24] 1243 	orl	_PCON,#0x80
                           00002A  1244 	C$c8051_SDCC.h$73$1$18 ==.
                                   1245 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:73: TI0    = 1;                         // Indicate TX0 ready
      0000F2 D2 99            [12] 1246 	setb	_TI0
                           00002C  1247 	C$c8051_SDCC.h$74$1$18 ==.
                                   1248 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:74: P0MDOUT |= 0x01;                    // Set TX0 to push/pull
      0000F4 43 A4 01         [24] 1249 	orl	_P0MDOUT,#0x01
                           00002F  1250 	C$c8051_SDCC.h$75$1$18 ==.
                           00002F  1251 	XG$UART0_Init$0$0 ==.
      0000F7 22               [24] 1252 	ret
                                   1253 ;------------------------------------------------------------
                                   1254 ;Allocation info for local variables in function 'Sys_Init'
                                   1255 ;------------------------------------------------------------
                           000030  1256 	G$Sys_Init$0$0 ==.
                           000030  1257 	C$c8051_SDCC.h$83$1$18 ==.
                                   1258 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:83: void Sys_Init(void)
                                   1259 ;	-----------------------------------------
                                   1260 ;	 function Sys_Init
                                   1261 ;	-----------------------------------------
      0000F8                       1262 _Sys_Init:
                           000030  1263 	C$c8051_SDCC.h$85$1$20 ==.
                                   1264 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:85: WDTCN = 0xde;			// disable watchdog timer
      0000F8 75 FF DE         [24] 1265 	mov	_WDTCN,#0xDE
                           000033  1266 	C$c8051_SDCC.h$86$1$20 ==.
                                   1267 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:86: WDTCN = 0xad;
      0000FB 75 FF AD         [24] 1268 	mov	_WDTCN,#0xAD
                           000036  1269 	C$c8051_SDCC.h$88$1$20 ==.
                                   1270 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:88: SYSCLK_Init();			// initialize oscillator
      0000FE 12 00 C8         [24] 1271 	lcall	_SYSCLK_Init
                           000039  1272 	C$c8051_SDCC.h$89$1$20 ==.
                                   1273 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:89: UART0_Init();			// initialize UART0
      000101 12 00 E1         [24] 1274 	lcall	_UART0_Init
                           00003C  1275 	C$c8051_SDCC.h$91$1$20 ==.
                                   1276 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:91: XBR0 |= 0x04;
      000104 43 E1 04         [24] 1277 	orl	_XBR0,#0x04
                           00003F  1278 	C$c8051_SDCC.h$92$1$20 ==.
                                   1279 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:92: XBR2 |= 0x40;                    	// Enable crossbar and weak pull-ups
      000107 43 E3 40         [24] 1280 	orl	_XBR2,#0x40
                           000042  1281 	C$c8051_SDCC.h$93$1$20 ==.
                           000042  1282 	XG$Sys_Init$0$0 ==.
      00010A 22               [24] 1283 	ret
                                   1284 ;------------------------------------------------------------
                                   1285 ;Allocation info for local variables in function 'putchar'
                                   1286 ;------------------------------------------------------------
                                   1287 ;c                         Allocated to registers r7 
                                   1288 ;------------------------------------------------------------
                           000043  1289 	G$putchar$0$0 ==.
                           000043  1290 	C$c8051_SDCC.h$98$1$20 ==.
                                   1291 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:98: void putchar(char c)
                                   1292 ;	-----------------------------------------
                                   1293 ;	 function putchar
                                   1294 ;	-----------------------------------------
      00010B                       1295 _putchar:
      00010B AF 82            [24] 1296 	mov	r7,dpl
                           000045  1297 	C$c8051_SDCC.h$100$1$22 ==.
                                   1298 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:100: while (!TI0); 
      00010D                       1299 00101$:
                           000045  1300 	C$c8051_SDCC.h$101$1$22 ==.
                                   1301 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:101: TI0 = 0;
      00010D 10 99 02         [24] 1302 	jbc	_TI0,00112$
      000110 80 FB            [24] 1303 	sjmp	00101$
      000112                       1304 00112$:
                           00004A  1305 	C$c8051_SDCC.h$102$1$22 ==.
                                   1306 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:102: SBUF0 = c;
      000112 8F 99            [24] 1307 	mov	_SBUF0,r7
                           00004C  1308 	C$c8051_SDCC.h$103$1$22 ==.
                           00004C  1309 	XG$putchar$0$0 ==.
      000114 22               [24] 1310 	ret
                                   1311 ;------------------------------------------------------------
                                   1312 ;Allocation info for local variables in function 'getchar'
                                   1313 ;------------------------------------------------------------
                                   1314 ;c                         Allocated to registers 
                                   1315 ;------------------------------------------------------------
                           00004D  1316 	G$getchar$0$0 ==.
                           00004D  1317 	C$c8051_SDCC.h$108$1$22 ==.
                                   1318 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:108: char getchar(void)
                                   1319 ;	-----------------------------------------
                                   1320 ;	 function getchar
                                   1321 ;	-----------------------------------------
      000115                       1322 _getchar:
                           00004D  1323 	C$c8051_SDCC.h$111$1$24 ==.
                                   1324 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:111: while (!RI0);
      000115                       1325 00101$:
                           00004D  1326 	C$c8051_SDCC.h$112$1$24 ==.
                                   1327 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:112: RI0 = 0;
      000115 10 98 02         [24] 1328 	jbc	_RI0,00112$
      000118 80 FB            [24] 1329 	sjmp	00101$
      00011A                       1330 00112$:
                           000052  1331 	C$c8051_SDCC.h$113$1$24 ==.
                                   1332 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:113: c = SBUF0;
      00011A 85 99 82         [24] 1333 	mov	dpl,_SBUF0
                           000055  1334 	C$c8051_SDCC.h$114$1$24 ==.
                                   1335 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:114: putchar(c);                          // echo to terminal
      00011D 12 01 0B         [24] 1336 	lcall	_putchar
                           000058  1337 	C$c8051_SDCC.h$115$1$24 ==.
                                   1338 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:115: return SBUF0;
      000120 85 99 82         [24] 1339 	mov	dpl,_SBUF0
                           00005B  1340 	C$c8051_SDCC.h$116$1$24 ==.
                           00005B  1341 	XG$getchar$0$0 ==.
      000123 22               [24] 1342 	ret
                                   1343 ;------------------------------------------------------------
                                   1344 ;Allocation info for local variables in function 'lcd_print'
                                   1345 ;------------------------------------------------------------
                                   1346 ;fmt                       Allocated to stack - _bp -5
                                   1347 ;len                       Allocated to registers r6 
                                   1348 ;i                         Allocated to registers 
                                   1349 ;ap                        Allocated to registers 
                                   1350 ;text                      Allocated with name '_lcd_print_text_1_73'
                                   1351 ;------------------------------------------------------------
                           00005C  1352 	G$lcd_print$0$0 ==.
                           00005C  1353 	C$i2c.h$81$1$24 ==.
                                   1354 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:81: void lcd_print(const char *fmt, ...)
                                   1355 ;	-----------------------------------------
                                   1356 ;	 function lcd_print
                                   1357 ;	-----------------------------------------
      000124                       1358 _lcd_print:
      000124 C0 0F            [24] 1359 	push	_bp
      000126 85 81 0F         [24] 1360 	mov	_bp,sp
                           000061  1361 	C$i2c.h$87$1$73 ==.
                                   1362 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:87: if ( strlen(fmt) <= 0 ) return;   //If there is no data to print, return
      000129 E5 0F            [12] 1363 	mov	a,_bp
      00012B 24 FB            [12] 1364 	add	a,#0xfb
      00012D F8               [12] 1365 	mov	r0,a
      00012E 86 82            [24] 1366 	mov	dpl,@r0
      000130 08               [12] 1367 	inc	r0
      000131 86 83            [24] 1368 	mov	dph,@r0
      000133 08               [12] 1369 	inc	r0
      000134 86 F0            [24] 1370 	mov	b,@r0
      000136 12 15 61         [24] 1371 	lcall	_strlen
      000139 E5 82            [12] 1372 	mov	a,dpl
      00013B 85 83 F0         [24] 1373 	mov	b,dph
      00013E 45 F0            [12] 1374 	orl	a,b
      000140 70 02            [24] 1375 	jnz	00102$
      000142 80 62            [24] 1376 	sjmp	00109$
      000144                       1377 00102$:
                           00007C  1378 	C$i2c.h$89$2$74 ==.
                                   1379 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:89: va_start(ap, fmt);
      000144 E5 0F            [12] 1380 	mov	a,_bp
      000146 24 FB            [12] 1381 	add	a,#0xFB
      000148 FF               [12] 1382 	mov	r7,a
      000149 8F 0B            [24] 1383 	mov	_vsprintf_PARM_3,r7
                           000083  1384 	C$i2c.h$90$1$73 ==.
                                   1385 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:90: vsprintf(text, fmt, ap);
      00014B E5 0F            [12] 1386 	mov	a,_bp
      00014D 24 FB            [12] 1387 	add	a,#0xfb
      00014F F8               [12] 1388 	mov	r0,a
      000150 86 08            [24] 1389 	mov	_vsprintf_PARM_2,@r0
      000152 08               [12] 1390 	inc	r0
      000153 86 09            [24] 1391 	mov	(_vsprintf_PARM_2 + 1),@r0
      000155 08               [12] 1392 	inc	r0
      000156 86 0A            [24] 1393 	mov	(_vsprintf_PARM_2 + 2),@r0
      000158 90 00 01         [24] 1394 	mov	dptr,#_lcd_print_text_1_73
      00015B 75 F0 00         [24] 1395 	mov	b,#0x00
      00015E 12 0D 67         [24] 1396 	lcall	_vsprintf
                           000099  1397 	C$i2c.h$93$1$73 ==.
                                   1398 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:93: len = strlen(text);
      000161 90 00 01         [24] 1399 	mov	dptr,#_lcd_print_text_1_73
      000164 75 F0 00         [24] 1400 	mov	b,#0x00
      000167 12 15 61         [24] 1401 	lcall	_strlen
      00016A AE 82            [24] 1402 	mov	r6,dpl
                           0000A4  1403 	C$i2c.h$94$1$73 ==.
                                   1404 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:94: for(i=0; i<len; i++)
      00016C 7F 00            [12] 1405 	mov	r7,#0x00
      00016E                       1406 00107$:
      00016E C3               [12] 1407 	clr	c
      00016F EF               [12] 1408 	mov	a,r7
      000170 9E               [12] 1409 	subb	a,r6
      000171 50 1F            [24] 1410 	jnc	00105$
                           0000AB  1411 	C$i2c.h$96$2$76 ==.
                                   1412 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:96: if(text[i] == (unsigned char)'\n') text[i] = 13;
      000173 EF               [12] 1413 	mov	a,r7
      000174 24 01            [12] 1414 	add	a,#_lcd_print_text_1_73
      000176 F5 82            [12] 1415 	mov	dpl,a
      000178 E4               [12] 1416 	clr	a
      000179 34 00            [12] 1417 	addc	a,#(_lcd_print_text_1_73 >> 8)
      00017B F5 83            [12] 1418 	mov	dph,a
      00017D E0               [24] 1419 	movx	a,@dptr
      00017E FD               [12] 1420 	mov	r5,a
      00017F BD 0A 0D         [24] 1421 	cjne	r5,#0x0A,00108$
      000182 EF               [12] 1422 	mov	a,r7
      000183 24 01            [12] 1423 	add	a,#_lcd_print_text_1_73
      000185 F5 82            [12] 1424 	mov	dpl,a
      000187 E4               [12] 1425 	clr	a
      000188 34 00            [12] 1426 	addc	a,#(_lcd_print_text_1_73 >> 8)
      00018A F5 83            [12] 1427 	mov	dph,a
      00018C 74 0D            [12] 1428 	mov	a,#0x0D
      00018E F0               [24] 1429 	movx	@dptr,a
      00018F                       1430 00108$:
                           0000C7  1431 	C$i2c.h$94$1$73 ==.
                                   1432 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:94: for(i=0; i<len; i++)
      00018F 0F               [12] 1433 	inc	r7
      000190 80 DC            [24] 1434 	sjmp	00107$
      000192                       1435 00105$:
                           0000CA  1436 	C$i2c.h$99$1$73 ==.
                                   1437 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:99: i2c_write_data(0xC6, 0x00, text, len);
      000192 75 28 01         [24] 1438 	mov	_i2c_write_data_PARM_3,#_lcd_print_text_1_73
      000195 75 29 00         [24] 1439 	mov	(_i2c_write_data_PARM_3 + 1),#(_lcd_print_text_1_73 >> 8)
      000198 75 2A 00         [24] 1440 	mov	(_i2c_write_data_PARM_3 + 2),#0x00
      00019B 75 27 00         [24] 1441 	mov	_i2c_write_data_PARM_2,#0x00
      00019E 8E 2B            [24] 1442 	mov	_i2c_write_data_PARM_4,r6
      0001A0 75 82 C6         [24] 1443 	mov	dpl,#0xC6
      0001A3 12 04 3A         [24] 1444 	lcall	_i2c_write_data
      0001A6                       1445 00109$:
      0001A6 D0 0F            [24] 1446 	pop	_bp
                           0000E0  1447 	C$i2c.h$100$1$73 ==.
                           0000E0  1448 	XG$lcd_print$0$0 ==.
      0001A8 22               [24] 1449 	ret
                                   1450 ;------------------------------------------------------------
                                   1451 ;Allocation info for local variables in function 'lcd_clear'
                                   1452 ;------------------------------------------------------------
                                   1453 ;NumBytes                  Allocated with name '_lcd_clear_NumBytes_1_77'
                                   1454 ;Cmd                       Allocated with name '_lcd_clear_Cmd_1_77'
                                   1455 ;------------------------------------------------------------
                           0000E1  1456 	G$lcd_clear$0$0 ==.
                           0000E1  1457 	C$i2c.h$103$1$73 ==.
                                   1458 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:103: void lcd_clear()
                                   1459 ;	-----------------------------------------
                                   1460 ;	 function lcd_clear
                                   1461 ;	-----------------------------------------
      0001A9                       1462 _lcd_clear:
                           0000E1  1463 	C$i2c.h$105$1$73 ==.
                                   1464 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:105: unsigned char NumBytes=0, Cmd[2];
      0001A9 75 22 00         [24] 1465 	mov	_lcd_clear_NumBytes_1_77,#0x00
                           0000E4  1466 	C$i2c.h$107$1$77 ==.
                                   1467 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:107: while(NumBytes < 64) i2c_read_data(0xC6, 0x00, &NumBytes, 1);
      0001AC                       1468 00101$:
      0001AC 74 C0            [12] 1469 	mov	a,#0x100 - 0x40
      0001AE 25 22            [12] 1470 	add	a,_lcd_clear_NumBytes_1_77
      0001B0 40 17            [24] 1471 	jc	00103$
      0001B2 75 2D 22         [24] 1472 	mov	_i2c_read_data_PARM_3,#_lcd_clear_NumBytes_1_77
      0001B5 75 2E 00         [24] 1473 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0001B8 75 2F 40         [24] 1474 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0001BB 75 2C 00         [24] 1475 	mov	_i2c_read_data_PARM_2,#0x00
      0001BE 75 30 01         [24] 1476 	mov	_i2c_read_data_PARM_4,#0x01
      0001C1 75 82 C6         [24] 1477 	mov	dpl,#0xC6
      0001C4 12 04 B0         [24] 1478 	lcall	_i2c_read_data
      0001C7 80 E3            [24] 1479 	sjmp	00101$
      0001C9                       1480 00103$:
                           000101  1481 	C$i2c.h$109$1$77 ==.
                                   1482 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:109: Cmd[0] = 12;
      0001C9 75 23 0C         [24] 1483 	mov	_lcd_clear_Cmd_1_77,#0x0C
                           000104  1484 	C$i2c.h$110$1$77 ==.
                                   1485 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:110: i2c_write_data(0xC6, 0x00, Cmd, 1);
      0001CC 75 28 23         [24] 1486 	mov	_i2c_write_data_PARM_3,#_lcd_clear_Cmd_1_77
      0001CF 75 29 00         [24] 1487 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      0001D2 75 2A 40         [24] 1488 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      0001D5 75 27 00         [24] 1489 	mov	_i2c_write_data_PARM_2,#0x00
      0001D8 75 2B 01         [24] 1490 	mov	_i2c_write_data_PARM_4,#0x01
      0001DB 75 82 C6         [24] 1491 	mov	dpl,#0xC6
      0001DE 12 04 3A         [24] 1492 	lcall	_i2c_write_data
                           000119  1493 	C$i2c.h$111$1$77 ==.
                           000119  1494 	XG$lcd_clear$0$0 ==.
      0001E1 22               [24] 1495 	ret
                                   1496 ;------------------------------------------------------------
                                   1497 ;Allocation info for local variables in function 'read_keypad'
                                   1498 ;------------------------------------------------------------
                                   1499 ;i                         Allocated to registers r7 
                                   1500 ;Data                      Allocated with name '_read_keypad_Data_1_78'
                                   1501 ;------------------------------------------------------------
                           00011A  1502 	G$read_keypad$0$0 ==.
                           00011A  1503 	C$i2c.h$114$1$77 ==.
                                   1504 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:114: char read_keypad()
                                   1505 ;	-----------------------------------------
                                   1506 ;	 function read_keypad
                                   1507 ;	-----------------------------------------
      0001E2                       1508 _read_keypad:
                           00011A  1509 	C$i2c.h$118$1$78 ==.
                                   1510 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:118: i2c_read_data(0xC6, 0x01, Data, 2); //Read I2C data on address 192, register 1, 2 bytes of data.
      0001E2 75 2D 25         [24] 1511 	mov	_i2c_read_data_PARM_3,#_read_keypad_Data_1_78
      0001E5 75 2E 00         [24] 1512 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0001E8 75 2F 40         [24] 1513 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0001EB 75 2C 01         [24] 1514 	mov	_i2c_read_data_PARM_2,#0x01
      0001EE 75 30 02         [24] 1515 	mov	_i2c_read_data_PARM_4,#0x02
      0001F1 75 82 C6         [24] 1516 	mov	dpl,#0xC6
      0001F4 12 04 B0         [24] 1517 	lcall	_i2c_read_data
                           00012F  1518 	C$i2c.h$119$1$78 ==.
                                   1519 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:119: if(Data[0] == 0xFF) return 0;  //No response on bus, no display
      0001F7 74 FF            [12] 1520 	mov	a,#0xFF
      0001F9 B5 25 05         [24] 1521 	cjne	a,_read_keypad_Data_1_78,00102$
      0001FC 75 82 00         [24] 1522 	mov	dpl,#0x00
      0001FF 80 5F            [24] 1523 	sjmp	00116$
      000201                       1524 00102$:
                           000139  1525 	C$i2c.h$121$1$78 ==.
                                   1526 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:121: for(i=0; i<8; i++)             //loop 8 times
      000201 7F 00            [12] 1527 	mov	r7,#0x00
      000203 8F 06            [24] 1528 	mov	ar6,r7
      000205                       1529 00114$:
                           00013D  1530 	C$i2c.h$123$2$79 ==.
                                   1531 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:123: if(Data[0] & (0x01 << i))  //find the ASCII value of the keypad read, if it is the current loop value
      000205 8E F0            [24] 1532 	mov	b,r6
      000207 05 F0            [12] 1533 	inc	b
      000209 7C 01            [12] 1534 	mov	r4,#0x01
      00020B 7D 00            [12] 1535 	mov	r5,#0x00
      00020D 80 06            [24] 1536 	sjmp	00145$
      00020F                       1537 00144$:
      00020F EC               [12] 1538 	mov	a,r4
      000210 2C               [12] 1539 	add	a,r4
      000211 FC               [12] 1540 	mov	r4,a
      000212 ED               [12] 1541 	mov	a,r5
      000213 33               [12] 1542 	rlc	a
      000214 FD               [12] 1543 	mov	r5,a
      000215                       1544 00145$:
      000215 D5 F0 F7         [24] 1545 	djnz	b,00144$
      000218 AA 25            [24] 1546 	mov	r2,_read_keypad_Data_1_78
      00021A 7B 00            [12] 1547 	mov	r3,#0x00
      00021C EA               [12] 1548 	mov	a,r2
      00021D 52 04            [12] 1549 	anl	ar4,a
      00021F EB               [12] 1550 	mov	a,r3
      000220 52 05            [12] 1551 	anl	ar5,a
      000222 EC               [12] 1552 	mov	a,r4
      000223 4D               [12] 1553 	orl	a,r5
      000224 60 07            [24] 1554 	jz	00115$
                           00015E  1555 	C$i2c.h$124$2$79 ==.
                                   1556 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:124: return i+49;
      000226 74 31            [12] 1557 	mov	a,#0x31
      000228 2F               [12] 1558 	add	a,r7
      000229 F5 82            [12] 1559 	mov	dpl,a
      00022B 80 33            [24] 1560 	sjmp	00116$
      00022D                       1561 00115$:
                           000165  1562 	C$i2c.h$121$1$78 ==.
                                   1563 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:121: for(i=0; i<8; i++)             //loop 8 times
      00022D 0E               [12] 1564 	inc	r6
      00022E 8E 07            [24] 1565 	mov	ar7,r6
      000230 BE 08 00         [24] 1566 	cjne	r6,#0x08,00147$
      000233                       1567 00147$:
      000233 40 D0            [24] 1568 	jc	00114$
                           00016D  1569 	C$i2c.h$127$1$78 ==.
                                   1570 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:127: if(Data[1] & 0x01) return '9'; //if the value is equal to 9 return 9.
      000235 E5 26            [12] 1571 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000237 30 E0 05         [24] 1572 	jnb	acc.0,00107$
      00023A 75 82 39         [24] 1573 	mov	dpl,#0x39
      00023D 80 21            [24] 1574 	sjmp	00116$
      00023F                       1575 00107$:
                           000177  1576 	C$i2c.h$129$1$78 ==.
                                   1577 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:129: if(Data[1] & 0x02) return '*'; //if the value is equal to the star.
      00023F E5 26            [12] 1578 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000241 30 E1 05         [24] 1579 	jnb	acc.1,00109$
      000244 75 82 2A         [24] 1580 	mov	dpl,#0x2A
      000247 80 17            [24] 1581 	sjmp	00116$
      000249                       1582 00109$:
                           000181  1583 	C$i2c.h$131$1$78 ==.
                                   1584 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:131: if(Data[1] & 0x04) return '0'; //if the value is equal to the 0 key
      000249 E5 26            [12] 1585 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      00024B 30 E2 05         [24] 1586 	jnb	acc.2,00111$
      00024E 75 82 30         [24] 1587 	mov	dpl,#0x30
      000251 80 0D            [24] 1588 	sjmp	00116$
      000253                       1589 00111$:
                           00018B  1590 	C$i2c.h$133$1$78 ==.
                                   1591 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:133: if(Data[1] & 0x08) return '#'; //if the value is equal to the pound key
      000253 E5 26            [12] 1592 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000255 30 E3 05         [24] 1593 	jnb	acc.3,00113$
      000258 75 82 23         [24] 1594 	mov	dpl,#0x23
      00025B 80 03            [24] 1595 	sjmp	00116$
      00025D                       1596 00113$:
                           000195  1597 	C$i2c.h$135$1$78 ==.
                                   1598 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:135: return -1;                     //else return a numerical -1 (0xFF)
      00025D 75 82 FF         [24] 1599 	mov	dpl,#0xFF
      000260                       1600 00116$:
                           000198  1601 	C$i2c.h$136$1$78 ==.
                           000198  1602 	XG$read_keypad$0$0 ==.
      000260 22               [24] 1603 	ret
                                   1604 ;------------------------------------------------------------
                                   1605 ;Allocation info for local variables in function 'kpd_input'
                                   1606 ;------------------------------------------------------------
                                   1607 ;mode                      Allocated to registers r7 
                                   1608 ;sum                       Allocated to registers r5 r6 
                                   1609 ;key                       Allocated to registers r3 
                                   1610 ;i                         Allocated to registers 
                                   1611 ;------------------------------------------------------------
                           000199  1612 	G$kpd_input$0$0 ==.
                           000199  1613 	C$i2c.h$148$1$78 ==.
                                   1614 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:148: unsigned int kpd_input(char mode)
                                   1615 ;	-----------------------------------------
                                   1616 ;	 function kpd_input
                                   1617 ;	-----------------------------------------
      000261                       1618 _kpd_input:
      000261 AF 82            [24] 1619 	mov	r7,dpl
                           00019B  1620 	C$i2c.h$153$1$81 ==.
                                   1621 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:153: sum = 0;
                           00019B  1622 	C$i2c.h$156$1$81 ==.
                                   1623 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:156: if(mode==0)lcd_print("\nType digits; end w/#");
      000263 E4               [12] 1624 	clr	a
      000264 FD               [12] 1625 	mov	r5,a
      000265 FE               [12] 1626 	mov	r6,a
      000266 EF               [12] 1627 	mov	a,r7
      000267 70 1D            [24] 1628 	jnz	00102$
      000269 C0 06            [24] 1629 	push	ar6
      00026B C0 05            [24] 1630 	push	ar5
      00026D 74 21            [12] 1631 	mov	a,#___str_0
      00026F C0 E0            [24] 1632 	push	acc
      000271 74 17            [12] 1633 	mov	a,#(___str_0 >> 8)
      000273 C0 E0            [24] 1634 	push	acc
      000275 74 80            [12] 1635 	mov	a,#0x80
      000277 C0 E0            [24] 1636 	push	acc
      000279 12 01 24         [24] 1637 	lcall	_lcd_print
      00027C 15 81            [12] 1638 	dec	sp
      00027E 15 81            [12] 1639 	dec	sp
      000280 15 81            [12] 1640 	dec	sp
      000282 D0 05            [24] 1641 	pop	ar5
      000284 D0 06            [24] 1642 	pop	ar6
      000286                       1643 00102$:
                           0001BE  1644 	C$i2c.h$158$1$81 ==.
                                   1645 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:158: lcd_print("     %c%c%c%c%c",0x08,0x08,0x08,0x08,0x08);
      000286 C0 06            [24] 1646 	push	ar6
      000288 C0 05            [24] 1647 	push	ar5
      00028A 74 08            [12] 1648 	mov	a,#0x08
      00028C C0 E0            [24] 1649 	push	acc
      00028E E4               [12] 1650 	clr	a
      00028F C0 E0            [24] 1651 	push	acc
      000291 74 08            [12] 1652 	mov	a,#0x08
      000293 C0 E0            [24] 1653 	push	acc
      000295 E4               [12] 1654 	clr	a
      000296 C0 E0            [24] 1655 	push	acc
      000298 74 08            [12] 1656 	mov	a,#0x08
      00029A C0 E0            [24] 1657 	push	acc
      00029C E4               [12] 1658 	clr	a
      00029D C0 E0            [24] 1659 	push	acc
      00029F 74 08            [12] 1660 	mov	a,#0x08
      0002A1 C0 E0            [24] 1661 	push	acc
      0002A3 E4               [12] 1662 	clr	a
      0002A4 C0 E0            [24] 1663 	push	acc
      0002A6 74 08            [12] 1664 	mov	a,#0x08
      0002A8 C0 E0            [24] 1665 	push	acc
      0002AA E4               [12] 1666 	clr	a
      0002AB C0 E0            [24] 1667 	push	acc
      0002AD 74 37            [12] 1668 	mov	a,#___str_1
      0002AF C0 E0            [24] 1669 	push	acc
      0002B1 74 17            [12] 1670 	mov	a,#(___str_1 >> 8)
      0002B3 C0 E0            [24] 1671 	push	acc
      0002B5 74 80            [12] 1672 	mov	a,#0x80
      0002B7 C0 E0            [24] 1673 	push	acc
      0002B9 12 01 24         [24] 1674 	lcall	_lcd_print
      0002BC E5 81            [12] 1675 	mov	a,sp
      0002BE 24 F3            [12] 1676 	add	a,#0xf3
      0002C0 F5 81            [12] 1677 	mov	sp,a
                           0001FA  1678 	C$i2c.h$160$1$81 ==.
                                   1679 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:160: delay_time(500000);	//Add 20ms delay before reading i2c in loop
      0002C2 90 A1 20         [24] 1680 	mov	dptr,#0xA120
      0002C5 75 F0 07         [24] 1681 	mov	b,#0x07
      0002C8 E4               [12] 1682 	clr	a
      0002C9 12 03 D5         [24] 1683 	lcall	_delay_time
      0002CC D0 05            [24] 1684 	pop	ar5
      0002CE D0 06            [24] 1685 	pop	ar6
                           000208  1686 	C$i2c.h$164$1$81 ==.
                                   1687 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:164: for(i=0; i<5; i++)
      0002D0 7F 00            [12] 1688 	mov	r7,#0x00
                           00020A  1689 	C$i2c.h$166$3$84 ==.
                                   1690 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:166: while(((key=read_keypad()) == -1) || (key == '*'))delay_time(10000);
      0002D2                       1691 00104$:
      0002D2 C0 07            [24] 1692 	push	ar7
      0002D4 C0 06            [24] 1693 	push	ar6
      0002D6 C0 05            [24] 1694 	push	ar5
      0002D8 12 01 E2         [24] 1695 	lcall	_read_keypad
      0002DB AC 82            [24] 1696 	mov	r4,dpl
      0002DD D0 05            [24] 1697 	pop	ar5
      0002DF D0 06            [24] 1698 	pop	ar6
      0002E1 D0 07            [24] 1699 	pop	ar7
      0002E3 8C 03            [24] 1700 	mov	ar3,r4
      0002E5 BC FF 02         [24] 1701 	cjne	r4,#0xFF,00146$
      0002E8 80 03            [24] 1702 	sjmp	00105$
      0002EA                       1703 00146$:
      0002EA BB 2A 17         [24] 1704 	cjne	r3,#0x2A,00106$
      0002ED                       1705 00105$:
      0002ED 90 27 10         [24] 1706 	mov	dptr,#0x2710
      0002F0 E4               [12] 1707 	clr	a
      0002F1 F5 F0            [12] 1708 	mov	b,a
      0002F3 C0 07            [24] 1709 	push	ar7
      0002F5 C0 06            [24] 1710 	push	ar6
      0002F7 C0 05            [24] 1711 	push	ar5
      0002F9 12 03 D5         [24] 1712 	lcall	_delay_time
      0002FC D0 05            [24] 1713 	pop	ar5
      0002FE D0 06            [24] 1714 	pop	ar6
      000300 D0 07            [24] 1715 	pop	ar7
      000302 80 CE            [24] 1716 	sjmp	00104$
      000304                       1717 00106$:
                           00023C  1718 	C$i2c.h$167$2$82 ==.
                                   1719 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:167: if(key == '#')
      000304 BB 23 2A         [24] 1720 	cjne	r3,#0x23,00114$
                           00023F  1721 	C$i2c.h$169$3$83 ==.
                                   1722 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:169: while(read_keypad() == '#')delay_time(10000);
      000307                       1723 00107$:
      000307 C0 06            [24] 1724 	push	ar6
      000309 C0 05            [24] 1725 	push	ar5
      00030B 12 01 E2         [24] 1726 	lcall	_read_keypad
      00030E AC 82            [24] 1727 	mov	r4,dpl
      000310 D0 05            [24] 1728 	pop	ar5
      000312 D0 06            [24] 1729 	pop	ar6
      000314 BC 23 13         [24] 1730 	cjne	r4,#0x23,00109$
      000317 90 27 10         [24] 1731 	mov	dptr,#0x2710
      00031A E4               [12] 1732 	clr	a
      00031B F5 F0            [12] 1733 	mov	b,a
      00031D C0 06            [24] 1734 	push	ar6
      00031F C0 05            [24] 1735 	push	ar5
      000321 12 03 D5         [24] 1736 	lcall	_delay_time
      000324 D0 05            [24] 1737 	pop	ar5
      000326 D0 06            [24] 1738 	pop	ar6
      000328 80 DD            [24] 1739 	sjmp	00107$
      00032A                       1740 00109$:
                           000262  1741 	C$i2c.h$170$3$83 ==.
                                   1742 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:170: return sum;
      00032A 8D 82            [24] 1743 	mov	dpl,r5
      00032C 8E 83            [24] 1744 	mov	dph,r6
      00032E 02 03 D4         [24] 1745 	ljmp	00119$
      000331                       1746 00114$:
                           000269  1747 	C$i2c.h$174$3$84 ==.
                                   1748 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:174: lcd_print("%c", key);
      000331 EB               [12] 1749 	mov	a,r3
      000332 FA               [12] 1750 	mov	r2,a
      000333 33               [12] 1751 	rlc	a
      000334 95 E0            [12] 1752 	subb	a,acc
      000336 FC               [12] 1753 	mov	r4,a
      000337 C0 07            [24] 1754 	push	ar7
      000339 C0 06            [24] 1755 	push	ar6
      00033B C0 05            [24] 1756 	push	ar5
      00033D C0 04            [24] 1757 	push	ar4
      00033F C0 03            [24] 1758 	push	ar3
      000341 C0 02            [24] 1759 	push	ar2
      000343 C0 02            [24] 1760 	push	ar2
      000345 C0 04            [24] 1761 	push	ar4
      000347 74 47            [12] 1762 	mov	a,#___str_2
      000349 C0 E0            [24] 1763 	push	acc
      00034B 74 17            [12] 1764 	mov	a,#(___str_2 >> 8)
      00034D C0 E0            [24] 1765 	push	acc
      00034F 74 80            [12] 1766 	mov	a,#0x80
      000351 C0 E0            [24] 1767 	push	acc
      000353 12 01 24         [24] 1768 	lcall	_lcd_print
      000356 E5 81            [12] 1769 	mov	a,sp
      000358 24 FB            [12] 1770 	add	a,#0xfb
      00035A F5 81            [12] 1771 	mov	sp,a
      00035C D0 02            [24] 1772 	pop	ar2
      00035E D0 03            [24] 1773 	pop	ar3
      000360 D0 04            [24] 1774 	pop	ar4
      000362 D0 05            [24] 1775 	pop	ar5
      000364 D0 06            [24] 1776 	pop	ar6
                           00029E  1777 	C$i2c.h$175$1$81 ==.
                                   1778 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:175: sum = sum*10 + key - '0';
      000366 8D 11            [24] 1779 	mov	__mulint_PARM_2,r5
      000368 8E 12            [24] 1780 	mov	(__mulint_PARM_2 + 1),r6
      00036A 90 00 0A         [24] 1781 	mov	dptr,#0x000A
      00036D C0 04            [24] 1782 	push	ar4
      00036F C0 03            [24] 1783 	push	ar3
      000371 C0 02            [24] 1784 	push	ar2
      000373 12 0C DA         [24] 1785 	lcall	__mulint
      000376 A8 82            [24] 1786 	mov	r0,dpl
      000378 A9 83            [24] 1787 	mov	r1,dph
      00037A D0 02            [24] 1788 	pop	ar2
      00037C D0 03            [24] 1789 	pop	ar3
      00037E D0 04            [24] 1790 	pop	ar4
      000380 D0 07            [24] 1791 	pop	ar7
      000382 EA               [12] 1792 	mov	a,r2
      000383 28               [12] 1793 	add	a,r0
      000384 F8               [12] 1794 	mov	r0,a
      000385 EC               [12] 1795 	mov	a,r4
      000386 39               [12] 1796 	addc	a,r1
      000387 F9               [12] 1797 	mov	r1,a
      000388 E8               [12] 1798 	mov	a,r0
      000389 24 D0            [12] 1799 	add	a,#0xD0
      00038B FD               [12] 1800 	mov	r5,a
      00038C E9               [12] 1801 	mov	a,r1
      00038D 34 FF            [12] 1802 	addc	a,#0xFF
      00038F FE               [12] 1803 	mov	r6,a
                           0002C8  1804 	C$i2c.h$176$3$84 ==.
                                   1805 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:176: while(read_keypad() == key)delay_time(10000); //wait for key to be released
      000390                       1806 00110$:
      000390 C0 07            [24] 1807 	push	ar7
      000392 C0 06            [24] 1808 	push	ar6
      000394 C0 05            [24] 1809 	push	ar5
      000396 C0 03            [24] 1810 	push	ar3
      000398 12 01 E2         [24] 1811 	lcall	_read_keypad
      00039B AC 82            [24] 1812 	mov	r4,dpl
      00039D D0 03            [24] 1813 	pop	ar3
      00039F D0 05            [24] 1814 	pop	ar5
      0003A1 D0 06            [24] 1815 	pop	ar6
      0003A3 D0 07            [24] 1816 	pop	ar7
      0003A5 EC               [12] 1817 	mov	a,r4
      0003A6 B5 03 1B         [24] 1818 	cjne	a,ar3,00118$
      0003A9 90 27 10         [24] 1819 	mov	dptr,#0x2710
      0003AC E4               [12] 1820 	clr	a
      0003AD F5 F0            [12] 1821 	mov	b,a
      0003AF C0 07            [24] 1822 	push	ar7
      0003B1 C0 06            [24] 1823 	push	ar6
      0003B3 C0 05            [24] 1824 	push	ar5
      0003B5 C0 03            [24] 1825 	push	ar3
      0003B7 12 03 D5         [24] 1826 	lcall	_delay_time
      0003BA D0 03            [24] 1827 	pop	ar3
      0003BC D0 05            [24] 1828 	pop	ar5
      0003BE D0 06            [24] 1829 	pop	ar6
      0003C0 D0 07            [24] 1830 	pop	ar7
      0003C2 80 CC            [24] 1831 	sjmp	00110$
      0003C4                       1832 00118$:
                           0002FC  1833 	C$i2c.h$164$1$81 ==.
                                   1834 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:164: for(i=0; i<5; i++)
      0003C4 0F               [12] 1835 	inc	r7
      0003C5 C3               [12] 1836 	clr	c
      0003C6 EF               [12] 1837 	mov	a,r7
      0003C7 64 80            [12] 1838 	xrl	a,#0x80
      0003C9 94 85            [12] 1839 	subb	a,#0x85
      0003CB 50 03            [24] 1840 	jnc	00155$
      0003CD 02 02 D2         [24] 1841 	ljmp	00104$
      0003D0                       1842 00155$:
                           000308  1843 	C$i2c.h$179$1$81 ==.
                                   1844 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:179: return sum;
      0003D0 8D 82            [24] 1845 	mov	dpl,r5
      0003D2 8E 83            [24] 1846 	mov	dph,r6
      0003D4                       1847 00119$:
                           00030C  1848 	C$i2c.h$180$1$81 ==.
                           00030C  1849 	XG$kpd_input$0$0 ==.
      0003D4 22               [24] 1850 	ret
                                   1851 ;------------------------------------------------------------
                                   1852 ;Allocation info for local variables in function 'delay_time'
                                   1853 ;------------------------------------------------------------
                                   1854 ;time_end                  Allocated to registers r4 r5 r6 r7 
                                   1855 ;index                     Allocated to registers 
                                   1856 ;------------------------------------------------------------
                           00030D  1857 	G$delay_time$0$0 ==.
                           00030D  1858 	C$i2c.h$189$1$81 ==.
                                   1859 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:189: void delay_time (unsigned long time_end)
                                   1860 ;	-----------------------------------------
                                   1861 ;	 function delay_time
                                   1862 ;	-----------------------------------------
      0003D5                       1863 _delay_time:
      0003D5 AC 82            [24] 1864 	mov	r4,dpl
      0003D7 AD 83            [24] 1865 	mov	r5,dph
      0003D9 AE F0            [24] 1866 	mov	r6,b
      0003DB FF               [12] 1867 	mov	r7,a
                           000314  1868 	C$i2c.h$192$1$86 ==.
                                   1869 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:192: for (index = 0; index < time_end; index++); //for loop delay
      0003DC 78 00            [12] 1870 	mov	r0,#0x00
      0003DE 79 00            [12] 1871 	mov	r1,#0x00
      0003E0 7A 00            [12] 1872 	mov	r2,#0x00
      0003E2 7B 00            [12] 1873 	mov	r3,#0x00
      0003E4                       1874 00103$:
      0003E4 C3               [12] 1875 	clr	c
      0003E5 E8               [12] 1876 	mov	a,r0
      0003E6 9C               [12] 1877 	subb	a,r4
      0003E7 E9               [12] 1878 	mov	a,r1
      0003E8 9D               [12] 1879 	subb	a,r5
      0003E9 EA               [12] 1880 	mov	a,r2
      0003EA 9E               [12] 1881 	subb	a,r6
      0003EB EB               [12] 1882 	mov	a,r3
      0003EC 9F               [12] 1883 	subb	a,r7
      0003ED 50 0F            [24] 1884 	jnc	00105$
      0003EF 08               [12] 1885 	inc	r0
      0003F0 B8 00 09         [24] 1886 	cjne	r0,#0x00,00115$
      0003F3 09               [12] 1887 	inc	r1
      0003F4 B9 00 05         [24] 1888 	cjne	r1,#0x00,00115$
      0003F7 0A               [12] 1889 	inc	r2
      0003F8 BA 00 E9         [24] 1890 	cjne	r2,#0x00,00103$
      0003FB 0B               [12] 1891 	inc	r3
      0003FC                       1892 00115$:
      0003FC 80 E6            [24] 1893 	sjmp	00103$
      0003FE                       1894 00105$:
                           000336  1895 	C$i2c.h$193$1$86 ==.
                           000336  1896 	XG$delay_time$0$0 ==.
      0003FE 22               [24] 1897 	ret
                                   1898 ;------------------------------------------------------------
                                   1899 ;Allocation info for local variables in function 'i2c_start'
                                   1900 ;------------------------------------------------------------
                           000337  1901 	G$i2c_start$0$0 ==.
                           000337  1902 	C$i2c.h$196$1$86 ==.
                                   1903 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:196: void i2c_start(void)
                                   1904 ;	-----------------------------------------
                                   1905 ;	 function i2c_start
                                   1906 ;	-----------------------------------------
      0003FF                       1907 _i2c_start:
                           000337  1908 	C$i2c.h$198$1$88 ==.
                                   1909 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:198: while(BUSY);              //Wait until SMBus0 is free
      0003FF                       1910 00101$:
      0003FF 20 C7 FD         [24] 1911 	jb	_BUSY,00101$
                           00033A  1912 	C$i2c.h$199$1$88 ==.
                                   1913 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:199: STA = 1;                  //Set Start Bit
      000402 D2 C5            [12] 1914 	setb	_STA
                           00033C  1915 	C$i2c.h$200$1$88 ==.
                                   1916 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:200: while(!SI);               //Wait until start sent
      000404                       1917 00104$:
      000404 30 C3 FD         [24] 1918 	jnb	_SI,00104$
                           00033F  1919 	C$i2c.h$201$1$88 ==.
                                   1920 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:201: STA = 0;                  //Clear start bit
      000407 C2 C5            [12] 1921 	clr	_STA
                           000341  1922 	C$i2c.h$202$1$88 ==.
                                   1923 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:202: SI = 0;                   //Clear SI
      000409 C2 C3            [12] 1924 	clr	_SI
                           000343  1925 	C$i2c.h$203$1$88 ==.
                           000343  1926 	XG$i2c_start$0$0 ==.
      00040B 22               [24] 1927 	ret
                                   1928 ;------------------------------------------------------------
                                   1929 ;Allocation info for local variables in function 'i2c_write'
                                   1930 ;------------------------------------------------------------
                                   1931 ;output_data               Allocated to registers 
                                   1932 ;------------------------------------------------------------
                           000344  1933 	G$i2c_write$0$0 ==.
                           000344  1934 	C$i2c.h$206$1$88 ==.
                                   1935 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:206: void i2c_write(unsigned char output_data)
                                   1936 ;	-----------------------------------------
                                   1937 ;	 function i2c_write
                                   1938 ;	-----------------------------------------
      00040C                       1939 _i2c_write:
      00040C 85 82 C2         [24] 1940 	mov	_SMB0DAT,dpl
                           000347  1941 	C$i2c.h$209$1$90 ==.
                                   1942 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:209: while(!SI);               //Wait until send is complete
      00040F                       1943 00101$:
                           000347  1944 	C$i2c.h$210$1$90 ==.
                                   1945 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:210: SI = 0;                   //Clear SI
      00040F 10 C3 02         [24] 1946 	jbc	_SI,00112$
      000412 80 FB            [24] 1947 	sjmp	00101$
      000414                       1948 00112$:
                           00034C  1949 	C$i2c.h$211$1$90 ==.
                           00034C  1950 	XG$i2c_write$0$0 ==.
      000414 22               [24] 1951 	ret
                                   1952 ;------------------------------------------------------------
                                   1953 ;Allocation info for local variables in function 'i2c_write_and_stop'
                                   1954 ;------------------------------------------------------------
                                   1955 ;output_data               Allocated to registers 
                                   1956 ;------------------------------------------------------------
                           00034D  1957 	G$i2c_write_and_stop$0$0 ==.
                           00034D  1958 	C$i2c.h$214$1$90 ==.
                                   1959 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:214: void i2c_write_and_stop(unsigned char output_data)
                                   1960 ;	-----------------------------------------
                                   1961 ;	 function i2c_write_and_stop
                                   1962 ;	-----------------------------------------
      000415                       1963 _i2c_write_and_stop:
      000415 85 82 C2         [24] 1964 	mov	_SMB0DAT,dpl
                           000350  1965 	C$i2c.h$217$1$92 ==.
                                   1966 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:217: STO = 1;                  //Set stop bit
      000418 D2 C4            [12] 1967 	setb	_STO
                           000352  1968 	C$i2c.h$218$1$92 ==.
                                   1969 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:218: while(!SI);               //Wait until send is complete
      00041A                       1970 00101$:
                           000352  1971 	C$i2c.h$219$1$92 ==.
                                   1972 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:219: SI = 0;                   //clear SI
      00041A 10 C3 02         [24] 1973 	jbc	_SI,00112$
      00041D 80 FB            [24] 1974 	sjmp	00101$
      00041F                       1975 00112$:
                           000357  1976 	C$i2c.h$220$1$92 ==.
                           000357  1977 	XG$i2c_write_and_stop$0$0 ==.
      00041F 22               [24] 1978 	ret
                                   1979 ;------------------------------------------------------------
                                   1980 ;Allocation info for local variables in function 'i2c_read'
                                   1981 ;------------------------------------------------------------
                                   1982 ;input_data                Allocated to registers 
                                   1983 ;------------------------------------------------------------
                           000358  1984 	G$i2c_read$0$0 ==.
                           000358  1985 	C$i2c.h$223$1$92 ==.
                                   1986 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:223: unsigned char i2c_read(void)
                                   1987 ;	-----------------------------------------
                                   1988 ;	 function i2c_read
                                   1989 ;	-----------------------------------------
      000420                       1990 _i2c_read:
                           000358  1991 	C$i2c.h$226$1$94 ==.
                                   1992 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:226: while(!SI);                //Wait until we have data to read
      000420                       1993 00101$:
      000420 30 C3 FD         [24] 1994 	jnb	_SI,00101$
                           00035B  1995 	C$i2c.h$227$1$94 ==.
                                   1996 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:227: input_data = SMB0DAT;      //Read the data
      000423 85 C2 82         [24] 1997 	mov	dpl,_SMB0DAT
                           00035E  1998 	C$i2c.h$228$1$94 ==.
                                   1999 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:228: SI = 0;                    //Clear SI
      000426 C2 C3            [12] 2000 	clr	_SI
                           000360  2001 	C$i2c.h$229$1$94 ==.
                                   2002 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:229: return input_data;         //Return the read data
                           000360  2003 	C$i2c.h$230$1$94 ==.
                           000360  2004 	XG$i2c_read$0$0 ==.
      000428 22               [24] 2005 	ret
                                   2006 ;------------------------------------------------------------
                                   2007 ;Allocation info for local variables in function 'i2c_read_and_stop'
                                   2008 ;------------------------------------------------------------
                                   2009 ;input_data                Allocated to registers r7 
                                   2010 ;------------------------------------------------------------
                           000361  2011 	G$i2c_read_and_stop$0$0 ==.
                           000361  2012 	C$i2c.h$233$1$94 ==.
                                   2013 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:233: unsigned char i2c_read_and_stop(void)
                                   2014 ;	-----------------------------------------
                                   2015 ;	 function i2c_read_and_stop
                                   2016 ;	-----------------------------------------
      000429                       2017 _i2c_read_and_stop:
                           000361  2018 	C$i2c.h$236$1$96 ==.
                                   2019 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:236: while(!SI);                //Wait until we have data to read
      000429                       2020 00101$:
      000429 30 C3 FD         [24] 2021 	jnb	_SI,00101$
                           000364  2022 	C$i2c.h$237$1$96 ==.
                                   2023 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:237: input_data = SMB0DAT;      //Read the data
      00042C AF C2            [24] 2024 	mov	r7,_SMB0DAT
                           000366  2025 	C$i2c.h$238$1$96 ==.
                                   2026 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:238: SI = 0;                    //Clear SI
      00042E C2 C3            [12] 2027 	clr	_SI
                           000368  2028 	C$i2c.h$239$1$96 ==.
                                   2029 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:239: STO = 1;                   //Set stop bit
      000430 D2 C4            [12] 2030 	setb	_STO
                           00036A  2031 	C$i2c.h$240$1$96 ==.
                                   2032 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:240: while(!SI);                //Wait for stop
      000432                       2033 00104$:
                           00036A  2034 	C$i2c.h$241$1$96 ==.
                                   2035 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:241: SI = 0;
      000432 10 C3 02         [24] 2036 	jbc	_SI,00122$
      000435 80 FB            [24] 2037 	sjmp	00104$
      000437                       2038 00122$:
                           00036F  2039 	C$i2c.h$242$1$96 ==.
                                   2040 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:242: return input_data;         //Return the read data
      000437 8F 82            [24] 2041 	mov	dpl,r7
                           000371  2042 	C$i2c.h$243$1$96 ==.
                           000371  2043 	XG$i2c_read_and_stop$0$0 ==.
      000439 22               [24] 2044 	ret
                                   2045 ;------------------------------------------------------------
                                   2046 ;Allocation info for local variables in function 'i2c_write_data'
                                   2047 ;------------------------------------------------------------
                                   2048 ;start_reg                 Allocated with name '_i2c_write_data_PARM_2'
                                   2049 ;buffer                    Allocated with name '_i2c_write_data_PARM_3'
                                   2050 ;num_bytes                 Allocated with name '_i2c_write_data_PARM_4'
                                   2051 ;addr                      Allocated to registers r7 
                                   2052 ;i                         Allocated to registers 
                                   2053 ;------------------------------------------------------------
                           000372  2054 	G$i2c_write_data$0$0 ==.
                           000372  2055 	C$i2c.h$246$1$96 ==.
                                   2056 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:246: void i2c_write_data(unsigned char addr, unsigned char start_reg, unsigned char *buffer, unsigned char num_bytes)
                                   2057 ;	-----------------------------------------
                                   2058 ;	 function i2c_write_data
                                   2059 ;	-----------------------------------------
      00043A                       2060 _i2c_write_data:
      00043A AF 82            [24] 2061 	mov	r7,dpl
                           000374  2062 	C$i2c.h$250$1$98 ==.
                                   2063 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:250: i2c_start();               //initiate I2C transfer
      00043C C0 07            [24] 2064 	push	ar7
      00043E 12 03 FF         [24] 2065 	lcall	_i2c_start
      000441 D0 07            [24] 2066 	pop	ar7
                           00037B  2067 	C$i2c.h$251$1$98 ==.
                                   2068 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:251: i2c_write(addr & ~0x01);   //write the desired address to the bus
      000443 74 FE            [12] 2069 	mov	a,#0xFE
      000445 5F               [12] 2070 	anl	a,r7
      000446 F5 82            [12] 2071 	mov	dpl,a
      000448 12 04 0C         [24] 2072 	lcall	_i2c_write
                           000383  2073 	C$i2c.h$252$1$98 ==.
                                   2074 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:252: i2c_write(start_reg);      //write the start register to the bus
      00044B 85 27 82         [24] 2075 	mov	dpl,_i2c_write_data_PARM_2
      00044E 12 04 0C         [24] 2076 	lcall	_i2c_write
                           000389  2077 	C$i2c.h$253$1$98 ==.
                                   2078 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:253: for(i=0; i<num_bytes-1; i++) //write the data to the register(s)
      000451 7F 00            [12] 2079 	mov	r7,#0x00
      000453                       2080 00103$:
      000453 AD 2B            [24] 2081 	mov	r5,_i2c_write_data_PARM_4
      000455 7E 00            [12] 2082 	mov	r6,#0x00
      000457 1D               [12] 2083 	dec	r5
      000458 BD FF 01         [24] 2084 	cjne	r5,#0xFF,00114$
      00045B 1E               [12] 2085 	dec	r6
      00045C                       2086 00114$:
      00045C 8F 03            [24] 2087 	mov	ar3,r7
      00045E 7C 00            [12] 2088 	mov	r4,#0x00
      000460 C3               [12] 2089 	clr	c
      000461 EB               [12] 2090 	mov	a,r3
      000462 9D               [12] 2091 	subb	a,r5
      000463 EC               [12] 2092 	mov	a,r4
      000464 64 80            [12] 2093 	xrl	a,#0x80
      000466 8E F0            [24] 2094 	mov	b,r6
      000468 63 F0 80         [24] 2095 	xrl	b,#0x80
      00046B 95 F0            [12] 2096 	subb	a,b
      00046D 50 1F            [24] 2097 	jnc	00101$
                           0003A7  2098 	C$i2c.h$254$1$98 ==.
                                   2099 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:254: i2c_write(buffer[i]);
      00046F EF               [12] 2100 	mov	a,r7
      000470 25 28            [12] 2101 	add	a,_i2c_write_data_PARM_3
      000472 FC               [12] 2102 	mov	r4,a
      000473 E4               [12] 2103 	clr	a
      000474 35 29            [12] 2104 	addc	a,(_i2c_write_data_PARM_3 + 1)
      000476 FD               [12] 2105 	mov	r5,a
      000477 AE 2A            [24] 2106 	mov	r6,(_i2c_write_data_PARM_3 + 2)
      000479 8C 82            [24] 2107 	mov	dpl,r4
      00047B 8D 83            [24] 2108 	mov	dph,r5
      00047D 8E F0            [24] 2109 	mov	b,r6
      00047F 12 16 3C         [24] 2110 	lcall	__gptrget
      000482 F5 82            [12] 2111 	mov	dpl,a
      000484 C0 07            [24] 2112 	push	ar7
      000486 12 04 0C         [24] 2113 	lcall	_i2c_write
      000489 D0 07            [24] 2114 	pop	ar7
                           0003C3  2115 	C$i2c.h$253$1$98 ==.
                                   2116 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:253: for(i=0; i<num_bytes-1; i++) //write the data to the register(s)
      00048B 0F               [12] 2117 	inc	r7
      00048C 80 C5            [24] 2118 	sjmp	00103$
      00048E                       2119 00101$:
                           0003C6  2120 	C$i2c.h$255$1$98 ==.
                                   2121 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:255: i2c_write_and_stop(buffer[num_bytes-1]); //Stop transfer
      00048E AE 2B            [24] 2122 	mov	r6,_i2c_write_data_PARM_4
      000490 7F 00            [12] 2123 	mov	r7,#0x00
      000492 1E               [12] 2124 	dec	r6
      000493 BE FF 01         [24] 2125 	cjne	r6,#0xFF,00116$
      000496 1F               [12] 2126 	dec	r7
      000497                       2127 00116$:
      000497 EE               [12] 2128 	mov	a,r6
      000498 25 28            [12] 2129 	add	a,_i2c_write_data_PARM_3
      00049A FE               [12] 2130 	mov	r6,a
      00049B EF               [12] 2131 	mov	a,r7
      00049C 35 29            [12] 2132 	addc	a,(_i2c_write_data_PARM_3 + 1)
      00049E FF               [12] 2133 	mov	r7,a
      00049F AD 2A            [24] 2134 	mov	r5,(_i2c_write_data_PARM_3 + 2)
      0004A1 8E 82            [24] 2135 	mov	dpl,r6
      0004A3 8F 83            [24] 2136 	mov	dph,r7
      0004A5 8D F0            [24] 2137 	mov	b,r5
      0004A7 12 16 3C         [24] 2138 	lcall	__gptrget
      0004AA F5 82            [12] 2139 	mov	dpl,a
      0004AC 12 04 15         [24] 2140 	lcall	_i2c_write_and_stop
                           0003E7  2141 	C$i2c.h$256$1$98 ==.
                           0003E7  2142 	XG$i2c_write_data$0$0 ==.
      0004AF 22               [24] 2143 	ret
                                   2144 ;------------------------------------------------------------
                                   2145 ;Allocation info for local variables in function 'i2c_read_data'
                                   2146 ;------------------------------------------------------------
                                   2147 ;start_reg                 Allocated with name '_i2c_read_data_PARM_2'
                                   2148 ;buffer                    Allocated with name '_i2c_read_data_PARM_3'
                                   2149 ;num_bytes                 Allocated with name '_i2c_read_data_PARM_4'
                                   2150 ;addr                      Allocated to registers r7 
                                   2151 ;j                         Allocated to registers 
                                   2152 ;------------------------------------------------------------
                           0003E8  2153 	G$i2c_read_data$0$0 ==.
                           0003E8  2154 	C$i2c.h$259$1$98 ==.
                                   2155 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:259: void i2c_read_data(unsigned char addr, unsigned char start_reg, unsigned char *buffer, unsigned char num_bytes)
                                   2156 ;	-----------------------------------------
                                   2157 ;	 function i2c_read_data
                                   2158 ;	-----------------------------------------
      0004B0                       2159 _i2c_read_data:
      0004B0 AF 82            [24] 2160 	mov	r7,dpl
                           0003EA  2161 	C$i2c.h$262$1$100 ==.
                                   2162 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:262: i2c_start();               //Start I2C transfer
      0004B2 C0 07            [24] 2163 	push	ar7
      0004B4 12 03 FF         [24] 2164 	lcall	_i2c_start
      0004B7 D0 07            [24] 2165 	pop	ar7
                           0003F1  2166 	C$i2c.h$263$1$100 ==.
                                   2167 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:263: i2c_write(addr & ~0x01);   //Write address of device that will be written to, send 0
      0004B9 8F 06            [24] 2168 	mov	ar6,r7
      0004BB 74 FE            [12] 2169 	mov	a,#0xFE
      0004BD 5E               [12] 2170 	anl	a,r6
      0004BE F5 82            [12] 2171 	mov	dpl,a
      0004C0 C0 07            [24] 2172 	push	ar7
      0004C2 12 04 0C         [24] 2173 	lcall	_i2c_write
                           0003FD  2174 	C$i2c.h$264$1$100 ==.
                                   2175 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:264: i2c_write_and_stop(start_reg); //Write & stop the 1st register to be read
      0004C5 85 2C 82         [24] 2176 	mov	dpl,_i2c_read_data_PARM_2
      0004C8 12 04 15         [24] 2177 	lcall	_i2c_write_and_stop
                           000403  2178 	C$i2c.h$265$1$100 ==.
                                   2179 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:265: i2c_start();               //Start I2C transfer
      0004CB 12 03 FF         [24] 2180 	lcall	_i2c_start
      0004CE D0 07            [24] 2181 	pop	ar7
                           000408  2182 	C$i2c.h$266$1$100 ==.
                                   2183 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:266: i2c_write(addr | 0x01);    //Write address again, this time indicating a read operation
      0004D0 74 01            [12] 2184 	mov	a,#0x01
      0004D2 4F               [12] 2185 	orl	a,r7
      0004D3 F5 82            [12] 2186 	mov	dpl,a
      0004D5 12 04 0C         [24] 2187 	lcall	_i2c_write
                           000410  2188 	C$i2c.h$267$1$100 ==.
                                   2189 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:267: for(j = 0; j < num_bytes - 1; j++)
      0004D8 7F 00            [12] 2190 	mov	r7,#0x00
      0004DA                       2191 00103$:
      0004DA AD 30            [24] 2192 	mov	r5,_i2c_read_data_PARM_4
      0004DC 7E 00            [12] 2193 	mov	r6,#0x00
      0004DE 1D               [12] 2194 	dec	r5
      0004DF BD FF 01         [24] 2195 	cjne	r5,#0xFF,00114$
      0004E2 1E               [12] 2196 	dec	r6
      0004E3                       2197 00114$:
      0004E3 8F 03            [24] 2198 	mov	ar3,r7
      0004E5 7C 00            [12] 2199 	mov	r4,#0x00
      0004E7 C3               [12] 2200 	clr	c
      0004E8 EB               [12] 2201 	mov	a,r3
      0004E9 9D               [12] 2202 	subb	a,r5
      0004EA EC               [12] 2203 	mov	a,r4
      0004EB 64 80            [12] 2204 	xrl	a,#0x80
      0004ED 8E F0            [24] 2205 	mov	b,r6
      0004EF 63 F0 80         [24] 2206 	xrl	b,#0x80
      0004F2 95 F0            [12] 2207 	subb	a,b
      0004F4 50 2E            [24] 2208 	jnc	00101$
                           00042E  2209 	C$i2c.h$269$2$101 ==.
                                   2210 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:269: AA = 1;                //Set acknowledge bit
      0004F6 D2 C2            [12] 2211 	setb	_AA
                           000430  2212 	C$i2c.h$270$2$101 ==.
                                   2213 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:270: buffer[j] = i2c_read();//Read data, save it in buffer
      0004F8 EF               [12] 2214 	mov	a,r7
      0004F9 25 2D            [12] 2215 	add	a,_i2c_read_data_PARM_3
      0004FB FC               [12] 2216 	mov	r4,a
      0004FC E4               [12] 2217 	clr	a
      0004FD 35 2E            [12] 2218 	addc	a,(_i2c_read_data_PARM_3 + 1)
      0004FF FD               [12] 2219 	mov	r5,a
      000500 AE 2F            [24] 2220 	mov	r6,(_i2c_read_data_PARM_3 + 2)
      000502 C0 07            [24] 2221 	push	ar7
      000504 C0 06            [24] 2222 	push	ar6
      000506 C0 05            [24] 2223 	push	ar5
      000508 C0 04            [24] 2224 	push	ar4
      00050A 12 04 20         [24] 2225 	lcall	_i2c_read
      00050D AB 82            [24] 2226 	mov	r3,dpl
      00050F D0 04            [24] 2227 	pop	ar4
      000511 D0 05            [24] 2228 	pop	ar5
      000513 D0 06            [24] 2229 	pop	ar6
      000515 D0 07            [24] 2230 	pop	ar7
      000517 8C 82            [24] 2231 	mov	dpl,r4
      000519 8D 83            [24] 2232 	mov	dph,r5
      00051B 8E F0            [24] 2233 	mov	b,r6
      00051D EB               [12] 2234 	mov	a,r3
      00051E 12 0C 8F         [24] 2235 	lcall	__gptrput
                           000459  2236 	C$i2c.h$267$1$100 ==.
                                   2237 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:267: for(j = 0; j < num_bytes - 1; j++)
      000521 0F               [12] 2238 	inc	r7
      000522 80 B6            [24] 2239 	sjmp	00103$
      000524                       2240 00101$:
                           00045C  2241 	C$i2c.h$272$1$100 ==.
                                   2242 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:272: AA = 0;
      000524 C2 C2            [12] 2243 	clr	_AA
                           00045E  2244 	C$i2c.h$273$1$100 ==.
                                   2245 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:273: buffer[num_bytes - 1] = i2c_read_and_stop(); //Read the last byte and stop, save it in the buffer
      000526 AE 30            [24] 2246 	mov	r6,_i2c_read_data_PARM_4
      000528 7F 00            [12] 2247 	mov	r7,#0x00
      00052A 1E               [12] 2248 	dec	r6
      00052B BE FF 01         [24] 2249 	cjne	r6,#0xFF,00116$
      00052E 1F               [12] 2250 	dec	r7
      00052F                       2251 00116$:
      00052F EE               [12] 2252 	mov	a,r6
      000530 25 2D            [12] 2253 	add	a,_i2c_read_data_PARM_3
      000532 FE               [12] 2254 	mov	r6,a
      000533 EF               [12] 2255 	mov	a,r7
      000534 35 2E            [12] 2256 	addc	a,(_i2c_read_data_PARM_3 + 1)
      000536 FF               [12] 2257 	mov	r7,a
      000537 AD 2F            [24] 2258 	mov	r5,(_i2c_read_data_PARM_3 + 2)
      000539 C0 07            [24] 2259 	push	ar7
      00053B C0 06            [24] 2260 	push	ar6
      00053D C0 05            [24] 2261 	push	ar5
      00053F 12 04 29         [24] 2262 	lcall	_i2c_read_and_stop
      000542 AC 82            [24] 2263 	mov	r4,dpl
      000544 D0 05            [24] 2264 	pop	ar5
      000546 D0 06            [24] 2265 	pop	ar6
      000548 D0 07            [24] 2266 	pop	ar7
      00054A 8E 82            [24] 2267 	mov	dpl,r6
      00054C 8F 83            [24] 2268 	mov	dph,r7
      00054E 8D F0            [24] 2269 	mov	b,r5
      000550 EC               [12] 2270 	mov	a,r4
      000551 12 0C 8F         [24] 2271 	lcall	__gptrput
                           00048C  2272 	C$i2c.h$274$1$100 ==.
                           00048C  2273 	XG$i2c_read_data$0$0 ==.
      000554 22               [24] 2274 	ret
                                   2275 ;------------------------------------------------------------
                                   2276 ;Allocation info for local variables in function 'Accel_Init'
                                   2277 ;------------------------------------------------------------
                                   2278 ;Data2                     Allocated with name '_Accel_Init_Data2_1_103'
                                   2279 ;------------------------------------------------------------
                           00048D  2280 	G$Accel_Init$0$0 ==.
                           00048D  2281 	C$i2c.h$283$1$100 ==.
                                   2282 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:283: void Accel_Init(void)
                                   2283 ;	-----------------------------------------
                                   2284 ;	 function Accel_Init
                                   2285 ;	-----------------------------------------
      000555                       2286 _Accel_Init:
                           00048D  2287 	C$i2c.h$287$1$103 ==.
                                   2288 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:287: Data2[0]=0x23;	//normal power mode, 50Hz ODR, y & x axes enabled
      000555 75 31 23         [24] 2289 	mov	_Accel_Init_Data2_1_103,#0x23
                           000490  2290 	C$i2c.h$289$1$103 ==.
                                   2291 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:289: i2c_write_data(addr_accel, 0x20, Data2, 1);
      000558 75 28 31         [24] 2292 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      00055B 75 29 00         [24] 2293 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      00055E 75 2A 40         [24] 2294 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000561 75 27 20         [24] 2295 	mov	_i2c_write_data_PARM_2,#0x20
      000564 75 2B 01         [24] 2296 	mov	_i2c_write_data_PARM_4,#0x01
      000567 75 82 30         [24] 2297 	mov	dpl,#0x30
      00056A 12 04 3A         [24] 2298 	lcall	_i2c_write_data
                           0004A5  2299 	C$i2c.h$290$1$103 ==.
                                   2300 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:290: Data2[0]=0x00;	//Default - no filtering
      00056D 75 31 00         [24] 2301 	mov	_Accel_Init_Data2_1_103,#0x00
                           0004A8  2302 	C$i2c.h$292$1$103 ==.
                                   2303 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:292: i2c_write_data(addr_accel, 0x21, Data2, 1);
      000570 75 28 31         [24] 2304 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      000573 75 29 00         [24] 2305 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      000576 75 2A 40         [24] 2306 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000579 75 27 21         [24] 2307 	mov	_i2c_write_data_PARM_2,#0x21
      00057C 75 2B 01         [24] 2308 	mov	_i2c_write_data_PARM_4,#0x01
      00057F 75 82 30         [24] 2309 	mov	dpl,#0x30
      000582 12 04 3A         [24] 2310 	lcall	_i2c_write_data
                           0004BD  2311 	C$i2c.h$293$1$103 ==.
                                   2312 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:293: Data2[0]=0x00;	//default - no interrupts enabled
      000585 75 31 00         [24] 2313 	mov	_Accel_Init_Data2_1_103,#0x00
                           0004C0  2314 	C$i2c.h$294$1$103 ==.
                                   2315 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:294: i2c_write_data(addr_accel, 0x22, Data2, 1);
      000588 75 28 31         [24] 2316 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      00058B 75 29 00         [24] 2317 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      00058E 75 2A 40         [24] 2318 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000591 75 27 22         [24] 2319 	mov	_i2c_write_data_PARM_2,#0x22
      000594 75 2B 01         [24] 2320 	mov	_i2c_write_data_PARM_4,#0x01
      000597 75 82 30         [24] 2321 	mov	dpl,#0x30
      00059A 12 04 3A         [24] 2322 	lcall	_i2c_write_data
                           0004D5  2323 	C$i2c.h$298$1$103 ==.
                           0004D5  2324 	XG$Accel_Init$0$0 ==.
      00059D 22               [24] 2325 	ret
                                   2326 ;------------------------------------------------------------
                                   2327 ;Allocation info for local variables in function 'main'
                                   2328 ;------------------------------------------------------------
                           0004D6  2329 	G$main$0$0 ==.
                           0004D6  2330 	C$lab4_m.c$61$1$103 ==.
                                   2331 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:61: void main(void)
                                   2332 ;	-----------------------------------------
                                   2333 ;	 function main
                                   2334 ;	-----------------------------------------
      00059E                       2335 _main:
                           0004D6  2336 	C$lab4_m.c$64$1$113 ==.
                                   2337 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:64: Sys_Init();
      00059E 12 00 F8         [24] 2338 	lcall	_Sys_Init
                           0004D9  2339 	C$lab4_m.c$65$1$113 ==.
                                   2340 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:65: putchar(' '); //the quotes in this line may not format correctly
      0005A1 75 82 20         [24] 2341 	mov	dpl,#0x20
      0005A4 12 01 0B         [24] 2342 	lcall	_putchar
                           0004DF  2343 	C$lab4_m.c$66$1$113 ==.
                                   2344 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:66: Port_Init();
      0005A7 12 0A F5         [24] 2345 	lcall	_Port_Init
                           0004E2  2346 	C$lab4_m.c$67$1$113 ==.
                                   2347 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:67: XBR0_Init();
      0005AA 12 0B 0A         [24] 2348 	lcall	_XBR0_Init
                           0004E5  2349 	C$lab4_m.c$68$1$113 ==.
                                   2350 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:68: PCA_Init();
      0005AD 12 0B 14         [24] 2351 	lcall	_PCA_Init
                           0004E8  2352 	C$lab4_m.c$69$1$113 ==.
                                   2353 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:69: SMB_Init();
      0005B0 12 0B 0E         [24] 2354 	lcall	_SMB_Init
                           0004EB  2355 	C$lab4_m.c$72$1$113 ==.
                                   2356 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:72: printf("Embedded Control Car Calibration\n");
      0005B3 74 4A            [12] 2357 	mov	a,#___str_3
      0005B5 C0 E0            [24] 2358 	push	acc
      0005B7 74 17            [12] 2359 	mov	a,#(___str_3 >> 8)
      0005B9 C0 E0            [24] 2360 	push	acc
      0005BB 74 80            [12] 2361 	mov	a,#0x80
      0005BD C0 E0            [24] 2362 	push	acc
      0005BF 12 0F 6B         [24] 2363 	lcall	_printf
      0005C2 15 81            [12] 2364 	dec	sp
      0005C4 15 81            [12] 2365 	dec	sp
      0005C6 15 81            [12] 2366 	dec	sp
                           000500  2367 	C$lab4_m.c$74$1$113 ==.
                                   2368 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:74: STR_PW = PW_CENTER_STR;
      0005C8 75 34 7D         [24] 2369 	mov	_STR_PW,#0x7D
      0005CB 75 35 0A         [24] 2370 	mov	(_STR_PW + 1),#0x0A
                           000506  2371 	C$lab4_m.c$76$1$113 ==.
                                   2372 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:76: tmp0_lo_to_hi= 0xFFFF - STR_PW;
      0005CE 75 32 82         [24] 2373 	mov	_tmp0_lo_to_hi,#0x82
      0005D1 75 33 F5         [24] 2374 	mov	(_tmp0_lo_to_hi + 1),#0xF5
                           00050C  2375 	C$lab4_m.c$77$1$113 ==.
                                   2376 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:77: PCA0CP0 = tmp0_lo_to_hi;
      0005D4 75 EA 82         [24] 2377 	mov	((_PCA0CP0 >> 0) & 0xFF),#0x82
      0005D7 75 FA F5         [24] 2378 	mov	((_PCA0CP0 >> 8) & 0xFF),#0xF5
                           000512  2379 	C$lab4_m.c$79$1$113 ==.
                                   2380 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:79: MOTOR_PW = PW_NUET_DRIVE;
      0005DA 75 49 CD         [24] 2381 	mov	_MOTOR_PW,#0xCD
      0005DD 75 4A 0A         [24] 2382 	mov	(_MOTOR_PW + 1),#0x0A
                           000518  2383 	C$lab4_m.c$80$1$113 ==.
                                   2384 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:80: PCA0CPL2 = 0xFFFF - MOTOR_PW;
      0005E0 75 EC 32         [24] 2385 	mov	_PCA0CPL2,#0x32
                           00051B  2386 	C$lab4_m.c$81$1$113 ==.
                                   2387 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:81: PCA0CPH2 = (0xFFFF - MOTOR_PW) >> 8;
      0005E3 75 FC F5         [24] 2388 	mov	_PCA0CPH2,#0xF5
                           00051E  2389 	C$lab4_m.c$83$1$113 ==.
                                   2390 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:83: count=0;
      0005E6 E4               [12] 2391 	clr	a
      0005E7 F5 36            [12] 2392 	mov	_count,a
      0005E9 F5 37            [12] 2393 	mov	(_count + 1),a
                           000523  2394 	C$lab4_m.c$85$1$113 ==.
                                   2395 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:85: while (count < 50);
      0005EB                       2396 00101$:
      0005EB C3               [12] 2397 	clr	c
      0005EC E5 36            [12] 2398 	mov	a,_count
      0005EE 94 32            [12] 2399 	subb	a,#0x32
      0005F0 E5 37            [12] 2400 	mov	a,(_count + 1)
      0005F2 94 00            [12] 2401 	subb	a,#0x00
      0005F4 40 F5            [24] 2402 	jc	00101$
                           00052E  2403 	C$lab4_m.c$86$1$113 ==.
                                   2404 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:86: while (1)
      0005F6                       2405 00118$:
                           00052E  2406 	C$lab4_m.c$88$2$114 ==.
                                   2407 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:88: if (!SS0)
      0005F6 30 B6 03         [24] 2408 	jnb	_SS0,00153$
      0005F9 02 06 B6         [24] 2409 	ljmp	00114$
      0005FC                       2410 00153$:
                           000534  2411 	C$lab4_m.c$90$3$115 ==.
                                   2412 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:90: count =0;
      0005FC E4               [12] 2413 	clr	a
      0005FD F5 36            [12] 2414 	mov	_count,a
      0005FF F5 37            [12] 2415 	mov	(_count + 1),a
                           000539  2416 	C$lab4_m.c$92$3$115 ==.
                                   2417 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:92: while (count < 2);
      000601                       2418 00104$:
      000601 C3               [12] 2419 	clr	c
      000602 E5 36            [12] 2420 	mov	a,_count
      000604 94 02            [12] 2421 	subb	a,#0x02
      000606 E5 37            [12] 2422 	mov	a,(_count + 1)
      000608 94 00            [12] 2423 	subb	a,#0x00
      00060A 40 F5            [24] 2424 	jc	00104$
                           000544  2425 	C$lab4_m.c$93$3$115 ==.
                                   2426 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:93: if (c_counts == 2  && new_heading)
      00060C 74 02            [12] 2427 	mov	a,#0x02
      00060E B5 44 59         [24] 2428 	cjne	a,_c_counts,00108$
      000611 E5 4B            [12] 2429 	mov	a,_new_heading
      000613 60 55            [24] 2430 	jz	00108$
                           00054D  2431 	C$lab4_m.c$95$4$116 ==.
                                   2432 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:95: actual_heading = ReadCompass();
      000615 12 08 50         [24] 2433 	lcall	_ReadCompass
      000618 85 82 39         [24] 2434 	mov	_actual_heading,dpl
      00061B 85 83 3A         [24] 2435 	mov	(_actual_heading + 1),dph
                           000556  2436 	C$lab4_m.c$96$4$116 ==.
                                   2437 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:96: offset = (unsigned int)((actual_heading +3600- desired_heading ) % 3600);
      00061E 74 10            [12] 2438 	mov	a,#0x10
      000620 25 39            [12] 2439 	add	a,_actual_heading
      000622 FE               [12] 2440 	mov	r6,a
      000623 74 0E            [12] 2441 	mov	a,#0x0E
      000625 35 3A            [12] 2442 	addc	a,(_actual_heading + 1)
      000627 FF               [12] 2443 	mov	r7,a
      000628 EE               [12] 2444 	mov	a,r6
      000629 C3               [12] 2445 	clr	c
      00062A 95 3B            [12] 2446 	subb	a,_desired_heading
      00062C F5 82            [12] 2447 	mov	dpl,a
      00062E EF               [12] 2448 	mov	a,r7
      00062F 95 3C            [12] 2449 	subb	a,(_desired_heading + 1)
      000631 F5 83            [12] 2450 	mov	dph,a
      000633 75 11 10         [24] 2451 	mov	__modsint_PARM_2,#0x10
      000636 75 12 0E         [24] 2452 	mov	(__modsint_PARM_2 + 1),#0x0E
      000639 12 16 58         [24] 2453 	lcall	__modsint
      00063C AE 82            [24] 2454 	mov	r6,dpl
      00063E AF 83            [24] 2455 	mov	r7,dph
      000640 8E 3F            [24] 2456 	mov	_offset,r6
      000642 8F 40            [24] 2457 	mov	(_offset + 1),r7
                           00057C  2458 	C$lab4_m.c$97$4$116 ==.
                                   2459 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:97: printf("\r\n%d||%d",actual_heading,offset);
      000644 C0 3F            [24] 2460 	push	_offset
      000646 C0 40            [24] 2461 	push	(_offset + 1)
      000648 C0 39            [24] 2462 	push	_actual_heading
      00064A C0 3A            [24] 2463 	push	(_actual_heading + 1)
      00064C 74 6C            [12] 2464 	mov	a,#___str_4
      00064E C0 E0            [24] 2465 	push	acc
      000650 74 17            [12] 2466 	mov	a,#(___str_4 >> 8)
      000652 C0 E0            [24] 2467 	push	acc
      000654 74 80            [12] 2468 	mov	a,#0x80
      000656 C0 E0            [24] 2469 	push	acc
      000658 12 0F 6B         [24] 2470 	lcall	_printf
      00065B E5 81            [12] 2471 	mov	a,sp
      00065D 24 F9            [12] 2472 	add	a,#0xf9
      00065F F5 81            [12] 2473 	mov	sp,a
                           000599  2474 	C$lab4_m.c$98$4$116 ==.
                                   2475 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:98: Steering_Servo(offset);				
      000661 85 3F 82         [24] 2476 	mov	dpl,_offset
      000664 85 40 83         [24] 2477 	mov	dph,(_offset + 1)
      000667 12 08 76         [24] 2478 	lcall	_Steering_Servo
      00066A                       2479 00108$:
                           0005A2  2480 	C$lab4_m.c$101$3$115 ==.
                                   2481 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:101: if (r_counts == 4 && new_range)
      00066A 74 04            [12] 2482 	mov	a,#0x04
      00066C B5 43 47         [24] 2483 	cjne	a,_r_counts,00114$
      00066F E5 46            [12] 2484 	mov	a,_new_range
      000671 60 43            [24] 2485 	jz	00114$
                           0005AB  2486 	C$lab4_m.c$103$4$117 ==.
                                   2487 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:103: range = Read_Ranger();
      000673 12 08 27         [24] 2488 	lcall	_Read_Ranger
      000676 85 82 41         [24] 2489 	mov	_range,dpl
      000679 85 83 42         [24] 2490 	mov	(_range + 1),dph
                           0005B4  2491 	C$lab4_m.c$104$4$117 ==.
                                   2492 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:104: r_counts = 0;
      00067C 75 43 00         [24] 2493 	mov	_r_counts,#0x00
                           0005B7  2494 	C$lab4_m.c$105$4$117 ==.
                                   2495 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:105: new_range = 0;
      00067F 75 46 00         [24] 2496 	mov	_new_range,#0x00
                           0005BA  2497 	C$lab4_m.c$106$4$117 ==.
                                   2498 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:106: r_data[0] = 0x51;
      000682 75 47 51         [24] 2499 	mov	_r_data,#0x51
                           0005BD  2500 	C$lab4_m.c$107$4$117 ==.
                                   2501 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:107: i2c_write_data(r_addr, 0, r_data, 1);
      000685 75 28 47         [24] 2502 	mov	_i2c_write_data_PARM_3,#_r_data
      000688 75 29 00         [24] 2503 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      00068B 75 2A 40         [24] 2504 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      00068E 75 27 00         [24] 2505 	mov	_i2c_write_data_PARM_2,#0x00
      000691 75 2B 01         [24] 2506 	mov	_i2c_write_data_PARM_4,#0x01
      000694 85 45 82         [24] 2507 	mov	dpl,_r_addr
      000697 12 04 3A         [24] 2508 	lcall	_i2c_write_data
                           0005D2  2509 	C$lab4_m.c$108$4$117 ==.
                                   2510 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:108: printf("\r\n The range is: %d", range);
      00069A C0 41            [24] 2511 	push	_range
      00069C C0 42            [24] 2512 	push	(_range + 1)
      00069E 74 75            [12] 2513 	mov	a,#___str_5
      0006A0 C0 E0            [24] 2514 	push	acc
      0006A2 74 17            [12] 2515 	mov	a,#(___str_5 >> 8)
      0006A4 C0 E0            [24] 2516 	push	acc
      0006A6 74 80            [12] 2517 	mov	a,#0x80
      0006A8 C0 E0            [24] 2518 	push	acc
      0006AA 12 0F 6B         [24] 2519 	lcall	_printf
      0006AD E5 81            [12] 2520 	mov	a,sp
      0006AF 24 FB            [12] 2521 	add	a,#0xfb
      0006B1 F5 81            [12] 2522 	mov	sp,a
                           0005EB  2523 	C$lab4_m.c$109$4$117 ==.
                                   2524 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:109: Drive_Motor();
      0006B3 12 06 D5         [24] 2525 	lcall	_Drive_Motor
      0006B6                       2526 00114$:
                           0005EE  2527 	C$lab4_m.c$113$2$114 ==.
                                   2528 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:113: if (SS0) {printf("\r\n The control is paused");}
      0006B6 20 B6 03         [24] 2529 	jb	_SS0,00161$
      0006B9 02 05 F6         [24] 2530 	ljmp	00118$
      0006BC                       2531 00161$:
      0006BC 74 89            [12] 2532 	mov	a,#___str_6
      0006BE C0 E0            [24] 2533 	push	acc
      0006C0 74 17            [12] 2534 	mov	a,#(___str_6 >> 8)
      0006C2 C0 E0            [24] 2535 	push	acc
      0006C4 74 80            [12] 2536 	mov	a,#0x80
      0006C6 C0 E0            [24] 2537 	push	acc
      0006C8 12 0F 6B         [24] 2538 	lcall	_printf
      0006CB 15 81            [12] 2539 	dec	sp
      0006CD 15 81            [12] 2540 	dec	sp
      0006CF 15 81            [12] 2541 	dec	sp
      0006D1 02 05 F6         [24] 2542 	ljmp	00118$
                           00060C  2543 	C$lab4_m.c$115$1$113 ==.
                           00060C  2544 	XG$main$0$0 ==.
      0006D4 22               [24] 2545 	ret
                                   2546 ;------------------------------------------------------------
                                   2547 ;Allocation info for local variables in function 'Drive_Motor'
                                   2548 ;------------------------------------------------------------
                           00060D  2549 	G$Drive_Motor$0$0 ==.
                           00060D  2550 	C$lab4_m.c$123$1$113 ==.
                                   2551 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:123: void Drive_Motor(void)
                                   2552 ;	-----------------------------------------
                                   2553 ;	 function Drive_Motor
                                   2554 ;	-----------------------------------------
      0006D5                       2555 _Drive_Motor:
                           00060D  2556 	C$lab4_m.c$125$1$120 ==.
                                   2557 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:125: if (range <= 10) {MOTOR_PW = PW_MAX_DRIVE;}
      0006D5 C3               [12] 2558 	clr	c
      0006D6 74 0A            [12] 2559 	mov	a,#0x0A
      0006D8 95 41            [12] 2560 	subb	a,_range
      0006DA E4               [12] 2561 	clr	a
      0006DB 95 42            [12] 2562 	subb	a,(_range + 1)
      0006DD 40 06            [24] 2563 	jc	00102$
      0006DF 75 49 AF         [24] 2564 	mov	_MOTOR_PW,#0xAF
      0006E2 75 4A 0D         [24] 2565 	mov	(_MOTOR_PW + 1),#0x0D
      0006E5                       2566 00102$:
                           00061D  2567 	C$lab4_m.c$126$1$120 ==.
                                   2568 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:126: if (range >= 90) {MOTOR_PW = PW_MIN_DRIVE;}
      0006E5 C3               [12] 2569 	clr	c
      0006E6 E5 41            [12] 2570 	mov	a,_range
      0006E8 94 5A            [12] 2571 	subb	a,#0x5A
      0006EA E5 42            [12] 2572 	mov	a,(_range + 1)
      0006EC 94 00            [12] 2573 	subb	a,#0x00
      0006EE 40 06            [24] 2574 	jc	00104$
      0006F0 75 49 EC         [24] 2575 	mov	_MOTOR_PW,#0xEC
      0006F3 75 4A 07         [24] 2576 	mov	(_MOTOR_PW + 1),#0x07
      0006F6                       2577 00104$:
                           00062E  2578 	C$lab4_m.c$127$1$120 ==.
                                   2579 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:127: if (range <= 50 && range >= 40) {MOTOR_PW = PW_NUET_DRIVE;}
      0006F6 C3               [12] 2580 	clr	c
      0006F7 74 32            [12] 2581 	mov	a,#0x32
      0006F9 95 41            [12] 2582 	subb	a,_range
      0006FB E4               [12] 2583 	clr	a
      0006FC 95 42            [12] 2584 	subb	a,(_range + 1)
      0006FE 40 10            [24] 2585 	jc	00106$
      000700 E5 41            [12] 2586 	mov	a,_range
      000702 94 28            [12] 2587 	subb	a,#0x28
      000704 E5 42            [12] 2588 	mov	a,(_range + 1)
      000706 94 00            [12] 2589 	subb	a,#0x00
      000708 40 06            [24] 2590 	jc	00106$
      00070A 75 49 CD         [24] 2591 	mov	_MOTOR_PW,#0xCD
      00070D 75 4A 0A         [24] 2592 	mov	(_MOTOR_PW + 1),#0x0A
      000710                       2593 00106$:
                           000648  2594 	C$lab4_m.c$129$1$120 ==.
                                   2595 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:129: if (range < 40 && range > 10)
      000710 C3               [12] 2596 	clr	c
      000711 E5 41            [12] 2597 	mov	a,_range
      000713 94 28            [12] 2598 	subb	a,#0x28
      000715 E5 42            [12] 2599 	mov	a,(_range + 1)
      000717 94 00            [12] 2600 	subb	a,#0x00
      000719 50 70            [24] 2601 	jnc	00109$
      00071B C3               [12] 2602 	clr	c
      00071C 74 0A            [12] 2603 	mov	a,#0x0A
      00071E 95 41            [12] 2604 	subb	a,_range
      000720 E4               [12] 2605 	clr	a
      000721 95 42            [12] 2606 	subb	a,(_range + 1)
      000723 50 66            [24] 2607 	jnc	00109$
                           00065D  2608 	C$lab4_m.c$131$1$120 ==.
                                   2609 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:131: MOTOR_PW = -24.6 * range + 3749;
      000725 85 41 82         [24] 2610 	mov	dpl,_range
      000728 85 42 83         [24] 2611 	mov	dph,(_range + 1)
      00072B 12 0E E1         [24] 2612 	lcall	___uint2fs
      00072E AC 82            [24] 2613 	mov	r4,dpl
      000730 AD 83            [24] 2614 	mov	r5,dph
      000732 AE F0            [24] 2615 	mov	r6,b
      000734 FF               [12] 2616 	mov	r7,a
      000735 C0 04            [24] 2617 	push	ar4
      000737 C0 05            [24] 2618 	push	ar5
      000739 C0 06            [24] 2619 	push	ar6
      00073B C0 07            [24] 2620 	push	ar7
      00073D 90 CC CD         [24] 2621 	mov	dptr,#0xCCCD
      000740 75 F0 C4         [24] 2622 	mov	b,#0xC4
      000743 74 C1            [12] 2623 	mov	a,#0xC1
      000745 12 0B 5B         [24] 2624 	lcall	___fsmul
      000748 AC 82            [24] 2625 	mov	r4,dpl
      00074A AD 83            [24] 2626 	mov	r5,dph
      00074C AE F0            [24] 2627 	mov	r6,b
      00074E FF               [12] 2628 	mov	r7,a
      00074F E5 81            [12] 2629 	mov	a,sp
      000751 24 FC            [12] 2630 	add	a,#0xfc
      000753 F5 81            [12] 2631 	mov	sp,a
      000755 E4               [12] 2632 	clr	a
      000756 C0 E0            [24] 2633 	push	acc
      000758 74 50            [12] 2634 	mov	a,#0x50
      00075A C0 E0            [24] 2635 	push	acc
      00075C 74 6A            [12] 2636 	mov	a,#0x6A
      00075E C0 E0            [24] 2637 	push	acc
      000760 74 45            [12] 2638 	mov	a,#0x45
      000762 C0 E0            [24] 2639 	push	acc
      000764 8C 82            [24] 2640 	mov	dpl,r4
      000766 8D 83            [24] 2641 	mov	dph,r5
      000768 8E F0            [24] 2642 	mov	b,r6
      00076A EF               [12] 2643 	mov	a,r7
      00076B 12 0E 3F         [24] 2644 	lcall	___fsadd
      00076E AC 82            [24] 2645 	mov	r4,dpl
      000770 AD 83            [24] 2646 	mov	r5,dph
      000772 AE F0            [24] 2647 	mov	r6,b
      000774 FF               [12] 2648 	mov	r7,a
      000775 E5 81            [12] 2649 	mov	a,sp
      000777 24 FC            [12] 2650 	add	a,#0xfc
      000779 F5 81            [12] 2651 	mov	sp,a
      00077B 8C 82            [24] 2652 	mov	dpl,r4
      00077D 8D 83            [24] 2653 	mov	dph,r5
      00077F 8E F0            [24] 2654 	mov	b,r6
      000781 EF               [12] 2655 	mov	a,r7
      000782 12 0E ED         [24] 2656 	lcall	___fs2uint
      000785 85 82 49         [24] 2657 	mov	_MOTOR_PW,dpl
      000788 85 83 4A         [24] 2658 	mov	(_MOTOR_PW + 1),dph
      00078B                       2659 00109$:
                           0006C3  2660 	C$lab4_m.c$134$1$120 ==.
                                   2661 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:134: if (range > 50 && range < 90)
      00078B C3               [12] 2662 	clr	c
      00078C 74 32            [12] 2663 	mov	a,#0x32
      00078E 95 41            [12] 2664 	subb	a,_range
      000790 E4               [12] 2665 	clr	a
      000791 95 42            [12] 2666 	subb	a,(_range + 1)
      000793 50 6B            [24] 2667 	jnc	00112$
      000795 C3               [12] 2668 	clr	c
      000796 E5 41            [12] 2669 	mov	a,_range
      000798 94 5A            [12] 2670 	subb	a,#0x5A
      00079A E5 42            [12] 2671 	mov	a,(_range + 1)
      00079C 94 00            [12] 2672 	subb	a,#0x00
      00079E 50 60            [24] 2673 	jnc	00112$
                           0006D8  2674 	C$lab4_m.c$136$1$120 ==.
                                   2675 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:136: MOTOR_PW = 3686.25 - (18.425 * range);
      0007A0 85 41 82         [24] 2676 	mov	dpl,_range
      0007A3 85 42 83         [24] 2677 	mov	dph,(_range + 1)
      0007A6 12 0E E1         [24] 2678 	lcall	___uint2fs
      0007A9 AC 82            [24] 2679 	mov	r4,dpl
      0007AB AD 83            [24] 2680 	mov	r5,dph
      0007AD AE F0            [24] 2681 	mov	r6,b
      0007AF FF               [12] 2682 	mov	r7,a
      0007B0 C0 04            [24] 2683 	push	ar4
      0007B2 C0 05            [24] 2684 	push	ar5
      0007B4 C0 06            [24] 2685 	push	ar6
      0007B6 C0 07            [24] 2686 	push	ar7
      0007B8 90 66 66         [24] 2687 	mov	dptr,#0x6666
      0007BB 75 F0 93         [24] 2688 	mov	b,#0x93
      0007BE 74 41            [12] 2689 	mov	a,#0x41
      0007C0 12 0B 5B         [24] 2690 	lcall	___fsmul
      0007C3 AC 82            [24] 2691 	mov	r4,dpl
      0007C5 AD 83            [24] 2692 	mov	r5,dph
      0007C7 AE F0            [24] 2693 	mov	r6,b
      0007C9 FF               [12] 2694 	mov	r7,a
      0007CA E5 81            [12] 2695 	mov	a,sp
      0007CC 24 FC            [12] 2696 	add	a,#0xfc
      0007CE F5 81            [12] 2697 	mov	sp,a
      0007D0 C0 04            [24] 2698 	push	ar4
      0007D2 C0 05            [24] 2699 	push	ar5
      0007D4 C0 06            [24] 2700 	push	ar6
      0007D6 C0 07            [24] 2701 	push	ar7
      0007D8 90 64 00         [24] 2702 	mov	dptr,#0x6400
      0007DB 75 F0 66         [24] 2703 	mov	b,#0x66
      0007DE 74 45            [12] 2704 	mov	a,#0x45
      0007E0 12 0B 50         [24] 2705 	lcall	___fssub
      0007E3 AC 82            [24] 2706 	mov	r4,dpl
      0007E5 AD 83            [24] 2707 	mov	r5,dph
      0007E7 AE F0            [24] 2708 	mov	r6,b
      0007E9 FF               [12] 2709 	mov	r7,a
      0007EA E5 81            [12] 2710 	mov	a,sp
      0007EC 24 FC            [12] 2711 	add	a,#0xfc
      0007EE F5 81            [12] 2712 	mov	sp,a
      0007F0 8C 82            [24] 2713 	mov	dpl,r4
      0007F2 8D 83            [24] 2714 	mov	dph,r5
      0007F4 8E F0            [24] 2715 	mov	b,r6
      0007F6 EF               [12] 2716 	mov	a,r7
      0007F7 12 0E ED         [24] 2717 	lcall	___fs2uint
      0007FA 85 82 49         [24] 2718 	mov	_MOTOR_PW,dpl
      0007FD 85 83 4A         [24] 2719 	mov	(_MOTOR_PW + 1),dph
      000800                       2720 00112$:
                           000738  2721 	C$lab4_m.c$138$1$120 ==.
                                   2722 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:138: printf("\r\n Motor Power is %u", MOTOR_PW);
      000800 C0 49            [24] 2723 	push	_MOTOR_PW
      000802 C0 4A            [24] 2724 	push	(_MOTOR_PW + 1)
      000804 74 A2            [12] 2725 	mov	a,#___str_7
      000806 C0 E0            [24] 2726 	push	acc
      000808 74 17            [12] 2727 	mov	a,#(___str_7 >> 8)
      00080A C0 E0            [24] 2728 	push	acc
      00080C 74 80            [12] 2729 	mov	a,#0x80
      00080E C0 E0            [24] 2730 	push	acc
      000810 12 0F 6B         [24] 2731 	lcall	_printf
      000813 E5 81            [12] 2732 	mov	a,sp
      000815 24 FB            [12] 2733 	add	a,#0xfb
      000817 F5 81            [12] 2734 	mov	sp,a
                           000751  2735 	C$lab4_m.c$139$1$120 ==.
                                   2736 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:139: PCA0CP2 = 0xFFFF - MOTOR_PW;
      000819 74 FF            [12] 2737 	mov	a,#0xFF
      00081B C3               [12] 2738 	clr	c
      00081C 95 49            [12] 2739 	subb	a,_MOTOR_PW
      00081E F5 EC            [12] 2740 	mov	((_PCA0CP2 >> 0) & 0xFF),a
      000820 74 FF            [12] 2741 	mov	a,#0xFF
      000822 95 4A            [12] 2742 	subb	a,(_MOTOR_PW + 1)
      000824 F5 FC            [12] 2743 	mov	((_PCA0CP2 >> 8) & 0xFF),a
                           00075E  2744 	C$lab4_m.c$140$1$120 ==.
                           00075E  2745 	XG$Drive_Motor$0$0 ==.
      000826 22               [24] 2746 	ret
                                   2747 ;------------------------------------------------------------
                                   2748 ;Allocation info for local variables in function 'Read_Ranger'
                                   2749 ;------------------------------------------------------------
                                   2750 ;read                      Allocated to registers 
                                   2751 ;------------------------------------------------------------
                           00075F  2752 	G$Read_Ranger$0$0 ==.
                           00075F  2753 	C$lab4_m.c$145$1$120 ==.
                                   2754 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:145: unsigned int Read_Ranger(void)
                                   2755 ;	-----------------------------------------
                                   2756 ;	 function Read_Ranger
                                   2757 ;	-----------------------------------------
      000827                       2758 _Read_Ranger:
                           00075F  2759 	C$lab4_m.c$148$1$127 ==.
                                   2760 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:148: r_addr = 0xE0;
      000827 75 45 E0         [24] 2761 	mov	_r_addr,#0xE0
                           000762  2762 	C$lab4_m.c$149$1$127 ==.
                                   2763 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:149: i2c_read_data(r_addr, 2, r_data, 2);
      00082A 75 2D 47         [24] 2764 	mov	_i2c_read_data_PARM_3,#_r_data
      00082D 75 2E 00         [24] 2765 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      000830 75 2F 40         [24] 2766 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      000833 75 2C 02         [24] 2767 	mov	_i2c_read_data_PARM_2,#0x02
      000836 75 30 02         [24] 2768 	mov	_i2c_read_data_PARM_4,#0x02
      000839 75 82 E0         [24] 2769 	mov	dpl,#0xE0
      00083C 12 04 B0         [24] 2770 	lcall	_i2c_read_data
                           000777  2771 	C$lab4_m.c$150$1$127 ==.
                                   2772 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:150: read = (((unsigned int) r_data[0] <<8) | r_data[1]);
      00083F AF 47            [24] 2773 	mov	r7,_r_data
      000841 7E 00            [12] 2774 	mov	r6,#0x00
      000843 AC 48            [24] 2775 	mov	r4,(_r_data + 0x0001)
      000845 7D 00            [12] 2776 	mov	r5,#0x00
      000847 EC               [12] 2777 	mov	a,r4
      000848 4E               [12] 2778 	orl	a,r6
      000849 F5 82            [12] 2779 	mov	dpl,a
      00084B ED               [12] 2780 	mov	a,r5
      00084C 4F               [12] 2781 	orl	a,r7
      00084D F5 83            [12] 2782 	mov	dph,a
                           000787  2783 	C$lab4_m.c$151$1$127 ==.
                                   2784 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:151: return read;
                           000787  2785 	C$lab4_m.c$152$1$127 ==.
                           000787  2786 	XG$Read_Ranger$0$0 ==.
      00084F 22               [24] 2787 	ret
                                   2788 ;------------------------------------------------------------
                                   2789 ;Allocation info for local variables in function 'ReadCompass'
                                   2790 ;------------------------------------------------------------
                                   2791 ;Data                      Allocated with name '_ReadCompass_Data_1_129'
                                   2792 ;range                     Allocated to registers 
                                   2793 ;addr                      Allocated to registers 
                                   2794 ;------------------------------------------------------------
                           000788  2795 	G$ReadCompass$0$0 ==.
                           000788  2796 	C$lab4_m.c$157$1$127 ==.
                                   2797 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:157: unsigned int ReadCompass(void)
                                   2798 ;	-----------------------------------------
                                   2799 ;	 function ReadCompass
                                   2800 ;	-----------------------------------------
      000850                       2801 _ReadCompass:
                           000788  2802 	C$lab4_m.c$162$1$129 ==.
                                   2803 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:162: i2c_read_data(addr, 2,Data,2);
      000850 75 2D 4D         [24] 2804 	mov	_i2c_read_data_PARM_3,#_ReadCompass_Data_1_129
      000853 75 2E 00         [24] 2805 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      000856 75 2F 40         [24] 2806 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      000859 75 2C 02         [24] 2807 	mov	_i2c_read_data_PARM_2,#0x02
      00085C 75 30 02         [24] 2808 	mov	_i2c_read_data_PARM_4,#0x02
      00085F 75 82 C0         [24] 2809 	mov	dpl,#0xC0
      000862 12 04 B0         [24] 2810 	lcall	_i2c_read_data
                           00079D  2811 	C$lab4_m.c$163$1$129 ==.
                                   2812 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:163: range = ((unsigned int) Data[0] << 8 | Data[1]);
      000865 AF 4D            [24] 2813 	mov	r7,_ReadCompass_Data_1_129
      000867 7E 00            [12] 2814 	mov	r6,#0x00
      000869 AC 4E            [24] 2815 	mov	r4,(_ReadCompass_Data_1_129 + 0x0001)
      00086B 7D 00            [12] 2816 	mov	r5,#0x00
      00086D EC               [12] 2817 	mov	a,r4
      00086E 4E               [12] 2818 	orl	a,r6
      00086F F5 82            [12] 2819 	mov	dpl,a
      000871 ED               [12] 2820 	mov	a,r5
      000872 4F               [12] 2821 	orl	a,r7
      000873 F5 83            [12] 2822 	mov	dph,a
                           0007AD  2823 	C$lab4_m.c$164$1$129 ==.
                                   2824 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:164: return range;
                           0007AD  2825 	C$lab4_m.c$165$1$129 ==.
                           0007AD  2826 	XG$ReadCompass$0$0 ==.
      000875 22               [24] 2827 	ret
                                   2828 ;------------------------------------------------------------
                                   2829 ;Allocation info for local variables in function 'Steering_Servo'
                                   2830 ;------------------------------------------------------------
                                   2831 ;direction                 Allocated with name '_Steering_Servo_direction_1_130'
                                   2832 ;------------------------------------------------------------
                           0007AE  2833 	G$Steering_Servo$0$0 ==.
                           0007AE  2834 	C$lab4_m.c$170$1$129 ==.
                                   2835 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:170: void Steering_Servo(unsigned int direction)
                                   2836 ;	-----------------------------------------
                                   2837 ;	 function Steering_Servo
                                   2838 ;	-----------------------------------------
      000876                       2839 _Steering_Servo:
      000876 85 82 4F         [24] 2840 	mov	_Steering_Servo_direction_1_130,dpl
      000879 85 83 50         [24] 2841 	mov	(_Steering_Servo_direction_1_130 + 1),dph
                           0007B4  2842 	C$lab4_m.c$174$1$131 ==.
                                   2843 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:174: if (direction < 1800)
      00087C C3               [12] 2844 	clr	c
      00087D E5 4F            [12] 2845 	mov	a,_Steering_Servo_direction_1_130
      00087F 94 08            [12] 2846 	subb	a,#0x08
      000881 E5 50            [12] 2847 	mov	a,(_Steering_Servo_direction_1_130 + 1)
      000883 94 07            [12] 2848 	subb	a,#0x07
      000885 40 03            [24] 2849 	jc	00128$
      000887 02 09 93         [24] 2850 	ljmp	00112$
      00088A                       2851 00128$:
                           0007C2  2852 	C$lab4_m.c$176$1$131 ==.
                                   2853 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:176: if (STR_PW <= PW_CENTER_STR - (float)(direction)/4.2)
      00088A 85 4F 82         [24] 2854 	mov	dpl,_Steering_Servo_direction_1_130
      00088D 85 50 83         [24] 2855 	mov	dph,(_Steering_Servo_direction_1_130 + 1)
      000890 12 0E E1         [24] 2856 	lcall	___uint2fs
      000893 AA 82            [24] 2857 	mov	r2,dpl
      000895 AB 83            [24] 2858 	mov	r3,dph
      000897 AC F0            [24] 2859 	mov	r4,b
      000899 FD               [12] 2860 	mov	r5,a
      00089A 74 66            [12] 2861 	mov	a,#0x66
      00089C C0 E0            [24] 2862 	push	acc
      00089E C0 E0            [24] 2863 	push	acc
      0008A0 74 86            [12] 2864 	mov	a,#0x86
      0008A2 C0 E0            [24] 2865 	push	acc
      0008A4 74 40            [12] 2866 	mov	a,#0x40
      0008A6 C0 E0            [24] 2867 	push	acc
      0008A8 8A 82            [24] 2868 	mov	dpl,r2
      0008AA 8B 83            [24] 2869 	mov	dph,r3
      0008AC 8C F0            [24] 2870 	mov	b,r4
      0008AE ED               [12] 2871 	mov	a,r5
      0008AF 12 15 79         [24] 2872 	lcall	___fsdiv
      0008B2 AA 82            [24] 2873 	mov	r2,dpl
      0008B4 AB 83            [24] 2874 	mov	r3,dph
      0008B6 AC F0            [24] 2875 	mov	r4,b
      0008B8 FD               [12] 2876 	mov	r5,a
      0008B9 E5 81            [12] 2877 	mov	a,sp
      0008BB 24 FC            [12] 2878 	add	a,#0xfc
      0008BD F5 81            [12] 2879 	mov	sp,a
      0008BF C0 02            [24] 2880 	push	ar2
      0008C1 C0 03            [24] 2881 	push	ar3
      0008C3 C0 04            [24] 2882 	push	ar4
      0008C5 C0 05            [24] 2883 	push	ar5
      0008C7 90 D0 00         [24] 2884 	mov	dptr,#0xD000
      0008CA 75 F0 27         [24] 2885 	mov	b,#0x27
      0008CD 74 45            [12] 2886 	mov	a,#0x45
      0008CF 12 0B 50         [24] 2887 	lcall	___fssub
      0008D2 AA 82            [24] 2888 	mov	r2,dpl
      0008D4 AB 83            [24] 2889 	mov	r3,dph
      0008D6 AC F0            [24] 2890 	mov	r4,b
      0008D8 FD               [12] 2891 	mov	r5,a
      0008D9 E5 81            [12] 2892 	mov	a,sp
      0008DB 24 FC            [12] 2893 	add	a,#0xfc
      0008DD F5 81            [12] 2894 	mov	sp,a
      0008DF 85 34 82         [24] 2895 	mov	dpl,_STR_PW
      0008E2 85 35 83         [24] 2896 	mov	dph,(_STR_PW + 1)
      0008E5 C0 05            [24] 2897 	push	ar5
      0008E7 C0 04            [24] 2898 	push	ar4
      0008E9 C0 03            [24] 2899 	push	ar3
      0008EB C0 02            [24] 2900 	push	ar2
      0008ED 12 0E E1         [24] 2901 	lcall	___uint2fs
      0008F0 A8 82            [24] 2902 	mov	r0,dpl
      0008F2 A9 83            [24] 2903 	mov	r1,dph
      0008F4 AE F0            [24] 2904 	mov	r6,b
      0008F6 FF               [12] 2905 	mov	r7,a
      0008F7 D0 02            [24] 2906 	pop	ar2
      0008F9 D0 03            [24] 2907 	pop	ar3
      0008FB D0 04            [24] 2908 	pop	ar4
      0008FD D0 05            [24] 2909 	pop	ar5
      0008FF C0 02            [24] 2910 	push	ar2
      000901 C0 03            [24] 2911 	push	ar3
      000903 C0 04            [24] 2912 	push	ar4
      000905 C0 05            [24] 2913 	push	ar5
      000907 88 82            [24] 2914 	mov	dpl,r0
      000909 89 83            [24] 2915 	mov	dph,r1
      00090B 8E F0            [24] 2916 	mov	b,r6
      00090D EF               [12] 2917 	mov	a,r7
      00090E 12 0C 5F         [24] 2918 	lcall	___fsgt
      000911 AF 82            [24] 2919 	mov	r7,dpl
      000913 E5 81            [12] 2920 	mov	a,sp
      000915 24 FC            [12] 2921 	add	a,#0xfc
      000917 F5 81            [12] 2922 	mov	sp,a
      000919 EF               [12] 2923 	mov	a,r7
      00091A 70 68            [24] 2924 	jnz	00102$
                           000854  2925 	C$lab4_m.c$178$1$131 ==.
                                   2926 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:178: STR_PW = PW_CENTER_STR - (float)(direction)/4.2;
      00091C 85 4F 82         [24] 2927 	mov	dpl,_Steering_Servo_direction_1_130
      00091F 85 50 83         [24] 2928 	mov	dph,(_Steering_Servo_direction_1_130 + 1)
      000922 12 0E E1         [24] 2929 	lcall	___uint2fs
      000925 AC 82            [24] 2930 	mov	r4,dpl
      000927 AD 83            [24] 2931 	mov	r5,dph
      000929 AE F0            [24] 2932 	mov	r6,b
      00092B FF               [12] 2933 	mov	r7,a
      00092C 74 66            [12] 2934 	mov	a,#0x66
      00092E C0 E0            [24] 2935 	push	acc
      000930 C0 E0            [24] 2936 	push	acc
      000932 74 86            [12] 2937 	mov	a,#0x86
      000934 C0 E0            [24] 2938 	push	acc
      000936 74 40            [12] 2939 	mov	a,#0x40
      000938 C0 E0            [24] 2940 	push	acc
      00093A 8C 82            [24] 2941 	mov	dpl,r4
      00093C 8D 83            [24] 2942 	mov	dph,r5
      00093E 8E F0            [24] 2943 	mov	b,r6
      000940 EF               [12] 2944 	mov	a,r7
      000941 12 15 79         [24] 2945 	lcall	___fsdiv
      000944 AC 82            [24] 2946 	mov	r4,dpl
      000946 AD 83            [24] 2947 	mov	r5,dph
      000948 AE F0            [24] 2948 	mov	r6,b
      00094A FF               [12] 2949 	mov	r7,a
      00094B E5 81            [12] 2950 	mov	a,sp
      00094D 24 FC            [12] 2951 	add	a,#0xfc
      00094F F5 81            [12] 2952 	mov	sp,a
      000951 C0 04            [24] 2953 	push	ar4
      000953 C0 05            [24] 2954 	push	ar5
      000955 C0 06            [24] 2955 	push	ar6
      000957 C0 07            [24] 2956 	push	ar7
      000959 90 D0 00         [24] 2957 	mov	dptr,#0xD000
      00095C 75 F0 27         [24] 2958 	mov	b,#0x27
      00095F 74 45            [12] 2959 	mov	a,#0x45
      000961 12 0B 50         [24] 2960 	lcall	___fssub
      000964 AC 82            [24] 2961 	mov	r4,dpl
      000966 AD 83            [24] 2962 	mov	r5,dph
      000968 AE F0            [24] 2963 	mov	r6,b
      00096A FF               [12] 2964 	mov	r7,a
      00096B E5 81            [12] 2965 	mov	a,sp
      00096D 24 FC            [12] 2966 	add	a,#0xfc
      00096F F5 81            [12] 2967 	mov	sp,a
      000971 8C 82            [24] 2968 	mov	dpl,r4
      000973 8D 83            [24] 2969 	mov	dph,r5
      000975 8E F0            [24] 2970 	mov	b,r6
      000977 EF               [12] 2971 	mov	a,r7
      000978 12 0E ED         [24] 2972 	lcall	___fs2uint
      00097B 85 82 34         [24] 2973 	mov	_STR_PW,dpl
      00097E 85 83 35         [24] 2974 	mov	(_STR_PW + 1),dph
      000981 02 0A C8         [24] 2975 	ljmp	00113$
      000984                       2976 00102$:
                           0008BC  2977 	C$lab4_m.c$182$3$134 ==.
                                   2978 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:182: STR_PW -= 10;
      000984 E5 34            [12] 2979 	mov	a,_STR_PW
      000986 24 F6            [12] 2980 	add	a,#0xF6
      000988 F5 34            [12] 2981 	mov	_STR_PW,a
      00098A E5 35            [12] 2982 	mov	a,(_STR_PW + 1)
      00098C 34 FF            [12] 2983 	addc	a,#0xFF
      00098E F5 35            [12] 2984 	mov	(_STR_PW + 1),a
      000990 02 0A C8         [24] 2985 	ljmp	00113$
      000993                       2986 00112$:
                           0008CB  2987 	C$lab4_m.c$185$1$131 ==.
                                   2988 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:185: else if ( direction == 0 || direction ==3600)
      000993 E5 4F            [12] 2989 	mov	a,_Steering_Servo_direction_1_130
      000995 45 50            [12] 2990 	orl	a,(_Steering_Servo_direction_1_130 + 1)
      000997 60 0A            [24] 2991 	jz	00107$
      000999 74 10            [12] 2992 	mov	a,#0x10
      00099B B5 4F 0E         [24] 2993 	cjne	a,_Steering_Servo_direction_1_130,00108$
      00099E 74 0E            [12] 2994 	mov	a,#0x0E
      0009A0 B5 50 09         [24] 2995 	cjne	a,(_Steering_Servo_direction_1_130 + 1),00108$
      0009A3                       2996 00107$:
                           0008DB  2997 	C$lab4_m.c$187$2$135 ==.
                                   2998 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:187: STR_PW=PW_CENTER_STR;
      0009A3 75 34 7D         [24] 2999 	mov	_STR_PW,#0x7D
      0009A6 75 35 0A         [24] 3000 	mov	(_STR_PW + 1),#0x0A
      0009A9 02 0A C8         [24] 3001 	ljmp	00113$
      0009AC                       3002 00108$:
                           0008E4  3003 	C$lab4_m.c$191$2$136 ==.
                                   3004 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:191: if (STR_PW >= PW_CENTER_STR + (float)(3600-direction)/1.9)
      0009AC 74 10            [12] 3005 	mov	a,#0x10
      0009AE C3               [12] 3006 	clr	c
      0009AF 95 4F            [12] 3007 	subb	a,_Steering_Servo_direction_1_130
      0009B1 F5 82            [12] 3008 	mov	dpl,a
      0009B3 74 0E            [12] 3009 	mov	a,#0x0E
      0009B5 95 50            [12] 3010 	subb	a,(_Steering_Servo_direction_1_130 + 1)
      0009B7 F5 83            [12] 3011 	mov	dph,a
      0009B9 12 0E E1         [24] 3012 	lcall	___uint2fs
      0009BC AC 82            [24] 3013 	mov	r4,dpl
      0009BE AD 83            [24] 3014 	mov	r5,dph
      0009C0 AE F0            [24] 3015 	mov	r6,b
      0009C2 FF               [12] 3016 	mov	r7,a
      0009C3 74 33            [12] 3017 	mov	a,#0x33
      0009C5 C0 E0            [24] 3018 	push	acc
      0009C7 C0 E0            [24] 3019 	push	acc
      0009C9 74 F3            [12] 3020 	mov	a,#0xF3
      0009CB C0 E0            [24] 3021 	push	acc
      0009CD C4               [12] 3022 	swap	a
      0009CE C0 E0            [24] 3023 	push	acc
      0009D0 8C 82            [24] 3024 	mov	dpl,r4
      0009D2 8D 83            [24] 3025 	mov	dph,r5
      0009D4 8E F0            [24] 3026 	mov	b,r6
      0009D6 EF               [12] 3027 	mov	a,r7
      0009D7 12 15 79         [24] 3028 	lcall	___fsdiv
      0009DA AC 82            [24] 3029 	mov	r4,dpl
      0009DC AD 83            [24] 3030 	mov	r5,dph
      0009DE AE F0            [24] 3031 	mov	r6,b
      0009E0 FF               [12] 3032 	mov	r7,a
      0009E1 E5 81            [12] 3033 	mov	a,sp
      0009E3 24 FC            [12] 3034 	add	a,#0xfc
      0009E5 F5 81            [12] 3035 	mov	sp,a
      0009E7 E4               [12] 3036 	clr	a
      0009E8 C0 E0            [24] 3037 	push	acc
      0009EA 74 D0            [12] 3038 	mov	a,#0xD0
      0009EC C0 E0            [24] 3039 	push	acc
      0009EE 74 27            [12] 3040 	mov	a,#0x27
      0009F0 C0 E0            [24] 3041 	push	acc
      0009F2 74 45            [12] 3042 	mov	a,#0x45
      0009F4 C0 E0            [24] 3043 	push	acc
      0009F6 8C 82            [24] 3044 	mov	dpl,r4
      0009F8 8D 83            [24] 3045 	mov	dph,r5
      0009FA 8E F0            [24] 3046 	mov	b,r6
      0009FC EF               [12] 3047 	mov	a,r7
      0009FD 12 0E 3F         [24] 3048 	lcall	___fsadd
      000A00 AC 82            [24] 3049 	mov	r4,dpl
      000A02 AD 83            [24] 3050 	mov	r5,dph
      000A04 AE F0            [24] 3051 	mov	r6,b
      000A06 FF               [12] 3052 	mov	r7,a
      000A07 E5 81            [12] 3053 	mov	a,sp
      000A09 24 FC            [12] 3054 	add	a,#0xfc
      000A0B F5 81            [12] 3055 	mov	sp,a
      000A0D 85 34 82         [24] 3056 	mov	dpl,_STR_PW
      000A10 85 35 83         [24] 3057 	mov	dph,(_STR_PW + 1)
      000A13 C0 07            [24] 3058 	push	ar7
      000A15 C0 06            [24] 3059 	push	ar6
      000A17 C0 05            [24] 3060 	push	ar5
      000A19 C0 04            [24] 3061 	push	ar4
      000A1B 12 0E E1         [24] 3062 	lcall	___uint2fs
      000A1E A8 82            [24] 3063 	mov	r0,dpl
      000A20 A9 83            [24] 3064 	mov	r1,dph
      000A22 AA F0            [24] 3065 	mov	r2,b
      000A24 FB               [12] 3066 	mov	r3,a
      000A25 D0 04            [24] 3067 	pop	ar4
      000A27 D0 05            [24] 3068 	pop	ar5
      000A29 D0 06            [24] 3069 	pop	ar6
      000A2B D0 07            [24] 3070 	pop	ar7
      000A2D C0 04            [24] 3071 	push	ar4
      000A2F C0 05            [24] 3072 	push	ar5
      000A31 C0 06            [24] 3073 	push	ar6
      000A33 C0 07            [24] 3074 	push	ar7
      000A35 88 82            [24] 3075 	mov	dpl,r0
      000A37 89 83            [24] 3076 	mov	dph,r1
      000A39 8A F0            [24] 3077 	mov	b,r2
      000A3B EB               [12] 3078 	mov	a,r3
      000A3C 12 0C AA         [24] 3079 	lcall	___fslt
      000A3F AF 82            [24] 3080 	mov	r7,dpl
      000A41 E5 81            [12] 3081 	mov	a,sp
      000A43 24 FC            [12] 3082 	add	a,#0xfc
      000A45 F5 81            [12] 3083 	mov	sp,a
      000A47 EF               [12] 3084 	mov	a,r7
      000A48 70 73            [24] 3085 	jnz	00105$
                           000982  3086 	C$lab4_m.c$193$3$137 ==.
                                   3087 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:193: STR_PW = PW_CENTER_STR + (float)(3600-direction)/1.9;
      000A4A 74 10            [12] 3088 	mov	a,#0x10
      000A4C C3               [12] 3089 	clr	c
      000A4D 95 4F            [12] 3090 	subb	a,_Steering_Servo_direction_1_130
      000A4F F5 82            [12] 3091 	mov	dpl,a
      000A51 74 0E            [12] 3092 	mov	a,#0x0E
      000A53 95 50            [12] 3093 	subb	a,(_Steering_Servo_direction_1_130 + 1)
      000A55 F5 83            [12] 3094 	mov	dph,a
      000A57 12 0E E1         [24] 3095 	lcall	___uint2fs
      000A5A AC 82            [24] 3096 	mov	r4,dpl
      000A5C AD 83            [24] 3097 	mov	r5,dph
      000A5E AE F0            [24] 3098 	mov	r6,b
      000A60 FF               [12] 3099 	mov	r7,a
      000A61 74 33            [12] 3100 	mov	a,#0x33
      000A63 C0 E0            [24] 3101 	push	acc
      000A65 C0 E0            [24] 3102 	push	acc
      000A67 74 F3            [12] 3103 	mov	a,#0xF3
      000A69 C0 E0            [24] 3104 	push	acc
      000A6B C4               [12] 3105 	swap	a
      000A6C C0 E0            [24] 3106 	push	acc
      000A6E 8C 82            [24] 3107 	mov	dpl,r4
      000A70 8D 83            [24] 3108 	mov	dph,r5
      000A72 8E F0            [24] 3109 	mov	b,r6
      000A74 EF               [12] 3110 	mov	a,r7
      000A75 12 15 79         [24] 3111 	lcall	___fsdiv
      000A78 AC 82            [24] 3112 	mov	r4,dpl
      000A7A AD 83            [24] 3113 	mov	r5,dph
      000A7C AE F0            [24] 3114 	mov	r6,b
      000A7E FF               [12] 3115 	mov	r7,a
      000A7F E5 81            [12] 3116 	mov	a,sp
      000A81 24 FC            [12] 3117 	add	a,#0xfc
      000A83 F5 81            [12] 3118 	mov	sp,a
      000A85 E4               [12] 3119 	clr	a
      000A86 C0 E0            [24] 3120 	push	acc
      000A88 74 D0            [12] 3121 	mov	a,#0xD0
      000A8A C0 E0            [24] 3122 	push	acc
      000A8C 74 27            [12] 3123 	mov	a,#0x27
      000A8E C0 E0            [24] 3124 	push	acc
      000A90 74 45            [12] 3125 	mov	a,#0x45
      000A92 C0 E0            [24] 3126 	push	acc
      000A94 8C 82            [24] 3127 	mov	dpl,r4
      000A96 8D 83            [24] 3128 	mov	dph,r5
      000A98 8E F0            [24] 3129 	mov	b,r6
      000A9A EF               [12] 3130 	mov	a,r7
      000A9B 12 0E 3F         [24] 3131 	lcall	___fsadd
      000A9E AC 82            [24] 3132 	mov	r4,dpl
      000AA0 AD 83            [24] 3133 	mov	r5,dph
      000AA2 AE F0            [24] 3134 	mov	r6,b
      000AA4 FF               [12] 3135 	mov	r7,a
      000AA5 E5 81            [12] 3136 	mov	a,sp
      000AA7 24 FC            [12] 3137 	add	a,#0xfc
      000AA9 F5 81            [12] 3138 	mov	sp,a
      000AAB 8C 82            [24] 3139 	mov	dpl,r4
      000AAD 8D 83            [24] 3140 	mov	dph,r5
      000AAF 8E F0            [24] 3141 	mov	b,r6
      000AB1 EF               [12] 3142 	mov	a,r7
      000AB2 12 0E ED         [24] 3143 	lcall	___fs2uint
      000AB5 85 82 34         [24] 3144 	mov	_STR_PW,dpl
      000AB8 85 83 35         [24] 3145 	mov	(_STR_PW + 1),dph
      000ABB 80 0B            [24] 3146 	sjmp	00113$
      000ABD                       3147 00105$:
                           0009F5  3148 	C$lab4_m.c$197$3$138 ==.
                                   3149 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:197: STR_PW += 10;
      000ABD 74 0A            [12] 3150 	mov	a,#0x0A
      000ABF 25 34            [12] 3151 	add	a,_STR_PW
      000AC1 F5 34            [12] 3152 	mov	_STR_PW,a
      000AC3 E4               [12] 3153 	clr	a
      000AC4 35 35            [12] 3154 	addc	a,(_STR_PW + 1)
      000AC6 F5 35            [12] 3155 	mov	(_STR_PW + 1),a
      000AC8                       3156 00113$:
                           000A00  3157 	C$lab4_m.c$202$1$131 ==.
                                   3158 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:202: printf("\r\nSTR_PW: %u", STR_PW);
      000AC8 C0 34            [24] 3159 	push	_STR_PW
      000ACA C0 35            [24] 3160 	push	(_STR_PW + 1)
      000ACC 74 B7            [12] 3161 	mov	a,#___str_8
      000ACE C0 E0            [24] 3162 	push	acc
      000AD0 74 17            [12] 3163 	mov	a,#(___str_8 >> 8)
      000AD2 C0 E0            [24] 3164 	push	acc
      000AD4 74 80            [12] 3165 	mov	a,#0x80
      000AD6 C0 E0            [24] 3166 	push	acc
      000AD8 12 0F 6B         [24] 3167 	lcall	_printf
      000ADB E5 81            [12] 3168 	mov	a,sp
      000ADD 24 FB            [12] 3169 	add	a,#0xfb
      000ADF F5 81            [12] 3170 	mov	sp,a
                           000A19  3171 	C$lab4_m.c$203$1$131 ==.
                                   3172 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:203: tmp0_lo_to_hi= 0xFFFF - STR_PW;
      000AE1 74 FF            [12] 3173 	mov	a,#0xFF
      000AE3 C3               [12] 3174 	clr	c
      000AE4 95 34            [12] 3175 	subb	a,_STR_PW
      000AE6 F5 32            [12] 3176 	mov	_tmp0_lo_to_hi,a
      000AE8 74 FF            [12] 3177 	mov	a,#0xFF
      000AEA 95 35            [12] 3178 	subb	a,(_STR_PW + 1)
      000AEC F5 33            [12] 3179 	mov	(_tmp0_lo_to_hi + 1),a
                           000A26  3180 	C$lab4_m.c$204$1$131 ==.
                                   3181 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:204: PCA0CP0 = tmp0_lo_to_hi;
      000AEE 85 32 EA         [24] 3182 	mov	((_PCA0CP0 >> 0) & 0xFF),_tmp0_lo_to_hi
      000AF1 85 33 FA         [24] 3183 	mov	((_PCA0CP0 >> 8) & 0xFF),(_tmp0_lo_to_hi + 1)
                           000A2C  3184 	C$lab4_m.c$205$1$131 ==.
                           000A2C  3185 	XG$Steering_Servo$0$0 ==.
      000AF4 22               [24] 3186 	ret
                                   3187 ;------------------------------------------------------------
                                   3188 ;Allocation info for local variables in function 'Port_Init'
                                   3189 ;------------------------------------------------------------
                           000A2D  3190 	G$Port_Init$0$0 ==.
                           000A2D  3191 	C$lab4_m.c$213$1$131 ==.
                                   3192 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:213: void Port_Init()
                                   3193 ;	-----------------------------------------
                                   3194 ;	 function Port_Init
                                   3195 ;	-----------------------------------------
      000AF5                       3196 _Port_Init:
                           000A2D  3197 	C$lab4_m.c$215$1$139 ==.
                                   3198 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:215: P0MDOUT &= ~0x32;
      000AF5 AF A4            [24] 3199 	mov	r7,_P0MDOUT
      000AF7 74 CD            [12] 3200 	mov	a,#0xCD
      000AF9 5F               [12] 3201 	anl	a,r7
      000AFA F5 A4            [12] 3202 	mov	_P0MDOUT,a
                           000A34  3203 	C$lab4_m.c$216$1$139 ==.
                                   3204 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:216: P1MDOUT = 0x0F;  //set output pin for CEX0 and CEX2 in push-pull mode
      000AFC 75 A5 0F         [24] 3205 	mov	_P1MDOUT,#0x0F
                           000A37  3206 	C$lab4_m.c$218$1$139 ==.
                                   3207 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:218: P3MDOUT &= ~0x40;
      000AFF AF A7            [24] 3208 	mov	r7,_P3MDOUT
      000B01 74 BF            [12] 3209 	mov	a,#0xBF
      000B03 5F               [12] 3210 	anl	a,r7
      000B04 F5 A7            [12] 3211 	mov	_P3MDOUT,a
                           000A3E  3212 	C$lab4_m.c$219$1$139 ==.
                                   3213 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:219: P3 |= 0x40;
      000B06 43 B0 40         [24] 3214 	orl	_P3,#0x40
                           000A41  3215 	C$lab4_m.c$220$1$139 ==.
                           000A41  3216 	XG$Port_Init$0$0 ==.
      000B09 22               [24] 3217 	ret
                                   3218 ;------------------------------------------------------------
                                   3219 ;Allocation info for local variables in function 'XBR0_Init'
                                   3220 ;------------------------------------------------------------
                           000A42  3221 	G$XBR0_Init$0$0 ==.
                           000A42  3222 	C$lab4_m.c$225$1$139 ==.
                                   3223 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:225: void XBR0_Init()
                                   3224 ;	-----------------------------------------
                                   3225 ;	 function XBR0_Init
                                   3226 ;	-----------------------------------------
      000B0A                       3227 _XBR0_Init:
                           000A42  3228 	C$lab4_m.c$227$1$140 ==.
                                   3229 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:227: XBR0  = 0x27;  //configure crossbar as directed in the laboratory
      000B0A 75 E1 27         [24] 3230 	mov	_XBR0,#0x27
                           000A45  3231 	C$lab4_m.c$228$1$140 ==.
                           000A45  3232 	XG$XBR0_Init$0$0 ==.
      000B0D 22               [24] 3233 	ret
                                   3234 ;------------------------------------------------------------
                                   3235 ;Allocation info for local variables in function 'SMB_Init'
                                   3236 ;------------------------------------------------------------
                           000A46  3237 	G$SMB_Init$0$0 ==.
                           000A46  3238 	C$lab4_m.c$233$1$140 ==.
                                   3239 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:233: void SMB_Init(void)
                                   3240 ;	-----------------------------------------
                                   3241 ;	 function SMB_Init
                                   3242 ;	-----------------------------------------
      000B0E                       3243 _SMB_Init:
                           000A46  3244 	C$lab4_m.c$235$1$142 ==.
                                   3245 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:235: SMB0CR =0x93;
      000B0E 75 CF 93         [24] 3246 	mov	_SMB0CR,#0x93
                           000A49  3247 	C$lab4_m.c$236$1$142 ==.
                                   3248 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:236: ENSMB =1;
      000B11 D2 C6            [12] 3249 	setb	_ENSMB
                           000A4B  3250 	C$lab4_m.c$237$1$142 ==.
                           000A4B  3251 	XG$SMB_Init$0$0 ==.
      000B13 22               [24] 3252 	ret
                                   3253 ;------------------------------------------------------------
                                   3254 ;Allocation info for local variables in function 'PCA_Init'
                                   3255 ;------------------------------------------------------------
                           000A4C  3256 	G$PCA_Init$0$0 ==.
                           000A4C  3257 	C$lab4_m.c$242$1$142 ==.
                                   3258 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:242: void PCA_Init(void)
                                   3259 ;	-----------------------------------------
                                   3260 ;	 function PCA_Init
                                   3261 ;	-----------------------------------------
      000B14                       3262 _PCA_Init:
                           000A4C  3263 	C$lab4_m.c$244$1$144 ==.
                                   3264 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:244: PCA0MD = 0x81;
      000B14 75 D9 81         [24] 3265 	mov	_PCA0MD,#0x81
                           000A4F  3266 	C$lab4_m.c$245$1$144 ==.
                                   3267 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:245: PCA0CPM0 = 0xC2;    //CCM0 in 16-bit compare mode
      000B17 75 DA C2         [24] 3268 	mov	_PCA0CPM0,#0xC2
                           000A52  3269 	C$lab4_m.c$246$1$144 ==.
                                   3270 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:246: PCA0CN = 0x40;      //Enable PCA counter
      000B1A 75 D8 40         [24] 3271 	mov	_PCA0CN,#0x40
                           000A55  3272 	C$lab4_m.c$247$1$144 ==.
                                   3273 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:247: EIE1 |= 0x08;       //Enable PCA interrupt
      000B1D 43 E6 08         [24] 3274 	orl	_EIE1,#0x08
                           000A58  3275 	C$lab4_m.c$248$1$144 ==.
                                   3276 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:248: EA = 1;             //Enable global interrupts
      000B20 D2 AF            [12] 3277 	setb	_EA
                           000A5A  3278 	C$lab4_m.c$249$1$144 ==.
                           000A5A  3279 	XG$PCA_Init$0$0 ==.
      000B22 22               [24] 3280 	ret
                                   3281 ;------------------------------------------------------------
                                   3282 ;Allocation info for local variables in function 'PCA_ISR'
                                   3283 ;------------------------------------------------------------
                           000A5B  3284 	G$PCA_ISR$0$0 ==.
                           000A5B  3285 	C$lab4_m.c$254$1$144 ==.
                                   3286 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:254: void PCA_ISR ( void ) __interrupt 9
                                   3287 ;	-----------------------------------------
                                   3288 ;	 function PCA_ISR
                                   3289 ;	-----------------------------------------
      000B23                       3290 _PCA_ISR:
      000B23 C0 E0            [24] 3291 	push	acc
      000B25 C0 D0            [24] 3292 	push	psw
                           000A5F  3293 	C$lab4_m.c$257$1$146 ==.
                                   3294 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:257: if (CF)
                           000A5F  3295 	C$lab4_m.c$259$2$147 ==.
                                   3296 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:259: CF =0;
      000B27 10 DF 02         [24] 3297 	jbc	_CF,00113$
      000B2A 80 1C            [24] 3298 	sjmp	00104$
      000B2C                       3299 00113$:
                           000A64  3300 	C$lab4_m.c$260$2$147 ==.
                                   3301 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:260: PCA0 = 0x7000;
      000B2C 75 E9 00         [24] 3302 	mov	((_PCA0 >> 0) & 0xFF),#0x00
      000B2F 75 F9 70         [24] 3303 	mov	((_PCA0 >> 8) & 0xFF),#0x70
                           000A6A  3304 	C$lab4_m.c$261$2$147 ==.
                                   3305 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:261: count++;
      000B32 05 36            [12] 3306 	inc	_count
      000B34 E4               [12] 3307 	clr	a
      000B35 B5 36 02         [24] 3308 	cjne	a,_count,00114$
      000B38 05 37            [12] 3309 	inc	(_count + 1)
      000B3A                       3310 00114$:
                           000A72  3311 	C$lab4_m.c$262$2$147 ==.
                                   3312 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:262: r_counts++;
      000B3A 05 43            [12] 3313 	inc	_r_counts
                           000A74  3314 	C$lab4_m.c$263$2$147 ==.
                                   3315 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:263: if (r_counts > 4)
      000B3C E5 43            [12] 3316 	mov	a,_r_counts
      000B3E 24 FB            [12] 3317 	add	a,#0xff - 0x04
      000B40 50 06            [24] 3318 	jnc	00104$
                           000A7A  3319 	C$lab4_m.c$265$3$148 ==.
                                   3320 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:265: new_range = 1;
      000B42 75 46 01         [24] 3321 	mov	_new_range,#0x01
                           000A7D  3322 	C$lab4_m.c$266$3$148 ==.
                                   3323 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:266: r_counts = 0;
      000B45 75 43 00         [24] 3324 	mov	_r_counts,#0x00
      000B48                       3325 00104$:
                           000A80  3326 	C$lab4_m.c$270$1$146 ==.
                                   3327 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab4\lab4_m.c:270: PCA0CN &= 0xC0;
      000B48 53 D8 C0         [24] 3328 	anl	_PCA0CN,#0xC0
      000B4B D0 D0            [24] 3329 	pop	psw
      000B4D D0 E0            [24] 3330 	pop	acc
                           000A87  3331 	C$lab4_m.c$271$1$146 ==.
                           000A87  3332 	XG$PCA_ISR$0$0 ==.
      000B4F 32               [24] 3333 	reti
                                   3334 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   3335 ;	eliminated unneeded push/pop dpl
                                   3336 ;	eliminated unneeded push/pop dph
                                   3337 ;	eliminated unneeded push/pop b
                                   3338 	.area CSEG    (CODE)
                                   3339 	.area CONST   (CODE)
                           000000  3340 Flab4_m$__str_0$0$0 == .
      001721                       3341 ___str_0:
      001721 0A                    3342 	.db 0x0A
      001722 54 79 70 65 20 64 69  3343 	.ascii "Type digits; end w/#"
             67 69 74 73 3B 20 65
             6E 64 20 77 2F 23
      001736 00                    3344 	.db 0x00
                           000016  3345 Flab4_m$__str_1$0$0 == .
      001737                       3346 ___str_1:
      001737 20 20 20 20 20 25 63  3347 	.ascii "     %c%c%c%c%c"
             25 63 25 63 25 63 25
             63
      001746 00                    3348 	.db 0x00
                           000026  3349 Flab4_m$__str_2$0$0 == .
      001747                       3350 ___str_2:
      001747 25 63                 3351 	.ascii "%c"
      001749 00                    3352 	.db 0x00
                           000029  3353 Flab4_m$__str_3$0$0 == .
      00174A                       3354 ___str_3:
      00174A 45 6D 62 65 64 64 65  3355 	.ascii "Embedded Control Car Calibration"
             64 20 43 6F 6E 74 72
             6F 6C 20 43 61 72 20
             43 61 6C 69 62 72 61
             74 69 6F 6E
      00176A 0A                    3356 	.db 0x0A
      00176B 00                    3357 	.db 0x00
                           00004B  3358 Flab4_m$__str_4$0$0 == .
      00176C                       3359 ___str_4:
      00176C 0D                    3360 	.db 0x0D
      00176D 0A                    3361 	.db 0x0A
      00176E 25 64 7C 7C 25 64     3362 	.ascii "%d||%d"
      001774 00                    3363 	.db 0x00
                           000054  3364 Flab4_m$__str_5$0$0 == .
      001775                       3365 ___str_5:
      001775 0D                    3366 	.db 0x0D
      001776 0A                    3367 	.db 0x0A
      001777 20 54 68 65 20 72 61  3368 	.ascii " The range is: %d"
             6E 67 65 20 69 73 3A
             20 25 64
      001788 00                    3369 	.db 0x00
                           000068  3370 Flab4_m$__str_6$0$0 == .
      001789                       3371 ___str_6:
      001789 0D                    3372 	.db 0x0D
      00178A 0A                    3373 	.db 0x0A
      00178B 20 54 68 65 20 63 6F  3374 	.ascii " The control is paused"
             6E 74 72 6F 6C 20 69
             73 20 70 61 75 73 65
             64
      0017A1 00                    3375 	.db 0x00
                           000081  3376 Flab4_m$__str_7$0$0 == .
      0017A2                       3377 ___str_7:
      0017A2 0D                    3378 	.db 0x0D
      0017A3 0A                    3379 	.db 0x0A
      0017A4 20 4D 6F 74 6F 72 20  3380 	.ascii " Motor Power is %u"
             50 6F 77 65 72 20 69
             73 20 25 75
      0017B6 00                    3381 	.db 0x00
                           000096  3382 Flab4_m$__str_8$0$0 == .
      0017B7                       3383 ___str_8:
      0017B7 0D                    3384 	.db 0x0D
      0017B8 0A                    3385 	.db 0x0A
      0017B9 53 54 52 5F 50 57 3A  3386 	.ascii "STR_PW: %u"
             20 25 75
      0017C3 00                    3387 	.db 0x00
                                   3388 	.area XINIT   (CODE)
                                   3389 	.area CABS    (ABS,CODE)
