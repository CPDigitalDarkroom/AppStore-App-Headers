/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:15 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBStreamListener.h>

@class FBUserSession, NSMutableDictionary, FBPersistentCacheExperimentContext, FBUserPreferences, FBSavedDashboardStoreManagerListenerAnnouncer, FBStream, NSString;

@interface FBSavedDashboardStoreManager : NSObject <FBStreamListener> {

	FBUserSession* _session;
	NSMutableDictionary* _storeDictionary;
	FBPersistentCacheExperimentContext* _experimentContext;
	FBUserPreferences* _preferences;
	FBSavedDashboardStoreManagerListenerAnnouncer* _announcer;
	FBStream* _currentStream;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cachedEdgesForSection:(id)arg1 ;
-(void)prefetchEdgesForSection:(id)arg1 numberOfEdges:(int)arg2 ;
-(id)_connectionWithTargetID:(id)arg1 session:(id)arg2 ;
-(id)_noResultsKeyForSection:(id)arg1 ;
-(id)savedDashboardStoreForSection:(id)arg1 ;
-(void)recordNoResultsForSection:(id)arg1 hasNoResults:(char)arg2 ;
-(char)hasNoResultsStateForSection:(id)arg1 ;
-(void)stream:(id)arg1 didFinishLoading:(unsigned)arg2 withResults:(id)arg3 requestAnalyticsUUID:(id)arg4 ;
-(id)initWithSession:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

