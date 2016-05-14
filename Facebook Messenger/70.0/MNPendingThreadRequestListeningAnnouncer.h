/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:10 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBAnnouncerBase.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNPendingThreadRequestListening.h>

@class NSString;

@interface MNPendingThreadRequestListeningAnnouncer : FBAnnouncerBase <MNPendingThreadRequestListening>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willCreateThreadForPendingThread:(id)arg1 ;
-(void)didCreateThreadWithSummary:(id)arg1 forPendingThread:(id)arg2 ;
-(void)didFailToCreateThreadForPendingThread:(id)arg1 error:(id)arg2 ;
-(void)didCancelCreatingThreadForPendingThread:(id)arg1 ;
-(void)willRetryCreatingThreadForPendingThread:(id)arg1 ;
-(void)didScheduleSendingMessage:(id)arg1 toPendingThread:(id)arg2 ;
-(void)didCancelSendingMessage:(id)arg1 fromPendingThread:(id)arg2 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

