/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:32 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TFNUI/TFNViewController.h>
#import <Twitter/TFNPagingViewControllerDataSource.h>
#import <Twitter/TFNPagingViewControllerDelegate.h>
#import <Twitter/T1MomentsTutorialPageViewControllerDelegate.h>

@class TFNPagingViewController, UIPageControl, UIButton, NSArray, UIView, NSString;

@interface T1MomentsTutorialViewController : TFNViewController <TFNPagingViewControllerDataSource, TFNPagingViewControllerDelegate, T1MomentsTutorialPageViewControllerDelegate> {

	TFNPagingViewController* _pageViewController;
	UIPageControl* _pageControl;
	UIButton* _closeButton;
	NSArray* _childPageViewControllers;
	NSArray* _pageColors;
	UIView* _contentView;

}

@property (nonatomic,retain) TFNPagingViewController * pageViewController;              //@synthesize pageViewController=_pageViewController - In the implementation block
@property (nonatomic,retain) UIPageControl * pageControl;                               //@synthesize pageControl=_pageControl - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                                    //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) NSArray * childPageViewControllers;                        //@synthesize childPageViewControllers=_childPageViewControllers - In the implementation block
@property (nonatomic,retain) NSArray * pageColors;                                      //@synthesize pageColors=_pageColors - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                      //@synthesize contentView=_contentView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_closeButtonImage;
-(NSArray *)childPageViewControllers;
-(void)setChildPageViewControllers:(NSArray *)arg1 ;
-(int)numberOfPagesInPagingViewController:(id)arg1 ;
-(id)pagingViewController:(id)arg1 viewControllerAtIndex:(int)arg2 ;
-(void)pagingViewController:(id)arg1 didUpdateVisiblePercent:(float)arg2 onPageAtIndex:(int)arg3 ;
-(id)initWithPages:(id)arg1 ;
-(void)_closeButtonTapped:(id)arg1 ;
-(void)momentsTutorialPageViewControllerDidTapActionButton:(id)arg1 ;
-(NSArray *)pageColors;
-(void)setPageColors:(NSArray *)arg1 ;
-(void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1 ;
-(void)setPageControl:(UIPageControl *)arg1 ;
-(void)setCloseButton:(UIButton *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)prefersStatusBarHidden;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(UIPageControl *)pageControl;
-(void)setPageViewController:(TFNPagingViewController *)arg1 ;
-(TFNPagingViewController *)pageViewController;
-(UIButton *)closeButton;
@end

