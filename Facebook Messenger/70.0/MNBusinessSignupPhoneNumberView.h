/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol MNBusinessSignupPhoneNumberViewDelegate;
@class MNBusinessSignupPhoneNumberFormView, LPPhoneNumberMetadata, MNHeaderView, MNStackedContainerView, MNButton, NSString;

@interface MNBusinessSignupPhoneNumberView : UIView <UITextFieldDelegate> {

	MNBusinessSignupPhoneNumberFormView* _phoneNumberFormView;
	LPPhoneNumberMetadata* _phoneNumberMetadata;
	MNHeaderView* _headerView;
	MNStackedContainerView* _stackedContainerView;
	MNButton* _continueButton;
	id<MNBusinessSignupPhoneNumberViewDelegate> _delegate;

}

@property (nonatomic,readonly) MNStackedContainerView * stackedContainerView;                          //@synthesize stackedContainerView=_stackedContainerView - In the implementation block
@property (nonatomic,readonly) MNButton * continueButton;                                              //@synthesize continueButton=_continueButton - In the implementation block
@property (assign,nonatomic,__weak) id<MNBusinessSignupPhoneNumberViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MNButton *)continueButton;
-(MNStackedContainerView *)stackedContainerView;
-(void)displayKeyboard;
-(id)phoneNumberTextField;
-(void)setCallingCodeWithISOCountryCode:(id)arg1 ;
-(void)setCallingCode:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNBusinessSignupPhoneNumberViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNBusinessSignupPhoneNumberViewDelegate>)delegate;
-(char)textFieldShouldBeginEditing:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldClear:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)hideKeyboard;
@end

