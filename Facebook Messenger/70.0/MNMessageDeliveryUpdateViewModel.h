/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MNCommerceMapViewModel, MNBusinessLogoViewModel, MNCommerceListViewModel, NSURL;

@interface MNMessageDeliveryUpdateViewModel : FBValueObject <NSCopying> {

	NSString* _shipmentID;
	int _type;
	NSString* _bubbleStyle;
	MNCommerceMapViewModel* _map;
	MNBusinessLogoViewModel* _carrierLogo;
	NSString* _shipmentMethod;
	NSString* _shippedDateString;
	NSString* _estimatedDeliveryDateString;
	NSString* _delayedDeliveryDateString;
	NSString* _trackingEventDateString;
	MNCommerceListViewModel* _itemList;
	NSURL* _trackingURL;
	NSString* _senderID;

}

@property (nonatomic,copy,readonly) NSString * shipmentID;                               //@synthesize shipmentID=_shipmentID - In the implementation block
@property (nonatomic,readonly) int type;                                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * bubbleStyle;                              //@synthesize bubbleStyle=_bubbleStyle - In the implementation block
@property (nonatomic,copy,readonly) MNCommerceMapViewModel * map;                        //@synthesize map=_map - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessLogoViewModel * carrierLogo;               //@synthesize carrierLogo=_carrierLogo - In the implementation block
@property (nonatomic,copy,readonly) NSString * shipmentMethod;                           //@synthesize shipmentMethod=_shipmentMethod - In the implementation block
@property (nonatomic,copy,readonly) NSString * shippedDateString;                        //@synthesize shippedDateString=_shippedDateString - In the implementation block
@property (nonatomic,copy,readonly) NSString * estimatedDeliveryDateString;              //@synthesize estimatedDeliveryDateString=_estimatedDeliveryDateString - In the implementation block
@property (nonatomic,copy,readonly) NSString * delayedDeliveryDateString;                //@synthesize delayedDeliveryDateString=_delayedDeliveryDateString - In the implementation block
@property (nonatomic,copy,readonly) NSString * trackingEventDateString;                  //@synthesize trackingEventDateString=_trackingEventDateString - In the implementation block
@property (nonatomic,copy,readonly) MNCommerceListViewModel * itemList;                  //@synthesize itemList=_itemList - In the implementation block
@property (nonatomic,copy,readonly) NSURL * trackingURL;                                 //@synthesize trackingURL=_trackingURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * senderID;                                 //@synthesize senderID=_senderID - In the implementation block
-(NSString *)bubbleStyle;
-(MNBusinessLogoViewModel *)carrierLogo;
-(NSString *)shipmentID;
-(NSURL *)trackingURL;
-(NSString *)shippedDateString;
-(NSString *)delayedDeliveryDateString;
-(NSString *)trackingEventDateString;
-(NSString *)estimatedDeliveryDateString;
-(NSString *)shipmentMethod;
-(id)initWithShipmentID:(id)arg1 type:(int)arg2 bubbleStyle:(id)arg3 map:(id)arg4 carrierLogo:(id)arg5 shipmentMethod:(id)arg6 shippedDateString:(id)arg7 estimatedDeliveryDateString:(id)arg8 delayedDeliveryDateString:(id)arg9 trackingEventDateString:(id)arg10 itemList:(id)arg11 trackingURL:(id)arg12 senderID:(id)arg13 ;
-(int)type;
-(NSString *)senderID;
-(MNCommerceMapViewModel *)map;
-(MNCommerceListViewModel *)itemList;
@end

