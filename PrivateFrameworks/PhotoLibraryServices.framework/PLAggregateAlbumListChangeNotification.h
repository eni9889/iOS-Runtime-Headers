/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLAlbumListChangeNotification, PLAggregateAlbumList;

@interface PLAggregateAlbumListChangeNotification : PLAlbumListChangeNotification  {
    PLAggregateAlbumList *_albumList;
    PLAlbumListChangeNotification *_note;
    unsigned int _indexOffet;
}

+ (id)notificationForAggregateAlbumList:(id)arg1 fromAlbumListChangeNotification:(id)arg2 indexOffset:(unsigned int)arg3;

- (id)deletedObjects;
- (id)insertedObjects;
- (void)dealloc;
- (id)object;
- (id)initWithAggregateAlbumList:(id)arg1 fromAlbumListChangeNotification:(id)arg2 indexOffset:(unsigned int)arg3;
- (id)changedObjects;
- (BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2;
- (id)changedIndexes;
- (void)enumerateMovesWithBlock:(id)arg1;
- (id)insertedIndexes;
- (id)deletedIndexes;
- (BOOL)shouldReload;
- (struct NSObject { Class x1; }*)albumList;

@end
