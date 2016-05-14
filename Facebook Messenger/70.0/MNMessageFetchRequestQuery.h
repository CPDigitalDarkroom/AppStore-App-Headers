/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:19 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNMessageHistoryQuery, MNSpecificMessageQuery;

@interface MNMessageFetchRequestQuery : NSObject <NSCopying> {

	unsigned _subtype;
	MNMessageHistoryQuery* _history;
	MNSpecificMessageQuery* _specificMessage;

}
+(id)history:(id)arg1 ;
+(id)specificMessage:(id)arg1 ;
-(void)matchHistory:(/*^block*/id)arg1 specificMessage:(/*^block*/id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

