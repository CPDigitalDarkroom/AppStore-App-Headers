/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:58 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBAutoUpdaterAutomaticRestartBehavior.h>

@class FBAutoUpdaterAutomaticRestartBehaviorListeningAnnouncer, NSTimer;

@interface FBAutoUpdaterTimeDelayRestartBehavior : NSObject <FBAutoUpdaterAutomaticRestartBehavior> {

	double _delay;
	FBAutoUpdaterAutomaticRestartBehaviorListeningAnnouncer* _announcer;
	char _timerHasFired;
	NSTimer* _timer;

}
-(char)autoUpdaterShouldAutomaticallyRestart;
-(void)addRestartBehaviorListener:(id)arg1 ;
-(void)removeRestartBehaviorListener:(id)arg1 ;
-(id)initWithDelay:(double)arg1 ;
-(void)_onTimerFire;
-(void)dealloc;
-(id)init;
-(void)signal;
@end

