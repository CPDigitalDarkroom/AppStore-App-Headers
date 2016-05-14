/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:43 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBMQTTCoordinates, NSString;

@interface FBMQTTLocationAttachment : NSObject <TBase, NSCoding> {

	FBMQTTCoordinates* __thrift_coordinates;
	char __thrift_isCurrentLocation;
	long long __thrift_placeId;
	char __thrift_coordinates_set;
	char __thrift_isCurrentLocation_set;
	char __thrift_placeId_set;

}

@property (nonatomic,retain) FBMQTTCoordinates * coordinates; 
@property (assign,nonatomic) char isCurrLocation; 
@property (assign,nonatomic) long long placeId; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setCoordinates:(FBMQTTCoordinates *)arg1 ;
-(void)setIsCurrLocation:(char)arg1 ;
-(id)initWithCoordinates:(id)arg1 isCurrentLocation:(char)arg2 placeId:(long long)arg3 ;
-(char)coordinatesIsSet;
-(void)unsetCoordinates;
-(char)isCurrLocation;
-(char)isCurrLocationIsSet;
-(void)unsetIsCurrLocation;
-(char)placeIdIsSet;
-(void)unsetPlaceId;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)write:(id)arg1 ;
-(FBMQTTCoordinates *)coordinates;
-(long long)placeId;
-(void)setPlaceId:(long long)arg1 ;
@end

