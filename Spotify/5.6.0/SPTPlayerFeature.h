/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:41 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SPTGaiaDeviceManager, SPTCastManager, SPTPlayedStateManager;


@protocol SPTPlayerFeature <NSObject>
@property (nonatomic,readonly) SPTGaiaDeviceManager * gaiaDeviceManager; 
@property (nonatomic,readonly) SPTCastManager * castDeviceManager; 
@property (nonatomic,readonly) SPTPlayedStateManager * playedStateManager; 
@required
-(id)providePlayerWithViewURI:(id)arg1 featureIdentifier:(id)arg2 referrerIdentifier:(id)arg3;
-(void)addPlayerObserver:(id)arg1;
-(void)removePlayerObserver:(id)arg1;
-(id)provideAudioSessionController;
-(id)provideTrackContextPlayerWithViewURI:(id)arg1 featureIdentifier:(id)arg2 referrerIdentifier:(id)arg3;
-(id)providePlayerQueue;
-(SPTGaiaDeviceManager *)gaiaDeviceManager;
-(SPTPlayedStateManager *)playedStateManager;
-(SPTCastManager *)castDeviceManager;
-(id)provideTrackContextPlayerWithViewURI:(id)arg1 featureIdentifier:(id)arg2 referrerIdentifier:(id)arg3 decorateTrack:(/*^block*/id)arg4;
-(id)providePlaybackErrorDialogs;
-(id)providePlayerWithViewURI:(id)arg1 featureIdentifier:(id)arg2 referrerIdentifier:(id)arg3 queue:(id)arg4;
-(void)fetchPlayerState:(/*^block*/id)arg1 on:(id)arg2;
-(id)provideResolver;
-(id)providePlaybackRepresentation;

@end

