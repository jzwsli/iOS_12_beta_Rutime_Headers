/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GCKOOBMessage : NSObject <NSSecureCoding> {
    unsigned int  band;
    NSData * data;
    unsigned int  type;
}

+ (bool)supportsSecureCoding;

- (unsigned int)band;
- (id)data;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned int)type;

@end
