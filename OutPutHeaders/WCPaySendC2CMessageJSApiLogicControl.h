/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCPayControlLogic.h"
#import "SessionSelectControllerDelegate.h"

@class JSEvent, NSString;

@interface WCPaySendC2CMessageJSApiLogicControl : WCPayControlLogic <SessionSelectControllerDelegate> {
	JSEvent* m_jsEvent;
	NSString* m_setInUrl;
	NSString* m_toUser;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* m_toUser;
-(void).cxx_destruct;
-(void)OnSelectSessionCancel:(id)cancel;
-(void)OnSelectSession:(id)session SessionSelectController:(id)controller;
-(void)OnSendC2CSecureMessageResponseStatus:(id)status Error:(id)error;
-(void)OnCheckWCPayJsApiRequest:(id)request Error:(id)error;
-(BOOL)DoSendC2CSecureMessageTo:(id)to;
-(BOOL)PickUserToSendSecureMessage;
-(BOOL)OnDoSendC2CSecureMessage;
-(BOOL)OnDoCheckWCPayJsApi;
-(void)stopLogic;
-(void)startLogic;
-(id)initWithJSEvent:(id)jsevent SetInUrl:(id)url;
@end

