/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:54 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TFNTwitterFeatureSwitches <NSObject>
@required
-(void)partiallyApplyPendingWithAccount:(id)arg1 keys:(id)arg2;
-(void)applyPendingDeviceFeatureSwitches;
-(void)refreshWithAccount:(id)arg1 maxStale:(double)arg2 completion:(/*^block*/id)arg3;
-(void)refreshWithAccount:(id)arg1 maxStale:(double)arg2 timeout:(double)arg3 completion:(/*^block*/id)arg4;
-(void)refreshIfNecessaryWithAccount:(id)arg1;
-(void)refreshIfNecessaryWithGuestAuthManager:(id)arg1 completion:(/*^block*/id)arg2;
-(void)forceRefreshWithAccount:(id)arg1;
-(void)forceRefreshWithGuestAuthManager:(id)arg1 completion:(/*^block*/id)arg2;
-(void)applyPendingWithAccount:(id)arg1;
-(id)rawFeatureSwitchesDictionary;
-(char)hasNonDefaultValueForKey:(id)arg1;
-(float)CGFloatForKey:(id)arg1;
-(char)isInExperimentForKey:(id)arg1;
-(id)unsafePeekStringForKey:(id)arg1;
-(id)secondaryConfigurationForKey:(id)arg1;
-(double)doubleForKey:(id)arg1;
-(id)arrayForKey:(id)arg1;
-(char)boolForKey:(id)arg1;
-(id)stringForKey:(id)arg1;
-(int)integerForKey:(id)arg1;
-(id)numberForKey:(id)arg1;

@end

