/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:37 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNTwitterCardView.h>

@protocol TFNTwitterCardViewDelegate;
@class T1NativeLeadGenCardViewModel, UILabel, UIImageView, TFNTappableHighlightView, UIView, TFNButton;

@interface T1NativeLeadGenCardForwardView : TFNTwitterCardView {

	id<TFNTwitterCardViewDelegate> _delegate;
	T1NativeLeadGenCardViewModel* _viewModel;
	UILabel* _titleLabel;
	UIImageView* _imageView;
	TFNTappableHighlightView* _imageHighlightView;
	UIView* _imagePartition;
	TFNButton* _callToActionButton;
	TFNTappableHighlightView* _callToActionHighlightView;
	TFNTappableHighlightView* _fallbackHighlightView;
	UIView* _proxyHighlightView;

}

@property (nonatomic,retain) T1NativeLeadGenCardViewModel * viewModel;                          //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                           //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) TFNTappableHighlightView * imageHighlightView;                     //@synthesize imageHighlightView=_imageHighlightView - In the implementation block
@property (nonatomic,retain) UIView * imagePartition;                                           //@synthesize imagePartition=_imagePartition - In the implementation block
@property (nonatomic,retain) TFNButton * callToActionButton;                                    //@synthesize callToActionButton=_callToActionButton - In the implementation block
@property (nonatomic,retain) TFNTappableHighlightView * callToActionHighlightView;              //@synthesize callToActionHighlightView=_callToActionHighlightView - In the implementation block
@property (nonatomic,retain) TFNTappableHighlightView * fallbackHighlightView;                  //@synthesize fallbackHighlightView=_fallbackHighlightView - In the implementation block
@property (nonatomic,retain) UIView * proxyHighlightView;                                       //@synthesize proxyHighlightView=_proxyHighlightView - In the implementation block
-(void)_setupHighlightView:(id)arg1 withAccessibilityIdentifier:(id)arg2 ;
-(void)_updateCallToAction;
-(UIView *)proxyHighlightView;
-(void)cardContextDidUpdate;
-(id)imageFetchRequestsForLayoutMetrics:(id)arg1 ;
-(void)didUpdateProgressiveImage:(id)arg1 imageURL:(id)arg2 fromSource:(int)arg3 progress:(float)arg4 ;
-(void)didLoadFinalImage:(id)arg1 imageURL:(id)arg2 fromSource:(int)arg3 ;
-(TFNTappableHighlightView *)imageHighlightView;
-(void)setImageHighlightView:(TFNTappableHighlightView *)arg1 ;
-(TFNButton *)callToActionButton;
-(void)setCallToActionButton:(TFNButton *)arg1 ;
-(TFNTappableHighlightView *)fallbackHighlightView;
-(void)setFallbackHighlightView:(TFNTappableHighlightView *)arg1 ;
-(void)setProxyHighlightView:(UIView *)arg1 ;
-(void)_viewModelDidUpdate:(id)arg1 ;
-(void)_updateImageViewWithImage:(id)arg1 source:(int)arg2 ;
-(void)_updateBorder;
-(void)_didPerformCardActionOnContainer:(id)arg1 ;
-(void)_didPerformCardActionOnImage:(id)arg1 ;
-(void)_didPerformCardActionOnButton:(id)arg1 ;
-(void)_doNothing;
-(void)_didPerformCardActionOnButton:(id)arg1 event:(id)arg2 ;
-(UIView *)imagePartition;
-(void)setImagePartition:(UIView *)arg1 ;
-(TFNTappableHighlightView *)callToActionHighlightView;
-(void)setCallToActionHighlightView:(TFNTappableHighlightView *)arg1 ;
-(T1NativeLeadGenCardViewModel *)viewModel;
-(void)setViewModel:(T1NativeLeadGenCardViewModel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)delegate;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(void)_cleanup;
-(UIImageView *)imageView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)_updateTitle;
-(void)_updateContent;
@end

