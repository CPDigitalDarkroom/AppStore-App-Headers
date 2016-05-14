/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:48 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNServiceControllable.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBClassProvidable.h>

@protocol MNLegacySyncEngineManaging, FBNuxEligibilityFetchRunning;
@class FBMSPCoordinator, FBMNetworkMonitorController, FBMNetworkProtocolController, FBStickerServiceController, FBMThreadTypingStateTracker, MNConnectionStatusToastController, MNInvalidTokenErrorNotificationHandler, OrcaPersistManager, MNContactImporter, MNCoreTextSizeCache, MNPluginLifecycleCoordinator, MNNuxProvider, FBUserSession, MNConfigManager, FBNuxPersistentStore, FBNuxCatalog, MNEventsReminderToastController, NSString;

@interface MNForegroundServiceWrapper : NSObject <MNServiceControllable, FBClassProvidable> {

	FBMSPCoordinator* _syncProtocolCoordinator;
	FBMNetworkMonitorController* _networkMonitorController;
	FBMNetworkProtocolController* _networkProtocolController;
	FBStickerServiceController* _stickerServiceController;
	FBMThreadTypingStateTracker* _threadTypingStateTracker;
	MNConnectionStatusToastController* _connectionStatusToastController;
	MNInvalidTokenErrorNotificationHandler* _invalidTokenErrorNotificationHandler;
	OrcaPersistManager* _persistManager;
	MNContactImporter* _contactImporter;
	MNCoreTextSizeCache* _textSizeCache;
	MNPluginLifecycleCoordinator* _pluginLifecycleCoordinator;
	char _supportMessageThreadDiskStorage;
	MNNuxProvider* _nuxProvider;
	FBUserSession* _session;
	id<MNLegacySyncEngineManaging> _DEPRECATED_legacySyncEngineManager;
	MNConfigManager* _configManager;
	FBNuxPersistentStore* _nuxPersistentStore;
	FBNuxCatalog* _nuxCatalog;
	id<FBNuxEligibilityFetchRunning> _nuxEligibilityFetchRunner;
	MNEventsReminderToastController* _eventsReminderToastController;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithConnectionStatusToastController:(id)arg1 invalidTokenHandler:(id)arg2 persistManager:(id)arg3 contactImporter:(id)arg4 userProvider:(id)arg5 textSizeCache:(id)arg6 networkMonitorController:(id)arg7 networkProtocolController:(id)arg8 syncProtocolCoordinator:(id)arg9 stickerServiceController:(id)arg10 pluginLifeCycleCoordinator:(id)arg11 threadTypingStateTracker:(id)arg12 supportMessageThreadDiskStorage:(char)arg13 nuxProvider:(id)arg14 session:(id)arg15 configManager:(id)arg16 nuxCatalog:(id)arg17 nuxPersistentStore:(id)arg18 nuxEligibilityFetchRunner:(id)arg19 eventsReminderToastController:(id)arg20 ;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end

