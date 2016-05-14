/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:42 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewHeaderFooterView.h>

@protocol MNDismissableTableHeaderViewDelegate;
@class UIView, UILabel, UIButton, NSString;

@interface MNDismissableTableHeaderView : UITableViewHeaderFooterView {

	UIView* _coloredView;
	UILabel* _label;
	UIButton* _dismissButton;
	id<MNDismissableTableHeaderViewDelegate> _delegate;
	NSString* _text;

}

@property (assign,nonatomic,__weak) id<MNDismissableTableHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * text;                                                         //@synthesize text=_text - In the implementation block
-(void)_didTapDismiss;
-(void)setDelegate:(id<MNDismissableTableHeaderViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNDismissableTableHeaderViewDelegate>)delegate;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

