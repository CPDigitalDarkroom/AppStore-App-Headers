/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:56 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, FBMessengerPageSubscriptionViewModel;

@interface FBMessengerPageSubscriptionSurfaceData : NSObject {

	FBUserSession* _session;
	FBMessengerPageSubscriptionViewModel* _viewModel;

}

@property (nonatomic,readonly) FBUserSession * session;                                       //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FBMessengerPageSubscriptionViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
-(id)initWithSession:(id)arg1 viewModel:(id)arg2 ;
-(FBMessengerPageSubscriptionViewModel *)viewModel;
-(FBUserSession *)session;
@end

