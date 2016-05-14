/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:21 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class CLLocation, FBCLWifiNetwork, NSDate;

@interface FBCLLocation : NSObject <NSCoding> {

	CLLocation* _location;
	FBCLWifiNetwork* _connectedWifi;

}

@property (nonatomic,retain) CLLocation * location;                        //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) FBCLWifiNetwork * connectedWifi;              //@synthesize connectedWifi=_connectedWifi - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MN11 coordinate; 
@property (nonatomic,readonly) double horizontalAccuracy; 
@property (nonatomic,copy,readonly) NSDate * timestamp; 
+(id)createWithLatitude:(double)arg1 longitude:(double)arg2 accuracy:(double)arg3 timestamp:(id)arg4 ;
+(id)createWithLocation:(id)arg1 connectedWifi:(id)arg2 ;
-(void)setConnectedWifi:(FBCLWifiNetwork *)arg1 ;
-(id)initWithLocation:(id)arg1 connectedWifi:(id)arg2 ;
-(FBCLWifiNetwork *)connectedWifi;
-(SCD_Struct_MN11)coordinate;
-(double)distanceFromLocation:(id)arg1 ;
-(double)horizontalAccuracy;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
@end

