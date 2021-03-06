/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString, SFUCryptoKey;

@interface SFUFileDataRepresentation : SFUDataRepresentation  {
    NSString *mPath;
    int mSharedFd;
    long long mFileLength;
    unsigned long mFileType;
    BOOL mHasFileAttributes;
    long long mPlaintextDataLength;
    SFUCryptoKey *mCryptoKey;
    BOOL mDeleteFileWhenDone;
}


- (id)path;
- (id)description;
- (void)dealloc;
- (unsigned long)fileType;
- (void)setFileType:(unsigned long)arg1;
- (id)initWithPath:(id)arg1;
- (void)deleteFileWhenDone;
- (id)initWithCopyOfData:(id)arg1 path:(id)arg2;
- (id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2;
- (void)readFileAttributes;
- (id)initWithPath:(id)arg1 cryptoKey:(id)arg2 dataLength:(long long)arg3;
- (BOOL)isCryptoKeyIdenticalToKey:(id)arg1;
- (id)initWithCopyOfData:(id)arg1 path:(id)arg2 cryptoKey:(id)arg3;
- (id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2 cryptoKey:(id)arg3 dataLength:(long long)arg4;
- (BOOL)isEncrypted;
- (long long)encodedLength;
- (BOOL)hasSameLocationAs:(id)arg1;
- (BOOL)isReadable;
- (id)inputStream;
- (long long)dataLength;

@end
