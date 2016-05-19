/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:35 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Spotify/SPTPlayerObserver.h>
#import <Spotify/SPTGeniusLaunchExternalDelegate.h>

@protocol SPTImageLoaderFactory, SPTPlayer;
@class SPTGeniusCardContainerView, NSURL, SPTGeniusService, SPTGeniusAnnotationSet, SPTGeniusLoggingService, UIView, SPTGeniusAnnotation, NSTimer, NSMutableDictionary, NSString;

@interface SPTGeniusCardsViewController : UIViewController <SPTPlayerObserver, SPTGeniusLaunchExternalDelegate> {

	char _active;
	char _visible;
	char _pausedPlayback;
	char _firstCardScheduled;
	char _loggedUIPageImpression;
	SPTGeniusCardContainerView* _cardContainerView;
	NSURL* _trackURL;
	SPTGeniusService* _geniusService;
	SPTGeniusAnnotationSet* _annotationSet;
	SPTGeniusLoggingService* _loggingService;
	id<SPTImageLoaderFactory> _imageLoaderFactory;
	id<SPTPlayer> _player;
	UIView* _currentCard;
	SPTGeniusAnnotation* _currentAnnotation;
	float _nextTimestamp;
	float _currentTimestamp;
	NSTimer* _timer;
	NSMutableDictionary* _cardViewCache;

}

@property (nonatomic,retain) SPTGeniusCardContainerView * cardContainerView;              //@synthesize cardContainerView=_cardContainerView - In the implementation block
@property (nonatomic,retain) NSURL * trackURL;                                            //@synthesize trackURL=_trackURL - In the implementation block
@property (assign,nonatomic) char active;                                                 //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) char visible;                                                //@synthesize visible=_visible - In the implementation block
@property (nonatomic,retain) SPTGeniusService * geniusService;                            //@synthesize geniusService=_geniusService - In the implementation block
@property (nonatomic,retain) SPTGeniusAnnotationSet * annotationSet;                      //@synthesize annotationSet=_annotationSet - In the implementation block
@property (nonatomic,retain) SPTGeniusLoggingService * loggingService;                    //@synthesize loggingService=_loggingService - In the implementation block
@property (nonatomic,retain) id<SPTImageLoaderFactory> imageLoaderFactory;                //@synthesize imageLoaderFactory=_imageLoaderFactory - In the implementation block
@property (nonatomic,retain) id<SPTPlayer> player;                                        //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) UIView * currentCard;                                        //@synthesize currentCard=_currentCard - In the implementation block
@property (nonatomic,retain) SPTGeniusAnnotation * currentAnnotation;                     //@synthesize currentAnnotation=_currentAnnotation - In the implementation block
@property (assign,nonatomic) float nextTimestamp;                                         //@synthesize nextTimestamp=_nextTimestamp - In the implementation block
@property (assign,nonatomic) float currentTimestamp;                                      //@synthesize currentTimestamp=_currentTimestamp - In the implementation block
@property (assign,nonatomic) char pausedPlayback;                                         //@synthesize pausedPlayback=_pausedPlayback - In the implementation block
@property (assign,nonatomic) char firstCardScheduled;                                     //@synthesize firstCardScheduled=_firstCardScheduled - In the implementation block
@property (assign,nonatomic) char loggedUIPageImpression;                                 //@synthesize loggedUIPageImpression=_loggedUIPageImpression - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                             //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cardViewCache;                         //@synthesize cardViewCache=_cardViewCache - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3 ;
-(SPTGeniusCardContainerView *)cardContainerView;
-(id<SPTImageLoaderFactory>)imageLoaderFactory;
-(void)setImageLoaderFactory:(id<SPTImageLoaderFactory>)arg1 ;
-(NSURL *)trackURL;
-(void)setTrackURL:(NSURL *)arg1 ;
-(SPTGeniusService *)geniusService;
-(void)setGeniusService:(SPTGeniusService *)arg1 ;
-(id)initWithTrackURL:(id)arg1 geniusService:(id)arg2 player:(id)arg3 loggingService:(id)arg4 imageLoaderFactory:(id)arg5 ;
-(void)didTapButtonWithGeniusSongID:(int)arg1 itemIndex:(int)arg2 ;
-(void)setCardContainerView:(SPTGeniusCardContainerView *)arg1 ;
-(SPTGeniusAnnotationSet *)annotationSet;
-(void)handleNewPlayerState:(id)arg1 ;
-(NSMutableDictionary *)cardViewCache;
-(void)setNextTimestamp:(float)arg1 ;
-(void)setFirstCardScheduled:(char)arg1 ;
-(void)setLoggedUIPageImpression:(char)arg1 ;
-(float)nextTimestamp;
-(void)showNextCardWithDelay:(double)arg1 ;
-(void)showCardAtTime:(double)arg1 ;
-(void)showCardAtIndex:(int)arg1 ;
-(void)showNextCard;
-(id)cardViewForAnnotation:(id)arg1 ;
-(char)shouldShowIntroCard;
-(char)pausedPlayback;
-(char)loggedUIPageImpression;
-(void)setPausedPlayback:(char)arg1 ;
-(char)firstCardScheduled;
-(void)setAnnotationSet:(SPTGeniusAnnotationSet *)arg1 ;
-(UIView *)currentCard;
-(void)setCurrentCard:(UIView *)arg1 ;
-(void)setCardViewCache:(NSMutableDictionary *)arg1 ;
-(SPTGeniusLoggingService *)loggingService;
-(void)hideHint;
-(void)showHint;
-(void)setAnnotationSet:(id)arg1 trackURL:(id)arg2 ;
-(int)getCurrentAnnotationIndex;
-(void)setLoggingService:(SPTGeniusLoggingService *)arg1 ;
-(void)setPlayer:(id<SPTPlayer>)arg1 ;
-(id<SPTPlayer>)player;
-(char)visible;
-(void)viewWillLayoutSubviews;
-(char)active;
-(void)setVisible:(char)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)setActive:(char)arg1 ;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(void)resetState;
-(SPTGeniusAnnotation *)currentAnnotation;
-(void)setCurrentAnnotation:(SPTGeniusAnnotation *)arg1 ;
-(void)setCurrentTimestamp:(float)arg1 ;
-(float)currentTimestamp;
@end

