/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBGraphQLInput.h>

@class NSString, FBContactQueriesInputContactName, NSArray;

@interface FBContactQueriesInputContact : FBGraphQLInput {

	NSString* _key;
	FBContactQueriesInputContactName* _name;
	NSArray* _emails;
	NSArray* _phones;

}

@property (nonatomic,copy) NSString * key;                                       //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) FBContactQueriesInputContactName * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSArray * emails;                                     //@synthesize emails=_emails - In the implementation block
@property (nonatomic,copy) NSArray * phones;                                     //@synthesize phones=_phones - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setName:(FBContactQueriesInputContactName *)arg1 ;
-(FBContactQueriesInputContactName *)name;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(NSArray *)emails;
-(NSArray *)phones;
-(void)setEmails:(NSArray *)arg1 ;
-(void)setPhones:(NSArray *)arg1 ;
@end

