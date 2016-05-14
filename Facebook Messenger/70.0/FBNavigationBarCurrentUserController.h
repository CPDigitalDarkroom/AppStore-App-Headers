/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBNavigationBarCurrentUserViewDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPopoverControllerDelegate.h>

@protocol FBAppSessionController, FBNavigationCoordinator, FBNavigationBarCurrentUserControllerDelegate;
@class FBUserSession, FBPopoverActionSheet, FBNavigationBarCurrentUserView, NSString;

@interface FBNavigationBarCurrentUserController : NSObject <FBNavigationBarCurrentUserViewDelegate, FBPopoverControllerDelegate> {

	FBUserSession* _session;
	id<FBAppSessionController> _appSessionController;
	id<FBNavigationCoordinator> _navigationCoordinator;
	FBPopoverActionSheet* _popoverActionSheet;
	char _didSelectActionSheetButton;
	char _displayDivebar;
	FBNavigationBarCurrentUserView* _currentUserView;
	id<FBNavigationBarCurrentUserControllerDelegate> _delegate;

}

@property (nonatomic,retain) FBNavigationBarCurrentUserView * currentUserView;                              //@synthesize currentUserView=_currentUserView - In the implementation block
@property (assign,nonatomic,__weak) id<FBNavigationBarCurrentUserControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char displayDivebar;                                                           //@synthesize displayDivebar=_displayDivebar - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fb_popoverControllerDidDismissPopover:(id)arg1 withInteraction:(unsigned)arg2 ;
-(void)_orientationDidChangeNotification:(id)arg1 ;
-(void)setDisplayDivebar:(char)arg1 ;
-(void)_fetchPersonAndRun:(/*^block*/id)arg1 ;
-(void)_navigateToURL:(id)arg1 ;
-(id)_popoverActionSheetButtonItems;
-(void)_logImpressionIfNeeded;
-(void)_logTap:(id)arg1 ;
-(void)_didTapActivityLogButton:(id)arg1 ;
-(void)_didTapAccountSettingsButton:(id)arg1 ;
-(void)_didTapPrivacySettingsButton:(id)arg1 ;
-(void)_didTapLogoutButton:(id)arg1 ;
-(void)_didTapViewProfileButton:(id)arg1 ;
-(void)currentUserView:(id)arg1 didTapProfileView:(id)arg2 ;
-(void)currentUserView:(id)arg1 didTapMenuView:(id)arg2 ;
-(void)currentUserViewDidTapChatButton:(id)arg1 ;
-(id)initWithSession:(id)arg1 appSessionController:(id)arg2 navigationCoordinator:(id)arg3 ;
-(void)setCurrentUserView:(FBNavigationBarCurrentUserView *)arg1 ;
-(FBNavigationBarCurrentUserView *)currentUserView;
-(char)displayDivebar;
-(void)setDelegate:(id<FBNavigationBarCurrentUserControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBNavigationBarCurrentUserControllerDelegate>)delegate;
@end

