/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:55 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFSTwitterAPICommand.h>

@class NSNumber, NSString, TFNTwitterAccountModel;

@interface TFSTwitterAPIMutesUsersCreateCommand : TFSTwitterAPICommand {

	NSNumber* _userID;
	NSString* _screenName;
	TFNTwitterAccountModel* _accountModel;

}

@property (nonatomic,retain) TFNTwitterAccountModel * accountModel;              //@synthesize accountModel=_accountModel - In the implementation block
@property (nonatomic,readonly) NSNumber * userID;                                //@synthesize userID=_userID - In the implementation block
@property (nonatomic,readonly) NSString * screenName;                            //@synthesize screenName=_screenName - In the implementation block
-(void)setAccountModel:(TFNTwitterAccountModel *)arg1 ;
-(id)initWithService:(id)arg1 accountID:(id)arg2 scribeNetworkOperation:(id)arg3 source:(unsigned)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)requestWithPolling:(char)arg1 ;
-(void)processResponse:(id)arg1 ;
-(TFNTwitterAccountModel *)accountModel;
-(id)initWithService:(id)arg1 accountID:(id)arg2 accountModel:(id)arg3 userID:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)initWithService:(id)arg1 accountID:(id)arg2 accountModel:(id)arg3 screenName:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(NSNumber *)userID;
-(NSString *)screenName;
@end

