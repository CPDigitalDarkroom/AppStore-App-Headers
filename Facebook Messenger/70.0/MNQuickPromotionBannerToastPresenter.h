/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:47 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNQuickPromotionBannerControllerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBToastPresentationListener.h>

@protocol MNQuickPromotionBannerToastPresenterDelegate;
@class FBQuickPromotionCoordinator, FBToastPresenter, NSString, MNQuickPromotionBannerController, FBToast, FBImageDownloader, MNQuickPromotionBannerView, MNQuickPromotionBannerArrowLocation;

@interface MNQuickPromotionBannerToastPresenter : NSObject <MNQuickPromotionBannerControllerDelegate, FBToastPresentationListener> {

	FBQuickPromotionCoordinator* _quickPromotionCoordinator;
	FBToastPresenter* _toastPresenter;
	NSString* _toastTag;
	MNQuickPromotionBannerController* _currentQuickPromotionBannerController;
	FBToast* _currentToast;
	char _updatingToBannerVisible;
	char _currentToastHasAppeared;
	unsigned _toastDisplayStrategy;
	FBImageDownloader* _imageDownloader;
	char _hasBannerLoadedToShow;
	char _bannerVisible;
	id<MNQuickPromotionBannerToastPresenterDelegate> _delegate;

}

@property (nonatomic,readonly) char hasBannerLoadedToShow;                                                  //@synthesize hasBannerLoadedToShow=_hasBannerLoadedToShow - In the implementation block
@property (nonatomic,readonly) char bannerVisible;                                                          //@synthesize bannerVisible=_bannerVisible - In the implementation block
@property (nonatomic,readonly) MNQuickPromotionBannerView * bannerView; 
@property (assign,nonatomic,__weak) id<MNQuickPromotionBannerToastPresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) MNQuickPromotionBannerArrowLocation * bannerArrowLocation; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)inboxQuickPromotionBannerToastPresenterWithToastPresenter:(id)arg1 imageDownloader:(id)arg2 ;
+(id)threadViewQuickPromotionBannerToastPresenterWithToastPresenter:(id)arg1 imageDownloader:(id)arg2 ;
+(id)composerQuickPromotionBannerToastPresenterWithToastPresenter:(id)arg1 imageDownloader:(id)arg2 ;
-(char)hasBannerLoadedToShow;
-(void)loadNewBannerWithPromotion:(id)arg1 ifNecessaryAnimated:(char)arg2 ;
-(void)setBannerVisible:(char)arg1 animated:(char)arg2 ;
-(void)unloadBannerIfNecessary;
-(MNQuickPromotionBannerArrowLocation *)bannerArrowLocation;
-(void)dismissAndUnloadBannerIfNecessaryAnimated:(char)arg1 ;
-(void)toastWillAppear:(id)arg1 ;
-(void)toastWillDisappear:(id)arg1 ;
-(void)presenter:(id)arg1 didAcceptToast:(id)arg2 ;
-(void)presenter:(id)arg1 didRelinquishToast:(id)arg2 ;
-(id)initWithToastPresenter:(id)arg1 toastTag:(id)arg2 toastDisplayStrategy:(unsigned)arg3 imageDownloader:(id)arg4 ;
-(void)_loadNewBannerIfNecessary:(id)arg1 animated:(char)arg2 ;
-(void)_unloadBannerIfNecessary:(char)arg1 animated:(char)arg2 ;
-(void)_unloadAndDismissCurrentBannerAnimated:(char)arg1 ;
-(void)_loadNewBanner:(id)arg1 ;
-(void)quickPromotionBannerControllerShouldDismiss:(id)arg1 ;
-(MNQuickPromotionBannerView *)bannerView;
-(void)setDelegate:(id<MNQuickPromotionBannerToastPresenterDelegate>)arg1 ;
-(void)dealloc;
-(id<MNQuickPromotionBannerToastPresenterDelegate>)delegate;
-(char)bannerVisible;
-(void)setBannerVisible:(char)arg1 ;
@end

