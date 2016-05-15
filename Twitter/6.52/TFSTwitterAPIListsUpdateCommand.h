/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:46 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFSTwitterAPICommand.h>

@class TFNTwitterAccountModel, NSNumber, NSString;

@interface TFSTwitterAPIListsUpdateCommand : TFSTwitterAPICommand {

	TFNTwitterAccountModel* _accountModel;
	NSNumber* _listID;
	NSString* _listName;
	NSString* _listDescription;
	int _listMode;

}

@property (nonatomic,retain) TFNTwitterAccountModel * accountModel;              //@synthesize accountModel=_accountModel - In the implementation block
@property (nonatomic,retain) NSNumber * listID;                                  //@synthesize listID=_listID - In the implementation block
@property (nonatomic,retain) NSString * listName;                                //@synthesize listName=_listName - In the implementation block
@property (nonatomic,retain) NSString * listDescription;                         //@synthesize listDescription=_listDescription - In the implementation block
@property (assign,nonatomic) int listMode;                                       //@synthesize listMode=_listMode - In the implementation block
-(NSNumber *)listID;
-(id)initWithService:(id)arg1 accountID:(id)arg2 accountModel:(id)arg3 listID:(id)arg4 name:(id)arg5 description:(id)arg6 mode:(int)arg7 completionBlock:(/*^block*/id)arg8 ;
-(void)setAccountModel:(TFNTwitterAccountModel *)arg1 ;
-(id)initWithService:(id)arg1 accountID:(id)arg2 scribeNetworkOperation:(id)arg3 source:(unsigned)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)requestWithPolling:(char)arg1 ;
-(void)processResponse:(id)arg1 ;
-(TFNTwitterAccountModel *)accountModel;
-(NSString *)listDescription;
-(void)setListDescription:(NSString *)arg1 ;
-(void)setListID:(NSNumber *)arg1 ;
-(void)setListMode:(int)arg1 ;
-(int)listMode;
-(NSString *)listName;
-(void)setListName:(NSString *)arg1 ;
@end

