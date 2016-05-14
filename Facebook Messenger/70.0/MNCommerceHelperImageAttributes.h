/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface MNCommerceHelperImageAttributes : FBValueObject <NSCopying> {

	float _cornerRadius;
	float _strokeWidth;
	UIColor* _strokeColor;

}

@property (nonatomic,readonly) float cornerRadius;                      //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,readonly) float strokeWidth;                       //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (nonatomic,copy,readonly) UIColor * strokeColor;              //@synthesize strokeColor=_strokeColor - In the implementation block
-(id)initWithCornerRadius:(float)arg1 strokeWidth:(float)arg2 strokeColor:(id)arg3 ;
-(float)cornerRadius;
-(UIColor *)strokeColor;
-(float)strokeWidth;
@end

