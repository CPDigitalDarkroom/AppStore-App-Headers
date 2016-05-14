/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:45 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SRPerforming, NSCoding;
@class SRDiskStore, NSMutableOrderedSet;

@interface SRCacheBackedRequestProcessor : NSObject {

	SRDiskStore* _diskStore;
	id<SRPerforming> _executePerformer;
	char _initialized;
	NSMutableOrderedSet* _pendingHandles;
	char _isProcessing;
	id<NSCoding> _cache;
	id _errorCache;

}

@property (retain) id<NSCoding> cache;              //@synthesize cache=_cache - In the implementation block
@property (retain) id errorCache;                   //@synthesize errorCache=_errorCache - In the implementation block
-(id)diskCacheKey;
-(id)cachedResultForRequest:(id)arg1 inCache:(id)arg2 ;
-(id)errorCache;
-(id)errorForRequest:(id)arg1 inErrorCache:(id)arg2 ;
-(char)_satisfyRequest:(id)arg1 performer:(id)arg2 resultBlock:(/*^block*/id)arg3 ;
-(void)processCacheMisses:(id)arg1 inCache:(id)arg2 performerForReplenish:(id)arg3 ;
-(char)isCacheCheckExpensive;
-(void)_processIfNecessary;
-(void)_replenishCache:(/*^block*/id)arg1 shouldResetIsProcessing:(char)arg2 ;
-(void)setErrorCache:(id)arg1 ;
-(void)_drainPendingRequestsFromCache;
-(void)initializeCacheSynchronously:(id)arg1 ;
-(void)initializeCacheWithDiskStore:(id)arg1 performer:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)rawCache;
-(id)rawErrorCache;
-(id)executePerformer;
-(id)serviceRequestFromCache:(id)arg1 ;
-(id)serviceRequest:(id)arg1 performer:(id)arg2 resultBlock:(/*^block*/id)arg3 ;
-(void)replenishCache:(/*^block*/id)arg1 ;
-(void)replenishCacheAfterProcess:(/*^block*/id)arg1 ;
-(void)cancelRequests:(id)arg1 ;
-(id)requestCache;
-(void)_commonInit:(id)arg1 ;
-(id<NSCoding>)cache;
-(void)setCache:(id<NSCoding>)arg1 ;
@end

