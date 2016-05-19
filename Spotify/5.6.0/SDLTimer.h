/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:26 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer;

@interface SDLTimer : NSObject {

	char _timerRunning;
	char _repeat;
	/*^block*/id _elapsedBlock;
	/*^block*/id _canceledBlock;
	float _duration;
	NSTimer* _timer;

}

@property (nonatomic,copy) id elapsedBlock;               //@synthesize elapsedBlock=_elapsedBlock - In the implementation block
@property (nonatomic,copy) id canceledBlock;              //@synthesize canceledBlock=_canceledBlock - In the implementation block
@property (assign) float duration;                        //@synthesize duration=_duration - In the implementation block
@property (retain) NSTimer * timer;                       //@synthesize timer=_timer - In the implementation block
@property (assign) char timerRunning;                     //@synthesize timerRunning=_timerRunning - In the implementation block
@property (assign,nonatomic) char repeat;                 //@synthesize repeat=_repeat - In the implementation block
-(void)stopAndDestroyTimer;
-(void)timerElapsed;
-(void)setTimerRunning:(char)arg1 ;
-(char)timerRunning;
-(id)canceledBlock;
-(id)elapsedBlock;
-(void)setCanceledBlock:(id)arg1 ;
-(id)initWithDuration:(float)arg1 repeat:(char)arg2 ;
-(void)setElapsedBlock:(id)arg1 ;
-(id)initWithDuration:(float)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(float)duration;
-(void)setDuration:(float)arg1 ;
-(void)start;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(void)setRepeat:(char)arg1 ;
-(char)repeat;
@end

