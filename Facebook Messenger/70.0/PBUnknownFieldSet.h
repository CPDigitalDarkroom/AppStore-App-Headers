/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface PBUnknownFieldSet : NSObject {

	NSDictionary* fields;

}

@property (retain) NSDictionary * fields; 
+(id)parseFromData:(id)arg1 ;
+(id)parseFromInputStream:(id)arg1 ;
+(id)parseFromCodedInputStream:(id)arg1 ;
+(id)builderWithUnknownFields:(id)arg1 ;
+(id)setWithFields:(id)arg1 ;
+(id)defaultInstance;
+(void)initialize;
+(id)builder;
-(void)writeToCodedOutputStream:(id)arg1 ;
-(long)serializedSize;
-(void)writeDescriptionTo:(id)arg1 withIndent:(id)arg2 ;
-(void)writeToOutputStream:(id)arg1 ;
-(id)initWithFields:(id)arg1 ;
-(char)hasField:(long)arg1 ;
-(id)getField:(long)arg1 ;
-(void)writeAsMessageSetTo:(id)arg1 ;
-(long)serializedSizeAsMessageSet;
-(id)data;
-(NSDictionary *)fields;
-(void)setFields:(NSDictionary *)arg1 ;
@end

