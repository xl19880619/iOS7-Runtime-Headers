/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface MCUserNotificationQueueEntry : NSObject  {
    BOOL _displayOnLockScreen;
    BOOL _displayInAppWhitelistModes;
    NSString *_title;
    NSString *_message;
    NSString *_defaultButtonText;
    NSString *_alternateButtonText;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

    id _notification;
    double _dismissAfterTimeInterval;
}

@property(retain) NSString * title;
@property(retain) NSString * message;
@property(retain) NSString * defaultButtonText;
@property(retain) NSString * alternateButtonText;
@property BOOL displayOnLockScreen;
@property BOOL displayInAppWhitelistModes;
@property double dismissAfterTimeInterval;
@property(copy) id completionBlock;
@property(retain) id notification;


- (void)setNotification:(id)arg1;
- (id)notification;
- (void)setDismissAfterTimeInterval:(double)arg1;
- (double)dismissAfterTimeInterval;
- (void)setDisplayInAppWhitelistModes:(BOOL)arg1;
- (BOOL)displayInAppWhitelistModes;
- (void)setDisplayOnLockScreen:(BOOL)arg1;
- (BOOL)displayOnLockScreen;
- (void)setAlternateButtonText:(id)arg1;
- (id)alternateButtonText;
- (void)setDefaultButtonText:(id)arg1;
- (id)defaultButtonText;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setCompletionBlock:(id)arg1;
- (id)message;
- (void).cxx_destruct;
- (void)setMessage:(id)arg1;
- (id)completionBlock;

@end
