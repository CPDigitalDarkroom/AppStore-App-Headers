/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:37 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TFNDataViewController, T1StatusDwellCache, T1StatusDwellEventHandler, TFNTimer;

@interface T1StatusDwellManager : NSObject {

	char _active;
	TFNDataViewController* _controller;
	T1StatusDwellCache* _cache;
	T1StatusDwellEventHandler* _dwellEventHandler;
	TFNTimer* _cellVisibilityHeartbeatTimer;

}

@property (nonatomic,retain) T1StatusDwellCache * cache;                                 //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) T1StatusDwellEventHandler * dwellEventHandler;              //@synthesize dwellEventHandler=_dwellEventHandler - In the implementation block
@property (nonatomic,retain) TFNTimer * cellVisibilityHeartbeatTimer;                    //@synthesize cellVisibilityHeartbeatTimer=_cellVisibilityHeartbeatTimer - In the implementation block
@property (nonatomic,__weak,readonly) TFNDataViewController * controller;                //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) id<T1StatusViewEventHandler> eventHandler; 
@property (getter=isActive,nonatomic,readonly) char active;                              //@synthesize active=_active - In the implementation block
+(char)shouldAnimateSlideshowForAccount:(id)arg1 status:(id)arg2 ;
+(double)heartbeatDuration;
-(void)statusCellDidUpdate:(id)arg1 ;
-(void)willEndDisplayingStatusCell:(id)arg1 ;
-(char)shouldDwellForMedia:(id)arg1 ;
-(char)shouldAnimateSlideshow:(id)arg1 ;
-(void)willDisplayStatusCell:(id)arg1 ;
-(void)didDisplayStatusCell:(id)arg1 withVisiblePercentage:(float)arg2 cellState:(unsigned)arg3 ;
-(void)didEndDisplayingStatusCell:(id)arg1 ;
-(unsigned)currentSlideshowImageIndexForStatus:(id)arg1 ;
-(void)configureWithAccount:(id)arg1 dataViewController:(id)arg2 ;
-(void)applicationDidEnterForeground:(id)arg1 ;
-(char)_isStatusCellCandidateForDwell:(id)arg1 ;
-(void)_didDisplayStatusCell:(id)arg1 withVisiblePercentage:(float)arg2 cellState:(unsigned)arg3 ;
-(void)_willEndDisplayingStatusCell:(id)arg1 ;
-(void)_didEndDisplayingStatusCell:(id)arg1 ;
-(void)_suspendCellVisibilityHeartbeatTimerIfNeeded;
-(void)_cellVisibilityHeartbeat;
-(T1StatusDwellEventHandler *)dwellEventHandler;
-(void)setDwellEventHandler:(T1StatusDwellEventHandler *)arg1 ;
-(TFNTimer *)cellVisibilityHeartbeatTimer;
-(void)setCellVisibilityHeartbeatTimer:(TFNTimer *)arg1 ;
-(void)_resumeCellVisibilityHeartbeatTimerIfNeeded;
-(void)_suspendCellVisibilityHeartbeatTimer;
-(id<T1StatusViewEventHandler>)eventHandler;
-(void)dealloc;
-(id)init;
-(char)isActive;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)cleanUp;
-(TFNDataViewController *)controller;
-(T1StatusDwellCache *)cache;
-(void)setCache:(T1StatusDwellCache *)arg1 ;
-(void)setEventHandler:(id<T1StatusViewEventHandler>)arg1 ;
@end

