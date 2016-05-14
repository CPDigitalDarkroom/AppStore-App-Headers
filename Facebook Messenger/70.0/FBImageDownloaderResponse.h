/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:48 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
@class NSError;

@interface FBImageDownloaderResponse : NSObject {

	CGImageRef _image;
	unsigned _imageSource;
	NSError* _error;
	id _extraData;

}

@property (nonatomic,retain) id extraData;                        //@synthesize extraData=_extraData - In the implementation block
@property (nonatomic,readonly) CGImageRef image;                  //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) unsigned imageSource;              //@synthesize imageSource=_imageSource - In the implementation block
@property (nonatomic,readonly) NSError * error;                   //@synthesize error=_error - In the implementation block
+(id)newWithImage:(CGImageRef)arg1 source:(unsigned)arg2 error:(id)arg3 ;
+(id)newWithError:(id)arg1 ;
+(id)newWithCachedImage:(id)arg1 source:(unsigned)arg2 error:(id)arg3 ;
+(id)newWithImage:(CGImageRef)arg1 extraData:(id)arg2 source:(unsigned)arg3 error:(id)arg4 ;
+(id)newWithCachedImage:(id)arg1 source:(unsigned)arg2 ;
+(id)newWithImage:(CGImageRef)arg1 source:(unsigned)arg2 ;
-(unsigned)imageSource;
-(id)webP_animatedImage;
-(NSError *)error;
-(void)dealloc;
-(CGImageRef)image;
-(id)animatedImage;
-(void)setExtraData:(id)arg1 ;
-(char)isCached;
-(id)extraData;
@end

