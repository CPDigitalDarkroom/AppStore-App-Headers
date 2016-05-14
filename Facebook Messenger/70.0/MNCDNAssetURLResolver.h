/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:40 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, MNCDNAssetURLCache, MNCDNAssetURLFetcher;

@interface MNCDNAssetURLResolver : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	MNCDNAssetURLCache* _urlCache;
	MNCDNAssetURLFetcher* _urlFetcher;

}
-(id)initWithQueue:(id)arg1 urlCache:(id)arg2 urlFetcher:(id)arg3 ;
-(void)resolveUrlForAssetIdentifier:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)_didFinishFetchingCachedUrl:(id)arg1 fromAssetIdentifier:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(void)_fetchUrlForAssetIdentifier:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)_fetchUrlDidSucceedForAssetIdentifier:(id)arg1 url:(id)arg2 success:(/*^block*/id)arg3 ;
@end

