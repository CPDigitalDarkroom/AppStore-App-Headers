/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:43 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTRadioTestManager.h>

@protocol SPTAbbaFeatureFlags, SPTProductState;
@class NSString;

@interface SPTRadioTestManagerImplementation : NSObject <SPTRadioTestManager> {

	id<SPTAbbaFeatureFlags> _featureFlags;
	id<SPTProductState> _productState;

}

@property (nonatomic,readonly) id<SPTAbbaFeatureFlags> featureFlags;              //@synthesize featureFlags=_featureFlags - In the implementation block
@property (nonatomic,readonly) id<SPTProductState> productState;                  //@synthesize productState=_productState - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isEnabled,nonatomic,readonly) char enabled; 
-(id<SPTProductState>)productState;
-(id<SPTAbbaFeatureFlags>)featureFlags;
-(id)initWithFeatureFlags:(id)arg1 productState:(id)arg2 ;
-(char)isEnabled;
@end

