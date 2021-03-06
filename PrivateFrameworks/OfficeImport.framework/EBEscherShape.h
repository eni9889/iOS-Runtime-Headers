/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CHDChart, NSData, NSMutableArray;

@interface EBEscherShape : ESDObject  {
    NSData *mChartData;
    NSMutableArray *mChartColorLocators;
    BOOL mShowLegend;
    CHDChart *mChart;
}


- (void)dealloc;
- (void)setShowLegend:(BOOL)arg1;
- (BOOL)showLegend;
- (void)setChartColorLocators:(id)arg1;
- (id)chartColorLocators;
- (void)setChartData:(id)arg1;
- (id)chartData;
- (void)setChart:(id)arg1;
- (id)chart;

@end
