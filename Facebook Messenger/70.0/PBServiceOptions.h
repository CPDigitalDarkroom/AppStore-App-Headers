/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/PBExtendableMessage.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/GeneratedMessageProtocol.h>

@class NSMutableArray, NSArray, NSString;

@interface PBServiceOptions : PBExtendableMessage <GeneratedMessageProtocol> {

	unsigned hasDeprecated_ : 1;
	unsigned deprecated_ : 1;
	NSMutableArray* uninterpretedOptionArray;

}

@property (assign) char deprecated; 
@property (retain) NSMutableArray * uninterpretedOptionArray; 
@property (readonly) NSArray * uninterpretedOption; 
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
-(void)setDeprecated:(char)arg1 ;
-(NSArray *)uninterpretedOption;
-(char)hasDeprecated;
-(char)deprecated;
-(NSMutableArray *)uninterpretedOptionArray;
-(void)setHasDeprecated:(char)arg1 ;
-(id)uninterpretedOptionAtIndex:(unsigned)arg1 ;
-(void)setUninterpretedOptionArray:(NSMutableArray *)arg1 ;
-(id)defaultInstance;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)builder;
-(char)isInitialized;
@end

