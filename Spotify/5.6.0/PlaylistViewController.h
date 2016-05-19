/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:41 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <Spotify/SPTableViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Spotify/SPContentInsetViewController.h>
#import <Spotify/SPTPlaylistMetadataViewDelegate.h>
#import <Spotify/SPTNavigationControllerNavigationBarState.h>
#import <Spotify/SPTPlaylistActionDelegate.h>
#import <Spotify/SPTPlaylistAdditionalSectionDelegate.h>
#import <Spotify/SPTPlaylistSpecialTableHeaderViewDelegate.h>
#import <Spotify/SPTImageLoaderDelegate.h>
#import <Spotify/SPTThemableViewLayoutDelegate.h>
#import <Spotify/SPTEntityTableHeaderViewDelegate.h>
#import <Spotify/SPTTouchViewEngineObserver.h>
#import <Spotify/SPTTouchViewEngineDelegate.h>
#import <Spotify/SPTContextMenuViewControllerDelegate.h>
#import <Spotify/SPTOfflineModeStateObserver.h>
#import <Spotify/SPTProductStateObserver.h>
#import <Spotify/SPTTableViewContinuousSwipeDelegate.h>
#import <Spotify/SPTOfflineSwitchDelegate.h>
#import <Spotify/SPTOnDemandUpsellTestProtocol.h>
#import <Spotify/SPTVoiceCommandFeatureObserver.h>
#import <Spotify/SPTVoiceCommandInterfaceHost.h>
#import <Spotify/SPTPageController.h>
#import <Spotify/PlaylistViewModelDelegate.h>

@protocol SPContextMenuFeature, CollectionFeature, SPTUpsellManager, SPTOnDemandUpsellTest, SPTAudioTouch, SPTImageLoader, SPTTinkerbellManager, SPTTinkerbellStoryRegistry, SPTTinkerbellItemPresentationController, SPTPlaylistAdditionalSection, SPTProductState, SPTOfflineModeState, SPTBannerPresentationManager, SPTPlayerQueue, SPTPlayer, SPTSponsoredContextViewModel, SPTAdsManager, SPTCollectionLogger, SPTShuffleButtonTestController, SPTAbbaFeatureFlags, PlaylistFeature, SPTVoiceCommandFeature, SPTSpotlightIndexRegistry;
@class PlaylistViewModel, NSURL, MetaViewController, SPTEntityTableHeaderView, SPTPlaylistSpecialTableHeaderView, SPTActionButton, SPTSearchBar, UIView, SPTPlaylistSortMenuButton, UIButton, SPTProgressView, SPTInfoView, SPTPlaylistMetadataView, UILabel, UIAlertView, SPTClientEventLogger, SPTTableViewOfflineSwitchCell, SPTPopoverController, UIAlertController, UIAlertAction, NSString, SPTNetworkConnectivityController, UITextField;

@interface PlaylistViewController : SPTableViewController <UISearchBarDelegate, UITextFieldDelegate, SPContentInsetViewController, SPTPlaylistMetadataViewDelegate, SPTNavigationControllerNavigationBarState, SPTPlaylistActionDelegate, SPTPlaylistAdditionalSectionDelegate, SPTPlaylistSpecialTableHeaderViewDelegate, SPTImageLoaderDelegate, SPTThemableViewLayoutDelegate, SPTEntityTableHeaderViewDelegate, SPTTouchViewEngineObserver, SPTTouchViewEngineDelegate, SPTContextMenuViewControllerDelegate, SPTOfflineModeStateObserver, SPTProductStateObserver, SPTTableViewContinuousSwipeDelegate, SPTOfflineSwitchDelegate, SPTOnDemandUpsellTestProtocol, SPTVoiceCommandFeatureObserver, SPTVoiceCommandInterfaceHost, SPTPageController, PlaylistViewModelDelegate> {

	char _hasSetupContentOffset;
	char _viewLoaderDidLoadEvent;
	char _ignoreNextContextTracksUpdate;
	char _cachedOfflineState;
	char _tableViewNeedsReload;
	char _showsAvailableOfflineRow;
	char _lastShuffleMode;
	char _entityHeaderScrollUpdatesEnabled;
	char _alwaysShowAvailableOfflineRolloutFlag;
	PlaylistViewModel* _viewModel;
	NSURL* _autoPlayTrackURL;
	id<SPContextMenuFeature> _contextMenuFeature;
	MetaViewController* _metaViewController;
	id<CollectionFeature> _collection;
	id<SPTUpsellManager> _upsellManager;
	id<SPTOnDemandUpsellTest> _onDemandUpsellTest;
	SPTEntityTableHeaderView* _entityHeaderView;
	SPTPlaylistSpecialTableHeaderView* _specialHeaderView;
	SPTActionButton* _followButton;
	SPTSearchBar* _filterField;
	UIView* _filterAndSortContainer;
	SPTPlaylistSortMenuButton* _sortContextMenuButton;
	UIButton* _filterCancelButton;
	SPTProgressView* _progressView;
	SPTInfoView* _infoView;
	SPTPlaylistMetadataView* _metadataView;
	UILabel* _playlistOwnerLabel;
	UIAlertView* _playlistRenameAlertView;
	UIAlertView* _playlistDeleteAlertView;
	id<SPTAudioTouch> _audioTouch;
	id<SPTImageLoader> _imageLoader;
	id<SPTTinkerbellManager> _tinkerbellManager;
	id<SPTTinkerbellStoryRegistry> _tinkerbellStoryRegistry;
	id<SPTTinkerbellItemPresentationController> _tinkerbellController;
	SPTClientEventLogger* _clientEventLogger;
	id<SPTPlaylistAdditionalSection> _additionalSection;
	SPTTableViewOfflineSwitchCell* _offlineSwitchCell;
	SPTPopoverController* _contextPopoverController;
	UIAlertController* _playlistRenameAlertController;
	UIAlertAction* _renameAction;
	id<SPTProductState> _productState;
	NSString* _currentFilter;
	float _tableViewRowHeight;
	id<SPTOfflineModeState> _offlineNotifier;
	id<SPTBannerPresentationManager> _bannerPresentationManager;
	id<SPTPlayerQueue> _playerQueue;
	id<SPTPlayer> _player;
	id<SPTSponsoredContextViewModel> _sponsoredContextProtocol;
	id<SPTAdsManager> _adsManager;
	SPTNetworkConnectivityController* _networkConnectivityController;
	id<SPTCollectionLogger> _logger;
	id<SPTShuffleButtonTestController> _shuffleButtonTestController;
	NSURL* _currentPlaylistImageURL;
	id<SPTAbbaFeatureFlags> _abbaFeatureFlags;
	id<PlaylistFeature> _playlistFeature;
	id<SPTVoiceCommandFeature> _voiceCommandFeature;
	id<SPTSpotlightIndexRegistry> _spotlightIndexRegistry;

}

@property (nonatomic,retain) PlaylistViewModel * viewModel;                                                 //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) NSURL * autoPlayTrackURL;                                                      //@synthesize autoPlayTrackURL=_autoPlayTrackURL - In the implementation block
@property (assign,nonatomic,__weak) id<SPContextMenuFeature> contextMenuFeature;                            //@synthesize contextMenuFeature=_contextMenuFeature - In the implementation block
@property (assign,nonatomic,__weak) MetaViewController * metaViewController;                                //@synthesize metaViewController=_metaViewController - In the implementation block
@property (assign,nonatomic,__weak) id<CollectionFeature> collection;                                       //@synthesize collection=_collection - In the implementation block
@property (nonatomic,retain) id<SPTUpsellManager> upsellManager;                                            //@synthesize upsellManager=_upsellManager - In the implementation block
@property (assign,nonatomic,__weak) id<SPTOnDemandUpsellTest> onDemandUpsellTest;                           //@synthesize onDemandUpsellTest=_onDemandUpsellTest - In the implementation block
@property (nonatomic,retain) SPTEntityTableHeaderView * entityHeaderView;                                   //@synthesize entityHeaderView=_entityHeaderView - In the implementation block
@property (nonatomic,retain) SPTPlaylistSpecialTableHeaderView * specialHeaderView;                         //@synthesize specialHeaderView=_specialHeaderView - In the implementation block
@property (nonatomic,retain) SPTActionButton * followButton;                                                //@synthesize followButton=_followButton - In the implementation block
@property (nonatomic,retain) SPTSearchBar * filterField;                                                    //@synthesize filterField=_filterField - In the implementation block
@property (nonatomic,retain) UIView * filterAndSortContainer;                                               //@synthesize filterAndSortContainer=_filterAndSortContainer - In the implementation block
@property (nonatomic,retain) SPTPlaylistSortMenuButton * sortContextMenuButton;                             //@synthesize sortContextMenuButton=_sortContextMenuButton - In the implementation block
@property (nonatomic,retain) UIButton * filterCancelButton;                                                 //@synthesize filterCancelButton=_filterCancelButton - In the implementation block
@property (nonatomic,retain) SPTProgressView * progressView;                                                //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) SPTInfoView * infoView;                                                        //@synthesize infoView=_infoView - In the implementation block
@property (nonatomic,retain) SPTPlaylistMetadataView * metadataView;                                        //@synthesize metadataView=_metadataView - In the implementation block
@property (nonatomic,retain) UILabel * playlistOwnerLabel;                                                  //@synthesize playlistOwnerLabel=_playlistOwnerLabel - In the implementation block
@property (nonatomic,readonly) UITextField * playlistRenameAlertTextField; 
@property (nonatomic,retain) UIAlertView * playlistRenameAlertView;                                         //@synthesize playlistRenameAlertView=_playlistRenameAlertView - In the implementation block
@property (nonatomic,retain) UIAlertView * playlistDeleteAlertView;                                         //@synthesize playlistDeleteAlertView=_playlistDeleteAlertView - In the implementation block
@property (assign,nonatomic) char hasSetupContentOffset;                                                    //@synthesize hasSetupContentOffset=_hasSetupContentOffset - In the implementation block
@property (assign,nonatomic) char viewLoaderDidLoadEvent;                                                   //@synthesize viewLoaderDidLoadEvent=_viewLoaderDidLoadEvent - In the implementation block
@property (assign,nonatomic) char ignoreNextContextTracksUpdate;                                            //@synthesize ignoreNextContextTracksUpdate=_ignoreNextContextTracksUpdate - In the implementation block
@property (nonatomic,retain) id<SPTAudioTouch> audioTouch;                                                  //@synthesize audioTouch=_audioTouch - In the implementation block
@property (nonatomic,retain) id<SPTImageLoader> imageLoader;                                                //@synthesize imageLoader=_imageLoader - In the implementation block
@property (nonatomic,retain) id<SPTTinkerbellManager> tinkerbellManager;                                    //@synthesize tinkerbellManager=_tinkerbellManager - In the implementation block
@property (nonatomic,retain) id<SPTTinkerbellStoryRegistry> tinkerbellStoryRegistry;                        //@synthesize tinkerbellStoryRegistry=_tinkerbellStoryRegistry - In the implementation block
@property (nonatomic,retain) id<SPTTinkerbellItemPresentationController> tinkerbellController;              //@synthesize tinkerbellController=_tinkerbellController - In the implementation block
@property (nonatomic,retain) SPTClientEventLogger * clientEventLogger;                                      //@synthesize clientEventLogger=_clientEventLogger - In the implementation block
@property (nonatomic,retain) id<SPTPlaylistAdditionalSection> additionalSection;                            //@synthesize additionalSection=_additionalSection - In the implementation block
@property (assign,nonatomic) char cachedOfflineState;                                                       //@synthesize cachedOfflineState=_cachedOfflineState - In the implementation block
@property (assign,nonatomic) char tableViewNeedsReload;                                                     //@synthesize tableViewNeedsReload=_tableViewNeedsReload - In the implementation block
@property (assign,nonatomic) char showsAvailableOfflineRow;                                                 //@synthesize showsAvailableOfflineRow=_showsAvailableOfflineRow - In the implementation block
@property (nonatomic,retain) SPTTableViewOfflineSwitchCell * offlineSwitchCell;                             //@synthesize offlineSwitchCell=_offlineSwitchCell - In the implementation block
@property (nonatomic,retain) SPTPopoverController * contextPopoverController;                               //@synthesize contextPopoverController=_contextPopoverController - In the implementation block
@property (nonatomic,retain) UIAlertController * playlistRenameAlertController;                             //@synthesize playlistRenameAlertController=_playlistRenameAlertController - In the implementation block
@property (nonatomic,retain) UIAlertAction * renameAction;                                                  //@synthesize renameAction=_renameAction - In the implementation block
@property (nonatomic,retain) id<SPTProductState> productState;                                              //@synthesize productState=_productState - In the implementation block
@property (assign,nonatomic) char lastShuffleMode;                                                          //@synthesize lastShuffleMode=_lastShuffleMode - In the implementation block
@property (nonatomic,copy) NSString * currentFilter;                                                        //@synthesize currentFilter=_currentFilter - In the implementation block
@property (assign,nonatomic) float tableViewRowHeight;                                                      //@synthesize tableViewRowHeight=_tableViewRowHeight - In the implementation block
@property (nonatomic,retain) id<SPTOfflineModeState> offlineNotifier;                                       //@synthesize offlineNotifier=_offlineNotifier - In the implementation block
@property (nonatomic,retain) id<SPTBannerPresentationManager> bannerPresentationManager;                    //@synthesize bannerPresentationManager=_bannerPresentationManager - In the implementation block
@property (nonatomic,retain) id<SPTPlayerQueue> playerQueue;                                                //@synthesize playerQueue=_playerQueue - In the implementation block
@property (nonatomic,retain) id<SPTPlayer> player;                                                          //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) id<SPTSponsoredContextViewModel> sponsoredContextProtocol;                     //@synthesize sponsoredContextProtocol=_sponsoredContextProtocol - In the implementation block
@property (nonatomic,retain) id<SPTAdsManager> adsManager;                                                  //@synthesize adsManager=_adsManager - In the implementation block
@property (nonatomic,retain) SPTNetworkConnectivityController * networkConnectivityController;              //@synthesize networkConnectivityController=_networkConnectivityController - In the implementation block
@property (nonatomic,retain) id<SPTCollectionLogger> logger;                                                //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) id<SPTShuffleButtonTestController> shuffleButtonTestController;              //@synthesize shuffleButtonTestController=_shuffleButtonTestController - In the implementation block
@property (nonatomic,retain) NSURL * currentPlaylistImageURL;                                               //@synthesize currentPlaylistImageURL=_currentPlaylistImageURL - In the implementation block
@property (assign,nonatomic) char entityHeaderScrollUpdatesEnabled;                                         //@synthesize entityHeaderScrollUpdatesEnabled=_entityHeaderScrollUpdatesEnabled - In the implementation block
@property (nonatomic,readonly) id<SPTAbbaFeatureFlags> abbaFeatureFlags;                                    //@synthesize abbaFeatureFlags=_abbaFeatureFlags - In the implementation block
@property (assign,nonatomic) char alwaysShowAvailableOfflineRolloutFlag;                                    //@synthesize alwaysShowAvailableOfflineRolloutFlag=_alwaysShowAvailableOfflineRolloutFlag - In the implementation block
@property (assign,nonatomic,__weak) id<PlaylistFeature> playlistFeature;                                    //@synthesize playlistFeature=_playlistFeature - In the implementation block
@property (nonatomic,__weak,readonly) id<SPTVoiceCommandFeature> voiceCommandFeature;                       //@synthesize voiceCommandFeature=_voiceCommandFeature - In the implementation block
@property (assign,nonatomic,__weak) id<SPTSpotlightIndexRegistry> spotlightIndexRegistry;                   //@synthesize spotlightIndexRegistry=_spotlightIndexRegistry - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char automaticallyAdjustsScrollViewInsets; 
@property (getter=spt_pageIdentifier,nonatomic,readonly) NSString * pageIdentifier; 
@property (getter=spt_pageURI,nonatomic,readonly) NSURL * pageURI; 
-(id<SPTProductState>)productState;
-(SPTClientEventLogger *)clientEventLogger;
-(void)sp_updateContentInsets;
-(SPTNetworkConnectivityController *)networkConnectivityController;
-(unsigned)preferredNavigationBarState;
-(id)viewEventURI;
-(void)setProductState:(id<SPTProductState>)arg1 ;
-(void)applyThemeLayout;
-(id<SPTImageLoader>)imageLoader;
-(void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5 ;
-(void)setImageLoader:(id<SPTImageLoader>)arg1 ;
-(int)stackedNavigationPageSize;
-(MetaViewController *)metaViewController;
-(void)setMetaViewController:(MetaViewController *)arg1 ;
-(void)setNetworkConnectivityController:(SPTNetworkConnectivityController *)arg1 ;
-(id<SPTOfflineModeState>)offlineNotifier;
-(void)offlineModeState:(id)arg1 updated:(char)arg2 ;
-(unsigned)offlineSwitchCellOfflineAvailability:(id)arg1 ;
-(void)offlineSwitchCellDidChangeState:(id)arg1 isOn:(char)arg2 ;
-(id<SPTAbbaFeatureFlags>)abbaFeatureFlags;
-(void)setClientEventLogger:(SPTClientEventLogger *)arg1 ;
-(void)productState:(id)arg1 stateDidChange:(id)arg2 ;
-(id)spt_pageIdentifier;
-(id)spt_pageURI;
-(id<SPTBannerPresentationManager>)bannerPresentationManager;
-(void)setAudioTouch:(id<SPTAudioTouch>)arg1 ;
-(id<SPTAudioTouch>)audioTouch;
-(id<SPContextMenuFeature>)contextMenuFeature;
-(void)setContextMenuFeature:(id<SPContextMenuFeature>)arg1 ;
-(id<SPTAdsManager>)adsManager;
-(void)setAdsManager:(id<SPTAdsManager>)arg1 ;
-(id<SPTVoiceCommandFeature>)voiceCommandFeature;
-(void)setContextPopoverController:(SPTPopoverController *)arg1 ;
-(SPTPopoverController *)contextPopoverController;
-(char)hasSetupContentOffset;
-(void)setHasSetupContentOffset:(char)arg1 ;
-(id<SPTShuffleButtonTestController>)shuffleButtonTestController;
-(void)setMetadataView:(SPTPlaylistMetadataView *)arg1 ;
-(SPTPlaylistMetadataView *)metadataView;
-(SPTTableViewOfflineSwitchCell *)offlineSwitchCell;
-(id<SPTOnDemandUpsellTest>)onDemandUpsellTest;
-(id<SPTUpsellManager>)upsellManager;
-(void)updateUserActivityState:(id)arg1 withThumbnailImage:(id)arg2 ;
-(void)playButtonTapped;
-(char)alwaysShowAvailableOfflineRolloutFlag;
-(id<SPTSpotlightIndexRegistry>)spotlightIndexRegistry;
-(void)entityTableHeaderViewImageViewDidReceiveTap:(id)arg1 ;
-(void)entityTableHeaderView:(id)arg1 didScrollToPageNumber:(int)arg2 ;
-(char)continuousSwipeEnabledForTableView:(id)arg1 ;
-(void)shufflePlayAndUpsellFromOnDemandTest;
-(void)triggerOnDemandUpsellFromOnDemandTest;
-(void)defaultShuffleBounceFromOnDemandTest;
-(void)shufflePlayFromOnDemandTest;
-(void)voiceCommandFeature:(id)arg1 enabledStateDidChange:(char)arg2 ;
-(void)setAlwaysShowAvailableOfflineRolloutFlag:(char)arg1 ;
-(void)setOfflineSwitchCell:(SPTTableViewOfflineSwitchCell *)arg1 ;
-(void)setOnDemandUpsellTest:(id<SPTOnDemandUpsellTest>)arg1 ;
-(void)setSpotlightIndexRegistry:(id<SPTSpotlightIndexRegistry>)arg1 ;
-(void)followButtonTapped:(id)arg1 ;
-(char)viewEngine:(id)arg1 shouldRecognizeTouch:(id)arg2 ;
-(void)showInfoView;
-(void)hideInfoView;
-(float)tableViewRowHeight;
-(void)viewEngineDidBeginInteraction:(id)arg1 ;
-(void)viewEngineDidEndInteraction:(id)arg1 ;
-(id<SPTPlayerQueue>)playerQueue;
-(void)setOfflineNotifier:(id<SPTOfflineModeState>)arg1 ;
-(void)setBannerPresentationManager:(id<SPTBannerPresentationManager>)arg1 ;
-(void)setFollowButton:(SPTActionButton *)arg1 ;
-(SPTActionButton *)followButton;
-(id)accessoryViewForIndexPath:(id)arg1 ;
-(void)tableViewCellContextMenuButtonTapped:(id)arg1 ;
-(void)contextMenuViewControllerDidDismiss:(id)arg1 ;
-(void)setPlaylistFeature:(id<PlaylistFeature>)arg1 ;
-(id<PlaylistFeature>)playlistFeature;
-(void)setAdditionalSection:(id<SPTPlaylistAdditionalSection>)arg1 ;
-(id<SPTPlaylistAdditionalSection>)additionalSection;
-(void)updateInfoView;
-(int)isAdditionalSection:(int)arg1 ;
-(void)navigateToBrowse;
-(void)navigateToMusicHub;
-(char)showHeaderForSection:(int)arg1 ;
-(void)refreshShuffleMode;
-(void)setUpsellManager:(id<SPTUpsellManager>)arg1 ;
-(void)setPlayerQueue:(id<SPTPlayerQueue>)arg1 ;
-(id<SPTTinkerbellManager>)tinkerbellManager;
-(void)setTinkerbellManager:(id<SPTTinkerbellManager>)arg1 ;
-(void)playlistAdditionalSectionDidUpdate:(id)arg1 ;
-(id<SPTTinkerbellItemPresentationController>)tinkerbellController;
-(id<SPTTinkerbellStoryRegistry>)tinkerbellStoryRegistry;
-(void)setTinkerbellController:(id<SPTTinkerbellItemPresentationController>)arg1 ;
-(void)setTinkerbellStoryRegistry:(id<SPTTinkerbellStoryRegistry>)arg1 ;
-(void)setViewLoaderDidLoadEvent:(char)arg1 ;
-(NSURL *)autoPlayTrackURL;
-(char)shouldDisplaySpecialHeaderView;
-(void)toggleAvailableOfflineRowVisible:(char)arg1 updateTableView:(char)arg2 animated:(char)arg3 ;
-(void)setSpecialHeaderView:(SPTPlaylistSpecialTableHeaderView *)arg1 ;
-(SPTPlaylistSpecialTableHeaderView *)specialHeaderView;
-(SPTSearchBar *)filterField;
-(void)setFilterField:(SPTSearchBar *)arg1 ;
-(void)setEntityHeaderView:(SPTEntityTableHeaderView *)arg1 ;
-(SPTEntityTableHeaderView *)entityHeaderView;
-(void)updateOfflineInfoView;
-(void)setTableViewNeedsReload;
-(void)setLastShuffleMode:(char)arg1 ;
-(char)lastShuffleMode;
-(void)setTableViewNeedsReload:(char)arg1 ;
-(void)reloadTableViewIfNeeded;
-(void)setEntityHeaderScrollUpdatesEnabled:(char)arg1 ;
-(void)presentShufflePlayButtonTinkerbell;
-(void)dismissFilterInterface;
-(void)updateEditBarButtonAnimated:(char)arg1 ;
-(void)updateFilterAndSortConstraints;
-(float)bottomInsetAdjustedForBottomBarAndFewTracks;
-(void)setTableViewRowHeight:(float)arg1 ;
-(NSURL *)currentPlaylistImageURL;
-(void)setCurrentPlaylistImageURL:(NSURL *)arg1 ;
-(char)viewLoaderDidLoadEvent;
-(id)createFilterField;
-(id)createFilterAndSortBarWithFrame:(CGRect)arg1 ;
-(void)toggleFollowingView:(char)arg1 animated:(char)arg2 fromContextMenu:(char)arg3 ;
-(void)updatePlaylistImageWithForcedUpdate:(char)arg1 ;
-(void)playTrackUponDeeplinkingIntoTheApp;
-(void)setAutoPlayTrackURL:(NSURL *)arg1 ;
-(char)ignoreNextContextTracksUpdate;
-(char)swipeGestureIsActive;
-(void)setIgnoreNextContextTracksUpdate:(char)arg1 ;
-(void)updateViewsExceptTableView;
-(char)showsAvailableOfflineRow;
-(void)updateMetaDataViewProfilePicture;
-(id)createPlaylistOwnerLabel;
-(id)playlistOwnerName;
-(UIButton *)filterCancelButton;
-(void)setFilterCancelButton:(UIButton *)arg1 ;
-(void)forcedDismissFilterInterface;
-(UIView *)filterAndSortContainer;
-(SPTPlaylistSortMenuButton *)sortContextMenuButton;
-(char)filterWithCancelButtonIsActive;
-(void)setSortContextMenuButton:(SPTPlaylistSortMenuButton *)arg1 ;
-(void)sortContextButtonTapped:(id)arg1 ;
-(void)setFilterAndSortContainer:(UIView *)arg1 ;
-(void)togglePlaylistFollowState:(char)arg1 fromContextMenu:(char)arg2 ;
-(void)updateAvailableOfflineRowVisibility:(char)arg1 ;
-(void)setShowsAvailableOfflineRow:(char)arg1 ;
-(void)updateAvailableOfflineSectionAnimatedToVisible:(char)arg1 ;
-(void)editDoneButtonTapped;
-(void)mainContextMenuButtonTapped;
-(void)unfollowAndPopViewController;
-(UIAlertView *)playlistRenameAlertView;
-(UIAlertController *)playlistRenameAlertController;
-(void)dismissFilterInterfaceForced:(char)arg1 ;
-(char)tableViewNeedsReload;
-(char)isAdditionalCellProviderSection:(int)arg1 ;
-(char)entityHeaderScrollUpdatesEnabled;
-(void)toggleCollaborativeStateWithAction:(id)arg1 ;
-(void)togglePublicPlaylistStateWithAction:(id)arg1 ;
-(void)renamePlaylistWithAction:(id)arg1 ;
-(void)removePlaylistWithAction:(id)arg1 ;
-(void)addPlaylistToQueue;
-(void)setPlaylistDeleteAlertView:(UIAlertView *)arg1 ;
-(UIAlertView *)playlistDeleteAlertView;
-(void)removePlaylist;
-(void)setPlaylistRenameAlertController:(UIAlertController *)arg1 ;
-(void)renamePlaylist;
-(void)setRenameAction:(UIAlertAction *)arg1 ;
-(UIAlertAction *)renameAction;
-(UITextField *)playlistRenameAlertTextField;
-(void)setPlaylistRenameAlertView:(UIAlertView *)arg1 ;
-(void)showPlaylistStateActionProgressViewWithCustomIcon:(int)arg1 title:(id)arg2 ;
-(unsigned)numberOfDefaultSections;
-(char)cachedOfflineState;
-(void)setCachedOfflineState:(char)arg1 ;
-(unsigned)numberOfSectionsBeforeDefaultTrackSection;
-(void)playlistMetadataView:(id)arg1 ownerViewTapped:(id)arg2 isOwnerName:(char)arg3 ;
-(void)playlistActionWasTriggered:(id)arg1 ;
-(id)provideAudioTouch;
-(void)specialTableHeaderView:(id)arg1 shuffleButtonWasTapped:(id)arg2 ;
-(CGPoint)activeFilterAnimationOriginForSpecialTableView:(id)arg1 ;
-(void)playlistViewModelContextDidLoad:(id)arg1 ;
-(void)playlistViewModelTracksDidChange:(id)arg1 ;
-(void)playlistViewModelNowPlayingTrackDidChange:(id)arg1 ;
-(void)playlistViewModel:(id)arg1 availableOfflineChanged:(char)arg2 ;
-(void)playlistViewModel:(id)arg1 followStateDidChange:(char)arg2 ;
-(void)playlistViewModelMetadataDidChange:(id)arg1 ;
-(void)playlistViewModelDidRemovePlaylist;
-(void)playlistViewModelSponsorshipDidChange:(id)arg1 ;
-(id)initWithPlaylistViewModel:(id)arg1 playerQueue:(id)arg2 player:(id)arg3 contextMenuFeature:(id)arg4 metaViewController:(id)arg5 collection:(id)arg6 imageLoader:(id)arg7 audioTouch:(id)arg8 tinkerbellManager:(id)arg9 tinkerbellStoryRegistry:(id)arg10 clientEventLogger:(id)arg11 offlineNotifier:(id)arg12 productState:(id)arg13 bannerPresentationManager:(id)arg14 adsManager:(id)arg15 networkConnectivityController:(id)arg16 upsellManager:(id)arg17 collectionLogger:(id)arg18 shuffleButtonTestController:(id)arg19 abbaFeatureFlags:(id)arg20 additionalSection:(id)arg21 onDemandUpsellTest:(id)arg22 voiceFeatureTask:(id)arg23 spotlightIndexRegistry:(id)arg24 ;
-(void)updateCellTitleColors;
-(UILabel *)playlistOwnerLabel;
-(void)setPlaylistOwnerLabel:(UILabel *)arg1 ;
-(id<SPTSponsoredContextViewModel>)sponsoredContextProtocol;
-(void)setSponsoredContextProtocol:(id<SPTSponsoredContextViewModel>)arg1 ;
-(id)titleForSection:(int)arg1 ;
-(id<SPTCollectionLogger>)logger;
-(void)setLogger:(id<SPTCollectionLogger>)arg1 ;
-(SPTInfoView *)infoView;
-(void)setInfoView:(SPTInfoView *)arg1 ;
-(PlaylistViewModel *)viewModel;
-(id<CollectionFeature>)collection;
-(void)setCollection:(id<CollectionFeature>)arg1 ;
-(void)setPlayer:(id<SPTPlayer>)arg1 ;
-(void)setViewModel:(PlaylistViewModel *)arg1 ;
-(id<SPTPlayer>)player;
-(void)dealloc;
-(int)numberOfRowsInSection:(int)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)updateUserActivityState:(id)arg1 ;
-(void)willPresentAlertView:(id)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(char)alertViewShouldEnableFirstOtherButton:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)updateViewConstraints;
-(char)automaticallyAdjustsScrollViewInsets;
-(id)URL;
-(void)setProgressView:(SPTProgressView *)arg1 ;
-(SPTProgressView *)progressView;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(id)URI;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(NSString *)currentFilter;
-(void)setCurrentFilter:(NSString *)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
@end

