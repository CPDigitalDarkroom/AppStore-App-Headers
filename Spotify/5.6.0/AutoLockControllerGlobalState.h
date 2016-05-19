/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AutoLockControllerGlobalState : NSObject {

	unsigned _screenLockers;
	unsigned _forcedScreenLockers;

}

@property (assign,nonatomic) unsigned screenLockers;                    //@synthesize screenLockers=_screenLockers - In the implementation block
@property (assign,nonatomic) unsigned forcedScreenLockers;              //@synthesize forcedScreenLockers=_forcedScreenLockers - In the implementation block
+(id)singletonInstance;
-(void)deviceBatteryStateDidChangeNotification:(id)arg1 ;
-(void)sessionUserDidLogoutNotification:(id)arg1 ;
-(unsigned)screenLockers;
-(void)setScreenLockers:(unsigned)arg1 ;
-(unsigned)forcedScreenLockers;
-(void)setForcedScreenLockers:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
@end

