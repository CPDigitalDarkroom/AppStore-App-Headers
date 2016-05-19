/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:27 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTPaymentStateControllerObserver.h>

@protocol SPTBannerPresentationManager, SPTBannerPresentationManagerTicket, SPTLocalSettings, SPTPaymentStateController, SPTAccountProductInformationController;
@class SPTClientEventLogger, NSString;

@interface SPTAccountPaymentFailureController : NSObject <SPTPaymentStateControllerObserver> {

	char _active;
	id<SPTBannerPresentationManager> _bannerPresentationManager;
	id<SPTBannerPresentationManagerTicket> _paymentFailureNotificationBannerTicket;
	id<SPTLocalSettings> _localSettings;
	id<SPTPaymentStateController> _paymentStateController;
	id<SPTAccountProductInformationController> _productInformationController;
	SPTClientEventLogger* _clientEventLogger;

}

@property (assign,getter=isActive,nonatomic) char active;                                                                       //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) id<SPTBannerPresentationManager> bannerPresentationManager;                                      //@synthesize bannerPresentationManager=_bannerPresentationManager - In the implementation block
@property (assign,nonatomic,__weak) id<SPTBannerPresentationManagerTicket> paymentFailureNotificationBannerTicket;              //@synthesize paymentFailureNotificationBannerTicket=_paymentFailureNotificationBannerTicket - In the implementation block
@property (nonatomic,readonly) id<SPTLocalSettings> localSettings;                                                              //@synthesize localSettings=_localSettings - In the implementation block
@property (nonatomic,readonly) id<SPTPaymentStateController> paymentStateController;                                            //@synthesize paymentStateController=_paymentStateController - In the implementation block
@property (nonatomic,readonly) id<SPTAccountProductInformationController> productInformationController;                         //@synthesize productInformationController=_productInformationController - In the implementation block
@property (nonatomic,readonly) SPTClientEventLogger * clientEventLogger;                                                        //@synthesize clientEventLogger=_clientEventLogger - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SPTClientEventLogger *)clientEventLogger;
-(id<SPTLocalSettings>)localSettings;
-(id<SPTAccountProductInformationController>)productInformationController;
-(id<SPTPaymentStateController>)paymentStateController;
-(char)shouldPresentPaymentFailureNotificationForPaymentState:(id)arg1 ;
-(id<SPTBannerPresentationManagerTicket>)paymentFailureNotificationBannerTicket;
-(id<SPTBannerPresentationManager>)bannerPresentationManager;
-(void)resetPreviousPaymentFailureAttempt;
-(id)previousPaymentFailureAttemptDictionary;
-(void)presentPaymentFailureNotificationWithBannerItem:(id)arg1 retryAttempt:(int)arg2 ;
-(void)persistPaymentFailureAttempWithRetryAttempt:(int)arg1 wasDismissed:(char)arg2 ;
-(void)handlePaymentNotificationTicket:(id)arg1 statusChangeFromOldStatus:(int)arg2 retryAttempt:(int)arg3 ;
-(void)setPaymentFailureNotificationBannerTicket:(id<SPTBannerPresentationManagerTicket>)arg1 ;
-(void)presentPaymentFailureNotificationIfNeeded;
-(void)paymentStateControllerDidUpdatePaymentState:(id)arg1 ;
-(id)initWithPaymentStateController:(id)arg1 productInformationController:(id)arg2 bannerPresentationManager:(id)arg3 localSettings:(id)arg4 clientEventLogger:(id)arg5 ;
-(void)dealloc;
-(char)isActive;
-(void)stop;
-(void)start;
-(void)setActive:(char)arg1 ;
@end

