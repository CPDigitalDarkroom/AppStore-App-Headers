/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:42 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMQTTClientDelegate <NSObject>
@required
-(void)mqttClientReconnectNow:(id)arg1;
-(void)mqttClientDidSendPingRequest:(id)arg1;
-(void)mqttClientDidSendSubscribeMessage:(id)arg1;
-(void)mqttClientDidSendUnsubscribeMessage:(id)arg1;
-(void)mqttClient:(id)arg1 didSendMessage:(id)arg2;
-(void)mqttClient:(id)arg1 didConnectWithPayload:(id)arg2;
-(void)mqttClient:(id)arg1 didReceiveMessage:(id)arg2;
-(void)mqttClient:(id)arg1 didPublishMessage:(id)arg2;
-(void)mqttClientCouldNotConnect:(id)arg1 error:(id)arg2;
-(void)mqttClientDidDisconnect:(id)arg1 error:(id)arg2;
-(void)mqttClient:(id)arg1 couldNotPublishMessage:(id)arg2 error:(id)arg3;

@end

