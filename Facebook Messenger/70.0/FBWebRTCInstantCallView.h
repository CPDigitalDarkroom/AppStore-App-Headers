/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:56 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/VideoRenderInfoDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBWebRTCVideoViewDelegate.h>

@protocol FBWebRTCInstantCallViewDelegate;
@class PABlurView, UIView, UIImageView, UILabel, FBShapeView, UIButton, FBWebRTCButtonImageCache, FBWebRTCPeerVideoView, FBWebRTCVideoView, UIImage, NSString;

@interface FBWebRTCInstantCallView : UIView <VideoRenderInfoDelegate, FBWebRTCVideoViewDelegate> {

	PABlurView* _peerVideoBlur;
	UIView* _contentView;
	UIView* _fullScreenPrompt;
	UIImageView* _fullScreenPromptIcon;
	UILabel* _fullScreenPromptLabel;
	UIView* _viewingPromptPanel;
	FBShapeView* _profileImagePlaceholder;
	UIImageView* _profileImageView;
	UILabel* _viewingNowLabel;
	UIView* _buttonPanel;
	UIButton* _toggleVideoButton;
	UIButton* _toggleMuteButton;
	UIButton* _changeCameraButton;
	UIButton* _endCallButton;
	FBWebRTCButtonImageCache* _buttonImages;
	char _fullScreenPromptVisible;
	char _peerVideoBlurred;
	char _canToggleCamera;
	id<FBWebRTCInstantCallViewDelegate> _delegate;
	unsigned _videoLayout;
	unsigned _activeButtons;
	FBWebRTCPeerVideoView* _peerVideoView;
	unsigned _peerVideoOrientation;
	FBWebRTCVideoView* _selfVideoView;
	unsigned _selfVideoOrientation;

}

@property (assign,nonatomic,__weak) id<FBWebRTCInstantCallViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned videoLayout;                                           //@synthesize videoLayout=_videoLayout - In the implementation block
@property (assign,nonatomic) char fullScreenPromptVisible;                                     //@synthesize fullScreenPromptVisible=_fullScreenPromptVisible - In the implementation block
@property (nonatomic,retain) UIImage * peerProfileImage; 
@property (assign,nonatomic) char viewingPromptVisible; 
@property (assign,nonatomic) char peerVideoBlurred;                                            //@synthesize peerVideoBlurred=_peerVideoBlurred - In the implementation block
@property (assign,nonatomic) unsigned activeButtons;                                           //@synthesize activeButtons=_activeButtons - In the implementation block
@property (assign,nonatomic) int selfVideoCaptureOrientation; 
@property (nonatomic,readonly) FBWebRTCPeerVideoView * peerVideoView;                          //@synthesize peerVideoView=_peerVideoView - In the implementation block
@property (nonatomic,readonly) unsigned peerVideoOrientation;                                  //@synthesize peerVideoOrientation=_peerVideoOrientation - In the implementation block
@property (nonatomic,readonly) FBWebRTCVideoView * selfVideoView;                              //@synthesize selfVideoView=_selfVideoView - In the implementation block
@property (nonatomic,readonly) unsigned selfVideoOrientation;                                  //@synthesize selfVideoOrientation=_selfVideoOrientation - In the implementation block
@property (assign,nonatomic) char sendingVideo; 
@property (assign,nonatomic) char microphoneMuted; 
@property (assign,nonatomic) char canToggleCamera;                                             //@synthesize canToggleCamera=_canToggleCamera - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_createButtons;
-(void)_createViewingPrompt;
-(void)_setPeerViewHidden:(char)arg1 ;
-(void)_setSelfViewHidden:(char)arg1 ;
-(void)_setPeerViewFrame:(CGRect)arg1 ;
-(void)_setSelfViewFrame:(CGRect)arg1 ;
-(void)_layoutToBounds:(CGRect)arg1 ;
-(void)_updateVideoViewVisibility;
-(void)setFullScreenPromptVisible:(char)arg1 animated:(char)arg2 ;
-(void)setActiveButtons:(unsigned)arg1 animated:(char)arg2 ;
-(void)_layoutButtonsToBounds:(CGRect)arg1 ;
-(char)canToggleCamera;
-(void)setPeerVideoBlurred:(char)arg1 animated:(char)arg2 ;
-(void)_layoutFullScreenPromptToBounds:(CGRect)arg1 ;
-(void)_layoutViewingPromptToBounds:(CGRect)arg1 ;
-(void)_toggleVideoButtonTapped;
-(void)_toggleMuteButtonTapped;
-(void)_changeCameraButtonTapped;
-(void)_endCallButtonTapped;
-(void)_updatePeerVideoOrientation;
-(void)_updateSelfVideoOrientation;
-(void)videoSizeChangedForInfo:(id)arg1 ;
-(void)videoView:(id)arg1 didChangeVideoOrientation:(int)arg2 ;
-(int)selfVideoCaptureOrientation;
-(void)setSelfVideoCaptureOrientation:(int)arg1 ;
-(void)setVideoLayout:(unsigned)arg1 size:(CGSize)arg2 animated:(char)arg3 ;
-(void)setFullScreenPromptVisible:(char)arg1 ;
-(UIImage *)peerProfileImage;
-(void)setPeerProfileImage:(UIImage *)arg1 ;
-(char)viewingPromptVisible;
-(void)setViewingPromptVisible:(char)arg1 ;
-(void)setActiveButtons:(unsigned)arg1 ;
-(void)setPeerVideoBlurred:(char)arg1 ;
-(char)sendingVideo;
-(void)setSendingVideo:(char)arg1 ;
-(char)microphoneMuted;
-(void)setCanToggleCamera:(char)arg1 ;
-(unsigned)videoLayout;
-(char)fullScreenPromptVisible;
-(char)peerVideoBlurred;
-(unsigned)activeButtons;
-(FBWebRTCPeerVideoView *)peerVideoView;
-(unsigned)peerVideoOrientation;
-(FBWebRTCVideoView *)selfVideoView;
-(unsigned)selfVideoOrientation;
-(void)_updateButtonVisibility;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBWebRTCInstantCallViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBWebRTCInstantCallViewDelegate>)delegate;
-(void)setMicrophoneMuted:(char)arg1 ;
@end

