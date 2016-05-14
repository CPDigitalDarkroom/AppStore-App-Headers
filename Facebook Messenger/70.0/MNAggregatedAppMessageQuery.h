/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:10 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMSyncedThreadKey;

@interface MNAggregatedAppMessageQuery : FBValueObject <NSCopying> {

	FBMSyncedThreadKey* _threadKey;
	int _maxNumberOfTotalMessagesAllowed;
	int _maxNumberOfServerMessagesAllowed;
	int _maxNumberOfAPNSMessagesAllowed;
	int _maxNumberOfOutgoingMessagesAllowed;
	unsigned long long _limitTimestamp;

}

@property (nonatomic,copy,readonly) FBMSyncedThreadKey * threadKey;                 //@synthesize threadKey=_threadKey - In the implementation block
@property (nonatomic,readonly) unsigned long long limitTimestamp;                   //@synthesize limitTimestamp=_limitTimestamp - In the implementation block
@property (nonatomic,readonly) int maxNumberOfTotalMessagesAllowed;                 //@synthesize maxNumberOfTotalMessagesAllowed=_maxNumberOfTotalMessagesAllowed - In the implementation block
@property (nonatomic,readonly) int maxNumberOfServerMessagesAllowed;                //@synthesize maxNumberOfServerMessagesAllowed=_maxNumberOfServerMessagesAllowed - In the implementation block
@property (nonatomic,readonly) int maxNumberOfAPNSMessagesAllowed;                  //@synthesize maxNumberOfAPNSMessagesAllowed=_maxNumberOfAPNSMessagesAllowed - In the implementation block
@property (nonatomic,readonly) int maxNumberOfOutgoingMessagesAllowed;              //@synthesize maxNumberOfOutgoingMessagesAllowed=_maxNumberOfOutgoingMessagesAllowed - In the implementation block
-(id)initWithThreadKey:(id)arg1 limitTimestamp:(unsigned long long)arg2 maxNumberOfTotalMessagesAllowed:(int)arg3 maxNumberOfServerMessagesAllowed:(int)arg4 maxNumberOfAPNSMessagesAllowed:(int)arg5 maxNumberOfOutgoingMessagesAllowed:(int)arg6 ;
-(int)maxNumberOfTotalMessagesAllowed;
-(unsigned long long)limitTimestamp;
-(int)maxNumberOfOutgoingMessagesAllowed;
-(int)maxNumberOfAPNSMessagesAllowed;
-(int)maxNumberOfServerMessagesAllowed;
-(FBMSyncedThreadKey *)threadKey;
@end

