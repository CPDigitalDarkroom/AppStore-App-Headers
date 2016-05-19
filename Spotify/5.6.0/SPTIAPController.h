/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:36 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, SPTIAPSimulationSettings;


@protocol SPTIAPController <NSObject>
@property (nonatomic,copy,readonly) NSArray * availableProducts; 
@property (nonatomic,readonly) char canMakePurchases; 
@property (nonatomic,copy,readonly) NSArray * unresolvedTransactions; 
@property (nonatomic,readonly) SPTIAPSimulationSettings * simulationSettings; 
@required
-(void)updateAvailableProducts;
-(SPTIAPSimulationSettings *)simulationSettings;
-(NSArray *)unresolvedTransactions;
-(char)purchaseProduct:(id)arg1;
-(id)errorForUnresolvedTransaction:(id)arg1;
-(char)productIncludes30DayTrialPeriod:(id)arg1;
-(char)canMakePurchases;
-(void)addObserver:(id)arg1;
-(void)removeObserver:(id)arg1;
-(NSArray *)availableProducts;

@end

