/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:13 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/CKCompositeComponent.h>

@protocol FBIntentHandler;
@class FBMemExternalUrl, NSString;

@interface FBPulsePivotComponent : CKCompositeComponent {

	id<FBIntentHandler> _intentHandler;
	FBMemExternalUrl* _externalUrl;
	NSString* _entryPointType;

}

@property (nonatomic,readonly) id<FBIntentHandler> intentHandler;              //@synthesize intentHandler=_intentHandler - In the implementation block
@property (nonatomic,readonly) FBMemExternalUrl * externalUrl;                 //@synthesize externalUrl=_externalUrl - In the implementation block
@property (nonatomic,copy,readonly) NSString * entryPointType;                 //@synthesize entryPointType=_entryPointType - In the implementation block
+(id)newWithImageUrlString:(id)arg1 imageScencePath:(id)arg2 imageDownloader:(id)arg3 externalUrl:(id)arg4 intentHandler:(id)arg5 style:(unsigned)arg6 entryPointType:(id)arg7 ;
-(id<FBIntentHandler>)intentHandler;
-(NSString *)entryPointType;
-(FBMemExternalUrl *)externalUrl;
@end

