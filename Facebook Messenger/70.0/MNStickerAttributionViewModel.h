/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:58 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface MNStickerAttributionViewModel : FBValueObject <NSCopying> {

	UIColor* _actionButtonColor;
	unsigned long long _stickerId;

}

@property (nonatomic,readonly) unsigned long long stickerId;                  //@synthesize stickerId=_stickerId - In the implementation block
@property (nonatomic,copy,readonly) UIColor * actionButtonColor;              //@synthesize actionButtonColor=_actionButtonColor - In the implementation block
-(unsigned long long)stickerId;
-(UIColor *)actionButtonColor;
-(id)initWithStickerId:(unsigned long long)arg1 actionButtonColor:(id)arg2 ;
@end

