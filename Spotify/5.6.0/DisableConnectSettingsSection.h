/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:45 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SettingsSection.h>

@class SettingsSwitchTableViewCell;

@interface DisableConnectSettingsSection : SettingsSection {

	SettingsSwitchTableViewCell* _cell;

}

@property (nonatomic,retain) SettingsSwitchTableViewCell * cell;              //@synthesize cell=_cell - In the implementation block
-(id)initWithSettingsViewController:(id)arg1 ;
-(void)connectEnabledChanged:(id)arg1 ;
-(id)cellForRow:(int)arg1 ;
-(void)dealloc;
-(int)numberOfRows;
-(SettingsSwitchTableViewCell *)cell;
-(void)setCell:(SettingsSwitchTableViewCell *)arg1 ;
@end

