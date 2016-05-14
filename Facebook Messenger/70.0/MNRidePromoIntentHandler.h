/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNForwardFlowControllerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNForwardFlowPresenter.h>

@protocol FBProvider;
@class FBUserSession, MNForwardFlowControllerFactory, MNBusinessNavigationHandler, MNForwardFlowController, FBViewerContext, MNUserStore, FBMThreadStore, NSString;

@interface MNRidePromoIntentHandler : NSObject <MNForwardFlowControllerDelegate, MNForwardFlowPresenter> {

	FBUserSession* _session;
	id<FBProvider> _pluginManagerProvider;
	MNForwardFlowControllerFactory* _forwardFactory;
	MNBusinessNavigationHandler* _navigationHandler;
	MNForwardFlowController* _forwardFlowController;
	FBViewerContext* _viewerContext;
	MNUserStore* _userStore;
	FBMThreadStore* _threadStore;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dismissForwardFlowViewController;
-(void)forwardFlowControllerDidCancel:(id)arg1 ;
-(char)forwardFlowController:(id)arg1 shouldHandleForwardWithRecipientInfo:(id)arg2 ;
-(void)forwardFlowController:(id)arg1 willForwardWithRecipientInfo:(id)arg2 forwardContent:(id)arg3 ;
-(void)forwardFlowController:(id)arg1 didForwardMessageWithRecipientInfo:(id)arg2 ;
-(void)presentForwardFlowViewController:(id)arg1 ;
-(char)handleIntent:(id)arg1 ;
-(id)initWithSession:(id)arg1 pluginManagerProvider:(id)arg2 forwardFlowControllerFactory:(id)arg3 viewerContext:(id)arg4 userStore:(id)arg5 threadStore:(id)arg6 ;
-(void)_initNavigationHanlderIfNecessary;
@end

