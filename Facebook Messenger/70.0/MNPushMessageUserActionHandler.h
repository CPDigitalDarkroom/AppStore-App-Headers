/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:47 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNPushMessageChainedHandling.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNPushMessageChainedHandlingConfigurable.h>

@protocol MNAuthenticationManager, OS_dispatch_queue, MNPushMessageChainedHandling;
@class FBMThreadMessageSender, FBExperimentManager, FBWebRTCCallController, MNThreadSummaryUpdateRunningService, NSObject, NSString;

@interface MNPushMessageUserActionHandler : NSObject <MNPushMessageChainedHandling, MNPushMessageChainedHandlingConfigurable> {

	FBMThreadMessageSender* _threadMessageSender;
	id<MNAuthenticationManager> _authManager;
	FBExperimentManager* _experimentManager;
	FBWebRTCCallController* _callController;
	MNThreadSummaryUpdateRunningService* _summaryUpdateRunningService;
	NSObject*<OS_dispatch_queue> _queue;
	id<MNPushMessageChainedHandling> _nextHandler;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleAPNSMessage:(id)arg1 threadSummary:(id)arg2 supportsPreview:(char)arg3 userActionInfo:(id)arg4 fetchCompletionBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)handleSyncMessage:(id)arg1 ;
-(void)configureWithNextHandler:(id)arg1 ;
-(void)_muteThreadForThreadKey:(id)arg1 ;
-(void)_sendLikeMessageForThreadKey:(id)arg1 messageLifeTime:(int)arg2 ;
-(void)_sendReply:(id)arg1 forThreadKey:(id)arg2 messageLifeTime:(int)arg3 ;
-(void)_returnCall:(id)arg1 ;
-(void)_presentThreadMutingLocalNotificationWithThreadKey:(id)arg1 type:(id)arg2 alertBody:(id)arg3 alertAction:(id)arg4 soundName:(id)arg5 ;
-(void)_didMuteThreadWithKey:(id)arg1 until:(long long)arg2 ;
-(void)_didFailToMuteThreadWithKey:(id)arg1 withError:(id)arg2 ;
-(id)initWithThreadMessageSender:(id)arg1 summaryUpdateRunningService:(id)arg2 authManager:(id)arg3 experimentManager:(id)arg4 callController:(id)arg5 queue:(id)arg6 ;
@end

