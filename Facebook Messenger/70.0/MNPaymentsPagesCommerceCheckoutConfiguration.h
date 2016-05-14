/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:50 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPaymentsCheckoutConfiguration.h>

@protocol FBPaymentsPayableDataModel;
@class FBUserSession, FBPaymentsPINController, FBPaymentsTouchIDController, NSString;

@interface MNPaymentsPagesCommerceCheckoutConfiguration : NSObject <FBPaymentsCheckoutConfiguration> {

	FBUserSession* _session;
	FBPaymentsPINController* _pinController;
	FBPaymentsTouchIDController* _touchIDController;
	id<FBPaymentsPayableDataModel> _checkoutDataModel;

}

@property (nonatomic,copy) id<FBPaymentsPayableDataModel> checkoutDataModel;              //@synthesize checkoutDataModel=_checkoutDataModel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 pinController:(id)arg2 touchIDController:(id)arg3 ;
-(id)requestProcessor;
-(id)contentConfiguration;
-(id)checkoutFlowLogger;
-(id)checkoutContextLoader;
-(id)confirmationConfigurationProvider;
-(id<FBPaymentsPayableDataModel>)checkoutDataModel;
-(void)setCheckoutDataModel:(id<FBPaymentsPayableDataModel>)arg1 ;
@end

