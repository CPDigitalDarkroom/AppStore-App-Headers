/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableString, NSCharacterSet, NSString, NSDecimalNumber;

@interface MNPaymentsPeerToPeerAmountInputHandler : NSObject {

	NSMutableString* _rawAmount;
	NSCharacterSet* _invertedDigitsAndDotCharacterSet;

}

@property (nonatomic,copy,readonly) NSString * amountText; 
@property (nonatomic,copy,readonly) NSDecimalNumber * amount; 
-(id)initWithInitialAmount:(id)arg1 ;
-(void)completeAmount;
-(char)isEqualToZero;
-(NSString *)amountText;
-(id)clearText;
-(id)insertText:(id)arg1 ;
-(id)deleteBackward;
-(NSDecimalNumber *)amount;
@end

