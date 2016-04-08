/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "ITrackPresentExt.h"
#import "BaseMessageNodeView.h"

@class UILabel, UIImageView, NSString;

@interface AppTrackRoomMessageNodeView : BaseMessageNodeView <ITrackPresentExt> {
	UIImageView* m_oBkgImageView;
	UIImageView* m_oUnreadImageView;
	UILabel* m_oStatusLabel;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(BOOL)canCreateMessageNodeViewInstanceWithMessageWrap:(id)messageWrap;
-(void).cxx_destruct;
-(id)getMoreMainInfomationAccessibilityDescription;
-(void)OnTrackRoomMemberChange:(id)change withNewMemberList:(id)newMemberList;
-(void)onMenuItemWillHide;
-(void)onTouchCancel;
-(void)onLongTouch;
-(void)onTouchUpInside;
-(void)onTouchDownRepeat;
-(void)onTouchDown;
-(void)onFavoriteAdd:(id)add;
-(void)onForward:(id)forward;
-(void)onMoreOperate:(id)operate;
-(void)showOpearation;
-(void)onClick;
-(void)layoutSubviewsInternal;
-(CGSize)sizeForFrame:(CGRect)frame;
-(void)updateBkgImage:(BOOL)image;
-(BOOL)canOpenTrackRoom;
-(void)dealloc;
@end
