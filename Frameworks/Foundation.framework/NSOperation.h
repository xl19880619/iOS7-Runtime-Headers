/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSOperation : NSObject  {
    id _private;
    int _private1;
}

@property unsigned int tag;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (id)dependencies;
- (void)addDependency:(id)arg1;
- (void)setQueuePriority:(int)arg1;
- (void)setCompletionBlock:(id)arg1;
- (id)init;
- (void)setObservationInfo:(void*)arg1;
- (void)waitUntilFinished;
- (void)finalize;
- (void)dealloc;
- (void)cancel;
- (void)removeDependency:(id)arg1;
- (void)waitUntilFinishedOrTimeout:(double)arg1;
- (int)queuePriority;
- (BOOL)isAsynchronous;
- (BOOL)isConcurrent;
- (id)__;
- (BOOL)isExecuting;
- (id)completionBlock;
- (void)setThreadPriority:(double)arg1;
- (double)threadPriority;
- (BOOL)isReady;
- (BOOL)isFinished;
- (id)_implicitObservationInfo;
- (void*)observationInfo;
- (void)main;
- (BOOL)isCancelled;
- (void)start;
- (unsigned int)tag;
- (void)setTag:(unsigned int)arg1;

@end
