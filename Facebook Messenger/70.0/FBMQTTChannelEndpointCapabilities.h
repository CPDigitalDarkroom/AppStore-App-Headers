/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:42 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMQTTClientManager;

@interface FBMQTTChannelEndpointCapabilities : NSObject {

	unsigned _flags;
	char _isUsed;
	FBMQTTClientManager* _clientManager;

}

@property (assign,nonatomic,__weak) FBMQTTClientManager * clientManager;              //@synthesize clientManager=_clientManager - In the implementation block
-(unsigned)getCapabilities;
-(char)addCapabilities:(unsigned)arg1 andSendUpdate:(char)arg2 ;
-(char)removeCapabilities:(unsigned)arg1 andSendUpdate:(char)arg2 ;
-(void)updateCapabilities;
-(void)setClientManager:(FBMQTTClientManager *)arg1 ;
-(FBMQTTClientManager *)clientManager;
-(char)addCapabilities:(unsigned)arg1 removeCapabilities:(unsigned)arg2 andSendUpdate:(char)arg3 ;
-(id)initWithMQTTClientManager:(id)arg1 ;
-(void)forceUpdateCapabilities;
-(void)addCapabilities:(unsigned)arg1 ;
-(void)removeCapabilities:(unsigned)arg1 ;
-(void)addCapabilities:(unsigned)arg1 removeCapabilities:(unsigned)arg2 ;
@end

