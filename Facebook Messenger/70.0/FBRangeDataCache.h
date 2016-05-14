/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:17 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBBlockDataCache.h>

@protocol OS_dispatch_queue;
@class FBLayeredCache, NSMutableDictionary, NSObject, NSString;

@interface FBRangeDataCache : NSObject <FBBlockDataCache> {

	FBLayeredCache* _cache;
	NSMutableDictionary* _semaphores;
	NSObject*<OS_dispatch_queue> _queue;
	mutex _lock;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dataWithKey:(id)arg1 range:(NSRange)arg2 expectedContentLength:(unsigned)arg3 ;
-(unsigned)expectedContentLengthWithDataKey:(id)arg1 ;
-(void)setExpectedContentLength:(unsigned)arg1 dataKey:(id)arg2 ;
-(void)insertData:(id)arg1 key:(id)arg2 range:(NSRange)arg3 expectedContentLength:(unsigned)arg4 videoBasicData:(SCD_Struct_FB87)arg5 ;
-(void)insertBlock:(id)arg1 key:(id)arg2 blockIndex:(unsigned)arg3 videoBasicData:(SCD_Struct_FB87)arg4 ;
-(unsigned)truncateOffsetForAlignment:(unsigned)arg1 ;
-(void)clearCache;
-(unsigned)blockSize;
-(id)initWithCache:(id)arg1 ;
@end

