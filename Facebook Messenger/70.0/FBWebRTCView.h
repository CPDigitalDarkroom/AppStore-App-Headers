/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:56 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBWebRTCCallActionViewDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBWebRTCSelfVideoOverlayViewDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBWebRTCInteractionBlockingViewDelegate.h>

@protocol FBWebRTCViewDelegate, FBWebRTCCallActionViewDelegate, FBWebRTCStarRatingViewDelegate, FBWebRTCVideomailViewDelegate;
@class FBWebRTCNonZeroRatedSessionWarningView, UIView, UIImageView, FBWebRTCConnectionStatusBarView, UILabel, FBWebRTCPeerView, FBWebRTCSelfVideoOverlayView, FBWebRTCInteractionBlockingView, _FBTouchCapturingGestureRecognizer, MNUserSettings, NSTimer, FBMUserName, FBWebRTCRemoteVideoRenderStatus, FBWebRTCStarRatingView, FBWebRTCInfoView, UICollectionView, FBWebRTCVideoView, FBWebRTCCallActionView, FBWebRTCVideomailView, FBWebRTCAudioLevelView, UIButton, FBWebRTCPeerVideoView, NSString;

@interface FBWebRTCView : UIView <FBWebRTCCallActionViewDelegate, FBWebRTCSelfVideoOverlayViewDelegate, FBWebRTCInteractionBlockingViewDelegate> {

	FBWebRTCNonZeroRatedSessionWarningView* _nonZeroRatingWarningView;
	UIView* _backgroundView;
	UIImageView* _coverPhotoImageView;
	UIView* _gradientOverlayView;
	FBWebRTCConnectionStatusBarView* _connectionStatusBarView;
	UIView* _statusBarUnderlay;
	UILabel* _rosterGroupLabel;
	UILabel* _rosterTimeLabel;
	FBWebRTCPeerView* _peerView;
	FBWebRTCSelfVideoOverlayView* _selfVideoOverlayView;
	FBWebRTCInteractionBlockingView* _interactionBlockingView;
	_FBTouchCapturingGestureRecognizer* _touchCapturingRecognizer;
	unsigned _viewState;
	MNUserSettings* _userSettings;
	NSTimer* _videoButtonsTimer;
	NSTimer* _disclaimerTimer;
	NSTimer* _videoDisabledMessageTimer;
	NSTimer* _delayedInteractionBlockingTimer;
	FBMUserName* _calleeUserName;
	char _isInteractingWithSelfView;
	char _isLocalVideoSupported;
	char _zeroRatingEnabled;
	char _rosterEnabled;
	FBWebRTCRemoteVideoRenderStatus* _videoRenderStatus;
	char _actionButtonsOffscreen;
	char _mutedLayoutEnabled;
	id<FBWebRTCViewDelegate> _delegate;
	id<FBWebRTCCallActionViewDelegate> _actionViewDelegate;
	id<FBWebRTCStarRatingViewDelegate> _starRatingViewDelegate;
	id<FBWebRTCVideomailViewDelegate> _videomailViewDelegate;
	FBWebRTCStarRatingView* _starRatingView;
	FBWebRTCInfoView* _infoView;
	UICollectionView* _rosterView;
	FBWebRTCVideoView* _selfView;
	FBWebRTCCallActionView* _callActionView;
	FBWebRTCVideomailView* _videomailView;
	FBWebRTCAudioLevelView* _inputAudioLevelView;
	UIButton* _backButton;
	float _systemStatusBarHeight;
	float _selfViewAspectRatio;

}

@property (nonatomic,readonly) unsigned viewState;                                                          //@synthesize viewState=_viewState - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebRTCViewDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebRTCCallActionViewDelegate> actionViewDelegate;                  //@synthesize actionViewDelegate=_actionViewDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebRTCStarRatingViewDelegate> starRatingViewDelegate;              //@synthesize starRatingViewDelegate=_starRatingViewDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebRTCVideomailViewDelegate> videomailViewDelegate;                //@synthesize videomailViewDelegate=_videomailViewDelegate - In the implementation block
@property (nonatomic,readonly) FBWebRTCStarRatingView * starRatingView;                                     //@synthesize starRatingView=_starRatingView - In the implementation block
@property (nonatomic,readonly) FBWebRTCInfoView * infoView;                                                 //@synthesize infoView=_infoView - In the implementation block
@property (nonatomic,readonly) UICollectionView * rosterView;                                               //@synthesize rosterView=_rosterView - In the implementation block
@property (nonatomic,readonly) FBWebRTCPeerVideoView * peerVideoView; 
@property (nonatomic,readonly) FBWebRTCVideoView * selfView;                                                //@synthesize selfView=_selfView - In the implementation block
@property (nonatomic,readonly) FBWebRTCCallActionView * callActionView;                                     //@synthesize callActionView=_callActionView - In the implementation block
@property (nonatomic,readonly) FBWebRTCVideomailView * videomailView;                                       //@synthesize videomailView=_videomailView - In the implementation block
@property (nonatomic,readonly) FBWebRTCAudioLevelView * inputAudioLevelView;                                //@synthesize inputAudioLevelView=_inputAudioLevelView - In the implementation block
@property (nonatomic,readonly) UIButton * backButton;                                                       //@synthesize backButton=_backButton - In the implementation block
@property (assign,nonatomic) float systemStatusBarHeight;                                                   //@synthesize systemStatusBarHeight=_systemStatusBarHeight - In the implementation block
@property (assign,nonatomic) float selfViewAspectRatio;                                                     //@synthesize selfViewAspectRatio=_selfViewAspectRatio - In the implementation block
@property (assign,nonatomic) char actionButtonsOffscreen;                                                   //@synthesize actionButtonsOffscreen=_actionButtonsOffscreen - In the implementation block
@property (assign,nonatomic) char mutedLayoutEnabled;                                                       //@synthesize mutedLayoutEnabled=_mutedLayoutEnabled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBWebRTCPeerVideoView *)peerVideoView;
-(void)_onVideoViewTapped;
-(void)_configureSelfViewSize:(unsigned)arg1 ;
-(void)_stopVideoDisabledMessageTimer;
-(void)_updatelayoutForStatusBars;
-(void)_refreshButtonsAndSelfViewLayoutAnimated:(char)arg1 ;
-(void)setActionButtonsOffscreen:(char)arg1 ;
-(void)_setupLayoutForState:(unsigned)arg1 ;
-(void)_showDisclaimerBrieflyIfNeededForTransitionFrom:(unsigned)arg1 toState:(unsigned)arg2 ;
-(void)_refreshSelfViewVisibilityForViewState:(unsigned)arg1 ;
-(void)_fadeInActionButtonsIfNeeded;
-(void)_showDisclaimerViewIfNeeded;
-(void)_setShowZeroRatingView:(char)arg1 ;
-(void)_refreshBackgroundColor:(unsigned)arg1 ;
-(void)_updateInteractionBlockingForState:(unsigned)arg1 ;
-(void)_hideOrShowCallActionViewIfNeeded:(unsigned)arg1 ;
-(void)_refreshStatusBarUnderlayColor:(unsigned)arg1 ;
-(void)_refreshButtonsAndSelfViewLayout:(unsigned)arg1 ;
-(void)_refreshStarRatingViewVisibilityForviewState:(unsigned)arg1 ;
-(void)_refreshVideomailViewVisibilityForViewState:(unsigned)arg1 ;
-(void)switchLayoutToState:(unsigned)arg1 ;
-(void)_startOrStopVideoButtonsOffScreenTimer:(unsigned)arg1 ;
-(void)setRemoteVideoSupported:(char)arg1 ;
-(void)_disclaimerTimerFired;
-(void)setVideoCallButtonSelected:(char)arg1 ;
-(void)setVideoCallButtonUserInteractionEnabled:(char)arg1 ;
-(void)setSpeakerModeEnabled:(char)arg1 ;
-(void)setMiniStatus:(id)arg1 ;
-(void)_refreshButtonsAndSelfViewLayoutAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)_startHideDisclaimerCountDownTimer;
-(void)_hideDisclaimerViewAnimated:(char)arg1 ;
-(float)_effectiveStatusBarHeight;
-(char)actionButtonsOffscreen;
-(CGRect)_getSelfViewFrameWithActionButtonsOffscreen:(char)arg1 ;
-(float)_connectionBarHeight;
-(void)_moveVideoButtonsOffScreen:(id)arg1 ;
-(void)_disclaimerWasFullyDisplayed;
-(void)_showInteractionBlockingView;
-(void)_cancelDelayedInteractionBlocking;
-(void)_hideInteractionBlockingView;
-(void)_initInteractionBlockingViewIfNeeded;
-(void)_startDelayedInteractionBlocking;
-(void)_startInteractionBlockingIfNeeded;
-(void)_initTouchCapturingRecognizerIfNeeded;
-(void)_didTouch;
-(void)_restartDelayedInteractionBlocking;
-(void)_stopInteractionBlockingIfNeeded;
-(void)_startVideoDisabledTimer;
-(id<FBWebRTCCallActionViewDelegate>)actionViewDelegate;
-(void)callActionViewDidPressSwitchCamera:(id)arg1 ;
-(void)callActionViewDidPressEndCall:(id)arg1 ;
-(void)callActionViewDidPressAcceptCall:(id)arg1 ;
-(void)callActionViewDidPressDeclineCall:(id)arg1 ;
-(void)callActionViewDidPressMute:(id)arg1 shouldMute:(char)arg2 ;
-(void)callActionViewDidPressVideoCall:(id)arg1 shouldEnable:(char)arg2 ;
-(void)callActionViewDidPressHideCall:(id)arg1 ;
-(void)callActionViewDidPressRedial:(id)arg1 ;
-(void)callActionViewDidPressCancelRedial:(id)arg1 ;
-(void)callActionViewDidPressVoiceClip:(id)arg1 ;
-(void)callActionViewDidPressMessage:(id)arg1 ;
-(void)callActionViewDidPressMessageActionSheet:(id)arg1 ;
-(void)callActionViewDidPressReminderActionSheet:(id)arg1 ;
-(void)callActionViewDidPressDone:(id)arg1 ;
-(void)callActionViewToggleSpeakerMode:(id)arg1 ;
-(void)callActionViewDidPressAcceptVideo:(id)arg1 ;
-(void)callActionViewDidPressDeclineVideo:(id)arg1 ;
-(void)callActionViewDidPressDisabledVideo:(id)arg1 ;
-(void)didBeginInteraction:(id)arg1 ;
-(void)didEndInteraction:(id)arg1 ;
-(void)webRTCInteractionBlockingViewDidUnlock:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 showZeroRating:(char)arg2 supportLocalVideo:(char)arg3 hasMultipleCameras:(char)arg4 isConferenceCall:(char)arg5 avatarImageDecorator:(id)arg6 userSettings:(id)arg7 showRoster:(char)arg8 surveyExperiment:(id)arg9 messageActionIcon:(id)arg10 isOneOnOneMultiWayCall:(char)arg11 showDebugInfo:(char)arg12 connectionQualityIndicatorExperiment:(id)arg13 ;
-(void)refreshVideoViewsVisibility;
-(void)setCalleeUserName:(id)arg1 ;
-(void)setCalleeDisplayName:(id)arg1 ;
-(void)setRosterStatus:(id)arg1 ;
-(void)setRosterTime:(id)arg1 ;
-(void)setRemoteVideoRenderStatus:(id)arg1 ;
-(void)showConnectionStateBannerForState:(unsigned)arg1 ;
-(void)hideConnectionStatusBanner;
-(void)setMutedLayoutEnabled:(char)arg1 ;
-(void)setSelfViewAspectRatio:(float)arg1 ;
-(void)setStarRatingViewDelegate:(id<FBWebRTCStarRatingViewDelegate>)arg1 ;
-(void)setVideomailViewDelegate:(id<FBWebRTCVideomailViewDelegate>)arg1 ;
-(void)setSystemStatusBarHeight:(float)arg1 ;
-(CGRect)_getSelfViewFrameForRequestingVideo;
-(int)_captureOrientationForDeviceOrientation:(int)arg1 ;
-(void)setActionViewDelegate:(id<FBWebRTCCallActionViewDelegate>)arg1 ;
-(id<FBWebRTCStarRatingViewDelegate>)starRatingViewDelegate;
-(id<FBWebRTCVideomailViewDelegate>)videomailViewDelegate;
-(UICollectionView *)rosterView;
-(FBWebRTCVideoView *)selfView;
-(FBWebRTCCallActionView *)callActionView;
-(FBWebRTCVideomailView *)videomailView;
-(FBWebRTCAudioLevelView *)inputAudioLevelView;
-(float)systemStatusBarHeight;
-(float)selfViewAspectRatio;
-(char)mutedLayoutEnabled;
-(FBWebRTCStarRatingView *)starRatingView;
-(FBWebRTCInfoView *)infoView;
-(void)setDelegate:(id<FBWebRTCViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<FBWebRTCViewDelegate>)delegate;
-(int)preferredStatusBarStyle;
-(void)setStatus:(id)arg1 ;
-(unsigned)viewState;
-(UIButton *)backButton;
-(void)setHasConnected:(char)arg1 ;
@end

