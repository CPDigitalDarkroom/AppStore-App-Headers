/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:08 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface FBParsedType : NSObject {

	NSString* _name;
	NSString* _typeEncoding;
	NSArray* _typePath;

}

@property (nonatomic,copy,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * typeEncoding;              //@synthesize typeEncoding=_typeEncoding - In the implementation block
@property (nonatomic,copy) NSArray * typePath;                            //@synthesize typePath=_typePath - In the implementation block
-(id)initWithName:(id)arg1 typeEncoding:(id)arg2 ;
-(void)passTypePath:(id)arg1 ;
-(NSArray *)typePath;
-(void)setTypePath:(NSArray *)arg1 ;
-(NSString *)name;
-(NSString *)typeEncoding;
@end

