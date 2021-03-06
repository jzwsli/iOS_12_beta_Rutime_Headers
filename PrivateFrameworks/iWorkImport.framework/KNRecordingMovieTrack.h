/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNRecordingMovieTrack : TSPObject {
    bool  _isMovieSegmentDataTrimmedToDuration;
    NSArray * _movieSegments;
}

@property (nonatomic, readonly) NSArray *movieSegments;

- (void).cxx_destruct;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 movieSegments:(id)arg2;
- (void)loadFromArchive:(const struct RecordingMovieTrackArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<KN::MovieSegmentArchive> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; bool x6; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)movieSegmentToTrimWhenReplacingAfterTime:(double)arg1 trimDuration:(out double*)arg2;
- (id)movieSegments;
- (id)movieTrackByReplacingAfterTime:(double)arg1 withMovieTrack:(id)arg2 trimmedMovieSegment:(id)arg3;
- (void)saveToArchive:(struct RecordingMovieTrackArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<KN::MovieSegmentArchive> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; bool x6; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;

@end
