/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:50 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBGraphQLInput.h>

@class NSString, FBFormFieldsInputFormFieldsCONTACTINFOValue;

@interface FBFormFieldsInputFormFieldsCONTACTINFO : FBGraphQLInput {

	NSString* _formFieldId;
	NSString* _disableAutofill;
	FBFormFieldsInputFormFieldsCONTACTINFOValue* _value;

}

@property (nonatomic,copy) NSString * formFieldId;                                           //@synthesize formFieldId=_formFieldId - In the implementation block
@property (nonatomic,copy) NSString * disableAutofill;                                       //@synthesize disableAutofill=_disableAutofill - In the implementation block
@property (nonatomic,copy) FBFormFieldsInputFormFieldsCONTACTINFOValue * value;              //@synthesize value=_value - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)formFieldId;
-(void)setFormFieldId:(NSString *)arg1 ;
-(NSString *)disableAutofill;
-(void)setDisableAutofill:(NSString *)arg1 ;
-(FBFormFieldsInputFormFieldsCONTACTINFOValue *)value;
-(void)setValue:(FBFormFieldsInputFormFieldsCONTACTINFOValue *)arg1 ;
@end

