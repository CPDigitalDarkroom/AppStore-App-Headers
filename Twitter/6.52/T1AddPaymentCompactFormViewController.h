/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:29 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFNFormViewController.h>
#import <Twitter/TFNHTMLTextViewDelegate.h>

@protocol T1AddPaymentMethodDelegate;
@class TFNButton, TFNHTMLTextView, NSString, TFNTwitterAccount, TFNTwitterStatus, TFNHUD, T1AddPaymentCompactForm, TFNAttributedTextView;

@interface T1AddPaymentCompactFormViewController : TFNFormViewController <TFNHTMLTextViewDelegate> {

	TFNButton* _submitButton;
	TFNHTMLTextView* _legalSubtextView;
	NSString* _scribePage;
	NSString* _scribeSection;
	char _editing;
	char _shippingRequired;
	char _didCompleteSuccessfully;
	id<T1AddPaymentMethodDelegate> _delegate;
	TFNTwitterAccount* _account;
	TFNTwitterStatus* _status;
	TFNHUD* _hud;
	T1AddPaymentCompactForm* _addPaymentForm;

}

@property (nonatomic,readonly) TFNTwitterAccount * account;                               //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) TFNTwitterStatus * status;                                 //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) char editing;                                              //@synthesize editing=_editing - In the implementation block
@property (nonatomic,readonly) char shippingRequired;                                     //@synthesize shippingRequired=_shippingRequired - In the implementation block
@property (assign,nonatomic) char didCompleteSuccessfully;                                //@synthesize didCompleteSuccessfully=_didCompleteSuccessfully - In the implementation block
@property (nonatomic,readonly) TFNHUD * hud;                                              //@synthesize hud=_hud - In the implementation block
@property (nonatomic,readonly) T1AddPaymentCompactForm * addPaymentForm;                  //@synthesize addPaymentForm=_addPaymentForm - In the implementation block
@property (nonatomic,readonly) TFNAttributedTextView * legalSubtextView; 
@property (assign,nonatomic,__weak) id<T1AddPaymentMethodDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)scribePage;
-(id)scribeSection;
-(void)submitForm:(id)arg1 ;
-(id)submitButton;
-(void)htmlTextView:(id)arg1 didTapLink:(id)arg2 ;
-(void)htmlTextViewHandleUserAccessibilityTap:(id)arg1 ;
-(TFNAttributedTextView *)legalSubtextView;
-(id)inputValuePickerViewControllerForType:(unsigned)arg1 ;
-(id)initWithAccount:(id)arg1 status:(id)arg2 edit:(char)arg3 checkForUpgrade:(char)arg4 shippingAddressRequired:(char)arg5 allowedCountries:(id)arg6 scribePage:(id)arg7 scribeSection:(id)arg8 ;
-(char)shippingRequired;
-(T1AddPaymentCompactForm *)addPaymentForm;
-(void)didFinishCreditCard:(id)arg1 ;
-(void)_hideSensitiveData:(id)arg1 ;
-(char)didCompleteSuccessfully;
-(void)setDidCompleteSuccessfully:(char)arg1 ;
-(void)_goToTwitterPrivacyPolicy;
-(id)initWithAccount:(id)arg1 status:(id)arg2 scribePage:(id)arg3 scribeSection:(id)arg4 ;
-(void)_cancel:(id)arg1 ;
-(void)setDelegate:(id<T1AddPaymentMethodDelegate>)arg1 ;
-(void)dealloc;
-(id<T1AddPaymentMethodDelegate>)delegate;
-(char)editing;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(TFNTwitterStatus *)status;
-(TFNHUD *)hud;
-(id)footerItems;
-(TFNTwitterAccount *)account;
@end

