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

@interface FBFormFieldsInputFormFieldsCONTACTINFOValue : FBGraphQLInput {

	NSString* _firstName;
	NSString* _lastName;
	NSString* _email;
	NSString* _verifiedEmail;
	NSString* _phone;

}

@property (nonatomic,copy) NSString * firstName;                  //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                   //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy) NSString * email;                      //@synthesize email=_email - In the implementation block
@property (nonatomic,copy) NSString * verifiedEmail;              //@synthesize verifiedEmail=_verifiedEmail - In the implementation block
@property (nonatomic,copy) NSString * phone;                      //@synthesize phone=_phone - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)verifiedEmail;
-(void)setVerifiedEmail:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)phone;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(void)setPhone:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
@end

