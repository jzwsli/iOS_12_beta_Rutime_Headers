/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWColorLookupCacheEntry : NSObject {
    NSData * _backgroundColorLookupTable;
    NSData * _foregroundColorLookupTable;
}

@property (nonatomic, readonly, retain) NSData *backgroundColorLookupTable;
@property (nonatomic, readonly, retain) NSData *foregroundColorLookupTable;

- (id)backgroundColorLookupTable;
- (void)dealloc;
- (id)foregroundColorLookupTable;
- (id)init;
- (id)initWithForegroundColorLookupTable:(id)arg1 backgroundColorLookupTable:(id)arg2;

@end
