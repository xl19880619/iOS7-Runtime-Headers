/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class PKImage, NSArray, NSString, PKBarcode, NSURL;

@interface PKPassContent : NSObject <NSCoding, NSSecureCoding> {
    PKBarcode *_barcode;
    int _transitType;
    PKImage *_footerImage;
    NSArray *_storeIdentifiers;
    NSURL *_appLaunchURL;
    NSString *_logoText;
    NSString *_localizedDescription;
    NSArray *_frontFieldBuckets;
    NSArray *_backFieldBuckets;
}

@property(retain) PKBarcode * barcode;
@property int transitType;
@property(retain) PKImage * footerImage;
@property(copy) NSArray * storeIdentifiers;
@property(copy) NSURL * appLaunchURL;
@property(copy) NSString * logoText;
@property(copy) NSArray * frontFieldBuckets;
@property(copy) NSArray * backFieldBuckets;
@property(copy) NSString * localizedDescription;

+ (BOOL)supportsSecureCoding;

- (void)flushFormattedFieldValues;
- (id)initWithPassURL:(id)arg1;
- (id)appLaunchURL;
- (id)storeIdentifiers;
- (id)backFieldBuckets;
- (id)frontFieldBuckets;
- (id)logoText;
- (id)footerImage;
- (int)transitType;
- (id)barcode;
- (void)setAppLaunchURL:(id)arg1;
- (void)setStoreIdentifiers:(id)arg1;
- (void)setFooterImage:(id)arg1;
- (void)setBarcode:(id)arg1;
- (void)setBackFieldBuckets:(id)arg1;
- (void)setFrontFieldBuckets:(id)arg1;
- (void)setTransitType:(int)arg1;
- (void)setLogoText:(id)arg1;
- (id)localizedDescription;
- (void)dealloc;
- (void)setLocalizedDescription:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
