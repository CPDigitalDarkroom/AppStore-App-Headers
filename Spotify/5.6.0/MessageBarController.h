/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <UIKit/UIViewController.h>

@protocol MessageBarControllerDelegate;
@class NSMutableArray, UIViewController, MessageBarView, NSTimer, UIView;

@interface MessageBarController : UIViewController {

	char _messageBarHidden;
	char _messageBarShowingAlert;
	char _messageBarForceHidden;
	NSMutableArray* _messageBarItems;
	UIViewController* _contentViewController;
	id<MessageBarControllerDelegate> _delegate;
	MessageBarView* _messageBarView;
	NSTimer* _updateMessageBarTimer;
	UIView* _bottomLeftCornerView;
	UIView* _bottomRightCornerView;

}

@property (nonatomic,readonly) NSMutableArray * messageBarItems;                                         //@synthesize messageBarItems=_messageBarItems - In the implementation block
@property (nonatomic,readonly) UIViewController * contentViewController;                                 //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,readonly) CGRect messageBarFrame; 
@property (getter=isMessageBarHidden,nonatomic,readonly) char messageBarHidden; 
@property (getter=isMessageBarShowingAlert,nonatomic,readonly) char messageBarShowingAlert; 
@property (getter=isMessageBarForceHidden,nonatomic,readonly) char messageBarForceHidden;                //@synthesize messageBarForceHidden=_messageBarForceHidden - In the implementation block
@property (assign,nonatomic,__weak) id<MessageBarControllerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MessageBarView * messageBarView;                                            //@synthesize messageBarView=_messageBarView - In the implementation block
@property (nonatomic,retain) NSTimer * updateMessageBarTimer;                                            //@synthesize updateMessageBarTimer=_updateMessageBarTimer - In the implementation block
@property (nonatomic,retain) UIView * bottomLeftCornerView;                                              //@synthesize bottomLeftCornerView=_bottomLeftCornerView - In the implementation block
@property (nonatomic,retain) UIView * bottomRightCornerView;                                             //@synthesize bottomRightCornerView=_bottomRightCornerView - In the implementation block
+(id)defaultController;
-(void)setMessageBarView:(MessageBarView *)arg1 ;
-(MessageBarView *)messageBarView;
-(void)_updateMessageBarText:(char)arg1 ;
-(void)messageBarTapped;
-(char)isMessageBarHidden;
-(void)setBottomLeftCornerView:(UIView *)arg1 ;
-(UIView *)bottomLeftCornerView;
-(void)setBottomRightCornerView:(UIView *)arg1 ;
-(UIView *)bottomRightCornerView;
-(void)_layoutSubviewsForOrientation:(int)arg1 messageBarHidden:(char)arg2 ;
-(char)isMessageBarShowingAlert;
-(CGRect)_messageBarFrameForOrientation:(int)arg1 messageBarHidden:(char)arg2 ;
-(CGRect)_contentViewFrameWithMessageBarFrame:(CGRect)arg1 ;
-(CGRect)frameForCorner:(unsigned)arg1 inContentFrame:(CGRect)arg2 ;
-(NSMutableArray *)messageBarItems;
-(void)_updateMessageBar:(char)arg1 ;
-(NSTimer *)updateMessageBarTimer;
-(void)setUpdateMessageBarTimer:(NSTimer *)arg1 ;
-(void)_updateMessageBarDeferred:(id)arg1 ;
-(char)isMessageBarForceHidden;
-(void)_updateMessageBar:(char)arg1 deferred:(char)arg2 ;
-(void)messageChanged:(id)arg1 onObject:(id)arg2 ;
-(CGRect)messageBarFrame;
-(void)setMessageBarForceHidden:(char)arg1 animated:(char)arg2 ;
-(void)presentMessageBarItem:(id)arg1 animated:(char)arg2 ;
-(void)dismissMessageBarItem:(id)arg1 animated:(char)arg2 ;
-(void)hiddenChanged;
-(void)setContentViewController:(id)arg1 animation:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)setDelegate:(id<MessageBarControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<MessageBarControllerDelegate>)delegate;
-(id)topViewController;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(void)loadView;
-(char)wantsFullScreenLayout;
-(char)canBecomeFirstResponder;
-(void)viewDidLayoutSubviews;
-(UIViewController *)contentViewController;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
@end

