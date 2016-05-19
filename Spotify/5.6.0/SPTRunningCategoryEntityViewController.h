/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:45 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTableViewController.h>
#import <Spotify/SPTRunningCategoryEntityModelDelegate.h>
#import <Spotify/SPTImageLoaderDelegate.h>
#import <Spotify/SPTNavigationControllerNavigationBarState.h>
#import <Spotify/SPTThemableViewLayoutDelegate.h>
#import <Spotify/SPTPlayerObserver.h>
#import <Spotify/SPContentInsetViewController.h>

@protocol SPTImageLoader, SPTPlayer, SPTRunningTestManager;
@class SPTRunningCategoryEntityModel, SPTLogCenter, SPTInfoView, SPTEntityTableHeaderView, SPTTheme, NSString;

@interface SPTRunningCategoryEntityViewController : SPTableViewController <SPTRunningCategoryEntityModelDelegate, SPTImageLoaderDelegate, SPTNavigationControllerNavigationBarState, SPTThemableViewLayoutDelegate, SPTPlayerObserver, SPContentInsetViewController> {

	char _wasInitiatedByPartnerApp;
	SPTRunningCategoryEntityModel* _entityModel;
	id<SPTImageLoader> _imageLoader;
	SPTLogCenter* _logCenter;
	SPTInfoView* _offlineEntityView;
	SPTEntityTableHeaderView* _headerView;
	id<SPTPlayer> _player;
	SPTTheme* _theme;
	id<SPTRunningTestManager> _testManager;

}

@property (nonatomic,retain) SPTRunningCategoryEntityModel * entityModel;              //@synthesize entityModel=_entityModel - In the implementation block
@property (nonatomic,retain) id<SPTImageLoader> imageLoader;                           //@synthesize imageLoader=_imageLoader - In the implementation block
@property (nonatomic,retain) SPTLogCenter * logCenter;                                 //@synthesize logCenter=_logCenter - In the implementation block
@property (nonatomic,retain) SPTInfoView * offlineEntityView;                          //@synthesize offlineEntityView=_offlineEntityView - In the implementation block
@property (nonatomic,retain) SPTEntityTableHeaderView * headerView;                    //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) id<SPTPlayer> player;                                     //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) SPTTheme * theme;                                         //@synthesize theme=_theme - In the implementation block
@property (nonatomic,retain) id<SPTRunningTestManager> testManager;                    //@synthesize testManager=_testManager - In the implementation block
@property (assign,nonatomic) char wasInitiatedByPartnerApp;                            //@synthesize wasInitiatedByPartnerApp=_wasInitiatedByPartnerApp - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char automaticallyAdjustsScrollViewInsets; 
-(id)objectRepresentation;
-(SPTLogCenter *)logCenter;
-(void)sp_updateContentInsets;
-(unsigned)preferredNavigationBarState;
-(id)viewEventURI;
-(void)applyThemeLayout;
-(id<SPTImageLoader>)imageLoader;
-(void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5 ;
-(void)setImageLoader:(id<SPTImageLoader>)arg1 ;
-(char)restoreWithObjectRepresentation:(id)arg1 ;
-(id)spt_referrerIdentifier;
-(void)setLogCenter:(SPTLogCenter *)arg1 ;
-(void)player:(id)arg1 stateDidChange:(id)arg2 ;
-(SPTRunningCategoryEntityModel *)entityModel;
-(void)setEntityModel:(SPTRunningCategoryEntityModel *)arg1 ;
-(void)setupHeaderView;
-(void)setupTableView;
-(void)setTestManager:(id<SPTRunningTestManager>)arg1 ;
-(id<SPTRunningTestManager>)testManager;
-(id)initWithEntityModel:(id)arg1 imageLoader:(id)arg2 logCenter:(id)arg3 player:(id)arg4 testManager:(id)arg5 ;
-(void)updateActionButtonState;
-(id)standardTableHeaderFooterViewForTableView:(id)arg1 ;
-(id)featuringFooterViewForTableView:(id)arg1 ;
-(id)standardLineSeparatorForTableView:(id)arg1 ;
-(char)runkeeperTrackLinkShouldBeVisible;
-(id)trackYourRunTableViewCellForTableView:(id)arg1 ;
-(id)standardTextTableViewCellForTableView:(id)arg1 ;
-(void)presentTrackingOption;
-(char)isRunkeeperTrackingActive;
-(void)startPauseRun;
-(void)setActionButtonToDefaultState;
-(SPTInfoView *)offlineEntityView;
-(void)setOfflineEntityView:(SPTInfoView *)arg1 ;
-(void)hideOfflineEntityView;
-(void)setupPartnerFunctionality;
-(void)showOfflineEntityView;
-(void)updateGradientView;
-(void)setActionButtonToActiveState;
-(void)setActionButtonToPausedState;
-(void)createAndAssignPartnerURLLauncher;
-(void)openRunkeeperURL;
-(void)setWasInitiatedByPartnerApp:(char)arg1 ;
-(void)setRunkeeperTrackingActive:(char)arg1 ;
-(char)wasInitiatedByPartnerApp;
-(void)categoryEntityModelDidLoad:(id)arg1 ;
-(void)categoryEntityModelFailedToLoad:(id)arg1 withError:(id)arg2 ;
-(void)categoryEntityModel:(id)arg1 didChangeToBeingOffline:(char)arg2 ;
-(void)setPlayer:(id<SPTPlayer>)arg1 ;
-(id<SPTPlayer>)player;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(unsigned)currentState;
-(id)tableFooterView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(char)automaticallyAdjustsScrollViewInsets;
-(id)URL;
-(SPTEntityTableHeaderView *)headerView;
-(void)setHeaderView:(SPTEntityTableHeaderView *)arg1 ;
-(void)updateHeaderView;
-(SPTTheme *)theme;
-(void)setTheme:(SPTTheme *)arg1 ;
@end

