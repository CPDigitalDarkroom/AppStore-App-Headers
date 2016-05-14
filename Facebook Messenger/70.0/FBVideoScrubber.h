/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:09 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UISlider.h>

@class UIView;

@interface FBVideoScrubber : UISlider {

	UIView* _trackView;
	UIView* _trackMinView;
	UIView* _trackLoadingView;
	UIView* _trackMaxView;
	char _newStyle;
	float _currentScrubberHeight;
	float _currentInset;
	float _playableDuration;
	float _trackInsetWhileScrubbing;
	float _hitAreaBelowScrubber;

}

@property (assign,nonatomic) float playableDuration;                      //@synthesize playableDuration=_playableDuration - In the implementation block
@property (assign,nonatomic) float trackInsetWhileScrubbing;              //@synthesize trackInsetWhileScrubbing=_trackInsetWhileScrubbing - In the implementation block
@property (assign,nonatomic) float hitAreaBelowScrubber;                  //@synthesize hitAreaBelowScrubber=_hitAreaBelowScrubber - In the implementation block
-(void)setPlayableDuration:(float)arg1 animated:(char)arg2 ;
-(id)initWithFrame:(CGRect)arg1 usingNewStyle:(char)arg2 ;
-(void)setHitAreaBelowScrubber:(float)arg1 ;
-(id)_imageWithColor:(id)arg1 andSize:(CGRect)arg2 ;
-(id)_imageWithColor:(id)arg1 ;
-(void)_scrubberIsBeingUsed:(id)arg1 ;
-(void)_scrubberIsNotBeingUsed:(id)arg1 ;
-(void)_updateTrackLoadingViewFrame;
-(float)trackInsetWhileScrubbing;
-(void)setTrackInsetWhileScrubbing:(float)arg1 ;
-(float)hitAreaBelowScrubber;
-(float)playableDuration;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(char)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setPlayableDuration:(float)arg1 ;
@end

