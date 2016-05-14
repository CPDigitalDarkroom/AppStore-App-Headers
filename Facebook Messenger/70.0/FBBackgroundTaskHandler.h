/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:54 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBBackgroundStateManaging;
@class NSObject, NSMutableDictionary;

@interface FBBackgroundTaskHandler : NSObject {

	NSObject*<OS_dispatch_queue> _queuePerformer;
	unsigned _fbTaskId;
	NSMutableDictionary* _idsMap;
	id<FBBackgroundStateManaging> _backgroundStateManager;

}
+(id)sharedInstance;
-(void)waitForBackgroundTask:(/*^block*/id)arg1 performer:(id)arg2 ;
-(id)initWithBackgroundStateManager:(id)arg1 serialQueuePerformer:(id)arg2 ;
-(unsigned)_addTaskId;
-(char)_mapTaskId:(unsigned)arg1 withUIBackgroundIdentifier:(unsigned)arg2 ;
-(unsigned)_removeTaskId:(unsigned)arg1 ;
-(unsigned)_mappingCount;
-(unsigned)beginBackgroundTaskWithName:(id)arg1 expirationHandler:(/*^block*/id)arg2 ;
-(void)endBackgroundTask:(unsigned)arg1 ;
@end

