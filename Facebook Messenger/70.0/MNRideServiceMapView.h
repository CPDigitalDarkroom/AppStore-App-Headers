/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNLocationPickerMapGestureRecognizerDelegate.h>

@protocol MNRideServiceMapViewDelegate;
@class MKMapView, UIButton, UIImageView, CLLocation, MNRideServiceMapLocationAnnotation, MNLocationPickerMapGestureRecognizer, NSString;

@interface MNRideServiceMapView : UIView <MKMapViewDelegate, MNLocationPickerMapGestureRecognizerDelegate> {

	MKMapView* _mapView;
	UIButton* _mapResetButton;
	UIImageView* _sourcePinImage;
	CLLocation* _sourcePinLocation;
	CLLocation* _destinationPinLocation;
	MNRideServiceMapLocationAnnotation* _sourcePinAnnotation;
	MNRideServiceMapLocationAnnotation* _destinationPinAnnotation;
	MNLocationPickerMapGestureRecognizer* _gestureRecognizer;
	char _isLocationPickerModeOn;
	char _didFinishInitialAnimation;
	id<MNRideServiceMapViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNRideServiceMapViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) CLLocation * userLocation; 
@property (nonatomic,readonly) CLLocation * centerLocation; 
@property (nonatomic,readonly) char didFinishInitialAnimation;                              //@synthesize didFinishInitialAnimation=_didFinishInitialAnimation - In the implementation block
@property (nonatomic,readonly) char isLocationPickerModeOn;                                 //@synthesize isLocationPickerModeOn=_isLocationPickerModeOn - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_resetButtonTapped;
-(CLLocation *)centerLocation;
-(void)_setIsLocationPickerModeOn:(char)arg1 ;
-(void)_removeAllAnnotations;
-(void)_addAllAnnotations;
-(void)_didStartDragging;
-(void)gestureRecognizerDidDetectTap:(id)arg1 ;
-(void)gestureRecognizerDidDetectDragging:(id)arg1 ;
-(void)gestureRecognizerDidDetectZooming:(id)arg1 ;
-(void)setSourcePinLocation:(id)arg1 ;
-(void)setDestinationPinLocation:(id)arg1 ;
-(void)setUserTrackingModeEnabled:(char)arg1 animated:(char)arg2 ;
-(void)centerMapOnPins;
-(char)didFinishInitialAnimation;
-(char)isLocationPickerModeOn;
-(CLLocation *)userLocation;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(char)arg2 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 ;
-(void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNRideServiceMapViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNRideServiceMapViewDelegate>)delegate;
@end

