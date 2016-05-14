/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBGraphQLInput.h>

@class NSString;

@interface FBEventAdminRsvpInputDataContextEventActionHistory : FBGraphQLInput {

	NSString* _surface;
	NSString* _mechanism;
	NSString* _extraData;
	NSString* _eventTracking;

}

@property (nonatomic,copy) NSString * surface;                    //@synthesize surface=_surface - In the implementation block
@property (nonatomic,copy) NSString * mechanism;                  //@synthesize mechanism=_mechanism - In the implementation block
@property (nonatomic,copy) NSString * extraData;                  //@synthesize extraData=_extraData - In the implementation block
@property (nonatomic,copy) NSString * eventTracking;              //@synthesize eventTracking=_eventTracking - In the implementation block
-(void)setSurface:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)eventTracking;
-(void)setEventTracking:(NSString *)arg1 ;
-(NSString *)mechanism;
-(NSString *)surface;
-(void)setMechanism:(NSString *)arg1 ;
-(void)setExtraData:(NSString *)arg1 ;
-(NSString *)extraData;
@end

