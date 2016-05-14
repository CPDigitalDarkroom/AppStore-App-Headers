/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:43 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBSessionClassProvidable.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNLastActivityTracking.h>

@protocol FBClock;
@class NSNotificationCenter, NSMutableDictionary, MNLastActivityTrackingListeningAnnouncer, NSString;

@interface MNTypingLastActivityTracker : NSObject <FBSessionClassProvidable, MNLastActivityTracking> {

	NSNotificationCenter* _notificationCenter;
	id<FBClock> _clock;
	NSMutableDictionary* _personIdToLastActiveMap;
	NSMutableDictionary* _personIdToLastUpdateMap;
	MNLastActivityTrackingListeningAnnouncer* _announcer;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_startNotificationObservations;
-(void)_stopNotificationObservations;
-(id)lastActivityDateForPersonWithId:(id)arg1 ;
-(id)lastUpdateTimeForPersonWithId:(id)arg1 ;
-(void)addLastActivityTrackingListener:(id)arg1 ;
-(void)removeLastActivityTrackingListener:(id)arg1 ;
-(id)personIdToLastActivityMap;
-(id)initWithNotificationCenter:(id)arg1 clock:(id)arg2 ;
-(void)_didReceiveTypingNotification:(id)arg1 ;
-(void)_updateLastActiveTimeForPersonWithId:(id)arg1 typingState:(int)arg2 ;
-(void)dealloc;
@end

