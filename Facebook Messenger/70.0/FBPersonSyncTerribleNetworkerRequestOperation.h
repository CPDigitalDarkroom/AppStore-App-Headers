/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:42 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol FBNetworkDispatch, OS_dispatch_queue;
@class NSObject, FBSimpleNetworkerRequest;

@interface FBPersonSyncTerribleNetworkerRequestOperation : NSOperation {

	id<FBNetworkDispatch> _networker;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	FBSimpleNetworkerRequest* _networkRequest;
	char _executing;
	char _finished;

}

@property (assign,getter=isExecuting,nonatomic) char executing;              //@synthesize executing=_executing - In the implementation block
@property (assign,getter=isFinished,nonatomic) char finished;                //@synthesize finished=_finished - In the implementation block
-(id)initWithNetworker:(id)arg1 ;
-(void)requestSucceededWithResponse:(id)arg1 ;
-(void)requestFailedWithError:(id)arg1 ;
-(char)isAsynchronous;
-(void)cancel;
-(id)request;
-(void)start;
-(void)_cleanup;
-(char)isFinished;
-(char)isExecuting;
-(void)setExecuting:(char)arg1 ;
-(void)setFinished:(char)arg1 ;
@end

