/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSString;

@interface BackupStartResponse : WXPBGeneratedMessage {
}
@property(assign, nonatomic) int status;
@property(assign, nonatomic) unsigned long long totalSize;
@property(assign, nonatomic) unsigned long long totalCount;
@property(retain, nonatomic) NSString* id;
+(void)initialize;
@end
