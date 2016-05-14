/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:44 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBWebRTCCallabilityAwareCallControllerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNThreadPresenceListener.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNWebRTCCallPickerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBClassProvidable.h>

@protocol MNWebRTCMessagesViewCallControllerDelegate;
@class FBWebRTCCallabilityAwareCallController, FBWebRTCCallButtonImageProvider, MNWebRTCMessagesViewGroupCallStarter, FBExperimentManager, MNConfigManager, FBWebRTCSynchronousContactsRetriever, FBMUser, MNUserSettings, UIBarButtonItem, FBWebRTCCallButton, UIButton, FBWebRTCRecentCallLog, FBWebRTCMultiwayLargeGroupsExperimentContext, MNThreadPresenceTracker, FBMThreadKey, MNWebRTCCallPicker, MNNavigationCoordinator, MNEphemeralEntryPointExperimentContext, FBWebRTCFullScreenToolTipController, FBTimer, FBWebRTCCallLogActionHandler, NSString;

@interface MNWebRTCMessagesViewCallController : NSObject <FBWebRTCCallabilityAwareCallControllerDelegate, MNThreadPresenceListener, MNWebRTCCallPickerDelegate, FBClassProvidable> {

	FBWebRTCCallabilityAwareCallController* _callController;
	FBWebRTCCallButtonImageProvider* _callButtonImageProvider;
	MNWebRTCMessagesViewGroupCallStarter* _groupCallStarter;
	FBExperimentManager* _experimentManager;
	MNConfigManager* _configManager;
	FBWebRTCSynchronousContactsRetriever* _synchronousContactsRetriever;
	FBMUser* _otherUser;
	MNUserSettings* _userSettings;
	UIBarButtonItem* _audioButtonItem;
	UIBarButtonItem* _videoButtonItem;
	UIBarButtonItem* _webRTCCombinedButtonItem;
	FBWebRTCCallButton* _audioCallButton;
	FBWebRTCCallButton* _videoCallButton;
	UIButton* _webRTCCombinedButton;
	FBWebRTCRecentCallLog* _callLog;
	FBWebRTCMultiwayLargeGroupsExperimentContext* _groupSizeContext;
	char _isRtcConferencingRingingEnabled;
	char _isRtcConferencingCallingEnabled;
	MNThreadPresenceTracker* _threadPresenceTracker;
	char _instantVideoSupported;
	FBMThreadKey* _threadKey;
	char _isMultiwayCallOngoingForThread;
	MNWebRTCCallPicker* _callPicker;
	MNNavigationCoordinator* _navigationCoordinator;
	MNEphemeralEntryPointExperimentContext* _ephemeralEntryPointExperimentContext;
	FBWebRTCFullScreenToolTipController* _tooltipController;
	FBTimer* _showTooltipTimer;
	char _canShowTooltip;
	char _compactMode;
	char _messagesViewVisible;
	FBWebRTCCallLogActionHandler* _callLogActionHandler;
	id<MNWebRTCMessagesViewCallControllerDelegate> _delegate;

}

@property (nonatomic,readonly) FBWebRTCCallLogActionHandler * callLogActionHandler;                       //@synthesize callLogActionHandler=_callLogActionHandler - In the implementation block
@property (nonatomic,readonly) char isOtherUserCallable; 
@property (assign,nonatomic,__weak) id<MNWebRTCMessagesViewCallControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isCompactMode,nonatomic) char compactMode;                                       //@synthesize compactMode=_compactMode - In the implementation block
@property (assign,getter=isMessagesViewVisible,nonatomic) char messagesViewVisible;                       //@synthesize messagesViewVisible=_messagesViewVisible - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithCallController:(id)arg1 callButtonImageProvider:(id)arg2 experimentManager:(id)arg3 callLogActionHandler:(id)arg4 synchronousContactsRetriever:(id)arg5 callLog:(id)arg6 configManager:(id)arg7 threadPresenceTracker:(id)arg8 peoplePickerViewControllerProvider:(id)arg9 userStore:(id)arg10 navigationCoordinator:(id)arg11 userSettings:(id)arg12 userSession:(id)arg13 ;
-(void)_didPressAudioButton;
-(void)_didPressVideoButton;
-(void)_updateButtonSizes;
-(void)_setCallButtonsWidth:(float)arg1 ;
-(void)_startTooltipTimer;
-(void)_cancelModalUI;
-(void)_stopTooltip;
-(void)_hideTooltipIfNeeded;
-(char)_shouldUseCombinedButton;
-(void)_initWebRTCCombinedButtonItemIfNeeded;
-(CGRect)_rtcCombinedButtonRectFromView:(id)arg1 ;
-(id)_callAnalyticsExtraData;
-(char)_isInstantVideoTooltipSupportedForThread;
-(char)_canShowInstantTooltip;
-(void)_showTooltipIfNeeded;
-(char)_isCoPresent;
-(void)_startTooltipTimerComplete;
-(void)_showInstantVideoTooltipIfNeeded;
-(char)_isGroupCallingEnabled;
-(void)_showGroupCallingTooltipIfNeeded;
-(CGPoint)_tooltipScreenPositionForTargetView:(id)arg1 ;
-(void)_showGroupCallingTooltip;
-(void)_didTapWebRTCCombinedButton;
-(id)_combinedRTCButtonImage;
-(void)callabilityAwareCallControllerOtherUserCallabilityDidChange:(id)arg1 ;
-(void)webRTCCallPicker:(id)arg1 didSelectCallType:(unsigned)arg2 ;
-(id)rencentContacts;
-(char)isCompactMode;
-(char)isMessagesViewVisible;
-(void)threadPresenceDidChange;
-(void)configureWithThreadSummary:(id)arg1 users:(id)arg2 barButtonWidth:(float)arg3 ;
-(void)setMessagesViewVisible:(char)arg1 ;
-(char)isOtherUserCallable;
-(void)presentRTCCallOptionPickerInMessageView:(id)arg1 ;
-(char)hasButtonsForCurrentMessageThread;
-(void)setCompactMode:(char)arg1 ;
-(void)dismissRTCCallOptionPickerIfNeeded;
-(void)willChangeButtonPosition;
-(FBWebRTCCallLogActionHandler *)callLogActionHandler;
-(char)shouldCheckGroupCallStatus;
-(void)updateGroupCallStatus:(char)arg1 withServerInfoData:(id)arg2 ;
-(void)tearDown;
-(void)setDelegate:(id<MNWebRTCMessagesViewCallControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNWebRTCMessagesViewCallControllerDelegate>)delegate;
-(void)_updateButtons;
-(id)barButtonItems;
-(void)refreshUI;
@end

