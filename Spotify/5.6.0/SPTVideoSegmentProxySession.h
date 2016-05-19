/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:48 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTDataLoaderDelegate.h>

@protocol SPTVideoSegmentProxySessionDelegate, SPTVideoSegmentProxySessionDataSource, SPTDashTransmuxer, OS_dispatch_queue;
@class NSString, SPTDataLoader, NSMutableDictionary, NSObject, SPTVideoCDNSelector;

@interface SPTVideoSegmentProxySession : NSObject <SPTDataLoaderDelegate> {

	NSString* _sessionID;
	id<SPTVideoSegmentProxySessionDelegate> _delegate;
	id<SPTVideoSegmentProxySessionDataSource> _dataSource;
	id<SPTDashTransmuxer> _transmuxer;
	SPTDataLoader* _dataLoader;
	NSMutableDictionary* _dashInitSegmentTasks;
	NSObject*<OS_dispatch_queue> _workQueue;
	SPTVideoCDNSelector* _cdnSelector;

}

@property (nonatomic,readonly) NSString * sessionID;                                                   //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic,__weak) id<SPTVideoSegmentProxySessionDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SPTVideoSegmentProxySessionDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) id<SPTDashTransmuxer> transmuxer;                                         //@synthesize transmuxer=_transmuxer - In the implementation block
@property (nonatomic,retain) SPTDataLoader * dataLoader;                                               //@synthesize dataLoader=_dataLoader - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dashInitSegmentTasks;                               //@synthesize dashInitSegmentTasks=_dashInitSegmentTasks - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                                   //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) SPTVideoCDNSelector * cdnSelector;                                        //@synthesize cdnSelector=_cdnSelector - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SPTDataLoader *)dataLoader;
-(void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2 ;
-(void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2 ;
-(void)dataLoader:(id)arg1 didCancelRequest:(id)arg2 ;
-(void)setDataLoader:(SPTDataLoader *)arg1 ;
-(SPTVideoCDNSelector *)cdnSelector;
-(void)setCdnSelector:(SPTVideoCDNSelector *)arg1 ;
-(id)transmuxDashMP4:(id)arg1 profileID:(unsigned)arg2 segmentIndex:(unsigned)arg3 ;
-(void)setTransmuxer:(id<SPTDashTransmuxer>)arg1 ;
-(id<SPTDashTransmuxer>)transmuxer;
-(id)initWithSessionID:(id)arg1 dataLoader:(id)arg2 transmuxer:(id)arg3 cdnSelector:(id)arg4 ;
-(id)dashInitSegmentTaskForProfileID:(unsigned)arg1 ;
-(char)onWorkQueue;
-(NSMutableDictionary *)dashInitSegmentTasks;
-(char)doRequest:(id)arg1 videoURL:(id)arg2 profileID:(unsigned)arg3 force:(char)arg4 ;
-(id)proxyURLForProfileID:(unsigned)arg1 segmentIndex:(unsigned)arg2 ;
-(void)setDashInitSegmentTasks:(NSMutableDictionary *)arg1 ;
-(void)setDataSource:(id<SPTVideoSegmentProxySessionDataSource>)arg1 ;
-(void)setDelegate:(id<SPTVideoSegmentProxySessionDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<SPTVideoSegmentProxySessionDataSource>)dataSource;
-(id<SPTVideoSegmentProxySessionDelegate>)delegate;
-(NSString *)sessionID;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
@end

