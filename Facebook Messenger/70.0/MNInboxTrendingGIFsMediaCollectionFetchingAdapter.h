/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNMediaCollectionFetchingDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNSingleViewModelLoading.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNViewModelUpdateMonitoring.h>

@protocol OS_dispatch_queue, MNViewModelUpdating;
@class NSObject, MNPlatformContentFetcher, NSMutableDictionary, NSString;

@interface MNInboxTrendingGIFsMediaCollectionFetchingAdapter : NSObject <MNMediaCollectionFetchingDelegate, MNSingleViewModelLoading, MNViewModelUpdateMonitoring> {

	NSObject*<OS_dispatch_queue> _queue;
	id<MNViewModelUpdating> _updater;
	MNPlatformContentFetcher* _contentFetcher;
	NSMutableDictionary* _requestIdToRequestMap;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureWithUpdater:(id)arg1 ;
-(void)loadViewModelForRequest:(id)arg1 withRequestId:(unsigned long)arg2 ;
-(void)_didFetchWithMediaCollection:(id)arg1 ;
-(void)_didFailToFetchMediaCollection;
-(void)mediaFetcherDidFetchMediaCollection:(id)arg1 ;
-(void)mediaFetcherDidFail:(id)arg1 ;
-(id)initWithSession:(id)arg1 configManager:(id)arg2 queue:(id)arg3 ;
-(void)cancelRequest:(unsigned long)arg1 ;
@end

