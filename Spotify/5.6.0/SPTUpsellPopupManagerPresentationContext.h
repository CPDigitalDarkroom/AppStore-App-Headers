/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:47 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SPTUpsellPopupControllerDataSource;
@class SPTUpsellPopupController;

@interface SPTUpsellPopupManagerPresentationContext : NSObject {

	SPTUpsellPopupController* _popupController;
	id<SPTUpsellPopupControllerDataSource> _dataSource;

}

@property (nonatomic,readonly) SPTUpsellPopupController * popupController;                     //@synthesize popupController=_popupController - In the implementation block
@property (nonatomic,readonly) id<SPTUpsellPopupControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
+(id)contextWithPopupController:(id)arg1 dataSource:(id)arg2 ;
-(SPTUpsellPopupController *)popupController;
-(id<SPTUpsellPopupControllerDataSource>)dataSource;
@end

