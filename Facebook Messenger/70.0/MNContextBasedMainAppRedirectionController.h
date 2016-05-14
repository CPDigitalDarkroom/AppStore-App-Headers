/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:45 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBSessionClassProvidable.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNForwardComposerViewControllerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNForwardFlowControllerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNForwardFlowPresenter.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNNavigationListener.h>

@protocol FBProvider;
@class MNUrlRedirectHandler, FBUserSession, MNInboxViewController, MNForwardFlowController, MNForwardFlowControllerFactory, FBLazyCreator, MNForwardComposerViewControllerFactory, FBMessengerURLBuilder, NSString;

@interface MNContextBasedMainAppRedirectionController : NSObject <FBSessionClassProvidable, MNForwardComposerViewControllerDelegate, MNForwardFlowControllerDelegate, MNForwardFlowPresenter, MNNavigationListener> {

	MNUrlRedirectHandler* _urlRedirectHandler;
	char _redirectionViewVisible;
	FBUserSession* _session;
	MNInboxViewController* _inboxViewController;
	char _showFacebookRedirectionViewWhenPossible;
	id<FBProvider> _navigationCoordinatorProvider;
	MNForwardFlowController* _forwardFlowController;
	MNForwardFlowControllerFactory* _forwardFlowControllerFactory;
	FBLazyCreator* _inboxSuggestedContactsRetrieverCreator;
	id<FBProvider> _messageSenderProvider;
	FBLazyCreator* _preselectedContactsRetrieverCreator;
	MNForwardComposerViewControllerFactory* _forwardComposerViewControllerFactory;
	FBMessengerURLBuilder* _messengerURLBuilder;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)dismissForwardFlowViewController;
-(void)forwardFlowControllerDidCancel:(id)arg1 ;
-(char)forwardFlowController:(id)arg1 shouldHandleForwardWithRecipientInfo:(id)arg2 ;
-(void)forwardFlowController:(id)arg1 willForwardWithRecipientInfo:(id)arg2 forwardContent:(id)arg3 ;
-(void)forwardFlowController:(id)arg1 didForwardMessageWithRecipientInfo:(id)arg2 ;
-(void)presentForwardFlowViewController:(id)arg1 ;
-(void)_handleShareURL:(id)arg1 ;
-(void)_dismissViewControllerAndRedirectIfPossible;
-(void)forwardComposerViewControllerDidCancel:(id)arg1 ;
-(void)forwardComposerViewController:(id)arg1 didPressNextWithText:(id)arg2 ;
-(void)forwardComposerViewControllerDidCancelSend:(id)arg1 ;
-(void)forwardComposerViewController:(id)arg1 didForwardMessageWithRecipientInfo:(id)arg2 ;
-(char)forwardComposerViewControllerShouldShowSentMessageConfirmation:(id)arg1 ;
-(void)didRedirectFromMainAppWithURL:(id)arg1 ;
-(void)dealloc;
-(char)canOpenURL:(id)arg1 ;
@end

