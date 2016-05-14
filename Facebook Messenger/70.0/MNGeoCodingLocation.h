/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface MNGeoCodingLocation : FBValueObject <NSCopying> {

	NSString* _street;
	NSString* _city;
	NSString* _state;
	NSString* _postalCode;
	NSString* _country;
	NSString* _name;
	NSNumber* _latitude;
	NSNumber* _longitude;

}

@property (nonatomic,copy,readonly) NSString * street;                  //@synthesize street=_street - In the implementation block
@property (nonatomic,copy,readonly) NSString * city;                    //@synthesize city=_city - In the implementation block
@property (nonatomic,copy,readonly) NSString * state;                   //@synthesize state=_state - In the implementation block
@property (nonatomic,copy,readonly) NSString * postalCode;              //@synthesize postalCode=_postalCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * country;                 //@synthesize country=_country - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * latitude;                //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * longitude;               //@synthesize longitude=_longitude - In the implementation block
-(id)initWithStreet:(id)arg1 city:(id)arg2 state:(id)arg3 postalCode:(id)arg4 country:(id)arg5 name:(id)arg6 latitude:(id)arg7 longitude:(id)arg8 ;
-(NSString *)city;
-(NSNumber *)latitude;
-(NSNumber *)longitude;
-(NSString *)state;
-(NSString *)name;
-(NSString *)country;
-(NSString *)street;
-(NSString *)postalCode;
@end

