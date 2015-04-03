                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (Apr  5 2014) (MINGW32)
                                      4 ; This file was generated Fri Apr 03 08:34:46 2015
                                      5 ;--------------------------------------------------------
                                      6 	.module lab3_1steering
                                      7 	.optsdcc -mmcs51 --model-small
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _PCA_ISR
                                     13 	.globl _main
                                     14 	.globl _Sys_Init
                                     15 	.globl _UART0_Init
                                     16 	.globl _SYSCLK_Init
                                     17 	.globl _printf
                                     18 	.globl _SPIF
                                     19 	.globl _WCOL
                                     20 	.globl _MODF
                                     21 	.globl _RXOVRN
                                     22 	.globl _TXBSY
                                     23 	.globl _SLVSEL
                                     24 	.globl _MSTEN
                                     25 	.globl _SPIEN
                                     26 	.globl _AD0EN
                                     27 	.globl _ADCEN
                                     28 	.globl _AD0TM
                                     29 	.globl _ADCTM
                                     30 	.globl _AD0INT
                                     31 	.globl _ADCINT
                                     32 	.globl _AD0BUSY
                                     33 	.globl _ADBUSY
                                     34 	.globl _AD0CM1
                                     35 	.globl _ADSTM1
                                     36 	.globl _AD0CM0
                                     37 	.globl _ADSTM0
                                     38 	.globl _AD0WINT
                                     39 	.globl _ADWINT
                                     40 	.globl _AD0LJST
                                     41 	.globl _ADLJST
                                     42 	.globl _CF
                                     43 	.globl _CR
                                     44 	.globl _CCF4
                                     45 	.globl _CCF3
                                     46 	.globl _CCF2
                                     47 	.globl _CCF1
                                     48 	.globl _CCF0
                                     49 	.globl _CY
                                     50 	.globl _AC
                                     51 	.globl _F0
                                     52 	.globl _RS1
                                     53 	.globl _RS0
                                     54 	.globl _OV
                                     55 	.globl _F1
                                     56 	.globl _P
                                     57 	.globl _TF2
                                     58 	.globl _EXF2
                                     59 	.globl _RCLK
                                     60 	.globl _TCLK
                                     61 	.globl _EXEN2
                                     62 	.globl _TR2
                                     63 	.globl _CT2
                                     64 	.globl _CPRL2
                                     65 	.globl _BUSY
                                     66 	.globl _ENSMB
                                     67 	.globl _STA
                                     68 	.globl _STO
                                     69 	.globl _SI
                                     70 	.globl _AA
                                     71 	.globl _SMBFTE
                                     72 	.globl _SMBTOE
                                     73 	.globl _PT2
                                     74 	.globl _PS
                                     75 	.globl _PS0
                                     76 	.globl _PT1
                                     77 	.globl _PX1
                                     78 	.globl _PT0
                                     79 	.globl _PX0
                                     80 	.globl _P3_7
                                     81 	.globl _P3_6
                                     82 	.globl _P3_5
                                     83 	.globl _P3_4
                                     84 	.globl _P3_3
                                     85 	.globl _P3_2
                                     86 	.globl _P3_1
                                     87 	.globl _P3_0
                                     88 	.globl _EA
                                     89 	.globl _ET2
                                     90 	.globl _ES
                                     91 	.globl _ES0
                                     92 	.globl _ET1
                                     93 	.globl _EX1
                                     94 	.globl _ET0
                                     95 	.globl _EX0
                                     96 	.globl _P2_7
                                     97 	.globl _P2_6
                                     98 	.globl _P2_5
                                     99 	.globl _P2_4
                                    100 	.globl _P2_3
                                    101 	.globl _P2_2
                                    102 	.globl _P2_1
                                    103 	.globl _P2_0
                                    104 	.globl _S0MODE
                                    105 	.globl _SM00
                                    106 	.globl _SM0
                                    107 	.globl _SM10
                                    108 	.globl _SM1
                                    109 	.globl _MCE0
                                    110 	.globl _SM20
                                    111 	.globl _SM2
                                    112 	.globl _REN0
                                    113 	.globl _REN
                                    114 	.globl _TB80
                                    115 	.globl _TB8
                                    116 	.globl _RB80
                                    117 	.globl _RB8
                                    118 	.globl _TI0
                                    119 	.globl _TI
                                    120 	.globl _RI0
                                    121 	.globl _RI
                                    122 	.globl _P1_7
                                    123 	.globl _P1_6
                                    124 	.globl _P1_5
                                    125 	.globl _P1_4
                                    126 	.globl _P1_3
                                    127 	.globl _P1_2
                                    128 	.globl _P1_1
                                    129 	.globl _P1_0
                                    130 	.globl _TF1
                                    131 	.globl _TR1
                                    132 	.globl _TF0
                                    133 	.globl _TR0
                                    134 	.globl _IE1
                                    135 	.globl _IT1
                                    136 	.globl _IE0
                                    137 	.globl _IT0
                                    138 	.globl _P0_7
                                    139 	.globl _P0_6
                                    140 	.globl _P0_5
                                    141 	.globl _P0_4
                                    142 	.globl _P0_3
                                    143 	.globl _P0_2
                                    144 	.globl _P0_1
                                    145 	.globl _P0_0
                                    146 	.globl _PCA0CP4
                                    147 	.globl _PCA0CP3
                                    148 	.globl _PCA0CP2
                                    149 	.globl _PCA0CP1
                                    150 	.globl _PCA0CP0
                                    151 	.globl _PCA0
                                    152 	.globl _DAC1
                                    153 	.globl _DAC0
                                    154 	.globl _ADC0LT
                                    155 	.globl _ADC0GT
                                    156 	.globl _ADC0
                                    157 	.globl _RCAP4
                                    158 	.globl _TMR4
                                    159 	.globl _TMR3RL
                                    160 	.globl _TMR3
                                    161 	.globl _RCAP2
                                    162 	.globl _TMR2
                                    163 	.globl _TMR1
                                    164 	.globl _TMR0
                                    165 	.globl _WDTCN
                                    166 	.globl _PCA0CPH4
                                    167 	.globl _PCA0CPH3
                                    168 	.globl _PCA0CPH2
                                    169 	.globl _PCA0CPH1
                                    170 	.globl _PCA0CPH0
                                    171 	.globl _PCA0H
                                    172 	.globl _SPI0CN
                                    173 	.globl _EIP2
                                    174 	.globl _EIP1
                                    175 	.globl _TH4
                                    176 	.globl _TL4
                                    177 	.globl _SADDR1
                                    178 	.globl _SBUF1
                                    179 	.globl _SCON1
                                    180 	.globl _B
                                    181 	.globl _RSTSRC
                                    182 	.globl _PCA0CPL4
                                    183 	.globl _PCA0CPL3
                                    184 	.globl _PCA0CPL2
                                    185 	.globl _PCA0CPL1
                                    186 	.globl _PCA0CPL0
                                    187 	.globl _PCA0L
                                    188 	.globl _ADC0CN
                                    189 	.globl _EIE2
                                    190 	.globl _EIE1
                                    191 	.globl _RCAP4H
                                    192 	.globl _RCAP4L
                                    193 	.globl _XBR2
                                    194 	.globl _XBR1
                                    195 	.globl _XBR0
                                    196 	.globl _ACC
                                    197 	.globl _PCA0CPM4
                                    198 	.globl _PCA0CPM3
                                    199 	.globl _PCA0CPM2
                                    200 	.globl _PCA0CPM1
                                    201 	.globl _PCA0CPM0
                                    202 	.globl _PCA0MD
                                    203 	.globl _PCA0CN
                                    204 	.globl _DAC1CN
                                    205 	.globl _DAC1H
                                    206 	.globl _DAC1L
                                    207 	.globl _DAC0CN
                                    208 	.globl _DAC0H
                                    209 	.globl _DAC0L
                                    210 	.globl _REF0CN
                                    211 	.globl _PSW
                                    212 	.globl _SMB0CR
                                    213 	.globl _TH2
                                    214 	.globl _TL2
                                    215 	.globl _RCAP2H
                                    216 	.globl _RCAP2L
                                    217 	.globl _T4CON
                                    218 	.globl _T2CON
                                    219 	.globl _ADC0LTH
                                    220 	.globl _ADC0LTL
                                    221 	.globl _ADC0GTH
                                    222 	.globl _ADC0GTL
                                    223 	.globl _SMB0ADR
                                    224 	.globl _SMB0DAT
                                    225 	.globl _SMB0STA
                                    226 	.globl _SMB0CN
                                    227 	.globl _ADC0H
                                    228 	.globl _ADC0L
                                    229 	.globl _P1MDIN
                                    230 	.globl _ADC0CF
                                    231 	.globl _AMX0SL
                                    232 	.globl _AMX0CF
                                    233 	.globl _SADEN0
                                    234 	.globl _IP
                                    235 	.globl _FLACL
                                    236 	.globl _FLSCL
                                    237 	.globl _P74OUT
                                    238 	.globl _OSCICN
                                    239 	.globl _OSCXCN
                                    240 	.globl _P3
                                    241 	.globl __XPAGE
                                    242 	.globl _EMI0CN
                                    243 	.globl _SADEN1
                                    244 	.globl _P3IF
                                    245 	.globl _AMX1SL
                                    246 	.globl _ADC1CF
                                    247 	.globl _ADC1CN
                                    248 	.globl _SADDR0
                                    249 	.globl _IE
                                    250 	.globl _P3MDOUT
                                    251 	.globl _PRT3CF
                                    252 	.globl _P2MDOUT
                                    253 	.globl _PRT2CF
                                    254 	.globl _P1MDOUT
                                    255 	.globl _PRT1CF
                                    256 	.globl _P0MDOUT
                                    257 	.globl _PRT0CF
                                    258 	.globl _EMI0CF
                                    259 	.globl _EMI0TC
                                    260 	.globl _P2
                                    261 	.globl _CPT1CN
                                    262 	.globl _CPT0CN
                                    263 	.globl _SPI0CKR
                                    264 	.globl _ADC1
                                    265 	.globl _SPI0DAT
                                    266 	.globl _SPI0CFG
                                    267 	.globl _SBUF0
                                    268 	.globl _SBUF
                                    269 	.globl _SCON0
                                    270 	.globl _SCON
                                    271 	.globl _P7
                                    272 	.globl _TMR3H
                                    273 	.globl _TMR3L
                                    274 	.globl _TMR3RLH
                                    275 	.globl _TMR3RLL
                                    276 	.globl _TMR3CN
                                    277 	.globl _P1
                                    278 	.globl _PSCTL
                                    279 	.globl _CKCON
                                    280 	.globl _TH1
                                    281 	.globl _TH0
                                    282 	.globl _TL1
                                    283 	.globl _TL0
                                    284 	.globl _TMOD
                                    285 	.globl _TCON
                                    286 	.globl _PCON
                                    287 	.globl _P6
                                    288 	.globl _P5
                                    289 	.globl _P4
                                    290 	.globl _DPH
                                    291 	.globl _DPL
                                    292 	.globl _SP
                                    293 	.globl _P0
                                    294 	.globl _input
                                    295 	.globl _count
                                    296 	.globl _STR_PW
                                    297 	.globl _putchar
                                    298 	.globl _getchar
                                    299 	.globl _Port_Init
                                    300 	.globl _XBR0_Init
                                    301 	.globl _PCA_Init
                                    302 	.globl _Steering_Servo
                                    303 ;--------------------------------------------------------
                                    304 ; special function registers
                                    305 ;--------------------------------------------------------
                                    306 	.area RSEG    (ABS,DATA)
      000000                        307 	.org 0x0000
                           000080   308 G$P0$0$0 == 0x0080
                           000080   309 _P0	=	0x0080
                           000081   310 G$SP$0$0 == 0x0081
                           000081   311 _SP	=	0x0081
                           000082   312 G$DPL$0$0 == 0x0082
                           000082   313 _DPL	=	0x0082
                           000083   314 G$DPH$0$0 == 0x0083
                           000083   315 _DPH	=	0x0083
                           000084   316 G$P4$0$0 == 0x0084
                           000084   317 _P4	=	0x0084
                           000085   318 G$P5$0$0 == 0x0085
                           000085   319 _P5	=	0x0085
                           000086   320 G$P6$0$0 == 0x0086
                           000086   321 _P6	=	0x0086
                           000087   322 G$PCON$0$0 == 0x0087
                           000087   323 _PCON	=	0x0087
                           000088   324 G$TCON$0$0 == 0x0088
                           000088   325 _TCON	=	0x0088
                           000089   326 G$TMOD$0$0 == 0x0089
                           000089   327 _TMOD	=	0x0089
                           00008A   328 G$TL0$0$0 == 0x008a
                           00008A   329 _TL0	=	0x008a
                           00008B   330 G$TL1$0$0 == 0x008b
                           00008B   331 _TL1	=	0x008b
                           00008C   332 G$TH0$0$0 == 0x008c
                           00008C   333 _TH0	=	0x008c
                           00008D   334 G$TH1$0$0 == 0x008d
                           00008D   335 _TH1	=	0x008d
                           00008E   336 G$CKCON$0$0 == 0x008e
                           00008E   337 _CKCON	=	0x008e
                           00008F   338 G$PSCTL$0$0 == 0x008f
                           00008F   339 _PSCTL	=	0x008f
                           000090   340 G$P1$0$0 == 0x0090
                           000090   341 _P1	=	0x0090
                           000091   342 G$TMR3CN$0$0 == 0x0091
                           000091   343 _TMR3CN	=	0x0091
                           000092   344 G$TMR3RLL$0$0 == 0x0092
                           000092   345 _TMR3RLL	=	0x0092
                           000093   346 G$TMR3RLH$0$0 == 0x0093
                           000093   347 _TMR3RLH	=	0x0093
                           000094   348 G$TMR3L$0$0 == 0x0094
                           000094   349 _TMR3L	=	0x0094
                           000095   350 G$TMR3H$0$0 == 0x0095
                           000095   351 _TMR3H	=	0x0095
                           000096   352 G$P7$0$0 == 0x0096
                           000096   353 _P7	=	0x0096
                           000098   354 G$SCON$0$0 == 0x0098
                           000098   355 _SCON	=	0x0098
                           000098   356 G$SCON0$0$0 == 0x0098
                           000098   357 _SCON0	=	0x0098
                           000099   358 G$SBUF$0$0 == 0x0099
                           000099   359 _SBUF	=	0x0099
                           000099   360 G$SBUF0$0$0 == 0x0099
                           000099   361 _SBUF0	=	0x0099
                           00009A   362 G$SPI0CFG$0$0 == 0x009a
                           00009A   363 _SPI0CFG	=	0x009a
                           00009B   364 G$SPI0DAT$0$0 == 0x009b
                           00009B   365 _SPI0DAT	=	0x009b
                           00009C   366 G$ADC1$0$0 == 0x009c
                           00009C   367 _ADC1	=	0x009c
                           00009D   368 G$SPI0CKR$0$0 == 0x009d
                           00009D   369 _SPI0CKR	=	0x009d
                           00009E   370 G$CPT0CN$0$0 == 0x009e
                           00009E   371 _CPT0CN	=	0x009e
                           00009F   372 G$CPT1CN$0$0 == 0x009f
                           00009F   373 _CPT1CN	=	0x009f
                           0000A0   374 G$P2$0$0 == 0x00a0
                           0000A0   375 _P2	=	0x00a0
                           0000A1   376 G$EMI0TC$0$0 == 0x00a1
                           0000A1   377 _EMI0TC	=	0x00a1
                           0000A3   378 G$EMI0CF$0$0 == 0x00a3
                           0000A3   379 _EMI0CF	=	0x00a3
                           0000A4   380 G$PRT0CF$0$0 == 0x00a4
                           0000A4   381 _PRT0CF	=	0x00a4
                           0000A4   382 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   383 _P0MDOUT	=	0x00a4
                           0000A5   384 G$PRT1CF$0$0 == 0x00a5
                           0000A5   385 _PRT1CF	=	0x00a5
                           0000A5   386 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   387 _P1MDOUT	=	0x00a5
                           0000A6   388 G$PRT2CF$0$0 == 0x00a6
                           0000A6   389 _PRT2CF	=	0x00a6
                           0000A6   390 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   391 _P2MDOUT	=	0x00a6
                           0000A7   392 G$PRT3CF$0$0 == 0x00a7
                           0000A7   393 _PRT3CF	=	0x00a7
                           0000A7   394 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   395 _P3MDOUT	=	0x00a7
                           0000A8   396 G$IE$0$0 == 0x00a8
                           0000A8   397 _IE	=	0x00a8
                           0000A9   398 G$SADDR0$0$0 == 0x00a9
                           0000A9   399 _SADDR0	=	0x00a9
                           0000AA   400 G$ADC1CN$0$0 == 0x00aa
                           0000AA   401 _ADC1CN	=	0x00aa
                           0000AB   402 G$ADC1CF$0$0 == 0x00ab
                           0000AB   403 _ADC1CF	=	0x00ab
                           0000AC   404 G$AMX1SL$0$0 == 0x00ac
                           0000AC   405 _AMX1SL	=	0x00ac
                           0000AD   406 G$P3IF$0$0 == 0x00ad
                           0000AD   407 _P3IF	=	0x00ad
                           0000AE   408 G$SADEN1$0$0 == 0x00ae
                           0000AE   409 _SADEN1	=	0x00ae
                           0000AF   410 G$EMI0CN$0$0 == 0x00af
                           0000AF   411 _EMI0CN	=	0x00af
                           0000AF   412 G$_XPAGE$0$0 == 0x00af
                           0000AF   413 __XPAGE	=	0x00af
                           0000B0   414 G$P3$0$0 == 0x00b0
                           0000B0   415 _P3	=	0x00b0
                           0000B1   416 G$OSCXCN$0$0 == 0x00b1
                           0000B1   417 _OSCXCN	=	0x00b1
                           0000B2   418 G$OSCICN$0$0 == 0x00b2
                           0000B2   419 _OSCICN	=	0x00b2
                           0000B5   420 G$P74OUT$0$0 == 0x00b5
                           0000B5   421 _P74OUT	=	0x00b5
                           0000B6   422 G$FLSCL$0$0 == 0x00b6
                           0000B6   423 _FLSCL	=	0x00b6
                           0000B7   424 G$FLACL$0$0 == 0x00b7
                           0000B7   425 _FLACL	=	0x00b7
                           0000B8   426 G$IP$0$0 == 0x00b8
                           0000B8   427 _IP	=	0x00b8
                           0000B9   428 G$SADEN0$0$0 == 0x00b9
                           0000B9   429 _SADEN0	=	0x00b9
                           0000BA   430 G$AMX0CF$0$0 == 0x00ba
                           0000BA   431 _AMX0CF	=	0x00ba
                           0000BB   432 G$AMX0SL$0$0 == 0x00bb
                           0000BB   433 _AMX0SL	=	0x00bb
                           0000BC   434 G$ADC0CF$0$0 == 0x00bc
                           0000BC   435 _ADC0CF	=	0x00bc
                           0000BD   436 G$P1MDIN$0$0 == 0x00bd
                           0000BD   437 _P1MDIN	=	0x00bd
                           0000BE   438 G$ADC0L$0$0 == 0x00be
                           0000BE   439 _ADC0L	=	0x00be
                           0000BF   440 G$ADC0H$0$0 == 0x00bf
                           0000BF   441 _ADC0H	=	0x00bf
                           0000C0   442 G$SMB0CN$0$0 == 0x00c0
                           0000C0   443 _SMB0CN	=	0x00c0
                           0000C1   444 G$SMB0STA$0$0 == 0x00c1
                           0000C1   445 _SMB0STA	=	0x00c1
                           0000C2   446 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   447 _SMB0DAT	=	0x00c2
                           0000C3   448 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   449 _SMB0ADR	=	0x00c3
                           0000C4   450 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   451 _ADC0GTL	=	0x00c4
                           0000C5   452 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   453 _ADC0GTH	=	0x00c5
                           0000C6   454 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   455 _ADC0LTL	=	0x00c6
                           0000C7   456 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   457 _ADC0LTH	=	0x00c7
                           0000C8   458 G$T2CON$0$0 == 0x00c8
                           0000C8   459 _T2CON	=	0x00c8
                           0000C9   460 G$T4CON$0$0 == 0x00c9
                           0000C9   461 _T4CON	=	0x00c9
                           0000CA   462 G$RCAP2L$0$0 == 0x00ca
                           0000CA   463 _RCAP2L	=	0x00ca
                           0000CB   464 G$RCAP2H$0$0 == 0x00cb
                           0000CB   465 _RCAP2H	=	0x00cb
                           0000CC   466 G$TL2$0$0 == 0x00cc
                           0000CC   467 _TL2	=	0x00cc
                           0000CD   468 G$TH2$0$0 == 0x00cd
                           0000CD   469 _TH2	=	0x00cd
                           0000CF   470 G$SMB0CR$0$0 == 0x00cf
                           0000CF   471 _SMB0CR	=	0x00cf
                           0000D0   472 G$PSW$0$0 == 0x00d0
                           0000D0   473 _PSW	=	0x00d0
                           0000D1   474 G$REF0CN$0$0 == 0x00d1
                           0000D1   475 _REF0CN	=	0x00d1
                           0000D2   476 G$DAC0L$0$0 == 0x00d2
                           0000D2   477 _DAC0L	=	0x00d2
                           0000D3   478 G$DAC0H$0$0 == 0x00d3
                           0000D3   479 _DAC0H	=	0x00d3
                           0000D4   480 G$DAC0CN$0$0 == 0x00d4
                           0000D4   481 _DAC0CN	=	0x00d4
                           0000D5   482 G$DAC1L$0$0 == 0x00d5
                           0000D5   483 _DAC1L	=	0x00d5
                           0000D6   484 G$DAC1H$0$0 == 0x00d6
                           0000D6   485 _DAC1H	=	0x00d6
                           0000D7   486 G$DAC1CN$0$0 == 0x00d7
                           0000D7   487 _DAC1CN	=	0x00d7
                           0000D8   488 G$PCA0CN$0$0 == 0x00d8
                           0000D8   489 _PCA0CN	=	0x00d8
                           0000D9   490 G$PCA0MD$0$0 == 0x00d9
                           0000D9   491 _PCA0MD	=	0x00d9
                           0000DA   492 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   493 _PCA0CPM0	=	0x00da
                           0000DB   494 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   495 _PCA0CPM1	=	0x00db
                           0000DC   496 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   497 _PCA0CPM2	=	0x00dc
                           0000DD   498 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   499 _PCA0CPM3	=	0x00dd
                           0000DE   500 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   501 _PCA0CPM4	=	0x00de
                           0000E0   502 G$ACC$0$0 == 0x00e0
                           0000E0   503 _ACC	=	0x00e0
                           0000E1   504 G$XBR0$0$0 == 0x00e1
                           0000E1   505 _XBR0	=	0x00e1
                           0000E2   506 G$XBR1$0$0 == 0x00e2
                           0000E2   507 _XBR1	=	0x00e2
                           0000E3   508 G$XBR2$0$0 == 0x00e3
                           0000E3   509 _XBR2	=	0x00e3
                           0000E4   510 G$RCAP4L$0$0 == 0x00e4
                           0000E4   511 _RCAP4L	=	0x00e4
                           0000E5   512 G$RCAP4H$0$0 == 0x00e5
                           0000E5   513 _RCAP4H	=	0x00e5
                           0000E6   514 G$EIE1$0$0 == 0x00e6
                           0000E6   515 _EIE1	=	0x00e6
                           0000E7   516 G$EIE2$0$0 == 0x00e7
                           0000E7   517 _EIE2	=	0x00e7
                           0000E8   518 G$ADC0CN$0$0 == 0x00e8
                           0000E8   519 _ADC0CN	=	0x00e8
                           0000E9   520 G$PCA0L$0$0 == 0x00e9
                           0000E9   521 _PCA0L	=	0x00e9
                           0000EA   522 G$PCA0CPL0$0$0 == 0x00ea
                           0000EA   523 _PCA0CPL0	=	0x00ea
                           0000EB   524 G$PCA0CPL1$0$0 == 0x00eb
                           0000EB   525 _PCA0CPL1	=	0x00eb
                           0000EC   526 G$PCA0CPL2$0$0 == 0x00ec
                           0000EC   527 _PCA0CPL2	=	0x00ec
                           0000ED   528 G$PCA0CPL3$0$0 == 0x00ed
                           0000ED   529 _PCA0CPL3	=	0x00ed
                           0000EE   530 G$PCA0CPL4$0$0 == 0x00ee
                           0000EE   531 _PCA0CPL4	=	0x00ee
                           0000EF   532 G$RSTSRC$0$0 == 0x00ef
                           0000EF   533 _RSTSRC	=	0x00ef
                           0000F0   534 G$B$0$0 == 0x00f0
                           0000F0   535 _B	=	0x00f0
                           0000F1   536 G$SCON1$0$0 == 0x00f1
                           0000F1   537 _SCON1	=	0x00f1
                           0000F2   538 G$SBUF1$0$0 == 0x00f2
                           0000F2   539 _SBUF1	=	0x00f2
                           0000F3   540 G$SADDR1$0$0 == 0x00f3
                           0000F3   541 _SADDR1	=	0x00f3
                           0000F4   542 G$TL4$0$0 == 0x00f4
                           0000F4   543 _TL4	=	0x00f4
                           0000F5   544 G$TH4$0$0 == 0x00f5
                           0000F5   545 _TH4	=	0x00f5
                           0000F6   546 G$EIP1$0$0 == 0x00f6
                           0000F6   547 _EIP1	=	0x00f6
                           0000F7   548 G$EIP2$0$0 == 0x00f7
                           0000F7   549 _EIP2	=	0x00f7
                           0000F8   550 G$SPI0CN$0$0 == 0x00f8
                           0000F8   551 _SPI0CN	=	0x00f8
                           0000F9   552 G$PCA0H$0$0 == 0x00f9
                           0000F9   553 _PCA0H	=	0x00f9
                           0000FA   554 G$PCA0CPH0$0$0 == 0x00fa
                           0000FA   555 _PCA0CPH0	=	0x00fa
                           0000FB   556 G$PCA0CPH1$0$0 == 0x00fb
                           0000FB   557 _PCA0CPH1	=	0x00fb
                           0000FC   558 G$PCA0CPH2$0$0 == 0x00fc
                           0000FC   559 _PCA0CPH2	=	0x00fc
                           0000FD   560 G$PCA0CPH3$0$0 == 0x00fd
                           0000FD   561 _PCA0CPH3	=	0x00fd
                           0000FE   562 G$PCA0CPH4$0$0 == 0x00fe
                           0000FE   563 _PCA0CPH4	=	0x00fe
                           0000FF   564 G$WDTCN$0$0 == 0x00ff
                           0000FF   565 _WDTCN	=	0x00ff
                           008C8A   566 G$TMR0$0$0 == 0x8c8a
                           008C8A   567 _TMR0	=	0x8c8a
                           008D8B   568 G$TMR1$0$0 == 0x8d8b
                           008D8B   569 _TMR1	=	0x8d8b
                           00CDCC   570 G$TMR2$0$0 == 0xcdcc
                           00CDCC   571 _TMR2	=	0xcdcc
                           00CBCA   572 G$RCAP2$0$0 == 0xcbca
                           00CBCA   573 _RCAP2	=	0xcbca
                           009594   574 G$TMR3$0$0 == 0x9594
                           009594   575 _TMR3	=	0x9594
                           009392   576 G$TMR3RL$0$0 == 0x9392
                           009392   577 _TMR3RL	=	0x9392
                           00F5F4   578 G$TMR4$0$0 == 0xf5f4
                           00F5F4   579 _TMR4	=	0xf5f4
                           00E5E4   580 G$RCAP4$0$0 == 0xe5e4
                           00E5E4   581 _RCAP4	=	0xe5e4
                           00BFBE   582 G$ADC0$0$0 == 0xbfbe
                           00BFBE   583 _ADC0	=	0xbfbe
                           00C5C4   584 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   585 _ADC0GT	=	0xc5c4
                           00C7C6   586 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   587 _ADC0LT	=	0xc7c6
                           00D3D2   588 G$DAC0$0$0 == 0xd3d2
                           00D3D2   589 _DAC0	=	0xd3d2
                           00D6D5   590 G$DAC1$0$0 == 0xd6d5
                           00D6D5   591 _DAC1	=	0xd6d5
                           00F9E9   592 G$PCA0$0$0 == 0xf9e9
                           00F9E9   593 _PCA0	=	0xf9e9
                           00FAEA   594 G$PCA0CP0$0$0 == 0xfaea
                           00FAEA   595 _PCA0CP0	=	0xfaea
                           00FBEB   596 G$PCA0CP1$0$0 == 0xfbeb
                           00FBEB   597 _PCA0CP1	=	0xfbeb
                           00FCEC   598 G$PCA0CP2$0$0 == 0xfcec
                           00FCEC   599 _PCA0CP2	=	0xfcec
                           00FDED   600 G$PCA0CP3$0$0 == 0xfded
                           00FDED   601 _PCA0CP3	=	0xfded
                           00FEEE   602 G$PCA0CP4$0$0 == 0xfeee
                           00FEEE   603 _PCA0CP4	=	0xfeee
                                    604 ;--------------------------------------------------------
                                    605 ; special function bits
                                    606 ;--------------------------------------------------------
                                    607 	.area RSEG    (ABS,DATA)
      000000                        608 	.org 0x0000
                           000080   609 G$P0_0$0$0 == 0x0080
                           000080   610 _P0_0	=	0x0080
                           000081   611 G$P0_1$0$0 == 0x0081
                           000081   612 _P0_1	=	0x0081
                           000082   613 G$P0_2$0$0 == 0x0082
                           000082   614 _P0_2	=	0x0082
                           000083   615 G$P0_3$0$0 == 0x0083
                           000083   616 _P0_3	=	0x0083
                           000084   617 G$P0_4$0$0 == 0x0084
                           000084   618 _P0_4	=	0x0084
                           000085   619 G$P0_5$0$0 == 0x0085
                           000085   620 _P0_5	=	0x0085
                           000086   621 G$P0_6$0$0 == 0x0086
                           000086   622 _P0_6	=	0x0086
                           000087   623 G$P0_7$0$0 == 0x0087
                           000087   624 _P0_7	=	0x0087
                           000088   625 G$IT0$0$0 == 0x0088
                           000088   626 _IT0	=	0x0088
                           000089   627 G$IE0$0$0 == 0x0089
                           000089   628 _IE0	=	0x0089
                           00008A   629 G$IT1$0$0 == 0x008a
                           00008A   630 _IT1	=	0x008a
                           00008B   631 G$IE1$0$0 == 0x008b
                           00008B   632 _IE1	=	0x008b
                           00008C   633 G$TR0$0$0 == 0x008c
                           00008C   634 _TR0	=	0x008c
                           00008D   635 G$TF0$0$0 == 0x008d
                           00008D   636 _TF0	=	0x008d
                           00008E   637 G$TR1$0$0 == 0x008e
                           00008E   638 _TR1	=	0x008e
                           00008F   639 G$TF1$0$0 == 0x008f
                           00008F   640 _TF1	=	0x008f
                           000090   641 G$P1_0$0$0 == 0x0090
                           000090   642 _P1_0	=	0x0090
                           000091   643 G$P1_1$0$0 == 0x0091
                           000091   644 _P1_1	=	0x0091
                           000092   645 G$P1_2$0$0 == 0x0092
                           000092   646 _P1_2	=	0x0092
                           000093   647 G$P1_3$0$0 == 0x0093
                           000093   648 _P1_3	=	0x0093
                           000094   649 G$P1_4$0$0 == 0x0094
                           000094   650 _P1_4	=	0x0094
                           000095   651 G$P1_5$0$0 == 0x0095
                           000095   652 _P1_5	=	0x0095
                           000096   653 G$P1_6$0$0 == 0x0096
                           000096   654 _P1_6	=	0x0096
                           000097   655 G$P1_7$0$0 == 0x0097
                           000097   656 _P1_7	=	0x0097
                           000098   657 G$RI$0$0 == 0x0098
                           000098   658 _RI	=	0x0098
                           000098   659 G$RI0$0$0 == 0x0098
                           000098   660 _RI0	=	0x0098
                           000099   661 G$TI$0$0 == 0x0099
                           000099   662 _TI	=	0x0099
                           000099   663 G$TI0$0$0 == 0x0099
                           000099   664 _TI0	=	0x0099
                           00009A   665 G$RB8$0$0 == 0x009a
                           00009A   666 _RB8	=	0x009a
                           00009A   667 G$RB80$0$0 == 0x009a
                           00009A   668 _RB80	=	0x009a
                           00009B   669 G$TB8$0$0 == 0x009b
                           00009B   670 _TB8	=	0x009b
                           00009B   671 G$TB80$0$0 == 0x009b
                           00009B   672 _TB80	=	0x009b
                           00009C   673 G$REN$0$0 == 0x009c
                           00009C   674 _REN	=	0x009c
                           00009C   675 G$REN0$0$0 == 0x009c
                           00009C   676 _REN0	=	0x009c
                           00009D   677 G$SM2$0$0 == 0x009d
                           00009D   678 _SM2	=	0x009d
                           00009D   679 G$SM20$0$0 == 0x009d
                           00009D   680 _SM20	=	0x009d
                           00009D   681 G$MCE0$0$0 == 0x009d
                           00009D   682 _MCE0	=	0x009d
                           00009E   683 G$SM1$0$0 == 0x009e
                           00009E   684 _SM1	=	0x009e
                           00009E   685 G$SM10$0$0 == 0x009e
                           00009E   686 _SM10	=	0x009e
                           00009F   687 G$SM0$0$0 == 0x009f
                           00009F   688 _SM0	=	0x009f
                           00009F   689 G$SM00$0$0 == 0x009f
                           00009F   690 _SM00	=	0x009f
                           00009F   691 G$S0MODE$0$0 == 0x009f
                           00009F   692 _S0MODE	=	0x009f
                           0000A0   693 G$P2_0$0$0 == 0x00a0
                           0000A0   694 _P2_0	=	0x00a0
                           0000A1   695 G$P2_1$0$0 == 0x00a1
                           0000A1   696 _P2_1	=	0x00a1
                           0000A2   697 G$P2_2$0$0 == 0x00a2
                           0000A2   698 _P2_2	=	0x00a2
                           0000A3   699 G$P2_3$0$0 == 0x00a3
                           0000A3   700 _P2_3	=	0x00a3
                           0000A4   701 G$P2_4$0$0 == 0x00a4
                           0000A4   702 _P2_4	=	0x00a4
                           0000A5   703 G$P2_5$0$0 == 0x00a5
                           0000A5   704 _P2_5	=	0x00a5
                           0000A6   705 G$P2_6$0$0 == 0x00a6
                           0000A6   706 _P2_6	=	0x00a6
                           0000A7   707 G$P2_7$0$0 == 0x00a7
                           0000A7   708 _P2_7	=	0x00a7
                           0000A8   709 G$EX0$0$0 == 0x00a8
                           0000A8   710 _EX0	=	0x00a8
                           0000A9   711 G$ET0$0$0 == 0x00a9
                           0000A9   712 _ET0	=	0x00a9
                           0000AA   713 G$EX1$0$0 == 0x00aa
                           0000AA   714 _EX1	=	0x00aa
                           0000AB   715 G$ET1$0$0 == 0x00ab
                           0000AB   716 _ET1	=	0x00ab
                           0000AC   717 G$ES0$0$0 == 0x00ac
                           0000AC   718 _ES0	=	0x00ac
                           0000AC   719 G$ES$0$0 == 0x00ac
                           0000AC   720 _ES	=	0x00ac
                           0000AD   721 G$ET2$0$0 == 0x00ad
                           0000AD   722 _ET2	=	0x00ad
                           0000AF   723 G$EA$0$0 == 0x00af
                           0000AF   724 _EA	=	0x00af
                           0000B0   725 G$P3_0$0$0 == 0x00b0
                           0000B0   726 _P3_0	=	0x00b0
                           0000B1   727 G$P3_1$0$0 == 0x00b1
                           0000B1   728 _P3_1	=	0x00b1
                           0000B2   729 G$P3_2$0$0 == 0x00b2
                           0000B2   730 _P3_2	=	0x00b2
                           0000B3   731 G$P3_3$0$0 == 0x00b3
                           0000B3   732 _P3_3	=	0x00b3
                           0000B4   733 G$P3_4$0$0 == 0x00b4
                           0000B4   734 _P3_4	=	0x00b4
                           0000B5   735 G$P3_5$0$0 == 0x00b5
                           0000B5   736 _P3_5	=	0x00b5
                           0000B6   737 G$P3_6$0$0 == 0x00b6
                           0000B6   738 _P3_6	=	0x00b6
                           0000B7   739 G$P3_7$0$0 == 0x00b7
                           0000B7   740 _P3_7	=	0x00b7
                           0000B8   741 G$PX0$0$0 == 0x00b8
                           0000B8   742 _PX0	=	0x00b8
                           0000B9   743 G$PT0$0$0 == 0x00b9
                           0000B9   744 _PT0	=	0x00b9
                           0000BA   745 G$PX1$0$0 == 0x00ba
                           0000BA   746 _PX1	=	0x00ba
                           0000BB   747 G$PT1$0$0 == 0x00bb
                           0000BB   748 _PT1	=	0x00bb
                           0000BC   749 G$PS0$0$0 == 0x00bc
                           0000BC   750 _PS0	=	0x00bc
                           0000BC   751 G$PS$0$0 == 0x00bc
                           0000BC   752 _PS	=	0x00bc
                           0000BD   753 G$PT2$0$0 == 0x00bd
                           0000BD   754 _PT2	=	0x00bd
                           0000C0   755 G$SMBTOE$0$0 == 0x00c0
                           0000C0   756 _SMBTOE	=	0x00c0
                           0000C1   757 G$SMBFTE$0$0 == 0x00c1
                           0000C1   758 _SMBFTE	=	0x00c1
                           0000C2   759 G$AA$0$0 == 0x00c2
                           0000C2   760 _AA	=	0x00c2
                           0000C3   761 G$SI$0$0 == 0x00c3
                           0000C3   762 _SI	=	0x00c3
                           0000C4   763 G$STO$0$0 == 0x00c4
                           0000C4   764 _STO	=	0x00c4
                           0000C5   765 G$STA$0$0 == 0x00c5
                           0000C5   766 _STA	=	0x00c5
                           0000C6   767 G$ENSMB$0$0 == 0x00c6
                           0000C6   768 _ENSMB	=	0x00c6
                           0000C7   769 G$BUSY$0$0 == 0x00c7
                           0000C7   770 _BUSY	=	0x00c7
                           0000C8   771 G$CPRL2$0$0 == 0x00c8
                           0000C8   772 _CPRL2	=	0x00c8
                           0000C9   773 G$CT2$0$0 == 0x00c9
                           0000C9   774 _CT2	=	0x00c9
                           0000CA   775 G$TR2$0$0 == 0x00ca
                           0000CA   776 _TR2	=	0x00ca
                           0000CB   777 G$EXEN2$0$0 == 0x00cb
                           0000CB   778 _EXEN2	=	0x00cb
                           0000CC   779 G$TCLK$0$0 == 0x00cc
                           0000CC   780 _TCLK	=	0x00cc
                           0000CD   781 G$RCLK$0$0 == 0x00cd
                           0000CD   782 _RCLK	=	0x00cd
                           0000CE   783 G$EXF2$0$0 == 0x00ce
                           0000CE   784 _EXF2	=	0x00ce
                           0000CF   785 G$TF2$0$0 == 0x00cf
                           0000CF   786 _TF2	=	0x00cf
                           0000D0   787 G$P$0$0 == 0x00d0
                           0000D0   788 _P	=	0x00d0
                           0000D1   789 G$F1$0$0 == 0x00d1
                           0000D1   790 _F1	=	0x00d1
                           0000D2   791 G$OV$0$0 == 0x00d2
                           0000D2   792 _OV	=	0x00d2
                           0000D3   793 G$RS0$0$0 == 0x00d3
                           0000D3   794 _RS0	=	0x00d3
                           0000D4   795 G$RS1$0$0 == 0x00d4
                           0000D4   796 _RS1	=	0x00d4
                           0000D5   797 G$F0$0$0 == 0x00d5
                           0000D5   798 _F0	=	0x00d5
                           0000D6   799 G$AC$0$0 == 0x00d6
                           0000D6   800 _AC	=	0x00d6
                           0000D7   801 G$CY$0$0 == 0x00d7
                           0000D7   802 _CY	=	0x00d7
                           0000D8   803 G$CCF0$0$0 == 0x00d8
                           0000D8   804 _CCF0	=	0x00d8
                           0000D9   805 G$CCF1$0$0 == 0x00d9
                           0000D9   806 _CCF1	=	0x00d9
                           0000DA   807 G$CCF2$0$0 == 0x00da
                           0000DA   808 _CCF2	=	0x00da
                           0000DB   809 G$CCF3$0$0 == 0x00db
                           0000DB   810 _CCF3	=	0x00db
                           0000DC   811 G$CCF4$0$0 == 0x00dc
                           0000DC   812 _CCF4	=	0x00dc
                           0000DE   813 G$CR$0$0 == 0x00de
                           0000DE   814 _CR	=	0x00de
                           0000DF   815 G$CF$0$0 == 0x00df
                           0000DF   816 _CF	=	0x00df
                           0000E8   817 G$ADLJST$0$0 == 0x00e8
                           0000E8   818 _ADLJST	=	0x00e8
                           0000E8   819 G$AD0LJST$0$0 == 0x00e8
                           0000E8   820 _AD0LJST	=	0x00e8
                           0000E9   821 G$ADWINT$0$0 == 0x00e9
                           0000E9   822 _ADWINT	=	0x00e9
                           0000E9   823 G$AD0WINT$0$0 == 0x00e9
                           0000E9   824 _AD0WINT	=	0x00e9
                           0000EA   825 G$ADSTM0$0$0 == 0x00ea
                           0000EA   826 _ADSTM0	=	0x00ea
                           0000EA   827 G$AD0CM0$0$0 == 0x00ea
                           0000EA   828 _AD0CM0	=	0x00ea
                           0000EB   829 G$ADSTM1$0$0 == 0x00eb
                           0000EB   830 _ADSTM1	=	0x00eb
                           0000EB   831 G$AD0CM1$0$0 == 0x00eb
                           0000EB   832 _AD0CM1	=	0x00eb
                           0000EC   833 G$ADBUSY$0$0 == 0x00ec
                           0000EC   834 _ADBUSY	=	0x00ec
                           0000EC   835 G$AD0BUSY$0$0 == 0x00ec
                           0000EC   836 _AD0BUSY	=	0x00ec
                           0000ED   837 G$ADCINT$0$0 == 0x00ed
                           0000ED   838 _ADCINT	=	0x00ed
                           0000ED   839 G$AD0INT$0$0 == 0x00ed
                           0000ED   840 _AD0INT	=	0x00ed
                           0000EE   841 G$ADCTM$0$0 == 0x00ee
                           0000EE   842 _ADCTM	=	0x00ee
                           0000EE   843 G$AD0TM$0$0 == 0x00ee
                           0000EE   844 _AD0TM	=	0x00ee
                           0000EF   845 G$ADCEN$0$0 == 0x00ef
                           0000EF   846 _ADCEN	=	0x00ef
                           0000EF   847 G$AD0EN$0$0 == 0x00ef
                           0000EF   848 _AD0EN	=	0x00ef
                           0000F8   849 G$SPIEN$0$0 == 0x00f8
                           0000F8   850 _SPIEN	=	0x00f8
                           0000F9   851 G$MSTEN$0$0 == 0x00f9
                           0000F9   852 _MSTEN	=	0x00f9
                           0000FA   853 G$SLVSEL$0$0 == 0x00fa
                           0000FA   854 _SLVSEL	=	0x00fa
                           0000FB   855 G$TXBSY$0$0 == 0x00fb
                           0000FB   856 _TXBSY	=	0x00fb
                           0000FC   857 G$RXOVRN$0$0 == 0x00fc
                           0000FC   858 _RXOVRN	=	0x00fc
                           0000FD   859 G$MODF$0$0 == 0x00fd
                           0000FD   860 _MODF	=	0x00fd
                           0000FE   861 G$WCOL$0$0 == 0x00fe
                           0000FE   862 _WCOL	=	0x00fe
                           0000FF   863 G$SPIF$0$0 == 0x00ff
                           0000FF   864 _SPIF	=	0x00ff
                                    865 ;--------------------------------------------------------
                                    866 ; overlayable register banks
                                    867 ;--------------------------------------------------------
                                    868 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        869 	.ds 8
                                    870 ;--------------------------------------------------------
                                    871 ; internal ram data
                                    872 ;--------------------------------------------------------
                                    873 	.area DSEG    (DATA)
                           000000   874 G$STR_PW$0$0==.
      000008                        875 _STR_PW::
      000008                        876 	.ds 2
                           000002   877 G$count$0$0==.
      00000A                        878 _count::
      00000A                        879 	.ds 2
                           000004   880 G$input$0$0==.
      00000C                        881 _input::
      00000C                        882 	.ds 1
                                    883 ;--------------------------------------------------------
                                    884 ; overlayable items in internal ram 
                                    885 ;--------------------------------------------------------
                                    886 	.area	OSEG    (OVR,DATA)
                                    887 	.area	OSEG    (OVR,DATA)
                                    888 ;--------------------------------------------------------
                                    889 ; Stack segment in internal ram 
                                    890 ;--------------------------------------------------------
                                    891 	.area	SSEG
      00003C                        892 __start__stack:
      00003C                        893 	.ds	1
                                    894 
                                    895 ;--------------------------------------------------------
                                    896 ; indirectly addressable internal ram data
                                    897 ;--------------------------------------------------------
                                    898 	.area ISEG    (DATA)
                                    899 ;--------------------------------------------------------
                                    900 ; absolute internal ram data
                                    901 ;--------------------------------------------------------
                                    902 	.area IABS    (ABS,DATA)
                                    903 	.area IABS    (ABS,DATA)
                                    904 ;--------------------------------------------------------
                                    905 ; bit data
                                    906 ;--------------------------------------------------------
                                    907 	.area BSEG    (BIT)
                                    908 ;--------------------------------------------------------
                                    909 ; paged external ram data
                                    910 ;--------------------------------------------------------
                                    911 	.area PSEG    (PAG,XDATA)
                                    912 ;--------------------------------------------------------
                                    913 ; external ram data
                                    914 ;--------------------------------------------------------
                                    915 	.area XSEG    (XDATA)
                                    916 ;--------------------------------------------------------
                                    917 ; absolute external ram data
                                    918 ;--------------------------------------------------------
                                    919 	.area XABS    (ABS,XDATA)
                                    920 ;--------------------------------------------------------
                                    921 ; external initialized ram data
                                    922 ;--------------------------------------------------------
                                    923 	.area XISEG   (XDATA)
                                    924 	.area HOME    (CODE)
                                    925 	.area GSINIT0 (CODE)
                                    926 	.area GSINIT1 (CODE)
                                    927 	.area GSINIT2 (CODE)
                                    928 	.area GSINIT3 (CODE)
                                    929 	.area GSINIT4 (CODE)
                                    930 	.area GSINIT5 (CODE)
                                    931 	.area GSINIT  (CODE)
                                    932 	.area GSFINAL (CODE)
                                    933 	.area CSEG    (CODE)
                                    934 ;--------------------------------------------------------
                                    935 ; interrupt vector 
                                    936 ;--------------------------------------------------------
                                    937 	.area HOME    (CODE)
      000000                        938 __interrupt_vect:
      000000 02 00 51         [24]  939 	ljmp	__sdcc_gsinit_startup
      000003 32               [24]  940 	reti
      000004                        941 	.ds	7
      00000B 32               [24]  942 	reti
      00000C                        943 	.ds	7
      000013 32               [24]  944 	reti
      000014                        945 	.ds	7
      00001B 32               [24]  946 	reti
      00001C                        947 	.ds	7
      000023 32               [24]  948 	reti
      000024                        949 	.ds	7
      00002B 32               [24]  950 	reti
      00002C                        951 	.ds	7
      000033 32               [24]  952 	reti
      000034                        953 	.ds	7
      00003B 32               [24]  954 	reti
      00003C                        955 	.ds	7
      000043 32               [24]  956 	reti
      000044                        957 	.ds	7
      00004B 02 01 73         [24]  958 	ljmp	_PCA_ISR
                                    959 ;--------------------------------------------------------
                                    960 ; global & static initialisations
                                    961 ;--------------------------------------------------------
                                    962 	.area HOME    (CODE)
                                    963 	.area GSINIT  (CODE)
                                    964 	.area GSFINAL (CODE)
                                    965 	.area GSINIT  (CODE)
                                    966 	.globl __sdcc_gsinit_startup
                                    967 	.globl __sdcc_program_startup
                                    968 	.globl __start__stack
                                    969 	.globl __mcs51_genXINIT
                                    970 	.globl __mcs51_genXRAMCLEAR
                                    971 	.globl __mcs51_genRAMCLEAR
                           000000   972 	C$lab3_1steering.c$14$1$39 ==.
                                    973 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:14: unsigned int STR_PW   = 0;
      0000AA E4               [12]  974 	clr	a
      0000AB F5 08            [12]  975 	mov	_STR_PW,a
      0000AD F5 09            [12]  976 	mov	(_STR_PW + 1),a
                           000005   977 	C$lab3_1steering.c$15$1$39 ==.
                                    978 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:15: unsigned int count = 0;
      0000AF F5 0A            [12]  979 	mov	_count,a
      0000B1 F5 0B            [12]  980 	mov	(_count + 1),a
                                    981 	.area GSFINAL (CODE)
      0000B3 02 00 4E         [24]  982 	ljmp	__sdcc_program_startup
                                    983 ;--------------------------------------------------------
                                    984 ; Home
                                    985 ;--------------------------------------------------------
                                    986 	.area HOME    (CODE)
                                    987 	.area HOME    (CODE)
      00004E                        988 __sdcc_program_startup:
      00004E 02 01 12         [24]  989 	ljmp	_main
                                    990 ;	return from main will return to caller
                                    991 ;--------------------------------------------------------
                                    992 ; code
                                    993 ;--------------------------------------------------------
                                    994 	.area CSEG    (CODE)
                                    995 ;------------------------------------------------------------
                                    996 ;Allocation info for local variables in function 'SYSCLK_Init'
                                    997 ;------------------------------------------------------------
                                    998 ;i                         Allocated to registers 
                                    999 ;------------------------------------------------------------
                           000000  1000 	G$SYSCLK_Init$0$0 ==.
                           000000  1001 	C$c8051_SDCC.h$42$0$0 ==.
                                   1002 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:42: void SYSCLK_Init(void)
                                   1003 ;	-----------------------------------------
                                   1004 ;	 function SYSCLK_Init
                                   1005 ;	-----------------------------------------
      0000B6                       1006 _SYSCLK_Init:
                           000007  1007 	ar7 = 0x07
                           000006  1008 	ar6 = 0x06
                           000005  1009 	ar5 = 0x05
                           000004  1010 	ar4 = 0x04
                           000003  1011 	ar3 = 0x03
                           000002  1012 	ar2 = 0x02
                           000001  1013 	ar1 = 0x01
                           000000  1014 	ar0 = 0x00
                           000000  1015 	C$c8051_SDCC.h$46$1$16 ==.
                                   1016 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:46: OSCXCN = 0x67;                      // start external oscillator with
      0000B6 75 B1 67         [24] 1017 	mov	_OSCXCN,#0x67
                           000003  1018 	C$c8051_SDCC.h$49$1$16 ==.
                                   1019 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:49: for (i=0; i < 256; i++);            // wait for oscillator to start
      0000B9 7E 00            [12] 1020 	mov	r6,#0x00
      0000BB 7F 01            [12] 1021 	mov	r7,#0x01
      0000BD                       1022 00107$:
      0000BD 1E               [12] 1023 	dec	r6
      0000BE BE FF 01         [24] 1024 	cjne	r6,#0xFF,00121$
      0000C1 1F               [12] 1025 	dec	r7
      0000C2                       1026 00121$:
      0000C2 EE               [12] 1027 	mov	a,r6
      0000C3 4F               [12] 1028 	orl	a,r7
      0000C4 70 F7            [24] 1029 	jnz	00107$
                           000010  1030 	C$c8051_SDCC.h$51$1$16 ==.
                                   1031 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:51: while (!(OSCXCN & 0x80));           // Wait for crystal osc. to settle
      0000C6                       1032 00102$:
      0000C6 E5 B1            [12] 1033 	mov	a,_OSCXCN
      0000C8 30 E7 FB         [24] 1034 	jnb	acc.7,00102$
                           000015  1035 	C$c8051_SDCC.h$53$1$16 ==.
                                   1036 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:53: OSCICN = 0x88;                      // select external oscillator as SYSCLK
      0000CB 75 B2 88         [24] 1037 	mov	_OSCICN,#0x88
                           000018  1038 	C$c8051_SDCC.h$56$1$16 ==.
                           000018  1039 	XG$SYSCLK_Init$0$0 ==.
      0000CE 22               [24] 1040 	ret
                                   1041 ;------------------------------------------------------------
                                   1042 ;Allocation info for local variables in function 'UART0_Init'
                                   1043 ;------------------------------------------------------------
                           000019  1044 	G$UART0_Init$0$0 ==.
                           000019  1045 	C$c8051_SDCC.h$64$1$16 ==.
                                   1046 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:64: void UART0_Init(void)
                                   1047 ;	-----------------------------------------
                                   1048 ;	 function UART0_Init
                                   1049 ;	-----------------------------------------
      0000CF                       1050 _UART0_Init:
                           000019  1051 	C$c8051_SDCC.h$66$1$18 ==.
                                   1052 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:66: SCON0  = 0x50;                      // SCON0: mode 1, 8-bit UART, enable RX
      0000CF 75 98 50         [24] 1053 	mov	_SCON0,#0x50
                           00001C  1054 	C$c8051_SDCC.h$67$1$18 ==.
                                   1055 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:67: TMOD   = 0x20;                      // TMOD: timer 1, mode 2, 8-bit reload
      0000D2 75 89 20         [24] 1056 	mov	_TMOD,#0x20
                           00001F  1057 	C$c8051_SDCC.h$68$1$18 ==.
                                   1058 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:68: TH1    = -(SYSCLK/BAUDRATE/16);     // set Timer1 reload value for baudrate
      0000D5 75 8D DC         [24] 1059 	mov	_TH1,#0xDC
                           000022  1060 	C$c8051_SDCC.h$69$1$18 ==.
                                   1061 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:69: TR1    = 1;                         // start Timer1
      0000D8 D2 8E            [12] 1062 	setb	_TR1
                           000024  1063 	C$c8051_SDCC.h$70$1$18 ==.
                                   1064 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:70: CKCON |= 0x10;                      // Timer1 uses SYSCLK as time base
      0000DA 43 8E 10         [24] 1065 	orl	_CKCON,#0x10
                           000027  1066 	C$c8051_SDCC.h$71$1$18 ==.
                                   1067 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:71: PCON  |= 0x80;                      // SMOD00 = 1 (disable baud rate 
      0000DD 43 87 80         [24] 1068 	orl	_PCON,#0x80
                           00002A  1069 	C$c8051_SDCC.h$73$1$18 ==.
                                   1070 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:73: TI0    = 1;                         // Indicate TX0 ready
      0000E0 D2 99            [12] 1071 	setb	_TI0
                           00002C  1072 	C$c8051_SDCC.h$74$1$18 ==.
                                   1073 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:74: P0MDOUT |= 0x01;                    // Set TX0 to push/pull
      0000E2 43 A4 01         [24] 1074 	orl	_P0MDOUT,#0x01
                           00002F  1075 	C$c8051_SDCC.h$75$1$18 ==.
                           00002F  1076 	XG$UART0_Init$0$0 ==.
      0000E5 22               [24] 1077 	ret
                                   1078 ;------------------------------------------------------------
                                   1079 ;Allocation info for local variables in function 'Sys_Init'
                                   1080 ;------------------------------------------------------------
                           000030  1081 	G$Sys_Init$0$0 ==.
                           000030  1082 	C$c8051_SDCC.h$83$1$18 ==.
                                   1083 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:83: void Sys_Init(void)
                                   1084 ;	-----------------------------------------
                                   1085 ;	 function Sys_Init
                                   1086 ;	-----------------------------------------
      0000E6                       1087 _Sys_Init:
                           000030  1088 	C$c8051_SDCC.h$85$1$20 ==.
                                   1089 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:85: WDTCN = 0xde;			// disable watchdog timer
      0000E6 75 FF DE         [24] 1090 	mov	_WDTCN,#0xDE
                           000033  1091 	C$c8051_SDCC.h$86$1$20 ==.
                                   1092 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:86: WDTCN = 0xad;
      0000E9 75 FF AD         [24] 1093 	mov	_WDTCN,#0xAD
                           000036  1094 	C$c8051_SDCC.h$88$1$20 ==.
                                   1095 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:88: SYSCLK_Init();			// initialize oscillator
      0000EC 12 00 B6         [24] 1096 	lcall	_SYSCLK_Init
                           000039  1097 	C$c8051_SDCC.h$89$1$20 ==.
                                   1098 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:89: UART0_Init();			// initialize UART0
      0000EF 12 00 CF         [24] 1099 	lcall	_UART0_Init
                           00003C  1100 	C$c8051_SDCC.h$91$1$20 ==.
                                   1101 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:91: XBR0 |= 0x04;
      0000F2 43 E1 04         [24] 1102 	orl	_XBR0,#0x04
                           00003F  1103 	C$c8051_SDCC.h$92$1$20 ==.
                                   1104 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:92: XBR2 |= 0x40;                    	// Enable crossbar and weak pull-ups
      0000F5 43 E3 40         [24] 1105 	orl	_XBR2,#0x40
                           000042  1106 	C$c8051_SDCC.h$93$1$20 ==.
                           000042  1107 	XG$Sys_Init$0$0 ==.
      0000F8 22               [24] 1108 	ret
                                   1109 ;------------------------------------------------------------
                                   1110 ;Allocation info for local variables in function 'putchar'
                                   1111 ;------------------------------------------------------------
                                   1112 ;c                         Allocated to registers r7 
                                   1113 ;------------------------------------------------------------
                           000043  1114 	G$putchar$0$0 ==.
                           000043  1115 	C$c8051_SDCC.h$98$1$20 ==.
                                   1116 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:98: void putchar(char c)
                                   1117 ;	-----------------------------------------
                                   1118 ;	 function putchar
                                   1119 ;	-----------------------------------------
      0000F9                       1120 _putchar:
      0000F9 AF 82            [24] 1121 	mov	r7,dpl
                           000045  1122 	C$c8051_SDCC.h$100$1$22 ==.
                                   1123 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:100: while (!TI0); 
      0000FB                       1124 00101$:
                           000045  1125 	C$c8051_SDCC.h$101$1$22 ==.
                                   1126 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:101: TI0 = 0;
      0000FB 10 99 02         [24] 1127 	jbc	_TI0,00112$
      0000FE 80 FB            [24] 1128 	sjmp	00101$
      000100                       1129 00112$:
                           00004A  1130 	C$c8051_SDCC.h$102$1$22 ==.
                                   1131 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:102: SBUF0 = c;
      000100 8F 99            [24] 1132 	mov	_SBUF0,r7
                           00004C  1133 	C$c8051_SDCC.h$103$1$22 ==.
                           00004C  1134 	XG$putchar$0$0 ==.
      000102 22               [24] 1135 	ret
                                   1136 ;------------------------------------------------------------
                                   1137 ;Allocation info for local variables in function 'getchar'
                                   1138 ;------------------------------------------------------------
                                   1139 ;c                         Allocated to registers 
                                   1140 ;------------------------------------------------------------
                           00004D  1141 	G$getchar$0$0 ==.
                           00004D  1142 	C$c8051_SDCC.h$108$1$22 ==.
                                   1143 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:108: char getchar(void)
                                   1144 ;	-----------------------------------------
                                   1145 ;	 function getchar
                                   1146 ;	-----------------------------------------
      000103                       1147 _getchar:
                           00004D  1148 	C$c8051_SDCC.h$111$1$24 ==.
                                   1149 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:111: while (!RI0);
      000103                       1150 00101$:
                           00004D  1151 	C$c8051_SDCC.h$112$1$24 ==.
                                   1152 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:112: RI0 = 0;
      000103 10 98 02         [24] 1153 	jbc	_RI0,00112$
      000106 80 FB            [24] 1154 	sjmp	00101$
      000108                       1155 00112$:
                           000052  1156 	C$c8051_SDCC.h$113$1$24 ==.
                                   1157 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:113: c = SBUF0;
      000108 85 99 82         [24] 1158 	mov	dpl,_SBUF0
                           000055  1159 	C$c8051_SDCC.h$114$1$24 ==.
                                   1160 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:114: putchar(c);                          // echo to terminal
      00010B 12 00 F9         [24] 1161 	lcall	_putchar
                           000058  1162 	C$c8051_SDCC.h$115$1$24 ==.
                                   1163 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:115: return SBUF0;
      00010E 85 99 82         [24] 1164 	mov	dpl,_SBUF0
                           00005B  1165 	C$c8051_SDCC.h$116$1$24 ==.
                           00005B  1166 	XG$getchar$0$0 ==.
      000111 22               [24] 1167 	ret
                                   1168 ;------------------------------------------------------------
                                   1169 ;Allocation info for local variables in function 'main'
                                   1170 ;------------------------------------------------------------
                           00005C  1171 	G$main$0$0 ==.
                           00005C  1172 	C$lab3_1steering.c$21$1$24 ==.
                                   1173 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:21: void main(void)
                                   1174 ;	-----------------------------------------
                                   1175 ;	 function main
                                   1176 ;	-----------------------------------------
      000112                       1177 _main:
                           00005C  1178 	C$lab3_1steering.c$24$1$30 ==.
                                   1179 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:24: Sys_Init();
      000112 12 00 E6         [24] 1180 	lcall	_Sys_Init
                           00005F  1181 	C$lab3_1steering.c$25$1$30 ==.
                                   1182 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:25: putchar(' '); //the quotes in this line may not format correctly
      000115 75 82 20         [24] 1183 	mov	dpl,#0x20
      000118 12 00 F9         [24] 1184 	lcall	_putchar
                           000065  1185 	C$lab3_1steering.c$26$1$30 ==.
                                   1186 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:26: Port_Init();
      00011B 12 01 5C         [24] 1187 	lcall	_Port_Init
                           000068  1188 	C$lab3_1steering.c$27$1$30 ==.
                                   1189 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:27: XBR0_Init();
      00011E 12 01 60         [24] 1190 	lcall	_XBR0_Init
                           00006B  1191 	C$lab3_1steering.c$28$1$30 ==.
                                   1192 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:28: PCA_Init();
      000121 12 01 64         [24] 1193 	lcall	_PCA_Init
                           00006E  1194 	C$lab3_1steering.c$31$1$30 ==.
                                   1195 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:31: printf("Embedded Control Steering Calibration\n");
      000124 74 41            [12] 1196 	mov	a,#___str_0
      000126 C0 E0            [24] 1197 	push	acc
      000128 74 08            [12] 1198 	mov	a,#(___str_0 >> 8)
      00012A C0 E0            [24] 1199 	push	acc
      00012C 74 80            [12] 1200 	mov	a,#0x80
      00012E C0 E0            [24] 1201 	push	acc
      000130 12 02 2D         [24] 1202 	lcall	_printf
      000133 15 81            [12] 1203 	dec	sp
      000135 15 81            [12] 1204 	dec	sp
      000137 15 81            [12] 1205 	dec	sp
                           000083  1206 	C$lab3_1steering.c$35$1$30 ==.
                                   1207 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:35: STR_PW = PW_CENTER_STR;
      000139 75 08 CD         [24] 1208 	mov	_STR_PW,#0xCD
      00013C 75 09 0A         [24] 1209 	mov	(_STR_PW + 1),#0x0A
                           000089  1210 	C$lab3_1steering.c$37$1$30 ==.
                                   1211 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:37: PCA0CPL0 = 0xFFFF - STR_PW;
      00013F 75 EA 32         [24] 1212 	mov	_PCA0CPL0,#0x32
                           00008C  1213 	C$lab3_1steering.c$38$1$30 ==.
                                   1214 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:38: PCA0CPH0 = (0xFFFF - STR_PW) >> 8;
      000142 75 FA F5         [24] 1215 	mov	_PCA0CPH0,#0xF5
                           00008F  1216 	C$lab3_1steering.c$39$1$30 ==.
                                   1217 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:39: while (count < 29);
      000145                       1218 00101$:
      000145 C3               [12] 1219 	clr	c
      000146 E5 0A            [12] 1220 	mov	a,_count
      000148 94 1D            [12] 1221 	subb	a,#0x1D
      00014A E5 0B            [12] 1222 	mov	a,(_count + 1)
      00014C 94 00            [12] 1223 	subb	a,#0x00
      00014E 40 F5            [24] 1224 	jc	00101$
                           00009A  1225 	C$lab3_1steering.c$40$1$30 ==.
                                   1226 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:40: while(1)
      000150                       1227 00105$:
                           00009A  1228 	C$lab3_1steering.c$42$2$31 ==.
                                   1229 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:42: input = (char)getchar();
      000150 12 01 03         [24] 1230 	lcall	_getchar
      000153 85 82 0C         [24] 1231 	mov	_input,dpl
                           0000A0  1232 	C$lab3_1steering.c$43$2$31 ==.
                                   1233 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:43: Steering_Servo();
      000156 12 01 92         [24] 1234 	lcall	_Steering_Servo
      000159 80 F5            [24] 1235 	sjmp	00105$
                           0000A5  1236 	C$lab3_1steering.c$47$1$30 ==.
                           0000A5  1237 	XG$main$0$0 ==.
      00015B 22               [24] 1238 	ret
                                   1239 ;------------------------------------------------------------
                                   1240 ;Allocation info for local variables in function 'Port_Init'
                                   1241 ;------------------------------------------------------------
                           0000A6  1242 	G$Port_Init$0$0 ==.
                           0000A6  1243 	C$lab3_1steering.c$49$1$30 ==.
                                   1244 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:49: void Port_Init()
                                   1245 ;	-----------------------------------------
                                   1246 ;	 function Port_Init
                                   1247 ;	-----------------------------------------
      00015C                       1248 _Port_Init:
                           0000A6  1249 	C$lab3_1steering.c$51$1$32 ==.
                                   1250 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:51: P1MDOUT = 0x0F;  //set output pin for CEX0 or CEX2 in push-pull mode
      00015C 75 A5 0F         [24] 1251 	mov	_P1MDOUT,#0x0F
                           0000A9  1252 	C$lab3_1steering.c$53$1$32 ==.
                           0000A9  1253 	XG$Port_Init$0$0 ==.
      00015F 22               [24] 1254 	ret
                                   1255 ;------------------------------------------------------------
                                   1256 ;Allocation info for local variables in function 'XBR0_Init'
                                   1257 ;------------------------------------------------------------
                           0000AA  1258 	G$XBR0_Init$0$0 ==.
                           0000AA  1259 	C$lab3_1steering.c$61$1$32 ==.
                                   1260 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:61: void XBR0_Init()
                                   1261 ;	-----------------------------------------
                                   1262 ;	 function XBR0_Init
                                   1263 ;	-----------------------------------------
      000160                       1264 _XBR0_Init:
                           0000AA  1265 	C$lab3_1steering.c$64$1$33 ==.
                                   1266 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:64: XBR0  = 0x27;  //configure crossbar as directed in the laboratory
      000160 75 E1 27         [24] 1267 	mov	_XBR0,#0x27
                           0000AD  1268 	C$lab3_1steering.c$66$1$33 ==.
                           0000AD  1269 	XG$XBR0_Init$0$0 ==.
      000163 22               [24] 1270 	ret
                                   1271 ;------------------------------------------------------------
                                   1272 ;Allocation info for local variables in function 'PCA_Init'
                                   1273 ;------------------------------------------------------------
                           0000AE  1274 	G$PCA_Init$0$0 ==.
                           0000AE  1275 	C$lab3_1steering.c$74$1$33 ==.
                                   1276 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:74: void PCA_Init(void)
                                   1277 ;	-----------------------------------------
                                   1278 ;	 function PCA_Init
                                   1279 ;	-----------------------------------------
      000164                       1280 _PCA_Init:
                           0000AE  1281 	C$lab3_1steering.c$78$1$35 ==.
                                   1282 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:78: PCA0MD = 0x81;
      000164 75 D9 81         [24] 1283 	mov	_PCA0MD,#0x81
                           0000B1  1284 	C$lab3_1steering.c$79$1$35 ==.
                                   1285 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:79: PCA0CPM0 = 0xC2;    //CCM0 in 16-bit compare mode
      000167 75 DA C2         [24] 1286 	mov	_PCA0CPM0,#0xC2
                           0000B4  1287 	C$lab3_1steering.c$80$1$35 ==.
                                   1288 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:80: PCA0CN = 0x40;      //Enable PCA counter
      00016A 75 D8 40         [24] 1289 	mov	_PCA0CN,#0x40
                           0000B7  1290 	C$lab3_1steering.c$81$1$35 ==.
                                   1291 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:81: EIE1 |= 0x08;       //Enable PCA interrupt
      00016D 43 E6 08         [24] 1292 	orl	_EIE1,#0x08
                           0000BA  1293 	C$lab3_1steering.c$82$1$35 ==.
                                   1294 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:82: EA = 1;             //Enable global interrupts
      000170 D2 AF            [12] 1295 	setb	_EA
                           0000BC  1296 	C$lab3_1steering.c$83$1$35 ==.
                           0000BC  1297 	XG$PCA_Init$0$0 ==.
      000172 22               [24] 1298 	ret
                                   1299 ;------------------------------------------------------------
                                   1300 ;Allocation info for local variables in function 'PCA_ISR'
                                   1301 ;------------------------------------------------------------
                           0000BD  1302 	G$PCA_ISR$0$0 ==.
                           0000BD  1303 	C$lab3_1steering.c$91$1$35 ==.
                                   1304 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:91: void PCA_ISR ( void ) __interrupt 9
                                   1305 ;	-----------------------------------------
                                   1306 ;	 function PCA_ISR
                                   1307 ;	-----------------------------------------
      000173                       1308 _PCA_ISR:
      000173 C0 E0            [24] 1309 	push	acc
      000175 C0 D0            [24] 1310 	push	psw
                           0000C1  1311 	C$lab3_1steering.c$94$1$37 ==.
                                   1312 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:94: if (CF)
                           0000C1  1313 	C$lab3_1steering.c$96$2$38 ==.
                                   1314 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:96: CF =0;
      000177 10 DF 02         [24] 1315 	jbc	_CF,00108$
      00017A 80 0E            [24] 1316 	sjmp	00102$
      00017C                       1317 00108$:
                           0000C6  1318 	C$lab3_1steering.c$97$2$38 ==.
                                   1319 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:97: PCA0 = 0x7000;
      00017C 75 E9 00         [24] 1320 	mov	((_PCA0 >> 0) & 0xFF),#0x00
      00017F 75 F9 70         [24] 1321 	mov	((_PCA0 >> 8) & 0xFF),#0x70
                           0000CC  1322 	C$lab3_1steering.c$98$2$38 ==.
                                   1323 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:98: count++;
      000182 05 0A            [12] 1324 	inc	_count
      000184 E4               [12] 1325 	clr	a
      000185 B5 0A 02         [24] 1326 	cjne	a,_count,00109$
      000188 05 0B            [12] 1327 	inc	(_count + 1)
      00018A                       1328 00109$:
      00018A                       1329 00102$:
                           0000D4  1330 	C$lab3_1steering.c$101$1$37 ==.
                                   1331 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:101: PCA0CN &= 0xC0;
      00018A 53 D8 C0         [24] 1332 	anl	_PCA0CN,#0xC0
      00018D D0 D0            [24] 1333 	pop	psw
      00018F D0 E0            [24] 1334 	pop	acc
                           0000DB  1335 	C$lab3_1steering.c$104$1$37 ==.
                           0000DB  1336 	XG$PCA_ISR$0$0 ==.
      000191 32               [24] 1337 	reti
                                   1338 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   1339 ;	eliminated unneeded push/pop dpl
                                   1340 ;	eliminated unneeded push/pop dph
                                   1341 ;	eliminated unneeded push/pop b
                                   1342 ;------------------------------------------------------------
                                   1343 ;Allocation info for local variables in function 'Steering_Servo'
                                   1344 ;------------------------------------------------------------
                           0000DC  1345 	G$Steering_Servo$0$0 ==.
                           0000DC  1346 	C$lab3_1steering.c$106$1$37 ==.
                                   1347 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:106: void Steering_Servo()
                                   1348 ;	-----------------------------------------
                                   1349 ;	 function Steering_Servo
                                   1350 ;	-----------------------------------------
      000192                       1351 _Steering_Servo:
                           0000DC  1352 	C$lab3_1steering.c$111$1$39 ==.
                                   1353 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:111: if(input == 'r')  // single character input to increase the pulsewidth
      000192 74 72            [12] 1354 	mov	a,#0x72
      000194 B5 0C 21         [24] 1355 	cjne	a,_input,00110$
                           0000E1  1356 	C$lab3_1steering.c$115$2$40 ==.
                                   1357 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:115: if(STR_PW<= PW_MIN_STR)  // check if less than pulsewidth minimum
      000197 C3               [12] 1358 	clr	c
      000198 74 D9            [12] 1359 	mov	a,#0xD9
      00019A 95 08            [12] 1360 	subb	a,_STR_PW
      00019C 74 08            [12] 1361 	mov	a,#0x08
      00019E 95 09            [12] 1362 	subb	a,(_STR_PW + 1)
      0001A0 40 08            [24] 1363 	jc	00102$
                           0000EC  1364 	C$lab3_1steering.c$117$3$41 ==.
                                   1365 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:117: STR_PW= PW_MIN_STR;    // set SERVO_PW to a minimum value
      0001A2 75 08 D9         [24] 1366 	mov	_STR_PW,#0xD9
      0001A5 75 09 08         [24] 1367 	mov	(_STR_PW + 1),#0x08
      0001A8 80 31            [24] 1368 	sjmp	00111$
      0001AA                       1369 00102$:
                           0000F4  1370 	C$lab3_1steering.c$121$3$42 ==.
                                   1371 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:121: STR_PW-= 10;
      0001AA E5 08            [12] 1372 	mov	a,_STR_PW
      0001AC 24 F6            [12] 1373 	add	a,#0xF6
      0001AE F5 08            [12] 1374 	mov	_STR_PW,a
      0001B0 E5 09            [12] 1375 	mov	a,(_STR_PW + 1)
      0001B2 34 FF            [12] 1376 	addc	a,#0xFF
      0001B4 F5 09            [12] 1377 	mov	(_STR_PW + 1),a
      0001B6 80 23            [24] 1378 	sjmp	00111$
      0001B8                       1379 00110$:
                           000102  1380 	C$lab3_1steering.c$124$1$39 ==.
                                   1381 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:124: else if(input == 'l')  // single character input to decrease the pulsewidth
      0001B8 74 6C            [12] 1382 	mov	a,#0x6C
      0001BA B5 0C 1E         [24] 1383 	cjne	a,_input,00111$
                           000107  1384 	C$lab3_1steering.c$128$2$43 ==.
                                   1385 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:128: if(STR_PW> PW_MAX_STR)  // check if pulsewidth maximum exceeded
      0001BD C3               [12] 1386 	clr	c
      0001BE 74 CB            [12] 1387 	mov	a,#0xCB
      0001C0 95 08            [12] 1388 	subb	a,_STR_PW
      0001C2 74 0C            [12] 1389 	mov	a,#0x0C
      0001C4 95 09            [12] 1390 	subb	a,(_STR_PW + 1)
      0001C6 50 08            [24] 1391 	jnc	00105$
                           000112  1392 	C$lab3_1steering.c$130$3$44 ==.
                                   1393 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:130: STR_PW= PW_MAX_STR;     // set STR_PW to a maximum value
      0001C8 75 08 CB         [24] 1394 	mov	_STR_PW,#0xCB
      0001CB 75 09 0C         [24] 1395 	mov	(_STR_PW + 1),#0x0C
      0001CE 80 0B            [24] 1396 	sjmp	00111$
      0001D0                       1397 00105$:
                           00011A  1398 	C$lab3_1steering.c$134$3$45 ==.
                                   1399 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:134: STR_PW+= 10;
      0001D0 74 0A            [12] 1400 	mov	a,#0x0A
      0001D2 25 08            [12] 1401 	add	a,_STR_PW
      0001D4 F5 08            [12] 1402 	mov	_STR_PW,a
      0001D6 E4               [12] 1403 	clr	a
      0001D7 35 09            [12] 1404 	addc	a,(_STR_PW + 1)
      0001D9 F5 09            [12] 1405 	mov	(_STR_PW + 1),a
      0001DB                       1406 00111$:
                           000125  1407 	C$lab3_1steering.c$137$1$39 ==.
                                   1408 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:137: printf("\r\nSTR_PW: %u", STR_PW);
      0001DB C0 08            [24] 1409 	push	_STR_PW
      0001DD C0 09            [24] 1410 	push	(_STR_PW + 1)
      0001DF 74 68            [12] 1411 	mov	a,#___str_1
      0001E1 C0 E0            [24] 1412 	push	acc
      0001E3 74 08            [12] 1413 	mov	a,#(___str_1 >> 8)
      0001E5 C0 E0            [24] 1414 	push	acc
      0001E7 74 80            [12] 1415 	mov	a,#0x80
      0001E9 C0 E0            [24] 1416 	push	acc
      0001EB 12 02 2D         [24] 1417 	lcall	_printf
      0001EE E5 81            [12] 1418 	mov	a,sp
      0001F0 24 FB            [12] 1419 	add	a,#0xfb
      0001F2 F5 81            [12] 1420 	mov	sp,a
                           00013E  1421 	C$lab3_1steering.c$138$1$39 ==.
                                   1422 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:138: PCA0CPL0 = 0xFFFF - STR_PW;
      0001F4 AF 08            [24] 1423 	mov	r7,_STR_PW
      0001F6 74 FF            [12] 1424 	mov	a,#0xFF
      0001F8 C3               [12] 1425 	clr	c
      0001F9 9F               [12] 1426 	subb	a,r7
      0001FA F5 EA            [12] 1427 	mov	_PCA0CPL0,a
                           000146  1428 	C$lab3_1steering.c$139$1$39 ==.
                                   1429 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab3-1\lab3-1steering.c:139: PCA0CPH0 = (0xFFFF - STR_PW) >> 8;
      0001FC 74 FF            [12] 1430 	mov	a,#0xFF
      0001FE C3               [12] 1431 	clr	c
      0001FF 95 08            [12] 1432 	subb	a,_STR_PW
      000201 74 FF            [12] 1433 	mov	a,#0xFF
      000203 95 09            [12] 1434 	subb	a,(_STR_PW + 1)
      000205 FF               [12] 1435 	mov	r7,a
      000206 8F FA            [24] 1436 	mov	_PCA0CPH0,r7
                           000152  1437 	C$lab3_1steering.c$141$1$39 ==.
                           000152  1438 	XG$Steering_Servo$0$0 ==.
      000208 22               [24] 1439 	ret
                                   1440 	.area CSEG    (CODE)
                                   1441 	.area CONST   (CODE)
                           000000  1442 Flab3_1steering$__str_0$0$0 == .
      000841                       1443 ___str_0:
      000841 45 6D 62 65 64 64 65  1444 	.ascii "Embedded Control Steering Calibration"
             64 20 43 6F 6E 74 72
             6F 6C 20 53 74 65 65
             72 69 6E 67 20 43 61
             6C 69 62 72 61 74 69
             6F 6E
      000866 0A                    1445 	.db 0x0A
      000867 00                    1446 	.db 0x00
                           000027  1447 Flab3_1steering$__str_1$0$0 == .
      000868                       1448 ___str_1:
      000868 0D                    1449 	.db 0x0D
      000869 0A                    1450 	.db 0x0A
      00086A 53 54 52 5F 50 57 3A  1451 	.ascii "STR_PW: %u"
             20 25 75
      000874 00                    1452 	.db 0x00
                                   1453 	.area XINIT   (CODE)
                                   1454 	.area CABS    (ABS,CODE)
