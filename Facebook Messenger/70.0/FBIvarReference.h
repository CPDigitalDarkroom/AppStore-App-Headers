/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:08 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBObjectReference.h>

@class NSString;

@interface FBIvarReference : NSObject <FBObjectReference> {

	NSString* _name;
	unsigned _type;
	int _offset;
	unsigned _index;
	objc_ivarRef _ivar;

}

@property (nonatomic,copy,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) int offset;                          //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) unsigned index;                      //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) objc_ivarRef ivar;                   //@synthesize ivar=_ivar - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)namePath;
-(unsigned)_convertEncodingToType:(const char*)arg1 ;
-(id)initWithIvar:(objc_ivarRef)arg1 ;
-(unsigned)indexInIvarLayout;
-(id)objectReferenceFromObject:(id)arg1 ;
-(objc_ivarRef)ivar;
-(NSString *)description;
-(NSString *)name;
-(unsigned)type;
-(int)offset;
-(unsigned)index;
@end

