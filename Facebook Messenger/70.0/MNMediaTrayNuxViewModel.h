/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:57 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface MNMediaTrayNuxViewModel : FBValueObject <NSCopying> {

	NSArray* _images;
	NSString* _contentText;
	NSString* _actionText;

}

@property (nonatomic,copy,readonly) NSArray * images;                    //@synthesize images=_images - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentText;              //@synthesize contentText=_contentText - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionText;               //@synthesize actionText=_actionText - In the implementation block
-(NSString *)actionText;
-(id)initWithImages:(id)arg1 contentText:(id)arg2 actionText:(id)arg3 ;
-(NSString *)contentText;
-(NSArray *)images;
@end

