/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface WLKUIMediaEntity : WLKUIJSObject <WLKUIMediaEntityExport> {
    NSString * _identifier;
    MPMediaEntity * _mediaEntity;
    WLKUIMediaEntityType * _type;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) MPMediaEntity *mediaEntity;
@property (nonatomic, retain) WLKUIMediaEntityType *type;

+ (id)_mediaEntityTypeForMPMediaEntity:(id)arg1 mediaCategory:(id)arg2 mediaCollectionType:(id)arg3;
+ (id)_numberForString:(id)arg1;
+ (id)_stringForNumber:(id)arg1;
+ (bool)parseIdentifier:(id)arg1 withBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (id)initWithAppContext:(id)arg1;
- (id)initWithMediaEntity:(id)arg1 appContext:(id)arg2 mediaCategory:(id)arg3 mediaCollectionType:(id)arg4;
- (id)mediaEntity;
- (void)setIdentifier:(id)arg1;
- (void)setMediaEntity:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;
- (id)valuesForProperties:(id)arg1;

@end
