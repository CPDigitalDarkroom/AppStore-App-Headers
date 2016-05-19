/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:40 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <UIKit/UIView.h>
#import <Spotify/SPTNowPlayingHeadUnitView.h>

@protocol SPTNowplayingFlexibleLayoutBaseUnit, SPTNowPlayingPlayButton;
@class UIButton, SPTNowPlayingButton, SPTLayoutConstraintBuilder, SPTTheme, NSString;

@interface SPTNowPlayingBaseHeadUnitView : UIView <SPTNowPlayingHeadUnitView> {

	id<SPTNowplayingFlexibleLayoutBaseUnit> _flexibleLayoutDelegate;
	SPTNowPlayingButton*<SPTNowPlayingPlayButton> _playPauseButton;
	SPTNowPlayingButton* _skipToPreviousButton;
	SPTNowPlayingButton* _skipToNextButton;
	SPTNowPlayingButton* _leftAccessoryButton;
	SPTNowPlayingButton* _rightAccessoryButton;
	SPTLayoutConstraintBuilder* _layout;
	SPTTheme* _theme;

}

@property (assign,nonatomic,__weak) id<SPTNowplayingFlexibleLayoutBaseUnit> flexibleLayoutDelegate;              //@synthesize flexibleLayoutDelegate=_flexibleLayoutDelegate - In the implementation block
@property (nonatomic,retain) SPTNowPlayingButton*<SPTNowPlayingPlayButton> playPauseButton;                      //@synthesize playPauseButton=_playPauseButton - In the implementation block
@property (nonatomic,retain) SPTNowPlayingButton * skipToPreviousButton;                                         //@synthesize skipToPreviousButton=_skipToPreviousButton - In the implementation block
@property (nonatomic,retain) SPTNowPlayingButton * skipToNextButton;                                             //@synthesize skipToNextButton=_skipToNextButton - In the implementation block
@property (nonatomic,retain) SPTNowPlayingButton * leftAccessoryButton;                                          //@synthesize leftAccessoryButton=_leftAccessoryButton - In the implementation block
@property (nonatomic,retain) SPTNowPlayingButton * rightAccessoryButton;                                         //@synthesize rightAccessoryButton=_rightAccessoryButton - In the implementation block
@property (nonatomic,retain) SPTLayoutConstraintBuilder * layout;                                                //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) SPTTheme * theme;                                                                   //@synthesize theme=_theme - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)createSubviews;
-(SPTNowPlayingButton *)leftAccessoryButton;
-(SPTNowPlayingButton *)rightAccessoryButton;
-(SPTNowPlayingButton *)skipToNextButton;
-(SPTNowPlayingButton *)skipToPreviousButton;
-(void)forceUpdateConstraints;
-(void)setFlexibleLayoutDelegate:(id<SPTNowplayingFlexibleLayoutBaseUnit>)arg1 ;
-(void)setSkipToPreviousButton:(SPTNowPlayingButton *)arg1 ;
-(void)setSkipToNextButton:(SPTNowPlayingButton *)arg1 ;
-(void)setLeftAccessoryButton:(SPTNowPlayingButton *)arg1 ;
-(void)setRightAccessoryButton:(SPTNowPlayingButton *)arg1 ;
-(id)hitTest:(CGPoint)arg1 views:(id)arg2 percent:(float)arg3 ;
-(id<SPTNowplayingFlexibleLayoutBaseUnit>)flexibleLayoutDelegate;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(SPTLayoutConstraintBuilder *)layout;
-(void)updateConstraints;
-(void)setLayout:(SPTLayoutConstraintBuilder *)arg1 ;
-(void)setPlayPauseButton:(SPTNowPlayingButton*<SPTNowPlayingPlayButton>)arg1 ;
-(SPTNowPlayingButton*<SPTNowPlayingPlayButton>)playPauseButton;
-(id)initWithTheme:(id)arg1 ;
-(SPTTheme *)theme;
-(void)setTheme:(SPTTheme *)arg1 ;
@end

