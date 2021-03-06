/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@class NSDate, NSString;

@interface ACDTelemetryData : NSObject  {
    int _threadPriority;
    int _taskPriority;
    NSDate *_date;
    NSString *_message;
}

@property(readonly) int threadPriority;
@property(readonly) int taskPriority;
@property(readonly) NSDate * date;
@property(readonly) NSString * message;


- (int)taskPriority;
- (id)initWithMessageFormat:(id)arg1 arguments:(char *)arg2;
- (id)initWithMessageFormat:(id)arg1;
- (id)initWithMessage:(id)arg1;
- (id)message;
- (id)init;
- (id)date;
- (void).cxx_destruct;
- (int)threadPriority;

@end
