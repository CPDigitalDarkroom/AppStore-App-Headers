/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>

@class UIView, FBRichTextView, FBPaymentsFormTextFieldView;

@interface FBPaymentsPeerToPeerRiskCVVBodyView : UIView {

	UIView* _separatorView;
	FBRichTextView* _cardNumbersLabelView;
	FBRichTextView* _cardNumberTextView;
	FBRichTextView* _cvvLabelView;
	FBPaymentsFormTextFieldView* _cvvInputView;

}

@property (nonatomic,readonly) FBPaymentsFormTextFieldView * cvvInputView;              //@synthesize cvvInputView=_cvvInputView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 cardLastFourDigits:(id)arg2 ;
-(FBPaymentsFormTextFieldView *)cvvInputView;
-(void)layoutSubviews;
@end

