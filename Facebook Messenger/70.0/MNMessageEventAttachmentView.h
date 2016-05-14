/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:53 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIControl.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNAttachmentView.h>

@protocol MNMessageEventAttachmentViewDelegate;
@class MNMessageEventAttachmentViewModel, MNMapSnapshotView, FBRichTextView, UILabel, MNBusinessSeparatorView, UIButton, NSString;

@interface MNMessageEventAttachmentView : UIControl <MNAttachmentView> {

	MNMessageEventAttachmentViewModel* _messageEventViewModel;
	MNMapSnapshotView* _mapView;
	FBRichTextView* _titleView;
	UILabel* _topSubtitleLabel;
	UILabel* _bottomSubtitleLabel;
	UILabel* _dateLabel;
	UILabel* _monthLabel;
	MNBusinessSeparatorView* _separatorView;
	UIButton* _addToCalendarButton;
	id<MNMessageEventAttachmentViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMessageEventAttachmentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id viewModel; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(void)_didTapMessageEvent;
-(void)_updateEventMap;
-(void)_updateEventLabels;
-(void)_updateFooterLabels;
-(id)initWithSession:(id)arg1 ;
-(id)viewModel;
-(void)setViewModel:(id)arg1 ;
-(void)setDelegate:(id<MNMessageEventAttachmentViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNMessageEventAttachmentViewDelegate>)delegate;
@end

