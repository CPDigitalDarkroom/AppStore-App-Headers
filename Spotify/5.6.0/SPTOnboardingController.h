/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:40 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTOnboardingRootViewControllerDelegate.h>
#import <Spotify/SPTMetaViewControllerRootViewPresenter.h>

@class SPTOnboardingRegistryImplementation, MetaViewController, SPTOnboardingControllerBridgeContext, NSString;

@interface SPTOnboardingController : NSObject <SPTOnboardingRootViewControllerDelegate, SPTMetaViewControllerRootViewPresenter> {

	SPTOnboardingRegistryImplementation* _registry;
	MetaViewController* _metaViewController;
	SPTOnboardingControllerBridgeContext* _currentContext;

}

@property (nonatomic,readonly) SPTOnboardingRegistryImplementation * registry;                   //@synthesize registry=_registry - In the implementation block
@property (nonatomic,readonly) MetaViewController * metaViewController;                          //@synthesize metaViewController=_metaViewController - In the implementation block
@property (nonatomic,retain) SPTOnboardingControllerBridgeContext * currentContext;              //@synthesize currentContext=_currentContext - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MetaViewController *)metaViewController;
-(char)presentBridgeViewAnimated:(char)arg1 manualLogin:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithRegistry:(id)arg1 metaViewController:(id)arg2 ;
-(void)viewDidAppearForOnboardingRootViewController:(id)arg1 ;
-(void)userDidCompleteForOnboardingRootViewController:(id)arg1 ;
-(void)deactivate;
-(void)activate;
-(void)setCurrentContext:(SPTOnboardingControllerBridgeContext *)arg1 ;
-(SPTOnboardingRegistryImplementation *)registry;
-(SPTOnboardingControllerBridgeContext *)currentContext;
@end

