/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBEncoderConfigBuilder : NSObject {

	unsigned _rfConstant;
	NSString* _preset;
	NSString* _profile;

}
+(id)encoderConfigFromExistingEncoderConfig:(id)arg1 ;
+(id)encoderConfig;
-(id)withRfConstant:(unsigned)arg1 ;
-(id)withPreset:(id)arg1 ;
-(id)withProfile:(id)arg1 ;
-(id)build;
@end

