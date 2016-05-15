/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:21 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TFNUI/TFNViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol T1NewsTitleBarViewDelegate;
@class NSArray, NSMutableArray, UIView, UIFont, UIScrollView, NSString;

@interface T1NewsTitleBarViewController : TFNViewController <UIScrollViewDelegate> {

	NSArray* _titles;
	NSMutableArray* _titleButtons;
	UIView* _pillView;
	UIView* _hairlineView;
	float _visibleButtonsWidth;
	UIFont* _buttonTitleLabelFont;
	float _swipePosition;
	id<T1NewsTitleBarViewDelegate> _delegate;
	UIScrollView* _scrollView;

}

@property (nonatomic,retain) UIScrollView * scrollView;                                   //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic,__weak) id<T1NewsTitleBarViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didTapTitleButton:(id)arg1 ;
-(void)setSwipePosition:(float)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<T1NewsTitleBarViewDelegate>)arg1 ;
-(id<T1NewsTitleBarViewDelegate>)delegate;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(id)initWithTitles:(id)arg1 ;
@end

