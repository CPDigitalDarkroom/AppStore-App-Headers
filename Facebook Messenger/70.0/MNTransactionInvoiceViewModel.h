/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:53 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor;

@interface MNTransactionInvoiceViewModel : FBValueObject <NSCopying> {

	NSString* _invoiceID;
	NSString* _contextID;
	NSString* _productName;
	NSString* _productImageURI;
	NSString* _price;
	NSString* _transactionStatus;
	UIColor* _transactionStatusColor;

}

@property (nonatomic,copy,readonly) NSString * invoiceID;                          //@synthesize invoiceID=_invoiceID - In the implementation block
@property (nonatomic,copy,readonly) NSString * contextID;                          //@synthesize contextID=_contextID - In the implementation block
@property (nonatomic,copy,readonly) NSString * productName;                        //@synthesize productName=_productName - In the implementation block
@property (nonatomic,copy,readonly) NSString * productImageURI;                    //@synthesize productImageURI=_productImageURI - In the implementation block
@property (nonatomic,copy,readonly) NSString * price;                              //@synthesize price=_price - In the implementation block
@property (nonatomic,copy,readonly) NSString * transactionStatus;                  //@synthesize transactionStatus=_transactionStatus - In the implementation block
@property (nonatomic,copy,readonly) UIColor * transactionStatusColor;              //@synthesize transactionStatusColor=_transactionStatusColor - In the implementation block
-(NSString *)invoiceID;
-(UIColor *)transactionStatusColor;
-(NSString *)productImageURI;
-(id)initWithInvoiceID:(id)arg1 contextID:(id)arg2 productName:(id)arg3 productImageURI:(id)arg4 price:(id)arg5 transactionStatus:(id)arg6 transactionStatusColor:(id)arg7 ;
-(NSString *)contextID;
-(NSString *)price;
-(NSString *)productName;
-(NSString *)transactionStatus;
@end

