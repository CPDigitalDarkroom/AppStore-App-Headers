/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:03 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBAppSessionController.h>

@protocol FBAppSessionControllerDelegate;
@class UIWindow, NSString;

@interface OrcaAppSessionControllerStub : NSObject <FBAppSessionController> {

	id<FBAppSessionControllerDelegate> _delegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBAppSessionControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int state; 
@property (nonatomic,readonly) id<FBNavigationCoordinator> navigationCoordinator; 
@property (nonatomic,__weak,readonly) id<FBNavigation_DEPRECATED_DO_NOT_USE> navigation; 
@property (nonatomic,retain) id<FBPushHandler> pushHandler; 
@property (nonatomic,retain) UIWindow * rootWindow; 
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(void)configureWithSession:(id)arg1 exceptionHandler:(id)arg2 rootWindow:(id)arg3 requesterConfiguration:(id)arg4 ;
-(void)presentSessionUIFromLaunch:(char)arg1 forceSessionStoreClear:(char)arg2 showSpinner:(char)arg3 ;
-(void)presentLogoutUIWithReason:(id)arg1 ;
-(void)showLogoutAlertAndPresentLogoutUI;
-(id<FBNavigation_DEPRECATED_DO_NOT_USE>)navigation;
-(void)setDelegate:(id<FBAppSessionControllerDelegate>)arg1 ;
-(id<FBAppSessionControllerDelegate>)delegate;
-(int)state;
@end

