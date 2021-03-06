/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUDictionaryAdContextProvider : NSObject <NUAdContextProvider> {
    NSDictionary * _dictionary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)adContextValueForKeyPath:(id)arg1;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;

@end
