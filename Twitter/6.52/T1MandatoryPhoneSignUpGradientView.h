/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:19 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>

@protocol T1MandatoryPhoneSignUpGradientViewDelegate;
@class TFNButton, NSString, NSArray, CAGradientLayer, UIView, UIImage, T1WizardLoadingBirdView, UILabel;

@interface T1MandatoryPhoneSignUpGradientView : UIView {

	SCD_Struct_T16 _appLaunchTransitionMetrics;
	char _hasAnimatedIn;
	char _imageVisible;
	TFNButton* _primaryButton;
	TFNButton* _secondaryButton;
	id<T1MandatoryPhoneSignUpGradientViewDelegate> _delegate;
	NSString* _titleText;
	NSString* _primaryButtonTitle;
	NSString* _secondaryButtonTitle;
	NSArray* _buttons;
	CAGradientLayer* _gradientLayer;
	UIView* _blueBackground;
	UIView* _containerView;
	UIImage* _image;
	T1WizardLoadingBirdView* _logoView;
	UIView* _illustrationView;
	UILabel* _titleLabel;
	NSArray* _buttonContainers;
	float _preferredButtonWidth;
	CGSize _illustrationSize;

}

@property (nonatomic,copy) NSString * titleText;                                                          //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * primaryButtonTitle;                                                 //@synthesize primaryButtonTitle=_primaryButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * secondaryButtonTitle;                                               //@synthesize secondaryButtonTitle=_secondaryButtonTitle - In the implementation block
@property (nonatomic,copy) NSArray * buttons;                                                             //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) CAGradientLayer * gradientLayer;                                             //@synthesize gradientLayer=_gradientLayer - In the implementation block
@property (nonatomic,retain) UIView * blueBackground;                                                     //@synthesize blueBackground=_blueBackground - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                                      //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                             //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) T1WizardLoadingBirdView * logoView;                                          //@synthesize logoView=_logoView - In the implementation block
@property (nonatomic,retain) UIView * illustrationView;                                                   //@synthesize illustrationView=_illustrationView - In the implementation block
@property (assign,nonatomic) CGSize illustrationSize;                                                     //@synthesize illustrationSize=_illustrationSize - In the implementation block
@property (assign,nonatomic) char imageVisible;                                                           //@synthesize imageVisible=_imageVisible - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,copy) NSArray * buttonContainers;                                                    //@synthesize buttonContainers=_buttonContainers - In the implementation block
@property (assign,nonatomic) float preferredButtonWidth;                                                  //@synthesize preferredButtonWidth=_preferredButtonWidth - In the implementation block
@property (assign,nonatomic,__weak) id<T1MandatoryPhoneSignUpGradientViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) TFNButton * primaryButton;                                                 //@synthesize primaryButton=_primaryButton - In the implementation block
@property (nonatomic,readonly) TFNButton * secondaryButton;                                               //@synthesize secondaryButton=_secondaryButton - In the implementation block
@property (assign,nonatomic) char hasAnimatedIn;                                                          //@synthesize hasAnimatedIn=_hasAnimatedIn - In the implementation block
-(TFNButton *)secondaryButton;
-(UIView *)illustrationView;
-(id)initWithFrame:(CGRect)arg1 titleText:(id)arg2 primaryButtonTitle:(id)arg3 secondaryButtonTitle:(id)arg4 ;
-(UIView *)blueBackground;
-(void)setImageVisible:(char)arg1 ;
-(void)_updateButtonContainers;
-(char)hasAnimatedIn;
-(void)_layoutLogoFinal:(char)arg1 ;
-(float)preferredButtonWidth;
-(void)setPreferredButtonWidth:(float)arg1 ;
-(NSArray *)buttonContainers;
-(CGSize)illustrationSize;
-(void)_primaryButtonTapped;
-(void)_secondaryButtonTapped;
-(void)setIllustrationSize:(CGSize)arg1 ;
-(void)setIllustrationView:(UIView *)arg1 ;
-(void)setHasAnimatedIn:(char)arg1 ;
-(TFNButton *)primaryButton;
-(void)setButtonContainers:(NSArray *)arg1 ;
-(void)setPrimaryButtonTitle:(NSString *)arg1 ;
-(void)setBlueBackground:(UIView *)arg1 ;
-(char)imageVisible;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<T1MandatoryPhoneSignUpGradientViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<T1MandatoryPhoneSignUpGradientViewDelegate>)delegate;
-(UIView *)containerView;
-(UIImage *)image;
-(void)setContainerView:(UIView *)arg1 ;
-(CAGradientLayer *)gradientLayer;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(NSArray *)buttons;
-(NSString *)secondaryButtonTitle;
-(void)setSecondaryButtonTitle:(NSString *)arg1 ;
-(NSString *)primaryButtonTitle;
-(T1WizardLoadingBirdView *)logoView;
-(void)setLogoView:(T1WizardLoadingBirdView *)arg1 ;
-(NSString *)titleText;
-(void)animateIn;
-(void)setGradientLayer:(CAGradientLayer *)arg1 ;
-(void)setButtons:(NSArray *)arg1 ;
@end

