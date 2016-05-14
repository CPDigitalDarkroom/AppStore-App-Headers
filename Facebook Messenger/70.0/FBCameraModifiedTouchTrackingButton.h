/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIButton.h>

@class FBCameraModifiedTouchTrackingButtonListenerAnnouncer;

@interface FBCameraModifiedTouchTrackingButton : UIButton {

	FBCameraModifiedTouchTrackingButtonListenerAnnouncer* _announcer;
	float _boundsExtensionForTracking;

}

@property (assign,nonatomic) float boundsExtensionForTracking;              //@synthesize boundsExtensionForTracking=_boundsExtensionForTracking - In the implementation block
-(void)setBoundsExtensionForTracking:(float)arg1 ;
-(void)addModifiedTouchTrackingButtonListener:(id)arg1 ;
-(void)removeModifiedTouchTrackingButtonListener:(id)arg1 ;
-(CGRect)_extendedBounds;
-(float)boundsExtensionForTracking;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(char)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(char)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
@end

