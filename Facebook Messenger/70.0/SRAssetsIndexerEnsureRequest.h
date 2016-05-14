/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:47 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SRPerforming;
@class NSDate;

@interface SRAssetsIndexerEnsureRequest : NSObject {

	NSDate* _assetDateCutOff;
	/*^block*/id _callback;
	id<SRPerforming> _performer;

}

@property (nonatomic,copy) NSDate * assetDateCutOff;                  //@synthesize assetDateCutOff=_assetDateCutOff - In the implementation block
@property (nonatomic,copy) id callback;                               //@synthesize callback=_callback - In the implementation block
@property (nonatomic,retain) id<SRPerforming> performer;              //@synthesize performer=_performer - In the implementation block
-(void)setPerformer:(id<SRPerforming>)arg1 ;
-(id<SRPerforming>)performer;
-(void)setAssetDateCutOff:(NSDate *)arg1 ;
-(NSDate *)assetDateCutOff;
-(id)callback;
-(void)setCallback:(id)arg1 ;
@end

