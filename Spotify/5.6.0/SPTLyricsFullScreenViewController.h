/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:37 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <UIKit/UIViewController.h>
#import <Spotify/SPTPlayerObserver.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Spotify/SPTLyricsFullScreenHeaderViewDelegate.h>
#import <Spotify/SPTLyricsTableFooterViewDelegate.h>
#import <Spotify/SPTImageLoaderDelegate.h>

@protocol SPTPlayer, SPTImageLoader;
@class SPTLyricsService, SPTLyricsLoggingService, SPTImageBlurView, GLUEGradientView, UITableView, SPTLyricsFullScreenHeaderView, MetaViewController, UIView, CAGradientLayer, NSURL, SPTLyricsLineSet, NSTimer, SPTPlayerTrack, SPTLyricsTableFooterView, NSMutableSet, NSString;

@interface SPTLyricsFullScreenViewController : UIViewController <SPTPlayerObserver, UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate, SPTLyricsFullScreenHeaderViewDelegate, SPTLyricsTableFooterViewDelegate, SPTImageLoaderDelegate> {

	char _userInteracted;
	int _selectedLineIndex;
	SPTLyricsService* _lyricsService;
	SPTLyricsLoggingService* _loggingService;
	id<SPTPlayer> _player;
	id<SPTImageLoader> _imageLoader;
	SPTImageBlurView* _backgroundView;
	GLUEGradientView* _backgroundGradientView;
	UITableView* _tableView;
	SPTLyricsFullScreenHeaderView* _headerView;
	MetaViewController* _metaViewController;
	UIView* _fadeView;
	CAGradientLayer* _fadeMaskLayer;
	NSURL* _trackURL;
	NSURL* _imageURL;
	SPTLyricsLineSet* _lyricsLineSet;
	NSTimer* _timer;
	SPTPlayerTrack* _currentTrack;
	SPTLyricsTableFooterView* _footerView;
	NSMutableSet* _lineIndexesLogged;
	float _startingScrollContentYOffset;
	float _lastDeltaContentYOffset;

}

@property (assign,nonatomic) int selectedLineIndex;                                   //@synthesize selectedLineIndex=_selectedLineIndex - In the implementation block
@property (nonatomic,retain) SPTLyricsService * lyricsService;                        //@synthesize lyricsService=_lyricsService - In the implementation block
@property (nonatomic,retain) SPTLyricsLoggingService * loggingService;                //@synthesize loggingService=_loggingService - In the implementation block
@property (nonatomic,retain) id<SPTPlayer> player;                                    //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) id<SPTImageLoader> imageLoader;                          //@synthesize imageLoader=_imageLoader - In the implementation block
@property (nonatomic,retain) SPTImageBlurView * backgroundView;                       //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) GLUEGradientView * backgroundGradientView;               //@synthesize backgroundGradientView=_backgroundGradientView - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                 //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) SPTLyricsFullScreenHeaderView * headerView;              //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) MetaViewController * metaViewController;                 //@synthesize metaViewController=_metaViewController - In the implementation block
@property (nonatomic,retain) UIView * fadeView;                                       //@synthesize fadeView=_fadeView - In the implementation block
@property (nonatomic,retain) CAGradientLayer * fadeMaskLayer;                         //@synthesize fadeMaskLayer=_fadeMaskLayer - In the implementation block
@property (nonatomic,retain) NSURL * trackURL;                                        //@synthesize trackURL=_trackURL - In the implementation block
@property (nonatomic,retain) NSURL * imageURL;                                        //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain) SPTLyricsLineSet * lyricsLineSet;                        //@synthesize lyricsLineSet=_lyricsLineSet - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                         //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) SPTPlayerTrack * currentTrack;                           //@synthesize currentTrack=_currentTrack - In the implementation block
@property (nonatomic,retain) SPTLyricsTableFooterView * footerView;                   //@synthesize footerView=_footerView - In the implementation block
@property (assign,nonatomic) char userInteracted;                                     //@synthesize userInteracted=_userInteracted - In the implementation block
@property (nonatomic,retain) NSMutableSet * lineIndexesLogged;                        //@synthesize lineIndexesLogged=_lineIndexesLogged - In the implementation block
@property (assign,nonatomic) float startingScrollContentYOffset;                      //@synthesize startingScrollContentYOffset=_startingScrollContentYOffset - In the implementation block
@property (assign,nonatomic) float lastDeltaContentYOffset;                           //@synthesize lastDeltaContentYOffset=_lastDeltaContentYOffset - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SPTImageLoader>)imageLoader;
-(void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5 ;
-(void)setImageLoader:(id<SPTImageLoader>)arg1 ;
-(MetaViewController *)metaViewController;
-(void)setMetaViewController:(MetaViewController *)arg1 ;
-(void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3 ;
-(NSURL *)trackURL;
-(GLUEGradientView *)backgroundGradientView;
-(void)setBackgroundGradientView:(GLUEGradientView *)arg1 ;
-(void)setTrackURL:(NSURL *)arg1 ;
-(void)showNextCardWithDelay:(double)arg1 ;
-(SPTLyricsLoggingService *)loggingService;
-(void)setLoggingService:(SPTLyricsLoggingService *)arg1 ;
-(SPTLyricsService *)lyricsService;
-(void)setLyricsService:(SPTLyricsService *)arg1 ;
-(void)updateBackgroundViewForImageURL:(id)arg1 ;
-(CGRect)headerViewFrame;
-(CGRect)fadeViewFrame;
-(void)setFadeView:(UIView *)arg1 ;
-(UIView *)fadeView;
-(void)setFadeMaskLayer:(CAGradientLayer *)arg1 ;
-(CAGradientLayer *)fadeMaskLayer;
-(CGRect)tableViewFrame;
-(float)tableViewFooterHeight;
-(void)setLyricsLineSet:(SPTLyricsLineSet *)arg1 ;
-(float)tableViewHeaderHeight;
-(void)scrollAndUpdateSelectedLine;
-(int)selectedLineIndex;
-(void)setUserInteracted:(char)arg1 ;
-(char)userInteracted;
-(SPTLyricsLineSet *)lyricsLineSet;
-(id)textLabelColorForSelected:(char)arg1 ;
-(void)setSelectedLineIndex:(int)arg1 ;
-(void)scheduleNextLineWithPlayerState:(id)arg1 ;
-(SPTPlayerTrack *)currentTrack;
-(void)setCurrentTrack:(SPTPlayerTrack *)arg1 ;
-(void)dismissFullScreen;
-(void)updateWithPlayerState:(id)arg1 ;
-(void)setStartingScrollContentYOffset:(float)arg1 ;
-(float)startingScrollContentYOffset;
-(float)lastDeltaContentYOffset;
-(void)setLastDeltaContentYOffset:(float)arg1 ;
-(NSMutableSet *)lineIndexesLogged;
-(void)closeButtonPressed;
-(void)providerLinkButtonPressed;
-(id)initWithTrackURL:(id)arg1 imageURL:(id)arg2 lyricsService:(id)arg3 player:(id)arg4 metaViewController:(id)arg5 loggingService:(id)arg6 imageLoader:(id)arg7 ;
-(void)setLineIndexesLogged:(NSMutableSet *)arg1 ;
-(void)setPlayer:(id<SPTPlayer>)arg1 ;
-(id<SPTPlayer>)player;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setBackgroundView:(SPTImageBlurView *)arg1 ;
-(SPTImageBlurView *)backgroundView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(SPTLyricsFullScreenHeaderView *)headerView;
-(void)setHeaderView:(SPTLyricsFullScreenHeaderView *)arg1 ;
-(SPTLyricsTableFooterView *)footerView;
-(void)setFooterView:(SPTLyricsTableFooterView *)arg1 ;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(void)updateState;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
@end

