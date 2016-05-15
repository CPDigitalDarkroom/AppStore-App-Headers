/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:38 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>
#import <Twitter/T1StatusViewInlineImages.h>
#import <Twitter/TFNPreferredMaxLayoutWidthSizable.h>
#import <TFNUI/TIPImageFetchDelegate.h>

@interface T1Twitter.SimpleStatusInlineImageView : UIView <T1StatusViewInlineImages, TFNPreferredMaxLayoutWidthSizable, TIPImageFetchDelegate> {

	 cornerRadius;
	 delegate;
	 imageView;
	 tapRecognizer;
	 longPressRecognizer;
	 statusState;
	 imagePipeline;
	 imageFetchState;
	 preferredMaxLayoutWidth;

}

@property (readonly,nonatomic) float cornerRadius; 
@property (assign,nonatomic) float preferredMaxLayoutWidth; 
+(float)widthToHeightAspectRatio;
+(char)shouldIncludeInStatusViewFor:(id)arg1 style:(int)arg2 options:(id)arg3 account:(id)arg4 errorHandler:(/*^block*/id)arg5 ;
-(id)imageViewAtIndex:(long)arg1 ;
-(CGRect)imageContentsRectAtIndex:(long)arg1 ;
-(int)imageContentModeAtIndex:(long)arg1 ;
-(char)hasAnyVisibleImageBeenDownloaded;
-(void)animateImageWithKenBurnsAnimationType:(unsigned)arg1 duration:(double)arg2 zoomScale:(float)arg3 presentationLayer:(id)arg4 ;
-(void)animateImagesWithSlideshowDuration:(double)arg1 imageIndex:(long)arg2 startingOpacity:(float)arg3 endingOpacity:(float)arg4 ;
-(void)imageViewTapAction:(id)arg1 ;
-(void)imageViewLongPressAction:(id)arg1 ;
-(void)setViewModel:(id)arg1 style:(int)arg2 options:(id)arg3 account:(id)arg4 ;
-(void)unsetViewModel;
-(void)imageFetchOperation:(id)arg1 didLoadFinalImage:(id)arg2 fromSource:(int)arg3 ;
-(char)imageFetchOperation:(id)arg1 shouldLoadProgressivelyWithIdentifier:(id)arg2 URL:(id)arg3 imageType:(int)arg4 originalDimensions:(CGSize)arg5 ;
-(void)imageFetchOperation:(id)arg1 didFailToLoadFinalImage:(id)arg2 ;
-(char)imageFetchOperation:(id)arg1 shouldContinueLoadingAfterFetchingPreviewImage:(id)arg2 fromSource:(int)arg3 originalDimensions:(CGSize)arg4 URL:(id)arg5 identifier:(id)arg6 ;
-(void)imageFetchOperation:(id)arg1 didUpdateProgressiveImage:(id)arg2 fromSource:(int)arg3 progress:(float)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(float)cornerRadius;
-(CGSize)intrinsicContentSize;
-(void)setPreferredMaxLayoutWidth:(float)arg1 ;
-(float)preferredMaxLayoutWidth;
-(id)imageAtIndex:(long)arg1 ;
@end

