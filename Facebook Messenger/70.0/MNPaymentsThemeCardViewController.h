/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNPaymentsThemeCardViewDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNPaymentsThemeCoordinatorListener.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class FBUserSession, MNPaymentsThemeCardView, MNPaymentsThemeCardDataModel, FBPaymentsPeerToPeerNavigationCoordinator, MNPaymentsThemeCoordinator, MNPaymentsModalViewInteractionController, UITapGestureRecognizer, UIPanGestureRecognizer, NSString;

@interface MNPaymentsThemeCardViewController : UIViewController <MNPaymentsThemeCardViewDelegate, MNPaymentsThemeCoordinatorListener, UIGestureRecognizerDelegate> {

	FBUserSession* _session;
	MNPaymentsThemeCardView* _cardView;
	MNPaymentsThemeCardDataModel* _themeCardDataModel;
	FBPaymentsPeerToPeerNavigationCoordinator* _peerToPeerNavigationCoordinator;
	MNPaymentsThemeCoordinator* _themeCoordinator;
	MNPaymentsModalViewInteractionController* _interactionController;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIPanGestureRecognizer* _panGestureRecognizer;
	char _shouldCancelPan;
	char _isInteracting;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserSession:(id)arg1 themeCardDataModel:(id)arg2 peerToPeerNavigationCoordinator:(id)arg3 themeCoordinator:(id)arg4 ;
-(void)didUpdateTheme:(id)arg1 ;
-(void)themeCardView:(id)arg1 didBottomActionButtonTapped:(id)arg2 ;
-(void)didTapOnView:(id)arg1 ;
-(void)handlePanGestureRecognizer:(id)arg1 ;
-(void)_prepareThemeWithThemeCardDataModel:(id)arg1 ;
-(void)_updateWithTheme:(id)arg1 ;
-(void)setIsInteracting:(char)arg1 ;
-(void)dealloc;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)prefersStatusBarHidden;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(void)loadView;
-(int)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
@end

