/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:56 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSString, NSFileManager, NSData, NSObject;

@interface FBAllocationTrackerLogger : NSObject {

	NSString* _runID;
	NSFileManager* _fileManager;
	NSData* _lastRunData;
	char _attemptedLoad;
	NSObject*<OS_dispatch_source> _timer;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedLogger;
-(void)_saveTrackerSummary;
-(void)_loadIfNeeded;
-(void)logSummaryFromPreviousRun;
-(void)startTakingSnapshots;
-(void)dealloc;
-(id)init;
-(void)_save:(id)arg1 ;
-(id)_path;
@end

