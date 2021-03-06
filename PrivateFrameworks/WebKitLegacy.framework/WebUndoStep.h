/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebUndoStep : NSObject {
    struct RefPtr<WebCore::UndoStep, WTF::DumbPtrTraits<WebCore::UndoStep> > { 
        struct UndoStep {} *m_ptr; 
    }  m_step;
}

+ (void)initialize;
+ (id)stepWithUndoStep:(struct UndoStep { int (**x1)(); unsigned int x2; }*)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithUndoStep:(struct UndoStep { int (**x1)(); unsigned int x2; }*)arg1;
- (struct UndoStep { int (**x1)(); unsigned int x2; }*)step;

@end
