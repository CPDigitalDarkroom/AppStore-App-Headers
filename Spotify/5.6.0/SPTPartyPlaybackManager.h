/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:41 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTPlayerObserver.h>

@protocol SPTPlayer, SPTLogCenterProtocol;
@class SPTPlayerContext, SPTPlayerState, NSString;

@interface SPTPartyPlaybackManager : NSObject <SPTPlayerObserver> {

	id<SPTPlayer> _player;
	SPTPlayerContext* _context;
	SPTPlayerState* _playerState;
	id<SPTLogCenterProtocol> _logCenter;
	NSString* _lastLoggedPlaybackId;

}

@property (nonatomic,readonly) id<SPTPlayer> player;                                 //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) SPTPlayerContext * context;                             //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) SPTPlayerState * playerState;                           //@synthesize playerState=_playerState - In the implementation block
@property (assign,nonatomic,__weak) id<SPTLogCenterProtocol> logCenter;              //@synthesize logCenter=_logCenter - In the implementation block
@property (nonatomic,retain) NSString * lastLoggedPlaybackId;                        //@synthesize lastLoggedPlaybackId=_lastLoggedPlaybackId - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SPTLogCenterProtocol>)logCenter;
-(void)setLogCenter:(id<SPTLogCenterProtocol>)arg1 ;
-(void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3 ;
-(id)playContext:(id)arg1 options:(id)arg2 ;
-(id)initWithPlayer:(id)arg1 logCenter:(id)arg2 ;
-(void)updatePlayerContextIfPlayingFromParty:(id)arg1 ;
-(char)isPlayingFromPartyContext;
-(char)isPartyContextPlaying;
-(char)hasLoggedPlaybackOfThisTrack;
-(void)setLastLoggedPlaybackId:(NSString *)arg1 ;
-(NSString *)lastLoggedPlaybackId;
-(void)logTrackPersonalization;
-(id<SPTPlayer>)player;
-(SPTPlayerContext *)context;
-(void)setContext:(SPTPlayerContext *)arg1 ;
-(SPTPlayerState *)playerState;
-(void)setPlayerState:(SPTPlayerState *)arg1 ;
@end

