/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:50 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <UIKit/UIView.h>
#import <Spotify/SPTThemableView.h>

@protocol SPTThemableViewLayoutDelegate;
@class UIView, UIImageView, UILabel, UIImage, NSString;

@interface SPTInfoView : UIView <SPTThemableView> {

	id<SPTThemableViewLayoutDelegate> _layoutDelegate;
	UIView* _accessoryView;
	UIView* _secondaryAccessoryView;
	float _imageBottomMargin;
	float _titleBottomMargin;
	float _textBottomMargin;
	float _maximumSubviewWidth;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _textLabel;

}

@property (assign,nonatomic) int imageContentMode; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIView * accessoryView;                                               //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,retain) UIView * secondaryAccessoryView;                                      //@synthesize secondaryAccessoryView=_secondaryAccessoryView - In the implementation block
@property (assign,nonatomic) float imageBottomMargin;                                              //@synthesize imageBottomMargin=_imageBottomMargin - In the implementation block
@property (assign,nonatomic) float titleBottomMargin;                                              //@synthesize titleBottomMargin=_titleBottomMargin - In the implementation block
@property (assign,nonatomic) float textBottomMargin;                                               //@synthesize textBottomMargin=_textBottomMargin - In the implementation block
@property (assign,nonatomic) float maximumSubviewWidth;                                            //@synthesize maximumSubviewWidth=_maximumSubviewWidth - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                                                  //@synthesize textLabel=_textLabel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SPTThemableViewLayoutDelegate> layoutDelegate;              //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
+(id)infoViewWithSize:(CGSize)arg1 ;
+(id)infoViewWithDefaultType:(int)arg1 size:(CGSize)arg2 localizedFeatureName:(id)arg3 ;
-(void)applyThemeLayout;
-(void)configureWithDefaultType:(int)arg1 localizedFeatureName:(id)arg2 ;
-(void)setTextBottomMargin:(float)arg1 ;
-(void)setMaximumSubviewWidth:(float)arg1 ;
-(void)resetWidthForLabel:(id)arg1 ;
-(UIView *)secondaryAccessoryView;
-(void)setSecondaryAccessoryView:(UIView *)arg1 ;
-(void)setImageBottomMargin:(float)arg1 ;
-(void)setTitleBottomMargin:(float)arg1 ;
-(void)configureForSearchInfoType:(unsigned)arg1 searchString:(id)arg2 offlineMode:(char)arg3 useCompactMargins:(char)arg4 useMomentsAdaptedTexts:(char)arg5 ;
-(unsigned)numberOfSubviewsWithHeight;
-(float)totalHeightForSubviewsWithInterSubviewVerticalMargin:(float)arg1 ;
-(float)imageBottomMargin;
-(float)titleBottomMargin;
-(float)textBottomMargin;
-(float)setOriginForSubview:(id)arg1 forOriginY:(float)arg2 interSubviewVerticalMargin:(float)arg3 ;
-(float)maximumSubviewWidth;
-(id)imageForDefaultType:(int)arg1 ;
-(id)localizedTitleForDefaultType:(int)arg1 ;
-(id)localizedTextForDefaultType:(int)arg1 localizedFeatureName:(id)arg2 ;
-(id<SPTThemableViewLayoutDelegate>)layoutDelegate;
-(void)setLayoutDelegate:(id<SPTThemableViewLayoutDelegate>)arg1 ;
-(int)imageContentMode;
-(void)setImageContentMode:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIImage *)image;
-(UILabel *)titleLabel;
-(UILabel *)textLabel;
-(UIImageView *)imageView;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UIView *)accessoryView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setTextLabel:(UILabel *)arg1 ;
@end

