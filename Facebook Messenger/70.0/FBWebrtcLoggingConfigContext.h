/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:12 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBExperimentContext.h>

@class NSString;

@interface FBWebrtcLoggingConfigContext : FBExperimentContext {

	int _basic_log_permyriad;
	int _debug_pct;
	NSString* _levels;
	NSString* _enabled_temp_modules;
	int _summary_debug_permyriad;

}

@property (nonatomic,readonly) int basic_log_permyriad;                           //@synthesize basic_log_permyriad=_basic_log_permyriad - In the implementation block
@property (nonatomic,readonly) int debug_pct;                                     //@synthesize debug_pct=_debug_pct - In the implementation block
@property (nonatomic,copy,readonly) NSString * levels;                            //@synthesize levels=_levels - In the implementation block
@property (nonatomic,copy,readonly) NSString * enabled_temp_modules;              //@synthesize enabled_temp_modules=_enabled_temp_modules - In the implementation block
@property (nonatomic,readonly) int summary_debug_permyriad;                       //@synthesize summary_debug_permyriad=_summary_debug_permyriad - In the implementation block
+(char)allowUserInterfaceIdiom:(int)arg1 ;
+(id)universeName;
+(id)parameterConfigurations;
-(int)basic_log_permyriad;
-(int)debug_pct;
-(NSString *)enabled_temp_modules;
-(int)summary_debug_permyriad;
-(NSString *)levels;
@end

