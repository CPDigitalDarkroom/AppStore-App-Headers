/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:10 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBSessionClassProvidable.h>

@class NSMutableDictionary, NSString, NSOperationQueue, NSDate, NSBlockOperation;

@interface MNAudioCache : NSObject <FBSessionClassProvidable> {

	NSMutableDictionary* lruKeyCache;
	int lruTime;
	NSMutableDictionary* memCache;
	NSString* diskCachePath;
	NSOperationQueue* cacheInQueue;
	NSOperationQueue* cacheOutQueue;
	NSDate* _lastCleanDate;
	unsigned _cleanupTaskID;
	NSBlockOperation* _cleanupOperation;

}

@property (nonatomic,retain) NSDate * lastCleanDate;                           //@synthesize lastCleanDate=_lastCleanDate - In the implementation block
@property (assign,nonatomic) unsigned cleanupTaskID;                           //@synthesize cleanupTaskID=_cleanupTaskID - In the implementation block
@property (nonatomic,retain) NSBlockOperation * cleanupOperation;              //@synthesize cleanupOperation=_cleanupOperation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)clearAllMemoryAndDisk;
-(void)storeAudio:(id)arg1 forKey:(id)arg2 toDisk:(char)arg3 ;
-(id)audioFromKey:(id)arg1 fromDisk:(char)arg2 ;
-(void)removeAudioForKey:(id)arg1 ;
-(void)queryDiskCacheForKey:(id)arg1 delegate:(id)arg2 userInfo:(id)arg3 ;
-(void)clearAllMemory;
-(void)cleanDisk;
-(void)setCleanupTaskID:(unsigned)arg1 ;
-(void)setLastCleanDate:(NSDate *)arg1 ;
-(void)completeCleanupOperation;
-(id)cachePathForKey:(id)arg1 ;
-(void)notifyDelegate:(id)arg1 ;
-(void)storeKeyWithDataToDisk:(id)arg1 ;
-(void)updateLRUCacheForKey:(id)arg1 ;
-(void)queryDiskCacheOperation:(id)arg1 ;
-(void)clearMemCache;
-(void)cleanDiskUntilOperationCancelled:(id)arg1 ;
-(unsigned)cleanupTaskID;
-(void)setCleanupOperation:(NSBlockOperation *)arg1 ;
-(NSDate *)lastCleanDate;
-(void)clearDisk;
-(void)storeAudio:(id)arg1 forKey:(id)arg2 ;
-(id)audioFromKey:(id)arg1 ;
-(void)clearMemory;
-(void)dealloc;
-(id)init;
-(NSBlockOperation *)cleanupOperation;
-(void)applicationDidEnterBackground;
@end

