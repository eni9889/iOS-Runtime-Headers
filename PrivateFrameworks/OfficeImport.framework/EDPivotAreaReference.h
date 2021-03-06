/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDPivotAreaReference : NSObject  {
    boolmByPosition;
    boolmRelative;
    boolmSelected;
    unsigned int mFieldId;
    unsigned int mCount;
}

+ (id)pivotAreaReference;

- (id)init;
- (unsigned int)count;
- (bool)selected;
- (void)setSelected:(bool)arg1;
- (void)setCount:(unsigned int)arg1;
- (bool)relative;
- (void)setByPosition:(bool)arg1;
- (bool)byPosition;
- (void)setFieldId:(unsigned int)arg1;
- (unsigned int)fieldId;
- (void)setRelative:(bool)arg1;

@end
