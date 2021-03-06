/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class <AVCaptureAudioDataOutputSampleBufferDelegate>, NSObject<OS_dispatch_queue>, AVCaptureAudioDataOutputInternal;

@interface AVCaptureAudioDataOutput : AVCaptureOutput  {
    AVCaptureAudioDataOutputInternal *_internal;
}

@property(readonly) <AVCaptureAudioDataOutputSampleBufferDelegate> * sampleBufferDelegate;
@property(readonly) NSObject<OS_dispatch_queue> * sampleBufferCallbackQueue;

+ (void)initialize;

- (void)setSession:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_AVCaptureAudioDataOutput_AudioDataBecameReady;
- (void)didStartForSession:(id)arg1;
- (void)didStopForSession:(id)arg1 error:(id)arg2;
- (void)handleEnabledChangedForConnection:(id)arg1;
- (id)connectionMediaTypes;
- (void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2;
- (id)sampleBufferCallbackQueue;
- (id)sampleBufferDelegate;
- (void)_applyOverridesToCaptureOptions:(id)arg1;
- (BOOL)isTheOnlyDataOutput;

@end
