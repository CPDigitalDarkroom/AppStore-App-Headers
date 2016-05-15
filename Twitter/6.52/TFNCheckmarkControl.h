/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:55 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIControl.h>

@class UIImage, NSString, UILabel, UIImageView, UITapGestureRecognizer;

@interface TFNCheckmarkControl : UIControl {

	char _checked;
	UIImage* _icon;
	NSString* _text;
	UILabel* _textLabel;
	UIImageView* _checkmarkView;
	UIImageView* _profileActionImageView;
	UIImageView* _messagesActionImageView;
	UITapGestureRecognizer* _tapGestureRecognizer;

}

@property (nonatomic,retain) UILabel * textLabel;                                        //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UIImageView * checkmarkView;                                //@synthesize checkmarkView=_checkmarkView - In the implementation block
@property (nonatomic,retain) UIImageView * profileActionImageView;                       //@synthesize profileActionImageView=_profileActionImageView - In the implementation block
@property (nonatomic,retain) UIImageView * messagesActionImageView;                      //@synthesize messagesActionImageView=_messagesActionImageView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;              //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (assign,nonatomic) char checked;                                               //@synthesize checked=_checked - In the implementation block
@property (nonatomic,retain) UIImage * icon;                                             //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSString * text;                                              //@synthesize text=_text - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 commitLayout:(char)arg2 ;
-(UIImageView *)profileActionImageView;
-(void)setProfileActionImageView:(UIImageView *)arg1 ;
-(UIImageView *)messagesActionImageView;
-(void)setMessagesActionImageView:(UIImageView *)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setChecked:(char)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UILabel *)textLabel;
-(void)setIcon:(UIImage *)arg1 ;
-(id)accessibilityValue;
-(UIImage *)icon;
-(UIImageView *)checkmarkView;
-(char)checked;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)setCheckmarkView:(UIImageView *)arg1 ;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)toggle;
@end

