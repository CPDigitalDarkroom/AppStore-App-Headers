/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBGraphQLInput.h>

@class NSString, NSArray;

@interface FBLeadGenUserInfoCreateInputData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _fullName;
	NSArray* _fieldsData;
	NSString* _adId;
	NSString* _shareId;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * fullName;                      //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,copy) NSArray * fieldsData;                     //@synthesize fieldsData=_fieldsData - In the implementation block
@property (nonatomic,copy) NSString * adId;                          //@synthesize adId=_adId - In the implementation block
@property (nonatomic,copy) NSString * shareId;                       //@synthesize shareId=_shareId - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(NSString *)clientMutationId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setAdId:(NSString *)arg1 ;
-(NSArray *)fieldsData;
-(void)setFieldsData:(NSArray *)arg1 ;
-(NSString *)adId;
-(void)setShareId:(NSString *)arg1 ;
-(NSString *)shareId;
-(NSString *)fullName;
-(void)setFullName:(NSString *)arg1 ;
@end

