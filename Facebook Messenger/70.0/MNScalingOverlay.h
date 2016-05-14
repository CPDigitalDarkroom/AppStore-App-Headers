/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:42 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNCameraOverlayView.h>

@class UIImageView, NSString;

@interface MNScalingOverlay : UIView <MNCameraOverlayView> {

	UIImageView* _overlayImageView;
	float _collapsedScale;
	CGPoint _anchorPoint;
	float _progress;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithImageNames:(id)arg1 scale:(float)arg2 anchorPoint:(CGPoint)arg3 animationDuration:(double)arg4 ;
-(id)initWithImageName:(id)arg1 scale:(float)arg2 anchorPoint:(CGPoint)arg3 ;
-(void)layoutSubviews;
-(void)setTransitionProgress:(float)arg1 ;
@end

