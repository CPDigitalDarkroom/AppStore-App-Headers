/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:38 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNTwitterCardView.h>

@protocol TFNTwitterCardViewDelegate;
@class T1NativeBasicAppCardViewModel, T1NativeBasicAppCardViewEventRegistry, TFNTappableHighlightView, TFNTappableImageView, UILabel, UIImageView, UIView, T1NativeAppCardRatingsView, TFNButton, T1NativeAppCardDetailsView;

@interface T1NativeBasicAppCardView : TFNTwitterCardView {

	id<TFNTwitterCardViewDelegate> _delegate;
	T1NativeBasicAppCardViewModel* _viewModel;
	T1NativeBasicAppCardViewEventRegistry* _viewEventRegistry;
	TFNTappableHighlightView* _containerHighlightView;
	TFNTappableImageView* _avatarView;
	UILabel* _fullNameLabel;
	TFNTappableHighlightView* _userHighlightView;
	UIImageView* _imageView;
	UIView* _imageBackgroundView;
	TFNTappableHighlightView* _imageHighlightView;
	UILabel* _titleLabel;
	T1NativeAppCardRatingsView* _ratingsView;
	UILabel* _detailLabel;
	UILabel* _secondDetailLabel;
	TFNTappableHighlightView* _titleHighlightView;
	TFNButton* _callToActionButton;
	TFNTappableHighlightView* _infoAndActionHighlightView;
	UILabel* _descriptionLabel;
	T1NativeAppCardDetailsView* _detailsView;

}

@property (nonatomic,retain) T1NativeBasicAppCardViewModel * viewModel;                              //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) T1NativeBasicAppCardViewEventRegistry * viewEventRegistry;              //@synthesize viewEventRegistry=_viewEventRegistry - In the implementation block
@property (nonatomic,retain) TFNTappableHighlightView * containerHighlightView;                      //@synthesize containerHighlightView=_containerHighlightView - In the implementation block
@property (nonatomic,retain) TFNTappableImageView * avatarView;                                      //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) UILabel * fullNameLabel;                                                //@synthesize fullNameLabel=_fullNameLabel - In the implementation block
@property (nonatomic,retain) TFNTappableHighlightView * userHighlightView;                           //@synthesize userHighlightView=_userHighlightView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                                //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * imageBackgroundView;                                           //@synthesize imageBackgroundView=_imageBackgroundView - In the implementation block
@property (nonatomic,retain) TFNTappableHighlightView * imageHighlightView;                          //@synthesize imageHighlightView=_imageHighlightView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) T1NativeAppCardRatingsView * ratingsView;                               //@synthesize ratingsView=_ratingsView - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;                                                  //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,retain) UILabel * secondDetailLabel;                                            //@synthesize secondDetailLabel=_secondDetailLabel - In the implementation block
@property (nonatomic,retain) TFNTappableHighlightView * titleHighlightView;                          //@synthesize titleHighlightView=_titleHighlightView - In the implementation block
@property (nonatomic,retain) TFNButton * callToActionButton;                                         //@synthesize callToActionButton=_callToActionButton - In the implementation block
@property (nonatomic,retain) TFNTappableHighlightView * infoAndActionHighlightView;                  //@synthesize infoAndActionHighlightView=_infoAndActionHighlightView - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                             //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) T1NativeAppCardDetailsView * detailsView;                               //@synthesize detailsView=_detailsView - In the implementation block
-(void)_nativeCardViewModelDidUpdate:(id)arg1 ;
-(void)cardContextDidUpdate;
-(id)imageFetchRequestsForLayoutMetrics:(id)arg1 ;
-(void)didUpdateProgressiveImage:(id)arg1 imageURL:(id)arg2 fromSource:(int)arg3 progress:(float)arg4 ;
-(void)didLoadFinalImage:(id)arg1 imageURL:(id)arg2 fromSource:(int)arg3 ;
-(T1NativeBasicAppCardViewEventRegistry *)viewEventRegistry;
-(void)setViewEventRegistry:(T1NativeBasicAppCardViewEventRegistry *)arg1 ;
-(TFNTappableHighlightView *)imageHighlightView;
-(void)setImageHighlightView:(TFNTappableHighlightView *)arg1 ;
-(TFNTappableHighlightView *)titleHighlightView;
-(void)setTitleHighlightView:(TFNTappableHighlightView *)arg1 ;
-(TFNButton *)callToActionButton;
-(void)setCallToActionButton:(TFNButton *)arg1 ;
-(UILabel *)fullNameLabel;
-(TFNTappableHighlightView *)containerHighlightView;
-(void)setContainerHighlightView:(TFNTappableHighlightView *)arg1 ;
-(UIView *)imageBackgroundView;
-(void)setFullNameLabel:(UILabel *)arg1 ;
-(T1NativeAppCardRatingsView *)ratingsView;
-(void)setRatingsView:(T1NativeAppCardRatingsView *)arg1 ;
-(float)_thresholdForStandardLayout;
-(TFNTappableHighlightView *)userHighlightView;
-(void)setUserHighlightView:(TFNTappableHighlightView *)arg1 ;
-(void)setImageBackgroundView:(UIView *)arg1 ;
-(UILabel *)secondDetailLabel;
-(void)setSecondDetailLabel:(UILabel *)arg1 ;
-(TFNTappableHighlightView *)infoAndActionHighlightView;
-(void)setInfoAndActionHighlightView:(TFNTappableHighlightView *)arg1 ;
-(UILabel *)descriptionLabel;
-(T1NativeBasicAppCardViewModel *)viewModel;
-(void)setViewModel:(T1NativeBasicAppCardViewModel *)arg1 ;
-(UILabel *)detailLabel;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)delegate;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(void)_update;
-(void)_cleanup;
-(UIImageView *)imageView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(TFNTappableImageView *)avatarView;
-(void)setAvatarView:(TFNTappableImageView *)arg1 ;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(void)setDetailsView:(T1NativeAppCardDetailsView *)arg1 ;
-(T1NativeAppCardDetailsView *)detailsView;
@end

