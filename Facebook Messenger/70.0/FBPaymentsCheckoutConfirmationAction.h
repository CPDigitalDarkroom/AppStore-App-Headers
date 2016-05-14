/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:59 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPaymentsCheckoutConfirmationAction <NSObject>
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate; 
@property (assign,nonatomic,__weak) id<FBPaymentsCheckoutConfirmationActionDelegate> actionDelegate; 
@required
-(char)isDisabledForCheckoutResponse:(id)arg1;
-(void)handleActionWithCheckoutResponse:(id)arg1 checkoutFlowCollectedData:(id)arg2;
-(id<FBPaymentsCheckoutConfirmationActionDelegate>)actionDelegate;
-(void)setActionDelegate:(id)arg1;
-(id)actionTitle;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id)arg1;

@end

