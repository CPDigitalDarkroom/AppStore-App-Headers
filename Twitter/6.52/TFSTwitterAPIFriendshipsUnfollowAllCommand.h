/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:46 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFSTwitterAPICommand.h>

@class NSArray;

@interface TFSTwitterAPIFriendshipsUnfollowAllCommand : TFSTwitterAPICommand {

	NSArray* _userIDs;

}

@property (nonatomic,retain) NSArray * userIDs;              //@synthesize userIDs=_userIDs - In the implementation block
-(NSArray *)userIDs;
-(void)setUserIDs:(NSArray *)arg1 ;
-(id)initWithService:(id)arg1 accountID:(id)arg2 scribeNetworkOperation:(id)arg3 source:(unsigned)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)requestWithPolling:(char)arg1 ;
-(void)processResponse:(id)arg1 ;
-(id)initWithService:(id)arg1 accountID:(id)arg2 userIDs:(id)arg3 source:(unsigned)arg4 completionBlock:(/*^block*/id)arg5 ;
@end

