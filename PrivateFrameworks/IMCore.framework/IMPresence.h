/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSMutableSet, NSString, IMHandle, NSMutableArray;



@interface IMPresence : IMDirectlyObservableObject <IMDirectlyObservableObjectObserver>
{
    NSMutableArray *_imHandles;
    NSMutableSet *_imHandlesSet;
    NSString *_statusMessage;
    IMHandle *_mostAvailableIMHandle;
    unsigned int _quiet : 1;
    NSUInteger _previousStatus;
    NSUInteger _status;
}

+ (id)notifications;
+ (id)selectors;

- (NSUInteger)status;
- (BOOL)isQuiet;
- (NSInteger)numberOfIMHandles;
- (BOOL)containsIMHandle:(id)arg1;
- (void)setIsQuiet:(BOOL)arg1;
- (void)_observeIMHandle:(id)arg1;
- (void)_unobserveIMHandle:(id)arg1;
- (void)objectDidPostDirectNotification:(id)arg1;
- (void)_setMostAvailableIMHandle:(id)arg1;
- (BOOL)_fullRecache;
- (void)removeIMHandle:(id)arg1;
- (id)imHandleSet;
- (id)mostAvailableIMHandle;
- (id)groups;
- (NSUInteger)previousStatus;
- (id)previousStatusMessage;
- (void)postNotificationNamed:(id)arg1 forIMHandle:(id)arg2;
- (void)_imHandleSortOrderChanged:(id)arg1;
- (void)_imHandleCertsChanged:(id)arg1;
- (void)_imHandleMobileChanged:(id)arg1;
- (void)_imHandleExtraPropsChanged:(id)arg1;
- (void)_imHandleGroupsChanged:(id)arg1;
- (void)_imHandleInfoChanged:(id)arg1;
- (void)_imHandlePictureChanged:(id)arg1;
- (void)_imHandleCapabilitiesChanged:(id)arg1;
- (BOOL)addIMHandle:(id)arg1;
- (id)imHandles;
- (id)nameAndEmail;
- (BOOL)isMobile;
- (id)mobileDeviceName;
- (id)nameOfStatus;
- (double)timeSinceWentOffline;
- (double)timeSinceStatusChanged;
- (id)shortName;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)firstName;
- (id)lastName;
- (id)statusMessage;
- (id)fullName;
- (BOOL)canAddIMHandle:(id)arg1;
- (void)_imHandleStatusChanged:(id)arg1;

@end