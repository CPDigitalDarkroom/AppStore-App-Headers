/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:46 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTAbbaFeatureFlagsObserver.h>
#import <Spotify/SPTService.h>

@protocol SPTAbbaFeature, SPTBannerFeature, SPTClientSessionService, SPTCoreService, SPTDebugFeature, SPTSettingsFeature, UpsellFeature, SPTAbbaFeatureFlags;
@class SPTSettingsStorageTestManager, NSString, SPTAllocationContext;

@interface SPTBuiltInSettingsFeatureImplementation : NSObject <SPTAbbaFeatureFlagsObserver, SPTService> {

	id<SPTAbbaFeature> _abbaFeature;
	id<SPTBannerFeature> _bannerFeature;
	id<SPTClientSessionService> _clientSessionService;
	id<SPTCoreService> _coreService;
	id<SPTDebugFeature> _debugFeature;
	id<SPTSettingsFeature> _settingsFeature;
	id<UpsellFeature> _upsellFeature;
	id<SPTAbbaFeatureFlags> _featureFlags;
	SPTSettingsStorageTestManager* _storageTestManager;

}

@property (assign,nonatomic,__weak) id<SPTAbbaFeature> abbaFeature;                                //@synthesize abbaFeature=_abbaFeature - In the implementation block
@property (assign,nonatomic,__weak) id<SPTBannerFeature> bannerFeature;                            //@synthesize bannerFeature=_bannerFeature - In the implementation block
@property (assign,nonatomic,__weak) id<SPTClientSessionService> clientSessionService;              //@synthesize clientSessionService=_clientSessionService - In the implementation block
@property (assign,nonatomic,__weak) id<SPTCoreService> coreService;                                //@synthesize coreService=_coreService - In the implementation block
@property (assign,nonatomic,__weak) id<SPTDebugFeature> debugFeature;                              //@synthesize debugFeature=_debugFeature - In the implementation block
@property (assign,nonatomic,__weak) id<SPTSettingsFeature> settingsFeature;                        //@synthesize settingsFeature=_settingsFeature - In the implementation block
@property (assign,nonatomic,__weak) id<UpsellFeature> upsellFeature;                               //@synthesize upsellFeature=_upsellFeature - In the implementation block
@property (nonatomic,retain) id<SPTAbbaFeatureFlags> featureFlags;                                 //@synthesize featureFlags=_featureFlags - In the implementation block
@property (nonatomic,retain) SPTSettingsStorageTestManager * storageTestManager;                   //@synthesize storageTestManager=_storageTestManager - In the implementation block
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
-(void)featureFlagsDidChange:(id)arg1 ;
-(void)setClientSessionService:(id<SPTClientSessionService>)arg1 ;
-(void)setDebugFeature:(id<SPTDebugFeature>)arg1 ;
-(id<SPTDebugFeature>)debugFeature;
-(id<SPTAbbaFeatureFlags>)featureFlags;
-(void)setFeatureFlags:(id<SPTAbbaFeatureFlags>)arg1 ;
-(id<SPTClientSessionService>)clientSessionService;
-(void)setAbbaFeature:(id<SPTAbbaFeature>)arg1 ;
-(void)setSettingsFeature:(id<SPTSettingsFeature>)arg1 ;
-(id<SPTAbbaFeature>)abbaFeature;
-(id<SPTSettingsFeature>)settingsFeature;
-(void)setBannerFeature:(id<SPTBannerFeature>)arg1 ;
-(id<SPTBannerFeature>)bannerFeature;
-(void)setUpsellFeature:(id<UpsellFeature>)arg1 ;
-(id<UpsellFeature>)upsellFeature;
-(id)provideStreamQualitySettingsWithSettingsViewController:(id)arg1 ;
-(id)provideSyncQualitySettingsWithSettingsViewController:(id)arg1 ;
-(id)provideCellularSyncSettingsWithSettingsViewController:(id)arg1 ;
-(id)provideOfflineSettingsSectionWithSettingsViewController:(id)arg1 ;
-(id)provideGaplessSettingsWithSettingsViewController:(id)arg1 ;
-(id)provideUnplayableTracksSettingsWithSettingsViewController:(id)arg1 ;
-(id)provideAudioNormalisationSettingsWithSettingsViewController:(id)arg1 ;
-(void)registerDisableConnectSetting;
-(void)setStorageTestManager:(SPTSettingsStorageTestManager *)arg1 ;
-(id)provideDisableConnectSettingsWithSettingsViewController:(id)arg1 ;
-(SPTSettingsStorageTestManager *)storageTestManager;
-(void)load;
-(void)unload;
@end

