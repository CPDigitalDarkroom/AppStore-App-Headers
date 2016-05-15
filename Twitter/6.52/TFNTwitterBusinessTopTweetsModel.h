/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFNTwitterBusinessTopTweets.h>

@class NSString;

@interface TFNTwitterBusinessTopTweetsModel : NSObject <TFNTwitterBusinessTopTweets> {

	NSString* _timelineID;

}

@property (nonatomic,retain) NSString * timelineID;                      //@synthesize timelineID=_timelineID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * customTimelineID; 
-(NSString *)timelineID;
-(void)setTimelineID:(NSString *)arg1 ;
-(NSString *)customTimelineID;
-(id)initWithTimelineID:(id)arg1 ;
-(id)init;
@end

