/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:48 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIProgressView.h>

@class NSTimer;

@interface SPTWebViewProgressView : UIProgressView {

	char _simulatingProgress;
	char _continuousProgress;
	NSTimer* _animationTimer;

}

@property (assign,getter=isSimulatingProgress,nonatomic) char simulatingProgress;              //@synthesize simulatingProgress=_simulatingProgress - In the implementation block
@property (assign,nonatomic) char continuousProgress;                                          //@synthesize continuousProgress=_continuousProgress - In the implementation block
@property (nonatomic,retain) NSTimer * animationTimer;                                         //@synthesize animationTimer=_animationTimer - In the implementation block
-(void)incrementProgress;
-(void)showAnimated:(char)arg1 ;
-(char)isSimulatingProgress;
-(void)setSimulatingProgress:(char)arg1 ;
-(void)setContinuousProgress:(char)arg1 ;
-(void)beginSimulatedProgress;
-(void)endSimulatedProgress;
-(float)nextProgressValue;
-(void)beginContinuousProgress;
-(void)endContinuousProgress;
-(void)hideAnimated:(char)arg1 ;
-(void)dealloc;
-(void)reset;
-(NSTimer *)animationTimer;
-(void)setAnimationTimer:(NSTimer *)arg1 ;
-(char)continuousProgress;
@end

