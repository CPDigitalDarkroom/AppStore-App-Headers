/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:34 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, MPVolumeView, NSHashTable, NSTimer;

@interface SPTGaiaAirplayManager : NSObject {

	char _available;
	char _active;
	char _expectedAirplayKeyWindowChange;
	NSString* _activeDeviceName;
	MPVolumeView* _volumeView;
	NSHashTable* _observers;
	NSTimer* _checkAirplayTimer;

}

@property (assign,getter=isAvailable,nonatomic) char available;                //@synthesize available=_available - In the implementation block
@property (assign,getter=isActive,nonatomic) char active;                      //@synthesize active=_active - In the implementation block
@property (nonatomic,retain) NSString * activeDeviceName;                      //@synthesize activeDeviceName=_activeDeviceName - In the implementation block
@property (nonatomic,retain) MPVolumeView * volumeView;                        //@synthesize volumeView=_volumeView - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                          //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) char expectedAirplayKeyWindowChange;              //@synthesize expectedAirplayKeyWindowChange=_expectedAirplayKeyWindowChange - In the implementation block
@property (nonatomic,retain) NSTimer * checkAirplayTimer;                      //@synthesize checkAirplayTimer=_checkAirplayTimer - In the implementation block
-(void)wirelessRouteActiveDidChange:(id)arg1 ;
-(void)routeChanged:(id)arg1 ;
-(void)windowDidBecomeKeyNotification:(id)arg1 ;
-(void)presentAirplayPickerFromView:(id)arg1 ;
-(void)setExpectedAirplayKeyWindowChange:(char)arg1 ;
-(void)presentAirplayPicker;
-(NSTimer *)checkAirplayTimer;
-(void)setActiveDevice;
-(void)setActiveDeviceName:(NSString *)arg1 ;
-(char)expectedAirplayKeyWindowChange;
-(void)checkAirplayTimerFired:(id)arg1 ;
-(void)setCheckAirplayTimer:(NSTimer *)arg1 ;
-(void)pullToLocalDevice;
-(NSString *)activeDeviceName;
-(MPVolumeView *)volumeView;
-(char)isAvailable;
-(void)dealloc;
-(id)init;
-(char)isActive;
-(void)invalidate;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setActive:(char)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)setAvailable:(char)arg1 ;
-(void)setVolumeView:(MPVolumeView *)arg1 ;
-(void)wirelessRoutesAvailableDidChange:(id)arg1 ;
@end

