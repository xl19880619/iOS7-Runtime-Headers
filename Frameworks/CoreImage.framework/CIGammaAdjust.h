/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSNumber;

@interface CIGammaAdjust : CIFilter  {
    CIImage *inputImage;
    NSNumber *inputPower;
}

@property(retain) CIImage * inputImage;
@property(retain) NSNumber * inputPower;

+ (id)customAttributes;

- (id)inputPower;
- (void)setInputPower:(id)arg1;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (BOOL)_isIdentity;
- (id)outputImage;
- (void)setDefaults;

@end
