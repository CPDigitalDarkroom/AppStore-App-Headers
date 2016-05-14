/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:58 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNPhotoEditingViewControllerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBClassProvidable.h>

@protocol FBProvider, MNModalPresentation, MNPhotoEditingPresenterDelegate;
@class MNPhotoImageRequester, MNPhotoImageUploadResultCacher, NSString;

@interface MNPhotoEditingPresenter : NSObject <MNPhotoEditingViewControllerDelegate, FBClassProvidable> {

	id<FBProvider> _photoEditingViewControllerProvider;
	id<MNModalPresentation> _modalPresenter;
	MNPhotoImageRequester* _imageRequester;
	MNPhotoImageUploadResultCacher* _imageUploadResultCacher;
	id<MNPhotoEditingPresenterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNPhotoEditingPresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)presentPhotoEditingViewWithContent:(id)arg1 ;
-(void)photoEditingViewController:(id)arg1 didFinishWithEditedImage:(id)arg2 editInfo:(id)arg3 ;
-(id)initWithPhotoEditingViewControllerProvider:(id)arg1 modalPresenter:(id)arg2 imageRequester:(id)arg3 imageUploadResultCacher:(id)arg4 ;
-(void)_didFetchPhotoImage:(id)arg1 ;
-(void)_willDismissEditingPhotoViewController;
-(void)setDelegate:(id<MNPhotoEditingPresenterDelegate>)arg1 ;
-(id<MNPhotoEditingPresenterDelegate>)delegate;
@end

