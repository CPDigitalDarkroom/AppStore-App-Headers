/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:54 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface TFNTwitterAVPlayerControllerSessionScribeState : NSObject {

	char _wasReplayed;
	NSDate* _timeOfMostRecentIntentToPlay;

}

@property (nonatomic,retain) NSDate * timeOfMostRecentIntentToPlay;              //@synthesize timeOfMostRecentIntentToPlay=_timeOfMostRecentIntentToPlay - In the implementation block
@property (assign,nonatomic) char wasReplayed;                                   //@synthesize wasReplayed=_wasReplayed - In the implementation block
-(NSDate *)timeOfMostRecentIntentToPlay;
-(char)wasReplayed;
-(void)setWasReplayed:(char)arg1 ;
-(void)setTimeOfMostRecentIntentToPlay:(NSDate *)arg1 ;
@end

