/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:46 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBPushUnregisterRequestParams : NSObject {

	NSString* _token;
	NSString* _transmitterID;

}

@property (nonatomic,copy) NSString * token;                      //@synthesize token=_token - In the implementation block
@property (nonatomic,copy) NSString * transmitterID;              //@synthesize transmitterID=_transmitterID - In the implementation block
-(NSString *)transmitterID;
-(id)initWithToken:(id)arg1 transmitterID:(id)arg2 ;
-(void)setTransmitterID:(NSString *)arg1 ;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
@end

