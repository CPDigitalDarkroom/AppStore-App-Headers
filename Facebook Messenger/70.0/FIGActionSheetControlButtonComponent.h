/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/CKCompositeComponent.h>

@class FIGActionSheetButtonItem;

@interface FIGActionSheetControlButtonComponent : CKCompositeComponent {

	FIGActionSheetButtonItem* _actionSheetButtonItem;
	SEL _action;
	char _on;

}

@property (getter=isOn,nonatomic,readonly) char on;              //@synthesize on=_on - In the implementation block
+(id)newWithActionItem:(id)arg1 action:(SEL)arg2 metrics:(id)arg3 ;
-(void)_checkmarkButtonTapped:(id)arg1 ;
-(void)_updateState;
-(char)isOn;
-(void)_switchValueChanged:(id)arg1 ;
@end

