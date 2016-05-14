/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBGraphQLInput.h>

@class NSString;

@interface FBPlaceQuestionSubmitAnswerInputData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _surface;
	NSString* _placeQuestionId;
	NSString* _placeQuestionValue;
	NSString* _placeQuestionAnswerValue;

}

@property (nonatomic,copy) NSString * clientMutationId;                      //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                               //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * surface;                               //@synthesize surface=_surface - In the implementation block
@property (nonatomic,copy) NSString * placeQuestionId;                       //@synthesize placeQuestionId=_placeQuestionId - In the implementation block
@property (nonatomic,copy) NSString * placeQuestionValue;                    //@synthesize placeQuestionValue=_placeQuestionValue - In the implementation block
@property (nonatomic,copy) NSString * placeQuestionAnswerValue;              //@synthesize placeQuestionAnswerValue=_placeQuestionAnswerValue - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setSurface:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(NSString *)clientMutationId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)placeQuestionId;
-(void)setPlaceQuestionId:(NSString *)arg1 ;
-(NSString *)placeQuestionValue;
-(void)setPlaceQuestionValue:(NSString *)arg1 ;
-(NSString *)placeQuestionAnswerValue;
-(void)setPlaceQuestionAnswerValue:(NSString *)arg1 ;
-(NSString *)surface;
@end

