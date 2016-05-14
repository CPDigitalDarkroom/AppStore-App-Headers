/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, FBTypedNSArrayOfNSString, NSNumber;

@interface FBPrivacyEntity : FBValueObject <NSCopying, NSCoding> {

	char _isMostRecent;
	NSString* _value;
	FBTypedNSArrayOfNSString* _allowedIDs;
	FBTypedNSArrayOfNSString* _deniedIDs;
	FBTypedNSArrayOfNSString* _objectIDs;
	NSString* _primaryAllowToken;
	unsigned _kind;
	NSString* _listType;
	NSString* _listGraphQLID;
	NSNumber* _noTagExpansion;
	int _intrinsicTagExpansionStyle;
	NSString* _optionType;

}

@property (nonatomic,copy,readonly) NSString * value;                                   //@synthesize value=_value - In the implementation block
@property (nonatomic,copy,readonly) FBTypedNSArrayOfNSString * allowedIDs;              //@synthesize allowedIDs=_allowedIDs - In the implementation block
@property (nonatomic,copy,readonly) FBTypedNSArrayOfNSString * deniedIDs;               //@synthesize deniedIDs=_deniedIDs - In the implementation block
@property (nonatomic,copy,readonly) FBTypedNSArrayOfNSString * objectIDs;               //@synthesize objectIDs=_objectIDs - In the implementation block
@property (nonatomic,copy,readonly) NSString * primaryAllowToken;                       //@synthesize primaryAllowToken=_primaryAllowToken - In the implementation block
@property (nonatomic,readonly) unsigned kind;                                           //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy,readonly) NSString * listType;                                //@synthesize listType=_listType - In the implementation block
@property (nonatomic,copy,readonly) NSString * listGraphQLID;                           //@synthesize listGraphQLID=_listGraphQLID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * noTagExpansion;                          //@synthesize noTagExpansion=_noTagExpansion - In the implementation block
@property (nonatomic,readonly) char isMostRecent;                                       //@synthesize isMostRecent=_isMostRecent - In the implementation block
@property (nonatomic,readonly) int intrinsicTagExpansionStyle;                          //@synthesize intrinsicTagExpansionStyle=_intrinsicTagExpansionStyle - In the implementation block
@property (nonatomic,copy,readonly) NSString * optionType;                              //@synthesize optionType=_optionType - In the implementation block
-(NSString *)primaryAllowToken;
-(NSString *)listGraphQLID;
-(FBTypedNSArrayOfNSString *)allowedIDs;
-(FBTypedNSArrayOfNSString *)deniedIDs;
-(NSNumber *)noTagExpansion;
-(char)isMostRecent;
-(int)intrinsicTagExpansionStyle;
-(NSString *)optionType;
-(id)initWithValue:(id)arg1 allowedIDs:(id)arg2 deniedIDs:(id)arg3 objectIDs:(id)arg4 primaryAllowToken:(id)arg5 kind:(unsigned)arg6 listType:(id)arg7 listGraphQLID:(id)arg8 noTagExpansion:(id)arg9 isMostRecent:(char)arg10 intrinsicTagExpansionStyle:(int)arg11 optionType:(id)arg12 ;
-(NSString *)value;
-(unsigned)kind;
-(NSString *)listType;
-(FBTypedNSArrayOfNSString *)objectIDs;
@end

