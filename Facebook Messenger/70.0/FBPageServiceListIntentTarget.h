/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBIntentTarget.h>

@class NSString;

@interface FBPageServiceListIntentTarget : FBIntentTarget {

	NSString* _FBID;
	NSString* _highlightItemFBID;
	NSString* _actionStyle;

}

@property (nonatomic,copy,readonly) NSString * FBID;                           //@synthesize FBID=_FBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * highlightItemFBID;              //@synthesize highlightItemFBID=_highlightItemFBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionStyle;                    //@synthesize actionStyle=_actionStyle - In the implementation block
+(id)pageServiceListTargetWithFBID:(id)arg1 highlightItemFBID:(id)arg2 actionStyle:(id)arg3 ;
-(NSString *)FBID;
-(id)fallbackURLs;
-(NSString *)actionStyle;
-(NSString *)highlightItemFBID;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
@end

