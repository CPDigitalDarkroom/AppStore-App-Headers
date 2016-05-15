/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:25 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TFNUI/TFNItemsDataViewController.h>
#import <Twitter/TFNTwitterAuthenticated.h>
#import <Twitter/T1SettingsAccountInitializable.h>

@class TFNTwitterAccount, NSString;

@interface T1TimelinePersonalizationSettingsViewController : TFNItemsDataViewController <TFNTwitterAuthenticated, T1SettingsAccountInitializable> {

	TFNTwitterAccount* _account;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account;              //@synthesize account=_account - In the implementation block
-(id)scribePage;
-(id)scribeSection;
-(void)_twitterAccountSettingsDidUpdate:(id)arg1 ;
-(id)_rankedTimelineItem;
-(id)_rankedTimelineDescriptionItem;
-(void)_modifyRankedTimeline:(char)arg1 withBooleanItem:(id)arg2 ;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)update:(char)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(TFNTwitterAccount *)account;
@end

