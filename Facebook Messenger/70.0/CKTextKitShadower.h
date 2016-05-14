/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:03 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
@class UIColor;

@interface CKTextKitShadower : NSObject {

	UIEdgeInsets _calculatedShadowPadding;
	UIColor* _shadowColor;
	float _shadowOpacity;
	float _shadowRadius;
	CGSize _shadowOffset;

}

@property (nonatomic,readonly) CGSize shadowOffset;                //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (nonatomic,readonly) UIColor * shadowColor;              //@synthesize shadowColor=_shadowColor - In the implementation block
@property (nonatomic,readonly) float shadowOpacity;                //@synthesize shadowOpacity=_shadowOpacity - In the implementation block
@property (nonatomic,readonly) float shadowRadius;                 //@synthesize shadowRadius=_shadowRadius - In the implementation block
-(id)initWithShadowOffset:(CGSize)arg1 shadowColor:(id)arg2 shadowOpacity:(float)arg3 shadowRadius:(float)arg4 ;
-(void)setShadowInContext:(CGContextRef)arg1 ;
-(char)_shouldDrawShadow;
-(CGSize)insetSizeWithConstrainedSize:(CGSize)arg1 ;
-(CGSize)outsetSizeWithInsetSize:(CGSize)arg1 ;
-(CGRect)insetRectWithConstrainedRect:(CGRect)arg1 ;
-(CGPoint)offsetPointWithInternalPoint:(CGPoint)arg1 ;
-(CGRect)outsetRectWithInsetRect:(CGRect)arg1 ;
-(CGRect)offsetRectWithInternalRect:(CGRect)arg1 ;
-(CGPoint)offsetPointWithExternalPoint:(CGPoint)arg1 ;
-(float)shadowOpacity;
-(CGSize)shadowOffset;
-(UIColor *)shadowColor;
-(float)shadowRadius;
-(UIEdgeInsets)shadowPadding;
@end

