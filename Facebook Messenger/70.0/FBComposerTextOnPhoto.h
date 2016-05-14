/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:17 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIFont, UIColor;

@interface FBComposerTextOnPhoto : FBValueObject <NSCopying> {

	NSString* _text;
	UIFont* _font;
	UIColor* _color;
	CGSize _originalTextViewSize;
	CGRect _originalBackingFrame;

}

@property (nonatomic,copy,readonly) NSString * text;                     //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) UIFont * font;                       //@synthesize font=_font - In the implementation block
@property (nonatomic,copy,readonly) UIColor * color;                     //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) CGSize originalTextViewSize;              //@synthesize originalTextViewSize=_originalTextViewSize - In the implementation block
@property (nonatomic,readonly) CGRect originalBackingFrame;              //@synthesize originalBackingFrame=_originalBackingFrame - In the implementation block
-(CGSize)originalTextViewSize;
-(CGRect)originalBackingFrame;
-(id)initWithText:(id)arg1 font:(id)arg2 color:(id)arg3 originalTextViewSize:(CGSize)arg4 originalBackingFrame:(CGRect)arg5 ;
-(NSString *)text;
-(UIFont *)font;
-(UIColor *)color;
@end

