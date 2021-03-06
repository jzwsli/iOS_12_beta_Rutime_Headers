/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFStatusItem : HFItem {
    HMHome * _home;
    HMRoom * _room;
    <HFCharacteristicValueSource> * _valueSource;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HMRoom *room;
@property (nonatomic, readonly) <HFCharacteristicValueSource> *valueSource;

- (void).cxx_destruct;
- (id)_filteredServicesOfTypes:(id)arg1 containingCharacteristicTypes:(id)arg2;
- (id)filteredServices;
- (id)filteredServicesOfTypes:(id)arg1;
- (id)filteredServicesOfTypes:(id)arg1 containingCharacteristicTypes:(id)arg2;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1 room:(id)arg2;
- (id)initWithHome:(id)arg1 room:(id)arg2 valueSource:(id)arg3;
- (id)room;
- (id)standardResultsForBatchReadResponse:(id)arg1 serviceTypes:(id)arg2;
- (id)valueSource;

@end
