/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:56 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNTwitterMediaUploadConfiguration.h>

@protocol TFNTwitterMediaUploadConfiguration <NSObject>
@property (getter=isPhotosSegmentedUploadEnabled,nonatomic,readonly) char photosSegmentedUploadEnabled; 
@property (getter=isPhotosSegmentedUploadSegmentSizeBackoffPolicyEnabled,nonatomic,readonly) char photosSegmentedUploadSegmentSizeBackoffPolicyEnabled; 
@property (nonatomic,readonly) char photosSegmentedUploadDisabledForDirectMessage; 
@property (nonatomic,readonly) int photosSegmentedUploadSegmentSizeForWiFi; 
@property (nonatomic,readonly) int photosSegmentedUploadSegmentSizeForCellular; 
@property (nonatomic,readonly) int photosSegmentedUploadMinimumSegmentSize; 
@property (nonatomic,readonly) int photosSegmentedUploadMaxiumRetryPerRequest; 
@property (nonatomic,readonly) float photoHighBandwidthUploadResolution; 
@property (nonatomic,readonly) float photoMediumBandwidthUploadResolution; 
@property (nonatomic,readonly) float photoLowBandwidthUploadResolution; 
@property (getter=isVideosSegmentedUploadSegmentSizeBackoffPolicyEnabled,nonatomic,readonly) char videosSegmentedUploadSegmentSizeBackoffPolicyEnabled; 
@property (nonatomic,readonly) int videosSegmentedUploadSegmentSizeForWiFi; 
@property (nonatomic,readonly) int videosSegmentedUploadSegmentSizeForCellular; 
@property (nonatomic,readonly) int videosSegmentedUploadMinimumSegmentSize; 
@property (nonatomic,readonly) int videosSegmentedUploadMaxiumRetryPerRequest; 
@property (nonatomic,readonly) int mediaUploadGroupPolicy; 
@property (getter=isMediaAsyncUploadGifEnabled,nonatomic,readonly) char mediaAsyncUploadGifEnabled; 
@property (getter=isMediaAsyncUploadVideoEnabled,nonatomic,readonly) char mediaAsyncUploadVideoEnabled; 
@property (getter=isMediaAsyncUploadURLEnabled,nonatomic,readonly) char mediaAsyncUploadURLEnabled; 
@property (nonatomic,readonly) float mediaAsyncUploadMaxGifSize; 
@required
-(char)isMediaAsyncUploadGifEnabled;
-(float)mediaAsyncUploadMaxGifSize;
-(float)photoHighBandwidthUploadResolution;
-(float)photoMediumBandwidthUploadResolution;
-(float)photoLowBandwidthUploadResolution;
-(char)isPhotosSegmentedUploadEnabled;
-(char)isPhotosSegmentedUploadSegmentSizeBackoffPolicyEnabled;
-(char)photosSegmentedUploadDisabledForDirectMessage;
-(int)photosSegmentedUploadSegmentSizeForWiFi;
-(int)photosSegmentedUploadSegmentSizeForCellular;
-(int)photosSegmentedUploadMinimumSegmentSize;
-(int)photosSegmentedUploadMaxiumRetryPerRequest;
-(char)isVideosSegmentedUploadSegmentSizeBackoffPolicyEnabled;
-(int)videosSegmentedUploadSegmentSizeForWiFi;
-(int)videosSegmentedUploadSegmentSizeForCellular;
-(int)videosSegmentedUploadMinimumSegmentSize;
-(int)videosSegmentedUploadMaxiumRetryPerRequest;
-(int)mediaUploadGroupPolicy;
-(char)isMediaAsyncUploadVideoEnabled;
-(char)isMediaAsyncUploadURLEnabled;

@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TFNTwitterMediaUploadConfiguration : NSObject <TFNTwitterMediaUploadConfiguration, NSCopying> {

	char _photosSegmentedUploadEnabled;
	char _photosSegmentedUploadSegmentSizeBackoffPolicyEnabled;
	char _photosSegmentedUploadDisabledForDirectMessage;
	char _videosSegmentedUploadSegmentSizeBackoffPolicyEnabled;
	char _mediaAsyncUploadGifEnabled;
	char _mediaAsyncUploadVideoEnabled;
	char _mediaAsyncUploadURLEnabled;
	int _photosSegmentedUploadSegmentSizeForWiFi;
	int _photosSegmentedUploadSegmentSizeForCellular;
	int _photosSegmentedUploadMinimumSegmentSize;
	int _photosSegmentedUploadMaxiumRetryPerRequest;
	float _photoHighBandwidthUploadResolution;
	float _photoMediumBandwidthUploadResolution;
	float _photoLowBandwidthUploadResolution;
	int _videosSegmentedUploadSegmentSizeForWiFi;
	int _videosSegmentedUploadSegmentSizeForCellular;
	int _videosSegmentedUploadMinimumSegmentSize;
	int _videosSegmentedUploadMaxiumRetryPerRequest;
	int _mediaUploadGroupPolicy;
	float _mediaAsyncUploadMaxGifSize;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isPhotosSegmentedUploadEnabled,nonatomic,readonly) char photosSegmentedUploadEnabled;                                                              //@synthesize photosSegmentedUploadEnabled=_photosSegmentedUploadEnabled - In the implementation block
@property (getter=isPhotosSegmentedUploadSegmentSizeBackoffPolicyEnabled,nonatomic,readonly) char photosSegmentedUploadSegmentSizeBackoffPolicyEnabled;              //@synthesize photosSegmentedUploadSegmentSizeBackoffPolicyEnabled=_photosSegmentedUploadSegmentSizeBackoffPolicyEnabled - In the implementation block
@property (nonatomic,readonly) char photosSegmentedUploadDisabledForDirectMessage;                                                                                   //@synthesize photosSegmentedUploadDisabledForDirectMessage=_photosSegmentedUploadDisabledForDirectMessage - In the implementation block
@property (nonatomic,readonly) int photosSegmentedUploadSegmentSizeForWiFi;                                                                                          //@synthesize photosSegmentedUploadSegmentSizeForWiFi=_photosSegmentedUploadSegmentSizeForWiFi - In the implementation block
@property (nonatomic,readonly) int photosSegmentedUploadSegmentSizeForCellular;                                                                                      //@synthesize photosSegmentedUploadSegmentSizeForCellular=_photosSegmentedUploadSegmentSizeForCellular - In the implementation block
@property (nonatomic,readonly) int photosSegmentedUploadMinimumSegmentSize;                                                                                          //@synthesize photosSegmentedUploadMinimumSegmentSize=_photosSegmentedUploadMinimumSegmentSize - In the implementation block
@property (nonatomic,readonly) int photosSegmentedUploadMaxiumRetryPerRequest;                                                                                       //@synthesize photosSegmentedUploadMaxiumRetryPerRequest=_photosSegmentedUploadMaxiumRetryPerRequest - In the implementation block
@property (nonatomic,readonly) float photoHighBandwidthUploadResolution;                                                                                             //@synthesize photoHighBandwidthUploadResolution=_photoHighBandwidthUploadResolution - In the implementation block
@property (nonatomic,readonly) float photoMediumBandwidthUploadResolution;                                                                                           //@synthesize photoMediumBandwidthUploadResolution=_photoMediumBandwidthUploadResolution - In the implementation block
@property (nonatomic,readonly) float photoLowBandwidthUploadResolution;                                                                                              //@synthesize photoLowBandwidthUploadResolution=_photoLowBandwidthUploadResolution - In the implementation block
@property (getter=isVideosSegmentedUploadSegmentSizeBackoffPolicyEnabled,nonatomic,readonly) char videosSegmentedUploadSegmentSizeBackoffPolicyEnabled;              //@synthesize videosSegmentedUploadSegmentSizeBackoffPolicyEnabled=_videosSegmentedUploadSegmentSizeBackoffPolicyEnabled - In the implementation block
@property (nonatomic,readonly) int videosSegmentedUploadSegmentSizeForWiFi;                                                                                          //@synthesize videosSegmentedUploadSegmentSizeForWiFi=_videosSegmentedUploadSegmentSizeForWiFi - In the implementation block
@property (nonatomic,readonly) int videosSegmentedUploadSegmentSizeForCellular;                                                                                      //@synthesize videosSegmentedUploadSegmentSizeForCellular=_videosSegmentedUploadSegmentSizeForCellular - In the implementation block
@property (nonatomic,readonly) int videosSegmentedUploadMinimumSegmentSize;                                                                                          //@synthesize videosSegmentedUploadMinimumSegmentSize=_videosSegmentedUploadMinimumSegmentSize - In the implementation block
@property (nonatomic,readonly) int videosSegmentedUploadMaxiumRetryPerRequest;                                                                                       //@synthesize videosSegmentedUploadMaxiumRetryPerRequest=_videosSegmentedUploadMaxiumRetryPerRequest - In the implementation block
@property (nonatomic,readonly) int mediaUploadGroupPolicy;                                                                                                           //@synthesize mediaUploadGroupPolicy=_mediaUploadGroupPolicy - In the implementation block
@property (getter=isMediaAsyncUploadGifEnabled,nonatomic,readonly) char mediaAsyncUploadGifEnabled;                                                                  //@synthesize mediaAsyncUploadGifEnabled=_mediaAsyncUploadGifEnabled - In the implementation block
@property (getter=isMediaAsyncUploadVideoEnabled,nonatomic,readonly) char mediaAsyncUploadVideoEnabled;                                                              //@synthesize mediaAsyncUploadVideoEnabled=_mediaAsyncUploadVideoEnabled - In the implementation block
@property (getter=isMediaAsyncUploadURLEnabled,nonatomic,readonly) char mediaAsyncUploadURLEnabled;                                                                  //@synthesize mediaAsyncUploadURLEnabled=_mediaAsyncUploadURLEnabled - In the implementation block
@property (nonatomic,readonly) float mediaAsyncUploadMaxGifSize;                                                                                                     //@synthesize mediaAsyncUploadMaxGifSize=_mediaAsyncUploadMaxGifSize - In the implementation block
+(id)configurationForAccount:(id)arg1 ;
+(void)setConfigurationProvider:(id)arg1 ;
-(char)isMediaAsyncUploadGifEnabled;
-(float)mediaAsyncUploadMaxGifSize;
-(float)photoHighBandwidthUploadResolution;
-(float)photoMediumBandwidthUploadResolution;
-(float)photoLowBandwidthUploadResolution;
-(float)t1_maxImageSizeForQuality:(int)arg1 ;
-(char)isPhotosSegmentedUploadEnabled;
-(char)isPhotosSegmentedUploadSegmentSizeBackoffPolicyEnabled;
-(char)photosSegmentedUploadDisabledForDirectMessage;
-(int)photosSegmentedUploadSegmentSizeForWiFi;
-(int)photosSegmentedUploadSegmentSizeForCellular;
-(int)photosSegmentedUploadMinimumSegmentSize;
-(int)photosSegmentedUploadMaxiumRetryPerRequest;
-(char)isVideosSegmentedUploadSegmentSizeBackoffPolicyEnabled;
-(int)videosSegmentedUploadSegmentSizeForWiFi;
-(int)videosSegmentedUploadSegmentSizeForCellular;
-(int)videosSegmentedUploadMinimumSegmentSize;
-(int)videosSegmentedUploadMaxiumRetryPerRequest;
-(int)mediaUploadGroupPolicy;
-(char)isMediaAsyncUploadVideoEnabled;
-(char)isMediaAsyncUploadURLEnabled;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
@end

