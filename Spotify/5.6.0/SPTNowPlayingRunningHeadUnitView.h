/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:40 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Spotify/SPTRunningTempoStepperDelegate.h>
#import <Spotify/SPTNowplayingFlexibleLayoutBaseUnit.h>

@protocol SPTNowPlayingRunningHeadUnitViewDelegate, SPTRunningTempoStepper, SPTRunningUserInterfaceFactory, SPTRunningLocalisationManager, SPTRunningTestManager, SPTRunningCircleGradientBackground;
@class UIControl, SPTActionButton, SPTLayoutConstraintBuilder, SPTTheme, SPTNowPlayingBaseHeadUnitView, CALayer, SPTNowPlayingButton, NSString;

@interface SPTNowPlayingRunningHeadUnitView : UIView <SPTRunningTempoStepperDelegate, SPTNowplayingFlexibleLayoutBaseUnit> {

	char _detectionModeEnabled;
	char _enabled;
	id<SPTNowPlayingRunningHeadUnitViewDelegate> _delegate;
	UIControl*<SPTRunningTempoStepper> _tempoStepper;
	SPTActionButton* _autoToggleButton;
	SPTActionButton* _recalibrateButton;
	id<SPTRunningUserInterfaceFactory> _userInterfaceFactory;
	id<SPTRunningLocalisationManager> _localisationManager;
	id<SPTRunningTestManager> _testManager;
	SPTLayoutConstraintBuilder* _layout;
	SPTTheme* _theme;
	SPTNowPlayingBaseHeadUnitView* _baseHeadUnitView;
	CALayer*<SPTRunningCircleGradientBackground> _circleGradientLayer;

}

@property (assign,nonatomic) unsigned tempo; 
@property (assign,nonatomic) char detectionModeEnabled;                                                     //@synthesize detectionModeEnabled=_detectionModeEnabled - In the implementation block
@property (assign,getter=isCurrentlyPlaying,nonatomic) char currentlyPlaying; 
@property (assign,nonatomic,__weak) id<SPTNowPlayingRunningHeadUnitViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) char enabled;                                                 //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) UIControl*<SPTRunningTempoStepper> tempoStepper;                               //@synthesize tempoStepper=_tempoStepper - In the implementation block
@property (nonatomic,readonly) SPTNowPlayingButton * skipPreviousButton; 
@property (nonatomic,readonly) SPTNowPlayingButton * skipForwardButton; 
@property (nonatomic,retain) SPTActionButton * autoToggleButton;                                            //@synthesize autoToggleButton=_autoToggleButton - In the implementation block
@property (nonatomic,retain) SPTActionButton * recalibrateButton;                                           //@synthesize recalibrateButton=_recalibrateButton - In the implementation block
@property (nonatomic,retain) id<SPTRunningUserInterfaceFactory> userInterfaceFactory;                       //@synthesize userInterfaceFactory=_userInterfaceFactory - In the implementation block
@property (nonatomic,retain) id<SPTRunningLocalisationManager> localisationManager;                         //@synthesize localisationManager=_localisationManager - In the implementation block
@property (nonatomic,retain) id<SPTRunningTestManager> testManager;                                         //@synthesize testManager=_testManager - In the implementation block
@property (nonatomic,retain) SPTLayoutConstraintBuilder * layout;                                           //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) SPTTheme * theme;                                                              //@synthesize theme=_theme - In the implementation block
@property (nonatomic,retain) SPTNowPlayingBaseHeadUnitView * baseHeadUnitView;                              //@synthesize baseHeadUnitView=_baseHeadUnitView - In the implementation block
@property (nonatomic,retain) CALayer*<SPTRunningCircleGradientBackground> circleGradientLayer;              //@synthesize circleGradientLayer=_circleGradientLayer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTestManager:(id<SPTRunningTestManager>)arg1 ;
-(id<SPTRunningTestManager>)testManager;
-(char)isCurrentlyPlaying;
-(void)setCurrentlyPlaying:(char)arg1 ;
-(void)skipToNextTrack;
-(void)skipToPreviousTrack;
-(SPTNowPlayingButton *)skipForwardButton;
-(id)constraintsForPlayButton:(id)arg1 nextButton:(id)arg2 previousButton:(id)arg3 leftAccessoryButton:(id)arg4 rightAccessoryButton:(id)arg5 containerView:(id)arg6 ;
-(id)initWithTheme:(id)arg1 startingTempo:(unsigned)arg2 userInterfaceFactory:(id)arg3 startingDetectionModeEnabled:(char)arg4 localisationManager:(id)arg5 testManager:(id)arg6 ;
-(SPTActionButton *)autoToggleButton;
-(SPTActionButton *)recalibrateButton;
-(SPTNowPlayingButton *)skipPreviousButton;
-(UIControl*<SPTRunningTempoStepper>)tempoStepper;
-(void)setDetectionModeEnabled:(char)arg1 ;
-(id<SPTRunningUserInterfaceFactory>)userInterfaceFactory;
-(void)setUserInterfaceFactory:(id<SPTRunningUserInterfaceFactory>)arg1 ;
-(id<SPTRunningLocalisationManager>)localisationManager;
-(void)setLocalisationManager:(id<SPTRunningLocalisationManager>)arg1 ;
-(void)setupTempoStepperWithStartingTempo:(unsigned)arg1 ;
-(void)setupBaseHeadUnitView;
-(void)setupAutoButton;
-(void)setupGradientLayer;
-(void)setupRecalibrateButton;
-(void)setAutoToggleButton:(SPTActionButton *)arg1 ;
-(void)toggleDetectionMode;
-(void)setCircleGradientLayer:(CALayer*<SPTRunningCircleGradientBackground>)arg1 ;
-(CALayer*<SPTRunningCircleGradientBackground>)circleGradientLayer;
-(void)setRecalibrateButton:(SPTActionButton *)arg1 ;
-(void)recalibrateButtonTouchedUpInside;
-(SPTNowPlayingBaseHeadUnitView *)baseHeadUnitView;
-(char)detectionModeEnabled;
-(void)tempoStemper:(id)arg1 didUpdateValue:(unsigned)arg2 fromValue:(unsigned)arg3 ;
-(void)setTempoStepper:(UIControl*<SPTRunningTempoStepper>)arg1 ;
-(void)setBaseHeadUnitView:(SPTNowPlayingBaseHeadUnitView *)arg1 ;
-(void)setTempo:(unsigned)arg1 ;
-(unsigned)tempo;
-(void)setDelegate:(id<SPTNowPlayingRunningHeadUnitViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<SPTNowPlayingRunningHeadUnitViewDelegate>)delegate;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(SPTLayoutConstraintBuilder *)layout;
-(void)updateConstraints;
-(void)setLayout:(SPTLayoutConstraintBuilder *)arg1 ;
-(void)togglePlayPause;
-(SPTTheme *)theme;
-(void)setTheme:(SPTTheme *)arg1 ;
@end

