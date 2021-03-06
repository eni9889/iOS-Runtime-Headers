/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString, NSArray;

@interface AVAudioSessionPortDescription : NSObject  {
    void *_impl;
}

@property(readonly) NSString * portType;
@property(readonly) NSString * portName;
@property(readonly) NSString * UID;
@property(readonly) NSArray * channels;

+ (id)privateCreatePortDescriptionsArrayWithCFArray:(struct __CFArray { }*)arg1;
+ (id)privateCreateWithCFDictionaryRef:(struct __CFDictionary { }*)arg1;

- (id)description;
- (void)dealloc;
- (id)init;
- (id)channels;
- (id)UID;
- (id)portName;
- (id)portType;
- (struct PortDescriptionImpl { id x1; id x2; id x3; id x4; }*)privateGetImplementation;

@end
