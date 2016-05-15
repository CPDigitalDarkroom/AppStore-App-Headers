/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:45 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFSTwitterAPICommand.h>

@class TFNTwitterAccountModel, NSNumber;

@interface TFSTwitterAPIActivityAboutMeCommand : TFSTwitterAPICommand {

	TFNTwitterAccountModel* _accountModel;
	NSNumber* _sinceID;
	NSNumber* _maxID;
	NSNumber* _count;
	NSNumber* _modelVersion;
	unsigned _filters;
	unsigned _forceBuckets;
	long long _accountUserID;

}

@property (nonatomic,readonly) long long accountUserID;                            //@synthesize accountUserID=_accountUserID - In the implementation block
@property (nonatomic,readonly) TFNTwitterAccountModel * accountModel;              //@synthesize accountModel=_accountModel - In the implementation block
@property (nonatomic,readonly) NSNumber * sinceID;                                 //@synthesize sinceID=_sinceID - In the implementation block
@property (nonatomic,readonly) NSNumber * maxID;                                   //@synthesize maxID=_maxID - In the implementation block
@property (nonatomic,readonly) NSNumber * count;                                   //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) NSNumber * modelVersion;                            //@synthesize modelVersion=_modelVersion - In the implementation block
@property (nonatomic,readonly) unsigned filters;                                   //@synthesize filters=_filters - In the implementation block
@property (nonatomic,readonly) unsigned forceBuckets;                              //@synthesize forceBuckets=_forceBuckets - In the implementation block
-(id)initWithService:(id)arg1 accountID:(id)arg2 scribeNetworkOperation:(id)arg3 source:(unsigned)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)requestWithPolling:(char)arg1 ;
-(void)processResponse:(id)arg1 ;
-(long long)accountUserID;
-(TFNTwitterAccountModel *)accountModel;
-(NSNumber *)modelVersion;
-(id)initWithService:(id)arg1 accountID:(id)arg2 accountUserID:(long long)arg3 accountModel:(id)arg4 sinceID:(id)arg5 maxID:(id)arg6 count:(id)arg7 modelVersion:(id)arg8 filters:(unsigned)arg9 forceBuckets:(unsigned)arg10 source:(unsigned)arg11 completionBlock:(/*^block*/id)arg12 ;
-(NSNumber *)maxID;
-(NSNumber *)sinceID;
-(unsigned)forceBuckets;
-(NSNumber *)count;
-(unsigned)filters;
@end

