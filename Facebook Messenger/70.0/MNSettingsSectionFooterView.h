/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:48 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UITableViewHeaderFooterView.h>

@protocol MNSettingsSectionFooterViewDelegate;
@class FBRichTextView;

@interface MNSettingsSectionFooterView : UITableViewHeaderFooterView {

	FBRichTextView* _textView;
	UIEdgeInsets _edgeInsets;
	id<MNSettingsSectionFooterViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNSettingsSectionFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_handleLinkTapAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)_attributedFooterAction:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 text:(id)arg2 edgeInsets:(UIEdgeInsets)arg3 linkRanges:(id)arg4 ;
-(void)setDelegate:(id<MNSettingsSectionFooterViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNSettingsSectionFooterViewDelegate>)delegate;
-(id)text;
@end

