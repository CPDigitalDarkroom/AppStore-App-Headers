/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:32 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UICollectionReusableView.h>
#import <TFNUI/TIPImageFetchDelegate.h>

@class NSString, TIPImagePipeline, UIImageView;

@interface T1PeopleDiscoveryCollectionBackgroundView : UICollectionReusableView <TIPImageFetchDelegate> {

	NSString* _backgroundImageURL;
	TIPImagePipeline* _imagePipeline;
	UIImageView* _imageView;

}

@property (nonatomic,readonly) UIImageView * imageView;                     //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,copy) NSString * backgroundImageURL;                   //@synthesize backgroundImageURL=_backgroundImageURL - In the implementation block
@property (nonatomic,retain) TIPImagePipeline * imagePipeline;              //@synthesize imagePipeline=_imagePipeline - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setImagePipeline:(TIPImagePipeline *)arg1 ;
-(void)imageFetchOperation:(id)arg1 didUpdateProgressiveImage:(id)arg2 progress:(float)arg3 ;
-(void)imageFetchOperation:(id)arg1 didLoadFinalImage:(id)arg2 fromSource:(int)arg3 ;
-(TIPImagePipeline *)imagePipeline;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)_updateImageView;
-(void)setBackgroundImageURL:(NSString *)arg1 ;
-(NSString *)backgroundImageURL;
@end

