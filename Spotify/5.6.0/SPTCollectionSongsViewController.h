/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:32 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Spotify/SPObjectRepresentation.h>
#import <Spotify/SPTCollectionFilterBarDelegate.h>
#import <Spotify/SPTProductStateObserver.h>
#import <Spotify/SPTTableViewContinuousSwipeDelegate.h>
#import <Spotify/SPTOfflineSwitchDelegate.h>
#import <Spotify/SPTVoiceCommandInterfaceHost.h>
#import <Spotify/SPTVoiceCommandFeatureObserver.h>
#import <Spotify/SPTCollectionSongsModelDelegate.h>
#import <Spotify/SPContentInsetViewController.h>

@protocol SPTContextMenuViewControllerFactory, SPTAudioTouch, SPTLocalSettings, SPTProductState, SPTCollectionLogger, SPTCollectionNUXModifying, SPTShuffleButtonTestController, SPTAbbaFeatureFlags, SPTCollectionCacheplayTestManager, SPTVoiceCommandFeature;
@class SPTCollectionSongsModel, UITableView, SPTInfoView, SPTCollectionFilterBar, SPTPopoverController, SPTNetworkConnectivityController, SPTCollectionToolbarHeaderView, SPTCollectionShuffleButtonContainer, SPTTableViewOfflineSwitchCell, NSString;

@interface SPTCollectionSongsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, SPObjectRepresentation, SPTCollectionFilterBarDelegate, SPTProductStateObserver, SPTTableViewContinuousSwipeDelegate, SPTOfflineSwitchDelegate, SPTVoiceCommandInterfaceHost, SPTVoiceCommandFeatureObserver, SPTCollectionSongsModelDelegate, SPContentInsetViewController> {

	char _hideAvailableOffline;
	char _userDefaultsLoaded;
	char _shouldShowLocalFilesFilter;
	SPTCollectionSongsModel* _model;
	UITableView* _tableView;
	id<SPTContextMenuViewControllerFactory> _contextMenuViewControlFactory;
	SPTInfoView* _infoView;
	id<SPTAudioTouch> _audioTouch;
	int _savedSeparatorStyle;
	SPTCollectionFilterBar* _filterBar;
	id<SPTLocalSettings> _localSettings;
	SPTPopoverController* _contextPopoverController;
	SPTNetworkConnectivityController* _networkConnectivityController;
	SPTCollectionToolbarHeaderView* _sectionHeader;
	id<SPTProductState> _productState;
	SPTCollectionShuffleButtonContainer* _shuffleButtonContainer;
	SPTTableViewOfflineSwitchCell* _offlineSwitchCell;
	id<SPTCollectionLogger> _logger;
	id<SPTCollectionNUXModifying> _NUXModifier;
	id<SPTShuffleButtonTestController> _shuffleButtonTestController;
	id<SPTAbbaFeatureFlags> _abbaFeatureFlags;
	id<SPTCollectionCacheplayTestManager> _cacheplayTestManager;
	id<SPTVoiceCommandFeature> _voiceCommandFeature;

}

@property (nonatomic,retain) SPTCollectionSongsModel * model;                                                      //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                              //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) id<SPTContextMenuViewControllerFactory> contextMenuViewControlFactory;              //@synthesize contextMenuViewControlFactory=_contextMenuViewControlFactory - In the implementation block
@property (nonatomic,retain) SPTInfoView * infoView;                                                               //@synthesize infoView=_infoView - In the implementation block
@property (nonatomic,retain) id<SPTAudioTouch> audioTouch;                                                         //@synthesize audioTouch=_audioTouch - In the implementation block
@property (assign,nonatomic) int savedSeparatorStyle;                                                              //@synthesize savedSeparatorStyle=_savedSeparatorStyle - In the implementation block
@property (nonatomic,retain) SPTCollectionFilterBar * filterBar;                                                   //@synthesize filterBar=_filterBar - In the implementation block
@property (assign,nonatomic) char hideAvailableOffline;                                                            //@synthesize hideAvailableOffline=_hideAvailableOffline - In the implementation block
@property (assign,getter=isUserDefaultsLoaded,nonatomic) char userDefaultsLoaded;                                  //@synthesize userDefaultsLoaded=_userDefaultsLoaded - In the implementation block
@property (nonatomic,retain) id<SPTLocalSettings> localSettings;                                                   //@synthesize localSettings=_localSettings - In the implementation block
@property (nonatomic,retain) SPTPopoverController * contextPopoverController;                                      //@synthesize contextPopoverController=_contextPopoverController - In the implementation block
@property (nonatomic,retain) SPTNetworkConnectivityController * networkConnectivityController;                     //@synthesize networkConnectivityController=_networkConnectivityController - In the implementation block
@property (nonatomic,retain) SPTCollectionToolbarHeaderView * sectionHeader;                                       //@synthesize sectionHeader=_sectionHeader - In the implementation block
@property (nonatomic,readonly) id<SPTProductState> productState;                                                   //@synthesize productState=_productState - In the implementation block
@property (nonatomic,retain) SPTCollectionShuffleButtonContainer * shuffleButtonContainer;                         //@synthesize shuffleButtonContainer=_shuffleButtonContainer - In the implementation block
@property (nonatomic,retain) SPTTableViewOfflineSwitchCell * offlineSwitchCell;                                    //@synthesize offlineSwitchCell=_offlineSwitchCell - In the implementation block
@property (nonatomic,retain) id<SPTCollectionLogger> logger;                                                       //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) id<SPTCollectionNUXModifying> NUXModifier;                                            //@synthesize NUXModifier=_NUXModifier - In the implementation block
@property (nonatomic,readonly) id<SPTShuffleButtonTestController> shuffleButtonTestController;                     //@synthesize shuffleButtonTestController=_shuffleButtonTestController - In the implementation block
@property (nonatomic,readonly) id<SPTAbbaFeatureFlags> abbaFeatureFlags;                                           //@synthesize abbaFeatureFlags=_abbaFeatureFlags - In the implementation block
@property (assign,nonatomic,__weak) id<SPTCollectionCacheplayTestManager> cacheplayTestManager;                    //@synthesize cacheplayTestManager=_cacheplayTestManager - In the implementation block
@property (assign,nonatomic) char shouldShowLocalFilesFilter;                                                      //@synthesize shouldShowLocalFilesFilter=_shouldShowLocalFilesFilter - In the implementation block
@property (nonatomic,__weak,readonly) id<SPTVoiceCommandFeature> voiceCommandFeature;                              //@synthesize voiceCommandFeature=_voiceCommandFeature - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char automaticallyAdjustsScrollViewInsets; 
-(id<SPTProductState>)productState;
-(void)sp_updateContentInsets;
-(SPTNetworkConnectivityController *)networkConnectivityController;
-(id)viewEventURI;
-(int)stackedNavigationPageSize;
-(id)spt_referrerIdentifier;
-(void)setNetworkConnectivityController:(SPTNetworkConnectivityController *)arg1 ;
-(unsigned)offlineSwitchCellOfflineAvailability:(id)arg1 ;
-(void)offlineSwitchCellDidChangeState:(id)arg1 isOn:(char)arg2 ;
-(id<SPTAbbaFeatureFlags>)abbaFeatureFlags;
-(void)productState:(id)arg1 stateDidChange:(id)arg2 ;
-(id<SPTLocalSettings>)localSettings;
-(void)setLocalSettings:(id<SPTLocalSettings>)arg1 ;
-(void)setAudioTouch:(id<SPTAudioTouch>)arg1 ;
-(id<SPTAudioTouch>)audioTouch;
-(id<SPTVoiceCommandFeature>)voiceCommandFeature;
-(void)setContextPopoverController:(SPTPopoverController *)arg1 ;
-(SPTPopoverController *)contextPopoverController;
-(id<SPTShuffleButtonTestController>)shuffleButtonTestController;
-(SPTTableViewOfflineSwitchCell *)offlineSwitchCell;
-(char)continuousSwipeEnabledForTableView:(id)arg1 ;
-(void)voiceCommandFeature:(id)arg1 enabledStateDidChange:(char)arg2 ;
-(void)setOfflineSwitchCell:(SPTTableViewOfflineSwitchCell *)arg1 ;
-(void)contextMenuButtonTapped:(id)arg1 ;
-(id)initWithModel:(id)arg1 contextMenuViewControlFactory:(id)arg2 productState:(id)arg3 audioTouch:(id)arg4 localSettings:(id)arg5 networkConnectivityController:(id)arg6 collectionLogger:(id)arg7 NUXModifier:(id)arg8 shuffleButtonTestController:(id)arg9 abbaFeatureFlags:(id)arg10 cacheplayTestManager:(id)arg11 shouldShowLocalFilesFilter:(char)arg12 voiceFeatureTask:(id)arg13 ;
-(id<SPTCollectionCacheplayTestManager>)cacheplayTestManager;
-(void)setCacheplayTestManager:(id<SPTCollectionCacheplayTestManager>)arg1 ;
-(void)updateRightBarButtonItem;
-(SPTCollectionFilterBar *)filterBar;
-(void)setFilterBar:(SPTCollectionFilterBar *)arg1 ;
-(void)setupSectionHeader;
-(void)updateInfoView;
-(void)navigateToBrowse;
-(id<SPTCollectionNUXModifying>)NUXModifier;
-(void)modifyInfoViewForNUX;
-(void)modifyInfoViewForEmptyStaticFilterContext;
-(void)modifyInfoViewForEmptyFilterContext;
-(void)filterBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)filterBarContextButtonTapped:(id)arg1 ;
-(void)filterBarTextWillBeginEditing:(id)arg1 ;
-(void)filterBarTextWillEndEditing:(id)arg1 ;
-(void)navigateToMusicHub;
-(int)savedSeparatorStyle;
-(void)setSavedSeparatorStyle:(int)arg1 ;
-(void)setNUXModifier:(id<SPTCollectionNUXModifying>)arg1 ;
-(void)loadLocalSettings;
-(char)showHeaderForSection:(unsigned)arg1 ;
-(unsigned)trackSectionForSection:(unsigned)arg1 ;
-(id)trackIndexForTableIndexPath:(id)arg1 ;
-(id<SPTContextMenuViewControllerFactory>)contextMenuViewControlFactory;
-(void)shufflePlay:(id)arg1 ;
-(void)refreshShuffleMode;
-(char)isOfflineSwitchCellIndexPath:(id)arg1 ;
-(char)isShufflePlayCellIndexPath:(id)arg1 ;
-(SPTCollectionShuffleButtonContainer *)shuffleButtonContainer;
-(char)hideAvailableOffline;
-(id)shufflePlayCell;
-(int)offlineSyncStatusForTrackAtIndexPath:(id)arg1 ;
-(char)isUserDefaultsLoaded;
-(void)setHideAvailableOffline:(char)arg1 ;
-(char)shouldShowLocalFilesFilter;
-(void)setUserDefaultsLoaded:(char)arg1 ;
-(void)setShuffleButtonContainer:(SPTCollectionShuffleButtonContainer *)arg1 ;
-(void)songsModelDidUpdate:(id)arg1 ;
-(void)songsModelDidUpdatePlayingIndexPath:(id)arg1 ;
-(void)setShouldShowLocalFilesFilter:(char)arg1 ;
-(id<SPTCollectionLogger>)logger;
-(void)setLogger:(id<SPTCollectionLogger>)arg1 ;
-(SPTInfoView *)infoView;
-(void)setInfoView:(SPTInfoView *)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(UITableView *)tableView;
-(void)setSectionHeader:(SPTCollectionToolbarHeaderView *)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(SPTCollectionSongsModel *)model;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(id)URL;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setModel:(SPTCollectionSongsModel *)arg1 ;
-(SPTCollectionToolbarHeaderView *)sectionHeader;
-(id)URI;
@end

