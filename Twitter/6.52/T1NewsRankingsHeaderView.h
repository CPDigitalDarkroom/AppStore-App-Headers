/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, CALayer, NSString;

@interface T1NewsRankingsHeaderView : UIView {

	UILabel* _titleLabel;
	UIImageView* _iconImageView;
	CALayer* _topBorder;
	CALayer* _bottomBorder;
	NSString* _title;

}

@property (nonatomic,copy) NSString * title;              //@synthesize title=_title - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 withLayoutMetrics:(id)arg2 ;
-(float)_calculateCenterYForViewSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)initWithFrame:(CGRect)arg1 image:(id)arg2 ;
@end

