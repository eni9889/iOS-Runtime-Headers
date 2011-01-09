/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMetadataItemInternal;



@interface AVMetadataItem : NSObject <NSCopying, NSMutableCopying>
{
    AVMetadataItemInternal *_priv;
}

@property(readonly) NSString *stringValue;
@property(readonly) NSNumber *numberValue;
@property(readonly) NSDate *dateValue;
@property(readonly) NSData *dataValue;
@property(copy,readonly) <NSObject><NSCopying> *key;
@property(copy,readonly) NSString *commonKey;
@property(copy,readonly) NSString *keySpace;
@property(copy,readonly) NSLocale *locale;
@property(readonly) ? time;
@property(copy,readonly) <NSObject><NSCopying> *value;
@property(copy,readonly) NSDictionary *extraAttributes;

+ (id)metadataItemsFromArray:(id)arg1 withLocale:(id)arg2;
+ (id)metadataItemsFromArray:(id)arg1 withKey:(id)arg2 keySpace:(id)arg3;
+ (id)_figMetadataPropertyFromMetadataItems:(id)arg1;

- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)key;
- (id)locale;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)value;
- (void)finalize;
- (id)stringValue;
- (struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })time;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)dataValue;
- (id)_initWithFigMetadataDictionary:(id)arg1;
- (void)_makeValueReady;
- (void)_makePropertiesReady;
- (void)_updateCommonKey;
- (void)_extractPropertiesFromDictionary:(id)arg1;
- (id)_keyAsString;
- (id)dateValue;
- (id)_initWithReader:(struct OpaqueFigMetadataReader { }*)arg1 itemIndex:(long)arg2;
- (id)_figMetadataDictionary;
- (id)_figMetadataFormat;
- (id)commonKey;
- (id)keySpace;
- (id)extraAttributes;
- (id)numberValue;

@end