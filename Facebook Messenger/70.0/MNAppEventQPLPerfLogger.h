/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:57 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNAppEventProcessing.h>

@protocol OS_dispatch_queue;
@class NSObject, MNQPLEventLogger, NSString;

@interface MNAppEventQPLPerfLogger : NSObject <MNAppEventProcessing> {

	NSObject*<OS_dispatch_queue> _queue;
	MNQPLEventLogger* _startupEventLogger;
	MNQPLEventLogger* _configSetupLogger;
	MNQPLEventLogger* _backgroundServicesLogger;
	MNQPLEventLogger* _foregroundServicesLogger;
	MNQPLEventLogger* _restoreStateLogger;
	int _startupType;
	Class _firstPresentedViewControllerClass;
	char _isActive;
	char _hasBeenActive;
	Class _inboxVCClass;
	Class _placeholderVCClass;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)shouldUseQPLPerfLogger;
+(void)setShouldUseQPLPerfLogger:(char)arg1 ;
-(id)initWithQueue:(id)arg1 inboxViewControllerClass:(Class)arg2 placeholderViewControllerClass:(Class)arg3 qplLogger:(id)arg4 ;
-(void)processEvent:(id)arg1 ;
-(void)_handleMain:(long long)arg1 ;
-(void)_handleDidBecomeActive:(long long)arg1 ;
-(void)_handleWillEnterForeground:(long long)arg1 ;
-(void)_handleDidEnterBackground:(long long)arg1 ;
-(void)_handleWillResignActive:(long long)arg1 ;
-(void)_handleUserSetupFlowBegin:(long long)arg1 ;
-(void)_handleFirstViewController:(Class)arg1 presented:(long long)arg2 ;
-(void)_handleNavigationFromViewController:(id)arg1 toViewController:(id)arg2 timeInterval:(long long)arg3 ;
-(void)_handleThreadListDisplayed:(long long)arg1 ;
-(char)_isStartingUp;
-(void)_handleDidFinishLaunching:(long long)arg1 ;
-(void)_handleConfigSetupBegin:(long long)arg1 ;
-(void)_handleConfigSetupEnd:(long long)arg1 ;
-(void)_handleBackgroundServicesBegin:(long long)arg1 ;
-(void)_handleBackgroundServicesEnd:(long long)arg1 ;
-(void)_handleForegroundServicesBegin:(long long)arg1 ;
-(void)_handleForegroundServicesEnd:(long long)arg1 ;
-(void)_handleUserSetupFlowEnd:(long long)arg1 ;
-(void)_handleRestoreStateBegin:(long long)arg1 ;
-(void)_handleRestoreStateEnd:(long long)arg1 ;
-(void)_handleMQTTConnecting:(long long)arg1 ;
-(void)_handleMQTTConnected:(long long)arg1 ;
-(void)_handleMQTTDisconnected:(long long)arg1 ;
-(void)_handleDeltaRequest:(long long)arg1 succeeded:(char)arg2 ;
-(void)_handleQueueCreation:(long long)arg1 succeeded:(char)arg2 ;
-(void)_handleNavigationTriggeredByPushHandler:(long long)arg1 ;
-(void)_handleThreadListLoaded:(long long)arg1 succeeded:(char)arg2 ;
-(void)_beginStartupEventAtTimestamp:(long long)arg1 ;
-(void)_addStartupNote:(int)arg1 timestamp:(long long)arg2 ;
-(void)_endStartupEventAtTimestamp:(long long)arg1 ;
-(void)_cancelStartupEvent;
-(char)_isWaitingForInboxDisplay;
@end

