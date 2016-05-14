/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:48 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNThreadDetailsUserInfoHeaderCellDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNThreadViewModelLoadResultConfigurable.h>

@protocol MNThreadClientSummaryUpdateCreating, MNThreadDetailsSectionProviding, MNInviteEligibilityChecking, MNAvatarImageDecorating, MNThreadDetailsTableViewDataSourceDelegate;
@class MNThreadParticipantNameFormatter, FBUserSession, MNThreadViewModel, MNThreadDetailsSectionProviderController, FBWebRTCCallabilityAwareCallController, FBWebRTCCallButtonImageProvider, MNCommerceOrderListViewModel, MNSharedContentGatingChecker, MNThreadDetailsViewController, MNThreadDetailsUserInfoHeaderCell, MNThreadDetailsPageConfiguration, MNConfigManager, MNPeopleCellFactory, MNEphemeralMessagePolicy, MNBlockFeatureConfiguration, MNThreadDetailsTableViewCellIconsConfiguration, MNSecureMessagingCapabilityConfiguration, MNThreadImageManager, MNProfileImageViewController, NSArray, MNThreadDetailsContactInfoViewModel, FBStringWithRedactedDescription, NSString;

@interface MNThreadDetailsTableViewDataSource : NSObject <MNThreadDetailsUserInfoHeaderCellDelegate, UITableViewDataSource, MNThreadViewModelLoadResultConfigurable> {

	MNThreadParticipantNameFormatter* _nameFormatter;
	FBUserSession* _session;
	MNThreadViewModel* _threadViewModel;
	id<MNThreadClientSummaryUpdateCreating> _summaryUpdateCreator;
	MNThreadDetailsSectionProviderController* _sectionProviderController;
	id<MNThreadDetailsSectionProviding> _sectionProvider;
	FBWebRTCCallabilityAwareCallController* _callController;
	FBWebRTCCallButtonImageProvider* _callButtonImageProvider;
	MNCommerceOrderListViewModel* _commerceOrderListViewModel;
	char _showHeaderAsCell;
	MNSharedContentGatingChecker* _sharedContentGatingChecker;
	MNThreadDetailsViewController* _threadDetailsViewController;
	MNThreadDetailsUserInfoHeaderCell* _userInfoHeaderCell;
	char _peopleSectionExpanded;
	id<MNInviteEligibilityChecking> _inviteEligibilityChecker;
	MNThreadDetailsPageConfiguration* _threadDetailsPageConfiguration;
	MNConfigManager* _configManager;
	MNPeopleCellFactory* _peopleCellFactory;
	MNEphemeralMessagePolicy* _ephemeralMessagePolicy;
	MNBlockFeatureConfiguration* _blockFeatureConfiguration;
	MNThreadDetailsTableViewCellIconsConfiguration* _tableViewCellIconsConfiguration;
	MNSecureMessagingCapabilityConfiguration* _secureMessagingCapabilityConfiguration;
	id<MNAvatarImageDecorating> _avatarImageDecoration;
	MNThreadImageManager* _threadImageManager;
	MNProfileImageViewController* _profileImageViewController;
	char _threadNameCustom;
	id<MNThreadDetailsTableViewDataSourceDelegate> _delegate;
	NSArray* _threadParticipantsIds;
	unsigned _numberOfParticipantsShown;
	MNThreadDetailsContactInfoViewModel* _contactInfoViewModel;
	NSArray* _sectionExtensions;

}

@property (assign,nonatomic,__weak) id<MNThreadDetailsTableViewDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * threadParticipantsIds;                                      //@synthesize threadParticipantsIds=_threadParticipantsIds - In the implementation block
@property (assign,nonatomic) unsigned numberOfParticipantsShown;                                          //@synthesize numberOfParticipantsShown=_numberOfParticipantsShown - In the implementation block
@property (nonatomic,copy) MNThreadDetailsContactInfoViewModel * contactInfoViewModel;                    //@synthesize contactInfoViewModel=_contactInfoViewModel - In the implementation block
@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * textFieldThreadName; 
@property (assign,getter=isThreadNameCustom,nonatomic) char threadNameCustom;                             //@synthesize threadNameCustom=_threadNameCustom - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sectionExtensions;                                          //@synthesize sectionExtensions=_sectionExtensions - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)threadViewModel;
-(void)tearDownThreadViewModelDependencies;
-(void)configureThreadViewModelDependenciesWithViewModelLoadResult:(id)arg1 ;
-(id)summaryUpdateCreator;
-(FBStringWithRedactedDescription *)textFieldThreadName;
-(unsigned)settingsRowWithSettingsRowIndex:(unsigned)arg1 ;
-(char)isThreadNameCustom;
-(char)_sharedPhotosCellEnabled;
-(void)_configureWithThreadViewModelLoadResult:(id)arg1 ;
-(char)_peopleSectionCanBeCollapsed;
-(void)_setPeopleSectionExpanded:(char)arg1 ;
-(id)_rowsForSettingsSection;
-(id)_rowsForCustomizationSection;
-(void)_populateParticipantIdsFromThreadViewModel:(id)arg1 ;
-(int)_numberOfRowsInSectionIndex:(int)arg1 ;
-(char)_showAllCellEnabled;
-(unsigned)_groupThreadJoinableRowWithRowIndex:(unsigned)arg1 ;
-(id)_groupThreadJoinableSettingsCell:(id)arg1 forGroupThreadJoinableSettingsRow:(unsigned)arg2 ;
-(id)_groupThreadMembersApprovalsSettingsCell:(id)arg1 ;
-(id)_userInfoHeaderCellForRow:(unsigned)arg1 tableView:(id)arg2 ;
-(id)_settingsCellForRow:(unsigned)arg1 tableView:(id)arg2 settingsRow:(unsigned)arg3 ;
-(id)_peopleCellForRow:(unsigned)arg1 tableView:(id)arg2 ;
-(id)_showAllCellForRow:(unsigned)arg1 tableView:(id)arg2 ;
-(id)_addPeopleCellForRow:(unsigned)arg1 tableView:(id)arg2 ;
-(id)_otherSectionCellForRow:(unsigned)arg1 tableView:(id)arg2 ;
-(id)_commerceOrderCellForRow:(unsigned)arg1 tableView:(id)arg2 ;
-(id)_commerceMoreOrdersCellForRow:(unsigned)arg1 tableView:(id)arg2 ;
-(id)_customizationCellForRow:(unsigned)arg1 tableView:(id)arg2 customizationRow:(unsigned)arg3 ;
-(void)_updateNumberOfParticipantsShown;
-(void)didChangeGroupThreadJoinableSetting:(id)arg1 ;
-(void)didChangeGroupThreadMembersApprovalsSetting:(id)arg1 ;
-(char)_rtcAudioButtonEnabled;
-(char)_rtcVideoButtonEnabled;
-(void)_configureBlockCell:(id)arg1 ;
-(void)_configureLeaveGroupCell:(id)arg1 ;
-(void)_configureDeleteThreadCell:(id)arg1 ;
-(void)_updateSectionExtensionsWithThreadViewModel:(id)arg1 ;
-(char)_voipIsEnabled;
-(char)_videoCallEnabled;
-(char)_contactAdditionEnabled;
-(char)_shouldShowEphemeralMessageRow:(id)arg1 ;
-(void)userInfoHeaderCellDidEndEditing:(id)arg1 ;
-(unsigned)settingsRowIndexWithSettingsRow:(unsigned)arg1 ;
-(void)clearOptimsiticThreadParticipantsIds;
-(unsigned)otherRowIndexWithOtherRow:(unsigned)arg1 ;
-(NSArray *)threadParticipantsIds;
-(void)setNumberOfParticipantsShown:(unsigned)arg1 ;
-(MNThreadDetailsContactInfoViewModel *)contactInfoViewModel;
-(id)initWithSession:(id)arg1 nameFormatter:(id)arg2 sectionProviderController:(id)arg3 callController:(id)arg4 callButtonImageProvider:(id)arg5 showHeaderAsCell:(char)arg6 sharedContentGatingChecker:(id)arg7 threadDetailsViewController:(id)arg8 inviteEligibilityChecker:(id)arg9 threadDetailsPageConfiguration:(id)arg10 configManager:(id)arg11 peopleCellFactory:(id)arg12 ephemeralMessagePolicy:(id)arg13 blockFeatureConfiguration:(id)arg14 tableViewCellIconsConfiguration:(id)arg15 secureMessagingCapabilityConfig:(id)arg16 avatarImageDecoration:(id)arg17 profileImageViewController:(id)arg18 threadImageManager:(id)arg19 ;
-(void)setContactInfoViewModel:(MNThreadDetailsContactInfoViewModel *)arg1 ;
-(void)setCommerceOrderListViewModel:(id)arg1 ;
-(NSArray *)sectionExtensions;
-(unsigned)sectionWithSectionIndex:(unsigned)arg1 ;
-(unsigned)numberOfParticipantsShown;
-(id)contactWithIndex:(unsigned)arg1 ;
-(unsigned)otherRowWithOtherRowIndex:(unsigned)arg1 ;
-(unsigned)customizationRowWithCustomizationRowIndex:(unsigned)arg1 ;
-(void)setThreadNameCustom:(char)arg1 ;
-(void)expandPeopleSection;
-(void)collapsePeopleSectionIfPossible;
-(unsigned)sectionIndexWithSection:(unsigned)arg1 ;
-(int)_numberOfRowsInSection:(unsigned)arg1 ;
-(void)setDelegate:(id<MNThreadDetailsTableViewDataSourceDelegate>)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<MNThreadDetailsTableViewDataSourceDelegate>)delegate;
@end

