                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (Apr  5 2014) (MINGW32)
                                      4 ; This file was generated Tue Apr 21 09:37:51 2015
                                      5 ;--------------------------------------------------------
                                      6 	.module worksheet_11
                                      7 	.optsdcc -mmcs51 --model-small
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _main
                                     13 	.globl _putchar
                                     14 	.globl _printf
                                     15 	.globl _Sys_Init
                                     16 	.globl _UART0_Init
                                     17 	.globl _SYSCLK_Init
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
                                    294 	.globl _temp_motorpw_alg6
                                    295 	.globl _temp_motorpw_alg5
                                    296 	.globl _temp_motorpw_alg4
                                    297 	.globl _temp_motorpw_alg3
                                    298 	.globl _temp_motorpw_alg2
                                    299 	.globl _temp_motorpw_alg1
                                    300 	.globl _temp_motorpw_2byte
                                    301 	.globl _error
                                    302 	.globl _kd
                                    303 	.globl _kp
                                    304 	.globl _actual
                                    305 	.globl _desired
                                    306 	.globl _previous_error
                                    307 	.globl _pw_neut
                                    308 ;--------------------------------------------------------
                                    309 ; special function registers
                                    310 ;--------------------------------------------------------
                                    311 	.area RSEG    (ABS,DATA)
      000000                        312 	.org 0x0000
                           000080   313 G$P0$0$0 == 0x0080
                           000080   314 _P0	=	0x0080
                           000081   315 G$SP$0$0 == 0x0081
                           000081   316 _SP	=	0x0081
                           000082   317 G$DPL$0$0 == 0x0082
                           000082   318 _DPL	=	0x0082
                           000083   319 G$DPH$0$0 == 0x0083
                           000083   320 _DPH	=	0x0083
                           000084   321 G$P4$0$0 == 0x0084
                           000084   322 _P4	=	0x0084
                           000085   323 G$P5$0$0 == 0x0085
                           000085   324 _P5	=	0x0085
                           000086   325 G$P6$0$0 == 0x0086
                           000086   326 _P6	=	0x0086
                           000087   327 G$PCON$0$0 == 0x0087
                           000087   328 _PCON	=	0x0087
                           000088   329 G$TCON$0$0 == 0x0088
                           000088   330 _TCON	=	0x0088
                           000089   331 G$TMOD$0$0 == 0x0089
                           000089   332 _TMOD	=	0x0089
                           00008A   333 G$TL0$0$0 == 0x008a
                           00008A   334 _TL0	=	0x008a
                           00008B   335 G$TL1$0$0 == 0x008b
                           00008B   336 _TL1	=	0x008b
                           00008C   337 G$TH0$0$0 == 0x008c
                           00008C   338 _TH0	=	0x008c
                           00008D   339 G$TH1$0$0 == 0x008d
                           00008D   340 _TH1	=	0x008d
                           00008E   341 G$CKCON$0$0 == 0x008e
                           00008E   342 _CKCON	=	0x008e
                           00008F   343 G$PSCTL$0$0 == 0x008f
                           00008F   344 _PSCTL	=	0x008f
                           000090   345 G$P1$0$0 == 0x0090
                           000090   346 _P1	=	0x0090
                           000091   347 G$TMR3CN$0$0 == 0x0091
                           000091   348 _TMR3CN	=	0x0091
                           000092   349 G$TMR3RLL$0$0 == 0x0092
                           000092   350 _TMR3RLL	=	0x0092
                           000093   351 G$TMR3RLH$0$0 == 0x0093
                           000093   352 _TMR3RLH	=	0x0093
                           000094   353 G$TMR3L$0$0 == 0x0094
                           000094   354 _TMR3L	=	0x0094
                           000095   355 G$TMR3H$0$0 == 0x0095
                           000095   356 _TMR3H	=	0x0095
                           000096   357 G$P7$0$0 == 0x0096
                           000096   358 _P7	=	0x0096
                           000098   359 G$SCON$0$0 == 0x0098
                           000098   360 _SCON	=	0x0098
                           000098   361 G$SCON0$0$0 == 0x0098
                           000098   362 _SCON0	=	0x0098
                           000099   363 G$SBUF$0$0 == 0x0099
                           000099   364 _SBUF	=	0x0099
                           000099   365 G$SBUF0$0$0 == 0x0099
                           000099   366 _SBUF0	=	0x0099
                           00009A   367 G$SPI0CFG$0$0 == 0x009a
                           00009A   368 _SPI0CFG	=	0x009a
                           00009B   369 G$SPI0DAT$0$0 == 0x009b
                           00009B   370 _SPI0DAT	=	0x009b
                           00009C   371 G$ADC1$0$0 == 0x009c
                           00009C   372 _ADC1	=	0x009c
                           00009D   373 G$SPI0CKR$0$0 == 0x009d
                           00009D   374 _SPI0CKR	=	0x009d
                           00009E   375 G$CPT0CN$0$0 == 0x009e
                           00009E   376 _CPT0CN	=	0x009e
                           00009F   377 G$CPT1CN$0$0 == 0x009f
                           00009F   378 _CPT1CN	=	0x009f
                           0000A0   379 G$P2$0$0 == 0x00a0
                           0000A0   380 _P2	=	0x00a0
                           0000A1   381 G$EMI0TC$0$0 == 0x00a1
                           0000A1   382 _EMI0TC	=	0x00a1
                           0000A3   383 G$EMI0CF$0$0 == 0x00a3
                           0000A3   384 _EMI0CF	=	0x00a3
                           0000A4   385 G$PRT0CF$0$0 == 0x00a4
                           0000A4   386 _PRT0CF	=	0x00a4
                           0000A4   387 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   388 _P0MDOUT	=	0x00a4
                           0000A5   389 G$PRT1CF$0$0 == 0x00a5
                           0000A5   390 _PRT1CF	=	0x00a5
                           0000A5   391 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   392 _P1MDOUT	=	0x00a5
                           0000A6   393 G$PRT2CF$0$0 == 0x00a6
                           0000A6   394 _PRT2CF	=	0x00a6
                           0000A6   395 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   396 _P2MDOUT	=	0x00a6
                           0000A7   397 G$PRT3CF$0$0 == 0x00a7
                           0000A7   398 _PRT3CF	=	0x00a7
                           0000A7   399 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   400 _P3MDOUT	=	0x00a7
                           0000A8   401 G$IE$0$0 == 0x00a8
                           0000A8   402 _IE	=	0x00a8
                           0000A9   403 G$SADDR0$0$0 == 0x00a9
                           0000A9   404 _SADDR0	=	0x00a9
                           0000AA   405 G$ADC1CN$0$0 == 0x00aa
                           0000AA   406 _ADC1CN	=	0x00aa
                           0000AB   407 G$ADC1CF$0$0 == 0x00ab
                           0000AB   408 _ADC1CF	=	0x00ab
                           0000AC   409 G$AMX1SL$0$0 == 0x00ac
                           0000AC   410 _AMX1SL	=	0x00ac
                           0000AD   411 G$P3IF$0$0 == 0x00ad
                           0000AD   412 _P3IF	=	0x00ad
                           0000AE   413 G$SADEN1$0$0 == 0x00ae
                           0000AE   414 _SADEN1	=	0x00ae
                           0000AF   415 G$EMI0CN$0$0 == 0x00af
                           0000AF   416 _EMI0CN	=	0x00af
                           0000AF   417 G$_XPAGE$0$0 == 0x00af
                           0000AF   418 __XPAGE	=	0x00af
                           0000B0   419 G$P3$0$0 == 0x00b0
                           0000B0   420 _P3	=	0x00b0
                           0000B1   421 G$OSCXCN$0$0 == 0x00b1
                           0000B1   422 _OSCXCN	=	0x00b1
                           0000B2   423 G$OSCICN$0$0 == 0x00b2
                           0000B2   424 _OSCICN	=	0x00b2
                           0000B5   425 G$P74OUT$0$0 == 0x00b5
                           0000B5   426 _P74OUT	=	0x00b5
                           0000B6   427 G$FLSCL$0$0 == 0x00b6
                           0000B6   428 _FLSCL	=	0x00b6
                           0000B7   429 G$FLACL$0$0 == 0x00b7
                           0000B7   430 _FLACL	=	0x00b7
                           0000B8   431 G$IP$0$0 == 0x00b8
                           0000B8   432 _IP	=	0x00b8
                           0000B9   433 G$SADEN0$0$0 == 0x00b9
                           0000B9   434 _SADEN0	=	0x00b9
                           0000BA   435 G$AMX0CF$0$0 == 0x00ba
                           0000BA   436 _AMX0CF	=	0x00ba
                           0000BB   437 G$AMX0SL$0$0 == 0x00bb
                           0000BB   438 _AMX0SL	=	0x00bb
                           0000BC   439 G$ADC0CF$0$0 == 0x00bc
                           0000BC   440 _ADC0CF	=	0x00bc
                           0000BD   441 G$P1MDIN$0$0 == 0x00bd
                           0000BD   442 _P1MDIN	=	0x00bd
                           0000BE   443 G$ADC0L$0$0 == 0x00be
                           0000BE   444 _ADC0L	=	0x00be
                           0000BF   445 G$ADC0H$0$0 == 0x00bf
                           0000BF   446 _ADC0H	=	0x00bf
                           0000C0   447 G$SMB0CN$0$0 == 0x00c0
                           0000C0   448 _SMB0CN	=	0x00c0
                           0000C1   449 G$SMB0STA$0$0 == 0x00c1
                           0000C1   450 _SMB0STA	=	0x00c1
                           0000C2   451 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   452 _SMB0DAT	=	0x00c2
                           0000C3   453 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   454 _SMB0ADR	=	0x00c3
                           0000C4   455 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   456 _ADC0GTL	=	0x00c4
                           0000C5   457 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   458 _ADC0GTH	=	0x00c5
                           0000C6   459 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   460 _ADC0LTL	=	0x00c6
                           0000C7   461 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   462 _ADC0LTH	=	0x00c7
                           0000C8   463 G$T2CON$0$0 == 0x00c8
                           0000C8   464 _T2CON	=	0x00c8
                           0000C9   465 G$T4CON$0$0 == 0x00c9
                           0000C9   466 _T4CON	=	0x00c9
                           0000CA   467 G$RCAP2L$0$0 == 0x00ca
                           0000CA   468 _RCAP2L	=	0x00ca
                           0000CB   469 G$RCAP2H$0$0 == 0x00cb
                           0000CB   470 _RCAP2H	=	0x00cb
                           0000CC   471 G$TL2$0$0 == 0x00cc
                           0000CC   472 _TL2	=	0x00cc
                           0000CD   473 G$TH2$0$0 == 0x00cd
                           0000CD   474 _TH2	=	0x00cd
                           0000CF   475 G$SMB0CR$0$0 == 0x00cf
                           0000CF   476 _SMB0CR	=	0x00cf
                           0000D0   477 G$PSW$0$0 == 0x00d0
                           0000D0   478 _PSW	=	0x00d0
                           0000D1   479 G$REF0CN$0$0 == 0x00d1
                           0000D1   480 _REF0CN	=	0x00d1
                           0000D2   481 G$DAC0L$0$0 == 0x00d2
                           0000D2   482 _DAC0L	=	0x00d2
                           0000D3   483 G$DAC0H$0$0 == 0x00d3
                           0000D3   484 _DAC0H	=	0x00d3
                           0000D4   485 G$DAC0CN$0$0 == 0x00d4
                           0000D4   486 _DAC0CN	=	0x00d4
                           0000D5   487 G$DAC1L$0$0 == 0x00d5
                           0000D5   488 _DAC1L	=	0x00d5
                           0000D6   489 G$DAC1H$0$0 == 0x00d6
                           0000D6   490 _DAC1H	=	0x00d6
                           0000D7   491 G$DAC1CN$0$0 == 0x00d7
                           0000D7   492 _DAC1CN	=	0x00d7
                           0000D8   493 G$PCA0CN$0$0 == 0x00d8
                           0000D8   494 _PCA0CN	=	0x00d8
                           0000D9   495 G$PCA0MD$0$0 == 0x00d9
                           0000D9   496 _PCA0MD	=	0x00d9
                           0000DA   497 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   498 _PCA0CPM0	=	0x00da
                           0000DB   499 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   500 _PCA0CPM1	=	0x00db
                           0000DC   501 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   502 _PCA0CPM2	=	0x00dc
                           0000DD   503 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   504 _PCA0CPM3	=	0x00dd
                           0000DE   505 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   506 _PCA0CPM4	=	0x00de
                           0000E0   507 G$ACC$0$0 == 0x00e0
                           0000E0   508 _ACC	=	0x00e0
                           0000E1   509 G$XBR0$0$0 == 0x00e1
                           0000E1   510 _XBR0	=	0x00e1
                           0000E2   511 G$XBR1$0$0 == 0x00e2
                           0000E2   512 _XBR1	=	0x00e2
                           0000E3   513 G$XBR2$0$0 == 0x00e3
                           0000E3   514 _XBR2	=	0x00e3
                           0000E4   515 G$RCAP4L$0$0 == 0x00e4
                           0000E4   516 _RCAP4L	=	0x00e4
                           0000E5   517 G$RCAP4H$0$0 == 0x00e5
                           0000E5   518 _RCAP4H	=	0x00e5
                           0000E6   519 G$EIE1$0$0 == 0x00e6
                           0000E6   520 _EIE1	=	0x00e6
                           0000E7   521 G$EIE2$0$0 == 0x00e7
                           0000E7   522 _EIE2	=	0x00e7
                           0000E8   523 G$ADC0CN$0$0 == 0x00e8
                           0000E8   524 _ADC0CN	=	0x00e8
                           0000E9   525 G$PCA0L$0$0 == 0x00e9
                           0000E9   526 _PCA0L	=	0x00e9
                           0000EA   527 G$PCA0CPL0$0$0 == 0x00ea
                           0000EA   528 _PCA0CPL0	=	0x00ea
                           0000EB   529 G$PCA0CPL1$0$0 == 0x00eb
                           0000EB   530 _PCA0CPL1	=	0x00eb
                           0000EC   531 G$PCA0CPL2$0$0 == 0x00ec
                           0000EC   532 _PCA0CPL2	=	0x00ec
                           0000ED   533 G$PCA0CPL3$0$0 == 0x00ed
                           0000ED   534 _PCA0CPL3	=	0x00ed
                           0000EE   535 G$PCA0CPL4$0$0 == 0x00ee
                           0000EE   536 _PCA0CPL4	=	0x00ee
                           0000EF   537 G$RSTSRC$0$0 == 0x00ef
                           0000EF   538 _RSTSRC	=	0x00ef
                           0000F0   539 G$B$0$0 == 0x00f0
                           0000F0   540 _B	=	0x00f0
                           0000F1   541 G$SCON1$0$0 == 0x00f1
                           0000F1   542 _SCON1	=	0x00f1
                           0000F2   543 G$SBUF1$0$0 == 0x00f2
                           0000F2   544 _SBUF1	=	0x00f2
                           0000F3   545 G$SADDR1$0$0 == 0x00f3
                           0000F3   546 _SADDR1	=	0x00f3
                           0000F4   547 G$TL4$0$0 == 0x00f4
                           0000F4   548 _TL4	=	0x00f4
                           0000F5   549 G$TH4$0$0 == 0x00f5
                           0000F5   550 _TH4	=	0x00f5
                           0000F6   551 G$EIP1$0$0 == 0x00f6
                           0000F6   552 _EIP1	=	0x00f6
                           0000F7   553 G$EIP2$0$0 == 0x00f7
                           0000F7   554 _EIP2	=	0x00f7
                           0000F8   555 G$SPI0CN$0$0 == 0x00f8
                           0000F8   556 _SPI0CN	=	0x00f8
                           0000F9   557 G$PCA0H$0$0 == 0x00f9
                           0000F9   558 _PCA0H	=	0x00f9
                           0000FA   559 G$PCA0CPH0$0$0 == 0x00fa
                           0000FA   560 _PCA0CPH0	=	0x00fa
                           0000FB   561 G$PCA0CPH1$0$0 == 0x00fb
                           0000FB   562 _PCA0CPH1	=	0x00fb
                           0000FC   563 G$PCA0CPH2$0$0 == 0x00fc
                           0000FC   564 _PCA0CPH2	=	0x00fc
                           0000FD   565 G$PCA0CPH3$0$0 == 0x00fd
                           0000FD   566 _PCA0CPH3	=	0x00fd
                           0000FE   567 G$PCA0CPH4$0$0 == 0x00fe
                           0000FE   568 _PCA0CPH4	=	0x00fe
                           0000FF   569 G$WDTCN$0$0 == 0x00ff
                           0000FF   570 _WDTCN	=	0x00ff
                           008C8A   571 G$TMR0$0$0 == 0x8c8a
                           008C8A   572 _TMR0	=	0x8c8a
                           008D8B   573 G$TMR1$0$0 == 0x8d8b
                           008D8B   574 _TMR1	=	0x8d8b
                           00CDCC   575 G$TMR2$0$0 == 0xcdcc
                           00CDCC   576 _TMR2	=	0xcdcc
                           00CBCA   577 G$RCAP2$0$0 == 0xcbca
                           00CBCA   578 _RCAP2	=	0xcbca
                           009594   579 G$TMR3$0$0 == 0x9594
                           009594   580 _TMR3	=	0x9594
                           009392   581 G$TMR3RL$0$0 == 0x9392
                           009392   582 _TMR3RL	=	0x9392
                           00F5F4   583 G$TMR4$0$0 == 0xf5f4
                           00F5F4   584 _TMR4	=	0xf5f4
                           00E5E4   585 G$RCAP4$0$0 == 0xe5e4
                           00E5E4   586 _RCAP4	=	0xe5e4
                           00BFBE   587 G$ADC0$0$0 == 0xbfbe
                           00BFBE   588 _ADC0	=	0xbfbe
                           00C5C4   589 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   590 _ADC0GT	=	0xc5c4
                           00C7C6   591 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   592 _ADC0LT	=	0xc7c6
                           00D3D2   593 G$DAC0$0$0 == 0xd3d2
                           00D3D2   594 _DAC0	=	0xd3d2
                           00D6D5   595 G$DAC1$0$0 == 0xd6d5
                           00D6D5   596 _DAC1	=	0xd6d5
                           00F9E9   597 G$PCA0$0$0 == 0xf9e9
                           00F9E9   598 _PCA0	=	0xf9e9
                           00FAEA   599 G$PCA0CP0$0$0 == 0xfaea
                           00FAEA   600 _PCA0CP0	=	0xfaea
                           00FBEB   601 G$PCA0CP1$0$0 == 0xfbeb
                           00FBEB   602 _PCA0CP1	=	0xfbeb
                           00FCEC   603 G$PCA0CP2$0$0 == 0xfcec
                           00FCEC   604 _PCA0CP2	=	0xfcec
                           00FDED   605 G$PCA0CP3$0$0 == 0xfded
                           00FDED   606 _PCA0CP3	=	0xfded
                           00FEEE   607 G$PCA0CP4$0$0 == 0xfeee
                           00FEEE   608 _PCA0CP4	=	0xfeee
                                    609 ;--------------------------------------------------------
                                    610 ; special function bits
                                    611 ;--------------------------------------------------------
                                    612 	.area RSEG    (ABS,DATA)
      000000                        613 	.org 0x0000
                           000080   614 G$P0_0$0$0 == 0x0080
                           000080   615 _P0_0	=	0x0080
                           000081   616 G$P0_1$0$0 == 0x0081
                           000081   617 _P0_1	=	0x0081
                           000082   618 G$P0_2$0$0 == 0x0082
                           000082   619 _P0_2	=	0x0082
                           000083   620 G$P0_3$0$0 == 0x0083
                           000083   621 _P0_3	=	0x0083
                           000084   622 G$P0_4$0$0 == 0x0084
                           000084   623 _P0_4	=	0x0084
                           000085   624 G$P0_5$0$0 == 0x0085
                           000085   625 _P0_5	=	0x0085
                           000086   626 G$P0_6$0$0 == 0x0086
                           000086   627 _P0_6	=	0x0086
                           000087   628 G$P0_7$0$0 == 0x0087
                           000087   629 _P0_7	=	0x0087
                           000088   630 G$IT0$0$0 == 0x0088
                           000088   631 _IT0	=	0x0088
                           000089   632 G$IE0$0$0 == 0x0089
                           000089   633 _IE0	=	0x0089
                           00008A   634 G$IT1$0$0 == 0x008a
                           00008A   635 _IT1	=	0x008a
                           00008B   636 G$IE1$0$0 == 0x008b
                           00008B   637 _IE1	=	0x008b
                           00008C   638 G$TR0$0$0 == 0x008c
                           00008C   639 _TR0	=	0x008c
                           00008D   640 G$TF0$0$0 == 0x008d
                           00008D   641 _TF0	=	0x008d
                           00008E   642 G$TR1$0$0 == 0x008e
                           00008E   643 _TR1	=	0x008e
                           00008F   644 G$TF1$0$0 == 0x008f
                           00008F   645 _TF1	=	0x008f
                           000090   646 G$P1_0$0$0 == 0x0090
                           000090   647 _P1_0	=	0x0090
                           000091   648 G$P1_1$0$0 == 0x0091
                           000091   649 _P1_1	=	0x0091
                           000092   650 G$P1_2$0$0 == 0x0092
                           000092   651 _P1_2	=	0x0092
                           000093   652 G$P1_3$0$0 == 0x0093
                           000093   653 _P1_3	=	0x0093
                           000094   654 G$P1_4$0$0 == 0x0094
                           000094   655 _P1_4	=	0x0094
                           000095   656 G$P1_5$0$0 == 0x0095
                           000095   657 _P1_5	=	0x0095
                           000096   658 G$P1_6$0$0 == 0x0096
                           000096   659 _P1_6	=	0x0096
                           000097   660 G$P1_7$0$0 == 0x0097
                           000097   661 _P1_7	=	0x0097
                           000098   662 G$RI$0$0 == 0x0098
                           000098   663 _RI	=	0x0098
                           000098   664 G$RI0$0$0 == 0x0098
                           000098   665 _RI0	=	0x0098
                           000099   666 G$TI$0$0 == 0x0099
                           000099   667 _TI	=	0x0099
                           000099   668 G$TI0$0$0 == 0x0099
                           000099   669 _TI0	=	0x0099
                           00009A   670 G$RB8$0$0 == 0x009a
                           00009A   671 _RB8	=	0x009a
                           00009A   672 G$RB80$0$0 == 0x009a
                           00009A   673 _RB80	=	0x009a
                           00009B   674 G$TB8$0$0 == 0x009b
                           00009B   675 _TB8	=	0x009b
                           00009B   676 G$TB80$0$0 == 0x009b
                           00009B   677 _TB80	=	0x009b
                           00009C   678 G$REN$0$0 == 0x009c
                           00009C   679 _REN	=	0x009c
                           00009C   680 G$REN0$0$0 == 0x009c
                           00009C   681 _REN0	=	0x009c
                           00009D   682 G$SM2$0$0 == 0x009d
                           00009D   683 _SM2	=	0x009d
                           00009D   684 G$SM20$0$0 == 0x009d
                           00009D   685 _SM20	=	0x009d
                           00009D   686 G$MCE0$0$0 == 0x009d
                           00009D   687 _MCE0	=	0x009d
                           00009E   688 G$SM1$0$0 == 0x009e
                           00009E   689 _SM1	=	0x009e
                           00009E   690 G$SM10$0$0 == 0x009e
                           00009E   691 _SM10	=	0x009e
                           00009F   692 G$SM0$0$0 == 0x009f
                           00009F   693 _SM0	=	0x009f
                           00009F   694 G$SM00$0$0 == 0x009f
                           00009F   695 _SM00	=	0x009f
                           00009F   696 G$S0MODE$0$0 == 0x009f
                           00009F   697 _S0MODE	=	0x009f
                           0000A0   698 G$P2_0$0$0 == 0x00a0
                           0000A0   699 _P2_0	=	0x00a0
                           0000A1   700 G$P2_1$0$0 == 0x00a1
                           0000A1   701 _P2_1	=	0x00a1
                           0000A2   702 G$P2_2$0$0 == 0x00a2
                           0000A2   703 _P2_2	=	0x00a2
                           0000A3   704 G$P2_3$0$0 == 0x00a3
                           0000A3   705 _P2_3	=	0x00a3
                           0000A4   706 G$P2_4$0$0 == 0x00a4
                           0000A4   707 _P2_4	=	0x00a4
                           0000A5   708 G$P2_5$0$0 == 0x00a5
                           0000A5   709 _P2_5	=	0x00a5
                           0000A6   710 G$P2_6$0$0 == 0x00a6
                           0000A6   711 _P2_6	=	0x00a6
                           0000A7   712 G$P2_7$0$0 == 0x00a7
                           0000A7   713 _P2_7	=	0x00a7
                           0000A8   714 G$EX0$0$0 == 0x00a8
                           0000A8   715 _EX0	=	0x00a8
                           0000A9   716 G$ET0$0$0 == 0x00a9
                           0000A9   717 _ET0	=	0x00a9
                           0000AA   718 G$EX1$0$0 == 0x00aa
                           0000AA   719 _EX1	=	0x00aa
                           0000AB   720 G$ET1$0$0 == 0x00ab
                           0000AB   721 _ET1	=	0x00ab
                           0000AC   722 G$ES0$0$0 == 0x00ac
                           0000AC   723 _ES0	=	0x00ac
                           0000AC   724 G$ES$0$0 == 0x00ac
                           0000AC   725 _ES	=	0x00ac
                           0000AD   726 G$ET2$0$0 == 0x00ad
                           0000AD   727 _ET2	=	0x00ad
                           0000AF   728 G$EA$0$0 == 0x00af
                           0000AF   729 _EA	=	0x00af
                           0000B0   730 G$P3_0$0$0 == 0x00b0
                           0000B0   731 _P3_0	=	0x00b0
                           0000B1   732 G$P3_1$0$0 == 0x00b1
                           0000B1   733 _P3_1	=	0x00b1
                           0000B2   734 G$P3_2$0$0 == 0x00b2
                           0000B2   735 _P3_2	=	0x00b2
                           0000B3   736 G$P3_3$0$0 == 0x00b3
                           0000B3   737 _P3_3	=	0x00b3
                           0000B4   738 G$P3_4$0$0 == 0x00b4
                           0000B4   739 _P3_4	=	0x00b4
                           0000B5   740 G$P3_5$0$0 == 0x00b5
                           0000B5   741 _P3_5	=	0x00b5
                           0000B6   742 G$P3_6$0$0 == 0x00b6
                           0000B6   743 _P3_6	=	0x00b6
                           0000B7   744 G$P3_7$0$0 == 0x00b7
                           0000B7   745 _P3_7	=	0x00b7
                           0000B8   746 G$PX0$0$0 == 0x00b8
                           0000B8   747 _PX0	=	0x00b8
                           0000B9   748 G$PT0$0$0 == 0x00b9
                           0000B9   749 _PT0	=	0x00b9
                           0000BA   750 G$PX1$0$0 == 0x00ba
                           0000BA   751 _PX1	=	0x00ba
                           0000BB   752 G$PT1$0$0 == 0x00bb
                           0000BB   753 _PT1	=	0x00bb
                           0000BC   754 G$PS0$0$0 == 0x00bc
                           0000BC   755 _PS0	=	0x00bc
                           0000BC   756 G$PS$0$0 == 0x00bc
                           0000BC   757 _PS	=	0x00bc
                           0000BD   758 G$PT2$0$0 == 0x00bd
                           0000BD   759 _PT2	=	0x00bd
                           0000C0   760 G$SMBTOE$0$0 == 0x00c0
                           0000C0   761 _SMBTOE	=	0x00c0
                           0000C1   762 G$SMBFTE$0$0 == 0x00c1
                           0000C1   763 _SMBFTE	=	0x00c1
                           0000C2   764 G$AA$0$0 == 0x00c2
                           0000C2   765 _AA	=	0x00c2
                           0000C3   766 G$SI$0$0 == 0x00c3
                           0000C3   767 _SI	=	0x00c3
                           0000C4   768 G$STO$0$0 == 0x00c4
                           0000C4   769 _STO	=	0x00c4
                           0000C5   770 G$STA$0$0 == 0x00c5
                           0000C5   771 _STA	=	0x00c5
                           0000C6   772 G$ENSMB$0$0 == 0x00c6
                           0000C6   773 _ENSMB	=	0x00c6
                           0000C7   774 G$BUSY$0$0 == 0x00c7
                           0000C7   775 _BUSY	=	0x00c7
                           0000C8   776 G$CPRL2$0$0 == 0x00c8
                           0000C8   777 _CPRL2	=	0x00c8
                           0000C9   778 G$CT2$0$0 == 0x00c9
                           0000C9   779 _CT2	=	0x00c9
                           0000CA   780 G$TR2$0$0 == 0x00ca
                           0000CA   781 _TR2	=	0x00ca
                           0000CB   782 G$EXEN2$0$0 == 0x00cb
                           0000CB   783 _EXEN2	=	0x00cb
                           0000CC   784 G$TCLK$0$0 == 0x00cc
                           0000CC   785 _TCLK	=	0x00cc
                           0000CD   786 G$RCLK$0$0 == 0x00cd
                           0000CD   787 _RCLK	=	0x00cd
                           0000CE   788 G$EXF2$0$0 == 0x00ce
                           0000CE   789 _EXF2	=	0x00ce
                           0000CF   790 G$TF2$0$0 == 0x00cf
                           0000CF   791 _TF2	=	0x00cf
                           0000D0   792 G$P$0$0 == 0x00d0
                           0000D0   793 _P	=	0x00d0
                           0000D1   794 G$F1$0$0 == 0x00d1
                           0000D1   795 _F1	=	0x00d1
                           0000D2   796 G$OV$0$0 == 0x00d2
                           0000D2   797 _OV	=	0x00d2
                           0000D3   798 G$RS0$0$0 == 0x00d3
                           0000D3   799 _RS0	=	0x00d3
                           0000D4   800 G$RS1$0$0 == 0x00d4
                           0000D4   801 _RS1	=	0x00d4
                           0000D5   802 G$F0$0$0 == 0x00d5
                           0000D5   803 _F0	=	0x00d5
                           0000D6   804 G$AC$0$0 == 0x00d6
                           0000D6   805 _AC	=	0x00d6
                           0000D7   806 G$CY$0$0 == 0x00d7
                           0000D7   807 _CY	=	0x00d7
                           0000D8   808 G$CCF0$0$0 == 0x00d8
                           0000D8   809 _CCF0	=	0x00d8
                           0000D9   810 G$CCF1$0$0 == 0x00d9
                           0000D9   811 _CCF1	=	0x00d9
                           0000DA   812 G$CCF2$0$0 == 0x00da
                           0000DA   813 _CCF2	=	0x00da
                           0000DB   814 G$CCF3$0$0 == 0x00db
                           0000DB   815 _CCF3	=	0x00db
                           0000DC   816 G$CCF4$0$0 == 0x00dc
                           0000DC   817 _CCF4	=	0x00dc
                           0000DE   818 G$CR$0$0 == 0x00de
                           0000DE   819 _CR	=	0x00de
                           0000DF   820 G$CF$0$0 == 0x00df
                           0000DF   821 _CF	=	0x00df
                           0000E8   822 G$ADLJST$0$0 == 0x00e8
                           0000E8   823 _ADLJST	=	0x00e8
                           0000E8   824 G$AD0LJST$0$0 == 0x00e8
                           0000E8   825 _AD0LJST	=	0x00e8
                           0000E9   826 G$ADWINT$0$0 == 0x00e9
                           0000E9   827 _ADWINT	=	0x00e9
                           0000E9   828 G$AD0WINT$0$0 == 0x00e9
                           0000E9   829 _AD0WINT	=	0x00e9
                           0000EA   830 G$ADSTM0$0$0 == 0x00ea
                           0000EA   831 _ADSTM0	=	0x00ea
                           0000EA   832 G$AD0CM0$0$0 == 0x00ea
                           0000EA   833 _AD0CM0	=	0x00ea
                           0000EB   834 G$ADSTM1$0$0 == 0x00eb
                           0000EB   835 _ADSTM1	=	0x00eb
                           0000EB   836 G$AD0CM1$0$0 == 0x00eb
                           0000EB   837 _AD0CM1	=	0x00eb
                           0000EC   838 G$ADBUSY$0$0 == 0x00ec
                           0000EC   839 _ADBUSY	=	0x00ec
                           0000EC   840 G$AD0BUSY$0$0 == 0x00ec
                           0000EC   841 _AD0BUSY	=	0x00ec
                           0000ED   842 G$ADCINT$0$0 == 0x00ed
                           0000ED   843 _ADCINT	=	0x00ed
                           0000ED   844 G$AD0INT$0$0 == 0x00ed
                           0000ED   845 _AD0INT	=	0x00ed
                           0000EE   846 G$ADCTM$0$0 == 0x00ee
                           0000EE   847 _ADCTM	=	0x00ee
                           0000EE   848 G$AD0TM$0$0 == 0x00ee
                           0000EE   849 _AD0TM	=	0x00ee
                           0000EF   850 G$ADCEN$0$0 == 0x00ef
                           0000EF   851 _ADCEN	=	0x00ef
                           0000EF   852 G$AD0EN$0$0 == 0x00ef
                           0000EF   853 _AD0EN	=	0x00ef
                           0000F8   854 G$SPIEN$0$0 == 0x00f8
                           0000F8   855 _SPIEN	=	0x00f8
                           0000F9   856 G$MSTEN$0$0 == 0x00f9
                           0000F9   857 _MSTEN	=	0x00f9
                           0000FA   858 G$SLVSEL$0$0 == 0x00fa
                           0000FA   859 _SLVSEL	=	0x00fa
                           0000FB   860 G$TXBSY$0$0 == 0x00fb
                           0000FB   861 _TXBSY	=	0x00fb
                           0000FC   862 G$RXOVRN$0$0 == 0x00fc
                           0000FC   863 _RXOVRN	=	0x00fc
                           0000FD   864 G$MODF$0$0 == 0x00fd
                           0000FD   865 _MODF	=	0x00fd
                           0000FE   866 G$WCOL$0$0 == 0x00fe
                           0000FE   867 _WCOL	=	0x00fe
                           0000FF   868 G$SPIF$0$0 == 0x00ff
                           0000FF   869 _SPIF	=	0x00ff
                                    870 ;--------------------------------------------------------
                                    871 ; overlayable register banks
                                    872 ;--------------------------------------------------------
                                    873 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        874 	.ds 8
                                    875 ;--------------------------------------------------------
                                    876 ; internal ram data
                                    877 ;--------------------------------------------------------
                                    878 	.area DSEG    (DATA)
                           000000   879 G$pw_neut$0$0==.
      000022                        880 _pw_neut::
      000022                        881 	.ds 2
                           000002   882 G$previous_error$0$0==.
      000024                        883 _previous_error::
      000024                        884 	.ds 2
                           000004   885 G$desired$0$0==.
      000026                        886 _desired::
      000026                        887 	.ds 2
                           000006   888 G$actual$0$0==.
      000028                        889 _actual::
      000028                        890 	.ds 2
                           000008   891 G$kp$0$0==.
      00002A                        892 _kp::
      00002A                        893 	.ds 2
                           00000A   894 G$kd$0$0==.
      00002C                        895 _kd::
      00002C                        896 	.ds 2
                           00000C   897 G$error$0$0==.
      00002E                        898 _error::
      00002E                        899 	.ds 2
                           00000E   900 G$temp_motorpw_2byte$0$0==.
      000030                        901 _temp_motorpw_2byte::
      000030                        902 	.ds 2
                           000010   903 G$temp_motorpw_alg1$0$0==.
      000032                        904 _temp_motorpw_alg1::
      000032                        905 	.ds 4
                           000014   906 G$temp_motorpw_alg2$0$0==.
      000036                        907 _temp_motorpw_alg2::
      000036                        908 	.ds 4
                           000018   909 G$temp_motorpw_alg3$0$0==.
      00003A                        910 _temp_motorpw_alg3::
      00003A                        911 	.ds 4
                           00001C   912 G$temp_motorpw_alg4$0$0==.
      00003E                        913 _temp_motorpw_alg4::
      00003E                        914 	.ds 4
                           000020   915 G$temp_motorpw_alg5$0$0==.
      000042                        916 _temp_motorpw_alg5::
      000042                        917 	.ds 4
                           000024   918 G$temp_motorpw_alg6$0$0==.
      000046                        919 _temp_motorpw_alg6::
      000046                        920 	.ds 4
                           000028   921 Lworksheet_11.main$sloc0$1$0==.
      00004A                        922 _main_sloc0_1_0:
      00004A                        923 	.ds 4
                                    924 ;--------------------------------------------------------
                                    925 ; overlayable items in internal ram 
                                    926 ;--------------------------------------------------------
                                    927 	.area	OSEG    (OVR,DATA)
                                    928 	.area	OSEG    (OVR,DATA)
                                    929 ;--------------------------------------------------------
                                    930 ; Stack segment in internal ram 
                                    931 ;--------------------------------------------------------
                                    932 	.area	SSEG
      000068                        933 __start__stack:
      000068                        934 	.ds	1
                                    935 
                                    936 ;--------------------------------------------------------
                                    937 ; indirectly addressable internal ram data
                                    938 ;--------------------------------------------------------
                                    939 	.area ISEG    (DATA)
                                    940 ;--------------------------------------------------------
                                    941 ; absolute internal ram data
                                    942 ;--------------------------------------------------------
                                    943 	.area IABS    (ABS,DATA)
                                    944 	.area IABS    (ABS,DATA)
                                    945 ;--------------------------------------------------------
                                    946 ; bit data
                                    947 ;--------------------------------------------------------
                                    948 	.area BSEG    (BIT)
                                    949 ;--------------------------------------------------------
                                    950 ; paged external ram data
                                    951 ;--------------------------------------------------------
                                    952 	.area PSEG    (PAG,XDATA)
                                    953 ;--------------------------------------------------------
                                    954 ; external ram data
                                    955 ;--------------------------------------------------------
                                    956 	.area XSEG    (XDATA)
                                    957 ;--------------------------------------------------------
                                    958 ; absolute external ram data
                                    959 ;--------------------------------------------------------
                                    960 	.area XABS    (ABS,XDATA)
                                    961 ;--------------------------------------------------------
                                    962 ; external initialized ram data
                                    963 ;--------------------------------------------------------
                                    964 	.area XISEG   (XDATA)
                                    965 	.area HOME    (CODE)
                                    966 	.area GSINIT0 (CODE)
                                    967 	.area GSINIT1 (CODE)
                                    968 	.area GSINIT2 (CODE)
                                    969 	.area GSINIT3 (CODE)
                                    970 	.area GSINIT4 (CODE)
                                    971 	.area GSINIT5 (CODE)
                                    972 	.area GSINIT  (CODE)
                                    973 	.area GSFINAL (CODE)
                                    974 	.area CSEG    (CODE)
                                    975 ;--------------------------------------------------------
                                    976 ; interrupt vector 
                                    977 ;--------------------------------------------------------
                                    978 	.area HOME    (CODE)
      000000                        979 __interrupt_vect:
      000000 02 00 06         [24]  980 	ljmp	__sdcc_gsinit_startup
                                    981 ;--------------------------------------------------------
                                    982 ; global & static initialisations
                                    983 ;--------------------------------------------------------
                                    984 	.area HOME    (CODE)
                                    985 	.area GSINIT  (CODE)
                                    986 	.area GSFINAL (CODE)
                                    987 	.area GSINIT  (CODE)
                                    988 	.globl __sdcc_gsinit_startup
                                    989 	.globl __sdcc_program_startup
                                    990 	.globl __start__stack
                                    991 	.globl __mcs51_genXINIT
                                    992 	.globl __mcs51_genXRAMCLEAR
                                    993 	.globl __mcs51_genRAMCLEAR
                           000000   994 	C$worksheet_11.c$13$1$25 ==.
                                    995 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\worksheet_11.c:13: int pw_neut = 2765;                    // set this value
      00005F 75 22 CD         [24]  996 	mov	_pw_neut,#0xCD
      000062 75 23 0A         [24]  997 	mov	(_pw_neut + 1),#0x0A
                           000006   998 	C$worksheet_11.c$14$1$25 ==.
                                    999 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\worksheet_11.c:14: int previous_error = 20;             // set this value
      000065 75 24 14         [24] 1000 	mov	_previous_error,#0x14
      000068 75 25 00         [24] 1001 	mov	(_previous_error + 1),#0x00
                           00000C  1002 	C$worksheet_11.c$15$1$25 ==.
                                   1003 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\worksheet_11.c:15: unsigned int desired = 3500;           // set this value
      00006B 75 26 AC         [24] 1004 	mov	_desired,#0xAC
      00006E 75 27 0D         [24] 1005 	mov	(_desired + 1),#0x0D
                           000012  1006 	C$worksheet_11.c$16$1$25 ==.
                                   1007 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\worksheet_11.c:16: unsigned int actual = 1800;            // set this value
      000071 75 28 08         [24] 1008 	mov	_actual,#0x08
      000074 75 29 07         [24] 1009 	mov	(_actual + 1),#0x07
                           000018  1010 	C$worksheet_11.c$18$1$25 ==.
                                   1011 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\worksheet_11.c:18: unsigned int kp = 30;                // set this value
      000077 75 2A 1E         [24] 1012 	mov	_kp,#0x1E
      00007A 75 2B 00         [24] 1013 	mov	(_kp + 1),#0x00
                           00001E  1014 	C$worksheet_11.c$19$1$25 ==.
                                   1015 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\worksheet_11.c:19: unsigned int kd = 30;                // set this value
      00007D 75 2C 1E         [24] 1016 	mov	_kd,#0x1E
      000080 75 2D 00         [24] 1017 	mov	(_kd + 1),#0x00
                           000024  1018 	C$worksheet_11.c$22$1$25 ==.
                                   1019 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\worksheet_11.c:22: int error = 0;                      // set this value
      000083 E4               [12] 1020 	clr	a
      000084 F5 2E            [12] 1021 	mov	_error,a
      000086 F5 2F            [12] 1022 	mov	(_error + 1),a
                           000029  1023 	C$worksheet_11.c$23$1$25 ==.
                                   1024 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\worksheet_11.c:23: int temp_motorpw_2byte = 0;
      000088 F5 30            [12] 1025 	mov	_temp_motorpw_2byte,a
      00008A F5 31            [12] 1026 	mov	(_temp_motorpw_2byte + 1),a
                           00002D  1027 	C$worksheet_11.c$24$1$25 ==.
                                   1028 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\worksheet_11.c:24: long temp_motorpw_alg1 = 0;
      00008C F5 32            [12] 1029 	mov	_temp_motorpw_alg1,a
      00008E F5 33            [12] 1030 	mov	(_temp_motorpw_alg1 + 1),a
      000090 F5 34            [12] 1031 	mov	(_temp_motorpw_alg1 + 2),a
      000092 F5 35            [12] 1032 	mov	(_temp_motorpw_alg1 + 3),a
                           000035  1033 	C$worksheet_11.c$25$1$25 ==.
                                   1034 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\worksheet_11.c:25: long temp_motorpw_alg2 = 0;
      000094 F5 36            [12] 1035 	mov	_temp_motorpw_alg2,a
      000096 F5 37            [12] 1036 	mov	(_temp_motorpw_alg2 + 1),a
      000098 F5 38            [12] 1037 	mov	(_temp_motorpw_alg2 + 2),a
      00009A F5 39            [12] 1038 	mov	(_temp_motorpw_alg2 + 3),a
                           00003D  1039 	C$worksheet_11.c$26$1$25 ==.
                                   1040 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\worksheet_11.c:26: long temp_motorpw_alg3 = 0;
      00009C F5 3A            [12] 1041 	mov	_temp_motorpw_alg3,a
      00009E F5 3B            [12] 1042 	mov	(_temp_motorpw_alg3 + 1),a
      0000A0 F5 3C            [12] 1043 	mov	(_temp_motorpw_alg3 + 2),a
      0000A2 F5 3D            [12] 1044 	mov	(_temp_motorpw_alg3 + 3),a
                           000045  1045 	C$worksheet_11.c$27$1$25 ==.
                                   1046 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\worksheet_11.c:27: long temp_motorpw_alg4 = 0;
      0000A4 F5 3E            [12] 1047 	mov	_temp_motorpw_alg4,a
      0000A6 F5 3F            [12] 1048 	mov	(_temp_motorpw_alg4 + 1),a
      0000A8 F5 40            [12] 1049 	mov	(_temp_motorpw_alg4 + 2),a
      0000AA F5 41            [12] 1050 	mov	(_temp_motorpw_alg4 + 3),a
                           00004D  1051 	C$worksheet_11.c$28$1$25 ==.
                                   1052 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\worksheet_11.c:28: long temp_motorpw_alg5 = 0;
      0000AC F5 42            [12] 1053 	mov	_temp_motorpw_alg5,a
      0000AE F5 43            [12] 1054 	mov	(_temp_motorpw_alg5 + 1),a
      0000B0 F5 44            [12] 1055 	mov	(_temp_motorpw_alg5 + 2),a
      0000B2 F5 45            [12] 1056 	mov	(_temp_motorpw_alg5 + 3),a
                           000055  1057 	C$worksheet_11.c$29$1$25 ==.
                                   1058 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\worksheet_11.c:29: long temp_motorpw_alg6 = 0;
      0000B4 F5 46            [12] 1059 	mov	_temp_motorpw_alg6,a
      0000B6 F5 47            [12] 1060 	mov	(_temp_motorpw_alg6 + 1),a
      0000B8 F5 48            [12] 1061 	mov	(_temp_motorpw_alg6 + 2),a
      0000BA F5 49            [12] 1062 	mov	(_temp_motorpw_alg6 + 3),a
                                   1063 	.area GSFINAL (CODE)
      0000BC 02 00 03         [24] 1064 	ljmp	__sdcc_program_startup
                                   1065 ;--------------------------------------------------------
                                   1066 ; Home
                                   1067 ;--------------------------------------------------------
                                   1068 	.area HOME    (CODE)
                                   1069 	.area HOME    (CODE)
      000003                       1070 __sdcc_program_startup:
      000003 02 01 1B         [24] 1071 	ljmp	_main
                                   1072 ;	return from main will return to caller
                                   1073 ;--------------------------------------------------------
                                   1074 ; code
                                   1075 ;--------------------------------------------------------
                                   1076 	.area CSEG    (CODE)
                                   1077 ;------------------------------------------------------------
                                   1078 ;Allocation info for local variables in function 'SYSCLK_Init'
                                   1079 ;------------------------------------------------------------
                                   1080 ;i                         Allocated to registers 
                                   1081 ;------------------------------------------------------------
                           000000  1082 	G$SYSCLK_Init$0$0 ==.
                           000000  1083 	C$c8051_SDCC.h$42$0$0 ==.
                                   1084 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:42: void SYSCLK_Init(void)
                                   1085 ;	-----------------------------------------
                                   1086 ;	 function SYSCLK_Init
                                   1087 ;	-----------------------------------------
      0000BF                       1088 _SYSCLK_Init:
                           000007  1089 	ar7 = 0x07
                           000006  1090 	ar6 = 0x06
                           000005  1091 	ar5 = 0x05
                           000004  1092 	ar4 = 0x04
                           000003  1093 	ar3 = 0x03
                           000002  1094 	ar2 = 0x02
                           000001  1095 	ar1 = 0x01
                           000000  1096 	ar0 = 0x00
                           000000  1097 	C$c8051_SDCC.h$46$1$2 ==.
                                   1098 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:46: OSCXCN = 0x67;                      // start external oscillator with
      0000BF 75 B1 67         [24] 1099 	mov	_OSCXCN,#0x67
                           000003  1100 	C$c8051_SDCC.h$49$1$2 ==.
                                   1101 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:49: for (i=0; i < 256; i++);            // wait for oscillator to start
      0000C2 7E 00            [12] 1102 	mov	r6,#0x00
      0000C4 7F 01            [12] 1103 	mov	r7,#0x01
      0000C6                       1104 00107$:
      0000C6 1E               [12] 1105 	dec	r6
      0000C7 BE FF 01         [24] 1106 	cjne	r6,#0xFF,00121$
      0000CA 1F               [12] 1107 	dec	r7
      0000CB                       1108 00121$:
      0000CB EE               [12] 1109 	mov	a,r6
      0000CC 4F               [12] 1110 	orl	a,r7
      0000CD 70 F7            [24] 1111 	jnz	00107$
                           000010  1112 	C$c8051_SDCC.h$51$1$2 ==.
                                   1113 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:51: while (!(OSCXCN & 0x80));           // Wait for crystal osc. to settle
      0000CF                       1114 00102$:
      0000CF E5 B1            [12] 1115 	mov	a,_OSCXCN
      0000D1 30 E7 FB         [24] 1116 	jnb	acc.7,00102$
                           000015  1117 	C$c8051_SDCC.h$53$1$2 ==.
                                   1118 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:53: OSCICN = 0x88;                      // select external oscillator as SYSCLK
      0000D4 75 B2 88         [24] 1119 	mov	_OSCICN,#0x88
                           000018  1120 	C$c8051_SDCC.h$56$1$2 ==.
                           000018  1121 	XG$SYSCLK_Init$0$0 ==.
      0000D7 22               [24] 1122 	ret
                                   1123 ;------------------------------------------------------------
                                   1124 ;Allocation info for local variables in function 'UART0_Init'
                                   1125 ;------------------------------------------------------------
                           000019  1126 	G$UART0_Init$0$0 ==.
                           000019  1127 	C$c8051_SDCC.h$64$1$2 ==.
                                   1128 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:64: void UART0_Init(void)
                                   1129 ;	-----------------------------------------
                                   1130 ;	 function UART0_Init
                                   1131 ;	-----------------------------------------
      0000D8                       1132 _UART0_Init:
                           000019  1133 	C$c8051_SDCC.h$66$1$4 ==.
                                   1134 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:66: SCON0  = 0x50;                      // SCON0: mode 1, 8-bit UART, enable RX
      0000D8 75 98 50         [24] 1135 	mov	_SCON0,#0x50
                           00001C  1136 	C$c8051_SDCC.h$67$1$4 ==.
                                   1137 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:67: TMOD   = 0x20;                      // TMOD: timer 1, mode 2, 8-bit reload
      0000DB 75 89 20         [24] 1138 	mov	_TMOD,#0x20
                           00001F  1139 	C$c8051_SDCC.h$68$1$4 ==.
                                   1140 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:68: TH1    = -(SYSCLK/BAUDRATE/16);     // set Timer1 reload value for baudrate
      0000DE 75 8D DC         [24] 1141 	mov	_TH1,#0xDC
                           000022  1142 	C$c8051_SDCC.h$69$1$4 ==.
                                   1143 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:69: TR1    = 1;                         // start Timer1
      0000E1 D2 8E            [12] 1144 	setb	_TR1
                           000024  1145 	C$c8051_SDCC.h$70$1$4 ==.
                                   1146 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:70: CKCON |= 0x10;                      // Timer1 uses SYSCLK as time base
      0000E3 43 8E 10         [24] 1147 	orl	_CKCON,#0x10
                           000027  1148 	C$c8051_SDCC.h$71$1$4 ==.
                                   1149 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:71: PCON  |= 0x80;                      // SMOD00 = 1 (disable baud rate 
      0000E6 43 87 80         [24] 1150 	orl	_PCON,#0x80
                           00002A  1151 	C$c8051_SDCC.h$73$1$4 ==.
                                   1152 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:73: TI0    = 1;                         // Indicate TX0 ready
      0000E9 D2 99            [12] 1153 	setb	_TI0
                           00002C  1154 	C$c8051_SDCC.h$74$1$4 ==.
                                   1155 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:74: P0MDOUT |= 0x01;                    // Set TX0 to push/pull
      0000EB 43 A4 01         [24] 1156 	orl	_P0MDOUT,#0x01
                           00002F  1157 	C$c8051_SDCC.h$75$1$4 ==.
                           00002F  1158 	XG$UART0_Init$0$0 ==.
      0000EE 22               [24] 1159 	ret
                                   1160 ;------------------------------------------------------------
                                   1161 ;Allocation info for local variables in function 'Sys_Init'
                                   1162 ;------------------------------------------------------------
                           000030  1163 	G$Sys_Init$0$0 ==.
                           000030  1164 	C$c8051_SDCC.h$83$1$4 ==.
                                   1165 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:83: void Sys_Init(void)
                                   1166 ;	-----------------------------------------
                                   1167 ;	 function Sys_Init
                                   1168 ;	-----------------------------------------
      0000EF                       1169 _Sys_Init:
                           000030  1170 	C$c8051_SDCC.h$85$1$6 ==.
                                   1171 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:85: WDTCN = 0xde;			// disable watchdog timer
      0000EF 75 FF DE         [24] 1172 	mov	_WDTCN,#0xDE
                           000033  1173 	C$c8051_SDCC.h$86$1$6 ==.
                                   1174 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:86: WDTCN = 0xad;
      0000F2 75 FF AD         [24] 1175 	mov	_WDTCN,#0xAD
                           000036  1176 	C$c8051_SDCC.h$88$1$6 ==.
                                   1177 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:88: SYSCLK_Init();			// initialize oscillator
      0000F5 12 00 BF         [24] 1178 	lcall	_SYSCLK_Init
                           000039  1179 	C$c8051_SDCC.h$89$1$6 ==.
                                   1180 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:89: UART0_Init();			// initialize UART0
      0000F8 12 00 D8         [24] 1181 	lcall	_UART0_Init
                           00003C  1182 	C$c8051_SDCC.h$91$1$6 ==.
                                   1183 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:91: XBR0 |= 0x04;
      0000FB 43 E1 04         [24] 1184 	orl	_XBR0,#0x04
                           00003F  1185 	C$c8051_SDCC.h$92$1$6 ==.
                                   1186 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:92: XBR2 |= 0x40;                    	// Enable crossbar and weak pull-ups
      0000FE 43 E3 40         [24] 1187 	orl	_XBR2,#0x40
                           000042  1188 	C$c8051_SDCC.h$93$1$6 ==.
                           000042  1189 	XG$Sys_Init$0$0 ==.
      000101 22               [24] 1190 	ret
                                   1191 ;------------------------------------------------------------
                                   1192 ;Allocation info for local variables in function 'putchar'
                                   1193 ;------------------------------------------------------------
                                   1194 ;c                         Allocated to registers r7 
                                   1195 ;------------------------------------------------------------
                           000043  1196 	G$putchar$0$0 ==.
                           000043  1197 	C$c8051_SDCC.h$98$1$6 ==.
                                   1198 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:98: void putchar(char c)
                                   1199 ;	-----------------------------------------
                                   1200 ;	 function putchar
                                   1201 ;	-----------------------------------------
      000102                       1202 _putchar:
      000102 AF 82            [24] 1203 	mov	r7,dpl
                           000045  1204 	C$c8051_SDCC.h$100$1$8 ==.
                                   1205 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:100: while (!TI0); 
      000104                       1206 00101$:
                           000045  1207 	C$c8051_SDCC.h$101$1$8 ==.
                                   1208 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:101: TI0 = 0;
      000104 10 99 02         [24] 1209 	jbc	_TI0,00112$
      000107 80 FB            [24] 1210 	sjmp	00101$
      000109                       1211 00112$:
                           00004A  1212 	C$c8051_SDCC.h$102$1$8 ==.
                                   1213 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:102: SBUF0 = c;
      000109 8F 99            [24] 1214 	mov	_SBUF0,r7
                           00004C  1215 	C$c8051_SDCC.h$103$1$8 ==.
                           00004C  1216 	XG$putchar$0$0 ==.
      00010B 22               [24] 1217 	ret
                                   1218 ;------------------------------------------------------------
                                   1219 ;Allocation info for local variables in function 'getchar'
                                   1220 ;------------------------------------------------------------
                                   1221 ;c                         Allocated to registers 
                                   1222 ;------------------------------------------------------------
                           00004D  1223 	G$getchar$0$0 ==.
                           00004D  1224 	C$c8051_SDCC.h$108$1$8 ==.
                                   1225 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:108: char getchar(void)
                                   1226 ;	-----------------------------------------
                                   1227 ;	 function getchar
                                   1228 ;	-----------------------------------------
      00010C                       1229 _getchar:
                           00004D  1230 	C$c8051_SDCC.h$111$1$10 ==.
                                   1231 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:111: while (!RI0);
      00010C                       1232 00101$:
                           00004D  1233 	C$c8051_SDCC.h$112$1$10 ==.
                                   1234 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:112: RI0 = 0;
      00010C 10 98 02         [24] 1235 	jbc	_RI0,00112$
      00010F 80 FB            [24] 1236 	sjmp	00101$
      000111                       1237 00112$:
                           000052  1238 	C$c8051_SDCC.h$113$1$10 ==.
                                   1239 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:113: c = SBUF0;
      000111 85 99 82         [24] 1240 	mov	dpl,_SBUF0
                           000055  1241 	C$c8051_SDCC.h$114$1$10 ==.
                                   1242 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:114: putchar(c);                          // echo to terminal
      000114 12 01 02         [24] 1243 	lcall	_putchar
                           000058  1244 	C$c8051_SDCC.h$115$1$10 ==.
                                   1245 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:115: return SBUF0;
      000117 85 99 82         [24] 1246 	mov	dpl,_SBUF0
                           00005B  1247 	C$c8051_SDCC.h$116$1$10 ==.
                           00005B  1248 	XG$getchar$0$0 ==.
      00011A 22               [24] 1249 	ret
                                   1250 ;------------------------------------------------------------
                                   1251 ;Allocation info for local variables in function 'main'
                                   1252 ;------------------------------------------------------------
                                   1253 ;sloc0                     Allocated with name '_main_sloc0_1_0'
                                   1254 ;------------------------------------------------------------
                           00005C  1255 	G$main$0$0 ==.
                           00005C  1256 	C$worksheet_11.c$31$1$10 ==.
                                   1257 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\worksheet_11.c:31: void main()
                                   1258 ;	-----------------------------------------
                                   1259 ;	 function main
                                   1260 ;	-----------------------------------------
      00011B                       1261 _main:
                           00005C  1262 	C$worksheet_11.c$33$1$25 ==.
                                   1263 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\worksheet_11.c:33: Sys_Init();
      00011B 12 00 EF         [24] 1264 	lcall	_Sys_Init
                           00005F  1265 	C$worksheet_11.c$34$1$25 ==.
                                   1266 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\worksheet_11.c:34: putchar(' ');
      00011E 75 82 20         [24] 1267 	mov	dpl,#0x20
      000121 12 01 02         [24] 1268 	lcall	_putchar
                           000065  1269 	C$worksheet_11.c$35$1$25 ==.
                                   1270 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\worksheet_11.c:35: error = desired-actual;
      000124 E5 26            [12] 1271 	mov	a,_desired
      000126 C3               [12] 1272 	clr	c
      000127 95 28            [12] 1273 	subb	a,_actual
      000129 F5 2E            [12] 1274 	mov	_error,a
      00012B E5 27            [12] 1275 	mov	a,(_desired + 1)
      00012D 95 29            [12] 1276 	subb	a,(_actual + 1)
      00012F F5 2F            [12] 1277 	mov	(_error + 1),a
                           000072  1278 	C$worksheet_11.c$37$1$25 ==.
                                   1279 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\worksheet_11.c:37: temp_motorpw_2byte = pw_neut+kp*error+kd*(error-previous_error);
      000131 85 2E 0A         [24] 1280 	mov	__mulint_PARM_2,_error
      000134 85 2F 0B         [24] 1281 	mov	(__mulint_PARM_2 + 1),(_error + 1)
      000137 85 2A 82         [24] 1282 	mov	dpl,_kp
      00013A 85 2B 83         [24] 1283 	mov	dph,(_kp + 1)
      00013D 12 04 DA         [24] 1284 	lcall	__mulint
      000140 AE 82            [24] 1285 	mov	r6,dpl
      000142 AF 83            [24] 1286 	mov	r7,dph
      000144 AC 22            [24] 1287 	mov	r4,_pw_neut
      000146 AD 23            [24] 1288 	mov	r5,(_pw_neut + 1)
      000148 EE               [12] 1289 	mov	a,r6
      000149 2C               [12] 1290 	add	a,r4
      00014A FE               [12] 1291 	mov	r6,a
      00014B EF               [12] 1292 	mov	a,r7
      00014C 3D               [12] 1293 	addc	a,r5
      00014D FF               [12] 1294 	mov	r7,a
      00014E E5 2E            [12] 1295 	mov	a,_error
      000150 C3               [12] 1296 	clr	c
      000151 95 24            [12] 1297 	subb	a,_previous_error
      000153 FC               [12] 1298 	mov	r4,a
      000154 E5 2F            [12] 1299 	mov	a,(_error + 1)
      000156 95 25            [12] 1300 	subb	a,(_previous_error + 1)
      000158 FD               [12] 1301 	mov	r5,a
      000159 8C 0A            [24] 1302 	mov	__mulint_PARM_2,r4
      00015B 8D 0B            [24] 1303 	mov	(__mulint_PARM_2 + 1),r5
      00015D 85 2C 82         [24] 1304 	mov	dpl,_kd
      000160 85 2D 83         [24] 1305 	mov	dph,(_kd + 1)
      000163 C0 07            [24] 1306 	push	ar7
      000165 C0 06            [24] 1307 	push	ar6
      000167 12 04 DA         [24] 1308 	lcall	__mulint
      00016A AC 82            [24] 1309 	mov	r4,dpl
      00016C AD 83            [24] 1310 	mov	r5,dph
      00016E D0 06            [24] 1311 	pop	ar6
      000170 D0 07            [24] 1312 	pop	ar7
      000172 EC               [12] 1313 	mov	a,r4
      000173 2E               [12] 1314 	add	a,r6
      000174 F5 30            [12] 1315 	mov	_temp_motorpw_2byte,a
      000176 ED               [12] 1316 	mov	a,r5
      000177 3F               [12] 1317 	addc	a,r7
      000178 F5 31            [12] 1318 	mov	(_temp_motorpw_2byte + 1),a
                           0000BB  1319 	C$worksheet_11.c$38$1$25 ==.
                                   1320 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\worksheet_11.c:38: printf("The two byte calculation of motorpw is %d \r\n",temp_motorpw_2byte);
      00017A C0 30            [24] 1321 	push	_temp_motorpw_2byte
      00017C C0 31            [24] 1322 	push	(_temp_motorpw_2byte + 1)
      00017E 74 9D            [12] 1323 	mov	a,#___str_0
      000180 C0 E0            [24] 1324 	push	acc
      000182 74 0B            [12] 1325 	mov	a,#(___str_0 >> 8)
      000184 C0 E0            [24] 1326 	push	acc
      000186 74 80            [12] 1327 	mov	a,#0x80
      000188 C0 E0            [24] 1328 	push	acc
      00018A 12 05 89         [24] 1329 	lcall	_printf
      00018D E5 81            [12] 1330 	mov	a,sp
      00018F 24 FB            [12] 1331 	add	a,#0xfb
      000191 F5 81            [12] 1332 	mov	sp,a
                           0000D4  1333 	C$worksheet_11.c$40$1$25 ==.
                                   1334 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\worksheet_11.c:40: temp_motorpw_alg1 = pw_neut+kp*error+kd*(error-previous_error);
      000193 85 2E 0A         [24] 1335 	mov	__mulint_PARM_2,_error
      000196 85 2F 0B         [24] 1336 	mov	(__mulint_PARM_2 + 1),(_error + 1)
      000199 85 2A 82         [24] 1337 	mov	dpl,_kp
      00019C 85 2B 83         [24] 1338 	mov	dph,(_kp + 1)
      00019F 12 04 DA         [24] 1339 	lcall	__mulint
      0001A2 AE 82            [24] 1340 	mov	r6,dpl
      0001A4 AF 83            [24] 1341 	mov	r7,dph
      0001A6 AC 22            [24] 1342 	mov	r4,_pw_neut
      0001A8 AD 23            [24] 1343 	mov	r5,(_pw_neut + 1)
      0001AA EE               [12] 1344 	mov	a,r6
      0001AB 2C               [12] 1345 	add	a,r4
      0001AC FE               [12] 1346 	mov	r6,a
      0001AD EF               [12] 1347 	mov	a,r7
      0001AE 3D               [12] 1348 	addc	a,r5
      0001AF FF               [12] 1349 	mov	r7,a
      0001B0 E5 2E            [12] 1350 	mov	a,_error
      0001B2 C3               [12] 1351 	clr	c
      0001B3 95 24            [12] 1352 	subb	a,_previous_error
      0001B5 FC               [12] 1353 	mov	r4,a
      0001B6 E5 2F            [12] 1354 	mov	a,(_error + 1)
      0001B8 95 25            [12] 1355 	subb	a,(_previous_error + 1)
      0001BA FD               [12] 1356 	mov	r5,a
      0001BB 8C 0A            [24] 1357 	mov	__mulint_PARM_2,r4
      0001BD 8D 0B            [24] 1358 	mov	(__mulint_PARM_2 + 1),r5
      0001BF 85 2C 82         [24] 1359 	mov	dpl,_kd
      0001C2 85 2D 83         [24] 1360 	mov	dph,(_kd + 1)
      0001C5 C0 07            [24] 1361 	push	ar7
      0001C7 C0 06            [24] 1362 	push	ar6
      0001C9 12 04 DA         [24] 1363 	lcall	__mulint
      0001CC AC 82            [24] 1364 	mov	r4,dpl
      0001CE AD 83            [24] 1365 	mov	r5,dph
      0001D0 D0 06            [24] 1366 	pop	ar6
      0001D2 D0 07            [24] 1367 	pop	ar7
      0001D4 EC               [12] 1368 	mov	a,r4
      0001D5 2E               [12] 1369 	add	a,r6
      0001D6 FE               [12] 1370 	mov	r6,a
      0001D7 ED               [12] 1371 	mov	a,r5
      0001D8 3F               [12] 1372 	addc	a,r7
      0001D9 FF               [12] 1373 	mov	r7,a
      0001DA 8E 32            [24] 1374 	mov	_temp_motorpw_alg1,r6
      0001DC 8F 33            [24] 1375 	mov	(_temp_motorpw_alg1 + 1),r7
      0001DE 75 34 00         [24] 1376 	mov	(_temp_motorpw_alg1 + 2),#0x00
      0001E1 75 35 00         [24] 1377 	mov	(_temp_motorpw_alg1 + 3),#0x00
                           000125  1378 	C$worksheet_11.c$41$1$25 ==.
                                   1379 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\worksheet_11.c:41: printf("Algorithm 1, four byte calculation of motorpw is %ld \r\n",temp_motorpw_alg1);
      0001E4 C0 32            [24] 1380 	push	_temp_motorpw_alg1
      0001E6 C0 33            [24] 1381 	push	(_temp_motorpw_alg1 + 1)
      0001E8 C0 34            [24] 1382 	push	(_temp_motorpw_alg1 + 2)
      0001EA C0 35            [24] 1383 	push	(_temp_motorpw_alg1 + 3)
      0001EC 74 CA            [12] 1384 	mov	a,#___str_1
      0001EE C0 E0            [24] 1385 	push	acc
      0001F0 74 0B            [12] 1386 	mov	a,#(___str_1 >> 8)
      0001F2 C0 E0            [24] 1387 	push	acc
      0001F4 74 80            [12] 1388 	mov	a,#0x80
      0001F6 C0 E0            [24] 1389 	push	acc
      0001F8 12 05 89         [24] 1390 	lcall	_printf
      0001FB E5 81            [12] 1391 	mov	a,sp
      0001FD 24 F9            [12] 1392 	add	a,#0xf9
      0001FF F5 81            [12] 1393 	mov	sp,a
                           000142  1394 	C$worksheet_11.c$43$1$25 ==.
                                   1395 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\worksheet_11.c:43: temp_motorpw_alg2 = pw_neut+(long)kp*error+kd*(error-previous_error);
      000201 AC 2A            [24] 1396 	mov	r4,_kp
      000203 AD 2B            [24] 1397 	mov	r5,(_kp + 1)
      000205 7E 00            [12] 1398 	mov	r6,#0x00
      000207 7F 00            [12] 1399 	mov	r7,#0x00
      000209 85 2E 0A         [24] 1400 	mov	__mullong_PARM_2,_error
      00020C E5 2F            [12] 1401 	mov	a,(_error + 1)
      00020E F5 0B            [12] 1402 	mov	(__mullong_PARM_2 + 1),a
      000210 33               [12] 1403 	rlc	a
      000211 95 E0            [12] 1404 	subb	a,acc
      000213 F5 0C            [12] 1405 	mov	(__mullong_PARM_2 + 2),a
      000215 F5 0D            [12] 1406 	mov	(__mullong_PARM_2 + 3),a
      000217 8C 82            [24] 1407 	mov	dpl,r4
      000219 8D 83            [24] 1408 	mov	dph,r5
      00021B 8E F0            [24] 1409 	mov	b,r6
      00021D EF               [12] 1410 	mov	a,r7
      00021E 12 04 F7         [24] 1411 	lcall	__mullong
      000221 AC 82            [24] 1412 	mov	r4,dpl
      000223 AD 83            [24] 1413 	mov	r5,dph
      000225 AE F0            [24] 1414 	mov	r6,b
      000227 FF               [12] 1415 	mov	r7,a
      000228 A8 22            [24] 1416 	mov	r0,_pw_neut
      00022A E5 23            [12] 1417 	mov	a,(_pw_neut + 1)
      00022C F9               [12] 1418 	mov	r1,a
      00022D 33               [12] 1419 	rlc	a
      00022E 95 E0            [12] 1420 	subb	a,acc
      000230 FA               [12] 1421 	mov	r2,a
      000231 FB               [12] 1422 	mov	r3,a
      000232 EC               [12] 1423 	mov	a,r4
      000233 28               [12] 1424 	add	a,r0
      000234 FC               [12] 1425 	mov	r4,a
      000235 ED               [12] 1426 	mov	a,r5
      000236 39               [12] 1427 	addc	a,r1
      000237 FD               [12] 1428 	mov	r5,a
      000238 EE               [12] 1429 	mov	a,r6
      000239 3A               [12] 1430 	addc	a,r2
      00023A FE               [12] 1431 	mov	r6,a
      00023B EF               [12] 1432 	mov	a,r7
      00023C 3B               [12] 1433 	addc	a,r3
      00023D FF               [12] 1434 	mov	r7,a
      00023E E5 2E            [12] 1435 	mov	a,_error
      000240 C3               [12] 1436 	clr	c
      000241 95 24            [12] 1437 	subb	a,_previous_error
      000243 FA               [12] 1438 	mov	r2,a
      000244 E5 2F            [12] 1439 	mov	a,(_error + 1)
      000246 95 25            [12] 1440 	subb	a,(_previous_error + 1)
      000248 FB               [12] 1441 	mov	r3,a
      000249 8A 0A            [24] 1442 	mov	__mulint_PARM_2,r2
      00024B 8B 0B            [24] 1443 	mov	(__mulint_PARM_2 + 1),r3
      00024D 85 2C 82         [24] 1444 	mov	dpl,_kd
      000250 85 2D 83         [24] 1445 	mov	dph,(_kd + 1)
      000253 C0 07            [24] 1446 	push	ar7
      000255 C0 06            [24] 1447 	push	ar6
      000257 C0 05            [24] 1448 	push	ar5
      000259 C0 04            [24] 1449 	push	ar4
      00025B 12 04 DA         [24] 1450 	lcall	__mulint
      00025E AA 82            [24] 1451 	mov	r2,dpl
      000260 AB 83            [24] 1452 	mov	r3,dph
      000262 D0 04            [24] 1453 	pop	ar4
      000264 D0 05            [24] 1454 	pop	ar5
      000266 D0 06            [24] 1455 	pop	ar6
      000268 D0 07            [24] 1456 	pop	ar7
      00026A 8A 00            [24] 1457 	mov	ar0,r2
      00026C 8B 01            [24] 1458 	mov	ar1,r3
      00026E E4               [12] 1459 	clr	a
      00026F FA               [12] 1460 	mov	r2,a
      000270 FB               [12] 1461 	mov	r3,a
      000271 E8               [12] 1462 	mov	a,r0
      000272 2C               [12] 1463 	add	a,r4
      000273 F5 36            [12] 1464 	mov	_temp_motorpw_alg2,a
      000275 E9               [12] 1465 	mov	a,r1
      000276 3D               [12] 1466 	addc	a,r5
      000277 F5 37            [12] 1467 	mov	(_temp_motorpw_alg2 + 1),a
      000279 EA               [12] 1468 	mov	a,r2
      00027A 3E               [12] 1469 	addc	a,r6
      00027B F5 38            [12] 1470 	mov	(_temp_motorpw_alg2 + 2),a
      00027D EB               [12] 1471 	mov	a,r3
      00027E 3F               [12] 1472 	addc	a,r7
      00027F F5 39            [12] 1473 	mov	(_temp_motorpw_alg2 + 3),a
                           0001C2  1474 	C$worksheet_11.c$44$1$25 ==.
                                   1475 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\worksheet_11.c:44: printf("Algorithm 2, four byte calculation of motorpw is %ld \r\n",temp_motorpw_alg2);
      000281 C0 36            [24] 1476 	push	_temp_motorpw_alg2
      000283 C0 37            [24] 1477 	push	(_temp_motorpw_alg2 + 1)
      000285 C0 38            [24] 1478 	push	(_temp_motorpw_alg2 + 2)
      000287 C0 39            [24] 1479 	push	(_temp_motorpw_alg2 + 3)
      000289 74 02            [12] 1480 	mov	a,#___str_2
      00028B C0 E0            [24] 1481 	push	acc
      00028D 74 0C            [12] 1482 	mov	a,#(___str_2 >> 8)
      00028F C0 E0            [24] 1483 	push	acc
      000291 74 80            [12] 1484 	mov	a,#0x80
      000293 C0 E0            [24] 1485 	push	acc
      000295 12 05 89         [24] 1486 	lcall	_printf
      000298 E5 81            [12] 1487 	mov	a,sp
      00029A 24 F9            [12] 1488 	add	a,#0xf9
      00029C F5 81            [12] 1489 	mov	sp,a
                           0001DF  1490 	C$worksheet_11.c$46$1$25 ==.
                                   1491 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\worksheet_11.c:46: temp_motorpw_alg3 = (long)( pw_neut + kp * (error) + kd * (error - previous_error));
      00029E 85 2E 0A         [24] 1492 	mov	__mulint_PARM_2,_error
      0002A1 85 2F 0B         [24] 1493 	mov	(__mulint_PARM_2 + 1),(_error + 1)
      0002A4 85 2A 82         [24] 1494 	mov	dpl,_kp
      0002A7 85 2B 83         [24] 1495 	mov	dph,(_kp + 1)
      0002AA 12 04 DA         [24] 1496 	lcall	__mulint
      0002AD AE 82            [24] 1497 	mov	r6,dpl
      0002AF AF 83            [24] 1498 	mov	r7,dph
      0002B1 AC 22            [24] 1499 	mov	r4,_pw_neut
      0002B3 AD 23            [24] 1500 	mov	r5,(_pw_neut + 1)
      0002B5 EE               [12] 1501 	mov	a,r6
      0002B6 2C               [12] 1502 	add	a,r4
      0002B7 FE               [12] 1503 	mov	r6,a
      0002B8 EF               [12] 1504 	mov	a,r7
      0002B9 3D               [12] 1505 	addc	a,r5
      0002BA FF               [12] 1506 	mov	r7,a
      0002BB E5 2E            [12] 1507 	mov	a,_error
      0002BD C3               [12] 1508 	clr	c
      0002BE 95 24            [12] 1509 	subb	a,_previous_error
      0002C0 FC               [12] 1510 	mov	r4,a
      0002C1 E5 2F            [12] 1511 	mov	a,(_error + 1)
      0002C3 95 25            [12] 1512 	subb	a,(_previous_error + 1)
      0002C5 FD               [12] 1513 	mov	r5,a
      0002C6 8C 0A            [24] 1514 	mov	__mulint_PARM_2,r4
      0002C8 8D 0B            [24] 1515 	mov	(__mulint_PARM_2 + 1),r5
      0002CA 85 2C 82         [24] 1516 	mov	dpl,_kd
      0002CD 85 2D 83         [24] 1517 	mov	dph,(_kd + 1)
      0002D0 C0 07            [24] 1518 	push	ar7
      0002D2 C0 06            [24] 1519 	push	ar6
      0002D4 12 04 DA         [24] 1520 	lcall	__mulint
      0002D7 AC 82            [24] 1521 	mov	r4,dpl
      0002D9 AD 83            [24] 1522 	mov	r5,dph
      0002DB D0 06            [24] 1523 	pop	ar6
      0002DD D0 07            [24] 1524 	pop	ar7
      0002DF EC               [12] 1525 	mov	a,r4
      0002E0 2E               [12] 1526 	add	a,r6
      0002E1 FE               [12] 1527 	mov	r6,a
      0002E2 ED               [12] 1528 	mov	a,r5
      0002E3 3F               [12] 1529 	addc	a,r7
      0002E4 FF               [12] 1530 	mov	r7,a
      0002E5 8E 3A            [24] 1531 	mov	_temp_motorpw_alg3,r6
      0002E7 8F 3B            [24] 1532 	mov	(_temp_motorpw_alg3 + 1),r7
      0002E9 75 3C 00         [24] 1533 	mov	(_temp_motorpw_alg3 + 2),#0x00
      0002EC 75 3D 00         [24] 1534 	mov	(_temp_motorpw_alg3 + 3),#0x00
                           000230  1535 	C$worksheet_11.c$47$1$25 ==.
                                   1536 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\worksheet_11.c:47: printf("Algorithm 3, four byte calculation of motorpw is %ld \r\n",temp_motorpw_alg3);
      0002EF C0 3A            [24] 1537 	push	_temp_motorpw_alg3
      0002F1 C0 3B            [24] 1538 	push	(_temp_motorpw_alg3 + 1)
      0002F3 C0 3C            [24] 1539 	push	(_temp_motorpw_alg3 + 2)
      0002F5 C0 3D            [24] 1540 	push	(_temp_motorpw_alg3 + 3)
      0002F7 74 3A            [12] 1541 	mov	a,#___str_3
      0002F9 C0 E0            [24] 1542 	push	acc
      0002FB 74 0C            [12] 1543 	mov	a,#(___str_3 >> 8)
      0002FD C0 E0            [24] 1544 	push	acc
      0002FF 74 80            [12] 1545 	mov	a,#0x80
      000301 C0 E0            [24] 1546 	push	acc
      000303 12 05 89         [24] 1547 	lcall	_printf
      000306 E5 81            [12] 1548 	mov	a,sp
      000308 24 F9            [12] 1549 	add	a,#0xf9
      00030A F5 81            [12] 1550 	mov	sp,a
                           00024D  1551 	C$worksheet_11.c$49$1$25 ==.
                                   1552 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\worksheet_11.c:49: temp_motorpw_alg4 = pw_neut+kp*(int)(error)+kd*(int)(error-previous_error);
      00030C 85 2E 0A         [24] 1553 	mov	__mulint_PARM_2,_error
      00030F 85 2F 0B         [24] 1554 	mov	(__mulint_PARM_2 + 1),(_error + 1)
      000312 85 2A 82         [24] 1555 	mov	dpl,_kp
      000315 85 2B 83         [24] 1556 	mov	dph,(_kp + 1)
      000318 12 04 DA         [24] 1557 	lcall	__mulint
      00031B AE 82            [24] 1558 	mov	r6,dpl
      00031D AF 83            [24] 1559 	mov	r7,dph
      00031F AC 22            [24] 1560 	mov	r4,_pw_neut
      000321 AD 23            [24] 1561 	mov	r5,(_pw_neut + 1)
      000323 EE               [12] 1562 	mov	a,r6
      000324 2C               [12] 1563 	add	a,r4
      000325 FE               [12] 1564 	mov	r6,a
      000326 EF               [12] 1565 	mov	a,r7
      000327 3D               [12] 1566 	addc	a,r5
      000328 FF               [12] 1567 	mov	r7,a
      000329 E5 2E            [12] 1568 	mov	a,_error
      00032B C3               [12] 1569 	clr	c
      00032C 95 24            [12] 1570 	subb	a,_previous_error
      00032E FC               [12] 1571 	mov	r4,a
      00032F E5 2F            [12] 1572 	mov	a,(_error + 1)
      000331 95 25            [12] 1573 	subb	a,(_previous_error + 1)
      000333 FD               [12] 1574 	mov	r5,a
      000334 8C 0A            [24] 1575 	mov	__mulint_PARM_2,r4
      000336 8D 0B            [24] 1576 	mov	(__mulint_PARM_2 + 1),r5
      000338 85 2C 82         [24] 1577 	mov	dpl,_kd
      00033B 85 2D 83         [24] 1578 	mov	dph,(_kd + 1)
      00033E C0 07            [24] 1579 	push	ar7
      000340 C0 06            [24] 1580 	push	ar6
      000342 12 04 DA         [24] 1581 	lcall	__mulint
      000345 AC 82            [24] 1582 	mov	r4,dpl
      000347 AD 83            [24] 1583 	mov	r5,dph
      000349 D0 06            [24] 1584 	pop	ar6
      00034B D0 07            [24] 1585 	pop	ar7
      00034D EC               [12] 1586 	mov	a,r4
      00034E 2E               [12] 1587 	add	a,r6
      00034F FE               [12] 1588 	mov	r6,a
      000350 ED               [12] 1589 	mov	a,r5
      000351 3F               [12] 1590 	addc	a,r7
      000352 FF               [12] 1591 	mov	r7,a
      000353 8E 3E            [24] 1592 	mov	_temp_motorpw_alg4,r6
      000355 8F 3F            [24] 1593 	mov	(_temp_motorpw_alg4 + 1),r7
      000357 75 40 00         [24] 1594 	mov	(_temp_motorpw_alg4 + 2),#0x00
      00035A 75 41 00         [24] 1595 	mov	(_temp_motorpw_alg4 + 3),#0x00
                           00029E  1596 	C$worksheet_11.c$50$1$25 ==.
                                   1597 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\worksheet_11.c:50: printf("Algorithm 4, four byte calculation of motorpw is %ld \r\n",temp_motorpw_alg4);
      00035D C0 3E            [24] 1598 	push	_temp_motorpw_alg4
      00035F C0 3F            [24] 1599 	push	(_temp_motorpw_alg4 + 1)
      000361 C0 40            [24] 1600 	push	(_temp_motorpw_alg4 + 2)
      000363 C0 41            [24] 1601 	push	(_temp_motorpw_alg4 + 3)
      000365 74 72            [12] 1602 	mov	a,#___str_4
      000367 C0 E0            [24] 1603 	push	acc
      000369 74 0C            [12] 1604 	mov	a,#(___str_4 >> 8)
      00036B C0 E0            [24] 1605 	push	acc
      00036D 74 80            [12] 1606 	mov	a,#0x80
      00036F C0 E0            [24] 1607 	push	acc
      000371 12 05 89         [24] 1608 	lcall	_printf
      000374 E5 81            [12] 1609 	mov	a,sp
      000376 24 F9            [12] 1610 	add	a,#0xf9
      000378 F5 81            [12] 1611 	mov	sp,a
                           0002BB  1612 	C$worksheet_11.c$52$1$25 ==.
                                   1613 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\worksheet_11.c:52: temp_motorpw_alg5 = (long)pw_neut+(long)(kp*(error))+(long)(kd*(error-previous_error));
      00037A AC 22            [24] 1614 	mov	r4,_pw_neut
      00037C E5 23            [12] 1615 	mov	a,(_pw_neut + 1)
      00037E FD               [12] 1616 	mov	r5,a
      00037F 33               [12] 1617 	rlc	a
      000380 95 E0            [12] 1618 	subb	a,acc
      000382 FE               [12] 1619 	mov	r6,a
      000383 FF               [12] 1620 	mov	r7,a
      000384 85 2E 0A         [24] 1621 	mov	__mulint_PARM_2,_error
      000387 85 2F 0B         [24] 1622 	mov	(__mulint_PARM_2 + 1),(_error + 1)
      00038A 85 2A 82         [24] 1623 	mov	dpl,_kp
      00038D 85 2B 83         [24] 1624 	mov	dph,(_kp + 1)
      000390 C0 07            [24] 1625 	push	ar7
      000392 C0 06            [24] 1626 	push	ar6
      000394 C0 05            [24] 1627 	push	ar5
      000396 C0 04            [24] 1628 	push	ar4
      000398 12 04 DA         [24] 1629 	lcall	__mulint
      00039B AA 82            [24] 1630 	mov	r2,dpl
      00039D AB 83            [24] 1631 	mov	r3,dph
      00039F D0 04            [24] 1632 	pop	ar4
      0003A1 D0 05            [24] 1633 	pop	ar5
      0003A3 D0 06            [24] 1634 	pop	ar6
      0003A5 D0 07            [24] 1635 	pop	ar7
      0003A7 8A 00            [24] 1636 	mov	ar0,r2
      0003A9 8B 01            [24] 1637 	mov	ar1,r3
      0003AB E4               [12] 1638 	clr	a
      0003AC FA               [12] 1639 	mov	r2,a
      0003AD FB               [12] 1640 	mov	r3,a
      0003AE E8               [12] 1641 	mov	a,r0
      0003AF 2C               [12] 1642 	add	a,r4
      0003B0 FC               [12] 1643 	mov	r4,a
      0003B1 E9               [12] 1644 	mov	a,r1
      0003B2 3D               [12] 1645 	addc	a,r5
      0003B3 FD               [12] 1646 	mov	r5,a
      0003B4 EA               [12] 1647 	mov	a,r2
      0003B5 3E               [12] 1648 	addc	a,r6
      0003B6 FE               [12] 1649 	mov	r6,a
      0003B7 EB               [12] 1650 	mov	a,r3
      0003B8 3F               [12] 1651 	addc	a,r7
      0003B9 FF               [12] 1652 	mov	r7,a
      0003BA E5 2E            [12] 1653 	mov	a,_error
      0003BC C3               [12] 1654 	clr	c
      0003BD 95 24            [12] 1655 	subb	a,_previous_error
      0003BF FA               [12] 1656 	mov	r2,a
      0003C0 E5 2F            [12] 1657 	mov	a,(_error + 1)
      0003C2 95 25            [12] 1658 	subb	a,(_previous_error + 1)
      0003C4 FB               [12] 1659 	mov	r3,a
      0003C5 8A 0A            [24] 1660 	mov	__mulint_PARM_2,r2
      0003C7 8B 0B            [24] 1661 	mov	(__mulint_PARM_2 + 1),r3
      0003C9 85 2C 82         [24] 1662 	mov	dpl,_kd
      0003CC 85 2D 83         [24] 1663 	mov	dph,(_kd + 1)
      0003CF C0 07            [24] 1664 	push	ar7
      0003D1 C0 06            [24] 1665 	push	ar6
      0003D3 C0 05            [24] 1666 	push	ar5
      0003D5 C0 04            [24] 1667 	push	ar4
      0003D7 12 04 DA         [24] 1668 	lcall	__mulint
      0003DA AA 82            [24] 1669 	mov	r2,dpl
      0003DC AB 83            [24] 1670 	mov	r3,dph
      0003DE D0 04            [24] 1671 	pop	ar4
      0003E0 D0 05            [24] 1672 	pop	ar5
      0003E2 D0 06            [24] 1673 	pop	ar6
      0003E4 D0 07            [24] 1674 	pop	ar7
      0003E6 8A 00            [24] 1675 	mov	ar0,r2
      0003E8 8B 01            [24] 1676 	mov	ar1,r3
      0003EA E4               [12] 1677 	clr	a
      0003EB FA               [12] 1678 	mov	r2,a
      0003EC FB               [12] 1679 	mov	r3,a
      0003ED E8               [12] 1680 	mov	a,r0
      0003EE 2C               [12] 1681 	add	a,r4
      0003EF F5 42            [12] 1682 	mov	_temp_motorpw_alg5,a
      0003F1 E9               [12] 1683 	mov	a,r1
      0003F2 3D               [12] 1684 	addc	a,r5
      0003F3 F5 43            [12] 1685 	mov	(_temp_motorpw_alg5 + 1),a
      0003F5 EA               [12] 1686 	mov	a,r2
      0003F6 3E               [12] 1687 	addc	a,r6
      0003F7 F5 44            [12] 1688 	mov	(_temp_motorpw_alg5 + 2),a
      0003F9 EB               [12] 1689 	mov	a,r3
      0003FA 3F               [12] 1690 	addc	a,r7
      0003FB F5 45            [12] 1691 	mov	(_temp_motorpw_alg5 + 3),a
                           00033E  1692 	C$worksheet_11.c$53$1$25 ==.
                                   1693 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\worksheet_11.c:53: printf("Algorithm 5, four byte calculation of motorpw is %ld \r\n",temp_motorpw_alg5);
      0003FD C0 42            [24] 1694 	push	_temp_motorpw_alg5
      0003FF C0 43            [24] 1695 	push	(_temp_motorpw_alg5 + 1)
      000401 C0 44            [24] 1696 	push	(_temp_motorpw_alg5 + 2)
      000403 C0 45            [24] 1697 	push	(_temp_motorpw_alg5 + 3)
      000405 74 AA            [12] 1698 	mov	a,#___str_5
      000407 C0 E0            [24] 1699 	push	acc
      000409 74 0C            [12] 1700 	mov	a,#(___str_5 >> 8)
      00040B C0 E0            [24] 1701 	push	acc
      00040D 74 80            [12] 1702 	mov	a,#0x80
      00040F C0 E0            [24] 1703 	push	acc
      000411 12 05 89         [24] 1704 	lcall	_printf
      000414 E5 81            [12] 1705 	mov	a,sp
      000416 24 F9            [12] 1706 	add	a,#0xf9
      000418 F5 81            [12] 1707 	mov	sp,a
                           00035B  1708 	C$worksheet_11.c$55$1$25 ==.
                                   1709 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\worksheet_11.c:55: temp_motorpw_alg6 = (long)pw_neut+(long)kp*(long)error+(long)kd*(long)(error-previous_error);
      00041A AC 22            [24] 1710 	mov	r4,_pw_neut
      00041C E5 23            [12] 1711 	mov	a,(_pw_neut + 1)
      00041E FD               [12] 1712 	mov	r5,a
      00041F 33               [12] 1713 	rlc	a
      000420 95 E0            [12] 1714 	subb	a,acc
      000422 FE               [12] 1715 	mov	r6,a
      000423 FF               [12] 1716 	mov	r7,a
      000424 A8 2A            [24] 1717 	mov	r0,_kp
      000426 A9 2B            [24] 1718 	mov	r1,(_kp + 1)
      000428 7A 00            [12] 1719 	mov	r2,#0x00
      00042A 7B 00            [12] 1720 	mov	r3,#0x00
      00042C 85 2E 0A         [24] 1721 	mov	__mullong_PARM_2,_error
      00042F E5 2F            [12] 1722 	mov	a,(_error + 1)
      000431 F5 0B            [12] 1723 	mov	(__mullong_PARM_2 + 1),a
      000433 33               [12] 1724 	rlc	a
      000434 95 E0            [12] 1725 	subb	a,acc
      000436 F5 0C            [12] 1726 	mov	(__mullong_PARM_2 + 2),a
      000438 F5 0D            [12] 1727 	mov	(__mullong_PARM_2 + 3),a
      00043A 88 82            [24] 1728 	mov	dpl,r0
      00043C 89 83            [24] 1729 	mov	dph,r1
      00043E 8A F0            [24] 1730 	mov	b,r2
      000440 EB               [12] 1731 	mov	a,r3
      000441 C0 07            [24] 1732 	push	ar7
      000443 C0 06            [24] 1733 	push	ar6
      000445 C0 05            [24] 1734 	push	ar5
      000447 C0 04            [24] 1735 	push	ar4
      000449 12 04 F7         [24] 1736 	lcall	__mullong
      00044C A8 82            [24] 1737 	mov	r0,dpl
      00044E A9 83            [24] 1738 	mov	r1,dph
      000450 AA F0            [24] 1739 	mov	r2,b
      000452 FB               [12] 1740 	mov	r3,a
      000453 D0 04            [24] 1741 	pop	ar4
      000455 D0 05            [24] 1742 	pop	ar5
      000457 D0 06            [24] 1743 	pop	ar6
      000459 D0 07            [24] 1744 	pop	ar7
      00045B E8               [12] 1745 	mov	a,r0
      00045C 2C               [12] 1746 	add	a,r4
      00045D FC               [12] 1747 	mov	r4,a
      00045E E9               [12] 1748 	mov	a,r1
      00045F 3D               [12] 1749 	addc	a,r5
      000460 FD               [12] 1750 	mov	r5,a
      000461 EA               [12] 1751 	mov	a,r2
      000462 3E               [12] 1752 	addc	a,r6
      000463 FE               [12] 1753 	mov	r6,a
      000464 EB               [12] 1754 	mov	a,r3
      000465 3F               [12] 1755 	addc	a,r7
      000466 FF               [12] 1756 	mov	r7,a
      000467 85 2C 4A         [24] 1757 	mov	_main_sloc0_1_0,_kd
      00046A 85 2D 4B         [24] 1758 	mov	(_main_sloc0_1_0 + 1),(_kd + 1)
      00046D E4               [12] 1759 	clr	a
      00046E F5 4C            [12] 1760 	mov	(_main_sloc0_1_0 + 2),a
      000470 F5 4D            [12] 1761 	mov	(_main_sloc0_1_0 + 3),a
      000472 E5 2E            [12] 1762 	mov	a,_error
      000474 C3               [12] 1763 	clr	c
      000475 95 24            [12] 1764 	subb	a,_previous_error
      000477 FA               [12] 1765 	mov	r2,a
      000478 E5 2F            [12] 1766 	mov	a,(_error + 1)
      00047A 95 25            [12] 1767 	subb	a,(_previous_error + 1)
      00047C 8A 0A            [24] 1768 	mov	__mullong_PARM_2,r2
      00047E F5 0B            [12] 1769 	mov	(__mullong_PARM_2 + 1),a
      000480 33               [12] 1770 	rlc	a
      000481 95 E0            [12] 1771 	subb	a,acc
      000483 F5 0C            [12] 1772 	mov	(__mullong_PARM_2 + 2),a
      000485 F5 0D            [12] 1773 	mov	(__mullong_PARM_2 + 3),a
      000487 85 4A 82         [24] 1774 	mov	dpl,_main_sloc0_1_0
      00048A 85 4B 83         [24] 1775 	mov	dph,(_main_sloc0_1_0 + 1)
      00048D 85 4C F0         [24] 1776 	mov	b,(_main_sloc0_1_0 + 2)
      000490 E5 4D            [12] 1777 	mov	a,(_main_sloc0_1_0 + 3)
      000492 C0 07            [24] 1778 	push	ar7
      000494 C0 06            [24] 1779 	push	ar6
      000496 C0 05            [24] 1780 	push	ar5
      000498 C0 04            [24] 1781 	push	ar4
      00049A 12 04 F7         [24] 1782 	lcall	__mullong
      00049D A8 82            [24] 1783 	mov	r0,dpl
      00049F A9 83            [24] 1784 	mov	r1,dph
      0004A1 AA F0            [24] 1785 	mov	r2,b
      0004A3 FB               [12] 1786 	mov	r3,a
      0004A4 D0 04            [24] 1787 	pop	ar4
      0004A6 D0 05            [24] 1788 	pop	ar5
      0004A8 D0 06            [24] 1789 	pop	ar6
      0004AA D0 07            [24] 1790 	pop	ar7
      0004AC E8               [12] 1791 	mov	a,r0
      0004AD 2C               [12] 1792 	add	a,r4
      0004AE F5 46            [12] 1793 	mov	_temp_motorpw_alg6,a
      0004B0 E9               [12] 1794 	mov	a,r1
      0004B1 3D               [12] 1795 	addc	a,r5
      0004B2 F5 47            [12] 1796 	mov	(_temp_motorpw_alg6 + 1),a
      0004B4 EA               [12] 1797 	mov	a,r2
      0004B5 3E               [12] 1798 	addc	a,r6
      0004B6 F5 48            [12] 1799 	mov	(_temp_motorpw_alg6 + 2),a
      0004B8 EB               [12] 1800 	mov	a,r3
      0004B9 3F               [12] 1801 	addc	a,r7
      0004BA F5 49            [12] 1802 	mov	(_temp_motorpw_alg6 + 3),a
                           0003FD  1803 	C$worksheet_11.c$56$1$25 ==.
                                   1804 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab6\worksheet_11.c:56: printf("Algorithm 6, four byte calculation of motorpw is %ld \r\n",temp_motorpw_alg6);
      0004BC C0 46            [24] 1805 	push	_temp_motorpw_alg6
      0004BE C0 47            [24] 1806 	push	(_temp_motorpw_alg6 + 1)
      0004C0 C0 48            [24] 1807 	push	(_temp_motorpw_alg6 + 2)
      0004C2 C0 49            [24] 1808 	push	(_temp_motorpw_alg6 + 3)
      0004C4 74 E2            [12] 1809 	mov	a,#___str_6
      0004C6 C0 E0            [24] 1810 	push	acc
      0004C8 74 0C            [12] 1811 	mov	a,#(___str_6 >> 8)
      0004CA C0 E0            [24] 1812 	push	acc
      0004CC 74 80            [12] 1813 	mov	a,#0x80
      0004CE C0 E0            [24] 1814 	push	acc
      0004D0 12 05 89         [24] 1815 	lcall	_printf
      0004D3 E5 81            [12] 1816 	mov	a,sp
      0004D5 24 F9            [12] 1817 	add	a,#0xf9
      0004D7 F5 81            [12] 1818 	mov	sp,a
                           00041A  1819 	C$worksheet_11.c$57$1$25 ==.
                           00041A  1820 	XG$main$0$0 ==.
      0004D9 22               [24] 1821 	ret
                                   1822 	.area CSEG    (CODE)
                                   1823 	.area CONST   (CODE)
                           000000  1824 Fworksheet_11$__str_0$0$0 == .
      000B9D                       1825 ___str_0:
      000B9D 54 68 65 20 74 77 6F  1826 	.ascii "The two byte calculation of motorpw is %d "
             20 62 79 74 65 20 63
             61 6C 63 75 6C 61 74
             69 6F 6E 20 6F 66 20
             6D 6F 74 6F 72 70 77
             20 69 73 20 25 64 20
      000BC7 0D                    1827 	.db 0x0D
      000BC8 0A                    1828 	.db 0x0A
      000BC9 00                    1829 	.db 0x00
                           00002D  1830 Fworksheet_11$__str_1$0$0 == .
      000BCA                       1831 ___str_1:
      000BCA 41 6C 67 6F 72 69 74  1832 	.ascii "Algorithm 1, four byte calculation of motorpw is %ld "
             68 6D 20 31 2C 20 66
             6F 75 72 20 62 79 74
             65 20 63 61 6C 63 75
             6C 61 74 69 6F 6E 20
             6F 66 20 6D 6F 74 6F
             72 70 77 20 69 73 20
             25 6C 64 20
      000BFF 0D                    1833 	.db 0x0D
      000C00 0A                    1834 	.db 0x0A
      000C01 00                    1835 	.db 0x00
                           000065  1836 Fworksheet_11$__str_2$0$0 == .
      000C02                       1837 ___str_2:
      000C02 41 6C 67 6F 72 69 74  1838 	.ascii "Algorithm 2, four byte calculation of motorpw is %ld "
             68 6D 20 32 2C 20 66
             6F 75 72 20 62 79 74
             65 20 63 61 6C 63 75
             6C 61 74 69 6F 6E 20
             6F 66 20 6D 6F 74 6F
             72 70 77 20 69 73 20
             25 6C 64 20
      000C37 0D                    1839 	.db 0x0D
      000C38 0A                    1840 	.db 0x0A
      000C39 00                    1841 	.db 0x00
                           00009D  1842 Fworksheet_11$__str_3$0$0 == .
      000C3A                       1843 ___str_3:
      000C3A 41 6C 67 6F 72 69 74  1844 	.ascii "Algorithm 3, four byte calculation of motorpw is %ld "
             68 6D 20 33 2C 20 66
             6F 75 72 20 62 79 74
             65 20 63 61 6C 63 75
             6C 61 74 69 6F 6E 20
             6F 66 20 6D 6F 74 6F
             72 70 77 20 69 73 20
             25 6C 64 20
      000C6F 0D                    1845 	.db 0x0D
      000C70 0A                    1846 	.db 0x0A
      000C71 00                    1847 	.db 0x00
                           0000D5  1848 Fworksheet_11$__str_4$0$0 == .
      000C72                       1849 ___str_4:
      000C72 41 6C 67 6F 72 69 74  1850 	.ascii "Algorithm 4, four byte calculation of motorpw is %ld "
             68 6D 20 34 2C 20 66
             6F 75 72 20 62 79 74
             65 20 63 61 6C 63 75
             6C 61 74 69 6F 6E 20
             6F 66 20 6D 6F 74 6F
             72 70 77 20 69 73 20
             25 6C 64 20
      000CA7 0D                    1851 	.db 0x0D
      000CA8 0A                    1852 	.db 0x0A
      000CA9 00                    1853 	.db 0x00
                           00010D  1854 Fworksheet_11$__str_5$0$0 == .
      000CAA                       1855 ___str_5:
      000CAA 41 6C 67 6F 72 69 74  1856 	.ascii "Algorithm 5, four byte calculation of motorpw is %ld "
             68 6D 20 35 2C 20 66
             6F 75 72 20 62 79 74
             65 20 63 61 6C 63 75
             6C 61 74 69 6F 6E 20
             6F 66 20 6D 6F 74 6F
             72 70 77 20 69 73 20
             25 6C 64 20
      000CDF 0D                    1857 	.db 0x0D
      000CE0 0A                    1858 	.db 0x0A
      000CE1 00                    1859 	.db 0x00
                           000145  1860 Fworksheet_11$__str_6$0$0 == .
      000CE2                       1861 ___str_6:
      000CE2 41 6C 67 6F 72 69 74  1862 	.ascii "Algorithm 6, four byte calculation of motorpw is %ld "
             68 6D 20 36 2C 20 66
             6F 75 72 20 62 79 74
             65 20 63 61 6C 63 75
             6C 61 74 69 6F 6E 20
             6F 66 20 6D 6F 74 6F
             72 70 77 20 69 73 20
             25 6C 64 20
      000D17 0D                    1863 	.db 0x0D
      000D18 0A                    1864 	.db 0x0A
      000D19 00                    1865 	.db 0x00
                                   1866 	.area XINIT   (CODE)
                                   1867 	.area CABS    (ABS,CODE)
