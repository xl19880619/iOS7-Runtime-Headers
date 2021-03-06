/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIImagePickerController, UINavigationItem, NSDictionary;

@interface PLUIEditVideoViewController : PLUIImageViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    NSDictionary *_options;
    UIImagePickerController *_imagePicker;
    UINavigationItem *_navItem;
    id _delegate;
    Class _viewClass;
    unsigned int _canCreateMetadata;
    BOOL _parentInPopoverException;
}

@property BOOL parentInPopoverException;


- (void)setViewClass:(Class)arg1;
- (BOOL)parentInPopoverException;
- (void)setParentInPopoverException:(BOOL)arg1;
- (void)_setupNavigationItemAndTrimTitle:(id)arg1;
- (void)_trimVideo:(id)arg1;
- (void)_cancelTrim:(id)arg1;
- (BOOL)_editingForThirdParty;
- (void)setImagePickerOptions:(id)arg1;
- (id)_trimMessage;
- (void)didChooseVideoAtURL:(id)arg1 options:(id)arg2;
- (id)uiipc_imagePickerController;
- (id)uiipc_imagePickerOptions;
- (Class)_viewClass;
- (int)cropOverlayMode;
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;
- (BOOL)videoViewCanCreateMetadata:(id)arg1;
- (void)videoViewPlaybackDidFail:(id)arg1;
- (float)videoViewScrubberYOrigin:(id)arg1 forOrientation:(int)arg2;
- (id)initWithPhoto:(id)arg1 trimTitle:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })previewFrame;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (BOOL)_displaysFullScreen;
- (void)loadView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)navigationItem;
- (id)initWithProperties:(id)arg1;

@end
