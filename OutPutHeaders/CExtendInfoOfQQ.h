/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "IMessageWrapExt.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "IMsgExtendOperation.h"
#import "NSCopying.h"

@class CMessageWrap, NSString;

@interface CExtendInfoOfQQ : XXUnknownSuperclass <IMessageWrapExt, IMsgExtendOperation, NSCopying> {
	NSString* m_nsDisplayName;
	NSString* m_nsImgSrc;
	CMessageWrap* m_refMessageWrap;
	NSString* _m_nsDisplayName;
}
@property(assign, nonatomic) CMessageWrap* m_refMessageWrap;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* m_nsImgSrc;
@property(retain, nonatomic) NSString* m_nsDisplayName;
+(void)CreateExtendInfoWithType:(unsigned long)type retExtendInfo:(id*)info;
-(void).cxx_destruct;
-(void)ChangeForDisplay;
-(id)copyWithZone:(NSZone*)zone;
-(id)init;
@end

