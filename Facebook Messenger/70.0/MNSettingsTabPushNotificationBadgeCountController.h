/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:48 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBSessionClassProvidable.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNTabBadgeCountController.h>

@class MNTabBadgeCountControllerListenerAnnouncer, UIApplication, FBUserSession, NSString;

@interface MNSettingsTabPushNotificationBadgeCountController : NSObject <FBSessionClassProvidable, MNTabBadgeCountController> {

	MNTabBadgeCountControllerListenerAnnouncer* _tabBadgeCountControllerListenerAnnouncer;
	UIApplication* _application;
	FBUserSession* _session;
	int _badgeCount;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int badgeCount;                      //@synthesize badgeCount=_badgeCount - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_startObservingPushNotificationStateChanges;
-(void)_stopObservingPushNotificationStateChanges;
-(id)initWithUserSession:(id)arg1 tabBadgeCountControllerListenerAnnouncer:(id)arg2 application:(id)arg3 ;
-(void)_systemNotificationStateChangedToOff;
-(void)_systemNotificationStateChangedToOn;
-(void)addTabBadgeCountControllerListener:(id)arg1 ;
-(void)removeTabBadgeCountControllerListener:(id)arg1 ;
-(void)_updateBadgeCount;
-(void)dealloc;
-(void)setBadgeCount:(int)arg1 ;
-(int)badgeCount;
@end

