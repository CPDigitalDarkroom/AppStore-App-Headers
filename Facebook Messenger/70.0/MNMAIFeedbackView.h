/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:00 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol MNMAIFeedbackViewDelegate;
@class UILabel, UIView, UIButton, FBTextView, NSString;

@interface MNMAIFeedbackView : UIView <UITextViewDelegate> {

	UILabel* _promptLabel;
	UIView* _topBorder;
	UIView* _rightBorder;
	UIView* _bottomBorder;
	UIView* _leftBorder;
	UIButton* _submitButton;
	UIButton* _dismissButton;
	FBTextView* _textView;
	id<MNMAIFeedbackViewDelegate> _delegate;

}

@property (nonatomic,copy,readonly) FBTextView * textView;                               //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic,__weak) id<MNMAIFeedbackViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didPressSubmit:(id)arg1 ;
-(void)_didPressDismiss:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 viewModel:(id)arg2 ;
-(void)_didTapBackground:(id)arg1 ;
-(void)setDelegate:(id<MNMAIFeedbackViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNMAIFeedbackViewDelegate>)delegate;
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(FBTextView *)textView;
@end

