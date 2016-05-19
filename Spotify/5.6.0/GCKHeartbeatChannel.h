/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/GCKCastChannel.h>

@protocol GCKHeartbeatChannelDelegate;
@class NSTimer;

@interface GCKHeartbeatChannel : GCKCastChannel {

	NSTimer* _heartbeatTimer;
	NSTimer* _inactivityTimer;
	double _heartbeatInterval;
	double _inactivityTimeout;
	id<GCKHeartbeatChannelDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<GCKHeartbeatChannelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)didDisconnect;
-(void)didReceiveTextMessage:(id)arg1 ;
-(id)initWithNamespace:(id)arg1 ;
-(void)stopHeartbeat;
-(void)resetHeartbeat;
-(void)startHeartbeatWithInactivityTimeout:(double)arg1 ;
-(void)scheduleTimers;
-(char)sendPong;
-(char)sendPing;
-(void)heartbeatTimerDidFire;
-(void)inactivityTimerDidFire;
-(void)setDelegate:(id<GCKHeartbeatChannelDelegate>)arg1 ;
-(id)init;
-(id<GCKHeartbeatChannelDelegate>)delegate;
@end

