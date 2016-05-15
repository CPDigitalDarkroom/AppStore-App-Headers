/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:45 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <Twitter/TFNCanvasTransitionAnimatorDelegate.h>

@class UIToolbar, TFNCustomHitTestView, TFNCanvasTransitionAnimator, TFNCanvasViewController, NSString;

@interface TFNCanvasNavigationController : UINavigationController <TFNCanvasTransitionAnimatorDelegate> {

	UIToolbar* _toolbar;
	float _navigationBarHeight;
	float _toolbarHeight;
	int _lastKnownOrientation;
	char _shouldDeferOrientationUpdate;
	char _rotating;
	TFNCustomHitTestView* _chromeContainerView;
	TFNCanvasTransitionAnimator* _animator;

}

@property (nonatomic,retain) TFNCustomHitTestView * chromeContainerView;                    //@synthesize chromeContainerView=_chromeContainerView - In the implementation block
@property (nonatomic,retain) TFNCanvasTransitionAnimator * animator;                        //@synthesize animator=_animator - In the implementation block
@property (assign,nonatomic) char shouldDeferOrientationUpdate;                             //@synthesize shouldDeferOrientationUpdate=_shouldDeferOrientationUpdate - In the implementation block
@property (assign,getter=isRotating,nonatomic) char rotating;                               //@synthesize rotating=_rotating - In the implementation block
@property (nonatomic,readonly) TFNCanvasViewController * canvasViewController; 
@property (nonatomic,readonly) unsigned chromeAnimationPurpose; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setupToolbar;
-(void)_setupContainedToolbar;
-(TFNCanvasViewController *)canvasViewController;
-(void)setShouldDeferOrientationUpdate:(char)arg1 ;
-(char)shouldDeferOrientationUpdate;
-(void)_deviceOrientationDidChange;
-(void)_setupNavigationBar;
-(void)_canvasOrientationWillChange:(id)arg1 ;
-(void)_canvasOrientationDidChange:(id)arg1 ;
-(unsigned)chromeAnimationPurpose;
-(TFNCustomHitTestView *)chromeContainerView;
-(char)animator:(id)arg1 shouldAnimateContainedView:(id)arg2 ;
-(void)setChromeContainerView:(TFNCustomHitTestView *)arg1 ;
-(id)animator:(id)arg1 transitionViewForPurpose:(unsigned)arg2 ;
-(char)animator:(id)arg1 shouldAnimateChrome:(id)arg2 ;
-(char)animator:(id)arg1 shouldHideChromeAfterDelay:(id)arg2 ;
-(void)presentFromViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(void)awakeFromNib;
-(char)isRotating;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(id)toolbar;
-(void)setNavigationBarHidden:(char)arg1 animated:(char)arg2 ;
-(void)setToolbarHidden:(char)arg1 animated:(char)arg2 ;
-(void)setAnimator:(TFNCanvasTransitionAnimator *)arg1 ;
-(void)setRotating:(char)arg1 ;
-(TFNCanvasTransitionAnimator *)animator;
-(void)dismissAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
@end

