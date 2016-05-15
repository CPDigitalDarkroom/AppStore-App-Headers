/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:57 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, NSArray, TNLParameterCollection;

@interface TFSTwitterAPISearchUniversalParametersBuilder : NSObject {

	char _allowPromotedContent;
	char _getClusters;
	NSString* _query;
	NSString* _querySource;
	NSString* _UILang;
	NSString* _dataLookupID;
	NSString* _queryRewriteID;
	NSString* _previousCursor;
	NSString* _nextCursor;
	NSString* _timezoneName;
	NSString* _eventID;
	NSString* _clusterID;
	NSString* _cardsPlatformID;
	NSString* _filter;
	NSString* _timelineType;
	NSString* _modules;
	NSNumber* _count;
	NSNumber* _sinceTime;
	NSNumber* _untilTime;
	NSNumber* _nearLatitude;
	NSNumber* _nearLongitude;
	unsigned _resultType;
	NSArray* _pinnedTweetIDs;
	NSArray* _enabledVerticals;

}

@property (nonatomic,copy) NSString * query;                                     //@synthesize query=_query - In the implementation block
@property (nonatomic,copy) NSString * querySource;                               //@synthesize querySource=_querySource - In the implementation block
@property (nonatomic,copy) NSString * UILang;                                    //@synthesize UILang=_UILang - In the implementation block
@property (nonatomic,copy) NSString * dataLookupID;                              //@synthesize dataLookupID=_dataLookupID - In the implementation block
@property (nonatomic,copy) NSString * queryRewriteID;                            //@synthesize queryRewriteID=_queryRewriteID - In the implementation block
@property (nonatomic,copy) NSString * previousCursor;                            //@synthesize previousCursor=_previousCursor - In the implementation block
@property (nonatomic,copy) NSString * nextCursor;                                //@synthesize nextCursor=_nextCursor - In the implementation block
@property (nonatomic,copy) NSString * timezoneName;                              //@synthesize timezoneName=_timezoneName - In the implementation block
@property (nonatomic,copy) NSString * eventID;                                   //@synthesize eventID=_eventID - In the implementation block
@property (nonatomic,copy) NSString * clusterID;                                 //@synthesize clusterID=_clusterID - In the implementation block
@property (nonatomic,copy) NSString * cardsPlatformID;                           //@synthesize cardsPlatformID=_cardsPlatformID - In the implementation block
@property (nonatomic,copy) NSString * filter;                                    //@synthesize filter=_filter - In the implementation block
@property (nonatomic,copy) NSString * timelineType;                              //@synthesize timelineType=_timelineType - In the implementation block
@property (nonatomic,copy) NSString * modules;                                   //@synthesize modules=_modules - In the implementation block
@property (nonatomic,copy) NSNumber * count;                                     //@synthesize count=_count - In the implementation block
@property (nonatomic,copy) NSNumber * sinceTime;                                 //@synthesize sinceTime=_sinceTime - In the implementation block
@property (nonatomic,copy) NSNumber * untilTime;                                 //@synthesize untilTime=_untilTime - In the implementation block
@property (nonatomic,copy) NSNumber * nearLatitude;                              //@synthesize nearLatitude=_nearLatitude - In the implementation block
@property (nonatomic,copy) NSNumber * nearLongitude;                             //@synthesize nearLongitude=_nearLongitude - In the implementation block
@property (assign,nonatomic) unsigned resultType;                                //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,retain) NSArray * pinnedTweetIDs;                           //@synthesize pinnedTweetIDs=_pinnedTweetIDs - In the implementation block
@property (nonatomic,retain) NSArray * enabledVerticals;                         //@synthesize enabledVerticals=_enabledVerticals - In the implementation block
@property (assign,nonatomic) char allowPromotedContent;                          //@synthesize allowPromotedContent=_allowPromotedContent - In the implementation block
@property (assign,nonatomic) char getClusters;                                   //@synthesize getClusters=_getClusters - In the implementation block
@property (nonatomic,readonly) TNLParameterCollection * parameters; 
+(id)parametersBuilderWithSearchQuery:(id)arg1 mediaFilter:(char)arg2 searchExplanation:(char)arg3 ;
+(unsigned)_tfsResultTypeFromTFNResultType:(unsigned)arg1 ;
+(id)_stringFromBOOL:(char)arg1 ;
+(id)_stringForTwitterSearchResultType:(unsigned)arg1 ;
-(NSArray *)enabledVerticals;
-(void)setEnabledVerticals:(NSArray *)arg1 ;
-(NSString *)clusterID;
-(void)setClusterID:(NSString *)arg1 ;
-(void)setAllowPromotedContent:(char)arg1 ;
-(NSString *)timezoneName;
-(NSNumber *)sinceTime;
-(NSNumber *)untilTime;
-(void)setTimezoneName:(NSString *)arg1 ;
-(NSString *)modules;
-(void)setModules:(NSString *)arg1 ;
-(NSString *)nextCursor;
-(NSArray *)pinnedTweetIDs;
-(void)setSinceTime:(NSNumber *)arg1 ;
-(void)setUntilTime:(NSNumber *)arg1 ;
-(void)setPinnedTweetIDs:(NSArray *)arg1 ;
-(char)allowPromotedContent;
-(NSString *)previousCursor;
-(void)setNextCursor:(NSString *)arg1 ;
-(void)setPreviousCursor:(NSString *)arg1 ;
-(void)setUILang:(NSString *)arg1 ;
-(void)setQuerySource:(NSString *)arg1 ;
-(void)setNearLatitude:(NSNumber *)arg1 ;
-(void)setNearLongitude:(NSNumber *)arg1 ;
-(void)setDataLookupID:(NSString *)arg1 ;
-(void)setQueryRewriteID:(NSString *)arg1 ;
-(void)setGetClusters:(char)arg1 ;
-(NSNumber *)nearLatitude;
-(NSNumber *)nearLongitude;
-(NSString *)querySource;
-(NSString *)UILang;
-(NSString *)dataLookupID;
-(NSString *)queryRewriteID;
-(NSString *)cardsPlatformID;
-(void)setCardsPlatformID:(NSString *)arg1 ;
-(void)setTimelineType:(NSString *)arg1 ;
-(char)getClusters;
-(id)initWithQuery:(id)arg1 ;
-(void)setEventID:(NSString *)arg1 ;
-(NSString *)eventID;
-(void)setResultType:(unsigned)arg1 ;
-(NSString *)filter;
-(NSNumber *)count;
-(id)init;
-(NSString *)query;
-(void)setFilter:(NSString *)arg1 ;
-(void)setCount:(NSNumber *)arg1 ;
-(void)setQuery:(NSString *)arg1 ;
-(TNLParameterCollection *)parameters;
-(NSString *)timelineType;
-(unsigned)resultType;
@end

