/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:43 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, POPPropertyAnimation;

@interface MNCircularProgressIndicator : UIView {

	float _progress;
	UIColor* _progressColor;
	float _outerRadius;
	float _strokeWidth;
	/*^block*/id _progressCompletionBlock;
	POPPropertyAnimation* _progressAnimation;

}

@property (nonatomic,retain) POPPropertyAnimation * progressAnimation;              //@synthesize progressAnimation=_progressAnimation - In the implementation block
@property (assign,nonatomic) float progress;                                        //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) UIColor * progressColor;                               //@synthesize progressColor=_progressColor - In the implementation block
@property (assign,nonatomic) float outerRadius;                                     //@synthesize outerRadius=_outerRadius - In the implementation block
@property (assign,nonatomic) float strokeWidth;                                     //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (nonatomic,copy) id progressCompletionBlock;                              //@synthesize progressCompletionBlock=_progressCompletionBlock - In the implementation block
-(POPPropertyAnimation *)progressAnimation;
-(void)setProgressAnimation:(POPPropertyAnimation *)arg1 ;
-(id)progressCompletionBlock;
-(void)setProgressCompletionBlock:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setProgress:(float)arg1 ;
-(void)setProgress:(float)arg1 animated:(char)arg2 ;
-(float)progress;
-(void)setStrokeWidth:(float)arg1 ;
-(float)strokeWidth;
-(void)setProgressColor:(UIColor *)arg1 ;
-(UIColor *)progressColor;
-(float)outerRadius;
-(void)setOuterRadius:(float)arg1 ;
@end

