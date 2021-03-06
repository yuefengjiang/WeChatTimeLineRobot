/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PKPushRegistryDelegate.h"
#import "VoIPTokenRegisterObjectDelegate.h"
#import "MMKernelExt.h"

@class VoIPTokenRegisterObject, NSData, NSString, PKPushRegistry;

@interface VoIPTokenRetriveObject : XXUnknownSuperclass <PKPushRegistryDelegate, MMKernelExt, VoIPTokenRegisterObjectDelegate> {
	VoIPTokenRegisterObject* _m_register;
	VoIPTokenRegisterObject* _m_secondTryRegister;
	PKPushRegistry* _m_tokenRetriver;
	NSData* _m_token;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSData* m_token;
@property(retain, nonatomic) PKPushRegistry* m_tokenRetriver;
@property(retain, nonatomic) VoIPTokenRegisterObject* m_secondTryRegister;
@property(retain, nonatomic) VoIPTokenRegisterObject* m_register;
-(void).cxx_destruct;
-(void)onVoIPTokenRegisterObjectOk;
-(void)onVoIPTokenRegisterObjectError;
-(void)onPreQuit;
-(void)onAuthOK;
-(void)goRegister;
-(void)pushRegistry:(id)registry didInvalidatePushTokenForType:(id)type;
-(void)pushRegistry:(id)registry didReceiveIncomingPushWithPayload:(id)payload forType:(id)type;
-(void)pushRegistry:(id)registry didUpdatePushCredentials:(id)credentials forType:(id)type;
-(void)voipRegistration;
-(id)init;
-(void)dealloc;
@end

