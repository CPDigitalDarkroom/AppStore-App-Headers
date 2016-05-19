/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:39 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <UIKit/UIView.h>
#import <Spotify/SPTImageLoaderDelegate.h>
#import <Spotify/SPTVideoSurfaceDelegate.h>
#import <Spotify/SPTNowPlayingCoverArtContentViewDelegate.h>

@protocol SPTNowPlayingCoverArtViewCellDelegate, SPTNowPlayingCoverArtContentView, SPTImageLoader, SPTVideoSurface;
@class UIView, NSArray, NSURL, UIButton, UIImageView, UIActivityIndicatorView, SPTNowPlayingCarouselGradientView, UIImage, NSString;

@interface SPTNowPlayingCoverArtViewCell : UIView <SPTImageLoaderDelegate, SPTVideoSurfaceDelegate, SPTNowPlayingCoverArtContentViewDelegate> {

	char _showActivityView;
	char _selected;
	char _fullscreen;
	char _transitioning;
	id<SPTNowPlayingCoverArtViewCellDelegate> _delegate;
	UIView*<SPTNowPlayingCoverArtContentView> _coverArtContent;
	NSArray* _contentProviders;
	NSURL* _trackURL;
	UIButton* _accessoryButton;
	id<SPTImageLoader> _imageLoader;
	UIView* _contentView;
	UIImageView* _placeholderImageView;
	UIView*<SPTVideoSurface> _videoSurfaceView;
	UIActivityIndicatorView* _activityView;
	int _placeholderIconType;
	SPTNowPlayingCarouselGradientView* _gradientView;
	UIView* _overlayView;
	CGSize _cellSize;
	CGSize _fullscreenSize;

}

@property (assign,nonatomic,__weak) id<SPTNowPlayingCoverArtViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView*<SPTNowPlayingCoverArtContentView> coverArtContent;              //@synthesize coverArtContent=_coverArtContent - In the implementation block
@property (nonatomic,copy) NSArray * contentProviders;                                               //@synthesize contentProviders=_contentProviders - In the implementation block
@property (nonatomic,readonly) UIImage * placeholderImage; 
@property (nonatomic,readonly) id<SPTVideoSurface> videoSurface; 
@property (assign,nonatomic) CGSize cellSize;                                                        //@synthesize cellSize=_cellSize - In the implementation block
@property (assign,nonatomic) CGSize fullscreenSize;                                                  //@synthesize fullscreenSize=_fullscreenSize - In the implementation block
@property (assign,nonatomic) char showActivityView;                                                  //@synthesize showActivityView=_showActivityView - In the implementation block
@property (assign,nonatomic) char selected;                                                          //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) char isCoverArtHidden; 
@property (nonatomic,readonly) UIImage * cellContentRepresentation; 
@property (nonatomic,readonly) NSURL * cellContentURI; 
@property (nonatomic,retain) NSURL * trackURL;                                                       //@synthesize trackURL=_trackURL - In the implementation block
@property (nonatomic,retain) UIButton * accessoryButton;                                             //@synthesize accessoryButton=_accessoryButton - In the implementation block
@property (nonatomic,retain) id<SPTImageLoader> imageLoader;                                         //@synthesize imageLoader=_imageLoader - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                   //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIImageView * placeholderImageView;                                     //@synthesize placeholderImageView=_placeholderImageView - In the implementation block
@property (nonatomic,retain) UIView*<SPTVideoSurface> videoSurfaceView;                              //@synthesize videoSurfaceView=_videoSurfaceView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityView;                                 //@synthesize activityView=_activityView - In the implementation block
@property (assign,nonatomic) char fullscreen;                                                        //@synthesize fullscreen=_fullscreen - In the implementation block
@property (assign,nonatomic) int placeholderIconType;                                                //@synthesize placeholderIconType=_placeholderIconType - In the implementation block
@property (nonatomic,readonly) char shouldShowVideo; 
@property (nonatomic,readonly) char shouldShowPlaceholderView; 
@property (nonatomic,readonly) char shouldShowCoverArtView; 
@property (nonatomic,readonly) SPTNowPlayingCarouselGradientView * gradientView;                     //@synthesize gradientView=_gradientView - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                                   //@synthesize overlayView=_overlayView - In the implementation block
@property (assign,getter=isTransitioning,nonatomic) char transitioning;                              //@synthesize transitioning=_transitioning - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SPTImageLoader>)imageLoader;
-(void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5 ;
-(void)imageLoader:(id)arg1 didFailToLoadImageForURL:(id)arg2 error:(id)arg3 context:(id)arg4 ;
-(void)setImageLoader:(id<SPTImageLoader>)arg1 ;
-(void)videoSurfaceDidAttachVideo:(id)arg1 ;
-(void)videoSurfaceDidDetachVideo:(id)arg1 ;
-(void)videoSurfaceDidChangeVideoRect:(id)arg1 ;
-(NSURL *)trackURL;
-(void)setTrackURL:(NSURL *)arg1 ;
-(void)setAccessoryButton:(UIButton *)arg1 ;
-(UIImage *)cellContentRepresentation;
-(NSURL *)cellContentURI;
-(id)initWithFrame:(CGRect)arg1 imageLoader:(id)arg2 videoSurfaceManager:(id)arg3 ;
-(void)setContentProviders:(NSArray *)arg1 ;
-(UIView*<SPTNowPlayingCoverArtContentView>)coverArtContent;
-(void)updateLayerVisibilities:(char)arg1 ;
-(void)positionSupplementaryViews;
-(void)invalidatePlaceholderImage;
-(void)updateFullscreen;
-(id<SPTVideoSurface>)videoSurface;
-(char)shouldShowPlaceholderView;
-(char)shouldShowVideo;
-(char)shouldContentProvidersReplaceCoverArt;
-(NSArray *)contentProviders;
-(UIImageView *)placeholderImageView;
-(void)setView:(id)arg1 visible:(char)arg2 animated:(char)arg3 ;
-(char)shouldShowCoverArtView;
-(UIView*<SPTVideoSurface>)videoSurfaceView;
-(int)placeholderIconType;
-(void)accessoryButtonTapped:(id)arg1 ;
-(void)positionAccessoryButton;
-(void)setPlaceholderIconType:(int)arg1 ;
-(void)setCoverArtContent:(UIView*<SPTNowPlayingCoverArtContentView>)arg1 ;
-(char)fullscreen;
-(CGSize)fullscreenSize;
-(void)positionOverlayView;
-(void)contentViewIsReadyForDisplay:(id)arg1 ;
-(void)setShowActivityView:(char)arg1 ;
-(void)setTransitioning:(char)arg1 animated:(char)arg2 ;
-(void)setEnableVideoSurface:(char)arg1 animated:(char)arg2 ;
-(void)setCoverArtContent:(id)arg1 hideCoverArt:(char)arg2 isVideo:(char)arg3 trackURI:(id)arg4 imageURL:(id)arg5 animated:(char)arg6 ;
-(void)setFullscreenSize:(CGSize)arg1 ;
-(char)isCoverArtHidden;
-(char)showActivityView;
-(void)setPlaceholderImageView:(UIImageView *)arg1 ;
-(void)setVideoSurfaceView:(UIView*<SPTVideoSurface>)arg1 ;
-(UIButton *)accessoryButton;
-(void)setTransitioning:(char)arg1 ;
-(void)setFullscreen:(char)arg1 ;
-(void)setDelegate:(id<SPTNowPlayingCoverArtViewCellDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<SPTNowPlayingCoverArtViewCellDelegate>)delegate;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)setSelected:(char)arg1 ;
-(char)isTransitioning;
-(char)selected;
-(UIImage *)placeholderImage;
-(CGSize)cellSize;
-(SPTNowPlayingCarouselGradientView *)gradientView;
-(UIActivityIndicatorView *)activityView;
-(void)setActivityView:(UIActivityIndicatorView *)arg1 ;
-(void)setCellSize:(CGSize)arg1 ;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
@end

