/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:09 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBComposerPhotoOverlaysView.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBComposerPhotoOverlaysViewProtocol.h>

@protocol FBComposerTextOnPhotosViewDelegate;
@class NSString;

@interface FBComposerTextOnPhotosView : FBComposerPhotoOverlaysView <FBComposerPhotoOverlaysViewProtocol> {

	id<FBComposerTextOnPhotosViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBComposerTextOnPhotosViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)addImageToUseForBarForPhotoOverlay:(id)arg1 ;
-(id)addAccessibilityLabelForPhotoOverlaysView:(id)arg1 ;
-(id)deleteAccessibilityLabelForPhotoOverlaysView:(id)arg1 ;
-(void)composerPhotoOverlaysView:(id)arg1 didAddPhotoOverlayView:(id)arg2 ;
-(id)createPhotoOverlayViewForPhotoOverlay:(id)arg1 ;
-(id)createPhotoOverlayForOverlayView:(id)arg1 ;
-(void)composerPhotoOverlaysViewDidTapCancel:(id)arg1 ;
-(void)composerPhotoOverlaysViewDidTapDone:(id)arg1 ;
-(void)didChangePhotoAttachmentOverlay;
-(void)composerPhotoOverlaysView:(id)arg1 didTapPhotoOverlayView:(id)arg2 ;
-(void)composerPhotoOverlaysViewDidTapAddAttachmentsButton:(id)arg1 ;
-(void)composerPhotoOverlaysView:(id)arg1 didRemovePhotoOverlayView:(id)arg2 ;
-(void)setDelegate:(id<FBComposerTextOnPhotosViewDelegate>)arg1 ;
-(id<FBComposerTextOnPhotosViewDelegate>)delegate;
@end

