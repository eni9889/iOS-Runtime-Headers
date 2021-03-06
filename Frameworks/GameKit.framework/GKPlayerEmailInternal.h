/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString;

@interface GKPlayerEmailInternal : GKInternalRepresentation  {
    NSString *_address;
    NSString *_addressSHA1;
    NSString *_addressPrefix;
    BOOL _primary;
    BOOL _verified;
}

@property(retain) NSString * address;
@property(getter=isPrimary) BOOL primary;
@property(getter=isVerified) BOOL verified;
@property(retain) NSString * addressSHA1;
@property(retain) NSString * addressPrefix;

+ (id)codedPropertyKeys;

- (void)setVerified:(BOOL)arg1;
- (BOOL)isVerified;
- (void)setPrimary:(BOOL)arg1;
- (BOOL)isPrimary;
- (void)setAddressPrefix:(id)arg1;
- (id)addressPrefix;
- (void)setAddressSHA1:(id)arg1;
- (void)setAddress:(id)arg1;
- (id)addressSHA1;
- (id)address;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end
