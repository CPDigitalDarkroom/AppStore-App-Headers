/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNPresenceSubscribing.h>

@protocol MNPresenceUpdating;
@class MNActiveParticipantSet, MNMQTTPresenceSubscriptionMonitor, MNPresenceSubscriptionUpdateListenerCoordinator, MNSyncPresenceTracker, MNPresenceCache, MNMQTTPersonSyncEventProcessor, MNMQTTPresenceUpdateListeningAnnouncer, MNLastActivityLoggerScheduler, NSString;

@interface MNPresenceSubscriptionService : NSObject <MNPresenceSubscribing> {

	MNActiveParticipantSet* _activeParticipantSet;
	MNMQTTPresenceSubscriptionMonitor* _presenceSubscriptionMonitor;
	MNPresenceSubscriptionUpdateListenerCoordinator* _updateListenerCoordinator;
	MNSyncPresenceTracker* _syncPresenceTracker;
	MNPresenceCache* _presenceCache;
	MNMQTTPersonSyncEventProcessor* _personSyncEventProcessor;
	MNMQTTPresenceUpdateListeningAnnouncer* _mqttPresenceEventAnnouncer;
	id<MNPresenceUpdating> _updateWriter;
	MNLastActivityLoggerScheduler* _lastActivityLoggerScheduler;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removePresenceUpdateListener:(id)arg1 forPersonWithId:(id)arg2 ;
-(void)addPresenceUpdateListener:(id)arg1 forPersonWithId:(id)arg2 ;
-(void)removeAllPresenceUpdateSubscriptionsForListener:(id)arg1 ;
-(void)startWithLastActiveTrackers:(id)arg1 customUpdaterCreationBlock:(/*^block*/id)arg2 ;
-(void)addPresenceUpdateListenerForAllPeople:(id)arg1 ;
-(void)removePresenceUpdateListenerForAllPeople:(id)arg1 ;
-(id)initWithActiveParticipantSet:(id)arg1 analytics:(id)arg2 application:(id)arg3 notificationCenter:(id)arg4 mqttPresenceEventAnnouncer:(id)arg5 ;
-(id)onlineUserIds;
-(void)stop;
@end

