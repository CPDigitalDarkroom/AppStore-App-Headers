/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:40 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor;

@interface MNPermissionsViewConfiguration : FBValueObject <NSCopying> {

	char _showDismissButton;
	NSString* _iconName;
	NSString* _title;
	NSString* _descriptionText;
	NSString* _buttonTitle;
	UIColor* _backgroundColor;
	UIColor* _textColor;
	UIColor* _buttonColor;

}

@property (nonatomic,copy,readonly) NSString * iconName;                     //@synthesize iconName=_iconName - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * descriptionText;              //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy,readonly) NSString * buttonTitle;                  //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (nonatomic,copy,readonly) UIColor * backgroundColor;               //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * textColor;                     //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * buttonColor;                   //@synthesize buttonColor=_buttonColor - In the implementation block
@property (nonatomic,readonly) char showDismissButton;                       //@synthesize showDismissButton=_showDismissButton - In the implementation block
-(id)initWithIconName:(id)arg1 title:(id)arg2 descriptionText:(id)arg3 buttonTitle:(id)arg4 backgroundColor:(id)arg5 textColor:(id)arg6 buttonColor:(id)arg7 showDismissButton:(char)arg8 ;
-(char)showDismissButton;
-(NSString *)iconName;
-(UIColor *)backgroundColor;
-(NSString *)title;
-(UIColor *)textColor;
-(NSString *)buttonTitle;
-(NSString *)descriptionText;
-(UIColor *)buttonColor;
@end

