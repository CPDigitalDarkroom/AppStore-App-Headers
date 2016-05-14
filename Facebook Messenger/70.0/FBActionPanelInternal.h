/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:56 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>

@class NSArray;

@interface FBActionPanelInternal : UIView {

	char _hasSeparator;
	NSArray* _buttons;
	float _buttonWidth;

}

@property (nonatomic,copy) NSArray * buttons;                //@synthesize buttons=_buttons - In the implementation block
@property (assign,nonatomic) char hasSeparator;              //@synthesize hasSeparator=_hasSeparator - In the implementation block
@property (assign,nonatomic) float buttonWidth;              //@synthesize buttonWidth=_buttonWidth - In the implementation block
-(id)initWithFrame:(CGRect)arg1 buttons:(id)arg2 buttonWidth:(float)arg3 hasSeparator:(char)arg4 ;
-(void)setButtonWidth:(float)arg1 ;
-(unsigned)_numVisibleButtons;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(float)buttonWidth;
-(NSArray *)buttons;
-(char)hasSeparator;
-(void)setHasSeparator:(char)arg1 ;
-(void)setButtons:(NSArray *)arg1 ;
@end

