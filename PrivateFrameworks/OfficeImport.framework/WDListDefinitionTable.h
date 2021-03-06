/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDListDefinition, NSMutableArray, WDDocument;

@interface WDListDefinitionTable : NSObject  {
    NSMutableArray *mListDefinitions;
    struct __CFDictionary { } *mListDefinitionMap;
    unsigned int mNextIdIndex;
    WDDocument *mDocument;
    WDListDefinition *mLastKnownGoodListDefinition;
}


- (void)dealloc;
- (id)initWithDocument:(id)arg1;
- (id)document;
- (void)setLastKnowGoodListDefinition:(id)arg1;
- (int)nextId;
- (id)addDefinition;
- (id)definitionAt:(int)arg1;
- (int)definitionCount;
- (id)definitionWithId:(int)arg1;
- (id)addDefinition:(int)arg1;

@end
