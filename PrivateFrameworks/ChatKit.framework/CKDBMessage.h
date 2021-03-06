/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSArray, NSString, NSDate, NSAttributedString;

@interface CKDBMessage : NSObject  {
    NSString *_text;
    NSString *_subject;
    NSString *_address;
    NSString *_groupID;
    NSString *_guid;
    NSString *_madridRoomname;
    NSString *_madridService;
    NSString *_madridAccount;
    NSString *_madridAccountGUID;
    NSString *_madridChatGUID;
    NSString *_madridChatIdentifier;
    BOOL _isMadrid;
    BOOL _hasBeenRead;
    BOOL _isOutgoing;
    BOOL _isVisibleByDefault;
    int _madridType;
    int _identifier;
    NSDate *_date;
    NSArray *_recipients;
    NSArray *_messageParts;
    NSString *_plainBody;
    NSAttributedString *_madridAttributedBody;
    NSString *_voicemailString;
    NSString *_madridAccountLogin;
}

@property(readonly) NSString * madridChatGUID;
@property(readonly) BOOL isVisibleByDefault;
@property int identifier;
@property(readonly) BOOL isMessageFullyLoaded;
@property(readonly) NSArray * recipients;
@property(readonly) BOOL hasAttachments;
@property(readonly) NSArray * messageParts;
@property(readonly) NSString * attachmentText;
@property(readonly) NSString * plainBody;
@property(readonly) NSString * groupID;
@property(readonly) NSString * text;
@property(readonly) NSString * subject;
@property(readonly) NSString * address;
@property(readonly) NSString * formattedAddress;
@property(readonly) NSString * guid;
@property(readonly) NSString * madridRoomname;
@property(readonly) NSString * madridService;
@property(readonly) NSString * madridAccountLogin;
@property(readonly) NSString * madridAccountGUID;
@property(readonly) NSString * madridChatIdentifier;
@property(readonly) BOOL isMadrid;
@property(readonly) BOOL hasBeenRead;
@property(readonly) BOOL isOutgoing;
@property(readonly) int madridType;
@property(readonly) NSDate * date;
@property(readonly) NSAttributedString * madridAttributedBody;


- (id)groupID;
- (id)address;
- (id)messageParts;
- (id)guid;
- (int)identifier;
- (id)description;
- (void)dealloc;
- (id)subject;
- (void)setIdentifier:(int)arg1;
- (id)text;
- (id)date;
- (id)madridChatIdentifier;
- (BOOL)isVisibleByDefault;
- (id)madridChatGUID;
- (id)madridAttributedBody;
- (int)madridType;
- (BOOL)hasBeenRead;
- (id)madridAccountGUID;
- (id)madridAccountLogin;
- (id)madridService;
- (id)madridRoomname;
- (id)alertImageData;
- (BOOL)isMessageFullyLoaded;
- (id)formattedAddress;
- (id)attachmentText;
- (id)initWithMadridMessageGUID:(id)arg1;
- (id)voicemailString;
- (struct { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; int x2; long long x3; }*)_copyMadridAttachmentRecordForGUID:(id)arg1;
- (BOOL)_hasAttachments;
- (BOOL)isMadrid;
- (void)_loadMessageParts;
- (id)initWithRecordID:(int)arg1;
- (id)attachmentText:(BOOL)arg1;
- (id)plainBody;
- (BOOL)senderIsVoicemail;
- (id)previewText;
- (BOOL)isOutgoing;
- (id)recipients;
- (BOOL)hasAttachments;

@end
