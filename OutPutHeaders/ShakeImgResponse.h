/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class SKBuiltinBuffer_t, BaseResponse;

@interface ShakeImgResponse : WXPBGeneratedMessage {
}
@property(retain, nonatomic) SKBuiltinBuffer_t* buffer;
@property(assign, nonatomic) unsigned startPos;
@property(assign, nonatomic) unsigned totalLen;
@property(assign, nonatomic) unsigned imgId;
@property(retain, nonatomic) BaseResponse* baseResponse;
+(void)initialize;
@end

