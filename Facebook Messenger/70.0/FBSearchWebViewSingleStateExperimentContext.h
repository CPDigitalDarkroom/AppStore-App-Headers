/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:15 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBExperimentContext.h>

@class NSString;

@interface FBSearchWebViewSingleStateExperimentContext : FBExperimentContext {

	char _enableSingleStateV3WebView;
	NSString* _rankingModelSingleState;
	NSString* _pulseLinkSuggestionColorTint;

}

@property (nonatomic,readonly) char enableSingleStateV3WebView;                           //@synthesize enableSingleStateV3WebView=_enableSingleStateV3WebView - In the implementation block
@property (nonatomic,copy,readonly) NSString * rankingModelSingleState;                   //@synthesize rankingModelSingleState=_rankingModelSingleState - In the implementation block
@property (nonatomic,copy,readonly) NSString * pulseLinkSuggestionColorTint;              //@synthesize pulseLinkSuggestionColorTint=_pulseLinkSuggestionColorTint - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(char)enableSingleStateV3WebView;
-(NSString *)rankingModelSingleState;
-(NSString *)pulseLinkSuggestionColorTint;
@end

