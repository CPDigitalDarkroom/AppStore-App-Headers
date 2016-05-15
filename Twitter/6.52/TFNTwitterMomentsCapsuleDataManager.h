/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:50 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TFNTwitterMomentCapsule, NSArray;


@protocol TFNTwitterMomentsCapsuleDataManager <NSObject>
@property (nonatomic,retain) TFNTwitterMomentCapsule * capsule; 
@property (nonatomic,retain) NSArray * pivotList; 
@property (nonatomic,readonly) id<TFNTwitterMomentSportEventsDataManager> sportEventsDataManager; 
@required
-(id<TFNTwitterMomentSportEventsDataManager>)sportEventsDataManager;
-(void)addCapsuleListener:(id)arg1;
-(void)fetchCapsule;
-(void)hydrateMomentCapsule;
-(void)fetchCapsulePivotList;
-(void)updateMomentSubscription;
-(void)setCapsule:(id)arg1;
-(TFNTwitterMomentCapsule *)capsule;
-(void)setPivotList:(id)arg1;
-(NSArray *)pivotList;
-(void)removeCapsuleListener:(id)arg1;

@end

