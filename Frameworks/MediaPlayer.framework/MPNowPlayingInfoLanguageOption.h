/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPNowPlayingInfoLanguageOption : NSObject {
    void * _mrLanguageOption;
}

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSArray *languageOptionCharacteristics;
@property (nonatomic, readonly) unsigned long long languageOptionType;
@property (nonatomic, readonly) NSString *languageTag;
@property (nonatomic, readonly) void*mrLanguageOption;

- (void)dealloc;
- (id)displayName;
- (id)identifier;
- (id)initWithMRLanguageOption:(void*)arg1;
- (id)initWithType:(unsigned long long)arg1 languageTag:(id)arg2 characteristics:(id)arg3 displayName:(id)arg4 identifier:(id)arg5;
- (bool)isAutomaticAudibleLanguageOption;
- (bool)isAutomaticLegibleLanguageOption;
- (id)languageOptionCharacteristics;
- (unsigned long long)languageOptionType;
- (id)languageTag;
- (void*)mrLanguageOption;

@end
