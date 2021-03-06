/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIActivityIndicatorView, NSString, UILabel;

@interface GKProgressLabel : UIView  {
    UILabel *_label;
    UIActivityIndicatorView *_activityIndicator;
    BOOL _loading;
    NSString *_text;
}

@property(copy) NSString * text;
@property(readonly) UILabel * label;


- (void)setLoading:(BOOL)arg1;
- (void)dealloc;
- (id)label;
- (id)text;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
