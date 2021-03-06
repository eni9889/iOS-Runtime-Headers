/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class VMUArchitecture, NSString, NSDate, NSMutableDictionary;

@interface VMUMemory_File : VMUMemory_Base <VMUMemory> {
    char *_mappedAddress;
    unsigned long _mappedSize;
    NSDate *_lastModifiedTimestamp;
    struct _VMURange { 
        unsigned long long location; 
        unsigned long long length; 
    } _addressRange;
    struct _VMURange { 
        unsigned long long location; 
        unsigned long long length; 
    } _fileRange;
    NSString *_path;
    VMUArchitecture *_architecture;
    NSMutableDictionary *_sharedCacheMap;
}

+ (id)memoryWithPath:(id)arg1 fileRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg2 mapToAddress:(unsigned long long)arg3 architecture:(id)arg4;
+ (id)headerFromSharedCacheWithPath:(id)arg1;
+ (id)memoryWithPath:(id)arg1;
+ (id)headerWithPath:(id)arg1;

- (id)path;
- (id)description;
- (void)dealloc;
- (void)finalize;
- (id)view;
- (unsigned long long)sharedCacheHeaderOffsetForPath:(id)arg1;
- (void)buildSharedCacheMap;
- (id)initWithPath:(id)arg1 fileRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg2 mapToAddress:(unsigned long long)arg3 architecture:(id)arg4;
- (id)lastModifiedTimestamp;
- (id)swappedView;
- (id)memoryAtAddress:(unsigned long long)arg1 maxSize:(unsigned long long)arg2;
- (BOOL)isContiguous;
- (id)memoryFromSubRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1 mapToAddress:(unsigned long long)arg2 architecture:(id)arg3;
- (id)architecture;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })addressRange;
- (BOOL)map;

@end
