/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:11 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNMessageSendState;

@interface MNMessageSendStateTransitionResult : NSObject <NSCopying> {

	unsigned _subtype;
	char _finished_succeeded;
	MNMessageSendState* _toBeContinued_toState;

}
+(id)finishedWithSucceeded:(char)arg1 ;
+(id)toBeContinuedWithToState:(id)arg1 ;
+(id)invalid;
-(void)matchFinished:(/*^block*/id)arg1 toBeContinued:(/*^block*/id)arg2 invalid:(/*^block*/id)arg3 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

