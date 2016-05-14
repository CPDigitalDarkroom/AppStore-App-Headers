/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNPaymentsDataEntityDataFetcher.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNPaymentsDataEntityDataMutator.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNPaymentsPeerToPeerPaymentRequestDataFetcher.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNPaymentsPeerToPeerPaymentRequestDataMutator.h>

@class MNPaymentsPersistentStoreCoordinator, NSString;

@interface MNPaymentsPeerToPeerPaymentRequestLocalImp : NSObject <MNPaymentsDataEntityDataFetcher, MNPaymentsDataEntityDataMutator, MNPaymentsPeerToPeerPaymentRequestDataFetcher, MNPaymentsPeerToPeerPaymentRequestDataMutator> {

	MNPaymentsPersistentStoreCoordinator* _persistentStoreCoordinator;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)paymentRequestForId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)recentInitedPaymentRequestCountWithRequesteeId:(id)arg1 groupThreadId:(id)arg2 maxCount:(int)arg3 completion:(/*^block*/id)arg4 ;
-(void)recentInitedPaymentRequestsWithRequesterId:(id)arg1 requesteeId:(id)arg2 maxCount:(int)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)getInitedPaymentRequestCountWithRequesteeId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)dataEntityForId:(id)arg1 ;
-(void)dataEntityForId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addDataEntity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateDataEntity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addPaymentRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updatePaymentRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)paymentRequestForId:(id)arg1 ;
-(void)recentIncompletedPaymentRequestsInOrderWithRequesterId:(id)arg1 maxCount:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)recentIncompletedPaymentRequestsInOrderWithRequesteeId:(id)arg1 maxCount:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)recentPaymentRequestsWithMaxCount:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)recentPaymentRequestsWithRequesterId:(id)arg1 maxCount:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)recentPaymentRequestsWithRequesteeId:(id)arg1 maxCount:(int)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithPersistentStoreCoordinator:(id)arg1 ;
@end

