/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/PBGeneratedMessage.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/GeneratedMessageProtocol.h>

@class NSString, PBFieldOptions;

@interface PBFieldDescriptorProto : PBGeneratedMessage <GeneratedMessageProtocol> {

	unsigned hasNumber_ : 1;
	unsigned hasOneofIndex_ : 1;
	unsigned hasName_ : 1;
	unsigned hasTypeName_ : 1;
	unsigned hasExtendee_ : 1;
	unsigned hasDefaultValue_ : 1;
	unsigned hasOptions_ : 1;
	unsigned hasLabel_ : 1;
	unsigned hasType_ : 1;
	long number;
	long oneofIndex;
	NSString* name;
	NSString* typeName;
	NSString* extendee;
	NSString* defaultValue;
	PBFieldOptions* options;
	long label;
	long type;

}

@property (retain) NSString * name; 
@property (assign) long number; 
@property (assign) long label; 
@property (assign) long type; 
@property (retain) NSString * typeName; 
@property (retain) NSString * extendee; 
@property (retain) NSString * defaultValue; 
@property (assign) long oneofIndex; 
@property (retain) PBFieldOptions * options; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parseFromData:(id)arg1 ;
+(id)builderWithPrototype:(id)arg1 ;
+(id)parseFromData:(id)arg1 extensionRegistry:(id)arg2 ;
+(id)parseFromInputStream:(id)arg1 ;
+(id)parseFromInputStream:(id)arg1 extensionRegistry:(id)arg2 ;
+(id)parseFromCodedInputStream:(id)arg1 ;
+(id)parseFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 ;
+(id)defaultInstance;
+(void)initialize;
+(id)builder;
-(void)writeToCodedOutputStream:(id)arg1 ;
-(long)serializedSize;
-(void)writeDescriptionTo:(id)arg1 withIndent:(id)arg2 ;
-(id)toBuilder;
-(void)setHasName:(char)arg1 ;
-(void)setTypeName:(NSString *)arg1 ;
-(void)setExtendee:(NSString *)arg1 ;
-(void)setOneofIndex:(long)arg1 ;
-(char)hasExtendee;
-(NSString *)extendee;
-(char)hasNumber;
-(char)hasTypeName;
-(char)hasDefaultValue;
-(char)hasOneofIndex;
-(long)oneofIndex;
-(void)setHasNumber:(char)arg1 ;
-(void)setHasTypeName:(char)arg1 ;
-(void)setHasExtendee:(char)arg1 ;
-(void)setHasDefaultValue:(char)arg1 ;
-(void)setHasOneofIndex:(char)arg1 ;
-(void)setHasLabel:(char)arg1 ;
-(id)defaultInstance;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setType:(long)arg1 ;
-(long)type;
-(long)label;
-(void)setLabel:(long)arg1 ;
-(void)setOptions:(PBFieldOptions *)arg1 ;
-(PBFieldOptions *)options;
-(NSString *)defaultValue;
-(void)setDefaultValue:(NSString *)arg1 ;
-(id)builder;
-(char)isInitialized;
-(void)setHasType:(char)arg1 ;
-(char)hasName;
-(char)hasOptions;
-(char)hasLabel;
-(void)setHasOptions:(char)arg1 ;
-(NSString *)typeName;
-(long)number;
-(void)setNumber:(long)arg1 ;
-(char)hasType;
@end

