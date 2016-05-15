/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:46 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFSTwitterAPICommand.h>

@class TFNTwitterAccountModel, NSNumber, NSString;

@interface TFSTwitterAPIAlertsTimelineCommand : TFSTwitterAPICommand {

	TFNTwitterAccountModel* _accountModel;
	NSNumber* _maxResultCount;
	NSString* _upCursor;
	NSString* _downCursor;
	long long _alertID;
	long long _accountUserID;

}

@property (nonatomic,retain) TFNTwitterAccountModel * accountModel;              //@synthesize accountModel=_accountModel - In the implementation block
@property (assign,nonatomic) long long alertID;                                  //@synthesize alertID=_alertID - In the implementation block
@property (assign,nonatomic) long long accountUserID;                            //@synthesize accountUserID=_accountUserID - In the implementation block
@property (nonatomic,retain) NSNumber * maxResultCount;                          //@synthesize maxResultCount=_maxResultCount - In the implementation block
@property (nonatomic,retain) NSString * upCursor;                                //@synthesize upCursor=_upCursor - In the implementation block
@property (nonatomic,retain) NSString * downCursor;                              //@synthesize downCursor=_downCursor - In the implementation block
-(long long)alertID;
-(void)setAlertID:(long long)arg1 ;
-(void)setAccountModel:(TFNTwitterAccountModel *)arg1 ;
-(id)initWithService:(id)arg1 accountID:(id)arg2 scribeNetworkOperation:(id)arg3 source:(unsigned)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)requestWithPolling:(char)arg1 ;
-(void)processResponse:(id)arg1 ;
-(NSString *)upCursor;
-(NSString *)downCursor;
-(long long)accountUserID;
-(TFNTwitterAccountModel *)accountModel;
-(void)setUpCursor:(NSString *)arg1 ;
-(void)setDownCursor:(NSString *)arg1 ;
-(id)initWithService:(id)arg1 accountID:(id)arg2 accountUserID:(long long)arg3 accountModel:(id)arg4 alertID:(long long)arg5 maxResultCount:(id)arg6 upCursor:(id)arg7 downCursor:(id)arg8 source:(unsigned)arg9 completionBlock:(/*^block*/id)arg10 ;
-(void)setAccountUserID:(long long)arg1 ;
-(void)setMaxResultCount:(NSNumber *)arg1 ;
-(NSNumber *)maxResultCount;
@end

