/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:44 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMStickerManager, MNStickerStorePresenter, FBMStickerPackFetcher, FBUserSession, MNPromoteStickerInstallExperimentContext;

@interface MNStickerPackViewer : NSObject {

	FBMStickerManager* _stickerManager;
	MNStickerStorePresenter* _stickerStorePresenter;
	FBMStickerPackFetcher* _stickerPackFetcher;
	FBUserSession* _session;
	MNPromoteStickerInstallExperimentContext* _promoteStickerInstallExperimentContext;

}
-(char)_shouldEnableStickerAttribution;
-(char)_shouldEnableTapToOpenStickerPack;
-(void)_initPromoteStickerInstallContextIfNecessary;
-(void)_logExposureForPromoteStickerInstallExpriment;
-(id)initWithStickerManager:(id)arg1 stickerStorePresenter:(id)arg2 session:(id)arg3 ;
-(void)viewPackForSticker:(id)arg1 presentationBlock:(/*^block*/id)arg2 ;
-(char)canViewStickerPackForSticker:(id)arg1 ;
@end

