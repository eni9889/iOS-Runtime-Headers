/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSManagedObjectModel, NSMutableArray;

@interface NSPersistentStoreCoordinator : NSObject <NSLocking> {
    struct _persistentStoreCoordinatorFlags { 
        unsigned int _isRegistered : 1; 
        unsigned int _reservedFlags : 31; 
    } _flags;
    void *_reserved;
    NSMutableArray *_extendedStoreURLs;
    id _externalRecordsHelper;
    NSManagedObjectModel *_managedObjectModel;
    id _coreLock;
    NSMutableArray *_persistentStores;
}

+ (BOOL)_melissaIsDebugging;
+ (BOOL)setMetadata:(id)arg1 forPersistentStoreOfType:(id)arg2 URL:(id)arg3 error:(id*)arg4;
+ (void)registerStoreClass:(Class)arg1 forStoreType:(id)arg2;
+ (void)_registerCoreDataStoreClass:(Class)arg1 forStoreType:(id)arg2;
+ (id)_storeTypeForStore:(id)arg1;
+ (id)metadataForPersistentStoreOfType:(id)arg1 URL:(id)arg2 error:(id*)arg3;
+ (Class)_classForPersistentStoreAtURL:(id)arg1;
+ (Class)_storeClassForStoreType:(id)arg1;
+ (void)_registerDefaultStoreClassesAndTypes;
+ (id)registeredStoreTypes;
+ (void)__Multithreading_Violation_AllThatIsLeftToUsIsHonor__;
+ (BOOL)accessInstanceVariablesDirectly;
+ (void)initialize;

- (BOOL)removePersistentStore:(id)arg1 error:(id*)arg2;
- (id)addPersistentStoreWithType:(id)arg1 configuration:(id)arg2 URL:(id)arg3 options:(id)arg4 error:(id*)arg5;
- (id)managedObjectModel;
- (id)persistentStoreCoordinator;
- (id)persistentStores;
- (id)initWithManagedObjectModel:(id)arg1;
- (void)dealloc;
- (BOOL)_destroyPersistentStoreAtURL:(id)arg1 withType:(id)arg2 error:(id*)arg3;
- (BOOL)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 storeType:(id)arg5 error:(id*)arg6;
- (BOOL)_destroyPersistentStoreAtURL:(id)arg1 withType:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (void)_setIsRegisteredWithUbiquity:(BOOL)arg1;
- (void)_assignObject:(id)arg1 toPersistentStore:(id)arg2;
- (id)_fetchAllInstancesFromStore:(id)arg1 intoContext:(id)arg2 underlyingException:(id*)arg3;
- (void)_assignObject:(id)arg1 toPersistentStore:(id)arg2 forConfiguration:(id)arg3;
- (id)_conflictsWithRowCacheForObject:(id)arg1 withContext:(id)arg2 andStore:(id)arg3;
- (id)_newConflictRecordForObject:(id)arg1 andOriginalRow:(id)arg2 withContext:(id)arg3;
- (id)_newObjectGraphStyleRecordForRow:(id)arg1 andObject:(id)arg2 withContext:(id)arg3;
- (void)_assignObjects:(id)arg1 toStore:(id)arg2;
- (BOOL)_canSaveGraphRootedAtObject:(id)arg1 intoStore:(id)arg2 withPreviouslyChecked:(struct __CFSet { }*)arg3 withAcceptableEntities:(struct __CFSet { }*)arg4;
- (void)_informAffectedStoresOfInterestByChildContextInObjectsWithObjectIDs:(id)arg1 withSelector:(SEL)arg2;
- (id)migratePersistentStore:(id)arg1 toURL:(id)arg2 options:(id)arg3 withType:(id)arg4 error:(id*)arg5;
- (id)URLForPersistentStore:(id)arg1;
- (id)metadataForPersistentStore:(id)arg1;
- (void)setMetadata:(id)arg1 forPersistentStore:(id)arg2;
- (id)_saveRequestForStore:(id)arg1 withContext:(id)arg2 originalRequest:(id)arg3 andOptimisticLocking:(id)arg4;
- (void)_doPreSaveAssignmentsForObjects:(id)arg1;
- (id)_checkRequestForStore:(id)arg1 withContext:(id)arg2 originalRequest:(id)arg3 andOptimisticLocking:(id)arg4;
- (id)_retainedAllMigratedObjectsInStore:(id)arg1 toStore:(id)arg2;
- (BOOL)_removePersistentStore:(id)arg1;
- (void)_postStoresChangedNotificationsForStores:(id)arg1 changeKey:(id)arg2 options:(id)arg3;
- (void)_addPersistentStore:(id)arg1 identifier:(id)arg2;
- (BOOL)_checkForSkewedEntityHashes:(id)arg1 metadata:(id)arg2;
- (id)_realStoreTypeForStoreWithType:(id)arg1 URL:(id)arg2 error:(id*)arg3;
- (BOOL)_checkForPostLionWriter:(id)arg1;
- (BOOL)_isRegisteredWithUbiquity;
- (void)_copyMetadataFromStore:(id)arg1 toStore:(id)arg2 migrationManager:(id)arg3;
- (id)managedObjectIDForURIRepresentation:(id)arg1;
- (id)_persistentStoreForIdentifier:(id)arg1;
- (id*)knownKeyValuesForObjectID:(id)arg1 withContext:(id)arg2;
- (id)managedObjectIDFromUTF8String:(const char *)arg1 length:(unsigned int)arg2;
- (BOOL)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (BOOL)tryLock;
- (id)persistentStoreForIdentifier:(id)arg1;
- (BOOL)setURL:(id)arg1 forPersistentStore:(id)arg2;
- (id)persistentStoreForURL:(id)arg1;
- (void)finalize;
- (void)unlock;
- (void)lock;

@end
