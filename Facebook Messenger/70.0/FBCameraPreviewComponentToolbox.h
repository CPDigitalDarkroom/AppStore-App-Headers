/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBCameraCaptureButtonAppearanceProvider, FBCaptureManagerPreviewProtocol, FBCameraGestureRecognizerEvent;
@class FBCameraViewFinderListenerAnnouncer;

@interface FBCameraPreviewComponentToolbox : NSObject {

	id<FBCameraCaptureButtonAppearanceProvider> _appearanceProvider;
	id<FBCaptureManagerPreviewProtocol> _captureManagerPreview;
	id<FBCameraGestureRecognizerEvent> _pinchEvent;
	FBCameraViewFinderListenerAnnouncer* _viewFinderAnnouncer;
	id<FBCameraGestureRecognizerEvent> _viewFinderDoubleTapEvent;
	id<FBCameraGestureRecognizerEvent> _viewFinderTapEvent;

}

@property (nonatomic,readonly) id<FBCameraCaptureButtonAppearanceProvider> appearanceProvider;              //@synthesize appearanceProvider=_appearanceProvider - In the implementation block
@property (nonatomic,readonly) id<FBCaptureManagerPreviewProtocol> captureManagerPreview;                   //@synthesize captureManagerPreview=_captureManagerPreview - In the implementation block
@property (nonatomic,readonly) id<FBCameraGestureRecognizerEvent> pinchEvent;                               //@synthesize pinchEvent=_pinchEvent - In the implementation block
@property (nonatomic,readonly) FBCameraViewFinderListenerAnnouncer * viewFinderAnnouncer;                   //@synthesize viewFinderAnnouncer=_viewFinderAnnouncer - In the implementation block
@property (nonatomic,readonly) id<FBCameraGestureRecognizerEvent> viewFinderDoubleTapEvent;                 //@synthesize viewFinderDoubleTapEvent=_viewFinderDoubleTapEvent - In the implementation block
@property (nonatomic,readonly) id<FBCameraGestureRecognizerEvent> viewFinderTapEvent;                       //@synthesize viewFinderTapEvent=_viewFinderTapEvent - In the implementation block
-(id<FBCameraCaptureButtonAppearanceProvider>)appearanceProvider;
-(id<FBCameraGestureRecognizerEvent>)pinchEvent;
-(FBCameraViewFinderListenerAnnouncer *)viewFinderAnnouncer;
-(id<FBCameraGestureRecognizerEvent>)viewFinderDoubleTapEvent;
-(id<FBCameraGestureRecognizerEvent>)viewFinderTapEvent;
-(id)initWithAppearanceProvider:(id)arg1 captureManagerPreview:(id)arg2 pinchEvent:(id)arg3 viewFinderAnnouncer:(id)arg4 viewFinderDoubleTapEvent:(id)arg5 viewFinderTapEvent:(id)arg6 ;
-(id<FBCaptureManagerPreviewProtocol>)captureManagerPreview;
@end

