/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:56 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol FBWebRTCCallOverlayTouchControllerDelegate;
@class POPSpringAnimation, UITapGestureRecognizer, UIPanGestureRecognizer, UIView, NSString;

@interface FBWebRTCCallOverlayTouchController : NSObject <UIGestureRecognizerDelegate> {

	char _positionValid;
	CGPoint _initialDragPosition;
	POPSpringAnimation* _moveToFinalPositionAnimation;
	unsigned long long _lastDragTime;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIPanGestureRecognizer* _dragRecognizer;
	char _enabled;
	id<FBWebRTCCallOverlayTouchControllerDelegate> _delegate;
	UIView* _overlayView;
	CGRect _layoutBounds;

}

@property (assign,nonatomic,__weak) id<FBWebRTCCallOverlayTouchControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char enabled;                                                                //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                                        //@synthesize overlayView=_overlayView - In the implementation block
@property (assign,nonatomic) CGRect layoutBounds;                                                         //@synthesize layoutBounds=_layoutBounds - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)_isDragging;
-(void)_viewTapped;
-(void)_viewDragged:(id)arg1 ;
-(CGPoint)_adjustOverlayViewCenter:(CGPoint)arg1 fromOverlayViewSize:(CGSize)arg2 toOverlayViewSize:(CGSize)arg3 fromOverallBounds:(CGRect)arg4 toOverallBounds:(CGRect)arg5 ;
-(CGPoint)_defaultOverlayPosition;
-(void)_cancelMoveToFinalAnimation;
-(CGPoint)_adjustOverlayViewCenter:(CGPoint)arg1 overlayViewSize:(CGSize)arg2 toStayWithinBounds:(CGRect)arg3 ;
-(void)setLayoutBounds:(CGRect)arg1 ;
-(void)updateOverlayPositionFromOverlaySize:(CGSize)arg1 toSize:(CGSize)arg2 ;
-(char)enabled;
-(void)setDelegate:(id<FBWebRTCCallOverlayTouchControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<FBWebRTCCallOverlayTouchControllerDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setEnabled:(char)arg1 ;
-(CGRect)layoutBounds;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
@end

