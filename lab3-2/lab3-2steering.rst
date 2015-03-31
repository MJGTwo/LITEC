                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (Apr  5 2014) (MINGW32)
                                      4 ; This file was generated Tue Mar 31 09:21:54 2015
                                      5 ;--------------------------------------------------------
                                      6 	.module lab3_2steering
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
                                    306 	.globl _answer
                                    307 	.globl _input
                                    308 	.globl _count
                                    309 	.globl _STR_PW
                                    310 	.globl _i2c_read_data_PARM_4
                                    311 	.globl _i2c_read_data_PARM_3
                                    312 	.globl _i2c_read_data_PARM_2
                                    313 	.globl _i2c_write_data_PARM_4
                                    314 	.globl _i2c_write_data_PARM_3
                                    315 	.globl _i2c_write_data_PARM_2
                                    316 	.globl _putchar
                                    317 	.globl _getchar
                                    318 	.globl _lcd_print
                                    319 	.globl _lcd_clear
                                    320 	.globl _kpd_input
                                    321 	.globl _delay_time
                                    322 	.globl _i2c_start
                                    323 	.globl _i2c_write
                                    324 	.globl _i2c_write_and_stop
                                    325 	.globl _i2c_read
                                    326 	.globl _i2c_read_and_stop
                                    327 	.globl _i2c_write_data
                                    328 	.globl _i2c_read_data
                                    329 	.globl _Accel_Init
                                    330 	.globl _Port_Init
                                    331 	.globl _ReadCompass
                                    332 	.globl _XBR0_Init
                                    333 	.globl _SMB_Init
                                    334 	.globl _PCA_Init
                                    335 	.globl _Steering_Servo
                                    336 ;--------------------------------------------------------
                                    337 ; special function registers
                                    338 ;--------------------------------------------------------
                                    339 	.area RSEG    (ABS,DATA)
      000000                        340 	.org 0x0000
                           000080   341 G$P0$0$0 == 0x0080
                           000080   342 _P0	=	0x0080
                           000081   343 G$SP$0$0 == 0x0081
                           000081   344 _SP	=	0x0081
                           000082   345 G$DPL$0$0 == 0x0082
                           000082   346 _DPL	=	0x0082
                           000083   347 G$DPH$0$0 == 0x0083
                           000083   348 _DPH	=	0x0083
                           000084   349 G$P4$0$0 == 0x0084
                           000084   350 _P4	=	0x0084
                           000085   351 G$P5$0$0 == 0x0085
                           000085   352 _P5	=	0x0085
                           000086   353 G$P6$0$0 == 0x0086
                           000086   354 _P6	=	0x0086
                           000087   355 G$PCON$0$0 == 0x0087
                           000087   356 _PCON	=	0x0087
                           000088   357 G$TCON$0$0 == 0x0088
                           000088   358 _TCON	=	0x0088
                           000089   359 G$TMOD$0$0 == 0x0089
                           000089   360 _TMOD	=	0x0089
                           00008A   361 G$TL0$0$0 == 0x008a
                           00008A   362 _TL0	=	0x008a
                           00008B   363 G$TL1$0$0 == 0x008b
                           00008B   364 _TL1	=	0x008b
                           00008C   365 G$TH0$0$0 == 0x008c
                           00008C   366 _TH0	=	0x008c
                           00008D   367 G$TH1$0$0 == 0x008d
                           00008D   368 _TH1	=	0x008d
                           00008E   369 G$CKCON$0$0 == 0x008e
                           00008E   370 _CKCON	=	0x008e
                           00008F   371 G$PSCTL$0$0 == 0x008f
                           00008F   372 _PSCTL	=	0x008f
                           000090   373 G$P1$0$0 == 0x0090
                           000090   374 _P1	=	0x0090
                           000091   375 G$TMR3CN$0$0 == 0x0091
                           000091   376 _TMR3CN	=	0x0091
                           000092   377 G$TMR3RLL$0$0 == 0x0092
                           000092   378 _TMR3RLL	=	0x0092
                           000093   379 G$TMR3RLH$0$0 == 0x0093
                           000093   380 _TMR3RLH	=	0x0093
                           000094   381 G$TMR3L$0$0 == 0x0094
                           000094   382 _TMR3L	=	0x0094
                           000095   383 G$TMR3H$0$0 == 0x0095
                           000095   384 _TMR3H	=	0x0095
                           000096   385 G$P7$0$0 == 0x0096
                           000096   386 _P7	=	0x0096
                           000098   387 G$SCON$0$0 == 0x0098
                           000098   388 _SCON	=	0x0098
                           000098   389 G$SCON0$0$0 == 0x0098
                           000098   390 _SCON0	=	0x0098
                           000099   391 G$SBUF$0$0 == 0x0099
                           000099   392 _SBUF	=	0x0099
                           000099   393 G$SBUF0$0$0 == 0x0099
                           000099   394 _SBUF0	=	0x0099
                           00009A   395 G$SPI0CFG$0$0 == 0x009a
                           00009A   396 _SPI0CFG	=	0x009a
                           00009B   397 G$SPI0DAT$0$0 == 0x009b
                           00009B   398 _SPI0DAT	=	0x009b
                           00009C   399 G$ADC1$0$0 == 0x009c
                           00009C   400 _ADC1	=	0x009c
                           00009D   401 G$SPI0CKR$0$0 == 0x009d
                           00009D   402 _SPI0CKR	=	0x009d
                           00009E   403 G$CPT0CN$0$0 == 0x009e
                           00009E   404 _CPT0CN	=	0x009e
                           00009F   405 G$CPT1CN$0$0 == 0x009f
                           00009F   406 _CPT1CN	=	0x009f
                           0000A0   407 G$P2$0$0 == 0x00a0
                           0000A0   408 _P2	=	0x00a0
                           0000A1   409 G$EMI0TC$0$0 == 0x00a1
                           0000A1   410 _EMI0TC	=	0x00a1
                           0000A3   411 G$EMI0CF$0$0 == 0x00a3
                           0000A3   412 _EMI0CF	=	0x00a3
                           0000A4   413 G$PRT0CF$0$0 == 0x00a4
                           0000A4   414 _PRT0CF	=	0x00a4
                           0000A4   415 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   416 _P0MDOUT	=	0x00a4
                           0000A5   417 G$PRT1CF$0$0 == 0x00a5
                           0000A5   418 _PRT1CF	=	0x00a5
                           0000A5   419 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   420 _P1MDOUT	=	0x00a5
                           0000A6   421 G$PRT2CF$0$0 == 0x00a6
                           0000A6   422 _PRT2CF	=	0x00a6
                           0000A6   423 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   424 _P2MDOUT	=	0x00a6
                           0000A7   425 G$PRT3CF$0$0 == 0x00a7
                           0000A7   426 _PRT3CF	=	0x00a7
                           0000A7   427 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   428 _P3MDOUT	=	0x00a7
                           0000A8   429 G$IE$0$0 == 0x00a8
                           0000A8   430 _IE	=	0x00a8
                           0000A9   431 G$SADDR0$0$0 == 0x00a9
                           0000A9   432 _SADDR0	=	0x00a9
                           0000AA   433 G$ADC1CN$0$0 == 0x00aa
                           0000AA   434 _ADC1CN	=	0x00aa
                           0000AB   435 G$ADC1CF$0$0 == 0x00ab
                           0000AB   436 _ADC1CF	=	0x00ab
                           0000AC   437 G$AMX1SL$0$0 == 0x00ac
                           0000AC   438 _AMX1SL	=	0x00ac
                           0000AD   439 G$P3IF$0$0 == 0x00ad
                           0000AD   440 _P3IF	=	0x00ad
                           0000AE   441 G$SADEN1$0$0 == 0x00ae
                           0000AE   442 _SADEN1	=	0x00ae
                           0000AF   443 G$EMI0CN$0$0 == 0x00af
                           0000AF   444 _EMI0CN	=	0x00af
                           0000AF   445 G$_XPAGE$0$0 == 0x00af
                           0000AF   446 __XPAGE	=	0x00af
                           0000B0   447 G$P3$0$0 == 0x00b0
                           0000B0   448 _P3	=	0x00b0
                           0000B1   449 G$OSCXCN$0$0 == 0x00b1
                           0000B1   450 _OSCXCN	=	0x00b1
                           0000B2   451 G$OSCICN$0$0 == 0x00b2
                           0000B2   452 _OSCICN	=	0x00b2
                           0000B5   453 G$P74OUT$0$0 == 0x00b5
                           0000B5   454 _P74OUT	=	0x00b5
                           0000B6   455 G$FLSCL$0$0 == 0x00b6
                           0000B6   456 _FLSCL	=	0x00b6
                           0000B7   457 G$FLACL$0$0 == 0x00b7
                           0000B7   458 _FLACL	=	0x00b7
                           0000B8   459 G$IP$0$0 == 0x00b8
                           0000B8   460 _IP	=	0x00b8
                           0000B9   461 G$SADEN0$0$0 == 0x00b9
                           0000B9   462 _SADEN0	=	0x00b9
                           0000BA   463 G$AMX0CF$0$0 == 0x00ba
                           0000BA   464 _AMX0CF	=	0x00ba
                           0000BB   465 G$AMX0SL$0$0 == 0x00bb
                           0000BB   466 _AMX0SL	=	0x00bb
                           0000BC   467 G$ADC0CF$0$0 == 0x00bc
                           0000BC   468 _ADC0CF	=	0x00bc
                           0000BD   469 G$P1MDIN$0$0 == 0x00bd
                           0000BD   470 _P1MDIN	=	0x00bd
                           0000BE   471 G$ADC0L$0$0 == 0x00be
                           0000BE   472 _ADC0L	=	0x00be
                           0000BF   473 G$ADC0H$0$0 == 0x00bf
                           0000BF   474 _ADC0H	=	0x00bf
                           0000C0   475 G$SMB0CN$0$0 == 0x00c0
                           0000C0   476 _SMB0CN	=	0x00c0
                           0000C1   477 G$SMB0STA$0$0 == 0x00c1
                           0000C1   478 _SMB0STA	=	0x00c1
                           0000C2   479 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   480 _SMB0DAT	=	0x00c2
                           0000C3   481 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   482 _SMB0ADR	=	0x00c3
                           0000C4   483 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   484 _ADC0GTL	=	0x00c4
                           0000C5   485 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   486 _ADC0GTH	=	0x00c5
                           0000C6   487 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   488 _ADC0LTL	=	0x00c6
                           0000C7   489 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   490 _ADC0LTH	=	0x00c7
                           0000C8   491 G$T2CON$0$0 == 0x00c8
                           0000C8   492 _T2CON	=	0x00c8
                           0000C9   493 G$T4CON$0$0 == 0x00c9
                           0000C9   494 _T4CON	=	0x00c9
                           0000CA   495 G$RCAP2L$0$0 == 0x00ca
                           0000CA   496 _RCAP2L	=	0x00ca
                           0000CB   497 G$RCAP2H$0$0 == 0x00cb
                           0000CB   498 _RCAP2H	=	0x00cb
                           0000CC   499 G$TL2$0$0 == 0x00cc
                           0000CC   500 _TL2	=	0x00cc
                           0000CD   501 G$TH2$0$0 == 0x00cd
                           0000CD   502 _TH2	=	0x00cd
                           0000CF   503 G$SMB0CR$0$0 == 0x00cf
                           0000CF   504 _SMB0CR	=	0x00cf
                           0000D0   505 G$PSW$0$0 == 0x00d0
                           0000D0   506 _PSW	=	0x00d0
                           0000D1   507 G$REF0CN$0$0 == 0x00d1
                           0000D1   508 _REF0CN	=	0x00d1
                           0000D2   509 G$DAC0L$0$0 == 0x00d2
                           0000D2   510 _DAC0L	=	0x00d2
                           0000D3   511 G$DAC0H$0$0 == 0x00d3
                           0000D3   512 _DAC0H	=	0x00d3
                           0000D4   513 G$DAC0CN$0$0 == 0x00d4
                           0000D4   514 _DAC0CN	=	0x00d4
                           0000D5   515 G$DAC1L$0$0 == 0x00d5
                           0000D5   516 _DAC1L	=	0x00d5
                           0000D6   517 G$DAC1H$0$0 == 0x00d6
                           0000D6   518 _DAC1H	=	0x00d6
                           0000D7   519 G$DAC1CN$0$0 == 0x00d7
                           0000D7   520 _DAC1CN	=	0x00d7
                           0000D8   521 G$PCA0CN$0$0 == 0x00d8
                           0000D8   522 _PCA0CN	=	0x00d8
                           0000D9   523 G$PCA0MD$0$0 == 0x00d9
                           0000D9   524 _PCA0MD	=	0x00d9
                           0000DA   525 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   526 _PCA0CPM0	=	0x00da
                           0000DB   527 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   528 _PCA0CPM1	=	0x00db
                           0000DC   529 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   530 _PCA0CPM2	=	0x00dc
                           0000DD   531 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   532 _PCA0CPM3	=	0x00dd
                           0000DE   533 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   534 _PCA0CPM4	=	0x00de
                           0000E0   535 G$ACC$0$0 == 0x00e0
                           0000E0   536 _ACC	=	0x00e0
                           0000E1   537 G$XBR0$0$0 == 0x00e1
                           0000E1   538 _XBR0	=	0x00e1
                           0000E2   539 G$XBR1$0$0 == 0x00e2
                           0000E2   540 _XBR1	=	0x00e2
                           0000E3   541 G$XBR2$0$0 == 0x00e3
                           0000E3   542 _XBR2	=	0x00e3
                           0000E4   543 G$RCAP4L$0$0 == 0x00e4
                           0000E4   544 _RCAP4L	=	0x00e4
                           0000E5   545 G$RCAP4H$0$0 == 0x00e5
                           0000E5   546 _RCAP4H	=	0x00e5
                           0000E6   547 G$EIE1$0$0 == 0x00e6
                           0000E6   548 _EIE1	=	0x00e6
                           0000E7   549 G$EIE2$0$0 == 0x00e7
                           0000E7   550 _EIE2	=	0x00e7
                           0000E8   551 G$ADC0CN$0$0 == 0x00e8
                           0000E8   552 _ADC0CN	=	0x00e8
                           0000E9   553 G$PCA0L$0$0 == 0x00e9
                           0000E9   554 _PCA0L	=	0x00e9
                           0000EA   555 G$PCA0CPL0$0$0 == 0x00ea
                           0000EA   556 _PCA0CPL0	=	0x00ea
                           0000EB   557 G$PCA0CPL1$0$0 == 0x00eb
                           0000EB   558 _PCA0CPL1	=	0x00eb
                           0000EC   559 G$PCA0CPL2$0$0 == 0x00ec
                           0000EC   560 _PCA0CPL2	=	0x00ec
                           0000ED   561 G$PCA0CPL3$0$0 == 0x00ed
                           0000ED   562 _PCA0CPL3	=	0x00ed
                           0000EE   563 G$PCA0CPL4$0$0 == 0x00ee
                           0000EE   564 _PCA0CPL4	=	0x00ee
                           0000EF   565 G$RSTSRC$0$0 == 0x00ef
                           0000EF   566 _RSTSRC	=	0x00ef
                           0000F0   567 G$B$0$0 == 0x00f0
                           0000F0   568 _B	=	0x00f0
                           0000F1   569 G$SCON1$0$0 == 0x00f1
                           0000F1   570 _SCON1	=	0x00f1
                           0000F2   571 G$SBUF1$0$0 == 0x00f2
                           0000F2   572 _SBUF1	=	0x00f2
                           0000F3   573 G$SADDR1$0$0 == 0x00f3
                           0000F3   574 _SADDR1	=	0x00f3
                           0000F4   575 G$TL4$0$0 == 0x00f4
                           0000F4   576 _TL4	=	0x00f4
                           0000F5   577 G$TH4$0$0 == 0x00f5
                           0000F5   578 _TH4	=	0x00f5
                           0000F6   579 G$EIP1$0$0 == 0x00f6
                           0000F6   580 _EIP1	=	0x00f6
                           0000F7   581 G$EIP2$0$0 == 0x00f7
                           0000F7   582 _EIP2	=	0x00f7
                           0000F8   583 G$SPI0CN$0$0 == 0x00f8
                           0000F8   584 _SPI0CN	=	0x00f8
                           0000F9   585 G$PCA0H$0$0 == 0x00f9
                           0000F9   586 _PCA0H	=	0x00f9
                           0000FA   587 G$PCA0CPH0$0$0 == 0x00fa
                           0000FA   588 _PCA0CPH0	=	0x00fa
                           0000FB   589 G$PCA0CPH1$0$0 == 0x00fb
                           0000FB   590 _PCA0CPH1	=	0x00fb
                           0000FC   591 G$PCA0CPH2$0$0 == 0x00fc
                           0000FC   592 _PCA0CPH2	=	0x00fc
                           0000FD   593 G$PCA0CPH3$0$0 == 0x00fd
                           0000FD   594 _PCA0CPH3	=	0x00fd
                           0000FE   595 G$PCA0CPH4$0$0 == 0x00fe
                           0000FE   596 _PCA0CPH4	=	0x00fe
                           0000FF   597 G$WDTCN$0$0 == 0x00ff
                           0000FF   598 _WDTCN	=	0x00ff
                           008C8A   599 G$TMR0$0$0 == 0x8c8a
                           008C8A   600 _TMR0	=	0x8c8a
                           008D8B   601 G$TMR1$0$0 == 0x8d8b
                           008D8B   602 _TMR1	=	0x8d8b
                           00CDCC   603 G$TMR2$0$0 == 0xcdcc
                           00CDCC   604 _TMR2	=	0xcdcc
                           00CBCA   605 G$RCAP2$0$0 == 0xcbca
                           00CBCA   606 _RCAP2	=	0xcbca
                           009594   607 G$TMR3$0$0 == 0x9594
                           009594   608 _TMR3	=	0x9594
                           009392   609 G$TMR3RL$0$0 == 0x9392
                           009392   610 _TMR3RL	=	0x9392
                           00F5F4   611 G$TMR4$0$0 == 0xf5f4
                           00F5F4   612 _TMR4	=	0xf5f4
                           00E5E4   613 G$RCAP4$0$0 == 0xe5e4
                           00E5E4   614 _RCAP4	=	0xe5e4
                           00BFBE   615 G$ADC0$0$0 == 0xbfbe
                           00BFBE   616 _ADC0	=	0xbfbe
                           00C5C4   617 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   618 _ADC0GT	=	0xc5c4
                           00C7C6   619 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   620 _ADC0LT	=	0xc7c6
                           00D3D2   621 G$DAC0$0$0 == 0xd3d2
                           00D3D2   622 _DAC0	=	0xd3d2
                           00D6D5   623 G$DAC1$0$0 == 0xd6d5
                           00D6D5   624 _DAC1	=	0xd6d5
                           00F9E9   625 G$PCA0$0$0 == 0xf9e9
                           00F9E9   626 _PCA0	=	0xf9e9
                           00FAEA   627 G$PCA0CP0$0$0 == 0xfaea
                           00FAEA   628 _PCA0CP0	=	0xfaea
                           00FBEB   629 G$PCA0CP1$0$0 == 0xfbeb
                           00FBEB   630 _PCA0CP1	=	0xfbeb
                           00FCEC   631 G$PCA0CP2$0$0 == 0xfcec
                           00FCEC   632 _PCA0CP2	=	0xfcec
                           00FDED   633 G$PCA0CP3$0$0 == 0xfded
                           00FDED   634 _PCA0CP3	=	0xfded
                           00FEEE   635 G$PCA0CP4$0$0 == 0xfeee
                           00FEEE   636 _PCA0CP4	=	0xfeee
                                    637 ;--------------------------------------------------------
                                    638 ; special function bits
                                    639 ;--------------------------------------------------------
                                    640 	.area RSEG    (ABS,DATA)
      000000                        641 	.org 0x0000
                           000080   642 G$P0_0$0$0 == 0x0080
                           000080   643 _P0_0	=	0x0080
                           000081   644 G$P0_1$0$0 == 0x0081
                           000081   645 _P0_1	=	0x0081
                           000082   646 G$P0_2$0$0 == 0x0082
                           000082   647 _P0_2	=	0x0082
                           000083   648 G$P0_3$0$0 == 0x0083
                           000083   649 _P0_3	=	0x0083
                           000084   650 G$P0_4$0$0 == 0x0084
                           000084   651 _P0_4	=	0x0084
                           000085   652 G$P0_5$0$0 == 0x0085
                           000085   653 _P0_5	=	0x0085
                           000086   654 G$P0_6$0$0 == 0x0086
                           000086   655 _P0_6	=	0x0086
                           000087   656 G$P0_7$0$0 == 0x0087
                           000087   657 _P0_7	=	0x0087
                           000088   658 G$IT0$0$0 == 0x0088
                           000088   659 _IT0	=	0x0088
                           000089   660 G$IE0$0$0 == 0x0089
                           000089   661 _IE0	=	0x0089
                           00008A   662 G$IT1$0$0 == 0x008a
                           00008A   663 _IT1	=	0x008a
                           00008B   664 G$IE1$0$0 == 0x008b
                           00008B   665 _IE1	=	0x008b
                           00008C   666 G$TR0$0$0 == 0x008c
                           00008C   667 _TR0	=	0x008c
                           00008D   668 G$TF0$0$0 == 0x008d
                           00008D   669 _TF0	=	0x008d
                           00008E   670 G$TR1$0$0 == 0x008e
                           00008E   671 _TR1	=	0x008e
                           00008F   672 G$TF1$0$0 == 0x008f
                           00008F   673 _TF1	=	0x008f
                           000090   674 G$P1_0$0$0 == 0x0090
                           000090   675 _P1_0	=	0x0090
                           000091   676 G$P1_1$0$0 == 0x0091
                           000091   677 _P1_1	=	0x0091
                           000092   678 G$P1_2$0$0 == 0x0092
                           000092   679 _P1_2	=	0x0092
                           000093   680 G$P1_3$0$0 == 0x0093
                           000093   681 _P1_3	=	0x0093
                           000094   682 G$P1_4$0$0 == 0x0094
                           000094   683 _P1_4	=	0x0094
                           000095   684 G$P1_5$0$0 == 0x0095
                           000095   685 _P1_5	=	0x0095
                           000096   686 G$P1_6$0$0 == 0x0096
                           000096   687 _P1_6	=	0x0096
                           000097   688 G$P1_7$0$0 == 0x0097
                           000097   689 _P1_7	=	0x0097
                           000098   690 G$RI$0$0 == 0x0098
                           000098   691 _RI	=	0x0098
                           000098   692 G$RI0$0$0 == 0x0098
                           000098   693 _RI0	=	0x0098
                           000099   694 G$TI$0$0 == 0x0099
                           000099   695 _TI	=	0x0099
                           000099   696 G$TI0$0$0 == 0x0099
                           000099   697 _TI0	=	0x0099
                           00009A   698 G$RB8$0$0 == 0x009a
                           00009A   699 _RB8	=	0x009a
                           00009A   700 G$RB80$0$0 == 0x009a
                           00009A   701 _RB80	=	0x009a
                           00009B   702 G$TB8$0$0 == 0x009b
                           00009B   703 _TB8	=	0x009b
                           00009B   704 G$TB80$0$0 == 0x009b
                           00009B   705 _TB80	=	0x009b
                           00009C   706 G$REN$0$0 == 0x009c
                           00009C   707 _REN	=	0x009c
                           00009C   708 G$REN0$0$0 == 0x009c
                           00009C   709 _REN0	=	0x009c
                           00009D   710 G$SM2$0$0 == 0x009d
                           00009D   711 _SM2	=	0x009d
                           00009D   712 G$SM20$0$0 == 0x009d
                           00009D   713 _SM20	=	0x009d
                           00009D   714 G$MCE0$0$0 == 0x009d
                           00009D   715 _MCE0	=	0x009d
                           00009E   716 G$SM1$0$0 == 0x009e
                           00009E   717 _SM1	=	0x009e
                           00009E   718 G$SM10$0$0 == 0x009e
                           00009E   719 _SM10	=	0x009e
                           00009F   720 G$SM0$0$0 == 0x009f
                           00009F   721 _SM0	=	0x009f
                           00009F   722 G$SM00$0$0 == 0x009f
                           00009F   723 _SM00	=	0x009f
                           00009F   724 G$S0MODE$0$0 == 0x009f
                           00009F   725 _S0MODE	=	0x009f
                           0000A0   726 G$P2_0$0$0 == 0x00a0
                           0000A0   727 _P2_0	=	0x00a0
                           0000A1   728 G$P2_1$0$0 == 0x00a1
                           0000A1   729 _P2_1	=	0x00a1
                           0000A2   730 G$P2_2$0$0 == 0x00a2
                           0000A2   731 _P2_2	=	0x00a2
                           0000A3   732 G$P2_3$0$0 == 0x00a3
                           0000A3   733 _P2_3	=	0x00a3
                           0000A4   734 G$P2_4$0$0 == 0x00a4
                           0000A4   735 _P2_4	=	0x00a4
                           0000A5   736 G$P2_5$0$0 == 0x00a5
                           0000A5   737 _P2_5	=	0x00a5
                           0000A6   738 G$P2_6$0$0 == 0x00a6
                           0000A6   739 _P2_6	=	0x00a6
                           0000A7   740 G$P2_7$0$0 == 0x00a7
                           0000A7   741 _P2_7	=	0x00a7
                           0000A8   742 G$EX0$0$0 == 0x00a8
                           0000A8   743 _EX0	=	0x00a8
                           0000A9   744 G$ET0$0$0 == 0x00a9
                           0000A9   745 _ET0	=	0x00a9
                           0000AA   746 G$EX1$0$0 == 0x00aa
                           0000AA   747 _EX1	=	0x00aa
                           0000AB   748 G$ET1$0$0 == 0x00ab
                           0000AB   749 _ET1	=	0x00ab
                           0000AC   750 G$ES0$0$0 == 0x00ac
                           0000AC   751 _ES0	=	0x00ac
                           0000AC   752 G$ES$0$0 == 0x00ac
                           0000AC   753 _ES	=	0x00ac
                           0000AD   754 G$ET2$0$0 == 0x00ad
                           0000AD   755 _ET2	=	0x00ad
                           0000AF   756 G$EA$0$0 == 0x00af
                           0000AF   757 _EA	=	0x00af
                           0000B0   758 G$P3_0$0$0 == 0x00b0
                           0000B0   759 _P3_0	=	0x00b0
                           0000B1   760 G$P3_1$0$0 == 0x00b1
                           0000B1   761 _P3_1	=	0x00b1
                           0000B2   762 G$P3_2$0$0 == 0x00b2
                           0000B2   763 _P3_2	=	0x00b2
                           0000B3   764 G$P3_3$0$0 == 0x00b3
                           0000B3   765 _P3_3	=	0x00b3
                           0000B4   766 G$P3_4$0$0 == 0x00b4
                           0000B4   767 _P3_4	=	0x00b4
                           0000B5   768 G$P3_5$0$0 == 0x00b5
                           0000B5   769 _P3_5	=	0x00b5
                           0000B6   770 G$P3_6$0$0 == 0x00b6
                           0000B6   771 _P3_6	=	0x00b6
                           0000B7   772 G$P3_7$0$0 == 0x00b7
                           0000B7   773 _P3_7	=	0x00b7
                           0000B8   774 G$PX0$0$0 == 0x00b8
                           0000B8   775 _PX0	=	0x00b8
                           0000B9   776 G$PT0$0$0 == 0x00b9
                           0000B9   777 _PT0	=	0x00b9
                           0000BA   778 G$PX1$0$0 == 0x00ba
                           0000BA   779 _PX1	=	0x00ba
                           0000BB   780 G$PT1$0$0 == 0x00bb
                           0000BB   781 _PT1	=	0x00bb
                           0000BC   782 G$PS0$0$0 == 0x00bc
                           0000BC   783 _PS0	=	0x00bc
                           0000BC   784 G$PS$0$0 == 0x00bc
                           0000BC   785 _PS	=	0x00bc
                           0000BD   786 G$PT2$0$0 == 0x00bd
                           0000BD   787 _PT2	=	0x00bd
                           0000C0   788 G$SMBTOE$0$0 == 0x00c0
                           0000C0   789 _SMBTOE	=	0x00c0
                           0000C1   790 G$SMBFTE$0$0 == 0x00c1
                           0000C1   791 _SMBFTE	=	0x00c1
                           0000C2   792 G$AA$0$0 == 0x00c2
                           0000C2   793 _AA	=	0x00c2
                           0000C3   794 G$SI$0$0 == 0x00c3
                           0000C3   795 _SI	=	0x00c3
                           0000C4   796 G$STO$0$0 == 0x00c4
                           0000C4   797 _STO	=	0x00c4
                           0000C5   798 G$STA$0$0 == 0x00c5
                           0000C5   799 _STA	=	0x00c5
                           0000C6   800 G$ENSMB$0$0 == 0x00c6
                           0000C6   801 _ENSMB	=	0x00c6
                           0000C7   802 G$BUSY$0$0 == 0x00c7
                           0000C7   803 _BUSY	=	0x00c7
                           0000C8   804 G$CPRL2$0$0 == 0x00c8
                           0000C8   805 _CPRL2	=	0x00c8
                           0000C9   806 G$CT2$0$0 == 0x00c9
                           0000C9   807 _CT2	=	0x00c9
                           0000CA   808 G$TR2$0$0 == 0x00ca
                           0000CA   809 _TR2	=	0x00ca
                           0000CB   810 G$EXEN2$0$0 == 0x00cb
                           0000CB   811 _EXEN2	=	0x00cb
                           0000CC   812 G$TCLK$0$0 == 0x00cc
                           0000CC   813 _TCLK	=	0x00cc
                           0000CD   814 G$RCLK$0$0 == 0x00cd
                           0000CD   815 _RCLK	=	0x00cd
                           0000CE   816 G$EXF2$0$0 == 0x00ce
                           0000CE   817 _EXF2	=	0x00ce
                           0000CF   818 G$TF2$0$0 == 0x00cf
                           0000CF   819 _TF2	=	0x00cf
                           0000D0   820 G$P$0$0 == 0x00d0
                           0000D0   821 _P	=	0x00d0
                           0000D1   822 G$F1$0$0 == 0x00d1
                           0000D1   823 _F1	=	0x00d1
                           0000D2   824 G$OV$0$0 == 0x00d2
                           0000D2   825 _OV	=	0x00d2
                           0000D3   826 G$RS0$0$0 == 0x00d3
                           0000D3   827 _RS0	=	0x00d3
                           0000D4   828 G$RS1$0$0 == 0x00d4
                           0000D4   829 _RS1	=	0x00d4
                           0000D5   830 G$F0$0$0 == 0x00d5
                           0000D5   831 _F0	=	0x00d5
                           0000D6   832 G$AC$0$0 == 0x00d6
                           0000D6   833 _AC	=	0x00d6
                           0000D7   834 G$CY$0$0 == 0x00d7
                           0000D7   835 _CY	=	0x00d7
                           0000D8   836 G$CCF0$0$0 == 0x00d8
                           0000D8   837 _CCF0	=	0x00d8
                           0000D9   838 G$CCF1$0$0 == 0x00d9
                           0000D9   839 _CCF1	=	0x00d9
                           0000DA   840 G$CCF2$0$0 == 0x00da
                           0000DA   841 _CCF2	=	0x00da
                           0000DB   842 G$CCF3$0$0 == 0x00db
                           0000DB   843 _CCF3	=	0x00db
                           0000DC   844 G$CCF4$0$0 == 0x00dc
                           0000DC   845 _CCF4	=	0x00dc
                           0000DE   846 G$CR$0$0 == 0x00de
                           0000DE   847 _CR	=	0x00de
                           0000DF   848 G$CF$0$0 == 0x00df
                           0000DF   849 _CF	=	0x00df
                           0000E8   850 G$ADLJST$0$0 == 0x00e8
                           0000E8   851 _ADLJST	=	0x00e8
                           0000E8   852 G$AD0LJST$0$0 == 0x00e8
                           0000E8   853 _AD0LJST	=	0x00e8
                           0000E9   854 G$ADWINT$0$0 == 0x00e9
                           0000E9   855 _ADWINT	=	0x00e9
                           0000E9   856 G$AD0WINT$0$0 == 0x00e9
                           0000E9   857 _AD0WINT	=	0x00e9
                           0000EA   858 G$ADSTM0$0$0 == 0x00ea
                           0000EA   859 _ADSTM0	=	0x00ea
                           0000EA   860 G$AD0CM0$0$0 == 0x00ea
                           0000EA   861 _AD0CM0	=	0x00ea
                           0000EB   862 G$ADSTM1$0$0 == 0x00eb
                           0000EB   863 _ADSTM1	=	0x00eb
                           0000EB   864 G$AD0CM1$0$0 == 0x00eb
                           0000EB   865 _AD0CM1	=	0x00eb
                           0000EC   866 G$ADBUSY$0$0 == 0x00ec
                           0000EC   867 _ADBUSY	=	0x00ec
                           0000EC   868 G$AD0BUSY$0$0 == 0x00ec
                           0000EC   869 _AD0BUSY	=	0x00ec
                           0000ED   870 G$ADCINT$0$0 == 0x00ed
                           0000ED   871 _ADCINT	=	0x00ed
                           0000ED   872 G$AD0INT$0$0 == 0x00ed
                           0000ED   873 _AD0INT	=	0x00ed
                           0000EE   874 G$ADCTM$0$0 == 0x00ee
                           0000EE   875 _ADCTM	=	0x00ee
                           0000EE   876 G$AD0TM$0$0 == 0x00ee
                           0000EE   877 _AD0TM	=	0x00ee
                           0000EF   878 G$ADCEN$0$0 == 0x00ef
                           0000EF   879 _ADCEN	=	0x00ef
                           0000EF   880 G$AD0EN$0$0 == 0x00ef
                           0000EF   881 _AD0EN	=	0x00ef
                           0000F8   882 G$SPIEN$0$0 == 0x00f8
                           0000F8   883 _SPIEN	=	0x00f8
                           0000F9   884 G$MSTEN$0$0 == 0x00f9
                           0000F9   885 _MSTEN	=	0x00f9
                           0000FA   886 G$SLVSEL$0$0 == 0x00fa
                           0000FA   887 _SLVSEL	=	0x00fa
                           0000FB   888 G$TXBSY$0$0 == 0x00fb
                           0000FB   889 _TXBSY	=	0x00fb
                           0000FC   890 G$RXOVRN$0$0 == 0x00fc
                           0000FC   891 _RXOVRN	=	0x00fc
                           0000FD   892 G$MODF$0$0 == 0x00fd
                           0000FD   893 _MODF	=	0x00fd
                           0000FE   894 G$WCOL$0$0 == 0x00fe
                           0000FE   895 _WCOL	=	0x00fe
                           0000FF   896 G$SPIF$0$0 == 0x00ff
                           0000FF   897 _SPIF	=	0x00ff
                           0000C7   898 G$BUS_BUSY$0$0 == 0x00c7
                           0000C7   899 _BUS_BUSY	=	0x00c7
                           0000C6   900 G$BUS_EN$0$0 == 0x00c6
                           0000C6   901 _BUS_EN	=	0x00c6
                           0000C5   902 G$BUS_START$0$0 == 0x00c5
                           0000C5   903 _BUS_START	=	0x00c5
                           0000C4   904 G$BUS_STOP$0$0 == 0x00c4
                           0000C4   905 _BUS_STOP	=	0x00c4
                           0000C3   906 G$BUS_INT$0$0 == 0x00c3
                           0000C3   907 _BUS_INT	=	0x00c3
                           0000C2   908 G$BUS_AA$0$0 == 0x00c2
                           0000C2   909 _BUS_AA	=	0x00c2
                           0000C1   910 G$BUS_FTE$0$0 == 0x00c1
                           0000C1   911 _BUS_FTE	=	0x00c1
                           0000C0   912 G$BUS_TOE$0$0 == 0x00c0
                           0000C0   913 _BUS_TOE	=	0x00c0
                           000083   914 G$BUS_SCL$0$0 == 0x0083
                           000083   915 _BUS_SCL	=	0x0083
                                    916 ;--------------------------------------------------------
                                    917 ; overlayable register banks
                                    918 ;--------------------------------------------------------
                                    919 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        920 	.ds 8
                                    921 ;--------------------------------------------------------
                                    922 ; internal ram data
                                    923 ;--------------------------------------------------------
                                    924 	.area DSEG    (DATA)
                           000000   925 Llab3_2steering.lcd_clear$NumBytes$1$77==.
      000022                        926 _lcd_clear_NumBytes_1_77:
      000022                        927 	.ds 1
                           000001   928 Llab3_2steering.lcd_clear$Cmd$1$77==.
      000023                        929 _lcd_clear_Cmd_1_77:
      000023                        930 	.ds 2
                           000003   931 Llab3_2steering.read_keypad$Data$1$78==.
      000025                        932 _read_keypad_Data_1_78:
      000025                        933 	.ds 2
                           000005   934 Llab3_2steering.i2c_write_data$start_reg$1$97==.
      000027                        935 _i2c_write_data_PARM_2:
      000027                        936 	.ds 1
                           000006   937 Llab3_2steering.i2c_write_data$buffer$1$97==.
      000028                        938 _i2c_write_data_PARM_3:
      000028                        939 	.ds 3
                           000009   940 Llab3_2steering.i2c_write_data$num_bytes$1$97==.
      00002B                        941 _i2c_write_data_PARM_4:
      00002B                        942 	.ds 1
                           00000A   943 Llab3_2steering.i2c_read_data$start_reg$1$99==.
      00002C                        944 _i2c_read_data_PARM_2:
      00002C                        945 	.ds 1
                           00000B   946 Llab3_2steering.i2c_read_data$buffer$1$99==.
      00002D                        947 _i2c_read_data_PARM_3:
      00002D                        948 	.ds 3
                           00000E   949 Llab3_2steering.i2c_read_data$num_bytes$1$99==.
      000030                        950 _i2c_read_data_PARM_4:
      000030                        951 	.ds 1
                           00000F   952 Llab3_2steering.Accel_Init$Data2$1$103==.
      000031                        953 _Accel_Init_Data2_1_103:
      000031                        954 	.ds 1
                           000010   955 G$STR_PW$0$0==.
      000032                        956 _STR_PW::
      000032                        957 	.ds 2
                           000012   958 G$count$0$0==.
      000034                        959 _count::
      000034                        960 	.ds 2
                           000014   961 G$input$0$0==.
      000036                        962 _input::
      000036                        963 	.ds 1
                           000015   964 G$answer$0$0==.
      000037                        965 _answer::
      000037                        966 	.ds 2
                           000017   967 Llab3_2steering.ReadCompass$Data$1$115==.
      000039                        968 _ReadCompass_Data_1_115:
      000039                        969 	.ds 2
                                    970 ;--------------------------------------------------------
                                    971 ; overlayable items in internal ram 
                                    972 ;--------------------------------------------------------
                                    973 	.area	OSEG    (OVR,DATA)
                                    974 	.area	OSEG    (OVR,DATA)
                                    975 	.area	OSEG    (OVR,DATA)
                                    976 	.area	OSEG    (OVR,DATA)
                                    977 	.area	OSEG    (OVR,DATA)
                                    978 	.area	OSEG    (OVR,DATA)
                                    979 	.area	OSEG    (OVR,DATA)
                                    980 ;--------------------------------------------------------
                                    981 ; Stack segment in internal ram 
                                    982 ;--------------------------------------------------------
                                    983 	.area	SSEG
      000055                        984 __start__stack:
      000055                        985 	.ds	1
                                    986 
                                    987 ;--------------------------------------------------------
                                    988 ; indirectly addressable internal ram data
                                    989 ;--------------------------------------------------------
                                    990 	.area ISEG    (DATA)
                                    991 ;--------------------------------------------------------
                                    992 ; absolute internal ram data
                                    993 ;--------------------------------------------------------
                                    994 	.area IABS    (ABS,DATA)
                                    995 	.area IABS    (ABS,DATA)
                                    996 ;--------------------------------------------------------
                                    997 ; bit data
                                    998 ;--------------------------------------------------------
                                    999 	.area BSEG    (BIT)
                                   1000 ;--------------------------------------------------------
                                   1001 ; paged external ram data
                                   1002 ;--------------------------------------------------------
                                   1003 	.area PSEG    (PAG,XDATA)
                                   1004 ;--------------------------------------------------------
                                   1005 ; external ram data
                                   1006 ;--------------------------------------------------------
                                   1007 	.area XSEG    (XDATA)
                           000000  1008 Llab3_2steering.lcd_print$text$1$73==.
      000001                       1009 _lcd_print_text_1_73:
      000001                       1010 	.ds 80
                                   1011 ;--------------------------------------------------------
                                   1012 ; absolute external ram data
                                   1013 ;--------------------------------------------------------
                                   1014 	.area XABS    (ABS,XDATA)
                                   1015 ;--------------------------------------------------------
                                   1016 ; external initialized ram data
                                   1017 ;--------------------------------------------------------
                                   1018 	.area XISEG   (XDATA)
                                   1019 	.area HOME    (CODE)
                                   1020 	.area GSINIT0 (CODE)
                                   1021 	.area GSINIT1 (CODE)
                                   1022 	.area GSINIT2 (CODE)
                                   1023 	.area GSINIT3 (CODE)
                                   1024 	.area GSINIT4 (CODE)
                                   1025 	.area GSINIT5 (CODE)
                                   1026 	.area GSINIT  (CODE)
                                   1027 	.area GSFINAL (CODE)
                                   1028 	.area CSEG    (CODE)
                                   1029 ;--------------------------------------------------------
                                   1030 ; interrupt vector 
                                   1031 ;--------------------------------------------------------
                                   1032 	.area HOME    (CODE)
      000000                       1033 __interrupt_vect:
      000000 02 00 51         [24] 1034 	ljmp	__sdcc_gsinit_startup
      000003 32               [24] 1035 	reti
      000004                       1036 	.ds	7
      00000B 32               [24] 1037 	reti
      00000C                       1038 	.ds	7
      000013 32               [24] 1039 	reti
      000014                       1040 	.ds	7
      00001B 32               [24] 1041 	reti
      00001C                       1042 	.ds	7
      000023 32               [24] 1043 	reti
      000024                       1044 	.ds	7
      00002B 32               [24] 1045 	reti
      00002C                       1046 	.ds	7
      000033 32               [24] 1047 	reti
      000034                       1048 	.ds	7
      00003B 32               [24] 1049 	reti
      00003C                       1050 	.ds	7
      000043 32               [24] 1051 	reti
      000044                       1052 	.ds	7
      00004B 02 06 51         [24] 1053 	ljmp	_PCA_ISR
                                   1054 ;--------------------------------------------------------
                                   1055 ; global & static initialisations
                                   1056 ;--------------------------------------------------------
                                   1057 	.area HOME    (CODE)
                                   1058 	.area GSINIT  (CODE)
                                   1059 	.area GSFINAL (CODE)
                                   1060 	.area GSINIT  (CODE)
                                   1061 	.globl __sdcc_gsinit_startup
                                   1062 	.globl __sdcc_program_startup
                                   1063 	.globl __start__stack
                                   1064 	.globl __mcs51_genXINIT
                                   1065 	.globl __mcs51_genXRAMCLEAR
                                   1066 	.globl __mcs51_genRAMCLEAR
                           000000  1067 	C$lab3_2steering.c$25$1$124 ==.
                                   1068 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:25: unsigned int STR_PW   = 0;
      0000AA E4               [12] 1069 	clr	a
      0000AB F5 32            [12] 1070 	mov	_STR_PW,a
      0000AD F5 33            [12] 1071 	mov	(_STR_PW + 1),a
                           000005  1072 	C$lab3_2steering.c$26$1$124 ==.
                                   1073 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:26: unsigned int count = 0;
      0000AF F5 34            [12] 1074 	mov	_count,a
      0000B1 F5 35            [12] 1075 	mov	(_count + 1),a
                                   1076 	.area GSFINAL (CODE)
      0000B3 02 00 4E         [24] 1077 	ljmp	__sdcc_program_startup
                                   1078 ;--------------------------------------------------------
                                   1079 ; Home
                                   1080 ;--------------------------------------------------------
                                   1081 	.area HOME    (CODE)
                                   1082 	.area HOME    (CODE)
      00004E                       1083 __sdcc_program_startup:
      00004E 02 05 8C         [24] 1084 	ljmp	_main
                                   1085 ;	return from main will return to caller
                                   1086 ;--------------------------------------------------------
                                   1087 ; code
                                   1088 ;--------------------------------------------------------
                                   1089 	.area CSEG    (CODE)
                                   1090 ;------------------------------------------------------------
                                   1091 ;Allocation info for local variables in function 'SYSCLK_Init'
                                   1092 ;------------------------------------------------------------
                                   1093 ;i                         Allocated to registers 
                                   1094 ;------------------------------------------------------------
                           000000  1095 	G$SYSCLK_Init$0$0 ==.
                           000000  1096 	C$c8051_SDCC.h$42$0$0 ==.
                                   1097 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:42: void SYSCLK_Init(void)
                                   1098 ;	-----------------------------------------
                                   1099 ;	 function SYSCLK_Init
                                   1100 ;	-----------------------------------------
      0000B6                       1101 _SYSCLK_Init:
                           000007  1102 	ar7 = 0x07
                           000006  1103 	ar6 = 0x06
                           000005  1104 	ar5 = 0x05
                           000004  1105 	ar4 = 0x04
                           000003  1106 	ar3 = 0x03
                           000002  1107 	ar2 = 0x02
                           000001  1108 	ar1 = 0x01
                           000000  1109 	ar0 = 0x00
                           000000  1110 	C$c8051_SDCC.h$46$1$16 ==.
                                   1111 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:46: OSCXCN = 0x67;                      // start external oscillator with
      0000B6 75 B1 67         [24] 1112 	mov	_OSCXCN,#0x67
                           000003  1113 	C$c8051_SDCC.h$49$1$16 ==.
                                   1114 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:49: for (i=0; i < 256; i++);            // wait for oscillator to start
      0000B9 7E 00            [12] 1115 	mov	r6,#0x00
      0000BB 7F 01            [12] 1116 	mov	r7,#0x01
      0000BD                       1117 00107$:
      0000BD 1E               [12] 1118 	dec	r6
      0000BE BE FF 01         [24] 1119 	cjne	r6,#0xFF,00121$
      0000C1 1F               [12] 1120 	dec	r7
      0000C2                       1121 00121$:
      0000C2 EE               [12] 1122 	mov	a,r6
      0000C3 4F               [12] 1123 	orl	a,r7
      0000C4 70 F7            [24] 1124 	jnz	00107$
                           000010  1125 	C$c8051_SDCC.h$51$1$16 ==.
                                   1126 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:51: while (!(OSCXCN & 0x80));           // Wait for crystal osc. to settle
      0000C6                       1127 00102$:
      0000C6 E5 B1            [12] 1128 	mov	a,_OSCXCN
      0000C8 30 E7 FB         [24] 1129 	jnb	acc.7,00102$
                           000015  1130 	C$c8051_SDCC.h$53$1$16 ==.
                                   1131 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:53: OSCICN = 0x88;                      // select external oscillator as SYSCLK
      0000CB 75 B2 88         [24] 1132 	mov	_OSCICN,#0x88
                           000018  1133 	C$c8051_SDCC.h$56$1$16 ==.
                           000018  1134 	XG$SYSCLK_Init$0$0 ==.
      0000CE 22               [24] 1135 	ret
                                   1136 ;------------------------------------------------------------
                                   1137 ;Allocation info for local variables in function 'UART0_Init'
                                   1138 ;------------------------------------------------------------
                           000019  1139 	G$UART0_Init$0$0 ==.
                           000019  1140 	C$c8051_SDCC.h$64$1$16 ==.
                                   1141 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:64: void UART0_Init(void)
                                   1142 ;	-----------------------------------------
                                   1143 ;	 function UART0_Init
                                   1144 ;	-----------------------------------------
      0000CF                       1145 _UART0_Init:
                           000019  1146 	C$c8051_SDCC.h$66$1$18 ==.
                                   1147 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:66: SCON0  = 0x50;                      // SCON0: mode 1, 8-bit UART, enable RX
      0000CF 75 98 50         [24] 1148 	mov	_SCON0,#0x50
                           00001C  1149 	C$c8051_SDCC.h$67$1$18 ==.
                                   1150 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:67: TMOD   = 0x20;                      // TMOD: timer 1, mode 2, 8-bit reload
      0000D2 75 89 20         [24] 1151 	mov	_TMOD,#0x20
                           00001F  1152 	C$c8051_SDCC.h$68$1$18 ==.
                                   1153 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:68: TH1    = -(SYSCLK/BAUDRATE/16);     // set Timer1 reload value for baudrate
      0000D5 75 8D DC         [24] 1154 	mov	_TH1,#0xDC
                           000022  1155 	C$c8051_SDCC.h$69$1$18 ==.
                                   1156 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:69: TR1    = 1;                         // start Timer1
      0000D8 D2 8E            [12] 1157 	setb	_TR1
                           000024  1158 	C$c8051_SDCC.h$70$1$18 ==.
                                   1159 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:70: CKCON |= 0x10;                      // Timer1 uses SYSCLK as time base
      0000DA 43 8E 10         [24] 1160 	orl	_CKCON,#0x10
                           000027  1161 	C$c8051_SDCC.h$71$1$18 ==.
                                   1162 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:71: PCON  |= 0x80;                      // SMOD00 = 1 (disable baud rate 
      0000DD 43 87 80         [24] 1163 	orl	_PCON,#0x80
                           00002A  1164 	C$c8051_SDCC.h$73$1$18 ==.
                                   1165 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:73: TI0    = 1;                         // Indicate TX0 ready
      0000E0 D2 99            [12] 1166 	setb	_TI0
                           00002C  1167 	C$c8051_SDCC.h$74$1$18 ==.
                                   1168 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:74: P0MDOUT |= 0x01;                    // Set TX0 to push/pull
      0000E2 43 A4 01         [24] 1169 	orl	_P0MDOUT,#0x01
                           00002F  1170 	C$c8051_SDCC.h$75$1$18 ==.
                           00002F  1171 	XG$UART0_Init$0$0 ==.
      0000E5 22               [24] 1172 	ret
                                   1173 ;------------------------------------------------------------
                                   1174 ;Allocation info for local variables in function 'Sys_Init'
                                   1175 ;------------------------------------------------------------
                           000030  1176 	G$Sys_Init$0$0 ==.
                           000030  1177 	C$c8051_SDCC.h$83$1$18 ==.
                                   1178 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:83: void Sys_Init(void)
                                   1179 ;	-----------------------------------------
                                   1180 ;	 function Sys_Init
                                   1181 ;	-----------------------------------------
      0000E6                       1182 _Sys_Init:
                           000030  1183 	C$c8051_SDCC.h$85$1$20 ==.
                                   1184 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:85: WDTCN = 0xde;			// disable watchdog timer
      0000E6 75 FF DE         [24] 1185 	mov	_WDTCN,#0xDE
                           000033  1186 	C$c8051_SDCC.h$86$1$20 ==.
                                   1187 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:86: WDTCN = 0xad;
      0000E9 75 FF AD         [24] 1188 	mov	_WDTCN,#0xAD
                           000036  1189 	C$c8051_SDCC.h$88$1$20 ==.
                                   1190 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:88: SYSCLK_Init();			// initialize oscillator
      0000EC 12 00 B6         [24] 1191 	lcall	_SYSCLK_Init
                           000039  1192 	C$c8051_SDCC.h$89$1$20 ==.
                                   1193 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:89: UART0_Init();			// initialize UART0
      0000EF 12 00 CF         [24] 1194 	lcall	_UART0_Init
                           00003C  1195 	C$c8051_SDCC.h$91$1$20 ==.
                                   1196 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:91: XBR0 |= 0x04;
      0000F2 43 E1 04         [24] 1197 	orl	_XBR0,#0x04
                           00003F  1198 	C$c8051_SDCC.h$92$1$20 ==.
                                   1199 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:92: XBR2 |= 0x40;                    	// Enable crossbar and weak pull-ups
      0000F5 43 E3 40         [24] 1200 	orl	_XBR2,#0x40
                           000042  1201 	C$c8051_SDCC.h$93$1$20 ==.
                           000042  1202 	XG$Sys_Init$0$0 ==.
      0000F8 22               [24] 1203 	ret
                                   1204 ;------------------------------------------------------------
                                   1205 ;Allocation info for local variables in function 'putchar'
                                   1206 ;------------------------------------------------------------
                                   1207 ;c                         Allocated to registers r7 
                                   1208 ;------------------------------------------------------------
                           000043  1209 	G$putchar$0$0 ==.
                           000043  1210 	C$c8051_SDCC.h$98$1$20 ==.
                                   1211 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:98: void putchar(char c)
                                   1212 ;	-----------------------------------------
                                   1213 ;	 function putchar
                                   1214 ;	-----------------------------------------
      0000F9                       1215 _putchar:
      0000F9 AF 82            [24] 1216 	mov	r7,dpl
                           000045  1217 	C$c8051_SDCC.h$100$1$22 ==.
                                   1218 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:100: while (!TI0); 
      0000FB                       1219 00101$:
                           000045  1220 	C$c8051_SDCC.h$101$1$22 ==.
                                   1221 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:101: TI0 = 0;
      0000FB 10 99 02         [24] 1222 	jbc	_TI0,00112$
      0000FE 80 FB            [24] 1223 	sjmp	00101$
      000100                       1224 00112$:
                           00004A  1225 	C$c8051_SDCC.h$102$1$22 ==.
                                   1226 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:102: SBUF0 = c;
      000100 8F 99            [24] 1227 	mov	_SBUF0,r7
                           00004C  1228 	C$c8051_SDCC.h$103$1$22 ==.
                           00004C  1229 	XG$putchar$0$0 ==.
      000102 22               [24] 1230 	ret
                                   1231 ;------------------------------------------------------------
                                   1232 ;Allocation info for local variables in function 'getchar'
                                   1233 ;------------------------------------------------------------
                                   1234 ;c                         Allocated to registers 
                                   1235 ;------------------------------------------------------------
                           00004D  1236 	G$getchar$0$0 ==.
                           00004D  1237 	C$c8051_SDCC.h$108$1$22 ==.
                                   1238 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:108: char getchar(void)
                                   1239 ;	-----------------------------------------
                                   1240 ;	 function getchar
                                   1241 ;	-----------------------------------------
      000103                       1242 _getchar:
                           00004D  1243 	C$c8051_SDCC.h$111$1$24 ==.
                                   1244 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:111: while (!RI0);
      000103                       1245 00101$:
                           00004D  1246 	C$c8051_SDCC.h$112$1$24 ==.
                                   1247 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:112: RI0 = 0;
      000103 10 98 02         [24] 1248 	jbc	_RI0,00112$
      000106 80 FB            [24] 1249 	sjmp	00101$
      000108                       1250 00112$:
                           000052  1251 	C$c8051_SDCC.h$113$1$24 ==.
                                   1252 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:113: c = SBUF0;
      000108 85 99 82         [24] 1253 	mov	dpl,_SBUF0
                           000055  1254 	C$c8051_SDCC.h$114$1$24 ==.
                                   1255 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:114: putchar(c);                          // echo to terminal
      00010B 12 00 F9         [24] 1256 	lcall	_putchar
                           000058  1257 	C$c8051_SDCC.h$115$1$24 ==.
                                   1258 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:115: return SBUF0;
      00010E 85 99 82         [24] 1259 	mov	dpl,_SBUF0
                           00005B  1260 	C$c8051_SDCC.h$116$1$24 ==.
                           00005B  1261 	XG$getchar$0$0 ==.
      000111 22               [24] 1262 	ret
                                   1263 ;------------------------------------------------------------
                                   1264 ;Allocation info for local variables in function 'lcd_print'
                                   1265 ;------------------------------------------------------------
                                   1266 ;fmt                       Allocated to stack - _bp -5
                                   1267 ;len                       Allocated to registers r6 
                                   1268 ;i                         Allocated to registers 
                                   1269 ;ap                        Allocated to registers 
                                   1270 ;text                      Allocated with name '_lcd_print_text_1_73'
                                   1271 ;------------------------------------------------------------
                           00005C  1272 	G$lcd_print$0$0 ==.
                           00005C  1273 	C$i2c.h$81$1$24 ==.
                                   1274 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:81: void lcd_print(const char *fmt, ...)
                                   1275 ;	-----------------------------------------
                                   1276 ;	 function lcd_print
                                   1277 ;	-----------------------------------------
      000112                       1278 _lcd_print:
      000112 C0 0F            [24] 1279 	push	_bp
      000114 85 81 0F         [24] 1280 	mov	_bp,sp
                           000061  1281 	C$i2c.h$87$1$73 ==.
                                   1282 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:87: if ( strlen(fmt) <= 0 ) return;   //If there is no data to print, return
      000117 E5 0F            [12] 1283 	mov	a,_bp
      000119 24 FB            [12] 1284 	add	a,#0xfb
      00011B F8               [12] 1285 	mov	r0,a
      00011C 86 82            [24] 1286 	mov	dpl,@r0
      00011E 08               [12] 1287 	inc	r0
      00011F 86 83            [24] 1288 	mov	dph,@r0
      000121 08               [12] 1289 	inc	r0
      000122 86 F0            [24] 1290 	mov	b,@r0
      000124 12 0E 1A         [24] 1291 	lcall	_strlen
      000127 E5 82            [12] 1292 	mov	a,dpl
      000129 85 83 F0         [24] 1293 	mov	b,dph
      00012C 45 F0            [12] 1294 	orl	a,b
      00012E 70 02            [24] 1295 	jnz	00102$
      000130 80 62            [24] 1296 	sjmp	00109$
      000132                       1297 00102$:
                           00007C  1298 	C$i2c.h$89$2$74 ==.
                                   1299 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:89: va_start(ap, fmt);
      000132 E5 0F            [12] 1300 	mov	a,_bp
      000134 24 FB            [12] 1301 	add	a,#0xFB
      000136 FF               [12] 1302 	mov	r7,a
      000137 8F 0B            [24] 1303 	mov	_vsprintf_PARM_3,r7
                           000083  1304 	C$i2c.h$90$1$73 ==.
                                   1305 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:90: vsprintf(text, fmt, ap);
      000139 E5 0F            [12] 1306 	mov	a,_bp
      00013B 24 FB            [12] 1307 	add	a,#0xfb
      00013D F8               [12] 1308 	mov	r0,a
      00013E 86 08            [24] 1309 	mov	_vsprintf_PARM_2,@r0
      000140 08               [12] 1310 	inc	r0
      000141 86 09            [24] 1311 	mov	(_vsprintf_PARM_2 + 1),@r0
      000143 08               [12] 1312 	inc	r0
      000144 86 0A            [24] 1313 	mov	(_vsprintf_PARM_2 + 2),@r0
      000146 90 00 01         [24] 1314 	mov	dptr,#_lcd_print_text_1_73
      000149 75 F0 00         [24] 1315 	mov	b,#0x00
      00014C 12 07 8F         [24] 1316 	lcall	_vsprintf
                           000099  1317 	C$i2c.h$93$1$73 ==.
                                   1318 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:93: len = strlen(text);
      00014F 90 00 01         [24] 1319 	mov	dptr,#_lcd_print_text_1_73
      000152 75 F0 00         [24] 1320 	mov	b,#0x00
      000155 12 0E 1A         [24] 1321 	lcall	_strlen
      000158 AE 82            [24] 1322 	mov	r6,dpl
                           0000A4  1323 	C$i2c.h$94$1$73 ==.
                                   1324 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:94: for(i=0; i<len; i++)
      00015A 7F 00            [12] 1325 	mov	r7,#0x00
      00015C                       1326 00107$:
      00015C C3               [12] 1327 	clr	c
      00015D EF               [12] 1328 	mov	a,r7
      00015E 9E               [12] 1329 	subb	a,r6
      00015F 50 1F            [24] 1330 	jnc	00105$
                           0000AB  1331 	C$i2c.h$96$2$76 ==.
                                   1332 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:96: if(text[i] == (unsigned char)'\n') text[i] = 13;
      000161 EF               [12] 1333 	mov	a,r7
      000162 24 01            [12] 1334 	add	a,#_lcd_print_text_1_73
      000164 F5 82            [12] 1335 	mov	dpl,a
      000166 E4               [12] 1336 	clr	a
      000167 34 00            [12] 1337 	addc	a,#(_lcd_print_text_1_73 >> 8)
      000169 F5 83            [12] 1338 	mov	dph,a
      00016B E0               [24] 1339 	movx	a,@dptr
      00016C FD               [12] 1340 	mov	r5,a
      00016D BD 0A 0D         [24] 1341 	cjne	r5,#0x0A,00108$
      000170 EF               [12] 1342 	mov	a,r7
      000171 24 01            [12] 1343 	add	a,#_lcd_print_text_1_73
      000173 F5 82            [12] 1344 	mov	dpl,a
      000175 E4               [12] 1345 	clr	a
      000176 34 00            [12] 1346 	addc	a,#(_lcd_print_text_1_73 >> 8)
      000178 F5 83            [12] 1347 	mov	dph,a
      00017A 74 0D            [12] 1348 	mov	a,#0x0D
      00017C F0               [24] 1349 	movx	@dptr,a
      00017D                       1350 00108$:
                           0000C7  1351 	C$i2c.h$94$1$73 ==.
                                   1352 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:94: for(i=0; i<len; i++)
      00017D 0F               [12] 1353 	inc	r7
      00017E 80 DC            [24] 1354 	sjmp	00107$
      000180                       1355 00105$:
                           0000CA  1356 	C$i2c.h$99$1$73 ==.
                                   1357 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:99: i2c_write_data(0xC6, 0x00, text, len);
      000180 75 28 01         [24] 1358 	mov	_i2c_write_data_PARM_3,#_lcd_print_text_1_73
      000183 75 29 00         [24] 1359 	mov	(_i2c_write_data_PARM_3 + 1),#(_lcd_print_text_1_73 >> 8)
      000186 75 2A 00         [24] 1360 	mov	(_i2c_write_data_PARM_3 + 2),#0x00
      000189 75 27 00         [24] 1361 	mov	_i2c_write_data_PARM_2,#0x00
      00018C 8E 2B            [24] 1362 	mov	_i2c_write_data_PARM_4,r6
      00018E 75 82 C6         [24] 1363 	mov	dpl,#0xC6
      000191 12 04 28         [24] 1364 	lcall	_i2c_write_data
      000194                       1365 00109$:
      000194 D0 0F            [24] 1366 	pop	_bp
                           0000E0  1367 	C$i2c.h$100$1$73 ==.
                           0000E0  1368 	XG$lcd_print$0$0 ==.
      000196 22               [24] 1369 	ret
                                   1370 ;------------------------------------------------------------
                                   1371 ;Allocation info for local variables in function 'lcd_clear'
                                   1372 ;------------------------------------------------------------
                                   1373 ;NumBytes                  Allocated with name '_lcd_clear_NumBytes_1_77'
                                   1374 ;Cmd                       Allocated with name '_lcd_clear_Cmd_1_77'
                                   1375 ;------------------------------------------------------------
                           0000E1  1376 	G$lcd_clear$0$0 ==.
                           0000E1  1377 	C$i2c.h$103$1$73 ==.
                                   1378 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:103: void lcd_clear()
                                   1379 ;	-----------------------------------------
                                   1380 ;	 function lcd_clear
                                   1381 ;	-----------------------------------------
      000197                       1382 _lcd_clear:
                           0000E1  1383 	C$i2c.h$105$1$73 ==.
                                   1384 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:105: unsigned char NumBytes=0, Cmd[2];
      000197 75 22 00         [24] 1385 	mov	_lcd_clear_NumBytes_1_77,#0x00
                           0000E4  1386 	C$i2c.h$107$1$77 ==.
                                   1387 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:107: while(NumBytes < 64) i2c_read_data(0xC6, 0x00, &NumBytes, 1);
      00019A                       1388 00101$:
      00019A 74 C0            [12] 1389 	mov	a,#0x100 - 0x40
      00019C 25 22            [12] 1390 	add	a,_lcd_clear_NumBytes_1_77
      00019E 40 17            [24] 1391 	jc	00103$
      0001A0 75 2D 22         [24] 1392 	mov	_i2c_read_data_PARM_3,#_lcd_clear_NumBytes_1_77
      0001A3 75 2E 00         [24] 1393 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0001A6 75 2F 40         [24] 1394 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0001A9 75 2C 00         [24] 1395 	mov	_i2c_read_data_PARM_2,#0x00
      0001AC 75 30 01         [24] 1396 	mov	_i2c_read_data_PARM_4,#0x01
      0001AF 75 82 C6         [24] 1397 	mov	dpl,#0xC6
      0001B2 12 04 9E         [24] 1398 	lcall	_i2c_read_data
      0001B5 80 E3            [24] 1399 	sjmp	00101$
      0001B7                       1400 00103$:
                           000101  1401 	C$i2c.h$109$1$77 ==.
                                   1402 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:109: Cmd[0] = 12;
      0001B7 75 23 0C         [24] 1403 	mov	_lcd_clear_Cmd_1_77,#0x0C
                           000104  1404 	C$i2c.h$110$1$77 ==.
                                   1405 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:110: i2c_write_data(0xC6, 0x00, Cmd, 1);
      0001BA 75 28 23         [24] 1406 	mov	_i2c_write_data_PARM_3,#_lcd_clear_Cmd_1_77
      0001BD 75 29 00         [24] 1407 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      0001C0 75 2A 40         [24] 1408 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      0001C3 75 27 00         [24] 1409 	mov	_i2c_write_data_PARM_2,#0x00
      0001C6 75 2B 01         [24] 1410 	mov	_i2c_write_data_PARM_4,#0x01
      0001C9 75 82 C6         [24] 1411 	mov	dpl,#0xC6
      0001CC 12 04 28         [24] 1412 	lcall	_i2c_write_data
                           000119  1413 	C$i2c.h$111$1$77 ==.
                           000119  1414 	XG$lcd_clear$0$0 ==.
      0001CF 22               [24] 1415 	ret
                                   1416 ;------------------------------------------------------------
                                   1417 ;Allocation info for local variables in function 'read_keypad'
                                   1418 ;------------------------------------------------------------
                                   1419 ;i                         Allocated to registers r7 
                                   1420 ;Data                      Allocated with name '_read_keypad_Data_1_78'
                                   1421 ;------------------------------------------------------------
                           00011A  1422 	G$read_keypad$0$0 ==.
                           00011A  1423 	C$i2c.h$114$1$77 ==.
                                   1424 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:114: char read_keypad()
                                   1425 ;	-----------------------------------------
                                   1426 ;	 function read_keypad
                                   1427 ;	-----------------------------------------
      0001D0                       1428 _read_keypad:
                           00011A  1429 	C$i2c.h$118$1$78 ==.
                                   1430 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:118: i2c_read_data(0xC6, 0x01, Data, 2); //Read I2C data on address 192, register 1, 2 bytes of data.
      0001D0 75 2D 25         [24] 1431 	mov	_i2c_read_data_PARM_3,#_read_keypad_Data_1_78
      0001D3 75 2E 00         [24] 1432 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0001D6 75 2F 40         [24] 1433 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0001D9 75 2C 01         [24] 1434 	mov	_i2c_read_data_PARM_2,#0x01
      0001DC 75 30 02         [24] 1435 	mov	_i2c_read_data_PARM_4,#0x02
      0001DF 75 82 C6         [24] 1436 	mov	dpl,#0xC6
      0001E2 12 04 9E         [24] 1437 	lcall	_i2c_read_data
                           00012F  1438 	C$i2c.h$119$1$78 ==.
                                   1439 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:119: if(Data[0] == 0xFF) return 0;  //No response on bus, no display
      0001E5 74 FF            [12] 1440 	mov	a,#0xFF
      0001E7 B5 25 05         [24] 1441 	cjne	a,_read_keypad_Data_1_78,00102$
      0001EA 75 82 00         [24] 1442 	mov	dpl,#0x00
      0001ED 80 5F            [24] 1443 	sjmp	00116$
      0001EF                       1444 00102$:
                           000139  1445 	C$i2c.h$121$1$78 ==.
                                   1446 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:121: for(i=0; i<8; i++)             //loop 8 times
      0001EF 7F 00            [12] 1447 	mov	r7,#0x00
      0001F1 8F 06            [24] 1448 	mov	ar6,r7
      0001F3                       1449 00114$:
                           00013D  1450 	C$i2c.h$123$2$79 ==.
                                   1451 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:123: if(Data[0] & (0x01 << i))  //find the ASCII value of the keypad read, if it is the current loop value
      0001F3 8E F0            [24] 1452 	mov	b,r6
      0001F5 05 F0            [12] 1453 	inc	b
      0001F7 7C 01            [12] 1454 	mov	r4,#0x01
      0001F9 7D 00            [12] 1455 	mov	r5,#0x00
      0001FB 80 06            [24] 1456 	sjmp	00145$
      0001FD                       1457 00144$:
      0001FD EC               [12] 1458 	mov	a,r4
      0001FE 2C               [12] 1459 	add	a,r4
      0001FF FC               [12] 1460 	mov	r4,a
      000200 ED               [12] 1461 	mov	a,r5
      000201 33               [12] 1462 	rlc	a
      000202 FD               [12] 1463 	mov	r5,a
      000203                       1464 00145$:
      000203 D5 F0 F7         [24] 1465 	djnz	b,00144$
      000206 AA 25            [24] 1466 	mov	r2,_read_keypad_Data_1_78
      000208 7B 00            [12] 1467 	mov	r3,#0x00
      00020A EA               [12] 1468 	mov	a,r2
      00020B 52 04            [12] 1469 	anl	ar4,a
      00020D EB               [12] 1470 	mov	a,r3
      00020E 52 05            [12] 1471 	anl	ar5,a
      000210 EC               [12] 1472 	mov	a,r4
      000211 4D               [12] 1473 	orl	a,r5
      000212 60 07            [24] 1474 	jz	00115$
                           00015E  1475 	C$i2c.h$124$2$79 ==.
                                   1476 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:124: return i+49;
      000214 74 31            [12] 1477 	mov	a,#0x31
      000216 2F               [12] 1478 	add	a,r7
      000217 F5 82            [12] 1479 	mov	dpl,a
      000219 80 33            [24] 1480 	sjmp	00116$
      00021B                       1481 00115$:
                           000165  1482 	C$i2c.h$121$1$78 ==.
                                   1483 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:121: for(i=0; i<8; i++)             //loop 8 times
      00021B 0E               [12] 1484 	inc	r6
      00021C 8E 07            [24] 1485 	mov	ar7,r6
      00021E BE 08 00         [24] 1486 	cjne	r6,#0x08,00147$
      000221                       1487 00147$:
      000221 40 D0            [24] 1488 	jc	00114$
                           00016D  1489 	C$i2c.h$127$1$78 ==.
                                   1490 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:127: if(Data[1] & 0x01) return '9'; //if the value is equal to 9 return 9.
      000223 E5 26            [12] 1491 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000225 30 E0 05         [24] 1492 	jnb	acc.0,00107$
      000228 75 82 39         [24] 1493 	mov	dpl,#0x39
      00022B 80 21            [24] 1494 	sjmp	00116$
      00022D                       1495 00107$:
                           000177  1496 	C$i2c.h$129$1$78 ==.
                                   1497 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:129: if(Data[1] & 0x02) return '*'; //if the value is equal to the star.
      00022D E5 26            [12] 1498 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      00022F 30 E1 05         [24] 1499 	jnb	acc.1,00109$
      000232 75 82 2A         [24] 1500 	mov	dpl,#0x2A
      000235 80 17            [24] 1501 	sjmp	00116$
      000237                       1502 00109$:
                           000181  1503 	C$i2c.h$131$1$78 ==.
                                   1504 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:131: if(Data[1] & 0x04) return '0'; //if the value is equal to the 0 key
      000237 E5 26            [12] 1505 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000239 30 E2 05         [24] 1506 	jnb	acc.2,00111$
      00023C 75 82 30         [24] 1507 	mov	dpl,#0x30
      00023F 80 0D            [24] 1508 	sjmp	00116$
      000241                       1509 00111$:
                           00018B  1510 	C$i2c.h$133$1$78 ==.
                                   1511 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:133: if(Data[1] & 0x08) return '#'; //if the value is equal to the pound key
      000241 E5 26            [12] 1512 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000243 30 E3 05         [24] 1513 	jnb	acc.3,00113$
      000246 75 82 23         [24] 1514 	mov	dpl,#0x23
      000249 80 03            [24] 1515 	sjmp	00116$
      00024B                       1516 00113$:
                           000195  1517 	C$i2c.h$135$1$78 ==.
                                   1518 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:135: return -1;                     //else return a numerical -1 (0xFF)
      00024B 75 82 FF         [24] 1519 	mov	dpl,#0xFF
      00024E                       1520 00116$:
                           000198  1521 	C$i2c.h$136$1$78 ==.
                           000198  1522 	XG$read_keypad$0$0 ==.
      00024E 22               [24] 1523 	ret
                                   1524 ;------------------------------------------------------------
                                   1525 ;Allocation info for local variables in function 'kpd_input'
                                   1526 ;------------------------------------------------------------
                                   1527 ;mode                      Allocated to registers r7 
                                   1528 ;sum                       Allocated to registers r5 r6 
                                   1529 ;key                       Allocated to registers r3 
                                   1530 ;i                         Allocated to registers 
                                   1531 ;------------------------------------------------------------
                           000199  1532 	G$kpd_input$0$0 ==.
                           000199  1533 	C$i2c.h$148$1$78 ==.
                                   1534 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:148: unsigned int kpd_input(char mode)
                                   1535 ;	-----------------------------------------
                                   1536 ;	 function kpd_input
                                   1537 ;	-----------------------------------------
      00024F                       1538 _kpd_input:
      00024F AF 82            [24] 1539 	mov	r7,dpl
                           00019B  1540 	C$i2c.h$153$1$81 ==.
                                   1541 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:153: sum = 0;
                           00019B  1542 	C$i2c.h$156$1$81 ==.
                                   1543 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:156: if(mode==0)lcd_print("\nType digits; end w/#");
      000251 E4               [12] 1544 	clr	a
      000252 FD               [12] 1545 	mov	r5,a
      000253 FE               [12] 1546 	mov	r6,a
      000254 EF               [12] 1547 	mov	a,r7
      000255 70 1D            [24] 1548 	jnz	00102$
      000257 C0 06            [24] 1549 	push	ar6
      000259 C0 05            [24] 1550 	push	ar5
      00025B 74 52            [12] 1551 	mov	a,#___str_0
      00025D C0 E0            [24] 1552 	push	acc
      00025F 74 0E            [12] 1553 	mov	a,#(___str_0 >> 8)
      000261 C0 E0            [24] 1554 	push	acc
      000263 74 80            [12] 1555 	mov	a,#0x80
      000265 C0 E0            [24] 1556 	push	acc
      000267 12 01 12         [24] 1557 	lcall	_lcd_print
      00026A 15 81            [12] 1558 	dec	sp
      00026C 15 81            [12] 1559 	dec	sp
      00026E 15 81            [12] 1560 	dec	sp
      000270 D0 05            [24] 1561 	pop	ar5
      000272 D0 06            [24] 1562 	pop	ar6
      000274                       1563 00102$:
                           0001BE  1564 	C$i2c.h$158$1$81 ==.
                                   1565 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:158: lcd_print("     %c%c%c%c%c",0x08,0x08,0x08,0x08,0x08);
      000274 C0 06            [24] 1566 	push	ar6
      000276 C0 05            [24] 1567 	push	ar5
      000278 74 08            [12] 1568 	mov	a,#0x08
      00027A C0 E0            [24] 1569 	push	acc
      00027C E4               [12] 1570 	clr	a
      00027D C0 E0            [24] 1571 	push	acc
      00027F 74 08            [12] 1572 	mov	a,#0x08
      000281 C0 E0            [24] 1573 	push	acc
      000283 E4               [12] 1574 	clr	a
      000284 C0 E0            [24] 1575 	push	acc
      000286 74 08            [12] 1576 	mov	a,#0x08
      000288 C0 E0            [24] 1577 	push	acc
      00028A E4               [12] 1578 	clr	a
      00028B C0 E0            [24] 1579 	push	acc
      00028D 74 08            [12] 1580 	mov	a,#0x08
      00028F C0 E0            [24] 1581 	push	acc
      000291 E4               [12] 1582 	clr	a
      000292 C0 E0            [24] 1583 	push	acc
      000294 74 08            [12] 1584 	mov	a,#0x08
      000296 C0 E0            [24] 1585 	push	acc
      000298 E4               [12] 1586 	clr	a
      000299 C0 E0            [24] 1587 	push	acc
      00029B 74 68            [12] 1588 	mov	a,#___str_1
      00029D C0 E0            [24] 1589 	push	acc
      00029F 74 0E            [12] 1590 	mov	a,#(___str_1 >> 8)
      0002A1 C0 E0            [24] 1591 	push	acc
      0002A3 74 80            [12] 1592 	mov	a,#0x80
      0002A5 C0 E0            [24] 1593 	push	acc
      0002A7 12 01 12         [24] 1594 	lcall	_lcd_print
      0002AA E5 81            [12] 1595 	mov	a,sp
      0002AC 24 F3            [12] 1596 	add	a,#0xf3
      0002AE F5 81            [12] 1597 	mov	sp,a
                           0001FA  1598 	C$i2c.h$160$1$81 ==.
                                   1599 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:160: delay_time(500000);	//Add 20ms delay before reading i2c in loop
      0002B0 90 A1 20         [24] 1600 	mov	dptr,#0xA120
      0002B3 75 F0 07         [24] 1601 	mov	b,#0x07
      0002B6 E4               [12] 1602 	clr	a
      0002B7 12 03 C3         [24] 1603 	lcall	_delay_time
      0002BA D0 05            [24] 1604 	pop	ar5
      0002BC D0 06            [24] 1605 	pop	ar6
                           000208  1606 	C$i2c.h$164$1$81 ==.
                                   1607 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:164: for(i=0; i<5; i++)
      0002BE 7F 00            [12] 1608 	mov	r7,#0x00
                           00020A  1609 	C$i2c.h$166$3$84 ==.
                                   1610 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:166: while(((key=read_keypad()) == -1) || (key == '*'))delay_time(10000);
      0002C0                       1611 00104$:
      0002C0 C0 07            [24] 1612 	push	ar7
      0002C2 C0 06            [24] 1613 	push	ar6
      0002C4 C0 05            [24] 1614 	push	ar5
      0002C6 12 01 D0         [24] 1615 	lcall	_read_keypad
      0002C9 AC 82            [24] 1616 	mov	r4,dpl
      0002CB D0 05            [24] 1617 	pop	ar5
      0002CD D0 06            [24] 1618 	pop	ar6
      0002CF D0 07            [24] 1619 	pop	ar7
      0002D1 8C 03            [24] 1620 	mov	ar3,r4
      0002D3 BC FF 02         [24] 1621 	cjne	r4,#0xFF,00146$
      0002D6 80 03            [24] 1622 	sjmp	00105$
      0002D8                       1623 00146$:
      0002D8 BB 2A 17         [24] 1624 	cjne	r3,#0x2A,00106$
      0002DB                       1625 00105$:
      0002DB 90 27 10         [24] 1626 	mov	dptr,#0x2710
      0002DE E4               [12] 1627 	clr	a
      0002DF F5 F0            [12] 1628 	mov	b,a
      0002E1 C0 07            [24] 1629 	push	ar7
      0002E3 C0 06            [24] 1630 	push	ar6
      0002E5 C0 05            [24] 1631 	push	ar5
      0002E7 12 03 C3         [24] 1632 	lcall	_delay_time
      0002EA D0 05            [24] 1633 	pop	ar5
      0002EC D0 06            [24] 1634 	pop	ar6
      0002EE D0 07            [24] 1635 	pop	ar7
      0002F0 80 CE            [24] 1636 	sjmp	00104$
      0002F2                       1637 00106$:
                           00023C  1638 	C$i2c.h$167$2$82 ==.
                                   1639 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:167: if(key == '#')
      0002F2 BB 23 2A         [24] 1640 	cjne	r3,#0x23,00114$
                           00023F  1641 	C$i2c.h$169$3$83 ==.
                                   1642 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:169: while(read_keypad() == '#')delay_time(10000);
      0002F5                       1643 00107$:
      0002F5 C0 06            [24] 1644 	push	ar6
      0002F7 C0 05            [24] 1645 	push	ar5
      0002F9 12 01 D0         [24] 1646 	lcall	_read_keypad
      0002FC AC 82            [24] 1647 	mov	r4,dpl
      0002FE D0 05            [24] 1648 	pop	ar5
      000300 D0 06            [24] 1649 	pop	ar6
      000302 BC 23 13         [24] 1650 	cjne	r4,#0x23,00109$
      000305 90 27 10         [24] 1651 	mov	dptr,#0x2710
      000308 E4               [12] 1652 	clr	a
      000309 F5 F0            [12] 1653 	mov	b,a
      00030B C0 06            [24] 1654 	push	ar6
      00030D C0 05            [24] 1655 	push	ar5
      00030F 12 03 C3         [24] 1656 	lcall	_delay_time
      000312 D0 05            [24] 1657 	pop	ar5
      000314 D0 06            [24] 1658 	pop	ar6
      000316 80 DD            [24] 1659 	sjmp	00107$
      000318                       1660 00109$:
                           000262  1661 	C$i2c.h$170$3$83 ==.
                                   1662 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:170: return sum;
      000318 8D 82            [24] 1663 	mov	dpl,r5
      00031A 8E 83            [24] 1664 	mov	dph,r6
      00031C 02 03 C2         [24] 1665 	ljmp	00119$
      00031F                       1666 00114$:
                           000269  1667 	C$i2c.h$174$3$84 ==.
                                   1668 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:174: lcd_print("%c", key);
      00031F EB               [12] 1669 	mov	a,r3
      000320 FA               [12] 1670 	mov	r2,a
      000321 33               [12] 1671 	rlc	a
      000322 95 E0            [12] 1672 	subb	a,acc
      000324 FC               [12] 1673 	mov	r4,a
      000325 C0 07            [24] 1674 	push	ar7
      000327 C0 06            [24] 1675 	push	ar6
      000329 C0 05            [24] 1676 	push	ar5
      00032B C0 04            [24] 1677 	push	ar4
      00032D C0 03            [24] 1678 	push	ar3
      00032F C0 02            [24] 1679 	push	ar2
      000331 C0 02            [24] 1680 	push	ar2
      000333 C0 04            [24] 1681 	push	ar4
      000335 74 78            [12] 1682 	mov	a,#___str_2
      000337 C0 E0            [24] 1683 	push	acc
      000339 74 0E            [12] 1684 	mov	a,#(___str_2 >> 8)
      00033B C0 E0            [24] 1685 	push	acc
      00033D 74 80            [12] 1686 	mov	a,#0x80
      00033F C0 E0            [24] 1687 	push	acc
      000341 12 01 12         [24] 1688 	lcall	_lcd_print
      000344 E5 81            [12] 1689 	mov	a,sp
      000346 24 FB            [12] 1690 	add	a,#0xfb
      000348 F5 81            [12] 1691 	mov	sp,a
      00034A D0 02            [24] 1692 	pop	ar2
      00034C D0 03            [24] 1693 	pop	ar3
      00034E D0 04            [24] 1694 	pop	ar4
      000350 D0 05            [24] 1695 	pop	ar5
      000352 D0 06            [24] 1696 	pop	ar6
                           00029E  1697 	C$i2c.h$175$1$81 ==.
                                   1698 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:175: sum = sum*10 + key - '0';
      000354 8D 11            [24] 1699 	mov	__mulint_PARM_2,r5
      000356 8E 12            [24] 1700 	mov	(__mulint_PARM_2 + 1),r6
      000358 90 00 0A         [24] 1701 	mov	dptr,#0x000A
      00035B C0 04            [24] 1702 	push	ar4
      00035D C0 03            [24] 1703 	push	ar3
      00035F C0 02            [24] 1704 	push	ar2
      000361 12 07 02         [24] 1705 	lcall	__mulint
      000364 A8 82            [24] 1706 	mov	r0,dpl
      000366 A9 83            [24] 1707 	mov	r1,dph
      000368 D0 02            [24] 1708 	pop	ar2
      00036A D0 03            [24] 1709 	pop	ar3
      00036C D0 04            [24] 1710 	pop	ar4
      00036E D0 07            [24] 1711 	pop	ar7
      000370 EA               [12] 1712 	mov	a,r2
      000371 28               [12] 1713 	add	a,r0
      000372 F8               [12] 1714 	mov	r0,a
      000373 EC               [12] 1715 	mov	a,r4
      000374 39               [12] 1716 	addc	a,r1
      000375 F9               [12] 1717 	mov	r1,a
      000376 E8               [12] 1718 	mov	a,r0
      000377 24 D0            [12] 1719 	add	a,#0xD0
      000379 FD               [12] 1720 	mov	r5,a
      00037A E9               [12] 1721 	mov	a,r1
      00037B 34 FF            [12] 1722 	addc	a,#0xFF
      00037D FE               [12] 1723 	mov	r6,a
                           0002C8  1724 	C$i2c.h$176$3$84 ==.
                                   1725 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:176: while(read_keypad() == key)delay_time(10000); //wait for key to be released
      00037E                       1726 00110$:
      00037E C0 07            [24] 1727 	push	ar7
      000380 C0 06            [24] 1728 	push	ar6
      000382 C0 05            [24] 1729 	push	ar5
      000384 C0 03            [24] 1730 	push	ar3
      000386 12 01 D0         [24] 1731 	lcall	_read_keypad
      000389 AC 82            [24] 1732 	mov	r4,dpl
      00038B D0 03            [24] 1733 	pop	ar3
      00038D D0 05            [24] 1734 	pop	ar5
      00038F D0 06            [24] 1735 	pop	ar6
      000391 D0 07            [24] 1736 	pop	ar7
      000393 EC               [12] 1737 	mov	a,r4
      000394 B5 03 1B         [24] 1738 	cjne	a,ar3,00118$
      000397 90 27 10         [24] 1739 	mov	dptr,#0x2710
      00039A E4               [12] 1740 	clr	a
      00039B F5 F0            [12] 1741 	mov	b,a
      00039D C0 07            [24] 1742 	push	ar7
      00039F C0 06            [24] 1743 	push	ar6
      0003A1 C0 05            [24] 1744 	push	ar5
      0003A3 C0 03            [24] 1745 	push	ar3
      0003A5 12 03 C3         [24] 1746 	lcall	_delay_time
      0003A8 D0 03            [24] 1747 	pop	ar3
      0003AA D0 05            [24] 1748 	pop	ar5
      0003AC D0 06            [24] 1749 	pop	ar6
      0003AE D0 07            [24] 1750 	pop	ar7
      0003B0 80 CC            [24] 1751 	sjmp	00110$
      0003B2                       1752 00118$:
                           0002FC  1753 	C$i2c.h$164$1$81 ==.
                                   1754 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:164: for(i=0; i<5; i++)
      0003B2 0F               [12] 1755 	inc	r7
      0003B3 C3               [12] 1756 	clr	c
      0003B4 EF               [12] 1757 	mov	a,r7
      0003B5 64 80            [12] 1758 	xrl	a,#0x80
      0003B7 94 85            [12] 1759 	subb	a,#0x85
      0003B9 50 03            [24] 1760 	jnc	00155$
      0003BB 02 02 C0         [24] 1761 	ljmp	00104$
      0003BE                       1762 00155$:
                           000308  1763 	C$i2c.h$179$1$81 ==.
                                   1764 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:179: return sum;
      0003BE 8D 82            [24] 1765 	mov	dpl,r5
      0003C0 8E 83            [24] 1766 	mov	dph,r6
      0003C2                       1767 00119$:
                           00030C  1768 	C$i2c.h$180$1$81 ==.
                           00030C  1769 	XG$kpd_input$0$0 ==.
      0003C2 22               [24] 1770 	ret
                                   1771 ;------------------------------------------------------------
                                   1772 ;Allocation info for local variables in function 'delay_time'
                                   1773 ;------------------------------------------------------------
                                   1774 ;time_end                  Allocated to registers r4 r5 r6 r7 
                                   1775 ;index                     Allocated to registers 
                                   1776 ;------------------------------------------------------------
                           00030D  1777 	G$delay_time$0$0 ==.
                           00030D  1778 	C$i2c.h$189$1$81 ==.
                                   1779 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:189: void delay_time (unsigned long time_end)
                                   1780 ;	-----------------------------------------
                                   1781 ;	 function delay_time
                                   1782 ;	-----------------------------------------
      0003C3                       1783 _delay_time:
      0003C3 AC 82            [24] 1784 	mov	r4,dpl
      0003C5 AD 83            [24] 1785 	mov	r5,dph
      0003C7 AE F0            [24] 1786 	mov	r6,b
      0003C9 FF               [12] 1787 	mov	r7,a
                           000314  1788 	C$i2c.h$192$1$86 ==.
                                   1789 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:192: for (index = 0; index < time_end; index++); //for loop delay
      0003CA 78 00            [12] 1790 	mov	r0,#0x00
      0003CC 79 00            [12] 1791 	mov	r1,#0x00
      0003CE 7A 00            [12] 1792 	mov	r2,#0x00
      0003D0 7B 00            [12] 1793 	mov	r3,#0x00
      0003D2                       1794 00103$:
      0003D2 C3               [12] 1795 	clr	c
      0003D3 E8               [12] 1796 	mov	a,r0
      0003D4 9C               [12] 1797 	subb	a,r4
      0003D5 E9               [12] 1798 	mov	a,r1
      0003D6 9D               [12] 1799 	subb	a,r5
      0003D7 EA               [12] 1800 	mov	a,r2
      0003D8 9E               [12] 1801 	subb	a,r6
      0003D9 EB               [12] 1802 	mov	a,r3
      0003DA 9F               [12] 1803 	subb	a,r7
      0003DB 50 0F            [24] 1804 	jnc	00105$
      0003DD 08               [12] 1805 	inc	r0
      0003DE B8 00 09         [24] 1806 	cjne	r0,#0x00,00115$
      0003E1 09               [12] 1807 	inc	r1
      0003E2 B9 00 05         [24] 1808 	cjne	r1,#0x00,00115$
      0003E5 0A               [12] 1809 	inc	r2
      0003E6 BA 00 E9         [24] 1810 	cjne	r2,#0x00,00103$
      0003E9 0B               [12] 1811 	inc	r3
      0003EA                       1812 00115$:
      0003EA 80 E6            [24] 1813 	sjmp	00103$
      0003EC                       1814 00105$:
                           000336  1815 	C$i2c.h$193$1$86 ==.
                           000336  1816 	XG$delay_time$0$0 ==.
      0003EC 22               [24] 1817 	ret
                                   1818 ;------------------------------------------------------------
                                   1819 ;Allocation info for local variables in function 'i2c_start'
                                   1820 ;------------------------------------------------------------
                           000337  1821 	G$i2c_start$0$0 ==.
                           000337  1822 	C$i2c.h$196$1$86 ==.
                                   1823 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:196: void i2c_start(void)
                                   1824 ;	-----------------------------------------
                                   1825 ;	 function i2c_start
                                   1826 ;	-----------------------------------------
      0003ED                       1827 _i2c_start:
                           000337  1828 	C$i2c.h$198$1$88 ==.
                                   1829 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:198: while(BUSY);              //Wait until SMBus0 is free
      0003ED                       1830 00101$:
      0003ED 20 C7 FD         [24] 1831 	jb	_BUSY,00101$
                           00033A  1832 	C$i2c.h$199$1$88 ==.
                                   1833 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:199: STA = 1;                  //Set Start Bit
      0003F0 D2 C5            [12] 1834 	setb	_STA
                           00033C  1835 	C$i2c.h$200$1$88 ==.
                                   1836 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:200: while(!SI);               //Wait until start sent
      0003F2                       1837 00104$:
      0003F2 30 C3 FD         [24] 1838 	jnb	_SI,00104$
                           00033F  1839 	C$i2c.h$201$1$88 ==.
                                   1840 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:201: STA = 0;                  //Clear start bit
      0003F5 C2 C5            [12] 1841 	clr	_STA
                           000341  1842 	C$i2c.h$202$1$88 ==.
                                   1843 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:202: SI = 0;                   //Clear SI
      0003F7 C2 C3            [12] 1844 	clr	_SI
                           000343  1845 	C$i2c.h$203$1$88 ==.
                           000343  1846 	XG$i2c_start$0$0 ==.
      0003F9 22               [24] 1847 	ret
                                   1848 ;------------------------------------------------------------
                                   1849 ;Allocation info for local variables in function 'i2c_write'
                                   1850 ;------------------------------------------------------------
                                   1851 ;output_data               Allocated to registers 
                                   1852 ;------------------------------------------------------------
                           000344  1853 	G$i2c_write$0$0 ==.
                           000344  1854 	C$i2c.h$206$1$88 ==.
                                   1855 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:206: void i2c_write(unsigned char output_data)
                                   1856 ;	-----------------------------------------
                                   1857 ;	 function i2c_write
                                   1858 ;	-----------------------------------------
      0003FA                       1859 _i2c_write:
      0003FA 85 82 C2         [24] 1860 	mov	_SMB0DAT,dpl
                           000347  1861 	C$i2c.h$209$1$90 ==.
                                   1862 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:209: while(!SI);               //Wait until send is complete
      0003FD                       1863 00101$:
                           000347  1864 	C$i2c.h$210$1$90 ==.
                                   1865 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:210: SI = 0;                   //Clear SI
      0003FD 10 C3 02         [24] 1866 	jbc	_SI,00112$
      000400 80 FB            [24] 1867 	sjmp	00101$
      000402                       1868 00112$:
                           00034C  1869 	C$i2c.h$211$1$90 ==.
                           00034C  1870 	XG$i2c_write$0$0 ==.
      000402 22               [24] 1871 	ret
                                   1872 ;------------------------------------------------------------
                                   1873 ;Allocation info for local variables in function 'i2c_write_and_stop'
                                   1874 ;------------------------------------------------------------
                                   1875 ;output_data               Allocated to registers 
                                   1876 ;------------------------------------------------------------
                           00034D  1877 	G$i2c_write_and_stop$0$0 ==.
                           00034D  1878 	C$i2c.h$214$1$90 ==.
                                   1879 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:214: void i2c_write_and_stop(unsigned char output_data)
                                   1880 ;	-----------------------------------------
                                   1881 ;	 function i2c_write_and_stop
                                   1882 ;	-----------------------------------------
      000403                       1883 _i2c_write_and_stop:
      000403 85 82 C2         [24] 1884 	mov	_SMB0DAT,dpl
                           000350  1885 	C$i2c.h$217$1$92 ==.
                                   1886 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:217: STO = 1;                  //Set stop bit
      000406 D2 C4            [12] 1887 	setb	_STO
                           000352  1888 	C$i2c.h$218$1$92 ==.
                                   1889 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:218: while(!SI);               //Wait until send is complete
      000408                       1890 00101$:
                           000352  1891 	C$i2c.h$219$1$92 ==.
                                   1892 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:219: SI = 0;                   //clear SI
      000408 10 C3 02         [24] 1893 	jbc	_SI,00112$
      00040B 80 FB            [24] 1894 	sjmp	00101$
      00040D                       1895 00112$:
                           000357  1896 	C$i2c.h$220$1$92 ==.
                           000357  1897 	XG$i2c_write_and_stop$0$0 ==.
      00040D 22               [24] 1898 	ret
                                   1899 ;------------------------------------------------------------
                                   1900 ;Allocation info for local variables in function 'i2c_read'
                                   1901 ;------------------------------------------------------------
                                   1902 ;input_data                Allocated to registers 
                                   1903 ;------------------------------------------------------------
                           000358  1904 	G$i2c_read$0$0 ==.
                           000358  1905 	C$i2c.h$223$1$92 ==.
                                   1906 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:223: unsigned char i2c_read(void)
                                   1907 ;	-----------------------------------------
                                   1908 ;	 function i2c_read
                                   1909 ;	-----------------------------------------
      00040E                       1910 _i2c_read:
                           000358  1911 	C$i2c.h$226$1$94 ==.
                                   1912 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:226: while(!SI);                //Wait until we have data to read
      00040E                       1913 00101$:
      00040E 30 C3 FD         [24] 1914 	jnb	_SI,00101$
                           00035B  1915 	C$i2c.h$227$1$94 ==.
                                   1916 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:227: input_data = SMB0DAT;      //Read the data
      000411 85 C2 82         [24] 1917 	mov	dpl,_SMB0DAT
                           00035E  1918 	C$i2c.h$228$1$94 ==.
                                   1919 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:228: SI = 0;                    //Clear SI
      000414 C2 C3            [12] 1920 	clr	_SI
                           000360  1921 	C$i2c.h$229$1$94 ==.
                                   1922 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:229: return input_data;         //Return the read data
                           000360  1923 	C$i2c.h$230$1$94 ==.
                           000360  1924 	XG$i2c_read$0$0 ==.
      000416 22               [24] 1925 	ret
                                   1926 ;------------------------------------------------------------
                                   1927 ;Allocation info for local variables in function 'i2c_read_and_stop'
                                   1928 ;------------------------------------------------------------
                                   1929 ;input_data                Allocated to registers r7 
                                   1930 ;------------------------------------------------------------
                           000361  1931 	G$i2c_read_and_stop$0$0 ==.
                           000361  1932 	C$i2c.h$233$1$94 ==.
                                   1933 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:233: unsigned char i2c_read_and_stop(void)
                                   1934 ;	-----------------------------------------
                                   1935 ;	 function i2c_read_and_stop
                                   1936 ;	-----------------------------------------
      000417                       1937 _i2c_read_and_stop:
                           000361  1938 	C$i2c.h$236$1$96 ==.
                                   1939 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:236: while(!SI);                //Wait until we have data to read
      000417                       1940 00101$:
      000417 30 C3 FD         [24] 1941 	jnb	_SI,00101$
                           000364  1942 	C$i2c.h$237$1$96 ==.
                                   1943 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:237: input_data = SMB0DAT;      //Read the data
      00041A AF C2            [24] 1944 	mov	r7,_SMB0DAT
                           000366  1945 	C$i2c.h$238$1$96 ==.
                                   1946 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:238: SI = 0;                    //Clear SI
      00041C C2 C3            [12] 1947 	clr	_SI
                           000368  1948 	C$i2c.h$239$1$96 ==.
                                   1949 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:239: STO = 1;                   //Set stop bit
      00041E D2 C4            [12] 1950 	setb	_STO
                           00036A  1951 	C$i2c.h$240$1$96 ==.
                                   1952 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:240: while(!SI);                //Wait for stop
      000420                       1953 00104$:
                           00036A  1954 	C$i2c.h$241$1$96 ==.
                                   1955 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:241: SI = 0;
      000420 10 C3 02         [24] 1956 	jbc	_SI,00122$
      000423 80 FB            [24] 1957 	sjmp	00104$
      000425                       1958 00122$:
                           00036F  1959 	C$i2c.h$242$1$96 ==.
                                   1960 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:242: return input_data;         //Return the read data
      000425 8F 82            [24] 1961 	mov	dpl,r7
                           000371  1962 	C$i2c.h$243$1$96 ==.
                           000371  1963 	XG$i2c_read_and_stop$0$0 ==.
      000427 22               [24] 1964 	ret
                                   1965 ;------------------------------------------------------------
                                   1966 ;Allocation info for local variables in function 'i2c_write_data'
                                   1967 ;------------------------------------------------------------
                                   1968 ;start_reg                 Allocated with name '_i2c_write_data_PARM_2'
                                   1969 ;buffer                    Allocated with name '_i2c_write_data_PARM_3'
                                   1970 ;num_bytes                 Allocated with name '_i2c_write_data_PARM_4'
                                   1971 ;addr                      Allocated to registers r7 
                                   1972 ;i                         Allocated to registers 
                                   1973 ;------------------------------------------------------------
                           000372  1974 	G$i2c_write_data$0$0 ==.
                           000372  1975 	C$i2c.h$246$1$96 ==.
                                   1976 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:246: void i2c_write_data(unsigned char addr, unsigned char start_reg, unsigned char *buffer, unsigned char num_bytes)
                                   1977 ;	-----------------------------------------
                                   1978 ;	 function i2c_write_data
                                   1979 ;	-----------------------------------------
      000428                       1980 _i2c_write_data:
      000428 AF 82            [24] 1981 	mov	r7,dpl
                           000374  1982 	C$i2c.h$250$1$98 ==.
                                   1983 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:250: i2c_start();               //initiate I2C transfer
      00042A C0 07            [24] 1984 	push	ar7
      00042C 12 03 ED         [24] 1985 	lcall	_i2c_start
      00042F D0 07            [24] 1986 	pop	ar7
                           00037B  1987 	C$i2c.h$251$1$98 ==.
                                   1988 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:251: i2c_write(addr & ~0x01);   //write the desired address to the bus
      000431 74 FE            [12] 1989 	mov	a,#0xFE
      000433 5F               [12] 1990 	anl	a,r7
      000434 F5 82            [12] 1991 	mov	dpl,a
      000436 12 03 FA         [24] 1992 	lcall	_i2c_write
                           000383  1993 	C$i2c.h$252$1$98 ==.
                                   1994 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:252: i2c_write(start_reg);      //write the start register to the bus
      000439 85 27 82         [24] 1995 	mov	dpl,_i2c_write_data_PARM_2
      00043C 12 03 FA         [24] 1996 	lcall	_i2c_write
                           000389  1997 	C$i2c.h$253$1$98 ==.
                                   1998 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:253: for(i=0; i<num_bytes-1; i++) //write the data to the register(s)
      00043F 7F 00            [12] 1999 	mov	r7,#0x00
      000441                       2000 00103$:
      000441 AD 2B            [24] 2001 	mov	r5,_i2c_write_data_PARM_4
      000443 7E 00            [12] 2002 	mov	r6,#0x00
      000445 1D               [12] 2003 	dec	r5
      000446 BD FF 01         [24] 2004 	cjne	r5,#0xFF,00114$
      000449 1E               [12] 2005 	dec	r6
      00044A                       2006 00114$:
      00044A 8F 03            [24] 2007 	mov	ar3,r7
      00044C 7C 00            [12] 2008 	mov	r4,#0x00
      00044E C3               [12] 2009 	clr	c
      00044F EB               [12] 2010 	mov	a,r3
      000450 9D               [12] 2011 	subb	a,r5
      000451 EC               [12] 2012 	mov	a,r4
      000452 64 80            [12] 2013 	xrl	a,#0x80
      000454 8E F0            [24] 2014 	mov	b,r6
      000456 63 F0 80         [24] 2015 	xrl	b,#0x80
      000459 95 F0            [12] 2016 	subb	a,b
      00045B 50 1F            [24] 2017 	jnc	00101$
                           0003A7  2018 	C$i2c.h$254$1$98 ==.
                                   2019 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:254: i2c_write(buffer[i]);
      00045D EF               [12] 2020 	mov	a,r7
      00045E 25 28            [12] 2021 	add	a,_i2c_write_data_PARM_3
      000460 FC               [12] 2022 	mov	r4,a
      000461 E4               [12] 2023 	clr	a
      000462 35 29            [12] 2024 	addc	a,(_i2c_write_data_PARM_3 + 1)
      000464 FD               [12] 2025 	mov	r5,a
      000465 AE 2A            [24] 2026 	mov	r6,(_i2c_write_data_PARM_3 + 2)
      000467 8C 82            [24] 2027 	mov	dpl,r4
      000469 8D 83            [24] 2028 	mov	dph,r5
      00046B 8E F0            [24] 2029 	mov	b,r6
      00046D 12 0E 32         [24] 2030 	lcall	__gptrget
      000470 F5 82            [12] 2031 	mov	dpl,a
      000472 C0 07            [24] 2032 	push	ar7
      000474 12 03 FA         [24] 2033 	lcall	_i2c_write
      000477 D0 07            [24] 2034 	pop	ar7
                           0003C3  2035 	C$i2c.h$253$1$98 ==.
                                   2036 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:253: for(i=0; i<num_bytes-1; i++) //write the data to the register(s)
      000479 0F               [12] 2037 	inc	r7
      00047A 80 C5            [24] 2038 	sjmp	00103$
      00047C                       2039 00101$:
                           0003C6  2040 	C$i2c.h$255$1$98 ==.
                                   2041 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:255: i2c_write_and_stop(buffer[num_bytes-1]); //Stop transfer
      00047C AE 2B            [24] 2042 	mov	r6,_i2c_write_data_PARM_4
      00047E 7F 00            [12] 2043 	mov	r7,#0x00
      000480 1E               [12] 2044 	dec	r6
      000481 BE FF 01         [24] 2045 	cjne	r6,#0xFF,00116$
      000484 1F               [12] 2046 	dec	r7
      000485                       2047 00116$:
      000485 EE               [12] 2048 	mov	a,r6
      000486 25 28            [12] 2049 	add	a,_i2c_write_data_PARM_3
      000488 FE               [12] 2050 	mov	r6,a
      000489 EF               [12] 2051 	mov	a,r7
      00048A 35 29            [12] 2052 	addc	a,(_i2c_write_data_PARM_3 + 1)
      00048C FF               [12] 2053 	mov	r7,a
      00048D AD 2A            [24] 2054 	mov	r5,(_i2c_write_data_PARM_3 + 2)
      00048F 8E 82            [24] 2055 	mov	dpl,r6
      000491 8F 83            [24] 2056 	mov	dph,r7
      000493 8D F0            [24] 2057 	mov	b,r5
      000495 12 0E 32         [24] 2058 	lcall	__gptrget
      000498 F5 82            [12] 2059 	mov	dpl,a
      00049A 12 04 03         [24] 2060 	lcall	_i2c_write_and_stop
                           0003E7  2061 	C$i2c.h$256$1$98 ==.
                           0003E7  2062 	XG$i2c_write_data$0$0 ==.
      00049D 22               [24] 2063 	ret
                                   2064 ;------------------------------------------------------------
                                   2065 ;Allocation info for local variables in function 'i2c_read_data'
                                   2066 ;------------------------------------------------------------
                                   2067 ;start_reg                 Allocated with name '_i2c_read_data_PARM_2'
                                   2068 ;buffer                    Allocated with name '_i2c_read_data_PARM_3'
                                   2069 ;num_bytes                 Allocated with name '_i2c_read_data_PARM_4'
                                   2070 ;addr                      Allocated to registers r7 
                                   2071 ;j                         Allocated to registers 
                                   2072 ;------------------------------------------------------------
                           0003E8  2073 	G$i2c_read_data$0$0 ==.
                           0003E8  2074 	C$i2c.h$259$1$98 ==.
                                   2075 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:259: void i2c_read_data(unsigned char addr, unsigned char start_reg, unsigned char *buffer, unsigned char num_bytes)
                                   2076 ;	-----------------------------------------
                                   2077 ;	 function i2c_read_data
                                   2078 ;	-----------------------------------------
      00049E                       2079 _i2c_read_data:
      00049E AF 82            [24] 2080 	mov	r7,dpl
                           0003EA  2081 	C$i2c.h$262$1$100 ==.
                                   2082 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:262: i2c_start();               //Start I2C transfer
      0004A0 C0 07            [24] 2083 	push	ar7
      0004A2 12 03 ED         [24] 2084 	lcall	_i2c_start
      0004A5 D0 07            [24] 2085 	pop	ar7
                           0003F1  2086 	C$i2c.h$263$1$100 ==.
                                   2087 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:263: i2c_write(addr & ~0x01);   //Write address of device that will be written to, send 0
      0004A7 8F 06            [24] 2088 	mov	ar6,r7
      0004A9 74 FE            [12] 2089 	mov	a,#0xFE
      0004AB 5E               [12] 2090 	anl	a,r6
      0004AC F5 82            [12] 2091 	mov	dpl,a
      0004AE C0 07            [24] 2092 	push	ar7
      0004B0 12 03 FA         [24] 2093 	lcall	_i2c_write
                           0003FD  2094 	C$i2c.h$264$1$100 ==.
                                   2095 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:264: i2c_write_and_stop(start_reg); //Write & stop the 1st register to be read
      0004B3 85 2C 82         [24] 2096 	mov	dpl,_i2c_read_data_PARM_2
      0004B6 12 04 03         [24] 2097 	lcall	_i2c_write_and_stop
                           000403  2098 	C$i2c.h$265$1$100 ==.
                                   2099 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:265: i2c_start();               //Start I2C transfer
      0004B9 12 03 ED         [24] 2100 	lcall	_i2c_start
      0004BC D0 07            [24] 2101 	pop	ar7
                           000408  2102 	C$i2c.h$266$1$100 ==.
                                   2103 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:266: i2c_write(addr | 0x01);    //Write address again, this time indicating a read operation
      0004BE 74 01            [12] 2104 	mov	a,#0x01
      0004C0 4F               [12] 2105 	orl	a,r7
      0004C1 F5 82            [12] 2106 	mov	dpl,a
      0004C3 12 03 FA         [24] 2107 	lcall	_i2c_write
                           000410  2108 	C$i2c.h$267$1$100 ==.
                                   2109 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:267: for(j = 0; j < num_bytes - 1; j++)
      0004C6 7F 00            [12] 2110 	mov	r7,#0x00
      0004C8                       2111 00103$:
      0004C8 AD 30            [24] 2112 	mov	r5,_i2c_read_data_PARM_4
      0004CA 7E 00            [12] 2113 	mov	r6,#0x00
      0004CC 1D               [12] 2114 	dec	r5
      0004CD BD FF 01         [24] 2115 	cjne	r5,#0xFF,00114$
      0004D0 1E               [12] 2116 	dec	r6
      0004D1                       2117 00114$:
      0004D1 8F 03            [24] 2118 	mov	ar3,r7
      0004D3 7C 00            [12] 2119 	mov	r4,#0x00
      0004D5 C3               [12] 2120 	clr	c
      0004D6 EB               [12] 2121 	mov	a,r3
      0004D7 9D               [12] 2122 	subb	a,r5
      0004D8 EC               [12] 2123 	mov	a,r4
      0004D9 64 80            [12] 2124 	xrl	a,#0x80
      0004DB 8E F0            [24] 2125 	mov	b,r6
      0004DD 63 F0 80         [24] 2126 	xrl	b,#0x80
      0004E0 95 F0            [12] 2127 	subb	a,b
      0004E2 50 2E            [24] 2128 	jnc	00101$
                           00042E  2129 	C$i2c.h$269$2$101 ==.
                                   2130 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:269: AA = 1;                //Set acknowledge bit
      0004E4 D2 C2            [12] 2131 	setb	_AA
                           000430  2132 	C$i2c.h$270$2$101 ==.
                                   2133 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:270: buffer[j] = i2c_read();//Read data, save it in buffer
      0004E6 EF               [12] 2134 	mov	a,r7
      0004E7 25 2D            [12] 2135 	add	a,_i2c_read_data_PARM_3
      0004E9 FC               [12] 2136 	mov	r4,a
      0004EA E4               [12] 2137 	clr	a
      0004EB 35 2E            [12] 2138 	addc	a,(_i2c_read_data_PARM_3 + 1)
      0004ED FD               [12] 2139 	mov	r5,a
      0004EE AE 2F            [24] 2140 	mov	r6,(_i2c_read_data_PARM_3 + 2)
      0004F0 C0 07            [24] 2141 	push	ar7
      0004F2 C0 06            [24] 2142 	push	ar6
      0004F4 C0 05            [24] 2143 	push	ar5
      0004F6 C0 04            [24] 2144 	push	ar4
      0004F8 12 04 0E         [24] 2145 	lcall	_i2c_read
      0004FB AB 82            [24] 2146 	mov	r3,dpl
      0004FD D0 04            [24] 2147 	pop	ar4
      0004FF D0 05            [24] 2148 	pop	ar5
      000501 D0 06            [24] 2149 	pop	ar6
      000503 D0 07            [24] 2150 	pop	ar7
      000505 8C 82            [24] 2151 	mov	dpl,r4
      000507 8D 83            [24] 2152 	mov	dph,r5
      000509 8E F0            [24] 2153 	mov	b,r6
      00050B EB               [12] 2154 	mov	a,r3
      00050C 12 06 E7         [24] 2155 	lcall	__gptrput
                           000459  2156 	C$i2c.h$267$1$100 ==.
                                   2157 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:267: for(j = 0; j < num_bytes - 1; j++)
      00050F 0F               [12] 2158 	inc	r7
      000510 80 B6            [24] 2159 	sjmp	00103$
      000512                       2160 00101$:
                           00045C  2161 	C$i2c.h$272$1$100 ==.
                                   2162 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:272: AA = 0;
      000512 C2 C2            [12] 2163 	clr	_AA
                           00045E  2164 	C$i2c.h$273$1$100 ==.
                                   2165 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:273: buffer[num_bytes - 1] = i2c_read_and_stop(); //Read the last byte and stop, save it in the buffer
      000514 AE 30            [24] 2166 	mov	r6,_i2c_read_data_PARM_4
      000516 7F 00            [12] 2167 	mov	r7,#0x00
      000518 1E               [12] 2168 	dec	r6
      000519 BE FF 01         [24] 2169 	cjne	r6,#0xFF,00116$
      00051C 1F               [12] 2170 	dec	r7
      00051D                       2171 00116$:
      00051D EE               [12] 2172 	mov	a,r6
      00051E 25 2D            [12] 2173 	add	a,_i2c_read_data_PARM_3
      000520 FE               [12] 2174 	mov	r6,a
      000521 EF               [12] 2175 	mov	a,r7
      000522 35 2E            [12] 2176 	addc	a,(_i2c_read_data_PARM_3 + 1)
      000524 FF               [12] 2177 	mov	r7,a
      000525 AD 2F            [24] 2178 	mov	r5,(_i2c_read_data_PARM_3 + 2)
      000527 C0 07            [24] 2179 	push	ar7
      000529 C0 06            [24] 2180 	push	ar6
      00052B C0 05            [24] 2181 	push	ar5
      00052D 12 04 17         [24] 2182 	lcall	_i2c_read_and_stop
      000530 AC 82            [24] 2183 	mov	r4,dpl
      000532 D0 05            [24] 2184 	pop	ar5
      000534 D0 06            [24] 2185 	pop	ar6
      000536 D0 07            [24] 2186 	pop	ar7
      000538 8E 82            [24] 2187 	mov	dpl,r6
      00053A 8F 83            [24] 2188 	mov	dph,r7
      00053C 8D F0            [24] 2189 	mov	b,r5
      00053E EC               [12] 2190 	mov	a,r4
      00053F 12 06 E7         [24] 2191 	lcall	__gptrput
                           00048C  2192 	C$i2c.h$274$1$100 ==.
                           00048C  2193 	XG$i2c_read_data$0$0 ==.
      000542 22               [24] 2194 	ret
                                   2195 ;------------------------------------------------------------
                                   2196 ;Allocation info for local variables in function 'Accel_Init'
                                   2197 ;------------------------------------------------------------
                                   2198 ;Data2                     Allocated with name '_Accel_Init_Data2_1_103'
                                   2199 ;------------------------------------------------------------
                           00048D  2200 	G$Accel_Init$0$0 ==.
                           00048D  2201 	C$i2c.h$283$1$100 ==.
                                   2202 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:283: void Accel_Init(void)
                                   2203 ;	-----------------------------------------
                                   2204 ;	 function Accel_Init
                                   2205 ;	-----------------------------------------
      000543                       2206 _Accel_Init:
                           00048D  2207 	C$i2c.h$287$1$103 ==.
                                   2208 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:287: Data2[0]=0x23;	//normal power mode, 50Hz ODR, y & x axes enabled
      000543 75 31 23         [24] 2209 	mov	_Accel_Init_Data2_1_103,#0x23
                           000490  2210 	C$i2c.h$289$1$103 ==.
                                   2211 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:289: i2c_write_data(addr_accel, 0x20, Data2, 1);
      000546 75 28 31         [24] 2212 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      000549 75 29 00         [24] 2213 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      00054C 75 2A 40         [24] 2214 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      00054F 75 27 20         [24] 2215 	mov	_i2c_write_data_PARM_2,#0x20
      000552 75 2B 01         [24] 2216 	mov	_i2c_write_data_PARM_4,#0x01
      000555 75 82 30         [24] 2217 	mov	dpl,#0x30
      000558 12 04 28         [24] 2218 	lcall	_i2c_write_data
                           0004A5  2219 	C$i2c.h$290$1$103 ==.
                                   2220 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:290: Data2[0]=0x00;	//Default - no filtering
      00055B 75 31 00         [24] 2221 	mov	_Accel_Init_Data2_1_103,#0x00
                           0004A8  2222 	C$i2c.h$292$1$103 ==.
                                   2223 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:292: i2c_write_data(addr_accel, 0x21, Data2, 1);
      00055E 75 28 31         [24] 2224 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      000561 75 29 00         [24] 2225 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      000564 75 2A 40         [24] 2226 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000567 75 27 21         [24] 2227 	mov	_i2c_write_data_PARM_2,#0x21
      00056A 75 2B 01         [24] 2228 	mov	_i2c_write_data_PARM_4,#0x01
      00056D 75 82 30         [24] 2229 	mov	dpl,#0x30
      000570 12 04 28         [24] 2230 	lcall	_i2c_write_data
                           0004BD  2231 	C$i2c.h$293$1$103 ==.
                                   2232 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:293: Data2[0]=0x00;	//default - no interrupts enabled
      000573 75 31 00         [24] 2233 	mov	_Accel_Init_Data2_1_103,#0x00
                           0004C0  2234 	C$i2c.h$294$1$103 ==.
                                   2235 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:294: i2c_write_data(addr_accel, 0x22, Data2, 1);
      000576 75 28 31         [24] 2236 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      000579 75 29 00         [24] 2237 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      00057C 75 2A 40         [24] 2238 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      00057F 75 27 22         [24] 2239 	mov	_i2c_write_data_PARM_2,#0x22
      000582 75 2B 01         [24] 2240 	mov	_i2c_write_data_PARM_4,#0x01
      000585 75 82 30         [24] 2241 	mov	dpl,#0x30
      000588 12 04 28         [24] 2242 	lcall	_i2c_write_data
                           0004D5  2243 	C$i2c.h$298$1$103 ==.
                           0004D5  2244 	XG$Accel_Init$0$0 ==.
      00058B 22               [24] 2245 	ret
                                   2246 ;------------------------------------------------------------
                                   2247 ;Allocation info for local variables in function 'main'
                                   2248 ;------------------------------------------------------------
                           0004D6  2249 	G$main$0$0 ==.
                           0004D6  2250 	C$lab3_2steering.c$33$1$103 ==.
                                   2251 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:33: void main(void)
                                   2252 ;	-----------------------------------------
                                   2253 ;	 function main
                                   2254 ;	-----------------------------------------
      00058C                       2255 _main:
                           0004D6  2256 	C$lab3_2steering.c$36$1$111 ==.
                                   2257 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:36: Sys_Init();
      00058C 12 00 E6         [24] 2258 	lcall	_Sys_Init
                           0004D9  2259 	C$lab3_2steering.c$37$1$111 ==.
                                   2260 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:37: putchar(' '); //the quotes in this line may not format correctly
      00058F 75 82 20         [24] 2261 	mov	dpl,#0x20
      000592 12 00 F9         [24] 2262 	lcall	_putchar
                           0004DF  2263 	C$lab3_2steering.c$38$1$111 ==.
                                   2264 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:38: Port_Init();
      000595 12 06 07         [24] 2265 	lcall	_Port_Init
                           0004E2  2266 	C$lab3_2steering.c$39$1$111 ==.
                                   2267 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:39: XBR0_Init();
      000598 12 06 38         [24] 2268 	lcall	_XBR0_Init
                           0004E5  2269 	C$lab3_2steering.c$40$1$111 ==.
                                   2270 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:40: PCA_Init();
      00059B 12 06 42         [24] 2271 	lcall	_PCA_Init
                           0004E8  2272 	C$lab3_2steering.c$41$1$111 ==.
                                   2273 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:41: SMB_Init();
      00059E 12 06 3C         [24] 2274 	lcall	_SMB_Init
                           0004EB  2275 	C$lab3_2steering.c$44$1$111 ==.
                                   2276 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:44: printf("Embedded Control Steering Calibration\n");
      0005A1 74 7B            [12] 2277 	mov	a,#___str_3
      0005A3 C0 E0            [24] 2278 	push	acc
      0005A5 74 0E            [12] 2279 	mov	a,#(___str_3 >> 8)
      0005A7 C0 E0            [24] 2280 	push	acc
      0005A9 74 80            [12] 2281 	mov	a,#0x80
      0005AB C0 E0            [24] 2282 	push	acc
      0005AD 12 08 3E         [24] 2283 	lcall	_printf
      0005B0 15 81            [12] 2284 	dec	sp
      0005B2 15 81            [12] 2285 	dec	sp
      0005B4 15 81            [12] 2286 	dec	sp
                           000500  2287 	C$lab3_2steering.c$48$1$111 ==.
                                   2288 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:48: STR_PW = PW_CENTER_STR;
      0005B6 75 32 CD         [24] 2289 	mov	_STR_PW,#0xCD
      0005B9 75 33 0A         [24] 2290 	mov	(_STR_PW + 1),#0x0A
                           000506  2291 	C$lab3_2steering.c$50$1$111 ==.
                                   2292 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:50: PCA0CPL0 = 0xFFFF - STR_PW;
      0005BC 75 EA 32         [24] 2293 	mov	_PCA0CPL0,#0x32
                           000509  2294 	C$lab3_2steering.c$51$1$111 ==.
                                   2295 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:51: PCA0CPH0 = (0xFFFF - STR_PW) >> 8;
      0005BF 75 FA F5         [24] 2296 	mov	_PCA0CPH0,#0xF5
                           00050C  2297 	C$lab3_2steering.c$52$1$111 ==.
                                   2298 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:52: count=0;
      0005C2 E4               [12] 2299 	clr	a
      0005C3 F5 34            [12] 2300 	mov	_count,a
      0005C5 F5 35            [12] 2301 	mov	(_count + 1),a
                           000511  2302 	C$lab3_2steering.c$53$1$111 ==.
                                   2303 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:53: while (count < 50);
      0005C7                       2304 00101$:
      0005C7 C3               [12] 2305 	clr	c
      0005C8 E5 34            [12] 2306 	mov	a,_count
      0005CA 94 32            [12] 2307 	subb	a,#0x32
      0005CC E5 35            [12] 2308 	mov	a,(_count + 1)
      0005CE 94 00            [12] 2309 	subb	a,#0x00
      0005D0 40 F5            [24] 2310 	jc	00101$
                           00051C  2311 	C$lab3_2steering.c$54$1$111 ==.
                                   2312 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:54: while (1)
      0005D2                       2313 00108$:
                           00051C  2314 	C$lab3_2steering.c$56$2$112 ==.
                                   2315 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:56: count =0;
      0005D2 E4               [12] 2316 	clr	a
      0005D3 F5 34            [12] 2317 	mov	_count,a
      0005D5 F5 35            [12] 2318 	mov	(_count + 1),a
                           000521  2319 	C$lab3_2steering.c$57$2$112 ==.
                                   2320 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:57: while (count < 2);
      0005D7                       2321 00104$:
      0005D7 C3               [12] 2322 	clr	c
      0005D8 E5 34            [12] 2323 	mov	a,_count
      0005DA 94 02            [12] 2324 	subb	a,#0x02
      0005DC E5 35            [12] 2325 	mov	a,(_count + 1)
      0005DE 94 00            [12] 2326 	subb	a,#0x00
      0005E0 40 F5            [24] 2327 	jc	00104$
                           00052C  2328 	C$lab3_2steering.c$58$2$112 ==.
                                   2329 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:58: answer = ReadCompass();
      0005E2 12 06 12         [24] 2330 	lcall	_ReadCompass
      0005E5 85 82 37         [24] 2331 	mov	_answer,dpl
      0005E8 85 83 38         [24] 2332 	mov	(_answer + 1),dph
                           000535  2333 	C$lab3_2steering.c$59$2$112 ==.
                                   2334 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:59: printf("\r\n%d",answer);
      0005EB C0 37            [24] 2335 	push	_answer
      0005ED C0 38            [24] 2336 	push	(_answer + 1)
      0005EF 74 A2            [12] 2337 	mov	a,#___str_4
      0005F1 C0 E0            [24] 2338 	push	acc
      0005F3 74 0E            [12] 2339 	mov	a,#(___str_4 >> 8)
      0005F5 C0 E0            [24] 2340 	push	acc
      0005F7 74 80            [12] 2341 	mov	a,#0x80
      0005F9 C0 E0            [24] 2342 	push	acc
      0005FB 12 08 3E         [24] 2343 	lcall	_printf
      0005FE E5 81            [12] 2344 	mov	a,sp
      000600 24 FB            [12] 2345 	add	a,#0xfb
      000602 F5 81            [12] 2346 	mov	sp,a
      000604 80 CC            [24] 2347 	sjmp	00108$
                           000550  2348 	C$lab3_2steering.c$64$1$111 ==.
                           000550  2349 	XG$main$0$0 ==.
      000606 22               [24] 2350 	ret
                                   2351 ;------------------------------------------------------------
                                   2352 ;Allocation info for local variables in function 'Port_Init'
                                   2353 ;------------------------------------------------------------
                           000551  2354 	G$Port_Init$0$0 ==.
                           000551  2355 	C$lab3_2steering.c$66$1$111 ==.
                                   2356 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:66: void Port_Init()
                                   2357 ;	-----------------------------------------
                                   2358 ;	 function Port_Init
                                   2359 ;	-----------------------------------------
      000607                       2360 _Port_Init:
                           000551  2361 	C$lab3_2steering.c$68$1$113 ==.
                                   2362 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:68: P1MDOUT = 0x0F;  //set output pin for CEX0 or CEX2 in push-pull mode
      000607 75 A5 0F         [24] 2363 	mov	_P1MDOUT,#0x0F
                           000554  2364 	C$lab3_2steering.c$69$1$113 ==.
                                   2365 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:69: P0MDOUT &= ~0x32;
      00060A AF A4            [24] 2366 	mov	r7,_P0MDOUT
      00060C 74 CD            [12] 2367 	mov	a,#0xCD
      00060E 5F               [12] 2368 	anl	a,r7
      00060F F5 A4            [12] 2369 	mov	_P0MDOUT,a
                           00055B  2370 	C$lab3_2steering.c$70$1$113 ==.
                           00055B  2371 	XG$Port_Init$0$0 ==.
      000611 22               [24] 2372 	ret
                                   2373 ;------------------------------------------------------------
                                   2374 ;Allocation info for local variables in function 'ReadCompass'
                                   2375 ;------------------------------------------------------------
                                   2376 ;Data                      Allocated with name '_ReadCompass_Data_1_115'
                                   2377 ;range                     Allocated to registers 
                                   2378 ;addr                      Allocated to registers 
                                   2379 ;------------------------------------------------------------
                           00055C  2380 	G$ReadCompass$0$0 ==.
                           00055C  2381 	C$lab3_2steering.c$72$1$113 ==.
                                   2382 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:72: unsigned int ReadCompass(void)
                                   2383 ;	-----------------------------------------
                                   2384 ;	 function ReadCompass
                                   2385 ;	-----------------------------------------
      000612                       2386 _ReadCompass:
                           00055C  2387 	C$lab3_2steering.c$77$1$115 ==.
                                   2388 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:77: i2c_read_data(addr, 2,Data,2);
      000612 75 2D 39         [24] 2389 	mov	_i2c_read_data_PARM_3,#_ReadCompass_Data_1_115
      000615 75 2E 00         [24] 2390 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      000618 75 2F 40         [24] 2391 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      00061B 75 2C 02         [24] 2392 	mov	_i2c_read_data_PARM_2,#0x02
      00061E 75 30 02         [24] 2393 	mov	_i2c_read_data_PARM_4,#0x02
      000621 75 82 C0         [24] 2394 	mov	dpl,#0xC0
      000624 12 04 9E         [24] 2395 	lcall	_i2c_read_data
                           000571  2396 	C$lab3_2steering.c$78$1$115 ==.
                                   2397 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:78: range = ((unsigned int) Data[0] << 8 | Data[1]);
      000627 AF 39            [24] 2398 	mov	r7,_ReadCompass_Data_1_115
      000629 7E 00            [12] 2399 	mov	r6,#0x00
      00062B AC 3A            [24] 2400 	mov	r4,(_ReadCompass_Data_1_115 + 0x0001)
      00062D 7D 00            [12] 2401 	mov	r5,#0x00
      00062F EC               [12] 2402 	mov	a,r4
      000630 4E               [12] 2403 	orl	a,r6
      000631 F5 82            [12] 2404 	mov	dpl,a
      000633 ED               [12] 2405 	mov	a,r5
      000634 4F               [12] 2406 	orl	a,r7
      000635 F5 83            [12] 2407 	mov	dph,a
                           000581  2408 	C$lab3_2steering.c$79$1$115 ==.
                                   2409 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:79: return range;
                           000581  2410 	C$lab3_2steering.c$81$1$115 ==.
                           000581  2411 	XG$ReadCompass$0$0 ==.
      000637 22               [24] 2412 	ret
                                   2413 ;------------------------------------------------------------
                                   2414 ;Allocation info for local variables in function 'XBR0_Init'
                                   2415 ;------------------------------------------------------------
                           000582  2416 	G$XBR0_Init$0$0 ==.
                           000582  2417 	C$lab3_2steering.c$89$1$115 ==.
                                   2418 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:89: void XBR0_Init()
                                   2419 ;	-----------------------------------------
                                   2420 ;	 function XBR0_Init
                                   2421 ;	-----------------------------------------
      000638                       2422 _XBR0_Init:
                           000582  2423 	C$lab3_2steering.c$92$1$116 ==.
                                   2424 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:92: XBR0  = 0x27;  //configure crossbar as directed in the laboratory
      000638 75 E1 27         [24] 2425 	mov	_XBR0,#0x27
                           000585  2426 	C$lab3_2steering.c$94$1$116 ==.
                           000585  2427 	XG$XBR0_Init$0$0 ==.
      00063B 22               [24] 2428 	ret
                                   2429 ;------------------------------------------------------------
                                   2430 ;Allocation info for local variables in function 'SMB_Init'
                                   2431 ;------------------------------------------------------------
                           000586  2432 	G$SMB_Init$0$0 ==.
                           000586  2433 	C$lab3_2steering.c$96$1$116 ==.
                                   2434 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:96: void SMB_Init(void)
                                   2435 ;	-----------------------------------------
                                   2436 ;	 function SMB_Init
                                   2437 ;	-----------------------------------------
      00063C                       2438 _SMB_Init:
                           000586  2439 	C$lab3_2steering.c$98$1$118 ==.
                                   2440 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:98: SMB0CR =0x93;
      00063C 75 CF 93         [24] 2441 	mov	_SMB0CR,#0x93
                           000589  2442 	C$lab3_2steering.c$99$1$118 ==.
                                   2443 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:99: ENSMB =1;
      00063F D2 C6            [12] 2444 	setb	_ENSMB
                           00058B  2445 	C$lab3_2steering.c$100$1$118 ==.
                           00058B  2446 	XG$SMB_Init$0$0 ==.
      000641 22               [24] 2447 	ret
                                   2448 ;------------------------------------------------------------
                                   2449 ;Allocation info for local variables in function 'PCA_Init'
                                   2450 ;------------------------------------------------------------
                           00058C  2451 	G$PCA_Init$0$0 ==.
                           00058C  2452 	C$lab3_2steering.c$108$1$118 ==.
                                   2453 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:108: void PCA_Init(void)
                                   2454 ;	-----------------------------------------
                                   2455 ;	 function PCA_Init
                                   2456 ;	-----------------------------------------
      000642                       2457 _PCA_Init:
                           00058C  2458 	C$lab3_2steering.c$112$1$120 ==.
                                   2459 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:112: PCA0MD = 0x81;
      000642 75 D9 81         [24] 2460 	mov	_PCA0MD,#0x81
                           00058F  2461 	C$lab3_2steering.c$113$1$120 ==.
                                   2462 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:113: PCA0CPM0 = 0xC2;    //CCM0 in 16-bit compare mode
      000645 75 DA C2         [24] 2463 	mov	_PCA0CPM0,#0xC2
                           000592  2464 	C$lab3_2steering.c$114$1$120 ==.
                                   2465 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:114: PCA0CN = 0x40;      //Enable PCA counter
      000648 75 D8 40         [24] 2466 	mov	_PCA0CN,#0x40
                           000595  2467 	C$lab3_2steering.c$115$1$120 ==.
                                   2468 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:115: EIE1 |= 0x08;       //Enable PCA interrupt
      00064B 43 E6 08         [24] 2469 	orl	_EIE1,#0x08
                           000598  2470 	C$lab3_2steering.c$116$1$120 ==.
                                   2471 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:116: EA = 1;             //Enable global interrupts
      00064E D2 AF            [12] 2472 	setb	_EA
                           00059A  2473 	C$lab3_2steering.c$117$1$120 ==.
                           00059A  2474 	XG$PCA_Init$0$0 ==.
      000650 22               [24] 2475 	ret
                                   2476 ;------------------------------------------------------------
                                   2477 ;Allocation info for local variables in function 'PCA_ISR'
                                   2478 ;------------------------------------------------------------
                           00059B  2479 	G$PCA_ISR$0$0 ==.
                           00059B  2480 	C$lab3_2steering.c$125$1$120 ==.
                                   2481 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:125: void PCA_ISR ( void ) __interrupt 9
                                   2482 ;	-----------------------------------------
                                   2483 ;	 function PCA_ISR
                                   2484 ;	-----------------------------------------
      000651                       2485 _PCA_ISR:
      000651 C0 E0            [24] 2486 	push	acc
      000653 C0 D0            [24] 2487 	push	psw
                           00059F  2488 	C$lab3_2steering.c$128$1$122 ==.
                                   2489 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:128: if (CF)
                           00059F  2490 	C$lab3_2steering.c$130$2$123 ==.
                                   2491 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:130: CF =0;
      000655 10 DF 02         [24] 2492 	jbc	_CF,00108$
      000658 80 0E            [24] 2493 	sjmp	00102$
      00065A                       2494 00108$:
                           0005A4  2495 	C$lab3_2steering.c$131$2$123 ==.
                                   2496 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:131: PCA0 = 0x7000;
      00065A 75 E9 00         [24] 2497 	mov	((_PCA0 >> 0) & 0xFF),#0x00
      00065D 75 F9 70         [24] 2498 	mov	((_PCA0 >> 8) & 0xFF),#0x70
                           0005AA  2499 	C$lab3_2steering.c$132$2$123 ==.
                                   2500 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:132: count++;
      000660 05 34            [12] 2501 	inc	_count
      000662 E4               [12] 2502 	clr	a
      000663 B5 34 02         [24] 2503 	cjne	a,_count,00109$
      000666 05 35            [12] 2504 	inc	(_count + 1)
      000668                       2505 00109$:
      000668                       2506 00102$:
                           0005B2  2507 	C$lab3_2steering.c$135$1$122 ==.
                                   2508 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:135: PCA0CN &= 0xC0;
      000668 53 D8 C0         [24] 2509 	anl	_PCA0CN,#0xC0
      00066B D0 D0            [24] 2510 	pop	psw
      00066D D0 E0            [24] 2511 	pop	acc
                           0005B9  2512 	C$lab3_2steering.c$138$1$122 ==.
                           0005B9  2513 	XG$PCA_ISR$0$0 ==.
      00066F 32               [24] 2514 	reti
                                   2515 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   2516 ;	eliminated unneeded push/pop dpl
                                   2517 ;	eliminated unneeded push/pop dph
                                   2518 ;	eliminated unneeded push/pop b
                                   2519 ;------------------------------------------------------------
                                   2520 ;Allocation info for local variables in function 'Steering_Servo'
                                   2521 ;------------------------------------------------------------
                           0005BA  2522 	G$Steering_Servo$0$0 ==.
                           0005BA  2523 	C$lab3_2steering.c$140$1$122 ==.
                                   2524 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:140: void Steering_Servo()
                                   2525 ;	-----------------------------------------
                                   2526 ;	 function Steering_Servo
                                   2527 ;	-----------------------------------------
      000670                       2528 _Steering_Servo:
                           0005BA  2529 	C$lab3_2steering.c$145$1$124 ==.
                                   2530 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:145: if(input == 'r')  // single character input to increase the pulsewidth
      000670 74 72            [12] 2531 	mov	a,#0x72
      000672 B5 36 21         [24] 2532 	cjne	a,_input,00110$
                           0005BF  2533 	C$lab3_2steering.c$149$2$125 ==.
                                   2534 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:149: if(STR_PW<= PW_MIN_STR)  // check if less than pulsewidth minimum
      000675 C3               [12] 2535 	clr	c
      000676 74 D9            [12] 2536 	mov	a,#0xD9
      000678 95 32            [12] 2537 	subb	a,_STR_PW
      00067A 74 08            [12] 2538 	mov	a,#0x08
      00067C 95 33            [12] 2539 	subb	a,(_STR_PW + 1)
      00067E 40 08            [24] 2540 	jc	00102$
                           0005CA  2541 	C$lab3_2steering.c$151$3$126 ==.
                                   2542 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:151: STR_PW= PW_MIN_STR;    // set SERVO_PW to a minimum value
      000680 75 32 D9         [24] 2543 	mov	_STR_PW,#0xD9
      000683 75 33 08         [24] 2544 	mov	(_STR_PW + 1),#0x08
      000686 80 31            [24] 2545 	sjmp	00111$
      000688                       2546 00102$:
                           0005D2  2547 	C$lab3_2steering.c$155$3$127 ==.
                                   2548 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:155: STR_PW-= 10;
      000688 E5 32            [12] 2549 	mov	a,_STR_PW
      00068A 24 F6            [12] 2550 	add	a,#0xF6
      00068C F5 32            [12] 2551 	mov	_STR_PW,a
      00068E E5 33            [12] 2552 	mov	a,(_STR_PW + 1)
      000690 34 FF            [12] 2553 	addc	a,#0xFF
      000692 F5 33            [12] 2554 	mov	(_STR_PW + 1),a
      000694 80 23            [24] 2555 	sjmp	00111$
      000696                       2556 00110$:
                           0005E0  2557 	C$lab3_2steering.c$158$1$124 ==.
                                   2558 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:158: else if(input == 'l')  // single character input to decrease the pulsewidth
      000696 74 6C            [12] 2559 	mov	a,#0x6C
      000698 B5 36 1E         [24] 2560 	cjne	a,_input,00111$
                           0005E5  2561 	C$lab3_2steering.c$162$2$128 ==.
                                   2562 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:162: if(STR_PW> PW_MAX_STR)  // check if pulsewidth maximum exceeded
      00069B C3               [12] 2563 	clr	c
      00069C 74 CB            [12] 2564 	mov	a,#0xCB
      00069E 95 32            [12] 2565 	subb	a,_STR_PW
      0006A0 74 0C            [12] 2566 	mov	a,#0x0C
      0006A2 95 33            [12] 2567 	subb	a,(_STR_PW + 1)
      0006A4 50 08            [24] 2568 	jnc	00105$
                           0005F0  2569 	C$lab3_2steering.c$164$3$129 ==.
                                   2570 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:164: STR_PW= PW_MAX_STR;     // set STR_PW to a maximum value
      0006A6 75 32 CB         [24] 2571 	mov	_STR_PW,#0xCB
      0006A9 75 33 0C         [24] 2572 	mov	(_STR_PW + 1),#0x0C
      0006AC 80 0B            [24] 2573 	sjmp	00111$
      0006AE                       2574 00105$:
                           0005F8  2575 	C$lab3_2steering.c$168$3$130 ==.
                                   2576 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:168: STR_PW+= 10;
      0006AE 74 0A            [12] 2577 	mov	a,#0x0A
      0006B0 25 32            [12] 2578 	add	a,_STR_PW
      0006B2 F5 32            [12] 2579 	mov	_STR_PW,a
      0006B4 E4               [12] 2580 	clr	a
      0006B5 35 33            [12] 2581 	addc	a,(_STR_PW + 1)
      0006B7 F5 33            [12] 2582 	mov	(_STR_PW + 1),a
      0006B9                       2583 00111$:
                           000603  2584 	C$lab3_2steering.c$171$1$124 ==.
                                   2585 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:171: printf("\r\nSTR_PW: %u", STR_PW);
      0006B9 C0 32            [24] 2586 	push	_STR_PW
      0006BB C0 33            [24] 2587 	push	(_STR_PW + 1)
      0006BD 74 A7            [12] 2588 	mov	a,#___str_5
      0006BF C0 E0            [24] 2589 	push	acc
      0006C1 74 0E            [12] 2590 	mov	a,#(___str_5 >> 8)
      0006C3 C0 E0            [24] 2591 	push	acc
      0006C5 74 80            [12] 2592 	mov	a,#0x80
      0006C7 C0 E0            [24] 2593 	push	acc
      0006C9 12 08 3E         [24] 2594 	lcall	_printf
      0006CC E5 81            [12] 2595 	mov	a,sp
      0006CE 24 FB            [12] 2596 	add	a,#0xfb
      0006D0 F5 81            [12] 2597 	mov	sp,a
                           00061C  2598 	C$lab3_2steering.c$172$1$124 ==.
                                   2599 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:172: PCA0CPL0 = 0xFFFF - STR_PW;
      0006D2 AF 32            [24] 2600 	mov	r7,_STR_PW
      0006D4 74 FF            [12] 2601 	mov	a,#0xFF
      0006D6 C3               [12] 2602 	clr	c
      0006D7 9F               [12] 2603 	subb	a,r7
      0006D8 F5 EA            [12] 2604 	mov	_PCA0CPL0,a
                           000624  2605 	C$lab3_2steering.c$173$1$124 ==.
                                   2606 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-2\lab3-2steering.c:173: PCA0CPH0 = (0xFFFF - STR_PW) >> 8;
      0006DA 74 FF            [12] 2607 	mov	a,#0xFF
      0006DC C3               [12] 2608 	clr	c
      0006DD 95 32            [12] 2609 	subb	a,_STR_PW
      0006DF 74 FF            [12] 2610 	mov	a,#0xFF
      0006E1 95 33            [12] 2611 	subb	a,(_STR_PW + 1)
      0006E3 FF               [12] 2612 	mov	r7,a
      0006E4 8F FA            [24] 2613 	mov	_PCA0CPH0,r7
                           000630  2614 	C$lab3_2steering.c$175$1$124 ==.
                           000630  2615 	XG$Steering_Servo$0$0 ==.
      0006E6 22               [24] 2616 	ret
                                   2617 	.area CSEG    (CODE)
                                   2618 	.area CONST   (CODE)
                           000000  2619 Flab3_2steering$__str_0$0$0 == .
      000E52                       2620 ___str_0:
      000E52 0A                    2621 	.db 0x0A
      000E53 54 79 70 65 20 64 69  2622 	.ascii "Type digits; end w/#"
             67 69 74 73 3B 20 65
             6E 64 20 77 2F 23
      000E67 00                    2623 	.db 0x00
                           000016  2624 Flab3_2steering$__str_1$0$0 == .
      000E68                       2625 ___str_1:
      000E68 20 20 20 20 20 25 63  2626 	.ascii "     %c%c%c%c%c"
             25 63 25 63 25 63 25
             63
      000E77 00                    2627 	.db 0x00
                           000026  2628 Flab3_2steering$__str_2$0$0 == .
      000E78                       2629 ___str_2:
      000E78 25 63                 2630 	.ascii "%c"
      000E7A 00                    2631 	.db 0x00
                           000029  2632 Flab3_2steering$__str_3$0$0 == .
      000E7B                       2633 ___str_3:
      000E7B 45 6D 62 65 64 64 65  2634 	.ascii "Embedded Control Steering Calibration"
             64 20 43 6F 6E 74 72
             6F 6C 20 53 74 65 65
             72 69 6E 67 20 43 61
             6C 69 62 72 61 74 69
             6F 6E
      000EA0 0A                    2635 	.db 0x0A
      000EA1 00                    2636 	.db 0x00
                           000050  2637 Flab3_2steering$__str_4$0$0 == .
      000EA2                       2638 ___str_4:
      000EA2 0D                    2639 	.db 0x0D
      000EA3 0A                    2640 	.db 0x0A
      000EA4 25 64                 2641 	.ascii "%d"
      000EA6 00                    2642 	.db 0x00
                           000055  2643 Flab3_2steering$__str_5$0$0 == .
      000EA7                       2644 ___str_5:
      000EA7 0D                    2645 	.db 0x0D
      000EA8 0A                    2646 	.db 0x0A
      000EA9 53 54 52 5F 50 57 3A  2647 	.ascii "STR_PW: %u"
             20 25 75
      000EB3 00                    2648 	.db 0x00
                                   2649 	.area XINIT   (CODE)
                                   2650 	.area CABS    (ABS,CODE)
