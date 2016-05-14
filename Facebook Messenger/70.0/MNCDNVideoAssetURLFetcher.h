/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:40 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBNetworkDispatch, MNAuthenticationManager;
@class NSObject;

@interface MNCDNVideoAssetURLFetcher : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<FBNetworkDispatch> _networkDispatcher;
	id<MNAuthenticationManager> _authManager;

}
-(id)initWithNetworkDispatcher:(id)arg1 queue:(id)arg2 authManager:(id)arg3 ;
-(void)fetchUrlForVideoId:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
@end

