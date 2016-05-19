/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:47 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SPTVideoPlaybackSessionDelegate, SPTVideoResourceLoaderInternal, OS_dispatch_queue, SPTCENCKeyFetchOperation;
@class SPTVideoTrack, SPTVideoLogger, NSObject, SPTCENCManager, FBKVOController, SPTVideoPlayerSource, SPTNetworkConnectivityController, SPTVideoPlaybackState, SPTVideoAVFactory, SPTVideoCDNSelector, SPTask, AVURLAsset, AVPlayer, AVPlayerItem, NSError, NSDate, NSTimer;

@interface SPTVideoPlaybackSession : NSObject {

	char _deferred;
	char _paused;
	char _seeking;
	char _stalled;
	char _catchingUp;
	char _offline;
	char _restartStreamOnceOnline;
	SPTVideoTrack* _videoTrack;
	SPTVideoLogger* _logger;
	id<SPTVideoPlaybackSessionDelegate> _delegate;
	id<SPTVideoResourceLoaderInternal> _resourceLoader;
	NSObject*<OS_dispatch_queue> _resourceLoaderQueue;
	SPTCENCManager* _cencManager;
	FBKVOController* _kvoController;
	SPTVideoPlayerSource* _playerSource;
	SPTNetworkConnectivityController* _connController;
	SPTVideoPlaybackState* _lastState;
	SPTVideoAVFactory* _playerItemFactory;
	SPTVideoCDNSelector* _cdnSelector;
	SPTask* _manifestTask;
	id<SPTCENCKeyFetchOperation> _keyTask;
	AVURLAsset* _asset;
	AVPlayer* _player;
	AVPlayerItem* _playerItem;
	NSError* _error;
	NSDate* _lastSeekEventDate;
	int _playerResetCount;
	NSTimer* _syncTimer;
	int _volumeStep;
	unsigned _quartilesPlayed;
	NSObject* _periodicTimeObserver;
	NSObject*<OS_dispatch_queue> _periodicTimeObserverQueue;
	double _initialOffset;
	double _lastSeekTime;

}

@property (nonatomic,retain) SPTVideoTrack * videoTrack;                                          //@synthesize videoTrack=_videoTrack - In the implementation block
@property (nonatomic,readonly) SPTVideoLogger * logger;                                           //@synthesize logger=_logger - In the implementation block
@property (getter=isDeferred,nonatomic,readonly) char deferred;                                   //@synthesize deferred=_deferred - In the implementation block
@property (assign,nonatomic,__weak) id<SPTVideoPlaybackSessionDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isPaused,nonatomic) char paused;                                         //@synthesize paused=_paused - In the implementation block
@property (assign,getter=isFullscreen,nonatomic) char fullscreen; 
@property (nonatomic,retain) id<SPTVideoResourceLoaderInternal> resourceLoader;                   //@synthesize resourceLoader=_resourceLoader - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> resourceLoaderQueue;                    //@synthesize resourceLoaderQueue=_resourceLoaderQueue - In the implementation block
@property (nonatomic,retain) SPTCENCManager * cencManager;                                        //@synthesize cencManager=_cencManager - In the implementation block
@property (nonatomic,retain) FBKVOController * kvoController;                                     //@synthesize kvoController=_kvoController - In the implementation block
@property (nonatomic,retain) SPTVideoPlayerSource * playerSource;                                 //@synthesize playerSource=_playerSource - In the implementation block
@property (nonatomic,retain) SPTNetworkConnectivityController * connController;                   //@synthesize connController=_connController - In the implementation block
@property (nonatomic,retain) SPTVideoPlaybackState * lastState;                                   //@synthesize lastState=_lastState - In the implementation block
@property (nonatomic,retain) SPTVideoAVFactory * playerItemFactory;                               //@synthesize playerItemFactory=_playerItemFactory - In the implementation block
@property (nonatomic,retain) SPTVideoCDNSelector * cdnSelector;                                   //@synthesize cdnSelector=_cdnSelector - In the implementation block
@property (nonatomic,retain) SPTask * manifestTask;                                               //@synthesize manifestTask=_manifestTask - In the implementation block
@property (nonatomic,retain) id<SPTCENCKeyFetchOperation> keyTask;                                //@synthesize keyTask=_keyTask - In the implementation block
@property (nonatomic,retain) AVURLAsset * asset;                                                  //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) AVPlayer * player;                                                   //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) AVPlayerItem * playerItem;                                           //@synthesize playerItem=_playerItem - In the implementation block
@property (assign,nonatomic) double initialOffset;                                                //@synthesize initialOffset=_initialOffset - In the implementation block
@property (nonatomic,retain) NSError * error;                                                     //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) char seeking;                                                        //@synthesize seeking=_seeking - In the implementation block
@property (assign,nonatomic) char stalled;                                                        //@synthesize stalled=_stalled - In the implementation block
@property (assign,nonatomic) char catchingUp;                                                     //@synthesize catchingUp=_catchingUp - In the implementation block
@property (assign,nonatomic) double lastSeekTime;                                                 //@synthesize lastSeekTime=_lastSeekTime - In the implementation block
@property (nonatomic,retain) NSDate * lastSeekEventDate;                                          //@synthesize lastSeekEventDate=_lastSeekEventDate - In the implementation block
@property (assign,nonatomic) char offline;                                                        //@synthesize offline=_offline - In the implementation block
@property (assign,nonatomic) char restartStreamOnceOnline;                                        //@synthesize restartStreamOnceOnline=_restartStreamOnceOnline - In the implementation block
@property (assign,nonatomic) int playerResetCount;                                                //@synthesize playerResetCount=_playerResetCount - In the implementation block
@property (nonatomic,retain) NSTimer * syncTimer;                                                 //@synthesize syncTimer=_syncTimer - In the implementation block
@property (assign,nonatomic) int volumeStep;                                                      //@synthesize volumeStep=_volumeStep - In the implementation block
@property (assign,nonatomic) unsigned quartilesPlayed;                                            //@synthesize quartilesPlayed=_quartilesPlayed - In the implementation block
@property (nonatomic,retain) NSObject * periodicTimeObserver;                                     //@synthesize periodicTimeObserver=_periodicTimeObserver - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> periodicTimeObserverQueue;              //@synthesize periodicTimeObserverQueue=_periodicTimeObserverQueue - In the implementation block
-(FBKVOController *)kvoController;
-(void)setKvoController:(FBKVOController *)arg1 ;
-(void)setLastState:(SPTVideoPlaybackState *)arg1 ;
-(SPTVideoPlaybackState *)lastState;
-(char)isBuffering;
-(void)refreshPlayer;
-(id)initWithVideoTrack:(id)arg1 initialOffset:(double)arg2 startPaused:(char)arg3 deferLoad:(char)arg4 resourceLoader:(id)arg5 cencManager:(id)arg6 logger:(id)arg7 playerSource:(id)arg8 networkConnectivityController:(id)arg9 playerItemFactory:(id)arg10 cndSelector:(id)arg11 ;
-(void)unloadSession:(id)arg1 ;
-(void)refreshAVStack:(id)arg1 ;
-(void)loadSessionInternal;
-(SPTask *)manifestTask;
-(id)manifestID;
-(id)mediaManifest;
-(void)assetFailedToPrepareForPlayback:(id)arg1 ;
-(void)setCatchingUp:(char)arg1 ;
-(void)prepareDRM:(id)arg1 ;
-(void)prepareAsset;
-(void)setManifestTask:(SPTask *)arg1 ;
-(void)unloadPlayerItem;
-(void)unloadPlayerAndResetState;
-(NSTimer *)syncTimer;
-(void)setSyncTimer:(NSTimer *)arg1 ;
-(id<SPTCENCKeyFetchOperation>)keyTask;
-(void)setKeyTask:(id<SPTCENCKeyFetchOperation>)arg1 ;
-(void)setStalled:(char)arg1 ;
-(void)setLastSeekTime:(double)arg1 ;
-(void)setLastSeekEventDate:(NSDate *)arg1 ;
-(void)setRestartStreamOnceOnline:(char)arg1 ;
-(void)setInitialOffset:(double)arg1 ;
-(NSDate *)lastSeekEventDate;
-(void)sendStateUpdate:(id)arg1 forced:(char)arg2 ;
-(double)lastSeekTime;
-(int)playerResetCount;
-(void)setPlayerResetCount:(int)arg1 ;
-(void)restartSession:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)resourceLoaderQueue;
-(void)prepareAssetWithKeys:(id)arg1 ;
-(SPTVideoPlayerSource *)playerSource;
-(SPTVideoAVFactory *)playerItemFactory;
-(id)addQuartilePeriodicTimeObserver;
-(void)setQuartilesPlayed:(unsigned)arg1 ;
-(double)initialOffset;
-(void)playerItemDidStall:(id)arg1 ;
-(void)kvo_itemStatusChanged:(id)arg1 object:(id)arg2 ;
-(void)kvo_itemLikelyToKeepUpChanged:(id)arg1 object:(id)arg2 ;
-(int)volumeStep;
-(void)setVolumeStep:(int)arg1 ;
-(void)refreshMetrics:(char)arg1 ;
-(void)sendStateUpdate:(id)arg1 ;
-(void)refreshPlayerSynchronizationTimer;
-(void)sendPlaybackError:(id)arg1 ;
-(char)restartStreamOnceOnline;
-(SPTVideoCDNSelector *)cdnSelector;
-(void)synchronizePlayer;
-(double)positionForPlayer;
-(double)durationForPlayer;
-(NSObject*<OS_dispatch_queue>)periodicTimeObserverQueue;
-(unsigned)quartilesPlayed;
-(void)loadSession;
-(void)seekTo:(double)arg1 completion:(/*^block*/id)arg2 ;
-(char)isDeferred;
-(void)setResourceLoaderQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(SPTCENCManager *)cencManager;
-(void)setCencManager:(SPTCENCManager *)arg1 ;
-(void)setPlayerSource:(SPTVideoPlayerSource *)arg1 ;
-(SPTNetworkConnectivityController *)connController;
-(void)setConnController:(SPTNetworkConnectivityController *)arg1 ;
-(void)setPlayerItemFactory:(SPTVideoAVFactory *)arg1 ;
-(void)setCdnSelector:(SPTVideoCDNSelector *)arg1 ;
-(char)stalled;
-(char)catchingUp;
-(void)setPeriodicTimeObserverQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(SPTVideoLogger *)logger;
-(void)setFullscreen:(char)arg1 ;
-(void)setSeeking:(char)arg1 ;
-(char)seeking;
-(double)currentTime;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(AVPlayerItem *)playerItem;
-(NSError *)error;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(char)isPaused;
-(AVPlayer *)player;
-(void)setDelegate:(id<SPTVideoPlaybackSessionDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<SPTVideoPlaybackSessionDelegate>)delegate;
-(double)duration;
-(void)setPaused:(char)arg1 ;
-(void)fadeIn;
-(AVURLAsset *)asset;
-(void)willEnterForeground;
-(void)setAsset:(AVURLAsset *)arg1 ;
-(void)setVideoTrack:(SPTVideoTrack *)arg1 ;
-(SPTVideoTrack *)videoTrack;
-(void)setError:(NSError *)arg1 ;
-(void)playerItemDidReachEnd:(id)arg1 ;
-(id<SPTVideoResourceLoaderInternal>)resourceLoader;
-(void)setResourceLoader:(id<SPTVideoResourceLoaderInternal>)arg1 ;
-(NSObject *)periodicTimeObserver;
-(void)setPeriodicTimeObserver:(NSObject *)arg1 ;
-(char)isFullscreen;
-(char)offline;
-(void)setOffline:(char)arg1 ;
@end

