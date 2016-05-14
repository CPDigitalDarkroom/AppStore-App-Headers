/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:13 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNUserProviding.h>

@protocol MNUserMonitoring, MNUserQuerying, MNUserWriting;
@class MNUserStore, FBMessengerSyncEngineManager, MNSyncStoreCache, MNUserRequestHandlerChain, MNLegacySyncEngineManager, FBAnalytics;

@interface MNSyncEngineUserProvider : NSObject <MNUserProviding> {

	MNUserStore* _userStore;
	FBMessengerSyncEngineManager* _syncEngineManager;
	id<MNUserMonitoring> _userMonitor;
	id<MNUserQuerying> _userQuerier;
	id<MNUserWriting> _userWriter;
	MNSyncStoreCache* _syncStoreCache;
	MNUserRequestHandlerChain* _userRequestHandlerChain;
	MNLegacySyncEngineManager* _DEPRECATED_legacySyncEngineManger;
	FBAnalytics* _analytics;

}
-(id)DEPRECATED_legacySyncEngineManager;
-(id)friendListModelController;
-(id)userWriter;
-(id)userQuerier;
-(id)userMonitor;
-(id)userStoreForQueue:(id)arg1 ;
-(id)initWithSyncEngineManager:(id)arg1 userNetworkFetcherCreationBlock:(/*^block*/id)arg2 messagingStore:(id)arg3 messagingStoreDelayer:(id)arg4 networkActivityManager:(id)arg5 userFetchedAnnouncer:(id)arg6 analytics:(id)arg7 session:(id)arg8 ;
@end

