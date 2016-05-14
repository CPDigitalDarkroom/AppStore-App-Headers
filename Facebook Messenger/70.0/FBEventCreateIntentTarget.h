/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBIntentTarget.h>

@class NSArray, NSString, NSDate;

@interface FBEventCreateIntentTarget : FBIntentTarget {

	int _surface;
	NSArray* _recipientFBIDs;
	NSString* _title;
	NSString* _themeID;
	NSString* _themeURI;
	NSDate* _startTime;

}

@property (nonatomic,readonly) int surface;                                //@synthesize surface=_surface - In the implementation block
@property (nonatomic,copy,readonly) NSArray * recipientFBIDs;              //@synthesize recipientFBIDs=_recipientFBIDs - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * themeID;                    //@synthesize themeID=_themeID - In the implementation block
@property (nonatomic,copy,readonly) NSString * themeURI;                   //@synthesize themeURI=_themeURI - In the implementation block
@property (nonatomic,copy,readonly) NSDate * startTime;                    //@synthesize startTime=_startTime - In the implementation block
+(id)eventCreateTargetWithSurface:(int)arg1 recipientFBIDs:(id)arg2 title:(id)arg3 themeID:(id)arg4 themeURI:(id)arg5 startTime:(id)arg6 ;
-(id)fallbackURLs;
-(NSArray *)recipientFBIDs;
-(NSString *)themeID;
-(NSString *)themeURI;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)title;
-(NSDate *)startTime;
-(int)surface;
@end

