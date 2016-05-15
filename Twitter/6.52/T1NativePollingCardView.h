/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:25 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNTwitterCardViewAccessible.h>

@class T1NativePollingCardViewModel, UIView, TFNTappableHighlightView, NSArray, UIImageView, CAGradientLayer, CAShapeLayer, UILabel, T1NativePollingCardViewTheme;

@interface T1NativePollingCardView : TFNTwitterCardViewAccessible {

	T1NativePollingCardViewModel* _viewModel;
	UIView* _highlightProxyView;
	TFNTappableHighlightView* _pollChoiceContainer;
	TFNTappableHighlightView* _pollResultContainer;
	TFNTappableHighlightView* _pollStatusContainer;
	NSArray* _choiceButtons;
	NSArray* _resultViews;
	UIImageView* _pollImageView;
	CAGradientLayer* _pollImageGradientLayer;
	CAShapeLayer* _pollImageInnerShadowLayer;
	UIView* _pollImageHighlightProxyView;
	TFNTappableHighlightView* _pollImageHighlightView;
	UILabel* _voteCountAndTimeLabel;
	T1NativePollingCardViewTheme* _theme;

}

@property (nonatomic,retain) T1NativePollingCardViewModel * viewModel;                       //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) UIView * highlightProxyView;                                    //@synthesize highlightProxyView=_highlightProxyView - In the implementation block
@property (nonatomic,retain) TFNTappableHighlightView * pollChoiceContainer;                 //@synthesize pollChoiceContainer=_pollChoiceContainer - In the implementation block
@property (nonatomic,retain) TFNTappableHighlightView * pollResultContainer;                 //@synthesize pollResultContainer=_pollResultContainer - In the implementation block
@property (nonatomic,retain) TFNTappableHighlightView * pollStatusContainer;                 //@synthesize pollStatusContainer=_pollStatusContainer - In the implementation block
@property (nonatomic,retain) NSArray * choiceButtons;                                        //@synthesize choiceButtons=_choiceButtons - In the implementation block
@property (nonatomic,retain) NSArray * resultViews;                                          //@synthesize resultViews=_resultViews - In the implementation block
@property (nonatomic,retain) UIImageView * pollImageView;                                    //@synthesize pollImageView=_pollImageView - In the implementation block
@property (nonatomic,retain) CAGradientLayer * pollImageGradientLayer;                       //@synthesize pollImageGradientLayer=_pollImageGradientLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * pollImageInnerShadowLayer;                       //@synthesize pollImageInnerShadowLayer=_pollImageInnerShadowLayer - In the implementation block
@property (nonatomic,retain) UIView * pollImageHighlightProxyView;                           //@synthesize pollImageHighlightProxyView=_pollImageHighlightProxyView - In the implementation block
@property (nonatomic,retain) TFNTappableHighlightView * pollImageHighlightView;              //@synthesize pollImageHighlightView=_pollImageHighlightView - In the implementation block
@property (nonatomic,retain) UILabel * voteCountAndTimeLabel;                                //@synthesize voteCountAndTimeLabel=_voteCountAndTimeLabel - In the implementation block
@property (nonatomic,retain) T1NativePollingCardViewTheme * theme;                           //@synthesize theme=_theme - In the implementation block
+(id)_animationGroupWithOpacityFrom:(float)arg1 opacityTo:(float)arg2 affineTransformFrom:(CGAffineTransform)arg3 affineTransformTo:(CGAffineTransform)arg4 ;
-(id)accessibilityStringForStatusText:(id)arg1 ;
-(void)cardContextDidUpdate;
-(id)imageFetchRequestsForLayoutMetrics:(id)arg1 ;
-(void)didUpdateProgressiveImage:(id)arg1 imageURL:(id)arg2 fromSource:(int)arg3 progress:(float)arg4 ;
-(void)didLoadFinalImage:(id)arg1 imageURL:(id)arg2 fromSource:(int)arg3 ;
-(void)_viewModelDidUpdate:(id)arg1 ;
-(void)_registerCAPIEventHandler;
-(UIImageView *)pollImageView;
-(void)_highlightPressed:(id)arg1 ;
-(void)_choiceButtonPressed:(id)arg1 ;
-(TFNTappableHighlightView *)pollResultContainer;
-(TFNTappableHighlightView *)pollChoiceContainer;
-(void)setResultVisible:(char)arg1 animated:(char)arg2 ;
-(NSArray *)resultViews;
-(UILabel *)voteCountAndTimeLabel;
-(id)_accessibilityPollTextForStatusText:(id)arg1 ;
-(id)_localizedResultsString;
-(void)_rebuildSubviewsWithTheme:(id)arg1 ;
-(void)_removeThemableSubviews;
-(id)_highlightContainerWithProxy:(id)arg1 addBorder:(char)arg2 pressedBackgroundColor:(id)arg3 hasButtonAXTraits:(char)arg4 ;
-(id)_choiceButtonWithTheme:(id)arg1 ;
-(void)_updateThemeIfNeeded;
-(NSArray *)choiceButtons;
-(UIView *)highlightProxyView;
-(void)setHighlightProxyView:(UIView *)arg1 ;
-(void)setPollChoiceContainer:(TFNTappableHighlightView *)arg1 ;
-(void)setPollResultContainer:(TFNTappableHighlightView *)arg1 ;
-(TFNTappableHighlightView *)pollStatusContainer;
-(void)setPollStatusContainer:(TFNTappableHighlightView *)arg1 ;
-(void)setChoiceButtons:(NSArray *)arg1 ;
-(void)setResultViews:(NSArray *)arg1 ;
-(void)setPollImageView:(UIImageView *)arg1 ;
-(CAGradientLayer *)pollImageGradientLayer;
-(void)setPollImageGradientLayer:(CAGradientLayer *)arg1 ;
-(CAShapeLayer *)pollImageInnerShadowLayer;
-(void)setPollImageInnerShadowLayer:(CAShapeLayer *)arg1 ;
-(UIView *)pollImageHighlightProxyView;
-(void)setPollImageHighlightProxyView:(UIView *)arg1 ;
-(TFNTappableHighlightView *)pollImageHighlightView;
-(void)setPollImageHighlightView:(TFNTappableHighlightView *)arg1 ;
-(void)setVoteCountAndTimeLabel:(UILabel *)arg1 ;
-(void)updateSubviews;
-(T1NativePollingCardViewModel *)viewModel;
-(void)setViewModel:(T1NativePollingCardViewModel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)prepareForReuse;
-(void)_cleanup;
-(id)accessibilityElements;
-(T1NativePollingCardViewTheme *)theme;
-(void)setTheme:(T1NativePollingCardViewTheme *)arg1 ;
@end

