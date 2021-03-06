/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>, VKMapSnapshotCreator, MKMapSnapshotOptions;

@interface MKMapSnapshotter : NSObject  {
    MKMapSnapshotOptions *_options;
    int _loadingFlag;
    NSObject<OS_dispatch_queue> *_callbackQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    VKMapSnapshotCreator *_snapshotCreator;
    BOOL _needsResume;
}

@property(getter=isLoading,readonly) BOOL loading;


- (void)startWithCompletionHandler:(id)arg1;
- (void)_succeedWithSnapshot:(id)arg1;
- (void)startWithQueue:(id)arg1 completionHandler:(id)arg2;
- (void)_cleanupSnapshotCreator;
- (void)_performSnapshot;
- (void)_exitBackground:(id)arg1;
- (void)_enterBackground:(id)arg1;
- (void)_failWithError:(id)arg1;
- (void)_cancel;
- (BOOL)isLoading;
- (id)init;
- (void)dealloc;
- (void)cancel;
- (id)initWithOptions:(id)arg1;

@end
