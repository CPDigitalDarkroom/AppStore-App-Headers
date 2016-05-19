/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:44 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Spotify/SPTRadioStationsObserver.h>
#import <Spotify/SPTImageLoaderDelegate.h>
#import <Spotify/SPTStationsCreateBarDelegate.h>
#import <Spotify/SearchExternalViewControllerDelegate.h>
#import <Spotify/SPTRadioPlaybackObserver.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <Spotify/SPContentInsetViewController.h>

@protocol SPTImageLoaderFactory, SPTImageLoader, SearchFeature, SPTLocalSettings, SPTAudioTouch;
@class SPTRadioStationsService, SPTRadioPlaybackService, SPTLoggingService, SPTProgressView, SPTRadioViewUtils, SPTStationsCreateBar, SearchExternalViewController, UIViewController, SPTInfoView, NSString;

@interface SPTStationsListViewController : SPTableViewController <UITableViewDataSource, UITableViewDelegate, SPTRadioStationsObserver, SPTImageLoaderDelegate, SPTStationsCreateBarDelegate, SearchExternalViewControllerDelegate, SPTRadioPlaybackObserver, UINavigationControllerDelegate, SPContentInsetViewController> {

	char _isDeletingStation;
	SPTRadioStationsService* _stationService;
	SPTRadioPlaybackService* _playbackService;
	SPTLoggingService* _loggingService;
	SPTProgressView* _progressView;
	id<SPTImageLoaderFactory> _imageLoaderFactory;
	id<SPTImageLoader> _imageLoader;
	id<SearchFeature> _search;
	id<SPTLocalSettings> _localSettings;
	id<SPTAudioTouch> _audioTouch;
	SPTRadioViewUtils* _viewUtils;
	SPTStationsCreateBar* _createBarView;
	SearchExternalViewController* _searchViewController;
	UIViewController* _searchTableViewController;
	SPTInfoView* _infoView;

}

@property (nonatomic,retain) SPTRadioStationsService * stationService;                         //@synthesize stationService=_stationService - In the implementation block
@property (nonatomic,retain) SPTRadioPlaybackService * playbackService;                        //@synthesize playbackService=_playbackService - In the implementation block
@property (nonatomic,retain) SPTLoggingService * loggingService;                               //@synthesize loggingService=_loggingService - In the implementation block
@property (nonatomic,retain) SPTProgressView * progressView;                                   //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) id<SPTImageLoaderFactory> imageLoaderFactory;                     //@synthesize imageLoaderFactory=_imageLoaderFactory - In the implementation block
@property (nonatomic,retain) id<SPTImageLoader> imageLoader;                                   //@synthesize imageLoader=_imageLoader - In the implementation block
@property (assign,nonatomic,__weak) id<SearchFeature> search;                                  //@synthesize search=_search - In the implementation block
@property (nonatomic,retain) id<SPTLocalSettings> localSettings;                               //@synthesize localSettings=_localSettings - In the implementation block
@property (nonatomic,retain) id<SPTAudioTouch> audioTouch;                                     //@synthesize audioTouch=_audioTouch - In the implementation block
@property (nonatomic,retain) SPTRadioViewUtils * viewUtils;                                    //@synthesize viewUtils=_viewUtils - In the implementation block
@property (nonatomic,retain) SPTStationsCreateBar * createBarView;                             //@synthesize createBarView=_createBarView - In the implementation block
@property (nonatomic,retain) SearchExternalViewController * searchViewController;              //@synthesize searchViewController=_searchViewController - In the implementation block
@property (nonatomic,retain) UIViewController * searchTableViewController;                     //@synthesize searchTableViewController=_searchTableViewController - In the implementation block
@property (nonatomic,retain) SPTInfoView * infoView;                                           //@synthesize infoView=_infoView - In the implementation block
@property (assign,nonatomic) char isDeletingStation;                                           //@synthesize isDeletingStation=_isDeletingStation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char automaticallyAdjustsScrollViewInsets; 
-(void)sp_updateContentInsets;
-(id<SPTImageLoader>)imageLoader;
-(void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5 ;
-(void)setImageLoader:(id<SPTImageLoader>)arg1 ;
-(int)stackedNavigationPageSize;
-(id<SPTLocalSettings>)localSettings;
-(void)setLocalSettings:(id<SPTLocalSettings>)arg1 ;
-(void)setAudioTouch:(id<SPTAudioTouch>)arg1 ;
-(id<SPTAudioTouch>)audioTouch;
-(id<SPTImageLoaderFactory>)imageLoaderFactory;
-(void)setImageLoaderFactory:(id<SPTImageLoaderFactory>)arg1 ;
-(void)updateInfoViewWithError:(id)arg1 ;
-(void)showInfoView;
-(void)hideInfoView;
-(void)filterBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)filterBarContextButtonTapped:(id)arg1 ;
-(void)filterBarTextDidBeginEditing:(id)arg1 ;
-(void)filterBarTextDidEndEditing:(id)arg1 ;
-(SPTLoggingService *)loggingService;
-(void)setLoggingService:(SPTLoggingService *)arg1 ;
-(SPTRadioViewUtils *)viewUtils;
-(SPTRadioPlaybackService *)playbackService;
-(void)setPlaybackService:(SPTRadioPlaybackService *)arg1 ;
-(void)setViewUtils:(SPTRadioViewUtils *)arg1 ;
-(void)radioPlaybackService:(id)arg1 playbackStateChanged:(unsigned)arg2 ;
-(id)initWithStationService:(id)arg1 playbackService:(id)arg2 imageLoaderFactory:(id)arg3 audioTouch:(id)arg4 search:(id)arg5 localSettings:(id)arg6 radioViewUtils:(id)arg7 loggingService:(id)arg8 ;
-(SPTRadioStationsService *)stationService;
-(void)setStationService:(SPTRadioStationsService *)arg1 ;
-(void)searchViewController:(id)arg1 didSelectEntityWithURL:(id)arg2 itemName:(id)arg3 creatorName:(id)arg4 sourceName:(id)arg5 imageURL:(id)arg6 ;
-(id)provideInitialViewControllerForSearchViewController:(id)arg1 ;
-(unsigned)interfaceModeForSearchViewController:(id)arg1 ;
-(void)radioStationService:(id)arg1 userStationsChanged:(id)arg2 ;
-(void)setCreateBarView:(SPTStationsCreateBar *)arg1 ;
-(SPTStationsCreateBar *)createBarView;
-(void)setSearchTableViewController:(UIViewController *)arg1 ;
-(UIViewController *)searchTableViewController;
-(char)isStationCurrentlyPlaying:(id)arg1 ;
-(char)isDeletingStation;
-(void)setIsDeletingStation:(char)arg1 ;
-(void)showSearchTableView;
-(void)hideSearchTableView;
-(char)isClusterRadioCurrentlyPlaying;
-(SPTInfoView *)infoView;
-(void)setInfoView:(SPTInfoView *)arg1 ;
-(void)setSearchViewController:(SearchExternalViewController *)arg1 ;
-(SearchExternalViewController *)searchViewController;
-(void)dealloc;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)viewDidLoad;
-(void)setProgressView:(SPTProgressView *)arg1 ;
-(SPTProgressView *)progressView;
-(void)setSearch:(id<SearchFeature>)arg1 ;
-(id<SearchFeature>)search;
-(id)URI;
@end

