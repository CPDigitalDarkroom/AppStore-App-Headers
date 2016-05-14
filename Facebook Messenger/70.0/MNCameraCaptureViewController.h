/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:41 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIViewController.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBCaptureManagerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNProfilePicturePreviewDataSource.h>

@protocol MNProfilePicturePreviewDataSourceDelegate;
@class UIImage, FBCaptureManager, MNCameraPreviewLayerWrapperView, UITapGestureRecognizer, FBCameraFocusIndicator, NSString;

@interface MNCameraCaptureViewController : UIViewController <FBCaptureManagerDelegate, MNProfilePicturePreviewDataSource> {

	FBCaptureManager* _captureManager;
	MNCameraPreviewLayerWrapperView* _cameraPreviewWrapperView;
	UITapGestureRecognizer* _tapGesture;
	FBCameraFocusIndicator* _focusIndicator;
	char _enableTouchFocus;
	id<MNProfilePicturePreviewDataSourceDelegate> _delegate;
	UIImage* _previewImage;
	CGRect _cropRect;

}

@property (assign,nonatomic) char enableTouchFocus;                                                      //@synthesize enableTouchFocus=_enableTouchFocus - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNProfilePicturePreviewDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIImage * previewImage;                                                   //@synthesize previewImage=_previewImage - In the implementation block
@property (nonatomic,readonly) CGRect cropRect;                                                          //@synthesize cropRect=_cropRect - In the implementation block
-(void)_didTap:(id)arg1 ;
-(float)_interfaceOrientationAngle:(int)arg1 ;
-(void)_initCameraCaptureViewIfNecessary;
-(void)_transformPreviewLayerForStatusBarOrientation;
-(void)_initializeFocusIndicatorIfNeeded;
-(id)addFilterToPhoto:(id)arg1 ;
-(void)captureManager:(id)arg1 didCaptureImage:(id)arg2 metadata:(id)arg3 cameraPosition:(int)arg4 orientation:(int)arg5 ;
-(void)captureManager:(id)arg1 didCaptureVideo:(id)arg2 thumbnail:(id)arg3 cameraPosition:(int)arg4 ;
-(void)captureManager:(id)arg1 didChangeCapturePositionTo:(int)arg2 ;
-(void)captureManagerDidFailToCaptureImage:(id)arg1 ;
-(void)captureManagerDidFailToCaptureVideo:(id)arg1 ;
-(void)captureManagerDidStartCaptureVideo:(id)arg1 ;
-(void)captureManagerPreviewDidLoad:(id)arg1 ;
-(void)captureManagerSessionDidStart:(id)arg1 ;
-(id)videoSettingsForCaptureManager:(id)arg1 ;
-(void)captureManager:(id)arg1 didCaptureFrame:(opaqueCMSampleBufferRef)arg2 ;
-(void)capturePreview;
-(void)togglePreviewMode;
-(id)initWithCaptureManager:(id)arg1 ;
-(char)enableTouchFocus;
-(void)setEnableTouchFocus:(char)arg1 ;
-(CGRect)cropRect;
-(void)tearDown;
-(void)setDelegate:(id<MNProfilePicturePreviewDataSourceDelegate>)arg1 ;
-(void)dealloc;
-(id<MNProfilePicturePreviewDataSourceDelegate>)delegate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(UIImage *)previewImage;
@end

