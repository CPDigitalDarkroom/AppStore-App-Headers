/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBBackgroundEventKey : FBValueObject <NSCopying> {

	unsigned _eventType;
	NSString* _eventIdentifier;

}

@property (nonatomic,readonly) unsigned eventType;                           //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventIdentifier;              //@synthesize eventIdentifier=_eventIdentifier - In the implementation block
-(unsigned)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(id)initWithEventType:(unsigned)arg1 eventIdentifier:(id)arg2 ;
-(NSString *)eventIdentifier;
-(unsigned)eventType;
@end

