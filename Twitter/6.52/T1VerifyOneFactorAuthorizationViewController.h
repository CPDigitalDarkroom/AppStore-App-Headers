/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFNFormViewController.h>
#import <Twitter/T1VerifyPINFormDelegate.h>
#import <Twitter/T1AccountAdder.h>

@protocol T1VerifyOneFactorAuthorizationDelegate;
@class TFNTwitterCallToAction, T1VerifyPINForm, T1OnboardingFormFooterItem, TFNBarButtonItem, T1OneFactorAuthorizationRequest, NSString;

@interface T1VerifyOneFactorAuthorizationViewController : TFNFormViewController <T1VerifyPINFormDelegate, T1AccountAdder> {

	/*^block*/id _didAddAccountBlock;
	id<T1VerifyOneFactorAuthorizationDelegate> _delegate;
	TFNTwitterCallToAction* _callToAction;
	T1VerifyPINForm* _form;
	T1OnboardingFormFooterItem* _footerItem;
	TFNBarButtonItem* _loginBarButtonItem;
	unsigned _currentFactorType;
	T1OneFactorAuthorizationRequest* _request;

}

@property (nonatomic,readonly) TFNTwitterCallToAction * callToAction;                                 //@synthesize callToAction=_callToAction - In the implementation block
@property (nonatomic,readonly) T1VerifyPINForm * form;                                                //@synthesize form=_form - In the implementation block
@property (nonatomic,retain) T1OnboardingFormFooterItem * footerItem;                                 //@synthesize footerItem=_footerItem - In the implementation block
@property (nonatomic,retain) TFNBarButtonItem * loginBarButtonItem;                                   //@synthesize loginBarButtonItem=_loginBarButtonItem - In the implementation block
@property (assign,nonatomic) unsigned currentFactorType;                                              //@synthesize currentFactorType=_currentFactorType - In the implementation block
@property (nonatomic,readonly) T1OneFactorAuthorizationRequest * request;                             //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) id<T1VerifyOneFactorAuthorizationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id didAddAccountBlock;                                                     //@synthesize didAddAccountBlock=_didAddAccountBlock - In the implementation block
-(id)scribePage;
-(id)scribeSection;
-(TFNTwitterCallToAction *)callToAction;
-(void)verifyPINFormShouldSubmit:(id)arg1 ;
-(void)submitForm:(id)arg1 ;
-(unsigned)inputRequiredBehavior;
-(void)setLoginBarButtonItem:(TFNBarButtonItem *)arg1 ;
-(TFNBarButtonItem *)loginBarButtonItem;
-(id)didAddAccountBlock;
-(void)setDidAddAccountBlock:(id)arg1 ;
-(id)submitButton;
-(char)includesSubmitButtonAsItem;
-(void)setCurrentFactorType:(unsigned)arg1 ;
-(void)_scribeAction:(id)arg1 component:(id)arg2 element:(id)arg3 ;
-(void)_logInTapped;
-(void)_didNotReceiveCode;
-(unsigned)currentFactorType;
-(void)_resendCode;
-(void)_logInWithOtherFactor;
-(id)initWithFactorType:(unsigned)arg1 emailFactor:(id)arg2 smsFactor:(id)arg3 userIdentifier:(id)arg4 verificationRequestID:(id)arg5 ;
-(char)tfn_prefersNavigationBarShadowHidden;
-(char)tfn_logoTitleViewShown;
-(id)scribe;
-(id)doneBarButtonItem;
-(void)setDelegate:(id<T1VerifyOneFactorAuthorizationDelegate>)arg1 ;
-(id<T1VerifyOneFactorAuthorizationDelegate>)delegate;
-(T1OneFactorAuthorizationRequest *)request;
-(void)viewDidLoad;
-(T1VerifyPINForm *)form;
-(id)initWithRequest:(id)arg1 ;
-(void)setSections:(id)arg1 ;
-(id)footerItems;
-(T1OnboardingFormFooterItem *)footerItem;
-(void)setFooterItem:(T1OnboardingFormFooterItem *)arg1 ;
@end

