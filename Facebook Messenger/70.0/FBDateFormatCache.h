/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:58 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group, FBUserDefaults;
@class NSString, NSDictionary, NSObject, NSNotificationCenter, NSLocale, NSCalendar;

@interface FBDateFormatCache : NSObject {

	NSString* _cacheKey;
	NSDictionary* _formats;
	NSObject*<OS_dispatch_group> _formatsInitializingGroup;
	NSNotificationCenter* _notificationCenter;
	NSLocale* _locale;
	NSCalendar* _calendar;
	id<FBUserDefaults> _userDefaults;

}
+(id)sharedCache;
-(id)formatForTemplate:(id)arg1 ;
-(void)_onCalendarChanged:(id)arg1 ;
-(id)_formatsForTemplates:(id)arg1 ;
-(id)initWithNotificationCenter:(id)arg1 locale:(id)arg2 calendar:(id)arg3 userDefaults:(id)arg4 ;
-(void)_updateFormatsWithDictionary:(id)arg1 ;
-(void)_updateFormatsIfNeeded;
-(void)_updateAllFormats;
-(void)addTemplates:(id)arg1 ;
-(void)dealloc;
@end

