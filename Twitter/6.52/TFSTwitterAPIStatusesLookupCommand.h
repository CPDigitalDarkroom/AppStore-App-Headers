/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFSTwitterAPICommand.h>

@class TFNTwitterAccountModel, NSArray;

@interface TFSTwitterAPIStatusesLookupCommand : TFSTwitterAPICommand {

	TFNTwitterAccountModel* _accountModel;
	NSArray* _statusIDs;
	long long _accountUserID;

}

@property (assign,nonatomic) long long accountUserID;                            //@synthesize accountUserID=_accountUserID - In the implementation block
@property (nonatomic,retain) TFNTwitterAccountModel * accountModel;              //@synthesize accountModel=_accountModel - In the implementation block
@property (nonatomic,retain) NSArray * statusIDs;                                //@synthesize statusIDs=_statusIDs - In the implementation block
-(void)setAccountModel:(TFNTwitterAccountModel *)arg1 ;
-(id)initWithService:(id)arg1 accountID:(id)arg2 scribeNetworkOperation:(id)arg3 source:(unsigned)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)requestWithPolling:(char)arg1 ;
-(void)processResponse:(id)arg1 ;
-(long long)accountUserID;
-(TFNTwitterAccountModel *)accountModel;
-(void)setAccountUserID:(long long)arg1 ;
-(NSArray *)statusIDs;
-(void)setStatusIDs:(NSArray *)arg1 ;
-(id)initWithService:(id)arg1 accountID:(id)arg2 accountUserID:(long long)arg3 accountModel:(id)arg4 statusIDs:(id)arg5 source:(unsigned)arg6 completionBlock:(/*^block*/id)arg7 ;
@end

