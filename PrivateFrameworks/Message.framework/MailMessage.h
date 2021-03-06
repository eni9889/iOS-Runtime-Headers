/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFMessageInfo;

@interface MailMessage : Message  {
    unsigned long long _messageFlags;
    unsigned char _subjectPrefixLength;
    unsigned long long _modSequenceNumber;
    MFMessageInfo *_info;
}

@property unsigned long long modSequenceNumber;

+ (unsigned int)displayablePriorityForPriority:(int)arg1;
+ (Class)dataMessageStoreToUse;
+ (id)forwardedMessagePrefixWithSpacer:(BOOL)arg1;
+ (unsigned int)validatePriority:(int)arg1;
+ (id)replyPrefixWithSpacer:(BOOL)arg1;

- (id)URL;
- (void)dealloc;
- (id)subject;
- (void)setSubject:(id)arg1;
- (int)priority;
- (void)setSummary:(id)arg1;
- (BOOL)shouldSetSummary;
- (id)loadMeetingMetadata;
- (id)loadMeetingExternalID;
- (id)subjectNotIncludingReAndFwdPrefix;
- (void)setModSequenceNumber:(unsigned long long)arg1;
- (id)mailMessageStore;
- (id)subjectAndPrefixLength:(unsigned int*)arg1;
- (void)setPriorityFromHeaders:(id)arg1;
- (void)loadCachedHeaderValuesFromHeaders:(id)arg1;
- (id)loadMeetingData;
- (void)setSubject:(id)arg1 to:(id)arg2 cc:(id)arg3 bcc:(id)arg4 sender:(id)arg5 dateReceived:(double)arg6 dateSent:(double)arg7 messageIDHash:(long long)arg8 conversationIDHash:(long long)arg9 summary:(id)arg10 withOptions:(unsigned int)arg11;
- (unsigned long long)modSequenceNumber;
- (id)remoteMailboxURL;
- (id)externalConversationID;
- (void)markAsForwarded;
- (void)markAsReplied;
- (void)markAsNotFlagged;
- (void)markAsFlagged;
- (void)markAsNotViewed;
- (void)markAsViewed;
- (void)setMutableInfoFromMessage:(id)arg1;
- (id)originalMailboxURL;
- (id)refreshedMessage;
- (id)copyMessageInfo;
- (id)mailbox;
- (void)setMessageFlagsWithoutCommitting:(unsigned long long)arg1;
- (id)messageStore;
- (unsigned short)numberOfAttachments;
- (void)setMessageFlags:(unsigned long long)arg1;
- (unsigned long long)messageFlags;
- (id)account;

@end
