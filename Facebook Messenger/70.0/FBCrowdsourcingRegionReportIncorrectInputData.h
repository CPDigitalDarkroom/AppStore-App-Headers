/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBGraphQLInput.h>

@class NSString, NSNumber;

@interface FBCrowdsourcingRegionReportIncorrectInputData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _regionId;
	NSNumber* _latitude;
	NSNumber* _longitude;
	NSNumber* _accuracyMeters;
	NSNumber* _ageSeconds;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * regionId;                      //@synthesize regionId=_regionId - In the implementation block
@property (nonatomic,copy) NSNumber * latitude;                      //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,copy) NSNumber * longitude;                     //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,copy) NSNumber * accuracyMeters;                //@synthesize accuracyMeters=_accuracyMeters - In the implementation block
@property (nonatomic,copy) NSNumber * ageSeconds;                    //@synthesize ageSeconds=_ageSeconds - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(NSString *)clientMutationId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)regionId;
-(void)setRegionId:(NSString *)arg1 ;
-(NSNumber *)accuracyMeters;
-(void)setAccuracyMeters:(NSNumber *)arg1 ;
-(NSNumber *)ageSeconds;
-(void)setAgeSeconds:(NSNumber *)arg1 ;
-(NSNumber *)latitude;
-(NSNumber *)longitude;
-(void)setLatitude:(NSNumber *)arg1 ;
-(void)setLongitude:(NSNumber *)arg1 ;
@end

