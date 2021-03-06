/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroFeedbackViewController : UIViewController {
    id /* block */  _completion;
    MiroMovie * _tapToRadarMovie;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic) MiroMovie *tapToRadarMovie;

- (void).cxx_destruct;
- (void)cancelAction:(id)arg1;
- (id /* block */)completion;
- (void)didReceiveMemoryWarning;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)setCompletion:(id /* block */)arg1;
- (void)setTapToRadarMovie:(id)arg1;
- (void)tapToRadarAction:(id)arg1;
- (id)tapToRadarMovie;
- (void)viewDidLoad;

@end
