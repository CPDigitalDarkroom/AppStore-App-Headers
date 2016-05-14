/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNPaymentsView.h>

@class UIImageView, FBRichTextView, FBImageDownloader, NSURL, UIColor, MNPaymentsTransferReceiptItemViewModel, NSString;

@interface MNPaymentsTransferReceiptItemView : UIView <MNPaymentsView> {

	UIImageView* _itemImageView;
	FBRichTextView* _titleTextView;
	FBRichTextView* _subtitleTextView;
	FBImageDownloader* _imageDownloader;
	NSURL* _itemImageURL;
	UIColor* _color;
	MNPaymentsTransferReceiptItemViewModel* _viewModel;

}

@property (nonatomic,retain) UIColor * color;                                               //@synthesize color=_color - In the implementation block
@property (nonatomic,copy) MNPaymentsTransferReceiptItemViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 imageDownloader:(id)arg2 ;
-(void)_loadItemImageWithURL:(id)arg1 ;
-(void)_processImageWithDownloaderResponse:(id)arg1 withURL:(id)arg2 ;
-(MNPaymentsTransferReceiptItemViewModel *)viewModel;
-(void)setViewModel:(MNPaymentsTransferReceiptItemViewModel *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
@end

