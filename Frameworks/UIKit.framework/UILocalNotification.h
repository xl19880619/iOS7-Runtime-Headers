/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSCalendar, NSDate, NSDictionary, NSTimeZone;

@interface UILocalNotification : NSObject <NSCopying, NSCoding> {
}

@property(copy) NSDate * fireDate;
@property(copy) NSTimeZone * timeZone;
@property unsigned int repeatInterval;
@property(copy) NSCalendar * repeatCalendar;
@property(copy) NSString * alertBody;
@property BOOL hasAction;
@property(copy) NSString * alertAction;
@property(copy) NSString * alertLaunchImage;
@property(copy) NSString * soundName;
@property int applicationIconBadgeNumber;
@property(copy) NSDictionary * userInfo;
@property int totalRepeatCount;
@property int remainingRepeatCount;
@property BOOL hideAlertTitle;
@property BOOL allowSnooze;
@property int soundType;
@property BOOL interruptAudioAndLockDevice;
@property BOOL resumeApplicationInBackground;
@property BOOL fireNotificationsWhenAppRunning;
@property BOOL showAlarmStatusBarItem;
@property(copy) NSString * customLockSliderLabel;
@property(copy) NSString * firedNotificationName;
@property(copy) NSString * snoozedNotificationName;
@property BOOL isSystemAlert;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)alloc;

- (id)init;
- (BOOL)isValid;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)clearNonSystemProperties;
- (int)compareFireDates:(id)arg1;
- (id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2;
- (id)nextFireDateForLastFireDate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
