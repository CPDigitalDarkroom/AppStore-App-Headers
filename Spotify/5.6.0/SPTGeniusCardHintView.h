/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:35 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface SPTGeniusCardHintView : UIView {

	UIImageView* _background;
	UIImageView* _textImageView;

}

@property (nonatomic,retain) UIImageView * background;                 //@synthesize background=_background - In the implementation block
@property (nonatomic,retain) UIImageView * textImageView;              //@synthesize textImageView=_textImageView - In the implementation block
-(UIImageView *)textImageView;
-(void)setTextImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)background;
-(void)setBackground:(UIImageView *)arg1 ;
@end

