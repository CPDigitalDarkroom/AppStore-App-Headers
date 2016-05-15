/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:34 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface T1ComposePhotoGalleryAccessDeniedView : UIView {

	UILabel* _headerLabel;
	UILabel* _titleLabel;
	UILabel* _instructionsLabel;
	int _theme;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic) UIEdgeInsets contentInsets;              //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) int theme;                               //@synthesize theme=_theme - In the implementation block
-(void)_updateTheme;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(int)theme;
-(void)setTheme:(int)arg1 ;
@end

