/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:50 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBGraphQLInput.h>

@class NSArray, NSNumber, NSString;

@interface FBSearchSuggestionSetInputQuery : FBGraphQLInput {

	NSArray* _fragments;
	NSNumber* _lockedFragments;
	NSString* _sessionId;

}

@property (nonatomic,copy) NSArray * fragments;                     //@synthesize fragments=_fragments - In the implementation block
@property (nonatomic,copy) NSNumber * lockedFragments;              //@synthesize lockedFragments=_lockedFragments - In the implementation block
@property (nonatomic,copy) NSString * sessionId;                    //@synthesize sessionId=_sessionId - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setFragments:(NSArray *)arg1 ;
-(NSNumber *)lockedFragments;
-(void)setLockedFragments:(NSNumber *)arg1 ;
-(void)setSessionId:(NSString *)arg1 ;
-(NSString *)sessionId;
-(NSArray *)fragments;
@end

