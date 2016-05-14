/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:12 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBGraphMessageSendHandlerTracking.h>

@protocol OS_dispatch_queue, FBGraphMessageSendRequestRunnerDelegate, FBGraphMessageSendRequestBatchingDelegate, MNAuthenticationManager;
@class NSObject, FBReachabilityAnnouncer, FBUserSession, FBAnalytics, NSMapTable, NSString;

@interface FBGraphMessageSendRequestRunner : NSObject <FBGraphMessageSendHandlerTracking> {

	NSObject*<OS_dispatch_queue> _queue;
	id<FBGraphMessageSendRequestRunnerDelegate> _runnerDelegate;
	id<FBGraphMessageSendRequestBatchingDelegate> _batchingDelegate;
	FBReachabilityAnnouncer* _reachabilityAnnoucer;
	FBUserSession* _session;
	id<MNAuthenticationManager> _authManager;
	FBAnalytics* _analytics;
	NSMapTable* _outstandingRequestsToLoggerMap;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startWithQueue:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 authManager:(id)arg2 analytics:(id)arg3 reachabilityAnnouncer:(id)arg4 runnerDelegate:(id)arg5 batchingDelegate:(id)arg6 ;
-(id)sendMessage:(id)arg1 listener:(id)arg2 ;
-(id)_sendMessage:(id)arg1 logger:(id)arg2 listener:(id)arg3 ;
-(void)stopTrackingRequest:(id)arg1 ;
-(void)stop;
@end

