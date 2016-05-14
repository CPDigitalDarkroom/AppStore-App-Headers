/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBClassProvidable.h>

@protocol FBServiceTransactionMutating, MNAuthenticationManager;
@class FBGraphQLService, MNGraphQLQueryConfigGenerator, MNMessagingRegionHeaderHelper, NSString;

@interface MNGraphQLThreadListFetcher : NSObject <FBClassProvidable> {

	FBGraphQLService* _graphQLService;
	id<FBServiceTransactionMutating> _graphQLRequest;
	MNGraphQLQueryConfigGenerator* _queryConfigGenerator;
	MNMessagingRegionHeaderHelper* _messagingRegionHeaderHelper;
	id<MNAuthenticationManager> _authManager;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_processResponseWithError:(id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)_configureGraphQLServiceConfig:(id)arg1 ;
-(void)_processResponse:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)fetchThreadListWithType:(int)arg1 numberOfThreads:(int)arg2 successBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(id)initWithGraphQLService:(id)arg1 queryConfigGenerator:(id)arg2 messagingRegionHeaderHelper:(id)arg3 authManager:(id)arg4 ;
-(void)cancel;
-(void)dealloc;
@end

