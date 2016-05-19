/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface RAPIConfiguration : NSObject {

	char _logToConsole;
	char _logToCallback;
	char _logToFile;
	char _presentLockScreenViewControllerAutomatically;
	unsigned _logLevel;

}

@property (assign) char logToConsole;                                              //@synthesize logToConsole=_logToConsole - In the implementation block
@property (assign) char logToCallback;                                             //@synthesize logToCallback=_logToCallback - In the implementation block
@property (assign) char logToFile;                                                 //@synthesize logToFile=_logToFile - In the implementation block
@property (assign) char presentLockScreenViewControllerAutomatically;              //@synthesize presentLockScreenViewControllerAutomatically=_presentLockScreenViewControllerAutomatically - In the implementation block
@property (assign) unsigned logLevel;                                              //@synthesize logLevel=_logLevel - In the implementation block
-(void)setLogToCallback:(char)arg1 ;
-(char)logToConsole;
-(char)logToCallback;
-(char)logToFile;
-(char)presentLockScreenViewControllerAutomatically;
-(void)setPresentLockScreenViewControllerAutomatically:(char)arg1 ;
-(unsigned)logLevel;
-(void)setLogLevel:(unsigned)arg1 ;
-(id)init;
-(void)setLogToConsole:(char)arg1 ;
-(void)setLogToFile:(char)arg1 ;
@end

