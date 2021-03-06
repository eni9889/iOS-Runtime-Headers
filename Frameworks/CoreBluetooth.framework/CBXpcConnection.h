/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class NSObject<OS_dispatch_semaphore>, NSObject<OS_dispatch_queue>, <CBXpcConnectionDelegate>, NSObject<OS_xpc_object>;

@interface CBXpcConnection : NSObject  {
    <CBXpcConnectionDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    int _type;
    NSObject<OS_dispatch_semaphore> *_xpcSendBarrier;
    NSObject<OS_xpc_object> *_xpcConnection;
}

@property <CBXpcConnectionDelegate> * delegate;


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)disconnect;
- (void)checkIn:(BOOL)arg1;
- (id)nsObjectWithXpcObject:(id)arg1;
- (id)nsArrayWithXpcArray:(id)arg1;
- (id)createXpcObjectWithNSObject:(id)arg1;
- (id)createXpcArrayWithNSArray:(id)arg1;
- (void)handleReset;
- (void)handleMsg:(int)arg1 arguments:(id)arg2;
- (id)nsDictionaryFromXpcDictionary:(id)arg1;
- (id)createXpcDictionaryWithNSDictionary:(id)arg1;
- (void)checkOut;
- (void)handleConnectionEvent:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 sessionType:(int)arg3;
- (void)sendMsg:(int)arg1 args:(id)arg2;

@end
