/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:06 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBComposerSponsor : FBValueObject <NSCopying, NSCoding> {

	char _isVerified;
	NSString* _sponsorName;
	NSString* _sponsorId;

}

@property (nonatomic,copy,readonly) NSString * sponsorName;              //@synthesize sponsorName=_sponsorName - In the implementation block
@property (nonatomic,copy,readonly) NSString * sponsorId;                //@synthesize sponsorId=_sponsorId - In the implementation block
@property (nonatomic,readonly) char isVerified;                          //@synthesize isVerified=_isVerified - In the implementation block
-(char)isVerified;
-(id)initWithSponsorName:(id)arg1 sponsorId:(id)arg2 isVerified:(char)arg3 ;
-(NSString *)sponsorName;
-(NSString *)sponsorId;
@end

