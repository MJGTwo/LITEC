                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (Apr  5 2014) (MINGW32)
                                      4 ; This file was generated Tue Mar 31 10:45:22 2015
                                      5 ;--------------------------------------------------------
                                      6 	.module lab3_3compass
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
                                    306 	.globl _offset
                                    307 	.globl _error
                                    308 	.globl _desired_heading
                                    309 	.globl _actual_heading
                                    310 	.globl _input
                                    311 	.globl _count
                                    312 	.globl _STR_PW
                                    313 	.globl _tmp0_lo_to_hi
                                    314 	.globl _i2c_read_data_PARM_4
                                    315 	.globl _i2c_read_data_PARM_3
                                    316 	.globl _i2c_read_data_PARM_2
                                    317 	.globl _i2c_write_data_PARM_4
                                    318 	.globl _i2c_write_data_PARM_3
                                    319 	.globl _i2c_write_data_PARM_2
                                    320 	.globl _putchar
                                    321 	.globl _getchar
                                    322 	.globl _lcd_print
                                    323 	.globl _lcd_clear
                                    324 	.globl _kpd_input
                                    325 	.globl _delay_time
                                    326 	.globl _i2c_start
                                    327 	.globl _i2c_write
                                    328 	.globl _i2c_write_and_stop
                                    329 	.globl _i2c_read
                                    330 	.globl _i2c_read_and_stop
                                    331 	.globl _i2c_write_data
                                    332 	.globl _i2c_read_data
                                    333 	.globl _Accel_Init
                                    334 	.globl _Port_Init
                                    335 	.globl _ReadCompass
                                    336 	.globl _XBR0_Init
                                    337 	.globl _SMB_Init
                                    338 	.globl _PCA_Init
                                    339 	.globl _Steering_Servo
                                    340 ;--------------------------------------------------------
                                    341 ; special function registers
                                    342 ;--------------------------------------------------------
                                    343 	.area RSEG    (ABS,DATA)
      000000                        344 	.org 0x0000
                           000080   345 G$P0$0$0 == 0x0080
                           000080   346 _P0	=	0x0080
                           000081   347 G$SP$0$0 == 0x0081
                           000081   348 _SP	=	0x0081
                           000082   349 G$DPL$0$0 == 0x0082
                           000082   350 _DPL	=	0x0082
                           000083   351 G$DPH$0$0 == 0x0083
                           000083   352 _DPH	=	0x0083
                           000084   353 G$P4$0$0 == 0x0084
                           000084   354 _P4	=	0x0084
                           000085   355 G$P5$0$0 == 0x0085
                           000085   356 _P5	=	0x0085
                           000086   357 G$P6$0$0 == 0x0086
                           000086   358 _P6	=	0x0086
                           000087   359 G$PCON$0$0 == 0x0087
                           000087   360 _PCON	=	0x0087
                           000088   361 G$TCON$0$0 == 0x0088
                           000088   362 _TCON	=	0x0088
                           000089   363 G$TMOD$0$0 == 0x0089
                           000089   364 _TMOD	=	0x0089
                           00008A   365 G$TL0$0$0 == 0x008a
                           00008A   366 _TL0	=	0x008a
                           00008B   367 G$TL1$0$0 == 0x008b
                           00008B   368 _TL1	=	0x008b
                           00008C   369 G$TH0$0$0 == 0x008c
                           00008C   370 _TH0	=	0x008c
                           00008D   371 G$TH1$0$0 == 0x008d
                           00008D   372 _TH1	=	0x008d
                           00008E   373 G$CKCON$0$0 == 0x008e
                           00008E   374 _CKCON	=	0x008e
                           00008F   375 G$PSCTL$0$0 == 0x008f
                           00008F   376 _PSCTL	=	0x008f
                           000090   377 G$P1$0$0 == 0x0090
                           000090   378 _P1	=	0x0090
                           000091   379 G$TMR3CN$0$0 == 0x0091
                           000091   380 _TMR3CN	=	0x0091
                           000092   381 G$TMR3RLL$0$0 == 0x0092
                           000092   382 _TMR3RLL	=	0x0092
                           000093   383 G$TMR3RLH$0$0 == 0x0093
                           000093   384 _TMR3RLH	=	0x0093
                           000094   385 G$TMR3L$0$0 == 0x0094
                           000094   386 _TMR3L	=	0x0094
                           000095   387 G$TMR3H$0$0 == 0x0095
                           000095   388 _TMR3H	=	0x0095
                           000096   389 G$P7$0$0 == 0x0096
                           000096   390 _P7	=	0x0096
                           000098   391 G$SCON$0$0 == 0x0098
                           000098   392 _SCON	=	0x0098
                           000098   393 G$SCON0$0$0 == 0x0098
                           000098   394 _SCON0	=	0x0098
                           000099   395 G$SBUF$0$0 == 0x0099
                           000099   396 _SBUF	=	0x0099
                           000099   397 G$SBUF0$0$0 == 0x0099
                           000099   398 _SBUF0	=	0x0099
                           00009A   399 G$SPI0CFG$0$0 == 0x009a
                           00009A   400 _SPI0CFG	=	0x009a
                           00009B   401 G$SPI0DAT$0$0 == 0x009b
                           00009B   402 _SPI0DAT	=	0x009b
                           00009C   403 G$ADC1$0$0 == 0x009c
                           00009C   404 _ADC1	=	0x009c
                           00009D   405 G$SPI0CKR$0$0 == 0x009d
                           00009D   406 _SPI0CKR	=	0x009d
                           00009E   407 G$CPT0CN$0$0 == 0x009e
                           00009E   408 _CPT0CN	=	0x009e
                           00009F   409 G$CPT1CN$0$0 == 0x009f
                           00009F   410 _CPT1CN	=	0x009f
                           0000A0   411 G$P2$0$0 == 0x00a0
                           0000A0   412 _P2	=	0x00a0
                           0000A1   413 G$EMI0TC$0$0 == 0x00a1
                           0000A1   414 _EMI0TC	=	0x00a1
                           0000A3   415 G$EMI0CF$0$0 == 0x00a3
                           0000A3   416 _EMI0CF	=	0x00a3
                           0000A4   417 G$PRT0CF$0$0 == 0x00a4
                           0000A4   418 _PRT0CF	=	0x00a4
                           0000A4   419 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   420 _P0MDOUT	=	0x00a4
                           0000A5   421 G$PRT1CF$0$0 == 0x00a5
                           0000A5   422 _PRT1CF	=	0x00a5
                           0000A5   423 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   424 _P1MDOUT	=	0x00a5
                           0000A6   425 G$PRT2CF$0$0 == 0x00a6
                           0000A6   426 _PRT2CF	=	0x00a6
                           0000A6   427 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   428 _P2MDOUT	=	0x00a6
                           0000A7   429 G$PRT3CF$0$0 == 0x00a7
                           0000A7   430 _PRT3CF	=	0x00a7
                           0000A7   431 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   432 _P3MDOUT	=	0x00a7
                           0000A8   433 G$IE$0$0 == 0x00a8
                           0000A8   434 _IE	=	0x00a8
                           0000A9   435 G$SADDR0$0$0 == 0x00a9
                           0000A9   436 _SADDR0	=	0x00a9
                           0000AA   437 G$ADC1CN$0$0 == 0x00aa
                           0000AA   438 _ADC1CN	=	0x00aa
                           0000AB   439 G$ADC1CF$0$0 == 0x00ab
                           0000AB   440 _ADC1CF	=	0x00ab
                           0000AC   441 G$AMX1SL$0$0 == 0x00ac
                           0000AC   442 _AMX1SL	=	0x00ac
                           0000AD   443 G$P3IF$0$0 == 0x00ad
                           0000AD   444 _P3IF	=	0x00ad
                           0000AE   445 G$SADEN1$0$0 == 0x00ae
                           0000AE   446 _SADEN1	=	0x00ae
                           0000AF   447 G$EMI0CN$0$0 == 0x00af
                           0000AF   448 _EMI0CN	=	0x00af
                           0000AF   449 G$_XPAGE$0$0 == 0x00af
                           0000AF   450 __XPAGE	=	0x00af
                           0000B0   451 G$P3$0$0 == 0x00b0
                           0000B0   452 _P3	=	0x00b0
                           0000B1   453 G$OSCXCN$0$0 == 0x00b1
                           0000B1   454 _OSCXCN	=	0x00b1
                           0000B2   455 G$OSCICN$0$0 == 0x00b2
                           0000B2   456 _OSCICN	=	0x00b2
                           0000B5   457 G$P74OUT$0$0 == 0x00b5
                           0000B5   458 _P74OUT	=	0x00b5
                           0000B6   459 G$FLSCL$0$0 == 0x00b6
                           0000B6   460 _FLSCL	=	0x00b6
                           0000B7   461 G$FLACL$0$0 == 0x00b7
                           0000B7   462 _FLACL	=	0x00b7
                           0000B8   463 G$IP$0$0 == 0x00b8
                           0000B8   464 _IP	=	0x00b8
                           0000B9   465 G$SADEN0$0$0 == 0x00b9
                           0000B9   466 _SADEN0	=	0x00b9
                           0000BA   467 G$AMX0CF$0$0 == 0x00ba
                           0000BA   468 _AMX0CF	=	0x00ba
                           0000BB   469 G$AMX0SL$0$0 == 0x00bb
                           0000BB   470 _AMX0SL	=	0x00bb
                           0000BC   471 G$ADC0CF$0$0 == 0x00bc
                           0000BC   472 _ADC0CF	=	0x00bc
                           0000BD   473 G$P1MDIN$0$0 == 0x00bd
                           0000BD   474 _P1MDIN	=	0x00bd
                           0000BE   475 G$ADC0L$0$0 == 0x00be
                           0000BE   476 _ADC0L	=	0x00be
                           0000BF   477 G$ADC0H$0$0 == 0x00bf
                           0000BF   478 _ADC0H	=	0x00bf
                           0000C0   479 G$SMB0CN$0$0 == 0x00c0
                           0000C0   480 _SMB0CN	=	0x00c0
                           0000C1   481 G$SMB0STA$0$0 == 0x00c1
                           0000C1   482 _SMB0STA	=	0x00c1
                           0000C2   483 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   484 _SMB0DAT	=	0x00c2
                           0000C3   485 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   486 _SMB0ADR	=	0x00c3
                           0000C4   487 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   488 _ADC0GTL	=	0x00c4
                           0000C5   489 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   490 _ADC0GTH	=	0x00c5
                           0000C6   491 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   492 _ADC0LTL	=	0x00c6
                           0000C7   493 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   494 _ADC0LTH	=	0x00c7
                           0000C8   495 G$T2CON$0$0 == 0x00c8
                           0000C8   496 _T2CON	=	0x00c8
                           0000C9   497 G$T4CON$0$0 == 0x00c9
                           0000C9   498 _T4CON	=	0x00c9
                           0000CA   499 G$RCAP2L$0$0 == 0x00ca
                           0000CA   500 _RCAP2L	=	0x00ca
                           0000CB   501 G$RCAP2H$0$0 == 0x00cb
                           0000CB   502 _RCAP2H	=	0x00cb
                           0000CC   503 G$TL2$0$0 == 0x00cc
                           0000CC   504 _TL2	=	0x00cc
                           0000CD   505 G$TH2$0$0 == 0x00cd
                           0000CD   506 _TH2	=	0x00cd
                           0000CF   507 G$SMB0CR$0$0 == 0x00cf
                           0000CF   508 _SMB0CR	=	0x00cf
                           0000D0   509 G$PSW$0$0 == 0x00d0
                           0000D0   510 _PSW	=	0x00d0
                           0000D1   511 G$REF0CN$0$0 == 0x00d1
                           0000D1   512 _REF0CN	=	0x00d1
                           0000D2   513 G$DAC0L$0$0 == 0x00d2
                           0000D2   514 _DAC0L	=	0x00d2
                           0000D3   515 G$DAC0H$0$0 == 0x00d3
                           0000D3   516 _DAC0H	=	0x00d3
                           0000D4   517 G$DAC0CN$0$0 == 0x00d4
                           0000D4   518 _DAC0CN	=	0x00d4
                           0000D5   519 G$DAC1L$0$0 == 0x00d5
                           0000D5   520 _DAC1L	=	0x00d5
                           0000D6   521 G$DAC1H$0$0 == 0x00d6
                           0000D6   522 _DAC1H	=	0x00d6
                           0000D7   523 G$DAC1CN$0$0 == 0x00d7
                           0000D7   524 _DAC1CN	=	0x00d7
                           0000D8   525 G$PCA0CN$0$0 == 0x00d8
                           0000D8   526 _PCA0CN	=	0x00d8
                           0000D9   527 G$PCA0MD$0$0 == 0x00d9
                           0000D9   528 _PCA0MD	=	0x00d9
                           0000DA   529 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   530 _PCA0CPM0	=	0x00da
                           0000DB   531 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   532 _PCA0CPM1	=	0x00db
                           0000DC   533 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   534 _PCA0CPM2	=	0x00dc
                           0000DD   535 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   536 _PCA0CPM3	=	0x00dd
                           0000DE   537 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   538 _PCA0CPM4	=	0x00de
                           0000E0   539 G$ACC$0$0 == 0x00e0
                           0000E0   540 _ACC	=	0x00e0
                           0000E1   541 G$XBR0$0$0 == 0x00e1
                           0000E1   542 _XBR0	=	0x00e1
                           0000E2   543 G$XBR1$0$0 == 0x00e2
                           0000E2   544 _XBR1	=	0x00e2
                           0000E3   545 G$XBR2$0$0 == 0x00e3
                           0000E3   546 _XBR2	=	0x00e3
                           0000E4   547 G$RCAP4L$0$0 == 0x00e4
                           0000E4   548 _RCAP4L	=	0x00e4
                           0000E5   549 G$RCAP4H$0$0 == 0x00e5
                           0000E5   550 _RCAP4H	=	0x00e5
                           0000E6   551 G$EIE1$0$0 == 0x00e6
                           0000E6   552 _EIE1	=	0x00e6
                           0000E7   553 G$EIE2$0$0 == 0x00e7
                           0000E7   554 _EIE2	=	0x00e7
                           0000E8   555 G$ADC0CN$0$0 == 0x00e8
                           0000E8   556 _ADC0CN	=	0x00e8
                           0000E9   557 G$PCA0L$0$0 == 0x00e9
                           0000E9   558 _PCA0L	=	0x00e9
                           0000EA   559 G$PCA0CPL0$0$0 == 0x00ea
                           0000EA   560 _PCA0CPL0	=	0x00ea
                           0000EB   561 G$PCA0CPL1$0$0 == 0x00eb
                           0000EB   562 _PCA0CPL1	=	0x00eb
                           0000EC   563 G$PCA0CPL2$0$0 == 0x00ec
                           0000EC   564 _PCA0CPL2	=	0x00ec
                           0000ED   565 G$PCA0CPL3$0$0 == 0x00ed
                           0000ED   566 _PCA0CPL3	=	0x00ed
                           0000EE   567 G$PCA0CPL4$0$0 == 0x00ee
                           0000EE   568 _PCA0CPL4	=	0x00ee
                           0000EF   569 G$RSTSRC$0$0 == 0x00ef
                           0000EF   570 _RSTSRC	=	0x00ef
                           0000F0   571 G$B$0$0 == 0x00f0
                           0000F0   572 _B	=	0x00f0
                           0000F1   573 G$SCON1$0$0 == 0x00f1
                           0000F1   574 _SCON1	=	0x00f1
                           0000F2   575 G$SBUF1$0$0 == 0x00f2
                           0000F2   576 _SBUF1	=	0x00f2
                           0000F3   577 G$SADDR1$0$0 == 0x00f3
                           0000F3   578 _SADDR1	=	0x00f3
                           0000F4   579 G$TL4$0$0 == 0x00f4
                           0000F4   580 _TL4	=	0x00f4
                           0000F5   581 G$TH4$0$0 == 0x00f5
                           0000F5   582 _TH4	=	0x00f5
                           0000F6   583 G$EIP1$0$0 == 0x00f6
                           0000F6   584 _EIP1	=	0x00f6
                           0000F7   585 G$EIP2$0$0 == 0x00f7
                           0000F7   586 _EIP2	=	0x00f7
                           0000F8   587 G$SPI0CN$0$0 == 0x00f8
                           0000F8   588 _SPI0CN	=	0x00f8
                           0000F9   589 G$PCA0H$0$0 == 0x00f9
                           0000F9   590 _PCA0H	=	0x00f9
                           0000FA   591 G$PCA0CPH0$0$0 == 0x00fa
                           0000FA   592 _PCA0CPH0	=	0x00fa
                           0000FB   593 G$PCA0CPH1$0$0 == 0x00fb
                           0000FB   594 _PCA0CPH1	=	0x00fb
                           0000FC   595 G$PCA0CPH2$0$0 == 0x00fc
                           0000FC   596 _PCA0CPH2	=	0x00fc
                           0000FD   597 G$PCA0CPH3$0$0 == 0x00fd
                           0000FD   598 _PCA0CPH3	=	0x00fd
                           0000FE   599 G$PCA0CPH4$0$0 == 0x00fe
                           0000FE   600 _PCA0CPH4	=	0x00fe
                           0000FF   601 G$WDTCN$0$0 == 0x00ff
                           0000FF   602 _WDTCN	=	0x00ff
                           008C8A   603 G$TMR0$0$0 == 0x8c8a
                           008C8A   604 _TMR0	=	0x8c8a
                           008D8B   605 G$TMR1$0$0 == 0x8d8b
                           008D8B   606 _TMR1	=	0x8d8b
                           00CDCC   607 G$TMR2$0$0 == 0xcdcc
                           00CDCC   608 _TMR2	=	0xcdcc
                           00CBCA   609 G$RCAP2$0$0 == 0xcbca
                           00CBCA   610 _RCAP2	=	0xcbca
                           009594   611 G$TMR3$0$0 == 0x9594
                           009594   612 _TMR3	=	0x9594
                           009392   613 G$TMR3RL$0$0 == 0x9392
                           009392   614 _TMR3RL	=	0x9392
                           00F5F4   615 G$TMR4$0$0 == 0xf5f4
                           00F5F4   616 _TMR4	=	0xf5f4
                           00E5E4   617 G$RCAP4$0$0 == 0xe5e4
                           00E5E4   618 _RCAP4	=	0xe5e4
                           00BFBE   619 G$ADC0$0$0 == 0xbfbe
                           00BFBE   620 _ADC0	=	0xbfbe
                           00C5C4   621 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   622 _ADC0GT	=	0xc5c4
                           00C7C6   623 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   624 _ADC0LT	=	0xc7c6
                           00D3D2   625 G$DAC0$0$0 == 0xd3d2
                           00D3D2   626 _DAC0	=	0xd3d2
                           00D6D5   627 G$DAC1$0$0 == 0xd6d5
                           00D6D5   628 _DAC1	=	0xd6d5
                           00F9E9   629 G$PCA0$0$0 == 0xf9e9
                           00F9E9   630 _PCA0	=	0xf9e9
                           00FAEA   631 G$PCA0CP0$0$0 == 0xfaea
                           00FAEA   632 _PCA0CP0	=	0xfaea
                           00FBEB   633 G$PCA0CP1$0$0 == 0xfbeb
                           00FBEB   634 _PCA0CP1	=	0xfbeb
                           00FCEC   635 G$PCA0CP2$0$0 == 0xfcec
                           00FCEC   636 _PCA0CP2	=	0xfcec
                           00FDED   637 G$PCA0CP3$0$0 == 0xfded
                           00FDED   638 _PCA0CP3	=	0xfded
                           00FEEE   639 G$PCA0CP4$0$0 == 0xfeee
                           00FEEE   640 _PCA0CP4	=	0xfeee
                                    641 ;--------------------------------------------------------
                                    642 ; special function bits
                                    643 ;--------------------------------------------------------
                                    644 	.area RSEG    (ABS,DATA)
      000000                        645 	.org 0x0000
                           000080   646 G$P0_0$0$0 == 0x0080
                           000080   647 _P0_0	=	0x0080
                           000081   648 G$P0_1$0$0 == 0x0081
                           000081   649 _P0_1	=	0x0081
                           000082   650 G$P0_2$0$0 == 0x0082
                           000082   651 _P0_2	=	0x0082
                           000083   652 G$P0_3$0$0 == 0x0083
                           000083   653 _P0_3	=	0x0083
                           000084   654 G$P0_4$0$0 == 0x0084
                           000084   655 _P0_4	=	0x0084
                           000085   656 G$P0_5$0$0 == 0x0085
                           000085   657 _P0_5	=	0x0085
                           000086   658 G$P0_6$0$0 == 0x0086
                           000086   659 _P0_6	=	0x0086
                           000087   660 G$P0_7$0$0 == 0x0087
                           000087   661 _P0_7	=	0x0087
                           000088   662 G$IT0$0$0 == 0x0088
                           000088   663 _IT0	=	0x0088
                           000089   664 G$IE0$0$0 == 0x0089
                           000089   665 _IE0	=	0x0089
                           00008A   666 G$IT1$0$0 == 0x008a
                           00008A   667 _IT1	=	0x008a
                           00008B   668 G$IE1$0$0 == 0x008b
                           00008B   669 _IE1	=	0x008b
                           00008C   670 G$TR0$0$0 == 0x008c
                           00008C   671 _TR0	=	0x008c
                           00008D   672 G$TF0$0$0 == 0x008d
                           00008D   673 _TF0	=	0x008d
                           00008E   674 G$TR1$0$0 == 0x008e
                           00008E   675 _TR1	=	0x008e
                           00008F   676 G$TF1$0$0 == 0x008f
                           00008F   677 _TF1	=	0x008f
                           000090   678 G$P1_0$0$0 == 0x0090
                           000090   679 _P1_0	=	0x0090
                           000091   680 G$P1_1$0$0 == 0x0091
                           000091   681 _P1_1	=	0x0091
                           000092   682 G$P1_2$0$0 == 0x0092
                           000092   683 _P1_2	=	0x0092
                           000093   684 G$P1_3$0$0 == 0x0093
                           000093   685 _P1_3	=	0x0093
                           000094   686 G$P1_4$0$0 == 0x0094
                           000094   687 _P1_4	=	0x0094
                           000095   688 G$P1_5$0$0 == 0x0095
                           000095   689 _P1_5	=	0x0095
                           000096   690 G$P1_6$0$0 == 0x0096
                           000096   691 _P1_6	=	0x0096
                           000097   692 G$P1_7$0$0 == 0x0097
                           000097   693 _P1_7	=	0x0097
                           000098   694 G$RI$0$0 == 0x0098
                           000098   695 _RI	=	0x0098
                           000098   696 G$RI0$0$0 == 0x0098
                           000098   697 _RI0	=	0x0098
                           000099   698 G$TI$0$0 == 0x0099
                           000099   699 _TI	=	0x0099
                           000099   700 G$TI0$0$0 == 0x0099
                           000099   701 _TI0	=	0x0099
                           00009A   702 G$RB8$0$0 == 0x009a
                           00009A   703 _RB8	=	0x009a
                           00009A   704 G$RB80$0$0 == 0x009a
                           00009A   705 _RB80	=	0x009a
                           00009B   706 G$TB8$0$0 == 0x009b
                           00009B   707 _TB8	=	0x009b
                           00009B   708 G$TB80$0$0 == 0x009b
                           00009B   709 _TB80	=	0x009b
                           00009C   710 G$REN$0$0 == 0x009c
                           00009C   711 _REN	=	0x009c
                           00009C   712 G$REN0$0$0 == 0x009c
                           00009C   713 _REN0	=	0x009c
                           00009D   714 G$SM2$0$0 == 0x009d
                           00009D   715 _SM2	=	0x009d
                           00009D   716 G$SM20$0$0 == 0x009d
                           00009D   717 _SM20	=	0x009d
                           00009D   718 G$MCE0$0$0 == 0x009d
                           00009D   719 _MCE0	=	0x009d
                           00009E   720 G$SM1$0$0 == 0x009e
                           00009E   721 _SM1	=	0x009e
                           00009E   722 G$SM10$0$0 == 0x009e
                           00009E   723 _SM10	=	0x009e
                           00009F   724 G$SM0$0$0 == 0x009f
                           00009F   725 _SM0	=	0x009f
                           00009F   726 G$SM00$0$0 == 0x009f
                           00009F   727 _SM00	=	0x009f
                           00009F   728 G$S0MODE$0$0 == 0x009f
                           00009F   729 _S0MODE	=	0x009f
                           0000A0   730 G$P2_0$0$0 == 0x00a0
                           0000A0   731 _P2_0	=	0x00a0
                           0000A1   732 G$P2_1$0$0 == 0x00a1
                           0000A1   733 _P2_1	=	0x00a1
                           0000A2   734 G$P2_2$0$0 == 0x00a2
                           0000A2   735 _P2_2	=	0x00a2
                           0000A3   736 G$P2_3$0$0 == 0x00a3
                           0000A3   737 _P2_3	=	0x00a3
                           0000A4   738 G$P2_4$0$0 == 0x00a4
                           0000A4   739 _P2_4	=	0x00a4
                           0000A5   740 G$P2_5$0$0 == 0x00a5
                           0000A5   741 _P2_5	=	0x00a5
                           0000A6   742 G$P2_6$0$0 == 0x00a6
                           0000A6   743 _P2_6	=	0x00a6
                           0000A7   744 G$P2_7$0$0 == 0x00a7
                           0000A7   745 _P2_7	=	0x00a7
                           0000A8   746 G$EX0$0$0 == 0x00a8
                           0000A8   747 _EX0	=	0x00a8
                           0000A9   748 G$ET0$0$0 == 0x00a9
                           0000A9   749 _ET0	=	0x00a9
                           0000AA   750 G$EX1$0$0 == 0x00aa
                           0000AA   751 _EX1	=	0x00aa
                           0000AB   752 G$ET1$0$0 == 0x00ab
                           0000AB   753 _ET1	=	0x00ab
                           0000AC   754 G$ES0$0$0 == 0x00ac
                           0000AC   755 _ES0	=	0x00ac
                           0000AC   756 G$ES$0$0 == 0x00ac
                           0000AC   757 _ES	=	0x00ac
                           0000AD   758 G$ET2$0$0 == 0x00ad
                           0000AD   759 _ET2	=	0x00ad
                           0000AF   760 G$EA$0$0 == 0x00af
                           0000AF   761 _EA	=	0x00af
                           0000B0   762 G$P3_0$0$0 == 0x00b0
                           0000B0   763 _P3_0	=	0x00b0
                           0000B1   764 G$P3_1$0$0 == 0x00b1
                           0000B1   765 _P3_1	=	0x00b1
                           0000B2   766 G$P3_2$0$0 == 0x00b2
                           0000B2   767 _P3_2	=	0x00b2
                           0000B3   768 G$P3_3$0$0 == 0x00b3
                           0000B3   769 _P3_3	=	0x00b3
                           0000B4   770 G$P3_4$0$0 == 0x00b4
                           0000B4   771 _P3_4	=	0x00b4
                           0000B5   772 G$P3_5$0$0 == 0x00b5
                           0000B5   773 _P3_5	=	0x00b5
                           0000B6   774 G$P3_6$0$0 == 0x00b6
                           0000B6   775 _P3_6	=	0x00b6
                           0000B7   776 G$P3_7$0$0 == 0x00b7
                           0000B7   777 _P3_7	=	0x00b7
                           0000B8   778 G$PX0$0$0 == 0x00b8
                           0000B8   779 _PX0	=	0x00b8
                           0000B9   780 G$PT0$0$0 == 0x00b9
                           0000B9   781 _PT0	=	0x00b9
                           0000BA   782 G$PX1$0$0 == 0x00ba
                           0000BA   783 _PX1	=	0x00ba
                           0000BB   784 G$PT1$0$0 == 0x00bb
                           0000BB   785 _PT1	=	0x00bb
                           0000BC   786 G$PS0$0$0 == 0x00bc
                           0000BC   787 _PS0	=	0x00bc
                           0000BC   788 G$PS$0$0 == 0x00bc
                           0000BC   789 _PS	=	0x00bc
                           0000BD   790 G$PT2$0$0 == 0x00bd
                           0000BD   791 _PT2	=	0x00bd
                           0000C0   792 G$SMBTOE$0$0 == 0x00c0
                           0000C0   793 _SMBTOE	=	0x00c0
                           0000C1   794 G$SMBFTE$0$0 == 0x00c1
                           0000C1   795 _SMBFTE	=	0x00c1
                           0000C2   796 G$AA$0$0 == 0x00c2
                           0000C2   797 _AA	=	0x00c2
                           0000C3   798 G$SI$0$0 == 0x00c3
                           0000C3   799 _SI	=	0x00c3
                           0000C4   800 G$STO$0$0 == 0x00c4
                           0000C4   801 _STO	=	0x00c4
                           0000C5   802 G$STA$0$0 == 0x00c5
                           0000C5   803 _STA	=	0x00c5
                           0000C6   804 G$ENSMB$0$0 == 0x00c6
                           0000C6   805 _ENSMB	=	0x00c6
                           0000C7   806 G$BUSY$0$0 == 0x00c7
                           0000C7   807 _BUSY	=	0x00c7
                           0000C8   808 G$CPRL2$0$0 == 0x00c8
                           0000C8   809 _CPRL2	=	0x00c8
                           0000C9   810 G$CT2$0$0 == 0x00c9
                           0000C9   811 _CT2	=	0x00c9
                           0000CA   812 G$TR2$0$0 == 0x00ca
                           0000CA   813 _TR2	=	0x00ca
                           0000CB   814 G$EXEN2$0$0 == 0x00cb
                           0000CB   815 _EXEN2	=	0x00cb
                           0000CC   816 G$TCLK$0$0 == 0x00cc
                           0000CC   817 _TCLK	=	0x00cc
                           0000CD   818 G$RCLK$0$0 == 0x00cd
                           0000CD   819 _RCLK	=	0x00cd
                           0000CE   820 G$EXF2$0$0 == 0x00ce
                           0000CE   821 _EXF2	=	0x00ce
                           0000CF   822 G$TF2$0$0 == 0x00cf
                           0000CF   823 _TF2	=	0x00cf
                           0000D0   824 G$P$0$0 == 0x00d0
                           0000D0   825 _P	=	0x00d0
                           0000D1   826 G$F1$0$0 == 0x00d1
                           0000D1   827 _F1	=	0x00d1
                           0000D2   828 G$OV$0$0 == 0x00d2
                           0000D2   829 _OV	=	0x00d2
                           0000D3   830 G$RS0$0$0 == 0x00d3
                           0000D3   831 _RS0	=	0x00d3
                           0000D4   832 G$RS1$0$0 == 0x00d4
                           0000D4   833 _RS1	=	0x00d4
                           0000D5   834 G$F0$0$0 == 0x00d5
                           0000D5   835 _F0	=	0x00d5
                           0000D6   836 G$AC$0$0 == 0x00d6
                           0000D6   837 _AC	=	0x00d6
                           0000D7   838 G$CY$0$0 == 0x00d7
                           0000D7   839 _CY	=	0x00d7
                           0000D8   840 G$CCF0$0$0 == 0x00d8
                           0000D8   841 _CCF0	=	0x00d8
                           0000D9   842 G$CCF1$0$0 == 0x00d9
                           0000D9   843 _CCF1	=	0x00d9
                           0000DA   844 G$CCF2$0$0 == 0x00da
                           0000DA   845 _CCF2	=	0x00da
                           0000DB   846 G$CCF3$0$0 == 0x00db
                           0000DB   847 _CCF3	=	0x00db
                           0000DC   848 G$CCF4$0$0 == 0x00dc
                           0000DC   849 _CCF4	=	0x00dc
                           0000DE   850 G$CR$0$0 == 0x00de
                           0000DE   851 _CR	=	0x00de
                           0000DF   852 G$CF$0$0 == 0x00df
                           0000DF   853 _CF	=	0x00df
                           0000E8   854 G$ADLJST$0$0 == 0x00e8
                           0000E8   855 _ADLJST	=	0x00e8
                           0000E8   856 G$AD0LJST$0$0 == 0x00e8
                           0000E8   857 _AD0LJST	=	0x00e8
                           0000E9   858 G$ADWINT$0$0 == 0x00e9
                           0000E9   859 _ADWINT	=	0x00e9
                           0000E9   860 G$AD0WINT$0$0 == 0x00e9
                           0000E9   861 _AD0WINT	=	0x00e9
                           0000EA   862 G$ADSTM0$0$0 == 0x00ea
                           0000EA   863 _ADSTM0	=	0x00ea
                           0000EA   864 G$AD0CM0$0$0 == 0x00ea
                           0000EA   865 _AD0CM0	=	0x00ea
                           0000EB   866 G$ADSTM1$0$0 == 0x00eb
                           0000EB   867 _ADSTM1	=	0x00eb
                           0000EB   868 G$AD0CM1$0$0 == 0x00eb
                           0000EB   869 _AD0CM1	=	0x00eb
                           0000EC   870 G$ADBUSY$0$0 == 0x00ec
                           0000EC   871 _ADBUSY	=	0x00ec
                           0000EC   872 G$AD0BUSY$0$0 == 0x00ec
                           0000EC   873 _AD0BUSY	=	0x00ec
                           0000ED   874 G$ADCINT$0$0 == 0x00ed
                           0000ED   875 _ADCINT	=	0x00ed
                           0000ED   876 G$AD0INT$0$0 == 0x00ed
                           0000ED   877 _AD0INT	=	0x00ed
                           0000EE   878 G$ADCTM$0$0 == 0x00ee
                           0000EE   879 _ADCTM	=	0x00ee
                           0000EE   880 G$AD0TM$0$0 == 0x00ee
                           0000EE   881 _AD0TM	=	0x00ee
                           0000EF   882 G$ADCEN$0$0 == 0x00ef
                           0000EF   883 _ADCEN	=	0x00ef
                           0000EF   884 G$AD0EN$0$0 == 0x00ef
                           0000EF   885 _AD0EN	=	0x00ef
                           0000F8   886 G$SPIEN$0$0 == 0x00f8
                           0000F8   887 _SPIEN	=	0x00f8
                           0000F9   888 G$MSTEN$0$0 == 0x00f9
                           0000F9   889 _MSTEN	=	0x00f9
                           0000FA   890 G$SLVSEL$0$0 == 0x00fa
                           0000FA   891 _SLVSEL	=	0x00fa
                           0000FB   892 G$TXBSY$0$0 == 0x00fb
                           0000FB   893 _TXBSY	=	0x00fb
                           0000FC   894 G$RXOVRN$0$0 == 0x00fc
                           0000FC   895 _RXOVRN	=	0x00fc
                           0000FD   896 G$MODF$0$0 == 0x00fd
                           0000FD   897 _MODF	=	0x00fd
                           0000FE   898 G$WCOL$0$0 == 0x00fe
                           0000FE   899 _WCOL	=	0x00fe
                           0000FF   900 G$SPIF$0$0 == 0x00ff
                           0000FF   901 _SPIF	=	0x00ff
                           0000C7   902 G$BUS_BUSY$0$0 == 0x00c7
                           0000C7   903 _BUS_BUSY	=	0x00c7
                           0000C6   904 G$BUS_EN$0$0 == 0x00c6
                           0000C6   905 _BUS_EN	=	0x00c6
                           0000C5   906 G$BUS_START$0$0 == 0x00c5
                           0000C5   907 _BUS_START	=	0x00c5
                           0000C4   908 G$BUS_STOP$0$0 == 0x00c4
                           0000C4   909 _BUS_STOP	=	0x00c4
                           0000C3   910 G$BUS_INT$0$0 == 0x00c3
                           0000C3   911 _BUS_INT	=	0x00c3
                           0000C2   912 G$BUS_AA$0$0 == 0x00c2
                           0000C2   913 _BUS_AA	=	0x00c2
                           0000C1   914 G$BUS_FTE$0$0 == 0x00c1
                           0000C1   915 _BUS_FTE	=	0x00c1
                           0000C0   916 G$BUS_TOE$0$0 == 0x00c0
                           0000C0   917 _BUS_TOE	=	0x00c0
                           000083   918 G$BUS_SCL$0$0 == 0x0083
                           000083   919 _BUS_SCL	=	0x0083
                                    920 ;--------------------------------------------------------
                                    921 ; overlayable register banks
                                    922 ;--------------------------------------------------------
                                    923 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        924 	.ds 8
                                    925 ;--------------------------------------------------------
                                    926 ; internal ram data
                                    927 ;--------------------------------------------------------
                                    928 	.area DSEG    (DATA)
                           000000   929 Llab3_3compass.lcd_clear$NumBytes$1$77==.
      000022                        930 _lcd_clear_NumBytes_1_77:
      000022                        931 	.ds 1
                           000001   932 Llab3_3compass.lcd_clear$Cmd$1$77==.
      000023                        933 _lcd_clear_Cmd_1_77:
      000023                        934 	.ds 2
                           000003   935 Llab3_3compass.read_keypad$Data$1$78==.
      000025                        936 _read_keypad_Data_1_78:
      000025                        937 	.ds 2
                           000005   938 Llab3_3compass.i2c_write_data$start_reg$1$97==.
      000027                        939 _i2c_write_data_PARM_2:
      000027                        940 	.ds 1
                           000006   941 Llab3_3compass.i2c_write_data$buffer$1$97==.
      000028                        942 _i2c_write_data_PARM_3:
      000028                        943 	.ds 3
                           000009   944 Llab3_3compass.i2c_write_data$num_bytes$1$97==.
      00002B                        945 _i2c_write_data_PARM_4:
      00002B                        946 	.ds 1
                           00000A   947 Llab3_3compass.i2c_read_data$start_reg$1$99==.
      00002C                        948 _i2c_read_data_PARM_2:
      00002C                        949 	.ds 1
                           00000B   950 Llab3_3compass.i2c_read_data$buffer$1$99==.
      00002D                        951 _i2c_read_data_PARM_3:
      00002D                        952 	.ds 3
                           00000E   953 Llab3_3compass.i2c_read_data$num_bytes$1$99==.
      000030                        954 _i2c_read_data_PARM_4:
      000030                        955 	.ds 1
                           00000F   956 Llab3_3compass.Accel_Init$Data2$1$103==.
      000031                        957 _Accel_Init_Data2_1_103:
      000031                        958 	.ds 1
                           000010   959 G$tmp0_lo_to_hi$0$0==.
      000032                        960 _tmp0_lo_to_hi::
      000032                        961 	.ds 2
                           000012   962 G$STR_PW$0$0==.
      000034                        963 _STR_PW::
      000034                        964 	.ds 2
                           000014   965 G$count$0$0==.
      000036                        966 _count::
      000036                        967 	.ds 2
                           000016   968 G$input$0$0==.
      000038                        969 _input::
      000038                        970 	.ds 1
                           000017   971 G$actual_heading$0$0==.
      000039                        972 _actual_heading::
      000039                        973 	.ds 2
                           000019   974 G$desired_heading$0$0==.
      00003B                        975 _desired_heading::
      00003B                        976 	.ds 2
                           00001B   977 G$error$0$0==.
      00003D                        978 _error::
      00003D                        979 	.ds 2
                           00001D   980 G$offset$0$0==.
      00003F                        981 _offset::
      00003F                        982 	.ds 2
                           00001F   983 Llab3_3compass.ReadCompass$Data$1$115==.
      000041                        984 _ReadCompass_Data_1_115:
      000041                        985 	.ds 2
                                    986 ;--------------------------------------------------------
                                    987 ; overlayable items in internal ram 
                                    988 ;--------------------------------------------------------
                                    989 	.area	OSEG    (OVR,DATA)
                                    990 	.area	OSEG    (OVR,DATA)
                                    991 	.area	OSEG    (OVR,DATA)
                                    992 	.area	OSEG    (OVR,DATA)
                                    993 	.area	OSEG    (OVR,DATA)
                                    994 	.area	OSEG    (OVR,DATA)
                                    995 	.area	OSEG    (OVR,DATA)
                                    996 ;--------------------------------------------------------
                                    997 ; Stack segment in internal ram 
                                    998 ;--------------------------------------------------------
                                    999 	.area	SSEG
      00005D                       1000 __start__stack:
      00005D                       1001 	.ds	1
                                   1002 
                                   1003 ;--------------------------------------------------------
                                   1004 ; indirectly addressable internal ram data
                                   1005 ;--------------------------------------------------------
                                   1006 	.area ISEG    (DATA)
                                   1007 ;--------------------------------------------------------
                                   1008 ; absolute internal ram data
                                   1009 ;--------------------------------------------------------
                                   1010 	.area IABS    (ABS,DATA)
                                   1011 	.area IABS    (ABS,DATA)
                                   1012 ;--------------------------------------------------------
                                   1013 ; bit data
                                   1014 ;--------------------------------------------------------
                                   1015 	.area BSEG    (BIT)
                                   1016 ;--------------------------------------------------------
                                   1017 ; paged external ram data
                                   1018 ;--------------------------------------------------------
                                   1019 	.area PSEG    (PAG,XDATA)
                                   1020 ;--------------------------------------------------------
                                   1021 ; external ram data
                                   1022 ;--------------------------------------------------------
                                   1023 	.area XSEG    (XDATA)
                           000000  1024 Llab3_3compass.lcd_print$text$1$73==.
      000001                       1025 _lcd_print_text_1_73:
      000001                       1026 	.ds 80
                                   1027 ;--------------------------------------------------------
                                   1028 ; absolute external ram data
                                   1029 ;--------------------------------------------------------
                                   1030 	.area XABS    (ABS,XDATA)
                                   1031 ;--------------------------------------------------------
                                   1032 ; external initialized ram data
                                   1033 ;--------------------------------------------------------
                                   1034 	.area XISEG   (XDATA)
                                   1035 	.area HOME    (CODE)
                                   1036 	.area GSINIT0 (CODE)
                                   1037 	.area GSINIT1 (CODE)
                                   1038 	.area GSINIT2 (CODE)
                                   1039 	.area GSINIT3 (CODE)
                                   1040 	.area GSINIT4 (CODE)
                                   1041 	.area GSINIT5 (CODE)
                                   1042 	.area GSINIT  (CODE)
                                   1043 	.area GSFINAL (CODE)
                                   1044 	.area CSEG    (CODE)
                                   1045 ;--------------------------------------------------------
                                   1046 ; interrupt vector 
                                   1047 ;--------------------------------------------------------
                                   1048 	.area HOME    (CODE)
      000000                       1049 __interrupt_vect:
      000000 02 00 51         [24] 1050 	ljmp	__sdcc_gsinit_startup
      000003 32               [24] 1051 	reti
      000004                       1052 	.ds	7
      00000B 32               [24] 1053 	reti
      00000C                       1054 	.ds	7
      000013 32               [24] 1055 	reti
      000014                       1056 	.ds	7
      00001B 32               [24] 1057 	reti
      00001C                       1058 	.ds	7
      000023 32               [24] 1059 	reti
      000024                       1060 	.ds	7
      00002B 32               [24] 1061 	reti
      00002C                       1062 	.ds	7
      000033 32               [24] 1063 	reti
      000034                       1064 	.ds	7
      00003B 32               [24] 1065 	reti
      00003C                       1066 	.ds	7
      000043 32               [24] 1067 	reti
      000044                       1068 	.ds	7
      00004B 02 06 7D         [24] 1069 	ljmp	_PCA_ISR
                                   1070 ;--------------------------------------------------------
                                   1071 ; global & static initialisations
                                   1072 ;--------------------------------------------------------
                                   1073 	.area HOME    (CODE)
                                   1074 	.area GSINIT  (CODE)
                                   1075 	.area GSFINAL (CODE)
                                   1076 	.area GSINIT  (CODE)
                                   1077 	.globl __sdcc_gsinit_startup
                                   1078 	.globl __sdcc_program_startup
                                   1079 	.globl __start__stack
                                   1080 	.globl __mcs51_genXINIT
                                   1081 	.globl __mcs51_genXRAMCLEAR
                                   1082 	.globl __mcs51_genRAMCLEAR
                           000000  1083 	C$lab3_3compass.c$26$1$124 ==.
                                   1084 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:26: unsigned int STR_PW   = 0;
      0000AA E4               [12] 1085 	clr	a
      0000AB F5 34            [12] 1086 	mov	_STR_PW,a
      0000AD F5 35            [12] 1087 	mov	(_STR_PW + 1),a
                           000005  1088 	C$lab3_3compass.c$27$1$124 ==.
                                   1089 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:27: unsigned int count = 0;
      0000AF F5 36            [12] 1090 	mov	_count,a
      0000B1 F5 37            [12] 1091 	mov	(_count + 1),a
                           000009  1092 	C$lab3_3compass.c$30$1$124 ==.
                                   1093 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:30: unsigned int desired_heading = 900; //East
      0000B3 75 3B 84         [24] 1094 	mov	_desired_heading,#0x84
      0000B6 75 3C 03         [24] 1095 	mov	(_desired_heading + 1),#0x03
                                   1096 	.area GSFINAL (CODE)
      0000B9 02 00 4E         [24] 1097 	ljmp	__sdcc_program_startup
                                   1098 ;--------------------------------------------------------
                                   1099 ; Home
                                   1100 ;--------------------------------------------------------
                                   1101 	.area HOME    (CODE)
                                   1102 	.area HOME    (CODE)
      00004E                       1103 __sdcc_program_startup:
      00004E 02 05 92         [24] 1104 	ljmp	_main
                                   1105 ;	return from main will return to caller
                                   1106 ;--------------------------------------------------------
                                   1107 ; code
                                   1108 ;--------------------------------------------------------
                                   1109 	.area CSEG    (CODE)
                                   1110 ;------------------------------------------------------------
                                   1111 ;Allocation info for local variables in function 'SYSCLK_Init'
                                   1112 ;------------------------------------------------------------
                                   1113 ;i                         Allocated to registers 
                                   1114 ;------------------------------------------------------------
                           000000  1115 	G$SYSCLK_Init$0$0 ==.
                           000000  1116 	C$c8051_SDCC.h$42$0$0 ==.
                                   1117 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:42: void SYSCLK_Init(void)
                                   1118 ;	-----------------------------------------
                                   1119 ;	 function SYSCLK_Init
                                   1120 ;	-----------------------------------------
      0000BC                       1121 _SYSCLK_Init:
                           000007  1122 	ar7 = 0x07
                           000006  1123 	ar6 = 0x06
                           000005  1124 	ar5 = 0x05
                           000004  1125 	ar4 = 0x04
                           000003  1126 	ar3 = 0x03
                           000002  1127 	ar2 = 0x02
                           000001  1128 	ar1 = 0x01
                           000000  1129 	ar0 = 0x00
                           000000  1130 	C$c8051_SDCC.h$46$1$16 ==.
                                   1131 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:46: OSCXCN = 0x67;                      // start external oscillator with
      0000BC 75 B1 67         [24] 1132 	mov	_OSCXCN,#0x67
                           000003  1133 	C$c8051_SDCC.h$49$1$16 ==.
                                   1134 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:49: for (i=0; i < 256; i++);            // wait for oscillator to start
      0000BF 7E 00            [12] 1135 	mov	r6,#0x00
      0000C1 7F 01            [12] 1136 	mov	r7,#0x01
      0000C3                       1137 00107$:
      0000C3 1E               [12] 1138 	dec	r6
      0000C4 BE FF 01         [24] 1139 	cjne	r6,#0xFF,00121$
      0000C7 1F               [12] 1140 	dec	r7
      0000C8                       1141 00121$:
      0000C8 EE               [12] 1142 	mov	a,r6
      0000C9 4F               [12] 1143 	orl	a,r7
      0000CA 70 F7            [24] 1144 	jnz	00107$
                           000010  1145 	C$c8051_SDCC.h$51$1$16 ==.
                                   1146 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:51: while (!(OSCXCN & 0x80));           // Wait for crystal osc. to settle
      0000CC                       1147 00102$:
      0000CC E5 B1            [12] 1148 	mov	a,_OSCXCN
      0000CE 30 E7 FB         [24] 1149 	jnb	acc.7,00102$
                           000015  1150 	C$c8051_SDCC.h$53$1$16 ==.
                                   1151 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:53: OSCICN = 0x88;                      // select external oscillator as SYSCLK
      0000D1 75 B2 88         [24] 1152 	mov	_OSCICN,#0x88
                           000018  1153 	C$c8051_SDCC.h$56$1$16 ==.
                           000018  1154 	XG$SYSCLK_Init$0$0 ==.
      0000D4 22               [24] 1155 	ret
                                   1156 ;------------------------------------------------------------
                                   1157 ;Allocation info for local variables in function 'UART0_Init'
                                   1158 ;------------------------------------------------------------
                           000019  1159 	G$UART0_Init$0$0 ==.
                           000019  1160 	C$c8051_SDCC.h$64$1$16 ==.
                                   1161 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:64: void UART0_Init(void)
                                   1162 ;	-----------------------------------------
                                   1163 ;	 function UART0_Init
                                   1164 ;	-----------------------------------------
      0000D5                       1165 _UART0_Init:
                           000019  1166 	C$c8051_SDCC.h$66$1$18 ==.
                                   1167 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:66: SCON0  = 0x50;                      // SCON0: mode 1, 8-bit UART, enable RX
      0000D5 75 98 50         [24] 1168 	mov	_SCON0,#0x50
                           00001C  1169 	C$c8051_SDCC.h$67$1$18 ==.
                                   1170 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:67: TMOD   = 0x20;                      // TMOD: timer 1, mode 2, 8-bit reload
      0000D8 75 89 20         [24] 1171 	mov	_TMOD,#0x20
                           00001F  1172 	C$c8051_SDCC.h$68$1$18 ==.
                                   1173 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:68: TH1    = -(SYSCLK/BAUDRATE/16);     // set Timer1 reload value for baudrate
      0000DB 75 8D DC         [24] 1174 	mov	_TH1,#0xDC
                           000022  1175 	C$c8051_SDCC.h$69$1$18 ==.
                                   1176 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:69: TR1    = 1;                         // start Timer1
      0000DE D2 8E            [12] 1177 	setb	_TR1
                           000024  1178 	C$c8051_SDCC.h$70$1$18 ==.
                                   1179 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:70: CKCON |= 0x10;                      // Timer1 uses SYSCLK as time base
      0000E0 43 8E 10         [24] 1180 	orl	_CKCON,#0x10
                           000027  1181 	C$c8051_SDCC.h$71$1$18 ==.
                                   1182 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:71: PCON  |= 0x80;                      // SMOD00 = 1 (disable baud rate 
      0000E3 43 87 80         [24] 1183 	orl	_PCON,#0x80
                           00002A  1184 	C$c8051_SDCC.h$73$1$18 ==.
                                   1185 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:73: TI0    = 1;                         // Indicate TX0 ready
      0000E6 D2 99            [12] 1186 	setb	_TI0
                           00002C  1187 	C$c8051_SDCC.h$74$1$18 ==.
                                   1188 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:74: P0MDOUT |= 0x01;                    // Set TX0 to push/pull
      0000E8 43 A4 01         [24] 1189 	orl	_P0MDOUT,#0x01
                           00002F  1190 	C$c8051_SDCC.h$75$1$18 ==.
                           00002F  1191 	XG$UART0_Init$0$0 ==.
      0000EB 22               [24] 1192 	ret
                                   1193 ;------------------------------------------------------------
                                   1194 ;Allocation info for local variables in function 'Sys_Init'
                                   1195 ;------------------------------------------------------------
                           000030  1196 	G$Sys_Init$0$0 ==.
                           000030  1197 	C$c8051_SDCC.h$83$1$18 ==.
                                   1198 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:83: void Sys_Init(void)
                                   1199 ;	-----------------------------------------
                                   1200 ;	 function Sys_Init
                                   1201 ;	-----------------------------------------
      0000EC                       1202 _Sys_Init:
                           000030  1203 	C$c8051_SDCC.h$85$1$20 ==.
                                   1204 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:85: WDTCN = 0xde;			// disable watchdog timer
      0000EC 75 FF DE         [24] 1205 	mov	_WDTCN,#0xDE
                           000033  1206 	C$c8051_SDCC.h$86$1$20 ==.
                                   1207 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:86: WDTCN = 0xad;
      0000EF 75 FF AD         [24] 1208 	mov	_WDTCN,#0xAD
                           000036  1209 	C$c8051_SDCC.h$88$1$20 ==.
                                   1210 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:88: SYSCLK_Init();			// initialize oscillator
      0000F2 12 00 BC         [24] 1211 	lcall	_SYSCLK_Init
                           000039  1212 	C$c8051_SDCC.h$89$1$20 ==.
                                   1213 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:89: UART0_Init();			// initialize UART0
      0000F5 12 00 D5         [24] 1214 	lcall	_UART0_Init
                           00003C  1215 	C$c8051_SDCC.h$91$1$20 ==.
                                   1216 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:91: XBR0 |= 0x04;
      0000F8 43 E1 04         [24] 1217 	orl	_XBR0,#0x04
                           00003F  1218 	C$c8051_SDCC.h$92$1$20 ==.
                                   1219 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:92: XBR2 |= 0x40;                    	// Enable crossbar and weak pull-ups
      0000FB 43 E3 40         [24] 1220 	orl	_XBR2,#0x40
                           000042  1221 	C$c8051_SDCC.h$93$1$20 ==.
                           000042  1222 	XG$Sys_Init$0$0 ==.
      0000FE 22               [24] 1223 	ret
                                   1224 ;------------------------------------------------------------
                                   1225 ;Allocation info for local variables in function 'putchar'
                                   1226 ;------------------------------------------------------------
                                   1227 ;c                         Allocated to registers r7 
                                   1228 ;------------------------------------------------------------
                           000043  1229 	G$putchar$0$0 ==.
                           000043  1230 	C$c8051_SDCC.h$98$1$20 ==.
                                   1231 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:98: void putchar(char c)
                                   1232 ;	-----------------------------------------
                                   1233 ;	 function putchar
                                   1234 ;	-----------------------------------------
      0000FF                       1235 _putchar:
      0000FF AF 82            [24] 1236 	mov	r7,dpl
                           000045  1237 	C$c8051_SDCC.h$100$1$22 ==.
                                   1238 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:100: while (!TI0); 
      000101                       1239 00101$:
                           000045  1240 	C$c8051_SDCC.h$101$1$22 ==.
                                   1241 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:101: TI0 = 0;
      000101 10 99 02         [24] 1242 	jbc	_TI0,00112$
      000104 80 FB            [24] 1243 	sjmp	00101$
      000106                       1244 00112$:
                           00004A  1245 	C$c8051_SDCC.h$102$1$22 ==.
                                   1246 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:102: SBUF0 = c;
      000106 8F 99            [24] 1247 	mov	_SBUF0,r7
                           00004C  1248 	C$c8051_SDCC.h$103$1$22 ==.
                           00004C  1249 	XG$putchar$0$0 ==.
      000108 22               [24] 1250 	ret
                                   1251 ;------------------------------------------------------------
                                   1252 ;Allocation info for local variables in function 'getchar'
                                   1253 ;------------------------------------------------------------
                                   1254 ;c                         Allocated to registers 
                                   1255 ;------------------------------------------------------------
                           00004D  1256 	G$getchar$0$0 ==.
                           00004D  1257 	C$c8051_SDCC.h$108$1$22 ==.
                                   1258 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:108: char getchar(void)
                                   1259 ;	-----------------------------------------
                                   1260 ;	 function getchar
                                   1261 ;	-----------------------------------------
      000109                       1262 _getchar:
                           00004D  1263 	C$c8051_SDCC.h$111$1$24 ==.
                                   1264 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:111: while (!RI0);
      000109                       1265 00101$:
                           00004D  1266 	C$c8051_SDCC.h$112$1$24 ==.
                                   1267 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:112: RI0 = 0;
      000109 10 98 02         [24] 1268 	jbc	_RI0,00112$
      00010C 80 FB            [24] 1269 	sjmp	00101$
      00010E                       1270 00112$:
                           000052  1271 	C$c8051_SDCC.h$113$1$24 ==.
                                   1272 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:113: c = SBUF0;
      00010E 85 99 82         [24] 1273 	mov	dpl,_SBUF0
                           000055  1274 	C$c8051_SDCC.h$114$1$24 ==.
                                   1275 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:114: putchar(c);                          // echo to terminal
      000111 12 00 FF         [24] 1276 	lcall	_putchar
                           000058  1277 	C$c8051_SDCC.h$115$1$24 ==.
                                   1278 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:115: return SBUF0;
      000114 85 99 82         [24] 1279 	mov	dpl,_SBUF0
                           00005B  1280 	C$c8051_SDCC.h$116$1$24 ==.
                           00005B  1281 	XG$getchar$0$0 ==.
      000117 22               [24] 1282 	ret
                                   1283 ;------------------------------------------------------------
                                   1284 ;Allocation info for local variables in function 'lcd_print'
                                   1285 ;------------------------------------------------------------
                                   1286 ;fmt                       Allocated to stack - _bp -5
                                   1287 ;len                       Allocated to registers r6 
                                   1288 ;i                         Allocated to registers 
                                   1289 ;ap                        Allocated to registers 
                                   1290 ;text                      Allocated with name '_lcd_print_text_1_73'
                                   1291 ;------------------------------------------------------------
                           00005C  1292 	G$lcd_print$0$0 ==.
                           00005C  1293 	C$i2c.h$81$1$24 ==.
                                   1294 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:81: void lcd_print(const char *fmt, ...)
                                   1295 ;	-----------------------------------------
                                   1296 ;	 function lcd_print
                                   1297 ;	-----------------------------------------
      000118                       1298 _lcd_print:
      000118 C0 0F            [24] 1299 	push	_bp
      00011A 85 81 0F         [24] 1300 	mov	_bp,sp
                           000061  1301 	C$i2c.h$87$1$73 ==.
                                   1302 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:87: if ( strlen(fmt) <= 0 ) return;   //If there is no data to print, return
      00011D E5 0F            [12] 1303 	mov	a,_bp
      00011F 24 FB            [12] 1304 	add	a,#0xfb
      000121 F8               [12] 1305 	mov	r0,a
      000122 86 82            [24] 1306 	mov	dpl,@r0
      000124 08               [12] 1307 	inc	r0
      000125 86 83            [24] 1308 	mov	dph,@r0
      000127 08               [12] 1309 	inc	r0
      000128 86 F0            [24] 1310 	mov	b,@r0
      00012A 12 0E 92         [24] 1311 	lcall	_strlen
      00012D E5 82            [12] 1312 	mov	a,dpl
      00012F 85 83 F0         [24] 1313 	mov	b,dph
      000132 45 F0            [12] 1314 	orl	a,b
      000134 70 02            [24] 1315 	jnz	00102$
      000136 80 62            [24] 1316 	sjmp	00109$
      000138                       1317 00102$:
                           00007C  1318 	C$i2c.h$89$2$74 ==.
                                   1319 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:89: va_start(ap, fmt);
      000138 E5 0F            [12] 1320 	mov	a,_bp
      00013A 24 FB            [12] 1321 	add	a,#0xFB
      00013C FF               [12] 1322 	mov	r7,a
      00013D 8F 0B            [24] 1323 	mov	_vsprintf_PARM_3,r7
                           000083  1324 	C$i2c.h$90$1$73 ==.
                                   1325 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:90: vsprintf(text, fmt, ap);
      00013F E5 0F            [12] 1326 	mov	a,_bp
      000141 24 FB            [12] 1327 	add	a,#0xfb
      000143 F8               [12] 1328 	mov	r0,a
      000144 86 08            [24] 1329 	mov	_vsprintf_PARM_2,@r0
      000146 08               [12] 1330 	inc	r0
      000147 86 09            [24] 1331 	mov	(_vsprintf_PARM_2 + 1),@r0
      000149 08               [12] 1332 	inc	r0
      00014A 86 0A            [24] 1333 	mov	(_vsprintf_PARM_2 + 2),@r0
      00014C 90 00 01         [24] 1334 	mov	dptr,#_lcd_print_text_1_73
      00014F 75 F0 00         [24] 1335 	mov	b,#0x00
      000152 12 07 BA         [24] 1336 	lcall	_vsprintf
                           000099  1337 	C$i2c.h$93$1$73 ==.
                                   1338 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:93: len = strlen(text);
      000155 90 00 01         [24] 1339 	mov	dptr,#_lcd_print_text_1_73
      000158 75 F0 00         [24] 1340 	mov	b,#0x00
      00015B 12 0E 92         [24] 1341 	lcall	_strlen
      00015E AE 82            [24] 1342 	mov	r6,dpl
                           0000A4  1343 	C$i2c.h$94$1$73 ==.
                                   1344 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:94: for(i=0; i<len; i++)
      000160 7F 00            [12] 1345 	mov	r7,#0x00
      000162                       1346 00107$:
      000162 C3               [12] 1347 	clr	c
      000163 EF               [12] 1348 	mov	a,r7
      000164 9E               [12] 1349 	subb	a,r6
      000165 50 1F            [24] 1350 	jnc	00105$
                           0000AB  1351 	C$i2c.h$96$2$76 ==.
                                   1352 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:96: if(text[i] == (unsigned char)'\n') text[i] = 13;
      000167 EF               [12] 1353 	mov	a,r7
      000168 24 01            [12] 1354 	add	a,#_lcd_print_text_1_73
      00016A F5 82            [12] 1355 	mov	dpl,a
      00016C E4               [12] 1356 	clr	a
      00016D 34 00            [12] 1357 	addc	a,#(_lcd_print_text_1_73 >> 8)
      00016F F5 83            [12] 1358 	mov	dph,a
      000171 E0               [24] 1359 	movx	a,@dptr
      000172 FD               [12] 1360 	mov	r5,a
      000173 BD 0A 0D         [24] 1361 	cjne	r5,#0x0A,00108$
      000176 EF               [12] 1362 	mov	a,r7
      000177 24 01            [12] 1363 	add	a,#_lcd_print_text_1_73
      000179 F5 82            [12] 1364 	mov	dpl,a
      00017B E4               [12] 1365 	clr	a
      00017C 34 00            [12] 1366 	addc	a,#(_lcd_print_text_1_73 >> 8)
      00017E F5 83            [12] 1367 	mov	dph,a
      000180 74 0D            [12] 1368 	mov	a,#0x0D
      000182 F0               [24] 1369 	movx	@dptr,a
      000183                       1370 00108$:
                           0000C7  1371 	C$i2c.h$94$1$73 ==.
                                   1372 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:94: for(i=0; i<len; i++)
      000183 0F               [12] 1373 	inc	r7
      000184 80 DC            [24] 1374 	sjmp	00107$
      000186                       1375 00105$:
                           0000CA  1376 	C$i2c.h$99$1$73 ==.
                                   1377 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:99: i2c_write_data(0xC6, 0x00, text, len);
      000186 75 28 01         [24] 1378 	mov	_i2c_write_data_PARM_3,#_lcd_print_text_1_73
      000189 75 29 00         [24] 1379 	mov	(_i2c_write_data_PARM_3 + 1),#(_lcd_print_text_1_73 >> 8)
      00018C 75 2A 00         [24] 1380 	mov	(_i2c_write_data_PARM_3 + 2),#0x00
      00018F 75 27 00         [24] 1381 	mov	_i2c_write_data_PARM_2,#0x00
      000192 8E 2B            [24] 1382 	mov	_i2c_write_data_PARM_4,r6
      000194 75 82 C6         [24] 1383 	mov	dpl,#0xC6
      000197 12 04 2E         [24] 1384 	lcall	_i2c_write_data
      00019A                       1385 00109$:
      00019A D0 0F            [24] 1386 	pop	_bp
                           0000E0  1387 	C$i2c.h$100$1$73 ==.
                           0000E0  1388 	XG$lcd_print$0$0 ==.
      00019C 22               [24] 1389 	ret
                                   1390 ;------------------------------------------------------------
                                   1391 ;Allocation info for local variables in function 'lcd_clear'
                                   1392 ;------------------------------------------------------------
                                   1393 ;NumBytes                  Allocated with name '_lcd_clear_NumBytes_1_77'
                                   1394 ;Cmd                       Allocated with name '_lcd_clear_Cmd_1_77'
                                   1395 ;------------------------------------------------------------
                           0000E1  1396 	G$lcd_clear$0$0 ==.
                           0000E1  1397 	C$i2c.h$103$1$73 ==.
                                   1398 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:103: void lcd_clear()
                                   1399 ;	-----------------------------------------
                                   1400 ;	 function lcd_clear
                                   1401 ;	-----------------------------------------
      00019D                       1402 _lcd_clear:
                           0000E1  1403 	C$i2c.h$105$1$73 ==.
                                   1404 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:105: unsigned char NumBytes=0, Cmd[2];
      00019D 75 22 00         [24] 1405 	mov	_lcd_clear_NumBytes_1_77,#0x00
                           0000E4  1406 	C$i2c.h$107$1$77 ==.
                                   1407 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:107: while(NumBytes < 64) i2c_read_data(0xC6, 0x00, &NumBytes, 1);
      0001A0                       1408 00101$:
      0001A0 74 C0            [12] 1409 	mov	a,#0x100 - 0x40
      0001A2 25 22            [12] 1410 	add	a,_lcd_clear_NumBytes_1_77
      0001A4 40 17            [24] 1411 	jc	00103$
      0001A6 75 2D 22         [24] 1412 	mov	_i2c_read_data_PARM_3,#_lcd_clear_NumBytes_1_77
      0001A9 75 2E 00         [24] 1413 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0001AC 75 2F 40         [24] 1414 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0001AF 75 2C 00         [24] 1415 	mov	_i2c_read_data_PARM_2,#0x00
      0001B2 75 30 01         [24] 1416 	mov	_i2c_read_data_PARM_4,#0x01
      0001B5 75 82 C6         [24] 1417 	mov	dpl,#0xC6
      0001B8 12 04 A4         [24] 1418 	lcall	_i2c_read_data
      0001BB 80 E3            [24] 1419 	sjmp	00101$
      0001BD                       1420 00103$:
                           000101  1421 	C$i2c.h$109$1$77 ==.
                                   1422 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:109: Cmd[0] = 12;
      0001BD 75 23 0C         [24] 1423 	mov	_lcd_clear_Cmd_1_77,#0x0C
                           000104  1424 	C$i2c.h$110$1$77 ==.
                                   1425 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:110: i2c_write_data(0xC6, 0x00, Cmd, 1);
      0001C0 75 28 23         [24] 1426 	mov	_i2c_write_data_PARM_3,#_lcd_clear_Cmd_1_77
      0001C3 75 29 00         [24] 1427 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      0001C6 75 2A 40         [24] 1428 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      0001C9 75 27 00         [24] 1429 	mov	_i2c_write_data_PARM_2,#0x00
      0001CC 75 2B 01         [24] 1430 	mov	_i2c_write_data_PARM_4,#0x01
      0001CF 75 82 C6         [24] 1431 	mov	dpl,#0xC6
      0001D2 12 04 2E         [24] 1432 	lcall	_i2c_write_data
                           000119  1433 	C$i2c.h$111$1$77 ==.
                           000119  1434 	XG$lcd_clear$0$0 ==.
      0001D5 22               [24] 1435 	ret
                                   1436 ;------------------------------------------------------------
                                   1437 ;Allocation info for local variables in function 'read_keypad'
                                   1438 ;------------------------------------------------------------
                                   1439 ;i                         Allocated to registers r7 
                                   1440 ;Data                      Allocated with name '_read_keypad_Data_1_78'
                                   1441 ;------------------------------------------------------------
                           00011A  1442 	G$read_keypad$0$0 ==.
                           00011A  1443 	C$i2c.h$114$1$77 ==.
                                   1444 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:114: char read_keypad()
                                   1445 ;	-----------------------------------------
                                   1446 ;	 function read_keypad
                                   1447 ;	-----------------------------------------
      0001D6                       1448 _read_keypad:
                           00011A  1449 	C$i2c.h$118$1$78 ==.
                                   1450 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:118: i2c_read_data(0xC6, 0x01, Data, 2); //Read I2C data on address 192, register 1, 2 bytes of data.
      0001D6 75 2D 25         [24] 1451 	mov	_i2c_read_data_PARM_3,#_read_keypad_Data_1_78
      0001D9 75 2E 00         [24] 1452 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0001DC 75 2F 40         [24] 1453 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0001DF 75 2C 01         [24] 1454 	mov	_i2c_read_data_PARM_2,#0x01
      0001E2 75 30 02         [24] 1455 	mov	_i2c_read_data_PARM_4,#0x02
      0001E5 75 82 C6         [24] 1456 	mov	dpl,#0xC6
      0001E8 12 04 A4         [24] 1457 	lcall	_i2c_read_data
                           00012F  1458 	C$i2c.h$119$1$78 ==.
                                   1459 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:119: if(Data[0] == 0xFF) return 0;  //No response on bus, no display
      0001EB 74 FF            [12] 1460 	mov	a,#0xFF
      0001ED B5 25 05         [24] 1461 	cjne	a,_read_keypad_Data_1_78,00102$
      0001F0 75 82 00         [24] 1462 	mov	dpl,#0x00
      0001F3 80 5F            [24] 1463 	sjmp	00116$
      0001F5                       1464 00102$:
                           000139  1465 	C$i2c.h$121$1$78 ==.
                                   1466 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:121: for(i=0; i<8; i++)             //loop 8 times
      0001F5 7F 00            [12] 1467 	mov	r7,#0x00
      0001F7 8F 06            [24] 1468 	mov	ar6,r7
      0001F9                       1469 00114$:
                           00013D  1470 	C$i2c.h$123$2$79 ==.
                                   1471 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:123: if(Data[0] & (0x01 << i))  //find the ASCII value of the keypad read, if it is the current loop value
      0001F9 8E F0            [24] 1472 	mov	b,r6
      0001FB 05 F0            [12] 1473 	inc	b
      0001FD 7C 01            [12] 1474 	mov	r4,#0x01
      0001FF 7D 00            [12] 1475 	mov	r5,#0x00
      000201 80 06            [24] 1476 	sjmp	00145$
      000203                       1477 00144$:
      000203 EC               [12] 1478 	mov	a,r4
      000204 2C               [12] 1479 	add	a,r4
      000205 FC               [12] 1480 	mov	r4,a
      000206 ED               [12] 1481 	mov	a,r5
      000207 33               [12] 1482 	rlc	a
      000208 FD               [12] 1483 	mov	r5,a
      000209                       1484 00145$:
      000209 D5 F0 F7         [24] 1485 	djnz	b,00144$
      00020C AA 25            [24] 1486 	mov	r2,_read_keypad_Data_1_78
      00020E 7B 00            [12] 1487 	mov	r3,#0x00
      000210 EA               [12] 1488 	mov	a,r2
      000211 52 04            [12] 1489 	anl	ar4,a
      000213 EB               [12] 1490 	mov	a,r3
      000214 52 05            [12] 1491 	anl	ar5,a
      000216 EC               [12] 1492 	mov	a,r4
      000217 4D               [12] 1493 	orl	a,r5
      000218 60 07            [24] 1494 	jz	00115$
                           00015E  1495 	C$i2c.h$124$2$79 ==.
                                   1496 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:124: return i+49;
      00021A 74 31            [12] 1497 	mov	a,#0x31
      00021C 2F               [12] 1498 	add	a,r7
      00021D F5 82            [12] 1499 	mov	dpl,a
      00021F 80 33            [24] 1500 	sjmp	00116$
      000221                       1501 00115$:
                           000165  1502 	C$i2c.h$121$1$78 ==.
                                   1503 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:121: for(i=0; i<8; i++)             //loop 8 times
      000221 0E               [12] 1504 	inc	r6
      000222 8E 07            [24] 1505 	mov	ar7,r6
      000224 BE 08 00         [24] 1506 	cjne	r6,#0x08,00147$
      000227                       1507 00147$:
      000227 40 D0            [24] 1508 	jc	00114$
                           00016D  1509 	C$i2c.h$127$1$78 ==.
                                   1510 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:127: if(Data[1] & 0x01) return '9'; //if the value is equal to 9 return 9.
      000229 E5 26            [12] 1511 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      00022B 30 E0 05         [24] 1512 	jnb	acc.0,00107$
      00022E 75 82 39         [24] 1513 	mov	dpl,#0x39
      000231 80 21            [24] 1514 	sjmp	00116$
      000233                       1515 00107$:
                           000177  1516 	C$i2c.h$129$1$78 ==.
                                   1517 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:129: if(Data[1] & 0x02) return '*'; //if the value is equal to the star.
      000233 E5 26            [12] 1518 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000235 30 E1 05         [24] 1519 	jnb	acc.1,00109$
      000238 75 82 2A         [24] 1520 	mov	dpl,#0x2A
      00023B 80 17            [24] 1521 	sjmp	00116$
      00023D                       1522 00109$:
                           000181  1523 	C$i2c.h$131$1$78 ==.
                                   1524 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:131: if(Data[1] & 0x04) return '0'; //if the value is equal to the 0 key
      00023D E5 26            [12] 1525 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      00023F 30 E2 05         [24] 1526 	jnb	acc.2,00111$
      000242 75 82 30         [24] 1527 	mov	dpl,#0x30
      000245 80 0D            [24] 1528 	sjmp	00116$
      000247                       1529 00111$:
                           00018B  1530 	C$i2c.h$133$1$78 ==.
                                   1531 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:133: if(Data[1] & 0x08) return '#'; //if the value is equal to the pound key
      000247 E5 26            [12] 1532 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000249 30 E3 05         [24] 1533 	jnb	acc.3,00113$
      00024C 75 82 23         [24] 1534 	mov	dpl,#0x23
      00024F 80 03            [24] 1535 	sjmp	00116$
      000251                       1536 00113$:
                           000195  1537 	C$i2c.h$135$1$78 ==.
                                   1538 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:135: return -1;                     //else return a numerical -1 (0xFF)
      000251 75 82 FF         [24] 1539 	mov	dpl,#0xFF
      000254                       1540 00116$:
                           000198  1541 	C$i2c.h$136$1$78 ==.
                           000198  1542 	XG$read_keypad$0$0 ==.
      000254 22               [24] 1543 	ret
                                   1544 ;------------------------------------------------------------
                                   1545 ;Allocation info for local variables in function 'kpd_input'
                                   1546 ;------------------------------------------------------------
                                   1547 ;mode                      Allocated to registers r7 
                                   1548 ;sum                       Allocated to registers r5 r6 
                                   1549 ;key                       Allocated to registers r3 
                                   1550 ;i                         Allocated to registers 
                                   1551 ;------------------------------------------------------------
                           000199  1552 	G$kpd_input$0$0 ==.
                           000199  1553 	C$i2c.h$148$1$78 ==.
                                   1554 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:148: unsigned int kpd_input(char mode)
                                   1555 ;	-----------------------------------------
                                   1556 ;	 function kpd_input
                                   1557 ;	-----------------------------------------
      000255                       1558 _kpd_input:
      000255 AF 82            [24] 1559 	mov	r7,dpl
                           00019B  1560 	C$i2c.h$153$1$81 ==.
                                   1561 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:153: sum = 0;
                           00019B  1562 	C$i2c.h$156$1$81 ==.
                                   1563 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:156: if(mode==0)lcd_print("\nType digits; end w/#");
      000257 E4               [12] 1564 	clr	a
      000258 FD               [12] 1565 	mov	r5,a
      000259 FE               [12] 1566 	mov	r6,a
      00025A EF               [12] 1567 	mov	a,r7
      00025B 70 1D            [24] 1568 	jnz	00102$
      00025D C0 06            [24] 1569 	push	ar6
      00025F C0 05            [24] 1570 	push	ar5
      000261 74 CA            [12] 1571 	mov	a,#___str_0
      000263 C0 E0            [24] 1572 	push	acc
      000265 74 0E            [12] 1573 	mov	a,#(___str_0 >> 8)
      000267 C0 E0            [24] 1574 	push	acc
      000269 74 80            [12] 1575 	mov	a,#0x80
      00026B C0 E0            [24] 1576 	push	acc
      00026D 12 01 18         [24] 1577 	lcall	_lcd_print
      000270 15 81            [12] 1578 	dec	sp
      000272 15 81            [12] 1579 	dec	sp
      000274 15 81            [12] 1580 	dec	sp
      000276 D0 05            [24] 1581 	pop	ar5
      000278 D0 06            [24] 1582 	pop	ar6
      00027A                       1583 00102$:
                           0001BE  1584 	C$i2c.h$158$1$81 ==.
                                   1585 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:158: lcd_print("     %c%c%c%c%c",0x08,0x08,0x08,0x08,0x08);
      00027A C0 06            [24] 1586 	push	ar6
      00027C C0 05            [24] 1587 	push	ar5
      00027E 74 08            [12] 1588 	mov	a,#0x08
      000280 C0 E0            [24] 1589 	push	acc
      000282 E4               [12] 1590 	clr	a
      000283 C0 E0            [24] 1591 	push	acc
      000285 74 08            [12] 1592 	mov	a,#0x08
      000287 C0 E0            [24] 1593 	push	acc
      000289 E4               [12] 1594 	clr	a
      00028A C0 E0            [24] 1595 	push	acc
      00028C 74 08            [12] 1596 	mov	a,#0x08
      00028E C0 E0            [24] 1597 	push	acc
      000290 E4               [12] 1598 	clr	a
      000291 C0 E0            [24] 1599 	push	acc
      000293 74 08            [12] 1600 	mov	a,#0x08
      000295 C0 E0            [24] 1601 	push	acc
      000297 E4               [12] 1602 	clr	a
      000298 C0 E0            [24] 1603 	push	acc
      00029A 74 08            [12] 1604 	mov	a,#0x08
      00029C C0 E0            [24] 1605 	push	acc
      00029E E4               [12] 1606 	clr	a
      00029F C0 E0            [24] 1607 	push	acc
      0002A1 74 E0            [12] 1608 	mov	a,#___str_1
      0002A3 C0 E0            [24] 1609 	push	acc
      0002A5 74 0E            [12] 1610 	mov	a,#(___str_1 >> 8)
      0002A7 C0 E0            [24] 1611 	push	acc
      0002A9 74 80            [12] 1612 	mov	a,#0x80
      0002AB C0 E0            [24] 1613 	push	acc
      0002AD 12 01 18         [24] 1614 	lcall	_lcd_print
      0002B0 E5 81            [12] 1615 	mov	a,sp
      0002B2 24 F3            [12] 1616 	add	a,#0xf3
      0002B4 F5 81            [12] 1617 	mov	sp,a
                           0001FA  1618 	C$i2c.h$160$1$81 ==.
                                   1619 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:160: delay_time(500000);	//Add 20ms delay before reading i2c in loop
      0002B6 90 A1 20         [24] 1620 	mov	dptr,#0xA120
      0002B9 75 F0 07         [24] 1621 	mov	b,#0x07
      0002BC E4               [12] 1622 	clr	a
      0002BD 12 03 C9         [24] 1623 	lcall	_delay_time
      0002C0 D0 05            [24] 1624 	pop	ar5
      0002C2 D0 06            [24] 1625 	pop	ar6
                           000208  1626 	C$i2c.h$164$1$81 ==.
                                   1627 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:164: for(i=0; i<5; i++)
      0002C4 7F 00            [12] 1628 	mov	r7,#0x00
                           00020A  1629 	C$i2c.h$166$3$84 ==.
                                   1630 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:166: while(((key=read_keypad()) == -1) || (key == '*'))delay_time(10000);
      0002C6                       1631 00104$:
      0002C6 C0 07            [24] 1632 	push	ar7
      0002C8 C0 06            [24] 1633 	push	ar6
      0002CA C0 05            [24] 1634 	push	ar5
      0002CC 12 01 D6         [24] 1635 	lcall	_read_keypad
      0002CF AC 82            [24] 1636 	mov	r4,dpl
      0002D1 D0 05            [24] 1637 	pop	ar5
      0002D3 D0 06            [24] 1638 	pop	ar6
      0002D5 D0 07            [24] 1639 	pop	ar7
      0002D7 8C 03            [24] 1640 	mov	ar3,r4
      0002D9 BC FF 02         [24] 1641 	cjne	r4,#0xFF,00146$
      0002DC 80 03            [24] 1642 	sjmp	00105$
      0002DE                       1643 00146$:
      0002DE BB 2A 17         [24] 1644 	cjne	r3,#0x2A,00106$
      0002E1                       1645 00105$:
      0002E1 90 27 10         [24] 1646 	mov	dptr,#0x2710
      0002E4 E4               [12] 1647 	clr	a
      0002E5 F5 F0            [12] 1648 	mov	b,a
      0002E7 C0 07            [24] 1649 	push	ar7
      0002E9 C0 06            [24] 1650 	push	ar6
      0002EB C0 05            [24] 1651 	push	ar5
      0002ED 12 03 C9         [24] 1652 	lcall	_delay_time
      0002F0 D0 05            [24] 1653 	pop	ar5
      0002F2 D0 06            [24] 1654 	pop	ar6
      0002F4 D0 07            [24] 1655 	pop	ar7
      0002F6 80 CE            [24] 1656 	sjmp	00104$
      0002F8                       1657 00106$:
                           00023C  1658 	C$i2c.h$167$2$82 ==.
                                   1659 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:167: if(key == '#')
      0002F8 BB 23 2A         [24] 1660 	cjne	r3,#0x23,00114$
                           00023F  1661 	C$i2c.h$169$3$83 ==.
                                   1662 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:169: while(read_keypad() == '#')delay_time(10000);
      0002FB                       1663 00107$:
      0002FB C0 06            [24] 1664 	push	ar6
      0002FD C0 05            [24] 1665 	push	ar5
      0002FF 12 01 D6         [24] 1666 	lcall	_read_keypad
      000302 AC 82            [24] 1667 	mov	r4,dpl
      000304 D0 05            [24] 1668 	pop	ar5
      000306 D0 06            [24] 1669 	pop	ar6
      000308 BC 23 13         [24] 1670 	cjne	r4,#0x23,00109$
      00030B 90 27 10         [24] 1671 	mov	dptr,#0x2710
      00030E E4               [12] 1672 	clr	a
      00030F F5 F0            [12] 1673 	mov	b,a
      000311 C0 06            [24] 1674 	push	ar6
      000313 C0 05            [24] 1675 	push	ar5
      000315 12 03 C9         [24] 1676 	lcall	_delay_time
      000318 D0 05            [24] 1677 	pop	ar5
      00031A D0 06            [24] 1678 	pop	ar6
      00031C 80 DD            [24] 1679 	sjmp	00107$
      00031E                       1680 00109$:
                           000262  1681 	C$i2c.h$170$3$83 ==.
                                   1682 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:170: return sum;
      00031E 8D 82            [24] 1683 	mov	dpl,r5
      000320 8E 83            [24] 1684 	mov	dph,r6
      000322 02 03 C8         [24] 1685 	ljmp	00119$
      000325                       1686 00114$:
                           000269  1687 	C$i2c.h$174$3$84 ==.
                                   1688 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:174: lcd_print("%c", key);
      000325 EB               [12] 1689 	mov	a,r3
      000326 FA               [12] 1690 	mov	r2,a
      000327 33               [12] 1691 	rlc	a
      000328 95 E0            [12] 1692 	subb	a,acc
      00032A FC               [12] 1693 	mov	r4,a
      00032B C0 07            [24] 1694 	push	ar7
      00032D C0 06            [24] 1695 	push	ar6
      00032F C0 05            [24] 1696 	push	ar5
      000331 C0 04            [24] 1697 	push	ar4
      000333 C0 03            [24] 1698 	push	ar3
      000335 C0 02            [24] 1699 	push	ar2
      000337 C0 02            [24] 1700 	push	ar2
      000339 C0 04            [24] 1701 	push	ar4
      00033B 74 F0            [12] 1702 	mov	a,#___str_2
      00033D C0 E0            [24] 1703 	push	acc
      00033F 74 0E            [12] 1704 	mov	a,#(___str_2 >> 8)
      000341 C0 E0            [24] 1705 	push	acc
      000343 74 80            [12] 1706 	mov	a,#0x80
      000345 C0 E0            [24] 1707 	push	acc
      000347 12 01 18         [24] 1708 	lcall	_lcd_print
      00034A E5 81            [12] 1709 	mov	a,sp
      00034C 24 FB            [12] 1710 	add	a,#0xfb
      00034E F5 81            [12] 1711 	mov	sp,a
      000350 D0 02            [24] 1712 	pop	ar2
      000352 D0 03            [24] 1713 	pop	ar3
      000354 D0 04            [24] 1714 	pop	ar4
      000356 D0 05            [24] 1715 	pop	ar5
      000358 D0 06            [24] 1716 	pop	ar6
                           00029E  1717 	C$i2c.h$175$1$81 ==.
                                   1718 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:175: sum = sum*10 + key - '0';
      00035A 8D 11            [24] 1719 	mov	__mulint_PARM_2,r5
      00035C 8E 12            [24] 1720 	mov	(__mulint_PARM_2 + 1),r6
      00035E 90 00 0A         [24] 1721 	mov	dptr,#0x000A
      000361 C0 04            [24] 1722 	push	ar4
      000363 C0 03            [24] 1723 	push	ar3
      000365 C0 02            [24] 1724 	push	ar2
      000367 12 07 2D         [24] 1725 	lcall	__mulint
      00036A A8 82            [24] 1726 	mov	r0,dpl
      00036C A9 83            [24] 1727 	mov	r1,dph
      00036E D0 02            [24] 1728 	pop	ar2
      000370 D0 03            [24] 1729 	pop	ar3
      000372 D0 04            [24] 1730 	pop	ar4
      000374 D0 07            [24] 1731 	pop	ar7
      000376 EA               [12] 1732 	mov	a,r2
      000377 28               [12] 1733 	add	a,r0
      000378 F8               [12] 1734 	mov	r0,a
      000379 EC               [12] 1735 	mov	a,r4
      00037A 39               [12] 1736 	addc	a,r1
      00037B F9               [12] 1737 	mov	r1,a
      00037C E8               [12] 1738 	mov	a,r0
      00037D 24 D0            [12] 1739 	add	a,#0xD0
      00037F FD               [12] 1740 	mov	r5,a
      000380 E9               [12] 1741 	mov	a,r1
      000381 34 FF            [12] 1742 	addc	a,#0xFF
      000383 FE               [12] 1743 	mov	r6,a
                           0002C8  1744 	C$i2c.h$176$3$84 ==.
                                   1745 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:176: while(read_keypad() == key)delay_time(10000); //wait for key to be released
      000384                       1746 00110$:
      000384 C0 07            [24] 1747 	push	ar7
      000386 C0 06            [24] 1748 	push	ar6
      000388 C0 05            [24] 1749 	push	ar5
      00038A C0 03            [24] 1750 	push	ar3
      00038C 12 01 D6         [24] 1751 	lcall	_read_keypad
      00038F AC 82            [24] 1752 	mov	r4,dpl
      000391 D0 03            [24] 1753 	pop	ar3
      000393 D0 05            [24] 1754 	pop	ar5
      000395 D0 06            [24] 1755 	pop	ar6
      000397 D0 07            [24] 1756 	pop	ar7
      000399 EC               [12] 1757 	mov	a,r4
      00039A B5 03 1B         [24] 1758 	cjne	a,ar3,00118$
      00039D 90 27 10         [24] 1759 	mov	dptr,#0x2710
      0003A0 E4               [12] 1760 	clr	a
      0003A1 F5 F0            [12] 1761 	mov	b,a
      0003A3 C0 07            [24] 1762 	push	ar7
      0003A5 C0 06            [24] 1763 	push	ar6
      0003A7 C0 05            [24] 1764 	push	ar5
      0003A9 C0 03            [24] 1765 	push	ar3
      0003AB 12 03 C9         [24] 1766 	lcall	_delay_time
      0003AE D0 03            [24] 1767 	pop	ar3
      0003B0 D0 05            [24] 1768 	pop	ar5
      0003B2 D0 06            [24] 1769 	pop	ar6
      0003B4 D0 07            [24] 1770 	pop	ar7
      0003B6 80 CC            [24] 1771 	sjmp	00110$
      0003B8                       1772 00118$:
                           0002FC  1773 	C$i2c.h$164$1$81 ==.
                                   1774 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:164: for(i=0; i<5; i++)
      0003B8 0F               [12] 1775 	inc	r7
      0003B9 C3               [12] 1776 	clr	c
      0003BA EF               [12] 1777 	mov	a,r7
      0003BB 64 80            [12] 1778 	xrl	a,#0x80
      0003BD 94 85            [12] 1779 	subb	a,#0x85
      0003BF 50 03            [24] 1780 	jnc	00155$
      0003C1 02 02 C6         [24] 1781 	ljmp	00104$
      0003C4                       1782 00155$:
                           000308  1783 	C$i2c.h$179$1$81 ==.
                                   1784 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:179: return sum;
      0003C4 8D 82            [24] 1785 	mov	dpl,r5
      0003C6 8E 83            [24] 1786 	mov	dph,r6
      0003C8                       1787 00119$:
                           00030C  1788 	C$i2c.h$180$1$81 ==.
                           00030C  1789 	XG$kpd_input$0$0 ==.
      0003C8 22               [24] 1790 	ret
                                   1791 ;------------------------------------------------------------
                                   1792 ;Allocation info for local variables in function 'delay_time'
                                   1793 ;------------------------------------------------------------
                                   1794 ;time_end                  Allocated to registers r4 r5 r6 r7 
                                   1795 ;index                     Allocated to registers 
                                   1796 ;------------------------------------------------------------
                           00030D  1797 	G$delay_time$0$0 ==.
                           00030D  1798 	C$i2c.h$189$1$81 ==.
                                   1799 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:189: void delay_time (unsigned long time_end)
                                   1800 ;	-----------------------------------------
                                   1801 ;	 function delay_time
                                   1802 ;	-----------------------------------------
      0003C9                       1803 _delay_time:
      0003C9 AC 82            [24] 1804 	mov	r4,dpl
      0003CB AD 83            [24] 1805 	mov	r5,dph
      0003CD AE F0            [24] 1806 	mov	r6,b
      0003CF FF               [12] 1807 	mov	r7,a
                           000314  1808 	C$i2c.h$192$1$86 ==.
                                   1809 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:192: for (index = 0; index < time_end; index++); //for loop delay
      0003D0 78 00            [12] 1810 	mov	r0,#0x00
      0003D2 79 00            [12] 1811 	mov	r1,#0x00
      0003D4 7A 00            [12] 1812 	mov	r2,#0x00
      0003D6 7B 00            [12] 1813 	mov	r3,#0x00
      0003D8                       1814 00103$:
      0003D8 C3               [12] 1815 	clr	c
      0003D9 E8               [12] 1816 	mov	a,r0
      0003DA 9C               [12] 1817 	subb	a,r4
      0003DB E9               [12] 1818 	mov	a,r1
      0003DC 9D               [12] 1819 	subb	a,r5
      0003DD EA               [12] 1820 	mov	a,r2
      0003DE 9E               [12] 1821 	subb	a,r6
      0003DF EB               [12] 1822 	mov	a,r3
      0003E0 9F               [12] 1823 	subb	a,r7
      0003E1 50 0F            [24] 1824 	jnc	00105$
      0003E3 08               [12] 1825 	inc	r0
      0003E4 B8 00 09         [24] 1826 	cjne	r0,#0x00,00115$
      0003E7 09               [12] 1827 	inc	r1
      0003E8 B9 00 05         [24] 1828 	cjne	r1,#0x00,00115$
      0003EB 0A               [12] 1829 	inc	r2
      0003EC BA 00 E9         [24] 1830 	cjne	r2,#0x00,00103$
      0003EF 0B               [12] 1831 	inc	r3
      0003F0                       1832 00115$:
      0003F0 80 E6            [24] 1833 	sjmp	00103$
      0003F2                       1834 00105$:
                           000336  1835 	C$i2c.h$193$1$86 ==.
                           000336  1836 	XG$delay_time$0$0 ==.
      0003F2 22               [24] 1837 	ret
                                   1838 ;------------------------------------------------------------
                                   1839 ;Allocation info for local variables in function 'i2c_start'
                                   1840 ;------------------------------------------------------------
                           000337  1841 	G$i2c_start$0$0 ==.
                           000337  1842 	C$i2c.h$196$1$86 ==.
                                   1843 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:196: void i2c_start(void)
                                   1844 ;	-----------------------------------------
                                   1845 ;	 function i2c_start
                                   1846 ;	-----------------------------------------
      0003F3                       1847 _i2c_start:
                           000337  1848 	C$i2c.h$198$1$88 ==.
                                   1849 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:198: while(BUSY);              //Wait until SMBus0 is free
      0003F3                       1850 00101$:
      0003F3 20 C7 FD         [24] 1851 	jb	_BUSY,00101$
                           00033A  1852 	C$i2c.h$199$1$88 ==.
                                   1853 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:199: STA = 1;                  //Set Start Bit
      0003F6 D2 C5            [12] 1854 	setb	_STA
                           00033C  1855 	C$i2c.h$200$1$88 ==.
                                   1856 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:200: while(!SI);               //Wait until start sent
      0003F8                       1857 00104$:
      0003F8 30 C3 FD         [24] 1858 	jnb	_SI,00104$
                           00033F  1859 	C$i2c.h$201$1$88 ==.
                                   1860 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:201: STA = 0;                  //Clear start bit
      0003FB C2 C5            [12] 1861 	clr	_STA
                           000341  1862 	C$i2c.h$202$1$88 ==.
                                   1863 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:202: SI = 0;                   //Clear SI
      0003FD C2 C3            [12] 1864 	clr	_SI
                           000343  1865 	C$i2c.h$203$1$88 ==.
                           000343  1866 	XG$i2c_start$0$0 ==.
      0003FF 22               [24] 1867 	ret
                                   1868 ;------------------------------------------------------------
                                   1869 ;Allocation info for local variables in function 'i2c_write'
                                   1870 ;------------------------------------------------------------
                                   1871 ;output_data               Allocated to registers 
                                   1872 ;------------------------------------------------------------
                           000344  1873 	G$i2c_write$0$0 ==.
                           000344  1874 	C$i2c.h$206$1$88 ==.
                                   1875 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:206: void i2c_write(unsigned char output_data)
                                   1876 ;	-----------------------------------------
                                   1877 ;	 function i2c_write
                                   1878 ;	-----------------------------------------
      000400                       1879 _i2c_write:
      000400 85 82 C2         [24] 1880 	mov	_SMB0DAT,dpl
                           000347  1881 	C$i2c.h$209$1$90 ==.
                                   1882 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:209: while(!SI);               //Wait until send is complete
      000403                       1883 00101$:
                           000347  1884 	C$i2c.h$210$1$90 ==.
                                   1885 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:210: SI = 0;                   //Clear SI
      000403 10 C3 02         [24] 1886 	jbc	_SI,00112$
      000406 80 FB            [24] 1887 	sjmp	00101$
      000408                       1888 00112$:
                           00034C  1889 	C$i2c.h$211$1$90 ==.
                           00034C  1890 	XG$i2c_write$0$0 ==.
      000408 22               [24] 1891 	ret
                                   1892 ;------------------------------------------------------------
                                   1893 ;Allocation info for local variables in function 'i2c_write_and_stop'
                                   1894 ;------------------------------------------------------------
                                   1895 ;output_data               Allocated to registers 
                                   1896 ;------------------------------------------------------------
                           00034D  1897 	G$i2c_write_and_stop$0$0 ==.
                           00034D  1898 	C$i2c.h$214$1$90 ==.
                                   1899 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:214: void i2c_write_and_stop(unsigned char output_data)
                                   1900 ;	-----------------------------------------
                                   1901 ;	 function i2c_write_and_stop
                                   1902 ;	-----------------------------------------
      000409                       1903 _i2c_write_and_stop:
      000409 85 82 C2         [24] 1904 	mov	_SMB0DAT,dpl
                           000350  1905 	C$i2c.h$217$1$92 ==.
                                   1906 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:217: STO = 1;                  //Set stop bit
      00040C D2 C4            [12] 1907 	setb	_STO
                           000352  1908 	C$i2c.h$218$1$92 ==.
                                   1909 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:218: while(!SI);               //Wait until send is complete
      00040E                       1910 00101$:
                           000352  1911 	C$i2c.h$219$1$92 ==.
                                   1912 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:219: SI = 0;                   //clear SI
      00040E 10 C3 02         [24] 1913 	jbc	_SI,00112$
      000411 80 FB            [24] 1914 	sjmp	00101$
      000413                       1915 00112$:
                           000357  1916 	C$i2c.h$220$1$92 ==.
                           000357  1917 	XG$i2c_write_and_stop$0$0 ==.
      000413 22               [24] 1918 	ret
                                   1919 ;------------------------------------------------------------
                                   1920 ;Allocation info for local variables in function 'i2c_read'
                                   1921 ;------------------------------------------------------------
                                   1922 ;input_data                Allocated to registers 
                                   1923 ;------------------------------------------------------------
                           000358  1924 	G$i2c_read$0$0 ==.
                           000358  1925 	C$i2c.h$223$1$92 ==.
                                   1926 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:223: unsigned char i2c_read(void)
                                   1927 ;	-----------------------------------------
                                   1928 ;	 function i2c_read
                                   1929 ;	-----------------------------------------
      000414                       1930 _i2c_read:
                           000358  1931 	C$i2c.h$226$1$94 ==.
                                   1932 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:226: while(!SI);                //Wait until we have data to read
      000414                       1933 00101$:
      000414 30 C3 FD         [24] 1934 	jnb	_SI,00101$
                           00035B  1935 	C$i2c.h$227$1$94 ==.
                                   1936 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:227: input_data = SMB0DAT;      //Read the data
      000417 85 C2 82         [24] 1937 	mov	dpl,_SMB0DAT
                           00035E  1938 	C$i2c.h$228$1$94 ==.
                                   1939 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:228: SI = 0;                    //Clear SI
      00041A C2 C3            [12] 1940 	clr	_SI
                           000360  1941 	C$i2c.h$229$1$94 ==.
                                   1942 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:229: return input_data;         //Return the read data
                           000360  1943 	C$i2c.h$230$1$94 ==.
                           000360  1944 	XG$i2c_read$0$0 ==.
      00041C 22               [24] 1945 	ret
                                   1946 ;------------------------------------------------------------
                                   1947 ;Allocation info for local variables in function 'i2c_read_and_stop'
                                   1948 ;------------------------------------------------------------
                                   1949 ;input_data                Allocated to registers r7 
                                   1950 ;------------------------------------------------------------
                           000361  1951 	G$i2c_read_and_stop$0$0 ==.
                           000361  1952 	C$i2c.h$233$1$94 ==.
                                   1953 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:233: unsigned char i2c_read_and_stop(void)
                                   1954 ;	-----------------------------------------
                                   1955 ;	 function i2c_read_and_stop
                                   1956 ;	-----------------------------------------
      00041D                       1957 _i2c_read_and_stop:
                           000361  1958 	C$i2c.h$236$1$96 ==.
                                   1959 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:236: while(!SI);                //Wait until we have data to read
      00041D                       1960 00101$:
      00041D 30 C3 FD         [24] 1961 	jnb	_SI,00101$
                           000364  1962 	C$i2c.h$237$1$96 ==.
                                   1963 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:237: input_data = SMB0DAT;      //Read the data
      000420 AF C2            [24] 1964 	mov	r7,_SMB0DAT
                           000366  1965 	C$i2c.h$238$1$96 ==.
                                   1966 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:238: SI = 0;                    //Clear SI
      000422 C2 C3            [12] 1967 	clr	_SI
                           000368  1968 	C$i2c.h$239$1$96 ==.
                                   1969 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:239: STO = 1;                   //Set stop bit
      000424 D2 C4            [12] 1970 	setb	_STO
                           00036A  1971 	C$i2c.h$240$1$96 ==.
                                   1972 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:240: while(!SI);                //Wait for stop
      000426                       1973 00104$:
                           00036A  1974 	C$i2c.h$241$1$96 ==.
                                   1975 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:241: SI = 0;
      000426 10 C3 02         [24] 1976 	jbc	_SI,00122$
      000429 80 FB            [24] 1977 	sjmp	00104$
      00042B                       1978 00122$:
                           00036F  1979 	C$i2c.h$242$1$96 ==.
                                   1980 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:242: return input_data;         //Return the read data
      00042B 8F 82            [24] 1981 	mov	dpl,r7
                           000371  1982 	C$i2c.h$243$1$96 ==.
                           000371  1983 	XG$i2c_read_and_stop$0$0 ==.
      00042D 22               [24] 1984 	ret
                                   1985 ;------------------------------------------------------------
                                   1986 ;Allocation info for local variables in function 'i2c_write_data'
                                   1987 ;------------------------------------------------------------
                                   1988 ;start_reg                 Allocated with name '_i2c_write_data_PARM_2'
                                   1989 ;buffer                    Allocated with name '_i2c_write_data_PARM_3'
                                   1990 ;num_bytes                 Allocated with name '_i2c_write_data_PARM_4'
                                   1991 ;addr                      Allocated to registers r7 
                                   1992 ;i                         Allocated to registers 
                                   1993 ;------------------------------------------------------------
                           000372  1994 	G$i2c_write_data$0$0 ==.
                           000372  1995 	C$i2c.h$246$1$96 ==.
                                   1996 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:246: void i2c_write_data(unsigned char addr, unsigned char start_reg, unsigned char *buffer, unsigned char num_bytes)
                                   1997 ;	-----------------------------------------
                                   1998 ;	 function i2c_write_data
                                   1999 ;	-----------------------------------------
      00042E                       2000 _i2c_write_data:
      00042E AF 82            [24] 2001 	mov	r7,dpl
                           000374  2002 	C$i2c.h$250$1$98 ==.
                                   2003 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:250: i2c_start();               //initiate I2C transfer
      000430 C0 07            [24] 2004 	push	ar7
      000432 12 03 F3         [24] 2005 	lcall	_i2c_start
      000435 D0 07            [24] 2006 	pop	ar7
                           00037B  2007 	C$i2c.h$251$1$98 ==.
                                   2008 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:251: i2c_write(addr & ~0x01);   //write the desired address to the bus
      000437 74 FE            [12] 2009 	mov	a,#0xFE
      000439 5F               [12] 2010 	anl	a,r7
      00043A F5 82            [12] 2011 	mov	dpl,a
      00043C 12 04 00         [24] 2012 	lcall	_i2c_write
                           000383  2013 	C$i2c.h$252$1$98 ==.
                                   2014 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:252: i2c_write(start_reg);      //write the start register to the bus
      00043F 85 27 82         [24] 2015 	mov	dpl,_i2c_write_data_PARM_2
      000442 12 04 00         [24] 2016 	lcall	_i2c_write
                           000389  2017 	C$i2c.h$253$1$98 ==.
                                   2018 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:253: for(i=0; i<num_bytes-1; i++) //write the data to the register(s)
      000445 7F 00            [12] 2019 	mov	r7,#0x00
      000447                       2020 00103$:
      000447 AD 2B            [24] 2021 	mov	r5,_i2c_write_data_PARM_4
      000449 7E 00            [12] 2022 	mov	r6,#0x00
      00044B 1D               [12] 2023 	dec	r5
      00044C BD FF 01         [24] 2024 	cjne	r5,#0xFF,00114$
      00044F 1E               [12] 2025 	dec	r6
      000450                       2026 00114$:
      000450 8F 03            [24] 2027 	mov	ar3,r7
      000452 7C 00            [12] 2028 	mov	r4,#0x00
      000454 C3               [12] 2029 	clr	c
      000455 EB               [12] 2030 	mov	a,r3
      000456 9D               [12] 2031 	subb	a,r5
      000457 EC               [12] 2032 	mov	a,r4
      000458 64 80            [12] 2033 	xrl	a,#0x80
      00045A 8E F0            [24] 2034 	mov	b,r6
      00045C 63 F0 80         [24] 2035 	xrl	b,#0x80
      00045F 95 F0            [12] 2036 	subb	a,b
      000461 50 1F            [24] 2037 	jnc	00101$
                           0003A7  2038 	C$i2c.h$254$1$98 ==.
                                   2039 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:254: i2c_write(buffer[i]);
      000463 EF               [12] 2040 	mov	a,r7
      000464 25 28            [12] 2041 	add	a,_i2c_write_data_PARM_3
      000466 FC               [12] 2042 	mov	r4,a
      000467 E4               [12] 2043 	clr	a
      000468 35 29            [12] 2044 	addc	a,(_i2c_write_data_PARM_3 + 1)
      00046A FD               [12] 2045 	mov	r5,a
      00046B AE 2A            [24] 2046 	mov	r6,(_i2c_write_data_PARM_3 + 2)
      00046D 8C 82            [24] 2047 	mov	dpl,r4
      00046F 8D 83            [24] 2048 	mov	dph,r5
      000471 8E F0            [24] 2049 	mov	b,r6
      000473 12 0E AA         [24] 2050 	lcall	__gptrget
      000476 F5 82            [12] 2051 	mov	dpl,a
      000478 C0 07            [24] 2052 	push	ar7
      00047A 12 04 00         [24] 2053 	lcall	_i2c_write
      00047D D0 07            [24] 2054 	pop	ar7
                           0003C3  2055 	C$i2c.h$253$1$98 ==.
                                   2056 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:253: for(i=0; i<num_bytes-1; i++) //write the data to the register(s)
      00047F 0F               [12] 2057 	inc	r7
      000480 80 C5            [24] 2058 	sjmp	00103$
      000482                       2059 00101$:
                           0003C6  2060 	C$i2c.h$255$1$98 ==.
                                   2061 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:255: i2c_write_and_stop(buffer[num_bytes-1]); //Stop transfer
      000482 AE 2B            [24] 2062 	mov	r6,_i2c_write_data_PARM_4
      000484 7F 00            [12] 2063 	mov	r7,#0x00
      000486 1E               [12] 2064 	dec	r6
      000487 BE FF 01         [24] 2065 	cjne	r6,#0xFF,00116$
      00048A 1F               [12] 2066 	dec	r7
      00048B                       2067 00116$:
      00048B EE               [12] 2068 	mov	a,r6
      00048C 25 28            [12] 2069 	add	a,_i2c_write_data_PARM_3
      00048E FE               [12] 2070 	mov	r6,a
      00048F EF               [12] 2071 	mov	a,r7
      000490 35 29            [12] 2072 	addc	a,(_i2c_write_data_PARM_3 + 1)
      000492 FF               [12] 2073 	mov	r7,a
      000493 AD 2A            [24] 2074 	mov	r5,(_i2c_write_data_PARM_3 + 2)
      000495 8E 82            [24] 2075 	mov	dpl,r6
      000497 8F 83            [24] 2076 	mov	dph,r7
      000499 8D F0            [24] 2077 	mov	b,r5
      00049B 12 0E AA         [24] 2078 	lcall	__gptrget
      00049E F5 82            [12] 2079 	mov	dpl,a
      0004A0 12 04 09         [24] 2080 	lcall	_i2c_write_and_stop
                           0003E7  2081 	C$i2c.h$256$1$98 ==.
                           0003E7  2082 	XG$i2c_write_data$0$0 ==.
      0004A3 22               [24] 2083 	ret
                                   2084 ;------------------------------------------------------------
                                   2085 ;Allocation info for local variables in function 'i2c_read_data'
                                   2086 ;------------------------------------------------------------
                                   2087 ;start_reg                 Allocated with name '_i2c_read_data_PARM_2'
                                   2088 ;buffer                    Allocated with name '_i2c_read_data_PARM_3'
                                   2089 ;num_bytes                 Allocated with name '_i2c_read_data_PARM_4'
                                   2090 ;addr                      Allocated to registers r7 
                                   2091 ;j                         Allocated to registers 
                                   2092 ;------------------------------------------------------------
                           0003E8  2093 	G$i2c_read_data$0$0 ==.
                           0003E8  2094 	C$i2c.h$259$1$98 ==.
                                   2095 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:259: void i2c_read_data(unsigned char addr, unsigned char start_reg, unsigned char *buffer, unsigned char num_bytes)
                                   2096 ;	-----------------------------------------
                                   2097 ;	 function i2c_read_data
                                   2098 ;	-----------------------------------------
      0004A4                       2099 _i2c_read_data:
      0004A4 AF 82            [24] 2100 	mov	r7,dpl
                           0003EA  2101 	C$i2c.h$262$1$100 ==.
                                   2102 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:262: i2c_start();               //Start I2C transfer
      0004A6 C0 07            [24] 2103 	push	ar7
      0004A8 12 03 F3         [24] 2104 	lcall	_i2c_start
      0004AB D0 07            [24] 2105 	pop	ar7
                           0003F1  2106 	C$i2c.h$263$1$100 ==.
                                   2107 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:263: i2c_write(addr & ~0x01);   //Write address of device that will be written to, send 0
      0004AD 8F 06            [24] 2108 	mov	ar6,r7
      0004AF 74 FE            [12] 2109 	mov	a,#0xFE
      0004B1 5E               [12] 2110 	anl	a,r6
      0004B2 F5 82            [12] 2111 	mov	dpl,a
      0004B4 C0 07            [24] 2112 	push	ar7
      0004B6 12 04 00         [24] 2113 	lcall	_i2c_write
                           0003FD  2114 	C$i2c.h$264$1$100 ==.
                                   2115 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:264: i2c_write_and_stop(start_reg); //Write & stop the 1st register to be read
      0004B9 85 2C 82         [24] 2116 	mov	dpl,_i2c_read_data_PARM_2
      0004BC 12 04 09         [24] 2117 	lcall	_i2c_write_and_stop
                           000403  2118 	C$i2c.h$265$1$100 ==.
                                   2119 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:265: i2c_start();               //Start I2C transfer
      0004BF 12 03 F3         [24] 2120 	lcall	_i2c_start
      0004C2 D0 07            [24] 2121 	pop	ar7
                           000408  2122 	C$i2c.h$266$1$100 ==.
                                   2123 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:266: i2c_write(addr | 0x01);    //Write address again, this time indicating a read operation
      0004C4 74 01            [12] 2124 	mov	a,#0x01
      0004C6 4F               [12] 2125 	orl	a,r7
      0004C7 F5 82            [12] 2126 	mov	dpl,a
      0004C9 12 04 00         [24] 2127 	lcall	_i2c_write
                           000410  2128 	C$i2c.h$267$1$100 ==.
                                   2129 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:267: for(j = 0; j < num_bytes - 1; j++)
      0004CC 7F 00            [12] 2130 	mov	r7,#0x00
      0004CE                       2131 00103$:
      0004CE AD 30            [24] 2132 	mov	r5,_i2c_read_data_PARM_4
      0004D0 7E 00            [12] 2133 	mov	r6,#0x00
      0004D2 1D               [12] 2134 	dec	r5
      0004D3 BD FF 01         [24] 2135 	cjne	r5,#0xFF,00114$
      0004D6 1E               [12] 2136 	dec	r6
      0004D7                       2137 00114$:
      0004D7 8F 03            [24] 2138 	mov	ar3,r7
      0004D9 7C 00            [12] 2139 	mov	r4,#0x00
      0004DB C3               [12] 2140 	clr	c
      0004DC EB               [12] 2141 	mov	a,r3
      0004DD 9D               [12] 2142 	subb	a,r5
      0004DE EC               [12] 2143 	mov	a,r4
      0004DF 64 80            [12] 2144 	xrl	a,#0x80
      0004E1 8E F0            [24] 2145 	mov	b,r6
      0004E3 63 F0 80         [24] 2146 	xrl	b,#0x80
      0004E6 95 F0            [12] 2147 	subb	a,b
      0004E8 50 2E            [24] 2148 	jnc	00101$
                           00042E  2149 	C$i2c.h$269$2$101 ==.
                                   2150 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:269: AA = 1;                //Set acknowledge bit
      0004EA D2 C2            [12] 2151 	setb	_AA
                           000430  2152 	C$i2c.h$270$2$101 ==.
                                   2153 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:270: buffer[j] = i2c_read();//Read data, save it in buffer
      0004EC EF               [12] 2154 	mov	a,r7
      0004ED 25 2D            [12] 2155 	add	a,_i2c_read_data_PARM_3
      0004EF FC               [12] 2156 	mov	r4,a
      0004F0 E4               [12] 2157 	clr	a
      0004F1 35 2E            [12] 2158 	addc	a,(_i2c_read_data_PARM_3 + 1)
      0004F3 FD               [12] 2159 	mov	r5,a
      0004F4 AE 2F            [24] 2160 	mov	r6,(_i2c_read_data_PARM_3 + 2)
      0004F6 C0 07            [24] 2161 	push	ar7
      0004F8 C0 06            [24] 2162 	push	ar6
      0004FA C0 05            [24] 2163 	push	ar5
      0004FC C0 04            [24] 2164 	push	ar4
      0004FE 12 04 14         [24] 2165 	lcall	_i2c_read
      000501 AB 82            [24] 2166 	mov	r3,dpl
      000503 D0 04            [24] 2167 	pop	ar4
      000505 D0 05            [24] 2168 	pop	ar5
      000507 D0 06            [24] 2169 	pop	ar6
      000509 D0 07            [24] 2170 	pop	ar7
      00050B 8C 82            [24] 2171 	mov	dpl,r4
      00050D 8D 83            [24] 2172 	mov	dph,r5
      00050F 8E F0            [24] 2173 	mov	b,r6
      000511 EB               [12] 2174 	mov	a,r3
      000512 12 07 12         [24] 2175 	lcall	__gptrput
                           000459  2176 	C$i2c.h$267$1$100 ==.
                                   2177 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:267: for(j = 0; j < num_bytes - 1; j++)
      000515 0F               [12] 2178 	inc	r7
      000516 80 B6            [24] 2179 	sjmp	00103$
      000518                       2180 00101$:
                           00045C  2181 	C$i2c.h$272$1$100 ==.
                                   2182 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:272: AA = 0;
      000518 C2 C2            [12] 2183 	clr	_AA
                           00045E  2184 	C$i2c.h$273$1$100 ==.
                                   2185 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:273: buffer[num_bytes - 1] = i2c_read_and_stop(); //Read the last byte and stop, save it in the buffer
      00051A AE 30            [24] 2186 	mov	r6,_i2c_read_data_PARM_4
      00051C 7F 00            [12] 2187 	mov	r7,#0x00
      00051E 1E               [12] 2188 	dec	r6
      00051F BE FF 01         [24] 2189 	cjne	r6,#0xFF,00116$
      000522 1F               [12] 2190 	dec	r7
      000523                       2191 00116$:
      000523 EE               [12] 2192 	mov	a,r6
      000524 25 2D            [12] 2193 	add	a,_i2c_read_data_PARM_3
      000526 FE               [12] 2194 	mov	r6,a
      000527 EF               [12] 2195 	mov	a,r7
      000528 35 2E            [12] 2196 	addc	a,(_i2c_read_data_PARM_3 + 1)
      00052A FF               [12] 2197 	mov	r7,a
      00052B AD 2F            [24] 2198 	mov	r5,(_i2c_read_data_PARM_3 + 2)
      00052D C0 07            [24] 2199 	push	ar7
      00052F C0 06            [24] 2200 	push	ar6
      000531 C0 05            [24] 2201 	push	ar5
      000533 12 04 1D         [24] 2202 	lcall	_i2c_read_and_stop
      000536 AC 82            [24] 2203 	mov	r4,dpl
      000538 D0 05            [24] 2204 	pop	ar5
      00053A D0 06            [24] 2205 	pop	ar6
      00053C D0 07            [24] 2206 	pop	ar7
      00053E 8E 82            [24] 2207 	mov	dpl,r6
      000540 8F 83            [24] 2208 	mov	dph,r7
      000542 8D F0            [24] 2209 	mov	b,r5
      000544 EC               [12] 2210 	mov	a,r4
      000545 12 07 12         [24] 2211 	lcall	__gptrput
                           00048C  2212 	C$i2c.h$274$1$100 ==.
                           00048C  2213 	XG$i2c_read_data$0$0 ==.
      000548 22               [24] 2214 	ret
                                   2215 ;------------------------------------------------------------
                                   2216 ;Allocation info for local variables in function 'Accel_Init'
                                   2217 ;------------------------------------------------------------
                                   2218 ;Data2                     Allocated with name '_Accel_Init_Data2_1_103'
                                   2219 ;------------------------------------------------------------
                           00048D  2220 	G$Accel_Init$0$0 ==.
                           00048D  2221 	C$i2c.h$283$1$100 ==.
                                   2222 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:283: void Accel_Init(void)
                                   2223 ;	-----------------------------------------
                                   2224 ;	 function Accel_Init
                                   2225 ;	-----------------------------------------
      000549                       2226 _Accel_Init:
                           00048D  2227 	C$i2c.h$287$1$103 ==.
                                   2228 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:287: Data2[0]=0x23;	//normal power mode, 50Hz ODR, y & x axes enabled
      000549 75 31 23         [24] 2229 	mov	_Accel_Init_Data2_1_103,#0x23
                           000490  2230 	C$i2c.h$289$1$103 ==.
                                   2231 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:289: i2c_write_data(addr_accel, 0x20, Data2, 1);
      00054C 75 28 31         [24] 2232 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      00054F 75 29 00         [24] 2233 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      000552 75 2A 40         [24] 2234 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000555 75 27 20         [24] 2235 	mov	_i2c_write_data_PARM_2,#0x20
      000558 75 2B 01         [24] 2236 	mov	_i2c_write_data_PARM_4,#0x01
      00055B 75 82 30         [24] 2237 	mov	dpl,#0x30
      00055E 12 04 2E         [24] 2238 	lcall	_i2c_write_data
                           0004A5  2239 	C$i2c.h$290$1$103 ==.
                                   2240 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:290: Data2[0]=0x00;	//Default - no filtering
      000561 75 31 00         [24] 2241 	mov	_Accel_Init_Data2_1_103,#0x00
                           0004A8  2242 	C$i2c.h$292$1$103 ==.
                                   2243 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:292: i2c_write_data(addr_accel, 0x21, Data2, 1);
      000564 75 28 31         [24] 2244 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      000567 75 29 00         [24] 2245 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      00056A 75 2A 40         [24] 2246 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      00056D 75 27 21         [24] 2247 	mov	_i2c_write_data_PARM_2,#0x21
      000570 75 2B 01         [24] 2248 	mov	_i2c_write_data_PARM_4,#0x01
      000573 75 82 30         [24] 2249 	mov	dpl,#0x30
      000576 12 04 2E         [24] 2250 	lcall	_i2c_write_data
                           0004BD  2251 	C$i2c.h$293$1$103 ==.
                                   2252 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:293: Data2[0]=0x00;	//default - no interrupts enabled
      000579 75 31 00         [24] 2253 	mov	_Accel_Init_Data2_1_103,#0x00
                           0004C0  2254 	C$i2c.h$294$1$103 ==.
                                   2255 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:294: i2c_write_data(addr_accel, 0x22, Data2, 1);
      00057C 75 28 31         [24] 2256 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      00057F 75 29 00         [24] 2257 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      000582 75 2A 40         [24] 2258 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000585 75 27 22         [24] 2259 	mov	_i2c_write_data_PARM_2,#0x22
      000588 75 2B 01         [24] 2260 	mov	_i2c_write_data_PARM_4,#0x01
      00058B 75 82 30         [24] 2261 	mov	dpl,#0x30
      00058E 12 04 2E         [24] 2262 	lcall	_i2c_write_data
                           0004D5  2263 	C$i2c.h$298$1$103 ==.
                           0004D5  2264 	XG$Accel_Init$0$0 ==.
      000591 22               [24] 2265 	ret
                                   2266 ;------------------------------------------------------------
                                   2267 ;Allocation info for local variables in function 'main'
                                   2268 ;------------------------------------------------------------
                           0004D6  2269 	G$main$0$0 ==.
                           0004D6  2270 	C$lab3_3compass.c$37$1$103 ==.
                                   2271 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:37: void main(void)
                                   2272 ;	-----------------------------------------
                                   2273 ;	 function main
                                   2274 ;	-----------------------------------------
      000592                       2275 _main:
                           0004D6  2276 	C$lab3_3compass.c$40$1$111 ==.
                                   2277 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:40: Sys_Init();
      000592 12 00 EC         [24] 2278 	lcall	_Sys_Init
                           0004D9  2279 	C$lab3_3compass.c$41$1$111 ==.
                                   2280 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:41: putchar(' '); //the quotes in this line may not format correctly
      000595 75 82 20         [24] 2281 	mov	dpl,#0x20
      000598 12 00 FF         [24] 2282 	lcall	_putchar
                           0004DF  2283 	C$lab3_3compass.c$42$1$111 ==.
                                   2284 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:42: Port_Init();
      00059B 12 06 33         [24] 2285 	lcall	_Port_Init
                           0004E2  2286 	C$lab3_3compass.c$43$1$111 ==.
                                   2287 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:43: XBR0_Init();
      00059E 12 06 64         [24] 2288 	lcall	_XBR0_Init
                           0004E5  2289 	C$lab3_3compass.c$44$1$111 ==.
                                   2290 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:44: PCA_Init();
      0005A1 12 06 6E         [24] 2291 	lcall	_PCA_Init
                           0004E8  2292 	C$lab3_3compass.c$45$1$111 ==.
                                   2293 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:45: SMB_Init();
      0005A4 12 06 68         [24] 2294 	lcall	_SMB_Init
                           0004EB  2295 	C$lab3_3compass.c$48$1$111 ==.
                                   2296 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:48: printf("Embedded Control Steering Calibration\n");
      0005A7 74 F3            [12] 2297 	mov	a,#___str_3
      0005A9 C0 E0            [24] 2298 	push	acc
      0005AB 74 0E            [12] 2299 	mov	a,#(___str_3 >> 8)
      0005AD C0 E0            [24] 2300 	push	acc
      0005AF 74 80            [12] 2301 	mov	a,#0x80
      0005B1 C0 E0            [24] 2302 	push	acc
      0005B3 12 08 B6         [24] 2303 	lcall	_printf
      0005B6 15 81            [12] 2304 	dec	sp
      0005B8 15 81            [12] 2305 	dec	sp
      0005BA 15 81            [12] 2306 	dec	sp
                           000500  2307 	C$lab3_3compass.c$52$1$111 ==.
                                   2308 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:52: STR_PW = PW_CENTER_STR;
      0005BC 75 34 CD         [24] 2309 	mov	_STR_PW,#0xCD
      0005BF 75 35 0A         [24] 2310 	mov	(_STR_PW + 1),#0x0A
                           000506  2311 	C$lab3_3compass.c$53$1$111 ==.
                                   2312 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:53: tmp0_lo_to_hi= 0xFFFF - STR_PW;
      0005C2 75 32 32         [24] 2313 	mov	_tmp0_lo_to_hi,#0x32
      0005C5 75 33 F5         [24] 2314 	mov	(_tmp0_lo_to_hi + 1),#0xF5
                           00050C  2315 	C$lab3_3compass.c$54$1$111 ==.
                                   2316 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:54: PCA0CP0 = tmp0_lo_to_hi;
      0005C8 75 EA 32         [24] 2317 	mov	((_PCA0CP0 >> 0) & 0xFF),#0x32
      0005CB 75 FA F5         [24] 2318 	mov	((_PCA0CP0 >> 8) & 0xFF),#0xF5
                           000512  2319 	C$lab3_3compass.c$55$1$111 ==.
                                   2320 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:55: count=0;
      0005CE E4               [12] 2321 	clr	a
      0005CF F5 36            [12] 2322 	mov	_count,a
      0005D1 F5 37            [12] 2323 	mov	(_count + 1),a
                           000517  2324 	C$lab3_3compass.c$56$1$111 ==.
                                   2325 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:56: while (count < 50);
      0005D3                       2326 00101$:
      0005D3 C3               [12] 2327 	clr	c
      0005D4 E5 36            [12] 2328 	mov	a,_count
      0005D6 94 32            [12] 2329 	subb	a,#0x32
      0005D8 E5 37            [12] 2330 	mov	a,(_count + 1)
      0005DA 94 00            [12] 2331 	subb	a,#0x00
      0005DC 40 F5            [24] 2332 	jc	00101$
                           000522  2333 	C$lab3_3compass.c$57$1$111 ==.
                                   2334 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:57: while (1)
      0005DE                       2335 00108$:
                           000522  2336 	C$lab3_3compass.c$59$2$112 ==.
                                   2337 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:59: count =0;
      0005DE E4               [12] 2338 	clr	a
      0005DF F5 36            [12] 2339 	mov	_count,a
      0005E1 F5 37            [12] 2340 	mov	(_count + 1),a
                           000527  2341 	C$lab3_3compass.c$60$2$112 ==.
                                   2342 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:60: while (count < 2);
      0005E3                       2343 00104$:
      0005E3 C3               [12] 2344 	clr	c
      0005E4 E5 36            [12] 2345 	mov	a,_count
      0005E6 94 02            [12] 2346 	subb	a,#0x02
      0005E8 E5 37            [12] 2347 	mov	a,(_count + 1)
      0005EA 94 00            [12] 2348 	subb	a,#0x00
      0005EC 40 F5            [24] 2349 	jc	00104$
                           000532  2350 	C$lab3_3compass.c$61$2$112 ==.
                                   2351 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:61: actual_heading = ReadCompass();
      0005EE 12 06 3E         [24] 2352 	lcall	_ReadCompass
      0005F1 85 82 39         [24] 2353 	mov	_actual_heading,dpl
      0005F4 85 83 3A         [24] 2354 	mov	(_actual_heading + 1),dph
                           00053B  2355 	C$lab3_3compass.c$63$2$112 ==.
                                   2356 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:63: offset = (actual_heading - desired_heading) % 3600;
      0005F7 E5 39            [12] 2357 	mov	a,_actual_heading
      0005F9 C3               [12] 2358 	clr	c
      0005FA 95 3B            [12] 2359 	subb	a,_desired_heading
      0005FC F5 82            [12] 2360 	mov	dpl,a
      0005FE E5 3A            [12] 2361 	mov	a,(_actual_heading + 1)
      000600 95 3C            [12] 2362 	subb	a,(_desired_heading + 1)
      000602 F5 83            [12] 2363 	mov	dph,a
      000604 75 11 10         [24] 2364 	mov	__moduint_PARM_2,#0x10
      000607 75 12 0E         [24] 2365 	mov	(__moduint_PARM_2 + 1),#0x0E
      00060A 12 08 45         [24] 2366 	lcall	__moduint
      00060D 85 82 3F         [24] 2367 	mov	_offset,dpl
      000610 85 83 40         [24] 2368 	mov	(_offset + 1),dph
                           000557  2369 	C$lab3_3compass.c$64$2$112 ==.
                                   2370 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:64: printf("\r\n%d\t%d",actual_heading,offset);
      000613 C0 3F            [24] 2371 	push	_offset
      000615 C0 40            [24] 2372 	push	(_offset + 1)
      000617 C0 39            [24] 2373 	push	_actual_heading
      000619 C0 3A            [24] 2374 	push	(_actual_heading + 1)
      00061B 74 1A            [12] 2375 	mov	a,#___str_4
      00061D C0 E0            [24] 2376 	push	acc
      00061F 74 0F            [12] 2377 	mov	a,#(___str_4 >> 8)
      000621 C0 E0            [24] 2378 	push	acc
      000623 74 80            [12] 2379 	mov	a,#0x80
      000625 C0 E0            [24] 2380 	push	acc
      000627 12 08 B6         [24] 2381 	lcall	_printf
      00062A E5 81            [12] 2382 	mov	a,sp
      00062C 24 F9            [12] 2383 	add	a,#0xf9
      00062E F5 81            [12] 2384 	mov	sp,a
      000630 80 AC            [24] 2385 	sjmp	00108$
                           000576  2386 	C$lab3_3compass.c$70$1$111 ==.
                           000576  2387 	XG$main$0$0 ==.
      000632 22               [24] 2388 	ret
                                   2389 ;------------------------------------------------------------
                                   2390 ;Allocation info for local variables in function 'Port_Init'
                                   2391 ;------------------------------------------------------------
                           000577  2392 	G$Port_Init$0$0 ==.
                           000577  2393 	C$lab3_3compass.c$72$1$111 ==.
                                   2394 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:72: void Port_Init()
                                   2395 ;	-----------------------------------------
                                   2396 ;	 function Port_Init
                                   2397 ;	-----------------------------------------
      000633                       2398 _Port_Init:
                           000577  2399 	C$lab3_3compass.c$74$1$113 ==.
                                   2400 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:74: P1MDOUT = 0x0F;  //set output pin for CEX0 or CEX2 in push-pull mode
      000633 75 A5 0F         [24] 2401 	mov	_P1MDOUT,#0x0F
                           00057A  2402 	C$lab3_3compass.c$75$1$113 ==.
                                   2403 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:75: P0MDOUT &= ~0x32;
      000636 AF A4            [24] 2404 	mov	r7,_P0MDOUT
      000638 74 CD            [12] 2405 	mov	a,#0xCD
      00063A 5F               [12] 2406 	anl	a,r7
      00063B F5 A4            [12] 2407 	mov	_P0MDOUT,a
                           000581  2408 	C$lab3_3compass.c$76$1$113 ==.
                           000581  2409 	XG$Port_Init$0$0 ==.
      00063D 22               [24] 2410 	ret
                                   2411 ;------------------------------------------------------------
                                   2412 ;Allocation info for local variables in function 'ReadCompass'
                                   2413 ;------------------------------------------------------------
                                   2414 ;Data                      Allocated with name '_ReadCompass_Data_1_115'
                                   2415 ;range                     Allocated to registers 
                                   2416 ;addr                      Allocated to registers 
                                   2417 ;------------------------------------------------------------
                           000582  2418 	G$ReadCompass$0$0 ==.
                           000582  2419 	C$lab3_3compass.c$78$1$113 ==.
                                   2420 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:78: unsigned int ReadCompass(void)
                                   2421 ;	-----------------------------------------
                                   2422 ;	 function ReadCompass
                                   2423 ;	-----------------------------------------
      00063E                       2424 _ReadCompass:
                           000582  2425 	C$lab3_3compass.c$83$1$115 ==.
                                   2426 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:83: i2c_read_data(addr, 2,Data,2);
      00063E 75 2D 41         [24] 2427 	mov	_i2c_read_data_PARM_3,#_ReadCompass_Data_1_115
      000641 75 2E 00         [24] 2428 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      000644 75 2F 40         [24] 2429 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      000647 75 2C 02         [24] 2430 	mov	_i2c_read_data_PARM_2,#0x02
      00064A 75 30 02         [24] 2431 	mov	_i2c_read_data_PARM_4,#0x02
      00064D 75 82 C0         [24] 2432 	mov	dpl,#0xC0
      000650 12 04 A4         [24] 2433 	lcall	_i2c_read_data
                           000597  2434 	C$lab3_3compass.c$84$1$115 ==.
                                   2435 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:84: range = ((unsigned int) Data[0] << 8 | Data[1]);
      000653 AF 41            [24] 2436 	mov	r7,_ReadCompass_Data_1_115
      000655 7E 00            [12] 2437 	mov	r6,#0x00
      000657 AC 42            [24] 2438 	mov	r4,(_ReadCompass_Data_1_115 + 0x0001)
      000659 7D 00            [12] 2439 	mov	r5,#0x00
      00065B EC               [12] 2440 	mov	a,r4
      00065C 4E               [12] 2441 	orl	a,r6
      00065D F5 82            [12] 2442 	mov	dpl,a
      00065F ED               [12] 2443 	mov	a,r5
      000660 4F               [12] 2444 	orl	a,r7
      000661 F5 83            [12] 2445 	mov	dph,a
                           0005A7  2446 	C$lab3_3compass.c$85$1$115 ==.
                                   2447 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:85: return range;
                           0005A7  2448 	C$lab3_3compass.c$87$1$115 ==.
                           0005A7  2449 	XG$ReadCompass$0$0 ==.
      000663 22               [24] 2450 	ret
                                   2451 ;------------------------------------------------------------
                                   2452 ;Allocation info for local variables in function 'XBR0_Init'
                                   2453 ;------------------------------------------------------------
                           0005A8  2454 	G$XBR0_Init$0$0 ==.
                           0005A8  2455 	C$lab3_3compass.c$95$1$115 ==.
                                   2456 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:95: void XBR0_Init()
                                   2457 ;	-----------------------------------------
                                   2458 ;	 function XBR0_Init
                                   2459 ;	-----------------------------------------
      000664                       2460 _XBR0_Init:
                           0005A8  2461 	C$lab3_3compass.c$98$1$116 ==.
                                   2462 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:98: XBR0  = 0x27;  //configure crossbar as directed in the laboratory
      000664 75 E1 27         [24] 2463 	mov	_XBR0,#0x27
                           0005AB  2464 	C$lab3_3compass.c$100$1$116 ==.
                           0005AB  2465 	XG$XBR0_Init$0$0 ==.
      000667 22               [24] 2466 	ret
                                   2467 ;------------------------------------------------------------
                                   2468 ;Allocation info for local variables in function 'SMB_Init'
                                   2469 ;------------------------------------------------------------
                           0005AC  2470 	G$SMB_Init$0$0 ==.
                           0005AC  2471 	C$lab3_3compass.c$102$1$116 ==.
                                   2472 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:102: void SMB_Init(void)
                                   2473 ;	-----------------------------------------
                                   2474 ;	 function SMB_Init
                                   2475 ;	-----------------------------------------
      000668                       2476 _SMB_Init:
                           0005AC  2477 	C$lab3_3compass.c$104$1$118 ==.
                                   2478 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:104: SMB0CR =0x93;
      000668 75 CF 93         [24] 2479 	mov	_SMB0CR,#0x93
                           0005AF  2480 	C$lab3_3compass.c$105$1$118 ==.
                                   2481 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:105: ENSMB =1;
      00066B D2 C6            [12] 2482 	setb	_ENSMB
                           0005B1  2483 	C$lab3_3compass.c$106$1$118 ==.
                           0005B1  2484 	XG$SMB_Init$0$0 ==.
      00066D 22               [24] 2485 	ret
                                   2486 ;------------------------------------------------------------
                                   2487 ;Allocation info for local variables in function 'PCA_Init'
                                   2488 ;------------------------------------------------------------
                           0005B2  2489 	G$PCA_Init$0$0 ==.
                           0005B2  2490 	C$lab3_3compass.c$114$1$118 ==.
                                   2491 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:114: void PCA_Init(void)
                                   2492 ;	-----------------------------------------
                                   2493 ;	 function PCA_Init
                                   2494 ;	-----------------------------------------
      00066E                       2495 _PCA_Init:
                           0005B2  2496 	C$lab3_3compass.c$118$1$120 ==.
                                   2497 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:118: PCA0MD = 0x81;
      00066E 75 D9 81         [24] 2498 	mov	_PCA0MD,#0x81
                           0005B5  2499 	C$lab3_3compass.c$119$1$120 ==.
                                   2500 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:119: PCA0CPM0 = 0xC2;    //CCM0 in 16-bit compare mode
      000671 75 DA C2         [24] 2501 	mov	_PCA0CPM0,#0xC2
                           0005B8  2502 	C$lab3_3compass.c$120$1$120 ==.
                                   2503 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:120: PCA0CN = 0x40;      //Enable PCA counter
      000674 75 D8 40         [24] 2504 	mov	_PCA0CN,#0x40
                           0005BB  2505 	C$lab3_3compass.c$121$1$120 ==.
                                   2506 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:121: EIE1 |= 0x08;       //Enable PCA interrupt
      000677 43 E6 08         [24] 2507 	orl	_EIE1,#0x08
                           0005BE  2508 	C$lab3_3compass.c$122$1$120 ==.
                                   2509 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:122: EA = 1;             //Enable global interrupts
      00067A D2 AF            [12] 2510 	setb	_EA
                           0005C0  2511 	C$lab3_3compass.c$123$1$120 ==.
                           0005C0  2512 	XG$PCA_Init$0$0 ==.
      00067C 22               [24] 2513 	ret
                                   2514 ;------------------------------------------------------------
                                   2515 ;Allocation info for local variables in function 'PCA_ISR'
                                   2516 ;------------------------------------------------------------
                           0005C1  2517 	G$PCA_ISR$0$0 ==.
                           0005C1  2518 	C$lab3_3compass.c$131$1$120 ==.
                                   2519 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:131: void PCA_ISR ( void ) __interrupt 9
                                   2520 ;	-----------------------------------------
                                   2521 ;	 function PCA_ISR
                                   2522 ;	-----------------------------------------
      00067D                       2523 _PCA_ISR:
      00067D C0 E0            [24] 2524 	push	acc
      00067F C0 D0            [24] 2525 	push	psw
                           0005C5  2526 	C$lab3_3compass.c$134$1$122 ==.
                                   2527 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:134: if (CF)
                           0005C5  2528 	C$lab3_3compass.c$136$2$123 ==.
                                   2529 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:136: CF =0;
      000681 10 DF 02         [24] 2530 	jbc	_CF,00108$
      000684 80 0E            [24] 2531 	sjmp	00102$
      000686                       2532 00108$:
                           0005CA  2533 	C$lab3_3compass.c$137$2$123 ==.
                                   2534 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:137: PCA0 = 0x7000;
      000686 75 E9 00         [24] 2535 	mov	((_PCA0 >> 0) & 0xFF),#0x00
      000689 75 F9 70         [24] 2536 	mov	((_PCA0 >> 8) & 0xFF),#0x70
                           0005D0  2537 	C$lab3_3compass.c$138$2$123 ==.
                                   2538 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:138: count++;
      00068C 05 36            [12] 2539 	inc	_count
      00068E E4               [12] 2540 	clr	a
      00068F B5 36 02         [24] 2541 	cjne	a,_count,00109$
      000692 05 37            [12] 2542 	inc	(_count + 1)
      000694                       2543 00109$:
      000694                       2544 00102$:
                           0005D8  2545 	C$lab3_3compass.c$141$1$122 ==.
                                   2546 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:141: PCA0CN &= 0xC0;
      000694 53 D8 C0         [24] 2547 	anl	_PCA0CN,#0xC0
      000697 D0 D0            [24] 2548 	pop	psw
      000699 D0 E0            [24] 2549 	pop	acc
                           0005DF  2550 	C$lab3_3compass.c$144$1$122 ==.
                           0005DF  2551 	XG$PCA_ISR$0$0 ==.
      00069B 32               [24] 2552 	reti
                                   2553 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   2554 ;	eliminated unneeded push/pop dpl
                                   2555 ;	eliminated unneeded push/pop dph
                                   2556 ;	eliminated unneeded push/pop b
                                   2557 ;------------------------------------------------------------
                                   2558 ;Allocation info for local variables in function 'Steering_Servo'
                                   2559 ;------------------------------------------------------------
                           0005E0  2560 	G$Steering_Servo$0$0 ==.
                           0005E0  2561 	C$lab3_3compass.c$146$1$122 ==.
                                   2562 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:146: void Steering_Servo()
                                   2563 ;	-----------------------------------------
                                   2564 ;	 function Steering_Servo
                                   2565 ;	-----------------------------------------
      00069C                       2566 _Steering_Servo:
                           0005E0  2567 	C$lab3_3compass.c$151$1$124 ==.
                                   2568 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:151: if(input == 'r')  // single character input to increase the pulsewidth
      00069C 74 72            [12] 2569 	mov	a,#0x72
      00069E B5 38 21         [24] 2570 	cjne	a,_input,00110$
                           0005E5  2571 	C$lab3_3compass.c$155$2$125 ==.
                                   2572 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:155: if(STR_PW<= PW_MIN_STR)  // check if less than pulsewidth minimum
      0006A1 C3               [12] 2573 	clr	c
      0006A2 74 D9            [12] 2574 	mov	a,#0xD9
      0006A4 95 34            [12] 2575 	subb	a,_STR_PW
      0006A6 74 08            [12] 2576 	mov	a,#0x08
      0006A8 95 35            [12] 2577 	subb	a,(_STR_PW + 1)
      0006AA 40 08            [24] 2578 	jc	00102$
                           0005F0  2579 	C$lab3_3compass.c$157$3$126 ==.
                                   2580 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:157: STR_PW= PW_MIN_STR;    // set SERVO_PW to a minimum value
      0006AC 75 34 D9         [24] 2581 	mov	_STR_PW,#0xD9
      0006AF 75 35 08         [24] 2582 	mov	(_STR_PW + 1),#0x08
      0006B2 80 31            [24] 2583 	sjmp	00111$
      0006B4                       2584 00102$:
                           0005F8  2585 	C$lab3_3compass.c$161$3$127 ==.
                                   2586 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:161: STR_PW-= 10;
      0006B4 E5 34            [12] 2587 	mov	a,_STR_PW
      0006B6 24 F6            [12] 2588 	add	a,#0xF6
      0006B8 F5 34            [12] 2589 	mov	_STR_PW,a
      0006BA E5 35            [12] 2590 	mov	a,(_STR_PW + 1)
      0006BC 34 FF            [12] 2591 	addc	a,#0xFF
      0006BE F5 35            [12] 2592 	mov	(_STR_PW + 1),a
      0006C0 80 23            [24] 2593 	sjmp	00111$
      0006C2                       2594 00110$:
                           000606  2595 	C$lab3_3compass.c$164$1$124 ==.
                                   2596 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:164: else if(input == 'l')  // single character input to decrease the pulsewidth
      0006C2 74 6C            [12] 2597 	mov	a,#0x6C
      0006C4 B5 38 1E         [24] 2598 	cjne	a,_input,00111$
                           00060B  2599 	C$lab3_3compass.c$168$2$128 ==.
                                   2600 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:168: if(STR_PW> PW_MAX_STR)  // check if pulsewidth maximum exceeded
      0006C7 C3               [12] 2601 	clr	c
      0006C8 74 CB            [12] 2602 	mov	a,#0xCB
      0006CA 95 34            [12] 2603 	subb	a,_STR_PW
      0006CC 74 0C            [12] 2604 	mov	a,#0x0C
      0006CE 95 35            [12] 2605 	subb	a,(_STR_PW + 1)
      0006D0 50 08            [24] 2606 	jnc	00105$
                           000616  2607 	C$lab3_3compass.c$170$3$129 ==.
                                   2608 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:170: STR_PW= PW_MAX_STR;     // set STR_PW to a maximum value
      0006D2 75 34 CB         [24] 2609 	mov	_STR_PW,#0xCB
      0006D5 75 35 0C         [24] 2610 	mov	(_STR_PW + 1),#0x0C
      0006D8 80 0B            [24] 2611 	sjmp	00111$
      0006DA                       2612 00105$:
                           00061E  2613 	C$lab3_3compass.c$174$3$130 ==.
                                   2614 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:174: STR_PW+= 10;
      0006DA 74 0A            [12] 2615 	mov	a,#0x0A
      0006DC 25 34            [12] 2616 	add	a,_STR_PW
      0006DE F5 34            [12] 2617 	mov	_STR_PW,a
      0006E0 E4               [12] 2618 	clr	a
      0006E1 35 35            [12] 2619 	addc	a,(_STR_PW + 1)
      0006E3 F5 35            [12] 2620 	mov	(_STR_PW + 1),a
      0006E5                       2621 00111$:
                           000629  2622 	C$lab3_3compass.c$177$1$124 ==.
                                   2623 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:177: printf("\r\nSTR_PW: %u", STR_PW);
      0006E5 C0 34            [24] 2624 	push	_STR_PW
      0006E7 C0 35            [24] 2625 	push	(_STR_PW + 1)
      0006E9 74 22            [12] 2626 	mov	a,#___str_5
      0006EB C0 E0            [24] 2627 	push	acc
      0006ED 74 0F            [12] 2628 	mov	a,#(___str_5 >> 8)
      0006EF C0 E0            [24] 2629 	push	acc
      0006F1 74 80            [12] 2630 	mov	a,#0x80
      0006F3 C0 E0            [24] 2631 	push	acc
      0006F5 12 08 B6         [24] 2632 	lcall	_printf
      0006F8 E5 81            [12] 2633 	mov	a,sp
      0006FA 24 FB            [12] 2634 	add	a,#0xfb
      0006FC F5 81            [12] 2635 	mov	sp,a
                           000642  2636 	C$lab3_3compass.c$178$1$124 ==.
                                   2637 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:178: tmp0_lo_to_hi= 0xFFFF - STR_PW;
      0006FE 74 FF            [12] 2638 	mov	a,#0xFF
      000700 C3               [12] 2639 	clr	c
      000701 95 34            [12] 2640 	subb	a,_STR_PW
      000703 F5 32            [12] 2641 	mov	_tmp0_lo_to_hi,a
      000705 74 FF            [12] 2642 	mov	a,#0xFF
      000707 95 35            [12] 2643 	subb	a,(_STR_PW + 1)
      000709 F5 33            [12] 2644 	mov	(_tmp0_lo_to_hi + 1),a
                           00064F  2645 	C$lab3_3compass.c$179$1$124 ==.
                                   2646 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-3\lab3-3compass.c:179: PCA0CP0 = tmp0_lo_to_hi;
      00070B 85 32 EA         [24] 2647 	mov	((_PCA0CP0 >> 0) & 0xFF),_tmp0_lo_to_hi
      00070E 85 33 FA         [24] 2648 	mov	((_PCA0CP0 >> 8) & 0xFF),(_tmp0_lo_to_hi + 1)
                           000655  2649 	C$lab3_3compass.c$182$1$124 ==.
                           000655  2650 	XG$Steering_Servo$0$0 ==.
      000711 22               [24] 2651 	ret
                                   2652 	.area CSEG    (CODE)
                                   2653 	.area CONST   (CODE)
                           000000  2654 Flab3_3compass$__str_0$0$0 == .
      000ECA                       2655 ___str_0:
      000ECA 0A                    2656 	.db 0x0A
      000ECB 54 79 70 65 20 64 69  2657 	.ascii "Type digits; end w/#"
             67 69 74 73 3B 20 65
             6E 64 20 77 2F 23
      000EDF 00                    2658 	.db 0x00
                           000016  2659 Flab3_3compass$__str_1$0$0 == .
      000EE0                       2660 ___str_1:
      000EE0 20 20 20 20 20 25 63  2661 	.ascii "     %c%c%c%c%c"
             25 63 25 63 25 63 25
             63
      000EEF 00                    2662 	.db 0x00
                           000026  2663 Flab3_3compass$__str_2$0$0 == .
      000EF0                       2664 ___str_2:
      000EF0 25 63                 2665 	.ascii "%c"
      000EF2 00                    2666 	.db 0x00
                           000029  2667 Flab3_3compass$__str_3$0$0 == .
      000EF3                       2668 ___str_3:
      000EF3 45 6D 62 65 64 64 65  2669 	.ascii "Embedded Control Steering Calibration"
             64 20 43 6F 6E 74 72
             6F 6C 20 53 74 65 65
             72 69 6E 67 20 43 61
             6C 69 62 72 61 74 69
             6F 6E
      000F18 0A                    2670 	.db 0x0A
      000F19 00                    2671 	.db 0x00
                           000050  2672 Flab3_3compass$__str_4$0$0 == .
      000F1A                       2673 ___str_4:
      000F1A 0D                    2674 	.db 0x0D
      000F1B 0A                    2675 	.db 0x0A
      000F1C 25 64                 2676 	.ascii "%d"
      000F1E 09                    2677 	.db 0x09
      000F1F 25 64                 2678 	.ascii "%d"
      000F21 00                    2679 	.db 0x00
                           000058  2680 Flab3_3compass$__str_5$0$0 == .
      000F22                       2681 ___str_5:
      000F22 0D                    2682 	.db 0x0D
      000F23 0A                    2683 	.db 0x0A
      000F24 53 54 52 5F 50 57 3A  2684 	.ascii "STR_PW: %u"
             20 25 75
      000F2E 00                    2685 	.db 0x00
                                   2686 	.area XINIT   (CODE)
                                   2687 	.area CABS    (ABS,CODE)
