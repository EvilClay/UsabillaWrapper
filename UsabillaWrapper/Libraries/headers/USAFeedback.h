/**
 * USAFeedback.h
 * Copyright (c) 2015, Usabilla
 * All rights reserved.
 * Created by Claudio Semeraro (@keepitterron)
 *
 * Analytics realted functions.
 */

#import <Foundation/Foundation.h>

@interface USAFeedback : NSObject
// (optional) to be called on app alunch
+ (void)recordAppLaunchWithAppID:(NSString *)appID;
// (optional) to be called on form show
+ (void)recordFormShowWithAppID:(NSString *)appID;
@end
