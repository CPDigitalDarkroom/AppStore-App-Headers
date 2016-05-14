/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:55 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>

@protocol FBWebRTCStarRatingViewDelegate;
@class UILabel, UIButton, NSArray, MNStarSliderControl, FBWebRTCSurveyScreenExperimentContext;

@interface FBWebRTCStarRatingView : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIButton* _dismissButton;
	NSArray* _starButtons;
	MNStarSliderControl* _starSlider;
	unsigned _selectedStarRating;
	UILabel* _ratingLabel;
	UIButton* _submitButton;
	unsigned _surveyTitleIndex;
	unsigned _surveySubtitleIndex;
	id<FBWebRTCStarRatingViewDelegate> _delegate;
	FBWebRTCSurveyScreenExperimentContext* _surveyExperimentContext;

}

@property (nonatomic,copy,readonly) NSArray * starButtons;                                                 //@synthesize starButtons=_starButtons - In the implementation block
@property (assign,nonatomic) unsigned selectedStarRating;                                                  //@synthesize selectedStarRating=_selectedStarRating - In the implementation block
@property (nonatomic,readonly) UILabel * ratingLabel;                                                      //@synthesize ratingLabel=_ratingLabel - In the implementation block
@property (nonatomic,readonly) UIButton * submitButton;                                                    //@synthesize submitButton=_submitButton - In the implementation block
@property (nonatomic,readonly) unsigned surveyTitleIndex;                                                  //@synthesize surveyTitleIndex=_surveyTitleIndex - In the implementation block
@property (nonatomic,readonly) unsigned surveySubtitleIndex;                                               //@synthesize surveySubtitleIndex=_surveySubtitleIndex - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebRTCStarRatingViewDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBWebRTCSurveyScreenExperimentContext * surveyExperimentContext;              //@synthesize surveyExperimentContext=_surveyExperimentContext - In the implementation block
-(id)_surveyTitle;
-(id)_surveySubtitle;
-(void)_sliderChanged:(id)arg1 ;
-(void)_didPressSubmit:(id)arg1 ;
-(void)_didPressDismiss:(id)arg1 ;
-(char)_surveryScreenExperimentEnabled;
-(void)_experimentalLayout;
-(void)_oldLayout;
-(void)_positionDismissButton;
-(id)initWithFrame:(CGRect)arg1 surveyExperiment:(id)arg2 ;
-(UIButton *)submitButton;
-(unsigned)surveyTitleIndex;
-(unsigned)surveySubtitleIndex;
-(FBWebRTCSurveyScreenExperimentContext *)surveyExperimentContext;
-(void)setSurveyExperimentContext:(FBWebRTCSurveyScreenExperimentContext *)arg1 ;
-(NSArray *)starButtons;
-(unsigned)selectedStarRating;
-(void)setSelectedStarRating:(unsigned)arg1 ;
-(UILabel *)ratingLabel;
-(void)setDelegate:(id<FBWebRTCStarRatingViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBWebRTCStarRatingViewDelegate>)delegate;
@end

