/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:32 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Twitter/Twitter-Structs.h>
@class NSMutableArray, NSDate;

@interface T1SpriteAnimation : NSObject {

	NSMutableArray* _spriteViews;
	NSMutableArray* _timers;
	NSDate* _pauseDateTime;

}

@property (nonatomic,retain) NSMutableArray * spriteViews;              //@synthesize spriteViews=_spriteViews - In the implementation block
@property (nonatomic,retain) NSMutableArray * timers;                   //@synthesize timers=_timers - In the implementation block
@property (nonatomic,retain) NSDate * pauseDateTime;                    //@synthesize pauseDateTime=_pauseDateTime - In the implementation block
@property (nonatomic,readonly) char isAnimating; 
-(int)_randomIntegerWithMinimum:(int)arg1 maximum:(int)arg2 ;
-(float)_randomFloatWithMinimum:(float)arg1 maximum:(float)arg2 ;
-(NSMutableArray *)spriteViews;
-(/*^block*/id)removerForSpriteView:(id)arg1 completion:(/*^block*/id)arg2 ;
-(/*^block*/id)animatorForSpriteImageView:(id)arg1 frameSheet:(id)arg2 duration:(double)arg3 repeatCount:(unsigned)arg4 completion:(/*^block*/id)arg5 ;
-(/*^block*/id)triggerForSpriteView:(id)arg1 position:(CGPoint)arg2 ;
-(/*^block*/id)animatorForSpriteView:(id)arg1 calculator:(/*^block*/id)arg2 trigger:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(/*^block*/id)delayerForSpriteView:(id)arg1 duration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)_addSpriteView:(id)arg1 toView:(id)arg2 ;
-(/*^block*/id)triggerForSpriteView:(id)arg1 opacity:(float)arg2 ;
-(/*^block*/id)animatorForSpriteView:(id)arg1 calculator:(/*^block*/id)arg2 trigger:(/*^block*/id)arg3 forKey:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)startInView:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_removeSpriteView:(id)arg1 ;
-(NSDate *)pauseDateTime;
-(void)setPauseDateTime:(NSDate *)arg1 ;
-(void)_pauseLayer:(id)arg1 ;
-(void)_resumeLayer:(id)arg1 elapsedTime:(double)arg2 ;
-(/*^block*/id)triggerForSpriteView:(id)arg1 position:(CGPoint)arg2 opacity:(float)arg3 ;
-(void)setSpriteViews:(NSMutableArray *)arg1 ;
-(void)_delayTimerFired:(id)arg1 ;
-(void)dealloc;
-(void)stop;
-(char)isAnimating;
-(void)resume;
-(void)pause;
-(void)abort;
-(NSMutableArray *)timers;
-(void)setTimers:(NSMutableArray *)arg1 ;
@end

