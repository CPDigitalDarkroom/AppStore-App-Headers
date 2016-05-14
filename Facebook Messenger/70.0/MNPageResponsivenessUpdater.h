/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:14 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, FBAnalytics, FBGraphQLService, NSMutableDictionary, MNPageResponsivenessCache, MNPageResponsivenessUpdaterListenerAnnouncer;

@interface MNPageResponsivenessUpdater : NSObject {

	FBUserSession* _session;
	FBAnalytics* _analytics;
	FBGraphQLService* _graphQLService;
	NSMutableDictionary* _graphQLRequests;
	MNPageResponsivenessCache* _pageResponsivenessCache;
	MNPageResponsivenessUpdaterListenerAnnouncer* _pageResponsivenessUpdaterListenerAnnouncer;

}
-(void)runUpdateIfNecessaryForCanonicalThreadWithOtherUser:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 analytics:(id)arg2 pageResponsivenessCache:(id)arg3 responsivenessListenerAnnouncer:(id)arg4 ;
-(void)_fetchPageResponsivenessForUser:(id)arg1 ;
-(void)_processGraphQLResponse:(id)arg1 forUser:(id)arg2 ;
-(void)_stopTrackingRequestForUserId:(id)arg1 ;
@end

