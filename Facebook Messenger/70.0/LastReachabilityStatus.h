/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:56 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface LastReachabilityStatus : NSObject {

	unsigned _status;
	NSDate* _lastChangeTime;

}

@property (nonatomic,readonly) unsigned status;                             //@synthesize status=_status - In the implementation block
@property (nonatomic,retain,readonly) NSDate * lastChangeTime;              //@synthesize lastChangeTime=_lastChangeTime - In the implementation block
-(id)initFromReachability:(id)arg1 ;
-(NSDate *)lastChangeTime;
-(void)dealloc;
-(unsigned)status;
@end

