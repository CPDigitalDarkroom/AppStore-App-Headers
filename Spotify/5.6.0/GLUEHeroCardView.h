/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:50 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <UIKit/UIView.h>
#import <Spotify/GLUEHeroCard.h>

@class GLUELabel, GLUEImageView, UIView, GLUEHeroCardStyle, SPTLayoutConstraintBuilder, GLUEGradientView, NSString;

@interface GLUEHeroCardView : UIView <GLUEHeroCard> {

	GLUELabel* _titleLabel;
	GLUELabel* _subtitleLabel;
	GLUEImageView* _imageView;
	UIView* _contentContainerView;
	GLUEHeroCardStyle* _style;
	SPTLayoutConstraintBuilder* _layout;
	GLUEGradientView* _gradientView;
	UIView* _heroView;
	UIView* _contentView;
	UIView* _labelsContainerView;

}

@property (nonatomic,copy) GLUEHeroCardStyle * style;                          //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) SPTLayoutConstraintBuilder * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) GLUEGradientView * gradientView;                  //@synthesize gradientView=_gradientView - In the implementation block
@property (nonatomic,retain) UIView * heroView;                                //@synthesize heroView=_heroView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                             //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * labelsContainerView;                     //@synthesize labelsContainerView=_labelsContainerView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GLUELabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) GLUELabel * subtitleLabel;                      //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) GLUEImageView * imageView;                      //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * contentContainerView;                    //@synthesize contentContainerView=_contentContainerView - In the implementation block
-(void)glue_applyStyle:(id)arg1 ;
-(void)addViewConstraints;
-(void)removeViewConstraints;
-(void)setupViewItems;
-(void)removeSubviewsOfView:(id)arg1 ;
-(void)refreshConstraints;
-(UIView *)heroView;
-(UIView *)labelsContainerView;
-(void)setHeroView:(UIView *)arg1 ;
-(void)setLabelsContainerView:(UIView *)arg1 ;
-(UIView *)contentContainerView;
-(id)initWithFrame:(CGRect)arg1 ;
-(GLUEHeroCardStyle *)style;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)setStyle:(GLUEHeroCardStyle *)arg1 ;
-(GLUELabel *)titleLabel;
-(SPTLayoutConstraintBuilder *)layout;
-(GLUELabel *)subtitleLabel;
-(GLUEImageView *)imageView;
-(void)setLayout:(SPTLayoutConstraintBuilder *)arg1 ;
-(void)setGradientView:(GLUEGradientView *)arg1 ;
-(GLUEGradientView *)gradientView;
-(void)setContentContainerView:(UIView *)arg1 ;
@end

