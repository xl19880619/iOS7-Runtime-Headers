/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WBReader;

@interface WBOfficeArtReaderState : OABReaderState  {
    WBReader *mReader;
    int mCurrentTextType;
}

@property WBReader * reader;
@property int currentTextType;


- (int)currentTextType;
- (void)setCurrentTextType:(int)arg1;
- (id)reader;
- (void)setReader:(id)arg1;
- (id)initWithClient:(Class)arg1;

@end
