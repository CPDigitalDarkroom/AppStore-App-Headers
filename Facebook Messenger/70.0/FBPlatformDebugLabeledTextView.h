/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:03 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UITextView;

@interface FBPlatformDebugLabeledTextView : UIView {

	UILabel* _label;
	UITextView* _textView;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic) UIEdgeInsets contentInsets;              //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,retain) UILabel * label;                         //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UITextView * textView;                   //@synthesize textView=_textView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)setTextView:(UITextView *)arg1 ;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(UITextView *)textView;
@end

