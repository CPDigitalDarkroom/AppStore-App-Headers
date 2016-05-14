/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:50 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNPaymentsSetupStackableView.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNPaymentsMessageWithLinkViewDelegate.h>

@protocol MNPaymentsMessageWithLinkView, MNPaymentsSetupAddCardViewDelegate;
@class FBPaymentsSimpleFormView, UIView, MNButton, FBPaymentsHorizontalSeparatorView, NSString;

@interface MNPaymentsSetupAddCardView : MNPaymentsSetupStackableView <MNPaymentsMessageWithLinkViewDelegate> {

	FBPaymentsSimpleFormView* _addCardFormView;
	UIView*<MNPaymentsMessageWithLinkView> _lockSecurityMessageView;
	MNButton* _addCardButton;
	FBPaymentsHorizontalSeparatorView* _keyboardSeparatorView;
	char _shouldShowAddCardButton;
	id<MNPaymentsSetupAddCardViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNPaymentsSetupAddCardViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char shouldShowAddCardButton;                                        //@synthesize shouldShowAddCardButton=_shouldShowAddCardButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didTapAddCard;
-(CGSize)minimumSizeThatFits:(CGSize)arg1 ;
-(void)paymentsMessageWithLinkView:(id)arg1 didTapURL:(id)arg2 ;
-(id)initWithCardFormView:(id)arg1 ;
-(void)setShouldShowAddCardButton:(char)arg1 ;
-(char)shouldShowAddCardButton;
-(void)setDelegate:(id<MNPaymentsSetupAddCardViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNPaymentsSetupAddCardViewDelegate>)delegate;
-(char)resignFirstResponder;
-(char)canResignFirstResponder;
-(id)inputAccessoryView;
@end

