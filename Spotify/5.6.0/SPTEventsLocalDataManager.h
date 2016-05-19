/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:33 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SPTLocalSettings;
@interface SPTEventsLocalDataManager : NSObject {

	id<SPTLocalSettings> _localSettings;

}

@property (assign,nonatomic,__weak) id<SPTLocalSettings> localSettings;              //@synthesize localSettings=_localSettings - In the implementation block
-(id<SPTLocalSettings>)localSettings;
-(void)setLocalSettings:(id<SPTLocalSettings>)arg1 ;
-(id)initWithLocalSettings:(id)arg1 ;
-(id)loadLastLocation;
-(void)saveLastLocation:(id)arg1 ;
@end

