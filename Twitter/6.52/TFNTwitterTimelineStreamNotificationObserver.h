/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:50 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TFNTwitterTimeline, NSString;

@interface TFNTwitterTimelineStreamNotificationObserver : NSObject {

	TFNTwitterTimeline* _weakTimeline;
	NSString* _streamUpdateNotificationName;

}

@property (nonatomic,__weak,readonly) TFNTwitterTimeline * weakTimeline;                  //@synthesize weakTimeline=_weakTimeline - In the implementation block
@property (nonatomic,copy,readonly) NSString * streamUpdateNotificationName;              //@synthesize streamUpdateNotificationName=_streamUpdateNotificationName - In the implementation block
-(id)initWithTimeline:(id)arg1 ;
-(NSString *)streamUpdateNotificationName;
-(void)lifetimePreserveringNoOp;
-(void)_timelineStreamDidUpdate:(id)arg1 ;
-(void)timelineStreamChanged;
-(TFNTwitterTimeline *)weakTimeline;
-(void)dealloc;
@end

