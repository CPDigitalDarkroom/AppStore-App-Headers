/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:46 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBInvalidating.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBImageDownloadLogger.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBStreamingImageResponseHandlerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBImageDownloaderRequestManagerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBImageStreamingService.h>

@protocol FBImageDownloaderCache;
@class FBImageDownloaderRequestManager, NSString;

@interface FBImageStreamer : NSObject <FBInvalidating, FBImageDownloadLogger, FBStreamingImageResponseHandlerDelegate, FBImageDownloaderRequestManagerDelegate, FBImageStreamingService> {

	id<FBImageDownloaderCache> _imageCache;
	FBImageDownloaderRequestManager* _requestManager;
	FBStreamingFlagsManager* _desiredImageFlagsForUrls;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) char valid; 
-(id)streamImageWithURL:(id)arg1 desiredImageFlag:(unsigned)arg2 imageFlagsToBeNotified:(unsigned)arg3 scenePath:(id)arg4 priority:(int)arg5 callPath:(id)arg6 options:(unsigned)arg7 queue:(id)arg8 streamingBlock:(/*^block*/id)arg9 ;
-(void)updateScenePath:(id)arg1 andPriority:(int)arg2 forToken:(id)arg3 ;
-(void)cancelStreamingForToken:(id)arg1 ;
-(/*^block*/id)_createResponseHandlerFactoryBlockForURL:(id)arg1 withPartialData:(id)arg2 ;
-(char)_handleStreamingCachedImage:(id)arg1 withDownloadResult:(unsigned)arg2 forDownload:(id)arg3 ;
-(id)_responseHandlerForRequest:(id)arg1 response:(id)arg2 URL:(id)arg3 partialData:(id)arg4 ;
-(void)logFinishWithType:(unsigned)arg1 ;
-(unsigned)maxDesiredFlagForURL:(id)arg1 ;
-(void)reachedMaxDesiredFlagForURL:(id)arg1 result:(id)arg2 isLastFlag:(char)arg3 ;
-(void)imageDownloadAdded:(id)arg1 ;
-(void)allImageDownloadsRemovedForURL:(id)arg1 ;
-(void)clearAllImageCache:(/*^block*/id)arg1 ;
-(id)initWithNetworker:(id)arg1 imageCache:(id)arg2 configuration:(id)arg3 scenePathAnnouncer:(id)arg4 ;
-(void)invalidate;
-(char)isValid;
@end

