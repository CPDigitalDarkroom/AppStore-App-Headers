/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:57 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNMessageSendConversionLogging.h>

@class NSString;

@interface MNInboxSendConversionLogger : NSObject <MNMessageSendConversionLogging>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)shouldLogSendConversionForContext:(id)arg1 ;
-(char)shouldLogSendConversionForOutgoingMessageWithIndexInContext:(unsigned)arg1 ;
-(void)logAttemptedSendConversionForContext:(id)arg1 offlineThreadingId:(id)arg2 ;
@end

