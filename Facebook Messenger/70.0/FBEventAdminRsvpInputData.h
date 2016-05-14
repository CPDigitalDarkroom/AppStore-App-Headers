/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBGraphQLInput.h>

@class NSString, NSArray, FBEventAdminRsvpInputDataContext;

@interface FBEventAdminRsvpInputData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _eventId;
	NSString* _targetId;
	NSString* _guestStatus;
	NSArray* _tracking;
	FBEventAdminRsvpInputDataContext* _context;

}

@property (nonatomic,copy) NSString * clientMutationId;                             //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                                      //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * eventId;                                      //@synthesize eventId=_eventId - In the implementation block
@property (nonatomic,copy) NSString * targetId;                                     //@synthesize targetId=_targetId - In the implementation block
@property (nonatomic,copy) NSString * guestStatus;                                  //@synthesize guestStatus=_guestStatus - In the implementation block
@property (nonatomic,copy) NSArray * tracking;                                      //@synthesize tracking=_tracking - In the implementation block
@property (nonatomic,copy) FBEventAdminRsvpInputDataContext * context;              //@synthesize context=_context - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(NSString *)targetId;
-(void)setGuestStatus:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(NSString *)clientMutationId;
-(NSString *)guestStatus;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setTargetId:(NSString *)arg1 ;
-(FBEventAdminRsvpInputDataContext *)context;
-(void)setTracking:(NSArray *)arg1 ;
-(void)setContext:(FBEventAdminRsvpInputDataContext *)arg1 ;
-(NSArray *)tracking;
-(NSString *)eventId;
-(void)setEventId:(NSString *)arg1 ;
@end

