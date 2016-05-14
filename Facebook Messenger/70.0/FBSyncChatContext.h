/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:42 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBSyncChatContext : NSObject <NSCopying> {

	NSString* _type;
	NSString* _subtext;
	NSString* _secondarySubtext;

}

@property (nonatomic,copy) NSString * type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * subtext;                       //@synthesize subtext=_subtext - In the implementation block
@property (nonatomic,copy) NSString * secondarySubtext;              //@synthesize secondarySubtext=_secondarySubtext - In the implementation block
+(id)chatContextWithType:(id)arg1 subtext:(id)arg2 secondarySubtext:(id)arg3 ;
-(id)initWithType:(id)arg1 subtext:(id)arg2 secondarySubtext:(id)arg3 ;
-(void)setSubtext:(NSString *)arg1 ;
-(void)setSecondarySubtext:(NSString *)arg1 ;
-(NSString *)secondarySubtext;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)subtext;
@end

