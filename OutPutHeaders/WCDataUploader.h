/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCUploader.h"

@class WCUploadTask;
@protocol WCDataUploaderDelegate;

@interface WCDataUploader : WCUploader {
	int currentPos;
	int uploadResult;
	int uploadErrType;
	WCUploadTask* m_task;
	id<WCDataUploaderDelegate> m_delegate;
}
@property(assign, nonatomic) __weak id<WCDataUploaderDelegate> m_delegate;
@property(retain, nonatomic) WCUploadTask* m_task;
-(void).cxx_destruct;
-(void)onResponse:(id)response Event:(unsigned long)event;
-(void)setFinished;
-(BOOL)onSetRequest:(id)request;
-(id)xmlForUploadTask:(id)uploadTask;
@end

