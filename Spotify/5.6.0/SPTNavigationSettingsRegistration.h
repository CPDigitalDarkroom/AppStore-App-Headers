/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:38 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SettingsRegistry, SPTLocalSettings;
@class SPTFeatureSettingsPage;

@interface SPTNavigationSettingsRegistration : NSObject {

	id<SettingsRegistry> _settingsRegistry;
	id<SPTLocalSettings> _localSettings;
	SPTFeatureSettingsPage* _settingsPage;

}

@property (nonatomic,retain) id<SettingsRegistry> settingsRegistry;              //@synthesize settingsRegistry=_settingsRegistry - In the implementation block
@property (nonatomic,retain) id<SPTLocalSettings> localSettings;                 //@synthesize localSettings=_localSettings - In the implementation block
@property (nonatomic,retain) SPTFeatureSettingsPage * settingsPage;              //@synthesize settingsPage=_settingsPage - In the implementation block
-(id<SPTLocalSettings>)localSettings;
-(void)setLocalSettings:(id<SPTLocalSettings>)arg1 ;
-(id)multipleChoiceSettingsOptionsFromValues:(id)arg1 ;
-(void)registerValues:(id)arg1 defaultValue:(id)arg2 ;
-(void)registerNavigationListIdentifiers:(id)arg1 ;
-(id<SettingsRegistry>)settingsRegistry;
-(void)setSettingsRegistry:(id<SettingsRegistry>)arg1 ;
-(SPTFeatureSettingsPage *)settingsPage;
-(void)setSettingsPage:(SPTFeatureSettingsPage *)arg1 ;
-(id)navigationListIdentifier;
-(id)initWithSettingsRegistry:(id)arg1 localSettings:(id)arg2 ;
@end

