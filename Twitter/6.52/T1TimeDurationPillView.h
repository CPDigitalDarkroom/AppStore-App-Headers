/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:21 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/T1PillView.h>

@interface T1TimeDurationPillView : T1PillView {

	char _recording;
	unsigned _state;
	unsigned _format;
	double _autoplayAdCountdownValue;
	double _currentTimeInterval;
	double _completedTimeInterval;
	double _warningTimeInterval;

}

@property (assign,nonatomic) double autoplayAdCountdownValue;              //@synthesize autoplayAdCountdownValue=_autoplayAdCountdownValue - In the implementation block
@property (assign,nonatomic) double currentTimeInterval;                   //@synthesize currentTimeInterval=_currentTimeInterval - In the implementation block
@property (assign,nonatomic) double completedTimeInterval;                 //@synthesize completedTimeInterval=_completedTimeInterval - In the implementation block
@property (assign,nonatomic) double warningTimeInterval;                   //@synthesize warningTimeInterval=_warningTimeInterval - In the implementation block
@property (assign,nonatomic) unsigned format;                              //@synthesize format=_format - In the implementation block
-(void)setAutoplayAdCountdownValue:(double)arg1 ;
-(void)setCurrentTimeInterval:(double)arg1 animated:(char)arg2 ;
-(void)_updateStateAnimated:(char)arg1 ;
-(id)_formattedTime:(double)arg1 ;
-(void)setRecording:(char)arg1 animated:(char)arg2 ;
-(double)autoplayAdCountdownValue;
-(double)completedTimeInterval;
-(void)setCompletedTimeInterval:(double)arg1 ;
-(double)warningTimeInterval;
-(void)setWarningTimeInterval:(double)arg1 ;
-(unsigned)format;
-(void)setFormat:(unsigned)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCurrentTimeInterval:(double)arg1 ;
-(double)currentTimeInterval;
@end

