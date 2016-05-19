/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:54 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTLogMessage.h>

@class NSString;

@interface SPTLogMessageViewLoadTimer1 : SPTLogMessage {

	char _isFirstValue;
	char _isLastValue;
	NSString* _viewNameValue;
	NSString* _subdivisionValue;
	NSString* _timerStepNameValue;
	NSString* _sequenceIdValue;
	long long _msSinceEpochValue;

}

@property (nonatomic,retain) NSString * viewNameValue;                   //@synthesize viewNameValue=_viewNameValue - In the implementation block
@property (nonatomic,retain) NSString * subdivisionValue;                //@synthesize subdivisionValue=_subdivisionValue - In the implementation block
@property (assign,nonatomic) char isFirstValue;                          //@synthesize isFirstValue=_isFirstValue - In the implementation block
@property (assign,nonatomic) char isLastValue;                           //@synthesize isLastValue=_isLastValue - In the implementation block
@property (nonatomic,retain) NSString * timerStepNameValue;              //@synthesize timerStepNameValue=_timerStepNameValue - In the implementation block
@property (assign,nonatomic) long long msSinceEpochValue;                //@synthesize msSinceEpochValue=_msSinceEpochValue - In the implementation block
@property (nonatomic,retain) NSString * sequenceIdValue;                 //@synthesize sequenceIdValue=_sequenceIdValue - In the implementation block
+(id)messageWithViewName:(id)arg1 subdivision:(id)arg2 isFirst:(char)arg3 isLast:(char)arg4 timerStepName:(id)arg5 msSinceEpoch:(long long)arg6 sequenceId:(id)arg7 ;
-(void)setTimerStepNameValue:(NSString *)arg1 ;
-(void)setIsFirstValue:(char)arg1 ;
-(void)setMsSinceEpochValue:(long long)arg1 ;
-(NSString *)timerStepNameValue;
-(char)isFirstValue;
-(long long)msSinceEpochValue;
-(void)setSubdivisionValue:(NSString *)arg1 ;
-(void)setIsLastValue:(char)arg1 ;
-(void)setSequenceIdValue:(NSString *)arg1 ;
-(NSString *)subdivisionValue;
-(char)isLastValue;
-(NSString *)sequenceIdValue;
-(void)setViewNameValue:(NSString *)arg1 ;
-(NSString *)viewNameValue;
-(id)serialize;
@end

