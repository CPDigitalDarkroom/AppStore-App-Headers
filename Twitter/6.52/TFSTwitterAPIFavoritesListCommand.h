/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:41 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFSTwitterAPICommand.h>

@class TFNTwitterAccountModel, NSNumber, NSString;

@interface TFSTwitterAPIFavoritesListCommand : TFSTwitterAPICommand {

	TFNTwitterAccountModel* _accountModel;
	NSNumber* _userID;
	NSString* _screenName;
	NSNumber* _sinceID;
	NSNumber* _maxID;
	NSNumber* _count;
	long long _accountUserID;

}

@property (nonatomic,readonly) TFNTwitterAccountModel * accountModel;              //@synthesize accountModel=_accountModel - In the implementation block
@property (nonatomic,readonly) long long accountUserID;                            //@synthesize accountUserID=_accountUserID - In the implementation block
@property (nonatomic,readonly) NSNumber * userID;                                  //@synthesize userID=_userID - In the implementation block
@property (nonatomic,readonly) NSString * screenName;                              //@synthesize screenName=_screenName - In the implementation block
@property (nonatomic,readonly) NSNumber * sinceID;                                 //@synthesize sinceID=_sinceID - In the implementation block
@property (nonatomic,readonly) NSNumber * maxID;                                   //@synthesize maxID=_maxID - In the implementation block
@property (nonatomic,readonly) NSNumber * count;                                   //@synthesize count=_count - In the implementation block
-(id)initWithService:(id)arg1 accountID:(id)arg2 scribeNetworkOperation:(id)arg3 source:(unsigned)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)requestWithPolling:(char)arg1 ;
-(void)processResponse:(id)arg1 ;
-(long long)accountUserID;
-(TFNTwitterAccountModel *)accountModel;
-(NSNumber *)maxID;
-(NSNumber *)sinceID;
-(id)initWithService:(id)arg1 accountID:(id)arg2 accountModel:(id)arg3 accountUserID:(long long)arg4 userID:(id)arg5 screenName:(id)arg6 count:(id)arg7 sinceID:(id)arg8 maxID:(id)arg9 source:(unsigned)arg10 completionBlock:(/*^block*/id)arg11 ;
-(NSNumber *)count;
-(NSNumber *)userID;
-(NSString *)screenName;
@end

