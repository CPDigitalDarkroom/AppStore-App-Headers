/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPaymentsPayableDataModel.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNPaymentsUserPayableDataModel.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, FBPaymentsCurrencyQuantity, FBMGroupThreadKey;

@interface MNPaymentsPeerToPeerCheckoutDataModel : FBValueObject <FBPaymentsPayableDataModel, MNPaymentsUserPayableDataModel, NSCopying> {

	NSString* _paymentRecipientFBID;
	NSString* _memoText;
	NSString* _themeId;
	NSString* _moneyRequestId;
	NSArray* _threadInviteeIds;
	FBPaymentsCurrencyQuantity* _initialAmount;
	FBMGroupThreadKey* _groupThreadKey;
	NSString* _checkoutInitiator;
	NSString* _entryPoint;
	NSArray* _checkoutConfigurationIdentifiers;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * styleIdentifier; 
@property (nonatomic,readonly) unsigned paymentPurpose; 
@property (nonatomic,readonly) FBPaymentsCurrencyQuantity * payableAmount; 
@property (nonatomic,copy,readonly) NSString * payableThemeId; 
@property (nonatomic,copy,readonly) NSString * checkoutInitiator; 
@property (nonatomic,copy,readonly) NSString * paymentRecipientFBID; 
@property (nonatomic,copy,readonly) NSString * entryPoint; 
@property (nonatomic,copy,readonly) NSString * paymentRecipientFBID;                         //@synthesize paymentRecipientFBID=_paymentRecipientFBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * memoText;                                     //@synthesize memoText=_memoText - In the implementation block
@property (nonatomic,copy,readonly) NSString * themeId;                                      //@synthesize themeId=_themeId - In the implementation block
@property (nonatomic,copy,readonly) NSString * moneyRequestId;                               //@synthesize moneyRequestId=_moneyRequestId - In the implementation block
@property (nonatomic,copy,readonly) NSArray * threadInviteeIds;                              //@synthesize threadInviteeIds=_threadInviteeIds - In the implementation block
@property (nonatomic,copy,readonly) FBPaymentsCurrencyQuantity * initialAmount;              //@synthesize initialAmount=_initialAmount - In the implementation block
@property (nonatomic,copy,readonly) FBMGroupThreadKey * groupThreadKey;                      //@synthesize groupThreadKey=_groupThreadKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * checkoutInitiator;                            //@synthesize checkoutInitiator=_checkoutInitiator - In the implementation block
@property (nonatomic,copy,readonly) NSString * entryPoint;                                   //@synthesize entryPoint=_entryPoint - In the implementation block
@property (nonatomic,copy,readonly) NSArray * checkoutConfigurationIdentifiers;              //@synthesize checkoutConfigurationIdentifiers=_checkoutConfigurationIdentifiers - In the implementation block
-(id)initWithPaymentRecipientFBID:(id)arg1 memoText:(id)arg2 themeId:(id)arg3 moneyRequestId:(id)arg4 threadInviteeIds:(id)arg5 initialAmount:(id)arg6 groupThreadKey:(id)arg7 checkoutInitiator:(id)arg8 entryPoint:(id)arg9 checkoutConfigurationIdentifiers:(id)arg10 ;
-(NSString *)memoText;
-(NSString *)styleIdentifier;
-(NSString *)themeId;
-(unsigned)paymentPurpose;
-(NSString *)payableThemeId;
-(NSString *)checkoutInitiator;
-(FBPaymentsCurrencyQuantity *)payableAmount;
-(FBPaymentsCurrencyQuantity *)initialAmount;
-(NSArray *)checkoutConfigurationIdentifiers;
-(NSString *)paymentRecipientFBID;
-(NSString *)moneyRequestId;
-(FBMGroupThreadKey *)groupThreadKey;
-(NSArray *)threadInviteeIds;
-(NSString *)entryPoint;
@end

