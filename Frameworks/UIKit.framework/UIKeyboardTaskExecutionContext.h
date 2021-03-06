/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIKeyboardTaskExecutionContext, UIKeyboardTaskQueue;

@interface UIKeyboardTaskExecutionContext : NSObject  {
    UIKeyboardTaskExecutionContext *_parentExecutionContext;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _continuation;

    UIKeyboardTaskQueue *_executionQueue;
}

@property(readonly) UIKeyboardTaskQueue * executionQueue;


- (id)init;
- (void)dealloc;
- (id)initWithExecutionQueue:(id)arg1;
- (id)initWithParentContext:(id)arg1 continuation:(id)arg2;
- (id)executionQueue;
- (void)transferExecutionToMainThreadWithTask:(id)arg1;
- (id)childWithContinuation:(id)arg1;
- (void)returnExecutionToParent;

@end
