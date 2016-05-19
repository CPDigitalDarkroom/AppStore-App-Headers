/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:31 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Spotify/SPTCeramicBlockBackgroundView.h>

@class SPTImageBlurView, CAGradientLayer, NSString, UIImage;

@interface SPTCeramicCarouselBackgroundView : UIView <SPTCeramicBlockBackgroundView> {

	SPTImageBlurView* _backgroundImageBlurView;
	CAGradientLayer* _shadowGradientLayer;

}

@property (nonatomic,retain) SPTImageBlurView * backgroundImageBlurView;              //@synthesize backgroundImageBlurView=_backgroundImageBlurView - In the implementation block
@property (nonatomic,retain) CAGradientLayer * shadowGradientLayer;                   //@synthesize shadowGradientLayer=_shadowGradientLayer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIImage * image; 
-(void)setShadowGradientLayer:(CAGradientLayer *)arg1 ;
-(CAGradientLayer *)shadowGradientLayer;
-(void)setBackgroundImageBlurView:(SPTImageBlurView *)arg1 ;
-(SPTImageBlurView *)backgroundImageBlurView;
-(void)setImage:(UIImage *)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(UIImage *)image;
@end

