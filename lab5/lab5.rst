                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (Apr  5 2014) (MINGW32)
                                      4 ; This file was generated Mon May 04 20:03:03 2015
                                      5 ;--------------------------------------------------------
                                      6 	.module lab5
                                      7 	.optsdcc -mmcs51 --model-small
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _main
                                     13 	.globl _read_keypad
                                     14 	.globl _strlen
                                     15 	.globl _putchar
                                     16 	.globl _getchar
                                     17 	.globl _vsprintf
                                     18 	.globl _Sys_Init
                                     19 	.globl _UART0_Init
                                     20 	.globl _SYSCLK_Init
                                     21 	.globl _run
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
                                    307 	.globl _Update_Value_PARM_4
                                    308 	.globl _Update_Value_PARM_3
                                    309 	.globl _Update_Value_PARM_2
                                    310 	.globl _avg_gy
                                    311 	.globl _avg_gx
                                    312 	.globl _kdx
                                    313 	.globl _kdy
                                    314 	.globl _ks
                                    315 	.globl _lcd_count
                                    316 	.globl _count
                                    317 	.globl _range
                                    318 	.globl _new_lcd
                                    319 	.globl _new_accels
                                    320 	.globl _SERVO_MIN
                                    321 	.globl _SERVO_MAX
                                    322 	.globl _SERVO_PW
                                    323 	.globl _PW_LEFT
                                    324 	.globl _PW_RIGHT
                                    325 	.globl _PW_CENTER
                                    326 	.globl _i2c_read_data_PARM_4
                                    327 	.globl _i2c_read_data_PARM_3
                                    328 	.globl _i2c_read_data_PARM_2
                                    329 	.globl _i2c_write_data_PARM_4
                                    330 	.globl _i2c_write_data_PARM_3
                                    331 	.globl _i2c_write_data_PARM_2
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
                                    344 	.globl _PCA_ISR
                                    345 	.globl _wait
                                    346 	.globl _start
                                    347 	.globl _set_gains
                                    348 	.globl _XBR0_Init
                                    349 	.globl _SMB_Init
                                    350 	.globl _Update_Value
                                    351 	.globl _read_accels
                                    352 	.globl _set_servo_PWM
                                    353 	.globl _PCA_Init
                                    354 	.globl _updateLCD
                                    355 	.globl _set_drive_PWM
                                    356 	.globl _Interrupt_Init
                                    357 	.globl _Port_Init
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
                           0000B7   938 G$run$0$0 == 0x00b7
                           0000B7   939 _run	=	0x00b7
                                    940 ;--------------------------------------------------------
                                    941 ; overlayable register banks
                                    942 ;--------------------------------------------------------
                                    943 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        944 	.ds 8
                                    945 ;--------------------------------------------------------
                                    946 ; internal ram data
                                    947 ;--------------------------------------------------------
                                    948 	.area DSEG    (DATA)
                           000000   949 Llab5.lcd_clear$NumBytes$1$77==.
      000022                        950 _lcd_clear_NumBytes_1_77:
      000022                        951 	.ds 1
                           000001   952 Llab5.lcd_clear$Cmd$1$77==.
      000023                        953 _lcd_clear_Cmd_1_77:
      000023                        954 	.ds 2
                           000003   955 Llab5.read_keypad$Data$1$78==.
      000025                        956 _read_keypad_Data_1_78:
      000025                        957 	.ds 2
                           000005   958 Llab5.i2c_write_data$start_reg$1$97==.
      000027                        959 _i2c_write_data_PARM_2:
      000027                        960 	.ds 1
                           000006   961 Llab5.i2c_write_data$buffer$1$97==.
      000028                        962 _i2c_write_data_PARM_3:
      000028                        963 	.ds 3
                           000009   964 Llab5.i2c_write_data$num_bytes$1$97==.
      00002B                        965 _i2c_write_data_PARM_4:
      00002B                        966 	.ds 1
                           00000A   967 Llab5.i2c_read_data$start_reg$1$99==.
      00002C                        968 _i2c_read_data_PARM_2:
      00002C                        969 	.ds 1
                           00000B   970 Llab5.i2c_read_data$buffer$1$99==.
      00002D                        971 _i2c_read_data_PARM_3:
      00002D                        972 	.ds 3
                           00000E   973 Llab5.i2c_read_data$num_bytes$1$99==.
      000030                        974 _i2c_read_data_PARM_4:
      000030                        975 	.ds 1
                           00000F   976 Llab5.Accel_Init$Data2$1$103==.
      000031                        977 _Accel_Init_Data2_1_103:
      000031                        978 	.ds 1
                           000010   979 G$PW_CENTER$0$0==.
      000032                        980 _PW_CENTER::
      000032                        981 	.ds 2
                           000012   982 G$PW_RIGHT$0$0==.
      000034                        983 _PW_RIGHT::
      000034                        984 	.ds 2
                           000014   985 G$PW_LEFT$0$0==.
      000036                        986 _PW_LEFT::
      000036                        987 	.ds 2
                           000016   988 G$SERVO_PW$0$0==.
      000038                        989 _SERVO_PW::
      000038                        990 	.ds 2
                           000018   991 G$SERVO_MAX$0$0==.
      00003A                        992 _SERVO_MAX::
      00003A                        993 	.ds 2
                           00001A   994 G$SERVO_MIN$0$0==.
      00003C                        995 _SERVO_MIN::
      00003C                        996 	.ds 2
                           00001C   997 G$new_accels$0$0==.
      00003E                        998 _new_accels::
      00003E                        999 	.ds 1
                           00001D  1000 G$new_lcd$0$0==.
      00003F                       1001 _new_lcd::
      00003F                       1002 	.ds 1
                           00001E  1003 G$range$0$0==.
      000040                       1004 _range::
      000040                       1005 	.ds 2
                           000020  1006 G$count$0$0==.
      000042                       1007 _count::
      000042                       1008 	.ds 1
                           000021  1009 G$lcd_count$0$0==.
      000043                       1010 _lcd_count::
      000043                       1011 	.ds 1
                           000022  1012 G$ks$0$0==.
      000044                       1013 _ks::
      000044                       1014 	.ds 1
                           000023  1015 G$kdy$0$0==.
      000045                       1016 _kdy::
      000045                       1017 	.ds 1
                           000024  1018 G$kdx$0$0==.
      000046                       1019 _kdx::
      000046                       1020 	.ds 1
                           000025  1021 G$avg_gx$0$0==.
      000047                       1022 _avg_gx::
      000047                       1023 	.ds 2
                           000027  1024 G$avg_gy$0$0==.
      000049                       1025 _avg_gy::
      000049                       1026 	.ds 2
                           000029  1027 Llab5.Update_Value$incr$1$139==.
      00004B                       1028 _Update_Value_PARM_2:
      00004B                       1029 	.ds 1
                           00002A  1030 Llab5.Update_Value$maxval$1$139==.
      00004C                       1031 _Update_Value_PARM_3:
      00004C                       1032 	.ds 2
                           00002C  1033 Llab5.Update_Value$minval$1$139==.
      00004E                       1034 _Update_Value_PARM_4:
      00004E                       1035 	.ds 2
                                   1036 ;--------------------------------------------------------
                                   1037 ; overlayable items in internal ram 
                                   1038 ;--------------------------------------------------------
                                   1039 	.area	OSEG    (OVR,DATA)
                                   1040 	.area	OSEG    (OVR,DATA)
                                   1041 	.area	OSEG    (OVR,DATA)
                                   1042 	.area	OSEG    (OVR,DATA)
                                   1043 	.area	OSEG    (OVR,DATA)
                                   1044 	.area	OSEG    (OVR,DATA)
                                   1045 	.area	OSEG    (OVR,DATA)
                                   1046 	.area	OSEG    (OVR,DATA)
                                   1047 ;--------------------------------------------------------
                                   1048 ; Stack segment in internal ram 
                                   1049 ;--------------------------------------------------------
                                   1050 	.area	SSEG
      00006A                       1051 __start__stack:
      00006A                       1052 	.ds	1
                                   1053 
                                   1054 ;--------------------------------------------------------
                                   1055 ; indirectly addressable internal ram data
                                   1056 ;--------------------------------------------------------
                                   1057 	.area ISEG    (DATA)
                                   1058 ;--------------------------------------------------------
                                   1059 ; absolute internal ram data
                                   1060 ;--------------------------------------------------------
                                   1061 	.area IABS    (ABS,DATA)
                                   1062 	.area IABS    (ABS,DATA)
                                   1063 ;--------------------------------------------------------
                                   1064 ; bit data
                                   1065 ;--------------------------------------------------------
                                   1066 	.area BSEG    (BIT)
                                   1067 ;--------------------------------------------------------
                                   1068 ; paged external ram data
                                   1069 ;--------------------------------------------------------
                                   1070 	.area PSEG    (PAG,XDATA)
                                   1071 ;--------------------------------------------------------
                                   1072 ; external ram data
                                   1073 ;--------------------------------------------------------
                                   1074 	.area XSEG    (XDATA)
                           000000  1075 Llab5.lcd_print$text$1$73==.
      000001                       1076 _lcd_print_text_1_73:
      000001                       1077 	.ds 80
                                   1078 ;--------------------------------------------------------
                                   1079 ; absolute external ram data
                                   1080 ;--------------------------------------------------------
                                   1081 	.area XABS    (ABS,XDATA)
                                   1082 ;--------------------------------------------------------
                                   1083 ; external initialized ram data
                                   1084 ;--------------------------------------------------------
                                   1085 	.area XISEG   (XDATA)
                                   1086 	.area HOME    (CODE)
                                   1087 	.area GSINIT0 (CODE)
                                   1088 	.area GSINIT1 (CODE)
                                   1089 	.area GSINIT2 (CODE)
                                   1090 	.area GSINIT3 (CODE)
                                   1091 	.area GSINIT4 (CODE)
                                   1092 	.area GSINIT5 (CODE)
                                   1093 	.area GSINIT  (CODE)
                                   1094 	.area GSFINAL (CODE)
                                   1095 	.area CSEG    (CODE)
                                   1096 ;--------------------------------------------------------
                                   1097 ; interrupt vector 
                                   1098 ;--------------------------------------------------------
                                   1099 	.area HOME    (CODE)
      000000                       1100 __interrupt_vect:
      000000 02 00 51         [24] 1101 	ljmp	__sdcc_gsinit_startup
      000003 32               [24] 1102 	reti
      000004                       1103 	.ds	7
      00000B 32               [24] 1104 	reti
      00000C                       1105 	.ds	7
      000013 32               [24] 1106 	reti
      000014                       1107 	.ds	7
      00001B 32               [24] 1108 	reti
      00001C                       1109 	.ds	7
      000023 32               [24] 1110 	reti
      000024                       1111 	.ds	7
      00002B 32               [24] 1112 	reti
      00002C                       1113 	.ds	7
      000033 32               [24] 1114 	reti
      000034                       1115 	.ds	7
      00003B 32               [24] 1116 	reti
      00003C                       1117 	.ds	7
      000043 32               [24] 1118 	reti
      000044                       1119 	.ds	7
      00004B 02 05 F6         [24] 1120 	ljmp	_PCA_ISR
                                   1121 ;--------------------------------------------------------
                                   1122 ; global & static initialisations
                                   1123 ;--------------------------------------------------------
                                   1124 	.area HOME    (CODE)
                                   1125 	.area GSINIT  (CODE)
                                   1126 	.area GSFINAL (CODE)
                                   1127 	.area GSINIT  (CODE)
                                   1128 	.globl __sdcc_gsinit_startup
                                   1129 	.globl __sdcc_program_startup
                                   1130 	.globl __start__stack
                                   1131 	.globl __mcs51_genXINIT
                                   1132 	.globl __mcs51_genXRAMCLEAR
                                   1133 	.globl __mcs51_genRAMCLEAR
                           000000  1134 	C$lab5.c$36$1$140 ==.
                                   1135 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:36: unsigned int PW_CENTER = 2685;
      0000AA 75 32 7D         [24] 1136 	mov	_PW_CENTER,#0x7D
      0000AD 75 33 0A         [24] 1137 	mov	(_PW_CENTER + 1),#0x0A
                           000006  1138 	C$lab5.c$37$1$140 ==.
                                   1139 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:37: unsigned int PW_RIGHT = 2235;
      0000B0 75 34 BB         [24] 1140 	mov	_PW_RIGHT,#0xBB
      0000B3 75 35 08         [24] 1141 	mov	(_PW_RIGHT + 1),#0x08
                           00000C  1142 	C$lab5.c$38$1$140 ==.
                                   1143 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:38: unsigned int PW_LEFT = 3185;
      0000B6 75 36 71         [24] 1144 	mov	_PW_LEFT,#0x71
      0000B9 75 37 0C         [24] 1145 	mov	(_PW_LEFT + 1),#0x0C
                           000012  1146 	C$lab5.c$39$1$140 ==.
                                   1147 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:39: unsigned int SERVO_PW = 2765;
      0000BC 75 38 CD         [24] 1148 	mov	_SERVO_PW,#0xCD
      0000BF 75 39 0A         [24] 1149 	mov	(_SERVO_PW + 1),#0x0A
                           000018  1150 	C$lab5.c$40$1$140 ==.
                                   1151 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:40: unsigned int SERVO_MAX= 3503;
      0000C2 75 3A AF         [24] 1152 	mov	_SERVO_MAX,#0xAF
      0000C5 75 3B 0D         [24] 1153 	mov	(_SERVO_MAX + 1),#0x0D
                           00001E  1154 	C$lab5.c$41$1$140 ==.
                                   1155 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:41: unsigned int SERVO_MIN= 2028;
      0000C8 75 3C EC         [24] 1156 	mov	_SERVO_MIN,#0xEC
      0000CB 75 3D 07         [24] 1157 	mov	(_SERVO_MIN + 1),#0x07
                           000024  1158 	C$lab5.c$42$1$140 ==.
                                   1159 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:42: unsigned char new_accels = 0; // flag for count of accel timing
      0000CE 75 3E 00         [24] 1160 	mov	_new_accels,#0x00
                           000027  1161 	C$lab5.c$43$1$140 ==.
                                   1162 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:43: unsigned char new_lcd = 0; // flag for count of LCD timing
      0000D1 75 3F 00         [24] 1163 	mov	_new_lcd,#0x00
                                   1164 	.area GSFINAL (CODE)
      0000D4 02 00 4E         [24] 1165 	ljmp	__sdcc_program_startup
                                   1166 ;--------------------------------------------------------
                                   1167 ; Home
                                   1168 ;--------------------------------------------------------
                                   1169 	.area HOME    (CODE)
                                   1170 	.area HOME    (CODE)
      00004E                       1171 __sdcc_program_startup:
      00004E 02 05 AD         [24] 1172 	ljmp	_main
                                   1173 ;	return from main will return to caller
                                   1174 ;--------------------------------------------------------
                                   1175 ; code
                                   1176 ;--------------------------------------------------------
                                   1177 	.area CSEG    (CODE)
                                   1178 ;------------------------------------------------------------
                                   1179 ;Allocation info for local variables in function 'SYSCLK_Init'
                                   1180 ;------------------------------------------------------------
                                   1181 ;i                         Allocated to registers 
                                   1182 ;------------------------------------------------------------
                           000000  1183 	G$SYSCLK_Init$0$0 ==.
                           000000  1184 	C$c8051_SDCC.h$42$0$0 ==.
                                   1185 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:42: void SYSCLK_Init(void)
                                   1186 ;	-----------------------------------------
                                   1187 ;	 function SYSCLK_Init
                                   1188 ;	-----------------------------------------
      0000D7                       1189 _SYSCLK_Init:
                           000007  1190 	ar7 = 0x07
                           000006  1191 	ar6 = 0x06
                           000005  1192 	ar5 = 0x05
                           000004  1193 	ar4 = 0x04
                           000003  1194 	ar3 = 0x03
                           000002  1195 	ar2 = 0x02
                           000001  1196 	ar1 = 0x01
                           000000  1197 	ar0 = 0x00
                           000000  1198 	C$c8051_SDCC.h$46$1$2 ==.
                                   1199 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:46: OSCXCN = 0x67;                      // start external oscillator with
      0000D7 75 B1 67         [24] 1200 	mov	_OSCXCN,#0x67
                           000003  1201 	C$c8051_SDCC.h$49$1$2 ==.
                                   1202 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:49: for (i=0; i < 256; i++);            // wait for oscillator to start
      0000DA 7E 00            [12] 1203 	mov	r6,#0x00
      0000DC 7F 01            [12] 1204 	mov	r7,#0x01
      0000DE                       1205 00107$:
      0000DE 1E               [12] 1206 	dec	r6
      0000DF BE FF 01         [24] 1207 	cjne	r6,#0xFF,00121$
      0000E2 1F               [12] 1208 	dec	r7
      0000E3                       1209 00121$:
      0000E3 EE               [12] 1210 	mov	a,r6
      0000E4 4F               [12] 1211 	orl	a,r7
      0000E5 70 F7            [24] 1212 	jnz	00107$
                           000010  1213 	C$c8051_SDCC.h$51$1$2 ==.
                                   1214 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:51: while (!(OSCXCN & 0x80));           // Wait for crystal osc. to settle
      0000E7                       1215 00102$:
      0000E7 E5 B1            [12] 1216 	mov	a,_OSCXCN
      0000E9 30 E7 FB         [24] 1217 	jnb	acc.7,00102$
                           000015  1218 	C$c8051_SDCC.h$53$1$2 ==.
                                   1219 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:53: OSCICN = 0x88;                      // select external oscillator as SYSCLK
      0000EC 75 B2 88         [24] 1220 	mov	_OSCICN,#0x88
                           000018  1221 	C$c8051_SDCC.h$56$1$2 ==.
                           000018  1222 	XG$SYSCLK_Init$0$0 ==.
      0000EF 22               [24] 1223 	ret
                                   1224 ;------------------------------------------------------------
                                   1225 ;Allocation info for local variables in function 'UART0_Init'
                                   1226 ;------------------------------------------------------------
                           000019  1227 	G$UART0_Init$0$0 ==.
                           000019  1228 	C$c8051_SDCC.h$64$1$2 ==.
                                   1229 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:64: void UART0_Init(void)
                                   1230 ;	-----------------------------------------
                                   1231 ;	 function UART0_Init
                                   1232 ;	-----------------------------------------
      0000F0                       1233 _UART0_Init:
                           000019  1234 	C$c8051_SDCC.h$66$1$4 ==.
                                   1235 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:66: SCON0  = 0x50;                      // SCON0: mode 1, 8-bit UART, enable RX
      0000F0 75 98 50         [24] 1236 	mov	_SCON0,#0x50
                           00001C  1237 	C$c8051_SDCC.h$67$1$4 ==.
                                   1238 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:67: TMOD   = 0x20;                      // TMOD: timer 1, mode 2, 8-bit reload
      0000F3 75 89 20         [24] 1239 	mov	_TMOD,#0x20
                           00001F  1240 	C$c8051_SDCC.h$68$1$4 ==.
                                   1241 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:68: TH1    = -(SYSCLK/BAUDRATE/16);     // set Timer1 reload value for baudrate
      0000F6 75 8D DC         [24] 1242 	mov	_TH1,#0xDC
                           000022  1243 	C$c8051_SDCC.h$69$1$4 ==.
                                   1244 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:69: TR1    = 1;                         // start Timer1
      0000F9 D2 8E            [12] 1245 	setb	_TR1
                           000024  1246 	C$c8051_SDCC.h$70$1$4 ==.
                                   1247 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:70: CKCON |= 0x10;                      // Timer1 uses SYSCLK as time base
      0000FB 43 8E 10         [24] 1248 	orl	_CKCON,#0x10
                           000027  1249 	C$c8051_SDCC.h$71$1$4 ==.
                                   1250 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:71: PCON  |= 0x80;                      // SMOD00 = 1 (disable baud rate 
      0000FE 43 87 80         [24] 1251 	orl	_PCON,#0x80
                           00002A  1252 	C$c8051_SDCC.h$73$1$4 ==.
                                   1253 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:73: TI0    = 1;                         // Indicate TX0 ready
      000101 D2 99            [12] 1254 	setb	_TI0
                           00002C  1255 	C$c8051_SDCC.h$74$1$4 ==.
                                   1256 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:74: P0MDOUT |= 0x01;                    // Set TX0 to push/pull
      000103 43 A4 01         [24] 1257 	orl	_P0MDOUT,#0x01
                           00002F  1258 	C$c8051_SDCC.h$75$1$4 ==.
                           00002F  1259 	XG$UART0_Init$0$0 ==.
      000106 22               [24] 1260 	ret
                                   1261 ;------------------------------------------------------------
                                   1262 ;Allocation info for local variables in function 'Sys_Init'
                                   1263 ;------------------------------------------------------------
                           000030  1264 	G$Sys_Init$0$0 ==.
                           000030  1265 	C$c8051_SDCC.h$83$1$4 ==.
                                   1266 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:83: void Sys_Init(void)
                                   1267 ;	-----------------------------------------
                                   1268 ;	 function Sys_Init
                                   1269 ;	-----------------------------------------
      000107                       1270 _Sys_Init:
                           000030  1271 	C$c8051_SDCC.h$85$1$6 ==.
                                   1272 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:85: WDTCN = 0xde;			// disable watchdog timer
      000107 75 FF DE         [24] 1273 	mov	_WDTCN,#0xDE
                           000033  1274 	C$c8051_SDCC.h$86$1$6 ==.
                                   1275 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:86: WDTCN = 0xad;
      00010A 75 FF AD         [24] 1276 	mov	_WDTCN,#0xAD
                           000036  1277 	C$c8051_SDCC.h$88$1$6 ==.
                                   1278 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:88: SYSCLK_Init();			// initialize oscillator
      00010D 12 00 D7         [24] 1279 	lcall	_SYSCLK_Init
                           000039  1280 	C$c8051_SDCC.h$89$1$6 ==.
                                   1281 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:89: UART0_Init();			// initialize UART0
      000110 12 00 F0         [24] 1282 	lcall	_UART0_Init
                           00003C  1283 	C$c8051_SDCC.h$91$1$6 ==.
                                   1284 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:91: XBR0 |= 0x04;
      000113 43 E1 04         [24] 1285 	orl	_XBR0,#0x04
                           00003F  1286 	C$c8051_SDCC.h$92$1$6 ==.
                                   1287 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:92: XBR2 |= 0x40;                    	// Enable crossbar and weak pull-ups
      000116 43 E3 40         [24] 1288 	orl	_XBR2,#0x40
                           000042  1289 	C$c8051_SDCC.h$93$1$6 ==.
                           000042  1290 	XG$Sys_Init$0$0 ==.
      000119 22               [24] 1291 	ret
                                   1292 ;------------------------------------------------------------
                                   1293 ;Allocation info for local variables in function 'putchar'
                                   1294 ;------------------------------------------------------------
                                   1295 ;c                         Allocated to registers r7 
                                   1296 ;------------------------------------------------------------
                           000043  1297 	G$putchar$0$0 ==.
                           000043  1298 	C$c8051_SDCC.h$98$1$6 ==.
                                   1299 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:98: void putchar(char c)
                                   1300 ;	-----------------------------------------
                                   1301 ;	 function putchar
                                   1302 ;	-----------------------------------------
      00011A                       1303 _putchar:
      00011A AF 82            [24] 1304 	mov	r7,dpl
                           000045  1305 	C$c8051_SDCC.h$100$1$8 ==.
                                   1306 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:100: while (!TI0); 
      00011C                       1307 00101$:
                           000045  1308 	C$c8051_SDCC.h$101$1$8 ==.
                                   1309 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:101: TI0 = 0;
      00011C 10 99 02         [24] 1310 	jbc	_TI0,00112$
      00011F 80 FB            [24] 1311 	sjmp	00101$
      000121                       1312 00112$:
                           00004A  1313 	C$c8051_SDCC.h$102$1$8 ==.
                                   1314 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:102: SBUF0 = c;
      000121 8F 99            [24] 1315 	mov	_SBUF0,r7
                           00004C  1316 	C$c8051_SDCC.h$103$1$8 ==.
                           00004C  1317 	XG$putchar$0$0 ==.
      000123 22               [24] 1318 	ret
                                   1319 ;------------------------------------------------------------
                                   1320 ;Allocation info for local variables in function 'getchar'
                                   1321 ;------------------------------------------------------------
                                   1322 ;c                         Allocated to registers 
                                   1323 ;------------------------------------------------------------
                           00004D  1324 	G$getchar$0$0 ==.
                           00004D  1325 	C$c8051_SDCC.h$108$1$8 ==.
                                   1326 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:108: char getchar(void)
                                   1327 ;	-----------------------------------------
                                   1328 ;	 function getchar
                                   1329 ;	-----------------------------------------
      000124                       1330 _getchar:
                           00004D  1331 	C$c8051_SDCC.h$111$1$10 ==.
                                   1332 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:111: while (!RI0);
      000124                       1333 00101$:
                           00004D  1334 	C$c8051_SDCC.h$112$1$10 ==.
                                   1335 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:112: RI0 = 0;
      000124 10 98 02         [24] 1336 	jbc	_RI0,00112$
      000127 80 FB            [24] 1337 	sjmp	00101$
      000129                       1338 00112$:
                           000052  1339 	C$c8051_SDCC.h$113$1$10 ==.
                                   1340 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:113: c = SBUF0;
      000129 85 99 82         [24] 1341 	mov	dpl,_SBUF0
                           000055  1342 	C$c8051_SDCC.h$114$1$10 ==.
                                   1343 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:114: putchar(c);                          // echo to terminal
      00012C 12 01 1A         [24] 1344 	lcall	_putchar
                           000058  1345 	C$c8051_SDCC.h$115$1$10 ==.
                                   1346 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:115: return SBUF0;
      00012F 85 99 82         [24] 1347 	mov	dpl,_SBUF0
                           00005B  1348 	C$c8051_SDCC.h$116$1$10 ==.
                           00005B  1349 	XG$getchar$0$0 ==.
      000132 22               [24] 1350 	ret
                                   1351 ;------------------------------------------------------------
                                   1352 ;Allocation info for local variables in function 'lcd_print'
                                   1353 ;------------------------------------------------------------
                                   1354 ;fmt                       Allocated to stack - _bp -5
                                   1355 ;len                       Allocated to registers r6 
                                   1356 ;i                         Allocated to registers 
                                   1357 ;ap                        Allocated to registers 
                                   1358 ;text                      Allocated with name '_lcd_print_text_1_73'
                                   1359 ;------------------------------------------------------------
                           00005C  1360 	G$lcd_print$0$0 ==.
                           00005C  1361 	C$i2c.h$81$1$10 ==.
                                   1362 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:81: void lcd_print(const char *fmt, ...)
                                   1363 ;	-----------------------------------------
                                   1364 ;	 function lcd_print
                                   1365 ;	-----------------------------------------
      000133                       1366 _lcd_print:
      000133 C0 0F            [24] 1367 	push	_bp
      000135 85 81 0F         [24] 1368 	mov	_bp,sp
                           000061  1369 	C$i2c.h$87$1$73 ==.
                                   1370 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:87: if ( strlen(fmt) <= 0 ) return;   //If there is no data to print, return
      000138 E5 0F            [12] 1371 	mov	a,_bp
      00013A 24 FB            [12] 1372 	add	a,#0xfb
      00013C F8               [12] 1373 	mov	r0,a
      00013D 86 82            [24] 1374 	mov	dpl,@r0
      00013F 08               [12] 1375 	inc	r0
      000140 86 83            [24] 1376 	mov	dph,@r0
      000142 08               [12] 1377 	inc	r0
      000143 86 F0            [24] 1378 	mov	b,@r0
      000145 12 0E 18         [24] 1379 	lcall	_strlen
      000148 E5 82            [12] 1380 	mov	a,dpl
      00014A 85 83 F0         [24] 1381 	mov	b,dph
      00014D 45 F0            [12] 1382 	orl	a,b
      00014F 70 02            [24] 1383 	jnz	00102$
      000151 80 62            [24] 1384 	sjmp	00109$
      000153                       1385 00102$:
                           00007C  1386 	C$i2c.h$89$2$74 ==.
                                   1387 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:89: va_start(ap, fmt);
      000153 E5 0F            [12] 1388 	mov	a,_bp
      000155 24 FB            [12] 1389 	add	a,#0xFB
      000157 FF               [12] 1390 	mov	r7,a
      000158 8F 0B            [24] 1391 	mov	_vsprintf_PARM_3,r7
                           000083  1392 	C$i2c.h$90$1$73 ==.
                                   1393 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:90: vsprintf(text, fmt, ap);
      00015A E5 0F            [12] 1394 	mov	a,_bp
      00015C 24 FB            [12] 1395 	add	a,#0xfb
      00015E F8               [12] 1396 	mov	r0,a
      00015F 86 08            [24] 1397 	mov	_vsprintf_PARM_2,@r0
      000161 08               [12] 1398 	inc	r0
      000162 86 09            [24] 1399 	mov	(_vsprintf_PARM_2 + 1),@r0
      000164 08               [12] 1400 	inc	r0
      000165 86 0A            [24] 1401 	mov	(_vsprintf_PARM_2 + 2),@r0
      000167 90 00 01         [24] 1402 	mov	dptr,#_lcd_print_text_1_73
      00016A 75 F0 00         [24] 1403 	mov	b,#0x00
      00016D 12 07 DA         [24] 1404 	lcall	_vsprintf
                           000099  1405 	C$i2c.h$93$1$73 ==.
                                   1406 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:93: len = strlen(text);
      000170 90 00 01         [24] 1407 	mov	dptr,#_lcd_print_text_1_73
      000173 75 F0 00         [24] 1408 	mov	b,#0x00
      000176 12 0E 18         [24] 1409 	lcall	_strlen
      000179 AE 82            [24] 1410 	mov	r6,dpl
                           0000A4  1411 	C$i2c.h$94$1$73 ==.
                                   1412 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:94: for(i=0; i<len; i++)
      00017B 7F 00            [12] 1413 	mov	r7,#0x00
      00017D                       1414 00107$:
      00017D C3               [12] 1415 	clr	c
      00017E EF               [12] 1416 	mov	a,r7
      00017F 9E               [12] 1417 	subb	a,r6
      000180 50 1F            [24] 1418 	jnc	00105$
                           0000AB  1419 	C$i2c.h$96$2$76 ==.
                                   1420 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:96: if(text[i] == (unsigned char)'\n') text[i] = 13;
      000182 EF               [12] 1421 	mov	a,r7
      000183 24 01            [12] 1422 	add	a,#_lcd_print_text_1_73
      000185 F5 82            [12] 1423 	mov	dpl,a
      000187 E4               [12] 1424 	clr	a
      000188 34 00            [12] 1425 	addc	a,#(_lcd_print_text_1_73 >> 8)
      00018A F5 83            [12] 1426 	mov	dph,a
      00018C E0               [24] 1427 	movx	a,@dptr
      00018D FD               [12] 1428 	mov	r5,a
      00018E BD 0A 0D         [24] 1429 	cjne	r5,#0x0A,00108$
      000191 EF               [12] 1430 	mov	a,r7
      000192 24 01            [12] 1431 	add	a,#_lcd_print_text_1_73
      000194 F5 82            [12] 1432 	mov	dpl,a
      000196 E4               [12] 1433 	clr	a
      000197 34 00            [12] 1434 	addc	a,#(_lcd_print_text_1_73 >> 8)
      000199 F5 83            [12] 1435 	mov	dph,a
      00019B 74 0D            [12] 1436 	mov	a,#0x0D
      00019D F0               [24] 1437 	movx	@dptr,a
      00019E                       1438 00108$:
                           0000C7  1439 	C$i2c.h$94$1$73 ==.
                                   1440 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:94: for(i=0; i<len; i++)
      00019E 0F               [12] 1441 	inc	r7
      00019F 80 DC            [24] 1442 	sjmp	00107$
      0001A1                       1443 00105$:
                           0000CA  1444 	C$i2c.h$99$1$73 ==.
                                   1445 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:99: i2c_write_data(0xC6, 0x00, text, len);
      0001A1 75 28 01         [24] 1446 	mov	_i2c_write_data_PARM_3,#_lcd_print_text_1_73
      0001A4 75 29 00         [24] 1447 	mov	(_i2c_write_data_PARM_3 + 1),#(_lcd_print_text_1_73 >> 8)
      0001A7 75 2A 00         [24] 1448 	mov	(_i2c_write_data_PARM_3 + 2),#0x00
      0001AA 75 27 00         [24] 1449 	mov	_i2c_write_data_PARM_2,#0x00
      0001AD 8E 2B            [24] 1450 	mov	_i2c_write_data_PARM_4,r6
      0001AF 75 82 C6         [24] 1451 	mov	dpl,#0xC6
      0001B2 12 04 49         [24] 1452 	lcall	_i2c_write_data
      0001B5                       1453 00109$:
      0001B5 D0 0F            [24] 1454 	pop	_bp
                           0000E0  1455 	C$i2c.h$100$1$73 ==.
                           0000E0  1456 	XG$lcd_print$0$0 ==.
      0001B7 22               [24] 1457 	ret
                                   1458 ;------------------------------------------------------------
                                   1459 ;Allocation info for local variables in function 'lcd_clear'
                                   1460 ;------------------------------------------------------------
                                   1461 ;NumBytes                  Allocated with name '_lcd_clear_NumBytes_1_77'
                                   1462 ;Cmd                       Allocated with name '_lcd_clear_Cmd_1_77'
                                   1463 ;------------------------------------------------------------
                           0000E1  1464 	G$lcd_clear$0$0 ==.
                           0000E1  1465 	C$i2c.h$103$1$73 ==.
                                   1466 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:103: void lcd_clear()
                                   1467 ;	-----------------------------------------
                                   1468 ;	 function lcd_clear
                                   1469 ;	-----------------------------------------
      0001B8                       1470 _lcd_clear:
                           0000E1  1471 	C$i2c.h$105$1$73 ==.
                                   1472 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:105: unsigned char NumBytes=0, Cmd[2];
      0001B8 75 22 00         [24] 1473 	mov	_lcd_clear_NumBytes_1_77,#0x00
                           0000E4  1474 	C$i2c.h$107$1$77 ==.
                                   1475 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:107: while(NumBytes < 64) i2c_read_data(0xC6, 0x00, &NumBytes, 1);
      0001BB                       1476 00101$:
      0001BB 74 C0            [12] 1477 	mov	a,#0x100 - 0x40
      0001BD 25 22            [12] 1478 	add	a,_lcd_clear_NumBytes_1_77
      0001BF 40 17            [24] 1479 	jc	00103$
      0001C1 75 2D 22         [24] 1480 	mov	_i2c_read_data_PARM_3,#_lcd_clear_NumBytes_1_77
      0001C4 75 2E 00         [24] 1481 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0001C7 75 2F 40         [24] 1482 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0001CA 75 2C 00         [24] 1483 	mov	_i2c_read_data_PARM_2,#0x00
      0001CD 75 30 01         [24] 1484 	mov	_i2c_read_data_PARM_4,#0x01
      0001D0 75 82 C6         [24] 1485 	mov	dpl,#0xC6
      0001D3 12 04 BF         [24] 1486 	lcall	_i2c_read_data
      0001D6 80 E3            [24] 1487 	sjmp	00101$
      0001D8                       1488 00103$:
                           000101  1489 	C$i2c.h$109$1$77 ==.
                                   1490 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:109: Cmd[0] = 12;
      0001D8 75 23 0C         [24] 1491 	mov	_lcd_clear_Cmd_1_77,#0x0C
                           000104  1492 	C$i2c.h$110$1$77 ==.
                                   1493 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:110: i2c_write_data(0xC6, 0x00, Cmd, 1);
      0001DB 75 28 23         [24] 1494 	mov	_i2c_write_data_PARM_3,#_lcd_clear_Cmd_1_77
      0001DE 75 29 00         [24] 1495 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      0001E1 75 2A 40         [24] 1496 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      0001E4 75 27 00         [24] 1497 	mov	_i2c_write_data_PARM_2,#0x00
      0001E7 75 2B 01         [24] 1498 	mov	_i2c_write_data_PARM_4,#0x01
      0001EA 75 82 C6         [24] 1499 	mov	dpl,#0xC6
      0001ED 12 04 49         [24] 1500 	lcall	_i2c_write_data
                           000119  1501 	C$i2c.h$111$1$77 ==.
                           000119  1502 	XG$lcd_clear$0$0 ==.
      0001F0 22               [24] 1503 	ret
                                   1504 ;------------------------------------------------------------
                                   1505 ;Allocation info for local variables in function 'read_keypad'
                                   1506 ;------------------------------------------------------------
                                   1507 ;i                         Allocated to registers r7 
                                   1508 ;Data                      Allocated with name '_read_keypad_Data_1_78'
                                   1509 ;------------------------------------------------------------
                           00011A  1510 	G$read_keypad$0$0 ==.
                           00011A  1511 	C$i2c.h$114$1$77 ==.
                                   1512 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:114: char read_keypad()
                                   1513 ;	-----------------------------------------
                                   1514 ;	 function read_keypad
                                   1515 ;	-----------------------------------------
      0001F1                       1516 _read_keypad:
                           00011A  1517 	C$i2c.h$118$1$78 ==.
                                   1518 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:118: i2c_read_data(0xC6, 0x01, Data, 2); //Read I2C data on address 192, register 1, 2 bytes of data.
      0001F1 75 2D 25         [24] 1519 	mov	_i2c_read_data_PARM_3,#_read_keypad_Data_1_78
      0001F4 75 2E 00         [24] 1520 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0001F7 75 2F 40         [24] 1521 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0001FA 75 2C 01         [24] 1522 	mov	_i2c_read_data_PARM_2,#0x01
      0001FD 75 30 02         [24] 1523 	mov	_i2c_read_data_PARM_4,#0x02
      000200 75 82 C6         [24] 1524 	mov	dpl,#0xC6
      000203 12 04 BF         [24] 1525 	lcall	_i2c_read_data
                           00012F  1526 	C$i2c.h$119$1$78 ==.
                                   1527 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:119: if(Data[0] == 0xFF) return 0;  //No response on bus, no display
      000206 74 FF            [12] 1528 	mov	a,#0xFF
      000208 B5 25 05         [24] 1529 	cjne	a,_read_keypad_Data_1_78,00102$
      00020B 75 82 00         [24] 1530 	mov	dpl,#0x00
      00020E 80 5F            [24] 1531 	sjmp	00116$
      000210                       1532 00102$:
                           000139  1533 	C$i2c.h$121$1$78 ==.
                                   1534 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:121: for(i=0; i<8; i++)             //loop 8 times
      000210 7F 00            [12] 1535 	mov	r7,#0x00
      000212 8F 06            [24] 1536 	mov	ar6,r7
      000214                       1537 00114$:
                           00013D  1538 	C$i2c.h$123$2$79 ==.
                                   1539 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:123: if(Data[0] & (0x01 << i))  //find the ASCII value of the keypad read, if it is the current loop value
      000214 8E F0            [24] 1540 	mov	b,r6
      000216 05 F0            [12] 1541 	inc	b
      000218 7C 01            [12] 1542 	mov	r4,#0x01
      00021A 7D 00            [12] 1543 	mov	r5,#0x00
      00021C 80 06            [24] 1544 	sjmp	00145$
      00021E                       1545 00144$:
      00021E EC               [12] 1546 	mov	a,r4
      00021F 2C               [12] 1547 	add	a,r4
      000220 FC               [12] 1548 	mov	r4,a
      000221 ED               [12] 1549 	mov	a,r5
      000222 33               [12] 1550 	rlc	a
      000223 FD               [12] 1551 	mov	r5,a
      000224                       1552 00145$:
      000224 D5 F0 F7         [24] 1553 	djnz	b,00144$
      000227 AA 25            [24] 1554 	mov	r2,_read_keypad_Data_1_78
      000229 7B 00            [12] 1555 	mov	r3,#0x00
      00022B EA               [12] 1556 	mov	a,r2
      00022C 52 04            [12] 1557 	anl	ar4,a
      00022E EB               [12] 1558 	mov	a,r3
      00022F 52 05            [12] 1559 	anl	ar5,a
      000231 EC               [12] 1560 	mov	a,r4
      000232 4D               [12] 1561 	orl	a,r5
      000233 60 07            [24] 1562 	jz	00115$
                           00015E  1563 	C$i2c.h$124$2$79 ==.
                                   1564 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:124: return i+49;
      000235 74 31            [12] 1565 	mov	a,#0x31
      000237 2F               [12] 1566 	add	a,r7
      000238 F5 82            [12] 1567 	mov	dpl,a
      00023A 80 33            [24] 1568 	sjmp	00116$
      00023C                       1569 00115$:
                           000165  1570 	C$i2c.h$121$1$78 ==.
                                   1571 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:121: for(i=0; i<8; i++)             //loop 8 times
      00023C 0E               [12] 1572 	inc	r6
      00023D 8E 07            [24] 1573 	mov	ar7,r6
      00023F BE 08 00         [24] 1574 	cjne	r6,#0x08,00147$
      000242                       1575 00147$:
      000242 40 D0            [24] 1576 	jc	00114$
                           00016D  1577 	C$i2c.h$127$1$78 ==.
                                   1578 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:127: if(Data[1] & 0x01) return '9'; //if the value is equal to 9 return 9.
      000244 E5 26            [12] 1579 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000246 30 E0 05         [24] 1580 	jnb	acc.0,00107$
      000249 75 82 39         [24] 1581 	mov	dpl,#0x39
      00024C 80 21            [24] 1582 	sjmp	00116$
      00024E                       1583 00107$:
                           000177  1584 	C$i2c.h$129$1$78 ==.
                                   1585 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:129: if(Data[1] & 0x02) return '*'; //if the value is equal to the star.
      00024E E5 26            [12] 1586 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000250 30 E1 05         [24] 1587 	jnb	acc.1,00109$
      000253 75 82 2A         [24] 1588 	mov	dpl,#0x2A
      000256 80 17            [24] 1589 	sjmp	00116$
      000258                       1590 00109$:
                           000181  1591 	C$i2c.h$131$1$78 ==.
                                   1592 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:131: if(Data[1] & 0x04) return '0'; //if the value is equal to the 0 key
      000258 E5 26            [12] 1593 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      00025A 30 E2 05         [24] 1594 	jnb	acc.2,00111$
      00025D 75 82 30         [24] 1595 	mov	dpl,#0x30
      000260 80 0D            [24] 1596 	sjmp	00116$
      000262                       1597 00111$:
                           00018B  1598 	C$i2c.h$133$1$78 ==.
                                   1599 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:133: if(Data[1] & 0x08) return '#'; //if the value is equal to the pound key
      000262 E5 26            [12] 1600 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000264 30 E3 05         [24] 1601 	jnb	acc.3,00113$
      000267 75 82 23         [24] 1602 	mov	dpl,#0x23
      00026A 80 03            [24] 1603 	sjmp	00116$
      00026C                       1604 00113$:
                           000195  1605 	C$i2c.h$135$1$78 ==.
                                   1606 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:135: return -1;                     //else return a numerical -1 (0xFF)
      00026C 75 82 FF         [24] 1607 	mov	dpl,#0xFF
      00026F                       1608 00116$:
                           000198  1609 	C$i2c.h$136$1$78 ==.
                           000198  1610 	XG$read_keypad$0$0 ==.
      00026F 22               [24] 1611 	ret
                                   1612 ;------------------------------------------------------------
                                   1613 ;Allocation info for local variables in function 'kpd_input'
                                   1614 ;------------------------------------------------------------
                                   1615 ;mode                      Allocated to registers r7 
                                   1616 ;sum                       Allocated to registers r5 r6 
                                   1617 ;key                       Allocated to registers r3 
                                   1618 ;i                         Allocated to registers 
                                   1619 ;------------------------------------------------------------
                           000199  1620 	G$kpd_input$0$0 ==.
                           000199  1621 	C$i2c.h$148$1$78 ==.
                                   1622 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:148: unsigned int kpd_input(char mode)
                                   1623 ;	-----------------------------------------
                                   1624 ;	 function kpd_input
                                   1625 ;	-----------------------------------------
      000270                       1626 _kpd_input:
      000270 AF 82            [24] 1627 	mov	r7,dpl
                           00019B  1628 	C$i2c.h$153$1$81 ==.
                                   1629 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:153: sum = 0;
                           00019B  1630 	C$i2c.h$156$1$81 ==.
                                   1631 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:156: if(mode==0)lcd_print("\nType digits; end w/#");
      000272 E4               [12] 1632 	clr	a
      000273 FD               [12] 1633 	mov	r5,a
      000274 FE               [12] 1634 	mov	r6,a
      000275 EF               [12] 1635 	mov	a,r7
      000276 70 1D            [24] 1636 	jnz	00102$
      000278 C0 06            [24] 1637 	push	ar6
      00027A C0 05            [24] 1638 	push	ar5
      00027C 74 50            [12] 1639 	mov	a,#___str_0
      00027E C0 E0            [24] 1640 	push	acc
      000280 74 0E            [12] 1641 	mov	a,#(___str_0 >> 8)
      000282 C0 E0            [24] 1642 	push	acc
      000284 74 80            [12] 1643 	mov	a,#0x80
      000286 C0 E0            [24] 1644 	push	acc
      000288 12 01 33         [24] 1645 	lcall	_lcd_print
      00028B 15 81            [12] 1646 	dec	sp
      00028D 15 81            [12] 1647 	dec	sp
      00028F 15 81            [12] 1648 	dec	sp
      000291 D0 05            [24] 1649 	pop	ar5
      000293 D0 06            [24] 1650 	pop	ar6
      000295                       1651 00102$:
                           0001BE  1652 	C$i2c.h$158$1$81 ==.
                                   1653 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:158: lcd_print("     %c%c%c%c%c",0x08,0x08,0x08,0x08,0x08);
      000295 C0 06            [24] 1654 	push	ar6
      000297 C0 05            [24] 1655 	push	ar5
      000299 74 08            [12] 1656 	mov	a,#0x08
      00029B C0 E0            [24] 1657 	push	acc
      00029D E4               [12] 1658 	clr	a
      00029E C0 E0            [24] 1659 	push	acc
      0002A0 74 08            [12] 1660 	mov	a,#0x08
      0002A2 C0 E0            [24] 1661 	push	acc
      0002A4 E4               [12] 1662 	clr	a
      0002A5 C0 E0            [24] 1663 	push	acc
      0002A7 74 08            [12] 1664 	mov	a,#0x08
      0002A9 C0 E0            [24] 1665 	push	acc
      0002AB E4               [12] 1666 	clr	a
      0002AC C0 E0            [24] 1667 	push	acc
      0002AE 74 08            [12] 1668 	mov	a,#0x08
      0002B0 C0 E0            [24] 1669 	push	acc
      0002B2 E4               [12] 1670 	clr	a
      0002B3 C0 E0            [24] 1671 	push	acc
      0002B5 74 08            [12] 1672 	mov	a,#0x08
      0002B7 C0 E0            [24] 1673 	push	acc
      0002B9 E4               [12] 1674 	clr	a
      0002BA C0 E0            [24] 1675 	push	acc
      0002BC 74 66            [12] 1676 	mov	a,#___str_1
      0002BE C0 E0            [24] 1677 	push	acc
      0002C0 74 0E            [12] 1678 	mov	a,#(___str_1 >> 8)
      0002C2 C0 E0            [24] 1679 	push	acc
      0002C4 74 80            [12] 1680 	mov	a,#0x80
      0002C6 C0 E0            [24] 1681 	push	acc
      0002C8 12 01 33         [24] 1682 	lcall	_lcd_print
      0002CB E5 81            [12] 1683 	mov	a,sp
      0002CD 24 F3            [12] 1684 	add	a,#0xf3
      0002CF F5 81            [12] 1685 	mov	sp,a
                           0001FA  1686 	C$i2c.h$160$1$81 ==.
                                   1687 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:160: delay_time(500000);	//Add 20ms delay before reading i2c in loop
      0002D1 90 A1 20         [24] 1688 	mov	dptr,#0xA120
      0002D4 75 F0 07         [24] 1689 	mov	b,#0x07
      0002D7 E4               [12] 1690 	clr	a
      0002D8 12 03 E4         [24] 1691 	lcall	_delay_time
      0002DB D0 05            [24] 1692 	pop	ar5
      0002DD D0 06            [24] 1693 	pop	ar6
                           000208  1694 	C$i2c.h$164$1$81 ==.
                                   1695 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:164: for(i=0; i<5; i++)
      0002DF 7F 00            [12] 1696 	mov	r7,#0x00
                           00020A  1697 	C$i2c.h$166$3$84 ==.
                                   1698 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:166: while(((key=read_keypad()) == -1) || (key == '*'))delay_time(10000);
      0002E1                       1699 00104$:
      0002E1 C0 07            [24] 1700 	push	ar7
      0002E3 C0 06            [24] 1701 	push	ar6
      0002E5 C0 05            [24] 1702 	push	ar5
      0002E7 12 01 F1         [24] 1703 	lcall	_read_keypad
      0002EA AC 82            [24] 1704 	mov	r4,dpl
      0002EC D0 05            [24] 1705 	pop	ar5
      0002EE D0 06            [24] 1706 	pop	ar6
      0002F0 D0 07            [24] 1707 	pop	ar7
      0002F2 8C 03            [24] 1708 	mov	ar3,r4
      0002F4 BC FF 02         [24] 1709 	cjne	r4,#0xFF,00146$
      0002F7 80 03            [24] 1710 	sjmp	00105$
      0002F9                       1711 00146$:
      0002F9 BB 2A 17         [24] 1712 	cjne	r3,#0x2A,00106$
      0002FC                       1713 00105$:
      0002FC 90 27 10         [24] 1714 	mov	dptr,#0x2710
      0002FF E4               [12] 1715 	clr	a
      000300 F5 F0            [12] 1716 	mov	b,a
      000302 C0 07            [24] 1717 	push	ar7
      000304 C0 06            [24] 1718 	push	ar6
      000306 C0 05            [24] 1719 	push	ar5
      000308 12 03 E4         [24] 1720 	lcall	_delay_time
      00030B D0 05            [24] 1721 	pop	ar5
      00030D D0 06            [24] 1722 	pop	ar6
      00030F D0 07            [24] 1723 	pop	ar7
      000311 80 CE            [24] 1724 	sjmp	00104$
      000313                       1725 00106$:
                           00023C  1726 	C$i2c.h$167$2$82 ==.
                                   1727 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:167: if(key == '#')
      000313 BB 23 2A         [24] 1728 	cjne	r3,#0x23,00114$
                           00023F  1729 	C$i2c.h$169$3$83 ==.
                                   1730 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:169: while(read_keypad() == '#')delay_time(10000);
      000316                       1731 00107$:
      000316 C0 06            [24] 1732 	push	ar6
      000318 C0 05            [24] 1733 	push	ar5
      00031A 12 01 F1         [24] 1734 	lcall	_read_keypad
      00031D AC 82            [24] 1735 	mov	r4,dpl
      00031F D0 05            [24] 1736 	pop	ar5
      000321 D0 06            [24] 1737 	pop	ar6
      000323 BC 23 13         [24] 1738 	cjne	r4,#0x23,00109$
      000326 90 27 10         [24] 1739 	mov	dptr,#0x2710
      000329 E4               [12] 1740 	clr	a
      00032A F5 F0            [12] 1741 	mov	b,a
      00032C C0 06            [24] 1742 	push	ar6
      00032E C0 05            [24] 1743 	push	ar5
      000330 12 03 E4         [24] 1744 	lcall	_delay_time
      000333 D0 05            [24] 1745 	pop	ar5
      000335 D0 06            [24] 1746 	pop	ar6
      000337 80 DD            [24] 1747 	sjmp	00107$
      000339                       1748 00109$:
                           000262  1749 	C$i2c.h$170$3$83 ==.
                                   1750 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:170: return sum;
      000339 8D 82            [24] 1751 	mov	dpl,r5
      00033B 8E 83            [24] 1752 	mov	dph,r6
      00033D 02 03 E3         [24] 1753 	ljmp	00119$
      000340                       1754 00114$:
                           000269  1755 	C$i2c.h$174$3$84 ==.
                                   1756 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:174: lcd_print("%c", key);
      000340 EB               [12] 1757 	mov	a,r3
      000341 FA               [12] 1758 	mov	r2,a
      000342 33               [12] 1759 	rlc	a
      000343 95 E0            [12] 1760 	subb	a,acc
      000345 FC               [12] 1761 	mov	r4,a
      000346 C0 07            [24] 1762 	push	ar7
      000348 C0 06            [24] 1763 	push	ar6
      00034A C0 05            [24] 1764 	push	ar5
      00034C C0 04            [24] 1765 	push	ar4
      00034E C0 03            [24] 1766 	push	ar3
      000350 C0 02            [24] 1767 	push	ar2
      000352 C0 02            [24] 1768 	push	ar2
      000354 C0 04            [24] 1769 	push	ar4
      000356 74 76            [12] 1770 	mov	a,#___str_2
      000358 C0 E0            [24] 1771 	push	acc
      00035A 74 0E            [12] 1772 	mov	a,#(___str_2 >> 8)
      00035C C0 E0            [24] 1773 	push	acc
      00035E 74 80            [12] 1774 	mov	a,#0x80
      000360 C0 E0            [24] 1775 	push	acc
      000362 12 01 33         [24] 1776 	lcall	_lcd_print
      000365 E5 81            [12] 1777 	mov	a,sp
      000367 24 FB            [12] 1778 	add	a,#0xfb
      000369 F5 81            [12] 1779 	mov	sp,a
      00036B D0 02            [24] 1780 	pop	ar2
      00036D D0 03            [24] 1781 	pop	ar3
      00036F D0 04            [24] 1782 	pop	ar4
      000371 D0 05            [24] 1783 	pop	ar5
      000373 D0 06            [24] 1784 	pop	ar6
                           00029E  1785 	C$i2c.h$175$1$81 ==.
                                   1786 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:175: sum = sum*10 + key - '0';
      000375 8D 10            [24] 1787 	mov	__mulint_PARM_2,r5
      000377 8E 11            [24] 1788 	mov	(__mulint_PARM_2 + 1),r6
      000379 90 00 0A         [24] 1789 	mov	dptr,#0x000A
      00037C C0 04            [24] 1790 	push	ar4
      00037E C0 03            [24] 1791 	push	ar3
      000380 C0 02            [24] 1792 	push	ar2
      000382 12 07 4D         [24] 1793 	lcall	__mulint
      000385 A8 82            [24] 1794 	mov	r0,dpl
      000387 A9 83            [24] 1795 	mov	r1,dph
      000389 D0 02            [24] 1796 	pop	ar2
      00038B D0 03            [24] 1797 	pop	ar3
      00038D D0 04            [24] 1798 	pop	ar4
      00038F D0 07            [24] 1799 	pop	ar7
      000391 EA               [12] 1800 	mov	a,r2
      000392 28               [12] 1801 	add	a,r0
      000393 F8               [12] 1802 	mov	r0,a
      000394 EC               [12] 1803 	mov	a,r4
      000395 39               [12] 1804 	addc	a,r1
      000396 F9               [12] 1805 	mov	r1,a
      000397 E8               [12] 1806 	mov	a,r0
      000398 24 D0            [12] 1807 	add	a,#0xD0
      00039A FD               [12] 1808 	mov	r5,a
      00039B E9               [12] 1809 	mov	a,r1
      00039C 34 FF            [12] 1810 	addc	a,#0xFF
      00039E FE               [12] 1811 	mov	r6,a
                           0002C8  1812 	C$i2c.h$176$3$84 ==.
                                   1813 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:176: while(read_keypad() == key)delay_time(10000); //wait for key to be released
      00039F                       1814 00110$:
      00039F C0 07            [24] 1815 	push	ar7
      0003A1 C0 06            [24] 1816 	push	ar6
      0003A3 C0 05            [24] 1817 	push	ar5
      0003A5 C0 03            [24] 1818 	push	ar3
      0003A7 12 01 F1         [24] 1819 	lcall	_read_keypad
      0003AA AC 82            [24] 1820 	mov	r4,dpl
      0003AC D0 03            [24] 1821 	pop	ar3
      0003AE D0 05            [24] 1822 	pop	ar5
      0003B0 D0 06            [24] 1823 	pop	ar6
      0003B2 D0 07            [24] 1824 	pop	ar7
      0003B4 EC               [12] 1825 	mov	a,r4
      0003B5 B5 03 1B         [24] 1826 	cjne	a,ar3,00118$
      0003B8 90 27 10         [24] 1827 	mov	dptr,#0x2710
      0003BB E4               [12] 1828 	clr	a
      0003BC F5 F0            [12] 1829 	mov	b,a
      0003BE C0 07            [24] 1830 	push	ar7
      0003C0 C0 06            [24] 1831 	push	ar6
      0003C2 C0 05            [24] 1832 	push	ar5
      0003C4 C0 03            [24] 1833 	push	ar3
      0003C6 12 03 E4         [24] 1834 	lcall	_delay_time
      0003C9 D0 03            [24] 1835 	pop	ar3
      0003CB D0 05            [24] 1836 	pop	ar5
      0003CD D0 06            [24] 1837 	pop	ar6
      0003CF D0 07            [24] 1838 	pop	ar7
      0003D1 80 CC            [24] 1839 	sjmp	00110$
      0003D3                       1840 00118$:
                           0002FC  1841 	C$i2c.h$164$1$81 ==.
                                   1842 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:164: for(i=0; i<5; i++)
      0003D3 0F               [12] 1843 	inc	r7
      0003D4 C3               [12] 1844 	clr	c
      0003D5 EF               [12] 1845 	mov	a,r7
      0003D6 64 80            [12] 1846 	xrl	a,#0x80
      0003D8 94 85            [12] 1847 	subb	a,#0x85
      0003DA 50 03            [24] 1848 	jnc	00155$
      0003DC 02 02 E1         [24] 1849 	ljmp	00104$
      0003DF                       1850 00155$:
                           000308  1851 	C$i2c.h$179$1$81 ==.
                                   1852 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:179: return sum;
      0003DF 8D 82            [24] 1853 	mov	dpl,r5
      0003E1 8E 83            [24] 1854 	mov	dph,r6
      0003E3                       1855 00119$:
                           00030C  1856 	C$i2c.h$180$1$81 ==.
                           00030C  1857 	XG$kpd_input$0$0 ==.
      0003E3 22               [24] 1858 	ret
                                   1859 ;------------------------------------------------------------
                                   1860 ;Allocation info for local variables in function 'delay_time'
                                   1861 ;------------------------------------------------------------
                                   1862 ;time_end                  Allocated to registers r4 r5 r6 r7 
                                   1863 ;index                     Allocated to registers 
                                   1864 ;------------------------------------------------------------
                           00030D  1865 	G$delay_time$0$0 ==.
                           00030D  1866 	C$i2c.h$189$1$81 ==.
                                   1867 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:189: void delay_time (unsigned long time_end)
                                   1868 ;	-----------------------------------------
                                   1869 ;	 function delay_time
                                   1870 ;	-----------------------------------------
      0003E4                       1871 _delay_time:
      0003E4 AC 82            [24] 1872 	mov	r4,dpl
      0003E6 AD 83            [24] 1873 	mov	r5,dph
      0003E8 AE F0            [24] 1874 	mov	r6,b
      0003EA FF               [12] 1875 	mov	r7,a
                           000314  1876 	C$i2c.h$192$1$86 ==.
                                   1877 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:192: for (index = 0; index < time_end; index++); //for loop delay
      0003EB 78 00            [12] 1878 	mov	r0,#0x00
      0003ED 79 00            [12] 1879 	mov	r1,#0x00
      0003EF 7A 00            [12] 1880 	mov	r2,#0x00
      0003F1 7B 00            [12] 1881 	mov	r3,#0x00
      0003F3                       1882 00103$:
      0003F3 C3               [12] 1883 	clr	c
      0003F4 E8               [12] 1884 	mov	a,r0
      0003F5 9C               [12] 1885 	subb	a,r4
      0003F6 E9               [12] 1886 	mov	a,r1
      0003F7 9D               [12] 1887 	subb	a,r5
      0003F8 EA               [12] 1888 	mov	a,r2
      0003F9 9E               [12] 1889 	subb	a,r6
      0003FA EB               [12] 1890 	mov	a,r3
      0003FB 9F               [12] 1891 	subb	a,r7
      0003FC 50 0F            [24] 1892 	jnc	00105$
      0003FE 08               [12] 1893 	inc	r0
      0003FF B8 00 09         [24] 1894 	cjne	r0,#0x00,00115$
      000402 09               [12] 1895 	inc	r1
      000403 B9 00 05         [24] 1896 	cjne	r1,#0x00,00115$
      000406 0A               [12] 1897 	inc	r2
      000407 BA 00 E9         [24] 1898 	cjne	r2,#0x00,00103$
      00040A 0B               [12] 1899 	inc	r3
      00040B                       1900 00115$:
      00040B 80 E6            [24] 1901 	sjmp	00103$
      00040D                       1902 00105$:
                           000336  1903 	C$i2c.h$193$1$86 ==.
                           000336  1904 	XG$delay_time$0$0 ==.
      00040D 22               [24] 1905 	ret
                                   1906 ;------------------------------------------------------------
                                   1907 ;Allocation info for local variables in function 'i2c_start'
                                   1908 ;------------------------------------------------------------
                           000337  1909 	G$i2c_start$0$0 ==.
                           000337  1910 	C$i2c.h$196$1$86 ==.
                                   1911 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:196: void i2c_start(void)
                                   1912 ;	-----------------------------------------
                                   1913 ;	 function i2c_start
                                   1914 ;	-----------------------------------------
      00040E                       1915 _i2c_start:
                           000337  1916 	C$i2c.h$198$1$88 ==.
                                   1917 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:198: while(BUSY);              //Wait until SMBus0 is free
      00040E                       1918 00101$:
      00040E 20 C7 FD         [24] 1919 	jb	_BUSY,00101$
                           00033A  1920 	C$i2c.h$199$1$88 ==.
                                   1921 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:199: STA = 1;                  //Set Start Bit
      000411 D2 C5            [12] 1922 	setb	_STA
                           00033C  1923 	C$i2c.h$200$1$88 ==.
                                   1924 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:200: while(!SI);               //Wait until start sent
      000413                       1925 00104$:
      000413 30 C3 FD         [24] 1926 	jnb	_SI,00104$
                           00033F  1927 	C$i2c.h$201$1$88 ==.
                                   1928 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:201: STA = 0;                  //Clear start bit
      000416 C2 C5            [12] 1929 	clr	_STA
                           000341  1930 	C$i2c.h$202$1$88 ==.
                                   1931 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:202: SI = 0;                   //Clear SI
      000418 C2 C3            [12] 1932 	clr	_SI
                           000343  1933 	C$i2c.h$203$1$88 ==.
                           000343  1934 	XG$i2c_start$0$0 ==.
      00041A 22               [24] 1935 	ret
                                   1936 ;------------------------------------------------------------
                                   1937 ;Allocation info for local variables in function 'i2c_write'
                                   1938 ;------------------------------------------------------------
                                   1939 ;output_data               Allocated to registers 
                                   1940 ;------------------------------------------------------------
                           000344  1941 	G$i2c_write$0$0 ==.
                           000344  1942 	C$i2c.h$206$1$88 ==.
                                   1943 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:206: void i2c_write(unsigned char output_data)
                                   1944 ;	-----------------------------------------
                                   1945 ;	 function i2c_write
                                   1946 ;	-----------------------------------------
      00041B                       1947 _i2c_write:
      00041B 85 82 C2         [24] 1948 	mov	_SMB0DAT,dpl
                           000347  1949 	C$i2c.h$209$1$90 ==.
                                   1950 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:209: while(!SI);               //Wait until send is complete
      00041E                       1951 00101$:
                           000347  1952 	C$i2c.h$210$1$90 ==.
                                   1953 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:210: SI = 0;                   //Clear SI
      00041E 10 C3 02         [24] 1954 	jbc	_SI,00112$
      000421 80 FB            [24] 1955 	sjmp	00101$
      000423                       1956 00112$:
                           00034C  1957 	C$i2c.h$211$1$90 ==.
                           00034C  1958 	XG$i2c_write$0$0 ==.
      000423 22               [24] 1959 	ret
                                   1960 ;------------------------------------------------------------
                                   1961 ;Allocation info for local variables in function 'i2c_write_and_stop'
                                   1962 ;------------------------------------------------------------
                                   1963 ;output_data               Allocated to registers 
                                   1964 ;------------------------------------------------------------
                           00034D  1965 	G$i2c_write_and_stop$0$0 ==.
                           00034D  1966 	C$i2c.h$214$1$90 ==.
                                   1967 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:214: void i2c_write_and_stop(unsigned char output_data)
                                   1968 ;	-----------------------------------------
                                   1969 ;	 function i2c_write_and_stop
                                   1970 ;	-----------------------------------------
      000424                       1971 _i2c_write_and_stop:
      000424 85 82 C2         [24] 1972 	mov	_SMB0DAT,dpl
                           000350  1973 	C$i2c.h$217$1$92 ==.
                                   1974 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:217: STO = 1;                  //Set stop bit
      000427 D2 C4            [12] 1975 	setb	_STO
                           000352  1976 	C$i2c.h$218$1$92 ==.
                                   1977 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:218: while(!SI);               //Wait until send is complete
      000429                       1978 00101$:
                           000352  1979 	C$i2c.h$219$1$92 ==.
                                   1980 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:219: SI = 0;                   //clear SI
      000429 10 C3 02         [24] 1981 	jbc	_SI,00112$
      00042C 80 FB            [24] 1982 	sjmp	00101$
      00042E                       1983 00112$:
                           000357  1984 	C$i2c.h$220$1$92 ==.
                           000357  1985 	XG$i2c_write_and_stop$0$0 ==.
      00042E 22               [24] 1986 	ret
                                   1987 ;------------------------------------------------------------
                                   1988 ;Allocation info for local variables in function 'i2c_read'
                                   1989 ;------------------------------------------------------------
                                   1990 ;input_data                Allocated to registers 
                                   1991 ;------------------------------------------------------------
                           000358  1992 	G$i2c_read$0$0 ==.
                           000358  1993 	C$i2c.h$223$1$92 ==.
                                   1994 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:223: unsigned char i2c_read(void)
                                   1995 ;	-----------------------------------------
                                   1996 ;	 function i2c_read
                                   1997 ;	-----------------------------------------
      00042F                       1998 _i2c_read:
                           000358  1999 	C$i2c.h$226$1$94 ==.
                                   2000 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:226: while(!SI);                //Wait until we have data to read
      00042F                       2001 00101$:
      00042F 30 C3 FD         [24] 2002 	jnb	_SI,00101$
                           00035B  2003 	C$i2c.h$227$1$94 ==.
                                   2004 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:227: input_data = SMB0DAT;      //Read the data
      000432 85 C2 82         [24] 2005 	mov	dpl,_SMB0DAT
                           00035E  2006 	C$i2c.h$228$1$94 ==.
                                   2007 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:228: SI = 0;                    //Clear SI
      000435 C2 C3            [12] 2008 	clr	_SI
                           000360  2009 	C$i2c.h$229$1$94 ==.
                                   2010 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:229: return input_data;         //Return the read data
                           000360  2011 	C$i2c.h$230$1$94 ==.
                           000360  2012 	XG$i2c_read$0$0 ==.
      000437 22               [24] 2013 	ret
                                   2014 ;------------------------------------------------------------
                                   2015 ;Allocation info for local variables in function 'i2c_read_and_stop'
                                   2016 ;------------------------------------------------------------
                                   2017 ;input_data                Allocated to registers r7 
                                   2018 ;------------------------------------------------------------
                           000361  2019 	G$i2c_read_and_stop$0$0 ==.
                           000361  2020 	C$i2c.h$233$1$94 ==.
                                   2021 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:233: unsigned char i2c_read_and_stop(void)
                                   2022 ;	-----------------------------------------
                                   2023 ;	 function i2c_read_and_stop
                                   2024 ;	-----------------------------------------
      000438                       2025 _i2c_read_and_stop:
                           000361  2026 	C$i2c.h$236$1$96 ==.
                                   2027 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:236: while(!SI);                //Wait until we have data to read
      000438                       2028 00101$:
      000438 30 C3 FD         [24] 2029 	jnb	_SI,00101$
                           000364  2030 	C$i2c.h$237$1$96 ==.
                                   2031 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:237: input_data = SMB0DAT;      //Read the data
      00043B AF C2            [24] 2032 	mov	r7,_SMB0DAT
                           000366  2033 	C$i2c.h$238$1$96 ==.
                                   2034 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:238: SI = 0;                    //Clear SI
      00043D C2 C3            [12] 2035 	clr	_SI
                           000368  2036 	C$i2c.h$239$1$96 ==.
                                   2037 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:239: STO = 1;                   //Set stop bit
      00043F D2 C4            [12] 2038 	setb	_STO
                           00036A  2039 	C$i2c.h$240$1$96 ==.
                                   2040 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:240: while(!SI);                //Wait for stop
      000441                       2041 00104$:
                           00036A  2042 	C$i2c.h$241$1$96 ==.
                                   2043 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:241: SI = 0;
      000441 10 C3 02         [24] 2044 	jbc	_SI,00122$
      000444 80 FB            [24] 2045 	sjmp	00104$
      000446                       2046 00122$:
                           00036F  2047 	C$i2c.h$242$1$96 ==.
                                   2048 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:242: return input_data;         //Return the read data
      000446 8F 82            [24] 2049 	mov	dpl,r7
                           000371  2050 	C$i2c.h$243$1$96 ==.
                           000371  2051 	XG$i2c_read_and_stop$0$0 ==.
      000448 22               [24] 2052 	ret
                                   2053 ;------------------------------------------------------------
                                   2054 ;Allocation info for local variables in function 'i2c_write_data'
                                   2055 ;------------------------------------------------------------
                                   2056 ;start_reg                 Allocated with name '_i2c_write_data_PARM_2'
                                   2057 ;buffer                    Allocated with name '_i2c_write_data_PARM_3'
                                   2058 ;num_bytes                 Allocated with name '_i2c_write_data_PARM_4'
                                   2059 ;addr                      Allocated to registers r7 
                                   2060 ;i                         Allocated to registers 
                                   2061 ;------------------------------------------------------------
                           000372  2062 	G$i2c_write_data$0$0 ==.
                           000372  2063 	C$i2c.h$246$1$96 ==.
                                   2064 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:246: void i2c_write_data(unsigned char addr, unsigned char start_reg, unsigned char *buffer, unsigned char num_bytes)
                                   2065 ;	-----------------------------------------
                                   2066 ;	 function i2c_write_data
                                   2067 ;	-----------------------------------------
      000449                       2068 _i2c_write_data:
      000449 AF 82            [24] 2069 	mov	r7,dpl
                           000374  2070 	C$i2c.h$250$1$98 ==.
                                   2071 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:250: i2c_start();               //initiate I2C transfer
      00044B C0 07            [24] 2072 	push	ar7
      00044D 12 04 0E         [24] 2073 	lcall	_i2c_start
      000450 D0 07            [24] 2074 	pop	ar7
                           00037B  2075 	C$i2c.h$251$1$98 ==.
                                   2076 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:251: i2c_write(addr & ~0x01);   //write the desired address to the bus
      000452 74 FE            [12] 2077 	mov	a,#0xFE
      000454 5F               [12] 2078 	anl	a,r7
      000455 F5 82            [12] 2079 	mov	dpl,a
      000457 12 04 1B         [24] 2080 	lcall	_i2c_write
                           000383  2081 	C$i2c.h$252$1$98 ==.
                                   2082 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:252: i2c_write(start_reg);      //write the start register to the bus
      00045A 85 27 82         [24] 2083 	mov	dpl,_i2c_write_data_PARM_2
      00045D 12 04 1B         [24] 2084 	lcall	_i2c_write
                           000389  2085 	C$i2c.h$253$1$98 ==.
                                   2086 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:253: for(i=0; i<num_bytes-1; i++) //write the data to the register(s)
      000460 7F 00            [12] 2087 	mov	r7,#0x00
      000462                       2088 00103$:
      000462 AD 2B            [24] 2089 	mov	r5,_i2c_write_data_PARM_4
      000464 7E 00            [12] 2090 	mov	r6,#0x00
      000466 1D               [12] 2091 	dec	r5
      000467 BD FF 01         [24] 2092 	cjne	r5,#0xFF,00114$
      00046A 1E               [12] 2093 	dec	r6
      00046B                       2094 00114$:
      00046B 8F 03            [24] 2095 	mov	ar3,r7
      00046D 7C 00            [12] 2096 	mov	r4,#0x00
      00046F C3               [12] 2097 	clr	c
      000470 EB               [12] 2098 	mov	a,r3
      000471 9D               [12] 2099 	subb	a,r5
      000472 EC               [12] 2100 	mov	a,r4
      000473 64 80            [12] 2101 	xrl	a,#0x80
      000475 8E F0            [24] 2102 	mov	b,r6
      000477 63 F0 80         [24] 2103 	xrl	b,#0x80
      00047A 95 F0            [12] 2104 	subb	a,b
      00047C 50 1F            [24] 2105 	jnc	00101$
                           0003A7  2106 	C$i2c.h$254$1$98 ==.
                                   2107 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:254: i2c_write(buffer[i]);
      00047E EF               [12] 2108 	mov	a,r7
      00047F 25 28            [12] 2109 	add	a,_i2c_write_data_PARM_3
      000481 FC               [12] 2110 	mov	r4,a
      000482 E4               [12] 2111 	clr	a
      000483 35 29            [12] 2112 	addc	a,(_i2c_write_data_PARM_3 + 1)
      000485 FD               [12] 2113 	mov	r5,a
      000486 AE 2A            [24] 2114 	mov	r6,(_i2c_write_data_PARM_3 + 2)
      000488 8C 82            [24] 2115 	mov	dpl,r4
      00048A 8D 83            [24] 2116 	mov	dph,r5
      00048C 8E F0            [24] 2117 	mov	b,r6
      00048E 12 0E 30         [24] 2118 	lcall	__gptrget
      000491 F5 82            [12] 2119 	mov	dpl,a
      000493 C0 07            [24] 2120 	push	ar7
      000495 12 04 1B         [24] 2121 	lcall	_i2c_write
      000498 D0 07            [24] 2122 	pop	ar7
                           0003C3  2123 	C$i2c.h$253$1$98 ==.
                                   2124 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:253: for(i=0; i<num_bytes-1; i++) //write the data to the register(s)
      00049A 0F               [12] 2125 	inc	r7
      00049B 80 C5            [24] 2126 	sjmp	00103$
      00049D                       2127 00101$:
                           0003C6  2128 	C$i2c.h$255$1$98 ==.
                                   2129 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:255: i2c_write_and_stop(buffer[num_bytes-1]); //Stop transfer
      00049D AE 2B            [24] 2130 	mov	r6,_i2c_write_data_PARM_4
      00049F 7F 00            [12] 2131 	mov	r7,#0x00
      0004A1 1E               [12] 2132 	dec	r6
      0004A2 BE FF 01         [24] 2133 	cjne	r6,#0xFF,00116$
      0004A5 1F               [12] 2134 	dec	r7
      0004A6                       2135 00116$:
      0004A6 EE               [12] 2136 	mov	a,r6
      0004A7 25 28            [12] 2137 	add	a,_i2c_write_data_PARM_3
      0004A9 FE               [12] 2138 	mov	r6,a
      0004AA EF               [12] 2139 	mov	a,r7
      0004AB 35 29            [12] 2140 	addc	a,(_i2c_write_data_PARM_3 + 1)
      0004AD FF               [12] 2141 	mov	r7,a
      0004AE AD 2A            [24] 2142 	mov	r5,(_i2c_write_data_PARM_3 + 2)
      0004B0 8E 82            [24] 2143 	mov	dpl,r6
      0004B2 8F 83            [24] 2144 	mov	dph,r7
      0004B4 8D F0            [24] 2145 	mov	b,r5
      0004B6 12 0E 30         [24] 2146 	lcall	__gptrget
      0004B9 F5 82            [12] 2147 	mov	dpl,a
      0004BB 12 04 24         [24] 2148 	lcall	_i2c_write_and_stop
                           0003E7  2149 	C$i2c.h$256$1$98 ==.
                           0003E7  2150 	XG$i2c_write_data$0$0 ==.
      0004BE 22               [24] 2151 	ret
                                   2152 ;------------------------------------------------------------
                                   2153 ;Allocation info for local variables in function 'i2c_read_data'
                                   2154 ;------------------------------------------------------------
                                   2155 ;start_reg                 Allocated with name '_i2c_read_data_PARM_2'
                                   2156 ;buffer                    Allocated with name '_i2c_read_data_PARM_3'
                                   2157 ;num_bytes                 Allocated with name '_i2c_read_data_PARM_4'
                                   2158 ;addr                      Allocated to registers r7 
                                   2159 ;j                         Allocated to registers 
                                   2160 ;------------------------------------------------------------
                           0003E8  2161 	G$i2c_read_data$0$0 ==.
                           0003E8  2162 	C$i2c.h$259$1$98 ==.
                                   2163 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:259: void i2c_read_data(unsigned char addr, unsigned char start_reg, unsigned char *buffer, unsigned char num_bytes)
                                   2164 ;	-----------------------------------------
                                   2165 ;	 function i2c_read_data
                                   2166 ;	-----------------------------------------
      0004BF                       2167 _i2c_read_data:
      0004BF AF 82            [24] 2168 	mov	r7,dpl
                           0003EA  2169 	C$i2c.h$262$1$100 ==.
                                   2170 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:262: i2c_start();               //Start I2C transfer
      0004C1 C0 07            [24] 2171 	push	ar7
      0004C3 12 04 0E         [24] 2172 	lcall	_i2c_start
      0004C6 D0 07            [24] 2173 	pop	ar7
                           0003F1  2174 	C$i2c.h$263$1$100 ==.
                                   2175 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:263: i2c_write(addr & ~0x01);   //Write address of device that will be written to, send 0
      0004C8 8F 06            [24] 2176 	mov	ar6,r7
      0004CA 74 FE            [12] 2177 	mov	a,#0xFE
      0004CC 5E               [12] 2178 	anl	a,r6
      0004CD F5 82            [12] 2179 	mov	dpl,a
      0004CF C0 07            [24] 2180 	push	ar7
      0004D1 12 04 1B         [24] 2181 	lcall	_i2c_write
                           0003FD  2182 	C$i2c.h$264$1$100 ==.
                                   2183 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:264: i2c_write_and_stop(start_reg); //Write & stop the 1st register to be read
      0004D4 85 2C 82         [24] 2184 	mov	dpl,_i2c_read_data_PARM_2
      0004D7 12 04 24         [24] 2185 	lcall	_i2c_write_and_stop
                           000403  2186 	C$i2c.h$265$1$100 ==.
                                   2187 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:265: i2c_start();               //Start I2C transfer
      0004DA 12 04 0E         [24] 2188 	lcall	_i2c_start
      0004DD D0 07            [24] 2189 	pop	ar7
                           000408  2190 	C$i2c.h$266$1$100 ==.
                                   2191 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:266: i2c_write(addr | 0x01);    //Write address again, this time indicating a read operation
      0004DF 74 01            [12] 2192 	mov	a,#0x01
      0004E1 4F               [12] 2193 	orl	a,r7
      0004E2 F5 82            [12] 2194 	mov	dpl,a
      0004E4 12 04 1B         [24] 2195 	lcall	_i2c_write
                           000410  2196 	C$i2c.h$267$1$100 ==.
                                   2197 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:267: for(j = 0; j < num_bytes - 1; j++)
      0004E7 7F 00            [12] 2198 	mov	r7,#0x00
      0004E9                       2199 00103$:
      0004E9 AD 30            [24] 2200 	mov	r5,_i2c_read_data_PARM_4
      0004EB 7E 00            [12] 2201 	mov	r6,#0x00
      0004ED 1D               [12] 2202 	dec	r5
      0004EE BD FF 01         [24] 2203 	cjne	r5,#0xFF,00114$
      0004F1 1E               [12] 2204 	dec	r6
      0004F2                       2205 00114$:
      0004F2 8F 03            [24] 2206 	mov	ar3,r7
      0004F4 7C 00            [12] 2207 	mov	r4,#0x00
      0004F6 C3               [12] 2208 	clr	c
      0004F7 EB               [12] 2209 	mov	a,r3
      0004F8 9D               [12] 2210 	subb	a,r5
      0004F9 EC               [12] 2211 	mov	a,r4
      0004FA 64 80            [12] 2212 	xrl	a,#0x80
      0004FC 8E F0            [24] 2213 	mov	b,r6
      0004FE 63 F0 80         [24] 2214 	xrl	b,#0x80
      000501 95 F0            [12] 2215 	subb	a,b
      000503 50 2E            [24] 2216 	jnc	00101$
                           00042E  2217 	C$i2c.h$269$2$101 ==.
                                   2218 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:269: AA = 1;                //Set acknowledge bit
      000505 D2 C2            [12] 2219 	setb	_AA
                           000430  2220 	C$i2c.h$270$2$101 ==.
                                   2221 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:270: buffer[j] = i2c_read();//Read data, save it in buffer
      000507 EF               [12] 2222 	mov	a,r7
      000508 25 2D            [12] 2223 	add	a,_i2c_read_data_PARM_3
      00050A FC               [12] 2224 	mov	r4,a
      00050B E4               [12] 2225 	clr	a
      00050C 35 2E            [12] 2226 	addc	a,(_i2c_read_data_PARM_3 + 1)
      00050E FD               [12] 2227 	mov	r5,a
      00050F AE 2F            [24] 2228 	mov	r6,(_i2c_read_data_PARM_3 + 2)
      000511 C0 07            [24] 2229 	push	ar7
      000513 C0 06            [24] 2230 	push	ar6
      000515 C0 05            [24] 2231 	push	ar5
      000517 C0 04            [24] 2232 	push	ar4
      000519 12 04 2F         [24] 2233 	lcall	_i2c_read
      00051C AB 82            [24] 2234 	mov	r3,dpl
      00051E D0 04            [24] 2235 	pop	ar4
      000520 D0 05            [24] 2236 	pop	ar5
      000522 D0 06            [24] 2237 	pop	ar6
      000524 D0 07            [24] 2238 	pop	ar7
      000526 8C 82            [24] 2239 	mov	dpl,r4
      000528 8D 83            [24] 2240 	mov	dph,r5
      00052A 8E F0            [24] 2241 	mov	b,r6
      00052C EB               [12] 2242 	mov	a,r3
      00052D 12 07 32         [24] 2243 	lcall	__gptrput
                           000459  2244 	C$i2c.h$267$1$100 ==.
                                   2245 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:267: for(j = 0; j < num_bytes - 1; j++)
      000530 0F               [12] 2246 	inc	r7
      000531 80 B6            [24] 2247 	sjmp	00103$
      000533                       2248 00101$:
                           00045C  2249 	C$i2c.h$272$1$100 ==.
                                   2250 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:272: AA = 0;
      000533 C2 C2            [12] 2251 	clr	_AA
                           00045E  2252 	C$i2c.h$273$1$100 ==.
                                   2253 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:273: buffer[num_bytes - 1] = i2c_read_and_stop(); //Read the last byte and stop, save it in the buffer
      000535 AE 30            [24] 2254 	mov	r6,_i2c_read_data_PARM_4
      000537 7F 00            [12] 2255 	mov	r7,#0x00
      000539 1E               [12] 2256 	dec	r6
      00053A BE FF 01         [24] 2257 	cjne	r6,#0xFF,00116$
      00053D 1F               [12] 2258 	dec	r7
      00053E                       2259 00116$:
      00053E EE               [12] 2260 	mov	a,r6
      00053F 25 2D            [12] 2261 	add	a,_i2c_read_data_PARM_3
      000541 FE               [12] 2262 	mov	r6,a
      000542 EF               [12] 2263 	mov	a,r7
      000543 35 2E            [12] 2264 	addc	a,(_i2c_read_data_PARM_3 + 1)
      000545 FF               [12] 2265 	mov	r7,a
      000546 AD 2F            [24] 2266 	mov	r5,(_i2c_read_data_PARM_3 + 2)
      000548 C0 07            [24] 2267 	push	ar7
      00054A C0 06            [24] 2268 	push	ar6
      00054C C0 05            [24] 2269 	push	ar5
      00054E 12 04 38         [24] 2270 	lcall	_i2c_read_and_stop
      000551 AC 82            [24] 2271 	mov	r4,dpl
      000553 D0 05            [24] 2272 	pop	ar5
      000555 D0 06            [24] 2273 	pop	ar6
      000557 D0 07            [24] 2274 	pop	ar7
      000559 8E 82            [24] 2275 	mov	dpl,r6
      00055B 8F 83            [24] 2276 	mov	dph,r7
      00055D 8D F0            [24] 2277 	mov	b,r5
      00055F EC               [12] 2278 	mov	a,r4
      000560 12 07 32         [24] 2279 	lcall	__gptrput
                           00048C  2280 	C$i2c.h$274$1$100 ==.
                           00048C  2281 	XG$i2c_read_data$0$0 ==.
      000563 22               [24] 2282 	ret
                                   2283 ;------------------------------------------------------------
                                   2284 ;Allocation info for local variables in function 'Accel_Init'
                                   2285 ;------------------------------------------------------------
                                   2286 ;Data2                     Allocated with name '_Accel_Init_Data2_1_103'
                                   2287 ;------------------------------------------------------------
                           00048D  2288 	G$Accel_Init$0$0 ==.
                           00048D  2289 	C$i2c.h$283$1$100 ==.
                                   2290 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:283: void Accel_Init(void)
                                   2291 ;	-----------------------------------------
                                   2292 ;	 function Accel_Init
                                   2293 ;	-----------------------------------------
      000564                       2294 _Accel_Init:
                           00048D  2295 	C$i2c.h$287$1$103 ==.
                                   2296 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:287: Data2[0]=0x23;	//normal power mode, 50Hz ODR, y & x axes enabled
      000564 75 31 23         [24] 2297 	mov	_Accel_Init_Data2_1_103,#0x23
                           000490  2298 	C$i2c.h$289$1$103 ==.
                                   2299 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:289: i2c_write_data(addr_accel, 0x20, Data2, 1);
      000567 75 28 31         [24] 2300 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      00056A 75 29 00         [24] 2301 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      00056D 75 2A 40         [24] 2302 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000570 75 27 20         [24] 2303 	mov	_i2c_write_data_PARM_2,#0x20
      000573 75 2B 01         [24] 2304 	mov	_i2c_write_data_PARM_4,#0x01
      000576 75 82 30         [24] 2305 	mov	dpl,#0x30
      000579 12 04 49         [24] 2306 	lcall	_i2c_write_data
                           0004A5  2307 	C$i2c.h$290$1$103 ==.
                                   2308 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:290: Data2[0]=0x00;	//Default - no filtering
      00057C 75 31 00         [24] 2309 	mov	_Accel_Init_Data2_1_103,#0x00
                           0004A8  2310 	C$i2c.h$292$1$103 ==.
                                   2311 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:292: i2c_write_data(addr_accel, 0x21, Data2, 1);
      00057F 75 28 31         [24] 2312 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      000582 75 29 00         [24] 2313 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      000585 75 2A 40         [24] 2314 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000588 75 27 21         [24] 2315 	mov	_i2c_write_data_PARM_2,#0x21
      00058B 75 2B 01         [24] 2316 	mov	_i2c_write_data_PARM_4,#0x01
      00058E 75 82 30         [24] 2317 	mov	dpl,#0x30
      000591 12 04 49         [24] 2318 	lcall	_i2c_write_data
                           0004BD  2319 	C$i2c.h$293$1$103 ==.
                                   2320 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:293: Data2[0]=0x00;	//default - no interrupts enabled
      000594 75 31 00         [24] 2321 	mov	_Accel_Init_Data2_1_103,#0x00
                           0004C0  2322 	C$i2c.h$294$1$103 ==.
                                   2323 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:294: i2c_write_data(addr_accel, 0x22, Data2, 1);
      000597 75 28 31         [24] 2324 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      00059A 75 29 00         [24] 2325 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      00059D 75 2A 40         [24] 2326 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      0005A0 75 27 22         [24] 2327 	mov	_i2c_write_data_PARM_2,#0x22
      0005A3 75 2B 01         [24] 2328 	mov	_i2c_write_data_PARM_4,#0x01
      0005A6 75 82 30         [24] 2329 	mov	dpl,#0x30
      0005A9 12 04 49         [24] 2330 	lcall	_i2c_write_data
                           0004D5  2331 	C$i2c.h$298$1$103 ==.
                           0004D5  2332 	XG$Accel_Init$0$0 ==.
      0005AC 22               [24] 2333 	ret
                                   2334 ;------------------------------------------------------------
                                   2335 ;Allocation info for local variables in function 'main'
                                   2336 ;------------------------------------------------------------
                                   2337 ;run_stop                  Allocated to registers r7 
                                   2338 ;------------------------------------------------------------
                           0004D6  2339 	G$main$0$0 ==.
                           0004D6  2340 	C$lab5.c$55$1$103 ==.
                                   2341 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:55: void main(void)
                                   2342 ;	-----------------------------------------
                                   2343 ;	 function main
                                   2344 ;	-----------------------------------------
      0005AD                       2345 _main:
                           0004D6  2346 	C$lab5.c$58$1$120 ==.
                                   2347 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:58: Sys_Init(); // initialize board
      0005AD 12 01 07         [24] 2348 	lcall	_Sys_Init
                           0004D9  2349 	C$lab5.c$59$1$120 ==.
                                   2350 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:59: putchar(' ');
      0005B0 75 82 20         [24] 2351 	mov	dpl,#0x20
      0005B3 12 01 1A         [24] 2352 	lcall	_putchar
                           0004DF  2353 	C$lab5.c$60$1$120 ==.
                                   2354 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:60: Port_Init();
      0005B6 12 07 31         [24] 2355 	lcall	_Port_Init
                           0004E2  2356 	C$lab5.c$61$1$120 ==.
                                   2357 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:61: PCA_Init();
      0005B9 12 07 2D         [24] 2358 	lcall	_PCA_Init
                           0004E5  2359 	C$lab5.c$62$1$120 ==.
                                   2360 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:62: SMB_Init();
      0005BC 12 06 B8         [24] 2361 	lcall	_SMB_Init
                           0004E8  2362 	C$lab5.c$63$1$120 ==.
                                   2363 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:63: Interrupt_Init();
      0005BF 12 07 30         [24] 2364 	lcall	_Interrupt_Init
                           0004EB  2365 	C$lab5.c$64$1$120 ==.
                                   2366 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:64: Accel_Init();
      0005C2 12 05 64         [24] 2367 	lcall	_Accel_Init
                           0004EE  2368 	C$lab5.c$65$1$120 ==.
                                   2369 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:65: count = 0;
      0005C5 75 42 00         [24] 2370 	mov	_count,#0x00
                           0004F1  2371 	C$lab5.c$66$1$120 ==.
                                   2372 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:66: lcd_count = 0;
      0005C8 75 43 00         [24] 2373 	mov	_lcd_count,#0x00
                           0004F4  2374 	C$lab5.c$67$1$120 ==.
                                   2375 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:67: while (1)
      0005CB                       2376 00109$:
                           0004F4  2377 	C$lab5.c$69$2$121 ==.
                                   2378 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:69: run_stop = 0;
      0005CB 7F 00            [12] 2379 	mov	r7,#0x00
                           0004F6  2380 	C$lab5.c$70$2$121 ==.
                                   2381 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:70: while (!run) // make run an sbit for the run/stop switch
      0005CD                       2382 00103$:
      0005CD 20 B7 0A         [24] 2383 	jb	_run,00105$
                           0004F9  2384 	C$lab5.c$72$3$122 ==.
                                   2385 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:72: if (run_stop == 0)
      0005D0 EF               [12] 2386 	mov	a,r7
      0005D1 70 FA            [24] 2387 	jnz	00103$
                           0004FC  2388 	C$lab5.c$74$4$123 ==.
                                   2389 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:74: set_gains(); // function adjusting feedback gains
      0005D3 12 06 4A         [24] 2390 	lcall	_set_gains
                           0004FF  2391 	C$lab5.c$75$4$123 ==.
                                   2392 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:75: run_stop = 1; // only try to update once
      0005D6 7F 01            [12] 2393 	mov	r7,#0x01
      0005D8 80 F3            [24] 2394 	sjmp	00103$
      0005DA                       2395 00105$:
                           000503  2396 	C$lab5.c$78$2$121 ==.
                                   2397 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:78: read_accels();
      0005DA 12 07 2B         [24] 2398 	lcall	_read_accels
                           000506  2399 	C$lab5.c$79$2$121 ==.
                                   2400 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:79: set_servo_PWM(); // set the servo PWM
      0005DD 12 07 2C         [24] 2401 	lcall	_set_servo_PWM
                           000509  2402 	C$lab5.c$80$2$121 ==.
                                   2403 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:80: set_drive_PWM(); // set drive PWM
      0005E0 12 07 2F         [24] 2404 	lcall	_set_drive_PWM
                           00050C  2405 	C$lab5.c$81$2$121 ==.
                                   2406 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:81: new_accels = 0;
      0005E3 75 3E 00         [24] 2407 	mov	_new_accels,#0x00
                           00050F  2408 	C$lab5.c$82$2$121 ==.
                                   2409 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:82: if (new_lcd) // enough overflow to write to LCD
      0005E6 E5 3F            [12] 2410 	mov	a,_new_lcd
      0005E8 60 E1            [24] 2411 	jz	00109$
                           000513  2412 	C$lab5.c$84$3$124 ==.
                                   2413 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:84: updateLCD(); // display values
      0005EA 12 07 2E         [24] 2414 	lcall	_updateLCD
                           000516  2415 	C$lab5.c$85$3$124 ==.
                                   2416 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:85: new_lcd = 0;
      0005ED 75 3F 00         [24] 2417 	mov	_new_lcd,#0x00
                           000519  2418 	C$lab5.c$86$3$124 ==.
                                   2419 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:86: lcd_count = 0;
      0005F0 75 43 00         [24] 2420 	mov	_lcd_count,#0x00
      0005F3 80 D6            [24] 2421 	sjmp	00109$
                           00051E  2422 	C$lab5.c$89$1$120 ==.
                           00051E  2423 	XG$main$0$0 ==.
      0005F5 22               [24] 2424 	ret
                                   2425 ;------------------------------------------------------------
                                   2426 ;Allocation info for local variables in function 'PCA_ISR'
                                   2427 ;------------------------------------------------------------
                           00051F  2428 	G$PCA_ISR$0$0 ==.
                           00051F  2429 	C$lab5.c$97$1$120 ==.
                                   2430 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:97: void PCA_ISR ( void ) __interrupt 9
                                   2431 ;	-----------------------------------------
                                   2432 ;	 function PCA_ISR
                                   2433 ;	-----------------------------------------
      0005F6                       2434 _PCA_ISR:
      0005F6 C0 E0            [24] 2435 	push	acc
      0005F8 C0 D0            [24] 2436 	push	psw
                           000523  2437 	C$lab5.c$99$1$126 ==.
                                   2438 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:99: if (CF)
                           000523  2439 	C$lab5.c$101$2$127 ==.
                                   2440 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:101: CF = 0; // clear overflow indicator
      0005FA 10 DF 02         [24] 2441 	jbc	_CF,00113$
      0005FD 80 16            [24] 2442 	sjmp	00104$
      0005FF                       2443 00113$:
                           000528  2444 	C$lab5.c$102$2$127 ==.
                                   2445 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:102: count++;
      0005FF 05 42            [12] 2446 	inc	_count
                           00052A  2447 	C$lab5.c$103$2$127 ==.
                                   2448 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:103: lcd_count++;
      000601 05 43            [12] 2449 	inc	_lcd_count
                           00052C  2450 	C$lab5.c$104$2$127 ==.
                                   2451 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:104: if (lcd_count>=15)
      000603 74 F1            [12] 2452 	mov	a,#0x100 - 0x0F
      000605 25 43            [12] 2453 	add	a,_lcd_count
      000607 50 06            [24] 2454 	jnc	00102$
                           000532  2455 	C$lab5.c$106$3$128 ==.
                                   2456 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:106: new_lcd = 1;
      000609 75 3F 01         [24] 2457 	mov	_new_lcd,#0x01
                           000535  2458 	C$lab5.c$107$3$128 ==.
                                   2459 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:107: lcd_count = 0;
      00060C 75 43 00         [24] 2460 	mov	_lcd_count,#0x00
      00060F                       2461 00102$:
                           000538  2462 	C$lab5.c$109$2$127 ==.
                                   2463 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:109: PCA0L = PCA_START;
      00060F 75 E9 00         [24] 2464 	mov	_PCA0L,#0x00
                           00053B  2465 	C$lab5.c$110$2$127 ==.
                                   2466 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:110: PCA0H = PCA_START >> 8;
      000612 75 F9 70         [24] 2467 	mov	_PCA0H,#0x70
      000615                       2468 00104$:
                           00053E  2469 	C$lab5.c$113$1$126 ==.
                                   2470 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:113: PCA0CN &= 0xC0;
      000615 53 D8 C0         [24] 2471 	anl	_PCA0CN,#0xC0
      000618 D0 D0            [24] 2472 	pop	psw
      00061A D0 E0            [24] 2473 	pop	acc
                           000545  2474 	C$lab5.c$114$1$126 ==.
                           000545  2475 	XG$PCA_ISR$0$0 ==.
      00061C 32               [24] 2476 	reti
                                   2477 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   2478 ;	eliminated unneeded push/pop dpl
                                   2479 ;	eliminated unneeded push/pop dph
                                   2480 ;	eliminated unneeded push/pop b
                                   2481 ;------------------------------------------------------------
                                   2482 ;Allocation info for local variables in function 'wait'
                                   2483 ;------------------------------------------------------------
                                   2484 ;old_count                 Allocated to registers r6 r7 
                                   2485 ;------------------------------------------------------------
                           000546  2486 	G$wait$0$0 ==.
                           000546  2487 	C$lab5.c$116$1$126 ==.
                                   2488 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:116: void wait(void)
                                   2489 ;	-----------------------------------------
                                   2490 ;	 function wait
                                   2491 ;	-----------------------------------------
      00061D                       2492 _wait:
                           000546  2493 	C$lab5.c$118$1$130 ==.
                                   2494 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:118: int old_count = count+1;
      00061D AE 42            [24] 2495 	mov	r6,_count
      00061F 7F 00            [12] 2496 	mov	r7,#0x00
      000621 0E               [12] 2497 	inc	r6
      000622 BE 00 01         [24] 2498 	cjne	r6,#0x00,00109$
      000625 0F               [12] 2499 	inc	r7
      000626                       2500 00109$:
                           00054F  2501 	C$lab5.c$119$1$130 ==.
                                   2502 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:119: while (old_count> count);
      000626                       2503 00101$:
      000626 AC 42            [24] 2504 	mov	r4,_count
      000628 7D 00            [12] 2505 	mov	r5,#0x00
      00062A C3               [12] 2506 	clr	c
      00062B EC               [12] 2507 	mov	a,r4
      00062C 9E               [12] 2508 	subb	a,r6
      00062D ED               [12] 2509 	mov	a,r5
      00062E 64 80            [12] 2510 	xrl	a,#0x80
      000630 8F F0            [24] 2511 	mov	b,r7
      000632 63 F0 80         [24] 2512 	xrl	b,#0x80
      000635 95 F0            [12] 2513 	subb	a,b
      000637 40 ED            [24] 2514 	jc	00101$
                           000562  2515 	C$lab5.c$120$1$130 ==.
                           000562  2516 	XG$wait$0$0 ==.
      000639 22               [24] 2517 	ret
                                   2518 ;------------------------------------------------------------
                                   2519 ;Allocation info for local variables in function 'start'
                                   2520 ;------------------------------------------------------------
                           000563  2521 	G$start$0$0 ==.
                           000563  2522 	C$lab5.c$122$1$130 ==.
                                   2523 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:122: void start(void)            ///WAITS UNTIL '*' IS ENTERED
                                   2524 ;	-----------------------------------------
                                   2525 ;	 function start
                                   2526 ;	-----------------------------------------
      00063A                       2527 _start:
                           000563  2528 	C$lab5.c$124$1$132 ==.
                                   2529 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:124: while (read_keypad() != '*') wait();
      00063A                       2530 00101$:
      00063A 12 01 F1         [24] 2531 	lcall	_read_keypad
      00063D AF 82            [24] 2532 	mov	r7,dpl
      00063F BF 2A 02         [24] 2533 	cjne	r7,#0x2A,00112$
      000642 80 05            [24] 2534 	sjmp	00104$
      000644                       2535 00112$:
      000644 12 06 1D         [24] 2536 	lcall	_wait
      000647 80 F1            [24] 2537 	sjmp	00101$
      000649                       2538 00104$:
                           000572  2539 	C$lab5.c$125$1$132 ==.
                           000572  2540 	XG$start$0$0 ==.
      000649 22               [24] 2541 	ret
                                   2542 ;------------------------------------------------------------
                                   2543 ;Allocation info for local variables in function 'set_gains'
                                   2544 ;------------------------------------------------------------
                           000573  2545 	G$set_gains$0$0 ==.
                           000573  2546 	C$lab5.c$127$1$132 ==.
                                   2547 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:127: void set_gains(void)
                                   2548 ;	-----------------------------------------
                                   2549 ;	 function set_gains
                                   2550 ;	-----------------------------------------
      00064A                       2551 _set_gains:
                           000573  2552 	C$lab5.c$129$1$134 ==.
                                   2553 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:129: lcd_clear();
      00064A 12 01 B8         [24] 2554 	lcall	_lcd_clear
                           000576  2555 	C$lab5.c$130$1$134 ==.
                                   2556 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:130: lcd_print("Please enter a ks value:\n ");
      00064D 74 79            [12] 2557 	mov	a,#___str_3
      00064F C0 E0            [24] 2558 	push	acc
      000651 74 0E            [12] 2559 	mov	a,#(___str_3 >> 8)
      000653 C0 E0            [24] 2560 	push	acc
      000655 74 80            [12] 2561 	mov	a,#0x80
      000657 C0 E0            [24] 2562 	push	acc
      000659 12 01 33         [24] 2563 	lcall	_lcd_print
      00065C 15 81            [12] 2564 	dec	sp
      00065E 15 81            [12] 2565 	dec	sp
      000660 15 81            [12] 2566 	dec	sp
                           00058B  2567 	C$lab5.c$131$1$134 ==.
                                   2568 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:131: ks = kpd_input(0);
      000662 75 82 00         [24] 2569 	mov	dpl,#0x00
      000665 12 02 70         [24] 2570 	lcall	_kpd_input
      000668 AE 82            [24] 2571 	mov	r6,dpl
      00066A 8E 44            [24] 2572 	mov	_ks,r6
                           000595  2573 	C$lab5.c$132$1$134 ==.
                                   2574 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:132: lcd_clear();
      00066C 12 01 B8         [24] 2575 	lcall	_lcd_clear
                           000598  2576 	C$lab5.c$133$1$134 ==.
                                   2577 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:133: lcd_print("Please enter a kdx value:\n ");
      00066F 74 94            [12] 2578 	mov	a,#___str_4
      000671 C0 E0            [24] 2579 	push	acc
      000673 74 0E            [12] 2580 	mov	a,#(___str_4 >> 8)
      000675 C0 E0            [24] 2581 	push	acc
      000677 74 80            [12] 2582 	mov	a,#0x80
      000679 C0 E0            [24] 2583 	push	acc
      00067B 12 01 33         [24] 2584 	lcall	_lcd_print
      00067E 15 81            [12] 2585 	dec	sp
      000680 15 81            [12] 2586 	dec	sp
      000682 15 81            [12] 2587 	dec	sp
                           0005AD  2588 	C$lab5.c$134$1$134 ==.
                                   2589 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:134: kdx = kpd_input(0);
      000684 75 82 00         [24] 2590 	mov	dpl,#0x00
      000687 12 02 70         [24] 2591 	lcall	_kpd_input
      00068A AE 82            [24] 2592 	mov	r6,dpl
      00068C 8E 46            [24] 2593 	mov	_kdx,r6
                           0005B7  2594 	C$lab5.c$135$1$134 ==.
                                   2595 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:135: lcd_clear();
      00068E 12 01 B8         [24] 2596 	lcall	_lcd_clear
                           0005BA  2597 	C$lab5.c$136$1$134 ==.
                                   2598 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:136: lcd_print("Please enter a kdy value:\n ");
      000691 74 B0            [12] 2599 	mov	a,#___str_5
      000693 C0 E0            [24] 2600 	push	acc
      000695 74 0E            [12] 2601 	mov	a,#(___str_5 >> 8)
      000697 C0 E0            [24] 2602 	push	acc
      000699 74 80            [12] 2603 	mov	a,#0x80
      00069B C0 E0            [24] 2604 	push	acc
      00069D 12 01 33         [24] 2605 	lcall	_lcd_print
      0006A0 15 81            [12] 2606 	dec	sp
      0006A2 15 81            [12] 2607 	dec	sp
      0006A4 15 81            [12] 2608 	dec	sp
                           0005CF  2609 	C$lab5.c$137$1$134 ==.
                                   2610 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:137: kdy = kpd_input(0);
      0006A6 75 82 00         [24] 2611 	mov	dpl,#0x00
      0006A9 12 02 70         [24] 2612 	lcall	_kpd_input
      0006AC AE 82            [24] 2613 	mov	r6,dpl
      0006AE 8E 45            [24] 2614 	mov	_kdy,r6
                           0005D9  2615 	C$lab5.c$138$1$134 ==.
                                   2616 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:138: lcd_clear();
      0006B0 12 01 B8         [24] 2617 	lcall	_lcd_clear
                           0005DC  2618 	C$lab5.c$139$1$134 ==.
                           0005DC  2619 	XG$set_gains$0$0 ==.
      0006B3 22               [24] 2620 	ret
                                   2621 ;------------------------------------------------------------
                                   2622 ;Allocation info for local variables in function 'XBR0_Init'
                                   2623 ;------------------------------------------------------------
                           0005DD  2624 	G$XBR0_Init$0$0 ==.
                           0005DD  2625 	C$lab5.c$141$1$134 ==.
                                   2626 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:141: void XBR0_Init(void)
                                   2627 ;	-----------------------------------------
                                   2628 ;	 function XBR0_Init
                                   2629 ;	-----------------------------------------
      0006B4                       2630 _XBR0_Init:
                           0005DD  2631 	C$lab5.c$143$1$136 ==.
                                   2632 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:143: XBR0 = 0x17;
      0006B4 75 E1 17         [24] 2633 	mov	_XBR0,#0x17
                           0005E0  2634 	C$lab5.c$144$1$136 ==.
                           0005E0  2635 	XG$XBR0_Init$0$0 ==.
      0006B7 22               [24] 2636 	ret
                                   2637 ;------------------------------------------------------------
                                   2638 ;Allocation info for local variables in function 'SMB_Init'
                                   2639 ;------------------------------------------------------------
                           0005E1  2640 	G$SMB_Init$0$0 ==.
                           0005E1  2641 	C$lab5.c$146$1$136 ==.
                                   2642 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:146: void SMB_Init(void)
                                   2643 ;	-----------------------------------------
                                   2644 ;	 function SMB_Init
                                   2645 ;	-----------------------------------------
      0006B8                       2646 _SMB_Init:
                           0005E1  2647 	C$lab5.c$148$1$138 ==.
                                   2648 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:148: SMB0CR =0x93;
      0006B8 75 CF 93         [24] 2649 	mov	_SMB0CR,#0x93
                           0005E4  2650 	C$lab5.c$149$1$138 ==.
                                   2651 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:149: ENSMB =1;
      0006BB D2 C6            [12] 2652 	setb	_ENSMB
                           0005E6  2653 	C$lab5.c$150$1$138 ==.
                           0005E6  2654 	XG$SMB_Init$0$0 ==.
      0006BD 22               [24] 2655 	ret
                                   2656 ;------------------------------------------------------------
                                   2657 ;Allocation info for local variables in function 'Update_Value'
                                   2658 ;------------------------------------------------------------
                                   2659 ;incr                      Allocated with name '_Update_Value_PARM_2'
                                   2660 ;maxval                    Allocated with name '_Update_Value_PARM_3'
                                   2661 ;minval                    Allocated with name '_Update_Value_PARM_4'
                                   2662 ;Constant                  Allocated to registers r6 r7 
                                   2663 ;deflt                     Allocated to registers r4 r5 
                                   2664 ;input                     Allocated to registers r3 
                                   2665 ;------------------------------------------------------------
                           0005E7  2666 	G$Update_Value$0$0 ==.
                           0005E7  2667 	C$lab5.c$152$1$138 ==.
                                   2668 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:152: void Update_Value(int Constant, unsigned char incr, int maxval, int minval)
                                   2669 ;	-----------------------------------------
                                   2670 ;	 function Update_Value
                                   2671 ;	-----------------------------------------
      0006BE                       2672 _Update_Value:
      0006BE AE 82            [24] 2673 	mov	r6,dpl
      0006C0 AF 83            [24] 2674 	mov	r7,dph
                           0005EB  2675 	C$lab5.c$158$1$140 ==.
                                   2676 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:158: deflt = Constant;
      0006C2 8E 04            [24] 2677 	mov	ar4,r6
      0006C4 8F 05            [24] 2678 	mov	ar5,r7
                           0005EF  2679 	C$lab5.c$159$1$140 ==.
                                   2680 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:159: while(1)
      0006C6                       2681 00114$:
                           0005EF  2682 	C$lab5.c$161$2$141 ==.
                                   2683 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:161: input = getchar();
      0006C6 C0 07            [24] 2684 	push	ar7
      0006C8 C0 06            [24] 2685 	push	ar6
      0006CA C0 05            [24] 2686 	push	ar5
      0006CC C0 04            [24] 2687 	push	ar4
      0006CE 12 01 24         [24] 2688 	lcall	_getchar
      0006D1 AB 82            [24] 2689 	mov	r3,dpl
      0006D3 D0 04            [24] 2690 	pop	ar4
      0006D5 D0 05            [24] 2691 	pop	ar5
      0006D7 D0 06            [24] 2692 	pop	ar6
      0006D9 D0 07            [24] 2693 	pop	ar7
                           000604  2694 	C$lab5.c$162$2$141 ==.
                                   2695 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:162: if (input == 'c') Constant = deflt;
      0006DB BB 63 04         [24] 2696 	cjne	r3,#0x63,00102$
      0006DE 8C 06            [24] 2697 	mov	ar6,r4
      0006E0 8D 07            [24] 2698 	mov	ar7,r5
      0006E2                       2699 00102$:
                           00060B  2700 	C$lab5.c$163$2$141 ==.
                                   2701 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:163: if (input == 'i')
      0006E2 BB 69 1F         [24] 2702 	cjne	r3,#0x69,00106$
                           00060E  2703 	C$lab5.c$165$3$142 ==.
                                   2704 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:165: Constant += incr;
      0006E5 A9 4B            [24] 2705 	mov	r1,_Update_Value_PARM_2
      0006E7 7A 00            [12] 2706 	mov	r2,#0x00
      0006E9 E9               [12] 2707 	mov	a,r1
      0006EA 2E               [12] 2708 	add	a,r6
      0006EB FE               [12] 2709 	mov	r6,a
      0006EC EA               [12] 2710 	mov	a,r2
      0006ED 3F               [12] 2711 	addc	a,r7
      0006EE FF               [12] 2712 	mov	r7,a
                           000618  2713 	C$lab5.c$166$3$142 ==.
                                   2714 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:166: if (Constant > maxval) Constant = maxval;
      0006EF C3               [12] 2715 	clr	c
      0006F0 E5 4C            [12] 2716 	mov	a,_Update_Value_PARM_3
      0006F2 9E               [12] 2717 	subb	a,r6
      0006F3 E5 4D            [12] 2718 	mov	a,(_Update_Value_PARM_3 + 1)
      0006F5 64 80            [12] 2719 	xrl	a,#0x80
      0006F7 8F F0            [24] 2720 	mov	b,r7
      0006F9 63 F0 80         [24] 2721 	xrl	b,#0x80
      0006FC 95 F0            [12] 2722 	subb	a,b
      0006FE 50 04            [24] 2723 	jnc	00106$
      000700 AE 4C            [24] 2724 	mov	r6,_Update_Value_PARM_3
      000702 AF 4D            [24] 2725 	mov	r7,(_Update_Value_PARM_3 + 1)
      000704                       2726 00106$:
                           00062D  2727 	C$lab5.c$168$2$141 ==.
                                   2728 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:168: if (input == 'd')
      000704 BB 64 20         [24] 2729 	cjne	r3,#0x64,00110$
                           000630  2730 	C$lab5.c$170$3$143 ==.
                                   2731 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:170: Constant -= incr;
      000707 A9 4B            [24] 2732 	mov	r1,_Update_Value_PARM_2
      000709 7A 00            [12] 2733 	mov	r2,#0x00
      00070B EE               [12] 2734 	mov	a,r6
      00070C C3               [12] 2735 	clr	c
      00070D 99               [12] 2736 	subb	a,r1
      00070E FE               [12] 2737 	mov	r6,a
      00070F EF               [12] 2738 	mov	a,r7
      000710 9A               [12] 2739 	subb	a,r2
      000711 FF               [12] 2740 	mov	r7,a
                           00063B  2741 	C$lab5.c$171$3$143 ==.
                                   2742 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:171: if (Constant < minval) Constant = minval;
      000712 C3               [12] 2743 	clr	c
      000713 EE               [12] 2744 	mov	a,r6
      000714 95 4E            [12] 2745 	subb	a,_Update_Value_PARM_4
      000716 EF               [12] 2746 	mov	a,r7
      000717 64 80            [12] 2747 	xrl	a,#0x80
      000719 85 4F F0         [24] 2748 	mov	b,(_Update_Value_PARM_4 + 1)
      00071C 63 F0 80         [24] 2749 	xrl	b,#0x80
      00071F 95 F0            [12] 2750 	subb	a,b
      000721 50 04            [24] 2751 	jnc	00110$
      000723 AE 4E            [24] 2752 	mov	r6,_Update_Value_PARM_4
      000725 AF 4F            [24] 2753 	mov	r7,(_Update_Value_PARM_4 + 1)
      000727                       2754 00110$:
                           000650  2755 	C$lab5.c$173$2$141 ==.
                                   2756 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:173: if (input == 'u')
      000727 BB 75 9C         [24] 2757 	cjne	r3,#0x75,00114$
                           000653  2758 	C$lab5.c$175$3$144 ==.
                                   2759 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:175: return;
                           000653  2760 	C$lab5.c$178$1$140 ==.
                           000653  2761 	XG$Update_Value$0$0 ==.
      00072A 22               [24] 2762 	ret
                                   2763 ;------------------------------------------------------------
                                   2764 ;Allocation info for local variables in function 'read_accels'
                                   2765 ;------------------------------------------------------------
                           000654  2766 	G$read_accels$0$0 ==.
                           000654  2767 	C$lab5.c$180$1$140 ==.
                                   2768 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:180: void read_accels(void)
                                   2769 ;	-----------------------------------------
                                   2770 ;	 function read_accels
                                   2771 ;	-----------------------------------------
      00072B                       2772 _read_accels:
                           000654  2773 	C$lab5.c$183$1$140 ==.
                                   2774 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:183: }
                           000654  2775 	C$lab5.c$183$1$140 ==.
                           000654  2776 	XG$read_accels$0$0 ==.
      00072B 22               [24] 2777 	ret
                                   2778 ;------------------------------------------------------------
                                   2779 ;Allocation info for local variables in function 'set_servo_PWM'
                                   2780 ;------------------------------------------------------------
                           000655  2781 	G$set_servo_PWM$0$0 ==.
                           000655  2782 	C$lab5.c$185$1$140 ==.
                                   2783 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:185: void set_servo_PWM(void)
                                   2784 ;	-----------------------------------------
                                   2785 ;	 function set_servo_PWM
                                   2786 ;	-----------------------------------------
      00072C                       2787 _set_servo_PWM:
                           000655  2788 	C$lab5.c$188$1$140 ==.
                                   2789 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:188: }
                           000655  2790 	C$lab5.c$188$1$140 ==.
                           000655  2791 	XG$set_servo_PWM$0$0 ==.
      00072C 22               [24] 2792 	ret
                                   2793 ;------------------------------------------------------------
                                   2794 ;Allocation info for local variables in function 'PCA_Init'
                                   2795 ;------------------------------------------------------------
                           000656  2796 	G$PCA_Init$0$0 ==.
                           000656  2797 	C$lab5.c$190$1$140 ==.
                                   2798 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:190: void PCA_Init(void)
                                   2799 ;	-----------------------------------------
                                   2800 ;	 function PCA_Init
                                   2801 ;	-----------------------------------------
      00072D                       2802 _PCA_Init:
                           000656  2803 	C$lab5.c$193$1$140 ==.
                                   2804 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:193: }
                           000656  2805 	C$lab5.c$193$1$140 ==.
                           000656  2806 	XG$PCA_Init$0$0 ==.
      00072D 22               [24] 2807 	ret
                                   2808 ;------------------------------------------------------------
                                   2809 ;Allocation info for local variables in function 'updateLCD'
                                   2810 ;------------------------------------------------------------
                           000657  2811 	G$updateLCD$0$0 ==.
                           000657  2812 	C$lab5.c$195$1$140 ==.
                                   2813 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:195: void updateLCD(void)
                                   2814 ;	-----------------------------------------
                                   2815 ;	 function updateLCD
                                   2816 ;	-----------------------------------------
      00072E                       2817 _updateLCD:
                           000657  2818 	C$lab5.c$198$1$140 ==.
                                   2819 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:198: }
                           000657  2820 	C$lab5.c$198$1$140 ==.
                           000657  2821 	XG$updateLCD$0$0 ==.
      00072E 22               [24] 2822 	ret
                                   2823 ;------------------------------------------------------------
                                   2824 ;Allocation info for local variables in function 'set_drive_PWM'
                                   2825 ;------------------------------------------------------------
                           000658  2826 	G$set_drive_PWM$0$0 ==.
                           000658  2827 	C$lab5.c$200$1$140 ==.
                                   2828 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:200: void set_drive_PWM(void)
                                   2829 ;	-----------------------------------------
                                   2830 ;	 function set_drive_PWM
                                   2831 ;	-----------------------------------------
      00072F                       2832 _set_drive_PWM:
                           000658  2833 	C$lab5.c$203$1$140 ==.
                                   2834 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:203: }
                           000658  2835 	C$lab5.c$203$1$140 ==.
                           000658  2836 	XG$set_drive_PWM$0$0 ==.
      00072F 22               [24] 2837 	ret
                                   2838 ;------------------------------------------------------------
                                   2839 ;Allocation info for local variables in function 'Interrupt_Init'
                                   2840 ;------------------------------------------------------------
                           000659  2841 	G$Interrupt_Init$0$0 ==.
                           000659  2842 	C$lab5.c$205$1$140 ==.
                                   2843 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:205: void Interrupt_Init(void)
                                   2844 ;	-----------------------------------------
                                   2845 ;	 function Interrupt_Init
                                   2846 ;	-----------------------------------------
      000730                       2847 _Interrupt_Init:
                           000659  2848 	C$lab5.c$208$1$140 ==.
                                   2849 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:208: }
                           000659  2850 	C$lab5.c$208$1$140 ==.
                           000659  2851 	XG$Interrupt_Init$0$0 ==.
      000730 22               [24] 2852 	ret
                                   2853 ;------------------------------------------------------------
                                   2854 ;Allocation info for local variables in function 'Port_Init'
                                   2855 ;------------------------------------------------------------
                           00065A  2856 	G$Port_Init$0$0 ==.
                           00065A  2857 	C$lab5.c$210$1$140 ==.
                                   2858 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:210: void Port_Init(void)
                                   2859 ;	-----------------------------------------
                                   2860 ;	 function Port_Init
                                   2861 ;	-----------------------------------------
      000731                       2862 _Port_Init:
                           00065A  2863 	C$lab5.c$213$1$140 ==.
                                   2864 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:213: }
                           00065A  2865 	C$lab5.c$213$1$140 ==.
                           00065A  2866 	XG$Port_Init$0$0 ==.
      000731 22               [24] 2867 	ret
                                   2868 	.area CSEG    (CODE)
                                   2869 	.area CONST   (CODE)
                           000000  2870 Flab5$__str_0$0$0 == .
      000E50                       2871 ___str_0:
      000E50 0A                    2872 	.db 0x0A
      000E51 54 79 70 65 20 64 69  2873 	.ascii "Type digits; end w/#"
             67 69 74 73 3B 20 65
             6E 64 20 77 2F 23
      000E65 00                    2874 	.db 0x00
                           000016  2875 Flab5$__str_1$0$0 == .
      000E66                       2876 ___str_1:
      000E66 20 20 20 20 20 25 63  2877 	.ascii "     %c%c%c%c%c"
             25 63 25 63 25 63 25
             63
      000E75 00                    2878 	.db 0x00
                           000026  2879 Flab5$__str_2$0$0 == .
      000E76                       2880 ___str_2:
      000E76 25 63                 2881 	.ascii "%c"
      000E78 00                    2882 	.db 0x00
                           000029  2883 Flab5$__str_3$0$0 == .
      000E79                       2884 ___str_3:
      000E79 50 6C 65 61 73 65 20  2885 	.ascii "Please enter a ks value:"
             65 6E 74 65 72 20 61
             20 6B 73 20 76 61 6C
             75 65 3A
      000E91 0A                    2886 	.db 0x0A
      000E92 20                    2887 	.ascii " "
      000E93 00                    2888 	.db 0x00
                           000044  2889 Flab5$__str_4$0$0 == .
      000E94                       2890 ___str_4:
      000E94 50 6C 65 61 73 65 20  2891 	.ascii "Please enter a kdx value:"
             65 6E 74 65 72 20 61
             20 6B 64 78 20 76 61
             6C 75 65 3A
      000EAD 0A                    2892 	.db 0x0A
      000EAE 20                    2893 	.ascii " "
      000EAF 00                    2894 	.db 0x00
                           000060  2895 Flab5$__str_5$0$0 == .
      000EB0                       2896 ___str_5:
      000EB0 50 6C 65 61 73 65 20  2897 	.ascii "Please enter a kdy value:"
             65 6E 74 65 72 20 61
             20 6B 64 79 20 76 61
             6C 75 65 3A
      000EC9 0A                    2898 	.db 0x0A
      000ECA 20                    2899 	.ascii " "
      000ECB 00                    2900 	.db 0x00
                                   2901 	.area XINIT   (CODE)
                                   2902 	.area CABS    (ABS,CODE)
