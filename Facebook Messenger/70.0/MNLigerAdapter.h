/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:43 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBReachabilityAnnouncer;

@interface MNLigerAdapter : NSObject {

	FBReachabilityAnnouncer* _reachabilityAnnouncer;
	char _isConfigured;

}
-(id)_buildConfiguration:(id)arg1 withMobileConfigFactory:(id)arg2 ;
-(id)initWithReachablityAnnouncer:(id)arg1 ;
-(void)configureLigerWithExperimentManager:(id)arg1 withMobileConfigSessionFactory:(id)arg2 ;
-(char)isLigerEnabled;
@end

