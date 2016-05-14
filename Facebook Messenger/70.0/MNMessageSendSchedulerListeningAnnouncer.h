/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:11 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBAnnouncerBase.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNMessageSendSchedulerListening.h>

@class NSString;

@interface MNMessageSendSchedulerListeningAnnouncer : FBAnnouncerBase <MNMessageSendSchedulerListening>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didPublishMessage:(id)arg1 ;
-(void)didPutMessageBackInQueue:(id)arg1 ;
-(void)didCancelMessage:(id)arg1 ;
-(void)didEnqueueMessageAndWillSendImmediately:(id)arg1 ;
-(void)didEnqueueMessageAndWillWaitInQueue:(id)arg1 ;
-(void)willSendQueuedMessage:(id)arg1 ;
-(void)didSendMessage:(id)arg1 messageId:(id)arg2 ;
-(void)didSendMessage:(id)arg1 messageId:(id)arg2 andWillSendNextMessageInQueueImmediately:(id)arg3 ;
-(void)didCancelMessage:(id)arg1 andWillSendNextMessageInQueueImmediately:(id)arg2 ;
-(void)didFailMessage:(id)arg1 error:(id)arg2 errorType:(unsigned)arg3 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

