/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GKSimpleTimer, NSString, NSMutableData, NSObject<OS_dispatch_queue>, GKAsyncSocket, NSMutableArray;

@interface GKDiscoveryPeerConnection : NSObject <GKSimpleTimerDelegate> {
    NSString *_remoteServiceName;
    NSString *_localServiceName;
    id _peer;
    BOOL _connected;
    GKAsyncSocket *_connectionSocket;
    NSMutableData *_dataReceived;
    unsigned int _currentSequenceNumber;
    NSMutableData *_dataToSendHoldingQueue;
    NSMutableArray *_receivedDataHoldingQueue;
    NSMutableArray *_messageReceiptHandlerList;
    NSMutableArray *_messageReceiptHandlerHoldingQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _receiveDataHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _connectedHandler;

    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_queue> *_targetQueue;
    GKSimpleTimer *_heartbeatTimer;
    GKSimpleTimer *_heartbeatTimeoutTimer;
    GKSimpleTimer *_timeoutTimer;
    double _connectionTimeoutInSeconds;
    double _heartbeatIntervalInSeconds;
}

@property(copy) NSString * remoteServiceName;
@property(copy) id receiveDataHandler;
@property(copy) id connectedHandler;
@property NSObject<OS_dispatch_queue> * syncQueue;
@property NSObject<OS_dispatch_queue> * targetQueue;
@property(copy) NSString * localServiceName;

+ (void)checkConstants;
+ (unsigned int)sendDataLimit;
+ (unsigned int)receiveDataLimit;

- (void)setReceiveDataHandler:(id)arg1;
- (id)syncQueue;
- (void)invalidate;
- (void)dealloc;
- (void)syncProcessMessage:(int)arg1 data:(id)arg2 sequenceNumber:(unsigned int)arg3;
- (void)syncAcceptedConnection;
- (void)syncSendAccept;
- (BOOL)shouldDecideAboutConnection;
- (void)syncSendMessageReceipt:(int)arg1 sequenceNumber:(unsigned int)arg2;
- (void)setRemoteServiceName:(id)arg1;
- (void)syncSendMessage:(int)arg1 data:(id)arg2 withCompletionHandler:(id)arg3;
- (void)syncCloseConnectionNow;
- (id)remoteServiceName;
- (BOOL)syncSetupNewSocket;
- (void)syncConnected:(id)arg1;
- (void)syncReceivedData:(id)arg1 error:(id)arg2;
- (void)syncSendHello;
- (void)setLocalServiceName:(id)arg1;
- (void)setSyncQueue:(id)arg1;
- (id)connectedHandler;
- (id)targetQueue;
- (void)attachSocketDescriptor:(int)arg1;
- (void)connectToSockAddr:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1 port:(unsigned short)arg2;
- (id)initWithLocalServiceName:(id)arg1;
- (id)localServiceName;
- (id)receiveDataHandler;
- (void)timeout:(id)arg1;
- (void)setTargetQueue:(id)arg1;
- (void)setConnectedHandler:(id)arg1;
- (void)sendData:(id)arg1 withCompletionHandler:(id)arg2;

@end
