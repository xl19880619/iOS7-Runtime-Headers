/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVWeakReference, NSObject<OS_dispatch_queue>;

@interface AVWeakReferencingDelegateStorage : NSObject <AVDelegateStorage> {
    NSObject<OS_dispatch_queue> *_delegateReadWriteQueue;
    AVWeakReference *_weakReferenceToDelegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property(readonly) id delegate;
@property(readonly) NSObject<OS_dispatch_queue> * delegateQueue;

+ (void)initialize;

- (void)invokeDelegateCallbackWithBlock:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)getRetainedDelegate:(id*)arg1 retainedDelegateQueue:(id*)arg2;
- (void)_collectUncollectables;
- (id)init;
- (void)finalize;
- (void)dealloc;
- (id)delegate;
- (void)_setDelegate:(id)arg1;
- (id)_delegate;
- (id)delegateQueue;

@end
