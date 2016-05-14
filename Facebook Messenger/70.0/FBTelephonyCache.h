/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:03 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
@class NSThread, NSObject, NSNotificationCenter, FBCarrier, NSString;

@interface FBTelephonyCache : NSObject {

	/*^block*/id _createTelephonyNetworkInfoBlock;
	NSThread* _coreTelephonyThread;
	CFRunLoopSourceRef _threadStopSignal;
	NSObject*<OS_dispatch_queue> _telephonySerialQueue;
	char _supportIOS7;
	id _radioTechnologyObserver;
	NSNotificationCenter* _notificationCenter;
	FBCarrier* _carrier;
	NSString* _radioTechnology;

}

@property (retain) FBCarrier * carrier;                   //@synthesize carrier=_carrier - In the implementation block
@property (copy) NSString * radioTechnology;              //@synthesize radioTechnology=_radioTechnology - In the implementation block
-(void)setCarrier:(FBCarrier *)arg1 ;
-(FBCarrier *)carrier;
-(id)cachedRadioTechnologyOrNoneIfNotInitialized;
-(id)cachedRadioTechnology;
-(id)initWithCreateTelephonyNetworkInfoBlock:(/*^block*/id)arg1 andNotificationCenter:(id)arg2 ;
-(void)_telephonyCacheThreadMain:(id)arg1 ;
-(void)_updateFBCarrier:(id)arg1 ;
-(id)cachedCarrier_DEPRECATED;
-(void)getCachedCarrier:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)stop;
-(void)start;
-(NSString *)radioTechnology;
-(void)setRadioTechnology:(NSString *)arg1 ;
@end

