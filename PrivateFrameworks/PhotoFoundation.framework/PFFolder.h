/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFFolder : PFFile {
    NSMutableArray * _files;
    NSMutableArray * _folders;
    bool  _isLeaf;
}

@property (nonatomic, retain) NSMutableArray *files;
@property (nonatomic, retain) NSMutableArray *folders;
@property (nonatomic) bool isLeaf;

- (void).cxx_destruct;
- (void)addFile:(id)arg1;
- (void)addFiles:(id)arg1;
- (void)addFolder:(id)arg1;
- (void)addFolders:(id)arg1;
- (id)files;
- (id)folders;
- (id)init;
- (bool)isLeaf;
- (void)setFiles:(id)arg1;
- (void)setFolders:(id)arg1;
- (void)setIsLeaf:(bool)arg1;

@end
