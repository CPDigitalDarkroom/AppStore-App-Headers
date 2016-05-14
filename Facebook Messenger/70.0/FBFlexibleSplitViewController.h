/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:43 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIViewController.h>

@protocol FBFlexibleSplitViewControllerDelegate;
@class NSMutableSet, UIColor, UIViewController, UIView;

@interface FBFlexibleSplitViewController : UIViewController {

	NSMutableSet* _visibleViewControllers;
	UIColor* _defaultBackgroundColor;
	char _headerViewHidden;
	char _appearing;
	unsigned _state;
	CGSize _previousViewSize;
	NSMutableSet* _appearingViewControllers;
	NSMutableSet* _disappearingViewControllers;
	char _hasDivider;
	char _showColoredStatusBar;
	char _visible;
	UIViewController* _leftViewController;
	UIViewController* _rightViewController;
	UIView* _headerView;
	int _type;
	float _dividerExtensionHeight;
	int _expandPolicy;
	float _fixedControllerWidthForPortrait;
	float _fixedControllerWidthForLandscape;
	float _flexibleControllerWidthForPortrait;
	float _flexibleControllerWidthForLandscape;
	UIColor* _statusBarColor;
	UIColor* _leftContainerBackgroundColor;
	UIColor* _rightContainerBackgroundColor;
	id<FBFlexibleSplitViewControllerDelegate> _delegate;
	/*^block*/id _appearingCompletion;
	/*^block*/id _disappearingCompletion;
	/*^block*/id _rotatingCompletion;
	NSMutableSet* _rotatingViewControllers;

}

@property (nonatomic,copy) id appearingCompletion;                                                   //@synthesize appearingCompletion=_appearingCompletion - In the implementation block
@property (nonatomic,copy) id disappearingCompletion;                                                //@synthesize disappearingCompletion=_disappearingCompletion - In the implementation block
@property (nonatomic,copy) id rotatingCompletion;                                                    //@synthesize rotatingCompletion=_rotatingCompletion - In the implementation block
@property (nonatomic,retain) NSMutableSet * rotatingViewControllers;                                 //@synthesize rotatingViewControllers=_rotatingViewControllers - In the implementation block
@property (assign,nonatomic) char visible;                                                           //@synthesize visible=_visible - In the implementation block
@property (nonatomic,retain) UIViewController * leftViewController;                                  //@synthesize leftViewController=_leftViewController - In the implementation block
@property (nonatomic,retain) UIViewController * rightViewController;                                 //@synthesize rightViewController=_rightViewController - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                    //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) int type;                                                               //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char hasDivider;                                                        //@synthesize hasDivider=_hasDivider - In the implementation block
@property (assign,nonatomic) float dividerExtensionHeight;                                           //@synthesize dividerExtensionHeight=_dividerExtensionHeight - In the implementation block
@property (assign,nonatomic) int expandPolicy;                                                       //@synthesize expandPolicy=_expandPolicy - In the implementation block
@property (assign,nonatomic) float fixedControllerWidthForPortrait;                                  //@synthesize fixedControllerWidthForPortrait=_fixedControllerWidthForPortrait - In the implementation block
@property (assign,nonatomic) float fixedControllerWidthForLandscape;                                 //@synthesize fixedControllerWidthForLandscape=_fixedControllerWidthForLandscape - In the implementation block
@property (assign,nonatomic) float flexibleControllerWidthForPortrait;                               //@synthesize flexibleControllerWidthForPortrait=_flexibleControllerWidthForPortrait - In the implementation block
@property (assign,nonatomic) float flexibleControllerWidthForLandscape;                              //@synthesize flexibleControllerWidthForLandscape=_flexibleControllerWidthForLandscape - In the implementation block
@property (assign,nonatomic) char showColoredStatusBar;                                              //@synthesize showColoredStatusBar=_showColoredStatusBar - In the implementation block
@property (nonatomic,retain) UIColor * statusBarColor;                                               //@synthesize statusBarColor=_statusBarColor - In the implementation block
@property (nonatomic,retain) UIColor * leftContainerBackgroundColor;                                 //@synthesize leftContainerBackgroundColor=_leftContainerBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * rightContainerBackgroundColor;                                //@synthesize rightContainerBackgroundColor=_rightContainerBackgroundColor - In the implementation block
@property (assign,nonatomic,__weak) id<FBFlexibleSplitViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)analyticsPresentedViewController;
-(UIViewController *)rightViewController;
-(char)fb_showNavBarSearchField;
-(char)fb_deferSwipeToOpenLeftNav;
-(char)fb_swipeToOpenLeftNav;
-(UIColor *)statusBarColor;
-(void)setShowColoredStatusBar:(char)arg1 ;
-(void)setDividerExtensionHeight:(float)arg1 ;
-(void)setHasDivider:(char)arg1 ;
-(void)setStatusBarColor:(UIColor *)arg1 ;
-(float)dividerExtensionHeight;
-(char)hasDivider;
-(char)showColoredStatusBar;
-(id)_flexibleSplitView;
-(void)_hideViewController:(id)arg1 animated:(char)arg2 ;
-(id)_newVisibleViewControllersForOrientation:(int)arg1 ;
-(void)_showViewController:(id)arg1 animated:(char)arg2 ;
-(void)_updateFixedControllerWidthForContainer:(id)arg1 forOrientation:(int)arg2 withAnimation:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)setFixedControllerWidthForPortrait:(float)arg1 withAnimation:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)setFixedControllerWidthForLandscape:(float)arg1 withAnimation:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateFlexibleControllerWidthForContainer:(id)arg1 forOrientation:(int)arg2 ;
-(void)setExpandPolicy:(int)arg1 animated:(char)arg2 animationDuration:(double)arg3 ;
-(void)_applyExpandPolicyForOrientation:(int)arg1 animated:(char)arg2 duration:(double)arg3 ;
-(char)_expandFlexibleControllerForOrientation:(int)arg1 ;
-(char)_slideFlexibleControllerForOrientation:(int)arg1 ;
-(void)_notifyDelegateOfSizeChangeIfNeeded;
-(void)setAppearingCompletion:(id)arg1 ;
-(void)setDisappearingCompletion:(id)arg1 ;
-(void)setRotatingCompletion:(id)arg1 ;
-(void)setRotatingViewControllers:(NSMutableSet *)arg1 ;
-(void)_expandFlexibleController:(char)arg1 animated:(char)arg2 duration:(double)arg3 ;
-(char)_flexibleControllerExpanded;
-(void)_addViewControllersForOrientation:(int)arg1 toSet:(id)arg2 ;
-(UIViewController *)leftViewController;
-(void)setHeaderViewHidden:(char)arg1 alongsideTransition:(id)arg2 animation:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setLeftViewController:(UIViewController *)arg1 ;
-(void)setRightViewController:(UIViewController *)arg1 ;
-(void)setFixedControllerWidthForPortrait:(float)arg1 ;
-(void)setFixedControllerWidthForLandscape:(float)arg1 ;
-(void)setFlexibleControllerWidthForPortrait:(float)arg1 ;
-(void)setFlexibleControllerWidthForLandscape:(float)arg1 ;
-(void)setExpandPolicy:(int)arg1 ;
-(void)setLeftContainerBackgroundColor:(UIColor *)arg1 ;
-(void)setRightContainerBackgroundColor:(UIColor *)arg1 ;
-(void)setExpandFlexibleController:(char)arg1 ;
-(int)expandPolicy;
-(float)fixedControllerWidthForPortrait;
-(float)fixedControllerWidthForLandscape;
-(float)flexibleControllerWidthForPortrait;
-(float)flexibleControllerWidthForLandscape;
-(UIColor *)leftContainerBackgroundColor;
-(UIColor *)rightContainerBackgroundColor;
-(id)appearingCompletion;
-(id)disappearingCompletion;
-(id)rotatingCompletion;
-(NSMutableSet *)rotatingViewControllers;
-(void)setDelegate:(id<FBFlexibleSplitViewControllerDelegate>)arg1 ;
-(id)init;
-(id<FBFlexibleSplitViewControllerDelegate>)delegate;
-(unsigned)supportedInterfaceOrientations;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(char)visible;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)setVisible:(char)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(char)shouldAutomaticallyForwardRotationMethods;
-(char)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)setHeaderViewHidden:(char)arg1 animated:(char)arg2 ;
@end

