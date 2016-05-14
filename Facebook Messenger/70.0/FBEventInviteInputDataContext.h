/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBGraphQLInput.h>

@class NSString, NSArray;

@interface FBEventInviteInputDataContext : FBGraphQLInput {

	NSString* _source;
	NSString* _ref;
	NSString* _refNotifType;
	NSArray* _eventActionHistory;

}

@property (nonatomic,copy) NSString * source;                         //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * ref;                            //@synthesize ref=_ref - In the implementation block
@property (nonatomic,copy) NSString * refNotifType;                   //@synthesize refNotifType=_refNotifType - In the implementation block
@property (nonatomic,copy) NSArray * eventActionHistory;              //@synthesize eventActionHistory=_eventActionHistory - In the implementation block
-(void)setEventActionHistory:(NSArray *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)refNotifType;
-(void)setRefNotifType:(NSString *)arg1 ;
-(NSArray *)eventActionHistory;
-(NSString *)source;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)ref;
-(void)setRef:(NSString *)arg1 ;
@end

