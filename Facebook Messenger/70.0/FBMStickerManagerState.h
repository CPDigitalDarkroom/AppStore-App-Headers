/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:20 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSMutableSet, NSMutableDictionary;

@interface FBMStickerManagerState : NSObject {

	NSString* _storageFilePath;
	NSMutableArray* _stickerPacksOnDevice;
	NSMutableSet* _userRemovedStickerPackFbIds;
	NSMutableDictionary* _stickerMap;
	NSMutableDictionary* _stickerPackMap;
	NSMutableDictionary* _stickersInPackMap;
	NSMutableDictionary* _stickerPackIdsByStickerId;
	NSMutableDictionary* _stickerUsageCounter;

}

@property (nonatomic,copy) NSString * storageFilePath;                                     //@synthesize storageFilePath=_storageFilePath - In the implementation block
@property (nonatomic,retain) NSMutableArray * stickerPacksOnDevice;                        //@synthesize stickerPacksOnDevice=_stickerPacksOnDevice - In the implementation block
@property (nonatomic,retain) NSMutableSet * userRemovedStickerPackFbIds;                   //@synthesize userRemovedStickerPackFbIds=_userRemovedStickerPackFbIds - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * stickerMap;                             //@synthesize stickerMap=_stickerMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * stickerPackMap;                         //@synthesize stickerPackMap=_stickerPackMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * stickersInPackMap;                      //@synthesize stickersInPackMap=_stickersInPackMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * stickerPackIdsByStickerId;              //@synthesize stickerPackIdsByStickerId=_stickerPackIdsByStickerId - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * stickerUsageCounter;                    //@synthesize stickerUsageCounter=_stickerUsageCounter - In the implementation block
-(NSMutableArray *)stickerPacksOnDevice;
-(NSString *)storageFilePath;
-(void)setStorageFilePath:(NSString *)arg1 ;
-(void)setStickerPacksOnDevice:(NSMutableArray *)arg1 ;
-(NSMutableSet *)userRemovedStickerPackFbIds;
-(void)setUserRemovedStickerPackFbIds:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)stickerMap;
-(void)setStickerMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)stickerPackMap;
-(void)setStickerPackMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)stickersInPackMap;
-(void)setStickersInPackMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)stickerPackIdsByStickerId;
-(void)setStickerPackIdsByStickerId:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)stickerUsageCounter;
-(void)setStickerUsageCounter:(NSMutableDictionary *)arg1 ;
-(id)init;
@end

