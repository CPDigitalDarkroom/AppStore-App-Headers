/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:19 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SPTDataLoaderService, SPTNetworkConnectivityController, SPTLogCenter, SPCore, SPTDataLoaderResolver, SPTDataLoaderRequestAccountingConsumptionObserver, SPTDataLoaderFactory, SPTDataLoaderFactoryManager, SPTDataLoaderKeymasterAuthoriser;

@interface SPTHTTPService : NSObject {

	SPTDataLoaderService* _dataLoaderService;
	SPTNetworkConnectivityController* _networkController;
	SPTLogCenter* _logCenter;
	SPCore* _core;
	SPTDataLoaderResolver* _dataLoaderResolver;
	SPTDataLoaderRequestAccountingConsumptionObserver* _consumptionObserver;
	SPTDataLoaderFactory* _dataLoaderFactory;
	SPTDataLoaderFactoryManager* _dataLoaderFactoryManager;
	SPTDataLoaderKeymasterAuthoriser* _keymasterAuthoriser;

}

@property (nonatomic,retain) SPTDataLoaderService * dataLoaderService;                                             //@synthesize dataLoaderService=_dataLoaderService - In the implementation block
@property (nonatomic,retain) SPTNetworkConnectivityController * networkController;                                 //@synthesize networkController=_networkController - In the implementation block
@property (nonatomic,retain) SPTLogCenter * logCenter;                                                             //@synthesize logCenter=_logCenter - In the implementation block
@property (assign,nonatomic,__weak) SPCore * core;                                                                 //@synthesize core=_core - In the implementation block
@property (nonatomic,retain) SPTDataLoaderResolver * dataLoaderResolver;                                           //@synthesize dataLoaderResolver=_dataLoaderResolver - In the implementation block
@property (nonatomic,retain) SPTDataLoaderRequestAccountingConsumptionObserver * consumptionObserver;              //@synthesize consumptionObserver=_consumptionObserver - In the implementation block
@property (nonatomic,retain) SPTDataLoaderFactory * dataLoaderFactory;                                             //@synthesize dataLoaderFactory=_dataLoaderFactory - In the implementation block
@property (nonatomic,retain) SPTDataLoaderFactoryManager * dataLoaderFactoryManager;                               //@synthesize dataLoaderFactoryManager=_dataLoaderFactoryManager - In the implementation block
@property (nonatomic,retain) SPTDataLoaderKeymasterAuthoriser * keymasterAuthoriser;                               //@synthesize keymasterAuthoriser=_keymasterAuthoriser - In the implementation block
-(SPCore *)core;
-(SPTLogCenter *)logCenter;
-(void)setCore:(SPCore *)arg1 ;
-(void)setHermesTransport:(id)arg1 productState:(id)arg2 ;
-(SPTNetworkConnectivityController *)networkController;
-(SPTDataLoaderService *)dataLoaderService;
-(void)setDataLoaderFactory:(SPTDataLoaderFactory *)arg1 ;
-(SPTDataLoaderFactory *)dataLoaderFactory;
-(void)setDataLoaderFactoryManager:(SPTDataLoaderFactoryManager *)arg1 ;
-(SPTDataLoaderKeymasterAuthoriser *)keymasterAuthoriser;
-(id)initWithNetworkConnectivityController:(id)arg1 logCenter:(id)arg2 core:(id)arg3 ;
-(void)clientDidLogout;
-(id)provideDataLoaderFactory;
-(id)provideKeymasterAuthoriser;
-(void)setDataLoaderService:(SPTDataLoaderService *)arg1 ;
-(void)setNetworkController:(SPTNetworkConnectivityController *)arg1 ;
-(void)setLogCenter:(SPTLogCenter *)arg1 ;
-(SPTDataLoaderResolver *)dataLoaderResolver;
-(void)setDataLoaderResolver:(SPTDataLoaderResolver *)arg1 ;
-(SPTDataLoaderRequestAccountingConsumptionObserver *)consumptionObserver;
-(void)setConsumptionObserver:(SPTDataLoaderRequestAccountingConsumptionObserver *)arg1 ;
-(SPTDataLoaderFactoryManager *)dataLoaderFactoryManager;
-(void)setKeymasterAuthoriser:(SPTDataLoaderKeymasterAuthoriser *)arg1 ;
@end

