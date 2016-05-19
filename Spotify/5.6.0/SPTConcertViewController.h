/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:33 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Spotify/SPTConcertArtistInfoViewDelegate.h>
#import <Spotify/SPContentInsetViewController.h>
#import <Spotify/SPViewController.h>
#import <Spotify/SPTImageLoaderDelegate.h>
#import <Spotify/SPTConcertTicketsViewDelegate.h>
#import <Spotify/SPTConcertTicketsViewDelegate.h>

@protocol SPTImageLoader;
@class UIScrollView, SPTConcertLocationView, SPTConcertArtistInfoView, SPTConcertEventInfoView, SPTConcertTicketsView, SPTConcertViewModel, NSString;

@interface SPTConcertViewController : UIViewController <SPTConcertArtistInfoViewDelegate, SPContentInsetViewController, SPViewController, SPTImageLoaderDelegate, SPTConcertTicketsViewDelegate, SPTConcertTicketsViewDelegate> {

	char _insideViewController;
	UIScrollView* _scrollView;
	SPTConcertLocationView* _locationView;
	SPTConcertArtistInfoView* _artistInfoView;
	SPTConcertEventInfoView* _eventInfoView;
	SPTConcertTicketsView* _ticketsView;
	SPTConcertViewModel* _viewModel;
	id<SPTImageLoader> _imageLoader;

}

@property (assign,getter=isInsideViewController,nonatomic) char insideViewController;              //@synthesize insideViewController=_insideViewController - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                            //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) SPTConcertLocationView * locationView;                                //@synthesize locationView=_locationView - In the implementation block
@property (nonatomic,retain) SPTConcertArtistInfoView * artistInfoView;                            //@synthesize artistInfoView=_artistInfoView - In the implementation block
@property (nonatomic,retain) SPTConcertEventInfoView * eventInfoView;                              //@synthesize eventInfoView=_eventInfoView - In the implementation block
@property (nonatomic,retain) SPTConcertTicketsView * ticketsView;                                  //@synthesize ticketsView=_ticketsView - In the implementation block
@property (nonatomic,retain) SPTConcertViewModel * viewModel;                                      //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) id<SPTImageLoader> imageLoader;                                       //@synthesize imageLoader=_imageLoader - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char automaticallyAdjustsScrollViewInsets; 
-(void)sp_updateContentInsets;
-(void)applyThemeLayout;
-(id<SPTImageLoader>)imageLoader;
-(void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5 ;
-(void)setImageLoader:(id<SPTImageLoader>)arg1 ;
-(void)concertArtistInfoViewActionButtonDidTouchUpInside:(id)arg1 ;
-(void)setupScrollView;
-(void)setupArtistInfoView;
-(void)setupConcertEventInfoView;
-(void)setupTicketsView;
-(void)setupLocationView;
-(void)populateViews;
-(char)isInsideViewController;
-(void)setArtistInfoView:(SPTConcertArtistInfoView *)arg1 ;
-(SPTConcertArtistInfoView *)artistInfoView;
-(void)setEventInfoView:(SPTConcertEventInfoView *)arg1 ;
-(SPTConcertEventInfoView *)eventInfoView;
-(void)setTicketsView:(SPTConcertTicketsView *)arg1 ;
-(SPTConcertTicketsView *)ticketsView;
-(void)setLocationView:(SPTConcertLocationView *)arg1 ;
-(SPTConcertLocationView *)locationView;
-(void)startThemeNotifications;
-(void)stopThemeNotifications;
-(id)initWithViewModel:(id)arg1 imageLoader:(id)arg2 isInsideViewController:(char)arg3 ;
-(void)setInsideViewController:(char)arg1 ;
-(void)performActionForConcertTicketsView:(id)arg1 ;
-(SPTConcertViewModel *)viewModel;
-(void)setViewModel:(SPTConcertViewModel *)arg1 ;
-(void)dealloc;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(char)automaticallyAdjustsScrollViewInsets;
-(id)URI;
-(void)setupView;
@end

