/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:41 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SPTLocalSettings;
@class NSHashTable;

@interface SPTPartyNearbyPermissionManager : NSObject {

	id<SPTLocalSettings> _localSettings;
	NSHashTable* _observers;

}

@property (assign,getter=isNearbyEnabled,nonatomic) char nearbyEnabled; 
@property (nonatomic,retain) id<SPTLocalSettings> localSettings;                     //@synthesize localSettings=_localSettings - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                //@synthesize observers=_observers - In the implementation block
-(id<SPTLocalSettings>)localSettings;
-(void)setLocalSettings:(id<SPTLocalSettings>)arg1 ;
-(id)initWithLocalSettings:(id)arg1 ;
-(char)isNearbyEnabled;
-(void)setNearbyEnabled:(char)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
@end

