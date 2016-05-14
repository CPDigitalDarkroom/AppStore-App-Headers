/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:39 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBServerPagesFetcherDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBContactsSearch.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBClassProvidable.h>

@protocol FBContactsSearchDelegate;
@class FBUserSession, FBServerPagesSearchFetcher, FBAnalytics, NSString, NSArray, FBContactSearchQuery;

@interface FBServerPagesSearch : NSObject <FBServerPagesFetcherDelegate, FBContactsSearch, FBClassProvidable> {

	FBUserSession* _session;
	FBServerPagesSearchFetcher* _graphFetcher;
	unsigned long long _searchStartTime;
	FBAnalytics* _analytics;
	NSString* _analyticsJobUuid;
	NSString* _analyticsQueryUuid;
	NSArray* _results;
	char _showSearchingCell;
	char _hideHeaderWhenShowingSearchCell;
	id<FBContactsSearchDelegate> _delegate;
	FBContactSearchQuery* _currentQuery;
	NSString* _currentSearch;
	unsigned _minQueryLength;
	unsigned _resultsLimit;

}

@property (assign,nonatomic) char hideHeaderWhenShowingSearchCell;                    //@synthesize hideHeaderWhenShowingSearchCell=_hideHeaderWhenShowingSearchCell - In the implementation block
@property (nonatomic,copy,readonly) NSString * currentSearch;                         //@synthesize currentSearch=_currentSearch - In the implementation block
@property (assign,nonatomic) unsigned minQueryLength;                                 //@synthesize minQueryLength=_minQueryLength - In the implementation block
@property (assign,nonatomic) unsigned resultsLimit;                                   //@synthesize resultsLimit=_resultsLimit - In the implementation block
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
-(void)setHideHeaderWhenShowingSearchCell:(char)arg1 ;
-(NSString *)currentSearch;
-(char)hideHeaderWhenShowingSearchCell;
-(unsigned)minQueryLength;
-(char)_shouldShowSearchingCell;
-(void)_searchComplete:(id)arg1 ;
-(void)serverPagesSearchOperationDidCompleteWithContacts:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(void)setDelegate:(id<FBContactsSearchDelegate>)arg1 ;
-(id<FBContactsSearchDelegate>)delegate;
-(void)search:(id)arg1 ;
-(FBContactSearchQuery *)currentQuery;
-(unsigned)resultsLimit;
-(void)setResultsLimit:(unsigned)arg1 ;
-(void)clearResults;
-(id)titleForHeaderInSection:(int)arg1 ;
@end

