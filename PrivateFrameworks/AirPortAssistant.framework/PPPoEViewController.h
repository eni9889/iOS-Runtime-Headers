/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class UILabel, UIActivityIndicatorView, UIView, PPPoEConnectionUIViewController;

@interface PPPoEViewController : AssistantSubUIViewController <TableViewManagerDelegate, UINavigationControllerDelegate> {
    UIView *containerView;
    UIView *justTextContainerView;
    UILabel *justTextLabel;
    UIView *spinnerWithStatusAdjacentView;
    UIActivityIndicatorView *spinnerWithStatusAdjacentSpinner;
    UILabel *spinnerWithStatusAdjacentLabel;
    PPPoEConnectionUIViewController *pppoeConnectionUIViewController;
    id previousNavDelegate;
}

@property(retain) PPPoEConnectionUIViewController * pppoeConnectionUIViewController;


- (void)dealloc;
- (id)pppoeConnectionUIViewController;
- (void)setPppoeConnectionUIViewController:(id)arg1;
- (void)setupInitialTableHeaderConfiguration;
- (id)valueForItemOfType:(id)arg1 atTypeIndex:(unsigned int)arg2 inCellWithTag:(int)arg3;
- (BOOL)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned int)arg3 toString:(id)arg4;
- (void)touchInCellAtIndexPath:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)viewWillAppear:(BOOL)arg1;

@end
