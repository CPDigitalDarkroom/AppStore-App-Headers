/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFSTwitterAPICommand.h>

@class TFNTwitterAccountModel, NSNumber, NSString, NSArray;

@interface TFSTwitterAPIConversationSuggestionsShowCommand : TFSTwitterAPICommand {

	char _allowPromotedContent;
	TFNTwitterAccountModel* _accountModel;
	NSNumber* _statusID;
	NSNumber* _authorID;
	NSString* _impressionID;
	NSArray* _lastTweets;
	long long _accountUserID;

}

@property (assign,nonatomic) long long accountUserID;                            //@synthesize accountUserID=_accountUserID - In the implementation block
@property (nonatomic,retain) TFNTwitterAccountModel * accountModel;              //@synthesize accountModel=_accountModel - In the implementation block
@property (nonatomic,retain) NSNumber * statusID;                                //@synthesize statusID=_statusID - In the implementation block
@property (nonatomic,retain) NSNumber * authorID;                                //@synthesize authorID=_authorID - In the implementation block
@property (nonatomic,retain) NSString * impressionID;                            //@synthesize impressionID=_impressionID - In the implementation block
@property (nonatomic,retain) NSArray * lastTweets;                               //@synthesize lastTweets=_lastTweets - In the implementation block
@property (assign,nonatomic) char allowPromotedContent;                          //@synthesize allowPromotedContent=_allowPromotedContent - In the implementation block
-(NSNumber *)statusID;
-(NSString *)impressionID;
-(void)setAllowPromotedContent:(char)arg1 ;
-(NSNumber *)authorID;
-(void)setStatusID:(NSNumber *)arg1 ;
-(void)setImpressionID:(NSString *)arg1 ;
-(id)initWithService:(id)arg1 accountID:(id)arg2 accountUserID:(long long)arg3 accountModel:(id)arg4 statusID:(id)arg5 authorID:(id)arg6 impressionID:(id)arg7 lastTweets:(id)arg8 source:(unsigned)arg9 completionBlock:(/*^block*/id)arg10 ;
-(void)setAccountModel:(TFNTwitterAccountModel *)arg1 ;
-(id)initWithService:(id)arg1 accountID:(id)arg2 scribeNetworkOperation:(id)arg3 source:(unsigned)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)requestWithPolling:(char)arg1 ;
-(char)allowPromotedContent;
-(void)processResponse:(id)arg1 ;
-(long long)accountUserID;
-(TFNTwitterAccountModel *)accountModel;
-(void)setAccountUserID:(long long)arg1 ;
-(void)setAuthorID:(NSNumber *)arg1 ;
-(NSArray *)lastTweets;
-(void)setLastTweets:(NSArray *)arg1 ;
@end

