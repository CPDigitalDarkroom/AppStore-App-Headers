/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:20 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBStickerResourceManager, OS_dispatch_queue, FBStickerResourceInvalidatorDelegate;
@class FBMStickerManager, FBStickerLastUpdatedInfoFetcher, FBStickerUpdateStore, NSObject;

@interface FBStickerResourceInvalidator : NSObject {

	FBMStickerManager* _stickerManager;
	id<FBStickerResourceManager> _stickerResourceManager;
	FBStickerLastUpdatedInfoFetcher* _updateInfoFetcher;
	FBStickerUpdateStore* _updateStore;
	NSObject*<OS_dispatch_queue> _queue;
	id<FBStickerResourceInvalidatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBStickerResourceInvalidatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_invalidateStickerResourcesSince:(id)arg1 ;
-(void)_requestListOfResourcesOnDisk;
-(void)_fetchUpdatedPacksSince:(id)arg1 ;
-(void)_invalidateUnownedStickerResources:(id)arg1 ;
-(void)_invalidationDidFailWithError:(id)arg1 ;
-(id)_unownedResourcesFromItemsOnDisk:(id)arg1 ;
-(void)_invalidationDidFinish;
-(void)_deleteStickerResources:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_invalidateStickerPacks:(id)arg1 ;
-(id)initWithUpdateStore:(id)arg1 updateInfoFetcher:(id)arg2 stickerManager:(id)arg3 stickerResourceManager:(id)arg4 ;
-(void)invalidateStickerResources;
-(void)setDelegate:(id<FBStickerResourceInvalidatorDelegate>)arg1 ;
-(id<FBStickerResourceInvalidatorDelegate>)delegate;
@end

