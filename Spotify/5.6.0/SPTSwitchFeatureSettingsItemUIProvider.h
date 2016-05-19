/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:45 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTFeatureSettingsUIProvider.h>

@class SPTFeatureSettingsItem, SettingsSwitchTableViewCell, NSString;

@interface SPTSwitchFeatureSettingsItemUIProvider : NSObject <SPTFeatureSettingsUIProvider> {

	char _state;
	SPTFeatureSettingsItem* _featureSettingsItem;
	SettingsSwitchTableViewCell* _cell;
	/*^block*/id _action;

}

@property (assign,nonatomic,__weak) SPTFeatureSettingsItem * featureSettingsItem;              //@synthesize featureSettingsItem=_featureSettingsItem - In the implementation block
@property (nonatomic,retain) SettingsSwitchTableViewCell * cell;                               //@synthesize cell=_cell - In the implementation block
@property (assign,nonatomic) char state;                                                       //@synthesize state=_state - In the implementation block
@property (nonatomic,copy,readonly) id action;                                                 //@synthesize action=_action - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)featureSettingsPresentation:(id)arg1 cellForRow:(unsigned)arg2 ;
-(void)featureSettingsItem:(id)arg1 changedValueFrom:(id)arg2 to:(id)arg3 ;
-(id)initWithInitialState:(char)arg1 action:(/*^block*/id)arg2 ;
-(void)setFeatureSettingsItem:(SPTFeatureSettingsItem *)arg1 ;
-(void)switchChanged:(id)arg1 ;
-(void)switchStateChanged:(char)arg1 ;
-(SPTFeatureSettingsItem *)featureSettingsItem;
-(char)state;
-(void)setState:(char)arg1 ;
-(id)action;
-(SettingsSwitchTableViewCell *)cell;
-(void)setCell:(SettingsSwitchTableViewCell *)arg1 ;
@end

