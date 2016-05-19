/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:55 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SPTPersistentCache, NSObject, NSTimer, SPTPersistentCacheOptions;

@interface SPTPersistentCacheGarbageCollector : NSObject {

	SPTPersistentCache* _cache;
	NSObject*<OS_dispatch_queue> _queue;
	NSTimer* _timer;
	SPTPersistentCacheOptions* _options;

}

@property (nonatomic,__weak,readonly) SPTPersistentCache * cache;                                                //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                               //@synthesize queue=_queue - In the implementation block
@property (getter=isGarbageCollectionScheduled,nonatomic,readonly) char garbageCollectionScheduled; 
@property (nonatomic,retain) NSTimer * timer;                                                                    //@synthesize timer=_timer - In the implementation block
@property (nonatomic,copy) SPTPersistentCacheOptions * options;                                                  //@synthesize options=_options - In the implementation block
-(char)isGarbageCollectionScheduled;
-(void)enqueueGarbageCollection:(id)arg1 ;
-(id)initWithCache:(id)arg1 options:(id)arg2 queue:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)dealloc;
-(void)unschedule;
-(void)setOptions:(SPTPersistentCacheOptions *)arg1 ;
-(SPTPersistentCacheOptions *)options;
-(SPTPersistentCache *)cache;
-(void)schedule;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
@end

