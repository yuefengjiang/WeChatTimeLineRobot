/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "ProtobufEventHandler.h"


@interface AuthEventHandler : ProtobufEventHandler {
	ec_key_st* ecdh_key;
}
-(BOOL)OnProtocolEncryptPack:(id)pack OutBuf:(AutoBuffer*)buf uin:(unsigned)uin;
-(BOOL)OnProtocolManualAuthEncryptPack:(id)pack OutBuf:(AutoBuffer*)buf uin:(unsigned)uin;
-(BOOL)OnProtocolAutoAuthEncryptPack:(id)pack OutBuf:(AutoBuffer*)buf uin:(unsigned)uin;
-(BOOL)OnProtocolHasCustomEncryptPack:(id)pack;
-(void)OnProtocolConnectFail:(id)fail;
-(void)OnProtocolResponse:(id)response shouldContinue:(bool*)aContinue;
-(void)changeForMessage:(id)message;
-(void)OnProtocolStart:(id)start shouldContinue:(bool*)aContinue;
-(void)dealloc;
-(id)init;
@end

