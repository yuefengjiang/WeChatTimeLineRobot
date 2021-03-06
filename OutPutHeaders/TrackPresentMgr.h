/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "IMsgExt.h"
#import "MMService.h"

@class NSString, NSMutableDictionary;

@interface TrackPresentMgr : MMService <IMsgExt, MMService> {
	NSMutableDictionary* _trackRoomList;
	BOOL _isTrackRoomListLoaded;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)OnGetNewXmlMsg:(id)msg Type:(id)type MsgWrap:(id)wrap;
-(id)getRoomPOIByUsername:(id)username;
-(id)getTrackRoomMembersByUsername:(id)username;
-(BOOL)isTrackRoomEmpty:(id)empty;
-(BOOL)loadTrackRoomInfoList;
-(void)saveTrackRoomInfoList;
-(BOOL)writeToFile:(id)file data:(id)data;
-(id)getTrackRoomInfoFromMessageWrag:(id)messageWrag;
-(void)handleTrackRoomInfoMessage:(id)message withMessageWrap:(id)messageWrap;
-(void)dealloc;
-(id)init;
@end

