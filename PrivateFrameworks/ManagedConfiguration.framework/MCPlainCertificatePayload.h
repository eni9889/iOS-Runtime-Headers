/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString, NSData;

@interface MCPlainCertificatePayload : MCCertificatePayload  {
    NSString *_certificateFileName;
    NSData *_certificateData;
    NSString *_password;
    int _dataEncoding;
}

@property(readonly) NSString * certificateFileName;
@property(readonly) NSData * certificateData;
@property(readonly) int dataEncoding;
@property(readonly) NSString * password;

+ (id)localizedDescriptionForPayloadCount:(unsigned int)arg1;
+ (id)typeStrings;

- (id)description;
- (void).cxx_destruct;
- (id)certificateData;
- (int)dataEncoding;
- (id)certificateFileName;
- (BOOL)isSigned;
- (BOOL)isIdentity;
- (struct __SecCertificate { }*)copyCertificate;
- (id)persistentResourceID;
- (id)installationWarnings;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)password;

@end
