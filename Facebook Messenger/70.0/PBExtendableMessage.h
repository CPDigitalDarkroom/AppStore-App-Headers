/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/PBGeneratedMessage.h>

@class NSMutableDictionary;

@interface PBExtendableMessage : PBGeneratedMessage {

	NSMutableDictionary* extensionMap;
	NSMutableDictionary* extensionRegistry;

}

@property (retain) NSMutableDictionary * extensionMap; 
@property (retain) NSMutableDictionary * extensionRegistry; 
-(NSMutableDictionary *)extensionRegistry;
-(char)extensionsAreInitialized;
-(void)writeExtensionsToCodedOutputStream:(id)arg1 from:(long)arg2 to:(long)arg3 ;
-(long)extensionsSerializedSize;
-(void)writeExtensionDescriptionToMutableString:(id)arg1 from:(long)arg2 to:(long)arg3 withIndent:(id)arg4 ;
-(char)isEqualExtensionsInOther:(id)arg1 from:(long)arg2 to:(long)arg3 ;
-(unsigned)hashExtensionsFrom:(long)arg1 to:(long)arg2 ;
-(char)isInitialized:(id)arg1 ;
-(void)ensureExtensionIsRegistered:(id)arg1 ;
-(void)setExtensionRegistry:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)extensionMap;
-(id)getExtension:(id)arg1 ;
-(char)hasExtension:(id)arg1 ;
-(void)setExtensionMap:(NSMutableDictionary *)arg1 ;
@end

