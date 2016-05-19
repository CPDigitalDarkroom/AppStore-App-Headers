/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:39 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTNowPlayingBaseHeadUnitViewController.h>
#import <Spotify/SPTNowPlayingModelDelegate.h>

@protocol SPTUpsellManager;
@class SPTNowPlayingPlaybackController, SPTNowPlayingModel, SPTNowPlayingBaseHeadUnitController, SPTLogCenter, SPTNowPlayingMusicHeadUnitView, NSString;

@interface SPTNowPlayingMusicHeadUnitViewController : SPTNowPlayingBaseHeadUnitViewController <SPTNowPlayingModelDelegate> {

	SPTNowPlayingPlaybackController* _playbackController;
	SPTNowPlayingModel* _model;
	SPTNowPlayingBaseHeadUnitController* _headUnitController;
	id<SPTUpsellManager> _upsellManager;
	SPTLogCenter* _logCenter;

}

@property (nonatomic,retain) SPTNowPlayingPlaybackController * playbackController;                  //@synthesize playbackController=_playbackController - In the implementation block
@property (nonatomic,retain) SPTNowPlayingModel * model;                                            //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) SPTNowPlayingMusicHeadUnitView * view; 
@property (nonatomic,retain) SPTNowPlayingBaseHeadUnitController * headUnitController;              //@synthesize headUnitController=_headUnitController - In the implementation block
@property (assign,nonatomic,__weak) id<SPTUpsellManager> upsellManager;                             //@synthesize upsellManager=_upsellManager - In the implementation block
@property (assign,nonatomic,__weak) SPTLogCenter * logCenter;                                       //@synthesize logCenter=_logCenter - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SPTLogCenter *)logCenter;
-(void)setLogCenter:(SPTLogCenter *)arg1 ;
-(id<SPTUpsellManager>)upsellManager;
-(void)setPlaybackController:(SPTNowPlayingPlaybackController *)arg1 ;
-(SPTNowPlayingPlaybackController *)playbackController;
-(void)setUpsellManager:(id<SPTUpsellManager>)arg1 ;
-(void)setHeadUnitController:(SPTNowPlayingBaseHeadUnitController *)arg1 ;
-(SPTNowPlayingBaseHeadUnitController *)headUnitController;
-(void)needUpdateUI;
-(void)nowPlayingModelDidUpdateMetadata:(id)arg1 ;
-(void)nowPlayingModel:(id)arg1 didMoveToRelativeTrack:(id)arg2 ;
-(void)shuffleButtonPressed:(id)arg1 ;
-(void)repeatButtonPressed:(id)arg1 ;
-(id)initWithPlaybackController:(id)arg1 model:(id)arg2 theme:(id)arg3 upsellManager:(id)arg4 logCenter:(id)arg5 ;
-(void)dealloc;
-(void)loadView;
-(SPTNowPlayingModel *)model;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)setModel:(SPTNowPlayingModel *)arg1 ;
-(id)initWithTheme:(id)arg1 ;
@end

