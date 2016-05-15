/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSMutableDictionary;

@interface TFNTwitterSentinelManager : NSObject {

	NSDictionary* _sentinelSet;
	NSMutableDictionary* _loadingSentinels;
	char _purgeArchiveSentinelsExist;
	char _watchdogCrashDuringLastExecution;

}

@property (nonatomic,readonly) char purgeArchiveSentinelsExist;                    //@synthesize purgeArchiveSentinelsExist=_purgeArchiveSentinelsExist - In the implementation block
@property (nonatomic,readonly) char watchdogCrashDuringLastExecution;              //@synthesize watchdogCrashDuringLastExecution=_watchdogCrashDuringLastExecution - In the implementation block
+(id)sharedSentinelManager;
-(char)watchdogCrashDuringLastExecution;
-(char)purgeArchiveSentinelsExist;
-(id)loadingSentinelForType:(int)arg1 ;
-(char)removeSentinelFile:(int)arg1 ;
-(char)createSentinelFile:(int)arg1 subTypeName:(id)arg2 ;
-(void)_createAccountSwitchSentinel;
-(char)_checkSentinelsOnApplicationLaunch:(char)arg1 ;
-(void)_createTwentySecondSentinel:(int)arg1 ;
-(id)sentinelForType:(int)arg1 ;
-(char)_hasPendingCrashReports;
-(void)dealloc;
-(id)init;
-(void)cleanup;
-(void)start:(char)arg1 ;
@end

