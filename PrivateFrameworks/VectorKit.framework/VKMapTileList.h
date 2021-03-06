/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapTileList : NSObject {
    /* Warning: unhandled struct encoding: '{vector<VKMapTile *, std::__1::allocator<VKMapTile *> >="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<VKMapTile **, std::__1::allocator<VKMapTile *> >="__value_"^@}}' */ struct vector<VKMapTile *, std::__1::allocator<VKMapTile *> > { 
        __end_ **__begin_; 
    }  _list;
    float  _maximumStyleZ;
}

@property (nonatomic, readonly) float maximumStyleZ;
@property (nonatomic, readonly) unsigned long long numTiles;
@property (nonatomic, readonly) id*tileList;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addTileToList:(id)arg1;
- (void)clearList;
- (id)init;
- (float)maximumStyleZ;
- (unsigned long long)numTiles;
- (id*)tileList;

@end
