/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:55 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBLigerRequestObserver.h>

@class NSDictionary;

@interface FBLigerSamplingRequestObserver : NSObject <FBLigerRequestObserver> {

	NSDictionary* _extra;
	unsigned _ratio;

}
-(id)initWithSamplingRatio:(unsigned)arg1 ;
-(char)shouldLogEvent;
-(id)extraForRequest:(id)arg1 ;
-(void)request:(id)arg1 completedWithResponse:(id)arg2 events:(const vector<proxygen::TraceEvent, std::__1::allocator<proxygen::TraceEvent> >*)arg3 ;
-(void)request:(id)arg1 failedWithError:(id)arg2 events:(const vector<proxygen::TraceEvent, std::__1::allocator<proxygen::TraceEvent> >*)arg3 ;
-(void)request:(id)arg1 wasCancelledWithEvents:(const vector<proxygen::TraceEvent, std::__1::allocator<proxygen::TraceEvent> >*)arg2 ;
-(void)requestStartedLoading:(id)arg1 ;
-(id)init;
@end

