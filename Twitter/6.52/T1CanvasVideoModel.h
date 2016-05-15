/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:27 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFNTwitterPlaybackInfo.h>

@class NSString;

@interface T1CanvasVideoModel : NSObject <TFNTwitterPlaybackInfo> {

	char _shouldPlayAfterTimeAdjustment;
	char _playing;
	double _duration;
	double _elapsedTime;

}

@property (assign,nonatomic) double duration;                                 //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double elapsedTime;                              //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (assign,nonatomic) char shouldPlayAfterTimeAdjustment;              //@synthesize shouldPlayAfterTimeAdjustment=_shouldPlayAfterTimeAdjustment - In the implementation block
@property (assign,getter=isPlaying,nonatomic) char playing;                   //@synthesize playing=_playing - In the implementation block
@property (nonatomic,readonly) char hasTimeFullyElapsed; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setShouldPlayAfterTimeAdjustment:(char)arg1 ;
-(char)hasTimeFullyElapsed;
-(char)shouldPlayAfterTimeAdjustment;
-(void)setElapsedTime:(double)arg1 ;
-(char)isPlaying;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(double)elapsedTime;
-(void)setPlaying:(char)arg1 ;
@end

