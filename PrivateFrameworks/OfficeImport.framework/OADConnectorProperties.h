/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADConnectorProperties : OADShapeProperties {
    OADConnection * mFrom;
    OADConnection * mTo;
}

+ (id)defaultProperties;

- (void)dealloc;
- (id)description;
- (id)from;
- (id)init;
- (id)initWithDefaults;
- (id)to;

@end
