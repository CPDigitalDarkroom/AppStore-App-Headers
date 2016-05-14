/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBGraphQLInput.h>

@class NSString, FBEventPurchaseTicketsInputDataContext, NSNumber, NSArray;

@interface FBEventPurchaseTicketsInputData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	FBEventPurchaseTicketsInputDataContext* _context;
	NSString* _customerName;
	NSString* _customerEmail;
	NSString* _credentialId;
	NSNumber* _sessionId;
	NSArray* _tiers;
	NSArray* _tracking;

}

@property (nonatomic,copy) NSString * clientMutationId;                                   //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                                            //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) FBEventPurchaseTicketsInputDataContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * customerName;                                       //@synthesize customerName=_customerName - In the implementation block
@property (nonatomic,copy) NSString * customerEmail;                                      //@synthesize customerEmail=_customerEmail - In the implementation block
@property (nonatomic,copy) NSString * credentialId;                                       //@synthesize credentialId=_credentialId - In the implementation block
@property (nonatomic,copy) NSNumber * sessionId;                                          //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,copy) NSArray * tiers;                                               //@synthesize tiers=_tiers - In the implementation block
@property (nonatomic,copy) NSArray * tracking;                                            //@synthesize tracking=_tracking - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(NSString *)credentialId;
-(void)setCredentialId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(NSString *)clientMutationId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)customerName;
-(void)setCustomerName:(NSString *)arg1 ;
-(NSString *)customerEmail;
-(void)setCustomerEmail:(NSString *)arg1 ;
-(NSArray *)tiers;
-(void)setTiers:(NSArray *)arg1 ;
-(FBEventPurchaseTicketsInputDataContext *)context;
-(void)setTracking:(NSArray *)arg1 ;
-(void)setContext:(FBEventPurchaseTicketsInputDataContext *)arg1 ;
-(NSArray *)tracking;
-(void)setSessionId:(NSNumber *)arg1 ;
-(NSNumber *)sessionId;
@end

