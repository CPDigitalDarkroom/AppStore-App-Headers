/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:48 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBClassProvidable.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNServiceControllable.h>

@protocol MNAuthenticationManager, FBReachabilityListener;
@class FBReachabilityAnnouncer, MNConfigManager, MNThreadSummaryCacheThreadListFilterer, FBMThreadStore, FBMFetchedThreadKeySet, FBAnalytics, NSString;

@interface MNMessagesPrefetcherService : NSObject <FBClassProvidable, MNServiceControllable> {

	FBReachabilityAnnouncer* _reachabilityAnnouncer;
	MNConfigManager* _configManager;
	MNThreadSummaryCacheThreadListFilterer* _threadListFilterer;
	FBMThreadStore* _threadStore;
	FBMFetchedThreadKeySet* _fetchedThreadKeySet;
	FBAnalytics* _analytics;
	id<MNAuthenticationManager> _authenticationManager;
	id<FBReachabilityListener> _queueDispatcher;
	char _isRunning;
	char _didMakeInitialFetch;
	unsigned _reachabilityState;
	unsigned long _threadStoreRequestId;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)reachabilityStateChangedTo:(unsigned)arg1 from:(unsigned)arg2 ;
-(void)downloadBandwidthStateChangedTo:(unsigned)arg1 from:(unsigned)arg2 ;
-(void)uploadBandwidthStateChangedTo:(unsigned)arg1 from:(unsigned)arg2 ;
-(void)latencyStateChangedTo:(unsigned)arg1 from:(unsigned)arg2 ;
-(id)initWithReachabilityAnnouncer:(id)arg1 configManager:(id)arg2 threadListFilterer:(id)arg3 threadStore:(id)arg4 fetchedThreadKeySet:(id)arg5 analytics:(id)arg6 authenticationManager:(id)arg7 ;
-(void)_removeReachabilityAnnouncerListener;
-(void)_addReachabilityAnnouncerListenerIfGKEnabled;
-(void)_initialFetchThreadMessagesIfReady;
-(id)_buildRequestFiltersSetWithNumThreads:(int)arg1 maxThreadsToScan:(int)arg2 ;
-(void)_handleThreadStoreSuccess:(id)arg1 ;
-(void)_handleThreadStoreFailureWithError:(id)arg1 ;
-(void)_fetchThreadMessagesIfReady;
-(void)_fetchThreadMessages;
-(void)dealloc;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end

