/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CSCore;

@interface CSNotificationsObserver : NSObject {

	CSCore* _core;
	char _inForeground;

}
-(id)initWithCore:(id)arg1 ;
-(void)subscribeToNotifications;
-(void)unsubscribeToNotifications;
-(void)applicationWillCrash:(id)arg1 ;
-(void)dealloc;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
@end

