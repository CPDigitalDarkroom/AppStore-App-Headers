/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:02 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBSessionClassProvidable.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNThreadMessageSubscribing.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBMSPNewMessageListener.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNAPNSMessageHandlerListening.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNSyncMessageHandlerListening.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBMSPDeltaHandlerListener.h>

@protocol MNAuthenticationManager, MNThreadSummaryCacheReading, FBMSPDeltaHandlerListener;
@class FBMMQTTSender, FBMDeliveryReceiptSendStore, NSString;

@interface FBMDeliveryReceiptSender : NSObject <FBSessionClassProvidable, MNThreadMessageSubscribing, FBMSPNewMessageListener, MNAPNSMessageHandlerListening, MNSyncMessageHandlerListening, FBMSPDeltaHandlerListener> {

	id<MNAuthenticationManager> _authenticationManager;
	FBMMQTTSender* _mqttSender;
	id<MNThreadSummaryCacheReading> _threadSummaryCacheReader;
	FBMDeliveryReceiptSendStore* _deliveryReceiptSendStore;
	id<FBMSPDeltaHandlerListener> _dispatchSelfDeltaHandlerListener;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_onConnectionStatusChanged:(id)arg1 ;
-(void)syncProtocolDeltasDidFinishProcessingWithAffectedThreadKeys:(id)arg1 ;
-(void)didApplyUpdates:(id)arg1 toMessageSet:(id)arg2 forOriginalMessageSet:(id)arg3 threadKey:(id)arg4 ;
-(void)didReplaceMessageSet:(id)arg1 withMessageSet:(id)arg2 forThreadKey:(id)arg3 ;
-(void)willHandleSyncMessage:(id)arg1 ;
-(void)didHandleSyncMessage:(id)arg1 ;
-(void)didFailHandlingSyncMessage:(id)arg1 ;
-(void)willHandleAPNSMessage:(id)arg1 fromSource:(int)arg2 ;
-(void)didHandleAPNSMessage:(id)arg1 supportsPreview:(char)arg2 userActionInfo:(id)arg3 ;
-(void)didFailHandlingAPNSMessage:(id)arg1 ;
-(id)initWithAuthManager:(id)arg1 mqttSender:(id)arg2 threadSummaryCacheReader:(id)arg3 deltaHandlerListenerAnnouncer:(id)arg4 ;
-(void)_sendPendingDeliveryReceiptBatchFromSource:(unsigned)arg1 ;
-(void)_sendDeliveryReceiptForThreadSummary:(id)arg1 source:(unsigned)arg2 ;
-(void)_addSyncProtocolMessageForBatchDeliveryReceipts:(id)arg1 ;
-(void)sendDeliveryReceiptForMessageWithMessageId:(id)arg1 threadKey:(id)arg2 senderId:(id)arg3 timestamp:(unsigned long long)arg4 source:(unsigned)arg5 ;
-(void)newSyncProtocolMessageReceived:(id)arg1 ;
-(void)dealloc;
@end

