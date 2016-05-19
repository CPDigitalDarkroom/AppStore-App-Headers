/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:46 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTImageLoaderDelegate.h>

@protocol SPTImageLoader;
@class NSString;

@interface SPTShareFBMessenger : NSObject <SPTImageLoaderDelegate> {

	id<SPTImageLoader> _imageLoader;

}

@property (nonatomic,retain) id<SPTImageLoader> imageLoader;              //@synthesize imageLoader=_imageLoader - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SPTImageLoader>)imageLoader;
-(void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5 ;
-(void)imageLoader:(id)arg1 didFailToLoadImageForURL:(id)arg2 error:(id)arg3 context:(id)arg4 ;
-(void)setImageLoader:(id<SPTImageLoader>)arg1 ;
-(id)placeholderImageForItemType:(unsigned)arg1 ;
-(id)initWithImageLoaderFactory:(id)arg1 ;
-(void)shareEntityData:(id)arg1 image:(id)arg2 broadcastFlow:(char)arg3 ;
-(char)shouldCircleAndBlurImageForEntityData:(id)arg1 ;
-(id)fbMessengerMetadataString:(id)arg1 creationFlow:(id)arg2 ;
-(void)shareEntityData:(id)arg1 broadcastFlow:(char)arg2 completion:(/*^block*/id)arg3 ;
@end

