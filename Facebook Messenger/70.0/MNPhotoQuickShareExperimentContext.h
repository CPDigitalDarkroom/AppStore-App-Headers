/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:57 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBExperimentContext.h>

@interface MNPhotoQuickShareExperimentContext : FBExperimentContext {

	char _enabled;
	char _actionSheetEnabled;
	char _inboxUnitEnabled;
	int _triggerInterval;

}

@property (nonatomic,readonly) char enabled;                         //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) int triggerInterval;                  //@synthesize triggerInterval=_triggerInterval - In the implementation block
@property (nonatomic,readonly) char actionSheetEnabled;              //@synthesize actionSheetEnabled=_actionSheetEnabled - In the implementation block
@property (nonatomic,readonly) char inboxUnitEnabled;                //@synthesize inboxUnitEnabled=_inboxUnitEnabled - In the implementation block
+(char)allowUserInterfaceIdiom:(int)arg1 ;
+(id)universeName;
+(id)parameterConfigurations;
-(char)inboxUnitEnabled;
-(int)triggerInterval;
-(char)actionSheetEnabled;
-(char)enabled;
@end

