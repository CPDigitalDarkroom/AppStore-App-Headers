/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
@class NSString;

@interface FBVideoInitializationTracker : NSObject {

	double _startTime;
	char _prefetchLogged;
	char _cachedLogged;
	char _networkLogged;
	unsigned _rangeCount;
	char _readingFromDiskShouldLogAsCached;
	char _isTracking;
	NSString* _videoID;
	NSString* _trackerID;
	NSString* _loaderStatus;
	NSString* _assetStatus;
	double _assetLoadingDuration;

}

@property (nonatomic,copy,readonly) NSString * videoID;                   //@synthesize videoID=_videoID - In the implementation block
@property (nonatomic,copy,readonly) NSString * trackerID;                 //@synthesize trackerID=_trackerID - In the implementation block
@property (nonatomic,readonly) double elapsedTime; 
@property (nonatomic,readonly) char isTracking;                           //@synthesize isTracking=_isTracking - In the implementation block
@property (nonatomic,readonly) double assetLoadingDuration;               //@synthesize assetLoadingDuration=_assetLoadingDuration - In the implementation block
@property (nonatomic,copy,readonly) NSString * loaderStatus;              //@synthesize loaderStatus=_loaderStatus - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetStatus;               //@synthesize assetStatus=_assetStatus - In the implementation block
-(NSString *)videoID;
-(NSString *)trackerID;
-(void)logPlayerSent:(NSRange)arg1 ;
-(void)logPlayerReceivedFirstByte:(unsigned)arg1 length:(unsigned)arg2 cached:(char)arg3 prefetched:(char)arg4 ;
-(id)initWithTrackerID:(id)arg1 videoID:(id)arg2 ;
-(void)setLoaderStatus:(id)arg1 assetStatus:(id)arg2 assetLoadingDuration:(double)arg3 ;
-(double)assetLoadingDuration;
-(NSString *)loaderStatus;
-(NSString *)assetStatus;
-(char)isTracking;
-(double)elapsedTime;
-(void)stopTracking;
@end

