/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:37 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TFNUI/TFNItemsDataViewController.h>
#import <Twitter/T1SettingsAccountInitializable.h>

@class TFNTwitterAccount, NSString;

@interface T1VITNotificationsTimelineSettingsViewController : TFNItemsDataViewController <T1SettingsAccountInitializable> {

	char _showsDoneButton;
	TFNTwitterAccount* _account;

}

@property (nonatomic,retain) TFNTwitterAccount * account;              //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) char showsDoneButton;                     //@synthesize showsDoneButton=_showsDoneButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_footerItemWithText:(id)arg1 ;
-(void)_updateSections;
-(void)_dismissSettings;
-(id)_advancedConfigurationSections;
-(id)_basicConfigurationSections;
-(char)_isUsingFilteredNotificationsTimeline;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)setShowsDoneButton:(char)arg1 ;
-(char)showsDoneButton;
-(id)initWithAccount:(id)arg1 ;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(TFNTwitterAccount *)account;
@end

