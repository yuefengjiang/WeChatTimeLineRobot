/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, NSString, BaseResponse;

@interface GetLastestExpressInfoResponse : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSString* retMsg;
@property(assign, nonatomic) int retCode;
@property(assign, nonatomic) unsigned expressCount;
@property(retain, nonatomic) NSMutableArray* expressList;
@property(retain, nonatomic) BaseResponse* baseResponse;
+(void)initialize;
@end
