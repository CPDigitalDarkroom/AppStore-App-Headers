/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@class NSInvocation, NSMutableArray;

@interface OCMockRecorder : NSProxy {

	id signatureResolver;
	char recordedAsClassMethod;
	char ignoreNonObjectArgs;
	NSInvocation* recordedInvocation;
	NSMutableArray* invocationHandlers;

}
-(char)matchesSelector:(SEL)arg1 ;
-(char)matchesInvocation:(id)arg1 ;
-(id)invocationHandlers;
-(id)initWithSignatureResolver:(id)arg1 ;
-(id)classMethod;
-(void)releaseInvocation;
-(id)andReturn:(id)arg1 ;
-(id)andReturnValue:(id)arg1 ;
-(id)andThrow:(id)arg1 ;
-(id)andPost:(id)arg1 ;
-(id)andCall:(SEL)arg1 onObject:(id)arg2 ;
-(id)andDo:(/*^block*/id)arg1 ;
-(id)andForwardToRealObject;
-(id)ignoringNonObjectArgs;
-(void)dealloc;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

