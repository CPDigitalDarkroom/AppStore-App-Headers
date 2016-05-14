/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBGraphQLInput.h>

@class NSString, NSNumber;

@interface FBAymtChannelInputArguments : FBGraphQLInput {

	NSString* _channelName;
	NSNumber* _adAccountId;
	NSNumber* _appId;
	NSNumber* _campaignGroupId;
	NSNumber* _pageId;
	NSNumber* _postId;

}

@property (nonatomic,copy) NSString * channelName;                  //@synthesize channelName=_channelName - In the implementation block
@property (nonatomic,copy) NSNumber * adAccountId;                  //@synthesize adAccountId=_adAccountId - In the implementation block
@property (nonatomic,copy) NSNumber * appId;                        //@synthesize appId=_appId - In the implementation block
@property (nonatomic,copy) NSNumber * campaignGroupId;              //@synthesize campaignGroupId=_campaignGroupId - In the implementation block
@property (nonatomic,copy) NSNumber * pageId;                       //@synthesize pageId=_pageId - In the implementation block
@property (nonatomic,copy) NSNumber * postId;                       //@synthesize postId=_postId - In the implementation block
-(NSNumber *)pageId;
-(void)setPageId:(NSNumber *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setChannelName:(NSString *)arg1 ;
-(NSNumber *)adAccountId;
-(void)setAdAccountId:(NSNumber *)arg1 ;
-(NSNumber *)campaignGroupId;
-(void)setCampaignGroupId:(NSNumber *)arg1 ;
-(NSNumber *)postId;
-(void)setPostId:(NSNumber *)arg1 ;
-(NSString *)channelName;
-(NSNumber *)appId;
-(void)setAppId:(NSNumber *)arg1 ;
@end

