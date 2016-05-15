/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:33 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, TFNAnimatableImageView, UILabel, UIView, UIFont, NSString;

@interface T1PillView : UIView {

	char _timeLabelHidden;
	char _hiding;
	char _iconViewVisible;
	float _iconHorizontalSpace;
	UIColor* _textBackgroundColor;
	unsigned _iconLayout;
	TFNAnimatableImageView* _iconView;
	UILabel* _textLabel;
	UIView* _backgroundView;
	UIEdgeInsets _edgeInsets;

}

@property (assign,getter=isHiding,nonatomic) char hiding;                    //@synthesize hiding=_hiding - In the implementation block
@property (assign,nonatomic) char iconViewVisible;                           //@synthesize iconViewVisible=_iconViewVisible - In the implementation block
@property (nonatomic,retain) TFNAnimatableImageView * iconView;              //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                            //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                        //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                        //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic) float iconHorizontalSpace;                      //@synthesize iconHorizontalSpace=_iconHorizontalSpace - In the implementation block
@property (assign,nonatomic) float cornerRadius; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) NSString * text; 
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,retain) UIColor * textBackgroundColor;                  //@synthesize textBackgroundColor=_textBackgroundColor - In the implementation block
@property (assign,nonatomic) char timeLabelHidden;                           //@synthesize timeLabelHidden=_timeLabelHidden - In the implementation block
@property (assign,nonatomic) char textLabelHidden; 
@property (assign,nonatomic) unsigned iconLayout;                            //@synthesize iconLayout=_iconLayout - In the implementation block
@property (nonatomic,readonly) char isIconViewAnimating; 
+(id)_equalizerFrameSheet;
+(id)_mediaEqualizerImageSequenceConfiguration;
-(void)setTimeLabelHidden:(char)arg1 ;
-(void)setIconWithImage:(id)arg1 animated:(char)arg2 ;
-(void)setTextLabelHidden:(char)arg1 ;
-(char)isIconViewAnimating;
-(void)setIconWithAnimation:(unsigned)arg1 repeatCount:(unsigned)arg2 animated:(char)arg3 ;
-(void)setIconVisible:(char)arg1 animated:(char)arg2 ;
-(void)setTextBackgroundColor:(id)arg1 animated:(char)arg2 ;
-(void)setIconHorizontalSpace:(float)arg1 ;
-(void)setIconLayout:(unsigned)arg1 ;
-(char)textLabelHidden;
-(float)iconHorizontalSpace;
-(char)timeLabelHidden;
-(unsigned)iconLayout;
-(char)iconViewVisible;
-(void)setIconViewVisible:(char)arg1 ;
-(void)setTextBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)textBackgroundColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setCornerRadius:(float)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(float)cornerRadius;
-(CGSize)intrinsicContentSize;
-(UIFont *)font;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UILabel *)textLabel;
-(UIView *)backgroundView;
-(UIColor *)textColor;
-(void)setHiding:(char)arg1 ;
-(char)isHiding;
-(void)_showAnimated:(char)arg1 ;
-(void)setHidden:(char)arg1 animated:(char)arg2 ;
-(TFNAnimatableImageView *)iconView;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)_hideAnimated:(char)arg1 ;
-(void)setIconView:(TFNAnimatableImageView *)arg1 ;
-(void)setTextLabel:(UILabel *)arg1 ;
@end

