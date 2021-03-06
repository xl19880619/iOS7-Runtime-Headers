/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface SKAction : NSObject <NSCopying, NSCoding> {

  /* Error parsing encoded ivar type info: ^{SKCAction=^^?f@BddffdBB@?iffff} */
    struct SKCAction { int (**x1)(); float x2; id x3; boolx4; double x5; double x6; float x7; float x8; double x9; boolx10; boolx11; id x12; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x13; int x14; float x15; float x16; float x17; float x18; } *_caction;

    void *caction;
}

@property BOOL finished;
@property double duration;
@property int timingMode;
@property float speed;

+ (id)runAction:(id)arg1 onChildWithName:(id)arg2;
+ (id)runBlock:(id)arg1;
+ (id)performSelector:(SEL)arg1 onTarget:(id)arg2;
+ (id)playSoundFileNamed:(id)arg1 waitForCompletion:(BOOL)arg2;
+ (id)playSoundFileNamed:(id)arg1;
+ (id)animateWithTextures:(id)arg1 timePerFrame:(double)arg2;
+ (id)group:(id)arg1;
+ (id)sequence:(id)arg1;
+ (id)moveBY:(struct CGVector { float x1; float x2; })arg1 duration:(double)arg2;
+ (id)moveBy:(struct CGVector { float x1; float x2; })arg1 duration:(double)arg2;
+ (id)customActionWithDuration:(double)arg1 actionBlock:(id)arg2;
+ (id)javaScriptActionWithDuration:(double)arg1 script:(id)arg2;
+ (id)runBlock:(id)arg1 queue:(id)arg2;
+ (id)removeFromParent;
+ (id)waitForDuration:(double)arg1 withRange:(double)arg2;
+ (id)waitForDuration:(double)arg1;
+ (id)speedTo:(float)arg1 duration:(double)arg2;
+ (id)speedBy:(float)arg1 duration:(double)arg2;
+ (id)followPath:(struct CGPath { }*)arg1 asOffset:(BOOL)arg2 orientToPath:(BOOL)arg3 duration:(double)arg4;
+ (id)followPath:(struct CGPath { }*)arg1 duration:(double)arg2;
+ (id)colorizeWithColorBlendFactor:(float)arg1 duration:(double)arg2;
+ (id)colorizeWithColor:(id)arg1 colorBlendFactor:(float)arg2 duration:(double)arg3;
+ (id)playSoundFileNamed:(id)arg1 atPosition:(struct CGPoint { float x1; float x2; })arg2 waitForCompletion:(BOOL)arg3;
+ (id)animateWithTextures:(id)arg1 timePerFrame:(double)arg2 resize:(BOOL)arg3 restore:(BOOL)arg4;
+ (id)fadeAlphaTo:(float)arg1 duration:(double)arg2;
+ (id)fadeAlphaBy:(float)arg1 duration:(double)arg2;
+ (id)fadeInWithDuration:(double)arg1;
+ (id)repeatActionForever:(id)arg1;
+ (id)repeatAction:(id)arg1 count:(unsigned int)arg2;
+ (id)resizeToHeight:(float)arg1 duration:(double)arg2;
+ (id)resizeToWidth:(float)arg1 duration:(double)arg2;
+ (id)resizeToWidth:(float)arg1 height:(float)arg2 duration:(double)arg3;
+ (id)resizeByWidth:(float)arg1 height:(float)arg2 duration:(double)arg3;
+ (id)scaleYTo:(float)arg1 duration:(double)arg2;
+ (id)scaleXTo:(float)arg1 duration:(double)arg2;
+ (id)scaleXTo:(float)arg1 y:(float)arg2 duration:(double)arg3;
+ (id)scaleTo:(float)arg1 duration:(double)arg2;
+ (id)scaleXBy:(float)arg1 y:(float)arg2 duration:(double)arg3;
+ (id)scaleBy:(float)arg1 duration:(double)arg2;
+ (id)rotateToAngle:(float)arg1 duration:(double)arg2 shortestUnitArc:(BOOL)arg3;
+ (id)rotateToAngle:(float)arg1 duration:(double)arg2;
+ (id)rotateByAngle:(float)arg1 duration:(double)arg2;
+ (id)moveToY:(float)arg1 duration:(double)arg2;
+ (id)moveToX:(float)arg1 duration:(double)arg2;
+ (id)moveTo:(struct CGPoint { float x1; float x2; })arg1 duration:(double)arg2;
+ (id)moveByX:(float)arg1 y:(float)arg2 duration:(double)arg3;
+ (id)setTexture:(id)arg1;
+ (id)fadeOutWithDuration:(double)arg1;

- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;
- (void)willStartWithTarget:(id)arg1 atTime:(double)arg2;
- (void)wasRemovedFromTarget:(id)arg1 atTime:(double)arg2;
- (void)wasAddedToTarget:(id)arg1 atTime:(double)arg2;
- (float)ratioForTime:(double)arg1;
- (void)willResumeWithTarget:(id)arg1 atTime:(double)arg2;
- (void)wasPausedWithTarget:(id)arg1 atTime:(double)arg2;
- (id)reversedAction;
- (void)setTimingMode:(int)arg1;
- (int)timingMode;
- (void)setCppAction:(void*)arg1;
- (struct SKCAction { int (**x1)(); float x2; id x3; boolx4; double x5; double x6; float x7; float x8; double x9; boolx10; boolx11; id x12; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x13; int x14; float x15; float x16; float x17; float x18; }*)caction;
     /* Encoded args for previous method: ^{SKCAction=^^?f@BddffdBB@?iffff}8@0:4 */

- (void)setSpeed:(float)arg1;
- (float)speed;
- (void)setDuration:(double)arg1;
- (id)init;
- (id)copy;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setFinished:(BOOL)arg1;
- (BOOL)finished;
- (double)duration;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
