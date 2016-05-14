/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:39 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBLocalContactSearchFetchRunnerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBContactsSearch.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBClassProvidable.h>

@protocol FBCancelable, FBContactsSearchDelegate, FBLocalContactSearchFetchRunning;
@class FBSearchResultsFilterer, FBContactSearchQuery, NSArray, NSString, NSNotificationCenter, FBAnalytics;

@interface FBLocalContactsSearch : NSObject <FBLocalContactSearchFetchRunnerDelegate, FBContactsSearch, FBClassProvidable> {

	id<FBCancelable> _searchRequest;
	FBSearchResultsFilterer* _resultsFilterer;
	id<FBContactsSearchDelegate> _delegate;
	FBContactSearchQuery* _currentQuery;
	NSArray* _sortedUsers;
	NSString* _currentSearch;
	NSNotificationCenter* _notificationCenter;
	id<FBLocalContactSearchFetchRunning> _fetchRunner;
	FBAnalytics* _analytics;
	NSString* _analyticsJobUuid;
	NSString* _analyticsQueryUuid;
	unsigned long long _searchStartTime;

}

@property (nonatomic,retain) NSNotificationCenter * notificationCenter;                     //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,retain) id<FBLocalContactSearchFetchRunning> fetchRunner;              //@synthesize fetchRunner=_fetchRunner - In the implementation block
@property (nonatomic,retain) FBAnalytics * analytics;                                       //@synthesize analytics=_analytics - In the implementation block
@property (nonatomic,copy) NSString * analyticsJobUuid;                                     //@synthesize analyticsJobUuid=_analyticsJobUuid - In the implementation block
@property (nonatomic,copy) NSString * analyticsQueryUuid;                                   //@synthesize analyticsQueryUuid=_analyticsQueryUuid - In the implementation block
@property (assign,nonatomic) unsigned long long searchStartTime;                            //@synthesize searchStartTime=_searchStartTime - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sortedUsers;                                  //@synthesize sortedUsers=_sortedUsers - In the implementation block
@property (nonatomic,copy,readonly) NSString * currentSearch;                               //@synthesize currentSearch=_currentSearch - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<FBContactsSearchDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) FBContactSearchQuery * currentQuery;                    //@synthesize currentQuery=_currentQuery - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(void)setAnalytics:(FBAnalytics *)arg1 ;
-(char)shouldHideResult:(id)arg1 ;
-(void)setNotificationCenter:(NSNotificationCenter *)arg1 ;
-(FBAnalytics *)analytics;
-(char)hasPendingSearchOperation;
-(void)refreshSearch:(id)arg1 ;
-(id)resultForRow:(int)arg1 inContactSection:(int)arg2 ;
-(id)sectionsInSearch;
-(int)numberOfSearchResultsInSection:(int)arg1 ;
-(void)didSelectRow:(int)arg1 inContactSection:(int)arg2 ;
-(void)setupAnalytics:(id)arg1 jobKey:(id)arg2 ;
-(void)cancelPendingSearchOperation;
-(char)hasPendingSearchOperationForSection:(int)arg1 ;
-(void)contactSearchFetchRequest:(id)arg1 didFinishSearchWithSortedUsers:(id)arg2 ;
-(void)contactSearchFetchRequestDidCancel:(id)arg1 ;
-(NSString *)currentSearch;
-(NSArray *)sortedUsers;
-(id)initWithNotificationCenter:(id)arg1 fetchRunner:(id)arg2 ;
-(void)setAnalyticsJobUuid:(NSString *)arg1 ;
-(void)setAnalyticsQueryUuid:(NSString *)arg1 ;
-(void)setSearchStartTime:(unsigned long long)arg1 ;
-(void)setFilteredResults:(id)arg1 ;
-(void)setAndSortUsers:(id)arg1 ;
-(id<FBLocalContactSearchFetchRunning>)fetchRunner;
-(void)setFetchRunner:(id<FBLocalContactSearchFetchRunning>)arg1 ;
-(NSString *)analyticsJobUuid;
-(NSString *)analyticsQueryUuid;
-(unsigned long long)searchStartTime;
-(void)setDelegate:(id<FBContactsSearchDelegate>)arg1 ;
-(void)dealloc;
-(id<FBContactsSearchDelegate>)delegate;
-(void)search:(id)arg1 ;
-(FBContactSearchQuery *)currentQuery;
-(NSNotificationCenter *)notificationCenter;
-(void)clearResults;
-(id)titleForHeaderInSection:(int)arg1 ;
@end

