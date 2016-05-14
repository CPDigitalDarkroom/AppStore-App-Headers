/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:56 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIButton.h>

@class NSString;

@interface FBDismissalDoneButton : UIButton {

	unsigned _buttonStyle;
	NSString* _title;
	UIEdgeInsets _backgroundEdgeInsets;

}

@property (assign,nonatomic) UIEdgeInsets backgroundEdgeInsets;              //@synthesize backgroundEdgeInsets=_backgroundEdgeInsets - In the implementation block
@property (nonatomic,readonly) unsigned buttonStyle;                         //@synthesize buttonStyle=_buttonStyle - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                        //@synthesize title=_title - In the implementation block
+(id)accessibilityIdentifier;
-(id)initWithFrame:(CGRect)arg1 buttonStyle:(unsigned)arg2 title:(id)arg3 ;
-(void)setBackgroundEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)_defaultConfig;
-(id)initWithFrame:(CGRect)arg1 buttonStyle:(unsigned)arg2 title:(id)arg3 color:(id)arg4 configuration:(id)arg5 ;
-(UIEdgeInsets)backgroundEdgeInsets;
-(id)initWithFrame:(CGRect)arg1 buttonStyle:(unsigned)arg2 title:(id)arg3 color:(id)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(CGRect)backgroundRectForBounds:(CGRect)arg1 ;
-(unsigned)buttonStyle;
@end

