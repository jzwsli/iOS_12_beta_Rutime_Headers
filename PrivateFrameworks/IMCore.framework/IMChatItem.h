/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMChatItem : NSObject <NSCopying> {
    IMItem * _item;
}

@property (nonatomic, readonly, retain) NSString *balloonBundleID;
@property (nonatomic, readonly) bool canDelete;

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1;
- (id)_item;
- (void)_setTimeAdded:(id)arg1;
- (id)_timeAdded;
- (id)_timeStale;
- (id)balloonBundleID;
- (bool)canDelete;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;

@end
