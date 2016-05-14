/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBImageProcessingConcurrentRequest.h>

@class UIImage, NSURL;

@interface FBImageProcessingAssetThumbnailRequest : FBImageProcessingConcurrentRequest {

	UIImage* _generatedThumbnail;
	NSURL* _assetURL;
	CGSize _thumbnailSize;

}

@property (nonatomic,retain) NSURL * assetURL;                            //@synthesize assetURL=_assetURL - In the implementation block
@property (assign,nonatomic) CGSize thumbnailSize;                        //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (nonatomic,readonly) UIImage * generatedThumbnail;              //@synthesize generatedThumbnail=_generatedThumbnail - In the implementation block
-(id)initWithAssetURL:(id)arg1 thumbnailSize:(CGSize)arg2 completionBlock:(/*^block*/id)arg3 cancelBlock:(/*^block*/id)arg4 ;
-(UIImage *)generatedThumbnail;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(NSURL *)assetURL;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(CGSize)thumbnailSize;
-(void)executeWithContext:(id)arg1 ;
-(void)setAssetURL:(NSURL *)arg1 ;
@end

