/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:47 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTAccountTrialControllerDelegate.h>

@protocol SPTAccountProductInformationController, SPTAccountUserInformation, SPTAbbaFeatureFlags, SPTImageLoader, SPTNowPlayingVideoManager, SPTUpsellManager;
@class SPTDataLoader, SPTNowPlayingVideoManagerProxy, SPTLogCenter, NSString;

@interface SPTUpsellTrialManager : NSObject <SPTAccountTrialControllerDelegate> {

	id<SPTAccountProductInformationController> _productInformationController;
	id<SPTAccountUserInformation> _userInformation;
	id<SPTAbbaFeatureFlags> _featureFlags;
	SPTDataLoader* _dataLoader;
	id<SPTImageLoader> _imageLoader;
	SPTNowPlayingVideoManagerProxy*<SPTNowPlayingVideoManager> _proxiedVideoManager;
	SPTLogCenter* _logCenter;
	id<SPTUpsellManager> _generalManager;

}

@property (nonatomic,readonly) id<SPTAccountProductInformationController> productInformationController;                     //@synthesize productInformationController=_productInformationController - In the implementation block
@property (nonatomic,readonly) id<SPTAccountUserInformation> userInformation;                                               //@synthesize userInformation=_userInformation - In the implementation block
@property (nonatomic,readonly) id<SPTAbbaFeatureFlags> featureFlags;                                                        //@synthesize featureFlags=_featureFlags - In the implementation block
@property (nonatomic,readonly) SPTDataLoader * dataLoader;                                                                  //@synthesize dataLoader=_dataLoader - In the implementation block
@property (nonatomic,readonly) id<SPTImageLoader> imageLoader;                                                              //@synthesize imageLoader=_imageLoader - In the implementation block
@property (nonatomic,readonly) SPTNowPlayingVideoManagerProxy*<SPTNowPlayingVideoManager> proxiedVideoManager;              //@synthesize proxiedVideoManager=_proxiedVideoManager - In the implementation block
@property (nonatomic,readonly) SPTLogCenter * logCenter;                                                                    //@synthesize logCenter=_logCenter - In the implementation block
@property (assign,nonatomic,__weak) id<SPTUpsellManager> generalManager;                                                    //@synthesize generalManager=_generalManager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SPTLogCenter *)logCenter;
-(id<SPTImageLoader>)imageLoader;
-(SPTDataLoader *)dataLoader;
-(id<SPTAbbaFeatureFlags>)featureFlags;
-(id<SPTAccountProductInformationController>)productInformationController;
-(char)trialControllerShouldShowTrialStarted:(id)arg1 ;
-(char)trialControllerShouldShowTrialEnded:(id)arg1 ;
-(void)attemptToPresentTrialStartedPromotion;
-(void)attemptToPresentTrialEndedPromotion;
-(char)trialStartedRequirement;
-(SPTNowPlayingVideoManagerProxy*<SPTNowPlayingVideoManager>)proxiedVideoManager;
-(id<SPTUpsellManager>)generalManager;
-(char)trialEndedRequirement;
-(id)initWithProductInformationController:(id)arg1 userInformation:(id)arg2 featureFlags:(id)arg3 dataLoader:(id)arg4 imageLoader:(id)arg5 videoManager:(id)arg6 logCenter:(id)arg7 generalManager:(id)arg8 ;
-(void)setGeneralManager:(id<SPTUpsellManager>)arg1 ;
-(id<SPTAccountUserInformation>)userInformation;
-(id)settingForKey:(id)arg1 ;
-(void)setSetting:(id)arg1 forKey:(id)arg2 ;
@end

