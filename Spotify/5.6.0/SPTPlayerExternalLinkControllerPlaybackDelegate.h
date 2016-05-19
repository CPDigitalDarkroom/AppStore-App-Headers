/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:41 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/ExternalLinkControllerPlaybackDelegate.h>

@protocol SPTOfflineModeState;
@class PlayWhenOnlineAction, NSString;

@interface SPTPlayerExternalLinkControllerPlaybackDelegate : NSObject <ExternalLinkControllerPlaybackDelegate> {

	PlayWhenOnlineAction* _playWhenOnlineAction;
	/*^block*/id _playerFactory;
	id<SPTOfflineModeState> _offlineModeState;

}

@property (nonatomic,retain) PlayWhenOnlineAction * playWhenOnlineAction;              //@synthesize playWhenOnlineAction=_playWhenOnlineAction - In the implementation block
@property (nonatomic,copy) id playerFactory;                                           //@synthesize playerFactory=_playerFactory - In the implementation block
@property (nonatomic,retain) id<SPTOfflineModeState> offlineModeState;                 //@synthesize offlineModeState=_offlineModeState - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)externalLinkController:(id)arg1 playRow:(unsigned)arg2 fromContext:(id)arg3 ;
-(id<SPTOfflineModeState>)offlineModeState;
-(void)setOfflineModeState:(id<SPTOfflineModeState>)arg1 ;
-(id)initWithPlayerFactory:(/*^block*/id)arg1 offlineModeState:(id)arg2 ;
-(PlayWhenOnlineAction *)playWhenOnlineAction;
-(void)setPlayWhenOnlineAction:(PlayWhenOnlineAction *)arg1 ;
-(id)playerFactory;
-(void)setPlayerFactory:(id)arg1 ;
@end

