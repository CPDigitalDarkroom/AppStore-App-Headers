/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:37 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTLoginSignupMarketingOptInFlashControllerDelegate.h>
#import <Spotify/SPTService.h>

@protocol SPTClientSessionService, SPTCoreService, SPTCommunicationsFeature, SPTSettingsFeature, SPTKeystoreFeature, SPTLoginFeature;
@class SPTFacebookPostOpenGraphManager, SPTTermsAndConditionsManager, SPTLoginDeferredTermsController, SPTLoginSignupMarketingOptInFlashController, NSString, SPTAllocationContext;

@interface SPTLoginSessionFeatureImplementation : NSObject <SPTLoginSignupMarketingOptInFlashControllerDelegate, SPTService> {

	id<SPTClientSessionService> _clientSessionService;
	id<SPTCoreService> _coreService;
	id<SPTCommunicationsFeature> _communicationsFeature;
	id<SPTSettingsFeature> _settings;
	id<SPTKeystoreFeature> _keystoreFeature;
	id<SPTLoginFeature> _loginFeature;
	SPTFacebookPostOpenGraphManager* _facebookPostOpenGraphManager;
	SPTTermsAndConditionsManager* _termsAndConditionsManager;
	SPTLoginDeferredTermsController* _deferredTermsController;
	SPTLoginSignupMarketingOptInFlashController* _signupMarketingOptInFlashController;

}

@property (assign,nonatomic,__weak) id<SPTClientSessionService> clientSessionService;                                        //@synthesize clientSessionService=_clientSessionService - In the implementation block
@property (assign,nonatomic,__weak) id<SPTCoreService> coreService;                                                          //@synthesize coreService=_coreService - In the implementation block
@property (assign,nonatomic,__weak) id<SPTCommunicationsFeature> communicationsFeature;                                      //@synthesize communicationsFeature=_communicationsFeature - In the implementation block
@property (assign,nonatomic,__weak) id<SPTSettingsFeature> settings;                                                         //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic,__weak) id<SPTKeystoreFeature> keystoreFeature;                                                  //@synthesize keystoreFeature=_keystoreFeature - In the implementation block
@property (assign,nonatomic,__weak) id<SPTLoginFeature> loginFeature;                                                        //@synthesize loginFeature=_loginFeature - In the implementation block
@property (nonatomic,retain) SPTFacebookPostOpenGraphManager * facebookPostOpenGraphManager;                                 //@synthesize facebookPostOpenGraphManager=_facebookPostOpenGraphManager - In the implementation block
@property (nonatomic,retain) SPTTermsAndConditionsManager * termsAndConditionsManager;                                       //@synthesize termsAndConditionsManager=_termsAndConditionsManager - In the implementation block
@property (nonatomic,retain) SPTLoginDeferredTermsController * deferredTermsController;                                      //@synthesize deferredTermsController=_deferredTermsController - In the implementation block
@property (nonatomic,retain) SPTLoginSignupMarketingOptInFlashController * signupMarketingOptInFlashController;              //@synthesize signupMarketingOptInFlashController=_signupMarketingOptInFlashController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SPTAllocationContext * allocationContext; 
+(id)serviceDependencies;
+(id)serviceIdentifier;
-(void)setCoreService:(id<SPTCoreService>)arg1 ;
-(id<SPTCoreService>)coreService;
-(void)configureWithServices:(id)arg1 ;
-(void)setClientSessionService:(id<SPTClientSessionService>)arg1 ;
-(id<SPTClientSessionService>)clientSessionService;
-(void)registerFeatureSettingsPage;
-(SPTLoginDeferredTermsController *)deferredTermsController;
-(void)setDeferredTermsController:(SPTLoginDeferredTermsController *)arg1 ;
-(void)setCommunicationsFeature:(id<SPTCommunicationsFeature>)arg1 ;
-(void)setKeystoreFeature:(id<SPTKeystoreFeature>)arg1 ;
-(void)setLoginFeature:(id<SPTLoginFeature>)arg1 ;
-(void)setFacebookPostOpenGraphManager:(SPTFacebookPostOpenGraphManager *)arg1 ;
-(id<SPTKeystoreFeature>)keystoreFeature;
-(void)setTermsAndConditionsManager:(SPTTermsAndConditionsManager *)arg1 ;
-(void)storePreferredLocale;
-(id<SPTCommunicationsFeature>)communicationsFeature;
-(void)setSignupMarketingOptInFlashController:(SPTLoginSignupMarketingOptInFlashController *)arg1 ;
-(SPTLoginSignupMarketingOptInFlashController *)signupMarketingOptInFlashController;
-(void)disposeSignupMarketingOptInFlashController;
-(void)loginSignupMarketingOptInFlashControllerDidHandleFlash:(id)arg1 ;
-(id<SPTLoginFeature>)loginFeature;
-(SPTFacebookPostOpenGraphManager *)facebookPostOpenGraphManager;
-(SPTTermsAndConditionsManager *)termsAndConditionsManager;
-(id<SPTSettingsFeature>)settings;
-(void)load;
-(void)setSettings:(id<SPTSettingsFeature>)arg1 ;
-(void)unload;
@end

