//
//  DZImagePool.h
//  ScienceCalculator
//
//  Created by 董 政 on 12-3-4.
//  Copyright (c) 2012年 复旦大学. All rights reserved.
//

#import <Foundation/Foundation.h>

#define kImage_0 0
#define kImage_1 1
#define kImage_10powerx 2
#define kImage_2 3
#define kImage_2powerx 4
#define kImage_3 5
#define kImage_4 6
#define kImage_5 7
#define kImage_6 8
#define kImage_7 9
#define kImage_8 10
#define kImage_9 11
#define kImage_C 12
#define kImage_LEDdeg 13
#define kImage_LEDm 14
#define kImage_LEDnorm 15
#define kImage_LEDrad 16
#define kImage_LEDsci 17
#define kImage_MC 18
#define kImage_MR 19
#define kImage_Madd 20
#define kImage_Msub 21
#define kImage_add 22
#define kImage_arccos 23
#define kImage_arccosh 24
#define kImage_arcsin 25
#define kImage_arcsinh 26
#define kImage_arctan 27
#define kImage_arctanh 28
#define kImage_button102x42 29
#define kImage_button102x42pressed 30
#define kImage_button50x42 31
#define kImage_button50x42pressed 32
#define kImage_cos 33
#define kImage_cosh 34
#define kImage_deg 35
#define kImage_delete 36
#define kImage_div 37
#define kImage_e 38
#define kImage_equ 39
#define kImage_exp 40
#define kImage_hyp 41
#define kImage_leftpar 42
#define kImage_ln 43
#define kImage_log10 44
#define kImage_log2 45
#define kImage_menu 46
#define kImage_mul 47
#define kImage_nCr 48
#define kImage_nPr 49
#define kImage_neg 50
#define kImage_nfactorial 51
#define kImage_pi 52
#define kImage_point 53
#define kImage_rightpar 54
#define kImage_shift 55
#define kImage_sin 56
#define kImage_sinh 57
#define kImage_sub 58
#define kImage_tan 59
#define kImage_tanh 60
#define kImage_timestenpowerx 61
#define kImage_xpowery 62
#define kImage_xreciprocal 63
#define kImage_xrooty 64
#define kImage_xsquare 65
#define kImage_xsquareroot 66

@interface DZImagePool : NSObject

@property (nonatomic,retain) NSMutableArray * pool;

- (UIImage *)imageAtIndex:(NSInteger)index;

@end