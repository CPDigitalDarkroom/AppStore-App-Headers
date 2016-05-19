/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:33 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPSessionObserver.h>

@protocol OS_dispatch_queue;
@class NSArray, NSObject, NSString;

@interface SPTLoggedIn : NSObject <SPSessionObserver> {

	char _loggedIn;
	char _online;
	NSArray* _queue;
	unsigned _state;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,readonly) char loggedIn;                                         //@synthesize loggedIn=_loggedIn - In the implementation block
@property (nonatomic,readonly) char online;                                           //@synthesize online=_online - In the implementation block
@property (nonatomic,retain) NSArray * queue;                                         //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) unsigned state;                                          //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)didSuccessfullyLoginNotification:(id)arg1 ;
+(void)didSuccessfullyLogoutNotification:(id)arg1 ;
+(void)onlineStatusChangedNotification:(id)arg1 ;
+(void)do:(/*^block*/id)arg1 withLabel:(id)arg2 forStates:(int)arg3 ;
+(id)sharedInstance;
+(void)load;
-(void)loginNotificationReceived;
-(void)logoutNotificationReceived;
-(void)onlineStatusChangedNotificationReceived:(char)arg1 ;
-(id)initLoggedOut;
-(void)executeQueueNow;
-(void)schedule:(/*^block*/id)arg1 withLabel:(id)arg2 forStates:(int)arg3 ;
-(char)loggedIn;
-(char)online;
-(NSArray *)queue;
-(void)setQueue:(NSArray *)arg1 ;
-(void)dealloc;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

