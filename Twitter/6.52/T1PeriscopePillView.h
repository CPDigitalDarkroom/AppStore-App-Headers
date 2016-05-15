/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIControl.h>

@class NSString, UIView, UIImageView, UILabel;

@interface T1PeriscopePillView : UIControl {

	unsigned _type;
	NSString* _totalParticipants;
	NSString* _endedViews;
	UIView* _badgeView;
	UIView* _detailBadgeView;
	UIImageView* _iconImageView;
	UIImageView* _detailBadgeImageView;
	UILabel* _label;
	UILabel* _detailBadgeViewLabel;

}

@property (nonatomic,retain) UIView * badgeView;                              //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,retain) UIView * detailBadgeView;                        //@synthesize detailBadgeView=_detailBadgeView - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;                     //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UIImageView * detailBadgeImageView;              //@synthesize detailBadgeImageView=_detailBadgeImageView - In the implementation block
@property (nonatomic,retain) UILabel * label;                                 //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UILabel * detailBadgeViewLabel;                  //@synthesize detailBadgeViewLabel=_detailBadgeViewLabel - In the implementation block
@property (assign,nonatomic) unsigned type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * totalParticipants;                    //@synthesize totalParticipants=_totalParticipants - In the implementation block
@property (nonatomic,retain) NSString * endedViews;                           //@synthesize endedViews=_endedViews - In the implementation block
-(NSString *)totalParticipants;
-(void)setBadgeView:(UIView *)arg1 ;
-(void)setTotalParticipants:(NSString *)arg1 ;
-(void)setEndedViews:(NSString *)arg1 ;
-(void)_updateBadgeComponentsBackgroundColors;
-(UIView *)detailBadgeView;
-(NSString *)endedViews;
-(void)setDetailBadgeView:(UIView *)arg1 ;
-(UIImageView *)detailBadgeImageView;
-(void)setDetailBadgeImageView:(UIImageView *)arg1 ;
-(UILabel *)detailBadgeViewLabel;
-(void)setDetailBadgeViewLabel:(UILabel *)arg1 ;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(char)arg1 ;
-(void)setSelected:(char)arg1 ;
-(UIView *)badgeView;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
@end

