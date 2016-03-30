/**
 * ViewController.h
 * Copyright (c) 2015, Usabilla
 * All rights reserved.
 * Created by Claudio Semerearo (@keepitterron)
 *
 * Feedback controller.
 */

@import UIKit;
@class USAFeedbackController;

typedef void(^USAFeedbackResponse)(USAFeedbackController *controller);

#import "USAFeedbackControllerDelegate.h"
#import "MBProgressHUD+CustomAdditions.h"

@protocol USAScreenshotDelegate<NSObject>
- (void)screenshotDidChange;
- (void)screenshotWillChange;
@end

@interface USAFeedbackController : UITableViewController<UIAlertViewDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, USAScreenshotDelegate, UIGestureRecognizerDelegate, UIActionSheetDelegate, UIContentContainer>

@property (nonatomic, assign) UIStatusBarStyle preferredStatusBarStyle;
// shows a cancel button to go back to view
@property (nonatomic, assign) BOOL showsCancelButton;
// delegate
@property (nonatomic, weak) id<USAFeedbackControllerDelegate> delegate;
// holds custom variables (key/value)
@property (nonatomic, copy) NSDictionary *customVariables;


+ (NSString *)getLocalizationFile;
+ (void)setLocalizationFile:(NSString*)fileName;
+ (void)setHostingAppid:(NSString*)appId;
+ (void)forceScreenshot:(BOOL)force;
+ (BOOL)isScreenshotForced;

// shows feedback form and returns a controller
+ (void)controllerWithScreenshot:(UIImage *)screenshot appID:(NSString *)appID delegate:(id<USAFeedbackControllerDelegate>)delegate response:(USAFeedbackResponse)response;
- (void)submit:(id)sender;
- (void)addImageFromCell:(id)sender;

//Customisation
+(void) setCustomEmoticons:(NSArray*) selected unselected:(NSArray*) unselected ;
+(void) setCustomStars:(UIImage *)full empty:(UIImage *)empty;

@end
