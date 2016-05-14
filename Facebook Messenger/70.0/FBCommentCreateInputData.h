/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBGraphQLInput.h>

@class NSString, FBCommentCreateInputDataMessage, NSArray, NSData;

@interface FBCommentCreateInputData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _feedbackId;
	FBCommentCreateInputDataMessage* _message;
	NSArray* _attachments;
	NSData* _photo;
	NSArray* _tracking;
	NSString* _feedbackSource;

}

@property (nonatomic,copy) NSString * clientMutationId;                            //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                                     //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * feedbackId;                                  //@synthesize feedbackId=_feedbackId - In the implementation block
@property (nonatomic,copy) FBCommentCreateInputDataMessage * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSArray * attachments;                                  //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,copy) NSData * photo;                                         //@synthesize photo=_photo - In the implementation block
@property (nonatomic,copy) NSArray * tracking;                                     //@synthesize tracking=_tracking - In the implementation block
@property (nonatomic,copy) NSString * feedbackSource;                              //@synthesize feedbackSource=_feedbackSource - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(NSString *)feedbackSource;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(NSString *)clientMutationId;
-(NSString *)feedbackId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setFeedbackId:(NSString *)arg1 ;
-(void)setFeedbackSource:(NSString *)arg1 ;
-(NSData *)photo;
-(void)setTracking:(NSArray *)arg1 ;
-(FBCommentCreateInputDataMessage *)message;
-(void)setMessage:(FBCommentCreateInputDataMessage *)arg1 ;
-(NSArray *)attachments;
-(void)setAttachments:(NSArray *)arg1 ;
-(NSArray *)tracking;
-(void)setPhoto:(NSData *)arg1 ;
@end

