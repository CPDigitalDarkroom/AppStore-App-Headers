/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:11 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface MNDataConsistencySnapshotDataset : FBValueObject <NSCopying> {

	NSDictionary* _inbox;
	NSDictionary* _messages;
	long long _sequenceId;

}

@property (nonatomic,copy,readonly) NSDictionary * inbox;                 //@synthesize inbox=_inbox - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * messages;              //@synthesize messages=_messages - In the implementation block
@property (nonatomic,readonly) long long sequenceId;                      //@synthesize sequenceId=_sequenceId - In the implementation block
-(long long)sequenceId;
-(id)initWithInbox:(id)arg1 messages:(id)arg2 sequenceId:(long long)arg3 ;
-(NSDictionary *)inbox;
-(NSDictionary *)messages;
@end

