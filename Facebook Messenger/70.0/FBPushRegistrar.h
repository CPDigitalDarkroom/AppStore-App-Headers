/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:46 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPushRegistrationDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBAppService.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBSessionClassProvidable.h>

@protocol FBPushRegistrationRequestSender, FBPushUserSettings;
@class UIApplication, NSUserDefaults, NSNotificationCenter, FBUserSession, NSMutableArray, NSString;

@interface FBPushRegistrar : NSObject <FBPushRegistrationDelegate, FBAppService, FBSessionClassProvidable> {

	UIApplication* _application;
	NSUserDefaults* _userDefaults;
	NSNotificationCenter* _notificationCenter;
	id<FBPushRegistrationRequestSender> _requestSender;
	id<FBPushUserSettings> _userSettings;
	FBUserSession* _session;
	char _needsRegistrationWithFB;
	NSMutableArray* _fbRegistrationFailureBlocks;
	char _hasRegisteredPushIntentWithOS7OrOlder;
	char _hasRegisteredPushIntentWithOS8;
	double _lastPushReceivedTime;
	char _shouldUseInterstitialPushRegistration;
	char _allowPushInterstitalOnPad;
	NSString* _transmitterID;
	double _minBackoffInterval;
	double _lastFBRegistrationTime;

}

@property (assign,nonatomic) char hasRegisteredPushIntentWithOS; 
@property (assign,nonatomic) char hasRegisteredPushIntentWithOS7OrOlder; 
@property (assign,nonatomic) char hasRegisteredPushIntentWithOS8; 
@property (assign,nonatomic) double minBackoffInterval;                               //@synthesize minBackoffInterval=_minBackoffInterval - In the implementation block
@property (assign,nonatomic) double lastFBRegistrationTime;                           //@synthesize lastFBRegistrationTime=_lastFBRegistrationTime - In the implementation block
@property (assign,nonatomic) char shouldUseInterstitialPushRegistration;              //@synthesize shouldUseInterstitialPushRegistration=_shouldUseInterstitialPushRegistration - In the implementation block
@property (nonatomic,copy) NSString * transmitterID;                                  //@synthesize transmitterID=_transmitterID - In the implementation block
@property (assign,nonatomic) char allowPushInterstitalOnPad;                          //@synthesize allowPushInterstitalOnPad=_allowPushInterstitalOnPad - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)unregisterForPush;
-(char)hasMessagePreviews;
-(void)unregisterForRemoteNotificationsAndLog:(id)arg1 ;
-(void)setMessagePreviewSettingLocally:(char)arg1 ;
-(void)startAppService;
-(void)stopAppService;
-(void)signalAppServiceToHandleInitialSessionIdle;
-(char)eligibleForPushInterstitial;
-(unsigned)serviceStartupLevel;
-(void)updateLastPushReceivedTime;
-(void)setAllowPushInterstitalOnPad:(char)arg1 ;
-(void)setMinBackoffInterval:(double)arg1 ;
-(void)skipRegisterOnColdStart;
-(void)registerForPushWithNotificationSettings:(id)arg1 ;
-(void)registerForPush;
-(void)setMessagePreviews:(char)arg1 withFailureBlock:(/*^block*/id)arg2 ;
-(void)addFBRegistrationFailureBlock:(/*^block*/id)arg1 ;
-(char)hasRegisteredForPush;
-(void)registerRequestDidComplete:(id)arg1 ;
-(void)registerRequest:(id)arg1 DidFailWithError:(id)arg2 cancelled:(char)arg3 ;
-(void)unregisterRequestDidComplete;
-(void)unregisterRequestDidFailWithError:(id)arg1 cancelled:(char)arg2 ;
-(NSString *)transmitterID;
-(void)_applicationDidFinishEnteringForegroundAndIsNowIdle:(id)arg1 ;
-(char)shouldUseInterstitialPushRegistration;
-(char)_lastRegistrationTimeIsZero;
-(double)minBackoffInterval;
-(void)setTransmitterID:(NSString *)arg1 ;
-(char)hasRegisteredPushIntentWithOS8;
-(char)hasRegisteredPushIntentWithOS7OrOlder;
-(void)setHasRegisteredPushIntentWithOS8:(char)arg1 ;
-(void)setHasRegisteredPushIntentWithOS7OrOlder:(char)arg1 ;
-(void)onUserInitiatedPushRegistration:(id)arg1 ;
-(id)initWithApplication:(id)arg1 userDefaults:(id)arg2 notificationCenter:(id)arg3 requestSender:(id)arg4 userSettings:(id)arg5 session:(id)arg6 transmitterID:(id)arg7 ;
-(char)hasRegisteredPushIntentWithOS;
-(id)categoryForLoginApprovalPush;
-(void)setHasRegisteredPushIntentWithOS:(char)arg1 ;
-(void)_logWillRegisterForRemoteNotifications;
-(void)_logDidRegisterForRemoteNotificationPermissions;
-(char)_shouldRegisterTokenWithFB:(id)arg1 oldNotificationTypes:(unsigned)arg2 currentNotificationTypes:(unsigned)arg3 ;
-(char)_shouldRegisterTokenWithFB:(id)arg1 userNotificationType:(unsigned)arg2 ;
-(char)_shouldRegisterTokenWithFB:(id)arg1 remoteNotificationType:(unsigned)arg2 ;
-(id)_analyticsConvertToErrorStatus:(id)arg1 forErrorStatusPrefix:(id)arg2 ;
-(void)_checkRegisterForPushIfNecessary;
-(double)lastFBRegistrationTime;
-(void)setLastFBRegistrationTime:(double)arg1 ;
-(void)setShouldUseInterstitialPushRegistration:(char)arg1 ;
-(char)allowPushInterstitalOnPad;
-(void)dealloc;
-(void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2 ;
-(void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2 ;
-(void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2 ;
-(void)registerForRemoteNotifications;
-(char)shouldRegisterForPush;
@end

