/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface FBMessengerAppState : FBValueObject <NSCopying, NSCoding> {

	unsigned long long _threadListSyncActionId;
	long long _muteUntil;

}

@property (nonatomic,readonly) unsigned long long threadListSyncActionId;              //@synthesize threadListSyncActionId=_threadListSyncActionId - In the implementation block
@property (nonatomic,readonly) long long muteUntil;                                    //@synthesize muteUntil=_muteUntil - In the implementation block
-(long long)muteUntil;
-(unsigned long long)threadListSyncActionId;
-(id)initWithThreadListSyncActionId:(unsigned long long)arg1 muteUntil:(long long)arg2 ;
@end

