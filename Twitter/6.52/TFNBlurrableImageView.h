/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:55 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNCrossDissolvableImageView.h>

@class UIImage;

@interface TFNBlurrableImageView : TFNCrossDissolvableImageView {

	unsigned _blurId;
	char _canBlur;
	float _darkenStrength;

}

@property (assign,nonatomic) char canBlur;                               //@synthesize canBlur=_canBlur - In the implementation block
@property (nonatomic,readonly) float darkenStrength;                     //@synthesize darkenStrength=_darkenStrength - In the implementation block
@property (assign,getter=isBlurred,nonatomic) char blurred; 
@property (nonatomic,readonly) UIImage * blurredImage; 
+(unsigned)recommendedIntermediates;
-(void)fastPrepareBlur:(int)arg1 complete:(/*^block*/id)arg2 ;
-(id)initWithImage:(id)arg1 darkenStrength:(float)arg2 ;
-(void)discardBlur;
-(void)prepareBlur:(int)arg1 complete:(/*^block*/id)arg2 ;
-(void)setBlurred:(char)arg1 animated:(char)arg2 duration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(char)canBlur;
-(void)_innerPrepareBlur:(int)arg1 complete:(/*^block*/id)arg2 ;
-(float)darkenStrength;
-(void)setCanBlur:(char)arg1 ;
-(void)setBlurred:(char)arg1 animated:(char)arg2 duration:(double)arg3 ;
-(char)isBlurred;
-(void)setImages:(id)arg1 prepareBlur:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)setBaseImage:(id)arg1 prepareBlur:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)setBaseImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(id)init;
-(id)initWithImage:(id)arg1 ;
-(id)initWithImage:(id)arg1 highlightedImage:(id)arg2 ;
-(void)setImages:(id)arg1 ;
-(id)initWithImages:(id)arg1 ;
-(void)setBlurred:(char)arg1 ;
-(UIImage *)blurredImage;
@end

