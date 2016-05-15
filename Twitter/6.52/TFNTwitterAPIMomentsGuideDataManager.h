/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:39 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFNTwitterBaseMomentsGuideManager.h>

@protocol TFNTwitterMomentSportEventsDataManager, TFNTwitterMomentsGuideFetcher, TFNTwitterMomentsNavigationFetcher;
@class NSError, TFNTwitterAccount, NSDate;

@interface TFNTwitterAPIMomentsGuideDataManager : TFNTwitterBaseMomentsGuideManager {

	char _isFetching;
	char _loadCapsuleContents;
	NSError* _error;
	id<TFNTwitterMomentSportEventsDataManager> _sportEventManager;
	id<TFNTwitterMomentsGuideFetcher> _momentsGuideFetcher;
	id<TFNTwitterMomentsNavigationFetcher> _navigationFetcher;
	TFNTwitterAccount* _account;
	NSDate* _lastFetchDate;

}

@property (nonatomic,retain) id<TFNTwitterMomentsGuideFetcher> momentsGuideFetcher;                 //@synthesize momentsGuideFetcher=_momentsGuideFetcher - In the implementation block
@property (nonatomic,retain) id<TFNTwitterMomentsNavigationFetcher> navigationFetcher;              //@synthesize navigationFetcher=_navigationFetcher - In the implementation block
@property (assign,nonatomic,__weak) TFNTwitterAccount * account;                                    //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) char isFetching;                                                       //@synthesize isFetching=_isFetching - In the implementation block
@property (nonatomic,retain) NSDate * lastFetchDate;                                                //@synthesize lastFetchDate=_lastFetchDate - In the implementation block
@property (nonatomic,retain) NSError * error;                                                       //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) char loadCapsuleContents;                                              //@synthesize loadCapsuleContents=_loadCapsuleContents - In the implementation block
-(void)fetchMomentsGuidePolling:(char)arg1 ;
-(void)fetchNavigation;
-(id)sportEventManager;
-(NSDate *)lastFetchDate;
-(id<TFNTwitterMomentsGuideFetcher>)momentsGuideFetcher;
-(void)setLastFetchDate:(NSDate *)arg1 ;
-(id<TFNTwitterMomentsNavigationFetcher>)navigationFetcher;
-(void)setCategoryID:(id)arg1 ;
-(char)loadCapsuleContents;
-(void)setLoadCapsuleContents:(char)arg1 ;
-(id)initWithMomentsGuideFetcher:(id)arg1 navigationFetcher:(id)arg2 account:(id)arg3 sportEventManager:(id)arg4 loadCapsuleContents:(char)arg5 ;
-(id)createDataManagerForCapsule:(id)arg1 ;
-(id)createDataManagerForMomentID:(id)arg1 ;
-(id)createChildGuideForCategoryID:(id)arg1 ;
-(void)setMomentsGuideFetcher:(id<TFNTwitterMomentsGuideFetcher>)arg1 ;
-(void)setNavigationFetcher:(id<TFNTwitterMomentsNavigationFetcher>)arg1 ;
-(NSError *)error;
-(char)isFetching;
-(void)setIsFetching:(char)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(TFNTwitterAccount *)account;
@end

