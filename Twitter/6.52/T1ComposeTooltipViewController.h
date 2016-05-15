/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:19 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <TFNUI/TFNViewController.h>
#import <Twitter/TFNTooltipViewDelegate.h>
#import <Twitter/TFNTwitterAuthenticated.h>

@protocol T1ComposeTooltipViewControllerDelegate;
@class T1ComposeTooltipRegistry, TFNTooltipView, UIView, NSMutableDictionary, UIButton, TFNTwitterAccount, T1ComposeTooltipConfiguration, NSString;

@interface T1ComposeTooltipViewController : TFNViewController <TFNTooltipViewDelegate, TFNTwitterAuthenticated> {

	T1ComposeTooltipRegistry* _registry;
	TFNTooltipView* _currentTooltipView;
	UIView* _currentTargetView;
	NSMutableDictionary* _registeredViews;
	UIButton* _tooltipDismissOverlayButton;
	TFNTwitterAccount* _account;
	id _context;
	id<T1ComposeTooltipViewControllerDelegate> _delegate;
	float _tooltipPresentationDelay;
	T1ComposeTooltipConfiguration* _currentTooltipConfiguration;

}

@property (assign,nonatomic,__weak) id context;                                                          //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) id<T1ComposeTooltipViewControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float tooltipPresentationDelay;                                             //@synthesize tooltipPresentationDelay=_tooltipPresentationDelay - In the implementation block
@property (nonatomic,readonly) T1ComposeTooltipConfiguration * currentTooltipConfiguration;              //@synthesize currentTooltipConfiguration=_currentTooltipConfiguration - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account;                                                //@synthesize account=_account - In the implementation block
-(char)_tooltipIsShowing;
-(void)_dismissCurrentTooltipWithAnimation:(unsigned)arg1 ;
-(void)_showTooltipForConfig:(id)arg1 fromView:(id)arg2 ;
-(void)_repositionTooltipIfNecessary;
-(void)dismissTooltipWithAnimation:(unsigned)arg1 ;
-(id)_createTooltipWithConfig:(id)arg1 ;
-(CGRect)_frameForTooltipTargetView:(id)arg1 withinView:(id)arg2 ;
-(void)_showOverlay;
-(void)_overlayButtonTouched:(id)arg1 forEvent:(id)arg2 ;
-(void)_forwardTapToTargetViewIfNecessary;
-(id)initWithRegistry:(id)arg1 ;
-(void)triggerEvent:(unsigned)arg1 ;
-(void)registerView:(id)arg1 forIdentifier:(id)arg2 ;
-(void)repositionTooltip;
-(void)dismissTooltip;
-(float)tooltipPresentationDelay;
-(void)setTooltipPresentationDelay:(float)arg1 ;
-(T1ComposeTooltipConfiguration *)currentTooltipConfiguration;
-(char)tooltipShouldShow:(id)arg1 ;
-(void)tooltipDidTap:(id)arg1 ;
-(void)tooltipDidShow:(id)arg1 ;
-(void)tooltipDidDismiss:(id)arg1 ;
-(void)setDelegate:(id<T1ComposeTooltipViewControllerDelegate>)arg1 ;
-(id<T1ComposeTooltipViewControllerDelegate>)delegate;
-(void)loadView;
-(id)context;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setContext:(id)arg1 ;
-(void)_dismissOverlay;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(TFNTwitterAccount *)account;
@end

