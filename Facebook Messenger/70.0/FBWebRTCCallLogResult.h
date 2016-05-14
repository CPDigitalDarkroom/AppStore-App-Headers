/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:55 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface FBWebRTCCallLogResult : NSObject {

	id _value;
	NSError* _error;

}

@property (retain) id value;                      //@synthesize value=_value - In the implementation block
@property (retain) NSError * error;               //@synthesize error=_error - In the implementation block
@property (readonly) char succeeded; 
+(id)successWithResult:(id)arg1 ;
+(id)error:(id)arg1 ;
+(id)success;
-(char)succeeded;
-(NSError *)error;
-(id)initWithResult:(id)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(id)initWithError:(id)arg1 ;
@end

