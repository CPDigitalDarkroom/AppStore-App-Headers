/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNUpgradeNotificationToastViewDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBSessionClassProvidable.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBAutoUpdaterHandlerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBItmsHandlerDelegate.h>

@protocol FBToastPresenting, MNUpgradeNotificationToastControllerListener;
@class UIApplication, FBLazyCreator, FBUpdate, NSNotificationCenter, FBAnalytics, FBAlertViewCoordinator, NSString;

@interface MNUpgradeNotificationToastController : NSObject <MNUpgradeNotificationToastViewDelegate, FBSessionClassProvidable, FBAutoUpdaterHandlerDelegate, FBItmsHandlerDelegate> {

	UIApplication* _application;
	FBLazyCreator* _upgradeNotificationToastViewCreator;
	FBLazyCreator* _toastCreator;
	/*^block*/id _itmsCallback;
	FBUpdate* _update;
	NSNotificationCenter* _notificationCenter;
	FBAnalytics* _analytics;
	FBAlertViewCoordinator* _alertViewCoordinator;
	char _isToastWaitingToShow;
	id<FBToastPresenting> _toastPresenter;
	id<MNUpgradeNotificationToastControllerListener> _listener;

}

@property (nonatomic,retain) id<FBToastPresenting> toastPresenter;                                          //@synthesize toastPresenter=_toastPresenter - In the implementation block
@property (assign,nonatomic,__weak) id<MNUpgradeNotificationToastControllerListener> listener;              //@synthesize listener=_listener - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)setToastPresenter:(id<FBToastPresenting>)arg1 ;
-(id<FBToastPresenting>)toastPresenter;
-(id)initWithApplication:(id)arg1 notificationCenter:(id)arg2 analytics:(id)arg3 alertViewCoordinator:(id)arg4 ;
-(void)_showToast;
-(void)_showToastWithPresenter:(id)arg1 ;
-(void)_onForeground;
-(void)_observeWillEnterForegroundNotification;
-(void)_scheduleUpgradeSuccessfulLocalNotification;
-(void)_executePressedUpdate:(unsigned)arg1 ;
-(void)upgradeNotificationToastViewDidPressUpdate:(id)arg1 forUpgradeType:(unsigned)arg2 ;
-(void)autoUpdaterHandler:(id)arg1 didFinishProcessingUpdate:(id)arg2 error:(id)arg3 ;
-(void)autoUpdaterHandlerWillAutomaticallyRestart:(id)arg1 ;
-(void)itmsHandler:(id)arg1 shouldInstallUpdate:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)itmsHandler:(id)arg1 cancelledProcessingUpdate:(id)arg2 ;
-(void)_showError:(id)arg1 build:(id)arg2 ;
-(void)dealloc;
-(id<MNUpgradeNotificationToastControllerListener>)listener;
-(void)setListener:(id<MNUpgradeNotificationToastControllerListener>)arg1 ;
@end

