/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:37 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TFNFindFriendsActionDelegate <NSObject>
@optional
-(void)findFriendsAction:(id)arg1 receivedTwitterUserBatch:(id)arg2 allTwitterUsersSoFar:(id)arg3 doneLoading:(char)arg4;
-(void)findFriendsAction:(id)arg1 receivedRecommendedUserBatch:(id)arg2 doneLoading:(char)arg3;

@required
-(void)findFriendsActionOperation:(id)arg1 failedWithError:(id)arg2;

@end

