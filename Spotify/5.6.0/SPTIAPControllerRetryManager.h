/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:36 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTOfflineModeStateObserver.h>

@protocol SPTIAPControllerRetryManagerDelegate, SPTOfflineModeState;
@class NSDate, NSTimer, NSString;

@interface SPTIAPControllerRetryManager : NSObject <SPTOfflineModeStateObserver> {

	id<SPTIAPControllerRetryManagerDelegate> _delegate;
	NSDate* _retryDate;
	NSTimer* _retryTimer;
	id<SPTOfflineModeState> _offlineState;
	double _timeInterval;
	double _initialDelay;
	double _maximumDelay;
	double _backoffMultiplier;

}

@property (assign,nonatomic,__weak) id<SPTIAPControllerRetryManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSDate * retryDate;                                                      //@synthesize retryDate=_retryDate - In the implementation block
@property (nonatomic,retain) NSTimer * retryTimer;                                                  //@synthesize retryTimer=_retryTimer - In the implementation block
@property (assign,nonatomic) double timeInterval;                                                   //@synthesize timeInterval=_timeInterval - In the implementation block
@property (nonatomic,retain) id<SPTOfflineModeState> offlineState;                                  //@synthesize offlineState=_offlineState - In the implementation block
@property (assign,nonatomic) double initialDelay;                                                   //@synthesize initialDelay=_initialDelay - In the implementation block
@property (assign,nonatomic) double maximumDelay;                                                   //@synthesize maximumDelay=_maximumDelay - In the implementation block
@property (assign,nonatomic) double backoffMultiplier;                                              //@synthesize backoffMultiplier=_backoffMultiplier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)offlineModeState:(id)arg1 updated:(char)arg2 ;
-(id<SPTOfflineModeState>)offlineState;
-(void)setOfflineState:(id<SPTOfflineModeState>)arg1 ;
-(id)initWithOfflineState:(id)arg1 initialDelay:(double)arg2 backoffMultiplier:(double)arg3 maximumDelay:(double)arg4 ;
-(void)resetRetryTimer;
-(id)retryDateForCurrentTimeInterval;
-(void)setRetryDate:(NSDate *)arg1 ;
-(NSDate *)retryDate;
-(void)notifyIfRequirementsAreMet;
-(void)notifyAndPrepareForNextIteration;
-(double)nextTimeInterval;
-(double)backoffMultiplier;
-(double)maximumDelay;
-(id)initWithOfflineState:(id)arg1 ;
-(void)startRetryTimer;
-(void)setMaximumDelay:(double)arg1 ;
-(void)setBackoffMultiplier:(double)arg1 ;
-(void)setDelegate:(id<SPTIAPControllerRetryManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<SPTIAPControllerRetryManagerDelegate>)delegate;
-(double)timeInterval;
-(void)setTimeInterval:(double)arg1 ;
-(void)applicationDidBecomeActive;
-(void)timerDidFire:(id)arg1 ;
-(NSTimer *)retryTimer;
-(void)setRetryTimer:(NSTimer *)arg1 ;
-(double)initialDelay;
-(void)setInitialDelay:(double)arg1 ;
@end

