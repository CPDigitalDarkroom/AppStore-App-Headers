/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:48 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface SPTVideoLoggerMetrics : NSObject <NSCopying> {

	NSDate* _beganSeekingAt;
	NSDate* _beganStalledAt;
	NSDate* _lastFullscreenStart;
	char _userInitiated;
	char _seeking;
	char _stalled;
	char _fullscreen;
	char _pause;
	unsigned _numberOfSeekbacks;
	unsigned _numberOfSeekFwds;
	NSDate* _startedTrackingAt;
	NSDate* _assetLoadInitiatedAt;
	NSDate* _assetLoadedAt;
	NSDate* _itemReadyAt;
	NSDate* _bufferSufficientAt;
	double _duration;
	double _totalSeekBufferTime;
	double _maxSeekBufferTime;
	double _seekbackDelta;
	double _seekFwdDelta;
	double _totalStallTime;
	double _maxStallTime;
	double _viewedInFullscreenTime;

}

@property (nonatomic,readonly) char userInitiated;                         //@synthesize userInitiated=_userInitiated - In the implementation block
@property (assign,nonatomic) double duration;                              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double totalSeekBufferTime;                 //@synthesize totalSeekBufferTime=_totalSeekBufferTime - In the implementation block
@property (nonatomic,readonly) double maxSeekBufferTime;                   //@synthesize maxSeekBufferTime=_maxSeekBufferTime - In the implementation block
@property (nonatomic,readonly) unsigned numberOfSeekbacks;                 //@synthesize numberOfSeekbacks=_numberOfSeekbacks - In the implementation block
@property (nonatomic,readonly) double seekbackDelta;                       //@synthesize seekbackDelta=_seekbackDelta - In the implementation block
@property (nonatomic,readonly) unsigned numberOfSeekFwds;                  //@synthesize numberOfSeekFwds=_numberOfSeekFwds - In the implementation block
@property (nonatomic,readonly) double seekFwdDelta;                        //@synthesize seekFwdDelta=_seekFwdDelta - In the implementation block
@property (nonatomic,readonly) double totalStallTime;                      //@synthesize totalStallTime=_totalStallTime - In the implementation block
@property (nonatomic,readonly) double maxStallTime;                        //@synthesize maxStallTime=_maxStallTime - In the implementation block
@property (nonatomic,readonly) NSDate * startedTrackingAt;                 //@synthesize startedTrackingAt=_startedTrackingAt - In the implementation block
@property (nonatomic,readonly) NSDate * assetLoadInitiatedAt;              //@synthesize assetLoadInitiatedAt=_assetLoadInitiatedAt - In the implementation block
@property (nonatomic,readonly) NSDate * assetLoadedAt;                     //@synthesize assetLoadedAt=_assetLoadedAt - In the implementation block
@property (nonatomic,readonly) NSDate * itemReadyAt;                       //@synthesize itemReadyAt=_itemReadyAt - In the implementation block
@property (nonatomic,readonly) NSDate * bufferSufficientAt;                //@synthesize bufferSufficientAt=_bufferSufficientAt - In the implementation block
@property (nonatomic,readonly) double viewedInFullscreenTime;              //@synthesize viewedInFullscreenTime=_viewedInFullscreenTime - In the implementation block
@property (assign,nonatomic) char seeking;                                 //@synthesize seeking=_seeking - In the implementation block
@property (assign,nonatomic) char stalled;                                 //@synthesize stalled=_stalled - In the implementation block
@property (assign,nonatomic) char fullscreen;                              //@synthesize fullscreen=_fullscreen - In the implementation block
@property (assign,nonatomic) char pause;                                   //@synthesize pause=_pause - In the implementation block
-(char)fullscreen;
-(id)initWithStartDate:(id)arg1 userInitiated:(char)arg2 ;
-(double)timeToFirstFrame;
-(double)UILatency;
-(double)totalSeekBufferTime;
-(double)maxSeekBufferTime;
-(double)totalStallTime;
-(double)maxStallTime;
-(unsigned)numberOfSeekbacks;
-(double)seekbackDelta;
-(unsigned)numberOfSeekFwds;
-(double)seekFwdDelta;
-(double)viewedInFullscreenTime;
-(void)assetLoadStarted;
-(void)setStalled:(char)arg1 ;
-(void)didSeek:(double)arg1 ;
-(void)assetDidLoad;
-(void)playerItemBecameReady;
-(void)bufferBecameSufficient;
-(char)stalled;
-(void)refreshFullscreenTrackingState;
-(NSDate *)startedTrackingAt;
-(NSDate *)assetLoadInitiatedAt;
-(NSDate *)assetLoadedAt;
-(NSDate *)itemReadyAt;
-(NSDate *)bufferSufficientAt;
-(void)setFullscreen:(char)arg1 ;
-(void)setSeeking:(char)arg1 ;
-(char)seeking;
-(void)finished;
-(id)init;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)pause;
-(char)userInitiated;
-(void)setPause:(char)arg1 ;
@end

