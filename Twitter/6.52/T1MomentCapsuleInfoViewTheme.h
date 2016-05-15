/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:35 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Twitter/Twitter-Structs.h>
@class UIColor, T1MomentScoreViewTheme, UIImage, UIFont;

@interface T1MomentCapsuleInfoViewTheme : NSObject {

	char _displaysThumbnail;
	UIColor* _titleColor;
	UIColor* _detailColor;
	UIColor* _thumbnailPlaceholderColor;
	UIColor* _thumbnailOutlineColor;
	UIColor* _backgroundColor;
	unsigned _followButtonVariant;
	unsigned _followButtonStrength;
	T1MomentScoreViewTheme* _scoreViewTheme;
	UIImage* _liveBadgeImage;
	UIImage* _cardImage;

}

@property (nonatomic,retain) UIImage * liveBadgeImage;                                   //@synthesize liveBadgeImage=_liveBadgeImage - In the implementation block
@property (nonatomic,retain) UIImage * cardImage;                                        //@synthesize cardImage=_cardImage - In the implementation block
@property (nonatomic,readonly) UIColor * titleColor;                                     //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,readonly) UIFont * titleFont; 
@property (nonatomic,readonly) char displaysDescription; 
@property (nonatomic,readonly) UIColor * descriptionColor; 
@property (nonatomic,readonly) UIFont * descriptionFont; 
@property (nonatomic,readonly) UIFont * boldDescriptionFont; 
@property (nonatomic,readonly) UIColor * detailColor;                                    //@synthesize detailColor=_detailColor - In the implementation block
@property (nonatomic,readonly) UIFont * detailFont; 
@property (nonatomic,readonly) char displaysCategory; 
@property (nonatomic,readonly) UIColor * categoryColor; 
@property (nonatomic,readonly) UIColor * categoryWithIconColor; 
@property (nonatomic,readonly) UIFont * categoryFont; 
@property (nonatomic,readonly) UIColor * categoryIconImagePlaceholderColor; 
@property (nonatomic,readonly) UIColor * authorFullNameColor; 
@property (nonatomic,readonly) UIFont * authorFullNameFont; 
@property (nonatomic,readonly) UIFont * authorUsernameFont; 
@property (nonatomic,readonly) UIColor * authorVerifiedBadgeColor; 
@property (nonatomic,readonly) char displaysThumbnail;                                   //@synthesize displaysThumbnail=_displaysThumbnail - In the implementation block
@property (nonatomic,readonly) char displaysPlayButton; 
@property (nonatomic,readonly) UIColor * thumbnailPlaceholderColor;                      //@synthesize thumbnailPlaceholderColor=_thumbnailPlaceholderColor - In the implementation block
@property (nonatomic,readonly) UIColor * thumbnailOutlineColor;                          //@synthesize thumbnailOutlineColor=_thumbnailOutlineColor - In the implementation block
@property (nonatomic,readonly) CGSize thumbnailSize; 
@property (nonatomic,readonly) UIColor * backgroundColor;                                //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * updateDotColor; 
@property (nonatomic,readonly) unsigned followButtonVariant;                             //@synthesize followButtonVariant=_followButtonVariant - In the implementation block
@property (nonatomic,readonly) unsigned followButtonStrength;                            //@synthesize followButtonStrength=_followButtonStrength - In the implementation block
@property (nonatomic,readonly) T1MomentScoreViewTheme * scoreViewTheme;                  //@synthesize scoreViewTheme=_scoreViewTheme - In the implementation block
+(id)darkTheme;
+(id)lightTheme;
+(id)cardTheme;
+(id)coverPageLightTheme;
+(id)endPagePivotTheme;
+(id)expandedTheme;
+(id)endPageTheme;
+(id)coverPageDarkTheme;
-(UIFont *)categoryFont;
-(UIImage *)liveBadgeImage;
-(char)displaysThumbnail;
-(char)displaysPlayButton;
-(UIColor *)descriptionColor;
-(char)displaysDescription;
-(UIImage *)cardImage;
-(unsigned)followButtonStrength;
-(unsigned)followButtonVariant;
-(T1MomentScoreViewTheme *)scoreViewTheme;
-(UIFont *)boldDescriptionFont;
-(UIColor *)detailColor;
-(char)displaysCategory;
-(UIColor *)categoryColor;
-(UIColor *)categoryIconImagePlaceholderColor;
-(UIFont *)authorUsernameFont;
-(UIColor *)thumbnailPlaceholderColor;
-(UIColor *)thumbnailOutlineColor;
-(UIColor *)updateDotColor;
-(UIColor *)authorFullNameColor;
-(UIFont *)authorFullNameFont;
-(UIColor *)authorVerifiedBadgeColor;
-(UIColor *)categoryWithIconColor;
-(id)liveBadgeColor;
-(id)_liveImageWithColor:(id)arg1 ;
-(id)_cardImageWithColor:(id)arg1 ;
-(void)setLiveBadgeImage:(UIImage *)arg1 ;
-(void)setCardImage:(UIImage *)arg1 ;
-(UIColor *)backgroundColor;
-(UIColor *)titleColor;
-(UIFont *)titleFont;
-(CGSize)thumbnailSize;
-(UIFont *)detailFont;
-(UIFont *)descriptionFont;
@end

