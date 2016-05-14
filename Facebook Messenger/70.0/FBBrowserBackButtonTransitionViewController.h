/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:05 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIViewController.h>

@protocol FBBrowserBackButtonTransitionViewControllerDelegate;
@class UIView, UIImageView, UILabel;

@interface FBBrowserBackButtonTransitionViewController : UIViewController {

	UIView* _rootView;
	UIView* _rootOverlayView;
	UIView* _rootNUXView;
	UIImageView* _rootNUXGlyphView;
	UILabel* _rootNUXLabel;
	UIView* _previousUnderlayView;
	UIView* _previousView;
	UIView* _currentView;
	CGRect _navigationBarFrame;
	UIView* _navigationBarContainerView;
	UIView* _navigationBar;
	UIView* _navigationBarOverlay;
	int _initialOrientation;
	char _viewsSelectable;
	id<FBBrowserBackButtonTransitionViewControllerDelegate> _delegate;

}
-(void)_didTapRootView;
-(void)_didTapPreviousView;
-(void)_layoutInFrame:(CGRect)arg1 ;
-(void)_updateToStateNull;
-(void)_updateToStateSnapshotsReady;
-(void)_updateToStateSnapshotsWithDismissHelperReady;
-(void)_updateToStatePreviousViewSelected;
-(void)_updateToStateRootViewDismissed;
-(void)_updateToStateRootViewSelected;
-(id)initWithRootView:(id)arg1 previousView:(id)arg2 currentView:(id)arg3 navigationBar:(id)arg4 delegate:(id)arg5 ;
-(unsigned)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
@end

