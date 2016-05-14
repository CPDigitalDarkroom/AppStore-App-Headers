/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNPaymentsComposerViewModel : FBValueObject <NSCopying> {

	char _shouldShowPencilImage;
	char _shouldShowTopSeparator;
	NSString* _leftText;
	NSString* _placeholder;

}

@property (nonatomic,copy,readonly) NSString * leftText;                 //@synthesize leftText=_leftText - In the implementation block
@property (nonatomic,copy,readonly) NSString * placeholder;              //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,readonly) char shouldShowPencilImage;               //@synthesize shouldShowPencilImage=_shouldShowPencilImage - In the implementation block
@property (nonatomic,readonly) char shouldShowTopSeparator;              //@synthesize shouldShowTopSeparator=_shouldShowTopSeparator - In the implementation block
-(char)shouldShowTopSeparator;
-(char)shouldShowPencilImage;
-(id)initWithLeftText:(id)arg1 placeholder:(id)arg2 shouldShowPencilImage:(char)arg3 shouldShowTopSeparator:(char)arg4 ;
-(NSString *)placeholder;
-(NSString *)leftText;
@end

