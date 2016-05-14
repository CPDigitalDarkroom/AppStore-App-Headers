/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNPresenceUpdateListening.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNPresenceValueCollectionSubscribing.h>

@protocol MNPresenceSubscribing, MNPresenceValueCollectionListener, OS_dispatch_queue, MNPresenceUpdateListening;
@class NSObject, FBTimeThrottler, NSMutableOrderedSet, NSMutableDictionary, NSString;

@interface MNPresenceValueCollection : NSObject <MNPresenceUpdateListening, MNPresenceValueCollectionSubscribing> {

	id<MNPresenceSubscribing> _presenceService;
	id<MNPresenceValueCollectionListener> _presenceValueListener;
	NSObject*<OS_dispatch_queue> _queue;
	FBTimeThrottler* _timeThrottler;
	id<MNPresenceUpdateListening> _dispatchedSelfAsListener;
	NSMutableOrderedSet* _subscribedUserIds;
	NSMutableDictionary* _userIdToPresenceMap;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didReceivePresenceUpdate:(id)arg1 ;
-(void)removeSubscriptionForUserWithId:(id)arg1 ;
-(void)addSubscriptionForUserWithId:(id)arg1 ;
-(id)initWithSerivce:(id)arg1 presenceValueListener:(id)arg2 minNumberOfSecondsBetweenCalls:(double)arg3 queue:(id)arg4 ;
-(id)currentlyCachedValues;
-(void)_notifyListener;
-(id)cachedPresenceForUserWithId:(id)arg1 ;
@end

