/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, TFNFormAppearance;

@interface TFNFormFieldErrorView : UIView {

	UILabel* _textLabel;
	TFNFormAppearance* _appearance;

}

@property (nonatomic,readonly) UILabel * textLabel;                       //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) TFNFormAppearance * appearance;              //@synthesize appearance=_appearance - In the implementation block
+(float)heightForMessage:(id)arg1 withWidth:(float)arg2 appearance:(id)arg3 layoutMetrics:(id)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(TFNFormAppearance *)appearance;
-(UILabel *)textLabel;
-(void)setAppearance:(TFNFormAppearance *)arg1 ;
@end

