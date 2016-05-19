/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:36 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTFeatureSettingsUIProvider.h>

@protocol SPTIAPController;
@class NSString;

@interface SPTIAPFeatureSettingsAvailableProductsUIProvider : NSObject <SPTFeatureSettingsUIProvider> {

	id<SPTIAPController> _iapController;

}

@property (nonatomic,retain) id<SPTIAPController> iapController;              //@synthesize iapController=_iapController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SPTIAPController>)iapController;
-(id)initWithIAPController:(id)arg1 ;
-(void)setIapController:(id<SPTIAPController>)arg1 ;
-(id)featureSettingsPresentation:(id)arg1 cellForRow:(unsigned)arg2 ;
-(unsigned)numberOfRowsForFeatureSettingsItem:(id)arg1 ;
-(void)featureSettingsPresentation:(id)arg1 didSelectRow:(unsigned)arg2 ;
@end

