/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:59 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPaymentsPurchaseInfoExtension <NSObject>
@property (assign,nonatomic,__weak) id<FBPaymentsPurchaseInfoExtensionDataSource> dataSource; 
@property (assign,nonatomic,__weak) id<FBPaymentsPurchaseInfoExtensionDelegate> delegate; 
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate; 
@required
+(id)extensionIdentifier;
-(id)detailedText;
-(void)handleTapAction;
-(void)resetForCancelingOngoingPayment;
-(char)hasMadeCriticalChanges;
-(id)fieldTitle;
-(id)fieldCollectedData;
-(char)needFollowUp;
-(void)handleFollowUpAction;
-(void)handleContextUpdates;
-(void)setDataSource:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id<FBPaymentsPurchaseInfoExtensionDataSource>)dataSource;
-(id<FBPaymentsPurchaseInfoExtensionDelegate>)delegate;
-(id)text;
-(int)status;
-(char)isHiddenExtension;
-(void)setUp;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id)arg1;

@end

