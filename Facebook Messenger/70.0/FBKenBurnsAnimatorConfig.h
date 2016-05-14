/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:08 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBKenBurnsAnimatorConfig : NSObject {

	float _transitionDuration;
	float _displayDuration;
	float _enlargeRatio;

}

@property (assign,nonatomic) float transitionDuration;              //@synthesize transitionDuration=_transitionDuration - In the implementation block
@property (assign,nonatomic) float displayDuration;                 //@synthesize displayDuration=_displayDuration - In the implementation block
@property (assign,nonatomic) float enlargeRatio;                    //@synthesize enlargeRatio=_enlargeRatio - In the implementation block
+(id)configWithTransitionDuration:(float)arg1 displayDuration:(float)arg2 enlargeRatio:(float)arg3 ;
-(float)displayDuration;
-(float)enlargeRatio;
-(void)setDisplayDuration:(float)arg1 ;
-(void)setEnlargeRatio:(float)arg1 ;
-(float)transitionDuration;
-(void)setTransitionDuration:(float)arg1 ;
@end

