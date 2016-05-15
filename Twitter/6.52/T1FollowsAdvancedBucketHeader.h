/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:30 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewHeaderFooterView.h>

@protocol T1FollowsAdvancedBucketDelegate;
@class T1FollowsAdvancedBucket, TFNTappableHighlightView, UIView, UILabel, TFNCheckmarkControl, NSArray, NSLayoutConstraint;

@interface T1FollowsAdvancedBucketHeader : UITableViewHeaderFooterView {

	char _checked;
	char _hideCheckmark;
	T1FollowsAdvancedBucket* _item;
	id<T1FollowsAdvancedBucketDelegate> _delegate;
	TFNTappableHighlightView* _containerView;
	UIView* _topBorder;
	UIView* _bottomBorder;
	UILabel* _title;
	TFNCheckmarkControl* _followControl;
	NSArray* _containerConstraints;
	NSLayoutConstraint* _widthConstraint;

}

@property (nonatomic,retain) T1FollowsAdvancedBucket * item;                                   //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) char checked;                                                     //@synthesize checked=_checked - In the implementation block
@property (assign,nonatomic) char hideCheckmark;                                               //@synthesize hideCheckmark=_hideCheckmark - In the implementation block
@property (assign,nonatomic,__weak) id<T1FollowsAdvancedBucketDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) TFNTappableHighlightView * containerView;                       //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,readonly) UIView * topBorder;                                             //@synthesize topBorder=_topBorder - In the implementation block
@property (nonatomic,readonly) UIView * bottomBorder;                                          //@synthesize bottomBorder=_bottomBorder - In the implementation block
@property (nonatomic,readonly) UILabel * title;                                                //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) TFNCheckmarkControl * followControl;                              //@synthesize followControl=_followControl - In the implementation block
@property (nonatomic,retain) NSArray * containerConstraints;                                   //@synthesize containerConstraints=_containerConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * widthConstraint;                             //@synthesize widthConstraint=_widthConstraint - In the implementation block
-(void)_updateAccessibilityLabel;
-(TFNCheckmarkControl *)followControl;
-(void)setFollowControl:(TFNCheckmarkControl *)arg1 ;
-(char)hideCheckmark;
-(NSArray *)containerConstraints;
-(void)setHideCheckmark:(char)arg1 ;
-(void)setContainerConstraints:(NSArray *)arg1 ;
-(void)setDelegate:(id<T1FollowsAdvancedBucketDelegate>)arg1 ;
-(id)init;
-(void)setChecked:(char)arg1 ;
-(id<T1FollowsAdvancedBucketDelegate>)delegate;
-(TFNTappableHighlightView *)containerView;
-(T1FollowsAdvancedBucket *)item;
-(UILabel *)title;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)updateConstraints;
-(NSLayoutConstraint *)widthConstraint;
-(void)setItem:(T1FollowsAdvancedBucket *)arg1 ;
-(void)tap:(id)arg1 ;
-(char)checked;
-(void)setWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(UIView *)bottomBorder;
-(UIView *)topBorder;
@end

