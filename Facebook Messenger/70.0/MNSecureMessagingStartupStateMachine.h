/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:11 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNAuthenticationManager, MNSecureMessageSendListening, MNSecureMessagingStartupStateMachineListener, OS_dispatch_queue, MNSecureThreadSubscribing, MNSecureMessagingThreadRequestAcceptListener, MNSecureMessagingCryptoEngine, MNSecureMessagingIncomingRequestListener, MNSecureMessagingIncomingMessageListener, MNSecureMessagingSendHandling, FBClock;
@class FBUserSession, MNSecureMessagingGlobalStateProvider, FBOmnistore, NSObject, MNSecureMessagingPacketFactory, MNSecureMessagingReceiptSender, MNSecureMessagingRequestReceiver, MNSecureMessagingMessageReceiver, MNSecureMessagingStore, MNSecureMessagingGlobalCryptoState, MNLocalNotificationController;

@interface MNSecureMessagingStartupStateMachine : NSObject {

	FBUserSession* _session;
	MNSecureMessagingGlobalStateProvider* _stateProvider;
	FBOmnistore* _omnistore;
	id<MNAuthenticationManager> _authManager;
	id<MNSecureMessageSendListening> _sendListener;
	id<MNSecureMessagingStartupStateMachineListener> _startupListener;
	NSObject*<OS_dispatch_queue> _storeQueue;
	id<MNSecureThreadSubscribing> _threadSubscriber;
	id<MNSecureMessagingThreadRequestAcceptListener> _threadRequestAcceptListener;
	MNSecureMessagingPacketFactory* _packetFactory;
	MNSecureMessagingReceiptSender* _receiptSender;
	MNSecureMessagingRequestReceiver* _requestReceiver;
	MNSecureMessagingMessageReceiver* _messageReceiver;
	MNSecureMessagingStore* _messagingStore;
	MNSecureMessagingGlobalCryptoState* _globalState;
	id<MNSecureMessagingCryptoEngine> _cryptoEngine;
	id<MNSecureMessagingIncomingRequestListener> _notificationPosterRequestListenerDispatched;
	id<MNSecureMessagingIncomingMessageListener> _notificationPosterMessageListenerDispatched;
	id<MNSecureMessagingSendHandling> _sendHandler;
	MNLocalNotificationController* _localNotificationController;
	id<FBClock> _clock;
	int _startupState;

}

@property (assign) int startupState;              //@synthesize startupState=_startupState - In the implementation block
-(id)initWithSession:(id)arg1 globalStateProvider:(id)arg2 omnistore:(id)arg3 localNotificationController:(id)arg4 clock:(id)arg5 authManager:(id)arg6 sendListener:(id)arg7 storeQueue:(id)arg8 storeListener:(id)arg9 threadSubscriber:(id)arg10 threadRequestAcceptListener:(id)arg11 startupListener:(id)arg12 ;
-(void)tryStartOmnistoreSyncing;
-(void)tryStartCyptoServices;
-(void)openSecureStorage;
-(int)startupState;
-(id)_tryToRestoreOrRegenerateGlobalCryptoState;
-(void)setStartupState:(int)arg1 ;
@end

