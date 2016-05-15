/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:50 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TFNTwitterAccount, NSMutableSet;

@interface TFNTwitterHomeMutingSet : NSObject {

	char _processingMutingIDs;
	TFNTwitterAccount* _account;
	NSMutableSet* _mutingSet;
	NSMutableSet* _updateMutingSet;

}

@property (nonatomic,retain) NSMutableSet * mutingSet;                          //@synthesize mutingSet=_mutingSet - In the implementation block
@property (nonatomic,retain) NSMutableSet * updateMutingSet;                    //@synthesize updateMutingSet=_updateMutingSet - In the implementation block
@property (assign,nonatomic) char processingMutingIDs;                          //@synthesize processingMutingIDs=_processingMutingIDs - In the implementation block
@property (nonatomic,__weak,readonly) TFNTwitterAccount * account;              //@synthesize account=_account - In the implementation block
-(void)_userMuteDidUpdate:(id)arg1 ;
-(char)isMutingUser:(id)arg1 ;
-(void)_accountDidBecomeActive;
-(void)_accountDidBecomeInactive;
-(void)_addMutingObservers;
-(void)_removeAllObservers;
-(void)updatePolling:(char)arg1 ;
-(void)_removeMutingObservers;
-(char)processingMutingIDs;
-(void)setProcessingMutingIDs:(char)arg1 ;
-(void)_refreshMutingWithCursor:(id)arg1 polling:(char)arg2 ;
-(void)_processMutingIDsResponse:(id)arg1 polling:(char)arg2 ;
-(void)_updateMutingForUserIDs:(id)arg1 ;
-(NSMutableSet *)mutingSet;
-(void)setMutingSet:(NSMutableSet *)arg1 ;
-(NSMutableSet *)updateMutingSet;
-(void)setUpdateMutingSet:(NSMutableSet *)arg1 ;
-(void)dealloc;
-(id)initWithAccount:(id)arg1 ;
-(TFNTwitterAccount *)account;
@end

