/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TFNUI/TFNItemsDataViewController.h>
#import <Twitter/TFNTwitterAuthenticated.h>
#import <Twitter/T1SettingsAccountInitializable.h>

@class TFNTwitterAccount, TFNTwitterApplePushDestination, NSArray, T1NotificationOptionRelationItem, T1NotificationOptionPollItem, NSString;

@interface T1PushNotificationChannelSettingsViewController : TFNItemsDataViewController <TFNTwitterAuthenticated, T1SettingsAccountInitializable> {

	char _showInstructionsOnly;
	char _hasPushAuthorization;
	TFNTwitterAccount* _account;
	TFNTwitterApplePushDestination* _pushDestination;
	NSArray* _sectionIndexToDescriptionMapping;
	T1NotificationOptionRelationItem* _mentionsItem;
	T1NotificationOptionRelationItem* _retweetsItem;
	T1NotificationOptionRelationItem* _favoritesItem;
	T1NotificationOptionPollItem* _pollsItem;
	NSString* _appRestartSuppressionToken;

}

@property (nonatomic,retain) TFNTwitterApplePushDestination * pushDestination;              //@synthesize pushDestination=_pushDestination - In the implementation block
@property (nonatomic,copy) NSArray * sectionIndexToDescriptionMapping;                      //@synthesize sectionIndexToDescriptionMapping=_sectionIndexToDescriptionMapping - In the implementation block
@property (nonatomic,retain) T1NotificationOptionRelationItem * mentionsItem;               //@synthesize mentionsItem=_mentionsItem - In the implementation block
@property (nonatomic,retain) T1NotificationOptionRelationItem * retweetsItem;               //@synthesize retweetsItem=_retweetsItem - In the implementation block
@property (nonatomic,retain) T1NotificationOptionRelationItem * favoritesItem;              //@synthesize favoritesItem=_favoritesItem - In the implementation block
@property (nonatomic,retain) T1NotificationOptionPollItem * pollsItem;                      //@synthesize pollsItem=_pollsItem - In the implementation block
@property (nonatomic,retain) NSString * appRestartSuppressionToken;                         //@synthesize appRestartSuppressionToken=_appRestartSuppressionToken - In the implementation block
@property (assign,nonatomic) char hasPushAuthorization;                                     //@synthesize hasPushAuthorization=_hasPushAuthorization - In the implementation block
@property (assign,nonatomic) char showInstructionsOnly;                                     //@synthesize showInstructionsOnly=_showInstructionsOnly - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account;                                   //@synthesize account=_account - In the implementation block
-(void)_updateSections;
-(void)_twitterAccountSettingsDidUpdate:(id)arg1 ;
-(void)_featureSwitchesChanged:(id)arg1 ;
-(void)_updatePushAuthorizationState;
-(void)_internal_setAccount:(id)arg1 ;
-(void)_copyPushDestinations;
-(void)_addNotificationSectionsToSections:(id)arg1 mapping:(id)arg2 ;
-(void)setPushDestination:(TFNTwitterApplePushDestination *)arg1 ;
-(unsigned)_sectionIndexForSectionDescription:(unsigned)arg1 ;
-(void)_addNotificationInstructionsSectionsToSections:(id)arg1 mapping:(id)arg2 ;
-(void)setSectionIndexToDescriptionMapping:(NSArray *)arg1 ;
-(NSArray *)sectionIndexToDescriptionMapping;
-(TFNTwitterApplePushDestination *)pushDestination;
-(void)_failedToUpdatePushSettings:(id)arg1 ;
-(void)_checkAllPushLevelsDisabled;
-(void)_updateServerPushSettings;
-(T1NotificationOptionRelationItem *)mentionsItem;
-(void)setMentionsItem:(T1NotificationOptionRelationItem *)arg1 ;
-(T1NotificationOptionRelationItem *)retweetsItem;
-(void)setRetweetsItem:(T1NotificationOptionRelationItem *)arg1 ;
-(T1NotificationOptionRelationItem *)favoritesItem;
-(void)setFavoritesItem:(T1NotificationOptionRelationItem *)arg1 ;
-(T1NotificationOptionPollItem *)pollsItem;
-(void)setPollsItem:(T1NotificationOptionPollItem *)arg1 ;
-(id)_notificationInstructionsHeaderItem;
-(id)_notificationInstructions;
-(id)tweetsItemFromTweet:(char)arg1 ;
-(id)mentionsItemFromTweet:(char)arg1 ;
-(id)retweetsItemFromTweet:(char)arg1 ;
-(id)favoritesItemFromTweet:(char)arg1 ;
-(id)pollsItemFromTweet:(char)arg1 ;
-(id)newFollowersOptionItem;
-(id)_newFollowersItem;
-(id)_messagesItem;
-(id)_addressBookItem;
-(id)_recommendationsItem;
-(id)_momentsItem;
-(id)_footerItemWithText:(id)arg1 ;
-(id)_offerRedemptionItem;
-(id)_VitNotableEvent;
-(char)_hasLifelineAlerts;
-(id)_lifelineAlertsItem;
-(id)_experimentalItem;
-(unsigned)_sectionDescriptionForSectionIndex:(unsigned)arg1 ;
-(char)showInstructionsOnly;
-(void)setShowInstructionsOnly:(char)arg1 ;
-(NSString *)appRestartSuppressionToken;
-(void)setAppRestartSuppressionToken:(NSString *)arg1 ;
-(char)hasPushAuthorization;
-(void)setHasPushAuthorization:(char)arg1 ;
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(id)initWithAccount:(id)arg1 ;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(TFNTwitterAccount *)account;
@end

