/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:38 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/T1OnboardingFlowPromptController.h>

@interface T1OnboardingRecommendationsPromptViewController : T1OnboardingFlowPromptController {

	 chooseCallback;
	 followAllCallback;
	 bucket;
	 count;

}

@property (copy,nonatomic) id chooseCallback; 
@property (copy,nonatomic) id followAllCallback; 
-(id)initWithUserGrid:(id)arg1 chooseCallback:(/*^block*/id)arg2 followAllCallback:(/*^block*/id)arg3 ;
-(id)chooseCallback;
-(void)setChooseCallback:(id)arg1 ;
-(id)followAllCallback;
-(void)setFollowAllCallback:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

