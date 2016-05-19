/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:41 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTPlayerObserver.h>

@protocol SPTPlayer, SPTLogCenterProtocol;
@class SPTPlayerState, NSString;

@interface SPTApplicationStatePlaybackLogger : NSObject <SPTPlayerObserver> {

	id<SPTPlayer> _player;
	SPTPlayerState* _playerState;
	id<SPTLogCenterProtocol> _logCenter;

}

@property (nonatomic,retain) id<SPTPlayer> player;                            //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) SPTPlayerState * playerState;                    //@synthesize playerState=_playerState - In the implementation block
@property (nonatomic,retain) id<SPTLogCenterProtocol> logCenter;              //@synthesize logCenter=_logCenter - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SPTLogCenterProtocol>)logCenter;
-(void)applicationStateChanged:(char)arg1 ;
-(void)setLogCenter:(id<SPTLogCenterProtocol>)arg1 ;
-(void)player:(id)arg1 stateDidChange:(id)arg2 ;
-(id)initWithPlayer:(id)arg1 logCenter:(id)arg2 ;
-(void)observeApplicationState;
-(void)setPlayer:(id<SPTPlayer>)arg1 ;
-(id<SPTPlayer>)player;
-(SPTPlayerState *)playerState;
-(void)setPlayerState:(SPTPlayerState *)arg1 ;
@end

