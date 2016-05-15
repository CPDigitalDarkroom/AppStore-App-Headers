/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:46 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFSTwitterAPICommand.h>

@class TFSTwitterAPIListsCommandParameters;

@interface TFSTwitterAPIListsSubscribersCommand : TFSTwitterAPICommand {

	TFSTwitterAPIListsCommandParameters* _params;

}

@property (nonatomic,retain) TFSTwitterAPIListsCommandParameters * params;              //@synthesize params=_params - In the implementation block
-(id)initWithService:(id)arg1 accountID:(id)arg2 scribeNetworkOperation:(id)arg3 source:(unsigned)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)requestWithPolling:(char)arg1 ;
-(void)processResponse:(id)arg1 ;
-(id)initWithService:(id)arg1 accountID:(id)arg2 accountModel:(id)arg3 listID:(id)arg4 slug:(id)arg5 ownerID:(id)arg6 ownerScreenName:(id)arg7 count:(id)arg8 cursor:(id)arg9 source:(unsigned)arg10 completionBlock:(/*^block*/id)arg11 ;
-(id)initWithService:(id)arg1 accountID:(id)arg2 accountModel:(id)arg3 listID:(id)arg4 count:(id)arg5 cursor:(id)arg6 source:(unsigned)arg7 completionBlock:(/*^block*/id)arg8 ;
-(id)initWithService:(id)arg1 accountID:(id)arg2 accountModel:(id)arg3 slug:(id)arg4 ownerID:(id)arg5 ownerScreenName:(id)arg6 count:(id)arg7 cursor:(id)arg8 source:(unsigned)arg9 completionBlock:(/*^block*/id)arg10 ;
-(void)setParams:(TFSTwitterAPIListsCommandParameters *)arg1 ;
-(TFSTwitterAPIListsCommandParameters *)params;
@end

