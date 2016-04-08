/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class CMMDB;

@interface CEmoticonPackageDB : XXUnknownSuperclass {
	CMMDB* m_db;
}
-(void).cxx_destruct;
-(BOOL)addPackageList:(id)list;
-(BOOL)removeItemsNotInIDList:(id)idlist;
-(BOOL)clearAllData;
-(BOOL)isEmoticonPackageDownLoaded:(id)loaded;
-(BOOL)isEmoticonPackagePurchased:(id)purchased;
-(BOOL)isEmoticonPackageExist:(id)exist;
-(BOOL)deleteEmoticonPackageByPid:(id)pid;
-(id)getEmoticonPackageList;
-(id)getEmoticonPackageByPid:(id)pid;
-(BOOL)update:(id)update downloadStatus:(unsigned long)status;
-(BOOL)update:(id)update payStatus:(unsigned long)status;
-(BOOL)addEmoticonPackage:(id)package name:(id)name iconUrl:(id)url payStatus:(unsigned long)status downloadStatus:(unsigned long)status5;
-(BOOL)addEmoticonPackage:(id)package name:(id)name payStatus:(unsigned long)status downloadStatus:(unsigned long)status4;
-(BOOL)CreateEmoticonPackageTable;
-(BOOL)IsEmoticonPackageTableExist;
-(void)HardcodePackage;
-(void)tryInitHardcodeEmoticonPackages;
-(id)initWithDB:(id)db;
@end
