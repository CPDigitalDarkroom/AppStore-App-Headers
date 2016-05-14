/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:13 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface FBVideoPlayerAudioMeters : UIView {

	UIView* _leftMeter;
	UIView* _centerMeter;
	UIView* _rightMeter;
	char _isAnimating;
	float _leftValue;
	float _centerValue;
	float _rightValue;
	char _hidesWhenStopped;

}

@property (assign,nonatomic) char hidesWhenStopped;              //@synthesize hidesWhenStopped=_hidesWhenStopped - In the implementation block
-(id)newAudioMeter;
-(void)_startAnimatingIfNecessary;
-(void)_setAnimationForLayer:(id)arg1 values:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHidden:(char)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)didMoveToSuperview;
-(char)isAnimating;
-(void)stopAnimating;
-(void)startAnimating;
-(void)setHidesWhenStopped:(char)arg1 ;
-(char)hidesWhenStopped;
-(void)_stopAnimating;
@end

