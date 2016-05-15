/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:25 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <TFNUI/TFNViewController.h>
#import <Twitter/TFNZoomableImageViewZoomDelegate.h>
#import <Twitter/T1SlideshowUserListViewControllerDelegate.h>
#import <Twitter/TFNImageDisplayViewDownloadDelegate.h>
#import <Twitter/T1AmplifyUIEventHandlerDelegate.h>
#import <Twitter/T1StickerCanvasDelegate.h>
#import <Twitter/TFNTooltipViewDelegate.h>
#import <Twitter/T1StickerVariantPickerViewControllerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <TFNUI/TFNPresented.h>
#import <Twitter/TFNTwitterAuthenticated.h>
#import <TFNUI/TFNLayoutMetricsEnvironment.h>
#import <Twitter/TFNImageDisplayViewDelegate.h>
#import <Twitter/TFNDownloadMediaPlayerDelegate.h>
#import <Twitter/TFNTwitterAmplifyPlayerDelegate.h>

@protocol T1SlideshowViewControllerDataSource, T1SlideshowViewControllerDelegate, T1SlideshowViewControllerLoadingDelegate, TFNTwitterAVPlayerControllerSource;
@class UIView, T1SlideshowScrollView, TFNPaddedButton, TFNCustomHitTestView, T1SlideshowSlide, UIImageView, UILabel, CAGradientLayer, T1NativeCardActivityIndicatorView, UIViewController, TFNTwitterAccount, TFNTwitterScribeContext, T1SlideshowStatusView, UISwipeGestureRecognizer, TFNFullscreenMediaTransition, T1AmplifyUIEventHandler, NSString, TFNTwitterSearchStream, T1SlideshowMediaAssetRenderer, T1AnimatedGIFImageView, TFNTwitterStatus;

@interface T1SlideshowViewController : TFNViewController <TFNZoomableImageViewZoomDelegate, T1SlideshowUserListViewControllerDelegate, TFNImageDisplayViewDownloadDelegate, T1AmplifyUIEventHandlerDelegate, T1StickerCanvasDelegate, TFNTooltipViewDelegate, T1StickerVariantPickerViewControllerDelegate, UIScrollViewDelegate, UIPopoverControllerDelegate, TFNPresented, TFNTwitterAuthenticated, TFNLayoutMetricsEnvironment, TFNImageDisplayViewDelegate, TFNDownloadMediaPlayerDelegate, TFNTwitterAmplifyPlayerDelegate> {

	id<T1SlideshowViewControllerDataSource> _retainedDataSource;
	int _slideCount;
	UIView* _backgroundView;
	T1SlideshowScrollView* _scrollView;
	TFNPaddedButton* _closeButton;
	TFNCustomHitTestView* _topChromeView;
	UIView* _fullScreenRasterization;
	int _fullScreenRasterizationOrientation;
	T1SlideshowSlide* _prevSlide;
	T1SlideshowSlide* _nextSlide;
	UIImageView* _chevronImageView;
	UILabel* _swipeToDismissLabel;
	float _verticalScrollTrackingPercentCentered;
	CAGradientLayer* _tutorialViewGradientLayer;
	T1NativeCardActivityIndicatorView* _spinner;
	float _lastZoomScale;
	char _bottomChromeVisible;
	char _topChromeVisible;
	char _canRequestLoadingMoreSlides;
	UIViewController* _dismissingFromInHierarchyViewController;
	struct {
		unsigned statusViewNeedsUpdate : 1;
		unsigned topChromeNeedsUpdate : 1;
		unsigned dismissing : 1;
		unsigned dismissingFromSwipe : 1;
		unsigned sizeTransitioning : 1;
		unsigned statusViewShownBeforeSizeTransition : 1;
		unsigned topChromeHiddenBeforeSizeTransition : 1;
		unsigned chromesShownBeforeVerticalScroll : 1;
		unsigned chromesShownBeforeReload : 1;
		unsigned timelineStatusViewsDidUpdate : 1;
	}  _flags;
	char _displaySlideStatus;
	char _displaySlideStatusActions;
	char _notifyListenersBeforeDismissing;
	char _chromeIsVisible;
	char _didReturnPlayerToPlayerSource;
	TFNTwitterAccount* _account;
	id<T1SlideshowViewControllerDelegate> _delegate;
	id<T1SlideshowViewControllerLoadingDelegate> _loadingDelegate;
	id<T1SlideshowViewControllerDataSource> _dataSource;
	int _slideIndex;
	id<TFNTwitterAVPlayerControllerSource> _playerSource;
	TFNTwitterScribeContext* _scribeContext;
	int _cardDisplayMode;
	T1SlideshowSlide* _currentSlide;
	T1SlideshowStatusView* _statusView;
	UISwipeGestureRecognizer* _swipeUpGestureRecognizer;
	UISwipeGestureRecognizer* _swipeDownGestureRecognizer;
	TFNFullscreenMediaTransition* _transition;
	UIView* _tutorialView;
	T1AmplifyUIEventHandler* _amplifyActionHandler;
	NSString* _previousVideoGravity;
	TFNTwitterSearchStream* _relatedVideoSearchStream;
	T1SlideshowMediaAssetRenderer* _mediaAssetRenderer;
	T1AnimatedGIFImageView* _animatedGIFView;

}

@property (nonatomic,readonly) T1SlideshowSlide * currentSlide;                                                //@synthesize currentSlide=_currentSlide - In the implementation block
@property (nonatomic,readonly) T1SlideshowStatusView * statusView;                                             //@synthesize statusView=_statusView - In the implementation block
@property (nonatomic,readonly) UISwipeGestureRecognizer * swipeUpGestureRecognizer;                            //@synthesize swipeUpGestureRecognizer=_swipeUpGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UISwipeGestureRecognizer * swipeDownGestureRecognizer;                          //@synthesize swipeDownGestureRecognizer=_swipeDownGestureRecognizer - In the implementation block
@property (nonatomic,readonly) TFNFullscreenMediaTransition * transition;                                      //@synthesize transition=_transition - In the implementation block
@property (nonatomic,readonly) UIView * tutorialView;                                                          //@synthesize tutorialView=_tutorialView - In the implementation block
@property (nonatomic,retain) T1AmplifyUIEventHandler * amplifyActionHandler;                                   //@synthesize amplifyActionHandler=_amplifyActionHandler - In the implementation block
@property (assign,nonatomic) char didReturnPlayerToPlayerSource;                                               //@synthesize didReturnPlayerToPlayerSource=_didReturnPlayerToPlayerSource - In the implementation block
@property (nonatomic,retain) NSString * previousVideoGravity;                                                  //@synthesize previousVideoGravity=_previousVideoGravity - In the implementation block
@property (nonatomic,retain) TFNTwitterSearchStream * relatedVideoSearchStream;                                //@synthesize relatedVideoSearchStream=_relatedVideoSearchStream - In the implementation block
@property (nonatomic,readonly) T1SlideshowMediaAssetRenderer * mediaAssetRenderer;                             //@synthesize mediaAssetRenderer=_mediaAssetRenderer - In the implementation block
@property (assign,nonatomic,__weak) T1AnimatedGIFImageView * animatedGIFView;                                  //@synthesize animatedGIFView=_animatedGIFView - In the implementation block
@property (assign,nonatomic,__weak) id<T1SlideshowViewControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<TFNImageTransitionDelegate> transitionDelegate; 
@property (assign,nonatomic,__weak) id<T1SlideshowViewControllerLoadingDelegate> loadingDelegate;              //@synthesize loadingDelegate=_loadingDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<T1SlideshowViewControllerDataSource> dataSource;                        //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) int slideIndex;                                                                   //@synthesize slideIndex=_slideIndex - In the implementation block
@property (assign,nonatomic,__weak) id<TFNTwitterAVPlayerControllerSource> playerSource;                       //@synthesize playerSource=_playerSource - In the implementation block
@property (nonatomic,readonly) TFNTwitterStatus * slideStatus; 
@property (assign,nonatomic) char displaySlideStatus;                                                          //@synthesize displaySlideStatus=_displaySlideStatus - In the implementation block
@property (assign,nonatomic) char displaySlideStatusActions;                                                   //@synthesize displaySlideStatusActions=_displaySlideStatusActions - In the implementation block
@property (assign,nonatomic) char notifyListenersBeforeDismissing;                                             //@synthesize notifyListenersBeforeDismissing=_notifyListenersBeforeDismissing - In the implementation block
@property (nonatomic,retain) TFNTwitterScribeContext * scribeContext;                                          //@synthesize scribeContext=_scribeContext - In the implementation block
@property (assign,nonatomic) int cardDisplayMode;                                                              //@synthesize cardDisplayMode=_cardDisplayMode - In the implementation block
@property (assign,nonatomic) char chromeIsVisible;                                                             //@synthesize chromeIsVisible=_chromeIsVisible - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account;                                                      //@synthesize account=_account - In the implementation block
-(id)scribePage;
-(TFNTwitterScribeContext *)scribeContext;
-(id<TFNTwitterAVPlayerControllerSource>)playerSource;
-(void)setPreviousVideoGravity:(NSString *)arg1 ;
-(NSString *)previousVideoGravity;
-(id)scribeSection;
-(id)scribeComponent;
-(id)_transitionObject;
-(id)scribeElement;
-(void)setScribeContext:(TFNTwitterScribeContext *)arg1 ;
-(char)mediaPlayerShouldScrub:(id)arg1 ;
-(void)mediaPlayerDidBeginScrubbing:(id)arg1 ;
-(void)avPlayerController:(id)arg1 attachPlayerView:(id)arg2 animated:(char)arg3 ;
-(void)avPlayerController:(id)arg1 detachPlayerView:(id)arg2 animated:(char)arg3 ;
-(float)avPlayerController:(id)arg1 visibilityPercentageForPlayerView:(id)arg2 ;
-(void)avPlayerControllerReadyToPlay:(id)arg1 ;
-(void)avPlayerController:(id)arg1 didTapPlayerView:(id)arg2 ;
-(void)avPlayerController:(id)arg1 playbackDidProgressToTime:(double)arg2 ;
-(void)avPlayerControllerPlaybackDidPause:(id)arg1 ;
-(void)avPlayerControllerPlaybackDidStart:(id)arg1 ;
-(char)avPlayerControllerIsObscuredByOverlappingView:(id)arg1 ;
-(char)avPlayerControllerShouldHandleAudioRouteChanges:(id)arg1 ;
-(char)avPlayerControllerShouldResumeOnAudioRouteChanges:(id)arg1 ;
-(char)avPlayerControllerShouldManagePlayerVolume:(id)arg1 ;
-(id)scribeImpressionParameters;
-(void)stickerCanvas:(id)arg1 didTapSticker:(id)arg2 ;
-(void)stickerCanvas:(id)arg1 didTapStickers:(id)arg2 ;
-(void)_handleSwipeUp:(id)arg1 ;
-(void)_handleSwipeDown:(id)arg1 ;
-(void)setPlayerSource:(id<TFNTwitterAVPlayerControllerSource>)arg1 ;
-(void)setDataSource:(id)arg1 retain:(char)arg2 ;
-(void)setSlideIndex:(int)arg1 ;
-(void)setDisplaySlideStatus:(char)arg1 ;
-(char)didReturnPlayerToPlayerSource;
-(TFNTwitterSearchStream *)relatedVideoSearchStream;
-(void)reloadSlideshowData;
-(int)_maximumSlideIndex;
-(void)_configureSlides;
-(void)_updateSlideDisplayResettingOffset:(char)arg1 animateOffset:(char)arg2 animateStatus:(char)arg3 ;
-(id<T1SlideshowViewControllerLoadingDelegate>)loadingDelegate;
-(int)_maximumSlideIndexWithLoading:(char)arg1 ;
-(char)_chromesVisible;
-(char)_currentSlideIsLoading;
-(void)_configureSlide:(id)arg1 atIndex:(int)arg2 ;
-(void)_setStatusViewNeedsUpdateForDisplayedStatus:(id)arg1 displayedMedia:(id)arg2 displayedTagSet:(id)arg3 ;
-(T1SlideshowMediaAssetRenderer *)mediaAssetRenderer;
-(id)_imageForSlideAtIndex:(int)arg1 ;
-(id)_previewImageForSlideAtIndex:(int)arg1 ;
-(TFNTwitterStatus *)slideStatus;
-(void)_applyPlacedStickers:(id)arg1 toSlide:(id)arg2 ;
-(void)_updateStickerCanvasFrameForSlide:(id)arg1 ;
-(void)_animateStickersIfReadyWithDelay:(char)arg1 ;
-(void)_deactivateCurrentSlide;
-(void)_activateCurrentSlide;
-(void)_setChromesVisible:(char)arg1 topAnimated:(char)arg2 bottomAnimated:(char)arg3 ;
-(T1AnimatedGIFImageView *)animatedGIFView;
-(void)_setStatusViewContentVisible:(char)arg1 ;
-(void)_setTopChromeViewVisible:(char)arg1 move:(char)arg2 ;
-(void)_hideStickerCanvasForSlide:(id)arg1 ;
-(void)_dismissTooltip:(id)arg1 ifVisibleAnimated:(char)arg2 ;
-(void)_updateSlideIndex:(int)arg1 resettingOffset:(char)arg2 animateOffset:(char)arg3 animateStatus:(char)arg4 ;
-(char)_currentSlideCanShowSpinner;
-(void)_addSpinnerToView:(id)arg1 ;
-(void)_deactivateMediaAssetPlayers;
-(void)_activateCurrentSlidePlayer;
-(void)_checkHasRelatedVideosForStatus:(id)arg1 ;
-(void)_activateLoadingSpinnerSlide;
-(void)_playWithTwitterAVPlayerForCurrentSlide;
-(int)slideIndex;
-(void)_playAnimatedGIF:(id)arg1 ;
-(id)_newFullscreenPlayerControllerForCurrentSlide;
-(void)setAmplifyActionHandler:(T1AmplifyUIEventHandler *)arg1 ;
-(T1AmplifyUIEventHandler *)amplifyActionHandler;
-(id)_newFullscreenPlayerControllerForStatus:(id)arg1 ;
-(id)_newFullscreenPlayerControllerForMediaEntity:(id)arg1 ;
-(id)_newFullscreenPlayerControllerForMediaAsset:(id)arg1 ;
-(void)_configureAnimatedGIFView;
-(void)setAnimatedGIFView:(T1AnimatedGIFImageView *)arg1 ;
-(void)setRelatedVideoSearchStream:(TFNTwitterSearchStream *)arg1 ;
-(void)_relatedVideoSearchStreamDidUpdate:(id)arg1 ;
-(char)_shouldShowStatusViewContent;
-(UIView *)tutorialView;
-(void)setDidReturnPlayerToPlayerSource:(char)arg1 ;
-(CGAffineTransform)_transformForFullscreenRasterizationWithInterfaceOrientation:(int)arg1 ;
-(void)_closeAction:(id)arg1 ;
-(void)_didTapTag:(id)arg1 ;
-(void)_setUpStickerTooltip;
-(void)presentTaggedUserListView;
-(void)_cancelUserSwipeGesture;
-(void)_setTopChromeViewVisible:(char)arg1 animated:(char)arg2 ;
-(void)_setBottomChromeVisible:(char)arg1 animated:(char)arg2 tutorialVisible:(char)arg3 ;
-(void)_setChromesVisible:(char)arg1 topAnimated:(char)arg2 bottomAnimated:(char)arg3 tutorialVisible:(char)arg4 ;
-(void)setChromeIsVisible:(char)arg1 ;
-(void)_setStatusViewContentVisible:(char)arg1 tutorialVisible:(char)arg2 ;
-(void)_advanceOrDismissScrollView:(id)arg1 ;
-(int)_slideIndexForCurrentScrollContentOffset;
-(void)_dismissSlideshowFromSwipe;
-(void)_showStickerTooltip;
-(float)_backgroundViewAlphaForVerticalScrollWithPercentCentered:(float)arg1 ;
-(void)zoomScrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)zoomScrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3 ;
-(void)slideshowUserListViewController:(id)arg1 didSelectUser:(id)arg2 ;
-(void)imageDisplayView:(id)arg1 didFinishDownloadWithError:(id)arg2 ;
-(void)amplifyActionHandler:(id)arg1 dismissAndPresentViewController:(id)arg2 ;
-(void)stickerVariantPickerViewController:(id)arg1 didSelectSticker:(id)arg2 fromVariants:(id)arg3 ;
-(void)imageDisplayView:(id)arg1 didLongPress:(id)arg2 ;
-(void)amplifyPlayer:(id)arg1 videoTypeDidChangeFrom:(int)arg2 newVideoType:(int)arg3 ;
-(void)amplifyPlayerPlaybackDidComplete:(id)arg1 ;
-(void)amplifyPlayerWillLoopContentVideo:(id)arg1 ;
-(void)_tapAction:(id)arg1 gestureRecognizer:(id)arg2 ;
-(void)setLoadingDelegate:(id<T1SlideshowViewControllerLoadingDelegate>)arg1 ;
-(char)displaySlideStatus;
-(char)displaySlideStatusActions;
-(void)setDisplaySlideStatusActions:(char)arg1 ;
-(char)notifyListenersBeforeDismissing;
-(void)setNotifyListenersBeforeDismissing:(char)arg1 ;
-(int)cardDisplayMode;
-(void)setCardDisplayMode:(int)arg1 ;
-(char)chromeIsVisible;
-(UISwipeGestureRecognizer *)swipeUpGestureRecognizer;
-(UISwipeGestureRecognizer *)swipeDownGestureRecognizer;
-(void)layoutMetricsDidChange:(id)arg1 ;
-(void)presentFromViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(char)tooltipShouldShow:(id)arg1 ;
-(void)tfn_previewingStateDidChange;
-(void)tooltipDidTap:(id)arg1 ;
-(id)scribe;
-(T1SlideshowSlide *)currentSlide;
-(char)_hideLoadingIndicator;
-(void)_showSpinner;
-(void)_hideSpinner;
-(void)_setOverlaysVisible:(char)arg1 animated:(char)arg2 ;
-(void)setDataSource:(id<T1SlideshowViewControllerDataSource>)arg1 ;
-(void)setDelegate:(id<T1SlideshowViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<T1SlideshowViewControllerDataSource>)dataSource;
-(id<T1SlideshowViewControllerDelegate>)delegate;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(int)preferredStatusBarStyle;
-(char)prefersStatusBarHidden;
-(int)preferredStatusBarUpdateAnimation;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(TFNFullscreenMediaTransition *)transition;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(id<TFNImageTransitionDelegate>)transitionDelegate;
-(void)setTransitionDelegate:(id<TFNImageTransitionDelegate>)arg1 ;
-(char)accessibilityPerformEscape;
-(T1SlideshowStatusView *)statusView;
-(void)_tapAction:(id)arg1 ;
-(void)dismissAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithAccount:(id)arg1 ;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(TFNTwitterAccount *)account;
-(void)_dismissAnimated:(char)arg1 ;
@end

