/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:46 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBBugReportContainerViewControllerChildViewControllerDelegate.h>

@class FBBugReportOldBuildView, FBBugReportCoordinator, FBBugReportReportAProblemViewController, NSString;

@interface FBBugReportOldBuildViewController : UIViewController <UITextViewDelegate, UIAlertViewDelegate, FBBugReportContainerViewControllerChildViewControllerDelegate> {

	FBBugReportOldBuildView* _oldBuildView;
	FBBugReportCoordinator* _coordinator;
	FBBugReportReportAProblemViewController* _reportAProblemViewController;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didPressUpdateBuild;
-(void)didPressReportAnyway;
-(void)setNavigationItem;
-(id)initWithCoordinator:(id)arg1 reportAProblemViewController:(id)arg2 ;
-(unsigned)supportedInterfaceOrientations;
-(void)loadView;
-(int)preferredInterfaceOrientationForPresentation;
@end

