/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:19 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIViewController.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/HMAnimatedTransitionDelegate.h>
#import <UIKit/UINavigationBarDelegate.h>

@protocol UINavigationControllerDelegate;
@class UIViewController, HMAnimatedPushTransition, UINavigationBar, NSMutableArray, NSArray, NSString;

@interface HMNavigationController : UIViewController <HMAnimatedTransitionDelegate, UINavigationBarDelegate> {

	Class _navigationBarClass;
	Class _toolbarClass;
	UIViewController* _rootViewController;
	HMAnimatedPushTransition* _animatedTransition;
	UINavigationBar* _navigationBar;
	NSMutableArray* _navigationBarItems;
	NSMutableArray* _viewControllers;
	char _navigationBarHidden;
	id<UINavigationControllerDelegate> _delegate;

}

@property (nonatomic,readonly) UIViewController * topViewController; 
@property (nonatomic,readonly) UIViewController * visibleViewController; 
@property (nonatomic,readonly) NSArray * viewControllers; 
@property (nonatomic,readonly) UINavigationBar * navigationBar; 
@property (assign,getter=isNavigationBarHidden,nonatomic) char navigationBarHidden;              //@synthesize navigationBarHidden=_navigationBarHidden - In the implementation block
@property (assign,nonatomic,__weak) id<UINavigationControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setupNavigationBar;
-(char)hasOngoingTransition;
-(void)_adjustScrollViewInsetsForViewController:(id)arg1 ;
-(UIEdgeInsets)_scrollViewInsetsForViewController:(id)arg1 ;
-(id)transitionContextForTransitionType:(unsigned)arg1 animated:(char)arg2 ;
-(CGRect)_destinationFrameForViewController:(id)arg1 ;
-(void)_pushNavigationItemForViewController:(id)arg1 animated:(char)arg2 ;
-(void)_prepareViewControllerForDismissal:(id)arg1 animated:(char)arg2 ;
-(void)_popNavigationItemForViewController:(id)arg1 animated:(char)arg2 ;
-(void)_updateStatusBarForViewController:(id)arg1 animated:(char)arg2 ;
-(void)_cleanupAfterPresentationOfViewController:(id)arg1 ;
-(void)_addViewUnderneathViewController:(id)arg1 ;
-(void)_removeViewUnderneathViewController:(id)arg1 ;
-(void)_pushViewController:(id)arg1 animated:(char)arg2 withVelocity:(CGPoint)arg3 ;
-(void)_prepareViewControllerForPresentation:(id)arg1 animated:(char)arg2 ;
-(id)_popViewControllerAnimated:(char)arg1 withVelocity:(CGPoint)arg2 ;
-(void)_recursivelyRemoveAnimations:(id)arg1 ;
-(id)_navigationBarHidingAnimation;
-(char)animatedTransition:(id)arg1 shouldBeginForTransitionType:(unsigned)arg2 ;
-(id)transitionContextForTransitionType:(unsigned)arg1 ;
-(void)animatedTransition:(id)arg1 willBeginWithTransitionType:(unsigned)arg2 transitionContext:(id)arg3 ;
-(void)animatedTransition:(id)arg1 didEndWithTransitionType:(unsigned)arg2 transitionContext:(id)arg3 ;
-(void)animatedTransition:(id)arg1 willBeginInteractivelyWithTransitionType:(unsigned)arg2 transitionContext:(id)arg3 ;
-(void)_prepareRootViewController:(id)arg1 ;
-(void)setDelegate:(id<UINavigationControllerDelegate>)arg1 ;
-(id<UINavigationControllerDelegate>)delegate;
-(UINavigationBar *)navigationBar;
-(char)isNavigationBarHidden;
-(UIViewController *)topViewController;
-(id)popViewControllerAnimated:(char)arg1 ;
-(void)viewDidLayoutSubviews;
-(char)navigationBar:(id)arg1 shouldPopItem:(id)arg2 ;
-(void)viewDidLoad;
-(char)shouldAutomaticallyForwardAppearanceMethods;
-(void)pushViewController:(id)arg1 animated:(char)arg2 ;
-(UIViewController *)visibleViewController;
-(void)setViewControllers:(id)arg1 animated:(char)arg2 ;
-(void)setNavigationBarHidden:(char)arg1 animated:(char)arg2 ;
-(NSArray *)viewControllers;
-(id)popToViewController:(id)arg1 animated:(char)arg2 ;
-(id)initWithRootViewController:(id)arg1 ;
-(id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2 ;
-(void)setViewControllers:(NSArray *)arg1 ;
-(void)setNavigationBarHidden:(char)arg1 ;
-(id)popToRootViewControllerAnimated:(char)arg1 ;
@end

