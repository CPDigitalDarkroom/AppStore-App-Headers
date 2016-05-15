/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:41 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNDirectMessageModelObject.h>
#import <Twitter/TFNDirectMessageConversationEntry.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol TFNDirectMessageConversation;
@class NSDate, NSString, NSDictionary;

@interface TFNDirectMessageConversationEntry : TFNDirectMessageModelObject <TFNDirectMessageConversationEntry, NSCoding, NSCopying> {

	char _affectsSort;
	id<TFNDirectMessageConversation> _conversation;
	NSDate* _time;
	unsigned _secondarySortKey;
	NSString* _requestID;
	id _metadata;
	long long _entryID;
	long long _primarySortKey;

}

@property (nonatomic,retain) id metadata;                                                       //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) char affectsSort;                                                  //@synthesize affectsSort=_affectsSort - In the implementation block
@property (assign,nonatomic) long long primarySortKey;                                          //@synthesize primarySortKey=_primarySortKey - In the implementation block
@property (assign,nonatomic) unsigned secondarySortKey;                                         //@synthesize secondarySortKey=_secondarySortKey - In the implementation block
@property (assign,nonatomic) long long entryID;                                                 //@synthesize entryID=_entryID - In the implementation block
@property (assign,nonatomic,__weak) id<TFNDirectMessageConversation> conversation;              //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) NSDate * time;                                                     //@synthesize time=_time - In the implementation block
@property (nonatomic,retain) NSString * requestID;                                              //@synthesize requestID=_requestID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<TFNDirectMessageContext> context; 
@property (nonatomic,readonly) NSDictionary * scribeItem; 
@property (nonatomic,readonly) id<TFNDirectMessageUser> originator; 
@property (nonatomic,readonly) unsigned entryType; 
@property (getter=isEstablished,nonatomic,readonly) char established; 
-(NSDictionary *)scribeItem;
-(void)setPrimarySortKey:(long long)arg1 ;
-(int)compareWithPrimarySortKey:(long long)arg1 secondarySortKey:(unsigned)arg2 ;
-(long long)primarySortKey;
-(unsigned)secondarySortKey;
-(void)setSecondarySortKey:(unsigned)arg1 ;
-(char)isEqualToConversationEntryByID:(id)arg1 ;
-(char)affectsSort;
-(char)shouldAssimilateEntry:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 metadataClass:(Class)arg2 userCache:(id)arg3 ;
-(void)setAffectsSort:(char)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 userCache:(id)arg2 ;
-(void)assimilateConversationEntry:(id)arg1 ;
-(char)isEstablished;
-(NSString *)requestID;
-(unsigned)entryType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)debugDescription;
-(int)compare:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTime:(NSDate *)arg1 ;
-(NSDate *)time;
-(id<TFNDirectMessageUser>)originator;
-(void)setConversation:(id<TFNDirectMessageConversation>)arg1 ;
-(id<TFNDirectMessageConversation>)conversation;
-(void)setRequestID:(NSString *)arg1 ;
-(void)setMetadata:(id)arg1 ;
-(id)metadata;
-(void)setEntryID:(long long)arg1 ;
-(long long)entryID;
@end

