/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:08 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIViewController.h>

@protocol FBMediaAttachmentPickerPhotoPreviewViewControllerDelegate;
@class FBAppleMediaPickerPhotoAttachment, FBMediaAttachmentPickerPhotoPreviewView;

@interface FBMediaAttachmentPickerPhotoPreviewViewController : UIViewController {

	FBAppleMediaPickerPhotoAttachment* _imageAttachment;
	FBMediaAttachmentPickerPhotoPreviewView* _imagePreviewView;
	id<FBMediaAttachmentPickerPhotoPreviewViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) FBAppleMediaPickerPhotoAttachment * imageAttachment;                                      //@synthesize imageAttachment=_imageAttachment - In the implementation block
@property (assign,nonatomic,__weak) id<FBMediaAttachmentPickerPhotoPreviewViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(FBAppleMediaPickerPhotoAttachment *)imageAttachment;
-(id)initWithImageAttachment:(id)arg1 ;
-(void)_didTapCancel:(id)arg1 ;
-(void)_didTapUse:(id)arg1 ;
-(void)setDelegate:(id<FBMediaAttachmentPickerPhotoPreviewViewControllerDelegate>)arg1 ;
-(id<FBMediaAttachmentPickerPhotoPreviewViewControllerDelegate>)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(CGSize)contentSizeForViewInPopover;
-(void)viewDidLoad;
@end

