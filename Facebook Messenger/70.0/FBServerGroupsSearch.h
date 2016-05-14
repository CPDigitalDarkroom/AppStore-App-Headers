/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:39 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBServerGroupsFetcherDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBContactsSearch.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBClassProvidable.h>

@protocol FBContactsSearchDelegate;
@class FBServerGroupsSearchFetcher, NSString, FBAnalytics, FBUserSession, FBSearchResultsFilterer, FBContactSearchQuery, NSArray, FBServerGroupsSearchCache;

@interface FBServerGroupsSearch : NSObject <FBServerGroupsFetcherDelegate, FBContactsSearch, FBClassProvidable> {

	FBServerGroupsSearchFetcher* _fetcher;
	NSString* _fbRequestViewerFBID;
	FBAnalytics* _analytics;
	unsigned long long _searchStartTime;
	FBUserSession* _session;
	FBSearchResultsFilterer* _resultsFilterer;
	char _showSearchingCell;
	id<FBContactsSearchDelegate> _delegate;
	FBContactSearchQuery* _currentQuery;
	unsigned _resultsLimit;
	unsigned _minQueryLength;
	NSString* _analyticsJobUuid;
	NSString* _analyticsQueryUuid;
	NSArray* _groups;
	FBServerGroupsSearchCache* _cache;

}

@property (nonatomic,copy) NSString * analyticsJobUuid;                               //@synthesize analyticsJobUuid=_analyticsJobUuid - In the implementation block
@property (nonatomic,copy) NSString * analyticsQueryUuid;                             //@synthesize analyticsQueryUuid=_analyticsQueryUuid - In the implementation block
@property (nonatomic,copy) NSArray * groups;                                          //@synthesize groups=_groups - In the implementation block
@property (assign,nonatomic) char showSearchingCell;                                  //@synthesize showSearchingCell=_showSearchingCell - In the implementation block
@property (nonatomic,retain) FBServerGroupsSearchCache * cache;                       //@synthesize cache=_cache - In the implementation block
@property (assign,nonatomic) unsigned resultsLimit;                                   //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (assign,nonatomic) unsigned minQueryLength;                                 //@synthesize minQueryLength=_minQueryLength - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<FBContactsSearchDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) FBContactSearchQuery * currentQuery;              //@synthesize currentQuery=_currentQuery - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(void)setMinQueryLength:(unsigned)arg1 ;
-(char)hasPendingSearchOperation;
-(void)refreshSearch:(id)arg1 ;
-(id)resultForRow:(int)arg1 inContactSection:(int)arg2 ;
-(id)sectionsInSearch;
-(int)numberOfSearchResultsInSection:(int)arg1 ;
-(void)didSelectRow:(int)arg1 inContactSection:(int)arg2 ;
-(void)setupAnalytics:(id)arg1 jobKey:(id)arg2 ;
-(void)cancelPendingSearchOperation;
-(char)hasPendingSearchOperationForSection:(int)arg1 ;
-(void)setAnalyticsJobUuid:(NSString *)arg1 ;
-(void)setAnalyticsQueryUuid:(NSString *)arg1 ;
-(NSString *)analyticsJobUuid;
-(NSString *)analyticsQueryUuid;
-(char)shouldShowSearchingCell;
-(void)setShowSearchingCell:(char)arg1 ;
-(unsigned)minQueryLength;
-(char)showSearchingCell;
-(void)serverGroupsSearchDidFinishWithGroups:(id)arg1 ;
-(char)_shouldCacheQuery:(id)arg1 ;
-(void)setThreadsToFilter:(id)arg1 ;
-(void)setGroups:(NSArray *)arg1 ;
-(unsigned)numberOfSearchResults;
-(void)setDelegate:(id<FBContactsSearchDelegate>)arg1 ;
-(id<FBContactsSearchDelegate>)delegate;
-(FBServerGroupsSearchCache *)cache;
-(void)setCache:(FBServerGroupsSearchCache *)arg1 ;
-(void)search:(id)arg1 ;
-(FBContactSearchQuery *)currentQuery;
-(unsigned)resultsLimit;
-(void)setResultsLimit:(unsigned)arg1 ;
-(NSArray *)groups;
-(void)clearResults;
-(id)titleForHeaderInSection:(int)arg1 ;
@end

