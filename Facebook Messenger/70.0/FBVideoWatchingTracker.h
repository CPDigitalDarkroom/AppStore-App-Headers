/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
@class NSMutableDictionary, NSURL, NSObject;

@interface FBVideoWatchingTracker : NSObject {

	NSMutableDictionary* _videos;
	NSURL* _file;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _lastSyncTimestamp;

}
-(id)initWithURL:(id)arg1 scheduleQueue:(id)arg2 ;
-(char)updateVideo:(id)arg1 incrementalDuration:(double)arg2 ;
-(SCD_Struct_MN11)pauseOrFinishForVideo:(id)arg1 prefetchEndTimeStamp:(double)arg2 ;
-(void)updateVideo:(id)arg1 startingTime:(double)arg2 ;
-(void)_syncToDiskForceTo:(char)arg1 ;
-(void)_cleanOldData;
-(void)receivedEnterBackgroundNotification;
-(void)dealloc;
-(void)reset;
@end

