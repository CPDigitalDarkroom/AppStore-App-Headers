/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TFNDockableViewGestureHandlerProtocol <NSObject>
@property (nonatomic,readonly) int dockState; 
@required
-(void)setDockedDockableViewHidden:(char)arg1 animated:(char)arg2;
-(void)dockDockableViewWithCompletionHandler:(/*^block*/id)arg1;
-(void)fullscreenDockableViewWithCompletionHandler:(/*^block*/id)arg1;
-(void)dismissWithCompletionHandler:(/*^block*/id)arg1;
-(int)dockState;

@end

