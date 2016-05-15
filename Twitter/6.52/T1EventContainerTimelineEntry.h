/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:20 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, TFNTwitterSearchStream;

@interface T1EventContainerTimelineEntry : NSObject {

	NSString* _title;
	unsigned _timelineDisplayType;
	NSString* _scribeComponent;
	/*^block*/id _searchQueryBuilderBlock;
	TFNTwitterSearchStream* _searchStream;

}

@property (nonatomic,copy) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) unsigned timelineDisplayType;                       //@synthesize timelineDisplayType=_timelineDisplayType - In the implementation block
@property (nonatomic,retain) NSString * scribeComponent;                         //@synthesize scribeComponent=_scribeComponent - In the implementation block
@property (nonatomic,copy) id searchQueryBuilderBlock;                           //@synthesize searchQueryBuilderBlock=_searchQueryBuilderBlock - In the implementation block
@property (nonatomic,retain) TFNTwitterSearchStream * searchStream;              //@synthesize searchStream=_searchStream - In the implementation block
+(id)entryWithTitle:(id)arg1 timelineDisplayType:(unsigned)arg2 scribeComponent:(id)arg3 searchQueryBuilderBlock:(/*^block*/id)arg4 ;
-(void)setSearchStream:(TFNTwitterSearchStream *)arg1 ;
-(TFNTwitterSearchStream *)searchStream;
-(NSString *)scribeComponent;
-(void)setScribeComponent:(NSString *)arg1 ;
-(void)setTimelineDisplayType:(unsigned)arg1 ;
-(void)setSearchQueryBuilderBlock:(id)arg1 ;
-(unsigned)timelineDisplayType;
-(id)searchQueryBuilderBlock;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)title;
@end

