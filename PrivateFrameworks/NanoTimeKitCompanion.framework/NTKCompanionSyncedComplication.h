/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCompanionSyncedComplication : NSObject {
    NSString * _appBundleIdentifier;
    NSString * _clientIdentifier;
    NSString * _companionBundleIdentifier;
    NSString * _fallbackName;
    NSString * _localizedName;
    NSArray * _supportedFamilies;
}

@property (nonatomic, readonly) NSString *appBundleIdentifier;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSArray *supportedFamilies;

+ (id)_stocksComplication;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (id)clientIdentifier;
- (id)initWithDictionary:(id)arg1 supportedFamilies:(id)arg2;
- (id)localizedName;
- (id)supportedFamilies;

@end
