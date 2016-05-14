/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBSessionClassProvidable.h>

@class MNOnlineStatusListenerAnnouncer, MNUserSettings, MNOnlineStatusMQTTSender, FBUserSession, NSString;

@interface MNOnlineStatusManager : NSObject <FBSessionClassProvidable> {

	MNOnlineStatusListenerAnnouncer* _announcer;
	char _online;
	char _started;
	MNUserSettings* _userSettings;
	MNOnlineStatusMQTTSender* _onlineStatusSender;
	FBUserSession* _session;
	id _mqttConnectedChangedObserver;

}

@property (nonatomic,retain) MNUserSettings * userSettings;                              //@synthesize userSettings=_userSettings - In the implementation block
@property (nonatomic,retain) MNOnlineStatusMQTTSender * onlineStatusSender;              //@synthesize onlineStatusSender=_onlineStatusSender - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                    //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) id mqttConnectedChangedObserver;                            //@synthesize mqttConnectedChangedObserver=_mqttConnectedChangedObserver - In the implementation block
@property (assign,nonatomic) char started;                                               //@synthesize started=_started - In the implementation block
@property (nonatomic,readonly) char online;                                              //@synthesize online=_online - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)setUserSettings:(MNUserSettings *)arg1 ;
-(void)setOnline:(char)arg1 userOverride:(char)arg2 ;
-(char)getOnline;
-(void)startOnlineStatusManager;
-(void)stopOnlineStatusManager;
-(MNOnlineStatusMQTTSender *)onlineStatusSender;
-(void)setOnlineStatusSender:(MNOnlineStatusMQTTSender *)arg1 ;
-(id)initWithUserSettings:(id)arg1 onlineStatusSender:(id)arg2 session:(id)arg3 ;
-(void)setMqttConnectedChangedObserver:(id)arg1 ;
-(char)online;
-(id)mqttConnectedChangedObserver;
-(FBUserSession *)session;
-(void)dealloc;
-(void)removeListener:(id)arg1 ;
-(void)setSession:(FBUserSession *)arg1 ;
-(void)setStarted:(char)arg1 ;
-(void)addListener:(id)arg1 ;
-(char)started;
-(MNUserSettings *)userSettings;
@end

