/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:47 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWhistleDelegate;
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
@class FBMQTTClientSettings, FBWhistleConnectionParams;

@interface FBWhistleAdaptor : NSObject {

	id<FBWhistleDelegate> _delegate;
	unique_ptr<proxygen::mqttclient::MQTTClient, folly::DelayedDestruction::Destructor>* _client;
	unique_ptr<MQTTClientGlue, std::__1::default_delete<MQTTClientGlue> >* _glue;
	FBWhistleConnectionStatsLogger* _connStatsLogger;
	unsigned _backgroundTaskID;
	FBMQTTClientSettings* _clientSettings;
	FBWhistleConnectionParams* _connParams;
	WhistleBackgroundTokenManager _tokenManager;
	unique_ptr<WhistleBackgroundTokenManager::Token, std::__1::default_delete<WhistleBackgroundTokenManager::Token> >* _connectToken;

}
+(EventBase*)eventBase:(char)arg1 ;
+(Executor*)executor;
-(void)connectWithHostname:(id)arg1 port:(int)arg2 connPayload:(id)arg3 secure:(char)arg4 ;
-(void)connectWithHostname:(id)arg1 port:(int)arg2 username:(id)arg3 password:(id)arg4 secure:(char)arg5 ;
-(void)subscribeWithTopics:(id)arg1 ;
-(void)unsubscribeWithTopics:(id)arg1 ;
-(void)publishWithTopic:(id)arg1 payload:(id)arg2 qos:(int)arg3 context:(int)arg4 ;
-(void)sendKeepAliveOnce;
-(void)stopKeepAliveTask;
-(void)startKeepAliveTaskWithInterval:(int)arg1 ;
-(void)resetClient;
-(unique_ptr<WhistleBackgroundTokenManager::Token, std::__1::default_delete<WhistleBackgroundTokenManager::Token> >*)createMessageToken;
-(void)_sendMessageInEventBase:(unique_ptr<proxygen::MQTTMessage, std::__1::default_delete<proxygen::MQTTMessage> >*)arg1 ;
-(id)initWithDelegate:(id)arg1 clientSettings:(id)arg2 connParams:(id)arg3 clientFactory:(MQTTClientFactory*)arg4 ;
-(void)beginBackgroundTask;
-(void)releaseConnectToken;
-(void)disconnect;
-(void)setForeground:(char)arg1 ;
-(id)debugInfo;
-(void)endBackgroundTask;
@end

