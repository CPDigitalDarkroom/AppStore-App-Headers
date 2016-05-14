/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:19 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNThreadListRequestHandling.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNThreadListResponsePropagating.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString;

@interface MNThreadListRequestNetworkMergeHandler : NSObject <MNThreadListRequestHandling, MNThreadListResponsePropagating> {

	NSMutableDictionary* _requestFilterToWaitingRequestIds;
	NSMutableDictionary* _requestIdToRequestWithCompletion;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)propagateThreadListResponse:(id)arg1 forRequestId:(unsigned long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)propagateThreadListRequestFailure:(id)arg1 forRequestId:(unsigned long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)handleThreadListRequest:(id)arg1 longOperationDidBeginBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_getOrCreateAwaitingRequestIdsSetForFilter:(id)arg1 ;
-(void)_saveThreadListRequest:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_handlePropogationForRequestWithId:(unsigned long)arg1 response:(id)arg2 propagationCompletionBlock:(/*^block*/id)arg3 ;
-(id)_popRequestWithCompletionBlock:(unsigned long)arg1 ;
-(id)_popAwaitingRequestIdsForFilter:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
@end

