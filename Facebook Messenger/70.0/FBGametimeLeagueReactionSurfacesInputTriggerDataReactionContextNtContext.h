/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBGraphQLInput.h>

@class NSArray, NSString, NSNumber;

@interface FBGametimeLeagueReactionSurfacesInputTriggerDataReactionContextNtContext : FBGraphQLInput {

	NSArray* _styles;
	NSString* _stylesId;
	NSNumber* _pixelRatio;

}

@property (nonatomic,copy) NSArray * styles;                   //@synthesize styles=_styles - In the implementation block
@property (nonatomic,copy) NSString * stylesId;                //@synthesize stylesId=_stylesId - In the implementation block
@property (nonatomic,copy) NSNumber * pixelRatio;              //@synthesize pixelRatio=_pixelRatio - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setStyles:(NSArray *)arg1 ;
-(NSString *)stylesId;
-(void)setStylesId:(NSString *)arg1 ;
-(NSArray *)styles;
-(NSNumber *)pixelRatio;
-(void)setPixelRatio:(NSNumber *)arg1 ;
@end

