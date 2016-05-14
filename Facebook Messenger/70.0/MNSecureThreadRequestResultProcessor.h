/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:19 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNChainRequestResultProcessing.h>

@protocol MNSecureThreadRequestListener, OS_dispatch_queue;
@class MNHandlerSecureThreadRequest, NSObject, MNSecureThreadRequestResultAccumulator, NSString;

@interface MNSecureThreadRequestResultProcessor : NSObject <MNChainRequestResultProcessing> {

	MNHandlerSecureThreadRequest* _request;
	id<MNSecureThreadRequestListener> _listener;
	NSObject*<OS_dispatch_queue> _queue;
	MNSecureThreadRequestResultAccumulator* _resultAccumulator;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithRequest:(id)arg1 listener:(id)arg2 queue:(id)arg3 ;
-(void)updateResponse:(id)arg1 completesSubResponse:(char)arg2 ;
-(char)isWaitingForSubResponses;
-(char)validatePreliminaryResponse;
-(void)announceUpdatedResponseWithLongOperationDidBegin:(char)arg1 ;
-(char)validateFinalResponse;
-(void)announceSuccess;
-(void)announceFailureWithError:(id)arg1 ;
@end

