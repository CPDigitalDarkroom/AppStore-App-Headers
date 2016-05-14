/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:11 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBGraphMessageSendListening.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBGraphMessageSendRequestRunnerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBCancelable.h>

@protocol FBCancelable, MNMessageSendConversionContextAwareController, MNForwardSenderListening, MNForwardSending, OS_dispatch_queue;
@class NSString, NSMutableArray, FBOutgoingGraphMessage, NSArray, NSMutableSet, FBMessageOutgoingAttachmentPreparer, FBGraphMessageSendRequestRunner, NSObject;

@interface MNBroadcastMessageRequestHandler : NSObject <FBGraphMessageSendListening, FBGraphMessageSendRequestRunnerDelegate, FBCancelable> {

	NSString* _batchId;
	NSMutableArray* _messageQueue;
	FBOutgoingGraphMessage* _currentOutgoingMessage;
	NSArray* _batchMessages;
	NSMutableSet* _sentMessageOfflineThreadingIdsSet;
	id<FBCancelable> _sendRequest;
	FBMessageOutgoingAttachmentPreparer* _attachmentPreparer;
	id<MNMessageSendConversionContextAwareController> _sendContextAwareController;
	FBGraphMessageSendRequestRunner* _sender;
	id<MNForwardSenderListening> _listener;
	id<MNForwardSending> _messageForwarder;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsExtraForMessageLog:(id)arg1 ;
-(id)additionalHTTPHeadersForMessage:(id)arg1 ;
-(char)shouldContinueInBackground;
-(void)graphMessageSendRequestRunnerWillSendMessage:(id)arg1 ;
-(void)graphMessageSendRequestRunnerDidUpdateProgressForMessage:(id)arg1 didUpdateUploadProgress:(float)arg2 ;
-(void)graphMessageSendRequestRunnerDidSendMessage:(id)arg1 messageId:(id)arg2 ;
-(void)graphMessageSendRequestRunnerDidCancelSendingMessage:(id)arg1 ;
-(void)graphMessageSendRequestRunnerCouldNotSendMessage:(id)arg1 error:(id)arg2 ;
-(void)graphMessageSendRequestRunnerWillRetrySendingMessage:(id)arg1 ;
-(void)_sendNextMessageInQueue;
-(void)_prepareAttachmentAndSendMessage:(id)arg1 ;
-(void)_sendMessageWithSentMessage:(id)arg1 toRecipients:(id)arg2 sendConversionContext:(id)arg3 ;
-(void)_sendMessageWithText:(id)arg1 toRecipients:(id)arg2 outgoingAttribution:(id)arg3 sendConversionContext:(id)arg4 ;
-(void)_sendMessageWithText:(id)arg1 outgoingAttachment:(id)arg2 toRecipients:(id)arg3 outgoingAttribution:(id)arg4 sendConversionContext:(id)arg5 ;
-(id)_clientTagsForOfflineThreadingId:(id)arg1 sendConversionContext:(id)arg2 ;
-(void)_didFailToPrepareAttachmentForRecipients:(id)arg1 error:(id)arg2 ;
-(id)initWithMessages:(id)arg1 listener:(id)arg2 userSession:(id)arg3 authManager:(id)arg4 analytics:(id)arg5 reachabilityAnnouncer:(id)arg6 attachmentPreparer:(id)arg7 sendContextAwareController:(id)arg8 queue:(id)arg9 ;
-(void)cancel;
-(void)send;
-(void)_sendMessage:(id)arg1 ;
@end

