/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:36 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTFeatureSettingsPage.h>

@protocol SPTIAPController, InAppPurchaseController;
@interface SPTIAPFeatureSettingsPage : SPTFeatureSettingsPage {

	id<SPTIAPController> _iapController;
	id<InAppPurchaseController> _legacyController;

}

@property (nonatomic,retain) id<SPTIAPController> iapController;                        //@synthesize iapController=_iapController - In the implementation block
@property (nonatomic,retain) id<InAppPurchaseController> legacyController;              //@synthesize legacyController=_legacyController - In the implementation block
-(id)inAppPurchaseModel;
-(id<SPTIAPController>)iapController;
-(id<InAppPurchaseController>)legacyController;
-(id)initWithIAPController:(id)arg1 legacyController:(id)arg2 localSettings:(id)arg3 featureFlags:(id)arg4 ;
-(void)setIapController:(id<SPTIAPController>)arg1 ;
-(void)setLegacyController:(id<InAppPurchaseController>)arg1 ;
@end

