/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:02 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/CKComponent.h>

@class CKComponent;

@interface CKInsetComponent : CKComponent {

	UIEdgeInsets _insets;
	CKComponent* _component;

}
+(id)newWithView:(const CKComponentViewConfiguration*)arg1 size:(const CKComponentSize*)arg2 ;
+(id)newWithInsets:(UIEdgeInsets)arg1 component:(id)arg2 ;
+(id)newWithView:(const CKComponentViewConfiguration*)arg1 insets:(UIEdgeInsets)arg2 component:(id)arg3 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 restrictedToSize:(const CKComponentSize*)arg2 relativeToParentSize:(CGSize)arg3 ;
@end

