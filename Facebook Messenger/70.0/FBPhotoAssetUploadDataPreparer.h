/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:09 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBImageProcessingConcurrentPipe, FBImageProcessingRequestContextHandle, NSMutableDictionary;

@interface FBPhotoAssetUploadDataPreparer : NSObject {

	FBImageProcessingConcurrentPipe* _uploadAssetLoadingAndProcessingPipe;
	FBImageProcessingConcurrentPipe* _displayProcessingPipe;
	FBImageProcessingConcurrentPipe* _displayAssetLoadingPipe;
	FBImageProcessingRequestContextHandle* _displayRequestContextHandle;
	NSMutableDictionary* _assetURLsToMostRecentDisplayRequests;

}
+(id)sharedInstance;
-(void)prepareDisplayImageForPhotoAttachment:(id)arg1 maxDimension:(int)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)prepareDisplayImageForAssetID:(id)arg1 edits:(id)arg2 maxDimension:(int)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)cancelDisplayImagePreparationForAssetID:(id)arg1 ;
-(void)prepareUploadDataForPhotoAttachment:(id)arg1 uploadDimension:(int)arg2 compressionRate:(float)arg3 loggingBlock:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_prepareImageDataForAssetURL:(id)arg1 edits:(id)arg2 metadata:(id)arg3 uploadDimension:(int)arg4 compressionRate:(float)arg5 shouldReserveOriginalMetadata:(char)arg6 loggingBlock:(/*^block*/id)arg7 completionBlock:(/*^block*/id)arg8 ;
-(void)_prepareDisplayImageForAssetURL:(id)arg1 edits:(id)arg2 maxDimension:(int)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_removePendingDisplayRequestForAssetURL:(id)arg1 cancel:(char)arg2 ;
-(id)_writeImage:(id)arg1 intoData:(id)arg2 compressionRate:(float)arg3 inMetadata:(id)arg4 error:(id*)arg5 ;
-(void)_setPendingDisplayRequest:(id)arg1 forAssetURL:(id)arg2 ;
-(id)init;
@end

