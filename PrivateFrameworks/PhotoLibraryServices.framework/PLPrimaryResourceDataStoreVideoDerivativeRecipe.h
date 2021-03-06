/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPrimaryResourceDataStoreVideoDerivativeRecipe : PLResourceRecipe {
    unsigned int  _recipeID;
}

@property (nonatomic) unsigned int recipeID;

- (void)applyToResource:(id)arg1 sourceProperties:(id)arg2 inContext:(id)arg3;
- (id)description;
- (id)initWithRecipeID:(unsigned int)arg1;
- (unsigned int)recipeID;
- (void)setRecipeID:(unsigned int)arg1;

@end
