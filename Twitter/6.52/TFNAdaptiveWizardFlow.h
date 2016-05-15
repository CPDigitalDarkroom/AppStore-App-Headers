/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TFNAdaptiveWizardFlowDelegate;
@class TFNTwitterAccount, TFNAdaptiveWizardNavigationController, NSString, NSArray, TFNAdaptiveWizardStep;

@interface TFNAdaptiveWizardFlow : NSObject {

	TFNTwitterAccount* _account;
	TFNAdaptiveWizardNavigationController* _navigationController;
	NSString* _contextName;
	id<TFNAdaptiveWizardFlowDelegate> _delegate;
	NSArray* _steps;
	int _presentationStyle;
	int _nextIndex;
	TFNAdaptiveWizardStep* _currentStep;
	NSString* _restartToken;

}

@property (assign,nonatomic) int nextIndex;                                                                      //@synthesize nextIndex=_nextIndex - In the implementation block
@property (nonatomic,retain) TFNAdaptiveWizardStep * currentStep;                                                //@synthesize currentStep=_currentStep - In the implementation block
@property (nonatomic,copy) NSString * restartToken;                                                              //@synthesize restartToken=_restartToken - In the implementation block
@property (nonatomic,readonly) TFNTwitterAccount * account;                                                      //@synthesize account=_account - In the implementation block
@property (nonatomic,__weak,readonly) TFNAdaptiveWizardNavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,copy) NSString * contextName;                                                               //@synthesize contextName=_contextName - In the implementation block
@property (assign,nonatomic,__weak) id<TFNAdaptiveWizardFlowDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * steps;                                                                  //@synthesize steps=_steps - In the implementation block
@property (assign,nonatomic) int presentationStyle;                                                              //@synthesize presentationStyle=_presentationStyle - In the implementation block
-(void)evaluateNextStep;
-(void)launchAdaptiveFlowFromController:(id)arg1 ;
-(void)skipToNextStep;
-(void)launchAdaptiveFlowFromController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)completeFlow;
-(void)completeFlowAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)endEvaluationWindow;
-(char)hasMoreSteps;
-(NSString *)restartToken;
-(void)setRestartToken:(NSString *)arg1 ;
-(char)isEvaluating;
-(void)stopEvaluating;
-(void)decrementIndex;
-(void)resetIndex;
-(void)setNextIndex:(int)arg1 ;
-(void)setCurrentStep:(TFNAdaptiveWizardStep *)arg1 ;
-(NSString *)contextName;
-(void)setContextName:(NSString *)arg1 ;
-(void)setPresentationStyle:(int)arg1 ;
-(void)setDelegate:(id<TFNAdaptiveWizardFlowDelegate>)arg1 ;
-(id)init;
-(id<TFNAdaptiveWizardFlowDelegate>)delegate;
-(int)presentationStyle;
-(TFNAdaptiveWizardNavigationController *)navigationController;
-(char)isAtEnd;
-(NSArray *)steps;
-(TFNAdaptiveWizardStep *)currentStep;
-(int)nextIndex;
-(void)incrementIndex;
-(TFNTwitterAccount *)account;
@end

