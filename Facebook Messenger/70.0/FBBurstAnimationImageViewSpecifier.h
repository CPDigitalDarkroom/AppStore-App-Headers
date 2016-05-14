/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:10 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWebImageDownloaderFactoryProtocol, FBWebImageLogger;
@class NSArray, FBBurstAnimationImageViewKenBurnsConfig;

@interface FBBurstAnimationImageViewSpecifier : NSObject {

	char _startAnimating;
	NSArray* _imageSpecifiers;
	id<FBWebImageDownloaderFactoryProtocol> _downloaderFactory;
	id<FBWebImageLogger> _logger;
	FBBurstAnimationImageViewKenBurnsConfig* _kenBurnsConfig;

}

@property (nonatomic,copy,readonly) NSArray * imageSpecifiers;                                         //@synthesize imageSpecifiers=_imageSpecifiers - In the implementation block
@property (nonatomic,readonly) id<FBWebImageDownloaderFactoryProtocol> downloaderFactory;              //@synthesize downloaderFactory=_downloaderFactory - In the implementation block
@property (nonatomic,readonly) id<FBWebImageLogger> logger;                                            //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) char startAnimating;                                                    //@synthesize startAnimating=_startAnimating - In the implementation block
@property (nonatomic,readonly) FBBurstAnimationImageViewKenBurnsConfig * kenBurnsConfig;               //@synthesize kenBurnsConfig=_kenBurnsConfig - In the implementation block
-(id<FBWebImageDownloaderFactoryProtocol>)downloaderFactory;
-(id)initWithImageSpecifiers:(id)arg1 downloaderFactory:(id)arg2 logger:(id)arg3 startAnimating:(char)arg4 kenBurnsConfig:(id)arg5 ;
-(NSArray *)imageSpecifiers;
-(FBBurstAnimationImageViewKenBurnsConfig *)kenBurnsConfig;
-(id<FBWebImageLogger>)logger;
-(char)startAnimating;
@end

