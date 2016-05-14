/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:50 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNMessageSenderExtension.h>

@protocol OS_dispatch_queue;
@class FBUserSession, FBMessengerPaymentsPlugin, NSMutableDictionary, NSObject, NSString;

@interface FBPaymentsMessageSenderExtension : NSObject <MNMessageSenderExtension> {

	FBUserSession* _session;
	FBMessengerPaymentsPlugin* _paymentsPlugin;
	NSMutableDictionary* _threadMoneySenders;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startWithQueue:(id)arg1 ;
-(char)shouldHandleMessage:(id)arg1 ;
-(char)needsExternalAttachmentPreparation;
-(void)handleMessage:(id)arg1 preparedAttachment:(id)arg2 delegate:(id)arg3 ;
-(char)isSendingForThread:(id)arg1 ;
-(char)isErrorRetriable:(id)arg1 ;
-(id)initWithSession:(id)arg1 paymentsPlugin:(id)arg2 ;
-(id)_preparePaymentAttachment:(id)arg1 withRecipientId:(id)arg2 ;
-(void)_handleMessageSentSuccessWithRecipientId:(id)arg1 paymentId:(id)arg2 message:(id)arg3 delegate:(id)arg4 ;
-(void)_handleMessageSendFailureWithRecipientId:(id)arg1 message:(id)arg2 analyticsUUID:(id)arg3 error:(id)arg4 delegate:(id)arg5 ;
-(void)stop;
@end

