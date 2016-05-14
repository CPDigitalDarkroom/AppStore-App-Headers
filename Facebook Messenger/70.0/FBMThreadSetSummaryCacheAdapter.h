/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:02 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNThreadSummaryCaching.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBMThreadSetCacheListener.h>

@protocol MNAuthenticationManager;
@class FBMThreadSet, FBMThreadNameFormatter, MNThreadSummaryCache, NSString;

@interface FBMThreadSetSummaryCacheAdapter : NSObject <MNThreadSummaryCaching, FBMThreadSetCacheListener> {

	FBMThreadSet* _threadSet;
	id<MNAuthenticationManager> _authManager;
	FBMThreadNameFormatter* _threadNameFormatter;
	MNThreadSummaryCache* _summaryCache;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)threadSummaryForThreadKey:(id)arg1 ;
-(id)allThreadSummaries;
-(void)updateThreadSummaryWithAppliedSummaryUpdatesInfo:(id)arg1 sourceMessageUpdates:(id)arg2 forThreadKey:(id)arg3 ;
-(void)setThreadSummary:(id)arg1 forThreadKey:(id)arg2 ;
-(void)purgeAll;
-(void)willAddThread:(id)arg1 ;
-(void)willRemoveThread:(id)arg1 ;
-(void)willRemoveAllThreads;
-(id)initWithThreadSet:(id)arg1 authManager:(id)arg2 threadNameFormatter:(id)arg3 threadSubscribingAnnouncer:(id)arg4 singleUpdateAnnouncer:(id)arg5 annotatedUpdateAnnouncer:(id)arg6 ;
@end

