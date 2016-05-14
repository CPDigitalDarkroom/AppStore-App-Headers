/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating, MNRideServiceInfoDataFetcherDelegate;
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
@class FBUserSession;

@interface MNRideServiceInfoDataFetcher : NSObject {

	FBUserSession* _session;
	id<FBServiceTransactionMutating> _rideTypeRequestToken;
	id<FBServiceTransactionMutating> _rideEstimateRequestToken;
	id<FBServiceTransactionMutating> _ridePaymentRequestToken;
	id<MNRideServiceInfoDataFetcherDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNRideServiceInfoDataFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_applyServiceConfiguration:(id)arg1 ;
-(void)_handlePaymentQueryResponseContent:(id)arg1 cachedContent:(char)arg2 error:(id)arg3 startTime:(double)arg4 ;
-(void)_fetchContentForQuery:(id)arg1 responseTTLInSeconds:(unsigned)arg2 fetchBlock:(/*^block*/id)arg3 requestTokenType:(int)arg4 ;
-(void)_handleInfoQueryResponseContent:(id)arg1 cachedContent:(char)arg2 error:(id)arg3 startTime:(double)arg4 ;
-(void)_handleRideEstimateQueryResponseContent:(id)arg1 cachedContent:(char)arg2 error:(id)arg3 startTime:(double)arg4 ;
-(void)startFetchingPaymentInfoWithProviderName:(id)arg1 ;
-(void)startFetchingRideTypeWithLatitude:(float)arg1 longitude:(float)arg2 providerName:(id)arg3 ;
-(void)requestRideWithRideTypeId:(id)arg1 rideTypeName:(id)arg2 providerName:(id)arg3 sourceLocation:(SCD_Struct_MN11)arg4 sourceAddress:(id)arg5 destinationLocation:(SCD_Struct_MN11)arg6 destinationAddress:(id)arg7 threadFbId:(id)arg8 surgeId:(id)arg9 credentialId:(id)arg10 ;
-(void)startFetchingRideEstimateWithSourceLatitude:(float)arg1 sourceLongitude:(float)arg2 destinationLatitude:(float)arg3 destinationLongitude:(float)arg4 providerName:(id)arg5 rideType:(id)arg6 ;
-(id)initWithSession:(id)arg1 ;
-(void)setDelegate:(id<MNRideServiceInfoDataFetcherDelegate>)arg1 ;
-(void)dealloc;
-(id<MNRideServiceInfoDataFetcherDelegate>)delegate;
@end

