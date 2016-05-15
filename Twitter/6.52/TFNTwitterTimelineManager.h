/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:54 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSOperation, TFNTwitterTimeline, TFNTwitterAccount, TFNTwitterHomeTimeline, TFNTwitterInteractionsTimeline, TFNTwitterNewsTimeline;

@interface TFNTwitterTimelineManager : NSObject {

	NSArray* _timelines;
	double _timelinesUpdatedTime;
	NSOperation* _loadOtherTimelinesOperation;
	TFNTwitterTimeline* _selectedTimeline;
	TFNTwitterAccount* _account;

}

@property (assign,nonatomic,__weak) TFNTwitterAccount * account;                                   //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSArray * timelines;                                                //@synthesize timelines=_timelines - In the implementation block
@property (nonatomic,readonly) TFNTwitterHomeTimeline * homeTimeline; 
@property (nonatomic,readonly) TFNTwitterInteractionsTimeline * interactionsTimeline; 
@property (nonatomic,readonly) TFNTwitterNewsTimeline * newsTimeline; 
@property (nonatomic,retain) TFNTwitterTimeline * selectedTimeline;                                //@synthesize selectedTimeline=_selectedTimeline - In the implementation block
+(void)setTimelineFactory:(id)arg1 ;
+(id)timelineFactory;
-(id)initWithAccount:(id)arg1 plistDictionary:(id)arg2 ;
-(void)configureTimelines;
-(void)_timelineDidFinishDeserialization:(id)arg1 ;
-(TFNTwitterNewsTimeline *)newsTimeline;
-(TFNTwitterHomeTimeline *)homeTimeline;
-(TFNTwitterInteractionsTimeline *)interactionsTimeline;
-(id)plistDictionaryValue;
-(id)timelineWithIdentifier:(id)arg1 ;
-(void)saveAllTimelines:(char)arg1 ;
-(char)isSerializing;
-(void)refreshAllTimelinesWithSource:(int)arg1 ;
-(void)_postNotificationName:(id)arg1 timeline:(id)arg2 updateType:(id)arg3 fromIndex:(unsigned)arg4 ;
-(TFNTwitterTimeline *)selectedTimeline;
-(void)_deserializeTimelines:(id)arg1 ;
-(void)setSelectedTimeline:(TFNTwitterTimeline *)arg1 ;
-(void)dealloc;
-(void)accountDidBecomeActive;
-(NSArray *)timelines;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(TFNTwitterAccount *)account;
@end

