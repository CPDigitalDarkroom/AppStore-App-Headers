/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTCrashSummaryObserver.h>

@protocol SPTCrashReporterPersistentStore, SPTCrashReporterURLPoster;
@class NSString;

@interface SPTWebEndpointCrashStatisticsReporter : NSObject <SPTCrashSummaryObserver> {

	char _startedSendingPendingReports;
	NSString* _deviceID;
	id<SPTCrashReporterPersistentStore> _persistentStore;
	id<SPTCrashReporterURLPoster> _urlPoster;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
-(void)logCrashWithClientVersion:(id)arg1 OSVersion:(id)arg2 date:(id)arg3 userName:(id)arg4 UUID:(id)arg5 detectorIdentifier:(id)arg6 ;
-(void)sendPendingCrashReports;
-(void)logToWebEndpointInnerWithClientVersion:(id)arg1 OSVersion:(id)arg2 date:(id)arg3 userName:(id)arg4 UUID:(id)arg5 detectorIdentifier:(id)arg6 ;
-(id)pendingCrashReports;
-(void)sendPendingCrashReportsSynchronously;
-(void)interpretClientVersion:(id)arg1 gettingDottedVersionString:(out id*)arg2 packedVersion:(out unsigned*)arg3 ;
-(void)logToWebEndpointWithParameters:(id)arg1 ;
-(id)URLQueryPartWithParameters:(id)arg1 ;
-(void)addPersistentCrashReportURLString:(id)arg1 ;
-(void)transmitCrashReport:(id)arg1 withTimeout:(double)arg2 suffix:(id)arg3 ;
-(id)dottedVersionFromRevision:(unsigned)arg1 ;
-(unsigned)revisionFromVersion:(id)arg1 ;
-(void)setPendingCrashReports:(id)arg1 ;
-(void)removePersistentCrashReportURLString:(id)arg1 ;
-(id)initWithDeviceID:(id)arg1 persistentStore:(id)arg2 urlPoster:(id)arg3 ;
-(id)ISODateFromDate:(id)arg1 ;
-(id)platformString;
@end

