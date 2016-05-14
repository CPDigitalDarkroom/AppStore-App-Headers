/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:20 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBExperimentContext.h>

@interface FBSouvenirsAutoCurationExperimentContext : FBExperimentContext {

	char _blurryPhotoRemovalEnabled;
	char _darkPhotoRemovalEnabled;
	float _blurryPhotoDetectorThreshold;
	int _blurryPhotoDetectorResolution;
	float _blurryPhotoDetectorCenterCrop;
	float _blurryPhotoDetectorCachingEnabled;
	float _darkPhotoRemovalThreshold;

}

@property (nonatomic,readonly) char blurryPhotoRemovalEnabled;                       //@synthesize blurryPhotoRemovalEnabled=_blurryPhotoRemovalEnabled - In the implementation block
@property (nonatomic,readonly) float blurryPhotoDetectorThreshold;                   //@synthesize blurryPhotoDetectorThreshold=_blurryPhotoDetectorThreshold - In the implementation block
@property (nonatomic,readonly) int blurryPhotoDetectorResolution;                    //@synthesize blurryPhotoDetectorResolution=_blurryPhotoDetectorResolution - In the implementation block
@property (nonatomic,readonly) float blurryPhotoDetectorCenterCrop;                  //@synthesize blurryPhotoDetectorCenterCrop=_blurryPhotoDetectorCenterCrop - In the implementation block
@property (nonatomic,readonly) float blurryPhotoDetectorCachingEnabled;              //@synthesize blurryPhotoDetectorCachingEnabled=_blurryPhotoDetectorCachingEnabled - In the implementation block
@property (nonatomic,readonly) char darkPhotoRemovalEnabled;                         //@synthesize darkPhotoRemovalEnabled=_darkPhotoRemovalEnabled - In the implementation block
@property (nonatomic,readonly) float darkPhotoRemovalThreshold;                      //@synthesize darkPhotoRemovalThreshold=_darkPhotoRemovalThreshold - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(char)blurryPhotoRemovalEnabled;
-(char)darkPhotoRemovalEnabled;
-(float)blurryPhotoDetectorThreshold;
-(float)darkPhotoRemovalThreshold;
-(int)blurryPhotoDetectorResolution;
-(float)blurryPhotoDetectorCenterCrop;
-(float)blurryPhotoDetectorCachingEnabled;
@end

