/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSMutableDictionary;

@interface MPCloudAssetDownloadController : NSObject  {
    NSMutableDictionary *_downloadSessionsForMediaItemIDs;
    unsigned long long _prioritizedMediaItemID;
}

+ (id)sharedAssetDownloadController;

- (void)_downloadFileSizeAvailableNotification:(id)arg1;
- (void)_downloadFailedNotification:(id)arg1;
- (void)_downloadSucceededNotification:(id)arg1;
- (id)_downloadKeyCookieWithValue:(id)arg1 URL:(id)arg2;
- (BOOL)mediaItemHasDownloadSession:(id)arg1;
- (id)_newAVAssetForPurchaseResponseDictionary:(id)arg1 mediaItem:(id)arg2 preferredAssetFlavor:(id)arg3;
- (id)_urlConnectionRequestForMediaItem:(id)arg1;
- (id)_newAssetForExistingDownloadSession:(id)arg1;
- (id)_newAVAssetForMediaItem:(id)arg1;
- (BOOL)_canPlayCachedAssetAtPath:(id)arg1;
- (id)_cachedAssetDestinationDirectory;
- (void)_removeNotificationObserversForDownloadSession:(id)arg1;
- (void)_resumedPausedDownloadSessionsForCompletedMediaItemID:(unsigned long long)arg1;
- (void)_cancelDownloadSession:(id)arg1;
- (id)assetForMediaItem:(id)arg1;
- (void)prioritizeDownloadSessionForMediaItem:(id)arg1;
- (void)dealloc;
- (id)init;

@end
