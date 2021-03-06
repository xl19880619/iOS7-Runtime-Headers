/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSObject<OS_dispatch_queue>, AVAssetWriterFigAssetWriterNotificationHandler, AVWeakReference;

@interface AVAssetWriterWritingHelper : AVAssetWriterHelper <AVAssetWriterFigAssetWriterNotificationHandlerDelegate> {
    AVWeakReference *_weakReference;
    struct OpaqueFigAssetWriter { } *_figAssetWriter;
    NSObject<OS_dispatch_queue> *_figAssetWriterAccessQueue;
    BOOL _startSessionCalled;
    AVAssetWriterFigAssetWriterNotificationHandler *_notificationHandler;
}


- (struct OpaqueFigAssetWriter { }*)_retainedFigAssetWriter;
- (id)figTrackReferences;
- (void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)arg1 error:(id)arg2;
- (id)initWithConfigurationState:(id)arg1 error:(id*)arg2;
- (id)initWithConfigurationState:(id)arg1;
- (void)finishWritingWithCompletionHandler:(id)arg1;
- (void)finishWriting;
- (void)cancelWriting;
- (void)endSessionAtSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)startSessionAtSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (int)status;
- (void)finalize;
- (void)dealloc;

@end
