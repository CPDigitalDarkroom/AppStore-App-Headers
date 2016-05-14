/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:50 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBGraphQLInput.h>

@class NSString;

@interface FBSubtopicSearchInputQueryParams : FBGraphQLInput {

	NSString* _queryString;
	NSString* _topicId;
	NSString* _resultType;
	NSString* _defaultResultType;

}

@property (nonatomic,copy) NSString * queryString;                    //@synthesize queryString=_queryString - In the implementation block
@property (nonatomic,copy) NSString * topicId;                        //@synthesize topicId=_topicId - In the implementation block
@property (nonatomic,copy) NSString * resultType;                     //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,copy) NSString * defaultResultType;              //@synthesize defaultResultType=_defaultResultType - In the implementation block
-(NSString *)topicId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setTopicId:(NSString *)arg1 ;
-(NSString *)defaultResultType;
-(void)setDefaultResultType:(NSString *)arg1 ;
-(void)setResultType:(NSString *)arg1 ;
-(void)setQueryString:(NSString *)arg1 ;
-(NSString *)queryString;
-(NSString *)resultType;
@end

