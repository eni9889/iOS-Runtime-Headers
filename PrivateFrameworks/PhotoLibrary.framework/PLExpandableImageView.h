/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLManagedAsset, UIImageView, NSString, PLVideoView, PLImageView;

@interface PLExpandableImageView : PLExpandableView <PLStackableImage> {
    PLImageView *_imageView;
    int _imageID;
    struct CGSize { 
        float width; 
        float height; 
    } _originalSize;
    float _originalWidth;
    float _originalAngle;
    struct CGPoint { 
        float x; 
        float y; 
    } _anchorPoint;
    float _imageRotationAngle;
    float _pinchWidth;
    float _pinchAngle;
    float _pinchScale;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _initialExpandingFrame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _originalBounds;
    float _currentAngle;
    struct CGSize { 
        float width; 
        float height; 
    } _centerOffset;
    PLManagedAsset *_photo;
    struct { 
        unsigned int isRotating : 1; 
        unsigned int didTrack : 1; 
        unsigned int updateFrame : 1; 
        unsigned int didLayout : 1; 
        unsigned int alwaysDoLayout : 1; 
        unsigned int didComputeCenterOffset : 1; 
        unsigned int imageIsFullScreen : 1; 
    } _exImageFlags;
}

@property(copy) NSString * name;
@property(readonly) struct CGSize { float x1; float x2; } imageSize;
@property(retain) PLVideoView * videoView;
@property(readonly) BOOL showsPlaceholder;
@property(getter=isBorderAndAccessoriesVisible) BOOL borderAndAccessoriesVisible;
@property(retain) PLManagedAsset * photo;
@property(readonly) UIImageView * imageView;
@property(getter=isShadowEnabled) BOOL shadowEnabled;
@property float transitionProgress;
@property(readonly) BOOL isBeingManipulated;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } frameOfImage;

+ (float)imageBorderWidth;

- (void)setVideoView:(id)arg1;
- (id)videoView;
- (void)setName:(id)arg1;
- (id)name;
- (void)dealloc;
- (id)imageView;
- (struct CGSize { float x1; float x2; })imageSize;
- (id)image;
- (id)_contentView;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setCenter:(struct CGPoint { float x1; float x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPhoto:(id)arg1;
- (float)imageRotationAngle;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfImage;
- (BOOL)isBeingManipulated;
- (void)renderSnapshotInContext:(struct CGContext { }*)arg1;
- (void)setTextBadgeString:(id)arg1;
- (float)transitionProgress;
- (void)setTransitionProgress:(float)arg1;
- (BOOL)isShadowEnabled;
- (void)setShadowEnabled:(BOOL)arg1;
- (void)setShowsPlaceholder:(BOOL)arg1 withOpaqueState:(BOOL)arg2;
- (BOOL)showsPlaceholder;
- (void)setPosterImage:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)setImage:(id)arg1 isFullscreen:(BOOL)arg2;
- (BOOL)isBorderAndAccessoriesVisible;
- (void)setTransformAndCenterForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_bounceBack:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_bounceToPlace:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_snappedExpandedFrame;
- (float)_expandedScale;
- (float)_currentScale;
- (struct CGSize { float x1; float x2; })_newSizeFromSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1 angle:(float)arg2;
- (void)_updateBorderAndAccessoriesAlpha;
- (void)_updatePinchWidthAndScaleWithLeftPoint:(struct CGPoint { float x1; float x2; })arg1 rightPoint:(struct CGPoint { float x1; float x2; })arg2;
- (float)_borderAlphaForExpansionFraction:(float)arg1;
- (void)_setOriginalSize:(struct CGSize { float x1; float x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 frameStyle:(int)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 frameStyle:(int)arg2 withBorder:(BOOL)arg3;
- (void)setBorderAndAccessoriesVisible:(BOOL)arg1;
- (float)_expansionFraction;
- (void)finishTransition;
- (float)completeTrackingPinch:(id)arg1 toState:(int)arg2 duration:(double)arg3;
- (float)continueTrackingPinch:(id)arg1;
- (void)beginTrackingPinch:(id)arg1;
- (void)stateDidChangeFrom:(int)arg1;
- (id)photo;

@end
