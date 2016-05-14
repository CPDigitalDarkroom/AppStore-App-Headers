/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:56 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/ZRTariffedUxSessionInternal.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/ZRTariffedUxSession.h>

@class NSString, NSDate, ZRTariffedUxSession;

@interface ZRTariffedUxSessionCookie : NSProxy <ZRTariffedUxSessionInternal, ZRTariffedUxSession> {

	ZRTariffedUxSession* _session;

}

@property (nonatomic,retain) ZRTariffedUxSession * session;                           //@synthesize session=_session - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,retain,readonly) id<ZRTariffedUrlWhitelist> filter; 
@property (nonatomic,retain,readonly) NSDate * invalidationTime; 
@property (getter=isValid,nonatomic,readonly) char valid; 
-(id)initWithName:(id)arg1 filter:(id)arg2 sessionManager:(id)arg3 zeroRatingState:(id)arg4 ;
-(void)notification:(id)arg1 ;
-(ZRTariffedUxSession *)session;
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)setSession:(ZRTariffedUxSession *)arg1 ;
@end

