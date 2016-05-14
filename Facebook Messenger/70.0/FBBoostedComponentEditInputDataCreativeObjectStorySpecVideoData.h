/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBGraphQLInput.h>

@class NSArray, NSString, FBBoostedComponentEditInputDataCreativeObjectStorySpecVideoDataCallToAction;

@interface FBBoostedComponentEditInputDataCreativeObjectStorySpecVideoData : FBGraphQLInput {

	NSArray* _fieldsRetainedFromRawSpec;
	NSString* _imageHash;
	NSString* _imageURLString;
	NSString* _videoId;
	NSString* _descriptionText;
	FBBoostedComponentEditInputDataCreativeObjectStorySpecVideoDataCallToAction* _callToAction;

}

@property (nonatomic,copy) NSArray * fieldsRetainedFromRawSpec;                                                                     //@synthesize fieldsRetainedFromRawSpec=_fieldsRetainedFromRawSpec - In the implementation block
@property (nonatomic,copy) NSString * imageHash;                                                                                    //@synthesize imageHash=_imageHash - In the implementation block
@property (nonatomic,copy) NSString * imageURLString;                                                                               //@synthesize imageURLString=_imageURLString - In the implementation block
@property (nonatomic,copy) NSString * videoId;                                                                                      //@synthesize videoId=_videoId - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;                                                                              //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy) FBBoostedComponentEditInputDataCreativeObjectStorySpecVideoDataCallToAction * callToAction;              //@synthesize callToAction=_callToAction - In the implementation block
-(FBBoostedComponentEditInputDataCreativeObjectStorySpecVideoDataCallToAction *)callToAction;
-(NSString *)videoId;
-(NSString *)imageURLString;
-(void)setImageURLString:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setImageHash:(NSString *)arg1 ;
-(void)setCallToAction:(FBBoostedComponentEditInputDataCreativeObjectStorySpecVideoDataCallToAction *)arg1 ;
-(NSArray *)fieldsRetainedFromRawSpec;
-(void)setFieldsRetainedFromRawSpec:(NSArray *)arg1 ;
-(void)setVideoId:(NSString *)arg1 ;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)descriptionText;
-(NSString *)imageHash;
@end

