/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:41 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTPartyNearbyUserManagerObserver.h>
#import <Spotify/SPTPartyNearbyPermissionManagerObserver.h>

@protocol SPTPartyNearbyUsersBarViewModelDelegate, SPTPartyNearbyUserManager;
@class SPTPartyNearbyPermissionManager, NSArray, NSString;

@interface SPTPartyNearbyUsersBarViewModel : NSObject <SPTPartyNearbyUserManagerObserver, SPTPartyNearbyPermissionManagerObserver> {

	id<SPTPartyNearbyUsersBarViewModelDelegate> _delegate;
	unsigned _overflowCount;
	id<SPTPartyNearbyUserManager> _nearbyUserManager;
	SPTPartyNearbyPermissionManager* _nearbyPermissionManager;

}

@property (assign,nonatomic,__weak) id<SPTPartyNearbyUsersBarViewModelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned overflowCount;                                                   //@synthesize overflowCount=_overflowCount - In the implementation block
@property (nonatomic,readonly) NSArray * nearbyUsers; 
@property (nonatomic,retain) id<SPTPartyNearbyUserManager> nearbyUserManager;                          //@synthesize nearbyUserManager=_nearbyUserManager - In the implementation block
@property (nonatomic,retain) SPTPartyNearbyPermissionManager * nearbyPermissionManager;                //@synthesize nearbyPermissionManager=_nearbyPermissionManager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SPTPartyNearbyUserManager>)nearbyUserManager;
-(void)nearbyUserManager:(id)arg1 foundNearbyUser:(id)arg2 ;
-(void)nearbyUserManager:(id)arg1 lostNearbyUserWithDisplayName:(id)arg2 ;
-(void)nearbyUserManager:(id)arg1 userStateDidChange:(id)arg2 ;
-(void)setNearbyUserManager:(id<SPTPartyNearbyUserManager>)arg1 ;
-(SPTPartyNearbyPermissionManager *)nearbyPermissionManager;
-(void)setNearbyPermissionManager:(SPTPartyNearbyPermissionManager *)arg1 ;
-(char)isNearbyEnabled;
-(void)nearbyPermissionManager:(id)arg1 nearbyEnablednessChanged:(char)arg2 ;
-(char)shouldShowPlusCell;
-(NSArray *)nearbyUsers;
-(unsigned)overflowCount;
-(char)shouldShowOverflowAtIndex:(unsigned)arg1 ;
-(id)stringForOverflowLabelForCount:(unsigned)arg1 ;
-(char)shouldShowPlusCellAtIndex:(unsigned)arg1 ;
-(id)initWithNearbyUserManager:(id)arg1 nearbyPermissionManager:(id)arg2 ;
-(void)setOverflowCount:(unsigned)arg1 ;
-(void)setDelegate:(id<SPTPartyNearbyUsersBarViewModelDelegate>)arg1 ;
-(id<SPTPartyNearbyUsersBarViewModelDelegate>)delegate;
@end

