/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:08 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
@interface JKSerializer : NSObject {

	JKEncodeState* encodeState;

}
+(id)serializeObject:(id)arg1 options:(unsigned)arg2 encodeOption:(unsigned)arg3 block:(/*^block*/id)arg4 delegate:(id)arg5 selector:(SEL)arg6 error:(id*)arg7 ;
-(id)serializeObject:(id)arg1 options:(unsigned)arg2 encodeOption:(unsigned)arg3 block:(/*^block*/id)arg4 delegate:(id)arg5 selector:(SEL)arg6 error:(id*)arg7 ;
-(void)releaseState;
-(void)dealloc;
@end

