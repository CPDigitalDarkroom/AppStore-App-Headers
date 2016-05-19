/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:34 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTGaiaOnboarding.h>

@protocol SPTGaiaOnboardingDelegate, SPTBannerPresentationManager, SPTBannerPresentationManagerTicket;
@class SPTGaiaDevice, SPTLogCenter, SPTGaiaDeviceAppearanceMapping, SPTTheme, NSString;

@interface SPTGaiaBannerOnboardingFlow : NSObject <SPTGaiaOnboarding> {

	id<SPTGaiaOnboardingDelegate> _delegate;
	SPTGaiaDevice* _onboardingDevice;
	id<SPTBannerPresentationManager> _bannerPresentationManager;
	SPTLogCenter* _logger;
	SPTGaiaDeviceAppearanceMapping* _iconMapper;
	SPTTheme* _theme;
	id<SPTBannerPresentationManagerTicket> _queuedTicket;

}

@property (nonatomic,retain) SPTGaiaDevice * onboardingDevice;                                          //@synthesize onboardingDevice=_onboardingDevice - In the implementation block
@property (nonatomic,readonly) id<SPTBannerPresentationManager> bannerPresentationManager;              //@synthesize bannerPresentationManager=_bannerPresentationManager - In the implementation block
@property (nonatomic,readonly) SPTLogCenter * logger;                                                   //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) SPTGaiaDeviceAppearanceMapping * iconMapper;                             //@synthesize iconMapper=_iconMapper - In the implementation block
@property (nonatomic,readonly) SPTTheme * theme;                                                        //@synthesize theme=_theme - In the implementation block
@property (nonatomic,retain) id<SPTBannerPresentationManagerTicket> queuedTicket;                       //@synthesize queuedTicket=_queuedTicket - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SPTGaiaOnboardingDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
-(id<SPTBannerPresentationManager>)bannerPresentationManager;
-(void)setOnboardingDevice:(SPTGaiaDevice *)arg1 ;
-(SPTGaiaDevice *)onboardingDevice;
-(void)presentItemForContext:(int)arg1 forDevice:(id)arg2 anchorView:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setOnboardingCompleted;
-(SPTGaiaDeviceAppearanceMapping *)iconMapper;
-(id<SPTBannerPresentationManagerTicket>)queuedTicket;
-(id)bannerItemForDevice:(id)arg1 ;
-(void)finishedOnboarding:(char)arg1 ;
-(void)setQueuedTicket:(id<SPTBannerPresentationManagerTicket>)arg1 ;
-(id)messageTitleForDevice:(id)arg1 ;
-(id)initWithBannerPresentationManager:(id)arg1 logger:(id)arg2 deviceIconMapper:(id)arg3 theme:(id)arg4 ;
-(SPTLogCenter *)logger;
-(void)setDelegate:(id<SPTGaiaOnboardingDelegate>)arg1 ;
-(id<SPTGaiaOnboardingDelegate>)delegate;
-(SPTTheme *)theme;
@end

