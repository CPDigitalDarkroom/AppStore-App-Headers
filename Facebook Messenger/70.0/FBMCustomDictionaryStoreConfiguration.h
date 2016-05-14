/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBMCustomDictionaryStoreConfiguration : FBValueObject <NSCopying> {

	char _ignoreDeserializeFailure;
	unsigned _customBlobType;
	double _maxWriteInterval;

}

@property (nonatomic,readonly) double maxWriteInterval;                    //@synthesize maxWriteInterval=_maxWriteInterval - In the implementation block
@property (nonatomic,readonly) unsigned customBlobType;                    //@synthesize customBlobType=_customBlobType - In the implementation block
@property (nonatomic,readonly) char ignoreDeserializeFailure;              //@synthesize ignoreDeserializeFailure=_ignoreDeserializeFailure - In the implementation block
-(id)initWithMaxWriteInterval:(double)arg1 customBlobType:(unsigned)arg2 ignoreDeserializeFailure:(char)arg3 ;
-(unsigned)customBlobType;
-(double)maxWriteInterval;
-(char)ignoreDeserializeFailure;
@end

