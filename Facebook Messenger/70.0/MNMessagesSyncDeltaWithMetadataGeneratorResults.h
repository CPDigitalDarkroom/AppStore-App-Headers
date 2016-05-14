/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:14 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface MNMessagesSyncDeltaWithMetadataGeneratorResults : FBValueObject <NSCopying> {

	char _shouldForceFetchInbox;
	NSArray* _deltasWithMetadata;
	long long _firstSequenceId;
	long long _lastSequenceId;

}

@property (nonatomic,copy,readonly) NSArray * deltasWithMetadata;              //@synthesize deltasWithMetadata=_deltasWithMetadata - In the implementation block
@property (nonatomic,readonly) char shouldForceFetchInbox;                     //@synthesize shouldForceFetchInbox=_shouldForceFetchInbox - In the implementation block
@property (nonatomic,readonly) long long firstSequenceId;                      //@synthesize firstSequenceId=_firstSequenceId - In the implementation block
@property (nonatomic,readonly) long long lastSequenceId;                       //@synthesize lastSequenceId=_lastSequenceId - In the implementation block
-(long long)lastSequenceId;
-(char)shouldForceFetchInbox;
-(NSArray *)deltasWithMetadata;
-(id)initWithDeltasWithMetadata:(id)arg1 shouldForceFetchInbox:(char)arg2 firstSequenceId:(long long)arg3 lastSequenceId:(long long)arg4 ;
-(long long)firstSequenceId;
@end

