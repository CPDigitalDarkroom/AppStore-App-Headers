/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:59 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBMSyncedThreadKey;

@interface MNWatchAppContext : FBValueObject <NSCopying, NSCoding> {

	FBMSyncedThreadKey* _activeThreadKey;

}

@property (nonatomic,copy,readonly) FBMSyncedThreadKey * activeThreadKey;              //@synthesize activeThreadKey=_activeThreadKey - In the implementation block
-(FBMSyncedThreadKey *)activeThreadKey;
-(id)initWithActiveThreadKey:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

