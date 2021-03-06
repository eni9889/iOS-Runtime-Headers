/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLCloudSharedAlbumInvitationRecord, UITableView, UIImage, PLCloudSharedAlbum, <PLSubscriberViewControllerDelegate>;

@interface PLSubscriberViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate, UIAlertViewDelegate> {
    PLCloudSharedAlbumInvitationRecord *_subscriberRecord;
    PLCloudSharedAlbum *_album;
    UITableView *_subscriberInfoTableView;
    UIImage *_subscriberImage;
    <PLSubscriberViewControllerDelegate> *_delegate;
    BOOL _streamOwner;
    int _resendInvitationSection;
    BOOL _showResendInviteOption;
}

@property BOOL showResendInviteOption;
@property(retain) UIImage * subscriberImage;
@property(readonly) PLCloudSharedAlbumInvitationRecord * subscriberRecord;
@property(readonly) PLCloudSharedAlbum * album;
@property <PLSubscriberViewControllerDelegate> * delegate;


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)viewDidUnload;
- (void)loadView;
- (void)viewDidLoad;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)album;
- (BOOL)showResendInviteOption;
- (void)setSubscriberImage:(id)arg1;
- (id)subscriberImage;
- (void)_removeSubscriber;
- (void)_resendInvitation;
- (id)_subscriberLastName;
- (id)_subscriberFirstName;
- (id)_subscriberEmail;
- (void)_displayRemoveSubscriberConfirmation:(id)arg1;
- (id)subscriberRecord;
- (void)_subscriberRemovalConpleted;
- (id)_tableViewCustomFooter;
- (id)_subscriberDescription;
- (void)setShowResendInviteOption:(BOOL)arg1;
- (id)initForOwnerOfSharedStream:(id)arg1;
- (id)initWithInvitationRecord:(id)arg1 forSharedStream:(id)arg2;

@end
