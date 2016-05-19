/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Spotify/Spotify-Structs.h>
@class NSData;

@interface IDImageData : NSObject {

	NSData* _imageData;
	CGSize _imageSize;

}

@property (nonatomic,readonly) CGSize imageSize;                //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,readonly) NSData * imageData;              //@synthesize imageData=_imageData - In the implementation block
+(id)emptyImageData;
+(id)imageDataWithData:(id)arg1 ;
+(id)imageDataWithURL:(id)arg1 ;
-(char)dataContainsValidImageType:(id)arg1 ;
-(CGSize)extractImageSizeFromData:(id)arg1 ;
-(NSData *)imageData;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)initWithData:(id)arg1 ;
-(CGSize)imageSize;
-(id)initWithURL:(id)arg1 ;
@end

