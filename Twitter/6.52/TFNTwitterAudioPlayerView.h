/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>
#import <Twitter/TFNDockableView.h>
#import <TFNUI/TFNDownloadDelegate.h>
#import <Twitter/TFNCanvasControllableElementView.h>

@protocol TFNTwitterAudioPlayerViewDelegate;
@class NSString, UIView, UILabel, TFNPaddedButton, UIButton, TFNDownload, UIActivityIndicatorView, UIColor, NSURL, CALayer, UISlider, TFNTwitterAudioTrack, UIImageView, UIImage;

@interface TFNTwitterAudioPlayerView : UIView <TFNDockableView, TFNDownloadDelegate, TFNCanvasControllableElementView> {

	id<TFNTwitterAudioPlayerViewDelegate> _delegate;
	NSString* _partner;
	UIView* _thumbnailContainerView;
	UIView* _toolBar;
	UIView* _toolBarBackgroundOverlay;
	UILabel* _countUpLabel;
	UILabel* _countDownLabel;
	TFNPaddedButton* _playPauseButton;
	UIButton* _replayButton;
	UILabel* _trackLabel;
	UILabel* _artistLabel;
	TFNPaddedButton* _partnerButton;
	TFNDownload* _partnerLogoDownload;
	UIActivityIndicatorView* _bufferingIndicator;
	UIView* _toolBarSeparator;
	UIView* _ctaBar;
	UIButton* _ctaButton;
	TFNDownload* _partnerLogoDockedDownload;
	unsigned _audioTheme;
	UIColor* _controlBackgroundColor;
	UIColor* _ctaColor;
	NSURL* _logoURL;
	NSURL* _dockedLogoURL;
	CALayer* _maskLayer;
	char _controlsEnabled;
	char _audioCardsSpringsEnabled;
	UISlider* _scrubSlider;
	TFNTwitterAudioTrack* _track;
	UIImageView* _partnerLogoDocked;
	int _playPauseButtonState;
	UIImageView* _thumbnailImageView;

}

@property (nonatomic,readonly) float countLabelWidth; 
@property (nonatomic,readonly) UIImageView * partnerLogoDocked;                                               //@synthesize partnerLogoDocked=_partnerLogoDocked - In the implementation block
@property (assign,nonatomic) int playPauseButtonState;                                                        //@synthesize playPauseButtonState=_playPauseButtonState - In the implementation block
@property (nonatomic,readonly) UIColor * textColorForPartnerTheme; 
@property (nonatomic,readonly) UIImageView * thumbnailImageView;                                              //@synthesize thumbnailImageView=_thumbnailImageView - In the implementation block
@property (nonatomic,readonly) UIImage * toolBarPlayButtonPauseHighlightedImageForPartnerTheme; 
@property (nonatomic,readonly) UIImage * toolBarPlayButtonPauseImageForPartnerTheme; 
@property (nonatomic,readonly) UIImage * toolBarPlayButtonPlayHighlightedImageForPartnerTheme; 
@property (nonatomic,readonly) UIImage * toolBarPlayButtonPlayImageForPartnerTheme; 
@property (nonatomic,readonly) UIImage * toolBarPlayButtonReplayHighlightedImageForPartnerTheme; 
@property (nonatomic,readonly) UIImage * toolBarPlayButtonReplayImageForPartnerTheme; 
@property (nonatomic,readonly) float toolBarSeparatorHeight; 
@property (nonatomic,readonly) UISlider * scrubSlider;                                                        //@synthesize scrubSlider=_scrubSlider - In the implementation block
@property (nonatomic,retain) TFNTwitterAudioTrack * track;                                                    //@synthesize track=_track - In the implementation block
@property (assign,getter=isAudioCardsSpringsEnabled,nonatomic) char audioCardsSpringsEnabled;                 //@synthesize audioCardsSpringsEnabled=_audioCardsSpringsEnabled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char controlsEnabled;                                                            //@synthesize controlsEnabled=_controlsEnabled - In the implementation block
@property (nonatomic,retain) UIView * containerView; 
+(CGSize)fullscreenSize;
+(float)_thumbnailSize;
-(void)performDockAnimations;
-(void)performFullscreenAnimations;
-(char)controlsEnabled;
-(void)setControlsEnabled:(char)arg1 ;
-(void)_togglePlayback;
-(id)initWithDelegate:(id)arg1 configuration:(id)arg2 partner:(id)arg3 ;
-(void)setAudioCardsSpringsEnabled:(char)arg1 ;
-(void)didReplay;
-(void)updateWithCurrentPlaybackTime:(double)arg1 withDuration:(double)arg2 ;
-(UISlider *)scrubSlider;
-(void)_invokeCTA;
-(void)didFinishPlayAllTracks;
-(void)stopBufferingIndicator;
-(void)startBufferingIndicator;
-(UIEdgeInsets)visibleContentInsets;
-(void)didDock;
-(void)didUndock;
-(void)performExpandAnimationsDuringPanDockToFullscreenWithScale:(float)arg1 ;
-(void)willFullscreen;
-(void)_setupContents;
-(void)_setupThumbnail;
-(void)_setupToolBar;
-(void)_setupCTABar;
-(void)_setupDockedViews;
-(void)_scrubbingDidBegin:(id)arg1 ;
-(void)_scrubbingDidChange:(id)arg1 ;
-(void)_scrubbingDidEnd:(id)arg1 ;
-(UIImage *)toolBarPlayButtonPauseImageForPartnerTheme;
-(void)setPlayPauseButtonState:(int)arg1 ;
-(UIImage *)toolBarPlayButtonReplayImageForPartnerTheme;
-(UIImage *)toolBarPlayButtonReplayHighlightedImageForPartnerTheme;
-(void)_replayTracks;
-(UIColor *)textColorForPartnerTheme;
-(float)countLabelWidth;
-(void)_layoutPartnerLogoDocked;
-(void)_partnerLogoDownloadDidChange;
-(void)_partnerLogoDockedDownloadDidChange;
-(UIImage *)toolBarPlayButtonPauseHighlightedImageForPartnerTheme;
-(UIImage *)toolBarPlayButtonPlayImageForPartnerTheme;
-(UIImage *)toolBarPlayButtonPlayHighlightedImageForPartnerTheme;
-(void)_updateArtwork;
-(id)_ctaImageWithTitle:(id)arg1 alpha:(float)arg2 ;
-(void)_syncSliderWithCurrentPlaybackTime:(double)arg1 duration:(double)arg2 ;
-(void)_syncCountLabelsWithCurrentPlaybackTime:(double)arg1 duration:(double)arg2 ;
-(int)playPauseButtonState;
-(void)_updateToInitialConditions;
-(UIImageView *)partnerLogoDocked;
-(char)isAudioCardsSpringsEnabled;
-(void)_layoutToolBarElements;
-(float)toolBarSeparatorHeight;
-(void)tfx_partnerLogoWidthRatioParameterChanged;
-(void)statusChangedForDownload:(id)arg1 ;
-(TFNTwitterAudioTrack *)track;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setCornerRadius:(float)arg1 ;
-(id)_countLabel;
-(UIImageView *)thumbnailImageView;
-(void)viewDidAppear;
-(void)viewWillAppear;
-(void)setTrack:(TFNTwitterAudioTrack *)arg1 ;
@end

