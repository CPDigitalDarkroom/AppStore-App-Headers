/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBGraphQLInput.h>

@class NSString, NSArray;

@interface FBInstantArticleSubscriptionActionAcceptedInputDataFieldsData : FBGraphQLInput {

	NSString* _fieldKey;
	NSArray* _values;

}

@property (nonatomic,copy) NSString * fieldKey;              //@synthesize fieldKey=_fieldKey - In the implementation block
@property (nonatomic,copy) NSArray * values;                 //@synthesize values=_values - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)fieldKey;
-(void)setFieldKey:(NSString *)arg1 ;
-(void)setValues:(NSArray *)arg1 ;
-(NSArray *)values;
@end

