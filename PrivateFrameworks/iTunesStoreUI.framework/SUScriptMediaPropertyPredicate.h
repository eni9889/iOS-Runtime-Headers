/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, MPMediaPropertyPredicate;

@interface SUScriptMediaPropertyPredicate : SUScriptObject  {
    NSString *_comparisonType;
    NSString *_property;
    id _value;
}

@property(readonly) MPMediaPropertyPredicate * nativePredicate;
@property(readonly) NSString * comparisonType;
@property(readonly) NSString * property;
@property(readonly) id value;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (void)initialize;

- (id)comparisonType;
- (id)_playlistAttributesForScriptArray:(id)arg1;
- (id)initWithProperty:(id)arg1 value:(id)arg2 comparisonType:(id)arg3;
- (id)nativePredicate;
- (id)_className;
- (id)scriptAttributeKeys;
- (void)dealloc;
- (id)property;
- (id)value;
- (id)attributeKeys;

@end
