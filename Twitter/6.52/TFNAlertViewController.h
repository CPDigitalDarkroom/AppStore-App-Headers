/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:53 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIViewController.h>
#import <Twitter/TFNDismissDelegate.h>

@protocol TFNDismissableView, TFNAlertViewControllerDelegate;
@class UIView, UIWindow, NSString, NSArray;

@interface TFNAlertViewController : UIViewController <TFNDismissDelegate> {

	UIView*<TFNDismissableView> _alertView;
	UIView* _backgroundView;
	char _didAppear;
	UIWindow* _backgroundWindow;
	id<TFNAlertViewControllerDelegate> _delegate;
	NSString* _headline;
	NSString* _descriptionMessage;
	NSArray* _items;
	UIView* _containerView;
	UIView* _overlayView;

}

@property (nonatomic,retain) NSString * headline;                                             //@synthesize headline=_headline - In the implementation block
@property (nonatomic,retain) NSString * descriptionMessage;                                   //@synthesize descriptionMessage=_descriptionMessage - In the implementation block
@property (nonatomic,retain) NSArray * items;                                                 //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) UIView * containerView;                                        //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,readonly) UIView * overlayView;                                          //@synthesize overlayView=_overlayView - In the implementation block
@property (assign,nonatomic,__weak) id<TFNAlertViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_animateOut;
-(void)dismissableViewDidDismiss:(id)arg1 ;
-(void)_setupModalTransition;
-(void)_layoutViewsWithinSize:(CGSize)arg1 animated:(char)arg2 ;
-(void)_teardownModalTransition;
-(void)_layoutViewsAnimated:(char)arg1 ;
-(id)initWithAlertView:(id)arg1 backgroundWindow:(id)arg2 ;
-(NSString *)descriptionMessage;
-(void)setDescriptionMessage:(NSString *)arg1 ;
-(void)setHeadline:(NSString *)arg1 ;
-(NSString *)headline;
-(void)setDelegate:(id<TFNAlertViewControllerDelegate>)arg1 ;
-(id<TFNAlertViewControllerDelegate>)delegate;
-(UIView *)containerView;
-(int)preferredStatusBarStyle;
-(char)prefersStatusBarHidden;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(int)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)dismiss:(id)arg1 ;
-(UIView *)overlayView;
@end

