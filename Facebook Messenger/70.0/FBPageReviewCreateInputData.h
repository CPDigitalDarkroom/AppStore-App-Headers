/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:54 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBGraphQLInput.h>

@class NSString, NSNumber, NSArray;

@interface FBPageReviewCreateInputData : FBGraphQLInput {

	NSString* _pageId;
	NSString* _text;
	NSNumber* _rating;
	NSString* _privacy;
	NSString* _mechanism;
	NSString* _surface;
	NSArray* _tracking;
	NSNumber* _isDraft;
	NSString* _clientMutationId;
	NSString* _actorId;

}

@property (nonatomic,copy) NSString * pageId;                        //@synthesize pageId=_pageId - In the implementation block
@property (nonatomic,copy) NSString * text;                          //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSNumber * rating;                        //@synthesize rating=_rating - In the implementation block
@property (nonatomic,copy) NSString * privacy;                       //@synthesize privacy=_privacy - In the implementation block
@property (nonatomic,copy) NSString * mechanism;                     //@synthesize mechanism=_mechanism - In the implementation block
@property (nonatomic,copy) NSString * surface;                       //@synthesize surface=_surface - In the implementation block
@property (nonatomic,copy) NSArray * tracking;                       //@synthesize tracking=_tracking - In the implementation block
@property (nonatomic,copy) NSNumber * isDraft;                       //@synthesize isDraft=_isDraft - In the implementation block
@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(NSString *)pageId;
-(void)setPageId:(NSString *)arg1 ;
-(NSString *)privacy;
-(void)setPrivacy:(NSString *)arg1 ;
-(void)setSurface:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(NSString *)clientMutationId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)mechanism;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setTracking:(NSArray *)arg1 ;
-(NSString *)surface;
-(void)setMechanism:(NSString *)arg1 ;
-(NSArray *)tracking;
-(void)setIsDraft:(NSNumber *)arg1 ;
-(NSNumber *)isDraft;
-(NSNumber *)rating;
-(void)setRating:(NSNumber *)arg1 ;
@end

