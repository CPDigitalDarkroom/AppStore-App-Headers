/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:19 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFNDirectMessageContextHeartbeartObserver.h>
#import <Twitter/T1DirectMessageRefreshTimerDelegate.h>
#import <Twitter/TFNTwitterPushNotificationAmbientNotificationStrategy.h>

@class TFNTwitterAccount, T1DirectMessageRefreshTimer, NSMutableArray, T1DirectMessageConversation, NSString;

@interface T1DirectMessageRefreshController : NSObject <TFNDirectMessageContextHeartbeartObserver, T1DirectMessageRefreshTimerDelegate, TFNTwitterPushNotificationAmbientNotificationStrategy> {

	TFNTwitterAccount* _activeAccount;
	T1DirectMessageRefreshTimer* _timer;
	NSMutableArray* _pendingAmbientNotifications;
	unsigned _activeViewState;
	T1DirectMessageConversation* _activeConversation;

}

@property (nonatomic,retain) TFNTwitterAccount * activeAccount;                             //@synthesize activeAccount=_activeAccount - In the implementation block
@property (nonatomic,retain) T1DirectMessageRefreshTimer * timer;                           //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingAmbientNotifications;                  //@synthesize pendingAmbientNotifications=_pendingAmbientNotifications - In the implementation block
@property (nonatomic,readonly) id<TFNDirectMessageContext> context; 
@property (assign,nonatomic) unsigned activeViewState;                                      //@synthesize activeViewState=_activeViewState - In the implementation block
@property (nonatomic,retain) T1DirectMessageConversation * activeConversation;              //@synthesize activeConversation=_activeConversation - In the implementation block
@property (getter=isRefreshing,nonatomic,readonly) char refreshing; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDirectMessageRefreshController;
-(void)_activeAccountDidChange:(id)arg1 ;
-(void)_contextDidBecomeActive:(id)arg1 ;
-(void)_inboxDidRefresh:(id)arg1 ;
-(T1DirectMessageConversation *)activeConversation;
-(char)_inActiveApplicationState;
-(void)_refreshFromPolling;
-(NSMutableArray *)pendingAmbientNotifications;
-(void)refreshWithLoadSource:(int)arg1 ;
-(void)_clearPendingAmbientNotifications;
-(void)_suspendPolling;
-(void)_resumePolling;
-(unsigned)activeViewState;
-(void)_processPendingAmbientNotifications;
-(char)_canRestartRefreshTimer;
-(void)_notifyDidResumeNotifications;
-(void)_notifyDidSuspendNotifications;
-(void)heartbeatWithContext:(id)arg1 ;
-(void)refreshTimerDidFire:(id)arg1 ;
-(void)enqueueAmbientPushNotification:(id)arg1 tapHandler:(/*^block*/id)arg2 account:(id)arg3 ;
-(void)setActiveViewState:(unsigned)arg1 activeConversation:(id)arg2 ;
-(void)setPendingAmbientNotifications:(NSMutableArray *)arg1 ;
-(void)setActiveViewState:(unsigned)arg1 ;
-(void)setActiveConversation:(T1DirectMessageConversation *)arg1 ;
-(void)dealloc;
-(id)init;
-(id<TFNDirectMessageContext>)context;
-(void)start;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)setTimer:(T1DirectMessageRefreshTimer *)arg1 ;
-(T1DirectMessageRefreshTimer *)timer;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(char)isRefreshing;
-(TFNTwitterAccount *)activeAccount;
-(void)setActiveAccount:(TFNTwitterAccount *)arg1 ;
@end

