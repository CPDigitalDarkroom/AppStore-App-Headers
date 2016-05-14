/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:56 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBKeyboardObserverDelegate.h>

@protocol FBWebRTCLayoutBoundsManagerDelegate;
@class FBKeyboardObserver, UIView, NSString;

@interface FBWebRTCLayoutBoundsManager : NSObject <FBKeyboardObserverDelegate> {

	FBKeyboardObserver* _keyboardObserver;
	CGRect _keyboardFrame;
	id<FBWebRTCLayoutBoundsManagerDelegate> _delegate;
	UIView* _view;
	CGRect _bounds;
	UIEdgeInsets _margins;

}

@property (assign,nonatomic,__weak) id<FBWebRTCLayoutBoundsManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIView * view;                                                        //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) CGRect bounds;                                                        //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) UIEdgeInsets margins;                                                 //@synthesize margins=_margins - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)keyboardObserverKeyboardDidHide:(id)arg1 ;
-(void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(int)arg5 ;
-(void)stopListeningToKeyboardChanges;
-(void)_setKeyboardFrame:(CGRect)arg1 didShow:(char)arg2 duration:(double)arg3 ;
-(void)_setKeyboardFrame:(CGRect)arg1 didShow:(char)arg2 animated:(char)arg3 ;
-(void)startListeningToKeyboardChanges;
-(UIEdgeInsets)margins;
-(void)setMargins:(UIEdgeInsets)arg1 ;
-(CGRect)bounds;
-(void)setDelegate:(id<FBWebRTCLayoutBoundsManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(id<FBWebRTCLayoutBoundsManagerDelegate>)delegate;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(CGRect)layoutBounds;
@end

