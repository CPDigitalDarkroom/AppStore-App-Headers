/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNAbstractComposerTrayExtension.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNRideServiceProviderListFetcherDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPopoverControllerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNRideServicePresenterDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNRideServiceProviderListViewControllerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBClassProvidable.h>

@protocol MNComposerExtensionSendDelegate, MNComposerExtensionDelegate;
@class FBImageDownloader, MNBusinessNavigationHandler, MNComposerExtensionTrayPresentationStrategy, FBUserSession, FBLazyCreator, MNRideServiceProviderListFetcher, FBPopoverController, NSTimer, MNRideServiceProviderListViewController, FBMSyncedThreadKey, NSString;

@interface MNComposerRideServiceExtension : MNAbstractComposerTrayExtension <MNRideServiceProviderListFetcherDelegate, FBPopoverControllerDelegate, MNRideServicePresenterDelegate, MNRideServiceProviderListViewControllerDelegate, FBClassProvidable> {

	FBImageDownloader* _imageDownloader;
	MNBusinessNavigationHandler* _navigationHandler;
	MNComposerExtensionTrayPresentationStrategy* _presentationStrategy;
	FBUserSession* _session;
	FBLazyCreator* _rideServicePresenterCreator;
	FBLazyCreator* _locationRequestHandlerCreator;
	MNRideServiceProviderListFetcher* _providerListFetcher;
	FBPopoverController* _popoverController;
	NSTimer* _showLoadingIndicatorTimer;
	MNRideServiceProviderListViewController* _providerListViewController;
	FBMSyncedThreadKey* _threadKey;
	char _providerListFetcherRequestTentativelyCancelled;
	id<MNComposerExtensionSendDelegate> _sendDelegate;
	id<MNComposerExtensionDelegate> _delegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)fb_popoverControllerDidDismissPopover:(id)arg1 withInteraction:(unsigned)arg2 ;
-(id)_composerIcon;
-(char)shouldPromote;
-(void)didSelect:(char)arg1 source:(int)arg2 ;
-(char)shouldPresent:(char)arg1 source:(int)arg2 ;
-(id)presentationStrategy;
-(char)isEligible;
-(id)sendDelegate;
-(void)setSendDelegate:(id)arg1 ;
-(id)initWithSession:(id)arg1 navigationHandler:(id)arg2 imageDownloader:(id)arg3 rideServicePresenterProvider:(id)arg4 locationRequestHandlerProvider:(id)arg5 ;
-(void)_startFetchingRideServiceProviders;
-(char)_multipleProvidersEnabled;
-(id)_viewControllerForPresentation;
-(void)_showLoadingViewWithDelay;
-(void)_showRideProviderListInTrayWithData:(id)arg1 ;
-(char)_threadIsWithRideProvider;
-(id)_currentRideServiceForRideProvidersData:(id)arg1 ;
-(void)_showRideServiceUnavailableAlert;
-(id)_getProviderListViewController;
-(void)_showLoadingViewTimerDidFire;
-(void)rideServiceProviderListFetcher:(id)arg1 didFinishFetchingWithData:(id)arg2 ;
-(void)rideServiceProviderListFetcher:(id)arg1 didFailFetchingWithError:(id)arg2 ;
-(void)rideServicePresenterDidRequestRide:(id)arg1 ;
-(void)rideServicePresenter:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)rideServicePresenter:(id)arg1 didDismissViewController:(id)arg2 ;
-(void)rideServiceProviderListViewController:(id)arg1 didSelectProviderWithData:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(int)category;
-(id)tabBarItem;
-(void)setUp;
-(id)extensionIdentifier;
@end

