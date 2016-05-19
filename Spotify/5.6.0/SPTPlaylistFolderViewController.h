/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:42 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Spotify/SPTPlaylistAdditionalSectionDelegate.h>
#import <Spotify/SPContentInsetViewController.h>
#import <Spotify/SPTCollectionFilterBarDelegate.h>
#import <Spotify/SPTImageLoaderDelegate.h>
#import <Spotify/SPTSwipeableTableViewCellDelegate.h>
#import <Spotify/SPTOfflineModeStateObserver.h>
#import <Spotify/SPSessionObserver.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Spotify/SPTPlaylistAdditionalSectionTableViewController.h>
#import <Spotify/SPTPlaylistFolderViewModelDelegate.h>
#import <Spotify/SPTPlaylistCreateNewPlaylistControllerDelegate.h>
#import <Spotify/SPTPlaylistRootFolderViewController.h>

@protocol SPTPlaylistRootFolderViewControllerDelegate, SPTPlaylistAdditionalSection, SPTImageLoader, SPTAudioTouch, SPTLocalSettings, SPTOfflineModeState, SPTCollectionLogger, SPTPlaylistModel, SPTCollectionNUXModifying;
@class SPTPlaylistFolderViewModel, SPTInfoView, SPTTableView, SPSession, SPTOfflineManager, UIBarButtonItem, SPTCollectionFilterBar, SPTSyncProgressView, SPTPlaylistCreateNewPlaylistController, SPTCollectionToolbarHeaderView, NSString, UITableView;

@interface SPTPlaylistFolderViewController : UIViewController <SPTPlaylistAdditionalSectionDelegate, SPContentInsetViewController, SPTCollectionFilterBarDelegate, SPTImageLoaderDelegate, SPTSwipeableTableViewCellDelegate, SPTOfflineModeStateObserver, SPSessionObserver, UITableViewDelegate, UITableViewDataSource, SPTPlaylistAdditionalSectionTableViewController, SPTPlaylistFolderViewModelDelegate, SPTPlaylistCreateNewPlaylistControllerDelegate, SPTPlaylistRootFolderViewController> {

	char _disableFilterBar;
	char _viewHasAppeared;
	char _shouldReloadWhenAppearing;
	char _userDefaultsLoaded;
	id<SPTPlaylistRootFolderViewControllerDelegate> _viewControllerDelegate;
	id<SPTPlaylistAdditionalSection> _additionalSection;
	SPTPlaylistFolderViewModel* _viewModel;
	SPTInfoView* _infoView;
	SPTTableView* _tableView;
	id<SPTImageLoader> _imageLoader;
	id<SPTAudioTouch> _audioTouch;
	SPSession* _session;
	SPTOfflineManager* _offlineManager;
	int _disableUpdatesCount;
	UIBarButtonItem* _previousLeftBarButtonItem;
	SPTCollectionFilterBar* _filterBar;
	id<SPTLocalSettings> _localSettings;
	SPTSyncProgressView* _iTunesLibrarySyncView;
	unsigned _numberOfSyncProgressViews;
	SPTPlaylistCreateNewPlaylistController* _createNewPlaylistController;
	SPTCollectionToolbarHeaderView* _sectionHeader;
	id<SPTOfflineModeState> _offlineNotifier;
	id<SPTCollectionLogger> _logger;
	id<SPTPlaylistModel> _playlistModel;
	id<SPTCollectionNUXModifying> _NUXModifier;

}

@property (nonatomic,retain) SPTPlaylistFolderViewModel * viewModel;                                                     //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) SPTInfoView * infoView;                                                                     //@synthesize infoView=_infoView - In the implementation block
@property (assign,nonatomic) char disableFilterBar;                                                                      //@synthesize disableFilterBar=_disableFilterBar - In the implementation block
@property (nonatomic,retain) SPTTableView * tableView;                                                                   //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) id<SPTImageLoader> imageLoader;                                                             //@synthesize imageLoader=_imageLoader - In the implementation block
@property (nonatomic,retain) id<SPTAudioTouch> audioTouch;                                                               //@synthesize audioTouch=_audioTouch - In the implementation block
@property (assign,nonatomic,__weak) SPSession * session;                                                                 //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) SPTOfflineManager * offlineManager;                                                         //@synthesize offlineManager=_offlineManager - In the implementation block
@property (assign,nonatomic) int disableUpdatesCount;                                                                    //@synthesize disableUpdatesCount=_disableUpdatesCount - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * previousLeftBarButtonItem;                                                //@synthesize previousLeftBarButtonItem=_previousLeftBarButtonItem - In the implementation block
@property (assign,nonatomic) char viewHasAppeared;                                                                       //@synthesize viewHasAppeared=_viewHasAppeared - In the implementation block
@property (assign,nonatomic) char shouldReloadWhenAppearing;                                                             //@synthesize shouldReloadWhenAppearing=_shouldReloadWhenAppearing - In the implementation block
@property (nonatomic,retain) SPTCollectionFilterBar * filterBar;                                                         //@synthesize filterBar=_filterBar - In the implementation block
@property (assign,getter=isUserDefaultsLoaded,nonatomic) char userDefaultsLoaded;                                        //@synthesize userDefaultsLoaded=_userDefaultsLoaded - In the implementation block
@property (nonatomic,retain) id<SPTLocalSettings> localSettings;                                                         //@synthesize localSettings=_localSettings - In the implementation block
@property (nonatomic,retain) SPTSyncProgressView * iTunesLibrarySyncView;                                                //@synthesize iTunesLibrarySyncView=_iTunesLibrarySyncView - In the implementation block
@property (assign,nonatomic) unsigned numberOfSyncProgressViews;                                                         //@synthesize numberOfSyncProgressViews=_numberOfSyncProgressViews - In the implementation block
@property (nonatomic,retain) SPTPlaylistCreateNewPlaylistController * createNewPlaylistController;                       //@synthesize createNewPlaylistController=_createNewPlaylistController - In the implementation block
@property (nonatomic,retain) SPTCollectionToolbarHeaderView * sectionHeader;                                             //@synthesize sectionHeader=_sectionHeader - In the implementation block
@property (nonatomic,retain) id<SPTOfflineModeState> offlineNotifier;                                                    //@synthesize offlineNotifier=_offlineNotifier - In the implementation block
@property (nonatomic,retain) id<SPTCollectionLogger> logger;                                                             //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) id<SPTPlaylistModel> playlistModel;                                                         //@synthesize playlistModel=_playlistModel - In the implementation block
@property (nonatomic,retain) id<SPTCollectionNUXModifying> NUXModifier;                                                  //@synthesize NUXModifier=_NUXModifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char automaticallyAdjustsScrollViewInsets; 
@property (nonatomic,retain) id<SPTPlaylistAdditionalSection> additionalSection;                                         //@synthesize additionalSection=_additionalSection - In the implementation block
@property (assign,nonatomic,__weak) id<SPTPlaylistRootFolderViewControllerDelegate> viewControllerDelegate;              //@synthesize viewControllerDelegate=_viewControllerDelegate - In the implementation block
@property (nonatomic,readonly) UITableView * rootTableView; 
-(void)sp_updateContentInsets;
-(void)sessionLoginModeChanged:(id)arg1 ;
-(void)applyThemeLayout;
-(id<SPTImageLoader>)imageLoader;
-(void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5 ;
-(void)setImageLoader:(id<SPTImageLoader>)arg1 ;
-(int)stackedNavigationPageSize;
-(id)spt_referrerIdentifier;
-(id<SPTOfflineModeState>)offlineNotifier;
-(void)offlineModeState:(id)arg1 updated:(char)arg2 ;
-(id<SPTLocalSettings>)localSettings;
-(void)setLocalSettings:(id<SPTLocalSettings>)arg1 ;
-(void)setAudioTouch:(id<SPTAudioTouch>)arg1 ;
-(id<SPTAudioTouch>)audioTouch;
-(SPTOfflineManager *)offlineManager;
-(void)setOfflineManager:(SPTOfflineManager *)arg1 ;
-(void)setOfflineNotifier:(id<SPTOfflineModeState>)arg1 ;
-(void)setAdditionalSection:(id<SPTPlaylistAdditionalSection>)arg1 ;
-(SPTCollectionFilterBar *)filterBar;
-(void)setFilterBar:(SPTCollectionFilterBar *)arg1 ;
-(void)setupSectionHeader;
-(char)useAdditionalSectionHeaderForSection:(int)arg1 ;
-(id<SPTPlaylistAdditionalSection>)additionalSection;
-(void)updateInfoView;
-(int)isAdditionalSection:(int)arg1 ;
-(void)navigateToBrowse;
-(id<SPTCollectionNUXModifying>)NUXModifier;
-(void)modifyInfoViewForNUX;
-(void)modifyInfoViewForEmptyStaticFilterContext;
-(void)filterBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)filterBarContextButtonTapped:(id)arg1 ;
-(void)filterBarTextDidEndEditing:(id)arg1 ;
-(void)filterBarTextWillBeginEditing:(id)arg1 ;
-(void)setNUXModifier:(id<SPTCollectionNUXModifying>)arg1 ;
-(void)loadLocalSettings;
-(id<SPTPlaylistRootFolderViewControllerDelegate>)viewControllerDelegate;
-(void)setViewControllerDelegate:(id<SPTPlaylistRootFolderViewControllerDelegate>)arg1 ;
-(UITableView *)rootTableView;
-(char)disableFilterBar;
-(void)setDisableFilterBar:(char)arg1 ;
-(char)isUserDefaultsLoaded;
-(void)setUserDefaultsLoaded:(char)arg1 ;
-(id<SPTPlaylistModel>)playlistModel;
-(void)setPlaylistModel:(id<SPTPlaylistModel>)arg1 ;
-(int)disableUpdatesCount;
-(void)setDisableUpdatesCount:(int)arg1 ;
-(void)beginIgnoringUpdates;
-(void)endIgnoringUpdates;
-(void)playlistAdditionalSectionDidUpdate:(id)arg1 ;
-(id)initWithSession:(id)arg1 offlineManager:(id)arg2 viewModel:(id)arg3 audioTouch:(id)arg4 uri:(id)arg5 localSettings:(id)arg6 imageLoaderFactory:(id)arg7 iTunesLibraryManager:(id)arg8 offlineModeNotifier:(id)arg9 starMigrationManager:(id)arg10 logger:(id)arg11 playlistModel:(id)arg12 NUXModifier:(id)arg13 ;
-(void)setCreateNewPlaylistController:(SPTPlaylistCreateNewPlaylistController *)arg1 ;
-(SPTPlaylistCreateNewPlaylistController *)createNewPlaylistController;
-(void)playlistFolderViewModelDidUpdate:(id)arg1 ;
-(void)createNewPlaylistController:(id)arg1 didCreateNewPlaylistURL:(id)arg2 name:(id)arg3 ;
-(id)provideAudioTouch;
-(void)playlistFolderViewModel:(id)arg1 didFailToRemoveRowAtIndexPath:(id)arg2 ;
-(void)playlistFolderViewModel:(id)arg1 didRemoveRowAtIndexPath:(id)arg2 ;
-(void)playlistFolderViewModel:(id)arg1 didChangeObjectWithContext:(id)arg2 ;
-(void)playlistFolderViewModel:(id)arg1 didChangeOfflineStatusWithContext:(id)arg2 ;
-(void)playlistFolderViewModelDidBeginiTunesLibrarySync:(id)arg1 ;
-(void)playlistFolderViewModel:(id)arg1 didUpdateSyncingProgress:(double)arg2 ;
-(void)playlistFolderViewModelDidEndiTunesLibrarySync:(id)arg1 ;
-(void)updateOfflineAccessoryButtonInCell:(id)arg1 forStatus:(int)arg2 ;
-(void)updateSubtitleOfflineAccessoryViewInCell:(id)arg1 forStatus:(int)arg2 ;
-(unsigned)numberOfSyncProgressViews;
-(void)setNumberOfSyncProgressViews:(unsigned)arg1 ;
-(void)showCreatePlaylistPopup;
-(char)isAdditionalSectionVisible;
-(void)modifyInfoViewForEmptyTextFilterContext;
-(void)setupFilterBar;
-(char)shouldReloadWhenAppearing;
-(void)setPreviousLeftBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)previousLeftBarButtonItem;
-(void)setShouldReloadWhenAppearing:(char)arg1 ;
-(id)offlineSyncAccessoryButtonForIndexPath:(id)arg1 ;
-(void)updateOfflineStatus:(int)arg1 forCell:(id)arg2 atIndexPath:(id)arg3 ;
-(int)selectionStyleForIndexPath:(id)arg1 ;
-(void)offlineAccessoryButtonTapped:(id)arg1 ;
-(void)registerPreviewsInCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)reloadIfVisible;
-(SPTSyncProgressView *)iTunesLibrarySyncView;
-(void)setITunesLibrarySyncView:(SPTSyncProgressView *)arg1 ;
-(void)addSyncProgressView:(id)arg1 ;
-(void)removeSyncProgressView:(id)arg1 ;
-(id)titleForSection:(int)arg1 ;
-(id<SPTCollectionLogger>)logger;
-(void)setLogger:(id<SPTCollectionLogger>)arg1 ;
-(SPTInfoView *)infoView;
-(void)setInfoView:(SPTInfoView *)arg1 ;
-(SPTPlaylistFolderViewModel *)viewModel;
-(SPSession *)session;
-(void)setViewModel:(SPTPlaylistFolderViewModel *)arg1 ;
-(void)dealloc;
-(int)numberOfRowsInSection:(int)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)loadView;
-(SPTTableView *)tableView;
-(void)setSectionHeader:(SPTCollectionToolbarHeaderView *)arg1 ;
-(void)setTableView:(SPTTableView *)arg1 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(SPTCollectionToolbarHeaderView *)sectionHeader;
-(void)setSession:(SPSession *)arg1 ;
-(char)viewHasAppeared;
-(void)setViewHasAppeared:(char)arg1 ;
-(id)URI;
@end

