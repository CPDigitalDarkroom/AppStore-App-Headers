/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/T1EventCardView.h>

@class T1EventCardSportTeamRowView, UIView, UILabel, T1SportDisplayHelper;

@interface T1SportsEventCardView : T1EventCardView {

	T1EventCardSportTeamRowView* _topPlayerRow;
	T1EventCardSportTeamRowView* _bottomPlayerRow;
	UIView* _dividerView;
	UILabel* _detailsLabels;
	UIView* _highlightedView;
	T1SportDisplayHelper* _displayHelper;

}

@property (nonatomic,retain) T1EventCardSportTeamRowView * topPlayerRow;                 //@synthesize topPlayerRow=_topPlayerRow - In the implementation block
@property (nonatomic,retain) T1EventCardSportTeamRowView * bottomPlayerRow;              //@synthesize bottomPlayerRow=_bottomPlayerRow - In the implementation block
@property (nonatomic,retain) UIView * dividerView;                                       //@synthesize dividerView=_dividerView - In the implementation block
@property (nonatomic,retain) UILabel * detailsLabels;                                    //@synthesize detailsLabels=_detailsLabels - In the implementation block
@property (nonatomic,retain) UIView * highlightedView;                                   //@synthesize highlightedView=_highlightedView - In the implementation block
@property (nonatomic,readonly) T1SportDisplayHelper * displayHelper;                     //@synthesize displayHelper=_displayHelper - In the implementation block
+(float)contentHeightForStyle:(int)arg1 ;
+(float)footerHeightForStyle:(int)arg1 ;
+(float)footerOffsetForStyle:(int)arg1 ;
-(T1SportDisplayHelper *)displayHelper;
-(void)setDividerView:(UIView *)arg1 ;
-(void)updateHighlightedViewVisibility:(char)arg1 animated:(char)arg2 ;
-(void)didUpdateSportEvent:(id)arg1 ;
-(T1EventCardSportTeamRowView *)topPlayerRow;
-(T1EventCardSportTeamRowView *)bottomPlayerRow;
-(char)_shouldShowScoreForEvent:(id)arg1 ;
-(UILabel *)detailsLabels;
-(id)_scheduleStringForEvent:(id)arg1 ;
-(id)_accessibilityLabelForEvent:(id)arg1 ;
-(UIView *)highlightedView;
-(void)setTopPlayerRow:(T1EventCardSportTeamRowView *)arg1 ;
-(void)setBottomPlayerRow:(T1EventCardSportTeamRowView *)arg1 ;
-(void)setDetailsLabels:(UILabel *)arg1 ;
-(void)setHighlightedView:(UIView *)arg1 ;
-(UIView *)dividerView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setHighlighted:(char)arg1 ;
-(void)update;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
@end

