/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:39 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTNowPlayingBaseUnitProvider.h>

@protocol GaiaFeature, SPTNowPlayingManager, SPTUpsellManager, SPTImageLoaderFactory, SPTTinkerbellManager, SPTTinkerbellStoryRegistry, SPTVideoSurfaceManager, SPTGaiaManager;
@class SPTNowPlayingBarModel, SPTLogCenter, SPTTheme, SPTNowPlayingChromecastBarViewFactory, SPTNowPlayingBarContentProviderRegistryImplementation;

@interface SPTNowPlayingBarContentUnitProvider : SPTNowPlayingBaseUnitProvider {

	id<GaiaFeature> _gaia;
	id<SPTNowPlayingManager> _nowPlayingManager;
	SPTNowPlayingBarModel* _model;
	SPTLogCenter* _logCenter;
	id<SPTUpsellManager> _upsellManager;
	id<SPTImageLoaderFactory> _imageLoaderFactory;
	id<SPTTinkerbellManager> _tinkerbellManager;
	id<SPTTinkerbellStoryRegistry> _tinkerbellStoryRegistry;
	id<SPTVideoSurfaceManager> _videoSurfaceManager;
	id<SPTGaiaManager> _gaiaManager;
	SPTTheme* _theme;
	SPTNowPlayingChromecastBarViewFactory* _chromecastBarViewFactory;
	SPTNowPlayingBarContentProviderRegistryImplementation* _barContentProviderRegistry;

}

@property (nonatomic,__weak,readonly) id<GaiaFeature> gaia;                                                                     //@synthesize gaia=_gaia - In the implementation block
@property (nonatomic,__weak,readonly) id<SPTNowPlayingManager> nowPlayingManager;                                               //@synthesize nowPlayingManager=_nowPlayingManager - In the implementation block
@property (nonatomic,readonly) SPTNowPlayingBarModel * model;                                                                   //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) SPTLogCenter * logCenter;                                                                        //@synthesize logCenter=_logCenter - In the implementation block
@property (nonatomic,readonly) id<SPTUpsellManager> upsellManager;                                                              //@synthesize upsellManager=_upsellManager - In the implementation block
@property (nonatomic,readonly) id<SPTImageLoaderFactory> imageLoaderFactory;                                                    //@synthesize imageLoaderFactory=_imageLoaderFactory - In the implementation block
@property (nonatomic,readonly) id<SPTTinkerbellManager> tinkerbellManager;                                                      //@synthesize tinkerbellManager=_tinkerbellManager - In the implementation block
@property (nonatomic,readonly) id<SPTTinkerbellStoryRegistry> tinkerbellStoryRegistry;                                          //@synthesize tinkerbellStoryRegistry=_tinkerbellStoryRegistry - In the implementation block
@property (nonatomic,readonly) id<SPTVideoSurfaceManager> videoSurfaceManager;                                                  //@synthesize videoSurfaceManager=_videoSurfaceManager - In the implementation block
@property (nonatomic,readonly) id<SPTGaiaManager> gaiaManager;                                                                  //@synthesize gaiaManager=_gaiaManager - In the implementation block
@property (nonatomic,readonly) SPTTheme * theme;                                                                                //@synthesize theme=_theme - In the implementation block
@property (nonatomic,readonly) SPTNowPlayingChromecastBarViewFactory * chromecastBarViewFactory;                                //@synthesize chromecastBarViewFactory=_chromecastBarViewFactory - In the implementation block
@property (nonatomic,readonly) SPTNowPlayingBarContentProviderRegistryImplementation * barContentProviderRegistry;              //@synthesize barContentProviderRegistry=_barContentProviderRegistry - In the implementation block
-(SPTLogCenter *)logCenter;
-(id<SPTNowPlayingManager>)nowPlayingManager;
-(id<SPTImageLoaderFactory>)imageLoaderFactory;
-(id<SPTUpsellManager>)upsellManager;
-(id<GaiaFeature>)gaia;
-(id<SPTTinkerbellManager>)tinkerbellManager;
-(SPTNowPlayingBarContentProviderRegistryImplementation *)barContentProviderRegistry;
-(id<SPTGaiaManager>)gaiaManager;
-(id<SPTVideoSurfaceManager>)videoSurfaceManager;
-(void)processPlayerStateChange:(id)arg1 ;
-(id<SPTTinkerbellStoryRegistry>)tinkerbellStoryRegistry;
-(void)createMusicContentUnit;
-(void)createChromecastContentUnit;
-(SPTNowPlayingChromecastBarViewFactory *)chromecastBarViewFactory;
-(id)initWithPlayer:(id)arg1 gaiaManager:(id)arg2 model:(id)arg3 gaia:(id)arg4 logCenter:(id)arg5 upsellManager:(id)arg6 imageLoaderFactory:(id)arg7 tinkerbellManager:(id)arg8 tinkerbellStoryRegistry:(id)arg9 nowPlayingManager:(id)arg10 videoSurfaceManager:(id)arg11 theme:(id)arg12 chromecastBarViewFactory:(id)arg13 barContentProviderRegistry:(id)arg14 ;
-(SPTNowPlayingBarModel *)model;
-(SPTTheme *)theme;
@end

