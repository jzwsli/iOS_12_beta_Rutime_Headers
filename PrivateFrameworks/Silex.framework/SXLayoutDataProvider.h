/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXLayoutDataProvider : NSObject {
    NSMutableDictionary * _childLayoutDataProviders;
    NSMutableArray * _componentIdentifiers;
    NSMutableDictionary * _componentLayouts;
    NSMutableArray * _components;
    NSMutableSet * _componentsIdentifiersToRemove;
    SXDocumentController * _documentController;
    NSObject<OS_dispatch_semaphore> * _semaphore;
}

@property (nonatomic, retain) NSMutableDictionary *childLayoutDataProviders;
@property (nonatomic, retain) NSMutableArray *componentIdentifiers;
@property (nonatomic, retain) NSMutableDictionary *componentLayouts;
@property (nonatomic, retain) NSMutableArray *components;
@property (nonatomic, retain) NSMutableSet *componentsIdentifiersToRemove;
@property (nonatomic, readonly) SXDocumentController *documentController;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *semaphore;

- (void).cxx_destruct;
- (id)allComponents;
- (id)childLayoutDataProviders;
- (id)componentAtIndex:(unsigned long long)arg1;
- (id)componentForIdentifier:(id)arg1;
- (id)componentIdentifiers;
- (id)componentLayoutForIdentifier:(id)arg1;
- (id)componentLayouts;
- (id)components;
- (id)componentsIdentifiersToRemove;
- (id)description;
- (id)documentController;
- (unsigned long long)indexOfComponent:(id)arg1;
- (id)initWithComponents:(id)arg1 documentController:(id)arg2;
- (void)insertComponent:(id)arg1 afterComponent:(id)arg2;
- (void)insertComponent:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertComponentLayout:(id)arg1 withIdentifier:(id)arg2;
- (id)layoutDataProviderForContainerComponent:(id)arg1;
- (id)layoutDataProviderForPath:(id)arg1;
- (unsigned long long)numberOfComponents;
- (void)prepare;
- (void)removeComponent:(id)arg1;
- (void)removeComponentWithIdentifier:(id)arg1;
- (id)removedComponentsIdentifiers;
- (id)semaphore;
- (void)setChildLayoutDataProviders:(id)arg1;
- (void)setComponentIdentifiers:(id)arg1;
- (void)setComponentLayouts:(id)arg1;
- (void)setComponents:(id)arg1;
- (void)setComponentsIdentifiersToRemove:(id)arg1;

@end
