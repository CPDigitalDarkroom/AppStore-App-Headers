/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:06 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol NSCopying;
@class NSObject;

@interface FBValueObjectEither : FBValueObject <NSCopying, NSCoding> {

	char _isLeft;
	NSObject*<NSCopying> _left;
	NSObject*<NSCopying> _right;

}

@property (nonatomic,readonly) char isLeft;                                  //@synthesize isLeft=_isLeft - In the implementation block
@property (nonatomic,copy,readonly) NSObject*<NSCopying> left;               //@synthesize left=_left - In the implementation block
@property (nonatomic,copy,readonly) NSObject*<NSCopying> right;              //@synthesize right=_right - In the implementation block
+(id)right:(id)arg1 ;
+(id)left:(id)arg1 ;
-(void)matchLeft:(/*^block*/id)arg1 right:(/*^block*/id)arg2 ;
-(char)isLeft;
-(NSObject*<NSCopying>)left;
-(NSObject*<NSCopying>)right;
@end

