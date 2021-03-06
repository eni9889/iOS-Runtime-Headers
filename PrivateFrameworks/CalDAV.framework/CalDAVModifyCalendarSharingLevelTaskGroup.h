/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSURL;

@interface CalDAVModifyCalendarSharingLevelTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate> {
    int _action;
    NSURL *_url;
    int _state;
}

@property int action;
@property(retain) NSURL * url;
@property int state;


- (void)finishWithError:(id)arg1;
- (int)action;
- (int)state;
- (id)description;
- (void)dealloc;
- (void)setUrl:(id)arg1;
- (id)url;
- (void)setAction:(int)arg1;
- (void)setState:(int)arg1;
- (id)initWithSharingAction:(int)arg1 atCalendarURL:(id)arg2 accountInfoProvider:(id)arg3 taskManager:(id)arg4;
- (void)startTaskGroup;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;

@end
