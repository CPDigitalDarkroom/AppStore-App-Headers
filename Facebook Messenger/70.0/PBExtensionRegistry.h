/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface PBExtensionRegistry : NSObject {

	NSDictionary* classMap;

}

@property (retain) NSDictionary * classMap; 
+(id)emptyRegistry;
+(void)initialize;
-(id)getExtension:(Class)arg1 fieldNumber:(long)arg2 ;
-(void)setClassMap:(NSDictionary *)arg1 ;
-(NSDictionary *)classMap;
-(id)initWithClassMap:(id)arg1 ;
-(id)keyForClass:(Class)arg1 ;
@end

