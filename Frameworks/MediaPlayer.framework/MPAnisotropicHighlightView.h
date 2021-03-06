/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIImageView, UIImage;

@interface MPAnisotropicHighlightView : UIView  {
    float _filteredHighlightX;
    UIImageView *_highlightImageView;
    id _motionManagerObserver;
}

@property(retain) UIImage * highlightImage;

+ (struct CGSize { float x1; float x2; })defaultHighlightSize;
+ (id)_defaultHighlightImage;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)highlightImage;
- (void)setHighlightImage:(id)arg1;

@end
