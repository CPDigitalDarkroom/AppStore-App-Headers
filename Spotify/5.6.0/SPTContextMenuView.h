/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Spotify/SPTThemableView.h>
#import <Spotify/SPTThemableViewLayoutDelegate.h>

@protocol SPTThemableViewLayoutDelegate, SPTContextMenuViewDataSource, SPTContextMenuViewDelegate, SPTContextMenuViewInteractionTarget;
@class UIView, UIButton, SPTUIBlurView, SPTTableView, SPTContextMenuMaskView, CALayer, UIPanGestureRecognizer, UITapGestureRecognizer, NSString;

@interface SPTContextMenuView : UIView <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate, SPTThemableView, SPTThemableViewLayoutDelegate> {

	char _shouldShowHeaderViewSeparator;
	char _shouldShowShadowMask;
	char _animating;
	char _interactionRunning;
	char _underlyingBlurViewUpdated;
	id<SPTThemableViewLayoutDelegate> _layoutDelegate;
	id<SPTContextMenuViewDataSource> _dataSource;
	id<SPTContextMenuViewDelegate> _delegate;
	int _presentationStyle;
	UIView* _accessoryView;
	UIButton* _cancelButton;
	SPTUIBlurView* _blurView;
	UIView* _containerView;
	UIView* _accessoryContainerView;
	SPTTableView* _tableView;
	SPTContextMenuMaskView* _maskView;
	CALayer* _headerViewLineLayer;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UITapGestureRecognizer* _tapGestureRecognizer;
	id<SPTContextMenuViewInteractionTarget> _interactionTarget;
	CGPoint _lastGesturePoint;

}

@property (assign,nonatomic,__weak) id<SPTContextMenuViewDataSource> dataSource;                     //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SPTContextMenuViewDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int presentationStyle;                                                  //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (nonatomic,retain) UIView * headerView; 
@property (assign,nonatomic) char shouldShowHeaderViewSeparator;                                     //@synthesize shouldShowHeaderViewSeparator=_shouldShowHeaderViewSeparator - In the implementation block
@property (nonatomic,retain) UIView * footerView; 
@property (nonatomic,retain) UIView * accessoryView;                                                 //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                                //@synthesize cancelButton=_cancelButton - In the implementation block
@property (assign,nonatomic) int themeStyle; 
@property (assign,nonatomic) char shouldShowShadowMask;                                              //@synthesize shouldShowShadowMask=_shouldShowShadowMask - In the implementation block
@property (assign,getter=isAnimating,nonatomic) char animating;                                      //@synthesize animating=_animating - In the implementation block
@property (nonatomic,retain) SPTUIBlurView * blurView;                                               //@synthesize blurView=_blurView - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                                 //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIView * accessoryContainerView;                                        //@synthesize accessoryContainerView=_accessoryContainerView - In the implementation block
@property (nonatomic,retain) SPTTableView * tableView;                                               //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) SPTContextMenuMaskView * maskView;                                      //@synthesize maskView=_maskView - In the implementation block
@property (nonatomic,retain) CALayer * headerViewLineLayer;                                          //@synthesize headerViewLineLayer=_headerViewLineLayer - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;                          //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                          //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) id<SPTContextMenuViewInteractionTarget> interactionTarget;              //@synthesize interactionTarget=_interactionTarget - In the implementation block
@property (assign,nonatomic) char interactionRunning;                                                //@synthesize interactionRunning=_interactionRunning - In the implementation block
@property (assign,nonatomic) CGPoint lastGesturePoint;                                               //@synthesize lastGesturePoint=_lastGesturePoint - In the implementation block
@property (assign,nonatomic) char underlyingBlurViewUpdated;                                         //@synthesize underlyingBlurViewUpdated=_underlyingBlurViewUpdated - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SPTThemableViewLayoutDelegate> layoutDelegate;                //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
+(id)contextMenuViewWithInteractionTarget:(id)arg1 ;
-(void)applyThemeLayout;
-(void)themableViewDidUpdateLayout:(id)arg1 ;
-(id<SPTContextMenuViewInteractionTarget>)interactionTarget;
-(void)setShouldShowHeaderViewSeparator:(char)arg1 ;
-(void)setInteractionTarget:(id<SPTContextMenuViewInteractionTarget>)arg1 ;
-(void)setThemeStyle:(int)arg1 ;
-(int)themeStyle;
-(void)updateHeaderViewHeightAnimated:(char)arg1 ;
-(UIView *)accessoryContainerView;
-(void)setAccessoryContainerView:(UIView *)arg1 ;
-(id)initWithInteractionTarget:(id)arg1 ;
-(void)cancelButtonAction:(id)arg1 ;
-(void)panGestureRecognizerDidPan:(id)arg1 ;
-(void)tapGestureRecognizerDidTap:(id)arg1 ;
-(void)setUnderlyingBlurViewUpdated:(char)arg1 ;
-(CALayer *)headerViewLineLayer;
-(char)interactionRunning;
-(void)setInteractionRunning:(char)arg1 ;
-(CGPoint)lastGesturePoint;
-(void)setLastGesturePoint:(CGPoint)arg1 ;
-(CGRect)frameForCancelButton;
-(float)bottomLeadingEdgeContentOffset;
-(float)defaultContentOffset;
-(char)shouldShowHeaderViewSeparator;
-(void)setHeaderViewLineLayer:(CALayer *)arg1 ;
-(void)animateToNewHeaderViewHeight;
-(void)setShouldShowShadowMask:(char)arg1 ;
-(char)shouldShowShadowMask;
-(char)underlyingBlurViewUpdated;
-(CGRect)frameForContainerView:(char)arg1 ;
-(CGRect)frameForAccessoryContainerView:(char)arg1 ;
-(CGRect)frameForAccessoryView;
-(void)setPresentationStyle:(int)arg1 ;
-(id<SPTThemableViewLayoutDelegate>)layoutDelegate;
-(void)setLayoutDelegate:(id<SPTThemableViewLayoutDelegate>)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setDataSource:(id<SPTContextMenuViewDataSource>)arg1 ;
-(void)setDelegate:(id<SPTContextMenuViewDelegate>)arg1 ;
-(void)reloadData;
-(void)layoutSubviews;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id<SPTContextMenuViewDataSource>)dataSource;
-(id<SPTContextMenuViewDelegate>)delegate;
-(UIView *)containerView;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(float)contentOffset;
-(void)setContentOffset:(CGPoint)arg1 animated:(char)arg2 ;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(int)presentationStyle;
-(void)setContainerView:(UIView *)arg1 ;
-(void)setMaskView:(SPTContextMenuMaskView *)arg1 ;
-(SPTContextMenuMaskView *)maskView;
-(void)willMoveToSuperview:(id)arg1 ;
-(SPTTableView *)tableView;
-(void)setTableView:(SPTTableView *)arg1 ;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(char)isAnimating;
-(void)setAnimating:(char)arg1 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UIView *)accessoryView;
-(SPTUIBlurView *)blurView;
-(void)setBlurView:(SPTUIBlurView *)arg1 ;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
@end

