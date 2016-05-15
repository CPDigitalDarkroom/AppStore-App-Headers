/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:29 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIButton.h>

@class UIImage, NSString;

@interface T1TranslateTweetButton : UIButton {

	UIImage* _iconImage;
	UIImage* _logoImage;
	char _showingLogo;
	NSString* _originalLanguage;
	/*^block*/id _tapActionBlock;
	/*^block*/id _logoTapActionBlock;

}

@property (nonatomic,retain) NSString * originalLanguage;              //@synthesize originalLanguage=_originalLanguage - In the implementation block
@property (assign,nonatomic) char showingLogo;                         //@synthesize showingLogo=_showingLogo - In the implementation block
@property (nonatomic,copy) id tapActionBlock;                          //@synthesize tapActionBlock=_tapActionBlock - In the implementation block
@property (nonatomic,copy) id logoTapActionBlock;                      //@synthesize logoTapActionBlock=_logoTapActionBlock - In the implementation block
+(float)selectionPadding;
+(id)button;
-(id)tapActionBlock;
-(void)setTapActionBlock:(id)arg1 ;
-(void)setLogoTapActionBlock:(id)arg1 ;
-(id)logoTapActionBlock;
-(void)setOriginalLanguage:(NSString *)arg1 ;
-(NSString *)originalLanguage;
-(char)showingLogo;
-(void)setShowingLogo:(char)arg1 ;
-(void)_didTap:(id)arg1 forEvent:(id)arg2 ;
-(char)_isTouchingBingLogo:(CGPoint)arg1 ;
-(id)_buttonTitle;
-(id)_logoImage;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(id)_iconImage;
@end

