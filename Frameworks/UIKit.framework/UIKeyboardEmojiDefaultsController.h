/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableDictionary;

@interface UIKeyboardEmojiDefaultsController : NSObject  {
    NSMutableDictionary *_defaults;
}

+ (id)sharedController;

- (void)dealloc;
- (id)init;
- (id)defaultsValueForKey:(id)arg1;
- (void)setDefaultsValue:(id)arg1 forKey:(id)arg2;
- (int)currentSequenceKey;
- (void)setCurrentSequenceKey:(int)arg1;
- (id)usageHistoryKey;
- (void)setUsageHistoryKey:(id)arg1;
- (id)recentsKey;
- (void)setRecentsKey:(id)arg1;
- (void)setEmojiCategoryDefaultsIndex:(int)arg1 forCategory:(id)arg2;
- (void)readEmojiDefaults;
- (void)writeEmojiDefaults;
- (void)handleRead:(id)arg1;
- (void)handleWrite:(id)arg1;
- (id)emptyDefaultsDictionary;
- (int)emojiCategoryDefaultsIndex:(id)arg1;

@end
