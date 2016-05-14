/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:02 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNThreadSummarySubscribing.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNThreadSummaryOptimisticCacheUpdateListening.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBSessionClassProvidable.h>

@protocol MNThreadSummaryOptimisticCacheUpdateListening;
@class MNBadgeCountSourceAdapter, MNBadgeCountUpdateService, MNThreadSummarySubscribingAnnouncer, MNThreadSummaryCacheThreadListFilterer, NSString;

@interface FBMSyncedInboxBadgeCounter : NSObject <MNThreadSummarySubscribing, MNThreadSummaryOptimisticCacheUpdateListening, FBSessionClassProvidable> {

	MNBadgeCountSourceAdapter* _badgeCountAdapter;
	MNBadgeCountUpdateService* _badgeCountUpdateService;
	MNThreadSummarySubscribingAnnouncer* _threadSummarySubscribingAnnouncer;
	MNThreadSummaryCacheThreadListFilterer* _threadListFilterer;
	id<MNThreadSummaryOptimisticCacheUpdateListening> _dispatchedOptimisticUpdateListener;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)threadKeysIncludedInCount;
-(void)didApplyUpdates:(id)arg1 toThreadSummary:(id)arg2 ;
-(void)didDeleteThreadWithKey:(id)arg1 ;
-(void)didReplaceThreadSummary:(id)arg1 withThreadSummary:(id)arg2 forThreadKey:(id)arg3 ;
-(void)didUpdateOptimisticStateForThreadKey:(id)arg1 ;
-(void)didUpdateOptimisticStateForAllThreadKeys;
-(void)_recomputeUnreadThreadKeys;
-(id)initWithThreadListFilterer:(id)arg1 threadSummarySubscribingAnnouncer:(id)arg2 optimisticUpdateAnnouncer:(id)arg3 badgeCountUpdateService:(id)arg4 ;
-(char)_isBadgeableThreadSummary:(id)arg1 ;
-(id)_allThreadKeysDebugStr;
-(NSString *)description;
-(unsigned)badgeCount;
@end

