/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:42 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNRequestContactImportViewDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNContactImportInitiationListener.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNSyncingContactsViewControllerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNContactSyncLearnMoreViewControllerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNUserSetUpStepViewController.h>

@protocol FBProvider, MNUserSetUpStepCompletion, MNRequestContactImportViewControllerDelegate;
@class MNRequestContactImportView, MNAddressBookContactImportInitiator, MNSyncingContactsViewController, MNContactSyncLearnMoreViewController, MNManageContactsPresenter, NSNotificationCenter, NSString;

@interface MNRequestContactImportViewController : UIViewController <MNRequestContactImportViewDelegate, MNContactImportInitiationListener, MNSyncingContactsViewControllerDelegate, MNContactSyncLearnMoreViewControllerDelegate, MNUserSetUpStepViewController> {

	MNRequestContactImportView* _contactImportView;
	char _alreadyActedOnPrimer;
	MNAddressBookContactImportInitiator* _contactImportInitiator;
	MNSyncingContactsViewController* _syncingContactsVC;
	id<FBProvider> _syncingContactsVCProvider;
	MNContactSyncLearnMoreViewController* _contactSyncLearnMoreViewController;
	MNManageContactsPresenter* _manageContactsPresenter;
	id<FBProvider> _userSetUpFlowConfiguratorProvider;
	NSNotificationCenter* _notificationCenter;
	id<MNUserSetUpStepCompletion> completionDelegate;
	id<MNRequestContactImportViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNRequestContactImportViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNUserSetUpStepCompletion> completionDelegate; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)analyticsModule;
-(void)contactSyncLearnMoreViewControllerDidPressTurnOn:(id)arg1 ;
-(void)contactSyncLearnMoreViewControllerDidPressNotNow:(id)arg1 ;
-(void)contactSyncLearnMoreViewControllerDidPressManageContacts:(id)arg1 ;
-(id)initWithContactImporter:(id)arg1 syncLock:(id)arg2 userSettings:(id)arg3 syncingContactsVCProvider:(id)arg4 analytics:(id)arg5 session:(id)arg6 manageContactsPresenter:(id)arg7 userSetUpFlowConfiguratorProvider:(id)arg8 ;
-(void)_didConfirmContactImport;
-(void)_presentManageContactsWebView;
-(void)contactImportViewDidClickOKButton:(id)arg1 ;
-(void)contactImportViewDidClickLearnMoreButton:(id)arg1 ;
-(void)contactImportViewDidClickManageContacts:(id)arg1 ;
-(void)contactsSyncingViewControllerDidComplete:(id)arg1 ;
-(void)userInitiatedContactImportAllowed;
-(void)userInitiatedContactImportDisallowed;
-(void)userInitiatedContactImportFailedToInitiate;
-(void)_initiateContactImporting;
-(void)_startListeningToApplicationLifecycleEvents:(id)arg1 ;
-(void)_stopListeningToApplicationLifecycleEvents:(id)arg1 ;
-(unsigned)preferredTransitionType;
-(void)setDelegate:(id<MNRequestContactImportViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNRequestContactImportViewControllerDelegate>)delegate;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(id<MNUserSetUpStepCompletion>)completionDelegate;
-(void)setCompletionDelegate:(id<MNUserSetUpStepCompletion>)arg1 ;
@end

