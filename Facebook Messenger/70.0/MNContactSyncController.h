/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:46 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNContactImportInitiationListener.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNContactsSyncLockDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNContactsSyncSettingOperationDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBImportedContactsSyncListener.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNImportedContactsAccumulationListener.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBClassProvidable.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNContactImportInitiator.h>

@protocol FBProvider, MNContactSyncControllerDelegate;
@class MNUserSettings, MNContactImporter, MNGraphGlobalContactsSyncLock, MNContactSyncPermissionChecker, FBAnalytics, MNImportedContactsAccumulator, MNImportedContactsAccumulationListenerAnnouncer, MNContactImportInitationAnalyticsLogger, MNImportedContactRemovalCoordinator, MNAddressBookContactImportInitiator, MNContactsSyncSettingOperation, NSString;

@interface MNContactSyncController : NSObject <MNContactImportInitiationListener, MNContactsSyncLockDelegate, MNContactsSyncSettingOperationDelegate, FBImportedContactsSyncListener, MNImportedContactsAccumulationListener, FBClassProvidable, MNContactImportInitiator> {

	MNUserSettings* _userSettings;
	MNContactImporter* _contactImporter;
	MNGraphGlobalContactsSyncLock* _contactsSyncLock;
	id<FBProvider> _settingOperationProvider;
	MNContactSyncPermissionChecker* _contactSyncPermissionChecker;
	FBAnalytics* _analytics;
	MNImportedContactsAccumulator* _importedContactsAccumulator;
	MNImportedContactsAccumulationListenerAnnouncer* _importedContactsAccumulationListenerAccouncer;
	MNContactImportInitationAnalyticsLogger* _contactImportInitiationAnalyticsLogger;
	MNImportedContactRemovalCoordinator* _importedContactRemovalCoordinator;
	char _importingContacts;
	id<MNContactSyncControllerDelegate> _delegate;
	unsigned _numberOfContactsMatched;
	MNAddressBookContactImportInitiator* _contactImportInitiator;
	MNContactsSyncSettingOperation* _settingOperation;

}

@property (nonatomic,retain) MNAddressBookContactImportInitiator * contactImportInitiator;                           //@synthesize contactImportInitiator=_contactImportInitiator - In the implementation block
@property (nonatomic,retain) MNContactsSyncSettingOperation * settingOperation;                                      //@synthesize settingOperation=_settingOperation - In the implementation block
@property (assign,nonatomic,__weak) id<MNContactSyncControllerDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (getter=isImportingContacts,nonatomic,readonly) char importingContacts;                                    //@synthesize importingContacts=_importingContacts - In the implementation block
@property (getter=isContactSyncEnabled,nonatomic,readonly) char contactSyncEnabled; 
@property (getter=isPresentingConfirmationDialog,nonatomic,readonly) char presentingConfirmationDialog; 
@property (nonatomic,readonly) unsigned numberOfContactsMatched;                                                     //@synthesize numberOfContactsMatched=_numberOfContactsMatched - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(char)isContactSyncEnabled;
-(void)contactImportingLocked;
-(void)contactImportingUnlocked;
-(void)failedToLockContactImporting;
-(void)failedToUnlockContactImporting;
-(void)lockingContactImporting;
-(void)unlockingContactImporting;
-(void)userInitiatedContactImportAllowed;
-(void)userInitiatedContactImportDisallowed;
-(void)userInitiatedContactImportFailedToInitiate;
-(void)initiateContactImporting;
-(void)accumulatedImportedContacts:(id)arg1 ;
-(void)_stopAnyOngoingContactInitiating;
-(id)initWithUserSettings:(id)arg1 contactImporter:(id)arg2 importedContactRemovalCoordinator:(id)arg3 contactsSyncLock:(id)arg4 settingOperationProvider:(id)arg5 contactSyncPermissionChecker:(id)arg6 analytics:(id)arg7 ;
-(char)isPresentingConfirmationDialog;
-(void)setSettingOperation:(MNContactsSyncSettingOperation *)arg1 ;
-(void)_resetContactInitiating;
-(MNAddressBookContactImportInitiator *)contactImportInitiator;
-(void)setContactImportInitiator:(MNAddressBookContactImportInitiator *)arg1 ;
-(void)contactsSyncSettingOperationDidComplete:(id)arg1 ;
-(void)contactsSyncSettingOperationDidFail:(id)arg1 withError:(id)arg2 ;
-(void)contactsSyncSettingOperationWillBeCancelled:(id)arg1 ;
-(void)contactImportStartedForNumberOfContacts:(unsigned)arg1 ;
-(void)contactImportProgressedWithStatus:(id)arg1 ;
-(void)contactImportCompleted;
-(void)contactImportFailed;
-(void)contactImportFailedDueToContactImportingBeingLocked;
-(void)contactImportCancelled;
-(void)disableContactSync;
-(void)addImportedContactsAccumulationListener:(id)arg1 ;
-(void)removeImportedContactsAccumulationListener:(id)arg1 ;
-(char)isImportingContacts;
-(unsigned)numberOfContactsMatched;
-(MNContactsSyncSettingOperation *)settingOperation;
-(void)setDelegate:(id<MNContactSyncControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNContactSyncControllerDelegate>)delegate;
@end

