/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLAppleDirectoryBuilder : NSObject {
    NSMutableData * _data;
    NSRegularExpression * _emailGuessingRegexp;
}

- (void).cxx_destruct;
- (void)_loadContactsFromTextLine:(id)arg1 filepath:(id)arg2;
- (void)addPhoneNumber:(id)arg1 withEmailAddress:(id)arg2;
- (id)guessEmailFromIM:(id)arg1;
- (id)init;
- (void)loadContactsFromDirectory:(id)arg1;
- (void)loadContactsFromTextFilepath:(id)arg1;
- (id)serialize;

@end
