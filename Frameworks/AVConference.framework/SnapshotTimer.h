/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface SnapshotTimer : NSObject  {
    BOOL taskIsComplete;
}

@property BOOL taskIsComplete;

+ (void)takeSnapshotForTask:(id)arg1;

- (void)setTaskIsComplete:(BOOL)arg1;
- (BOOL)taskIsComplete;
- (void)checkinWithTimeout:(double)arg1 forTask:(id)arg2;
- (void)checkout;
- (id)init;

@end
