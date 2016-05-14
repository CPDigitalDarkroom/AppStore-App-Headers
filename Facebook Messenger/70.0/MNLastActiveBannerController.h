/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:44 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBClassProvidable.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNPresenceUpdateListening.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNThreadPresenceListener.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNThreadViewModelConfigurable.h>

@protocol FBClock, MNLastActiveBannerControllerDelegate;
@class MNMessagesTitleView, UINavigationBar, MNPresenceSubscriptionService, MNThreadPresenceTracker, FBAnalytics, MNLastActiveBannerPresenceState, FBDelayer, MNMessagesTitleViewConfiguration, FBExperimentManager, FBWebRTCInstantVideoButtonExperiment, MNThreadViewModel, FBMUser, MNPresence, MNPageResponsivenessViewModel, FBTimer, NSString;

@interface MNLastActiveBannerController : NSObject <FBClassProvidable, MNPresenceUpdateListening, MNThreadPresenceListener, MNThreadViewModelConfigurable> {

	MNMessagesTitleView* _titleView;
	UINavigationBar* _navigationBar;
	MNPresenceSubscriptionService* _presenceService;
	MNThreadPresenceTracker* _threadPresenceTracker;
	FBAnalytics* _analytics;
	id<FBClock> _clock;
	MNLastActiveBannerPresenceState* _presenceDisplayState;
	FBDelayer* _transitionFromClientTypeToPresenceDelayer;
	MNMessagesTitleViewConfiguration* _titleViewConfig;
	FBExperimentManager* _experimentManager;
	FBWebRTCInstantVideoButtonExperiment* _instantVideoButtonExperiment;
	id<MNLastActiveBannerControllerDelegate> _delegate;
	MNThreadViewModel* _threadViewModel;
	FBMUser* _otherUser;
	MNPresence* _presenceValue;
	MNPageResponsivenessViewModel* _pageResponsivenessViewModel;
	FBTimer* _labelUpdateTimer;
	FBTimer* _transitionFromClientTypeToPresenceTimer;

}

@property (nonatomic,retain) MNThreadViewModel * threadViewModel;                                      //@synthesize threadViewModel=_threadViewModel - In the implementation block
@property (nonatomic,retain) FBMUser * otherUser;                                                      //@synthesize otherUser=_otherUser - In the implementation block
@property (nonatomic,retain) MNPresence * presenceValue;                                               //@synthesize presenceValue=_presenceValue - In the implementation block
@property (nonatomic,retain) MNPageResponsivenessViewModel * pageResponsivenessViewModel;              //@synthesize pageResponsivenessViewModel=_pageResponsivenessViewModel - In the implementation block
@property (nonatomic,retain) FBTimer * labelUpdateTimer;                                               //@synthesize labelUpdateTimer=_labelUpdateTimer - In the implementation block
@property (nonatomic,retain) FBTimer * transitionFromClientTypeToPresenceTimer;                        //@synthesize transitionFromClientTypeToPresenceTimer=_transitionFromClientTypeToPresenceTimer - In the implementation block
@property (assign,nonatomic,__weak) id<MNLastActiveBannerControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(MNThreadViewModel *)threadViewModel;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(void)setThreadViewModel:(MNThreadViewModel *)arg1 ;
-(id)initWithPresenceService:(id)arg1 threadPresenceTracker:(id)arg2 analytics:(id)arg3 clock:(id)arg4 titleViewConfig:(id)arg5 experimentManager:(id)arg6 ;
-(void)_updateViewIfNeededAnimated:(char)arg1 ;
-(void)_clearLastActiveBannerUpdateTimer;
-(void)_updateDataWithThread:(id)arg1 ;
-(FBMUser *)otherUser;
-(void)_unregisterForThreadCopresence;
-(void)setPresenceValue:(MNPresence *)arg1 ;
-(void)setPageResponsivenessViewModel:(MNPageResponsivenessViewModel *)arg1 ;
-(void)setOtherUser:(FBMUser *)arg1 ;
-(void)_resetPresenceDisplay;
-(void)_updatePresenceDisplayStateIfNeeded;
-(char)_isCopresent;
-(char)_isCopresenceInSubtitleEnabled;
-(void)_registerForThreadCopresence;
-(MNPageResponsivenessViewModel *)pageResponsivenessViewModel;
-(void)_updatePageResponsivenessIfNecessary:(id)arg1 ;
-(void)_clearTransitionTimer;
-(char)_shouldShowCopresenceInSubtitle;
-(void)_startTransitionTimerFromActiveClientTypeToPresenceIfNeeded;
-(void)_updatePresenceDisplayState:(id)arg1 ;
-(void)_scheduleLastActiveBannerUpdateTimerIfNeeded;
-(FBTimer *)transitionFromClientTypeToPresenceTimer;
-(void)_onTransitionFromClientTypeToPresenceTimerFiring;
-(void)setTransitionFromClientTypeToPresenceTimer:(FBTimer *)arg1 ;
-(FBTimer *)labelUpdateTimer;
-(void)_onUpdateTimerFiring;
-(void)setLabelUpdateTimer:(FBTimer *)arg1 ;
-(void)didReceivePresenceUpdate:(id)arg1 ;
-(void)threadPresenceDidChange;
-(void)showLastActiveBannerViewInTitleView:(id)arg1 navigationBar:(id)arg2 animated:(char)arg3 ;
-(void)hideLastActiveBannerViewAnimated:(char)arg1 ;
-(MNPresence *)presenceValue;
-(void)setDelegate:(id<MNLastActiveBannerControllerDelegate>)arg1 ;
-(id<MNLastActiveBannerControllerDelegate>)delegate;
@end

