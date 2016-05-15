/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:27 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TFNUI/TFNItemsDataViewController.h>

@protocol T1SignInAdvancedSettingsViewControllerDelegate;
@class T1SignInManager;

@interface T1SignInSettingsViewController : TFNItemsDataViewController {

	T1SignInManager* _signInManager;
	id<T1SignInAdvancedSettingsViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<T1SignInAdvancedSettingsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithSignInManager:(id)arg1 ;
-(void)_updateSections;
-(void)_apiRootTapped;
-(void)setDelegate:(id<T1SignInAdvancedSettingsViewControllerDelegate>)arg1 ;
-(id<T1SignInAdvancedSettingsViewControllerDelegate>)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)_cancel;
@end

