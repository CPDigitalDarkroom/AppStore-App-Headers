/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/PBGeneratedMessageBuilder.h>

@class PBServiceDescriptorProto;

@interface PBServiceDescriptorProtoBuilder : PBGeneratedMessageBuilder {

	PBServiceDescriptorProto* resultServiceDescriptorProto;

}

@property (retain) PBServiceDescriptorProto * resultServiceDescriptorProto; 
-(id)mergeFromCodedInputStream:(id)arg1 ;
-(id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 ;
-(id)buildPartial;
-(id)internalGetResult;
-(id)mergeOptions:(id)arg1 ;
-(id)clearName;
-(id)setOptionsBuilder:(id)arg1 ;
-(id)clearOptions;
-(id)methodAtIndex:(unsigned)arg1 ;
-(id)setMethodArray:(id)arg1 ;
-(void)setResultServiceDescriptorProto:(PBServiceDescriptorProto *)arg1 ;
-(PBServiceDescriptorProto *)resultServiceDescriptorProto;
-(id)clone;
-(id)defaultInstance;
-(id)init;
-(id)setName:(id)arg1 ;
-(id)name;
-(id)clear;
-(id)setOptions:(id)arg1 ;
-(id)options;
-(id)method;
-(id)addMethod:(id)arg1 ;
-(id)mergeFrom:(id)arg1 ;
-(char)hasName;
-(char)hasOptions;
-(id)build;
-(id)clearMethod;
@end

