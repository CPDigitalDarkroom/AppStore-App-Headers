/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFNAdaptiveWizardFlow.h>

@class TFNTwitterAccount, NSArray, T1MandatoryPhoneSignUpInfoProvider, T1AdaptiveSpammyPhoneChallengeFlow, NSString;

@interface T1AdaptiveSignUpFlow : TFNAdaptiveWizardFlow {

	TFNTwitterAccount* _account;
	NSArray* _steps;
	T1MandatoryPhoneSignUpInfoProvider* _mandatoryPhoneSignUpInfo;
	int _signupStepCount;
	T1AdaptiveSpammyPhoneChallengeFlow* _spammySubFlow;
	unsigned _type;

}

@property (nonatomic,retain) TFNTwitterAccount * account;                                                //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) int signupStepCount;                                                        //@synthesize signupStepCount=_signupStepCount - In the implementation block
@property (nonatomic,retain) T1AdaptiveSpammyPhoneChallengeFlow * spammySubFlow;                         //@synthesize spammySubFlow=_spammySubFlow - In the implementation block
@property (nonatomic,retain) NSArray * steps;                                                            //@synthesize steps=_steps - In the implementation block
@property (assign,nonatomic) unsigned type;                                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * scribeComponent; 
@property (nonatomic,retain) T1MandatoryPhoneSignUpInfoProvider * mandatoryPhoneSignUpInfo;              //@synthesize mandatoryPhoneSignUpInfo=_mandatoryPhoneSignUpInfo - In the implementation block
-(NSString *)scribeComponent;
-(T1MandatoryPhoneSignUpInfoProvider *)mandatoryPhoneSignUpInfo;
-(id)initWithSignUpType:(unsigned)arg1 ;
-(id)initWithSignUpType:(unsigned)arg1 accountToResume:(id)arg2 ;
-(void)_stepController:(id)arg1 didAddAccount:(id)arg2 ;
-(void)_didRemoveAccount:(id)arg1 ;
-(T1AdaptiveSpammyPhoneChallengeFlow *)spammySubFlow;
-(void)completeFlowAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)_addOnboardingSteps;
-(void)_handleSuspendedAccountWithController:(id)arg1 ;
-(int)signupStepCount;
-(void)setSpammySubFlow:(T1AdaptiveSpammyPhoneChallengeFlow *)arg1 ;
-(void)setMandatoryPhoneSignUpInfo:(T1MandatoryPhoneSignUpInfoProvider *)arg1 ;
-(void)setSignupStepCount:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(void)setSteps:(NSArray *)arg1 ;
-(NSArray *)steps;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(TFNTwitterAccount *)account;
@end

