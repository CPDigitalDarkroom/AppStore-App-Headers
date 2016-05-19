/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/IDView.h>

@class IDLabel, IDButton, IDCheckbox;

@interface IDRhmiFeatureListMultimediaInfoView : IDView {

	IDLabel* _appswitchFailedLabel;
	IDLabel* _confirmAppswitchLabel;
	IDLabel* _appNotInstalledLabel;
	IDButton* _confirmAppswitchButton;
	IDCheckbox* _appswitchConfirmationCheckBox;

}

@property (retain) IDLabel * appswitchFailedLabel;                          //@synthesize appswitchFailedLabel=_appswitchFailedLabel - In the implementation block
@property (retain) IDLabel * confirmAppswitchLabel;                         //@synthesize confirmAppswitchLabel=_confirmAppswitchLabel - In the implementation block
@property (retain) IDLabel * appNotInstalledLabel;                          //@synthesize appNotInstalledLabel=_appNotInstalledLabel - In the implementation block
@property (retain) IDButton * confirmAppswitchButton;                       //@synthesize confirmAppswitchButton=_confirmAppswitchButton - In the implementation block
@property (retain) IDCheckbox * appswitchConfirmationCheckBox;              //@synthesize appswitchConfirmationCheckBox=_appswitchConfirmationCheckBox - In the implementation block
-(IDLabel *)appswitchFailedLabel;
-(void)setAppswitchFailedLabel:(IDLabel *)arg1 ;
-(IDLabel *)confirmAppswitchLabel;
-(void)setConfirmAppswitchLabel:(IDLabel *)arg1 ;
-(IDLabel *)appNotInstalledLabel;
-(void)setAppNotInstalledLabel:(IDLabel *)arg1 ;
-(IDButton *)confirmAppswitchButton;
-(void)setConfirmAppswitchButton:(IDButton *)arg1 ;
-(IDCheckbox *)appswitchConfirmationCheckBox;
-(void)setAppswitchConfirmationCheckBox:(IDCheckbox *)arg1 ;
-(id)initWithHmiState:(int)arg1 titleModel:(id)arg2 focusEvent:(int)arg3 ;
-(id)initWithHmiState:(int)arg1 titleModel:(id)arg2 focusEvent:(int)arg3 hmiProvider:(id)arg4 ;
-(void)dealloc;
@end

