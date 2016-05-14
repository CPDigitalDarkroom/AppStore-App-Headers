/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:19 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNSingleSyncedThreadFilter, MNModelRequestConfiguration, MNSingleThreadMessagingDataRequestBehavior;

@interface MNSingleThreadMessagingDataRequest : FBValueObject <NSCopying> {

	MNSingleSyncedThreadFilter* _filter;
	MNModelRequestConfiguration* _configuration;
	MNSingleThreadMessagingDataRequestBehavior* _behavior;

}

@property (nonatomic,copy,readonly) MNSingleSyncedThreadFilter * filter;                                //@synthesize filter=_filter - In the implementation block
@property (nonatomic,copy,readonly) MNModelRequestConfiguration * configuration;                        //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy,readonly) MNSingleThreadMessagingDataRequestBehavior * behavior;              //@synthesize behavior=_behavior - In the implementation block
-(id)initWithFilter:(id)arg1 configuration:(id)arg2 behavior:(id)arg3 ;
-(MNSingleSyncedThreadFilter *)filter;
-(MNModelRequestConfiguration *)configuration;
-(MNSingleThreadMessagingDataRequestBehavior *)behavior;
@end

