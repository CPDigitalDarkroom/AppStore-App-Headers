/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:36 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol InAppPurchaseController <NSObject>
@required
-(void)purchasePremiumProductWithCallback:(/*^block*/id)arg1;
-(id)localizedPremiumProductPrice;
-(char)isPremiumProductAvailable;
-(char)availablePremiumProductIncludes30DayTrial;
-(void)checkPremiumProductAvailabilityWithCallback:(/*^block*/id)arg1;
-(void)purchasePremiumProduct;
-(void)clearSettings;

@end

