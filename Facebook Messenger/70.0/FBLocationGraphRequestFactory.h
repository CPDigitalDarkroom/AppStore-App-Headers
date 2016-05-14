/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:21 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, FBScenePath, NSNotificationCenter, NSString, FBCLLocationLogger;

@interface FBLocationGraphRequestFactory : NSObject {

	FBUserSession* _session;
	FBScenePath* _scenePath;
	char _needToWhitelistRequest;
	NSNotificationCenter* _center;
	NSString* _deviceID;
	FBCLLocationLogger* _locationLogger;

}

@property (nonatomic,copy) NSString * deviceID;                              //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,copy) FBCLLocationLogger * locationLogger;              //@synthesize locationLogger=_locationLogger - In the implementation block
-(id)generatePayloadFromEventSet:(id)arg1 ;
-(id)generateRequestWithPayload:(id)arg1 delegate:(id)arg2 ;
-(FBCLLocationLogger *)locationLogger;
-(void)setLocationLogger:(FBCLLocationLogger *)arg1 ;
-(void)_applicationWillEnterForegroundNotification;
-(id)initWithSession:(id)arg1 locationLogger:(id)arg2 scenePath:(id)arg3 notificationCenter:(id)arg4 application:(id)arg5 ;
-(void)dealloc;
-(void)setDeviceID:(NSString *)arg1 ;
-(NSString *)deviceID;
@end

