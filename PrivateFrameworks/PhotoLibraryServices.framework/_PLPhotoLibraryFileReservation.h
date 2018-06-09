/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface _PLPhotoLibraryFileReservation : NSObject {
    int  _fileDescriptor;
}

@property (nonatomic) int fileDescriptor;

- (void)dealloc;
- (int)fileDescriptor;
- (id)initWithFileDescriptor:(int)arg1;
- (void)setFileDescriptor:(int)arg1;

@end
