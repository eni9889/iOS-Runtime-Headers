/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class TPButton, UIImageView, UIView;

@interface TPBottomSingleButtonBar : TPBottomBar  {
    id _delegate;
    UIImageView *_backgroundView;
    UIView *_well;
    TPButton *_button;
    BOOL _allowsDroppingIcons;
}

+ (id)_backgroundImage;

- (void)dealloc;
- (id)initForVoiceControlWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initForEndVideoWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)buttonWidth;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (id)button;
- (void)setButton:(id)arg1 andStyle:(BOOL)arg2;
- (void)setWellAlpha:(float)arg1;
- (id)initForTTYWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initForIncomingCallWaitingWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setSuppressDrawingBackground:(BOOL)arg1;
- (id)initForEndCallWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
