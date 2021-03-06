/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class TPButton, <TPSlidingButtonDelegateProtocol>;

@interface TPSlidingButton : UIView <UIScrollViewDelegate> {
    TPButton *_acceptButton;
    TPButton *_endButton;
    TPButton *_sideButtonLeft;
    TPButton *_sideButtonRight;
    int _type;
    <TPSlidingButtonDelegateProtocol> *_delegate;
}

@property(retain) TPButton * acceptButton;
@property(retain) TPButton * endButton;
@property(retain) TPButton * sideButtonLeft;
@property(retain) TPButton * sideButtonRight;
@property int type;
@property <TPSlidingButtonDelegateProtocol> * delegate;


- (void)setEndButton:(id)arg1;
- (id)endButton;
- (id)initWithSlidingButtonType:(int)arg1;
- (id)sideButtonRight;
- (id)sideButtonLeft;
- (void)setSideButtonRight:(id)arg1;
- (void)setSideButtonLeft:(id)arg1;
- (void)setAcceptButton:(id)arg1;
- (id)acceptButton;
- (void)setType:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutSubviews;
- (int)type;

@end
