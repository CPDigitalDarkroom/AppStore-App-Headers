/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:44 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPageablePickUpAttachmentNode.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol MNRoundedCornersView, MNMessageVideoViewNodeDelegate;
@class FBCenteringScrollView, UIView, MNMessageVideoView, NSString;

@interface MNMessageVideoViewNode : FBPageablePickUpAttachmentNode <UIScrollViewDelegate> {

	FBCenteringScrollView* _scrollView;
	UIView*<MNRoundedCornersView> _maskView;
	MNMessageVideoView* _videoView;
	float _videoAspectRatio;
	id<MNMessageVideoViewNodeDelegate> _videoNodeDelegate;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,readonly) MNMessageVideoView * videoView;                                         //@synthesize videoView=_videoView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                               //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) float videoAspectRatio;                                                   //@synthesize videoAspectRatio=_videoAspectRatio - In the implementation block
@property (assign,nonatomic,__weak) id<MNMessageVideoViewNodeDelegate> videoNodeDelegate;              //@synthesize videoNodeDelegate=_videoNodeDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_layoutMaskView;
-(CGSize)_aspectFitSize;
-(void)willOpen;
-(void)willLift;
-(void)didUnlift;
-(void)mayClose;
-(void)willClose;
-(void)cleanUpAfterClosing;
-(id)dropShadowCastingLayers;
-(CGSize)openedSizeForOrientation:(int)arg1 ;
-(CGRect)closedFrameInView:(id)arg1 ;
-(id)initWithVideoView:(id)arg1 ;
-(void)setVideoNodeDelegate:(id<MNMessageVideoViewNodeDelegate>)arg1 ;
-(void)setVideoAspectRatio:(float)arg1 ;
-(void)_updateVideoViewInsetsWithFrame:(CGRect)arg1 ;
-(float)videoAspectRatio;
-(id<MNMessageVideoViewNodeDelegate>)videoNodeDelegate;
-(MNMessageVideoView *)videoView;
-(void)dealloc;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)layout;
-(void)didOpen;
@end

