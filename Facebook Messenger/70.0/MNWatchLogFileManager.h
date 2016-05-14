/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBSessionClassProvidable.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNServiceControllable.h>

@protocol OS_dispatch_queue;
@class FBBugReportData, NSURL, NSObject, NSString;

@interface MNWatchLogFileManager : NSObject <FBSessionClassProvidable, MNServiceControllable> {

	FBBugReportData* _bugReportData;
	NSURL* _watchLogDirectoryURL;
	char _existingLogFilesAdded;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)saveWatchLogFileWithURL:(id)arg1 fileName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithBugReportData:(id)arg1 ;
-(void)_addExistingWatchLogFilesToBugReportIfNeeded;
-(void)_createWatchLogDirectoryIfNeeded;
-(void)_saveWatchLogFileWithURL:(id)arg1 fileName:(id)arg2 ;
-(void)_addExistingWatchLogFilesToBugReport;
-(id)_sortedWatchLogFileURLs;
-(void)_addToBugReportAttachment:(id)arg1 ;
-(void)_pruneOldLogFilesIfNeeded;
-(void)_removeFromBugReportAttachment:(id)arg1 ;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end

