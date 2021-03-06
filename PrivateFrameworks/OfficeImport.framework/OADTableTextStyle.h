/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADFontReference, OADColor;

@interface OADTableTextStyle : NSObject  {
    OADFontReference *mFontReference;
    OADColor *mColor;
    int mBold;
    int mItalic;
}

+ (int)defaultItalic;
+ (int)defaultBold;
+ (id)defaultFontReference;
+ (id)defaultStyle;
+ (id)defaultColor;

- (void)applyOverridesFrom:(id)arg1;
- (void)setFontReference:(id)arg1;
- (id)fontReference;
- (id)shallowCopy;
- (void)setBold:(int)arg1;
- (void)setItalic:(int)arg1;
- (int)italic;
- (int)bold;
- (id)color;
- (id)init;
- (void)dealloc;
- (void)setColor:(id)arg1;

@end
