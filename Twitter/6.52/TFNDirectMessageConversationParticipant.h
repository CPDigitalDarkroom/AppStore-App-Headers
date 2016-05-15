/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNDirectMessageModelObject.h>
#import <Twitter/TFNDirectMessageConversationParticipant.h>
@class NSDate;


@protocol TFNDirectMessageConversationParticipant <TFNDirectMessageObject,TFNDirectMessageUser>
@property (nonatomic,readonly) NSDate * joinDate; 
@property (nonatomic,__weak,readonly) id<TFNDirectMessageEntry> lastReadMessageEntry; 
@property (nonatomic,__weak,readonly) id<TFNDirectMessageConversation> conversation; 
@required
-(id<TFNDirectMessageEntry>)lastReadMessageEntry;
-(char)isEqualToParticipant:(id)arg1;
-(int)compare:(id)arg1;
-(NSDate *)joinDate;
-(id<TFNDirectMessageConversation>)conversation;

@end


@protocol TFNDirectMessageEntry, TFNDirectMessageUser;
@class NSDate, TFNDirectMessageConversation, NSString, TFNTwitterUser, NSNumber, UIImage;

@interface TFNDirectMessageConversationParticipant : TFNDirectMessageModelObject <TFNDirectMessageConversationParticipant> {

	NSDate* _joinDate;
	id<TFNDirectMessageEntry> _lastReadMessageEntry;
	TFNDirectMessageConversation* _conversation;
	id<TFNDirectMessageUser> _participatingUser;
	long long _lastReadMessageID;

}

@property (nonatomic,retain) id<TFNDirectMessageUser> participatingUser;                         //@synthesize participatingUser=_participatingUser - In the implementation block
@property (nonatomic,retain) NSDate * joinDate;                                                  //@synthesize joinDate=_joinDate - In the implementation block
@property (assign,nonatomic,__weak) id<TFNDirectMessageEntry> lastReadMessageEntry;              //@synthesize lastReadMessageEntry=_lastReadMessageEntry - In the implementation block
@property (assign,nonatomic) long long lastReadMessageID;                                        //@synthesize lastReadMessageID=_lastReadMessageID - In the implementation block
@property (assign,nonatomic,__weak) TFNDirectMessageConversation * conversation;                 //@synthesize conversation=_conversation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<TFNDirectMessageContext> context; 
@property (nonatomic,readonly) TFNTwitterUser * user; 
@property (nonatomic,readonly) NSString * displayFullName; 
@property (nonatomic,readonly) long long userID; 
@property (nonatomic,readonly) NSNumber * userIDNumber; 
@property (nonatomic,readonly) NSString * username; 
@property (nonatomic,readonly) NSString * displayUsername; 
@property (nonatomic,readonly) UIImage * profileImage; 
-(NSString *)displayFullName;
-(NSNumber *)userIDNumber;
-(id)initWithJSONDictionary:(id)arg1 userCache:(id)arg2 ;
-(id<TFNDirectMessageUser>)participatingUser;
-(void)setParticipatingUser:(id<TFNDirectMessageUser>)arg1 ;
-(long long)lastReadMessageID;
-(void)setLastReadMessageID:(long long)arg1 ;
-(void)setLastReadMessageEntry:(id<TFNDirectMessageEntry>)arg1 ;
-(id<TFNDirectMessageEntry>)lastReadMessageEntry;
-(char)isEqualToParticipant:(id)arg1 ;
-(id)initWithUser:(id)arg1 ;
-(TFNTwitterUser *)user;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)debugDescription;
-(int)compare:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)joinDate;
-(void)setJoinDate:(NSDate *)arg1 ;
-(void)setConversation:(TFNDirectMessageConversation *)arg1 ;
-(TFNDirectMessageConversation *)conversation;
-(UIImage *)profileImage;
-(long long)userID;
-(NSString *)displayUsername;
-(NSString *)username;
@end

