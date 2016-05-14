/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:14 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNInboxTruncatingTextViewDelegate.h>

@protocol MNInboxAttachmentViewDelegate;
@class UIImageView, UILabel, UIButton, MNInboxTruncatingTextView, MNInboxAttachmentViewModel, UIView;

@interface MNInboxAttachmentView : UIView <MNInboxTruncatingTextViewDelegate> {

	UIImageView* _previewImageView;
	UILabel* _titleLabel;
	UIButton* _shareButton;
	UIImageView* _iconView;
	UIImageView* _iconMaskView;
	UIImageView* _previewMaskView;
	MNInboxTruncatingTextView* _truncatingTextView;
	id<MNInboxAttachmentViewDelegate> _delegate;
	MNInboxAttachmentViewModel* _inboxAttachmentViewModel;
	UIView* _previewView;

}

@property (assign,nonatomic,__weak) id<MNInboxAttachmentViewDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) MNInboxAttachmentViewModel * inboxAttachmentViewModel;              //@synthesize inboxAttachmentViewModel=_inboxAttachmentViewModel - In the implementation block
@property (nonatomic,retain) UIView * previewView;                                             //@synthesize previewView=_previewView - In the implementation block
-(void)_updatePreview;
-(void)_updatePreviewImage;
-(MNInboxAttachmentViewModel *)inboxAttachmentViewModel;
-(void)_didTapShare:(id)arg1 ;
-(void)_layoutForPreviewOnlyContent;
-(void)_layoutForPreviewWithDetailContent;
-(void)_updateAttachmentContent;
-(void)_updateDescription;
-(void)_updateViewsVisibility;
-(void)_updateShareButton;
-(void)setInboxAttachmentViewModel:(MNInboxAttachmentViewModel *)arg1 ;
-(void)truncatingTextViewDidTapTruncationString:(id)arg1 ;
-(void)_updateTitleLabel;
-(void)setIconImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNInboxAttachmentViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNInboxAttachmentViewDelegate>)delegate;
-(UIView *)previewView;
-(void)setPreviewView:(UIView *)arg1 ;
-(void)setPreviewImage:(id)arg1 ;
@end

