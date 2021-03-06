/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDeviceRGBColor : UIColor  {
    float redComponent;
    float greenComponent;
    float blueComponent;
    float alphaComponent;
    struct CGColor { } *cachedColor;
}


- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)getHue:(float*)arg1 saturation:(float*)arg2 brightness:(float*)arg3 alpha:(float*)arg4;
- (id)initWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4;
- (struct CGColor { }*)_createCGColorWithAlpha:(float)arg1;
- (BOOL)_getWhite:(float*)arg1 alpha:(float*)arg2;
- (float)alphaComponent;
- (void)setStroke;
- (id)colorSpaceName;
- (id)colorWithAlphaComponent:(float)arg1;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)setFill;
- (BOOL)getRed:(float*)arg1 green:(float*)arg2 blue:(float*)arg3 alpha:(float*)arg4;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (void)set;
- (struct CGColor { }*)CGColor;

@end
