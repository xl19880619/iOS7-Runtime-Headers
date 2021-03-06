/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKScatterAnimator : GKBubblePathAnimator  {
    int _focusBubbleType;
}

@property int focusBubbleType;

+ (float)preferredDuration;

- (BOOL)scatterBubble:(id)arg1 shouldMoveUpAmongBubbles:(id)arg2;
- (BOOL)scatterBubble:(id)arg1 shouldMoveLeftAmongBubbles:(id)arg2 context:(id)arg3;
- (id)scatterAnimationsForBubble:(id)arg1 sortedBubbles:(id)arg2 contractPoint:(union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; })arg3 context:(id)arg4;
- (id)scatterBubblesSortedLeftToRightInContext:(id)arg1;
- (int)animatorType;
- (double)minimumDurationForViewAnimations;
- (int)focusBubbleType;
- (void)setFocusBubbleType:(int)arg1;
- (void)animateTransition:(id)arg1;

@end
