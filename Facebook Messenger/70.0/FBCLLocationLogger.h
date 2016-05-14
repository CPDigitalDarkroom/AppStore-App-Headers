/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:21 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserPreferences;

@interface FBCLLocationLogger : NSObject {

	unsigned _eventCtxCounter;
	unsigned _eventDataCounter;
	unsigned _impl;
	FBUserPreferences* _userPreferences;

}
+(id)_captureSystemDictionary;
-(id)initWithDataCollectionImpl:(unsigned)arg1 userPreferences:(id)arg2 ;
-(void)logActivities:(id)arg1 ;
-(void)logVisits:(id)arg1 ;
-(void)logTrace:(id)arg1 step:(id)arg2 ;
-(void)logEventTrigger:(id)arg1 didRequestLocation:(char)arg2 ;
-(void)logEventSet:(id)arg1 ;
-(void)logLocations:(id)arg1 eventSet:(id)arg2 success:(char)arg3 error:(id)arg4 ;
-(void)logPermissionStatus:(unsigned)arg1 isExpired:(char)arg2 locationAuthorizationStatus:(int)arg3 ;
-(void)logTrace:(id)arg1 step:(id)arg2 payload:(id)arg3 ;
@end

