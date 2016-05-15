/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:45 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFNDirectMessageModelObject.h>
#import <Twitter/TFNDirectMessageContextUserActivityLog.h>

@class NSArray, TFNDirectMessageModel, NSMutableArray, NSMutableSet, NSString;

@interface TFNDirectMessageModelUserActivityLog : TFNDirectMessageModelObject <TFNDirectMessageContextUserActivityLog> {

	TFNDirectMessageModel* _model;
	NSMutableArray* _mostRecentlySentMessageLogEntries;
	NSMutableArray* _mostRecentlySharedTweetsLogEntries;
	NSMutableSet* _indexedMessageIDs;
	NSMutableArray* _failedIndexingMessageEntries;

}

@property (nonatomic,readonly) NSMutableArray * mostRecentlySentMessageLogEntries;               //@synthesize mostRecentlySentMessageLogEntries=_mostRecentlySentMessageLogEntries - In the implementation block
@property (nonatomic,readonly) NSMutableArray * mostRecentlySharedTweetsLogEntries;              //@synthesize mostRecentlySharedTweetsLogEntries=_mostRecentlySharedTweetsLogEntries - In the implementation block
@property (nonatomic,readonly) NSMutableSet * indexedMessageIDs;                                 //@synthesize indexedMessageIDs=_indexedMessageIDs - In the implementation block
@property (nonatomic,readonly) NSMutableArray * failedIndexingMessageEntries;                    //@synthesize failedIndexingMessageEntries=_failedIndexingMessageEntries - In the implementation block
@property (assign,nonatomic,__weak) TFNDirectMessageModel * model;                               //@synthesize model=_model - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * mostRecentlySentMessages; 
@property (nonatomic,copy,readonly) NSArray * mostRecentlySharedTweets; 
+(void)clearUserActivityLog:(id)arg1 forUserID:(long long)arg2 ;
+(id)_spotlightIndexUpdateQueue;
+(unsigned)maximumUserActivityLogSize;
-(NSArray *)mostRecentlySentMessages;
-(NSArray *)mostRecentlySharedTweets;
-(NSMutableArray *)mostRecentlySharedTweetsLogEntries;
-(NSMutableArray *)mostRecentlySentMessageLogEntries;
-(NSMutableSet *)indexedMessageIDs;
-(void)_clearSpotlightIndexForUserWithID:(long long)arg1 ;
-(void)_updateSpotlightIndexByRemovingMessage:(id)arg1 ;
-(void)_updateSpotlightIndexByAddingMessage:(id)arg1 ;
-(id)_definitiveMessageEntriesFromLogEntries:(id)arg1 ;
-(NSMutableArray *)failedIndexingMessageEntries;
-(id)_conversationForMessageEntry:(id)arg1 ;
-(void)_retryMostRecentFailedMessageEntry;
-(void)removeMessageEntry:(id)arg1 ;
-(id)initWithDirectMessageModel:(id)arg1 ;
-(void)logMessageEntry:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(TFNDirectMessageModel *)model;
-(void)setModel:(TFNDirectMessageModel *)arg1 ;
@end

