/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSArray;

@interface PLMailActivity : UIMailActivity  {
    NSArray *_assetsToShare;
}

@property(retain) NSArray * assetsToShare;


- (id)mailComposeViewController;
- (BOOL)_canPerformWithSuppliedActivityItems:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (id)activityViewController;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)_beforeActivity;
- (BOOL)_canSendEmail;
- (id)assetsToShare;
- (void)setAssetsToShare:(id)arg1;

@end
