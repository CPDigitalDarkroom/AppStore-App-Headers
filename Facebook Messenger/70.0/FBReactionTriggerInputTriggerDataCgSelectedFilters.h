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

@interface FBReactionTriggerInputTriggerDataCgSelectedFilters : FBGraphQLInput {

	NSString* _tab;
	NSString* _listType;
	NSString* _categoryId;

}

@property (nonatomic,copy) NSString * tab;                     //@synthesize tab=_tab - In the implementation block
@property (nonatomic,copy) NSString * listType;                //@synthesize listType=_listType - In the implementation block
@property (nonatomic,copy) NSString * categoryId;              //@synthesize categoryId=_categoryId - In the implementation block
-(NSString *)tab;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setTab:(NSString *)arg1 ;
-(NSString *)categoryId;
-(void)setCategoryId:(NSString *)arg1 ;
-(void)setListType:(NSString *)arg1 ;
-(NSString *)listType;
@end

