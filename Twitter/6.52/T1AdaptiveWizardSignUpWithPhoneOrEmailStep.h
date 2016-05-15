/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:32 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFNAdaptiveWizardStep.h>
#import <Twitter/T1EnterEmailViewControllerDelegate.h>
#import <Twitter/T1EnterPhoneViewControllerDelegate.h>
#import <Twitter/T1VerifyPhoneViewControllerDelegate.h>
#import <Twitter/T1AccountCreator.h>

@class NSString, TFNPhoneNumberFormatter;

@interface T1AdaptiveWizardSignUpWithPhoneOrEmailStep : TFNAdaptiveWizardStep <T1EnterEmailViewControllerDelegate, T1EnterPhoneViewControllerDelegate, T1VerifyPhoneViewControllerDelegate, T1AccountCreator> {

	char _poppedFirstViewController;
	/*^block*/id _didAddAccountBlock;
	TFNPhoneNumberFormatter* _phoneNumberFormatter;

}

@property (nonatomic,readonly) TFNPhoneNumberFormatter * phoneNumberFormatter;              //@synthesize phoneNumberFormatter=_phoneNumberFormatter - In the implementation block
@property (assign,nonatomic) char poppedFirstViewController;                                //@synthesize poppedFirstViewController=_poppedFirstViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id didAddAccountBlock;                                           //@synthesize didAddAccountBlock=_didAddAccountBlock - In the implementation block
@property (nonatomic,readonly) NSString * scribeSection; 
-(NSString *)scribeSection;
-(id)didAddAccountBlock;
-(void)setDidAddAccountBlock:(id)arg1 ;
-(void)evaluateWithController:(id)arg1 ;
-(TFNPhoneNumberFormatter *)phoneNumberFormatter;
-(id)_signUpInfoProvider;
-(void)enterEmailViewController:(id)arg1 enteredEmail:(id)arg2 uiMetricResult:(id)arg3 ;
-(void)mandatoryPhoneSignUpViewController:(id)arg1 didTapShowAdvancedOptions:(id)arg2 ;
-(void)didTapUsePhoneInstead:(id)arg1 ;
-(void)enterPhoneViewController:(id)arg1 enteredPhone:(id)arg2 normalizedPhone:(id)arg3 uiMetricResult:(id)arg4 ;
-(void)didTapUseEmailInstead:(id)arg1 ;
-(void)didTapDidNotReceiveSMS:(id)arg1 sender:(id)arg2 ;
-(void)verifyPhoneViewController:(id)arg1 verifyPhoneWithForm:(id)arg2 ;
-(void)handleSuccessWithMissingLoginToken;
-(void)handleSuccessWithAccount:(id)arg1 ;
-(char)_shouldShowEmailSignUpForCountryCode:(id)arg1 ;
-(void)_scribeSimCardInformationWithCarrier:(id)arg1 scribePage:(id)arg2 ;
-(void)_createAccountWithPhoneSignUp:(char)arg1 ;
-(void)setPoppedFirstViewController:(char)arg1 ;
-(void)_beginPhoneVerification:(id)arg1 ;
-(void)_popAndPushEnterEmailViewController;
-(void)_handleBeginPhoneVerificationError:(id)arg1 scribePage:(id)arg2 scribeComponent:(id)arg3 ;
-(void)_resendSMSWithInfo:(id)arg1 ;
-(void)_handleCompletePhoneVerificationError:(id)arg1 withScribeComponent:(id)arg2 ;
-(char)poppedFirstViewController;
-(id)_signUpErrorMessage:(id)arg1 ;
-(id)_autogeneratedPassword;
-(id)init;
-(void)handleFailureWithError:(id)arg1 ;
@end

