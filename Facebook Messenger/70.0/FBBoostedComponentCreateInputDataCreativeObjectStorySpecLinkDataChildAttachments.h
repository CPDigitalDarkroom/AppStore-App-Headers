/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBGraphQLInput.h>

@class NSString;

@interface FBBoostedComponentCreateInputDataCreativeObjectStorySpecLinkDataChildAttachments : FBGraphQLInput {

	NSString* _link;
	NSString* _imageHash;
	NSString* _picture;
	NSString* _name;

}

@property (nonatomic,copy) NSString * link;                   //@synthesize link=_link - In the implementation block
@property (nonatomic,copy) NSString * imageHash;              //@synthesize imageHash=_imageHash - In the implementation block
@property (nonatomic,copy) NSString * picture;                //@synthesize picture=_picture - In the implementation block
@property (nonatomic,copy) NSString * name;                   //@synthesize name=_name - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setImageHash:(NSString *)arg1 ;
-(void)setPicture:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)link;
-(void)setLink:(NSString *)arg1 ;
-(NSString *)imageHash;
-(NSString *)picture;
@end

