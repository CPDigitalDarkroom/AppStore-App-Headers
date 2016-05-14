/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:54 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBReachabilityListener.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBInvalidating.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, FBReachabilityAnnouncer, FBAnalytics, FBAnalyticsPerfLogger, NSMutableArray, NSNotificationCenter, NSString;

@interface FBSessionStartupManager : NSObject <FBReachabilityListener, FBInvalidating> {

	int _state;
	char _networkAvailable;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _eventQueue;
	NSObject*<OS_dispatch_source> _timer;
	char _needTimer;
	FBReachabilityAnnouncer* _reachabilityAnnouncer;
	FBAnalytics* _analytics;
	FBAnalyticsPerfLogger* _perfLogger;
	NSMutableArray* _cancelTokens;
	NSNotificationCenter* _notificationCenter;
	atomic<signed char> _invalidated;
	char _queueSuspended;
	atomic<signed char> _userLoggedIn;
	char _allowServiceDelay;

}

@property (nonatomic,readonly) char allowServiceDelay;                 //@synthesize allowServiceDelay=_allowServiceDelay - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) char valid; 
-(void)runBlockWhenStartupCompletedOnQueue:(id)arg1 runBlock:(/*^block*/id)arg2 ;
-(void)reachabilityStateChangedTo:(unsigned)arg1 from:(unsigned)arg2 ;
-(void)_startupCompleted;
-(void)startupCompleted;
-(id)initWithReachabilityAnnouncer:(id)arg1 notificationCenter:(id)arg2 allowServiceDelay:(char)arg3 perfLogger:(id)arg4 analytics:(id)arg5 ;
-(void)_startTimerAsync;
-(void)_destroyTimer;
-(void)_stopTimerAsync;
-(void)_checkIfTimeout;
-(void)addEventAsync:(int)arg1 ;
-(void)_processEvent:(int)arg1 ;
-(id)initWithReachabilityAnnouncer:(id)arg1 notificationCenter:(id)arg2 allowServiceDelay:(char)arg3 ;
-(void)userDidLogin;
-(char)allowServiceDelay;
-(void)dealloc;
-(void)invalidate;
-(char)isValid;
-(int)currentState;
-(void)_invalidate;
-(void)_startTimer;
-(void)_stopTimer;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
@end

