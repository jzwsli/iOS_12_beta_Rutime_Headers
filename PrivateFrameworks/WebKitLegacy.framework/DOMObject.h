/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface DOMObject : WebScriptObject <NSCopying> {
    struct DOMObjectInternal { } * _internal;
}

@property (readonly) DOMStyleSheet *sheet;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)sheet;

@end
