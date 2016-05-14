/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:19 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNSecureThreadRequestHandling.h>

@protocol MNSecureThreadReading, MNEndOfMessagesFlagSetWriting, OS_dispatch_queue;
@class NSObject, NSString;

@interface MNSecureThreadRequestServiceHandler : NSObject <MNSecureThreadRequestHandling> {

	id<MNSecureThreadReading> _secureThreadReader;
	id<MNEndOfMessagesFlagSetWriting> _endOfMessagesFlagSetWriter;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleSecureThreadRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithSecureThreadReader:(id)arg1 endOfMessagesFlagSetWriter:(id)arg2 queue:(id)arg3 ;
@end

