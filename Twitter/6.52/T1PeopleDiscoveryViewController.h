/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:37 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TFNUI/TFNItemsDataViewController.h>

@protocol TFNPeopleDiscoveryModule;
@class T1PeopleDiscoveryFeaturedUsersItemsDataViewController, TFNTwitterAccount, NSArray, TFNItemsSectionTransformer, T1PeopleDiscoveryState, NSString, T1PeopleDiscoveryCarouselTableRowAdapter, T1PeopleDiscoveryFeaturedUsersCollectionViewLayoutDelegate, T1PeopleDiscoveryFeaturedUsersViewProvider;

@interface T1PeopleDiscoveryViewController : TFNItemsDataViewController {

	char _doneLoading;
	char _isLoading;
	char _scribedScrollToBottom;
	T1PeopleDiscoveryFeaturedUsersItemsDataViewController* _featuredUsersItemsDataViewController;
	TFNTwitterAccount* _account;
	id _errorItem;
	int _reloadSource;
	NSArray* _modules;
	NSArray* _moduleSections;
	TFNItemsSectionTransformer* _sectionTransformer;
	T1PeopleDiscoveryState* _state;
	NSString* _pivotParameters;
	/*^block*/id _userTapActionBlock;
	T1PeopleDiscoveryCarouselTableRowAdapter* _featuredUsersCarouselAdapter;
	T1PeopleDiscoveryFeaturedUsersCollectionViewLayoutDelegate* _featuredUsersLayoutDelegate;
	T1PeopleDiscoveryFeaturedUsersViewProvider* _featuredUsersViewProvider;
	id<TFNPeopleDiscoveryModule> _featuredUsersModule;
	NSArray* _featuredUsersModuleItems;

}

@property (nonatomic,readonly) TFNTwitterAccount * account;                                                                               //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) id errorItem;                                                                                                //@synthesize errorItem=_errorItem - In the implementation block
@property (assign,getter=isDoneLoading,nonatomic) char doneLoading;                                                                       //@synthesize doneLoading=_doneLoading - In the implementation block
@property (assign,nonatomic) char isLoading;                                                                                              //@synthesize isLoading=_isLoading - In the implementation block
@property (assign,nonatomic) int reloadSource;                                                                                            //@synthesize reloadSource=_reloadSource - In the implementation block
@property (assign,nonatomic) char scribedScrollToBottom;                                                                                  //@synthesize scribedScrollToBottom=_scribedScrollToBottom - In the implementation block
@property (nonatomic,copy) NSArray * modules;                                                                                             //@synthesize modules=_modules - In the implementation block
@property (nonatomic,copy) NSArray * moduleSections;                                                                                      //@synthesize moduleSections=_moduleSections - In the implementation block
@property (nonatomic,readonly) TFNItemsSectionTransformer * sectionTransformer;                                                           //@synthesize sectionTransformer=_sectionTransformer - In the implementation block
@property (nonatomic,readonly) T1PeopleDiscoveryState * state;                                                                            //@synthesize state=_state - In the implementation block
@property (nonatomic,copy,readonly) NSString * pivotParameters;                                                                           //@synthesize pivotParameters=_pivotParameters - In the implementation block
@property (nonatomic,copy,readonly) id userTapActionBlock;                                                                                //@synthesize userTapActionBlock=_userTapActionBlock - In the implementation block
@property (nonatomic,readonly) T1PeopleDiscoveryFeaturedUsersItemsDataViewController * featuredUsersItemsDataViewController;              //@synthesize featuredUsersItemsDataViewController=_featuredUsersItemsDataViewController - In the implementation block
@property (nonatomic,readonly) T1PeopleDiscoveryCarouselTableRowAdapter * featuredUsersCarouselAdapter;                                   //@synthesize featuredUsersCarouselAdapter=_featuredUsersCarouselAdapter - In the implementation block
@property (nonatomic,readonly) T1PeopleDiscoveryFeaturedUsersCollectionViewLayoutDelegate * featuredUsersLayoutDelegate;                  //@synthesize featuredUsersLayoutDelegate=_featuredUsersLayoutDelegate - In the implementation block
@property (nonatomic,readonly) T1PeopleDiscoveryFeaturedUsersViewProvider * featuredUsersViewProvider;                                    //@synthesize featuredUsersViewProvider=_featuredUsersViewProvider - In the implementation block
@property (nonatomic,retain) id<TFNPeopleDiscoveryModule> featuredUsersModule;                                                            //@synthesize featuredUsersModule=_featuredUsersModule - In the implementation block
@property (nonatomic,copy) NSArray * featuredUsersModuleItems;                                                                            //@synthesize featuredUsersModuleItems=_featuredUsersModuleItems - In the implementation block
-(id)scribePage;
-(id)scribeSection;
-(id)scribeContextForIndexPath:(id)arg1 ;
-(void)setModuleSections:(NSArray *)arg1 ;
-(void)_updateSections;
-(NSArray *)moduleSections;
-(id)scribeComponentForIndexPath:(id)arg1 ;
-(id)scribeElementForIndexPath:(id)arg1 ;
-(id)userTapActionBlock;
-(id)scribeItemForIndexPath:(id)arg1 ;
-(id)_itemOptionsForIndexPath:(id)arg1 ;
-(id)initWithAccount:(id)arg1 pivotParameters:(id)arg2 ;
-(void)errorItemTapped:(id)arg1 ;
-(void)_addModuleTransformers;
-(void)_synchronizationSettingsDidChange:(id)arg1 ;
-(void)_voiceOverStatusChanged:(id)arg1 ;
-(void)setReloadSource:(int)arg1 ;
-(void)_loadModulesIfNeeded;
-(T1PeopleDiscoveryFeaturedUsersItemsDataViewController *)featuredUsersItemsDataViewController;
-(T1PeopleDiscoveryCarouselTableRowAdapter *)featuredUsersCarouselAdapter;
-(void)_logScribeEventsForScrollView:(id)arg1 ;
-(void)_updateFeaturedCarousel;
-(NSString *)pivotParameters;
-(char)scribedScrollToBottom;
-(void)setScribedScrollToBottom:(char)arg1 ;
-(TFNItemsSectionTransformer *)sectionTransformer;
-(NSArray *)modules;
-(NSArray *)featuredUsersModuleItems;
-(id<TFNPeopleDiscoveryModule>)featuredUsersModule;
-(void)_updateModuleLayoutItem:(id)arg1 withItem:(id)arg2 ;
-(void)_addModuleTransformerForLayoutTransformer:(id)arg1 ;
-(int)reloadSource;
-(char)isDoneLoading;
-(void)setDoneLoading:(char)arg1 ;
-(void)setModules:(NSArray *)arg1 ;
-(void)setFeaturedUsersModuleItems:(NSArray *)arg1 ;
-(void)setFeaturedUsersModule:(id<TFNPeopleDiscoveryModule>)arg1 ;
-(char)_didHandleActionUrl:(id)arg1 ;
-(id)_peopleDiscoveryModulesCommandWithResponseBlock:(/*^block*/id)arg1 actionBlock:(/*^block*/id)arg2 ;
-(void)_presentAddressBook;
-(T1PeopleDiscoveryFeaturedUsersCollectionViewLayoutDelegate *)featuredUsersLayoutDelegate;
-(T1PeopleDiscoveryFeaturedUsersViewProvider *)featuredUsersViewProvider;
-(void)layoutMetricsDidChange:(id)arg1 ;
-(float)contentBreakLength;
-(float)lengthOfLayoutGuide:(int)arg1 forEnvironment:(id)arg2 ;
-(char)shouldHighlightItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)missingDataViewAdapterForItem:(id)arg1 withOptions:(id)arg2 ;
-(void)viewWillFullyAppear:(char)arg1 ;
-(void)viewWillFullyDisappear:(char)arg1 ;
-(id)scribe;
-(id)_itemAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(T1PeopleDiscoveryState *)state;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)update:(char)arg1 ;
-(char)isLoading;
-(void)_fontSizeDidChange:(id)arg1 ;
-(id)errorItem;
-(void)setErrorItem:(id)arg1 ;
-(void)setIsLoading:(char)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(TFNTwitterAccount *)account;
@end

