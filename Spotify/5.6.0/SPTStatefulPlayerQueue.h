/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:39 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SPTPlayer;
@class SPTPlayerState, NSHashTable, SPTPlayerTrack;

@interface SPTStatefulPlayerQueue : NSObject {

	SPTPlayerState* _playerState;
	NSHashTable* _observers;
	id<SPTPlayer> _player;
	int _playerQueueOffset;

}

@property (nonatomic,retain) SPTPlayerState * playerState;                         //@synthesize playerState=_playerState - In the implementation block
@property (nonatomic,readonly) SPTPlayerTrack * currentTrack; 
@property (nonatomic,readonly) SPTPlayerTrack * playingTrack; 
@property (getter=isQueueInSync,nonatomic,readonly) char queueInSync; 
@property (nonatomic,retain) NSHashTable * observers;                              //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) id<SPTPlayer> player;                                 //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) int playerQueueOffset;                                //@synthesize playerQueueOffset=_playerQueueOffset - In the implementation block
-(SPTPlayerTrack *)currentTrack;
-(void)skipToNextTrack;
-(void)skipToPreviousTrack;
-(id)queuedTrackAtRelativeIndex:(int)arg1 ;
-(char)disallowSkippingToRelativeIndex:(int)arg1 ;
-(char)disallowPeekingAtRelativeIndex:(int)arg1 ;
-(SPTPlayerTrack *)playingTrack;
-(char)isQueueInSync;
-(void)updateQueueWithPlayerState:(id)arg1 fromOldPlayerState:(id)arg2 ;
-(int)playerQueueOffset;
-(char)isExpectingPlayerSkips;
-(void)offsetQueueBy:(id)arg1 fromLocalChange:(char)arg2 ;
-(id)trackAtRelativePosition:(int)arg1 forState:(id)arg2 ;
-(char)predictQueueRestrictionForRelativeIndex:(int)arg1 disallowPrevious:(char)arg2 disallowNext:(char)arg3 ;
-(id)relativeTrackIndexForPlayerState:(id)arg1 givenPlayerState:(id)arg2 ;
-(id)keyForTrackInContext:(id)arg1 ;
-(char)isTrack:(id)arg1 equalToTrack:(id)arg2 ;
-(id)performQueueOffsettingBy:(id)arg1 fromLocalChange:(char)arg2 ;
-(char)verifyAndHandleSkipToRelativeIndex:(id)arg1 ;
-(void)predictSkipToRelativeIndex:(id)arg1 ;
-(void)resynchronizeQueue;
-(void)setPlayerQueueOffset:(int)arg1 ;
-(id)initWithPlayer:(id)arg1 ;
-(void)setPlayer:(id<SPTPlayer>)arg1 ;
-(id<SPTPlayer>)player;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(SPTPlayerState *)playerState;
-(void)setPlayerState:(SPTPlayerState *)arg1 ;
@end

