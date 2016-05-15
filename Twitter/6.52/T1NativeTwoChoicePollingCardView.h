/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:33 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNTwitterCardView.h>
#import <Twitter/T1NativeCardClassicAttributionViewDelegate.h>

@class T1NativeTwoChoicePollingCardViewModel, T1NativeCardClassicAttributionView, TFNTappableImageView, UIImageView, T1NativePollingCardTitleSubtitleView, T1NativeCardClassicButton, UILabel, NSString;

@interface T1NativeTwoChoicePollingCardView : TFNTwitterCardView <T1NativeCardClassicAttributionViewDelegate> {

	T1NativeTwoChoicePollingCardViewModel* _viewModel;
	T1NativeCardClassicAttributionView* _attributionView;
	TFNTappableImageView* _firstChoiceImageView;
	TFNTappableImageView* _secondChoiceImageView;
	UIImageView* _thankYouImageView;
	T1NativePollingCardTitleSubtitleView* _thankYouInfoView;
	T1NativeCardClassicButton* _firstChoiceButton;
	T1NativeCardClassicButton* _secondChoiceButton;
	UILabel* _firstResultLabel;
	UILabel* _secondResultLabel;
	T1NativePollingCardTitleSubtitleView* _infoView;

}

@property (nonatomic,retain) T1NativeTwoChoicePollingCardViewModel * viewModel;                    //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) T1NativeCardClassicAttributionView * attributionView;                 //@synthesize attributionView=_attributionView - In the implementation block
@property (nonatomic,retain) TFNTappableImageView * firstChoiceImageView;                          //@synthesize firstChoiceImageView=_firstChoiceImageView - In the implementation block
@property (nonatomic,retain) TFNTappableImageView * secondChoiceImageView;                         //@synthesize secondChoiceImageView=_secondChoiceImageView - In the implementation block
@property (nonatomic,retain) UIImageView * thankYouImageView;                                      //@synthesize thankYouImageView=_thankYouImageView - In the implementation block
@property (nonatomic,retain) T1NativePollingCardTitleSubtitleView * thankYouInfoView;              //@synthesize thankYouInfoView=_thankYouInfoView - In the implementation block
@property (nonatomic,retain) T1NativeCardClassicButton * firstChoiceButton;                        //@synthesize firstChoiceButton=_firstChoiceButton - In the implementation block
@property (nonatomic,retain) T1NativeCardClassicButton * secondChoiceButton;                       //@synthesize secondChoiceButton=_secondChoiceButton - In the implementation block
@property (nonatomic,retain) UILabel * firstResultLabel;                                           //@synthesize firstResultLabel=_firstResultLabel - In the implementation block
@property (nonatomic,retain) UILabel * secondResultLabel;                                          //@synthesize secondResultLabel=_secondResultLabel - In the implementation block
@property (nonatomic,retain) T1NativePollingCardTitleSubtitleView * infoView;                      //@synthesize infoView=_infoView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cardContextDidUpdate;
-(id)_resultLabel;
-(void)_viewModelUpdated:(id)arg1 ;
-(void)_didVote:(id)arg1 ;
-(void)_voteChoiceButtonTapped:(id)arg1 ;
-(TFNTappableImageView *)firstChoiceImageView;
-(TFNTappableImageView *)secondChoiceImageView;
-(UILabel *)firstResultLabel;
-(UILabel *)secondResultLabel;
-(T1NativeCardClassicAttributionView *)attributionView;
-(UIImageView *)thankYouImageView;
-(void)attributionView:(id)arg1 didTapOnAvatarImageView:(id)arg2 ;
-(void)attributionView:(id)arg1 didTapOnHighlightView:(id)arg2 ;
-(void)setAttributionView:(T1NativeCardClassicAttributionView *)arg1 ;
-(void)setFirstChoiceImageView:(TFNTappableImageView *)arg1 ;
-(void)setSecondChoiceImageView:(TFNTappableImageView *)arg1 ;
-(void)setThankYouImageView:(UIImageView *)arg1 ;
-(void)setFirstResultLabel:(UILabel *)arg1 ;
-(void)setSecondResultLabel:(UILabel *)arg1 ;
-(id)_tappableImageView;
-(T1NativeCardClassicButton *)firstChoiceButton;
-(T1NativeCardClassicButton *)secondChoiceButton;
-(T1NativePollingCardTitleSubtitleView *)thankYouInfoView;
-(void)setThankYouInfoView:(T1NativePollingCardTitleSubtitleView *)arg1 ;
-(void)setFirstChoiceButton:(T1NativeCardClassicButton *)arg1 ;
-(void)setSecondChoiceButton:(T1NativeCardClassicButton *)arg1 ;
-(void)updateSubviews;
-(T1NativePollingCardTitleSubtitleView *)infoView;
-(void)setInfoView:(T1NativePollingCardTitleSubtitleView *)arg1 ;
-(T1NativeTwoChoicePollingCardViewModel *)viewModel;
-(void)setViewModel:(T1NativeTwoChoicePollingCardViewModel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)prepareForReuse;
-(void)_cleanup;
@end

