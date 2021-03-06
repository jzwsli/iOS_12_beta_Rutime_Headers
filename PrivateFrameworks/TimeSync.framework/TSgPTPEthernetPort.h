/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSgPTPEthernetPort : TSgPTPFDPtPPort

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)iokitMatchingDictionaryForInterfaceName:(id)arg1;

- (id)_destinationAddressString;
- (id)_sourceAddressString;
- (void)dealloc;
- (id)initWithInterfaceName:(id)arg1;
- (id)initWithMatchingDictionary:(id)arg1;
- (id)initWithService:(unsigned int)arg1;
- (long long)portType;

@end
