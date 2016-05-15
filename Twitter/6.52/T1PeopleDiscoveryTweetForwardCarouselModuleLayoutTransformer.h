/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/T1PeopleDiscoveryModuleLayoutTransformer.h>

@class TFNTwitterAccount, T1PeopleDiscoveryQuotedStatusViewProvider, TFNItemsDataViewSectionController, NSString, NSPredicate;

@interface T1PeopleDiscoveryTweetForwardCarouselModuleLayoutTransformer : NSObject <T1PeopleDiscoveryModuleLayoutTransformer> {

	TFNTwitterAccount* _account;
	/*^block*/id _userTapActionBlock;
	T1PeopleDiscoveryQuotedStatusViewProvider* _viewProvider;
	TFNItemsDataViewSectionController* _sectionController;

}

@property (nonatomic,readonly) T1PeopleDiscoveryQuotedStatusViewProvider * viewProvider;                //@synthesize viewProvider=_viewProvider - In the implementation block
@property (assign,nonatomic,__weak) TFNItemsDataViewSectionController * sectionController;              //@synthesize sectionController=_sectionController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSPredicate * predicate; 
@property (nonatomic,readonly) TFNTwitterAccount * account;                                             //@synthesize account=_account - In the implementation block
@property (nonatomic,copy,readonly) id userTapActionBlock;                                              //@synthesize userTapActionBlock=_userTapActionBlock - In the implementation block
-(T1PeopleDiscoveryQuotedStatusViewProvider *)viewProvider;
-(id)initWithAccount:(id)arg1 userTapActionBlock:(/*^block*/id)arg2 ;
-(void)configureAdaptersForSectionController:(id)arg1 ;
-(id)userTapActionBlock;
-(void)setSectionController:(TFNItemsDataViewSectionController *)arg1 ;
-(TFNItemsDataViewSectionController *)sectionController;
-(id)itemsForModule:(id)arg1 ;
-(id)init;
-(NSPredicate *)predicate;
-(TFNTwitterAccount *)account;
@end

