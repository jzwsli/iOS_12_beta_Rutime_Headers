/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface ProjectAssetManagerRepair : NSObject {
    unsigned long long  _numberOfBrokenEditItems;
    unsigned long long  _numberOfOfflineMovies;
    unsigned long long  _numberOfRepairedEditItems;
    unsigned long long  _numberOfUnrepairedEditItems;
}

@property (nonatomic) unsigned long long numberOfBrokenEditItems;
@property (nonatomic) unsigned long long numberOfOfflineMovies;
@property (nonatomic) unsigned long long numberOfRepairedEditItems;
@property (nonatomic) unsigned long long numberOfUnrepairedEditItems;

- (id)description;
- (unsigned long long)numberOfBrokenEditItems;
- (unsigned long long)numberOfOfflineMovies;
- (unsigned long long)numberOfRepairedEditItems;
- (unsigned long long)numberOfUnrepairedEditItems;
- (void)setNumberOfBrokenEditItems:(unsigned long long)arg1;
- (void)setNumberOfOfflineMovies:(unsigned long long)arg1;
- (void)setNumberOfRepairedEditItems:(unsigned long long)arg1;
- (void)setNumberOfUnrepairedEditItems:(unsigned long long)arg1;

@end
