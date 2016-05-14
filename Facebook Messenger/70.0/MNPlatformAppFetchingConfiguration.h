/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNPlatformAppFetchingConfiguration : FBValueObject <NSCopying> {

	unsigned _limit;
	float _iconSize;
	unsigned _maxCachedResponseAgeInSeconds;
	CGSize _promotionBannerSize;

}

@property (nonatomic,readonly) unsigned limit;                                      //@synthesize limit=_limit - In the implementation block
@property (nonatomic,readonly) float iconSize;                                      //@synthesize iconSize=_iconSize - In the implementation block
@property (nonatomic,readonly) CGSize promotionBannerSize;                          //@synthesize promotionBannerSize=_promotionBannerSize - In the implementation block
@property (nonatomic,readonly) unsigned maxCachedResponseAgeInSeconds;              //@synthesize maxCachedResponseAgeInSeconds=_maxCachedResponseAgeInSeconds - In the implementation block
-(id)initWithLimit:(unsigned)arg1 iconSize:(float)arg2 promotionBannerSize:(CGSize)arg3 maxCachedResponseAgeInSeconds:(unsigned)arg4 ;
-(CGSize)promotionBannerSize;
-(unsigned)maxCachedResponseAgeInSeconds;
-(unsigned)limit;
-(float)iconSize;
@end

