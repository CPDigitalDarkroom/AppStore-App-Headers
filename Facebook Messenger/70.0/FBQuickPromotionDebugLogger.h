/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:16 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class FBUserSession, NSObject;

@interface FBQuickPromotionDebugLogger : NSObject {

	FBUserSession* _session;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)_extraDataForPromotion:(id)arg1 ;
-(void)logEvent:(id)arg1 promotion:(id)arg2 extraData:(id)arg3 ;
-(id)initWithSession:(id)arg1 ;
-(char)_shouldLog;
@end

