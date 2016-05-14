/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:57 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNMediaTrayNuxViewInterface.h>

@protocol MNMediaTrayNuxViewDelegate;
@class MNMediaTrayNuxViewModel, NSMutableArray, FBRichTextView, UIButton, UIImage, NSString;

@interface MNMediaTrayNuxV2View : UIView <MNMediaTrayNuxViewInterface> {

	MNMediaTrayNuxViewModel* _viewModel;
	NSMutableArray* _profilePictureImageViews;
	FBRichTextView* _contentTextView;
	UIButton* _actionButton;
	UIButton* _closeButton;
	UIImage* _fullMask;
	UIImage* _cutoutMask;
	id<MNMediaTrayNuxViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMediaTrayNuxViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didTapCloseButton;
-(void)_didTapActionButton;
-(SCD_Struct_MN20)_computeSizeOfElementsForBounds:(CGRect)arg1 ;
-(void)_updateActionButtonTitle;
-(void)_rebuildMaskImagesIfNeeded;
-(void)setViewModel:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNMediaTrayNuxViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNMediaTrayNuxViewDelegate>)delegate;
-(void)_updateImages;
-(void)_updateContent;
@end

