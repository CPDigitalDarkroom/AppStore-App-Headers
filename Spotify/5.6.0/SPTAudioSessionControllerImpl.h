/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:41 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTPlayerObserver.h>
#import <Spotify/SPTAudioDriverControllerObserver.h>
#import <Spotify/SPTAudioDriverObserver.h>
#import <Spotify/SPTAudioSessionController.h>

@protocol SPTAudioSessionControllerDelegate, SPTPlayer, SPTAudioDriverController;
@class AVAudioSession, SPTPlayerState, NSString;

@interface SPTAudioSessionControllerImpl : NSObject <SPTPlayerObserver, SPTAudioDriverControllerObserver, SPTAudioDriverObserver, SPTAudioSessionController> {

	char _active;
	char _interrupted;
	char _playingToBuiltInSpeakers;
	id<SPTAudioSessionControllerDelegate> _delegate;
	id<SPTPlayer> _player;
	id<SPTAudioDriverController> _audioDriverController;
	/*^block*/id _isLocalPlaybackEnabled;
	AVAudioSession* _audioSession;
	int _lockActiveCount;
	SPTPlayerState* _lastPlayerState;
	unsigned _backgroundTaskIdentifier;

}

@property (nonatomic,retain) id<SPTPlayer> player;                                               //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) id<SPTAudioDriverController> audioDriverController;                 //@synthesize audioDriverController=_audioDriverController - In the implementation block
@property (copy) id isLocalPlaybackEnabled;                                                      //@synthesize isLocalPlaybackEnabled=_isLocalPlaybackEnabled - In the implementation block
@property (nonatomic,retain) AVAudioSession * audioSession;                                      //@synthesize audioSession=_audioSession - In the implementation block
@property (assign) int lockActiveCount;                                                          //@synthesize lockActiveCount=_lockActiveCount - In the implementation block
@property (retain) SPTPlayerState * lastPlayerState;                                             //@synthesize lastPlayerState=_lastPlayerState - In the implementation block
@property (getter=isActive) char active;                                                         //@synthesize active=_active - In the implementation block
@property (assign) unsigned backgroundTaskIdentifier;                                            //@synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier - In the implementation block
@property (assign) char interrupted;                                                             //@synthesize interrupted=_interrupted - In the implementation block
@property (assign) char playingToBuiltInSpeakers;                                                //@synthesize playingToBuiltInSpeakers=_playingToBuiltInSpeakers - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SPTAudioSessionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setAudioDriverController:(id<SPTAudioDriverController>)arg1 ;
-(id<SPTAudioDriverController>)audioDriverController;
-(void)audioDriverController:(id)arg1 didAddAudioDriver:(id)arg2 ;
-(void)audioDriverController:(id)arg1 didRemoveAudioDriver:(id)arg2 ;
-(void)audioDriverDidStartRunning:(id)arg1 ;
-(void)audioDriverDidStopRunning:(id)arg1 ;
-(void)audioDriverWillStartRunning:(id)arg1 ;
-(void)player:(id)arg1 stateDidChange:(id)arg2 ;
-(void)setAudioDriversSuspended:(char)arg1 ;
-(id)activateAudioSession;
-(AVAudioSession *)audioSession;
-(void)setAudioSession:(AVAudioSession *)arg1 ;
-(SPTPlayerState *)lastPlayerState;
-(void)setLastPlayerState:(SPTPlayerState *)arg1 ;
-(int)lockActiveCount;
-(void)setLockActiveCount:(int)arg1 ;
-(char)routeDescription:(id)arg1 matchesPortType:(id)arg2 ;
-(char)audioSessionDelegateAllowsModifyingAudioSession;
-(char)hasActiveAudioDriver;
-(char)isCurrentOutputBuiltInSpeakers;
-(void)setPlayingToBuiltInSpeakers:(char)arg1 ;
-(char)internalActivateAudioSession;
-(id)isLocalPlaybackEnabled;
-(char)playingToBuiltInSpeakers;
-(id)initWithPlayer:(id)arg1 audioDriverController:(id)arg2 isLocalPlaybackEnabled:(/*^block*/id)arg3 audioSession:(id)arg4 ;
-(void)lockActiveAudioSession;
-(void)unlockActiveAudioSession;
-(void)setIsLocalPlaybackEnabled:(id)arg1 ;
-(void)setPlayer:(id<SPTPlayer>)arg1 ;
-(id<SPTPlayer>)player;
-(void)setDelegate:(id<SPTAudioSessionControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SPTAudioSessionControllerDelegate>)delegate;
-(char)isActive;
-(void)invalidate;
-(void)deactivate;
-(void)setActive:(char)arg1 ;
-(void)activate;
-(void)setBackgroundTaskIdentifier:(unsigned)arg1 ;
-(unsigned)backgroundTaskIdentifier;
-(char)interrupted;
-(void)setInterrupted:(char)arg1 ;
-(void)updateState;
-(void)audioSessionInterruptionNotification:(id)arg1 ;
-(void)audioSessionRouteChangeNotification:(id)arg1 ;
@end

