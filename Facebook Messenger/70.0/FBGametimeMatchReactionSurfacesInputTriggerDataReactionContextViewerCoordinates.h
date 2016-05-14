/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:50 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBGraphQLInput.h>

@class NSNumber;

@interface FBGametimeMatchReactionSurfacesInputTriggerDataReactionContextViewerCoordinates : FBGraphQLInput {

	NSNumber* _latitude;
	NSNumber* _longitude;
	NSNumber* _accuracy;
	NSNumber* _altitude;
	NSNumber* _altitudeAccuracy;
	NSNumber* _heading;
	NSNumber* _speed;
	NSNumber* _timestamp;
	NSNumber* _staleTime;

}

@property (nonatomic,copy) NSNumber * latitude;                      //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,copy) NSNumber * longitude;                     //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,copy) NSNumber * accuracy;                      //@synthesize accuracy=_accuracy - In the implementation block
@property (nonatomic,copy) NSNumber * altitude;                      //@synthesize altitude=_altitude - In the implementation block
@property (nonatomic,copy) NSNumber * altitudeAccuracy;              //@synthesize altitudeAccuracy=_altitudeAccuracy - In the implementation block
@property (nonatomic,copy) NSNumber * heading;                       //@synthesize heading=_heading - In the implementation block
@property (nonatomic,copy) NSNumber * speed;                         //@synthesize speed=_speed - In the implementation block
@property (nonatomic,copy) NSNumber * timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSNumber * staleTime;                     //@synthesize staleTime=_staleTime - In the implementation block
-(void)setStaleTime:(NSNumber *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSNumber *)staleTime;
-(void)setAccuracy:(NSNumber *)arg1 ;
-(NSNumber *)latitude;
-(NSNumber *)longitude;
-(void)setSpeed:(NSNumber *)arg1 ;
-(NSNumber *)timestamp;
-(void)setTimestamp:(NSNumber *)arg1 ;
-(NSNumber *)speed;
-(NSNumber *)altitudeAccuracy;
-(void)setAltitudeAccuracy:(NSNumber *)arg1 ;
-(void)setAltitude:(NSNumber *)arg1 ;
-(void)setHeading:(NSNumber *)arg1 ;
-(NSNumber *)heading;
-(NSNumber *)altitude;
-(NSNumber *)accuracy;
-(void)setLatitude:(NSNumber *)arg1 ;
-(void)setLongitude:(NSNumber *)arg1 ;
@end

