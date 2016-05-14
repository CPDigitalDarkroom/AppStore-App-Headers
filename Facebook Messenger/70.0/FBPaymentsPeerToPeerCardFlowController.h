/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPaymentsCardViewControllerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPaymentsEventListener.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPaymentsNavigationDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNPaymentsFullScreenIntroductionViewControllerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPaymentsEventAnnouncing.h>

@protocol MNNavigationPluginService, FBPaymentsPeerToPeerCardFlowControllerDelegate, FBPaymentsConnectionStatusProviding;
@class FBUserSession, NSString, FBPaymentsPeerToPeerNavigationCoordinator, FBPaymentsPeerToPeerFeatureGatingController, FBPaymentsToastCoordinator, FBPaymentsEventListenerAnnouncer, MNPaymentsDefaultCardManager, FBPaymentsPaymentMethodsCoordinator;

@interface FBPaymentsPeerToPeerCardFlowController : NSObject <FBPaymentsCardViewControllerDelegate, FBPaymentsEventListener, FBPaymentsNavigationDelegate, MNPaymentsFullScreenIntroductionViewControllerDelegate, FBPaymentsEventAnnouncing> {

	FBUserSession* _session;
	NSString* _analyticsUUID;
	id<MNNavigationPluginService> _navigationService;
	FBPaymentsPeerToPeerNavigationCoordinator* _navigationCoordinator;
	id<FBPaymentsPeerToPeerCardFlowControllerDelegate> _delegate;
	id<FBPaymentsConnectionStatusProviding> _connectionStatusProvider;
	FBPaymentsPeerToPeerFeatureGatingController* _featureGatingController;
	FBPaymentsToastCoordinator* _toastCoordinator;
	char _shouldPushCardView;
	unsigned _paymentsPurpose;
	FBPaymentsEventListenerAnnouncer* _eventAnnouncer;
	MNPaymentsDefaultCardManager* _defaultCardManager;
	FBPaymentsPaymentMethodsCoordinator* _modularizedPaymentMethodCoordinator;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(void)addEventListener:(id)arg1 ;
-(void)removeEventListener:(id)arg1 ;
-(void)enterAddCardFlowWithAnalyticsUUID:(id)arg1 delegate:(id)arg2 shouldPushCardView:(char)arg3 eventListeners:(id)arg4 acceptedCardOption:(id)arg5 shouldEnableBINCheck:(char)arg6 paymentsPurpose:(unsigned)arg7 overrideAddActionTitle:(id)arg8 shouldShowSecurityIntroductionIfPossible:(char)arg9 ;
-(id)newNavigationController;
-(id)initWithSession:(id)arg1 navigationService:(id)arg2 navigationCoordinator:(id)arg3 modularizedPaymentMethodCoordinator:(id)arg4 connectionStatusProvider:(id)arg5 featureGatingController:(id)arg6 paymentsToastCoordinator:(id)arg7 defaultCardManager:(id)arg8 ;
-(void)_prepareCardFlowStatusesWithAnalyticsUUID:(id)arg1 delegate:(id)arg2 shouldPushCardView:(char)arg3 ;
-(void)_showAddCardFlowWithEventListeners:(id)arg1 acceptedCardOption:(id)arg2 shouldEnableBINCheck:(char)arg3 paymentsPurpose:(unsigned)arg4 overrideAddActionTitle:(id)arg5 shouldShowSecurityIntroductionIfPossible:(char)arg6 ;
-(void)_enterCardViewWithConfiguration:(id)arg1 eventListeners:(id)arg2 shouldShowSecurityIntroductionIfPossible:(char)arg3 overrideActionTitles:(id)arg4 ;
-(void)_pushCardViewWithConfiguration:(id)arg1 flowId:(id)arg2 delegate:(id)arg3 isValidatingCard:(char)arg4 animated:(char)arg5 overrideActionTitle:(id)arg6 eventListeners:(id)arg7 ;
-(void)_presentCardViewWithConfiguration:(id)arg1 flowId:(id)arg2 delegate:(id)arg3 isValidatingCard:(char)arg4 shouldShowSecurityIntroductionIfPossible:(char)arg5 animated:(char)arg6 overrideActionTitle:(id)arg7 eventListeners:(id)arg8 ;
-(void)_popCardViewController;
-(void)_dismissCardViewControllerWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)_cardViewControllerWithConfiguration:(id)arg1 delegate:(id)arg2 isValidatingCard:(char)arg3 eventListeners:(id)arg4 overrideActionTitles:(id)arg5 ;
-(char)_shouldShowIntroduction;
-(void)_exitWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_dispatchAddCardSuccessWithCard:(id)arg1 ;
-(void)_dispatchEditCardSuccessWithCard:(id)arg1 ;
-(void)paymentsCardViewController:(id)arg1 didFinishCardAction:(id)arg2 withNewCardModel:(id)arg3 ;
-(void)paymentsCardViewControllerDidTapCancel:(id)arg1 ;
-(void)paymentsCardViewControllerDidTapDeclinePayment:(id)arg1 ;
-(void)didTapCancelForFullScreenIntroductionViewController:(id)arg1 ;
-(void)didTapActionButtonForFullScreenIntroductionViewController:(id)arg1 ;
-(void)enterViewCardFlowForPaymentMethod:(id)arg1 withAnalyticsUUID:(id)arg2 delegate:(id)arg3 shouldPushCardView:(char)arg4 eventListeners:(id)arg5 ;
-(void)didTriggerEventWithName:(id)arg1 announcerIdentifier:(id)arg2 collectedData:(id)arg3 ;
-(id)viewControllerForPresenting;
@end

