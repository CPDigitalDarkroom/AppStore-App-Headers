/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:50 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBGraphQLInput.h>

@class NSNumber, NSString;

@interface FBGraphSearchSingleStateInputSingleStateParams : FBGraphQLInput {

	NSNumber* _singleStateFbid;
	NSString* _shareURLString;

}

@property (nonatomic,copy) NSNumber * singleStateFbid;              //@synthesize singleStateFbid=_singleStateFbid - In the implementation block
@property (nonatomic,copy) NSString * shareURLString;               //@synthesize shareURLString=_shareURLString - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSNumber *)singleStateFbid;
-(void)setSingleStateFbid:(NSNumber *)arg1 ;
-(NSString *)shareURLString;
-(void)setShareURLString:(NSString *)arg1 ;
@end

