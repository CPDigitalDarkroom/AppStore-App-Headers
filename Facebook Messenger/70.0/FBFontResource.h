/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:54 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSURL;

@interface FBFontResource : NSObject <NSCoding> {

	NSString* _name;
	NSString* _version;
	NSURL* _url;
	int _packagingMask;

}

@property (nonatomic,copy,readonly) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * version;              //@synthesize version=_version - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                     //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) int packagingMask;                    //@synthesize packagingMask=_packagingMask - In the implementation block
+(id)fontResourceWithName:(id)arg1 version:(id)arg2 url:(id)arg3 packagingMask:(int)arg4 ;
-(id)initWithName:(id)arg1 version:(id)arg2 url:(id)arg3 packagingMask:(int)arg4 ;
-(int)packagingMask;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(NSURL *)url;
-(NSString *)version;
@end

