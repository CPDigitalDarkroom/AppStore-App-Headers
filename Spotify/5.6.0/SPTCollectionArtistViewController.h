/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:32 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTableViewController.h>
#import <Spotify/SPTImageLoaderDelegate.h>
#import <Spotify/SPTNavigationControllerNavigationBarState.h>
#import <Spotify/SPTEntityTableHeaderViewNavigationBarProvider.h>
#import <Spotify/SPTThemableViewLayoutDelegate.h>
#import <Spotify/SPTProductStateObserver.h>
#import <Spotify/SPTTableViewContinuousSwipeDelegate.h>
#import <Spotify/SPTOfflineSwitchDelegate.h>
#import <Spotify/SPTVoiceCommandInterfaceHost.h>
#import <Spotify/SPTVoiceCommandFeatureObserver.h>
#import <Spotify/SPTCollectionArtistModelDelegate.h>

@protocol SPTContextMenuViewControllerFactory, SPTAudioTouch, SPTImageLoader, SPTProductState, SPTCollectionLogger, SPTShuffleButtonTestController, SPTAbbaFeatureFlags, SPTCollectionCacheplayTestManager, SPTVoiceCommandFeature;
@class SPTCollectionArtistModel, SPTEntityTableHeaderView, SPTActionButton, SPTNetworkConnectivityController, SPTTableViewOfflineSwitchCell, SPTPopoverController, SPTProgressView, SPTInfoView, SPTCollectionEmptyEntityFooterView, NSString;

@interface SPTCollectionArtistViewController : SPTableViewController <SPTImageLoaderDelegate, SPTNavigationControllerNavigationBarState, SPTEntityTableHeaderViewNavigationBarProvider, SPTThemableViewLayoutDelegate, SPTProductStateObserver, SPTTableViewContinuousSwipeDelegate, SPTOfflineSwitchDelegate, SPTVoiceCommandInterfaceHost, SPTVoiceCommandFeatureObserver, SPTCollectionArtistModelDelegate> {

	int _lastActiveRow;
	int _activeRow;
	char _hasSetupContentOffset;
	char _dataLoaded;
	SPTCollectionArtistModel* _artistModel;
	SPTEntityTableHeaderView* _headerView;
	SPTActionButton* _followButton;
	id<SPTContextMenuViewControllerFactory> _contextMenuViewControlFactory;
	id<SPTAudioTouch> _audioTouch;
	id<SPTImageLoader> _imageLoader;
	SPTNetworkConnectivityController* _networkConnectivityController;
	SPTTableViewOfflineSwitchCell* _offlineSwitchCell;
	SPTPopoverController* _contextPopoverController;
	SPTProgressView* _progressView;
	SPTInfoView* _offlineView;
	id<SPTProductState> _productState;
	id<SPTCollectionLogger> _logger;
	SPTCollectionEmptyEntityFooterView* _emptyArtistFooterView;
	id<SPTShuffleButtonTestController> _shuffleButtonTestController;
	id<SPTAbbaFeatureFlags> _abbaFeatureFlags;
	id<SPTCollectionCacheplayTestManager> _cacheplayTestManager;
	id<SPTVoiceCommandFeature> _voiceCommandFeature;

}

@property (nonatomic,retain) SPTCollectionArtistModel * artistModel;                                             //@synthesize artistModel=_artistModel - In the implementation block
@property (nonatomic,retain) SPTEntityTableHeaderView * headerView;                                              //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) SPTActionButton * followButton;                                                     //@synthesize followButton=_followButton - In the implementation block
@property (assign,nonatomic) char hasSetupContentOffset;                                                         //@synthesize hasSetupContentOffset=_hasSetupContentOffset - In the implementation block
@property (nonatomic,retain) id<SPTContextMenuViewControllerFactory> contextMenuViewControlFactory;              //@synthesize contextMenuViewControlFactory=_contextMenuViewControlFactory - In the implementation block
@property (nonatomic,retain) id<SPTAudioTouch> audioTouch;                                                       //@synthesize audioTouch=_audioTouch - In the implementation block
@property (nonatomic,retain) id<SPTImageLoader> imageLoader;                                                     //@synthesize imageLoader=_imageLoader - In the implementation block
@property (nonatomic,retain) SPTNetworkConnectivityController * networkConnectivityController;                   //@synthesize networkConnectivityController=_networkConnectivityController - In the implementation block
@property (nonatomic,retain) SPTTableViewOfflineSwitchCell * offlineSwitchCell;                                  //@synthesize offlineSwitchCell=_offlineSwitchCell - In the implementation block
@property (nonatomic,retain) SPTPopoverController * contextPopoverController;                                    //@synthesize contextPopoverController=_contextPopoverController - In the implementation block
@property (nonatomic,retain) SPTProgressView * progressView;                                                     //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) SPTInfoView * offlineView;                                                          //@synthesize offlineView=_offlineView - In the implementation block
@property (assign,getter=isDataLoaded,nonatomic) char dataLoaded;                                                //@synthesize dataLoaded=_dataLoaded - In the implementation block
@property (nonatomic,readonly) id<SPTProductState> productState;                                                 //@synthesize productState=_productState - In the implementation block
@property (nonatomic,retain) id<SPTCollectionLogger> logger;                                                     //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) SPTCollectionEmptyEntityFooterView * emptyArtistFooterView;                         //@synthesize emptyArtistFooterView=_emptyArtistFooterView - In the implementation block
@property (nonatomic,readonly) id<SPTShuffleButtonTestController> shuffleButtonTestController;                   //@synthesize shuffleButtonTestController=_shuffleButtonTestController - In the implementation block
@property (nonatomic,readonly) id<SPTAbbaFeatureFlags> abbaFeatureFlags;                                         //@synthesize abbaFeatureFlags=_abbaFeatureFlags - In the implementation block
@property (nonatomic,__weak,readonly) id<SPTCollectionCacheplayTestManager> cacheplayTestManager;                //@synthesize cacheplayTestManager=_cacheplayTestManager - In the implementation block
@property (nonatomic,__weak,readonly) id<SPTVoiceCommandFeature> voiceCommandFeature;                            //@synthesize voiceCommandFeature=_voiceCommandFeature - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SPTProductState>)productState;
-(void)sp_updateContentInsets;
-(SPTNetworkConnectivityController *)networkConnectivityController;
-(unsigned)preferredNavigationBarState;
-(id)viewEventURI;
-(void)applyThemeLayout;
-(id<SPTImageLoader>)imageLoader;
-(void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5 ;
-(void)setImageLoader:(id<SPTImageLoader>)arg1 ;
-(int)stackedNavigationPageSize;
-(id)spt_referrerIdentifier;
-(void)setNetworkConnectivityController:(SPTNetworkConnectivityController *)arg1 ;
-(unsigned)offlineSwitchCellOfflineAvailability:(id)arg1 ;
-(void)offlineSwitchCellDidChangeState:(id)arg1 isOn:(char)arg2 ;
-(id<SPTAbbaFeatureFlags>)abbaFeatureFlags;
-(void)themableViewDidUpdateLayout:(id)arg1 ;
-(void)productState:(id)arg1 stateDidChange:(id)arg2 ;
-(void)setAudioTouch:(id<SPTAudioTouch>)arg1 ;
-(void)setupContextMenuButton;
-(id<SPTAudioTouch>)audioTouch;
-(id<SPTVoiceCommandFeature>)voiceCommandFeature;
-(void)setupHeaderView;
-(void)setContextPopoverController:(SPTPopoverController *)arg1 ;
-(SPTPopoverController *)contextPopoverController;
-(char)hasSetupContentOffset;
-(void)setHasSetupContentOffset:(char)arg1 ;
-(id<SPTShuffleButtonTestController>)shuffleButtonTestController;
-(SPTTableViewOfflineSwitchCell *)offlineSwitchCell;
-(char)continuousSwipeEnabledForTableView:(id)arg1 ;
-(void)voiceCommandFeature:(id)arg1 enabledStateDidChange:(char)arg2 ;
-(void)setOfflineSwitchCell:(SPTTableViewOfflineSwitchCell *)arg1 ;
-(void)updateRightBarButtonItems;
-(id)provideNavigationBarForHeaderView:(id)arg1 ;
-(void)showOfflineView;
-(void)setFollowButton:(SPTActionButton *)arg1 ;
-(SPTActionButton *)followButton;
-(id)initWithArtistModel:(id)arg1 contextMenuViewControlFactory:(id)arg2 productState:(id)arg3 audioTouch:(id)arg4 imageLoader:(id)arg5 networkConnectivityController:(id)arg6 collectionLogger:(id)arg7 shuffleButtonTestController:(id)arg8 abbaFeatureFlags:(id)arg9 cacheplayTestManager:(id)arg10 voiceFeatureTask:(id)arg11 ;
-(id<SPTCollectionCacheplayTestManager>)cacheplayTestManager;
-(void)artistModelDidLoadMetadata:(id)arg1 ;
-(void)artistModelDidUpdate:(id)arg1 ;
-(void)artistModelDidUpdatePlayingRow:(id)arg1 ;
-(void)artistModelOfflineStateChanged:(id)arg1 ;
-(void)artistModelDidUpdateSessionOfflineStatus:(id)arg1 ;
-(void)setDataLoaded:(char)arg1 ;
-(void)setOfflineView:(SPTInfoView *)arg1 ;
-(SPTInfoView *)offlineView;
-(void)disableContextMenuButton;
-(SPTCollectionArtistModel *)artistModel;
-(char)showHeaderForSection:(unsigned)arg1 ;
-(unsigned)trackSectionForSection:(unsigned)arg1 ;
-(id)trackIndexForTableIndexPath:(id)arg1 ;
-(void)invokeContextMenuForTrackButton:(id)arg1 ;
-(int)offlineSyncStatusForTrackAtTrackIndexPath:(id)arg1 ;
-(void)updateHeaderFollowButtonEnabledState;
-(void)showEmptyArtistView;
-(void)hideEmptyArtistView;
-(void)setActiveRow:(int)arg1 ;
-(void)hideOfflineView;
-(SPTCollectionEmptyEntityFooterView *)emptyArtistFooterView;
-(id<SPTContextMenuViewControllerFactory>)contextMenuViewControlFactory;
-(void)shufflePlay:(id)arg1 ;
-(void)toggleFollowButton:(id)arg1 ;
-(void)enableContextMenuButton;
-(void)updateHeaderFollowButton;
-(void)invokeArtistContextMenu;
-(void)changeContextMenuButtonState:(char)arg1 ;
-(void)setEmptyArtistFooterView:(SPTCollectionEmptyEntityFooterView *)arg1 ;
-(void)refreshShuffleMode;
-(void)artistModelFailedToLoad:(id)arg1 withError:(id)arg2 ;
-(void)toggleOfflineState:(id)arg1 ;
-(void)navigateToArtistPage;
-(void)setArtistModel:(SPTCollectionArtistModel *)arg1 ;
-(void)setContextMenuViewControlFactory:(id<SPTContextMenuViewControllerFactory>)arg1 ;
-(id<SPTCollectionLogger>)logger;
-(void)setLogger:(id<SPTCollectionLogger>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(char)automaticallyAdjustsScrollViewInsets;
-(id)URL;
-(SPTEntityTableHeaderView *)headerView;
-(void)setHeaderView:(SPTEntityTableHeaderView *)arg1 ;
-(void)updateHeaderView;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setProgressView:(SPTProgressView *)arg1 ;
-(SPTProgressView *)progressView;
-(char)isDataLoaded;
@end

