/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString;

@interface MMDumpReportTaskData : XXUnknownSuperclass {
	unsigned m_reportCntOneTime;
	NSString* m_nsTag;
	NSArray* m_arrUploadFiles;
	NSArray* m_arrUploadCPUFiles;
	NSArray* m_arrUploadBackgroundFiles;
}
@property(retain, nonatomic) NSArray* m_arrUploadBackgroundFiles;
@property(retain, nonatomic) NSArray* m_arrUploadCPUFiles;
@property(retain, nonatomic) NSArray* m_arrUploadFiles;
@property(retain, nonatomic) NSString* m_nsTag;
@property(assign, nonatomic) unsigned m_reportCntOneTime;
-(void).cxx_destruct;
@end
