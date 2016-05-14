/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:56 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBStatusBarTrackingWindowDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBStatusBarOverlayer.h>

@class FBStatusBarOverlay, FBTimer, UILabel, FBStatusBarTrackingWindow, NSString;

@interface FBApplicationStatusBarOverlayer : NSObject <FBStatusBarTrackingWindowDelegate, FBStatusBarOverlayer> {

	id _actionListener;
	FBStatusBarOverlay* _currentOverlay;
	FBTimer* _toastHideTimer;
	UILabel* _toastLabel;
	FBStatusBarTrackingWindow* _toastWindow;
	FBStatusBarTrackingWindow* _underlayWindow;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)overlayStatusBarWithOverlay:(id)arg1 actionListener:(id)arg2 ;
-(void)_showUnderlayWithColor:(id)arg1 ;
-(void)_showToastForOverlay:(id)arg1 ;
-(void)_hideUnderlay;
-(void)_hideToast;
-(void)statusBarTrackingWindow:(id)arg1 wasTappedInContainerView:(id)arg2 ;
-(void)removeOverlay:(id)arg1 ;
@end

