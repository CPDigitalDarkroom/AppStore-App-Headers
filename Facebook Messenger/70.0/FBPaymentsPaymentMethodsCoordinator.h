/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:00 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPaymentsPaymentMethodsLocalDataMutator.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPaymentsDataLoadingControlling.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPaymentsPaymentMethodsDataMutator.h>

@protocol FBPaymentsPaymentMethodsDataLoader, FBPaymentsSupportedPaymentMethodOptionsProviding;
@class NSMutableDictionary, FBPaymentsPaymentMethodsModelController, FBPaymentsUpdateListenerAnnouncer, FBPaymentsPaymentMethodsFilter, NSString;

@interface FBPaymentsPaymentMethodsCoordinator : NSObject <FBPaymentsPaymentMethodsLocalDataMutator, FBPaymentsDataLoadingControlling, FBPaymentsPaymentMethodsDataMutator> {

	NSMutableDictionary* _mutatorsForPaymentMethodType;
	id<FBPaymentsPaymentMethodsDataLoader> _dataLoader;
	FBPaymentsPaymentMethodsModelController* _modelController;
	FBPaymentsUpdateListenerAnnouncer* _updateAnnouncer;
	int _dataLoadingStatus;
	FBPaymentsPaymentMethodsFilter* _paymentMethodsFilter;
	id<FBPaymentsSupportedPaymentMethodOptionsProviding> _paymentMethodOptionsProvider;

}

@property (nonatomic,readonly) id<FBPaymentsPaymentMethodsLocalDataMutator> localDataMutator; 
@property (nonatomic,retain) id<FBPaymentsPaymentMethodsDataLoader> dataLoader;                                              //@synthesize dataLoader=_dataLoader - In the implementation block
@property (nonatomic,readonly) FBPaymentsPaymentMethodsFilter * paymentMethodsFilter;                                        //@synthesize paymentMethodsFilter=_paymentMethodsFilter - In the implementation block
@property (nonatomic,retain) id<FBPaymentsSupportedPaymentMethodOptionsProviding> paymentMethodOptionsProvider;              //@synthesize paymentMethodOptionsProvider=_paymentMethodOptionsProvider - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(void)addUpdateListener:(id)arg1 ;
-(FBPaymentsPaymentMethodsFilter *)paymentMethodsFilter;
-(void)registerRemoteDataMutator:(id)arg1 forPaymentMethodTypes:(id)arg2 ;
-(void)setDataLoader:(id<FBPaymentsPaymentMethodsDataLoader>)arg1 ;
-(void)setPaymentMethodOptionsProvider:(id<FBPaymentsSupportedPaymentMethodOptionsProviding>)arg1 ;
-(void)loadPaymentMethodsInBackground:(char)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id<FBPaymentsSupportedPaymentMethodOptionsProviding>)paymentMethodOptionsProvider;
-(void)addPaymentMethodWithCollectedData:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)removePaymentMethodLocally:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id<FBPaymentsPaymentMethodsLocalDataMutator>)localDataMutator;
-(void)removeUpdateListener:(id)arg1 ;
-(void)removePaymentMethod:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(int)dataLoadingStatus;
-(void)updatePaymentMethod:(id)arg1 collectedData:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(char)_updateDataLoadingStatus:(int)arg1 ;
-(void)_handleLoadedPaymentMethods:(id)arg1 error:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_mutatorForPaymentMethodType:(id)arg1 ;
-(void)_addOrUpdatePaymentMethod:(id)arg1 ;
-(void)_removePaymentMethod:(id)arg1 ;
-(void)_announceUpdate;
-(void)addOrUpdatePaymentMethodLocally:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)reloadPaymentMethodsLocally:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id<FBPaymentsPaymentMethodsDataLoader>)dataLoader;
-(id)init;
@end

