/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@class _UILegibilityLabel, UILabel, UIColor, NSDate, <SBFLockScreenDateFormatter>, _UILegibilitySettings;

@interface SBFLockScreenDateView : UIView  {
    UILabel *_timeLabel;
    UILabel *_dateLabel;
    BOOL _useLegibilityLabels;
    _UILegibilityLabel *_legibilityTimeLabel;
    _UILegibilityLabel *_legibilityDateLabel;
    float _timeAlpha;
    float _dateAlpha;
    NSDate *_date;
    <SBFLockScreenDateFormatter> *_formatter;
    _UILegibilitySettings *_legibilitySettings;
    float _timeStrength;
    float _dateStrength;
    UIColor *_textColor;
    float _dateAlphaPercentage;
}

@property(getter=isDateHidden) BOOL dateHidden;
@property(retain) NSDate * date;
@property(retain) <SBFLockScreenDateFormatter> * formatter;
@property(retain) _UILegibilitySettings * legibilitySettings;
@property float timeStrength;
@property float dateStrength;
@property(retain) UIColor * textColor;
@property float dateAlphaPercentage;

+ (float)defaultHeight;

- (float)dateStrength;
- (float)timeStrength;
- (id)formatter;
- (float)dateBaselineOffsetFromOrigin;
- (void)setContentAlpha:(float)arg1 withDateVisible:(BOOL)arg2;
- (void)setDateHidden:(BOOL)arg1;
- (BOOL)isDateHidden;
- (void)setDateAlphaPercentage:(float)arg1;
- (void)setTimeStrength:(float)arg1;
- (void)setDateStrength:(float)arg1;
- (float)_dateBaselineOffsetFromTime;
- (void)_layoutDateLabel;
- (void)_layoutTimeLabel;
- (float)dateAlphaPercentage;
- (float)_effectiveDateAlpha;
- (void)_updateLabelAlpha;
- (id)_dateFont;
- (id)_timeFont;
- (void)_setDateAlpha:(float)arg1;
- (void)_updateLegibilityLabels;
- (void)_updateLabels;
- (void)_useLegibilityLabels:(BOOL)arg1;
- (void)_addLabels;
- (void)updateFormat;
- (float)timeBaselineOffsetFromOrigin;
- (void)setFormatter:(id)arg1;
- (id)legibilitySettings;
- (void)setLegibilitySettings:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)date;
- (void)dealloc;
- (void)setDate:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (void)layoutSubviews;

@end
