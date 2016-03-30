//
//  UsabillaThemeConfig.h
//  ubForm
//
//  Created by Giacomo Pinato on 14/01/16.
//  Copyright © 2016 Usabilla. All rights reserved.
//

#ifndef UsabillaThemeConfig_h
#define UsabillaThemeConfig_h
@import UIKit;

@class UsabillaThemeConfig;

@interface UsabillaThemeConfig : NSObject

@property (nonatomic, strong, nonnull) UIColor *headerColor;
@property (nonatomic, strong, nonnull) UIColor *headerTextColor;
@property (nonatomic, strong, nonnull) UIColor *primaryTextColor;
@property (nonatomic, strong, nonnull) UIColor *accentColor;
@property (nonatomic, strong, nonnull) UIColor *textOnAccentColor;
@property (nonatomic, strong, nonnull) UIColor *backgroundColor;
@property (nonatomic, strong, nonnull) UIColor *errorColor;
@property (nonatomic, strong, nonnull) UIColor *hintColor;


@property (nonatomic, strong, nonnull) UIFont  *customFont;
@property (nonatomic, strong, nullable) NSArray *enabledEmoticons;
@property (nonatomic, strong, nullable) NSArray *disabledEmoticons;
@property (nonatomic, strong, nullable) UIImage *fullStar;
@property (nonatomic, strong, nullable) UIImage *emptyStar;

+ (_Nonnull id)sharedInstance;

@end

#endif /* UsabillaThemeConfig_h */
