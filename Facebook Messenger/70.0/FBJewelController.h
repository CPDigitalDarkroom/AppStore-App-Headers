/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:12 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBNotificationsMQTTListener.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBAppService.h>

@class NSNotificationCenter, FBApplication, FBUserSession, FBMQTTManager, NSMutableDictionary, NSDate, FBKVOController, FBJewelManager, NSString;

@interface FBJewelController : NSObject <FBNotificationsMQTTListener, FBAppService> {

	NSNotificationCenter* _notificationCenter;
	FBDictionaryRegistry* _jewelManagerRegistry;
	FBApplication* _application;
	FBUserSession* _session;
	FBMQTTManager* _mqttManager;
	NSMutableDictionary* _mqttListeners;
	NSDate* _timeOnLastOpen;
	FBKVOController* _KVOController;
	FBJewelManager* _friendRequestJewelManager;
	FBJewelManager* _messagesJewelManager;
	char _running;
	unsigned _notificationJewelUpdatesSinceLaunch;
	unsigned _notificationJewelUpdatesSinceLastForegrounding;
	char _friendRequestBadgingEnabled;
	char _messagesBadgingEnabled;
	char _messagesApplicationBadgingEnabled;
	char _videoHomeBadgingEnabled;
	char _isFriendRequestPushNotificationClickingThrough;
	char _isPushNotificationClickingThrough;
	FBJewelManager* _notificationJewelManager;
	FBJewelManager* _redSpaceJewelManager;
	FBJewelManager* _C2CMarketplaceJewelManager;
	FBJewelManager* _videoHomeJewelManager;

}

@property (assign,nonatomic) char friendRequestBadgingEnabled;                                 //@synthesize friendRequestBadgingEnabled=_friendRequestBadgingEnabled - In the implementation block
@property (assign,nonatomic) char messagesBadgingEnabled;                                      //@synthesize messagesBadgingEnabled=_messagesBadgingEnabled - In the implementation block
@property (assign,nonatomic) char messagesApplicationBadgingEnabled;                           //@synthesize messagesApplicationBadgingEnabled=_messagesApplicationBadgingEnabled - In the implementation block
@property (assign,nonatomic) char videoHomeBadgingEnabled;                                     //@synthesize videoHomeBadgingEnabled=_videoHomeBadgingEnabled - In the implementation block
@property (nonatomic,readonly) unsigned friendRequestVisibleBadgeCount; 
@property (nonatomic,readonly) unsigned notificationVisibleBadgeCount; 
@property (nonatomic,readonly) unsigned messagesVisibleBadgeCount; 
@property (nonatomic,readonly) unsigned redSpaceVisibleBadgeCount; 
@property (nonatomic,readonly) unsigned C2CMarketplaceVisibleBadgeCount; 
@property (nonatomic,readonly) unsigned videoHomeVisibleBadgeCount; 
@property (nonatomic,readonly) FBJewelManager * friendRequestJewelManager;                     //@synthesize friendRequestJewelManager=_friendRequestJewelManager - In the implementation block
@property (nonatomic,readonly) FBJewelManager * notificationJewelManager;                      //@synthesize notificationJewelManager=_notificationJewelManager - In the implementation block
@property (nonatomic,readonly) FBJewelManager * redSpaceJewelManager;                          //@synthesize redSpaceJewelManager=_redSpaceJewelManager - In the implementation block
@property (nonatomic,readonly) FBJewelManager * C2CMarketplaceJewelManager;                    //@synthesize C2CMarketplaceJewelManager=_C2CMarketplaceJewelManager - In the implementation block
@property (nonatomic,readonly) FBJewelManager * videoHomeJewelManager;                         //@synthesize videoHomeJewelManager=_videoHomeJewelManager - In the implementation block
@property (assign,nonatomic) char isFriendRequestPushNotificationClickingThrough;              //@synthesize isFriendRequestPushNotificationClickingThrough=_isFriendRequestPushNotificationClickingThrough - In the implementation block
@property (assign,nonatomic) char isPushNotificationClickingThrough;                           //@synthesize isPushNotificationClickingThrough=_isPushNotificationClickingThrough - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startAppService;
-(void)stopAppService;
-(void)signalAppServiceToHandleInitialSessionIdle;
-(unsigned)serviceStartupLevel;
-(unsigned)messagesVisibleBadgeCount;
-(int)_friendRequestsBadgeValue;
-(int)_notificationBadgeValue;
-(int)_messagesBadgeValue;
-(int)_videoHomeBadgeValue;
-(void)_updateApplicationIconBadgeNumber:(id)arg1 ;
-(void)_logNotificationJewelUpdateTimeIfRequired;
-(void)_increaseNotificationJewelUpdateCounters;
-(void)_updateNotificationBadgeCount;
-(void)setFriendRequestJewelBadgeCount:(unsigned)arg1 ;
-(void)setMessageJewelBadgeCount:(unsigned)arg1 ;
-(void)setVideoHomeJewelBadgeCount:(unsigned)arg1 ;
-(void)_applicationFinishedEnteringForegroundAndIsNowIdle:(id)arg1 ;
-(void)_messageBadgingDidDisable:(id)arg1 ;
-(void)_messageBadgingDidEnable:(id)arg1 ;
-(void)clearMessageJewelBadgeCount;
-(void)_handleMQTTNotificationForNewFriendRequest;
-(void)_handleMQTTNotificationForRemovedFriendRequest:(id)arg1 ;
-(void)_handleMQTTNotificationForFriendRequestsSeen;
-(void)_notificationBadgingDidDisable:(id)arg1 ;
-(void)_notificationBadgingDidEnable:(id)arg1 ;
-(void)_updateMarketplaceNotifications;
-(void)clearVideoHomeJewelBadgeCount;
-(void)_videoHomeBadgingDidDisable;
-(void)_videoHomeBadgingDidEnable;
-(void)clearFriendJewelBadgeCount;
-(void)setMessagesBadgingEnabled:(char)arg1 ;
-(void)setVideoHomeBadgingEnabled:(char)arg1 ;
-(void)_syncWithReason:(int)arg1 ;
-(void)_logJewelConsistencyInState:(int)arg1 ;
-(unsigned)notificationVisibleBadgeCount;
-(void)setRedSpaceJewelBadgeCount:(unsigned)arg1 ;
-(void)setC2CMarketplaceJewelBadgeCount:(unsigned)arg1 ;
-(void)notificationsUpdatesAvailable;
-(id)initWithNotificationCenter:(id)arg1 jewelManagerRegistry:(FBDictionaryRegistry*)arg2 badgeFilterType:(unsigned)arg3 application:(id)arg4 session:(id)arg5 ;
-(void)setMessagesApplicationBadgingEnabled:(char)arg1 ;
-(unsigned)friendRequestVisibleBadgeCount;
-(unsigned)redSpaceVisibleBadgeCount;
-(unsigned)C2CMarketplaceVisibleBadgeCount;
-(unsigned)videoHomeVisibleBadgeCount;
-(void)setFriendRequestBadgingEnabled:(char)arg1 ;
-(char)friendRequestBadgingEnabled;
-(char)messagesBadgingEnabled;
-(char)messagesApplicationBadgingEnabled;
-(char)videoHomeBadgingEnabled;
-(FBJewelManager *)friendRequestJewelManager;
-(FBJewelManager *)notificationJewelManager;
-(FBJewelManager *)redSpaceJewelManager;
-(FBJewelManager *)C2CMarketplaceJewelManager;
-(FBJewelManager *)videoHomeJewelManager;
-(char)isFriendRequestPushNotificationClickingThrough;
-(void)setIsFriendRequestPushNotificationClickingThrough:(char)arg1 ;
-(char)isPushNotificationClickingThrough;
-(void)setIsPushNotificationClickingThrough:(char)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
@end

