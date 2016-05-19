/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:45 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTPlayerObserver.h>

@protocol SPTSearchPlayerDelegate, SPTPlayer;
@class NSURL, SearchViewModel, NSString;

@interface SPTSearchPlayer : NSObject <SPTPlayerObserver> {

	id<SPTSearchPlayerDelegate> _delegate;
	NSURL* _nowPlayingURL;
	id<SPTPlayer> _player;
	SearchViewModel* _viewModel;

}

@property (assign,nonatomic,__weak) id<SPTSearchPlayerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURL * nowPlayingURL;                                    //@synthesize nowPlayingURL=_nowPlayingURL - In the implementation block
@property (nonatomic,retain) id<SPTPlayer> player;                                     //@synthesize player=_player - In the implementation block
@property (assign,nonatomic,__weak) SearchViewModel * viewModel;                       //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)searchPlayerWithPlayer:(id)arg1 viewModel:(id)arg2 previousNowPlayingURL:(id)arg3 ;
-(void)player:(id)arg1 stateDidChange:(id)arg2 ;
-(id)playOriginSource;
-(NSURL *)nowPlayingURL;
-(void)playSearchEntityAtIndexPath:(id)arg1 pauseIfPlaying:(char)arg2 ;
-(void)setNowPlayingURL:(NSURL *)arg1 ;
-(void)playURLFromCurrentSearchString;
-(SearchViewModel *)viewModel;
-(void)setPlayer:(id<SPTPlayer>)arg1 ;
-(void)setViewModel:(SearchViewModel *)arg1 ;
-(id<SPTPlayer>)player;
-(void)setDelegate:(id<SPTSearchPlayerDelegate>)arg1 ;
-(id<SPTSearchPlayerDelegate>)delegate;
@end

