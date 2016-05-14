/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:53 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBGraphQLInput.h>

@class FBStoryCreateInputDataAttachmentsLifeEventExtrasRelationshipInfo, FBStoryCreateInputDataAttachmentsLifeEventExtrasWorkInfo, FBStoryCreateInputDataAttachmentsLifeEventExtrasEducationInfo;

@interface FBStoryCreateInputDataAttachmentsLifeEventExtras : FBGraphQLInput {

	FBStoryCreateInputDataAttachmentsLifeEventExtrasRelationshipInfo* _relationshipInfo;
	FBStoryCreateInputDataAttachmentsLifeEventExtrasWorkInfo* _workInfo;
	FBStoryCreateInputDataAttachmentsLifeEventExtrasEducationInfo* _educationInfo;

}

@property (nonatomic,copy) FBStoryCreateInputDataAttachmentsLifeEventExtrasRelationshipInfo * relationshipInfo;              //@synthesize relationshipInfo=_relationshipInfo - In the implementation block
@property (nonatomic,copy) FBStoryCreateInputDataAttachmentsLifeEventExtrasWorkInfo * workInfo;                              //@synthesize workInfo=_workInfo - In the implementation block
@property (nonatomic,copy) FBStoryCreateInputDataAttachmentsLifeEventExtrasEducationInfo * educationInfo;                    //@synthesize educationInfo=_educationInfo - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(FBStoryCreateInputDataAttachmentsLifeEventExtrasRelationshipInfo *)relationshipInfo;
-(void)setRelationshipInfo:(FBStoryCreateInputDataAttachmentsLifeEventExtrasRelationshipInfo *)arg1 ;
-(void)setWorkInfo:(FBStoryCreateInputDataAttachmentsLifeEventExtrasWorkInfo *)arg1 ;
-(FBStoryCreateInputDataAttachmentsLifeEventExtrasEducationInfo *)educationInfo;
-(void)setEducationInfo:(FBStoryCreateInputDataAttachmentsLifeEventExtrasEducationInfo *)arg1 ;
-(FBStoryCreateInputDataAttachmentsLifeEventExtrasWorkInfo *)workInfo;
@end

