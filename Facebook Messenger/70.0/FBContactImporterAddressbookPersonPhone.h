/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:21 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBContactImporterAddressbookPersonCredential.h>

@class NSString;

@interface FBContactImporterAddressbookPersonPhone : NSObject <FBContactImporterAddressbookPersonCredential> {

	int _type;
	NSString* _label;
	NSString* _value;

}

@property (nonatomic,readonly) int type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * label;                    //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * value;                    //@synthesize value=_value - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithValue:(CFStringRef)arg1 ABRecordLabel:(CFStringRef)arg2 ;
-(int)_getTypeForLabel:(CFStringRef)arg1 ;
-(id)_getStringForLabel:(CFStringRef)arg1 ;
-(char)isBetterChoiceForPrimaryCredentialThan:(id)arg1 ;
-(NSString *)description;
-(int)type;
-(NSString *)value;
-(NSString *)label;
-(id)initWithValue:(CFStringRef)arg1 ;
@end

