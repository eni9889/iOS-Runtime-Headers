/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIWebSelectedItemPrivate>, DOMHTMLSelectElement, NSArray;

@interface UIWebSelectPicker : UIPickerView <UIWebFormControl, UIPickerViewDataSource, UIPickerViewDelegate> {
    DOMHTMLSelectElement *_selectionNode;
    NSArray *_cachedItems;
    <UIWebSelectedItemPrivate> *_singleSelectionItem;
    unsigned int _singleSelectionIndex;
    float _fontSize;
    float _maximumTextWidth;
    int _textAlignment;
    float _layoutWidth;
}

@property(retain) DOMHTMLSelectElement * _selectionNode;
@property(retain) NSArray * _cachedItems;
@property(retain) <UIWebSelectedItemPrivate> * _singleSelectionItem;


- (void)dealloc;
- (id)_singleSelectionItem;
- (id)_cachedItems;
- (int)_itemIndexForRowIndex:(int)arg1;
- (void)set_singleSelectionItem:(id)arg1;
- (void)set_cachedItems:(id)arg1;
- (id)_selectionNode;
- (void)controlBeginEditing;
- (id)controlView;
- (id)initWithDOMHTMLSelectElement:(id)arg1 cachedItems:(id)arg2 singleSelectionItem:(id)arg3 singleSelectionIndex:(unsigned int)arg4 multipleSelection:(BOOL)arg5;
- (void)set_selectionNode:(id)arg1;
- (id)pickerView:(id)arg1 viewForRow:(int)arg2 forComponent:(int)arg3 reusingView:(id)arg4;
- (void)layoutSubviews;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 row:(int)arg2 column:(int)arg3 checked:(BOOL)arg4;

@end
