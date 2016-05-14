/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:50 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, FBRichTextView, FBPaymentsCurrencyQuantity;

@interface FBPaymentsCurrencyAndAmountView : UIView {

	UIImageView* _currencyImageView;
	FBRichTextView* _amountTextView;
	FBPaymentsCurrencyQuantity* _currencyQuantity;

}

@property (nonatomic,copy) FBPaymentsCurrencyQuantity * currencyQuantity;              //@synthesize currencyQuantity=_currencyQuantity - In the implementation block
+(CGSize)sizeWithCurrencyQuantity:(id)arg1 forWidth:(float)arg2 ;
-(void)setCurrencyQuantity:(FBPaymentsCurrencyQuantity *)arg1 ;
-(FBPaymentsCurrencyQuantity *)currencyQuantity;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

