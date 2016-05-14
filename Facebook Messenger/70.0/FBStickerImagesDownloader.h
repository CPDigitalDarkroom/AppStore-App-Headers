/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:20 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBServiceTransactionMutating.h>

@protocol FBStickerResourceManager;
@class FBUserSession, FBServiceTransactionTokenManager, UIImage, NSError, NSString;

@interface FBStickerImagesDownloader : NSObject <FBServiceTransactionMutating> {

	unsigned long long _stickerId;
	id<FBStickerResourceManager> _resourceManager;
	FBUserSession* _session;
	FBServiceTransactionTokenManager* _tokenManager;
	char _done;
	int _priority;
	unsigned long long _stickerPackId;
	UIImage* _image;
	UIImage* _animatedImage;
	char _didFinishDownloadingImage;
	char _didFinishDownloadingAnimatedImage;
	NSError* _error;
	/*^block*/id _completion;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStickerId:(unsigned long long)arg1 resourceManager:(id)arg2 session:(id)arg3 ;
-(void)downloadWithCompletion:(/*^block*/id)arg1 ;
-(void)downloadWithCompletion:(/*^block*/id)arg1 originalImageSizeEnabled:(char)arg2 ;
-(void)_didFetchStickerDetadata:(id)arg1 originalImageSizeEnabled:(char)arg2 ;
-(void)_handleFinishDownloadImage;
-(void)_downloadResourceWithURL:(id)arg1 resourceType:(unsigned)arg2 stickerPackFbId:(unsigned long long)arg3 successCallback:(/*^block*/id)arg4 ;
-(void)_handleDone;
-(void)_cancelInMainThread;
-(void)changePriorityToNewPriority:(int)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)_handleError:(id)arg1 ;
@end

