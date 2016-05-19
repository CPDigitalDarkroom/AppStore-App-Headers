/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:27 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTAccountControllerProductActivation.h>

@class SPTAccountDeferredTrialController;

@interface SPTAccountController7DayTrialProductActivation : SPTAccountControllerProductActivation {

	SPTAccountDeferredTrialController* _deferredTrialController;

}

@property (nonatomic,readonly) SPTAccountDeferredTrialController * deferredTrialController;              //@synthesize deferredTrialController=_deferredTrialController - In the implementation block
-(void)trialEligibilityStateDidChange;
-(SPTAccountDeferredTrialController *)deferredTrialController;
-(id)initWithDeferredTrialController:(id)arg1 delegate:(id)arg2 ;
-(void)start;
@end

