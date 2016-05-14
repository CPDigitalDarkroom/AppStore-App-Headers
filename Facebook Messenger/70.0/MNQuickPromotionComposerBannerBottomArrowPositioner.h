/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:47 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNBannerArrowPositioner.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNComposeViewControllerListener.h>

@protocol MNBannerArrowPositionerDelegate;
@class MNComposeViewController, MNQuickPromotionBannerView, MNQuickPromotionBannerArrowLocation, NSString;

@interface MNQuickPromotionComposerBannerBottomArrowPositioner : NSObject <MNBannerArrowPositioner, MNComposeViewControllerListener> {

	MNComposeViewController* _composeViewController;
	MNQuickPromotionBannerView* _composerBannerView;
	MNQuickPromotionBannerArrowLocation* _arrowLocation;
	id<MNBannerArrowPositionerDelegate> _delegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char bannerArrowVisible; 
@property (assign,nonatomic,__weak) id<MNBannerArrowPositionerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)didUpdateTabBar;
-(id)_composerExtensionTabIdentifier;
-(char)_composerBannerBottomArrowOverflowsToMoreTab;
-(void)updateBannerArrowPosition;
-(char)bannerArrowVisible;
-(id)initWithComposerBannerView:(id)arg1 arrowLocation:(id)arg2 composeViewController:(id)arg3 ;
-(void)setDelegate:(id<MNBannerArrowPositionerDelegate>)arg1 ;
-(id<MNBannerArrowPositionerDelegate>)delegate;
@end

