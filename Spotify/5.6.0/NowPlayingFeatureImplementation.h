/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:38 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <Spotify/SpotifyApplicationRemoteControlDelegate.h>
#import <Spotify/SPTQueueViewControllerDelegate.h>
#import <Spotify/SPTService.h>
#import <Spotify/NowPlayingFeature.h>

@protocol SPTClientSessionService, ContainerFeature, SPTCoreService, SPTNetworkFeature, SPContextMenuFeature, SPTSettingsFeature, GaiaFeature, RadioFeature, UpsellFeature, CollectionFeature, SPTPlayerFeature, SPTQueueFeature, AdsFeature, SPTTinkerbellFeature, SPTVideoFeature, SPTRunningFeature, SPTPodcastFeature, SPTPartyFeature, SPTInstrumentationService, SPTAbbaFeature, SPTNavigationFeature, PlaylistFeature, SPTQueueInteractor, SPTNowPlayingTitleViewPresenterRegistry, SPTNowPlayingInfoCenterManagerProtocol, SPTPlayer, SPTPageInstrumentation, SPTNowPlayingViewModeRegistry;
@class SPTNowPlayingToggleContainerViewController, UIViewController, SPTNowPlayingViewShowFirstTime, SPTNowPlayingDeviceOrientationManager, SPTNowPlayingManagerImplementation, SPTNowPlayingVideoManagerImplementation, SPTNowPlayingRepeatOneDisabler, SPTNowPlayingRemoteControlEventController, SPTNowPlayingModel, SPTNowPlayingChromecastBarViewFactory, SPTNowPlayingNavigationBarModel, SPTNowPlayingContentProviderRegistriesImplementation, NSString, SPTAllocationContext;

@interface NowPlayingFeatureImplementation : NSObject <SpotifyApplicationRemoteControlDelegate, SPTQueueViewControllerDelegate, SPTService, NowPlayingFeature> {

	id<SPTClientSessionService> _clientSessionService;
	id<ContainerFeature> _containerFeature;
	id<SPTCoreService> _coreService;
	id<SPTNetworkFeature> _networkFeature;
	id<SPContextMenuFeature> _contextMenu;
	id<SPTSettingsFeature> _settings;
	id<GaiaFeature> _gaia;
	id<RadioFeature> _radio;
	id<UpsellFeature> _upsell;
	id<CollectionFeature> _collection;
	id<SPTPlayerFeature> _playerFeature;
	id<SPTQueueFeature> _queueFeature;
	id<AdsFeature> _ads;
	id<SPTTinkerbellFeature> _tinkerbellFeature;
	id<SPTVideoFeature> _videoFeature;
	id<SPTRunningFeature> _runningFeature;
	id<SPTPodcastFeature> _podcastFeature;
	id<SPTPartyFeature> _partyFeature;
	id<SPTInstrumentationService> _instrumentationService;
	id<SPTAbbaFeature> _abbaFeature;
	id<SPTNavigationFeature> _navigationFeature;
	id<PlaylistFeature> _playlistFeature;
	SPTNowPlayingToggleContainerViewController* _nowPlayingToggleVC;
	UIViewController* _nowPlayingViewController;
	UIViewController* _nowPlayingBarViewController;
	id<SPTQueueInteractor> _queueInteractor;
	id<SPTNowPlayingTitleViewPresenterRegistry> _titleViewPresenterRegistry;
	id<SPTNowPlayingInfoCenterManagerProtocol> _nowPlayingInfoCenterManager;
	SPTNowPlayingViewShowFirstTime* _nowPlayingViewShowFirstTime;
	id<SPTPlayer> _player;
	SPTNowPlayingDeviceOrientationManager* _deviceOrientationManager;
	SPTNowPlayingManagerImplementation* _nowPlayingManager;
	SPTNowPlayingVideoManagerImplementation* _videoManager;
	SPTNowPlayingRepeatOneDisabler* _repeatOneManager;
	SPTNowPlayingRemoteControlEventController* _remoteControlEventController;
	SPTNowPlayingModel* _nowPlayingModel;
	SPTNowPlayingChromecastBarViewFactory* _chromecastBarViewFactory;
	SPTNowPlayingNavigationBarModel* _navigationBarModel;
	id<SPTPageInstrumentation> _pageInstrumentation;
	id<SPTNowPlayingViewModeRegistry> _viewModeRegistry;
	SPTNowPlayingContentProviderRegistriesImplementation* _contentProviderRegistries;

}

@property (assign,nonatomic,__weak) id<SPTClientSessionService> clientSessionService;                                       //@synthesize clientSessionService=_clientSessionService - In the implementation block
@property (assign,nonatomic,__weak) id<ContainerFeature> containerFeature;                                                  //@synthesize containerFeature=_containerFeature - In the implementation block
@property (assign,nonatomic,__weak) id<SPTCoreService> coreService;                                                         //@synthesize coreService=_coreService - In the implementation block
@property (assign,nonatomic,__weak) id<SPTNetworkFeature> networkFeature;                                                   //@synthesize networkFeature=_networkFeature - In the implementation block
@property (assign,nonatomic,__weak) id<SPContextMenuFeature> contextMenu;                                                   //@synthesize contextMenu=_contextMenu - In the implementation block
@property (assign,nonatomic,__weak) id<SPTSettingsFeature> settings;                                                        //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic,__weak) id<GaiaFeature> gaia;                                                                   //@synthesize gaia=_gaia - In the implementation block
@property (assign,nonatomic,__weak) id<RadioFeature> radio;                                                                 //@synthesize radio=_radio - In the implementation block
@property (assign,nonatomic,__weak) id<UpsellFeature> upsell;                                                               //@synthesize upsell=_upsell - In the implementation block
@property (assign,nonatomic,__weak) id<CollectionFeature> collection;                                                       //@synthesize collection=_collection - In the implementation block
@property (assign,nonatomic,__weak) id<SPTPlayerFeature> playerFeature;                                                     //@synthesize playerFeature=_playerFeature - In the implementation block
@property (assign,nonatomic,__weak) id<SPTQueueFeature> queueFeature;                                                       //@synthesize queueFeature=_queueFeature - In the implementation block
@property (assign,nonatomic,__weak) id<AdsFeature> ads;                                                                     //@synthesize ads=_ads - In the implementation block
@property (assign,nonatomic,__weak) id<SPTTinkerbellFeature> tinkerbellFeature;                                             //@synthesize tinkerbellFeature=_tinkerbellFeature - In the implementation block
@property (assign,nonatomic,__weak) id<SPTVideoFeature> videoFeature;                                                       //@synthesize videoFeature=_videoFeature - In the implementation block
@property (assign,nonatomic,__weak) id<SPTRunningFeature> runningFeature;                                                   //@synthesize runningFeature=_runningFeature - In the implementation block
@property (assign,nonatomic,__weak) id<SPTPodcastFeature> podcastFeature;                                                   //@synthesize podcastFeature=_podcastFeature - In the implementation block
@property (assign,nonatomic,__weak) id<SPTPartyFeature> partyFeature;                                                       //@synthesize partyFeature=_partyFeature - In the implementation block
@property (assign,nonatomic,__weak) id<SPTInstrumentationService> instrumentationService;                                   //@synthesize instrumentationService=_instrumentationService - In the implementation block
@property (assign,nonatomic,__weak) id<SPTAbbaFeature> abbaFeature;                                                         //@synthesize abbaFeature=_abbaFeature - In the implementation block
@property (assign,nonatomic,__weak) id<SPTNavigationFeature> navigationFeature;                                             //@synthesize navigationFeature=_navigationFeature - In the implementation block
@property (assign,nonatomic,__weak) id<PlaylistFeature> playlistFeature;                                                    //@synthesize playlistFeature=_playlistFeature - In the implementation block
@property (nonatomic,retain) SPTNowPlayingToggleContainerViewController * nowPlayingToggleVC;                               //@synthesize nowPlayingToggleVC=_nowPlayingToggleVC - In the implementation block
@property (nonatomic,retain) UIViewController * nowPlayingViewController;                                                   //@synthesize nowPlayingViewController=_nowPlayingViewController - In the implementation block
@property (nonatomic,retain) UIViewController * nowPlayingBarViewController;                                                //@synthesize nowPlayingBarViewController=_nowPlayingBarViewController - In the implementation block
@property (nonatomic,retain) id<SPTQueueInteractor> queueInteractor;                                                        //@synthesize queueInteractor=_queueInteractor - In the implementation block
@property (nonatomic,retain) id<SPTNowPlayingTitleViewPresenterRegistry> titleViewPresenterRegistry;                        //@synthesize titleViewPresenterRegistry=_titleViewPresenterRegistry - In the implementation block
@property (nonatomic,retain) id<SPTNowPlayingInfoCenterManagerProtocol> nowPlayingInfoCenterManager;                        //@synthesize nowPlayingInfoCenterManager=_nowPlayingInfoCenterManager - In the implementation block
@property (nonatomic,retain) SPTNowPlayingViewShowFirstTime * nowPlayingViewShowFirstTime;                                  //@synthesize nowPlayingViewShowFirstTime=_nowPlayingViewShowFirstTime - In the implementation block
@property (nonatomic,retain) id<SPTPlayer> player;                                                                          //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) SPTNowPlayingDeviceOrientationManager * deviceOrientationManager;                              //@synthesize deviceOrientationManager=_deviceOrientationManager - In the implementation block
@property (nonatomic,retain) SPTNowPlayingManagerImplementation * nowPlayingManager;                                        //@synthesize nowPlayingManager=_nowPlayingManager - In the implementation block
@property (nonatomic,retain) SPTNowPlayingVideoManagerImplementation * videoManager;                                        //@synthesize videoManager=_videoManager - In the implementation block
@property (nonatomic,retain) SPTNowPlayingRepeatOneDisabler * repeatOneManager;                                             //@synthesize repeatOneManager=_repeatOneManager - In the implementation block
@property (nonatomic,retain) SPTNowPlayingRemoteControlEventController * remoteControlEventController;                      //@synthesize remoteControlEventController=_remoteControlEventController - In the implementation block
@property (nonatomic,retain) SPTNowPlayingModel * nowPlayingModel;                                                          //@synthesize nowPlayingModel=_nowPlayingModel - In the implementation block
@property (nonatomic,retain) SPTNowPlayingChromecastBarViewFactory * chromecastBarViewFactory;                              //@synthesize chromecastBarViewFactory=_chromecastBarViewFactory - In the implementation block
@property (nonatomic,retain) SPTNowPlayingNavigationBarModel * navigationBarModel;                                          //@synthesize navigationBarModel=_navigationBarModel - In the implementation block
@property (nonatomic,retain) id<SPTPageInstrumentation> pageInstrumentation;                                                //@synthesize pageInstrumentation=_pageInstrumentation - In the implementation block
@property (nonatomic,retain) id<SPTNowPlayingViewModeRegistry> viewModeRegistry;                                            //@synthesize viewModeRegistry=_viewModeRegistry - In the implementation block
@property (nonatomic,retain) SPTNowPlayingContentProviderRegistriesImplementation * contentProviderRegistries;              //@synthesize contentProviderRegistries=_contentProviderRegistries - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SPTAllocationContext * allocationContext; 
@property (getter=isYourLibraryFeatureEnabled,nonatomic,readonly) char yourLibraryFeatureEnabled; 
@property (getter=isNewQueueViewEnabled,nonatomic,readonly) char newQueueViewEnabled; 
+(id)serviceDependencies;
+(id)serviceIdentifier;
-(void)setCoreService:(id<SPTCoreService>)arg1 ;
-(void)setContainerFeature:(id<ContainerFeature>)arg1 ;
-(id<ContainerFeature>)containerFeature;
-(id<SPTCoreService>)coreService;
-(void)configureWithServices:(id)arg1 ;
-(char)spotifyApplication:(id)arg1 handleRemoteControlEventOfSubtype:(int)arg2 ;
-(void)setClientSessionService:(id<SPTClientSessionService>)arg1 ;
-(void)setNetworkFeature:(id<SPTNetworkFeature>)arg1 ;
-(id<SPTNetworkFeature>)networkFeature;
-(id<SPTClientSessionService>)clientSessionService;
-(void)setPlayerFeature:(id<SPTPlayerFeature>)arg1 ;
-(id<SPTPlayerFeature>)playerFeature;
-(void)setAbbaFeature:(id<SPTAbbaFeature>)arg1 ;
-(id<SPTAbbaFeature>)abbaFeature;
-(void)setContextMenu:(id<SPContextMenuFeature>)arg1 ;
-(void)setNavigationFeature:(id<SPTNavigationFeature>)arg1 ;
-(id<SPTNavigationFeature>)navigationFeature;
-(id<SPContextMenuFeature>)contextMenu;
-(SPTNowPlayingManagerImplementation *)nowPlayingManager;
-(void)setNowPlayingManager:(SPTNowPlayingManagerImplementation *)arg1 ;
-(void)setVideoFeature:(id<SPTVideoFeature>)arg1 ;
-(id<SPTVideoFeature>)videoFeature;
-(void)setInstrumentationService:(id<SPTInstrumentationService>)arg1 ;
-(id<SPTInstrumentationService>)instrumentationService;
-(void)setPageInstrumentation:(id<SPTPageInstrumentation>)arg1 ;
-(id<SPTPageInstrumentation>)pageInstrumentation;
-(id<RadioFeature>)radio;
-(void)setGaia:(id<GaiaFeature>)arg1 ;
-(void)setUpsell:(id<UpsellFeature>)arg1 ;
-(id<GaiaFeature>)gaia;
-(id<UpsellFeature>)upsell;
-(void)setPlaylistFeature:(id<PlaylistFeature>)arg1 ;
-(char)isYourLibraryFeatureEnabled;
-(id<PlaylistFeature>)playlistFeature;
-(id)provideContentProviderRegistries;
-(id<SPTPodcastFeature>)podcastFeature;
-(void)setPodcastFeature:(id<SPTPodcastFeature>)arg1 ;
-(void)setTinkerbellFeature:(id<SPTTinkerbellFeature>)arg1 ;
-(id<SPTTinkerbellFeature>)tinkerbellFeature;
-(id)provideNowPlayingManager;
-(void)setAds:(id<AdsFeature>)arg1 ;
-(void)setRunningFeature:(id<SPTRunningFeature>)arg1 ;
-(id)provideNowPlayingViewController:(id)arg1 ;
-(id)provideNowPlayingBarViewController:(id)arg1 ;
-(id)provideRemoteControlEventController;
-(void)setNowPlayingInfoCenterManager:(id<SPTNowPlayingInfoCenterManagerProtocol>)arg1 ;
-(id<SPTNowPlayingInfoCenterManagerProtocol>)nowPlayingInfoCenterManager;
-(id)provideFeedbackSoundsSettingsSection:(id)arg1 ;
-(void)setRepeatOneManager:(SPTNowPlayingRepeatOneDisabler *)arg1 ;
-(id)provideVideoManager;
-(void)setNowPlayingViewShowFirstTime:(SPTNowPlayingViewShowFirstTime *)arg1 ;
-(void)setNowPlayingViewController:(UIViewController *)arg1 ;
-(void)setNowPlayingBarViewController:(UIViewController *)arg1 ;
-(void)setDeviceOrientationManager:(SPTNowPlayingDeviceOrientationManager *)arg1 ;
-(void)setVideoManager:(SPTNowPlayingVideoManagerImplementation *)arg1 ;
-(void)setChromecastBarViewFactory:(SPTNowPlayingChromecastBarViewFactory *)arg1 ;
-(void)loadNowPlayingViewShowFirstTime;
-(id)createCatNowPlayingViewController:(id)arg1 ;
-(void)setNowPlayingToggleVC:(SPTNowPlayingToggleContainerViewController *)arg1 ;
-(id)provideChromecastBarViewFactory;
-(id<SPTRunningFeature>)runningFeature;
-(id)provideNavigationBarModel;
-(id)provideTitleViewPresenterRegistry;
-(id)makeHeadUnitViewProvider;
-(id)makeNavigationButtonsViewController;
-(id)makeNavigationBarViewController;
-(id)provideDeviceOrientationManager;
-(id)provideQueueInteractor;
-(void)setQueueInteractor:(id<SPTQueueInteractor>)arg1 ;
-(id<SPTQueueInteractor>)queueInteractor;
-(id)provideViewModeRegistry;
-(UIViewController *)nowPlayingBarViewController;
-(id)createNowPlayingBarModel;
-(SPTNowPlayingViewShowFirstTime *)nowPlayingViewShowFirstTime;
-(id)createNowPlayingModel;
-(SPTNowPlayingVideoManagerImplementation *)videoManager;
-(SPTNowPlayingContentProviderRegistriesImplementation *)contentProviderRegistries;
-(void)setContentProviderRegistries:(SPTNowPlayingContentProviderRegistriesImplementation *)arg1 ;
-(SPTNowPlayingToggleContainerViewController *)nowPlayingToggleVC;
-(void)spotifyApplication:(id)arg1 setRemoteControlEnabled:(char)arg2 ;
-(void)queue:(UIViewController*)arg1 didTapNowPlayingTrack:(id)arg2 ;
-(id)provideHideAlbumArtworkSettingsSection:(id)arg1 ;
-(id)makeConnectBarViewController;
-(SPTNowPlayingRepeatOneDisabler *)repeatOneManager;
-(id<SPTNowPlayingViewModeRegistry>)viewModeRegistry;
-(void)setViewModeRegistry:(id<SPTNowPlayingViewModeRegistry>)arg1 ;
-(SPTNowPlayingRemoteControlEventController *)remoteControlEventController;
-(void)setRemoteControlEventController:(SPTNowPlayingRemoteControlEventController *)arg1 ;
-(id<SPTPartyFeature>)partyFeature;
-(void)setPartyFeature:(id<SPTPartyFeature>)arg1 ;
-(SPTNowPlayingDeviceOrientationManager *)deviceOrientationManager;
-(id<SPTNowPlayingTitleViewPresenterRegistry>)titleViewPresenterRegistry;
-(SPTNowPlayingNavigationBarModel *)navigationBarModel;
-(void)setNavigationBarModel:(SPTNowPlayingNavigationBarModel *)arg1 ;
-(void)setTitleViewPresenterRegistry:(id<SPTNowPlayingTitleViewPresenterRegistry>)arg1 ;
-(SPTNowPlayingModel *)nowPlayingModel;
-(void)setNowPlayingModel:(SPTNowPlayingModel *)arg1 ;
-(id<SPTQueueFeature>)queueFeature;
-(void)setQueueFeature:(id<SPTQueueFeature>)arg1 ;
-(SPTNowPlayingChromecastBarViewFactory *)chromecastBarViewFactory;
-(char)isNewQueueViewEnabled;
-(id<CollectionFeature>)collection;
-(void)setCollection:(id<CollectionFeature>)arg1 ;
-(void)setPlayer:(id<SPTPlayer>)arg1 ;
-(id<SPTPlayer>)player;
-(id<SPTSettingsFeature>)settings;
-(void)load;
-(void)setSettings:(id<SPTSettingsFeature>)arg1 ;
-(id<AdsFeature>)ads;
-(UIViewController *)nowPlayingViewController;
-(void)unload;
-(void)setRadio:(id<RadioFeature>)arg1 ;
@end

