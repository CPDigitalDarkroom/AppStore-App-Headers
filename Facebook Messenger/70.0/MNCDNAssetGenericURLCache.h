/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:56 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNCDNURLExpirationEvaluating;
@class FBCache, FBDiskCache, FBAnalytics;

@interface MNCDNAssetGenericURLCache : NSObject {

	FBCache* _urlCache;
	FBDiskCache* _urlDiskCache;
	id<MNCDNURLExpirationEvaluating> _expirationEvaluator;
	FBAnalytics* _analytics;

}
-(id)initWithCache:(id)arg1 diskCache:(id)arg2 expirationEvaluator:(id)arg3 analytics:(id)arg4 ;
-(void)_diskCacheDidFetchData:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)cacheUrl:(id)arg1 forKey:(id)arg2 ;
-(void)fetchCachedUrlForKey:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)invalidateUrlForKey:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_cacheUrlToMemoryCache:(id)arg1 forKey:(id)arg2 ;
@end

