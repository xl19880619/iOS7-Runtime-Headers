/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLCropOverlayWallpaperBottomBar, CAMBottomBar, PLCropOverlayPreviewBottomBar;

@interface PLCropOverlayBottomBar : UIView  {
    BOOL _playingVideo;
    BOOL _inPopover;
    int _style;
    CAMBottomBar *_cameraBottomBar;
    PLCropOverlayPreviewBottomBar *_previewBottomBar;
    PLCropOverlayWallpaperBottomBar *_wallpaperBottomBar;
}

@property int style;
@property(retain) CAMBottomBar * cameraBottomBar;
@property(retain) PLCropOverlayPreviewBottomBar * previewBottomBar;
@property(retain) PLCropOverlayWallpaperBottomBar * wallpaperBottomBar;
@property(getter=isPlayingVideo) BOOL playingVideo;
@property(getter=isInPopover) BOOL inPopover;


- (BOOL)_isEditingStyle:(int)arg1;
- (void)_updatePreviewBottomBarForPlaybackState;
- (void)_updateBottomBars;
- (void)_commonPLCropOverlayBottomBarInitialization;
- (BOOL)isPlayingVideo;
- (void)togglePlaybackState;
- (void)setPlayingVideo:(BOOL)arg1;
- (id)previewBottomBar;
- (id)wallpaperBottomBar;
- (void)setCameraBottomBar:(id)arg1;
- (id)cameraBottomBar;
- (void)setWallpaperBottomBar:(id)arg1;
- (void)setPreviewBottomBar:(id)arg1;
- (BOOL)isInPopover;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setStyle:(int)arg1;
- (int)style;
- (void)dealloc;
- (void)setInPopover:(BOOL)arg1;
- (void)setStyle:(int)arg1 animated:(BOOL)arg2;
- (void)_updateStyle;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;

@end
