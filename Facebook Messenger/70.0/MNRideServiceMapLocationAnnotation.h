/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class NSString;

@interface MNRideServiceMapLocationAnnotation : NSObject <MKAnnotation> {

	int _type;
	SCD_Struct_MN11 _coordinate;

}

@property (nonatomic,readonly) int type;                              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) SCD_Struct_MN11 coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
-(void)setCoordinate:(SCD_Struct_MN11)arg1 ;
-(SCD_Struct_MN11)coordinate;
-(int)type;
-(id)initWithType:(int)arg1 ;
@end

