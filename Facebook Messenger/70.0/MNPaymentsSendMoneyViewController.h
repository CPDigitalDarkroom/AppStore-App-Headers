/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIViewController.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBModalWebFlowDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBKeyboardObserverDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPaymentsExpandableViewControllerExpandingDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPaymentsNavigationDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPaymentsUpdateListener.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPaymentsPurchaseInfoExtensionDataSource.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPaymentsPurchaseInfoExtensionControllerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPaymentsOrderSummaryControllingDataSource.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPaymentsOrderSummaryControllingDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPaymentsCheckoutOtherButtonHandlingDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNPaymentsThemeViewControllerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPaymentsCheckoutExplanationInfoViewDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPaymentsExpandableItem.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPaymentsPostCheckoutFlowProcessorPaymentProcessingDelegate.h>

@protocol FBPaymentsViewModelConfigurable, FBPaymentsPayableDataModel, FBPaymentsConnectionStatusProviding, MNSoundPluginService, FBPaymentsCheckoutHeaderViewFactory, FBPaymentsCheckoutFlowOtherButtonActionHandler, FBPaymentsPurchaseInfoViewControlling, FBPaymentsOrderSummaryControlling, FBPaymentsCheckoutFlowOverlayViewFactory, FBPaymentsCheckoutConfiguration, FBPaymentsCheckoutFlowLogger, FBPaymentsExpandableViewControllerExpandingDelegate, MNPaymentsSendMoneyViewControllerDelegate, FBPaymentsNavigationDelegate;
@class FBMUser, NSString, UIView, FBPaymentsCheckoutExplanationInfoView, MNPaymentsPayActionFooterView, FBMemPeerToPeerPlatformContext, FBKeyboardObserver, FBUserSession, FBPaymentsPaymentMethodsCoordinator, MNPaymentsThemeCoordinator, FBPaymentsPeerToPeerCardFlowController, FBPaymentsPeerToPeerNavigationCoordinator, FBPaymentsPINController, FBPaymentsTouchIDController, MNPaymentsExtensibleFlowMap, FBPaymentsPeerToPeerFetchController, NSArray, FBPaymentsCheckoutViewConfiguration, FBPaymentsCheckoutExtensionManager, FBPaymentsPurchaseInfoExtensionController, UIViewController, MNPaymentsComposerViewController, MNPaymentsThemeViewController, UITapGestureRecognizer, UIResponder, UISegmentedControl, UIColor;

@interface MNPaymentsSendMoneyViewController : UIViewController <FBModalWebFlowDelegate, FBKeyboardObserverDelegate, FBPaymentsExpandableViewControllerExpandingDelegate, FBPaymentsNavigationDelegate, FBPaymentsUpdateListener, FBPaymentsPurchaseInfoExtensionDataSource, FBPaymentsPurchaseInfoExtensionControllerDelegate, FBPaymentsOrderSummaryControllingDataSource, FBPaymentsOrderSummaryControllingDelegate, FBPaymentsCheckoutOtherButtonHandlingDelegate, MNPaymentsThemeViewControllerDelegate, FBPaymentsCheckoutExplanationInfoViewDelegate, FBPaymentsExpandableItem, FBPaymentsPostCheckoutFlowProcessorPaymentProcessingDelegate> {

	FBMUser* _recipient;
	NSString* _flowId;
	UIView*<FBPaymentsViewModelConfigurable> _headerView;
	FBPaymentsCheckoutExplanationInfoView* _explanationInfoView;
	MNPaymentsPayActionFooterView* _payActionFooterView;
	id<FBPaymentsPayableDataModel> _payableDataModel;
	FBMemPeerToPeerPlatformContext* _platformContext;
	FBKeyboardObserver* _keyboardObserver;
	id<FBPaymentsConnectionStatusProviding> _connectionStatusProvider;
	id<MNSoundPluginService> _soundService;
	FBUserSession* _session;
	FBPaymentsPaymentMethodsCoordinator* _paymentMethodsCoordinator;
	MNPaymentsThemeCoordinator* _paymentsThemeCoordinator;
	FBPaymentsPeerToPeerCardFlowController* _cardFlowController;
	FBPaymentsPeerToPeerNavigationCoordinator* _navigationCoordinator;
	FBPaymentsPINController* _paymentPinController;
	FBPaymentsTouchIDController* _touchIDController;
	MNPaymentsExtensibleFlowMap* _extensibleFlowMap;
	FBPaymentsPeerToPeerFetchController* _fetchController;
	NSArray* _checkoutFlowConfigurations;
	FBPaymentsCheckoutViewConfiguration* _currentCheckoutFlowConfiguration;
	int _currentSelectedConfigurationIndex;
	FBPaymentsCheckoutExtensionManager* _checkoutExtensionManager;
	char _isFirstWillLayoutSubviewsAfterWillAppear;
	char _isLoading;
	char _hasUserPressedPayButton;
	char _isUpdatingPlatformContext;
	id<FBPaymentsCheckoutHeaderViewFactory> _headerViewFactory;
	id<FBPaymentsCheckoutFlowOtherButtonActionHandler> _otherButtonActionHandler;
	unsigned _loadingCondition;
	FBPaymentsPurchaseInfoExtensionController* _purchaseInfoExtensionManager;
	UIViewController*<FBPaymentsPurchaseInfoViewControlling> _purchaseInfoViewController;
	UIViewController*<FBPaymentsOrderSummaryControlling> _orderSummaryViewController;
	MNPaymentsComposerViewController* _composerViewController;
	MNPaymentsThemeViewController* _themeViewController;
	id<FBPaymentsCheckoutFlowOverlayViewFactory> _overlayViewFactory;
	unsigned _appearanceState;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIResponder* _lastActiveResponder;
	id<FBPaymentsCheckoutConfiguration> _checkoutConfiguration;
	id<FBPaymentsCheckoutFlowLogger> _checkoutFlowLogger;
	NSArray* _rightBarButtons;
	UISegmentedControl* _segmentedControl;
	char _hasPassedEligibilityCheck;
	id<FBPaymentsExpandableViewControllerExpandingDelegate> _expandingDelegate;
	UIColor* _tintColor;
	id<MNPaymentsSendMoneyViewControllerDelegate> _delegate;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;

}

@property (assign,nonatomic) char hasPassedEligibilityCheck;                                                                //@synthesize hasPassedEligibilityCheck=_hasPassedEligibilityCheck - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                                                           //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,nonatomic,__weak) id<MNPaymentsSendMoneyViewControllerDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;                                    //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsExpandableViewControllerExpandingDelegate> expandingDelegate;              //@synthesize expandingDelegate=_expandingDelegate - In the implementation block
-(void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(int)arg5 ;
-(void)modalWebFlowControllerDidCancel:(id)arg1 ;
-(void)didUpdateWithAnnouncerIdentifier:(id)arg1 ;
-(id)newNavigationController;
-(void)_onCancel;
-(void)themeViewController:(id)arg1 didPreSelectThemeAtIndex:(unsigned)arg2 ;
-(void)_updateHeaderView;
-(void)paymentsCheckoutOtherButtonActionHandler:(id)arg1 didFinishHandlingActionWithFlowId:(id)arg2 objectFBID:(id)arg3 ;
-(void)paymentsCheckoutOtherButtonActionHandler:(id)arg1 didFailHandlingActionWithFlowId:(id)arg2 objectFBID:(id)arg3 ;
-(void)paymentsCheckoutOtherButtonActionHandler:(id)arg1 willHandleActionWithFlowId:(id)arg2 objectFBID:(id)arg3 ;
-(void)_setCurrentConfiguration;
-(void)_initCheckoutExtensionManagerWithContentMode:(int)arg1 ;
-(void)_initPurchaseInfoExtensionManager;
-(void)_initPurchaseInfoViewControllerWithContentMode:(int)arg1 ;
-(void)_initOrderSummaryViewControllerWithContentMode:(int)arg1 editMode:(int)arg2 ;
-(void)_initComposerViewController;
-(void)_initThemeViewController;
-(void)_initRightBarButtons;
-(void)_initSendMoneyViewWithContentMode:(int)arg1 ;
-(void)setExpandingDelegate:(id<FBPaymentsExpandableViewControllerExpandingDelegate>)arg1 ;
-(void)_onPay:(id)arg1 ;
-(void)_didTapOtherActionButton;
-(void)_updateColorPolicy;
-(void)_initKeyboardObserverIfNeeded;
-(void)_initTapGestureRecognizerIfNeeded;
-(void)_loadPlatformContextIfNeeded;
-(char)_shouldShowPayActionButton;
-(void)_updateRightBarButtonTitle;
-(void)_refreshActionButtonStatus;
-(void)_setNavigationBar;
-(void)_updateFirstResponder:(id)arg1 ;
-(void)_updateExplanationInfo;
-(void)_updateViewTintColor;
-(void)_resignCurrentFirstResponder;
-(id)_currentCollectedData;
-(void)_resetSendMoneyStatus;
-(char)_shouldShowRightBarButton;
-(void)_segmentedControlTapped;
-(void)_updateActivatedExtensions;
-(char)_isComposerEnabled;
-(char)_isThemeEnabled;
-(char)_isKeyboardRequired;
-(char)_isTapGestureRecognizerRequired;
-(void)didCaptureTap:(id)arg1 ;
-(char)_isPaymentEditable;
-(void)_playPayPressSound;
-(void)_checkRecipientEligibilityIfNeeded;
-(void)_processPayment;
-(void)_setLoadingStatus:(char)arg1 withReason:(unsigned)arg2 ;
-(void)_dispatchPaymentRequest;
-(id)_checkoutFlowContextDataWithPaymentRecipient:(id)arg1 platformContext:(id)arg2 ;
-(void)_setLoadingStatus:(char)arg1 withReason:(unsigned)arg2 succeeded:(char)arg3 ;
-(void)_updateLoadingStatusUIWithReason:(unsigned)arg1 succeeded:(char)arg2 ;
-(void)_updatePayLoadingUIWithSucceeded:(char)arg1 ;
-(void)_setPayActionButtonPayingStatusWithSucceeded:(char)arg1 ;
-(float)preferredHeightWithWidth:(float)arg1 ;
-(void)expandableItemDidUpdatePreferredHeight:(id)arg1 ;
-(void)_updateUIForContextDataUpdates;
-(void)_dispatchFinishCheckout;
-(void)_presentWebViewForURL:(id)arg1 ;
-(void)_setPlatformContextAndStopLoading:(id)arg1 ;
-(id)_selectedPaymentMethodFromPurchaseInfo;
-(void)resetForCancelingOngoingPayment;
-(id)_currentFirstResponder;
-(void)_updateUIForCurrentConfiguration;
-(void)_logConfigurationSwitchEvent;
-(void)_updateComposerPlaceholderText;
-(void)_updatePurchaseInfoViewBasedOnActivatedExtension;
-(id)payableDataModelForPurchaseInfoExtension:(id)arg1 ;
-(id)paymentsFlowIdForPurchaseInfoExtension:(id)arg1 ;
-(id)platformContextForPurchaseInfoExtension:(id)arg1 ;
-(char)isUpdatingPlatformContextForPurchaseInfoExtension:(id)arg1 ;
-(void)purchaseInfoViewControllerDidUpdate:(id)arg1 isUserAction:(char)arg2 ;
-(void)purchaseInfoViewControllerDidCancelFollowUpAdding:(id)arg1 ;
-(void)purchaseInfoViewControllerWillBeginProcessing:(id)arg1 ;
-(void)purchaseInfoViewControllerDidEndProcessing:(id)arg1 ;
-(void)purchaseInfoViewControllerWillUpdatePlatformContext:(id)arg1 ;
-(void)purchaseInfoViewController:(id)arg1 didUpdatePlatformContext:(id)arg2 ;
-(void)purchaseInfoViewControllerDidTapActionButton:(id)arg1 ;
-(id)collectedPurchaseInfoForOrderSummaryControlling:(id)arg1 ;
-(id)platformContextForOrderSummaryControlling:(id)arg1 ;
-(void)didTapActionButtonWithURL:(id)arg1 ;
-(id<FBPaymentsExpandableViewControllerExpandingDelegate>)expandingDelegate;
-(void)paymentsPostCheckoutFlowProcessor:(id)arg1 didFinishProcessingWithFlowId:(id)arg2 ;
-(void)paymentsPostCheckoutFlowProcessor:(id)arg1 didFailProcessingWithFlowId:(id)arg2 wasCancelled:(char)arg3 error:(id)arg4 ;
-(id)initWithSession:(id)arg1 flowId:(id)arg2 fetchController:(id)arg3 payableDataModel:(id)arg4 navigationCoordinator:(id)arg5 paymentMethodsCoordinator:(id)arg6 paymentsThemeCoordinator:(id)arg7 connectionStatusProvider:(id)arg8 soundService:(id)arg9 paymentPinController:(id)arg10 passcodeWorkflowController:(id)arg11 touchIDController:(id)arg12 cardFlowController:(id)arg13 checkoutFlowConfigurations:(id)arg14 extensibleFlowMap:(id)arg15 checkoutFlowLogger:(id)arg16 ;
-(void)_handlePinError:(id)arg1 ;
-(void)updateCheckoutContextData:(id)arg1 ;
-(void)setHasPassedEligibilityCheck:(char)arg1 ;
-(char)hasPassedEligibilityCheck;
-(id)payableDataModelForOrderSummaryControlling:(id)arg1 ;
-(void)orderSummaryControllingDidUpdate:(id)arg1 ;
-(void)setDelegate:(id<MNPaymentsSendMoneyViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNPaymentsSendMoneyViewControllerDelegate>)delegate;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(void)loadView;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)viewWillLayoutSubviews;
-(int)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
-(id)viewControllerForPresenting;
@end

