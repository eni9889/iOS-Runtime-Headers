/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIImage, NSString, NSObject<OS_dispatch_queue>;

@interface SUMessagePart : NSObject  {
    NSString *_contentEncoding;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property(readonly) UIImage * composeImage;
@property(readonly) NSString * composeText;
@property(copy) NSString * contentEncoding;
@property(readonly) NSString * MIMEType;


- (void)setContentEncoding:(id)arg1;
- (id)copyBodyInputSource;
- (id)contentEncoding;
- (id)newUnfilteredInputSource;
- (id)copyPreparationOperations;
- (BOOL)conformsToUTI:(id)arg1;
- (id)composeImage;
- (id)composeText;
- (void)dealloc;
- (id)init;
- (id)MIMEType;

@end
