/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:45 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBFallbackIntentHandlerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBZeroRatingFenceNavigationDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBModalWebFlowDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBWebViewContainerControllerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBModalContainerViewControllerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBIntentHandler.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBSessionClassProvidable.h>

@protocol FBProvider;
@class FBFallbackIntentHandler, MNPaymentsIntentHandler, MNCommerceIntentHandler, MNRideServiceIntentHandler, MNForwardMessageIntentHandler, MNRidePromoIntentHandler, MNNavigationCoordinator, FBUserSession, ZRTariffedUrlBoundary, ZRTariffedUxSessionManager, MNConfigManager, MNWebViewControllerThemeConfigurer, MNAppThemeConfiguration, MNIntentHandlerConfiguration, FBAnalytics, NSString;

@interface MNIntentHandler : NSObject <FBFallbackIntentHandlerDelegate, FBZeroRatingFenceNavigationDelegate, FBModalWebFlowDelegate, FBWebViewContainerControllerDelegate, FBModalContainerViewControllerDelegate, FBIntentHandler, FBSessionClassProvidable> {

	FBFallbackIntentHandler* _fallbackHandler;
	MNPaymentsIntentHandler* _paymentsHandler;
	MNCommerceIntentHandler* _commerceHandler;
	MNRideServiceIntentHandler* _rideServiceHandler;
	MNForwardMessageIntentHandler* _forwardMessageIntentHandler;
	MNRidePromoIntentHandler* _ridePromoHandler;
	MNNavigationCoordinator* _navigationCoordinator;
	FBUserSession* _userSession;
	ZRTariffedUrlBoundary* _zrURLBoundary;
	ZRTariffedUxSessionManager* _zrSessionManager;
	id<FBProvider> _urlHandlerProvider;
	MNConfigManager* _configManager;
	MNWebViewControllerThemeConfigurer* _webVCThemeConfigurer;
	MNAppThemeConfiguration* _appThemeConfiguration;
	MNIntentHandlerConfiguration* _intentHandlerConfiguration;
	FBAnalytics* _analytics;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)handleIntent:(id)arg1 ;
-(char)_openURLIntent:(id)arg1 ;
-(void)_openWebViewForURL:(id)arg1 ;
-(id)_zeroRatingSentryWithSessionName:(id)arg1 forExternalURL:(id)arg2 ;
-(char)_openWebViewIntent:(id)arg1 ;
-(id)_webViewControllerForURL:(id)arg1 modal:(char)arg2 ;
-(void)_configureAppLinksForWebViewController:(id)arg1 withURL:(id)arg2 ;
-(void)_sendLinkshimLogRequestIfNecessaryForURL:(id)arg1 ;
-(id)_zeroRatingSentryForZeroRatedURL;
-(char)fallbackIntentHandler:(id)arg1 openWebURL:(id)arg2 ;
-(void)zeroRatingFence:(id)arg1 wantsToPresentInterstitialController:(id)arg2 ;
-(void)zeroRatingFence:(id)arg1 wantsToDismissInterstitialController:(id)arg2 ;
-(void)modalWebFlowControllerDidCancel:(id)arg1 ;
-(void)dismissWebViewContainerController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissModalContainerViewController:(id)arg1 ;
@end

