/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:34 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface T1AppNavigationContextImpressionTracker : NSObject
+(id)sharedTracker;
-(char)shouldShowContextForAccount:(id)arg1 contextType:(int)arg2 sendingUserID:(long long)arg3 ;
-(char)logImpressionForAccount:(id)arg1 contextType:(int)arg2 sendingUserID:(long long)arg3 ;
-(char)_isValidForAccount:(id)arg1 contextType:(int)arg2 sendingUserID:(long long)arg3 ;
-(id)_impressionCountUserDefaultsDictionary;
-(id)_compositeKeyForAccount:(id)arg1 contextType:(int)arg2 sendingUserID:(long long)arg3 ;
-(unsigned)contextImpressionCountForAccount:(id)arg1 contextType:(int)arg2 sendingUserID:(long long)arg3 ;
-(unsigned)_impressionCountThresholdForAccount:(id)arg1 ;
-(char)contextTypeIsSupported:(int)arg1 ;
@end

