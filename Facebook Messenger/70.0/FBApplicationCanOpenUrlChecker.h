/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:00 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBClock;
@class UIApplication, FBCache;

@interface FBApplicationCanOpenUrlChecker : NSObject {

	UIApplication* _application;
	id<FBClock> _clock;
	FBCache* _cache;

}
-(char)canOpenUrl:(id)arg1 maxAge:(double)arg2 ;
-(void)invalidateUrl:(id)arg1 ;
-(id)initWithApplication:(id)arg1 clock:(id)arg2 ;
-(id)initWithApplication:(id)arg1 ;
@end

