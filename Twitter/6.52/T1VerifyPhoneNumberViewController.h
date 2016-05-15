/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNFormViewController.h>
#import <Twitter/T1VerifyPINFormDelegate.h>
#import <Twitter/TFNTwitterAuthenticated.h>

@protocol T1VerifyPhoneNumberDelegateProtocol;
@class TFNTwitterAccount, TFNTwitterCallToAction, NSString, TFNDataViewItemInfo, T1VerifyPINForm, TFNBarButtonItem;

@interface T1VerifyPhoneNumberViewController : TFNFormViewController <T1VerifyPINFormDelegate, TFNTwitterAuthenticated> {

	char _implicitSMSOptInAllowed;
	TFNTwitterAccount* _account;
	TFNTwitterCallToAction* _callToAction;
	id<T1VerifyPhoneNumberDelegateProtocol> _delegate;
	NSString* _phoneNumberString;
	NSString* _scribePage;
	TFNDataViewItemInfo* _resendStringItem;
	T1VerifyPINForm* _verifyPINForm;
	TFNBarButtonItem* _verifyButton;
	unsigned _mode;

}

@property (nonatomic,readonly) TFNTwitterCallToAction * callToAction;                              //@synthesize callToAction=_callToAction - In the implementation block
@property (nonatomic,retain) TFNDataViewItemInfo * resendStringItem;                               //@synthesize resendStringItem=_resendStringItem - In the implementation block
@property (nonatomic,retain) T1VerifyPINForm * verifyPINForm;                                      //@synthesize verifyPINForm=_verifyPINForm - In the implementation block
@property (nonatomic,retain) TFNBarButtonItem * verifyButton;                                      //@synthesize verifyButton=_verifyButton - In the implementation block
@property (nonatomic,readonly) unsigned mode;                                                      //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic,__weak) id<T1VerifyPhoneNumberDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char implicitSMSOptInAllowed;                                         //@synthesize implicitSMSOptInAllowed=_implicitSMSOptInAllowed - In the implementation block
@property (nonatomic,copy) NSString * phoneNumberString;                                           //@synthesize phoneNumberString=_phoneNumberString - In the implementation block
@property (nonatomic,copy) NSString * scribePage;                                                  //@synthesize scribePage=_scribePage - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account;                                          //@synthesize account=_account - In the implementation block
-(NSString *)scribePage;
-(TFNTwitterCallToAction *)callToAction;
-(void)setScribePage:(NSString *)arg1 ;
-(id)initWithPhoneNumber:(id)arg1 mode:(unsigned)arg2 ;
-(void)_verifyTapped;
-(void)_resendSMS:(id)arg1 ;
-(void)setVerifyButton:(TFNBarButtonItem *)arg1 ;
-(NSString *)phoneNumberString;
-(TFNBarButtonItem *)verifyButton;
-(void)verifyPINFormShouldSubmit:(id)arg1 ;
-(T1VerifyPINForm *)verifyPINForm;
-(void)submitForm:(id)arg1 ;
-(char)addsDoneBarButtonButtonItemToNavigationBar;
-(CGRect)additionalGutterFrame;
-(unsigned)inputRequiredBehavior;
-(char)implicitSMSOptInAllowed;
-(void)setImplicitSMSOptInAllowed:(char)arg1 ;
-(void)setPhoneNumberString:(NSString *)arg1 ;
-(TFNDataViewItemInfo *)resendStringItem;
-(void)setResendStringItem:(TFNDataViewItemInfo *)arg1 ;
-(void)setVerifyPINForm:(T1VerifyPINForm *)arg1 ;
-(id)doneBarButtonItem;
-(id)initWithPhoneNumber:(id)arg1 ;
-(void)setDelegate:(id<T1VerifyPhoneNumberDelegateProtocol>)arg1 ;
-(void)dealloc;
-(id<T1VerifyPhoneNumberDelegateProtocol>)delegate;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(unsigned)mode;
-(void)setSections:(id)arg1 ;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(TFNTwitterAccount *)account;
@end

