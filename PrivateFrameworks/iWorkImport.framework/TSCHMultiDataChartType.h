/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHMultiDataChartType : TSCH2DChartType

+ (id)g_genericToSpecificPropertyMapCategoryAxis;

- (id)genericToSpecificPropertyMap;
- (bool)isMultiData;
- (id)p_genericToSpecificPropertyMap;
- (Class)repClass;
- (bool)supportsConnectingLines;
- (bool)supportsErrorBars;
- (bool)supportsGroupedShadows;
- (bool)supportsSeriesShadow;
- (bool)supportsTrendLines;

@end
