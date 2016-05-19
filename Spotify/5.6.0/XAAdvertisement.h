/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:21 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/XAAdAudioDelegate.h>

@class NSString, XAAdView, XAUserData, XAAdAudio, XAAdImage, NSDate, NSMutableArray, NSTimer, UIViewController;

@interface XAAdvertisement : NSObject <XAAdAudioDelegate> {

	char _imageLoaded;
	char _promptLoaded;
	char _tellMeMoreLoaded;
	char _lazyLoadImage;
	NSString* _type;
	NSString* _scrollText;
	NSString* _nowPlayingText;
	NSString* _adID;
	NSString* _name;
	NSString* _requestKey;
	NSString* _accountName;
	XAAdView* _view;
	NSString* _targetURL;
	NSString* _trackingURL;
	XAUserData* _userData;
	XAAdAudio* _baseAudio;
	XAAdAudio* _busyCue;
	XAAdAudio* _expansionAudio;
	XAAdAudio* _introductoryCue;
	XAAdAudio* _listeningEndCue;
	XAAdAudio* _listeningStartCue;
	XAAdAudio* _recognitionFailCue;
	XAAdAudio* _recognitionSuccessCue;
	XAAdImage* _adImage;
	XAAdImage* _trackingPixel;
	int _stallCountThreshold;
	/*^block*/id _adLoadHandler;
	NSDate* _finishedLoading;
	NSDate* _finishedLoadingImage;
	NSDate* _finishedLoadingPrompt;
	NSDate* _finishedLoadingTellMeMore;
	NSDate* _startedLoading;
	NSDate* _startedLoadingImage;
	NSDate* _startedLoadingPrompt;
	NSDate* _startedLoadingTellMeMore;
	NSDate* _startedPlayback;
	NSMutableArray* _loadingResources;
	NSString* _imageURL;
	NSString* _moreInfoURL;
	NSString* _promptURL;
	NSTimer* _displayCancelButtonTimer;
	NSTimer* _durationProgressTimer;
	UIViewController* _modalViewController;
	UIViewController* _rootViewController;
	XAAdAudio* _currentAudio;
	NSMutableArray* _actionsArray;

}

@property (nonatomic,retain,readonly) NSString * type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * scrollText;                                      //@synthesize scrollText=_scrollText - In the implementation block
@property (nonatomic,retain) NSString * nowPlayingText;                                  //@synthesize nowPlayingText=_nowPlayingText - In the implementation block
@property (nonatomic,retain,readonly) NSString * adID;                                   //@synthesize adID=_adID - In the implementation block
@property (nonatomic,retain,readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,retain,readonly) NSString * requestKey;                             //@synthesize requestKey=_requestKey - In the implementation block
@property (nonatomic,retain) NSString * accountName;                                     //@synthesize accountName=_accountName - In the implementation block
@property (nonatomic,retain) XAAdView * view;                                            //@synthesize view=_view - In the implementation block
@property (nonatomic,retain,readonly) NSString * targetURL;                              //@synthesize targetURL=_targetURL - In the implementation block
@property (setter=setTrackingURL:,nonatomic,retain) NSString * trackingURL;              //@synthesize trackingURL=_trackingURL - In the implementation block
@property (nonatomic,retain,readonly) XAUserData * userData;                             //@synthesize userData=_userData - In the implementation block
@property (nonatomic,retain) XAAdAudio * baseAudio;                                      //@synthesize baseAudio=_baseAudio - In the implementation block
@property (nonatomic,retain) XAAdAudio * busyCue;                                        //@synthesize busyCue=_busyCue - In the implementation block
@property (nonatomic,retain) XAAdAudio * expansionAudio;                                 //@synthesize expansionAudio=_expansionAudio - In the implementation block
@property (nonatomic,retain) XAAdAudio * introductoryCue;                                //@synthesize introductoryCue=_introductoryCue - In the implementation block
@property (nonatomic,retain) XAAdAudio * listeningEndCue;                                //@synthesize listeningEndCue=_listeningEndCue - In the implementation block
@property (nonatomic,retain) XAAdAudio * listeningStartCue;                              //@synthesize listeningStartCue=_listeningStartCue - In the implementation block
@property (nonatomic,retain) XAAdAudio * recognitionFailCue;                             //@synthesize recognitionFailCue=_recognitionFailCue - In the implementation block
@property (nonatomic,retain) XAAdAudio * recognitionSuccessCue;                          //@synthesize recognitionSuccessCue=_recognitionSuccessCue - In the implementation block
@property (nonatomic,retain) XAAdImage * adImage;                                        //@synthesize adImage=_adImage - In the implementation block
@property (nonatomic,retain,readonly) XAAdImage * trackingPixel;                         //@synthesize trackingPixel=_trackingPixel - In the implementation block
@property (assign) int stallCountThreshold;                                              //@synthesize stallCountThreshold=_stallCountThreshold - In the implementation block
@property (assign,nonatomic) char imageLoaded;                                           //@synthesize imageLoaded=_imageLoaded - In the implementation block
@property (assign,nonatomic) char promptLoaded;                                          //@synthesize promptLoaded=_promptLoaded - In the implementation block
@property (assign,nonatomic) char tellMeMoreLoaded;                                      //@synthesize tellMeMoreLoaded=_tellMeMoreLoaded - In the implementation block
@property (assign,nonatomic) char lazyLoadImage;                                         //@synthesize lazyLoadImage=_lazyLoadImage - In the implementation block
@property (nonatomic,copy) id adLoadHandler;                                             //@synthesize adLoadHandler=_adLoadHandler - In the implementation block
@property (nonatomic,retain) NSDate * finishedLoading;                                   //@synthesize finishedLoading=_finishedLoading - In the implementation block
@property (nonatomic,retain) NSDate * finishedLoadingImage;                              //@synthesize finishedLoadingImage=_finishedLoadingImage - In the implementation block
@property (nonatomic,retain) NSDate * finishedLoadingPrompt;                             //@synthesize finishedLoadingPrompt=_finishedLoadingPrompt - In the implementation block
@property (nonatomic,retain) NSDate * finishedLoadingTellMeMore;                         //@synthesize finishedLoadingTellMeMore=_finishedLoadingTellMeMore - In the implementation block
@property (nonatomic,retain) NSDate * startedLoading;                                    //@synthesize startedLoading=_startedLoading - In the implementation block
@property (nonatomic,retain) NSDate * startedLoadingImage;                               //@synthesize startedLoadingImage=_startedLoadingImage - In the implementation block
@property (nonatomic,retain) NSDate * startedLoadingPrompt;                              //@synthesize startedLoadingPrompt=_startedLoadingPrompt - In the implementation block
@property (nonatomic,retain) NSDate * startedLoadingTellMeMore;                          //@synthesize startedLoadingTellMeMore=_startedLoadingTellMeMore - In the implementation block
@property (nonatomic,retain) NSDate * startedPlayback;                                   //@synthesize startedPlayback=_startedPlayback - In the implementation block
@property (nonatomic,retain) NSMutableArray * loadingResources;                          //@synthesize loadingResources=_loadingResources - In the implementation block
@property (nonatomic,retain) NSString * imageURL;                                        //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain) NSString * moreInfoURL;                                     //@synthesize moreInfoURL=_moreInfoURL - In the implementation block
@property (nonatomic,retain) NSString * promptURL;                                       //@synthesize promptURL=_promptURL - In the implementation block
@property (nonatomic,retain) NSTimer * displayCancelButtonTimer;                         //@synthesize displayCancelButtonTimer=_displayCancelButtonTimer - In the implementation block
@property (nonatomic,retain) NSTimer * durationProgressTimer;                            //@synthesize durationProgressTimer=_durationProgressTimer - In the implementation block
@property (nonatomic,retain) UIViewController * modalViewController;                     //@synthesize modalViewController=_modalViewController - In the implementation block
@property (nonatomic,retain) UIViewController * rootViewController;                      //@synthesize rootViewController=_rootViewController - In the implementation block
@property (nonatomic,retain) XAAdAudio * currentAudio;                                   //@synthesize currentAudio=_currentAudio - In the implementation block
@property (retain) NSMutableArray * actionsArray;                                        //@synthesize actionsArray=_actionsArray - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)adImageLoaded;
-(void)loadAdImage:(/*^block*/id)arg1 ;
-(id)actionTypes;
-(NSString *)adID;
-(NSString *)requestKey;
-(id)totalLoadTimeInMilliseconds;
-(id)baseAudioLoadTimeInMilliseconds;
-(id)expansionAudioLoadTimeInMilliseconds;
-(id)imageLoadTimeInMilliseconds;
-(void)playBaseAudio;
-(XAAdAudio *)baseAudio;
-(char)playingAudio;
-(void)pauseAudio;
-(void)resumeAudio;
-(XAAdAudio *)expansionAudio;
-(void)playExpansionAudio;
-(NSMutableArray *)actionsArray;
-(id)actionByType:(unsigned)arg1 ;
-(char)lazyLoadImage;
-(void)loadWithLazyLoadImage:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)setLazyLoadImage:(char)arg1 ;
-(void)setStartedLoading:(NSDate *)arg1 ;
-(void)setAdLoadHandler:(id)arg1 ;
-(NSString *)trackingURL;
-(NSString *)promptURL;
-(void)setPromptURL:(NSString *)arg1 ;
-(NSString *)moreInfoURL;
-(void)setMoreInfoURL:(NSString *)arg1 ;
-(void)onFailedResourceLoad:(id)arg1 ;
-(void)setStartedLoadingPrompt:(NSDate *)arg1 ;
-(NSMutableArray *)loadingResources;
-(void)setBaseAudio:(XAAdAudio *)arg1 ;
-(int)stallCountThreshold;
-(void)setStallCountThreshold:(int)arg1 ;
-(void)setPromptLoaded:(char)arg1 ;
-(void)setFinishedLoadingPrompt:(NSDate *)arg1 ;
-(void)onSuccessfulResourceLoad;
-(XAAdAudio *)introductoryCue;
-(void)setIntroductoryCue:(XAAdAudio *)arg1 ;
-(void)handleCueLoad:(id)arg1 ;
-(XAAdAudio *)recognitionSuccessCue;
-(void)setRecognitionSuccessCue:(XAAdAudio *)arg1 ;
-(XAAdAudio *)recognitionFailCue;
-(void)setRecognitionFailCue:(XAAdAudio *)arg1 ;
-(XAAdAudio *)listeningEndCue;
-(void)setListeningEndCue:(XAAdAudio *)arg1 ;
-(XAAdAudio *)listeningStartCue;
-(void)setListeningStartCue:(XAAdAudio *)arg1 ;
-(XAAdAudio *)busyCue;
-(void)setBusyCue:(XAAdAudio *)arg1 ;
-(void)setStartedLoadingTellMeMore:(NSDate *)arg1 ;
-(void)setExpansionAudio:(XAAdAudio *)arg1 ;
-(void)setTellMeMoreLoaded:(char)arg1 ;
-(void)setFinishedLoadingTellMeMore:(NSDate *)arg1 ;
-(NSString *)nowPlayingText;
-(void)prepareImageData:(char)arg1 ;
-(void)setStartedLoadingImage:(NSDate *)arg1 ;
-(void)setAdImage:(XAAdImage *)arg1 ;
-(XAAdImage *)adImage;
-(void)setImageLoaded:(char)arg1 ;
-(void)setFinishedLoadingImage:(NSDate *)arg1 ;
-(char)imageLoaded;
-(id)adLoadHandler;
-(NSDate *)finishedLoading;
-(char)promptLoaded;
-(char)tellMeMoreLoaded;
-(void)setFinishedLoading:(NSDate *)arg1 ;
-(XAAdImage *)trackingPixel;
-(void)setTrackingURL:(NSString *)arg1 ;
-(XAAdAudio *)currentAudio;
-(NSTimer *)displayCancelButtonTimer;
-(NSDate *)startedPlayback;
-(void)setCurrentAudio:(XAAdAudio *)arg1 ;
-(void)onDisplayCancelButtonTimerFired:(id)arg1 ;
-(void)setDisplayCancelButtonTimer:(NSTimer *)arg1 ;
-(void)setStartedPlayback:(NSDate *)arg1 ;
-(void)updateAudioProgress:(id)arg1 ;
-(void)setDurationProgressTimer:(NSTimer *)arg1 ;
-(NSTimer *)durationProgressTimer;
-(void)setActionsArray:(NSMutableArray *)arg1 ;
-(void)onRecording;
-(void)onFinishedRecording;
-(char)isEqualToAd:(id)arg1 ;
-(NSString *)scrollText;
-(void)cancelLoadSilently:(char)arg1 ;
-(NSDate *)startedLoading;
-(NSDate *)startedLoadingImage;
-(NSDate *)finishedLoadingImage;
-(NSDate *)startedLoadingPrompt;
-(NSDate *)finishedLoadingPrompt;
-(NSDate *)startedLoadingTellMeMore;
-(NSDate *)finishedLoadingTellMeMore;
-(void)adAudioDidFinishPlaying:(id)arg1 successfully:(char)arg2 ;
-(void)adAudioStalled:(id)arg1 ;
-(id)initWithAdName:(id)arg1 requestKey:(id)arg2 adID:(id)arg3 adType:(id)arg4 campaignName:(id)arg5 imageURL:(id)arg6 promptURL:(id)arg7 moreInfoURL:(id)arg8 targetURL:(id)arg9 userData:(id)arg10 ;
-(char)canPlayAd:(id*)arg1 ;
-(void)loadwithCompletion:(/*^block*/id)arg1 ;
-(void)loadTrackingPixel;
-(void)removeActionByActionType:(unsigned)arg1 ;
-(id)resourcesLoading;
-(id)moreInfoAction;
-(char)playbackCanBeCancelled;
-(void)updateDecibel:(float)arg1 ;
-(void)adAudioAboutToFinish:(id)arg1 ;
-(void)setScrollText:(NSString *)arg1 ;
-(void)setNowPlayingText:(NSString *)arg1 ;
-(void)setLoadingResources:(NSMutableArray *)arg1 ;
-(void)setModalViewController:(UIViewController *)arg1 ;
-(double)currentTime;
-(char)loaded;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(XAAdView *)view;
-(NSString *)name;
-(id)actions;
-(void)setRootViewController:(UIViewController *)arg1 ;
-(UIViewController *)rootViewController;
-(void)sendEvent:(id)arg1 ;
-(NSString *)type;
-(void)setView:(XAAdView *)arg1 ;
-(char)displayed;
-(UIViewController *)modalViewController;
-(void)cleanUp;
-(void)addAction:(id)arg1 ;
-(XAUserData *)userData;
-(void)stopAudio;
-(void)setImageURL:(NSString *)arg1 ;
-(NSString *)imageURL;
-(NSString *)accountName;
-(void)setAccountName:(NSString *)arg1 ;
-(void)setTargetURL:(NSString *)arg1 ;
-(NSString *)targetURL;
@end

