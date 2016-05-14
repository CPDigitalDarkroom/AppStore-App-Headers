/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:50 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBContactsSearch.h>

@protocol FBServiceTransactionMutating, FBContactsSearchDelegate;
@class FBContactSearchQuery, FBGraphQLService, MNUserStore, NSArray, NSString;

@interface MNPaymentsDollarForFriendEligibleContactSearch : NSObject <FBContactsSearch> {

	FBGraphQLService* _graphQLService;
	MNUserStore* _userStore;
	id<FBServiceTransactionMutating> _requestToken;
	NSArray* _contactsSearchResult;
	id<FBContactsSearchDelegate> _delegate;
	FBContactSearchQuery* _currentQuery;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<FBContactsSearchDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) FBContactSearchQuery * currentQuery;              //@synthesize currentQuery=_currentQuery - In the implementation block
-(void)_updateContactsSearchResultAndFinishSearch:(id)arg1 ;
-(char)hasPendingSearchOperation;
-(void)refreshSearch:(id)arg1 ;
-(id)resultForRow:(int)arg1 inContactSection:(int)arg2 ;
-(id)sectionsInSearch;
-(int)numberOfSearchResultsInSection:(int)arg1 ;
-(void)didSelectRow:(int)arg1 inContactSection:(int)arg2 ;
-(void)setupAnalytics:(id)arg1 jobKey:(id)arg2 ;
-(void)cancelPendingSearchOperation;
-(char)hasPendingSearchOperationForSection:(int)arg1 ;
-(id)initWithGraphQLService:(id)arg1 userStore:(id)arg2 ;
-(void)setDelegate:(id<FBContactsSearchDelegate>)arg1 ;
-(id<FBContactsSearchDelegate>)delegate;
-(void)search:(id)arg1 ;
-(FBContactSearchQuery *)currentQuery;
-(void)clearResults;
-(id)titleForHeaderInSection:(int)arg1 ;
@end

