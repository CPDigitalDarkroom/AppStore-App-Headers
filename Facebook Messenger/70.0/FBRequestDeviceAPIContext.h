/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:55 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface FBRequestDeviceAPIContext : NSObject {

	NSDictionary* _appContext;
	NSDictionary* _deviceContext;
	NSString* _method;
	NSString* _thirdPartyAppId;
	NSDictionary* _methodContext;

}

@property (nonatomic,copy) NSDictionary * appContext;                 //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,copy) NSDictionary * deviceContext;              //@synthesize deviceContext=_deviceContext - In the implementation block
@property (nonatomic,copy,readonly) NSString * method;                //@synthesize method=_method - In the implementation block
@property (nonatomic,copy) NSString * thirdPartyAppId;                //@synthesize thirdPartyAppId=_thirdPartyAppId - In the implementation block
@property (nonatomic,copy) NSDictionary * methodContext;              //@synthesize methodContext=_methodContext - In the implementation block
-(void)setThirdPartyAppId:(NSString *)arg1 ;
-(void)setMethodContext:(NSDictionary *)arg1 ;
-(NSDictionary *)deviceContext;
-(NSString *)thirdPartyAppId;
-(NSDictionary *)methodContext;
-(void)setDeviceContext:(NSDictionary *)arg1 ;
-(NSString *)method;
-(id)initWithMethod:(id)arg1 ;
-(void)setAppContext:(NSDictionary *)arg1 ;
-(NSDictionary *)appContext;
-(id)requestParameters;
@end

