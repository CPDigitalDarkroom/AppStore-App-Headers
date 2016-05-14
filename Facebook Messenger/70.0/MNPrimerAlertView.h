/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:47 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>

@protocol MNPrimerViewDelegate;
@class UILabel, UIButton, UIImageView, NSObject;

@interface MNPrimerAlertView : UIView {

	UILabel* _titleLabel;
	UILabel* _messageLabel;
	UIButton* _cancelButton;
	UIButton* _okButton;
	UIImageView* _arrowView;
	char _allowCancel;
	NSObject*<MNPrimerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) NSObject*<MNPrimerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char allowCancel;                                             //@synthesize allowCancel=_allowCancel - In the implementation block
-(void)_okButtonPressed:(id)arg1 ;
-(CGSize)_titleTextSizeThatFitsSize:(CGSize)arg1 ;
-(CGSize)_messageTextSizeThatFitsSize:(CGSize)arg1 ;
-(void)_drawLine:(CGContextRef)arg1 startPoint:(CGPoint)arg2 endPoint:(CGPoint)arg3 ;
-(void)startArrowViewBouncingAnimation;
-(void)_presentWithPopUpAnimation;
-(id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 okButtonTitle:(id)arg5 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(NSObject*<MNPrimerViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSObject*<MNPrimerViewDelegate>)delegate;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)showInView:(id)arg1 ;
-(void)_dismiss;
-(char)allowCancel;
-(void)setAllowCancel:(char)arg1 ;
-(void)_cancelButtonPressed:(id)arg1 ;
@end

