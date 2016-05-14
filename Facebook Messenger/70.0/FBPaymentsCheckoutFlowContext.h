/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPaymentsPayableDataModel, FBPaymentsPeerToPeerSendFlowControllerDelegate, FBPaymentsPostCheckoutFlowProcessor, FBPaymentsCheckoutFlowLogger, FBPaymentsCheckoutPlatformContextLoader;
@interface FBPaymentsCheckoutFlowContext : NSObject {

	id<FBPaymentsPayableDataModel> _payableDataModel;
	id<FBPaymentsPeerToPeerSendFlowControllerDelegate> _delegate;
	int _dismissingStyle;
	id<FBPaymentsPostCheckoutFlowProcessor> _postCheckoutProcessor;
	id<FBPaymentsCheckoutFlowLogger> _checkoutFlowLogger;
	id<FBPaymentsCheckoutPlatformContextLoader> _checkoutContextLoader;

}

@property (nonatomic,readonly) id<FBPaymentsPayableDataModel> payableDataModel;                                 //@synthesize payableDataModel=_payableDataModel - In the implementation block
@property (nonatomic,__weak,readonly) id<FBPaymentsPeerToPeerSendFlowControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int dismissingStyle;                                                             //@synthesize dismissingStyle=_dismissingStyle - In the implementation block
@property (nonatomic,readonly) id<FBPaymentsPostCheckoutFlowProcessor> postCheckoutProcessor;                   //@synthesize postCheckoutProcessor=_postCheckoutProcessor - In the implementation block
@property (nonatomic,readonly) id<FBPaymentsCheckoutFlowLogger> checkoutFlowLogger;                             //@synthesize checkoutFlowLogger=_checkoutFlowLogger - In the implementation block
@property (nonatomic,readonly) id<FBPaymentsCheckoutPlatformContextLoader> checkoutContextLoader;               //@synthesize checkoutContextLoader=_checkoutContextLoader - In the implementation block
-(id<FBPaymentsCheckoutFlowLogger>)checkoutFlowLogger;
-(id<FBPaymentsCheckoutPlatformContextLoader>)checkoutContextLoader;
-(int)dismissingStyle;
-(id)initWithPayableDataModel:(id)arg1 delegate:(id)arg2 dismissingStyle:(int)arg3 postCheckoutProcessor:(id)arg4 checkoutFlowLogger:(id)arg5 checkoutContextLoader:(id)arg6 ;
-(id<FBPaymentsPayableDataModel>)payableDataModel;
-(id<FBPaymentsPostCheckoutFlowProcessor>)postCheckoutProcessor;
-(id<FBPaymentsPeerToPeerSendFlowControllerDelegate>)delegate;
@end

