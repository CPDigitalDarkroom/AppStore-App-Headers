/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:06 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <CoreFoundation/NSInputStream.h>

@class NSInputStream;

@interface ZZStandardDecryptInputStream : NSInputStream {

	NSInputStream* _upstream;
	unsigned _status;
	ZZStandardCryptoEngine _crypto;

}
-(id)initWithStream:(id)arg1 password:(id)arg2 header:(char*)arg3 check:(unsigned short)arg4 version:(unsigned char)arg5 error:(out id*)arg6 ;
-(char)getBuffer:(char**)arg1 length:(unsigned*)arg2 ;
-(void)close;
-(void)open;
-(unsigned)streamStatus;
-(char)hasBytesAvailable;
-(int)read:(char*)arg1 maxLength:(unsigned)arg2 ;
-(id)streamError;
@end

