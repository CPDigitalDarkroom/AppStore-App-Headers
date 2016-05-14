/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:44 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>

@protocol MNPhotoViewImageDownloadControlling, MNPhotosViewDelegate;
@class UIImageView, NSMutableArray, _MNTwoDimensionArray, MNPhotoViewNodeReusePool, NSArray, MNPhotosViewMaskAttributes;

@interface MNPhotosView : UIView {

	UIImageView* _photosMaskingOverlayView;
	NSMutableArray* _photoViewNodes;
	_MNTwoDimensionArray* _photoViewNodesGrid;
	id<MNPhotoViewImageDownloadControlling> _photoViewImageDownloadController;
	MNPhotoViewNodeReusePool* _photoViewNodeReusePool;
	char _photosSending;
	char _alignsToRight;
	NSArray* _photoViewModels;
	id<MNPhotosViewDelegate> _delegate;
	MNPhotosViewMaskAttributes* _photosViewMaskAttributes;

}

@property (nonatomic,copy,readonly) NSArray * photoViewModels;                                          //@synthesize photoViewModels=_photoViewModels - In the implementation block
@property (assign,nonatomic,__weak) id<MNPhotosViewDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char photosSending;                                                        //@synthesize photosSending=_photosSending - In the implementation block
@property (nonatomic,copy,readonly) MNPhotosViewMaskAttributes * photosViewMaskAttributes;              //@synthesize photosViewMaskAttributes=_photosViewMaskAttributes - In the implementation block
@property (nonatomic,readonly) char alignsToRight;                                                      //@synthesize alignsToRight=_alignsToRight - In the implementation block
+(CGSize)sizeForSinglePhotoViewModel:(id)arg1 maxWidth:(float)arg2 ;
+(CGSize)sizeForPhotoViewModels:(id)arg1 maxWidth:(float)arg2 ;
-(void)_logInlinePhotoViews:(id)arg1 ;
-(void)_updateVisiblePhotoViewNodes;
-(void)_updatePhotoViewNodeGrid;
-(void)_updatePhotoMasks;
-(void)_updatePhotosOverlay;
-(CGRect)_frameForRow:(unsigned)arg1 column:(unsigned)arg2 ;
-(id)_photoViewNodeForModel:(id)arg1 ;
-(void)_addMaskViewForPhotoViewNodeIfNeeded:(id)arg1 ;
-(void)_logInlinePhotoView:(id)arg1 numImages:(int)arg2 ;
-(id)_dequeuePhotoViewNodeForModel:(id)arg1 ;
-(void)_setUpPhotoViewNode:(id)arg1 withPhotoViewModel:(id)arg2 ;
-(void)_recyclePhotoViewNode:(id)arg1 ;
-(void)_layoutPhotoViewNode:(id)arg1 row:(unsigned)arg2 column:(unsigned)arg3 ;
-(char)photosSending;
-(MNPhotosViewMaskAttributes *)photosViewMaskAttributes;
-(char)alignsToRight;
-(CGRect)closeFrameForPhotoView:(id)arg1 ;
-(id)maskForPhotoViewNode:(id)arg1 ;
-(NSArray *)photoViewModels;
-(id)initWithFrame:(CGRect)arg1 photoViewImageDownloadController:(id)arg2 photoViewNodeReusePool:(id)arg3 ;
-(void)setPhotoViewModels:(id)arg1 photosViewMaskAttributes:(id)arg2 alignsToRight:(char)arg3 ;
-(void)setPhotosSending:(char)arg1 ;
-(void)openPhotoWithViewModel:(id)arg1 animated:(char)arg2 ;
-(id)photoViewNodeAtLocation:(CGPoint)arg1 ;
-(void)setDelegate:(id<MNPhotosViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNPhotosViewDelegate>)delegate;
-(void)setHighlighted:(char)arg1 ;
-(void)prepareForReuse;
@end

