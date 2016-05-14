/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:08 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
@class NSArray;

@interface FBDecomposedRule : NSObject {

	NSArray* _valueComponents;
	float _sizeValue;
	CGSize _size;

}

@property (nonatomic,copy,readonly) NSArray * valueComponents;              //@synthesize valueComponents=_valueComponents - In the implementation block
@property (assign,nonatomic) float sizeValue;                               //@synthesize sizeValue=_sizeValue - In the implementation block
@property (assign,nonatomic) CGSize size;                                   //@synthesize size=_size - In the implementation block
-(id)initWithRule:(id)arg1 scaleInducer:(unsigned)arg2 ;
-(NSArray *)valueComponents;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(float)sizeValue;
-(void)setSizeValue:(float)arg1 ;
@end

