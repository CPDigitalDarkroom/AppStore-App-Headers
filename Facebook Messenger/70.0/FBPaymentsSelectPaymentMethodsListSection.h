/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:00 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPaymentsNavigationDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPaymentsUpdateListener.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPaymentsSelectPaymentMethodsPaymentMethodOptionSelectActionDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPaymentsTableViewSection.h>

@protocol FBPaymentsSelectPaymentMethodsViewModelCreator, FBPaymentsNavigationDelegate, FBPaymentsTableViewSectionDelegate, FBPaymentsSelectPaymentMethodsListSectionActionDelegate, FBPaymentsPaymentMethod;
@class FBUserSession, FBPaymentsPaymentMethodsCoordinator, FBPaymentsSelectPaymentMethodsActionProvider, NSArray, NSDictionary, NSString;

@interface FBPaymentsSelectPaymentMethodsListSection : NSObject <FBPaymentsNavigationDelegate, FBPaymentsUpdateListener, FBPaymentsSelectPaymentMethodsPaymentMethodOptionSelectActionDelegate, FBPaymentsTableViewSection> {

	FBUserSession* _session;
	FBPaymentsPaymentMethodsCoordinator* _paymentMethodsCoordinator;
	id<FBPaymentsSelectPaymentMethodsViewModelCreator> _viewModelCreator;
	FBPaymentsSelectPaymentMethodsActionProvider* _actionProvider;
	NSArray* _existingPaymentMethods;
	NSArray* _eligiblePaymentMethodOptions;
	int _existingPaymentMethodsDataLoadingStatus;
	int _eligiblePaymentMethodOptionsDataLoadingStatus;
	NSDictionary* _defaultViewActions;
	NSDictionary* _defaultAddActions;
	char _shouldShowSectionHeader;
	char _shouldEnableSelection;
	char _shouldEnableDetailTextForPaymentMethod;
	char _shouldShowPaymentMethodOptionIcons;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;
	id<FBPaymentsTableViewSectionDelegate> _sectionDelegate;
	NSString* _productItemType;
	id<FBPaymentsSelectPaymentMethodsListSectionActionDelegate> _actionDelegate;
	unsigned _contentMask;
	NSArray* _acceptedPaymentMethodOptions;
	int _paymentMethodCellStyle;
	id<FBPaymentsPaymentMethod> _selectedPaymentMethod;

}

@property (nonatomic,copy) NSString * productItemType;                                                                       //@synthesize productItemType=_productItemType - In the implementation block
@property (nonatomic,readonly) FBPaymentsSelectPaymentMethodsActionProvider * actionProvider;                                //@synthesize actionProvider=_actionProvider - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsSelectPaymentMethodsListSectionActionDelegate> actionDelegate;              //@synthesize actionDelegate=_actionDelegate - In the implementation block
@property (nonatomic,retain) id<FBPaymentsSelectPaymentMethodsViewModelCreator> viewModelCreator;                            //@synthesize viewModelCreator=_viewModelCreator - In the implementation block
@property (assign,nonatomic) unsigned contentMask;                                                                           //@synthesize contentMask=_contentMask - In the implementation block
@property (nonatomic,copy) NSArray * acceptedPaymentMethodOptions;                                                           //@synthesize acceptedPaymentMethodOptions=_acceptedPaymentMethodOptions - In the implementation block
@property (assign,nonatomic) char shouldShowSectionHeader;                                                                   //@synthesize shouldShowSectionHeader=_shouldShowSectionHeader - In the implementation block
@property (assign,nonatomic) char shouldEnableSelection;                                                                     //@synthesize shouldEnableSelection=_shouldEnableSelection - In the implementation block
@property (assign,nonatomic) char shouldEnableDetailTextForPaymentMethod;                                                    //@synthesize shouldEnableDetailTextForPaymentMethod=_shouldEnableDetailTextForPaymentMethod - In the implementation block
@property (assign,nonatomic) char shouldShowPaymentMethodOptionIcons;                                                        //@synthesize shouldShowPaymentMethodOptionIcons=_shouldShowPaymentMethodOptionIcons - In the implementation block
@property (assign,nonatomic) int paymentMethodCellStyle;                                                                     //@synthesize paymentMethodCellStyle=_paymentMethodCellStyle - In the implementation block
@property (nonatomic,copy) id<FBPaymentsPaymentMethod> selectedPaymentMethod;                                                //@synthesize selectedPaymentMethod=_selectedPaymentMethod - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsTableViewSectionDelegate> sectionDelegate;                                  //@synthesize sectionDelegate=_sectionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;                                     //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
-(char)shouldHighlightCellForRowAtIndex:(unsigned)arg1 ;
-(void)didUpdateWithAnnouncerIdentifier:(id)arg1 ;
-(id)newNavigationController;
-(void)paymentMethodOptionSelectAction:(id)arg1 didAddPaymentMethod:(id)arg2 ;
-(void)handleSelectActionForRowAtIndex:(unsigned)arg1 ;
-(NSString *)productItemType;
-(id)sectionHeaderViewModel;
-(id)cellForSectionRowAtIndex:(unsigned)arg1 ;
-(float)heightForSectionRowAtIndex:(unsigned)arg1 ;
-(void)setSelectedPaymentMethod:(id<FBPaymentsPaymentMethod>)arg1 ;
-(void)_syncExistingPaymentMethodsDataLoadingStatus;
-(void)_syncPaymentMethodOptionsProviderDataLoadingStatus;
-(void)_reloadExistingPaymentMethods;
-(void)_reloadEligiblePaymentMethodOptions;
-(char)_isLoadingData;
-(id)_cellIdentifierForRowIndex:(unsigned)arg1 ;
-(id)_paymentMethodCellViewModelForRowIndex:(unsigned)arg1 ;
-(id)_paymentMethodOptionCellViewModelForRowIndex:(unsigned)arg1 ;
-(char)_isLoadingCellForRowIndex:(int)arg1 ;
-(id)_paymentMethodForRowIndex:(unsigned)arg1 ;
-(id)_paymentMethodOptionForRowIndex:(unsigned)arg1 ;
-(NSArray *)acceptedPaymentMethodOptions;
-(void)useDefaultViewPaymentMethodActions:(char)arg1 ;
-(id<FBPaymentsSelectPaymentMethodsViewModelCreator>)viewModelCreator;
-(void)setViewModelCreator:(id<FBPaymentsSelectPaymentMethodsViewModelCreator>)arg1 ;
-(unsigned)contentMask;
-(char)shouldShowSectionHeader;
-(char)shouldEnableSelection;
-(char)shouldEnableDetailTextForPaymentMethod;
-(char)shouldShowPaymentMethodOptionIcons;
-(void)setShouldShowPaymentMethodOptionIcons:(char)arg1 ;
-(int)paymentMethodCellStyle;
-(id)initWithSession:(id)arg1 paymentMethodsCoordinator:(id)arg2 ;
-(void)setProductItemType:(NSString *)arg1 ;
-(void)setAcceptedPaymentMethodOptions:(NSArray *)arg1 ;
-(void)setShouldEnableSelection:(char)arg1 ;
-(void)setShouldEnableDetailTextForPaymentMethod:(char)arg1 ;
-(void)setPaymentMethodCellStyle:(int)arg1 ;
-(void)setContentMask:(unsigned)arg1 ;
-(void)setShouldShowSectionHeader:(char)arg1 ;
-(void)useDefaultAddPaymentMethodActions:(char)arg1 withPresentingStyle:(int)arg2 shouldReturnToListIfSucceeded:(char)arg3 completionBlock:(/*^block*/id)arg4 ;
-(FBPaymentsSelectPaymentMethodsActionProvider *)actionProvider;
-(id<FBPaymentsPaymentMethod>)selectedPaymentMethod;
-(id<FBPaymentsSelectPaymentMethodsListSectionActionDelegate>)actionDelegate;
-(void)setActionDelegate:(id<FBPaymentsSelectPaymentMethodsListSectionActionDelegate>)arg1 ;
-(void)dealloc;
-(unsigned)numberOfRows;
-(void)setSectionDelegate:(id<FBPaymentsTableViewSectionDelegate>)arg1 ;
-(id<FBPaymentsTableViewSectionDelegate>)sectionDelegate;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
-(id)viewControllerForPresenting;
@end

