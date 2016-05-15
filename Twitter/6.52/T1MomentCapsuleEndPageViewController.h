/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:32 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <TFNUI/TFNViewController.h>
#import <Twitter/T1MomentViewControllerDelegate.h>
#import <Twitter/T1MomentCapsuleInfoViewDelegate.h>
#import <Twitter/T1MomentCapsuleInfoViewLayoutDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Twitter/T1MomentPageForegroundContentHeightProvider.h>

@protocol T1MomentViewControllerDelegate;
@class NSArray, UIView, UIImageView, UILabel, T1MomentCapsuleInfoView, TFNButton, TFNTwitterMomentCapsule, T1MomentCapsuleListViewController, TFNTwitterAccount, NSString;

@interface T1MomentCapsuleEndPageViewController : TFNViewController <T1MomentViewControllerDelegate, T1MomentCapsuleInfoViewDelegate, T1MomentCapsuleInfoViewLayoutDelegate, UIGestureRecognizerDelegate, T1MomentPageForegroundContentHeightProvider> {

	char _hidesFollowButton;
	id<T1MomentViewControllerDelegate> _delegate;
	NSArray* _pivotCapsules;
	UIView* _backgroundView;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	T1MomentCapsuleInfoView* _capsuleInfoView;
	TFNButton* _shareButton;
	TFNTwitterMomentCapsule* _momentCapsule;
	T1MomentCapsuleListViewController* _pivotListViewController;
	UIView* _separatorView;
	TFNTwitterAccount* _account;

}

@property (nonatomic,retain) UIView * backgroundView;                                                  //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) T1MomentCapsuleInfoView * capsuleInfoView;                                //@synthesize capsuleInfoView=_capsuleInfoView - In the implementation block
@property (nonatomic,retain) TFNButton * shareButton;                                                  //@synthesize shareButton=_shareButton - In the implementation block
@property (nonatomic,retain) TFNTwitterMomentCapsule * momentCapsule;                                  //@synthesize momentCapsule=_momentCapsule - In the implementation block
@property (nonatomic,retain) T1MomentCapsuleListViewController * pivotListViewController;              //@synthesize pivotListViewController=_pivotListViewController - In the implementation block
@property (nonatomic,retain) UIView * separatorView;                                                   //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,readonly) TFNTwitterAccount * account;                                            //@synthesize account=_account - In the implementation block
@property (assign,nonatomic,__weak) id<T1MomentViewControllerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * pivotCapsules;                                                  //@synthesize pivotCapsules=_pivotCapsules - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char hidesFollowButton;                                                   //@synthesize hidesFollowButton=_hidesFollowButton - In the implementation block
-(char)hidesFollowButton;
-(char)shouldShowInfoTextForMoment:(id)arg1 ;
-(CGSize)sizeOfViewWithMomentCapsule:(id)arg1 width:(float)arg2 theme:(id)arg3 account:(id)arg4 layoutMetrics:(id)arg5 ;
-(TFNTwitterMomentCapsule *)momentCapsule;
-(void)layoutView:(id)arg1 withLayoutMetrics:(id)arg2 ;
-(void)setHidesFollowButton:(char)arg1 ;
-(void)momentCapsuleInfoViewDidTapFollow:(id)arg1 ;
-(void)momentViewController:(id)arg1 willDisplayMomentCapsule:(id)arg2 context:(int)arg3 ;
-(void)momentViewController:(id)arg1 didTapSubscribeMomentCapsule:(id)arg2 context:(int)arg3 ;
-(void)momentViewController:(id)arg1 didTapMomentCapsule:(id)arg2 sender:(id)arg3 context:(int)arg4 ;
-(void)updateWithCapsule:(id)arg1 ;
-(NSArray *)pivotCapsules;
-(T1MomentCapsuleListViewController *)pivotListViewController;
-(T1MomentCapsuleInfoView *)capsuleInfoView;
-(void)_didTapShare:(id)arg1 ;
-(void)setPivotCapsules:(NSArray *)arg1 ;
-(void)setCapsuleInfoView:(T1MomentCapsuleInfoView *)arg1 ;
-(void)setMomentCapsule:(TFNTwitterMomentCapsule *)arg1 ;
-(void)setPivotListViewController:(T1MomentCapsuleListViewController *)arg1 ;
-(void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1 ;
-(float)lengthOfLayoutGuide:(int)arg1 forEnvironment:(id)arg2 ;
-(float)contentHeight;
-(void)setShareButton:(TFNButton *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<T1MomentViewControllerDelegate>)arg1 ;
-(id)init;
-(id<T1MomentViewControllerDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(UILabel *)titleLabel;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(void)viewDidLoad;
-(UIImageView *)imageView;
-(UIView *)separatorView;
-(void)setSeparatorView:(UIView *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(TFNButton *)shareButton;
-(TFNTwitterAccount *)account;
@end

