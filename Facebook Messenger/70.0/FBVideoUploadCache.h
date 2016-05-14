/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:05 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBKeyValueObjectStore;
@class NSMutableDictionary, NSMutableArray;

@interface FBVideoUploadCache : NSObject {

	id<FBKeyValueObjectStore> _store;
	NSMutableDictionary* _allCachedStates;
	char _hasSynced;
	char _isLoading;
	NSMutableArray* _completionBlocks;

}
-(id)initWithKeyValueObjectStore:(id)arg1 ;
-(void)removeVideoUploadState:(id)arg1 ;
-(id)getVideoUploadStateForComposerId:(id)arg1 assetId:(id)arg2 ;
-(void)loadAllVideoUploadStatesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)saveVideoUploadState:(id)arg1 ;
-(void)_storeState;
-(void)_removeVideoUploadStateForComposerId:(id)arg1 assetId:(id)arg2 ;
-(void)_attemptedToLoadNonExistentStoredObject;
-(void)_successfullyLoadedObject:(id)arg1 ;
-(void)_failedToLoadStoredObject;
-(void)_didFinishLoading;
-(void)_addCompletionBlock:(/*^block*/id)arg1 ;
@end

