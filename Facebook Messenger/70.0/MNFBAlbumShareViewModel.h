/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSURL;

@interface MNFBAlbumShareViewModel : FBValueObject <NSCopying> {

	NSString* _title;
	NSString* _source;
	NSString* _albumDescription;
	NSArray* _images;
	NSURL* _href;

}

@property (nonatomic,copy,readonly) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * source;                        //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSString * albumDescription;              //@synthesize albumDescription=_albumDescription - In the implementation block
@property (nonatomic,copy,readonly) NSArray * images;                         //@synthesize images=_images - In the implementation block
@property (nonatomic,copy,readonly) NSURL * href;                             //@synthesize href=_href - In the implementation block
-(NSString *)albumDescription;
-(id)initWithTitle:(id)arg1 source:(id)arg2 albumDescription:(id)arg3 images:(id)arg4 href:(id)arg5 ;
-(NSString *)title;
-(NSArray *)images;
-(NSString *)source;
-(NSURL *)href;
@end

