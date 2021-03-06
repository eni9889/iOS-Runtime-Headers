/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class FTMessageQueue, NSArray, NSString, FTMessage, NSNumber, IMTimer;

@interface FTMessageDelivery : NSObject <FTMessageQueueDelegate> {
    unsigned int _retries;
    NSNumber *_protocolVersion;
    FTMessageQueue *_queue;
    NSString *_userAgent;
    unsigned int _maxConcurrentMessages;
    BOOL _retryInAirplaneMode;
    IMTimer *_timer;
}

@property(copy) NSString * userAgent;
@property(copy) NSNumber * protocolVersion;
@property(readonly) BOOL hasQueuedItems;
@property(readonly) BOOL busy;
@property BOOL retryInAirplaneMode;
@property(readonly) FTMessage * currentMessage;
@property(readonly) NSArray * queuedMessages;
@property(readonly) NSArray * allMessages;
@property(readonly) int maxMessageSize;
@property unsigned int maxConcurrentMessages;

+ (Class)HTTPMessageDeliveryClass;
+ (Class)APNSMessageDeliveryClass;
+ (id)_errorForTDMessageDeliveryStatus:(int)arg1 userInfo:(id)arg2;
+ (id)alloc;

- (void)cancelMessage:(id)arg1;
- (id)queuedMessages;
- (id)currentMessage;
- (void)setRetryInAirplaneMode:(BOOL)arg1;
- (BOOL)retryInAirplaneMode;
- (void)setMaxConcurrentMessages:(unsigned int)arg1;
- (unsigned int)maxConcurrentMessages;
- (void)_signMessage:(id)arg1 useDataSignatures:(BOOL)arg2 body:(id)arg3 queryString:(id)arg4 intoDictionary:(id)arg5;
- (int)maxMessageSize;
- (void)_setRetryTimer:(double)arg1;
- (BOOL)hasQueuedItems;
- (BOOL)busy;
- (id)allMessages;
- (void)_informDelegateAboutMessage:(id)arg1 error:(id)arg2 result:(id)arg3 resultCode:(int)arg4;
- (void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2;
- (void)_retryTimerHit:(id)arg1;
- (BOOL)_sendMessageAsynchronously:(id)arg1 error:(id*)arg2;
- (void)_clearRetryTimer;
- (void)setProtocolVersion:(id)arg1;
- (id)userAgent;
- (id)protocolVersion;
- (void)invalidate;
- (void)dealloc;
- (id)init;
- (BOOL)sendMessage:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (id)_queue;

@end
