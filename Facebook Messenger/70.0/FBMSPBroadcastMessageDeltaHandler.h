/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:03 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBSessionClassProvidable.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNMessagesSyncDeltaHandling.h>

@protocol MNAuthenticationManager, MNMessageIdNormalizing;
@class FBMSPThreadUpdater, FBMNetworkProtocolController, NSString;

@interface FBMSPBroadcastMessageDeltaHandler : NSObject <FBSessionClassProvidable, MNMessagesSyncDeltaHandling> {

	id<MNAuthenticationManager> _authenticationManager;
	FBMSPThreadUpdater* _threadUpdater;
	FBMNetworkProtocolController* _networkProtocolController;
	id<MNMessageIdNormalizing> _messageIdNormalizer;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithAuthenticationManager:(id)arg1 threadUpdater:(id)arg2 networkProtocolController:(id)arg3 messageIdNormalizer:(id)arg4 ;
-(id)_incrementalPersistenceJobDescriptionsForDelta:(id)arg1 ;
-(void)_processMessageMetadata:(id)arg1 fromDeltaData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)deltaType;
-(void)handleDelta:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)deltasWithMetadataFromDeltaWrapper:(id)arg1 startingWithSequenceId:(long long)arg2 ;
@end

