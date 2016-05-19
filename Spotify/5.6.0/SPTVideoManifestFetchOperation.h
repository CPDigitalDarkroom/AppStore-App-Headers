/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:48 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <Spotify/SPTDataLoaderDelegate.h>

@protocol OS_dispatch_queue, SPTDataLoaderCancellationToken;
@class SPTVideoManifest, NSError, NSString, SPTDataLoader, SPTPersistentCache, SPTVideoPreferences, NSObject, SPTaskCompletionSource;

@interface SPTVideoManifestFetchOperation : NSOperation <SPTDataLoaderDelegate> {

	char _finished;
	char _executing;
	SPTVideoManifest* _manifest;
	NSError* _error;
	int _max500ErrorRetryCount;
	NSString* _videoSourceID;
	SPTDataLoader* _dataLoader;
	SPTPersistentCache* _cache;
	SPTVideoPreferences* _videoPreferences;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<SPTDataLoaderCancellationToken> _pending;
	SPTaskCompletionSource* _taskCompletionSource;
	int _subtaskCount;
	int _retryCount;

}

@property (nonatomic,retain) SPTVideoManifest * manifest;                                //@synthesize manifest=_manifest - In the implementation block
@property (nonatomic,retain) NSError * error;                                            //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) int max500ErrorRetryCount;                                  //@synthesize max500ErrorRetryCount=_max500ErrorRetryCount - In the implementation block
@property (nonatomic,retain) NSString * videoSourceID;                                   //@synthesize videoSourceID=_videoSourceID - In the implementation block
@property (nonatomic,retain) SPTDataLoader * dataLoader;                                 //@synthesize dataLoader=_dataLoader - In the implementation block
@property (nonatomic,retain) SPTPersistentCache * cache;                                 //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) SPTVideoPreferences * videoPreferences;                     //@synthesize videoPreferences=_videoPreferences - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                     //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) id<SPTDataLoaderCancellationToken> pending;                 //@synthesize pending=_pending - In the implementation block
@property (nonatomic,retain) SPTaskCompletionSource * taskCompletionSource;              //@synthesize taskCompletionSource=_taskCompletionSource - In the implementation block
@property (assign,nonatomic) int subtaskCount;                                           //@synthesize subtaskCount=_subtaskCount - In the implementation block
@property (assign,nonatomic) int retryCount;                                             //@synthesize retryCount=_retryCount - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SPTDataLoader *)dataLoader;
-(void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2 ;
-(void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2 ;
-(void)dataLoader:(id)arg1 didCancelRequest:(id)arg2 ;
-(void)setDataLoader:(SPTDataLoader *)arg1 ;
-(NSString *)videoSourceID;
-(SPTVideoPreferences *)videoPreferences;
-(void)setVideoPreferences:(SPTVideoPreferences *)arg1 ;
-(void)completeWithManifest:(id)arg1 ;
-(void)cachedManifestWithVideoSourceID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(SPTaskCompletionSource *)taskCompletionSource;
-(void)subtaskDidCancel;
-(unsigned)ttlFromResponseHeaders:(id)arg1 ;
-(void)cacheManifestData:(id)arg1 forVideoSourceID:(id)arg2 withTTL:(unsigned)arg3 completion:(/*^block*/id)arg4 ;
-(int)max500ErrorRetryCount;
-(id)reasonFromErrorResponseJSON:(id)arg1 ;
-(void)setMax500ErrorRetryCount:(int)arg1 ;
-(void)setVideoSourceID:(NSString *)arg1 ;
-(void)setTaskCompletionSource:(SPTaskCompletionSource *)arg1 ;
-(int)subtaskCount;
-(void)setSubtaskCount:(int)arg1 ;
-(id)initWithVideoSourceID:(id)arg1 dataLoader:(id)arg2 cache:(id)arg3 videoPreferences:(id)arg4 ;
-(id)createSubtask;
-(char)isAsynchronous;
-(NSError *)error;
-(void)failWithError:(id)arg1 ;
-(void)cancel;
-(id)init;
-(void)start;
-(SPTPersistentCache *)cache;
-(void)setCache:(SPTPersistentCache *)arg1 ;
-(char)isFinished;
-(char)isExecuting;
-(void)setPending:(id<SPTDataLoaderCancellationToken>)arg1 ;
-(void)setManifest:(SPTVideoManifest *)arg1 ;
-(SPTVideoManifest *)manifest;
-(void)setExecuting:(char)arg1 ;
-(void)setRetryCount:(int)arg1 ;
-(int)retryCount;
-(void)setFinished:(char)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id<SPTDataLoaderCancellationToken>)pending;
-(void)setError:(NSError *)arg1 ;
@end

