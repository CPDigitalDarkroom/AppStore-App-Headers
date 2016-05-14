/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:56 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBWebImageSpecifier.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCopying;
@class UIImage, NSURL, NSObject, NSString;

@interface FBWebImageMemorySpecifier : NSObject <FBWebImageSpecifier, NSCopying> {

	UIImage* _image;
	unsigned _imageFlag;
	NSURL* _url;
	NSObject*<NSCopying> _logicalIdentifier;

}

@property (nonatomic,readonly) UIImage * image;                                     //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) unsigned imageFlag;                                  //@synthesize imageFlag=_imageFlag - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                                    //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSObject*<NSCopying> logicalIdentifier;              //@synthesize logicalIdentifier=_logicalIdentifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)type;
-(NSObject*<NSCopying>)logicalIdentifier;
-(id)initWithImage:(id)arg1 imageFlag:(unsigned)arg2 url:(id)arg3 logicalIdentifier:(id)arg4 ;
-(unsigned)imageFlag;
-(NSString *)description;
-(NSURL *)url;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIImage *)image;
@end

