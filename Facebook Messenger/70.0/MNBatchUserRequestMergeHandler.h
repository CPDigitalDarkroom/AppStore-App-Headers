/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNBatchRequestMergeResultPropagating.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNUserRequestListener.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNUserRequestHandling.h>

@protocol MNUserRequestHandling;
@class MNBatchRequestMerger, NSMutableDictionary, NSString;

@interface MNBatchUserRequestMergeHandler : NSObject <MNBatchRequestMergeResultPropagating, MNUserRequestListener, MNUserRequestHandling> {

	MNBatchRequestMerger* _merger;
	id<MNUserRequestHandling> _nextHandler;
	NSMutableDictionary* _requestIdToListenerMap;
	NSMutableDictionary* _requestIdToSingleUserRequestMap;
	NSMutableDictionary* _requestIdToMultipleUserRequestMap;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureWithNextHandler:(id)arg1 ;
-(id)buildBatchResponsesFromSingleResponses:(id)arg1 requestQueryDefinitions:(id)arg2 requestId:(unsigned long)arg3 ;
-(void)propagateMergedRequestWithRequestId:(unsigned long)arg1 didUpdatePreliminaryResult:(id)arg2 longOperationDidBegin:(char)arg3 ;
-(void)propagateMergedRequestWithRequestId:(unsigned long)arg1 wasHandled:(id)arg2 ;
-(void)propagateMergedRequestWithRequestId:(unsigned long)arg1 wasNotHandled:(id)arg2 ;
-(void)handleMultipleUserRequest:(id)arg1 currentPendingResult:(id)arg2 listener:(id)arg3 ;
-(void)handleSingleUserRequest:(id)arg1 currentPendingResult:(id)arg2 listener:(id)arg3 ;
-(void)singleUserRequest:(unsigned long)arg1 didUpdatePreliminaryResult:(id)arg2 longOperationDidBegin:(char)arg3 ;
-(void)multipleUserRequest:(unsigned long)arg1 didUpdatePreliminaryResult:(id)arg2 longOperationDidBegin:(char)arg3 ;
-(void)singleUserRequest:(unsigned long)arg1 didSucceedWithResult:(id)arg2 ;
-(void)multipleUserRequest:(unsigned long)arg1 didSucceedWithResult:(id)arg2 ;
-(void)singleUserRequest:(unsigned long)arg1 didFailWithError:(id)arg2 ;
-(void)multipleUserRequest:(unsigned long)arg1 didFailWithError:(id)arg2 ;
-(id)init;
@end

