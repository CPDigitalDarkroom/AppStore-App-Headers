/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:30 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTDataLoaderCancellationTokenDelegate.h>
#import <Spotify/SPTDataLoaderDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class SPTPersistentCache, SPTDataLoader, NSObject, NSMutableArray, NSString;

@interface SPTTouchPreviewResolver : NSObject <SPTDataLoaderCancellationTokenDelegate, SPTDataLoaderDelegate> {

	SPTPersistentCache* _cache;
	SPTDataLoader* _dataLoader;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_source> _scheduleSource;
	NSMutableArray* _entities;

}

@property (nonatomic,readonly) SPTPersistentCache * cache;                              //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) SPTDataLoader * dataLoader;                                //@synthesize dataLoader=_dataLoader - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                    //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> scheduleSource;              //@synthesize scheduleSource=_scheduleSource - In the implementation block
@property (nonatomic,readonly) NSMutableArray * entities;                               //@synthesize entities=_entities - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SPTDataLoader *)dataLoader;
-(void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2 ;
-(void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2 ;
-(void)dataLoader:(id)arg1 didCancelRequest:(id)arg2 ;
-(void)setDataLoader:(SPTDataLoader *)arg1 ;
-(void)cancellationTokenDidCancel:(id)arg1 ;
-(char)isOnWorkQueue;
-(void)handleCacheResponse:(id)arg1 entity:(id)arg2 ;
-(void)resolveEntityFromBackend:(id)arg1 ;
-(NSObject*<OS_dispatch_source>)scheduleSource;
-(void)setScheduleSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)scheduledResolveEntitiesFromBackend;
-(void)resolveEntitiesFromBackend;
-(void)resolveEntities:(id)arg1 resolverService:(id)arg2 ;
-(id)parseResponseBody:(id)arg1 error:(id*)arg2 successful:(char)arg3 statusCode:(int)arg4 ;
-(void)cacheResults:(id)arg1 ;
-(void)resolveEntityFromCache:(id)arg1 ;
-(void)handleBackendResponseBody:(id)arg1 uris:(id)arg2 successful:(char)arg3 statusCode:(int)arg4 ;
-(id)resolveURI:(id)arg1 serviceName:(id)arg2 pathComponents:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithCache:(id)arg1 dataLoader:(id)arg2 ;
-(SPTPersistentCache *)cache;
-(id)keyForString:(id)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSMutableArray *)entities;
@end

