/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:37 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <UIKit/UIImageView.h>
#import <Spotify/SPTImageLoaderDelegate.h>

@protocol SPTImageLoader;
@class NSString;

@interface SPTLyricsNowPlayingViewCoverArtView : UIImageView <SPTImageLoaderDelegate> {

	id<SPTImageLoader> _imageLoader;

}

@property (nonatomic,retain) id<SPTImageLoader> imageLoader;              //@synthesize imageLoader=_imageLoader - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SPTImageLoader>)imageLoader;
-(void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5 ;
-(void)setImageLoader:(id<SPTImageLoader>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 imageLoader:(id)arg2 ;
-(void)setImageURL:(id)arg1 ;
@end

