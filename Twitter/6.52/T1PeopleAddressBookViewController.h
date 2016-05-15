/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:21 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TFNUI/TFNItemsDataViewController.h>
#import <Twitter/T1UserOrRecommendationTableRowAdapterDelegate.h>
#import <Twitter/T1UsersViewControllerDelegate.h>
#import <Twitter/T1PeopleAddressBookViewControllerDataSourceDelegate.h>

@protocol T1PeopleAddressBookViewControllerDataSource;
@class TFNTwitterAccount, UILocalizedIndexedCollation, NSDictionary, NSArray, T1PeopleAddressBookViewControllerAddressBookServiceDataSource, NSString;

@interface T1PeopleAddressBookViewController : TFNItemsDataViewController <T1UserOrRecommendationTableRowAdapterDelegate, T1UsersViewControllerDelegate, T1PeopleAddressBookViewControllerDataSourceDelegate> {

	char _recommendationsHeaderItemNeedsUpdate;
	char _shouldDismissOnViewDidAppear;
	id _synchronizationDisabledWarningItem;
	id _recommendationsHeaderItem;
	id _activityIndicatorItem;
	id _allContactsHeaderItem;
	id _errorItem;
	id _noContactsItem;
	TFNTwitterAccount* _account;
	UILocalizedIndexedCollation* _localizedIndexedCollation;
	id<T1PeopleAddressBookViewControllerDataSource> _dataSource;
	NSDictionary* _sectionHeadings;
	NSArray* _displayedRecommendations;
	NSArray* _additionalRecommendations;
	int _recommendationsSectionIndex;
	unsigned _allContactsCount;
	T1PeopleAddressBookViewControllerAddressBookServiceDataSource* _addressBookServiceDataSource;
	double _fetchProgress;

}

@property (nonatomic,copy) NSDictionary * sectionHeadings;                                                                                //@synthesize sectionHeadings=_sectionHeadings - In the implementation block
@property (nonatomic,copy) NSArray * displayedRecommendations;                                                                            //@synthesize displayedRecommendations=_displayedRecommendations - In the implementation block
@property (nonatomic,copy) NSArray * additionalRecommendations;                                                                           //@synthesize additionalRecommendations=_additionalRecommendations - In the implementation block
@property (nonatomic,readonly) id synchronizationDisabledWarningItem;                                                                     //@synthesize synchronizationDisabledWarningItem=_synchronizationDisabledWarningItem - In the implementation block
@property (nonatomic,readonly) id recommendationsHeaderItem;                                                                              //@synthesize recommendationsHeaderItem=_recommendationsHeaderItem - In the implementation block
@property (nonatomic,readonly) id activityIndicatorItem;                                                                                  //@synthesize activityIndicatorItem=_activityIndicatorItem - In the implementation block
@property (nonatomic,readonly) id allContactsHeaderItem;                                                                                  //@synthesize allContactsHeaderItem=_allContactsHeaderItem - In the implementation block
@property (nonatomic,readonly) id errorItem;                                                                                              //@synthesize errorItem=_errorItem - In the implementation block
@property (nonatomic,readonly) id noContactsItem;                                                                                         //@synthesize noContactsItem=_noContactsItem - In the implementation block
@property (assign,nonatomic) int recommendationsSectionIndex;                                                                             //@synthesize recommendationsSectionIndex=_recommendationsSectionIndex - In the implementation block
@property (assign,nonatomic) unsigned allContactsCount;                                                                                   //@synthesize allContactsCount=_allContactsCount - In the implementation block
@property (assign,nonatomic) char recommendationsHeaderItemNeedsUpdate;                                                                   //@synthesize recommendationsHeaderItemNeedsUpdate=_recommendationsHeaderItemNeedsUpdate - In the implementation block
@property (assign,nonatomic) char shouldDismissOnViewDidAppear;                                                                           //@synthesize shouldDismissOnViewDidAppear=_shouldDismissOnViewDidAppear - In the implementation block
@property (nonatomic,readonly) T1PeopleAddressBookViewControllerAddressBookServiceDataSource * addressBookServiceDataSource;              //@synthesize addressBookServiceDataSource=_addressBookServiceDataSource - In the implementation block
@property (assign,nonatomic) double fetchProgress;                                                                                        //@synthesize fetchProgress=_fetchProgress - In the implementation block
@property (nonatomic,readonly) TFNTwitterAccount * account;                                                                               //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) UILocalizedIndexedCollation * localizedIndexedCollation;                                                     //@synthesize localizedIndexedCollation=_localizedIndexedCollation - In the implementation block
@property (assign,nonatomic,__weak) id<T1PeopleAddressBookViewControllerDataSource> dataSource;                                           //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(SEL)_userCollationStringSelector;
-(id)scribePage;
-(id)scribeSection;
-(id)scribeContextForIndexPath:(id)arg1 ;
-(char)t1_showsSearchButton;
-(char)t1_showsComposeButton;
-(id)scribeComponentForIndexPath:(id)arg1 ;
-(id)activityIndicatorItem;
-(char)usersViewController:(id)arg1 shouldShowBioForUserOrRecommendation:(id)arg2 ;
-(void)_didTapSettingsBarButtonItem:(id)arg1 ;
-(void)_synchronizationSettingsDidInvalidate:(id)arg1 ;
-(void)_fetchContacts;
-(id)_tfnNavigationBar;
-(double)fetchProgress;
-(char)shouldDismissOnViewDidAppear;
-(T1PeopleAddressBookViewControllerAddressBookServiceDataSource *)addressBookServiceDataSource;
-(void)setRecommendationsHeaderItemNeedsUpdate:(char)arg1 ;
-(NSDictionary *)sectionHeadings;
-(void)_presentSettingsWithPopoverSouce:(id)arg1 ;
-(unsigned)allContactsCount;
-(id)_scribeParametersForItemWithUserCount:(unsigned)arg1 ;
-(char)recommendationsHeaderItemNeedsUpdate;
-(NSArray *)additionalRecommendations;
-(void)_presentRecommendationsList:(id)arg1 ;
-(NSArray *)displayedRecommendations;
-(int)recommendationsSectionIndex;
-(id)scribeItemForIndexPath:(id)arg1 ;
-(id)_itemOptionsForIndexPath:(id)arg1 ;
-(id)synchronizationDisabledWarningItem;
-(id)noContactsItem;
-(void)setDisplayedRecommendations:(NSArray *)arg1 ;
-(void)setAdditionalRecommendations:(NSArray *)arg1 ;
-(void)setRecommendationsSectionIndex:(int)arg1 ;
-(id)recommendationsHeaderItem;
-(UILocalizedIndexedCollation *)localizedIndexedCollation;
-(id)allContactsHeaderItem;
-(void)setAllContactsCount:(unsigned)arg1 ;
-(void)setSectionHeadings:(NSDictionary *)arg1 ;
-(void)setFetchProgress:(double)arg1 ;
-(void)_didTapDismissSettings:(id)arg1 ;
-(void)setShouldDismissOnViewDidAppear:(char)arg1 ;
-(void)userRowAdapter:(id)arg1 user:(id)arg2 didPerformAction:(int)arg3 success:(char)arg4 error:(id)arg5 ;
-(char)userRowAdapter:(id)arg1 isUserChecked:(id)arg2 ;
-(void)peopleAddressBookViewControllerDataSourceDidBeginLoading:(id)arg1 ;
-(void)peopleAddressBookViewControllerDataSourceDidUpdate:(id)arg1 ;
-(void)peopleAddressBookViewControllerDataSource:(id)arg1 didUpdateProgress:(double)arg2 ;
-(void)peopleAddressBookViewControllerDataSourceDidEndLoading:(id)arg1 ;
-(void)setLocalizedIndexedCollation:(UILocalizedIndexedCollation *)arg1 ;
-(void)viewDidFullyAppear:(char)arg1 ;
-(void)willDisplayCell:(id)arg1 forItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)viewWillFullyDisappear:(char)arg1 ;
-(id)scribe;
-(void)setDataSource:(id<T1PeopleAddressBookViewControllerDataSource>)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(id<T1PeopleAddressBookViewControllerDataSource>)dataSource;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)update:(char)arg1 ;
-(id)errorItem;
-(id)initWithAccount:(id)arg1 ;
-(TFNTwitterAccount *)account;
@end

