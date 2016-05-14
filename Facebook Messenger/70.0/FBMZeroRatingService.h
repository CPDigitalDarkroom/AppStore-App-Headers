/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:03 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBAppService.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBSessionClassProvidable.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNServiceControllable.h>

@protocol MNAuthenticationManager;
@class ZRApplicationState, ZRTokenRefreshCoordinator, ZRHeaderRequestCoordinator, ZRBannerDataCache, ZRNetworkActivityDestroyer, NSString;

@interface FBMZeroRatingService : NSObject <FBAppService, FBSessionClassProvidable, MNServiceControllable> {

	id<MNAuthenticationManager> _authenticationManager;
	ZRApplicationState* _zeroRatingState;
	ZRTokenRefreshCoordinator* _zeroRatingTokenCoordinator;
	ZRHeaderRequestCoordinator* _zeroRatingHeaderRequestCoordinator;
	ZRBannerDataCache* _zeroRatingBannerDataCache;
	ZRNetworkActivityDestroyer* _zeroRatingNetworkActivityDestroyer;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)startAppService;
-(void)stopAppService;
-(void)signalAppServiceToHandleInitialSessionIdle;
-(unsigned)serviceStartupLevel;
-(id)initWithAuthenticationManager:(id)arg1 zeroRatingState:(id)arg2 zeroRatingBannerDataCache:(id)arg3 zeroRatingHeaderRequestCoordinator:(id)arg4 zeroRatingNetworkActivityDestroyer:(id)arg5 zeroRatingTokenCoordinator:(id)arg6 ;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end

