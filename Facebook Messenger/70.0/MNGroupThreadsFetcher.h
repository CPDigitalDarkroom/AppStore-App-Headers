/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:00 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBMSPThreadListFqlRefreshListener.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBClassProvidable.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNServiceControllable.h>

@protocol FBProvider;
@class MNGraphQLGroupThreadKeysFetcher, FBMThreadStore, MNUserSettings, FBMSPErrorRetryManager, MNOmnipickerGating, MNGroupThreadsFetchingAnalyticsLogger, NSString;

@interface MNGroupThreadsFetcher : NSObject <FBMSPThreadListFqlRefreshListener, FBClassProvidable, MNServiceControllable> {

	id<FBProvider> _groupThreadKeysFetcherProvider;
	MNGraphQLGroupThreadKeysFetcher* _groupThreadKeysFetcher;
	FBMThreadStore* _threadStore;
	MNUserSettings* _userSettings;
	FBMSPErrorRetryManager* _spErrorRetryManager;
	MNOmnipickerGating* _omnipickerGating;
	MNGroupThreadsFetchingAnalyticsLogger* _logger;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_stopObservers;
-(void)_startObservers;
-(void)syncProtocolWillPerformThreadListFqlRefresh;
-(void)syncProtocolThreadListFqlRefreshSucceeded;
-(void)syncProtocolThreadListFqlRefreshFailedWithError:(id)arg1 ;
-(void)syncProtocolThreadListAdditionalInformationRefreshSucceeded;
-(id)initWithGroupThreadKeysFetcherProvider:(id)arg1 threadStore:(id)arg2 userSettings:(id)arg3 spErrorRetryManager:(id)arg4 omnipickerGating:(id)arg5 ;
-(char)_shouldFetchGroupThreads;
-(void)_fetchGroupThreadsWithSource:(int)arg1 ;
-(void)_didFetchMemModelMessageThreadsConnection:(id)arg1 ;
-(void)_didFailGroupThreadKeysFetchWithError:(id)arg1 ;
-(void)_handleThreadStoreSuccessWithNumThreadKeys:(int)arg1 response:(id)arg2 ;
-(void)_didFailThreadStoreRequestWithError:(id)arg1 ;
-(void)_handleThreadStoreProgressUpdateWithNumThreadKeys:(int)arg1 preliminaryResult:(id)arg2 longOperationDidBegin:(char)arg3 ;
-(void)dealloc;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end

