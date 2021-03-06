/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIColor;

@interface CIWhitePointAdjust : CIFilter  {
    CIImage *inputImage;
    CIColor *inputColor;
}

@property(retain) CIImage * inputImage;
@property(copy) CIColor * inputColor;

+ (id)customAttributes;

- (id)inputColor;
- (void)setInputColor:(id)arg1;
- (id)_kernel;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (BOOL)_isIdentity;
- (id)outputImage;
- (void)setDefaults;

@end
