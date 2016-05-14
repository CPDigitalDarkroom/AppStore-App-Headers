/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:47 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNPushMessageChainedHandling.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNPushMessageChainedHandlingConfigurable.h>

@protocol MNInAppNotificationManaging, FBMAppProperties, MNAuthenticationManager, MNPushMessageReceivedListening, OS_dispatch_queue, MNPushMessageChainedHandling;
@class MNNavigationCoordinator, MNThreadViewStatusManager, MNSoundController, MNNotificationPreviewGenerator, MNUserStore, UIApplication, FBMThreadStore, OrcaPushRegistrar, MNUserSettings, FBMThreadSet, FBMPushLogger, NSObject, FBCache, NSString;

@interface MNPushMessageNotificationHandler : NSObject <MNPushMessageChainedHandling, MNPushMessageChainedHandlingConfigurable> {

	id<MNInAppNotificationManaging> _inAppNotificationManager;
	MNNavigationCoordinator* _navigationCoordinator;
	MNThreadViewStatusManager* _threadStatusManager;
	MNSoundController* _soundController;
	MNNotificationPreviewGenerator* _notificationPreviewGenerator;
	MNUserStore* _userStore;
	UIApplication* _application;
	id<FBMAppProperties> _appProperties;
	id<MNAuthenticationManager> _authManager;
	FBMThreadStore* _threadStore;
	OrcaPushRegistrar* _pushRegistrar;
	MNUserSettings* _userSettings;
	FBMThreadSet* _threadSet;
	FBMPushLogger* _pushLogger;
	id<MNPushMessageReceivedListening> _pushMessageReceivedListener;
	NSObject*<OS_dispatch_queue> _queue;
	id<MNPushMessageChainedHandling> _nextHandler;
	FBCache* _notifiedMessageIdCache;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_postNotificationForMessage:(id)arg1 syncedThreadKey:(id)arg2 attachment:(id)arg3 messageId:(id)arg4 offlineThreadingId:(id)arg5 pushSource:(unsigned)arg6 supportsPreview:(char)arg7 isLaunchedByUser:(char)arg8 threadSummary:(id)arg9 ;
-(void)_continueProcessingSyncMessage:(id)arg1 withFetchedThreadSummary:(id)arg2 ;
-(void)_playSoundForMessageIfNeededForMessageWithTimestamp:(unsigned long long)arg1 attachment:(id)arg2 threadSummary:(id)arg3 ;
-(void)_showInAppNotificationIfNeededForThread:(id)arg1 message:(id)arg2 onSameThreadView:(char)arg3 onInbox:(char)arg4 pickingMedia:(char)arg5 pushSource:(unsigned)arg6 ;
-(void)_postLocalNotificationForMessageIfNeeded:(id)arg1 threadSummary:(id)arg2 ;
-(void)handleAPNSMessage:(id)arg1 threadSummary:(id)arg2 supportsPreview:(char)arg3 userActionInfo:(id)arg4 fetchCompletionBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)handleSyncMessage:(id)arg1 ;
-(void)configureWithNextHandler:(id)arg1 ;
-(id)initWithInAppNotificationManager:(id)arg1 navigationCoordinator:(id)arg2 threadStatusManager:(id)arg3 soundController:(id)arg4 notificationPreviewGenerator:(id)arg5 userStore:(id)arg6 application:(id)arg7 appProperties:(id)arg8 authManager:(id)arg9 pushRegistrar:(id)arg10 userSettings:(id)arg11 threadSet:(id)arg12 pushLogger:(id)arg13 pushMessageReceivedListener:(id)arg14 threadStore:(id)arg15 queue:(id)arg16 ;
@end

