/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:01 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNThreadMessageCaching, OS_dispatch_queue, FBClock;
@class NSMutableDictionary, FBDiskCache, FBAnalytics, NSObject, NSNotificationCenter, UIApplication;

@interface FBMSendLatencyLogger : NSObject {

	NSMutableDictionary* _offlineThreadingIdToPendingSendLatency;
	id<MNThreadMessageCaching> _threadMessageCache;
	FBDiskCache* _diskCache;
	FBAnalytics* _analytics;
	NSObject*<OS_dispatch_queue> _queue;
	id _appBackgroundNotificationHandler;
	NSNotificationCenter* _notificationCenter;
	UIApplication* _application;
	char _suspendFlushing;
	id<FBClock> _clock;

}
-(id)initWithDiskCache:(id)arg1 analytics:(id)arg2 threadMessageCache:(id)arg3 notificationCenter:(id)arg4 internalQueue:(id)arg5 application:(id)arg6 clock:(id)arg7 ;
-(void)_sendFromDisk;
-(void)_uploadAndPersistIfNeeded;
-(void)_registerBackgroundNotificationIfNeeded;
-(char)_uploadCompletedEvents;
-(void)_flushToDisk;
-(void)_deleteFromDiskWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_uploadAllEvents:(id)arg1 ;
-(id)initWithDiskCache:(id)arg1 analytics:(id)arg2 threadMessageCache:(id)arg3 notificationCenter:(id)arg4 application:(id)arg5 ;
-(void)recoverEventsFromCache;
-(void)logMessageSendLatency:(id)arg1 ;
-(void)attachMessageDeliveryReceivedReceiptTimestamp:(id)arg1 forMessageIds:(id)arg2 onThreadKey:(id)arg3 ;
-(void)dealloc;
@end

