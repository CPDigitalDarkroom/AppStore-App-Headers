/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:28 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTFeatureFlagObserver.h>
#import <Spotify/SPTExternalAccessoryInfoManagerObserver.h>

@protocol SPTFeatureFlag;
@class SPTAdGlobalSettingsController, SPTExternalAccessoryInfo, NSString;

@interface SPTAdsAutoDetectionController : NSObject <SPTFeatureFlagObserver, SPTExternalAccessoryInfoManagerObserver> {

	SPTAdGlobalSettingsController* _adSettingsController;
	id<SPTFeatureFlag> _featureFlag;
	SPTExternalAccessoryInfo* _currentDevice;

}

@property (nonatomic,retain) SPTAdGlobalSettingsController * adSettingsController;              //@synthesize adSettingsController=_adSettingsController - In the implementation block
@property (nonatomic,retain) id<SPTFeatureFlag> featureFlag;                                    //@synthesize featureFlag=_featureFlag - In the implementation block
@property (nonatomic,retain) SPTExternalAccessoryInfo * currentDevice;                          //@synthesize currentDevice=_currentDevice - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SPTFeatureFlag>)featureFlag;
-(void)featureFlag:(id)arg1 enabledStateDidChange:(char)arg2 ;
-(SPTAdGlobalSettingsController *)adSettingsController;
-(void)setAdSettingsController:(SPTAdGlobalSettingsController *)arg1 ;
-(id)serializeDeviceInfo:(id)arg1 ;
-(void)registerDeviceInfo:(id)arg1 ;
-(void)accessoryDidChange:(id)arg1 ;
-(id)initWithAutoDetectionFlag:(id)arg1 adSettingsController:(id)arg2 ;
-(void)setFeatureFlag:(id<SPTFeatureFlag>)arg1 ;
-(SPTExternalAccessoryInfo *)currentDevice;
-(void)dealloc;
-(void)setCurrentDevice:(SPTExternalAccessoryInfo *)arg1 ;
@end

