/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBIntentTarget.h>

@class NSURL, FBMemStoryAttachment, FBMemLinkTargetStoreData;

@interface FBThirdPartyProductIntentTarget : FBIntentTarget {

	NSURL* _targetURL;

}

@property (nonatomic,readonly) FBMemStoryAttachment * attachment; 
@property (nonatomic,readonly) FBMemLinkTargetStoreData * storeData; 
@property (nonatomic,copy,readonly) NSURL * targetURL;                            //@synthesize targetURL=_targetURL - In the implementation block
+(id)thirdPartyProductTargetWithNativeURL:(id)arg1 ;
+(id)thirdPartyProductTargetWithNativeURL:(id)arg1 attachment:(id)arg2 storeData:(id)arg3 ;
-(id)fallbackURLs;
-(FBMemLinkTargetStoreData *)storeData;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(FBMemStoryAttachment *)attachment;
-(NSURL *)targetURL;
@end

