/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:44 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBCrashCounter, FBExceptionHandler, FBAppDefaults;

@interface FBApplicationTerminationTracker : NSObject {

	double _minStartupDuration;
	FBCrashCounter* _crashCounter;
	FBExceptionHandler* _exceptionHandler;
	FBAppDefaults* _appDefaults;

}
-(void)_didEnterBackground;
-(void)_willTerminate;
-(void)_willEnterForeground;
-(id)initWithMinStartupDuration:(double)arg1 exceptionHandler:(id)arg2 appDefaults:(id)arg3 ;
-(id)initWithMinStartupDuration:(double)arg1 exceptionHandler:(id)arg2 ;
-(void)startupBegan;
-(void)startupCompleted;
-(void)_setApplicationState:(int)arg1 ;
-(void)dealloc;
@end

