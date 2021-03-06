/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, NSString;

@interface WCPayBalanceInfo : XXUnknownSuperclass <NSCoding> {
	unsigned long long m_uiTotalBalance;
	unsigned long long m_uiAvailableBalance;
	unsigned long long m_uiFrozenBalance;
	unsigned long long m_uiFetchBalance;
	NSDate* m_ndFetchArriveTime;
	NSString* m_nsFetchArriveTimeWording;
	NSString* m_nsBankType;
	NSString* m_nsBindSerial;
	NSString* m_nsForbidWord;
	NSString* m_nsBalanceTelPhone;
	NSString* m_nsBalanceListUrl;
	BOOL m_bSupportOfflinePay;
	NSString* m_nsAvailFetchWording;
	NSString* m_nsMaxFetchWording;
	unsigned long long m_uiBalanceVersion;
	unsigned long long m_uiBalanceExpiredDate;
}
@property(retain, nonatomic) NSString* m_nsFetchArriveTimeWording;
@property(assign, nonatomic) unsigned long long m_uiBalanceExpiredDate;
@property(assign, nonatomic) unsigned long long m_uiBalanceVersion;
@property(retain, nonatomic) NSString* m_nsMaxFetchWording;
@property(retain, nonatomic) NSString* m_nsAvailFetchWording;
@property(assign, nonatomic) BOOL m_bSupportOfflinePay;
@property(retain, nonatomic) NSString* m_nsBalanceListUrl;
@property(retain, nonatomic) NSString* m_nsBalanceTelPhone;
@property(retain, nonatomic) NSString* m_nsForbidWord;
@property(retain, nonatomic) NSString* m_nsBindSerial;
@property(retain, nonatomic) NSString* m_nsBankType;
@property(retain, nonatomic) NSDate* m_ndFetchArriveTime;
@property(assign, nonatomic) unsigned long long m_uiFetchBalance;
@property(assign, nonatomic) unsigned long long m_uiFrozenBalance;
@property(assign, nonatomic) unsigned long long m_uiAvailableBalance;
@property(assign, nonatomic) unsigned long long m_uiTotalBalance;
-(void).cxx_destruct;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(void)dealloc;
@end

