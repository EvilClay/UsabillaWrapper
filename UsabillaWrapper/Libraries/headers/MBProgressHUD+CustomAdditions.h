/**
 * MBProgressHUD+CustomAdditions.h
 * Copyright (c) 2015, Usabilla
 * All rights reserved.
 * Created by Claudio Semerearo (@keepitterron)
 *
 * Used to show Usabilla's custom loader.
 */

#import "MBProgressHUD.h"

@interface MBProgressHUD (CustomAdditions)

// attach usabilla's custom loader to `view`
+ (MBProgressHUD *)usa_fadeInHUDInView:(UIView *)view;

@end