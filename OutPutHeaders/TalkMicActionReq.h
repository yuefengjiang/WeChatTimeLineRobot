/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class BaseRequest;

@interface TalkMicActionReq : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned scene;
@property(assign, nonatomic) unsigned updateTime;
@property(assign, nonatomic) unsigned actionType;
@property(assign, nonatomic) long long roomKey;
@property(assign, nonatomic) int roomId;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end

