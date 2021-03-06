/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INApplicationContext : NSObject <NSSecureCoding> {
    NSArray * _contexts;
}

@property (nonatomic, retain) NSArray *contexts;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contexts;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setContexts:(id)arg1;

@end
