/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:57 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating, MNAuthenticationManager, OS_dispatch_queue;
@class FBGraphQLService, MNGraphQLQueryConfigGenerator, NSObject;

@interface MNTopBotsListFetcher : NSObject {

	FBGraphQLService* _graphQLService;
	id<FBServiceTransactionMutating> _graphQLRequest;
	MNGraphQLQueryConfigGenerator* _queryConfigGenerator;
	id<MNAuthenticationManager> _authManager;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)_processParsedResponse:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)_processResponseWithError:(id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)_configureGraphQLServiceConfig:(id)arg1 ;
-(id)initWithGraphQLService:(id)arg1 authManager:(id)arg2 queue:(id)arg3 ;
-(void)fetchTopBotsListWithSuccessBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)cancel;
@end

