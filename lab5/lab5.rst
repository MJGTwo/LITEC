                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (Apr  5 2014) (MINGW32)
                                      4 ; This file was generated Tue May 05 10:54:03 2015
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
                                     18 	.globl _printf
                                     19 	.globl _Sys_Init
                                     20 	.globl _UART0_Init
                                     21 	.globl _SYSCLK_Init
                                     22 	.globl _run
                                     23 	.globl _BUS_SCL
                                     24 	.globl _BUS_TOE
                                     25 	.globl _BUS_FTE
                                     26 	.globl _BUS_AA
                                     27 	.globl _BUS_INT
                                     28 	.globl _BUS_STOP
                                     29 	.globl _BUS_START
                                     30 	.globl _BUS_EN
                                     31 	.globl _BUS_BUSY
                                     32 	.globl _SPIF
                                     33 	.globl _WCOL
                                     34 	.globl _MODF
                                     35 	.globl _RXOVRN
                                     36 	.globl _TXBSY
                                     37 	.globl _SLVSEL
                                     38 	.globl _MSTEN
                                     39 	.globl _SPIEN
                                     40 	.globl _AD0EN
                                     41 	.globl _ADCEN
                                     42 	.globl _AD0TM
                                     43 	.globl _ADCTM
                                     44 	.globl _AD0INT
                                     45 	.globl _ADCINT
                                     46 	.globl _AD0BUSY
                                     47 	.globl _ADBUSY
                                     48 	.globl _AD0CM1
                                     49 	.globl _ADSTM1
                                     50 	.globl _AD0CM0
                                     51 	.globl _ADSTM0
                                     52 	.globl _AD0WINT
                                     53 	.globl _ADWINT
                                     54 	.globl _AD0LJST
                                     55 	.globl _ADLJST
                                     56 	.globl _CF
                                     57 	.globl _CR
                                     58 	.globl _CCF4
                                     59 	.globl _CCF3
                                     60 	.globl _CCF2
                                     61 	.globl _CCF1
                                     62 	.globl _CCF0
                                     63 	.globl _CY
                                     64 	.globl _AC
                                     65 	.globl _F0
                                     66 	.globl _RS1
                                     67 	.globl _RS0
                                     68 	.globl _OV
                                     69 	.globl _F1
                                     70 	.globl _P
                                     71 	.globl _TF2
                                     72 	.globl _EXF2
                                     73 	.globl _RCLK
                                     74 	.globl _TCLK
                                     75 	.globl _EXEN2
                                     76 	.globl _TR2
                                     77 	.globl _CT2
                                     78 	.globl _CPRL2
                                     79 	.globl _BUSY
                                     80 	.globl _ENSMB
                                     81 	.globl _STA
                                     82 	.globl _STO
                                     83 	.globl _SI
                                     84 	.globl _AA
                                     85 	.globl _SMBFTE
                                     86 	.globl _SMBTOE
                                     87 	.globl _PT2
                                     88 	.globl _PS
                                     89 	.globl _PS0
                                     90 	.globl _PT1
                                     91 	.globl _PX1
                                     92 	.globl _PT0
                                     93 	.globl _PX0
                                     94 	.globl _P3_7
                                     95 	.globl _P3_6
                                     96 	.globl _P3_5
                                     97 	.globl _P3_4
                                     98 	.globl _P3_3
                                     99 	.globl _P3_2
                                    100 	.globl _P3_1
                                    101 	.globl _P3_0
                                    102 	.globl _EA
                                    103 	.globl _ET2
                                    104 	.globl _ES
                                    105 	.globl _ES0
                                    106 	.globl _ET1
                                    107 	.globl _EX1
                                    108 	.globl _ET0
                                    109 	.globl _EX0
                                    110 	.globl _P2_7
                                    111 	.globl _P2_6
                                    112 	.globl _P2_5
                                    113 	.globl _P2_4
                                    114 	.globl _P2_3
                                    115 	.globl _P2_2
                                    116 	.globl _P2_1
                                    117 	.globl _P2_0
                                    118 	.globl _S0MODE
                                    119 	.globl _SM00
                                    120 	.globl _SM0
                                    121 	.globl _SM10
                                    122 	.globl _SM1
                                    123 	.globl _MCE0
                                    124 	.globl _SM20
                                    125 	.globl _SM2
                                    126 	.globl _REN0
                                    127 	.globl _REN
                                    128 	.globl _TB80
                                    129 	.globl _TB8
                                    130 	.globl _RB80
                                    131 	.globl _RB8
                                    132 	.globl _TI0
                                    133 	.globl _TI
                                    134 	.globl _RI0
                                    135 	.globl _RI
                                    136 	.globl _P1_7
                                    137 	.globl _P1_6
                                    138 	.globl _P1_5
                                    139 	.globl _P1_4
                                    140 	.globl _P1_3
                                    141 	.globl _P1_2
                                    142 	.globl _P1_1
                                    143 	.globl _P1_0
                                    144 	.globl _TF1
                                    145 	.globl _TR1
                                    146 	.globl _TF0
                                    147 	.globl _TR0
                                    148 	.globl _IE1
                                    149 	.globl _IT1
                                    150 	.globl _IE0
                                    151 	.globl _IT0
                                    152 	.globl _P0_7
                                    153 	.globl _P0_6
                                    154 	.globl _P0_5
                                    155 	.globl _P0_4
                                    156 	.globl _P0_3
                                    157 	.globl _P0_2
                                    158 	.globl _P0_1
                                    159 	.globl _P0_0
                                    160 	.globl _PCA0CP4
                                    161 	.globl _PCA0CP3
                                    162 	.globl _PCA0CP2
                                    163 	.globl _PCA0CP1
                                    164 	.globl _PCA0CP0
                                    165 	.globl _PCA0
                                    166 	.globl _DAC1
                                    167 	.globl _DAC0
                                    168 	.globl _ADC0LT
                                    169 	.globl _ADC0GT
                                    170 	.globl _ADC0
                                    171 	.globl _RCAP4
                                    172 	.globl _TMR4
                                    173 	.globl _TMR3RL
                                    174 	.globl _TMR3
                                    175 	.globl _RCAP2
                                    176 	.globl _TMR2
                                    177 	.globl _TMR1
                                    178 	.globl _TMR0
                                    179 	.globl _WDTCN
                                    180 	.globl _PCA0CPH4
                                    181 	.globl _PCA0CPH3
                                    182 	.globl _PCA0CPH2
                                    183 	.globl _PCA0CPH1
                                    184 	.globl _PCA0CPH0
                                    185 	.globl _PCA0H
                                    186 	.globl _SPI0CN
                                    187 	.globl _EIP2
                                    188 	.globl _EIP1
                                    189 	.globl _TH4
                                    190 	.globl _TL4
                                    191 	.globl _SADDR1
                                    192 	.globl _SBUF1
                                    193 	.globl _SCON1
                                    194 	.globl _B
                                    195 	.globl _RSTSRC
                                    196 	.globl _PCA0CPL4
                                    197 	.globl _PCA0CPL3
                                    198 	.globl _PCA0CPL2
                                    199 	.globl _PCA0CPL1
                                    200 	.globl _PCA0CPL0
                                    201 	.globl _PCA0L
                                    202 	.globl _ADC0CN
                                    203 	.globl _EIE2
                                    204 	.globl _EIE1
                                    205 	.globl _RCAP4H
                                    206 	.globl _RCAP4L
                                    207 	.globl _XBR2
                                    208 	.globl _XBR1
                                    209 	.globl _XBR0
                                    210 	.globl _ACC
                                    211 	.globl _PCA0CPM4
                                    212 	.globl _PCA0CPM3
                                    213 	.globl _PCA0CPM2
                                    214 	.globl _PCA0CPM1
                                    215 	.globl _PCA0CPM0
                                    216 	.globl _PCA0MD
                                    217 	.globl _PCA0CN
                                    218 	.globl _DAC1CN
                                    219 	.globl _DAC1H
                                    220 	.globl _DAC1L
                                    221 	.globl _DAC0CN
                                    222 	.globl _DAC0H
                                    223 	.globl _DAC0L
                                    224 	.globl _REF0CN
                                    225 	.globl _PSW
                                    226 	.globl _SMB0CR
                                    227 	.globl _TH2
                                    228 	.globl _TL2
                                    229 	.globl _RCAP2H
                                    230 	.globl _RCAP2L
                                    231 	.globl _T4CON
                                    232 	.globl _T2CON
                                    233 	.globl _ADC0LTH
                                    234 	.globl _ADC0LTL
                                    235 	.globl _ADC0GTH
                                    236 	.globl _ADC0GTL
                                    237 	.globl _SMB0ADR
                                    238 	.globl _SMB0DAT
                                    239 	.globl _SMB0STA
                                    240 	.globl _SMB0CN
                                    241 	.globl _ADC0H
                                    242 	.globl _ADC0L
                                    243 	.globl _P1MDIN
                                    244 	.globl _ADC0CF
                                    245 	.globl _AMX0SL
                                    246 	.globl _AMX0CF
                                    247 	.globl _SADEN0
                                    248 	.globl _IP
                                    249 	.globl _FLACL
                                    250 	.globl _FLSCL
                                    251 	.globl _P74OUT
                                    252 	.globl _OSCICN
                                    253 	.globl _OSCXCN
                                    254 	.globl _P3
                                    255 	.globl __XPAGE
                                    256 	.globl _EMI0CN
                                    257 	.globl _SADEN1
                                    258 	.globl _P3IF
                                    259 	.globl _AMX1SL
                                    260 	.globl _ADC1CF
                                    261 	.globl _ADC1CN
                                    262 	.globl _SADDR0
                                    263 	.globl _IE
                                    264 	.globl _P3MDOUT
                                    265 	.globl _PRT3CF
                                    266 	.globl _P2MDOUT
                                    267 	.globl _PRT2CF
                                    268 	.globl _P1MDOUT
                                    269 	.globl _PRT1CF
                                    270 	.globl _P0MDOUT
                                    271 	.globl _PRT0CF
                                    272 	.globl _EMI0CF
                                    273 	.globl _EMI0TC
                                    274 	.globl _P2
                                    275 	.globl _CPT1CN
                                    276 	.globl _CPT0CN
                                    277 	.globl _SPI0CKR
                                    278 	.globl _ADC1
                                    279 	.globl _SPI0DAT
                                    280 	.globl _SPI0CFG
                                    281 	.globl _SBUF0
                                    282 	.globl _SBUF
                                    283 	.globl _SCON0
                                    284 	.globl _SCON
                                    285 	.globl _P7
                                    286 	.globl _TMR3H
                                    287 	.globl _TMR3L
                                    288 	.globl _TMR3RLH
                                    289 	.globl _TMR3RLL
                                    290 	.globl _TMR3CN
                                    291 	.globl _P1
                                    292 	.globl _PSCTL
                                    293 	.globl _CKCON
                                    294 	.globl _TH1
                                    295 	.globl _TH0
                                    296 	.globl _TL1
                                    297 	.globl _TL0
                                    298 	.globl _TMOD
                                    299 	.globl _TCON
                                    300 	.globl _PCON
                                    301 	.globl _P6
                                    302 	.globl _P5
                                    303 	.globl _P4
                                    304 	.globl _DPH
                                    305 	.globl _DPL
                                    306 	.globl _SP
                                    307 	.globl _P0
                                    308 	.globl _Update_Value_PARM_4
                                    309 	.globl _Update_Value_PARM_3
                                    310 	.globl _Update_Value_PARM_2
                                    311 	.globl _run_stop
                                    312 	.globl _gy
                                    313 	.globl _gx
                                    314 	.globl _kdx
                                    315 	.globl _kdy
                                    316 	.globl _ks
                                    317 	.globl _lcd_count
                                    318 	.globl _count
                                    319 	.globl _range
                                    320 	.globl _new_lcd
                                    321 	.globl _new_accels
                                    322 	.globl _STR_PW
                                    323 	.globl _DRV_PW
                                    324 	.globl _SERVO_MIN
                                    325 	.globl _SERVO_MAX
                                    326 	.globl _SERVO_PW
                                    327 	.globl _PW_LEFT
                                    328 	.globl _PW_RIGHT
                                    329 	.globl _PW_CENTER
                                    330 	.globl _i2c_read_data_PARM_4
                                    331 	.globl _i2c_read_data_PARM_3
                                    332 	.globl _i2c_read_data_PARM_2
                                    333 	.globl _i2c_write_data_PARM_4
                                    334 	.globl _i2c_write_data_PARM_3
                                    335 	.globl _i2c_write_data_PARM_2
                                    336 	.globl _lcd_print
                                    337 	.globl _lcd_clear
                                    338 	.globl _kpd_input
                                    339 	.globl _delay_time
                                    340 	.globl _i2c_start
                                    341 	.globl _i2c_write
                                    342 	.globl _i2c_write_and_stop
                                    343 	.globl _i2c_read
                                    344 	.globl _i2c_read_and_stop
                                    345 	.globl _i2c_write_data
                                    346 	.globl _i2c_read_data
                                    347 	.globl _Accel_Init
                                    348 	.globl _PCA_ISR
                                    349 	.globl _wait
                                    350 	.globl _start
                                    351 	.globl _set_gains
                                    352 	.globl _XBR0_Init
                                    353 	.globl _SMB_Init
                                    354 	.globl _Update_Value
                                    355 	.globl _read_accels
                                    356 	.globl _set_servo_PWM
                                    357 	.globl _PCA_Init
                                    358 	.globl _updateLCD
                                    359 	.globl _set_drive_PWM
                                    360 	.globl _Port_Init
                                    361 ;--------------------------------------------------------
                                    362 ; special function registers
                                    363 ;--------------------------------------------------------
                                    364 	.area RSEG    (ABS,DATA)
      000000                        365 	.org 0x0000
                           000080   366 G$P0$0$0 == 0x0080
                           000080   367 _P0	=	0x0080
                           000081   368 G$SP$0$0 == 0x0081
                           000081   369 _SP	=	0x0081
                           000082   370 G$DPL$0$0 == 0x0082
                           000082   371 _DPL	=	0x0082
                           000083   372 G$DPH$0$0 == 0x0083
                           000083   373 _DPH	=	0x0083
                           000084   374 G$P4$0$0 == 0x0084
                           000084   375 _P4	=	0x0084
                           000085   376 G$P5$0$0 == 0x0085
                           000085   377 _P5	=	0x0085
                           000086   378 G$P6$0$0 == 0x0086
                           000086   379 _P6	=	0x0086
                           000087   380 G$PCON$0$0 == 0x0087
                           000087   381 _PCON	=	0x0087
                           000088   382 G$TCON$0$0 == 0x0088
                           000088   383 _TCON	=	0x0088
                           000089   384 G$TMOD$0$0 == 0x0089
                           000089   385 _TMOD	=	0x0089
                           00008A   386 G$TL0$0$0 == 0x008a
                           00008A   387 _TL0	=	0x008a
                           00008B   388 G$TL1$0$0 == 0x008b
                           00008B   389 _TL1	=	0x008b
                           00008C   390 G$TH0$0$0 == 0x008c
                           00008C   391 _TH0	=	0x008c
                           00008D   392 G$TH1$0$0 == 0x008d
                           00008D   393 _TH1	=	0x008d
                           00008E   394 G$CKCON$0$0 == 0x008e
                           00008E   395 _CKCON	=	0x008e
                           00008F   396 G$PSCTL$0$0 == 0x008f
                           00008F   397 _PSCTL	=	0x008f
                           000090   398 G$P1$0$0 == 0x0090
                           000090   399 _P1	=	0x0090
                           000091   400 G$TMR3CN$0$0 == 0x0091
                           000091   401 _TMR3CN	=	0x0091
                           000092   402 G$TMR3RLL$0$0 == 0x0092
                           000092   403 _TMR3RLL	=	0x0092
                           000093   404 G$TMR3RLH$0$0 == 0x0093
                           000093   405 _TMR3RLH	=	0x0093
                           000094   406 G$TMR3L$0$0 == 0x0094
                           000094   407 _TMR3L	=	0x0094
                           000095   408 G$TMR3H$0$0 == 0x0095
                           000095   409 _TMR3H	=	0x0095
                           000096   410 G$P7$0$0 == 0x0096
                           000096   411 _P7	=	0x0096
                           000098   412 G$SCON$0$0 == 0x0098
                           000098   413 _SCON	=	0x0098
                           000098   414 G$SCON0$0$0 == 0x0098
                           000098   415 _SCON0	=	0x0098
                           000099   416 G$SBUF$0$0 == 0x0099
                           000099   417 _SBUF	=	0x0099
                           000099   418 G$SBUF0$0$0 == 0x0099
                           000099   419 _SBUF0	=	0x0099
                           00009A   420 G$SPI0CFG$0$0 == 0x009a
                           00009A   421 _SPI0CFG	=	0x009a
                           00009B   422 G$SPI0DAT$0$0 == 0x009b
                           00009B   423 _SPI0DAT	=	0x009b
                           00009C   424 G$ADC1$0$0 == 0x009c
                           00009C   425 _ADC1	=	0x009c
                           00009D   426 G$SPI0CKR$0$0 == 0x009d
                           00009D   427 _SPI0CKR	=	0x009d
                           00009E   428 G$CPT0CN$0$0 == 0x009e
                           00009E   429 _CPT0CN	=	0x009e
                           00009F   430 G$CPT1CN$0$0 == 0x009f
                           00009F   431 _CPT1CN	=	0x009f
                           0000A0   432 G$P2$0$0 == 0x00a0
                           0000A0   433 _P2	=	0x00a0
                           0000A1   434 G$EMI0TC$0$0 == 0x00a1
                           0000A1   435 _EMI0TC	=	0x00a1
                           0000A3   436 G$EMI0CF$0$0 == 0x00a3
                           0000A3   437 _EMI0CF	=	0x00a3
                           0000A4   438 G$PRT0CF$0$0 == 0x00a4
                           0000A4   439 _PRT0CF	=	0x00a4
                           0000A4   440 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   441 _P0MDOUT	=	0x00a4
                           0000A5   442 G$PRT1CF$0$0 == 0x00a5
                           0000A5   443 _PRT1CF	=	0x00a5
                           0000A5   444 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   445 _P1MDOUT	=	0x00a5
                           0000A6   446 G$PRT2CF$0$0 == 0x00a6
                           0000A6   447 _PRT2CF	=	0x00a6
                           0000A6   448 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   449 _P2MDOUT	=	0x00a6
                           0000A7   450 G$PRT3CF$0$0 == 0x00a7
                           0000A7   451 _PRT3CF	=	0x00a7
                           0000A7   452 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   453 _P3MDOUT	=	0x00a7
                           0000A8   454 G$IE$0$0 == 0x00a8
                           0000A8   455 _IE	=	0x00a8
                           0000A9   456 G$SADDR0$0$0 == 0x00a9
                           0000A9   457 _SADDR0	=	0x00a9
                           0000AA   458 G$ADC1CN$0$0 == 0x00aa
                           0000AA   459 _ADC1CN	=	0x00aa
                           0000AB   460 G$ADC1CF$0$0 == 0x00ab
                           0000AB   461 _ADC1CF	=	0x00ab
                           0000AC   462 G$AMX1SL$0$0 == 0x00ac
                           0000AC   463 _AMX1SL	=	0x00ac
                           0000AD   464 G$P3IF$0$0 == 0x00ad
                           0000AD   465 _P3IF	=	0x00ad
                           0000AE   466 G$SADEN1$0$0 == 0x00ae
                           0000AE   467 _SADEN1	=	0x00ae
                           0000AF   468 G$EMI0CN$0$0 == 0x00af
                           0000AF   469 _EMI0CN	=	0x00af
                           0000AF   470 G$_XPAGE$0$0 == 0x00af
                           0000AF   471 __XPAGE	=	0x00af
                           0000B0   472 G$P3$0$0 == 0x00b0
                           0000B0   473 _P3	=	0x00b0
                           0000B1   474 G$OSCXCN$0$0 == 0x00b1
                           0000B1   475 _OSCXCN	=	0x00b1
                           0000B2   476 G$OSCICN$0$0 == 0x00b2
                           0000B2   477 _OSCICN	=	0x00b2
                           0000B5   478 G$P74OUT$0$0 == 0x00b5
                           0000B5   479 _P74OUT	=	0x00b5
                           0000B6   480 G$FLSCL$0$0 == 0x00b6
                           0000B6   481 _FLSCL	=	0x00b6
                           0000B7   482 G$FLACL$0$0 == 0x00b7
                           0000B7   483 _FLACL	=	0x00b7
                           0000B8   484 G$IP$0$0 == 0x00b8
                           0000B8   485 _IP	=	0x00b8
                           0000B9   486 G$SADEN0$0$0 == 0x00b9
                           0000B9   487 _SADEN0	=	0x00b9
                           0000BA   488 G$AMX0CF$0$0 == 0x00ba
                           0000BA   489 _AMX0CF	=	0x00ba
                           0000BB   490 G$AMX0SL$0$0 == 0x00bb
                           0000BB   491 _AMX0SL	=	0x00bb
                           0000BC   492 G$ADC0CF$0$0 == 0x00bc
                           0000BC   493 _ADC0CF	=	0x00bc
                           0000BD   494 G$P1MDIN$0$0 == 0x00bd
                           0000BD   495 _P1MDIN	=	0x00bd
                           0000BE   496 G$ADC0L$0$0 == 0x00be
                           0000BE   497 _ADC0L	=	0x00be
                           0000BF   498 G$ADC0H$0$0 == 0x00bf
                           0000BF   499 _ADC0H	=	0x00bf
                           0000C0   500 G$SMB0CN$0$0 == 0x00c0
                           0000C0   501 _SMB0CN	=	0x00c0
                           0000C1   502 G$SMB0STA$0$0 == 0x00c1
                           0000C1   503 _SMB0STA	=	0x00c1
                           0000C2   504 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   505 _SMB0DAT	=	0x00c2
                           0000C3   506 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   507 _SMB0ADR	=	0x00c3
                           0000C4   508 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   509 _ADC0GTL	=	0x00c4
                           0000C5   510 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   511 _ADC0GTH	=	0x00c5
                           0000C6   512 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   513 _ADC0LTL	=	0x00c6
                           0000C7   514 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   515 _ADC0LTH	=	0x00c7
                           0000C8   516 G$T2CON$0$0 == 0x00c8
                           0000C8   517 _T2CON	=	0x00c8
                           0000C9   518 G$T4CON$0$0 == 0x00c9
                           0000C9   519 _T4CON	=	0x00c9
                           0000CA   520 G$RCAP2L$0$0 == 0x00ca
                           0000CA   521 _RCAP2L	=	0x00ca
                           0000CB   522 G$RCAP2H$0$0 == 0x00cb
                           0000CB   523 _RCAP2H	=	0x00cb
                           0000CC   524 G$TL2$0$0 == 0x00cc
                           0000CC   525 _TL2	=	0x00cc
                           0000CD   526 G$TH2$0$0 == 0x00cd
                           0000CD   527 _TH2	=	0x00cd
                           0000CF   528 G$SMB0CR$0$0 == 0x00cf
                           0000CF   529 _SMB0CR	=	0x00cf
                           0000D0   530 G$PSW$0$0 == 0x00d0
                           0000D0   531 _PSW	=	0x00d0
                           0000D1   532 G$REF0CN$0$0 == 0x00d1
                           0000D1   533 _REF0CN	=	0x00d1
                           0000D2   534 G$DAC0L$0$0 == 0x00d2
                           0000D2   535 _DAC0L	=	0x00d2
                           0000D3   536 G$DAC0H$0$0 == 0x00d3
                           0000D3   537 _DAC0H	=	0x00d3
                           0000D4   538 G$DAC0CN$0$0 == 0x00d4
                           0000D4   539 _DAC0CN	=	0x00d4
                           0000D5   540 G$DAC1L$0$0 == 0x00d5
                           0000D5   541 _DAC1L	=	0x00d5
                           0000D6   542 G$DAC1H$0$0 == 0x00d6
                           0000D6   543 _DAC1H	=	0x00d6
                           0000D7   544 G$DAC1CN$0$0 == 0x00d7
                           0000D7   545 _DAC1CN	=	0x00d7
                           0000D8   546 G$PCA0CN$0$0 == 0x00d8
                           0000D8   547 _PCA0CN	=	0x00d8
                           0000D9   548 G$PCA0MD$0$0 == 0x00d9
                           0000D9   549 _PCA0MD	=	0x00d9
                           0000DA   550 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   551 _PCA0CPM0	=	0x00da
                           0000DB   552 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   553 _PCA0CPM1	=	0x00db
                           0000DC   554 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   555 _PCA0CPM2	=	0x00dc
                           0000DD   556 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   557 _PCA0CPM3	=	0x00dd
                           0000DE   558 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   559 _PCA0CPM4	=	0x00de
                           0000E0   560 G$ACC$0$0 == 0x00e0
                           0000E0   561 _ACC	=	0x00e0
                           0000E1   562 G$XBR0$0$0 == 0x00e1
                           0000E1   563 _XBR0	=	0x00e1
                           0000E2   564 G$XBR1$0$0 == 0x00e2
                           0000E2   565 _XBR1	=	0x00e2
                           0000E3   566 G$XBR2$0$0 == 0x00e3
                           0000E3   567 _XBR2	=	0x00e3
                           0000E4   568 G$RCAP4L$0$0 == 0x00e4
                           0000E4   569 _RCAP4L	=	0x00e4
                           0000E5   570 G$RCAP4H$0$0 == 0x00e5
                           0000E5   571 _RCAP4H	=	0x00e5
                           0000E6   572 G$EIE1$0$0 == 0x00e6
                           0000E6   573 _EIE1	=	0x00e6
                           0000E7   574 G$EIE2$0$0 == 0x00e7
                           0000E7   575 _EIE2	=	0x00e7
                           0000E8   576 G$ADC0CN$0$0 == 0x00e8
                           0000E8   577 _ADC0CN	=	0x00e8
                           0000E9   578 G$PCA0L$0$0 == 0x00e9
                           0000E9   579 _PCA0L	=	0x00e9
                           0000EA   580 G$PCA0CPL0$0$0 == 0x00ea
                           0000EA   581 _PCA0CPL0	=	0x00ea
                           0000EB   582 G$PCA0CPL1$0$0 == 0x00eb
                           0000EB   583 _PCA0CPL1	=	0x00eb
                           0000EC   584 G$PCA0CPL2$0$0 == 0x00ec
                           0000EC   585 _PCA0CPL2	=	0x00ec
                           0000ED   586 G$PCA0CPL3$0$0 == 0x00ed
                           0000ED   587 _PCA0CPL3	=	0x00ed
                           0000EE   588 G$PCA0CPL4$0$0 == 0x00ee
                           0000EE   589 _PCA0CPL4	=	0x00ee
                           0000EF   590 G$RSTSRC$0$0 == 0x00ef
                           0000EF   591 _RSTSRC	=	0x00ef
                           0000F0   592 G$B$0$0 == 0x00f0
                           0000F0   593 _B	=	0x00f0
                           0000F1   594 G$SCON1$0$0 == 0x00f1
                           0000F1   595 _SCON1	=	0x00f1
                           0000F2   596 G$SBUF1$0$0 == 0x00f2
                           0000F2   597 _SBUF1	=	0x00f2
                           0000F3   598 G$SADDR1$0$0 == 0x00f3
                           0000F3   599 _SADDR1	=	0x00f3
                           0000F4   600 G$TL4$0$0 == 0x00f4
                           0000F4   601 _TL4	=	0x00f4
                           0000F5   602 G$TH4$0$0 == 0x00f5
                           0000F5   603 _TH4	=	0x00f5
                           0000F6   604 G$EIP1$0$0 == 0x00f6
                           0000F6   605 _EIP1	=	0x00f6
                           0000F7   606 G$EIP2$0$0 == 0x00f7
                           0000F7   607 _EIP2	=	0x00f7
                           0000F8   608 G$SPI0CN$0$0 == 0x00f8
                           0000F8   609 _SPI0CN	=	0x00f8
                           0000F9   610 G$PCA0H$0$0 == 0x00f9
                           0000F9   611 _PCA0H	=	0x00f9
                           0000FA   612 G$PCA0CPH0$0$0 == 0x00fa
                           0000FA   613 _PCA0CPH0	=	0x00fa
                           0000FB   614 G$PCA0CPH1$0$0 == 0x00fb
                           0000FB   615 _PCA0CPH1	=	0x00fb
                           0000FC   616 G$PCA0CPH2$0$0 == 0x00fc
                           0000FC   617 _PCA0CPH2	=	0x00fc
                           0000FD   618 G$PCA0CPH3$0$0 == 0x00fd
                           0000FD   619 _PCA0CPH3	=	0x00fd
                           0000FE   620 G$PCA0CPH4$0$0 == 0x00fe
                           0000FE   621 _PCA0CPH4	=	0x00fe
                           0000FF   622 G$WDTCN$0$0 == 0x00ff
                           0000FF   623 _WDTCN	=	0x00ff
                           008C8A   624 G$TMR0$0$0 == 0x8c8a
                           008C8A   625 _TMR0	=	0x8c8a
                           008D8B   626 G$TMR1$0$0 == 0x8d8b
                           008D8B   627 _TMR1	=	0x8d8b
                           00CDCC   628 G$TMR2$0$0 == 0xcdcc
                           00CDCC   629 _TMR2	=	0xcdcc
                           00CBCA   630 G$RCAP2$0$0 == 0xcbca
                           00CBCA   631 _RCAP2	=	0xcbca
                           009594   632 G$TMR3$0$0 == 0x9594
                           009594   633 _TMR3	=	0x9594
                           009392   634 G$TMR3RL$0$0 == 0x9392
                           009392   635 _TMR3RL	=	0x9392
                           00F5F4   636 G$TMR4$0$0 == 0xf5f4
                           00F5F4   637 _TMR4	=	0xf5f4
                           00E5E4   638 G$RCAP4$0$0 == 0xe5e4
                           00E5E4   639 _RCAP4	=	0xe5e4
                           00BFBE   640 G$ADC0$0$0 == 0xbfbe
                           00BFBE   641 _ADC0	=	0xbfbe
                           00C5C4   642 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   643 _ADC0GT	=	0xc5c4
                           00C7C6   644 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   645 _ADC0LT	=	0xc7c6
                           00D3D2   646 G$DAC0$0$0 == 0xd3d2
                           00D3D2   647 _DAC0	=	0xd3d2
                           00D6D5   648 G$DAC1$0$0 == 0xd6d5
                           00D6D5   649 _DAC1	=	0xd6d5
                           00F9E9   650 G$PCA0$0$0 == 0xf9e9
                           00F9E9   651 _PCA0	=	0xf9e9
                           00FAEA   652 G$PCA0CP0$0$0 == 0xfaea
                           00FAEA   653 _PCA0CP0	=	0xfaea
                           00FBEB   654 G$PCA0CP1$0$0 == 0xfbeb
                           00FBEB   655 _PCA0CP1	=	0xfbeb
                           00FCEC   656 G$PCA0CP2$0$0 == 0xfcec
                           00FCEC   657 _PCA0CP2	=	0xfcec
                           00FDED   658 G$PCA0CP3$0$0 == 0xfded
                           00FDED   659 _PCA0CP3	=	0xfded
                           00FEEE   660 G$PCA0CP4$0$0 == 0xfeee
                           00FEEE   661 _PCA0CP4	=	0xfeee
                                    662 ;--------------------------------------------------------
                                    663 ; special function bits
                                    664 ;--------------------------------------------------------
                                    665 	.area RSEG    (ABS,DATA)
      000000                        666 	.org 0x0000
                           000080   667 G$P0_0$0$0 == 0x0080
                           000080   668 _P0_0	=	0x0080
                           000081   669 G$P0_1$0$0 == 0x0081
                           000081   670 _P0_1	=	0x0081
                           000082   671 G$P0_2$0$0 == 0x0082
                           000082   672 _P0_2	=	0x0082
                           000083   673 G$P0_3$0$0 == 0x0083
                           000083   674 _P0_3	=	0x0083
                           000084   675 G$P0_4$0$0 == 0x0084
                           000084   676 _P0_4	=	0x0084
                           000085   677 G$P0_5$0$0 == 0x0085
                           000085   678 _P0_5	=	0x0085
                           000086   679 G$P0_6$0$0 == 0x0086
                           000086   680 _P0_6	=	0x0086
                           000087   681 G$P0_7$0$0 == 0x0087
                           000087   682 _P0_7	=	0x0087
                           000088   683 G$IT0$0$0 == 0x0088
                           000088   684 _IT0	=	0x0088
                           000089   685 G$IE0$0$0 == 0x0089
                           000089   686 _IE0	=	0x0089
                           00008A   687 G$IT1$0$0 == 0x008a
                           00008A   688 _IT1	=	0x008a
                           00008B   689 G$IE1$0$0 == 0x008b
                           00008B   690 _IE1	=	0x008b
                           00008C   691 G$TR0$0$0 == 0x008c
                           00008C   692 _TR0	=	0x008c
                           00008D   693 G$TF0$0$0 == 0x008d
                           00008D   694 _TF0	=	0x008d
                           00008E   695 G$TR1$0$0 == 0x008e
                           00008E   696 _TR1	=	0x008e
                           00008F   697 G$TF1$0$0 == 0x008f
                           00008F   698 _TF1	=	0x008f
                           000090   699 G$P1_0$0$0 == 0x0090
                           000090   700 _P1_0	=	0x0090
                           000091   701 G$P1_1$0$0 == 0x0091
                           000091   702 _P1_1	=	0x0091
                           000092   703 G$P1_2$0$0 == 0x0092
                           000092   704 _P1_2	=	0x0092
                           000093   705 G$P1_3$0$0 == 0x0093
                           000093   706 _P1_3	=	0x0093
                           000094   707 G$P1_4$0$0 == 0x0094
                           000094   708 _P1_4	=	0x0094
                           000095   709 G$P1_5$0$0 == 0x0095
                           000095   710 _P1_5	=	0x0095
                           000096   711 G$P1_6$0$0 == 0x0096
                           000096   712 _P1_6	=	0x0096
                           000097   713 G$P1_7$0$0 == 0x0097
                           000097   714 _P1_7	=	0x0097
                           000098   715 G$RI$0$0 == 0x0098
                           000098   716 _RI	=	0x0098
                           000098   717 G$RI0$0$0 == 0x0098
                           000098   718 _RI0	=	0x0098
                           000099   719 G$TI$0$0 == 0x0099
                           000099   720 _TI	=	0x0099
                           000099   721 G$TI0$0$0 == 0x0099
                           000099   722 _TI0	=	0x0099
                           00009A   723 G$RB8$0$0 == 0x009a
                           00009A   724 _RB8	=	0x009a
                           00009A   725 G$RB80$0$0 == 0x009a
                           00009A   726 _RB80	=	0x009a
                           00009B   727 G$TB8$0$0 == 0x009b
                           00009B   728 _TB8	=	0x009b
                           00009B   729 G$TB80$0$0 == 0x009b
                           00009B   730 _TB80	=	0x009b
                           00009C   731 G$REN$0$0 == 0x009c
                           00009C   732 _REN	=	0x009c
                           00009C   733 G$REN0$0$0 == 0x009c
                           00009C   734 _REN0	=	0x009c
                           00009D   735 G$SM2$0$0 == 0x009d
                           00009D   736 _SM2	=	0x009d
                           00009D   737 G$SM20$0$0 == 0x009d
                           00009D   738 _SM20	=	0x009d
                           00009D   739 G$MCE0$0$0 == 0x009d
                           00009D   740 _MCE0	=	0x009d
                           00009E   741 G$SM1$0$0 == 0x009e
                           00009E   742 _SM1	=	0x009e
                           00009E   743 G$SM10$0$0 == 0x009e
                           00009E   744 _SM10	=	0x009e
                           00009F   745 G$SM0$0$0 == 0x009f
                           00009F   746 _SM0	=	0x009f
                           00009F   747 G$SM00$0$0 == 0x009f
                           00009F   748 _SM00	=	0x009f
                           00009F   749 G$S0MODE$0$0 == 0x009f
                           00009F   750 _S0MODE	=	0x009f
                           0000A0   751 G$P2_0$0$0 == 0x00a0
                           0000A0   752 _P2_0	=	0x00a0
                           0000A1   753 G$P2_1$0$0 == 0x00a1
                           0000A1   754 _P2_1	=	0x00a1
                           0000A2   755 G$P2_2$0$0 == 0x00a2
                           0000A2   756 _P2_2	=	0x00a2
                           0000A3   757 G$P2_3$0$0 == 0x00a3
                           0000A3   758 _P2_3	=	0x00a3
                           0000A4   759 G$P2_4$0$0 == 0x00a4
                           0000A4   760 _P2_4	=	0x00a4
                           0000A5   761 G$P2_5$0$0 == 0x00a5
                           0000A5   762 _P2_5	=	0x00a5
                           0000A6   763 G$P2_6$0$0 == 0x00a6
                           0000A6   764 _P2_6	=	0x00a6
                           0000A7   765 G$P2_7$0$0 == 0x00a7
                           0000A7   766 _P2_7	=	0x00a7
                           0000A8   767 G$EX0$0$0 == 0x00a8
                           0000A8   768 _EX0	=	0x00a8
                           0000A9   769 G$ET0$0$0 == 0x00a9
                           0000A9   770 _ET0	=	0x00a9
                           0000AA   771 G$EX1$0$0 == 0x00aa
                           0000AA   772 _EX1	=	0x00aa
                           0000AB   773 G$ET1$0$0 == 0x00ab
                           0000AB   774 _ET1	=	0x00ab
                           0000AC   775 G$ES0$0$0 == 0x00ac
                           0000AC   776 _ES0	=	0x00ac
                           0000AC   777 G$ES$0$0 == 0x00ac
                           0000AC   778 _ES	=	0x00ac
                           0000AD   779 G$ET2$0$0 == 0x00ad
                           0000AD   780 _ET2	=	0x00ad
                           0000AF   781 G$EA$0$0 == 0x00af
                           0000AF   782 _EA	=	0x00af
                           0000B0   783 G$P3_0$0$0 == 0x00b0
                           0000B0   784 _P3_0	=	0x00b0
                           0000B1   785 G$P3_1$0$0 == 0x00b1
                           0000B1   786 _P3_1	=	0x00b1
                           0000B2   787 G$P3_2$0$0 == 0x00b2
                           0000B2   788 _P3_2	=	0x00b2
                           0000B3   789 G$P3_3$0$0 == 0x00b3
                           0000B3   790 _P3_3	=	0x00b3
                           0000B4   791 G$P3_4$0$0 == 0x00b4
                           0000B4   792 _P3_4	=	0x00b4
                           0000B5   793 G$P3_5$0$0 == 0x00b5
                           0000B5   794 _P3_5	=	0x00b5
                           0000B6   795 G$P3_6$0$0 == 0x00b6
                           0000B6   796 _P3_6	=	0x00b6
                           0000B7   797 G$P3_7$0$0 == 0x00b7
                           0000B7   798 _P3_7	=	0x00b7
                           0000B8   799 G$PX0$0$0 == 0x00b8
                           0000B8   800 _PX0	=	0x00b8
                           0000B9   801 G$PT0$0$0 == 0x00b9
                           0000B9   802 _PT0	=	0x00b9
                           0000BA   803 G$PX1$0$0 == 0x00ba
                           0000BA   804 _PX1	=	0x00ba
                           0000BB   805 G$PT1$0$0 == 0x00bb
                           0000BB   806 _PT1	=	0x00bb
                           0000BC   807 G$PS0$0$0 == 0x00bc
                           0000BC   808 _PS0	=	0x00bc
                           0000BC   809 G$PS$0$0 == 0x00bc
                           0000BC   810 _PS	=	0x00bc
                           0000BD   811 G$PT2$0$0 == 0x00bd
                           0000BD   812 _PT2	=	0x00bd
                           0000C0   813 G$SMBTOE$0$0 == 0x00c0
                           0000C0   814 _SMBTOE	=	0x00c0
                           0000C1   815 G$SMBFTE$0$0 == 0x00c1
                           0000C1   816 _SMBFTE	=	0x00c1
                           0000C2   817 G$AA$0$0 == 0x00c2
                           0000C2   818 _AA	=	0x00c2
                           0000C3   819 G$SI$0$0 == 0x00c3
                           0000C3   820 _SI	=	0x00c3
                           0000C4   821 G$STO$0$0 == 0x00c4
                           0000C4   822 _STO	=	0x00c4
                           0000C5   823 G$STA$0$0 == 0x00c5
                           0000C5   824 _STA	=	0x00c5
                           0000C6   825 G$ENSMB$0$0 == 0x00c6
                           0000C6   826 _ENSMB	=	0x00c6
                           0000C7   827 G$BUSY$0$0 == 0x00c7
                           0000C7   828 _BUSY	=	0x00c7
                           0000C8   829 G$CPRL2$0$0 == 0x00c8
                           0000C8   830 _CPRL2	=	0x00c8
                           0000C9   831 G$CT2$0$0 == 0x00c9
                           0000C9   832 _CT2	=	0x00c9
                           0000CA   833 G$TR2$0$0 == 0x00ca
                           0000CA   834 _TR2	=	0x00ca
                           0000CB   835 G$EXEN2$0$0 == 0x00cb
                           0000CB   836 _EXEN2	=	0x00cb
                           0000CC   837 G$TCLK$0$0 == 0x00cc
                           0000CC   838 _TCLK	=	0x00cc
                           0000CD   839 G$RCLK$0$0 == 0x00cd
                           0000CD   840 _RCLK	=	0x00cd
                           0000CE   841 G$EXF2$0$0 == 0x00ce
                           0000CE   842 _EXF2	=	0x00ce
                           0000CF   843 G$TF2$0$0 == 0x00cf
                           0000CF   844 _TF2	=	0x00cf
                           0000D0   845 G$P$0$0 == 0x00d0
                           0000D0   846 _P	=	0x00d0
                           0000D1   847 G$F1$0$0 == 0x00d1
                           0000D1   848 _F1	=	0x00d1
                           0000D2   849 G$OV$0$0 == 0x00d2
                           0000D2   850 _OV	=	0x00d2
                           0000D3   851 G$RS0$0$0 == 0x00d3
                           0000D3   852 _RS0	=	0x00d3
                           0000D4   853 G$RS1$0$0 == 0x00d4
                           0000D4   854 _RS1	=	0x00d4
                           0000D5   855 G$F0$0$0 == 0x00d5
                           0000D5   856 _F0	=	0x00d5
                           0000D6   857 G$AC$0$0 == 0x00d6
                           0000D6   858 _AC	=	0x00d6
                           0000D7   859 G$CY$0$0 == 0x00d7
                           0000D7   860 _CY	=	0x00d7
                           0000D8   861 G$CCF0$0$0 == 0x00d8
                           0000D8   862 _CCF0	=	0x00d8
                           0000D9   863 G$CCF1$0$0 == 0x00d9
                           0000D9   864 _CCF1	=	0x00d9
                           0000DA   865 G$CCF2$0$0 == 0x00da
                           0000DA   866 _CCF2	=	0x00da
                           0000DB   867 G$CCF3$0$0 == 0x00db
                           0000DB   868 _CCF3	=	0x00db
                           0000DC   869 G$CCF4$0$0 == 0x00dc
                           0000DC   870 _CCF4	=	0x00dc
                           0000DE   871 G$CR$0$0 == 0x00de
                           0000DE   872 _CR	=	0x00de
                           0000DF   873 G$CF$0$0 == 0x00df
                           0000DF   874 _CF	=	0x00df
                           0000E8   875 G$ADLJST$0$0 == 0x00e8
                           0000E8   876 _ADLJST	=	0x00e8
                           0000E8   877 G$AD0LJST$0$0 == 0x00e8
                           0000E8   878 _AD0LJST	=	0x00e8
                           0000E9   879 G$ADWINT$0$0 == 0x00e9
                           0000E9   880 _ADWINT	=	0x00e9
                           0000E9   881 G$AD0WINT$0$0 == 0x00e9
                           0000E9   882 _AD0WINT	=	0x00e9
                           0000EA   883 G$ADSTM0$0$0 == 0x00ea
                           0000EA   884 _ADSTM0	=	0x00ea
                           0000EA   885 G$AD0CM0$0$0 == 0x00ea
                           0000EA   886 _AD0CM0	=	0x00ea
                           0000EB   887 G$ADSTM1$0$0 == 0x00eb
                           0000EB   888 _ADSTM1	=	0x00eb
                           0000EB   889 G$AD0CM1$0$0 == 0x00eb
                           0000EB   890 _AD0CM1	=	0x00eb
                           0000EC   891 G$ADBUSY$0$0 == 0x00ec
                           0000EC   892 _ADBUSY	=	0x00ec
                           0000EC   893 G$AD0BUSY$0$0 == 0x00ec
                           0000EC   894 _AD0BUSY	=	0x00ec
                           0000ED   895 G$ADCINT$0$0 == 0x00ed
                           0000ED   896 _ADCINT	=	0x00ed
                           0000ED   897 G$AD0INT$0$0 == 0x00ed
                           0000ED   898 _AD0INT	=	0x00ed
                           0000EE   899 G$ADCTM$0$0 == 0x00ee
                           0000EE   900 _ADCTM	=	0x00ee
                           0000EE   901 G$AD0TM$0$0 == 0x00ee
                           0000EE   902 _AD0TM	=	0x00ee
                           0000EF   903 G$ADCEN$0$0 == 0x00ef
                           0000EF   904 _ADCEN	=	0x00ef
                           0000EF   905 G$AD0EN$0$0 == 0x00ef
                           0000EF   906 _AD0EN	=	0x00ef
                           0000F8   907 G$SPIEN$0$0 == 0x00f8
                           0000F8   908 _SPIEN	=	0x00f8
                           0000F9   909 G$MSTEN$0$0 == 0x00f9
                           0000F9   910 _MSTEN	=	0x00f9
                           0000FA   911 G$SLVSEL$0$0 == 0x00fa
                           0000FA   912 _SLVSEL	=	0x00fa
                           0000FB   913 G$TXBSY$0$0 == 0x00fb
                           0000FB   914 _TXBSY	=	0x00fb
                           0000FC   915 G$RXOVRN$0$0 == 0x00fc
                           0000FC   916 _RXOVRN	=	0x00fc
                           0000FD   917 G$MODF$0$0 == 0x00fd
                           0000FD   918 _MODF	=	0x00fd
                           0000FE   919 G$WCOL$0$0 == 0x00fe
                           0000FE   920 _WCOL	=	0x00fe
                           0000FF   921 G$SPIF$0$0 == 0x00ff
                           0000FF   922 _SPIF	=	0x00ff
                           0000C7   923 G$BUS_BUSY$0$0 == 0x00c7
                           0000C7   924 _BUS_BUSY	=	0x00c7
                           0000C6   925 G$BUS_EN$0$0 == 0x00c6
                           0000C6   926 _BUS_EN	=	0x00c6
                           0000C5   927 G$BUS_START$0$0 == 0x00c5
                           0000C5   928 _BUS_START	=	0x00c5
                           0000C4   929 G$BUS_STOP$0$0 == 0x00c4
                           0000C4   930 _BUS_STOP	=	0x00c4
                           0000C3   931 G$BUS_INT$0$0 == 0x00c3
                           0000C3   932 _BUS_INT	=	0x00c3
                           0000C2   933 G$BUS_AA$0$0 == 0x00c2
                           0000C2   934 _BUS_AA	=	0x00c2
                           0000C1   935 G$BUS_FTE$0$0 == 0x00c1
                           0000C1   936 _BUS_FTE	=	0x00c1
                           0000C0   937 G$BUS_TOE$0$0 == 0x00c0
                           0000C0   938 _BUS_TOE	=	0x00c0
                           000083   939 G$BUS_SCL$0$0 == 0x0083
                           000083   940 _BUS_SCL	=	0x0083
                           0000B6   941 G$run$0$0 == 0x00b6
                           0000B6   942 _run	=	0x00b6
                                    943 ;--------------------------------------------------------
                                    944 ; overlayable register banks
                                    945 ;--------------------------------------------------------
                                    946 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        947 	.ds 8
                                    948 ;--------------------------------------------------------
                                    949 ; internal ram data
                                    950 ;--------------------------------------------------------
                                    951 	.area DSEG    (DATA)
                           000000   952 Llab5.lcd_clear$NumBytes$1$77==.
      000022                        953 _lcd_clear_NumBytes_1_77:
      000022                        954 	.ds 1
                           000001   955 Llab5.lcd_clear$Cmd$1$77==.
      000023                        956 _lcd_clear_Cmd_1_77:
      000023                        957 	.ds 2
                           000003   958 Llab5.read_keypad$Data$1$78==.
      000025                        959 _read_keypad_Data_1_78:
      000025                        960 	.ds 2
                           000005   961 Llab5.i2c_write_data$start_reg$1$97==.
      000027                        962 _i2c_write_data_PARM_2:
      000027                        963 	.ds 1
                           000006   964 Llab5.i2c_write_data$buffer$1$97==.
      000028                        965 _i2c_write_data_PARM_3:
      000028                        966 	.ds 3
                           000009   967 Llab5.i2c_write_data$num_bytes$1$97==.
      00002B                        968 _i2c_write_data_PARM_4:
      00002B                        969 	.ds 1
                           00000A   970 Llab5.i2c_read_data$start_reg$1$99==.
      00002C                        971 _i2c_read_data_PARM_2:
      00002C                        972 	.ds 1
                           00000B   973 Llab5.i2c_read_data$buffer$1$99==.
      00002D                        974 _i2c_read_data_PARM_3:
      00002D                        975 	.ds 3
                           00000E   976 Llab5.i2c_read_data$num_bytes$1$99==.
      000030                        977 _i2c_read_data_PARM_4:
      000030                        978 	.ds 1
                           00000F   979 Llab5.Accel_Init$Data2$1$103==.
      000031                        980 _Accel_Init_Data2_1_103:
      000031                        981 	.ds 1
                           000010   982 G$PW_CENTER$0$0==.
      000032                        983 _PW_CENTER::
      000032                        984 	.ds 2
                           000012   985 G$PW_RIGHT$0$0==.
      000034                        986 _PW_RIGHT::
      000034                        987 	.ds 2
                           000014   988 G$PW_LEFT$0$0==.
      000036                        989 _PW_LEFT::
      000036                        990 	.ds 2
                           000016   991 G$SERVO_PW$0$0==.
      000038                        992 _SERVO_PW::
      000038                        993 	.ds 2
                           000018   994 G$SERVO_MAX$0$0==.
      00003A                        995 _SERVO_MAX::
      00003A                        996 	.ds 2
                           00001A   997 G$SERVO_MIN$0$0==.
      00003C                        998 _SERVO_MIN::
      00003C                        999 	.ds 2
                           00001C  1000 G$DRV_PW$0$0==.
      00003E                       1001 _DRV_PW::
      00003E                       1002 	.ds 2
                           00001E  1003 G$STR_PW$0$0==.
      000040                       1004 _STR_PW::
      000040                       1005 	.ds 2
                           000020  1006 G$new_accels$0$0==.
      000042                       1007 _new_accels::
      000042                       1008 	.ds 1
                           000021  1009 G$new_lcd$0$0==.
      000043                       1010 _new_lcd::
      000043                       1011 	.ds 1
                           000022  1012 G$range$0$0==.
      000044                       1013 _range::
      000044                       1014 	.ds 2
                           000024  1015 G$count$0$0==.
      000046                       1016 _count::
      000046                       1017 	.ds 1
                           000025  1018 G$lcd_count$0$0==.
      000047                       1019 _lcd_count::
      000047                       1020 	.ds 1
                           000026  1021 G$ks$0$0==.
      000048                       1022 _ks::
      000048                       1023 	.ds 1
                           000027  1024 G$kdy$0$0==.
      000049                       1025 _kdy::
      000049                       1026 	.ds 1
                           000028  1027 G$kdx$0$0==.
      00004A                       1028 _kdx::
      00004A                       1029 	.ds 1
                           000029  1030 G$gx$0$0==.
      00004B                       1031 _gx::
      00004B                       1032 	.ds 1
                           00002A  1033 G$gy$0$0==.
      00004C                       1034 _gy::
      00004C                       1035 	.ds 1
                           00002B  1036 G$run_stop$0$0==.
      00004D                       1037 _run_stop::
      00004D                       1038 	.ds 1
                           00002C  1039 Llab5.Update_Value$incr$1$136==.
      00004E                       1040 _Update_Value_PARM_2:
      00004E                       1041 	.ds 1
                           00002D  1042 Llab5.Update_Value$maxval$1$136==.
      00004F                       1043 _Update_Value_PARM_3:
      00004F                       1044 	.ds 2
                           00002F  1045 Llab5.Update_Value$minval$1$136==.
      000051                       1046 _Update_Value_PARM_4:
      000051                       1047 	.ds 2
                           000031  1048 Llab5.read_accels$Data$1$143==.
      000053                       1049 _read_accels_Data_1_143:
      000053                       1050 	.ds 4
                           000035  1051 Llab5.read_accels$avg_gx$1$143==.
      000057                       1052 _read_accels_avg_gx_1_143:
      000057                       1053 	.ds 2
                                   1054 ;--------------------------------------------------------
                                   1055 ; overlayable items in internal ram 
                                   1056 ;--------------------------------------------------------
                                   1057 	.area	OSEG    (OVR,DATA)
                                   1058 	.area	OSEG    (OVR,DATA)
                                   1059 	.area	OSEG    (OVR,DATA)
                                   1060 	.area	OSEG    (OVR,DATA)
                                   1061 	.area	OSEG    (OVR,DATA)
                                   1062 	.area	OSEG    (OVR,DATA)
                                   1063 	.area	OSEG    (OVR,DATA)
                                   1064 	.area	OSEG    (OVR,DATA)
                                   1065 ;--------------------------------------------------------
                                   1066 ; Stack segment in internal ram 
                                   1067 ;--------------------------------------------------------
                                   1068 	.area	SSEG
      000073                       1069 __start__stack:
      000073                       1070 	.ds	1
                                   1071 
                                   1072 ;--------------------------------------------------------
                                   1073 ; indirectly addressable internal ram data
                                   1074 ;--------------------------------------------------------
                                   1075 	.area ISEG    (DATA)
                                   1076 ;--------------------------------------------------------
                                   1077 ; absolute internal ram data
                                   1078 ;--------------------------------------------------------
                                   1079 	.area IABS    (ABS,DATA)
                                   1080 	.area IABS    (ABS,DATA)
                                   1081 ;--------------------------------------------------------
                                   1082 ; bit data
                                   1083 ;--------------------------------------------------------
                                   1084 	.area BSEG    (BIT)
                                   1085 ;--------------------------------------------------------
                                   1086 ; paged external ram data
                                   1087 ;--------------------------------------------------------
                                   1088 	.area PSEG    (PAG,XDATA)
                                   1089 ;--------------------------------------------------------
                                   1090 ; external ram data
                                   1091 ;--------------------------------------------------------
                                   1092 	.area XSEG    (XDATA)
                           000000  1093 Llab5.lcd_print$text$1$73==.
      000001                       1094 _lcd_print_text_1_73:
      000001                       1095 	.ds 80
                                   1096 ;--------------------------------------------------------
                                   1097 ; absolute external ram data
                                   1098 ;--------------------------------------------------------
                                   1099 	.area XABS    (ABS,XDATA)
                                   1100 ;--------------------------------------------------------
                                   1101 ; external initialized ram data
                                   1102 ;--------------------------------------------------------
                                   1103 	.area XISEG   (XDATA)
                                   1104 	.area HOME    (CODE)
                                   1105 	.area GSINIT0 (CODE)
                                   1106 	.area GSINIT1 (CODE)
                                   1107 	.area GSINIT2 (CODE)
                                   1108 	.area GSINIT3 (CODE)
                                   1109 	.area GSINIT4 (CODE)
                                   1110 	.area GSINIT5 (CODE)
                                   1111 	.area GSINIT  (CODE)
                                   1112 	.area GSFINAL (CODE)
                                   1113 	.area CSEG    (CODE)
                                   1114 ;--------------------------------------------------------
                                   1115 ; interrupt vector 
                                   1116 ;--------------------------------------------------------
                                   1117 	.area HOME    (CODE)
      000000                       1118 __interrupt_vect:
      000000 02 00 51         [24] 1119 	ljmp	__sdcc_gsinit_startup
      000003 32               [24] 1120 	reti
      000004                       1121 	.ds	7
      00000B 32               [24] 1122 	reti
      00000C                       1123 	.ds	7
      000013 32               [24] 1124 	reti
      000014                       1125 	.ds	7
      00001B 32               [24] 1126 	reti
      00001C                       1127 	.ds	7
      000023 32               [24] 1128 	reti
      000024                       1129 	.ds	7
      00002B 32               [24] 1130 	reti
      00002C                       1131 	.ds	7
      000033 32               [24] 1132 	reti
      000034                       1133 	.ds	7
      00003B 32               [24] 1134 	reti
      00003C                       1135 	.ds	7
      000043 32               [24] 1136 	reti
      000044                       1137 	.ds	7
      00004B 02 06 9F         [24] 1138 	ljmp	_PCA_ISR
                                   1139 ;--------------------------------------------------------
                                   1140 ; global & static initialisations
                                   1141 ;--------------------------------------------------------
                                   1142 	.area HOME    (CODE)
                                   1143 	.area GSINIT  (CODE)
                                   1144 	.area GSFINAL (CODE)
                                   1145 	.area GSINIT  (CODE)
                                   1146 	.globl __sdcc_gsinit_startup
                                   1147 	.globl __sdcc_program_startup
                                   1148 	.globl __start__stack
                                   1149 	.globl __mcs51_genXINIT
                                   1150 	.globl __mcs51_genXRAMCLEAR
                                   1151 	.globl __mcs51_genRAMCLEAR
                           000000  1152 	C$lab5.c$38$1$155 ==.
                                   1153 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:38: unsigned int PW_CENTER = 2685;
      0000AA 75 32 7D         [24] 1154 	mov	_PW_CENTER,#0x7D
      0000AD 75 33 0A         [24] 1155 	mov	(_PW_CENTER + 1),#0x0A
                           000006  1156 	C$lab5.c$39$1$155 ==.
                                   1157 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:39: unsigned int PW_RIGHT = 2235;
      0000B0 75 34 BB         [24] 1158 	mov	_PW_RIGHT,#0xBB
      0000B3 75 35 08         [24] 1159 	mov	(_PW_RIGHT + 1),#0x08
                           00000C  1160 	C$lab5.c$40$1$155 ==.
                                   1161 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:40: unsigned int PW_LEFT = 3185;
      0000B6 75 36 71         [24] 1162 	mov	_PW_LEFT,#0x71
      0000B9 75 37 0C         [24] 1163 	mov	(_PW_LEFT + 1),#0x0C
                           000012  1164 	C$lab5.c$41$1$155 ==.
                                   1165 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:41: unsigned int SERVO_PW = 2765;
      0000BC 75 38 CD         [24] 1166 	mov	_SERVO_PW,#0xCD
      0000BF 75 39 0A         [24] 1167 	mov	(_SERVO_PW + 1),#0x0A
                           000018  1168 	C$lab5.c$42$1$155 ==.
                                   1169 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:42: unsigned int SERVO_MAX= 3503;
      0000C2 75 3A AF         [24] 1170 	mov	_SERVO_MAX,#0xAF
      0000C5 75 3B 0D         [24] 1171 	mov	(_SERVO_MAX + 1),#0x0D
                           00001E  1172 	C$lab5.c$43$1$155 ==.
                                   1173 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:43: unsigned int SERVO_MIN= 2028;
      0000C8 75 3C EC         [24] 1174 	mov	_SERVO_MIN,#0xEC
      0000CB 75 3D 07         [24] 1175 	mov	(_SERVO_MIN + 1),#0x07
                           000024  1176 	C$lab5.c$46$1$155 ==.
                                   1177 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:46: unsigned char new_accels = 0; // flag for count of accel timing
      0000CE 75 42 00         [24] 1178 	mov	_new_accels,#0x00
                           000027  1179 	C$lab5.c$47$1$155 ==.
                                   1180 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:47: unsigned char new_lcd = 0; // flag for count of LCD timing
      0000D1 75 43 00         [24] 1181 	mov	_new_lcd,#0x00
                                   1182 	.area GSFINAL (CODE)
      0000D4 02 00 4E         [24] 1183 	ljmp	__sdcc_program_startup
                                   1184 ;--------------------------------------------------------
                                   1185 ; Home
                                   1186 ;--------------------------------------------------------
                                   1187 	.area HOME    (CODE)
                                   1188 	.area HOME    (CODE)
      00004E                       1189 __sdcc_program_startup:
      00004E 02 05 AD         [24] 1190 	ljmp	_main
                                   1191 ;	return from main will return to caller
                                   1192 ;--------------------------------------------------------
                                   1193 ; code
                                   1194 ;--------------------------------------------------------
                                   1195 	.area CSEG    (CODE)
                                   1196 ;------------------------------------------------------------
                                   1197 ;Allocation info for local variables in function 'SYSCLK_Init'
                                   1198 ;------------------------------------------------------------
                                   1199 ;i                         Allocated to registers 
                                   1200 ;------------------------------------------------------------
                           000000  1201 	G$SYSCLK_Init$0$0 ==.
                           000000  1202 	C$c8051_SDCC.h$42$0$0 ==.
                                   1203 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:42: void SYSCLK_Init(void)
                                   1204 ;	-----------------------------------------
                                   1205 ;	 function SYSCLK_Init
                                   1206 ;	-----------------------------------------
      0000D7                       1207 _SYSCLK_Init:
                           000007  1208 	ar7 = 0x07
                           000006  1209 	ar6 = 0x06
                           000005  1210 	ar5 = 0x05
                           000004  1211 	ar4 = 0x04
                           000003  1212 	ar3 = 0x03
                           000002  1213 	ar2 = 0x02
                           000001  1214 	ar1 = 0x01
                           000000  1215 	ar0 = 0x00
                           000000  1216 	C$c8051_SDCC.h$46$1$2 ==.
                                   1217 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:46: OSCXCN = 0x67;                      // start external oscillator with
      0000D7 75 B1 67         [24] 1218 	mov	_OSCXCN,#0x67
                           000003  1219 	C$c8051_SDCC.h$49$1$2 ==.
                                   1220 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:49: for (i=0; i < 256; i++);            // wait for oscillator to start
      0000DA 7E 00            [12] 1221 	mov	r6,#0x00
      0000DC 7F 01            [12] 1222 	mov	r7,#0x01
      0000DE                       1223 00107$:
      0000DE 1E               [12] 1224 	dec	r6
      0000DF BE FF 01         [24] 1225 	cjne	r6,#0xFF,00121$
      0000E2 1F               [12] 1226 	dec	r7
      0000E3                       1227 00121$:
      0000E3 EE               [12] 1228 	mov	a,r6
      0000E4 4F               [12] 1229 	orl	a,r7
      0000E5 70 F7            [24] 1230 	jnz	00107$
                           000010  1231 	C$c8051_SDCC.h$51$1$2 ==.
                                   1232 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:51: while (!(OSCXCN & 0x80));           // Wait for crystal osc. to settle
      0000E7                       1233 00102$:
      0000E7 E5 B1            [12] 1234 	mov	a,_OSCXCN
      0000E9 30 E7 FB         [24] 1235 	jnb	acc.7,00102$
                           000015  1236 	C$c8051_SDCC.h$53$1$2 ==.
                                   1237 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:53: OSCICN = 0x88;                      // select external oscillator as SYSCLK
      0000EC 75 B2 88         [24] 1238 	mov	_OSCICN,#0x88
                           000018  1239 	C$c8051_SDCC.h$56$1$2 ==.
                           000018  1240 	XG$SYSCLK_Init$0$0 ==.
      0000EF 22               [24] 1241 	ret
                                   1242 ;------------------------------------------------------------
                                   1243 ;Allocation info for local variables in function 'UART0_Init'
                                   1244 ;------------------------------------------------------------
                           000019  1245 	G$UART0_Init$0$0 ==.
                           000019  1246 	C$c8051_SDCC.h$64$1$2 ==.
                                   1247 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:64: void UART0_Init(void)
                                   1248 ;	-----------------------------------------
                                   1249 ;	 function UART0_Init
                                   1250 ;	-----------------------------------------
      0000F0                       1251 _UART0_Init:
                           000019  1252 	C$c8051_SDCC.h$66$1$4 ==.
                                   1253 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:66: SCON0  = 0x50;                      // SCON0: mode 1, 8-bit UART, enable RX
      0000F0 75 98 50         [24] 1254 	mov	_SCON0,#0x50
                           00001C  1255 	C$c8051_SDCC.h$67$1$4 ==.
                                   1256 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:67: TMOD   = 0x20;                      // TMOD: timer 1, mode 2, 8-bit reload
      0000F3 75 89 20         [24] 1257 	mov	_TMOD,#0x20
                           00001F  1258 	C$c8051_SDCC.h$68$1$4 ==.
                                   1259 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:68: TH1    = -(SYSCLK/BAUDRATE/16);     // set Timer1 reload value for baudrate
      0000F6 75 8D DC         [24] 1260 	mov	_TH1,#0xDC
                           000022  1261 	C$c8051_SDCC.h$69$1$4 ==.
                                   1262 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:69: TR1    = 1;                         // start Timer1
      0000F9 D2 8E            [12] 1263 	setb	_TR1
                           000024  1264 	C$c8051_SDCC.h$70$1$4 ==.
                                   1265 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:70: CKCON |= 0x10;                      // Timer1 uses SYSCLK as time base
      0000FB 43 8E 10         [24] 1266 	orl	_CKCON,#0x10
                           000027  1267 	C$c8051_SDCC.h$71$1$4 ==.
                                   1268 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:71: PCON  |= 0x80;                      // SMOD00 = 1 (disable baud rate 
      0000FE 43 87 80         [24] 1269 	orl	_PCON,#0x80
                           00002A  1270 	C$c8051_SDCC.h$73$1$4 ==.
                                   1271 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:73: TI0    = 1;                         // Indicate TX0 ready
      000101 D2 99            [12] 1272 	setb	_TI0
                           00002C  1273 	C$c8051_SDCC.h$74$1$4 ==.
                                   1274 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:74: P0MDOUT |= 0x01;                    // Set TX0 to push/pull
      000103 43 A4 01         [24] 1275 	orl	_P0MDOUT,#0x01
                           00002F  1276 	C$c8051_SDCC.h$75$1$4 ==.
                           00002F  1277 	XG$UART0_Init$0$0 ==.
      000106 22               [24] 1278 	ret
                                   1279 ;------------------------------------------------------------
                                   1280 ;Allocation info for local variables in function 'Sys_Init'
                                   1281 ;------------------------------------------------------------
                           000030  1282 	G$Sys_Init$0$0 ==.
                           000030  1283 	C$c8051_SDCC.h$83$1$4 ==.
                                   1284 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:83: void Sys_Init(void)
                                   1285 ;	-----------------------------------------
                                   1286 ;	 function Sys_Init
                                   1287 ;	-----------------------------------------
      000107                       1288 _Sys_Init:
                           000030  1289 	C$c8051_SDCC.h$85$1$6 ==.
                                   1290 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:85: WDTCN = 0xde;			// disable watchdog timer
      000107 75 FF DE         [24] 1291 	mov	_WDTCN,#0xDE
                           000033  1292 	C$c8051_SDCC.h$86$1$6 ==.
                                   1293 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:86: WDTCN = 0xad;
      00010A 75 FF AD         [24] 1294 	mov	_WDTCN,#0xAD
                           000036  1295 	C$c8051_SDCC.h$88$1$6 ==.
                                   1296 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:88: SYSCLK_Init();			// initialize oscillator
      00010D 12 00 D7         [24] 1297 	lcall	_SYSCLK_Init
                           000039  1298 	C$c8051_SDCC.h$89$1$6 ==.
                                   1299 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:89: UART0_Init();			// initialize UART0
      000110 12 00 F0         [24] 1300 	lcall	_UART0_Init
                           00003C  1301 	C$c8051_SDCC.h$91$1$6 ==.
                                   1302 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:91: XBR0 |= 0x04;
      000113 43 E1 04         [24] 1303 	orl	_XBR0,#0x04
                           00003F  1304 	C$c8051_SDCC.h$92$1$6 ==.
                                   1305 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:92: XBR2 |= 0x40;                    	// Enable crossbar and weak pull-ups
      000116 43 E3 40         [24] 1306 	orl	_XBR2,#0x40
                           000042  1307 	C$c8051_SDCC.h$93$1$6 ==.
                           000042  1308 	XG$Sys_Init$0$0 ==.
      000119 22               [24] 1309 	ret
                                   1310 ;------------------------------------------------------------
                                   1311 ;Allocation info for local variables in function 'putchar'
                                   1312 ;------------------------------------------------------------
                                   1313 ;c                         Allocated to registers r7 
                                   1314 ;------------------------------------------------------------
                           000043  1315 	G$putchar$0$0 ==.
                           000043  1316 	C$c8051_SDCC.h$98$1$6 ==.
                                   1317 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:98: void putchar(char c)
                                   1318 ;	-----------------------------------------
                                   1319 ;	 function putchar
                                   1320 ;	-----------------------------------------
      00011A                       1321 _putchar:
      00011A AF 82            [24] 1322 	mov	r7,dpl
                           000045  1323 	C$c8051_SDCC.h$100$1$8 ==.
                                   1324 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:100: while (!TI0); 
      00011C                       1325 00101$:
                           000045  1326 	C$c8051_SDCC.h$101$1$8 ==.
                                   1327 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:101: TI0 = 0;
      00011C 10 99 02         [24] 1328 	jbc	_TI0,00112$
      00011F 80 FB            [24] 1329 	sjmp	00101$
      000121                       1330 00112$:
                           00004A  1331 	C$c8051_SDCC.h$102$1$8 ==.
                                   1332 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:102: SBUF0 = c;
      000121 8F 99            [24] 1333 	mov	_SBUF0,r7
                           00004C  1334 	C$c8051_SDCC.h$103$1$8 ==.
                           00004C  1335 	XG$putchar$0$0 ==.
      000123 22               [24] 1336 	ret
                                   1337 ;------------------------------------------------------------
                                   1338 ;Allocation info for local variables in function 'getchar'
                                   1339 ;------------------------------------------------------------
                                   1340 ;c                         Allocated to registers 
                                   1341 ;------------------------------------------------------------
                           00004D  1342 	G$getchar$0$0 ==.
                           00004D  1343 	C$c8051_SDCC.h$108$1$8 ==.
                                   1344 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:108: char getchar(void)
                                   1345 ;	-----------------------------------------
                                   1346 ;	 function getchar
                                   1347 ;	-----------------------------------------
      000124                       1348 _getchar:
                           00004D  1349 	C$c8051_SDCC.h$111$1$10 ==.
                                   1350 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:111: while (!RI0);
      000124                       1351 00101$:
                           00004D  1352 	C$c8051_SDCC.h$112$1$10 ==.
                                   1353 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:112: RI0 = 0;
      000124 10 98 02         [24] 1354 	jbc	_RI0,00112$
      000127 80 FB            [24] 1355 	sjmp	00101$
      000129                       1356 00112$:
                           000052  1357 	C$c8051_SDCC.h$113$1$10 ==.
                                   1358 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:113: c = SBUF0;
      000129 85 99 82         [24] 1359 	mov	dpl,_SBUF0
                           000055  1360 	C$c8051_SDCC.h$114$1$10 ==.
                                   1361 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:114: putchar(c);                          // echo to terminal
      00012C 12 01 1A         [24] 1362 	lcall	_putchar
                           000058  1363 	C$c8051_SDCC.h$115$1$10 ==.
                                   1364 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:115: return SBUF0;
      00012F 85 99 82         [24] 1365 	mov	dpl,_SBUF0
                           00005B  1366 	C$c8051_SDCC.h$116$1$10 ==.
                           00005B  1367 	XG$getchar$0$0 ==.
      000132 22               [24] 1368 	ret
                                   1369 ;------------------------------------------------------------
                                   1370 ;Allocation info for local variables in function 'lcd_print'
                                   1371 ;------------------------------------------------------------
                                   1372 ;fmt                       Allocated to stack - _bp -5
                                   1373 ;len                       Allocated to registers r6 
                                   1374 ;i                         Allocated to registers 
                                   1375 ;ap                        Allocated to registers 
                                   1376 ;text                      Allocated with name '_lcd_print_text_1_73'
                                   1377 ;------------------------------------------------------------
                           00005C  1378 	G$lcd_print$0$0 ==.
                           00005C  1379 	C$i2c.h$81$1$10 ==.
                                   1380 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:81: void lcd_print(const char *fmt, ...)
                                   1381 ;	-----------------------------------------
                                   1382 ;	 function lcd_print
                                   1383 ;	-----------------------------------------
      000133                       1384 _lcd_print:
      000133 C0 0F            [24] 1385 	push	_bp
      000135 85 81 0F         [24] 1386 	mov	_bp,sp
                           000061  1387 	C$i2c.h$87$1$73 ==.
                                   1388 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:87: if ( strlen(fmt) <= 0 ) return;   //If there is no data to print, return
      000138 E5 0F            [12] 1389 	mov	a,_bp
      00013A 24 FB            [12] 1390 	add	a,#0xfb
      00013C F8               [12] 1391 	mov	r0,a
      00013D 86 82            [24] 1392 	mov	dpl,@r0
      00013F 08               [12] 1393 	inc	r0
      000140 86 83            [24] 1394 	mov	dph,@r0
      000142 08               [12] 1395 	inc	r0
      000143 86 F0            [24] 1396 	mov	b,@r0
      000145 12 10 77         [24] 1397 	lcall	_strlen
      000148 E5 82            [12] 1398 	mov	a,dpl
      00014A 85 83 F0         [24] 1399 	mov	b,dph
      00014D 45 F0            [12] 1400 	orl	a,b
      00014F 70 02            [24] 1401 	jnz	00102$
      000151 80 62            [24] 1402 	sjmp	00109$
      000153                       1403 00102$:
                           00007C  1404 	C$i2c.h$89$2$74 ==.
                                   1405 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:89: va_start(ap, fmt);
      000153 E5 0F            [12] 1406 	mov	a,_bp
      000155 24 FB            [12] 1407 	add	a,#0xFB
      000157 FF               [12] 1408 	mov	r7,a
      000158 8F 0B            [24] 1409 	mov	_vsprintf_PARM_3,r7
                           000083  1410 	C$i2c.h$90$1$73 ==.
                                   1411 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:90: vsprintf(text, fmt, ap);
      00015A E5 0F            [12] 1412 	mov	a,_bp
      00015C 24 FB            [12] 1413 	add	a,#0xfb
      00015E F8               [12] 1414 	mov	r0,a
      00015F 86 08            [24] 1415 	mov	_vsprintf_PARM_2,@r0
      000161 08               [12] 1416 	inc	r0
      000162 86 09            [24] 1417 	mov	(_vsprintf_PARM_2 + 1),@r0
      000164 08               [12] 1418 	inc	r0
      000165 86 0A            [24] 1419 	mov	(_vsprintf_PARM_2 + 2),@r0
      000167 90 00 01         [24] 1420 	mov	dptr,#_lcd_print_text_1_73
      00016A 75 F0 00         [24] 1421 	mov	b,#0x00
      00016D 12 09 C3         [24] 1422 	lcall	_vsprintf
                           000099  1423 	C$i2c.h$93$1$73 ==.
                                   1424 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:93: len = strlen(text);
      000170 90 00 01         [24] 1425 	mov	dptr,#_lcd_print_text_1_73
      000173 75 F0 00         [24] 1426 	mov	b,#0x00
      000176 12 10 77         [24] 1427 	lcall	_strlen
      000179 AE 82            [24] 1428 	mov	r6,dpl
                           0000A4  1429 	C$i2c.h$94$1$73 ==.
                                   1430 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:94: for(i=0; i<len; i++)
      00017B 7F 00            [12] 1431 	mov	r7,#0x00
      00017D                       1432 00107$:
      00017D C3               [12] 1433 	clr	c
      00017E EF               [12] 1434 	mov	a,r7
      00017F 9E               [12] 1435 	subb	a,r6
      000180 50 1F            [24] 1436 	jnc	00105$
                           0000AB  1437 	C$i2c.h$96$2$76 ==.
                                   1438 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:96: if(text[i] == (unsigned char)'\n') text[i] = 13;
      000182 EF               [12] 1439 	mov	a,r7
      000183 24 01            [12] 1440 	add	a,#_lcd_print_text_1_73
      000185 F5 82            [12] 1441 	mov	dpl,a
      000187 E4               [12] 1442 	clr	a
      000188 34 00            [12] 1443 	addc	a,#(_lcd_print_text_1_73 >> 8)
      00018A F5 83            [12] 1444 	mov	dph,a
      00018C E0               [24] 1445 	movx	a,@dptr
      00018D FD               [12] 1446 	mov	r5,a
      00018E BD 0A 0D         [24] 1447 	cjne	r5,#0x0A,00108$
      000191 EF               [12] 1448 	mov	a,r7
      000192 24 01            [12] 1449 	add	a,#_lcd_print_text_1_73
      000194 F5 82            [12] 1450 	mov	dpl,a
      000196 E4               [12] 1451 	clr	a
      000197 34 00            [12] 1452 	addc	a,#(_lcd_print_text_1_73 >> 8)
      000199 F5 83            [12] 1453 	mov	dph,a
      00019B 74 0D            [12] 1454 	mov	a,#0x0D
      00019D F0               [24] 1455 	movx	@dptr,a
      00019E                       1456 00108$:
                           0000C7  1457 	C$i2c.h$94$1$73 ==.
                                   1458 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:94: for(i=0; i<len; i++)
      00019E 0F               [12] 1459 	inc	r7
      00019F 80 DC            [24] 1460 	sjmp	00107$
      0001A1                       1461 00105$:
                           0000CA  1462 	C$i2c.h$99$1$73 ==.
                                   1463 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:99: i2c_write_data(0xC6, 0x00, text, len);
      0001A1 75 28 01         [24] 1464 	mov	_i2c_write_data_PARM_3,#_lcd_print_text_1_73
      0001A4 75 29 00         [24] 1465 	mov	(_i2c_write_data_PARM_3 + 1),#(_lcd_print_text_1_73 >> 8)
      0001A7 75 2A 00         [24] 1466 	mov	(_i2c_write_data_PARM_3 + 2),#0x00
      0001AA 75 27 00         [24] 1467 	mov	_i2c_write_data_PARM_2,#0x00
      0001AD 8E 2B            [24] 1468 	mov	_i2c_write_data_PARM_4,r6
      0001AF 75 82 C6         [24] 1469 	mov	dpl,#0xC6
      0001B2 12 04 49         [24] 1470 	lcall	_i2c_write_data
      0001B5                       1471 00109$:
      0001B5 D0 0F            [24] 1472 	pop	_bp
                           0000E0  1473 	C$i2c.h$100$1$73 ==.
                           0000E0  1474 	XG$lcd_print$0$0 ==.
      0001B7 22               [24] 1475 	ret
                                   1476 ;------------------------------------------------------------
                                   1477 ;Allocation info for local variables in function 'lcd_clear'
                                   1478 ;------------------------------------------------------------
                                   1479 ;NumBytes                  Allocated with name '_lcd_clear_NumBytes_1_77'
                                   1480 ;Cmd                       Allocated with name '_lcd_clear_Cmd_1_77'
                                   1481 ;------------------------------------------------------------
                           0000E1  1482 	G$lcd_clear$0$0 ==.
                           0000E1  1483 	C$i2c.h$103$1$73 ==.
                                   1484 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:103: void lcd_clear()
                                   1485 ;	-----------------------------------------
                                   1486 ;	 function lcd_clear
                                   1487 ;	-----------------------------------------
      0001B8                       1488 _lcd_clear:
                           0000E1  1489 	C$i2c.h$105$1$73 ==.
                                   1490 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:105: unsigned char NumBytes=0, Cmd[2];
      0001B8 75 22 00         [24] 1491 	mov	_lcd_clear_NumBytes_1_77,#0x00
                           0000E4  1492 	C$i2c.h$107$1$77 ==.
                                   1493 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:107: while(NumBytes < 64) i2c_read_data(0xC6, 0x00, &NumBytes, 1);
      0001BB                       1494 00101$:
      0001BB 74 C0            [12] 1495 	mov	a,#0x100 - 0x40
      0001BD 25 22            [12] 1496 	add	a,_lcd_clear_NumBytes_1_77
      0001BF 40 17            [24] 1497 	jc	00103$
      0001C1 75 2D 22         [24] 1498 	mov	_i2c_read_data_PARM_3,#_lcd_clear_NumBytes_1_77
      0001C4 75 2E 00         [24] 1499 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0001C7 75 2F 40         [24] 1500 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0001CA 75 2C 00         [24] 1501 	mov	_i2c_read_data_PARM_2,#0x00
      0001CD 75 30 01         [24] 1502 	mov	_i2c_read_data_PARM_4,#0x01
      0001D0 75 82 C6         [24] 1503 	mov	dpl,#0xC6
      0001D3 12 04 BF         [24] 1504 	lcall	_i2c_read_data
      0001D6 80 E3            [24] 1505 	sjmp	00101$
      0001D8                       1506 00103$:
                           000101  1507 	C$i2c.h$109$1$77 ==.
                                   1508 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:109: Cmd[0] = 12;
      0001D8 75 23 0C         [24] 1509 	mov	_lcd_clear_Cmd_1_77,#0x0C
                           000104  1510 	C$i2c.h$110$1$77 ==.
                                   1511 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:110: i2c_write_data(0xC6, 0x00, Cmd, 1);
      0001DB 75 28 23         [24] 1512 	mov	_i2c_write_data_PARM_3,#_lcd_clear_Cmd_1_77
      0001DE 75 29 00         [24] 1513 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      0001E1 75 2A 40         [24] 1514 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      0001E4 75 27 00         [24] 1515 	mov	_i2c_write_data_PARM_2,#0x00
      0001E7 75 2B 01         [24] 1516 	mov	_i2c_write_data_PARM_4,#0x01
      0001EA 75 82 C6         [24] 1517 	mov	dpl,#0xC6
      0001ED 12 04 49         [24] 1518 	lcall	_i2c_write_data
                           000119  1519 	C$i2c.h$111$1$77 ==.
                           000119  1520 	XG$lcd_clear$0$0 ==.
      0001F0 22               [24] 1521 	ret
                                   1522 ;------------------------------------------------------------
                                   1523 ;Allocation info for local variables in function 'read_keypad'
                                   1524 ;------------------------------------------------------------
                                   1525 ;i                         Allocated to registers r7 
                                   1526 ;Data                      Allocated with name '_read_keypad_Data_1_78'
                                   1527 ;------------------------------------------------------------
                           00011A  1528 	G$read_keypad$0$0 ==.
                           00011A  1529 	C$i2c.h$114$1$77 ==.
                                   1530 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:114: char read_keypad()
                                   1531 ;	-----------------------------------------
                                   1532 ;	 function read_keypad
                                   1533 ;	-----------------------------------------
      0001F1                       1534 _read_keypad:
                           00011A  1535 	C$i2c.h$118$1$78 ==.
                                   1536 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:118: i2c_read_data(0xC6, 0x01, Data, 2); //Read I2C data on address 192, register 1, 2 bytes of data.
      0001F1 75 2D 25         [24] 1537 	mov	_i2c_read_data_PARM_3,#_read_keypad_Data_1_78
      0001F4 75 2E 00         [24] 1538 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0001F7 75 2F 40         [24] 1539 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0001FA 75 2C 01         [24] 1540 	mov	_i2c_read_data_PARM_2,#0x01
      0001FD 75 30 02         [24] 1541 	mov	_i2c_read_data_PARM_4,#0x02
      000200 75 82 C6         [24] 1542 	mov	dpl,#0xC6
      000203 12 04 BF         [24] 1543 	lcall	_i2c_read_data
                           00012F  1544 	C$i2c.h$119$1$78 ==.
                                   1545 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:119: if(Data[0] == 0xFF) return 0;  //No response on bus, no display
      000206 74 FF            [12] 1546 	mov	a,#0xFF
      000208 B5 25 05         [24] 1547 	cjne	a,_read_keypad_Data_1_78,00102$
      00020B 75 82 00         [24] 1548 	mov	dpl,#0x00
      00020E 80 5F            [24] 1549 	sjmp	00116$
      000210                       1550 00102$:
                           000139  1551 	C$i2c.h$121$1$78 ==.
                                   1552 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:121: for(i=0; i<8; i++)             //loop 8 times
      000210 7F 00            [12] 1553 	mov	r7,#0x00
      000212 8F 06            [24] 1554 	mov	ar6,r7
      000214                       1555 00114$:
                           00013D  1556 	C$i2c.h$123$2$79 ==.
                                   1557 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:123: if(Data[0] & (0x01 << i))  //find the ASCII value of the keypad read, if it is the current loop value
      000214 8E F0            [24] 1558 	mov	b,r6
      000216 05 F0            [12] 1559 	inc	b
      000218 7C 01            [12] 1560 	mov	r4,#0x01
      00021A 7D 00            [12] 1561 	mov	r5,#0x00
      00021C 80 06            [24] 1562 	sjmp	00145$
      00021E                       1563 00144$:
      00021E EC               [12] 1564 	mov	a,r4
      00021F 2C               [12] 1565 	add	a,r4
      000220 FC               [12] 1566 	mov	r4,a
      000221 ED               [12] 1567 	mov	a,r5
      000222 33               [12] 1568 	rlc	a
      000223 FD               [12] 1569 	mov	r5,a
      000224                       1570 00145$:
      000224 D5 F0 F7         [24] 1571 	djnz	b,00144$
      000227 AA 25            [24] 1572 	mov	r2,_read_keypad_Data_1_78
      000229 7B 00            [12] 1573 	mov	r3,#0x00
      00022B EA               [12] 1574 	mov	a,r2
      00022C 52 04            [12] 1575 	anl	ar4,a
      00022E EB               [12] 1576 	mov	a,r3
      00022F 52 05            [12] 1577 	anl	ar5,a
      000231 EC               [12] 1578 	mov	a,r4
      000232 4D               [12] 1579 	orl	a,r5
      000233 60 07            [24] 1580 	jz	00115$
                           00015E  1581 	C$i2c.h$124$2$79 ==.
                                   1582 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:124: return i+49;
      000235 74 31            [12] 1583 	mov	a,#0x31
      000237 2F               [12] 1584 	add	a,r7
      000238 F5 82            [12] 1585 	mov	dpl,a
      00023A 80 33            [24] 1586 	sjmp	00116$
      00023C                       1587 00115$:
                           000165  1588 	C$i2c.h$121$1$78 ==.
                                   1589 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:121: for(i=0; i<8; i++)             //loop 8 times
      00023C 0E               [12] 1590 	inc	r6
      00023D 8E 07            [24] 1591 	mov	ar7,r6
      00023F BE 08 00         [24] 1592 	cjne	r6,#0x08,00147$
      000242                       1593 00147$:
      000242 40 D0            [24] 1594 	jc	00114$
                           00016D  1595 	C$i2c.h$127$1$78 ==.
                                   1596 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:127: if(Data[1] & 0x01) return '9'; //if the value is equal to 9 return 9.
      000244 E5 26            [12] 1597 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000246 30 E0 05         [24] 1598 	jnb	acc.0,00107$
      000249 75 82 39         [24] 1599 	mov	dpl,#0x39
      00024C 80 21            [24] 1600 	sjmp	00116$
      00024E                       1601 00107$:
                           000177  1602 	C$i2c.h$129$1$78 ==.
                                   1603 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:129: if(Data[1] & 0x02) return '*'; //if the value is equal to the star.
      00024E E5 26            [12] 1604 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000250 30 E1 05         [24] 1605 	jnb	acc.1,00109$
      000253 75 82 2A         [24] 1606 	mov	dpl,#0x2A
      000256 80 17            [24] 1607 	sjmp	00116$
      000258                       1608 00109$:
                           000181  1609 	C$i2c.h$131$1$78 ==.
                                   1610 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:131: if(Data[1] & 0x04) return '0'; //if the value is equal to the 0 key
      000258 E5 26            [12] 1611 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      00025A 30 E2 05         [24] 1612 	jnb	acc.2,00111$
      00025D 75 82 30         [24] 1613 	mov	dpl,#0x30
      000260 80 0D            [24] 1614 	sjmp	00116$
      000262                       1615 00111$:
                           00018B  1616 	C$i2c.h$133$1$78 ==.
                                   1617 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:133: if(Data[1] & 0x08) return '#'; //if the value is equal to the pound key
      000262 E5 26            [12] 1618 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000264 30 E3 05         [24] 1619 	jnb	acc.3,00113$
      000267 75 82 23         [24] 1620 	mov	dpl,#0x23
      00026A 80 03            [24] 1621 	sjmp	00116$
      00026C                       1622 00113$:
                           000195  1623 	C$i2c.h$135$1$78 ==.
                                   1624 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:135: return -1;                     //else return a numerical -1 (0xFF)
      00026C 75 82 FF         [24] 1625 	mov	dpl,#0xFF
      00026F                       1626 00116$:
                           000198  1627 	C$i2c.h$136$1$78 ==.
                           000198  1628 	XG$read_keypad$0$0 ==.
      00026F 22               [24] 1629 	ret
                                   1630 ;------------------------------------------------------------
                                   1631 ;Allocation info for local variables in function 'kpd_input'
                                   1632 ;------------------------------------------------------------
                                   1633 ;mode                      Allocated to registers r7 
                                   1634 ;sum                       Allocated to registers r5 r6 
                                   1635 ;key                       Allocated to registers r3 
                                   1636 ;i                         Allocated to registers 
                                   1637 ;------------------------------------------------------------
                           000199  1638 	G$kpd_input$0$0 ==.
                           000199  1639 	C$i2c.h$148$1$78 ==.
                                   1640 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:148: unsigned int kpd_input(char mode)
                                   1641 ;	-----------------------------------------
                                   1642 ;	 function kpd_input
                                   1643 ;	-----------------------------------------
      000270                       1644 _kpd_input:
      000270 AF 82            [24] 1645 	mov	r7,dpl
                           00019B  1646 	C$i2c.h$153$1$81 ==.
                                   1647 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:153: sum = 0;
                           00019B  1648 	C$i2c.h$156$1$81 ==.
                                   1649 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:156: if(mode==0)lcd_print("\nType digits; end w/#");
      000272 E4               [12] 1650 	clr	a
      000273 FD               [12] 1651 	mov	r5,a
      000274 FE               [12] 1652 	mov	r6,a
      000275 EF               [12] 1653 	mov	a,r7
      000276 70 1D            [24] 1654 	jnz	00102$
      000278 C0 06            [24] 1655 	push	ar6
      00027A C0 05            [24] 1656 	push	ar5
      00027C 74 E7            [12] 1657 	mov	a,#___str_0
      00027E C0 E0            [24] 1658 	push	acc
      000280 74 10            [12] 1659 	mov	a,#(___str_0 >> 8)
      000282 C0 E0            [24] 1660 	push	acc
      000284 74 80            [12] 1661 	mov	a,#0x80
      000286 C0 E0            [24] 1662 	push	acc
      000288 12 01 33         [24] 1663 	lcall	_lcd_print
      00028B 15 81            [12] 1664 	dec	sp
      00028D 15 81            [12] 1665 	dec	sp
      00028F 15 81            [12] 1666 	dec	sp
      000291 D0 05            [24] 1667 	pop	ar5
      000293 D0 06            [24] 1668 	pop	ar6
      000295                       1669 00102$:
                           0001BE  1670 	C$i2c.h$158$1$81 ==.
                                   1671 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:158: lcd_print("     %c%c%c%c%c",0x08,0x08,0x08,0x08,0x08);
      000295 C0 06            [24] 1672 	push	ar6
      000297 C0 05            [24] 1673 	push	ar5
      000299 74 08            [12] 1674 	mov	a,#0x08
      00029B C0 E0            [24] 1675 	push	acc
      00029D E4               [12] 1676 	clr	a
      00029E C0 E0            [24] 1677 	push	acc
      0002A0 74 08            [12] 1678 	mov	a,#0x08
      0002A2 C0 E0            [24] 1679 	push	acc
      0002A4 E4               [12] 1680 	clr	a
      0002A5 C0 E0            [24] 1681 	push	acc
      0002A7 74 08            [12] 1682 	mov	a,#0x08
      0002A9 C0 E0            [24] 1683 	push	acc
      0002AB E4               [12] 1684 	clr	a
      0002AC C0 E0            [24] 1685 	push	acc
      0002AE 74 08            [12] 1686 	mov	a,#0x08
      0002B0 C0 E0            [24] 1687 	push	acc
      0002B2 E4               [12] 1688 	clr	a
      0002B3 C0 E0            [24] 1689 	push	acc
      0002B5 74 08            [12] 1690 	mov	a,#0x08
      0002B7 C0 E0            [24] 1691 	push	acc
      0002B9 E4               [12] 1692 	clr	a
      0002BA C0 E0            [24] 1693 	push	acc
      0002BC 74 FD            [12] 1694 	mov	a,#___str_1
      0002BE C0 E0            [24] 1695 	push	acc
      0002C0 74 10            [12] 1696 	mov	a,#(___str_1 >> 8)
      0002C2 C0 E0            [24] 1697 	push	acc
      0002C4 74 80            [12] 1698 	mov	a,#0x80
      0002C6 C0 E0            [24] 1699 	push	acc
      0002C8 12 01 33         [24] 1700 	lcall	_lcd_print
      0002CB E5 81            [12] 1701 	mov	a,sp
      0002CD 24 F3            [12] 1702 	add	a,#0xf3
      0002CF F5 81            [12] 1703 	mov	sp,a
                           0001FA  1704 	C$i2c.h$160$1$81 ==.
                                   1705 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:160: delay_time(500000);	//Add 20ms delay before reading i2c in loop
      0002D1 90 A1 20         [24] 1706 	mov	dptr,#0xA120
      0002D4 75 F0 07         [24] 1707 	mov	b,#0x07
      0002D7 E4               [12] 1708 	clr	a
      0002D8 12 03 E4         [24] 1709 	lcall	_delay_time
      0002DB D0 05            [24] 1710 	pop	ar5
      0002DD D0 06            [24] 1711 	pop	ar6
                           000208  1712 	C$i2c.h$164$1$81 ==.
                                   1713 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:164: for(i=0; i<5; i++)
      0002DF 7F 00            [12] 1714 	mov	r7,#0x00
                           00020A  1715 	C$i2c.h$166$3$84 ==.
                                   1716 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:166: while(((key=read_keypad()) == -1) || (key == '*'))delay_time(10000);
      0002E1                       1717 00104$:
      0002E1 C0 07            [24] 1718 	push	ar7
      0002E3 C0 06            [24] 1719 	push	ar6
      0002E5 C0 05            [24] 1720 	push	ar5
      0002E7 12 01 F1         [24] 1721 	lcall	_read_keypad
      0002EA AC 82            [24] 1722 	mov	r4,dpl
      0002EC D0 05            [24] 1723 	pop	ar5
      0002EE D0 06            [24] 1724 	pop	ar6
      0002F0 D0 07            [24] 1725 	pop	ar7
      0002F2 8C 03            [24] 1726 	mov	ar3,r4
      0002F4 BC FF 02         [24] 1727 	cjne	r4,#0xFF,00146$
      0002F7 80 03            [24] 1728 	sjmp	00105$
      0002F9                       1729 00146$:
      0002F9 BB 2A 17         [24] 1730 	cjne	r3,#0x2A,00106$
      0002FC                       1731 00105$:
      0002FC 90 27 10         [24] 1732 	mov	dptr,#0x2710
      0002FF E4               [12] 1733 	clr	a
      000300 F5 F0            [12] 1734 	mov	b,a
      000302 C0 07            [24] 1735 	push	ar7
      000304 C0 06            [24] 1736 	push	ar6
      000306 C0 05            [24] 1737 	push	ar5
      000308 12 03 E4         [24] 1738 	lcall	_delay_time
      00030B D0 05            [24] 1739 	pop	ar5
      00030D D0 06            [24] 1740 	pop	ar6
      00030F D0 07            [24] 1741 	pop	ar7
      000311 80 CE            [24] 1742 	sjmp	00104$
      000313                       1743 00106$:
                           00023C  1744 	C$i2c.h$167$2$82 ==.
                                   1745 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:167: if(key == '#')
      000313 BB 23 2A         [24] 1746 	cjne	r3,#0x23,00114$
                           00023F  1747 	C$i2c.h$169$3$83 ==.
                                   1748 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:169: while(read_keypad() == '#')delay_time(10000);
      000316                       1749 00107$:
      000316 C0 06            [24] 1750 	push	ar6
      000318 C0 05            [24] 1751 	push	ar5
      00031A 12 01 F1         [24] 1752 	lcall	_read_keypad
      00031D AC 82            [24] 1753 	mov	r4,dpl
      00031F D0 05            [24] 1754 	pop	ar5
      000321 D0 06            [24] 1755 	pop	ar6
      000323 BC 23 13         [24] 1756 	cjne	r4,#0x23,00109$
      000326 90 27 10         [24] 1757 	mov	dptr,#0x2710
      000329 E4               [12] 1758 	clr	a
      00032A F5 F0            [12] 1759 	mov	b,a
      00032C C0 06            [24] 1760 	push	ar6
      00032E C0 05            [24] 1761 	push	ar5
      000330 12 03 E4         [24] 1762 	lcall	_delay_time
      000333 D0 05            [24] 1763 	pop	ar5
      000335 D0 06            [24] 1764 	pop	ar6
      000337 80 DD            [24] 1765 	sjmp	00107$
      000339                       1766 00109$:
                           000262  1767 	C$i2c.h$170$3$83 ==.
                                   1768 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:170: return sum;
      000339 8D 82            [24] 1769 	mov	dpl,r5
      00033B 8E 83            [24] 1770 	mov	dph,r6
      00033D 02 03 E3         [24] 1771 	ljmp	00119$
      000340                       1772 00114$:
                           000269  1773 	C$i2c.h$174$3$84 ==.
                                   1774 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:174: lcd_print("%c", key);
      000340 EB               [12] 1775 	mov	a,r3
      000341 FA               [12] 1776 	mov	r2,a
      000342 33               [12] 1777 	rlc	a
      000343 95 E0            [12] 1778 	subb	a,acc
      000345 FC               [12] 1779 	mov	r4,a
      000346 C0 07            [24] 1780 	push	ar7
      000348 C0 06            [24] 1781 	push	ar6
      00034A C0 05            [24] 1782 	push	ar5
      00034C C0 04            [24] 1783 	push	ar4
      00034E C0 03            [24] 1784 	push	ar3
      000350 C0 02            [24] 1785 	push	ar2
      000352 C0 02            [24] 1786 	push	ar2
      000354 C0 04            [24] 1787 	push	ar4
      000356 74 0D            [12] 1788 	mov	a,#___str_2
      000358 C0 E0            [24] 1789 	push	acc
      00035A 74 11            [12] 1790 	mov	a,#(___str_2 >> 8)
      00035C C0 E0            [24] 1791 	push	acc
      00035E 74 80            [12] 1792 	mov	a,#0x80
      000360 C0 E0            [24] 1793 	push	acc
      000362 12 01 33         [24] 1794 	lcall	_lcd_print
      000365 E5 81            [12] 1795 	mov	a,sp
      000367 24 FB            [12] 1796 	add	a,#0xfb
      000369 F5 81            [12] 1797 	mov	sp,a
      00036B D0 02            [24] 1798 	pop	ar2
      00036D D0 03            [24] 1799 	pop	ar3
      00036F D0 04            [24] 1800 	pop	ar4
      000371 D0 05            [24] 1801 	pop	ar5
      000373 D0 06            [24] 1802 	pop	ar6
                           00029E  1803 	C$i2c.h$175$1$81 ==.
                                   1804 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:175: sum = sum*10 + key - '0';
      000375 8D 11            [24] 1805 	mov	__mulint_PARM_2,r5
      000377 8E 12            [24] 1806 	mov	(__mulint_PARM_2 + 1),r6
      000379 90 00 0A         [24] 1807 	mov	dptr,#0x000A
      00037C C0 04            [24] 1808 	push	ar4
      00037E C0 03            [24] 1809 	push	ar3
      000380 C0 02            [24] 1810 	push	ar2
      000382 12 09 36         [24] 1811 	lcall	__mulint
      000385 A8 82            [24] 1812 	mov	r0,dpl
      000387 A9 83            [24] 1813 	mov	r1,dph
      000389 D0 02            [24] 1814 	pop	ar2
      00038B D0 03            [24] 1815 	pop	ar3
      00038D D0 04            [24] 1816 	pop	ar4
      00038F D0 07            [24] 1817 	pop	ar7
      000391 EA               [12] 1818 	mov	a,r2
      000392 28               [12] 1819 	add	a,r0
      000393 F8               [12] 1820 	mov	r0,a
      000394 EC               [12] 1821 	mov	a,r4
      000395 39               [12] 1822 	addc	a,r1
      000396 F9               [12] 1823 	mov	r1,a
      000397 E8               [12] 1824 	mov	a,r0
      000398 24 D0            [12] 1825 	add	a,#0xD0
      00039A FD               [12] 1826 	mov	r5,a
      00039B E9               [12] 1827 	mov	a,r1
      00039C 34 FF            [12] 1828 	addc	a,#0xFF
      00039E FE               [12] 1829 	mov	r6,a
                           0002C8  1830 	C$i2c.h$176$3$84 ==.
                                   1831 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:176: while(read_keypad() == key)delay_time(10000); //wait for key to be released
      00039F                       1832 00110$:
      00039F C0 07            [24] 1833 	push	ar7
      0003A1 C0 06            [24] 1834 	push	ar6
      0003A3 C0 05            [24] 1835 	push	ar5
      0003A5 C0 03            [24] 1836 	push	ar3
      0003A7 12 01 F1         [24] 1837 	lcall	_read_keypad
      0003AA AC 82            [24] 1838 	mov	r4,dpl
      0003AC D0 03            [24] 1839 	pop	ar3
      0003AE D0 05            [24] 1840 	pop	ar5
      0003B0 D0 06            [24] 1841 	pop	ar6
      0003B2 D0 07            [24] 1842 	pop	ar7
      0003B4 EC               [12] 1843 	mov	a,r4
      0003B5 B5 03 1B         [24] 1844 	cjne	a,ar3,00118$
      0003B8 90 27 10         [24] 1845 	mov	dptr,#0x2710
      0003BB E4               [12] 1846 	clr	a
      0003BC F5 F0            [12] 1847 	mov	b,a
      0003BE C0 07            [24] 1848 	push	ar7
      0003C0 C0 06            [24] 1849 	push	ar6
      0003C2 C0 05            [24] 1850 	push	ar5
      0003C4 C0 03            [24] 1851 	push	ar3
      0003C6 12 03 E4         [24] 1852 	lcall	_delay_time
      0003C9 D0 03            [24] 1853 	pop	ar3
      0003CB D0 05            [24] 1854 	pop	ar5
      0003CD D0 06            [24] 1855 	pop	ar6
      0003CF D0 07            [24] 1856 	pop	ar7
      0003D1 80 CC            [24] 1857 	sjmp	00110$
      0003D3                       1858 00118$:
                           0002FC  1859 	C$i2c.h$164$1$81 ==.
                                   1860 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:164: for(i=0; i<5; i++)
      0003D3 0F               [12] 1861 	inc	r7
      0003D4 C3               [12] 1862 	clr	c
      0003D5 EF               [12] 1863 	mov	a,r7
      0003D6 64 80            [12] 1864 	xrl	a,#0x80
      0003D8 94 85            [12] 1865 	subb	a,#0x85
      0003DA 50 03            [24] 1866 	jnc	00155$
      0003DC 02 02 E1         [24] 1867 	ljmp	00104$
      0003DF                       1868 00155$:
                           000308  1869 	C$i2c.h$179$1$81 ==.
                                   1870 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:179: return sum;
      0003DF 8D 82            [24] 1871 	mov	dpl,r5
      0003E1 8E 83            [24] 1872 	mov	dph,r6
      0003E3                       1873 00119$:
                           00030C  1874 	C$i2c.h$180$1$81 ==.
                           00030C  1875 	XG$kpd_input$0$0 ==.
      0003E3 22               [24] 1876 	ret
                                   1877 ;------------------------------------------------------------
                                   1878 ;Allocation info for local variables in function 'delay_time'
                                   1879 ;------------------------------------------------------------
                                   1880 ;time_end                  Allocated to registers r4 r5 r6 r7 
                                   1881 ;index                     Allocated to registers 
                                   1882 ;------------------------------------------------------------
                           00030D  1883 	G$delay_time$0$0 ==.
                           00030D  1884 	C$i2c.h$189$1$81 ==.
                                   1885 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:189: void delay_time (unsigned long time_end)
                                   1886 ;	-----------------------------------------
                                   1887 ;	 function delay_time
                                   1888 ;	-----------------------------------------
      0003E4                       1889 _delay_time:
      0003E4 AC 82            [24] 1890 	mov	r4,dpl
      0003E6 AD 83            [24] 1891 	mov	r5,dph
      0003E8 AE F0            [24] 1892 	mov	r6,b
      0003EA FF               [12] 1893 	mov	r7,a
                           000314  1894 	C$i2c.h$192$1$86 ==.
                                   1895 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:192: for (index = 0; index < time_end; index++); //for loop delay
      0003EB 78 00            [12] 1896 	mov	r0,#0x00
      0003ED 79 00            [12] 1897 	mov	r1,#0x00
      0003EF 7A 00            [12] 1898 	mov	r2,#0x00
      0003F1 7B 00            [12] 1899 	mov	r3,#0x00
      0003F3                       1900 00103$:
      0003F3 C3               [12] 1901 	clr	c
      0003F4 E8               [12] 1902 	mov	a,r0
      0003F5 9C               [12] 1903 	subb	a,r4
      0003F6 E9               [12] 1904 	mov	a,r1
      0003F7 9D               [12] 1905 	subb	a,r5
      0003F8 EA               [12] 1906 	mov	a,r2
      0003F9 9E               [12] 1907 	subb	a,r6
      0003FA EB               [12] 1908 	mov	a,r3
      0003FB 9F               [12] 1909 	subb	a,r7
      0003FC 50 0F            [24] 1910 	jnc	00105$
      0003FE 08               [12] 1911 	inc	r0
      0003FF B8 00 09         [24] 1912 	cjne	r0,#0x00,00115$
      000402 09               [12] 1913 	inc	r1
      000403 B9 00 05         [24] 1914 	cjne	r1,#0x00,00115$
      000406 0A               [12] 1915 	inc	r2
      000407 BA 00 E9         [24] 1916 	cjne	r2,#0x00,00103$
      00040A 0B               [12] 1917 	inc	r3
      00040B                       1918 00115$:
      00040B 80 E6            [24] 1919 	sjmp	00103$
      00040D                       1920 00105$:
                           000336  1921 	C$i2c.h$193$1$86 ==.
                           000336  1922 	XG$delay_time$0$0 ==.
      00040D 22               [24] 1923 	ret
                                   1924 ;------------------------------------------------------------
                                   1925 ;Allocation info for local variables in function 'i2c_start'
                                   1926 ;------------------------------------------------------------
                           000337  1927 	G$i2c_start$0$0 ==.
                           000337  1928 	C$i2c.h$196$1$86 ==.
                                   1929 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:196: void i2c_start(void)
                                   1930 ;	-----------------------------------------
                                   1931 ;	 function i2c_start
                                   1932 ;	-----------------------------------------
      00040E                       1933 _i2c_start:
                           000337  1934 	C$i2c.h$198$1$88 ==.
                                   1935 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:198: while(BUSY);              //Wait until SMBus0 is free
      00040E                       1936 00101$:
      00040E 20 C7 FD         [24] 1937 	jb	_BUSY,00101$
                           00033A  1938 	C$i2c.h$199$1$88 ==.
                                   1939 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:199: STA = 1;                  //Set Start Bit
      000411 D2 C5            [12] 1940 	setb	_STA
                           00033C  1941 	C$i2c.h$200$1$88 ==.
                                   1942 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:200: while(!SI);               //Wait until start sent
      000413                       1943 00104$:
      000413 30 C3 FD         [24] 1944 	jnb	_SI,00104$
                           00033F  1945 	C$i2c.h$201$1$88 ==.
                                   1946 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:201: STA = 0;                  //Clear start bit
      000416 C2 C5            [12] 1947 	clr	_STA
                           000341  1948 	C$i2c.h$202$1$88 ==.
                                   1949 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:202: SI = 0;                   //Clear SI
      000418 C2 C3            [12] 1950 	clr	_SI
                           000343  1951 	C$i2c.h$203$1$88 ==.
                           000343  1952 	XG$i2c_start$0$0 ==.
      00041A 22               [24] 1953 	ret
                                   1954 ;------------------------------------------------------------
                                   1955 ;Allocation info for local variables in function 'i2c_write'
                                   1956 ;------------------------------------------------------------
                                   1957 ;output_data               Allocated to registers 
                                   1958 ;------------------------------------------------------------
                           000344  1959 	G$i2c_write$0$0 ==.
                           000344  1960 	C$i2c.h$206$1$88 ==.
                                   1961 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:206: void i2c_write(unsigned char output_data)
                                   1962 ;	-----------------------------------------
                                   1963 ;	 function i2c_write
                                   1964 ;	-----------------------------------------
      00041B                       1965 _i2c_write:
      00041B 85 82 C2         [24] 1966 	mov	_SMB0DAT,dpl
                           000347  1967 	C$i2c.h$209$1$90 ==.
                                   1968 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:209: while(!SI);               //Wait until send is complete
      00041E                       1969 00101$:
                           000347  1970 	C$i2c.h$210$1$90 ==.
                                   1971 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:210: SI = 0;                   //Clear SI
      00041E 10 C3 02         [24] 1972 	jbc	_SI,00112$
      000421 80 FB            [24] 1973 	sjmp	00101$
      000423                       1974 00112$:
                           00034C  1975 	C$i2c.h$211$1$90 ==.
                           00034C  1976 	XG$i2c_write$0$0 ==.
      000423 22               [24] 1977 	ret
                                   1978 ;------------------------------------------------------------
                                   1979 ;Allocation info for local variables in function 'i2c_write_and_stop'
                                   1980 ;------------------------------------------------------------
                                   1981 ;output_data               Allocated to registers 
                                   1982 ;------------------------------------------------------------
                           00034D  1983 	G$i2c_write_and_stop$0$0 ==.
                           00034D  1984 	C$i2c.h$214$1$90 ==.
                                   1985 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:214: void i2c_write_and_stop(unsigned char output_data)
                                   1986 ;	-----------------------------------------
                                   1987 ;	 function i2c_write_and_stop
                                   1988 ;	-----------------------------------------
      000424                       1989 _i2c_write_and_stop:
      000424 85 82 C2         [24] 1990 	mov	_SMB0DAT,dpl
                           000350  1991 	C$i2c.h$217$1$92 ==.
                                   1992 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:217: STO = 1;                  //Set stop bit
      000427 D2 C4            [12] 1993 	setb	_STO
                           000352  1994 	C$i2c.h$218$1$92 ==.
                                   1995 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:218: while(!SI);               //Wait until send is complete
      000429                       1996 00101$:
                           000352  1997 	C$i2c.h$219$1$92 ==.
                                   1998 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:219: SI = 0;                   //clear SI
      000429 10 C3 02         [24] 1999 	jbc	_SI,00112$
      00042C 80 FB            [24] 2000 	sjmp	00101$
      00042E                       2001 00112$:
                           000357  2002 	C$i2c.h$220$1$92 ==.
                           000357  2003 	XG$i2c_write_and_stop$0$0 ==.
      00042E 22               [24] 2004 	ret
                                   2005 ;------------------------------------------------------------
                                   2006 ;Allocation info for local variables in function 'i2c_read'
                                   2007 ;------------------------------------------------------------
                                   2008 ;input_data                Allocated to registers 
                                   2009 ;------------------------------------------------------------
                           000358  2010 	G$i2c_read$0$0 ==.
                           000358  2011 	C$i2c.h$223$1$92 ==.
                                   2012 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:223: unsigned char i2c_read(void)
                                   2013 ;	-----------------------------------------
                                   2014 ;	 function i2c_read
                                   2015 ;	-----------------------------------------
      00042F                       2016 _i2c_read:
                           000358  2017 	C$i2c.h$226$1$94 ==.
                                   2018 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:226: while(!SI);                //Wait until we have data to read
      00042F                       2019 00101$:
      00042F 30 C3 FD         [24] 2020 	jnb	_SI,00101$
                           00035B  2021 	C$i2c.h$227$1$94 ==.
                                   2022 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:227: input_data = SMB0DAT;      //Read the data
      000432 85 C2 82         [24] 2023 	mov	dpl,_SMB0DAT
                           00035E  2024 	C$i2c.h$228$1$94 ==.
                                   2025 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:228: SI = 0;                    //Clear SI
      000435 C2 C3            [12] 2026 	clr	_SI
                           000360  2027 	C$i2c.h$229$1$94 ==.
                                   2028 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:229: return input_data;         //Return the read data
                           000360  2029 	C$i2c.h$230$1$94 ==.
                           000360  2030 	XG$i2c_read$0$0 ==.
      000437 22               [24] 2031 	ret
                                   2032 ;------------------------------------------------------------
                                   2033 ;Allocation info for local variables in function 'i2c_read_and_stop'
                                   2034 ;------------------------------------------------------------
                                   2035 ;input_data                Allocated to registers r7 
                                   2036 ;------------------------------------------------------------
                           000361  2037 	G$i2c_read_and_stop$0$0 ==.
                           000361  2038 	C$i2c.h$233$1$94 ==.
                                   2039 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:233: unsigned char i2c_read_and_stop(void)
                                   2040 ;	-----------------------------------------
                                   2041 ;	 function i2c_read_and_stop
                                   2042 ;	-----------------------------------------
      000438                       2043 _i2c_read_and_stop:
                           000361  2044 	C$i2c.h$236$1$96 ==.
                                   2045 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:236: while(!SI);                //Wait until we have data to read
      000438                       2046 00101$:
      000438 30 C3 FD         [24] 2047 	jnb	_SI,00101$
                           000364  2048 	C$i2c.h$237$1$96 ==.
                                   2049 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:237: input_data = SMB0DAT;      //Read the data
      00043B AF C2            [24] 2050 	mov	r7,_SMB0DAT
                           000366  2051 	C$i2c.h$238$1$96 ==.
                                   2052 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:238: SI = 0;                    //Clear SI
      00043D C2 C3            [12] 2053 	clr	_SI
                           000368  2054 	C$i2c.h$239$1$96 ==.
                                   2055 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:239: STO = 1;                   //Set stop bit
      00043F D2 C4            [12] 2056 	setb	_STO
                           00036A  2057 	C$i2c.h$240$1$96 ==.
                                   2058 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:240: while(!SI);                //Wait for stop
      000441                       2059 00104$:
                           00036A  2060 	C$i2c.h$241$1$96 ==.
                                   2061 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:241: SI = 0;
      000441 10 C3 02         [24] 2062 	jbc	_SI,00122$
      000444 80 FB            [24] 2063 	sjmp	00104$
      000446                       2064 00122$:
                           00036F  2065 	C$i2c.h$242$1$96 ==.
                                   2066 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:242: return input_data;         //Return the read data
      000446 8F 82            [24] 2067 	mov	dpl,r7
                           000371  2068 	C$i2c.h$243$1$96 ==.
                           000371  2069 	XG$i2c_read_and_stop$0$0 ==.
      000448 22               [24] 2070 	ret
                                   2071 ;------------------------------------------------------------
                                   2072 ;Allocation info for local variables in function 'i2c_write_data'
                                   2073 ;------------------------------------------------------------
                                   2074 ;start_reg                 Allocated with name '_i2c_write_data_PARM_2'
                                   2075 ;buffer                    Allocated with name '_i2c_write_data_PARM_3'
                                   2076 ;num_bytes                 Allocated with name '_i2c_write_data_PARM_4'
                                   2077 ;addr                      Allocated to registers r7 
                                   2078 ;i                         Allocated to registers 
                                   2079 ;------------------------------------------------------------
                           000372  2080 	G$i2c_write_data$0$0 ==.
                           000372  2081 	C$i2c.h$246$1$96 ==.
                                   2082 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:246: void i2c_write_data(unsigned char addr, unsigned char start_reg, unsigned char *buffer, unsigned char num_bytes)
                                   2083 ;	-----------------------------------------
                                   2084 ;	 function i2c_write_data
                                   2085 ;	-----------------------------------------
      000449                       2086 _i2c_write_data:
      000449 AF 82            [24] 2087 	mov	r7,dpl
                           000374  2088 	C$i2c.h$250$1$98 ==.
                                   2089 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:250: i2c_start();               //initiate I2C transfer
      00044B C0 07            [24] 2090 	push	ar7
      00044D 12 04 0E         [24] 2091 	lcall	_i2c_start
      000450 D0 07            [24] 2092 	pop	ar7
                           00037B  2093 	C$i2c.h$251$1$98 ==.
                                   2094 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:251: i2c_write(addr & ~0x01);   //write the desired address to the bus
      000452 74 FE            [12] 2095 	mov	a,#0xFE
      000454 5F               [12] 2096 	anl	a,r7
      000455 F5 82            [12] 2097 	mov	dpl,a
      000457 12 04 1B         [24] 2098 	lcall	_i2c_write
                           000383  2099 	C$i2c.h$252$1$98 ==.
                                   2100 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:252: i2c_write(start_reg);      //write the start register to the bus
      00045A 85 27 82         [24] 2101 	mov	dpl,_i2c_write_data_PARM_2
      00045D 12 04 1B         [24] 2102 	lcall	_i2c_write
                           000389  2103 	C$i2c.h$253$1$98 ==.
                                   2104 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:253: for(i=0; i<num_bytes-1; i++) //write the data to the register(s)
      000460 7F 00            [12] 2105 	mov	r7,#0x00
      000462                       2106 00103$:
      000462 AD 2B            [24] 2107 	mov	r5,_i2c_write_data_PARM_4
      000464 7E 00            [12] 2108 	mov	r6,#0x00
      000466 1D               [12] 2109 	dec	r5
      000467 BD FF 01         [24] 2110 	cjne	r5,#0xFF,00114$
      00046A 1E               [12] 2111 	dec	r6
      00046B                       2112 00114$:
      00046B 8F 03            [24] 2113 	mov	ar3,r7
      00046D 7C 00            [12] 2114 	mov	r4,#0x00
      00046F C3               [12] 2115 	clr	c
      000470 EB               [12] 2116 	mov	a,r3
      000471 9D               [12] 2117 	subb	a,r5
      000472 EC               [12] 2118 	mov	a,r4
      000473 64 80            [12] 2119 	xrl	a,#0x80
      000475 8E F0            [24] 2120 	mov	b,r6
      000477 63 F0 80         [24] 2121 	xrl	b,#0x80
      00047A 95 F0            [12] 2122 	subb	a,b
      00047C 50 1F            [24] 2123 	jnc	00101$
                           0003A7  2124 	C$i2c.h$254$1$98 ==.
                                   2125 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:254: i2c_write(buffer[i]);
      00047E EF               [12] 2126 	mov	a,r7
      00047F 25 28            [12] 2127 	add	a,_i2c_write_data_PARM_3
      000481 FC               [12] 2128 	mov	r4,a
      000482 E4               [12] 2129 	clr	a
      000483 35 29            [12] 2130 	addc	a,(_i2c_write_data_PARM_3 + 1)
      000485 FD               [12] 2131 	mov	r5,a
      000486 AE 2A            [24] 2132 	mov	r6,(_i2c_write_data_PARM_3 + 2)
      000488 8C 82            [24] 2133 	mov	dpl,r4
      00048A 8D 83            [24] 2134 	mov	dph,r5
      00048C 8E F0            [24] 2135 	mov	b,r6
      00048E 12 10 8F         [24] 2136 	lcall	__gptrget
      000491 F5 82            [12] 2137 	mov	dpl,a
      000493 C0 07            [24] 2138 	push	ar7
      000495 12 04 1B         [24] 2139 	lcall	_i2c_write
      000498 D0 07            [24] 2140 	pop	ar7
                           0003C3  2141 	C$i2c.h$253$1$98 ==.
                                   2142 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:253: for(i=0; i<num_bytes-1; i++) //write the data to the register(s)
      00049A 0F               [12] 2143 	inc	r7
      00049B 80 C5            [24] 2144 	sjmp	00103$
      00049D                       2145 00101$:
                           0003C6  2146 	C$i2c.h$255$1$98 ==.
                                   2147 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:255: i2c_write_and_stop(buffer[num_bytes-1]); //Stop transfer
      00049D AE 2B            [24] 2148 	mov	r6,_i2c_write_data_PARM_4
      00049F 7F 00            [12] 2149 	mov	r7,#0x00
      0004A1 1E               [12] 2150 	dec	r6
      0004A2 BE FF 01         [24] 2151 	cjne	r6,#0xFF,00116$
      0004A5 1F               [12] 2152 	dec	r7
      0004A6                       2153 00116$:
      0004A6 EE               [12] 2154 	mov	a,r6
      0004A7 25 28            [12] 2155 	add	a,_i2c_write_data_PARM_3
      0004A9 FE               [12] 2156 	mov	r6,a
      0004AA EF               [12] 2157 	mov	a,r7
      0004AB 35 29            [12] 2158 	addc	a,(_i2c_write_data_PARM_3 + 1)
      0004AD FF               [12] 2159 	mov	r7,a
      0004AE AD 2A            [24] 2160 	mov	r5,(_i2c_write_data_PARM_3 + 2)
      0004B0 8E 82            [24] 2161 	mov	dpl,r6
      0004B2 8F 83            [24] 2162 	mov	dph,r7
      0004B4 8D F0            [24] 2163 	mov	b,r5
      0004B6 12 10 8F         [24] 2164 	lcall	__gptrget
      0004B9 F5 82            [12] 2165 	mov	dpl,a
      0004BB 12 04 24         [24] 2166 	lcall	_i2c_write_and_stop
                           0003E7  2167 	C$i2c.h$256$1$98 ==.
                           0003E7  2168 	XG$i2c_write_data$0$0 ==.
      0004BE 22               [24] 2169 	ret
                                   2170 ;------------------------------------------------------------
                                   2171 ;Allocation info for local variables in function 'i2c_read_data'
                                   2172 ;------------------------------------------------------------
                                   2173 ;start_reg                 Allocated with name '_i2c_read_data_PARM_2'
                                   2174 ;buffer                    Allocated with name '_i2c_read_data_PARM_3'
                                   2175 ;num_bytes                 Allocated with name '_i2c_read_data_PARM_4'
                                   2176 ;addr                      Allocated to registers r7 
                                   2177 ;j                         Allocated to registers 
                                   2178 ;------------------------------------------------------------
                           0003E8  2179 	G$i2c_read_data$0$0 ==.
                           0003E8  2180 	C$i2c.h$259$1$98 ==.
                                   2181 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:259: void i2c_read_data(unsigned char addr, unsigned char start_reg, unsigned char *buffer, unsigned char num_bytes)
                                   2182 ;	-----------------------------------------
                                   2183 ;	 function i2c_read_data
                                   2184 ;	-----------------------------------------
      0004BF                       2185 _i2c_read_data:
      0004BF AF 82            [24] 2186 	mov	r7,dpl
                           0003EA  2187 	C$i2c.h$262$1$100 ==.
                                   2188 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:262: i2c_start();               //Start I2C transfer
      0004C1 C0 07            [24] 2189 	push	ar7
      0004C3 12 04 0E         [24] 2190 	lcall	_i2c_start
      0004C6 D0 07            [24] 2191 	pop	ar7
                           0003F1  2192 	C$i2c.h$263$1$100 ==.
                                   2193 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:263: i2c_write(addr & ~0x01);   //Write address of device that will be written to, send 0
      0004C8 8F 06            [24] 2194 	mov	ar6,r7
      0004CA 74 FE            [12] 2195 	mov	a,#0xFE
      0004CC 5E               [12] 2196 	anl	a,r6
      0004CD F5 82            [12] 2197 	mov	dpl,a
      0004CF C0 07            [24] 2198 	push	ar7
      0004D1 12 04 1B         [24] 2199 	lcall	_i2c_write
                           0003FD  2200 	C$i2c.h$264$1$100 ==.
                                   2201 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:264: i2c_write_and_stop(start_reg); //Write & stop the 1st register to be read
      0004D4 85 2C 82         [24] 2202 	mov	dpl,_i2c_read_data_PARM_2
      0004D7 12 04 24         [24] 2203 	lcall	_i2c_write_and_stop
                           000403  2204 	C$i2c.h$265$1$100 ==.
                                   2205 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:265: i2c_start();               //Start I2C transfer
      0004DA 12 04 0E         [24] 2206 	lcall	_i2c_start
      0004DD D0 07            [24] 2207 	pop	ar7
                           000408  2208 	C$i2c.h$266$1$100 ==.
                                   2209 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:266: i2c_write(addr | 0x01);    //Write address again, this time indicating a read operation
      0004DF 74 01            [12] 2210 	mov	a,#0x01
      0004E1 4F               [12] 2211 	orl	a,r7
      0004E2 F5 82            [12] 2212 	mov	dpl,a
      0004E4 12 04 1B         [24] 2213 	lcall	_i2c_write
                           000410  2214 	C$i2c.h$267$1$100 ==.
                                   2215 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:267: for(j = 0; j < num_bytes - 1; j++)
      0004E7 7F 00            [12] 2216 	mov	r7,#0x00
      0004E9                       2217 00103$:
      0004E9 AD 30            [24] 2218 	mov	r5,_i2c_read_data_PARM_4
      0004EB 7E 00            [12] 2219 	mov	r6,#0x00
      0004ED 1D               [12] 2220 	dec	r5
      0004EE BD FF 01         [24] 2221 	cjne	r5,#0xFF,00114$
      0004F1 1E               [12] 2222 	dec	r6
      0004F2                       2223 00114$:
      0004F2 8F 03            [24] 2224 	mov	ar3,r7
      0004F4 7C 00            [12] 2225 	mov	r4,#0x00
      0004F6 C3               [12] 2226 	clr	c
      0004F7 EB               [12] 2227 	mov	a,r3
      0004F8 9D               [12] 2228 	subb	a,r5
      0004F9 EC               [12] 2229 	mov	a,r4
      0004FA 64 80            [12] 2230 	xrl	a,#0x80
      0004FC 8E F0            [24] 2231 	mov	b,r6
      0004FE 63 F0 80         [24] 2232 	xrl	b,#0x80
      000501 95 F0            [12] 2233 	subb	a,b
      000503 50 2E            [24] 2234 	jnc	00101$
                           00042E  2235 	C$i2c.h$269$2$101 ==.
                                   2236 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:269: AA = 1;                //Set acknowledge bit
      000505 D2 C2            [12] 2237 	setb	_AA
                           000430  2238 	C$i2c.h$270$2$101 ==.
                                   2239 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:270: buffer[j] = i2c_read();//Read data, save it in buffer
      000507 EF               [12] 2240 	mov	a,r7
      000508 25 2D            [12] 2241 	add	a,_i2c_read_data_PARM_3
      00050A FC               [12] 2242 	mov	r4,a
      00050B E4               [12] 2243 	clr	a
      00050C 35 2E            [12] 2244 	addc	a,(_i2c_read_data_PARM_3 + 1)
      00050E FD               [12] 2245 	mov	r5,a
      00050F AE 2F            [24] 2246 	mov	r6,(_i2c_read_data_PARM_3 + 2)
      000511 C0 07            [24] 2247 	push	ar7
      000513 C0 06            [24] 2248 	push	ar6
      000515 C0 05            [24] 2249 	push	ar5
      000517 C0 04            [24] 2250 	push	ar4
      000519 12 04 2F         [24] 2251 	lcall	_i2c_read
      00051C AB 82            [24] 2252 	mov	r3,dpl
      00051E D0 04            [24] 2253 	pop	ar4
      000520 D0 05            [24] 2254 	pop	ar5
      000522 D0 06            [24] 2255 	pop	ar6
      000524 D0 07            [24] 2256 	pop	ar7
      000526 8C 82            [24] 2257 	mov	dpl,r4
      000528 8D 83            [24] 2258 	mov	dph,r5
      00052A 8E F0            [24] 2259 	mov	b,r6
      00052C EB               [12] 2260 	mov	a,r3
      00052D 12 09 1B         [24] 2261 	lcall	__gptrput
                           000459  2262 	C$i2c.h$267$1$100 ==.
                                   2263 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:267: for(j = 0; j < num_bytes - 1; j++)
      000530 0F               [12] 2264 	inc	r7
      000531 80 B6            [24] 2265 	sjmp	00103$
      000533                       2266 00101$:
                           00045C  2267 	C$i2c.h$272$1$100 ==.
                                   2268 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:272: AA = 0;
      000533 C2 C2            [12] 2269 	clr	_AA
                           00045E  2270 	C$i2c.h$273$1$100 ==.
                                   2271 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:273: buffer[num_bytes - 1] = i2c_read_and_stop(); //Read the last byte and stop, save it in the buffer
      000535 AE 30            [24] 2272 	mov	r6,_i2c_read_data_PARM_4
      000537 7F 00            [12] 2273 	mov	r7,#0x00
      000539 1E               [12] 2274 	dec	r6
      00053A BE FF 01         [24] 2275 	cjne	r6,#0xFF,00116$
      00053D 1F               [12] 2276 	dec	r7
      00053E                       2277 00116$:
      00053E EE               [12] 2278 	mov	a,r6
      00053F 25 2D            [12] 2279 	add	a,_i2c_read_data_PARM_3
      000541 FE               [12] 2280 	mov	r6,a
      000542 EF               [12] 2281 	mov	a,r7
      000543 35 2E            [12] 2282 	addc	a,(_i2c_read_data_PARM_3 + 1)
      000545 FF               [12] 2283 	mov	r7,a
      000546 AD 2F            [24] 2284 	mov	r5,(_i2c_read_data_PARM_3 + 2)
      000548 C0 07            [24] 2285 	push	ar7
      00054A C0 06            [24] 2286 	push	ar6
      00054C C0 05            [24] 2287 	push	ar5
      00054E 12 04 38         [24] 2288 	lcall	_i2c_read_and_stop
      000551 AC 82            [24] 2289 	mov	r4,dpl
      000553 D0 05            [24] 2290 	pop	ar5
      000555 D0 06            [24] 2291 	pop	ar6
      000557 D0 07            [24] 2292 	pop	ar7
      000559 8E 82            [24] 2293 	mov	dpl,r6
      00055B 8F 83            [24] 2294 	mov	dph,r7
      00055D 8D F0            [24] 2295 	mov	b,r5
      00055F EC               [12] 2296 	mov	a,r4
      000560 12 09 1B         [24] 2297 	lcall	__gptrput
                           00048C  2298 	C$i2c.h$274$1$100 ==.
                           00048C  2299 	XG$i2c_read_data$0$0 ==.
      000563 22               [24] 2300 	ret
                                   2301 ;------------------------------------------------------------
                                   2302 ;Allocation info for local variables in function 'Accel_Init'
                                   2303 ;------------------------------------------------------------
                                   2304 ;Data2                     Allocated with name '_Accel_Init_Data2_1_103'
                                   2305 ;------------------------------------------------------------
                           00048D  2306 	G$Accel_Init$0$0 ==.
                           00048D  2307 	C$i2c.h$283$1$100 ==.
                                   2308 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:283: void Accel_Init(void)
                                   2309 ;	-----------------------------------------
                                   2310 ;	 function Accel_Init
                                   2311 ;	-----------------------------------------
      000564                       2312 _Accel_Init:
                           00048D  2313 	C$i2c.h$287$1$103 ==.
                                   2314 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:287: Data2[0]=0x23;	//normal power mode, 50Hz ODR, y & x axes enabled
      000564 75 31 23         [24] 2315 	mov	_Accel_Init_Data2_1_103,#0x23
                           000490  2316 	C$i2c.h$289$1$103 ==.
                                   2317 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:289: i2c_write_data(addr_accel, 0x20, Data2, 1);
      000567 75 28 31         [24] 2318 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      00056A 75 29 00         [24] 2319 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      00056D 75 2A 40         [24] 2320 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000570 75 27 20         [24] 2321 	mov	_i2c_write_data_PARM_2,#0x20
      000573 75 2B 01         [24] 2322 	mov	_i2c_write_data_PARM_4,#0x01
      000576 75 82 30         [24] 2323 	mov	dpl,#0x30
      000579 12 04 49         [24] 2324 	lcall	_i2c_write_data
                           0004A5  2325 	C$i2c.h$290$1$103 ==.
                                   2326 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:290: Data2[0]=0x00;	//Default - no filtering
      00057C 75 31 00         [24] 2327 	mov	_Accel_Init_Data2_1_103,#0x00
                           0004A8  2328 	C$i2c.h$292$1$103 ==.
                                   2329 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:292: i2c_write_data(addr_accel, 0x21, Data2, 1);
      00057F 75 28 31         [24] 2330 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      000582 75 29 00         [24] 2331 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      000585 75 2A 40         [24] 2332 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000588 75 27 21         [24] 2333 	mov	_i2c_write_data_PARM_2,#0x21
      00058B 75 2B 01         [24] 2334 	mov	_i2c_write_data_PARM_4,#0x01
      00058E 75 82 30         [24] 2335 	mov	dpl,#0x30
      000591 12 04 49         [24] 2336 	lcall	_i2c_write_data
                           0004BD  2337 	C$i2c.h$293$1$103 ==.
                                   2338 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:293: Data2[0]=0x00;	//default - no interrupts enabled
      000594 75 31 00         [24] 2339 	mov	_Accel_Init_Data2_1_103,#0x00
                           0004C0  2340 	C$i2c.h$294$1$103 ==.
                                   2341 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:294: i2c_write_data(addr_accel, 0x22, Data2, 1);
      000597 75 28 31         [24] 2342 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      00059A 75 29 00         [24] 2343 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      00059D 75 2A 40         [24] 2344 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      0005A0 75 27 22         [24] 2345 	mov	_i2c_write_data_PARM_2,#0x22
      0005A3 75 2B 01         [24] 2346 	mov	_i2c_write_data_PARM_4,#0x01
      0005A6 75 82 30         [24] 2347 	mov	dpl,#0x30
      0005A9 12 04 49         [24] 2348 	lcall	_i2c_write_data
                           0004D5  2349 	C$i2c.h$298$1$103 ==.
                           0004D5  2350 	XG$Accel_Init$0$0 ==.
      0005AC 22               [24] 2351 	ret
                                   2352 ;------------------------------------------------------------
                                   2353 ;Allocation info for local variables in function 'main'
                                   2354 ;------------------------------------------------------------
                                   2355 ;x                         Allocated to registers r6 r7 
                                   2356 ;------------------------------------------------------------
                           0004D6  2357 	G$main$0$0 ==.
                           0004D6  2358 	C$lab5.c$60$1$103 ==.
                                   2359 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:60: void main(void)
                                   2360 ;	-----------------------------------------
                                   2361 ;	 function main
                                   2362 ;	-----------------------------------------
      0005AD                       2363 _main:
                           0004D6  2364 	C$lab5.c$62$1$103 ==.
                                   2365 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:62: int x=0;
      0005AD 7E 00            [12] 2366 	mov	r6,#0x00
      0005AF 7F 00            [12] 2367 	mov	r7,#0x00
                           0004DA  2368 	C$lab5.c$63$1$119 ==.
                                   2369 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:63: Sys_Init(); // initialize board
      0005B1 C0 07            [24] 2370 	push	ar7
      0005B3 C0 06            [24] 2371 	push	ar6
      0005B5 12 01 07         [24] 2372 	lcall	_Sys_Init
                           0004E1  2373 	C$lab5.c$64$1$119 ==.
                                   2374 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:64: putchar(' ');
      0005B8 75 82 20         [24] 2375 	mov	dpl,#0x20
      0005BB 12 01 1A         [24] 2376 	lcall	_putchar
                           0004E7  2377 	C$lab5.c$65$1$119 ==.
                                   2378 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:65: Port_Init();
      0005BE 12 09 0D         [24] 2379 	lcall	_Port_Init
                           0004EA  2380 	C$lab5.c$66$1$119 ==.
                                   2381 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:66: PCA_Init();
      0005C1 12 08 D4         [24] 2382 	lcall	_PCA_Init
                           0004ED  2383 	C$lab5.c$67$1$119 ==.
                                   2384 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:67: SMB_Init();
      0005C4 12 07 4D         [24] 2385 	lcall	_SMB_Init
                           0004F0  2386 	C$lab5.c$68$1$119 ==.
                                   2387 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:68: XBR0_Init();
      0005C7 12 07 49         [24] 2388 	lcall	_XBR0_Init
                           0004F3  2389 	C$lab5.c$69$1$119 ==.
                                   2390 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:69: Accel_Init();
      0005CA 12 05 64         [24] 2391 	lcall	_Accel_Init
                           0004F6  2392 	C$lab5.c$71$1$119 ==.
                                   2393 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:71: count = 0;
      0005CD 75 46 00         [24] 2394 	mov	_count,#0x00
                           0004F9  2395 	C$lab5.c$72$1$119 ==.
                                   2396 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:72: lcd_count = 0;
      0005D0 75 47 00         [24] 2397 	mov	_lcd_count,#0x00
                           0004FC  2398 	C$lab5.c$73$1$119 ==.
                                   2399 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:73: DRV_PW = SERVO_PW;
      0005D3 85 38 3E         [24] 2400 	mov	_DRV_PW,_SERVO_PW
      0005D6 85 39 3F         [24] 2401 	mov	(_DRV_PW + 1),(_SERVO_PW + 1)
                           000502  2402 	C$lab5.c$74$1$119 ==.
                                   2403 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:74: STR_PW = PW_CENTER;
      0005D9 85 32 40         [24] 2404 	mov	_STR_PW,_PW_CENTER
      0005DC 85 33 41         [24] 2405 	mov	(_STR_PW + 1),(_PW_CENTER + 1)
                           000508  2406 	C$lab5.c$75$1$119 ==.
                                   2407 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:75: printf("\r\nGO!");
      0005DF 74 10            [12] 2408 	mov	a,#___str_3
      0005E1 C0 E0            [24] 2409 	push	acc
      0005E3 74 11            [12] 2410 	mov	a,#(___str_3 >> 8)
      0005E5 C0 E0            [24] 2411 	push	acc
      0005E7 74 80            [12] 2412 	mov	a,#0x80
      0005E9 C0 E0            [24] 2413 	push	acc
      0005EB 12 0A 9B         [24] 2414 	lcall	_printf
      0005EE 15 81            [12] 2415 	dec	sp
      0005F0 15 81            [12] 2416 	dec	sp
      0005F2 15 81            [12] 2417 	dec	sp
      0005F4 D0 06            [24] 2418 	pop	ar6
      0005F6 D0 07            [24] 2419 	pop	ar7
                           000521  2420 	C$lab5.c$77$1$119 ==.
                                   2421 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:77: while (1)
      0005F8                       2422 00109$:
                           000521  2423 	C$lab5.c$79$2$120 ==.
                                   2424 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:79: x++;
      0005F8 0E               [12] 2425 	inc	r6
      0005F9 BE 00 01         [24] 2426 	cjne	r6,#0x00,00128$
      0005FC 0F               [12] 2427 	inc	r7
      0005FD                       2428 00128$:
                           000526  2429 	C$lab5.c$80$2$120 ==.
                                   2430 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:80: printf("\r\n%d",x);
      0005FD C0 07            [24] 2431 	push	ar7
      0005FF C0 06            [24] 2432 	push	ar6
      000601 C0 06            [24] 2433 	push	ar6
      000603 C0 07            [24] 2434 	push	ar7
      000605 74 16            [12] 2435 	mov	a,#___str_4
      000607 C0 E0            [24] 2436 	push	acc
      000609 74 11            [12] 2437 	mov	a,#(___str_4 >> 8)
      00060B C0 E0            [24] 2438 	push	acc
      00060D 74 80            [12] 2439 	mov	a,#0x80
      00060F C0 E0            [24] 2440 	push	acc
      000611 12 0A 9B         [24] 2441 	lcall	_printf
      000614 E5 81            [12] 2442 	mov	a,sp
      000616 24 FB            [12] 2443 	add	a,#0xfb
      000618 F5 81            [12] 2444 	mov	sp,a
      00061A D0 06            [24] 2445 	pop	ar6
      00061C D0 07            [24] 2446 	pop	ar7
                           000547  2447 	C$lab5.c$81$2$120 ==.
                                   2448 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:81: run_stop = 0;
      00061E 75 4D 00         [24] 2449 	mov	_run_stop,#0x00
                           00054A  2450 	C$lab5.c$82$3$121 ==.
                                   2451 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:82: while (!run) // make run an sbit for the run/stop switch
      000621                       2452 00103$:
      000621 20 B6 31         [24] 2453 	jb	_run,00105$
                           00054D  2454 	C$lab5.c$84$3$121 ==.
                                   2455 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:84: if (run_stop == 0)
      000624 E5 4D            [12] 2456 	mov	a,_run_stop
      000626 70 03            [24] 2457 	jnz	00102$
                           000551  2458 	C$lab5.c$87$4$122 ==.
                                   2459 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:87: run_stop = 1; // only try to update once
      000628 75 4D 01         [24] 2460 	mov	_run_stop,#0x01
      00062B                       2461 00102$:
                           000554  2462 	C$lab5.c$89$3$121 ==.
                                   2463 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:89: printf("%u",run);
      00062B A2 B6            [12] 2464 	mov	c,_run
      00062D E4               [12] 2465 	clr	a
      00062E 33               [12] 2466 	rlc	a
      00062F FC               [12] 2467 	mov	r4,a
      000630 7D 00            [12] 2468 	mov	r5,#0x00
      000632 C0 07            [24] 2469 	push	ar7
      000634 C0 06            [24] 2470 	push	ar6
      000636 C0 04            [24] 2471 	push	ar4
      000638 C0 05            [24] 2472 	push	ar5
      00063A 74 1B            [12] 2473 	mov	a,#___str_5
      00063C C0 E0            [24] 2474 	push	acc
      00063E 74 11            [12] 2475 	mov	a,#(___str_5 >> 8)
      000640 C0 E0            [24] 2476 	push	acc
      000642 74 80            [12] 2477 	mov	a,#0x80
      000644 C0 E0            [24] 2478 	push	acc
      000646 12 0A 9B         [24] 2479 	lcall	_printf
      000649 E5 81            [12] 2480 	mov	a,sp
      00064B 24 FB            [12] 2481 	add	a,#0xfb
      00064D F5 81            [12] 2482 	mov	sp,a
      00064F D0 06            [24] 2483 	pop	ar6
      000651 D0 07            [24] 2484 	pop	ar7
      000653 80 CC            [24] 2485 	sjmp	00103$
      000655                       2486 00105$:
                           00057E  2487 	C$lab5.c$91$2$120 ==.
                                   2488 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:91: if (count % 2 ==0) read_accels();
      000655 E5 46            [12] 2489 	mov	a,_count
      000657 20 E0 0B         [24] 2490 	jb	acc.0,00107$
      00065A C0 07            [24] 2491 	push	ar7
      00065C C0 06            [24] 2492 	push	ar6
      00065E 12 07 C0         [24] 2493 	lcall	_read_accels
      000661 D0 06            [24] 2494 	pop	ar6
      000663 D0 07            [24] 2495 	pop	ar7
      000665                       2496 00107$:
                           00058E  2497 	C$lab5.c$94$2$120 ==.
                                   2498 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:94: printf("\r\n%u,%u",gx,gy);
      000665 E5 4C            [12] 2499 	mov	a,_gy
      000667 FC               [12] 2500 	mov	r4,a
      000668 33               [12] 2501 	rlc	a
      000669 95 E0            [12] 2502 	subb	a,acc
      00066B FD               [12] 2503 	mov	r5,a
      00066C E5 4B            [12] 2504 	mov	a,_gx
      00066E FA               [12] 2505 	mov	r2,a
      00066F 33               [12] 2506 	rlc	a
      000670 95 E0            [12] 2507 	subb	a,acc
      000672 FB               [12] 2508 	mov	r3,a
      000673 C0 07            [24] 2509 	push	ar7
      000675 C0 06            [24] 2510 	push	ar6
      000677 C0 04            [24] 2511 	push	ar4
      000679 C0 05            [24] 2512 	push	ar5
      00067B C0 02            [24] 2513 	push	ar2
      00067D C0 03            [24] 2514 	push	ar3
      00067F 74 1E            [12] 2515 	mov	a,#___str_6
      000681 C0 E0            [24] 2516 	push	acc
      000683 74 11            [12] 2517 	mov	a,#(___str_6 >> 8)
      000685 C0 E0            [24] 2518 	push	acc
      000687 74 80            [12] 2519 	mov	a,#0x80
      000689 C0 E0            [24] 2520 	push	acc
      00068B 12 0A 9B         [24] 2521 	lcall	_printf
      00068E E5 81            [12] 2522 	mov	a,sp
      000690 24 F9            [12] 2523 	add	a,#0xf9
      000692 F5 81            [12] 2524 	mov	sp,a
      000694 D0 06            [24] 2525 	pop	ar6
      000696 D0 07            [24] 2526 	pop	ar7
                           0005C1  2527 	C$lab5.c$95$2$120 ==.
                                   2528 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:95: new_accels = 0;
      000698 75 42 00         [24] 2529 	mov	_new_accels,#0x00
      00069B 02 05 F8         [24] 2530 	ljmp	00109$
                           0005C7  2531 	C$lab5.c$103$1$119 ==.
                           0005C7  2532 	XG$main$0$0 ==.
      00069E 22               [24] 2533 	ret
                                   2534 ;------------------------------------------------------------
                                   2535 ;Allocation info for local variables in function 'PCA_ISR'
                                   2536 ;------------------------------------------------------------
                           0005C8  2537 	G$PCA_ISR$0$0 ==.
                           0005C8  2538 	C$lab5.c$111$1$119 ==.
                                   2539 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:111: void PCA_ISR ( void ) __interrupt 9
                                   2540 ;	-----------------------------------------
                                   2541 ;	 function PCA_ISR
                                   2542 ;	-----------------------------------------
      00069F                       2543 _PCA_ISR:
                           0005C8  2544 	C$lab5.c$113$1$124 ==.
                                   2545 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:113: if (CF)
                           0005C8  2546 	C$lab5.c$115$2$125 ==.
                                   2547 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:115: CF = 0; // clear overflow indicator
      00069F 10 DF 02         [24] 2548 	jbc	_CF,00108$
      0006A2 80 0A            [24] 2549 	sjmp	00102$
      0006A4                       2550 00108$:
                           0005CD  2551 	C$lab5.c$116$2$125 ==.
                                   2552 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:116: count++;
      0006A4 05 46            [12] 2553 	inc	_count
                           0005CF  2554 	C$lab5.c$117$2$125 ==.
                                   2555 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:117: lcd_count++;
      0006A6 05 47            [12] 2556 	inc	_lcd_count
                           0005D1  2557 	C$lab5.c$123$2$125 ==.
                                   2558 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:123: PCA0L = PCA_START;
      0006A8 75 E9 00         [24] 2559 	mov	_PCA0L,#0x00
                           0005D4  2560 	C$lab5.c$124$2$125 ==.
                                   2561 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:124: PCA0H = PCA_START >> 8;
      0006AB 75 F9 70         [24] 2562 	mov	_PCA0H,#0x70
      0006AE                       2563 00102$:
                           0005D7  2564 	C$lab5.c$127$1$124 ==.
                                   2565 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:127: PCA0CN &= 0xC0;
      0006AE 53 D8 C0         [24] 2566 	anl	_PCA0CN,#0xC0
                           0005DA  2567 	C$lab5.c$128$1$124 ==.
                           0005DA  2568 	XG$PCA_ISR$0$0 ==.
      0006B1 32               [24] 2569 	reti
                                   2570 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   2571 ;	eliminated unneeded push/pop psw
                                   2572 ;	eliminated unneeded push/pop dpl
                                   2573 ;	eliminated unneeded push/pop dph
                                   2574 ;	eliminated unneeded push/pop b
                                   2575 ;	eliminated unneeded push/pop acc
                                   2576 ;------------------------------------------------------------
                                   2577 ;Allocation info for local variables in function 'wait'
                                   2578 ;------------------------------------------------------------
                                   2579 ;old_count                 Allocated to registers r6 r7 
                                   2580 ;------------------------------------------------------------
                           0005DB  2581 	G$wait$0$0 ==.
                           0005DB  2582 	C$lab5.c$130$1$124 ==.
                                   2583 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:130: void wait(void)
                                   2584 ;	-----------------------------------------
                                   2585 ;	 function wait
                                   2586 ;	-----------------------------------------
      0006B2                       2587 _wait:
                           0005DB  2588 	C$lab5.c$132$1$127 ==.
                                   2589 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:132: int old_count = count+1;
      0006B2 AE 46            [24] 2590 	mov	r6,_count
      0006B4 7F 00            [12] 2591 	mov	r7,#0x00
      0006B6 0E               [12] 2592 	inc	r6
      0006B7 BE 00 01         [24] 2593 	cjne	r6,#0x00,00109$
      0006BA 0F               [12] 2594 	inc	r7
      0006BB                       2595 00109$:
                           0005E4  2596 	C$lab5.c$133$1$127 ==.
                                   2597 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:133: while (old_count> count);
      0006BB                       2598 00101$:
      0006BB AC 46            [24] 2599 	mov	r4,_count
      0006BD 7D 00            [12] 2600 	mov	r5,#0x00
      0006BF C3               [12] 2601 	clr	c
      0006C0 EC               [12] 2602 	mov	a,r4
      0006C1 9E               [12] 2603 	subb	a,r6
      0006C2 ED               [12] 2604 	mov	a,r5
      0006C3 64 80            [12] 2605 	xrl	a,#0x80
      0006C5 8F F0            [24] 2606 	mov	b,r7
      0006C7 63 F0 80         [24] 2607 	xrl	b,#0x80
      0006CA 95 F0            [12] 2608 	subb	a,b
      0006CC 40 ED            [24] 2609 	jc	00101$
                           0005F7  2610 	C$lab5.c$134$1$127 ==.
                           0005F7  2611 	XG$wait$0$0 ==.
      0006CE 22               [24] 2612 	ret
                                   2613 ;------------------------------------------------------------
                                   2614 ;Allocation info for local variables in function 'start'
                                   2615 ;------------------------------------------------------------
                           0005F8  2616 	G$start$0$0 ==.
                           0005F8  2617 	C$lab5.c$136$1$127 ==.
                                   2618 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:136: void start(void)            ///WAITS UNTIL '*' IS ENTERED
                                   2619 ;	-----------------------------------------
                                   2620 ;	 function start
                                   2621 ;	-----------------------------------------
      0006CF                       2622 _start:
                           0005F8  2623 	C$lab5.c$138$1$129 ==.
                                   2624 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:138: while (read_keypad() != '*') wait();
      0006CF                       2625 00101$:
      0006CF 12 01 F1         [24] 2626 	lcall	_read_keypad
      0006D2 AF 82            [24] 2627 	mov	r7,dpl
      0006D4 BF 2A 02         [24] 2628 	cjne	r7,#0x2A,00112$
      0006D7 80 05            [24] 2629 	sjmp	00104$
      0006D9                       2630 00112$:
      0006D9 12 06 B2         [24] 2631 	lcall	_wait
      0006DC 80 F1            [24] 2632 	sjmp	00101$
      0006DE                       2633 00104$:
                           000607  2634 	C$lab5.c$139$1$129 ==.
                           000607  2635 	XG$start$0$0 ==.
      0006DE 22               [24] 2636 	ret
                                   2637 ;------------------------------------------------------------
                                   2638 ;Allocation info for local variables in function 'set_gains'
                                   2639 ;------------------------------------------------------------
                           000608  2640 	G$set_gains$0$0 ==.
                           000608  2641 	C$lab5.c$141$1$129 ==.
                                   2642 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:141: void set_gains(void)
                                   2643 ;	-----------------------------------------
                                   2644 ;	 function set_gains
                                   2645 ;	-----------------------------------------
      0006DF                       2646 _set_gains:
                           000608  2647 	C$lab5.c$143$1$131 ==.
                                   2648 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:143: lcd_clear();
      0006DF 12 01 B8         [24] 2649 	lcall	_lcd_clear
                           00060B  2650 	C$lab5.c$144$1$131 ==.
                                   2651 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:144: lcd_print("Please enter a ks value:\n ");
      0006E2 74 26            [12] 2652 	mov	a,#___str_7
      0006E4 C0 E0            [24] 2653 	push	acc
      0006E6 74 11            [12] 2654 	mov	a,#(___str_7 >> 8)
      0006E8 C0 E0            [24] 2655 	push	acc
      0006EA 74 80            [12] 2656 	mov	a,#0x80
      0006EC C0 E0            [24] 2657 	push	acc
      0006EE 12 01 33         [24] 2658 	lcall	_lcd_print
      0006F1 15 81            [12] 2659 	dec	sp
      0006F3 15 81            [12] 2660 	dec	sp
      0006F5 15 81            [12] 2661 	dec	sp
                           000620  2662 	C$lab5.c$145$1$131 ==.
                                   2663 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:145: ks = kpd_input(0);
      0006F7 75 82 00         [24] 2664 	mov	dpl,#0x00
      0006FA 12 02 70         [24] 2665 	lcall	_kpd_input
      0006FD AE 82            [24] 2666 	mov	r6,dpl
      0006FF 8E 48            [24] 2667 	mov	_ks,r6
                           00062A  2668 	C$lab5.c$146$1$131 ==.
                                   2669 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:146: lcd_clear();
      000701 12 01 B8         [24] 2670 	lcall	_lcd_clear
                           00062D  2671 	C$lab5.c$147$1$131 ==.
                                   2672 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:147: lcd_print("Please enter a kdx value:\n ");
      000704 74 41            [12] 2673 	mov	a,#___str_8
      000706 C0 E0            [24] 2674 	push	acc
      000708 74 11            [12] 2675 	mov	a,#(___str_8 >> 8)
      00070A C0 E0            [24] 2676 	push	acc
      00070C 74 80            [12] 2677 	mov	a,#0x80
      00070E C0 E0            [24] 2678 	push	acc
      000710 12 01 33         [24] 2679 	lcall	_lcd_print
      000713 15 81            [12] 2680 	dec	sp
      000715 15 81            [12] 2681 	dec	sp
      000717 15 81            [12] 2682 	dec	sp
                           000642  2683 	C$lab5.c$148$1$131 ==.
                                   2684 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:148: kdx = kpd_input(0);
      000719 75 82 00         [24] 2685 	mov	dpl,#0x00
      00071C 12 02 70         [24] 2686 	lcall	_kpd_input
      00071F AE 82            [24] 2687 	mov	r6,dpl
      000721 8E 4A            [24] 2688 	mov	_kdx,r6
                           00064C  2689 	C$lab5.c$149$1$131 ==.
                                   2690 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:149: lcd_clear();
      000723 12 01 B8         [24] 2691 	lcall	_lcd_clear
                           00064F  2692 	C$lab5.c$150$1$131 ==.
                                   2693 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:150: lcd_print("Please enter a kdy value:\n ");
      000726 74 5D            [12] 2694 	mov	a,#___str_9
      000728 C0 E0            [24] 2695 	push	acc
      00072A 74 11            [12] 2696 	mov	a,#(___str_9 >> 8)
      00072C C0 E0            [24] 2697 	push	acc
      00072E 74 80            [12] 2698 	mov	a,#0x80
      000730 C0 E0            [24] 2699 	push	acc
      000732 12 01 33         [24] 2700 	lcall	_lcd_print
      000735 15 81            [12] 2701 	dec	sp
      000737 15 81            [12] 2702 	dec	sp
      000739 15 81            [12] 2703 	dec	sp
                           000664  2704 	C$lab5.c$151$1$131 ==.
                                   2705 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:151: kdy = kpd_input(0);
      00073B 75 82 00         [24] 2706 	mov	dpl,#0x00
      00073E 12 02 70         [24] 2707 	lcall	_kpd_input
      000741 AE 82            [24] 2708 	mov	r6,dpl
      000743 8E 49            [24] 2709 	mov	_kdy,r6
                           00066E  2710 	C$lab5.c$152$1$131 ==.
                                   2711 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:152: lcd_clear();
      000745 12 01 B8         [24] 2712 	lcall	_lcd_clear
                           000671  2713 	C$lab5.c$153$1$131 ==.
                           000671  2714 	XG$set_gains$0$0 ==.
      000748 22               [24] 2715 	ret
                                   2716 ;------------------------------------------------------------
                                   2717 ;Allocation info for local variables in function 'XBR0_Init'
                                   2718 ;------------------------------------------------------------
                           000672  2719 	G$XBR0_Init$0$0 ==.
                           000672  2720 	C$lab5.c$155$1$131 ==.
                                   2721 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:155: void XBR0_Init(void)
                                   2722 ;	-----------------------------------------
                                   2723 ;	 function XBR0_Init
                                   2724 ;	-----------------------------------------
      000749                       2725 _XBR0_Init:
                           000672  2726 	C$lab5.c$157$1$133 ==.
                                   2727 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:157: XBR0 = 0x17;
      000749 75 E1 17         [24] 2728 	mov	_XBR0,#0x17
                           000675  2729 	C$lab5.c$158$1$133 ==.
                           000675  2730 	XG$XBR0_Init$0$0 ==.
      00074C 22               [24] 2731 	ret
                                   2732 ;------------------------------------------------------------
                                   2733 ;Allocation info for local variables in function 'SMB_Init'
                                   2734 ;------------------------------------------------------------
                           000676  2735 	G$SMB_Init$0$0 ==.
                           000676  2736 	C$lab5.c$160$1$133 ==.
                                   2737 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:160: void SMB_Init(void)
                                   2738 ;	-----------------------------------------
                                   2739 ;	 function SMB_Init
                                   2740 ;	-----------------------------------------
      00074D                       2741 _SMB_Init:
                           000676  2742 	C$lab5.c$162$1$135 ==.
                                   2743 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:162: SMB0CR =0x93;
      00074D 75 CF 93         [24] 2744 	mov	_SMB0CR,#0x93
                           000679  2745 	C$lab5.c$163$1$135 ==.
                                   2746 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:163: ENSMB =1;
      000750 D2 C6            [12] 2747 	setb	_ENSMB
                           00067B  2748 	C$lab5.c$164$1$135 ==.
                           00067B  2749 	XG$SMB_Init$0$0 ==.
      000752 22               [24] 2750 	ret
                                   2751 ;------------------------------------------------------------
                                   2752 ;Allocation info for local variables in function 'Update_Value'
                                   2753 ;------------------------------------------------------------
                                   2754 ;incr                      Allocated with name '_Update_Value_PARM_2'
                                   2755 ;maxval                    Allocated with name '_Update_Value_PARM_3'
                                   2756 ;minval                    Allocated with name '_Update_Value_PARM_4'
                                   2757 ;Constant                  Allocated to registers r6 r7 
                                   2758 ;deflt                     Allocated to registers r4 r5 
                                   2759 ;input                     Allocated to registers r3 
                                   2760 ;------------------------------------------------------------
                           00067C  2761 	G$Update_Value$0$0 ==.
                           00067C  2762 	C$lab5.c$166$1$135 ==.
                                   2763 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:166: void Update_Value(int Constant, unsigned char incr, int maxval, int minval)
                                   2764 ;	-----------------------------------------
                                   2765 ;	 function Update_Value
                                   2766 ;	-----------------------------------------
      000753                       2767 _Update_Value:
      000753 AE 82            [24] 2768 	mov	r6,dpl
      000755 AF 83            [24] 2769 	mov	r7,dph
                           000680  2770 	C$lab5.c$172$1$137 ==.
                                   2771 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:172: deflt = Constant;
      000757 8E 04            [24] 2772 	mov	ar4,r6
      000759 8F 05            [24] 2773 	mov	ar5,r7
                           000684  2774 	C$lab5.c$173$1$137 ==.
                                   2775 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:173: while(1)
      00075B                       2776 00114$:
                           000684  2777 	C$lab5.c$175$2$138 ==.
                                   2778 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:175: input = getchar();
      00075B C0 07            [24] 2779 	push	ar7
      00075D C0 06            [24] 2780 	push	ar6
      00075F C0 05            [24] 2781 	push	ar5
      000761 C0 04            [24] 2782 	push	ar4
      000763 12 01 24         [24] 2783 	lcall	_getchar
      000766 AB 82            [24] 2784 	mov	r3,dpl
      000768 D0 04            [24] 2785 	pop	ar4
      00076A D0 05            [24] 2786 	pop	ar5
      00076C D0 06            [24] 2787 	pop	ar6
      00076E D0 07            [24] 2788 	pop	ar7
                           000699  2789 	C$lab5.c$176$2$138 ==.
                                   2790 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:176: if (input == 'c') Constant = deflt;
      000770 BB 63 04         [24] 2791 	cjne	r3,#0x63,00102$
      000773 8C 06            [24] 2792 	mov	ar6,r4
      000775 8D 07            [24] 2793 	mov	ar7,r5
      000777                       2794 00102$:
                           0006A0  2795 	C$lab5.c$177$2$138 ==.
                                   2796 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:177: if (input == 'i')
      000777 BB 69 1F         [24] 2797 	cjne	r3,#0x69,00106$
                           0006A3  2798 	C$lab5.c$179$3$139 ==.
                                   2799 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:179: Constant += incr;
      00077A A9 4E            [24] 2800 	mov	r1,_Update_Value_PARM_2
      00077C 7A 00            [12] 2801 	mov	r2,#0x00
      00077E E9               [12] 2802 	mov	a,r1
      00077F 2E               [12] 2803 	add	a,r6
      000780 FE               [12] 2804 	mov	r6,a
      000781 EA               [12] 2805 	mov	a,r2
      000782 3F               [12] 2806 	addc	a,r7
      000783 FF               [12] 2807 	mov	r7,a
                           0006AD  2808 	C$lab5.c$180$3$139 ==.
                                   2809 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:180: if (Constant > maxval) Constant = maxval;
      000784 C3               [12] 2810 	clr	c
      000785 E5 4F            [12] 2811 	mov	a,_Update_Value_PARM_3
      000787 9E               [12] 2812 	subb	a,r6
      000788 E5 50            [12] 2813 	mov	a,(_Update_Value_PARM_3 + 1)
      00078A 64 80            [12] 2814 	xrl	a,#0x80
      00078C 8F F0            [24] 2815 	mov	b,r7
      00078E 63 F0 80         [24] 2816 	xrl	b,#0x80
      000791 95 F0            [12] 2817 	subb	a,b
      000793 50 04            [24] 2818 	jnc	00106$
      000795 AE 4F            [24] 2819 	mov	r6,_Update_Value_PARM_3
      000797 AF 50            [24] 2820 	mov	r7,(_Update_Value_PARM_3 + 1)
      000799                       2821 00106$:
                           0006C2  2822 	C$lab5.c$182$2$138 ==.
                                   2823 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:182: if (input == 'd')
      000799 BB 64 20         [24] 2824 	cjne	r3,#0x64,00110$
                           0006C5  2825 	C$lab5.c$184$3$140 ==.
                                   2826 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:184: Constant -= incr;
      00079C A9 4E            [24] 2827 	mov	r1,_Update_Value_PARM_2
      00079E 7A 00            [12] 2828 	mov	r2,#0x00
      0007A0 EE               [12] 2829 	mov	a,r6
      0007A1 C3               [12] 2830 	clr	c
      0007A2 99               [12] 2831 	subb	a,r1
      0007A3 FE               [12] 2832 	mov	r6,a
      0007A4 EF               [12] 2833 	mov	a,r7
      0007A5 9A               [12] 2834 	subb	a,r2
      0007A6 FF               [12] 2835 	mov	r7,a
                           0006D0  2836 	C$lab5.c$185$3$140 ==.
                                   2837 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:185: if (Constant < minval) Constant = minval;
      0007A7 C3               [12] 2838 	clr	c
      0007A8 EE               [12] 2839 	mov	a,r6
      0007A9 95 51            [12] 2840 	subb	a,_Update_Value_PARM_4
      0007AB EF               [12] 2841 	mov	a,r7
      0007AC 64 80            [12] 2842 	xrl	a,#0x80
      0007AE 85 52 F0         [24] 2843 	mov	b,(_Update_Value_PARM_4 + 1)
      0007B1 63 F0 80         [24] 2844 	xrl	b,#0x80
      0007B4 95 F0            [12] 2845 	subb	a,b
      0007B6 50 04            [24] 2846 	jnc	00110$
      0007B8 AE 51            [24] 2847 	mov	r6,_Update_Value_PARM_4
      0007BA AF 52            [24] 2848 	mov	r7,(_Update_Value_PARM_4 + 1)
      0007BC                       2849 00110$:
                           0006E5  2850 	C$lab5.c$187$2$138 ==.
                                   2851 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:187: if (input == 'u')
      0007BC BB 75 9C         [24] 2852 	cjne	r3,#0x75,00114$
                           0006E8  2853 	C$lab5.c$189$3$141 ==.
                                   2854 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:189: return;
                           0006E8  2855 	C$lab5.c$192$1$137 ==.
                           0006E8  2856 	XG$Update_Value$0$0 ==.
      0007BF 22               [24] 2857 	ret
                                   2858 ;------------------------------------------------------------
                                   2859 ;Allocation info for local variables in function 'read_accels'
                                   2860 ;------------------------------------------------------------
                                   2861 ;Data                      Allocated with name '_read_accels_Data_1_143'
                                   2862 ;avg_gx                    Allocated with name '_read_accels_avg_gx_1_143'
                                   2863 ;avg_gy                    Allocated to registers r3 r4 
                                   2864 ;i                         Allocated to registers 
                                   2865 ;------------------------------------------------------------
                           0006E9  2866 	G$read_accels$0$0 ==.
                           0006E9  2867 	C$lab5.c$194$1$137 ==.
                                   2868 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:194: void read_accels(void)
                                   2869 ;	-----------------------------------------
                                   2870 ;	 function read_accels
                                   2871 ;	-----------------------------------------
      0007C0                       2872 _read_accels:
                           0006E9  2873 	C$lab5.c$198$1$137 ==.
                                   2874 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:198: char i =0;
                           0006E9  2875 	C$lab5.c$199$1$143 ==.
                                   2876 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:199: avg_gy=avg_gx=0;
      0007C0 E4               [12] 2877 	clr	a
      0007C1 FF               [12] 2878 	mov	r7,a
      0007C2 F5 57            [12] 2879 	mov	_read_accels_avg_gx_1_143,a
      0007C4 F5 58            [12] 2880 	mov	(_read_accels_avg_gx_1_143 + 1),a
      0007C6 FB               [12] 2881 	mov	r3,a
      0007C7 FC               [12] 2882 	mov	r4,a
                           0006F1  2883 	C$lab5.c$200$1$143 ==.
                                   2884 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:200: gx=gy=0;
                                   2885 ;	1-genFromRTrack replaced	mov	_gy,#0x00
      0007C8 F5 4C            [12] 2886 	mov	_gy,a
                                   2887 ;	1-genFromRTrack replaced	mov	_gx,#0x00
      0007CA F5 4B            [12] 2888 	mov	_gx,a
      0007CC                       2889 00105$:
                           0006F5  2890 	C$lab5.c$201$1$143 ==.
                                   2891 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:201: for (; i < 8; i++)
      0007CC C3               [12] 2892 	clr	c
      0007CD EF               [12] 2893 	mov	a,r7
      0007CE 64 80            [12] 2894 	xrl	a,#0x80
      0007D0 94 88            [12] 2895 	subb	a,#0x88
      0007D2 40 03            [24] 2896 	jc	00119$
      0007D4 02 08 92         [24] 2897 	ljmp	00103$
      0007D7                       2898 00119$:
                           000700  2899 	C$lab5.c$203$2$144 ==.
                                   2900 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:203: wait();
      0007D7 C0 07            [24] 2901 	push	ar7
      0007D9 C0 04            [24] 2902 	push	ar4
      0007DB C0 03            [24] 2903 	push	ar3
      0007DD 12 06 B2         [24] 2904 	lcall	_wait
                           000709  2905 	C$lab5.c$204$2$144 ==.
                                   2906 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:204: i2c_read_data(0x30,0x27,Data,1);
      0007E0 75 2D 53         [24] 2907 	mov	_i2c_read_data_PARM_3,#_read_accels_Data_1_143
      0007E3 75 2E 00         [24] 2908 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0007E6 75 2F 40         [24] 2909 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0007E9 75 2C 27         [24] 2910 	mov	_i2c_read_data_PARM_2,#0x27
      0007EC 75 30 01         [24] 2911 	mov	_i2c_read_data_PARM_4,#0x01
      0007EF 75 82 30         [24] 2912 	mov	dpl,#0x30
      0007F2 12 04 BF         [24] 2913 	lcall	_i2c_read_data
      0007F5 D0 03            [24] 2914 	pop	ar3
      0007F7 D0 04            [24] 2915 	pop	ar4
      0007F9 D0 07            [24] 2916 	pop	ar7
                           000724  2917 	C$lab5.c$205$2$144 ==.
                                   2918 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:205: if (Data[0] & 0x03 == 0x03)
      0007FB E5 53            [12] 2919 	mov	a,_read_accels_Data_1_143
      0007FD 30 E0 6D         [24] 2920 	jnb	acc.0,00102$
                           000729  2921 	C$lab5.c$207$3$145 ==.
                                   2922 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:207: i2c_read_data(0x30,0x28|0x80,Data,4);
      000800 75 2D 53         [24] 2923 	mov	_i2c_read_data_PARM_3,#_read_accels_Data_1_143
      000803 75 2E 00         [24] 2924 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      000806 75 2F 40         [24] 2925 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      000809 75 2C A8         [24] 2926 	mov	_i2c_read_data_PARM_2,#0xA8
      00080C 75 30 04         [24] 2927 	mov	_i2c_read_data_PARM_4,#0x04
      00080F 75 82 30         [24] 2928 	mov	dpl,#0x30
      000812 C0 07            [24] 2929 	push	ar7
      000814 C0 04            [24] 2930 	push	ar4
      000816 C0 03            [24] 2931 	push	ar3
      000818 12 04 BF         [24] 2932 	lcall	_i2c_read_data
      00081B D0 03            [24] 2933 	pop	ar3
      00081D D0 04            [24] 2934 	pop	ar4
      00081F D0 07            [24] 2935 	pop	ar7
                           00074A  2936 	C$lab5.c$208$3$145 ==.
                                   2937 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:208: avg_gx += ((Data[1] << 8) >> 4);
      000821 AA 54            [24] 2938 	mov	r2,(_read_accels_Data_1_143 + 0x0001)
      000823 E5 54            [12] 2939 	mov	a,(_read_accels_Data_1_143 + 0x0001)
      000825 33               [12] 2940 	rlc	a
      000826 95 E0            [12] 2941 	subb	a,acc
      000828 8A 06            [24] 2942 	mov	ar6,r2
      00082A 7A 00            [12] 2943 	mov	r2,#0x00
      00082C EE               [12] 2944 	mov	a,r6
      00082D C4               [12] 2945 	swap	a
      00082E CA               [12] 2946 	xch	a,r2
      00082F C4               [12] 2947 	swap	a
      000830 54 0F            [12] 2948 	anl	a,#0x0F
      000832 6A               [12] 2949 	xrl	a,r2
      000833 CA               [12] 2950 	xch	a,r2
      000834 54 0F            [12] 2951 	anl	a,#0x0F
      000836 CA               [12] 2952 	xch	a,r2
      000837 6A               [12] 2953 	xrl	a,r2
      000838 CA               [12] 2954 	xch	a,r2
      000839 30 E3 02         [24] 2955 	jnb	acc.3,00121$
      00083C 44 F0            [12] 2956 	orl	a,#0xF0
      00083E                       2957 00121$:
      00083E FE               [12] 2958 	mov	r6,a
      00083F EA               [12] 2959 	mov	a,r2
      000840 25 57            [12] 2960 	add	a,_read_accels_avg_gx_1_143
      000842 F5 57            [12] 2961 	mov	_read_accels_avg_gx_1_143,a
      000844 EE               [12] 2962 	mov	a,r6
      000845 35 58            [12] 2963 	addc	a,(_read_accels_avg_gx_1_143 + 1)
      000847 F5 58            [12] 2964 	mov	(_read_accels_avg_gx_1_143 + 1),a
                           000772  2965 	C$lab5.c$209$3$145 ==.
                                   2966 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:209: avg_gy += ((Data[3] << 8) >> 4);
      000849 AD 56            [24] 2967 	mov	r5,(_read_accels_Data_1_143 + 0x0003)
      00084B E5 56            [12] 2968 	mov	a,(_read_accels_Data_1_143 + 0x0003)
      00084D 33               [12] 2969 	rlc	a
      00084E 95 E0            [12] 2970 	subb	a,acc
      000850 8D 06            [24] 2971 	mov	ar6,r5
      000852 7D 00            [12] 2972 	mov	r5,#0x00
      000854 EE               [12] 2973 	mov	a,r6
      000855 C4               [12] 2974 	swap	a
      000856 CD               [12] 2975 	xch	a,r5
      000857 C4               [12] 2976 	swap	a
      000858 54 0F            [12] 2977 	anl	a,#0x0F
      00085A 6D               [12] 2978 	xrl	a,r5
      00085B CD               [12] 2979 	xch	a,r5
      00085C 54 0F            [12] 2980 	anl	a,#0x0F
      00085E CD               [12] 2981 	xch	a,r5
      00085F 6D               [12] 2982 	xrl	a,r5
      000860 CD               [12] 2983 	xch	a,r5
      000861 30 E3 02         [24] 2984 	jnb	acc.3,00122$
      000864 44 F0            [12] 2985 	orl	a,#0xF0
      000866                       2986 00122$:
      000866 FE               [12] 2987 	mov	r6,a
      000867 ED               [12] 2988 	mov	a,r5
      000868 2B               [12] 2989 	add	a,r3
      000869 FB               [12] 2990 	mov	r3,a
      00086A EE               [12] 2991 	mov	a,r6
      00086B 3C               [12] 2992 	addc	a,r4
      00086C FC               [12] 2993 	mov	r4,a
      00086D                       2994 00102$:
                           000796  2995 	C$lab5.c$211$2$144 ==.
                                   2996 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:211: printf("\r\ndone!!");
      00086D C0 07            [24] 2997 	push	ar7
      00086F C0 04            [24] 2998 	push	ar4
      000871 C0 03            [24] 2999 	push	ar3
      000873 74 79            [12] 3000 	mov	a,#___str_10
      000875 C0 E0            [24] 3001 	push	acc
      000877 74 11            [12] 3002 	mov	a,#(___str_10 >> 8)
      000879 C0 E0            [24] 3003 	push	acc
      00087B 74 80            [12] 3004 	mov	a,#0x80
      00087D C0 E0            [24] 3005 	push	acc
      00087F 12 0A 9B         [24] 3006 	lcall	_printf
      000882 15 81            [12] 3007 	dec	sp
      000884 15 81            [12] 3008 	dec	sp
      000886 15 81            [12] 3009 	dec	sp
      000888 D0 03            [24] 3010 	pop	ar3
      00088A D0 04            [24] 3011 	pop	ar4
      00088C D0 07            [24] 3012 	pop	ar7
                           0007B7  3013 	C$lab5.c$201$1$143 ==.
                                   3014 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:201: for (; i < 8; i++)
      00088E 0F               [12] 3015 	inc	r7
      00088F 02 07 CC         [24] 3016 	ljmp	00105$
      000892                       3017 00103$:
                           0007BB  3018 	C$lab5.c$213$1$143 ==.
                                   3019 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:213: avg_gy= avg_gy/8;
      000892 75 11 08         [24] 3020 	mov	__divsint_PARM_2,#0x08
      000895 75 12 00         [24] 3021 	mov	(__divsint_PARM_2 + 1),#0x00
      000898 8B 82            [24] 3022 	mov	dpl,r3
      00089A 8C 83            [24] 3023 	mov	dph,r4
      00089C 12 10 AB         [24] 3024 	lcall	__divsint
      00089F AB 82            [24] 3025 	mov	r3,dpl
      0008A1 AC 83            [24] 3026 	mov	r4,dph
                           0007CC  3027 	C$lab5.c$214$1$143 ==.
                                   3028 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:214: avg_gx= avg_gx/8;
      0008A3 75 11 08         [24] 3029 	mov	__divsint_PARM_2,#0x08
      0008A6 75 12 00         [24] 3030 	mov	(__divsint_PARM_2 + 1),#0x00
      0008A9 85 57 82         [24] 3031 	mov	dpl,_read_accels_avg_gx_1_143
      0008AC 85 58 83         [24] 3032 	mov	dph,(_read_accels_avg_gx_1_143 + 1)
      0008AF C0 04            [24] 3033 	push	ar4
      0008B1 C0 03            [24] 3034 	push	ar3
      0008B3 12 10 AB         [24] 3035 	lcall	__divsint
      0008B6 85 82 57         [24] 3036 	mov	_read_accels_avg_gx_1_143,dpl
      0008B9 85 83 58         [24] 3037 	mov	(_read_accels_avg_gx_1_143 + 1),dph
      0008BC D0 03            [24] 3038 	pop	ar3
      0008BE D0 04            [24] 3039 	pop	ar4
                           0007E9  3040 	C$lab5.c$215$1$143 ==.
                                   3041 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:215: gx = avg_gx;
      0008C0 85 57 4B         [24] 3042 	mov	_gx,_read_accels_avg_gx_1_143
                           0007EC  3043 	C$lab5.c$216$1$143 ==.
                                   3044 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:216: gy = avg_gy;
      0008C3 8B 4C            [24] 3045 	mov	_gy,r3
                           0007EE  3046 	C$lab5.c$219$1$143 ==.
                           0007EE  3047 	XG$read_accels$0$0 ==.
      0008C5 22               [24] 3048 	ret
                                   3049 ;------------------------------------------------------------
                                   3050 ;Allocation info for local variables in function 'set_servo_PWM'
                                   3051 ;------------------------------------------------------------
                           0007EF  3052 	G$set_servo_PWM$0$0 ==.
                           0007EF  3053 	C$lab5.c$221$1$143 ==.
                                   3054 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:221: void set_servo_PWM(void)
                                   3055 ;	-----------------------------------------
                                   3056 ;	 function set_servo_PWM
                                   3057 ;	-----------------------------------------
      0008C6                       3058 _set_servo_PWM:
                           0007EF  3059 	C$lab5.c$223$1$147 ==.
                                   3060 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:223: PCA0CP1 = 0xFFFF - STR_PW;
      0008C6 74 FF            [12] 3061 	mov	a,#0xFF
      0008C8 C3               [12] 3062 	clr	c
      0008C9 95 40            [12] 3063 	subb	a,_STR_PW
      0008CB F5 EB            [12] 3064 	mov	((_PCA0CP1 >> 0) & 0xFF),a
      0008CD 74 FF            [12] 3065 	mov	a,#0xFF
      0008CF 95 41            [12] 3066 	subb	a,(_STR_PW + 1)
      0008D1 F5 FB            [12] 3067 	mov	((_PCA0CP1 >> 8) & 0xFF),a
                           0007FC  3068 	C$lab5.c$224$1$147 ==.
                           0007FC  3069 	XG$set_servo_PWM$0$0 ==.
      0008D3 22               [24] 3070 	ret
                                   3071 ;------------------------------------------------------------
                                   3072 ;Allocation info for local variables in function 'PCA_Init'
                                   3073 ;------------------------------------------------------------
                           0007FD  3074 	G$PCA_Init$0$0 ==.
                           0007FD  3075 	C$lab5.c$226$1$147 ==.
                                   3076 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:226: void PCA_Init(void)
                                   3077 ;	-----------------------------------------
                                   3078 ;	 function PCA_Init
                                   3079 ;	-----------------------------------------
      0008D4                       3080 _PCA_Init:
                           0007FD  3081 	C$lab5.c$228$1$149 ==.
                                   3082 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:228: PCA0MD = 0x81;
      0008D4 75 D9 81         [24] 3083 	mov	_PCA0MD,#0x81
                           000800  3084 	C$lab5.c$229$1$149 ==.
                                   3085 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:229: PCA0CPM0 = 0xC2;
      0008D7 75 DA C2         [24] 3086 	mov	_PCA0CPM0,#0xC2
                           000803  3087 	C$lab5.c$230$1$149 ==.
                                   3088 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:230: PCA0CPM1 = 0xC2;
      0008DA 75 DB C2         [24] 3089 	mov	_PCA0CPM1,#0xC2
                           000806  3090 	C$lab5.c$231$1$149 ==.
                                   3091 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:231: PCA0CN 	= 0x40;      //Enable PCA counter
      0008DD 75 D8 40         [24] 3092 	mov	_PCA0CN,#0x40
                           000809  3093 	C$lab5.c$232$1$149 ==.
                                   3094 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:232: EIE1 |= 0x08;       //Enable PCA interrupt
      0008E0 43 E6 08         [24] 3095 	orl	_EIE1,#0x08
                           00080C  3096 	C$lab5.c$233$1$149 ==.
                                   3097 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:233: EA = 1;             //Enable global interrupts
      0008E3 D2 AF            [12] 3098 	setb	_EA
                           00080E  3099 	C$lab5.c$236$1$149 ==.
                           00080E  3100 	XG$PCA_Init$0$0 ==.
      0008E5 22               [24] 3101 	ret
                                   3102 ;------------------------------------------------------------
                                   3103 ;Allocation info for local variables in function 'updateLCD'
                                   3104 ;------------------------------------------------------------
                           00080F  3105 	G$updateLCD$0$0 ==.
                           00080F  3106 	C$lab5.c$238$1$149 ==.
                                   3107 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:238: void updateLCD(void)
                                   3108 ;	-----------------------------------------
                                   3109 ;	 function updateLCD
                                   3110 ;	-----------------------------------------
      0008E6                       3111 _updateLCD:
                           00080F  3112 	C$lab5.c$240$1$151 ==.
                                   3113 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:240: lcd_clear();
      0008E6 12 01 B8         [24] 3114 	lcall	_lcd_clear
                           000812  3115 	C$lab5.c$241$1$151 ==.
                                   3116 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:241: lcd_print("ks: %u, kdx: %u, kdy: %u\nMpw: %u, Spw: %u\n");
      0008E9 74 82            [12] 3117 	mov	a,#___str_11
      0008EB C0 E0            [24] 3118 	push	acc
      0008ED 74 11            [12] 3119 	mov	a,#(___str_11 >> 8)
      0008EF C0 E0            [24] 3120 	push	acc
      0008F1 74 80            [12] 3121 	mov	a,#0x80
      0008F3 C0 E0            [24] 3122 	push	acc
      0008F5 12 01 33         [24] 3123 	lcall	_lcd_print
      0008F8 15 81            [12] 3124 	dec	sp
      0008FA 15 81            [12] 3125 	dec	sp
      0008FC 15 81            [12] 3126 	dec	sp
                           000827  3127 	C$lab5.c$242$1$151 ==.
                           000827  3128 	XG$updateLCD$0$0 ==.
      0008FE 22               [24] 3129 	ret
                                   3130 ;------------------------------------------------------------
                                   3131 ;Allocation info for local variables in function 'set_drive_PWM'
                                   3132 ;------------------------------------------------------------
                           000828  3133 	G$set_drive_PWM$0$0 ==.
                           000828  3134 	C$lab5.c$244$1$151 ==.
                                   3135 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:244: void set_drive_PWM(void)
                                   3136 ;	-----------------------------------------
                                   3137 ;	 function set_drive_PWM
                                   3138 ;	-----------------------------------------
      0008FF                       3139 _set_drive_PWM:
                           000828  3140 	C$lab5.c$246$1$153 ==.
                                   3141 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:246: PCA0CP0 = 0xFFFF - DRV_PW;
      0008FF 74 FF            [12] 3142 	mov	a,#0xFF
      000901 C3               [12] 3143 	clr	c
      000902 95 3E            [12] 3144 	subb	a,_DRV_PW
      000904 F5 EA            [12] 3145 	mov	((_PCA0CP0 >> 0) & 0xFF),a
      000906 74 FF            [12] 3146 	mov	a,#0xFF
      000908 95 3F            [12] 3147 	subb	a,(_DRV_PW + 1)
      00090A F5 FA            [12] 3148 	mov	((_PCA0CP0 >> 8) & 0xFF),a
                           000835  3149 	C$lab5.c$247$1$153 ==.
                           000835  3150 	XG$set_drive_PWM$0$0 ==.
      00090C 22               [24] 3151 	ret
                                   3152 ;------------------------------------------------------------
                                   3153 ;Allocation info for local variables in function 'Port_Init'
                                   3154 ;------------------------------------------------------------
                           000836  3155 	G$Port_Init$0$0 ==.
                           000836  3156 	C$lab5.c$251$1$153 ==.
                                   3157 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:251: void Port_Init(void)
                                   3158 ;	-----------------------------------------
                                   3159 ;	 function Port_Init
                                   3160 ;	-----------------------------------------
      00090D                       3161 _Port_Init:
                           000836  3162 	C$lab5.c$253$1$155 ==.
                                   3163 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:253: P1MDOUT |= 0x03;  //set output pin for CEX0 and CEX2 in push-pull mode
      00090D 43 A5 03         [24] 3164 	orl	_P1MDOUT,#0x03
                           000839  3165 	C$lab5.c$256$1$155 ==.
                                   3166 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:256: P3MDOUT &= ~0x40;
      000910 AF A7            [24] 3167 	mov	r7,_P3MDOUT
      000912 74 BF            [12] 3168 	mov	a,#0xBF
      000914 5F               [12] 3169 	anl	a,r7
      000915 F5 A7            [12] 3170 	mov	_P3MDOUT,a
                           000840  3171 	C$lab5.c$257$1$155 ==.
                                   3172 ;	C:\Users\Michael\Documents\GitHub\LITEC\lab5\lab5.c:257: P3 = 0x40;
      000917 75 B0 40         [24] 3173 	mov	_P3,#0x40
                           000843  3174 	C$lab5.c$258$1$155 ==.
                           000843  3175 	XG$Port_Init$0$0 ==.
      00091A 22               [24] 3176 	ret
                                   3177 	.area CSEG    (CODE)
                                   3178 	.area CONST   (CODE)
                           000000  3179 Flab5$__str_0$0$0 == .
      0010E7                       3180 ___str_0:
      0010E7 0A                    3181 	.db 0x0A
      0010E8 54 79 70 65 20 64 69  3182 	.ascii "Type digits; end w/#"
             67 69 74 73 3B 20 65
             6E 64 20 77 2F 23
      0010FC 00                    3183 	.db 0x00
                           000016  3184 Flab5$__str_1$0$0 == .
      0010FD                       3185 ___str_1:
      0010FD 20 20 20 20 20 25 63  3186 	.ascii "     %c%c%c%c%c"
             25 63 25 63 25 63 25
             63
      00110C 00                    3187 	.db 0x00
                           000026  3188 Flab5$__str_2$0$0 == .
      00110D                       3189 ___str_2:
      00110D 25 63                 3190 	.ascii "%c"
      00110F 00                    3191 	.db 0x00
                           000029  3192 Flab5$__str_3$0$0 == .
      001110                       3193 ___str_3:
      001110 0D                    3194 	.db 0x0D
      001111 0A                    3195 	.db 0x0A
      001112 47 4F 21              3196 	.ascii "GO!"
      001115 00                    3197 	.db 0x00
                           00002F  3198 Flab5$__str_4$0$0 == .
      001116                       3199 ___str_4:
      001116 0D                    3200 	.db 0x0D
      001117 0A                    3201 	.db 0x0A
      001118 25 64                 3202 	.ascii "%d"
      00111A 00                    3203 	.db 0x00
                           000034  3204 Flab5$__str_5$0$0 == .
      00111B                       3205 ___str_5:
      00111B 25 75                 3206 	.ascii "%u"
      00111D 00                    3207 	.db 0x00
                           000037  3208 Flab5$__str_6$0$0 == .
      00111E                       3209 ___str_6:
      00111E 0D                    3210 	.db 0x0D
      00111F 0A                    3211 	.db 0x0A
      001120 25 75 2C 25 75        3212 	.ascii "%u,%u"
      001125 00                    3213 	.db 0x00
                           00003F  3214 Flab5$__str_7$0$0 == .
      001126                       3215 ___str_7:
      001126 50 6C 65 61 73 65 20  3216 	.ascii "Please enter a ks value:"
             65 6E 74 65 72 20 61
             20 6B 73 20 76 61 6C
             75 65 3A
      00113E 0A                    3217 	.db 0x0A
      00113F 20                    3218 	.ascii " "
      001140 00                    3219 	.db 0x00
                           00005A  3220 Flab5$__str_8$0$0 == .
      001141                       3221 ___str_8:
      001141 50 6C 65 61 73 65 20  3222 	.ascii "Please enter a kdx value:"
             65 6E 74 65 72 20 61
             20 6B 64 78 20 76 61
             6C 75 65 3A
      00115A 0A                    3223 	.db 0x0A
      00115B 20                    3224 	.ascii " "
      00115C 00                    3225 	.db 0x00
                           000076  3226 Flab5$__str_9$0$0 == .
      00115D                       3227 ___str_9:
      00115D 50 6C 65 61 73 65 20  3228 	.ascii "Please enter a kdy value:"
             65 6E 74 65 72 20 61
             20 6B 64 79 20 76 61
             6C 75 65 3A
      001176 0A                    3229 	.db 0x0A
      001177 20                    3230 	.ascii " "
      001178 00                    3231 	.db 0x00
                           000092  3232 Flab5$__str_10$0$0 == .
      001179                       3233 ___str_10:
      001179 0D                    3234 	.db 0x0D
      00117A 0A                    3235 	.db 0x0A
      00117B 64 6F 6E 65 21 21     3236 	.ascii "done!!"
      001181 00                    3237 	.db 0x00
                           00009B  3238 Flab5$__str_11$0$0 == .
      001182                       3239 ___str_11:
      001182 6B 73 3A 20 25 75 2C  3240 	.ascii "ks: %u, kdx: %u, kdy: %u"
             20 6B 64 78 3A 20 25
             75 2C 20 6B 64 79 3A
             20 25 75
      00119A 0A                    3241 	.db 0x0A
      00119B 4D 70 77 3A 20 25 75  3242 	.ascii "Mpw: %u, Spw: %u"
             2C 20 53 70 77 3A 20
             25 75
      0011AB 0A                    3243 	.db 0x0A
      0011AC 00                    3244 	.db 0x00
                                   3245 	.area XINIT   (CODE)
                                   3246 	.area CABS    (ABS,CODE)
