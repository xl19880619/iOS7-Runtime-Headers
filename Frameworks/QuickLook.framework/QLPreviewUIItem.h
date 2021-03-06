/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class <QLPreviewItem>, UIImage, QLPreviewThumbnailGenerator, NSString, NSURL;

@interface QLPreviewUIItem : NSObject <QLPreviewUIItem> {
    <QLPreviewItem> *_previewItem;
    QLPreviewThumbnailGenerator *_thumbnailGenerator;
    int _index;
}

@property(readonly) NSURL * previewItemURL;
@property(readonly) NSString * previewItemTitle;
@property(readonly) UIImage * icon;
@property(readonly) int level;
@property(readonly) int previewItemIndex;
@property(readonly) BOOL isFolder;

+ (id)uiItemForPreviewItem:(id)arg1 index:(int)arg2;
+ (id)genericIconForPreviewItem:(id)arg1;

- (int)previewItemIndex;
- (BOOL)isFolder;
- (void)cancelIconUpdate;
- (void)updateIconWithSize:(struct CGSize { float x1; float x2; })arg1 completionBlock:(id)arg2;
- (id)icon;
- (void)dealloc;
- (id)previewItemTitle;
- (id)previewItemURL;
- (int)level;

@end
