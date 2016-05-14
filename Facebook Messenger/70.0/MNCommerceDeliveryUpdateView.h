/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIScrollView, MNCommerceDeliveryUpdateInformationView, UITableView, MNCommerceDeliveryUpdateMapView, MNCommerceShipmentTrackingUpdatesView, MNBusinessLogoView, MNCommerceLabelWithHeaderView, MNLoadingView;

@interface MNCommerceDeliveryUpdateView : UIView {

	UIScrollView* _contentView;
	MNCommerceDeliveryUpdateInformationView* _informationView;
	UITableView* _actionButtonsView;
	MNCommerceDeliveryUpdateMapView* _mapView;
	MNCommerceShipmentTrackingUpdatesView* _trackingUpdatesView;
	MNBusinessLogoView* _logoView;
	MNCommerceLabelWithHeaderView* _trackingNumberView;
	MNCommerceLabelWithHeaderView* _legalTextView;
	MNLoadingView* _loadingView;

}
-(id)initWithMapView:(id)arg1 actionButtonsView:(id)arg2 informationView:(id)arg3 shipmentTrackingUpdatesView:(id)arg4 logoView:(id)arg5 trackingNumberView:(id)arg6 legalTextView:(id)arg7 ;
-(void)contentDidLoad;
-(void)layoutSubviews;
@end

