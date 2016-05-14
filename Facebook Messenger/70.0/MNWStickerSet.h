/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:59 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNWImageInfo, NSString, UIColor, NSArray;

@interface MNWStickerSet : FBValueObject <NSCopying, NSCoding> {

	MNWImageInfo* _imageInfo;
	NSString* _name;
	UIColor* _backgroundColor;
	NSArray* _stickers;

}

@property (nonatomic,copy,readonly) MNWImageInfo * imageInfo;               //@synthesize imageInfo=_imageInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy,readonly) NSArray * stickers;                     //@synthesize stickers=_stickers - In the implementation block
-(id)initWithImageInfo:(id)arg1 name:(id)arg2 backgroundColor:(id)arg3 stickers:(id)arg4 ;
-(NSArray *)stickers;
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)backgroundColor;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(MNWImageInfo *)imageInfo;
@end

