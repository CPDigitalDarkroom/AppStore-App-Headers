/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:50 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Spotify/SPTThemableView.h>
#import <Spotify/SPTThemableViewLayoutDelegate.h>

@protocol SPTThemableViewLayoutDelegate, SPTEntityTableHeaderViewNavigationBarProvider, SPTEntityTableHeaderViewDelegate;
@class UIView, UIImageView, SPTBadgeView, SPTActionButton, NSArray, UIButton, UITableView, SPTEntityTableHeaderBackgroundView, UITapGestureRecognizer, UILabel, UIScrollView, UIPageControl, CALayer, SPTUIBlurView, SPTEntityStickyHeaderView, UIImage, NSString, NSAttributedString;

@interface SPTEntityTableHeaderView : UIView <UIScrollViewDelegate, SPTThemableView, SPTThemableViewLayoutDelegate> {

	char _primaryActionButtonEnabled;
	char _shouldChangeBackgroundBlurOnScroll;
	char _shouldExpandBottomView;
	char _shouldOverlayImageWhenTapped;
	char _shouldEnterStickyMode;
	char _topViewActive;
	char _bottomViewExpanded;
	char _shouldDisplayMetadataLabelAboveTitleAccessoryView;
	char _sticky;
	char _shouldHideStatusViewsWhenUnblurring;
	char _shouldUseBigImages;
	char _animatingTopView;
	char _shouldOnlyAdjustLayoutForPositiveYOffset;
	char _layoutWithoutPrimaryAction;
	id<SPTThemableViewLayoutDelegate> _layoutDelegate;
	UIView* _topView;
	UIImageView* _imageView;
	int _imageStyle;
	UIImageView* _sponsoredImageView;
	SPTBadgeView* _imageBadgeView;
	UIView* _titleAccessoryView;
	SPTActionButton* _primaryActionButton;
	NSArray* _alternateViews;
	UIButton* _topRightAccessoryButton;
	id<SPTEntityTableHeaderViewNavigationBarProvider> _navigationBarProvider;
	id<SPTEntityTableHeaderViewDelegate> _delegate;
	UITableView* _tableView;
	int _size;
	SPTEntityTableHeaderBackgroundView* _backgroundView;
	UIView* _imageWrapperView;
	UITapGestureRecognizer* _imageViewGestureRecognizer;
	UILabel* _mainTitleLabel;
	UILabel* _metadataLabel;
	UIView* _firstPageView;
	UIView* _pageScrollViewContainer;
	UIScrollView* _pageScrollView;
	UIPageControl* _pageControl;
	UIView* _bottomLineContainerView;
	CALayer* _bottomViewColorLayer;
	CALayer* _bottomLineLayer;
	SPTUIBlurView* _overlayView;
	UIImageView* _overlayImageView;
	id _overlayStatusBarOrientationNotification;
	SPTEntityStickyHeaderView* _stickyHeaderView;
	CGPoint _tableContentOffset;

}

@property (nonatomic,retain) UIView * topView;                                                                            //@synthesize topView=_topView - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIImageView * imageView;                                                                     //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) int imageStyle;                                                                              //@synthesize imageStyle=_imageStyle - In the implementation block
@property (assign,nonatomic) int imageContentMode; 
@property (nonatomic,retain) UIImageView * sponsoredImageView;                                                            //@synthesize sponsoredImageView=_sponsoredImageView - In the implementation block
@property (nonatomic,retain) SPTBadgeView * imageBadgeView;                                                               //@synthesize imageBadgeView=_imageBadgeView - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * alternateTitle; 
@property (nonatomic,copy) NSString * metadataText; 
@property (nonatomic,copy) NSAttributedString * metadataAttributedText; 
@property (nonatomic,retain) UIView * titleAccessoryView;                                                                 //@synthesize titleAccessoryView=_titleAccessoryView - In the implementation block
@property (nonatomic,retain) SPTActionButton * primaryActionButton;                                                       //@synthesize primaryActionButton=_primaryActionButton - In the implementation block
@property (assign,getter=isPrimaryActionButtonEnabled,nonatomic) char primaryActionButtonEnabled;                         //@synthesize primaryActionButtonEnabled=_primaryActionButtonEnabled - In the implementation block
@property (nonatomic,retain) NSArray * alternateViews;                                                                    //@synthesize alternateViews=_alternateViews - In the implementation block
@property (assign,nonatomic) char shouldChangeBackgroundBlurOnScroll;                                                     //@synthesize shouldChangeBackgroundBlurOnScroll=_shouldChangeBackgroundBlurOnScroll - In the implementation block
@property (assign,nonatomic) char shouldExpandBottomView;                                                                 //@synthesize shouldExpandBottomView=_shouldExpandBottomView - In the implementation block
@property (assign,nonatomic) char shouldOverlayImageWhenTapped;                                                           //@synthesize shouldOverlayImageWhenTapped=_shouldOverlayImageWhenTapped - In the implementation block
@property (assign,nonatomic) char shouldEnterStickyMode;                                                                  //@synthesize shouldEnterStickyMode=_shouldEnterStickyMode - In the implementation block
@property (assign,getter=topViewIsActive,nonatomic) char topViewActive;                                                   //@synthesize topViewActive=_topViewActive - In the implementation block
@property (assign,getter=bottomViewIsExpanded,nonatomic) char bottomViewExpanded;                                         //@synthesize bottomViewExpanded=_bottomViewExpanded - In the implementation block
@property (assign,nonatomic) char shouldDisplayMetadataLabelAboveTitleAccessoryView;                                      //@synthesize shouldDisplayMetadataLabelAboveTitleAccessoryView=_shouldDisplayMetadataLabelAboveTitleAccessoryView - In the implementation block
@property (assign,getter=isSticky,nonatomic) char sticky;                                                                 //@synthesize sticky=_sticky - In the implementation block
@property (nonatomic,readonly) float stickyModeThreshold; 
@property (nonatomic,retain) UIButton * topRightAccessoryButton;                                                          //@synthesize topRightAccessoryButton=_topRightAccessoryButton - In the implementation block
@property (assign,nonatomic) char shouldHideStatusViewsWhenUnblurring;                                                    //@synthesize shouldHideStatusViewsWhenUnblurring=_shouldHideStatusViewsWhenUnblurring - In the implementation block
@property (assign,nonatomic,__weak) id<SPTEntityTableHeaderViewNavigationBarProvider> navigationBarProvider;              //@synthesize navigationBarProvider=_navigationBarProvider - In the implementation block
@property (nonatomic,readonly) CGSize imageViewSize; 
@property (nonatomic,readonly) CGSize backgroundImageViewSize; 
@property (assign,nonatomic) char shouldUseBigImages;                                                                     //@synthesize shouldUseBigImages=_shouldUseBigImages - In the implementation block
@property (assign,nonatomic,__weak) id<SPTEntityTableHeaderViewDelegate> delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UITableView * tableView;                                                              //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) int size;                                                                                    //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) CGPoint tableContentOffset;                                                                  //@synthesize tableContentOffset=_tableContentOffset - In the implementation block
@property (nonatomic,retain) SPTEntityTableHeaderBackgroundView * backgroundView;                                         //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * imageWrapperView;                                                                   //@synthesize imageWrapperView=_imageWrapperView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * imageViewGestureRecognizer;                                         //@synthesize imageViewGestureRecognizer=_imageViewGestureRecognizer - In the implementation block
@property (nonatomic,retain) UILabel * mainTitleLabel;                                                                    //@synthesize mainTitleLabel=_mainTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * metadataLabel;                                                                     //@synthesize metadataLabel=_metadataLabel - In the implementation block
@property (nonatomic,retain) UIView * firstPageView;                                                                      //@synthesize firstPageView=_firstPageView - In the implementation block
@property (nonatomic,retain) UIView * pageScrollViewContainer;                                                            //@synthesize pageScrollViewContainer=_pageScrollViewContainer - In the implementation block
@property (nonatomic,retain) UIScrollView * pageScrollView;                                                               //@synthesize pageScrollView=_pageScrollView - In the implementation block
@property (nonatomic,retain) UIPageControl * pageControl;                                                                 //@synthesize pageControl=_pageControl - In the implementation block
@property (nonatomic,retain) UIView * bottomLineContainerView;                                                            //@synthesize bottomLineContainerView=_bottomLineContainerView - In the implementation block
@property (nonatomic,retain) CALayer * bottomViewColorLayer;                                                              //@synthesize bottomViewColorLayer=_bottomViewColorLayer - In the implementation block
@property (nonatomic,retain) CALayer * bottomLineLayer;                                                                   //@synthesize bottomLineLayer=_bottomLineLayer - In the implementation block
@property (assign,getter=isAnimatingTopView,nonatomic) char animatingTopView;                                             //@synthesize animatingTopView=_animatingTopView - In the implementation block
@property (assign,nonatomic) char shouldOnlyAdjustLayoutForPositiveYOffset;                                               //@synthesize shouldOnlyAdjustLayoutForPositiveYOffset=_shouldOnlyAdjustLayoutForPositiveYOffset - In the implementation block
@property (nonatomic,retain) SPTUIBlurView * overlayView;                                                                 //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) UIImageView * overlayImageView;                                                              //@synthesize overlayImageView=_overlayImageView - In the implementation block
@property (nonatomic,retain) id overlayStatusBarOrientationNotification;                                                  //@synthesize overlayStatusBarOrientationNotification=_overlayStatusBarOrientationNotification - In the implementation block
@property (nonatomic,retain) SPTEntityStickyHeaderView * stickyHeaderView;                                                //@synthesize stickyHeaderView=_stickyHeaderView - In the implementation block
@property (assign,nonatomic) char layoutWithoutPrimaryAction;                                                             //@synthesize layoutWithoutPrimaryAction=_layoutWithoutPrimaryAction - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SPTThemableViewLayoutDelegate> layoutDelegate;                                     //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
+(id)entityHeaderViewWithSize:(int)arg1 forTableView:(id)arg2 ;
-(void)applyThemeLayout;
-(void)setImageStyle:(int)arg1 ;
-(void)bouncePrimaryActionButton;
-(UIButton *)topRightAccessoryButton;
-(void)setShouldExpandBottomView:(char)arg1 ;
-(void)setPrimaryActionButton:(SPTActionButton *)arg1 ;
-(void)setShouldOverlayImageWhenTapped:(char)arg1 ;
-(void)setAlternateViews:(NSArray *)arg1 ;
-(void)tableViewContentOffsetChanged:(CGPoint)arg1 ;
-(SPTActionButton *)primaryActionButton;
-(NSString *)metadataText;
-(void)setMetadataText:(NSString *)arg1 ;
-(void)setTitleAccessoryView:(UIView *)arg1 ;
-(CGSize)backgroundImageViewSize;
-(void)setTopRightAccessoryButton:(UIButton *)arg1 ;
-(void)setMetadataLabel:(UILabel *)arg1 ;
-(UILabel *)metadataLabel;
-(void)setShouldEnterStickyMode:(char)arg1 ;
-(void)setNavigationBarProvider:(id<SPTEntityTableHeaderViewNavigationBarProvider>)arg1 ;
-(void)setShouldHideStatusViewsWhenUnblurring:(char)arg1 ;
-(CGSize)imageViewSize;
-(void)setPrimaryActionButtonEnabled:(char)arg1 ;
-(UIView *)titleAccessoryView;
-(void)setShouldChangeBackgroundBlurOnScroll:(char)arg1 ;
-(void)setImageBadgeView:(SPTBadgeView *)arg1 ;
-(int)imageStyle;
-(void)setShouldDisplayMetadataLabelAboveTitleAccessoryView:(char)arg1 ;
-(void)setMetadataAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)metadataAttributedText;
-(void)collapse;
-(char)isPrimaryActionButtonEnabled;
-(float)stickyModeThreshold;
-(CGRect)frameForImageView;
-(UIImageView *)sponsoredImageView;
-(char)shouldEnterStickyMode;
-(CGRect)setTopViewActive:(char)arg1 animated:(char)arg2 ;
-(void)setBottomViewExpanded:(char)arg1 ;
-(UIView *)firstPageView;
-(void)setShouldUseBigImages:(char)arg1 ;
-(UIView *)imageWrapperView;
-(CGRect)frameForImageWrapperView;
-(UILabel *)mainTitleLabel;
-(char)shouldDisplayMetadataLabelAboveTitleAccessoryView;
-(CGRect)frameForTitleAccessoryView;
-(CGRect)frameForMainTitleLabel;
-(CGRect)frameForMetadataLabel;
-(UIView *)bottomLineContainerView;
-(float)heightForEntityHeaderViewSize:(int)arg1 ;
-(CALayer *)bottomLineLayer;
-(void)setBottomLineLayer:(CALayer *)arg1 ;
-(id)initWithSize:(int)arg1 tableView:(id)arg2 ;
-(CGRect)adjustFrameAccordingToStateAnimated:(char)arg1 origin:(CGPoint)arg2 completion:(/*^block*/id)arg3 ;
-(void)adjustTableViewContentInsetAccordingToState;
-(void)setupStickyHeader;
-(SPTEntityStickyHeaderView *)stickyHeaderView;
-(CGPoint)tableContentOffset;
-(void)resetMaskForSPTImageStyle;
-(void)updateMainTitleLabelTextWithTitle:(id)arg1 ;
-(CALayer *)bottomViewColorLayer;
-(void)setLayoutWithoutPrimaryAction:(char)arg1 ;
-(unsigned)numberOfPagesForScrollView;
-(UIScrollView *)pageScrollView;
-(char)bottomViewIsExpanded;
-(UITapGestureRecognizer *)imageViewGestureRecognizer;
-(void)setImageViewGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)imageViewTapped;
-(CGRect)frameForBackgroundImageContainerView;
-(NSArray *)alternateViews;
-(void)stickyHeaderViewButtonTapped;
-(UIView *)pageScrollViewContainer;
-(CGRect)frameForScrollViewContainerView;
-(char)topViewIsActive;
-(CGRect)frameForTopView;
-(CGRect)frameForSponsoredImageView;
-(CGRect)frameForPageControl;
-(CGRect)frameForBottomLineContainerView;
-(CGRect)frameForPrimaryActionButton;
-(CGRect)frameForBottomLineLayer;
-(CGRect)frameForBottomGradientLayer;
-(SPTBadgeView *)imageBadgeView;
-(CGRect)frameForStickyHeaderView;
-(CGRect)frameForTopRightAccessoryButton;
-(void)setTableContentOffset:(CGPoint)arg1 ;
-(void)setShouldOnlyAdjustLayoutForPositiveYOffset:(char)arg1 ;
-(char)shouldOnlyAdjustLayoutForPositiveYOffset;
-(char)isAnimatingTopView;
-(void)setAnimatingTopView:(char)arg1 ;
-(char)shouldChangeBackgroundBlurOnScroll;
-(char)shouldHideStatusViewsWhenUnblurring;
-(id<SPTEntityTableHeaderViewNavigationBarProvider>)navigationBarProvider;
-(char)layoutWithoutPrimaryAction;
-(float)topViewExtraHeight;
-(char)shouldUseBigImages;
-(void)setStickyHeaderView:(SPTEntityStickyHeaderView *)arg1 ;
-(id)actionButtonForStickyHeader;
-(void)overlayViewDismissedWithRecognizer:(id)arg1 ;
-(UIImageView *)overlayImageView;
-(void)setOverlayImageView:(UIImageView *)arg1 ;
-(void)updateOverlayOrientation;
-(void)setOverlayStatusBarOrientationNotification:(id)arg1 ;
-(id)overlayStatusBarOrientationNotification;
-(void)setTopViewActive:(char)arg1 ;
-(void)enablePageScrolling:(char)arg1 ;
-(void)setSponsoredImageView:(UIImageView *)arg1 ;
-(char)shouldExpandBottomView;
-(char)shouldOverlayImageWhenTapped;
-(void)setImageWrapperView:(UIView *)arg1 ;
-(void)setMainTitleLabel:(UILabel *)arg1 ;
-(void)setFirstPageView:(UIView *)arg1 ;
-(void)setPageScrollViewContainer:(UIView *)arg1 ;
-(void)setPageScrollView:(UIScrollView *)arg1 ;
-(void)setBottomLineContainerView:(UIView *)arg1 ;
-(void)setBottomViewColorLayer:(CALayer *)arg1 ;
-(void)setPageControl:(UIPageControl *)arg1 ;
-(id<SPTThemableViewLayoutDelegate>)layoutDelegate;
-(void)setLayoutDelegate:(id<SPTThemableViewLayoutDelegate>)arg1 ;
-(int)imageContentMode;
-(void)setImageContentMode:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(int)size;
-(void)setImage:(UIImage *)arg1 ;
-(void)setDelegate:(id<SPTEntityTableHeaderViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<SPTEntityTableHeaderViewDelegate>)delegate;
-(NSString *)title;
-(UIImage *)image;
-(void)setSize:(int)arg1 ;
-(UIImage *)backgroundImage;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setBackgroundView:(SPTEntityTableHeaderBackgroundView *)arg1 ;
-(SPTEntityTableHeaderBackgroundView *)backgroundView;
-(UIImageView *)imageView;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(UIView *)topView;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIPageControl *)pageControl;
-(void)setSticky:(char)arg1 ;
-(void)setTopView:(UIView *)arg1 ;
-(CGRect)frameForScrollView;
-(char)isSticky;
-(void)setOverlayView:(SPTUIBlurView *)arg1 ;
-(SPTUIBlurView *)overlayView;
-(NSString *)alternateTitle;
-(void)setAlternateTitle:(NSString *)arg1 ;
@end

