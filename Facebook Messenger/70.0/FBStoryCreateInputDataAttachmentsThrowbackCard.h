/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:53 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBGraphQLInput.h>

@class NSString, NSArray;

@interface FBStoryCreateInputDataAttachmentsThrowbackCard : FBGraphQLInput {

	NSString* _campaignId;
	NSString* _source;
	NSArray* _mediaIds;

}

@property (nonatomic,copy) NSString * campaignId;              //@synthesize campaignId=_campaignId - In the implementation block
@property (nonatomic,copy) NSString * source;                  //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSArray * mediaIds;                 //@synthesize mediaIds=_mediaIds - In the implementation block
-(void)setCampaignId:(NSString *)arg1 ;
-(NSString *)campaignId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSArray *)mediaIds;
-(void)setMediaIds:(NSArray *)arg1 ;
-(NSString *)source;
-(void)setSource:(NSString *)arg1 ;
@end

