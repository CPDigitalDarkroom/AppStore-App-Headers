/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/PHLivePhotoViewDelegate.h>

@class UIView, NSString, UIGestureRecognizer, PHLivePhotoView;

@interface FBLivePhotoViewCoordinator : NSObject <PHLivePhotoViewDelegate> {

	UIView* _hostingView;
	UIView* _overlayView;
	int _targetDimension;
	int _currentFetchingRequestID;
	char _isLivePhotoEnabled;
	NSString* _assetID;
	UIGestureRecognizer* _livePhotoGestureRecognizer;
	PHLivePhotoView* _livePhotoView;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setupLivePhotoShouldAutoPlay:(char)arg1 ;
-(void)cleanUpLivePhoto;
-(void)_setupLivePhoto:(id)arg1 forAssetID:(id)arg2 ;
-(void)_startLivePhotoPlayback;
-(void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(int)arg2 ;
-(void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(int)arg2 ;
-(id)initWithHostingView:(id)arg1 overlayView:(id)arg2 targetDimension:(int)arg3 ;
-(void)reloadViewWithAssetID:(id)arg1 isLivePhotoEnabled:(char)arg2 shouldAutoPlayLivePhoto:(char)arg3 ;
-(void)relayoutViewBelowOverlayView;
-(void)toggleLivePhoto:(char)arg1 ;
-(void)dealloc;
@end

