/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:44 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTBaseViewModel.h>
#import <Spotify/SPTRadioPlaybackObserver.h>
#import <Spotify/SPTRadioStationViewModel.h>

@class SPTRadioPlaybackService, NSURL, SPTRadioStation, SPTRadioStationsService, SPTRadioViewUtils, NSString, NSArray;

@interface SPTStationViewModel : SPTBaseViewModel <SPTRadioPlaybackObserver, SPTRadioStationViewModel> {

	char _playbackStarted;
	SPTRadioPlaybackService* _playbackService;
	NSURL* _stationURL;
	SPTRadioStation* _station;
	SPTRadioStationsService* _stationsService;
	SPTRadioViewUtils* _viewUtils;

}

@property (assign,nonatomic,__weak) id<SPTStationViewModelDelegate> delegate; 
@property (assign,nonatomic,__weak) SPTRadioPlaybackService * playbackService;                     //@synthesize playbackService=_playbackService - In the implementation block
@property (nonatomic,retain) NSURL * stationURL;                                                   //@synthesize stationURL=_stationURL - In the implementation block
@property (nonatomic,retain) SPTRadioStation * station;                                            //@synthesize station=_station - In the implementation block
@property (nonatomic,readonly) int numberOfTracks; 
@property (getter=isPlaying,nonatomic,readonly) char playing; 
@property (assign,getter=hasPlaybackStarted,nonatomic) char playbackStarted;                       //@synthesize playbackStarted=_playbackStarted - In the implementation block
@property (getter=isStationInCollection,nonatomic,readonly) char stationInCollection; 
@property (assign,nonatomic,__weak) SPTRadioStationsService * stationsService;                     //@synthesize stationsService=_stationsService - In the implementation block
@property (nonatomic,retain) SPTRadioViewUtils * viewUtils;                                        //@synthesize viewUtils=_viewUtils - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * relatedArtists; 
@property (nonatomic,readonly) NSString * relatedArtistsText; 
@property (nonatomic,readonly) char hasSuccessfullyLoadedData; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (getter=isContainer,nonatomic,readonly) char container; 
@property (nonatomic,readonly) unsigned size; 
@property (nonatomic,readonly) unsigned currentIndex; 
-(void)setPlaybackStarted:(char)arg1 ;
-(id)parseResponse:(id)arg1 requestKey:(id)arg2 error:(id*)arg3 ;
-(char)playTrackAtIndex:(int)arg1 ;
-(char)trackIsCurrentlyPlayingAtIndexPath:(id)arg1 ;
-(NSArray *)relatedArtists;
-(SPTRadioStationsService *)stationsService;
-(SPTRadioViewUtils *)viewUtils;
-(SPTRadioPlaybackService *)playbackService;
-(void)setStationsService:(SPTRadioStationsService *)arg1 ;
-(void)setPlaybackService:(SPTRadioPlaybackService *)arg1 ;
-(void)setViewUtils:(SPTRadioViewUtils *)arg1 ;
-(void)radioPlaybackService:(id)arg1 playbackStateChanged:(unsigned)arg2 ;
-(void)radioPlaybackServiceCurrentTrackChanged:(id)arg1 ;
-(void)radioPlaybackService:(id)arg1 error:(id)arg2 ;
-(id)initWithStationURL:(id)arg1 playbackService:(id)arg2 stationsService:(id)arg3 offlineModeState:(id)arg4 dataLoader:(id)arg5 radioViewUtils:(id)arg6 ;
-(id)trackAtIndex:(int)arg1 ;
-(void)loadMoreTracks:(/*^block*/id)arg1 ;
-(char)isStationInCollection;
-(void)updateSavedStationState:(char)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)relatedArtistsText;
-(char)hasPlaybackStarted;
-(void)requestDataForKey:(id)arg1 ;
-(NSURL *)stationURL;
-(char)isContainer;
-(char)isPlaying;
-(unsigned)size;
-(void)dealloc;
-(NSString *)title;
-(unsigned)currentIndex;
-(NSString *)subtitle;
-(void)setStation:(SPTRadioStation *)arg1 ;
-(id)currentUser;
-(void)setStationURL:(NSURL *)arg1 ;
-(int)numberOfTracks;
-(char)startPlayback;
-(SPTRadioStation *)station;
@end

