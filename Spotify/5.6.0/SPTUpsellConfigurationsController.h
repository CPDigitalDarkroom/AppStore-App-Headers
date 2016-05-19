/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:47 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTDataLoaderDelegate.h>
#import <Spotify/SPTUpsellConfigurationsCacheControllerDelegate.h>
#import <Spotify/SPTAccountProductInformationObserver.h>
#import <Spotify/SPTUpsellResourcesFetchControllerDelegate.h>
#import <Spotify/SPTUpsellConfigurationsPrerequisitesObserver.h>
#import <Spotify/SPTUpsellServiceLoggerDelegate.h>
#import <Spotify/SPTUpsellActionFactoryDelegate.h>

@protocol SPTUpsellPresentShowcaseProtocol, SPTUpsellLogger, SPTAccountProductActivationController, SPTAccountProductInformationController, OS_dispatch_queue, SPTDataLoaderCancellationToken;
@class SPTUpsellConfigurationsPrerequisites, SPTUpsellExperiments, SPTDriverDistraction, SPTUpsellCompoundLogger, SPTDataLoader, NSObject, SPTUpsellConfigurationsCacheController, SPTUpsellResourcesFetchController, SPTUpsellFallbackProvider, NSString;

@interface SPTUpsellConfigurationsController : NSObject <SPTDataLoaderDelegate, SPTUpsellConfigurationsCacheControllerDelegate, SPTAccountProductInformationObserver, SPTUpsellResourcesFetchControllerDelegate, SPTUpsellConfigurationsPrerequisitesObserver, SPTUpsellServiceLoggerDelegate, SPTUpsellActionFactoryDelegate> {

	char _refreshing;
	char _active;
	id<SPTUpsellPresentShowcaseProtocol> _showcaseDelegate;
	SPTUpsellConfigurationsPrerequisites* _prerequisites;
	SPTUpsellExperiments* _experiments;
	SPTDriverDistraction* _driverDistraction;
	SPTUpsellCompoundLogger* _logger;
	id<SPTUpsellLogger> _serviceLogger;
	SPTDataLoader* _serviceLoggerDataLoader;
	id<SPTAccountProductActivationController> _productActivationController;
	id<SPTAccountProductInformationController> _productInformationController;
	NSObject*<OS_dispatch_queue> _loadImagesQueue;
	SPTUpsellConfigurationsCacheController* _cacheController;
	SPTUpsellResourcesFetchController* _resourcesFetchController;
	SPTUpsellFallbackProvider* _fallbackProvider;
	SPTDataLoader* _refreshDataLoader;
	id<SPTDataLoaderCancellationToken> _refreshCancellationToken;
	SPTDataLoader* _callbackDataLoader;

}

@property (nonatomic,readonly) char hasData; 
@property (assign,getter=isRefreshing,nonatomic) char refreshing;                                                    //@synthesize refreshing=_refreshing - In the implementation block
@property (assign,getter=isActive,nonatomic) char active;                                                            //@synthesize active=_active - In the implementation block
@property (assign,nonatomic,__weak) id<SPTUpsellPresentShowcaseProtocol> showcaseDelegate;                           //@synthesize showcaseDelegate=_showcaseDelegate - In the implementation block
@property (nonatomic,readonly) SPTUpsellConfigurationsPrerequisites * prerequisites;                                 //@synthesize prerequisites=_prerequisites - In the implementation block
@property (nonatomic,readonly) SPTUpsellExperiments * experiments;                                                   //@synthesize experiments=_experiments - In the implementation block
@property (nonatomic,readonly) SPTDriverDistraction * driverDistraction;                                             //@synthesize driverDistraction=_driverDistraction - In the implementation block
@property (nonatomic,readonly) SPTUpsellCompoundLogger * logger;                                                     //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) id<SPTUpsellLogger> serviceLogger;                                                    //@synthesize serviceLogger=_serviceLogger - In the implementation block
@property (nonatomic,readonly) SPTDataLoader * serviceLoggerDataLoader;                                              //@synthesize serviceLoggerDataLoader=_serviceLoggerDataLoader - In the implementation block
@property (nonatomic,readonly) id<SPTAccountProductActivationController> productActivationController;                //@synthesize productActivationController=_productActivationController - In the implementation block
@property (nonatomic,readonly) id<SPTAccountProductInformationController> productInformationController;              //@synthesize productInformationController=_productInformationController - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> loadImagesQueue;                                         //@synthesize loadImagesQueue=_loadImagesQueue - In the implementation block
@property (nonatomic,readonly) SPTUpsellConfigurationsCacheController * cacheController;                             //@synthesize cacheController=_cacheController - In the implementation block
@property (nonatomic,readonly) SPTUpsellResourcesFetchController * resourcesFetchController;                         //@synthesize resourcesFetchController=_resourcesFetchController - In the implementation block
@property (nonatomic,retain) SPTUpsellFallbackProvider * fallbackProvider;                                           //@synthesize fallbackProvider=_fallbackProvider - In the implementation block
@property (nonatomic,readonly) SPTDataLoader * refreshDataLoader;                                                    //@synthesize refreshDataLoader=_refreshDataLoader - In the implementation block
@property (nonatomic,retain) id<SPTDataLoaderCancellationToken> refreshCancellationToken;                            //@synthesize refreshCancellationToken=_refreshCancellationToken - In the implementation block
@property (nonatomic,readonly) SPTDataLoader * callbackDataLoader;                                                   //@synthesize callbackDataLoader=_callbackDataLoader - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedReasons;
-(void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2 ;
-(void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2 ;
-(void)dataLoader:(id)arg1 didCancelRequest:(id)arg2 ;
-(id<SPTAccountProductInformationController>)productInformationController;
-(void)currentProductDidChangeForProductInformationController:(id)arg1 ;
-(void)premiumTrialEligibilityDidChangeForProductInformationController:(id)arg1 ;
-(id<SPTAccountProductActivationController>)productActivationController;
-(SPTDriverDistraction *)driverDistraction;
-(SPTUpsellConfigurationsPrerequisites *)prerequisites;
-(void)configurationsCacheController:(id)arg1 didStoreUpsells:(id)arg2 ;
-(void)configurationsCacheController:(id)arg1 didLoadUpsells:(id)arg2 ;
-(void)cacheWasInvalidatedByConfigurationsCacheController:(id)arg1 ;
-(void)cacheWasPrunedByConfigurationsCacheController:(id)arg1 ;
-(void)refreshAndIgnoreCache:(char)arg1 ;
-(void)setShowcaseDelegate:(id<SPTUpsellPresentShowcaseProtocol>)arg1 ;
-(SPTUpsellExperiments *)experiments;
-(id)initWithPrerequisites:(id)arg1 refreshDataLoader:(id)arg2 callbackDataLoader:(id)arg3 serviceLoggerDataLoader:(id)arg4 cacheController:(id)arg5 resourcesFetchController:(id)arg6 productActivationController:(id)arg7 productInformationController:(id)arg8 driverDistraction:(id)arg9 experiments:(id)arg10 logger:(id)arg11 ;
-(void)configurationForReason:(int)arg1 completion:(/*^block*/id)arg2 ;
-(id<SPTUpsellLogger>)serviceLogger;
-(SPTUpsellConfigurationsCacheController *)cacheController;
-(void)cancelRefresh;
-(SPTUpsellFallbackProvider *)fallbackProvider;
-(NSObject*<OS_dispatch_queue>)loadImagesQueue;
-(id)createUpsellWithImages:(id)arg1 ;
-(void)loadUpsellImage:(id)arg1 loadGroup:(id)arg2 completion:(/*^block*/id)arg3 ;
-(char)hasCachedDataExpired;
-(void)fetchConfigurationsAndIgnoreCache:(char)arg1 ;
-(id<SPTDataLoaderCancellationToken>)refreshCancellationToken;
-(void)cleanupAfterRefresh;
-(void)setRefreshCancellationToken:(id<SPTDataLoaderCancellationToken>)arg1 ;
-(SPTDataLoader *)refreshDataLoader;
-(void)handleDataLoaderRequestDomainError:(id)arg1 ;
-(void)handleDataLoaderResponseDomainError:(id)arg1 ;
-(void)didEncounterPermanentError;
-(void)handleRefreshedJSONData:(id)arg1 identifier:(id)arg2 ;
-(void)handleRefreshError:(id)arg1 ;
-(SPTUpsellResourcesFetchController *)resourcesFetchController;
-(void)fetchMissingResourcesForUpsells:(id)arg1 ;
-(void)activateIfPossible;
-(SPTDataLoader *)callbackDataLoader;
-(id<SPTUpsellPresentShowcaseProtocol>)showcaseDelegate;
-(void)resourcesFetchController:(id)arg1 didFetchData:(id)arg2 resourceType:(int)arg3 forURL:(id)arg4 ;
-(void)resourcesFetchController:(id)arg1 didEncounterError:(id)arg2 forURL:(id)arg3 ;
-(void)resourcesFetchController:(id)arg1 didCancelFetchForURL:(id)arg2 ;
-(void)isSatisfiedDidChangeForConfigurationsPrerequisites:(id)arg1 ;
-(void)serviceLogger:(id)arg1 didLogImpressionOfUpsell:(id)arg2 ;
-(void)serviceLogger:(id)arg1 didLogInteractionWithUpsell:(id)arg2 viaButton:(id)arg3 ;
-(id)callbackDataLoaderForActionFactory:(id)arg1 ;
-(id)productActivationControllerForActionFactory:(id)arg1 ;
-(void)triggerMoreUpsellWithData:(id)arg1 ;
-(id)createURLForConfiguration:(int)arg1 withSourceID:(id)arg2 ;
-(void)invalidateCacheIfNeeded;
-(void)performPeriodicRefreshEagerly;
-(SPTDataLoader *)serviceLoggerDataLoader;
-(void)setFallbackProvider:(SPTUpsellFallbackProvider *)arg1 ;
-(SPTUpsellCompoundLogger *)logger;
-(void)dealloc;
-(char)isActive;
-(void)deactivate;
-(void)setActive:(char)arg1 ;
-(char)isRefreshing;
-(char)hasData;
-(void)setRefreshing:(char)arg1 ;
-(void)invalidateCache;
-(void)pruneCache;
-(void)refresh;
-(void)applicationWillEnterForeground;
@end

