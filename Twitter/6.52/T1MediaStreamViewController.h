/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:36 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <TFNUI/TFNDataViewController.h>
#import <Twitter/T1StatusMediaHandlerSlideshowPresenter.h>
#import <Twitter/TFNTwitterAuthenticated.h>
#import <Twitter/T1SlideshowViewControllerDelegate.h>
#import <Twitter/T1SlideshowViewControllerLoadingDelegate.h>
#import <Twitter/TFNImageTransitionDelegate.h>
#import <Twitter/T1MediaSearchCellDelegate.h>
#import <Twitter/T1FreshContentIndicatorViewDelegate.h>
#import <Twitter/TFNTwitterCompositionSource.h>

@class NSArray, T1FreshContentIndicatorView, T1StatusMediaHandler, TFNTwitterAccount, TFNTwitterStream, TFNTwitterScribeContext, T1SlideshowViewController, T1StatusDynamicAdsPrefetcher, NSString;

@interface T1MediaStreamViewController : TFNDataViewController <T1StatusMediaHandlerSlideshowPresenter, TFNTwitterAuthenticated, T1SlideshowViewControllerDelegate, T1SlideshowViewControllerLoadingDelegate, TFNImageTransitionDelegate, T1MediaSearchCellDelegate, T1FreshContentIndicatorViewDelegate, TFNTwitterCompositionSource> {

	char _isStreamLoadedOnce;
	NSArray* _mediaInfos;
	NSArray* _rows;
	float _targetRatio;
	CGPoint _freshContentOffset;
	T1FreshContentIndicatorView* _freshContentView;
	char _showsSearchButton;
	char _presentsSlideShow;
	char _showsUpdateIndicator;
	char _supportsInfiniteScrollingSlideshow;
	char _supportsMultipleStatusesPerRow;
	char _supportsSmartCropping;
	char _slideLoaderHasUpdatedStream;
	T1StatusMediaHandler* _mediaHandler;
	TFNTwitterAccount* _account;
	TFNTwitterStream* _stream;
	TFNTwitterScribeContext* _scribeContext;
	unsigned _freshCount;
	T1SlideshowViewController* _slideLoaderSlideshow;
	/*^block*/id _slideLoaderCompletionBlock;
	T1StatusDynamicAdsPrefetcher* _dynamicAdsPrefetcher;

}

@property (assign,nonatomic) unsigned freshCount;                                                  //@synthesize freshCount=_freshCount - In the implementation block
@property (assign,nonatomic,__weak) T1SlideshowViewController * slideLoaderSlideshow;              //@synthesize slideLoaderSlideshow=_slideLoaderSlideshow - In the implementation block
@property (nonatomic,copy) id slideLoaderCompletionBlock;                                          //@synthesize slideLoaderCompletionBlock=_slideLoaderCompletionBlock - In the implementation block
@property (assign,nonatomic) char slideLoaderHasUpdatedStream;                                     //@synthesize slideLoaderHasUpdatedStream=_slideLoaderHasUpdatedStream - In the implementation block
@property (nonatomic,readonly) T1StatusMediaHandler * mediaHandler;                                //@synthesize mediaHandler=_mediaHandler - In the implementation block
@property (nonatomic,readonly) T1StatusDynamicAdsPrefetcher * dynamicAdsPrefetcher;                //@synthesize dynamicAdsPrefetcher=_dynamicAdsPrefetcher - In the implementation block
@property (nonatomic,retain) TFNTwitterAccount * account;                                          //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) TFNTwitterStream * stream;                                            //@synthesize stream=_stream - In the implementation block
@property (nonatomic,retain) TFNTwitterScribeContext * scribeContext;                              //@synthesize scribeContext=_scribeContext - In the implementation block
@property (assign,nonatomic) char showsSearchButton;                                               //@synthesize showsSearchButton=_showsSearchButton - In the implementation block
@property (assign,nonatomic) char presentsSlideShow;                                               //@synthesize presentsSlideShow=_presentsSlideShow - In the implementation block
@property (assign,nonatomic) char showsUpdateIndicator;                                            //@synthesize showsUpdateIndicator=_showsUpdateIndicator - In the implementation block
@property (assign,nonatomic) char supportsInfiniteScrollingSlideshow;                              //@synthesize supportsInfiniteScrollingSlideshow=_supportsInfiniteScrollingSlideshow - In the implementation block
@property (assign,nonatomic) char supportsMultipleStatusesPerRow;                                  //@synthesize supportsMultipleStatusesPerRow=_supportsMultipleStatusesPerRow - In the implementation block
@property (assign,nonatomic) char supportsSmartCropping;                                           //@synthesize supportsSmartCropping=_supportsSmartCropping - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)scribePage;
-(TFNTwitterScribeContext *)scribeContext;
-(id)scribeSection;
-(id)scribeComponent;
-(void)setScribeContext:(TFNTwitterScribeContext *)arg1 ;
-(void)_streamDidUpdate:(id)arg1 ;
-(void)setShowsSearchButton:(char)arg1 ;
-(id)scribeImpressionParameters;
-(void)setShowsUpdateIndicator:(char)arg1 ;
-(void)setPresentsSlideShow:(char)arg1 ;
-(void)setSupportsMultipleStatusesPerRow:(char)arg1 ;
-(void)setSupportsSmartCropping:(char)arg1 ;
-(void)setSupportsMultipleStatusesPerRow:(char)arg1 updateRows:(char)arg2 ;
-(void)setSlideLoaderHasUpdatedStream:(char)arg1 ;
-(char)slideLoaderHasUpdatedStream;
-(void)_slideLoaderCompleted;
-(void)setSlideLoaderCompletionBlock:(id)arg1 ;
-(id)slideLoaderCompletionBlock;
-(char)slideshowCanRequestLoadingMoreSlides:(id)arg1 ;
-(void)slideshowDidRequestLoadingMoreSlides:(id)arg1 completion:(/*^block*/id)arg2 ;
-(T1StatusMediaHandler *)mediaHandler;
-(CGRect)imageTransitionViewController:(id)arg1 previewImageFrameInWindow:(id)arg2 forObject:(id)arg3 ;
-(void)setPreviewImageHidden:(char)arg1 forImageTransitionViewController:(id)arg2 object:(id)arg3 ;
-(void)imageTransitionViewController:(id)arg1 willTransition:(char)arg2 object:(id)arg3 ;
-(char)imageTransitionViewController:(id)arg1 previewImageFrameIsAspectFillForObject:(id)arg2 ;
-(CGRect)imageTransitionViewController:(id)arg1 previewImageContentsRectForObject:(id)arg2 ;
-(CGRect)imageTransitionViewController:(id)arg1 previewImageHostViewFrameInWindow:(id)arg2 forObject:(id)arg3 ;
-(void)slideshow:(id)arg1 didSelectStatus:(id)arg2 ;
-(void)slideshow:(id)arg1 didDeleteStatus:(id)arg2 ;
-(void)slideshow:(id)arg1 didSelectUser:(id)arg2 ;
-(void)slideshow:(id)arg1 dismissAndPresentViewController:(id)arg2 ;
-(void)slideshow:(id)arg1 didSelectSticker:(id)arg2 ;
-(id)presentSlideshowFromPlayerViewContainerCell:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)showsSearchButton;
-(T1StatusDynamicAdsPrefetcher *)dynamicAdsPrefetcher;
-(void)didTapFreshContentIndicatorView:(id)arg1 ;
-(void)freshContentIndicatorViewDidHide:(id)arg1 ;
-(char)showsUpdateIndicator;
-(void)_didReportStatusAsSpam:(id)arg1 ;
-(void)_reloadAllRowsUpdatingMediaInfos:(char)arg1 ;
-(float)_targetAspectRatioForWidth:(float)arg1 ;
-(char)supportsSmartCropping;
-(char)supportsMultipleStatusesPerRow;
-(id)_rowsWithMediaPreviewInfos:(id)arg1 ;
-(unsigned)_numberOfMediaInfosInRows;
-(void)_showFreshContentIndicatorAutohide:(char)arg1 ;
-(id)_presentSlideshowFromMediaPreviewInfo:(id)arg1 atIndexPath:(id)arg2 completion:(/*^block*/id)arg3 ;
-(char)_shouldDisplayActivityViewControllerForMediaPreviewInfo:(id)arg1 ;
-(char)_canLoadBottom;
-(char)_loadBottom;
-(void)_resetFreshContentOffset;
-(id)_slideshowMediaPreviewInfos;
-(id)_indexPathForMediaPreviewInfo:(id)arg1 ;
-(id)_generateSlideshowDataSource;
-(void)setSlideLoaderSlideshow:(T1SlideshowViewController *)arg1 ;
-(char)supportsInfiniteScrollingSlideshow;
-(T1SlideshowViewController *)slideLoaderSlideshow;
-(void)_scribeStreamResultsForMediaPreviewInfos:(id)arg1 ;
-(void)mediaSearchCell:(id)arg1 didTapMediaPreviewInfo:(id)arg2 ;
-(void)mediaSearchCell:(id)arg1 didLongPress:(id)arg2 mediaPreviewInfo:(id)arg3 ;
-(void)_scribeStreamResultsForRows:(id)arg1 ;
-(char)presentsSlideShow;
-(void)setSupportsInfiniteScrollingSlideshow:(char)arg1 ;
-(unsigned)freshCount;
-(void)setFreshCount:(unsigned)arg1 ;
-(void)loadTop:(id)arg1 ;
-(char)isLoadingTop;
-(id)indexPathForItem:(id)arg1 ;
-(id)indexPathForElementWithScrollPositionIdentifier:(id)arg1 inView:(id)arg2 ;
-(id)scrollPositionIdentifierForElementAtIndexPath:(id)arg1 inView:(id)arg2 ;
-(id)scribe;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)update:(char)arg1 ;
-(id)composition;
-(void)setStream:(TFNTwitterStream *)arg1 ;
-(TFNTwitterStream *)stream;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(TFNTwitterAccount *)account;
-(id)itemAtIndexPath:(id)arg1 ;
@end

