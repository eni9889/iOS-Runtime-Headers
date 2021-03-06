/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUArchitecture : NSObject <NSCoding, NSCopying> {
    int _cpuType;
    int _cpuSubtype;
}

+ (void)initialize;
+ (id)architectureWithCpuType:(int)arg1 cpuSubtype:(int)arg2;
+ (id)armArchitecture;
+ (id)x86_64Architecture;
+ (id)x86_32Architecture;
+ (id)i386Architecture;
+ (id)ppc64Architecture;
+ (id)ppc32Architecture;
+ (id)ppcArchitecture;
+ (id)anyArchitecture;
+ (id)currentArchitecture;

- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })objcpageAddressRange;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })commpageAddressRange;
- (BOOL)matchesArchitecture:(id)arg1;
- (BOOL)isBigEndian;
- (BOOL)is32Bit;
- (BOOL)isEqualToArchitecture:(id)arg1;
- (int)cpuSubtype;
- (int)cpuType;
- (BOOL)is64Bit;
- (BOOL)isLittleEndian;
- (id)initWithCpuType:(int)arg1 cpuSubtype:(int)arg2;

@end
