/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSMediaContainerQuotaData : NSObject {
    unsigned long long  _numItemsAdded;
    unsigned long long  _numItemsRemoved;
    unsigned long long  _numItemsSkipped;
    id  _quotaRefObj;
}

@property (nonatomic, readonly) unsigned long long numItemsAboveQuota;
@property (nonatomic) unsigned long long numItemsAdded;
@property (nonatomic) unsigned long long numItemsRemoved;
@property (nonatomic) unsigned long long numItemsSkipped;
@property (nonatomic) id quotaRefObj;

- (void).cxx_destruct;
- (unsigned long long)numItemsAboveQuota;
- (unsigned long long)numItemsAdded;
- (unsigned long long)numItemsRemoved;
- (unsigned long long)numItemsSkipped;
- (id)quotaRefObj;
- (void)setNumItemsAdded:(unsigned long long)arg1;
- (void)setNumItemsRemoved:(unsigned long long)arg1;
- (void)setNumItemsSkipped:(unsigned long long)arg1;
- (void)setQuotaRefObj:(id)arg1;

@end
