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

@interface FBStoryCreateInputDataAttachmentsGreetingCard : FBGraphQLInput {

	NSString* _templateId;
	NSString* _theme;
	NSArray* _slides;

}

@property (nonatomic,copy) NSString * templateId;              //@synthesize templateId=_templateId - In the implementation block
@property (nonatomic,copy) NSString * theme;                   //@synthesize theme=_theme - In the implementation block
@property (nonatomic,copy) NSArray * slides;                   //@synthesize slides=_slides - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)templateId;
-(void)setTemplateId:(NSString *)arg1 ;
-(void)setSlides:(NSArray *)arg1 ;
-(NSArray *)slides;
-(NSString *)theme;
-(void)setTheme:(NSString *)arg1 ;
@end

