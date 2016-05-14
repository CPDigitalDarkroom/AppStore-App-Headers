/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:19 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNThreadListRequestFilter : FBValueObject <NSCopying> {

	int _threadListType;
	int _limit;
	unsigned long long _olderThanTimestamp;

}

@property (nonatomic,readonly) int threadListType;                                 //@synthesize threadListType=_threadListType - In the implementation block
@property (nonatomic,readonly) unsigned long long olderThanTimestamp;              //@synthesize olderThanTimestamp=_olderThanTimestamp - In the implementation block
@property (nonatomic,readonly) int limit;                                          //@synthesize limit=_limit - In the implementation block
-(int)threadListType;
-(id)initWithThreadListType:(int)arg1 olderThanTimestamp:(unsigned long long)arg2 limit:(int)arg3 ;
-(unsigned long long)olderThanTimestamp;
-(int)limit;
@end

