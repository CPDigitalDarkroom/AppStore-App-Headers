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

@interface FBSearchQueryInputQueryArgumentsFilteredQueryArgumentsFilters : FBGraphQLInput {

	NSString* _name;
	NSString* _handle;
	NSString* _action;
	NSString* _value;

}

@property (nonatomic,copy) NSString * name;                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * handle;              //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy) NSString * action;              //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSString * value;               //@synthesize value=_value - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)handle;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)action;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)setAction:(NSString *)arg1 ;
-(void)setHandle:(NSString *)arg1 ;
@end

