/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:21 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBExperimentContext.h>

@class NSString;

@interface FBRedSpaceStringsExperimentContext : FBExperimentContext {

	NSString* _friendViewTitleFormat;
	NSString* _lastPostLabelFormat;
	NSString* _suggestedLabel;
	NSString* _divebarEntryPointNux;
	NSString* _selfViewTitle;

}

@property (nonatomic,copy,readonly) NSString * suggestedLabel;                     //@synthesize suggestedLabel=_suggestedLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * divebarEntryPointNux;               //@synthesize divebarEntryPointNux=_divebarEntryPointNux - In the implementation block
@property (nonatomic,copy,readonly) NSString * selfViewTitle;                      //@synthesize selfViewTitle=_selfViewTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * friendViewTitleFormat;              //@synthesize friendViewTitleFormat=_friendViewTitleFormat - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastPostLabelFormat;                //@synthesize lastPostLabelFormat=_lastPostLabelFormat - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(NSString *)divebarEntryPointNux;
-(NSString *)friendViewTitleFormat;
-(NSString *)lastPostLabelFormat;
-(NSString *)suggestedLabel;
-(NSString *)selfViewTitle;
@end

