/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSOperationQueue, SKUIGiftConfiguration, SKUIGiftComposeViewController, SKUIClientContext, SKUIGift, UIViewController, <SKUIGiftViewControllerDelegate>;

@interface SKUIGiftViewController : UINavigationController  {
    SKUIClientContext *_clientContext;
    SKUIGift *_gift;
    <SKUIGiftViewControllerDelegate> *_giftDelegate;
    SKUIGiftConfiguration *_giftConfiguration;
    NSOperationQueue *_operationQueue;
    UIViewController *_placeholderViewController;
    SKUIGiftComposeViewController *_rootViewController;
}

@property(readonly) SKUIGift * gift;
@property(retain) SKUIClientContext * clientContext;
@property <SKUIGiftViewControllerDelegate> * giftDelegate;
@property(retain) NSOperationQueue * operationQueue;


- (id)initWithGift:(id)arg1;
- (void)setGiftDelegate:(id)arg1;
- (id)giftDelegate;
- (id)gift;
- (void)_clientContextDidLoadWithContext:(id)arg1 error:(id)arg2;
- (void)_configurationDidLoadWithResult:(BOOL)arg1 error:(id)arg2;
- (void)_finishGiftingWithResult:(BOOL)arg1;
- (void)_finishAuthenticateWithResponse:(id)arg1 error:(id)arg2;
- (void)_loadGiftConfiguration;
- (id)_localizedString:(id)arg1;
- (void)_cancelButtonAction:(id)arg1;
- (void)setClientContext:(id)arg1;
- (id)clientContext;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setOperationQueue:(id)arg1;
- (id)operationQueue;

@end
