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

@interface FBPrivacyScopeEditInputDataPrivacy : FBGraphQLInput {

	NSString* _baseState;
	NSArray* _allow;
	NSArray* _deny;
	NSString* _tagExpansionState;

}

@property (nonatomic,copy) NSString * baseState;                      //@synthesize baseState=_baseState - In the implementation block
@property (nonatomic,copy) NSArray * allow;                           //@synthesize allow=_allow - In the implementation block
@property (nonatomic,copy) NSArray * deny;                            //@synthesize deny=_deny - In the implementation block
@property (nonatomic,copy) NSString * tagExpansionState;              //@synthesize tagExpansionState=_tagExpansionState - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)baseState;
-(void)setBaseState:(NSString *)arg1 ;
-(void)setAllow:(NSArray *)arg1 ;
-(NSString *)tagExpansionState;
-(void)setTagExpansionState:(NSString *)arg1 ;
-(NSArray *)allow;
-(NSArray *)deny;
-(void)setDeny:(NSArray *)arg1 ;
@end

